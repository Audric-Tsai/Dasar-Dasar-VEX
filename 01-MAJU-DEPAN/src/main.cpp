/*----------------------------------------------------------------------------
  DASAR-DASAR VEX — Materi 01
  MAJU KE DEPAN

  Di materi ini kamu belajar tiga cara berbeda buat bikin robot maju:
    1. Berdasarkan WAKTU   — gampang, tapi nggak akurat
    2. Berdasarkan JARAK   — akurat, pakai encoder bawaan motor
    3. Dengan PERCEPATAN   — biar robot nggak nyentak pas start

  Robot: 4 motor V5 (11W), cartridge biru 600 RPM
    Kiri  : PORT1, PORT2
    Kanan : PORT9, PORT10

  Semua ukuran di file ini pakai INCI. Alasannya: seluruh dunia VEX pakai
  inci. Ukuran roda, ukuran lubang C-channel, ukuran lapangan — semuanya.
  Kalau kamu ngitung pakai cm, kamu bakal konversi bolak-balik terus dan
  cepat atau lambat salah.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

// ===========================================================================
// BAGIAN 1 — MENDAFTARKAN ALAT
// ===========================================================================

brain Brain;
competition Competition;

/*
  Tiap motor butuh tiga informasi:

    motor(PORT, cartridge, dibalik?)

  PORT      → colokan fisik di Brain. Harus cocok sama kabel aslinya.
  cartridge → warna gear di dalam motor:
                ratio36_1 = merah   (100 RPM, kuat)
                ratio18_1 = hijau   (200 RPM, standar)
                ratio6_1  = biru    (600 RPM, cepat)  ← punya kita
  dibalik?  → true kalau motor harus muter kebalikan

  Kenapa motor kanan di-set true?

  Karena motor kiri dan kanan dipasang saling berhadapan di robot. Kalau
  dua-duanya kamu suruh muter searah jarum jam, robot bukan maju — malah
  muter di tempat. Jadi salah satu sisi harus dibalik.

  Mana yang dibalik tergantung cara kamu masang motornya. Kalau nanti robot
  kamu malah mundur, tinggal tukar: kiri jadi true, kanan jadi false.
*/

motor kiriDepan     = motor(PORT1,  ratio6_1, false);
motor kiriBelakang  = motor(PORT2,  ratio6_1, false);
motor kananDepan    = motor(PORT9,  ratio6_1, true);
motor kananBelakang = motor(PORT10, ratio6_1, true);

/*
  motor_group bikin dua motor bisa diperintah bareng sebagai satu benda.

  Tanpa ini, tiap mau maju kamu harus nulis empat baris. Dengan ini cukup
  dua. Makin banyak motor, makin kerasa bedanya.
*/

motor_group kiri(kiriDepan, kiriBelakang);
motor_group kanan(kananDepan, kananBelakang);

// ===========================================================================
// BAGIAN 2 — UKURAN ROBOT
// ===========================================================================

/*
  Angka-angka ini yang bikin fungsi majuJarak() bisa ngitung.
  WAJIB kamu sesuaikan sama robot kamu sendiri, atau hasilnya ngaco.

  Ukuran roda VEX yang umum, tinggal pilih:
    2.75 → roda kecil, robot lincah
    3.25 → paling sering dipakai di drivetrain kompetisi
    4.00 → roda besar, jarak per putaran paling jauh
*/

const double DIAMETER_RODA_INCI = 4.0;  // Ganti sesuai roda kamu.
const double RASIO_GEAR_LUAR    = 1.0;  // 1.0 = motor langsung ke roda

/*
  CATATAN soal 600 RPM:

  Cartridge biru itu cepat banget. Kalau langsung nyambung ke roda tanpa gear
  tambahan, robot kamu bakal susah dikontrol dan gampang selip.

  Tim kompetitif biasanya nurunin lagi pakai gear luar, misalnya 36:60. Kalau
  robot kamu begitu, ubah RASIO_GEAR_LUAR jadi 60.0 / 36.0.
*/

// ===========================================================================
// BAGIAN 3 — CARA PERTAMA: MAJU BERDASARKAN WAKTU
// ===========================================================================

/*
  Ini cara paling gampang. Suruh motor muter, tunggu sebentar, terus stop.

  Kelemahannya: hasilnya nggak konsisten. Baterai penuh bikin robot lari
  lebih jauh daripada baterai lemah, padahal kodenya sama persis. Lantai
  licin juga ngaruh.

  Buat latihan awal ini oke. Buat autonomous kompetisi, jangan.
*/

void majuWaktu(int durasiMs, int kecepatanPersen) {
  kiri.spin(forward, kecepatanPersen, percent);
  kanan.spin(forward, kecepatanPersen, percent);

  wait(durasiMs, msec);

  // brake = berhenti dan nahan posisi
  // coast = berhenti tapi masih meluncur dikit
  kiri.stop(brake);
  kanan.stop(brake);
}

// ===========================================================================
// BAGIAN 4 — CARA KEDUA: MAJU BERDASARKAN JARAK
// ===========================================================================

/*
  Ini cara yang bener.

  Tiap motor V5 punya encoder di dalamnya — sensor yang ngitung sudah berapa
  derajat motor muter. Jadi kamu nggak perlu beli sensor tambahan.

  Logikanya:
    1. Satu putaran roda = keliling roda (inci)
    2. Jarak yang kamu mau  ÷  keliling  =  berapa putaran
    3. Putaran × 360        =  berapa derajat motor harus muter

  Karena robot ngitung putaran sendiri, baterai lemah cuma bikin dia lebih
  pelan — bukan lebih pendek.

  Contoh, roda 4 inci:
    Keliling = 4 × 3,14159 = 12,57 inci
    Mau maju 24 inci  →  24 ÷ 12,57 = 1,91 putaran
    1,91 × 360        =  687 derajat
*/

double jarakKeDerajat(double jarakInci) {
  double kelilingInci = DIAMETER_RODA_INCI * 3.14159;

  return (jarakInci / kelilingInci) * 360.0 * RASIO_GEAR_LUAR;
}

void majuJarak(double jarakInci, int kecepatanPersen) {
  double derajat = jarakKeDerajat(jarakInci);

  // Reset encoder ke nol dulu, biar hitungannya mulai dari awal
  kiri.setPosition(0, degrees);
  kanan.setPosition(0, degrees);

  /*
    Perhatikan false dan true di akhir:

    false = "jalan, tapi jangan tungguin, lanjut ke baris berikutnya"
    true  = "jalan, dan tunggu sampai selesai"

    Sisi kiri pakai false supaya kanan bisa langsung ikut jalan. Kalau
    dua-duanya true, kiri jalan sendirian sampai selesai baru kanan mulai —
    robot kamu bakal muter, bukan maju.
  */
  kiri.spinFor(forward, derajat, degrees, kecepatanPersen, velocityUnits::pct, false);
  kanan.spinFor(forward, derajat, degrees, kecepatanPersen, velocityUnits::pct, true);
}

// ===========================================================================
// BAGIAN 5 — CARA KETIGA: MAJU DENGAN PERCEPATAN
// ===========================================================================

/*
  Kalau kamu langsung kasih 100% dari diam, roda bakal selip dan robot
  nyentak. Jarak yang ditempuh jadi meleset.

  Solusinya: naikin kecepatan pelan-pelan. Ini namanya ramp.

  Ini juga contoh pertama kamu pakai loop buat ngontrol motor — konsep yang
  bakal kepake terus nanti.
*/

void majuHalus(int durasiMs, int kecepatanTarget) {
  int langkah    = 20;                    // naik tiap 20 ms
  int totalNaik  = 500;                   // butuh 500 ms buat sampai target
  int jumlahStep = totalNaik / langkah;

  for (int i = 1; i <= jumlahStep; i++) {
    int kecepatanSekarang = (kecepatanTarget * i) / jumlahStep;

    kiri.spin(forward, kecepatanSekarang, percent);
    kanan.spin(forward, kecepatanSekarang, percent);

    wait(langkah, msec);
  }

  // Sisa waktunya jalan di kecepatan penuh
  wait(durasiMs - totalNaik, msec);

  kiri.stop(brake);
  kanan.stop(brake);
}

// ===========================================================================
// BAGIAN 6 — STRUKTUR COMPETITION
// ===========================================================================

/*
  Tiga fungsi di bawah ini yang dipanggil otomatis pas match jalan. Kamu
  nggak pernah manggil mereka sendiri — Field Control yang ngatur.
*/

void pre_auton(void) {
  // Dijalanin sekali pas program dinyalakan, sebelum match mulai.
  // Biasanya buat kalibrasi sensor. Kita belum punya sensor, jadi kosong.
}

void autonomous(void) {
  // 15 detik pertama. Robot jalan sendiri, controller dimatikan.

  Brain.Screen.clearScreen();
  Brain.Screen.setCursor(1, 1);
  Brain.Screen.print("Autonomous jalan");

  // Coba satu-satu. Comment yang lain pakai //, sisain satu yang mau dites.

  majuWaktu(1000, 50);          // maju 1 detik, kecepatan 50%
  // majuJarak(24, 50);         // maju 24 inci = 1 ubin lapangan
  // majuHalus(1500, 80);       // maju 1,5 detik, pelan-pelan sampai 80%
}

void usercontrol(void) {
  // Sisa match. Controller aktif.

  while (true) {
    /*
      Materi berikutnya bakal ngisi bagian ini. Sekarang biarkan kosong
      dulu — fokusnya masih ke gerak maju.

      Tapi wait() di bawah JANGAN dihapus. Tanpa itu, loop ini muter
      ribuan kali per detik dan CPU Brain kehabisan napas.
    */

    wait(20, msec);
  }
}

// ===========================================================================
// BAGIAN 7 — MAIN
// ===========================================================================

int main() {
  // Daftarkan fungsi mana yang dipanggil di periode mana
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  // Loop ini bikin program tetap hidup. Tanpa ini program langsung mati.
  while (true) {
    wait(100, msec);
  }
}