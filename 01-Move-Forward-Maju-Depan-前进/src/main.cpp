/*----------------------------------------------------------------------------
  VEX BASICS — Lesson 01 / DASAR-DASAR VEX — Materi 01 / VEX 基础 — 第 01 课
  MOVE FORWARD / MAJU KE DEPAN / 前进

  ----------------------------------------------------------------------------
  EN — English
  ----------------------------------------------------------------------------
  In this lesson you'll learn three different ways to make the robot move
  forward:
    1. By TIME     — easy, but not accurate
    2. By DISTANCE — accurate, uses the motor's built-in encoder
    3. With RAMPING — so the robot doesn't jerk at the start

  Robot: 4x V5 motors (11W), blue 600 RPM cartridge
    Left  : PORT1, PORT2
    Right : PORT9, PORT10

  All measurements in this file are in INCHES. Reason: the entire VEX world
  uses inches — wheel sizes, C-channel hole spacing, field dimensions, all
  of it. If you calculate in cm, you'll keep converting back and forth and
  sooner or later get it wrong.

  ----------------------------------------------------------------------------
  ID — Bahasa Indonesia
  ----------------------------------------------------------------------------
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

  ----------------------------------------------------------------------------
  ZH — 简体中文
  ----------------------------------------------------------------------------
  在这节课中，你会学到三种让机器人前进的方法：
    1. 按时间   —— 简单，但不精确
    2. 按距离   —— 精确，使用电机内置的编码器
    3. 带加速   —— 让机器人启动时不会猛地一顿

  机器人：4 个 V5 电机（11W），蓝色齿轮组 600 RPM
    左侧：PORT1、PORT2
    右侧：PORT9、PORT10

  本文件中所有尺寸单位都是英寸。原因：整个 VEX 的世界都用英寸——
  轮子尺寸、C 型槽孔距、场地尺寸，全部都是。如果你用厘米计算，
  你会一直来回换算，迟早会算错。
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

// ===========================================================================
// PART 1 — DEVICE SETUP / BAGIAN 1 — MENDAFTARKAN ALAT / 第一部分 — 注册硬件
// ===========================================================================

brain Brain;
competition Competition;

/*
  EN: Each motor needs three pieces of information:

        motor(PORT, cartridge, reversed?)

      PORT      → the physical port on the Brain. Must match the actual
                  cable.
      cartridge → the color of the gear set inside the motor:
                    ratio36_1 = red   (100 RPM, strong)
                    ratio18_1 = green (200 RPM, standard)
                    ratio6_1  = blue  (600 RPM, fast)  ← ours
      reversed? → true if the motor needs to spin the opposite way

      Why is the right motor set to true?

      Because the left and right motors are mounted facing each other on
      the robot. If you spin both of them clockwise, the robot won't move
      forward — it'll spin in place. So one side has to be reversed.

      Which side gets reversed depends on how you mounted your motors. If
      your robot ends up going backward, just swap it: left becomes true,
      right becomes false.

  ID: Tiap motor butuh tiga informasi:

        motor(PORT, cartridge, dibalik?)

      PORT      → colokan fisik di Brain. Harus cocok sama kabel aslinya.
      cartridge → warna gear di dalam motor:
                    ratio36_1 = merah   (100 RPM, kuat)
                    ratio18_1 = hijau   (200 RPM, standar)
                    ratio6_1  = biru    (600 RPM, cepat)  ← punya kita
      dibalik?  → true kalau motor harus muter kebalikan

      Kenapa motor kanan di-set true?

      Karena motor kiri dan kanan dipasang saling berhadapan di robot.
      Kalau dua-duanya kamu suruh muter searah jarum jam, robot bukan
      maju — malah muter di tempat. Jadi salah satu sisi harus dibalik.

      Mana yang dibalik tergantung cara kamu masang motornya. Kalau nanti
      robot kamu malah mundur, tinggal tukar: kiri jadi true, kanan jadi
      false.

  ZH: 每个电机需要三个信息：

        motor(PORT, cartridge, 是否反转?)

      PORT      → Brain 上的物理接口。必须和实际接线一致。
      cartridge → 电机内部齿轮组的颜色：
                    ratio36_1 = 红色（100 RPM，力大）
                    ratio18_1 = 绿色（200 RPM，标准）
                    ratio6_1  = 蓝色（600 RPM，速度快）← 我们用的
      是否反转? → 如果电机需要反方向转动就设为 true

      为什么右侧电机设为 true？

      因为左右两侧的电机在机器人上是面对面安装的。如果两边都设成顺
      时针转，机器人不会前进——而是会原地打转。所以必须有一侧反转。

      具体哪一侧要反转，取决于你怎么安装电机。如果之后机器人反而往
      后走，直接互换就好：左边改成 true，右边改成 false。
*/

motor kiriDepan     = motor(PORT1,  ratio6_1, false);
motor kiriBelakang  = motor(PORT2,  ratio6_1, false);
motor kananDepan    = motor(PORT9,  ratio6_1, true);
motor kananBelakang = motor(PORT10, ratio6_1, true);

/*
  EN: motor_group lets two motors be commanded together as a single
      object.

      Without it, every time you want to move forward you'd need to write
      four lines. With it, two is enough. The more motors you have, the
      more this matters.

  ID: motor_group bikin dua motor bisa diperintah bareng sebagai satu
      benda.

      Tanpa ini, tiap mau maju kamu harus nulis empat baris. Dengan ini
      cukup dua. Makin banyak motor, makin kerasa bedanya.

  ZH: motor_group 可以把两个电机当成一个整体一起控制。

      没有它的话，每次想让机器人前进都得写四行代码；有了它，两行就
      够了。电机越多，这个差别就越明显。
*/

motor_group kiri(kiriDepan, kiriBelakang);
motor_group kanan(kananDepan, kananBelakang);

// ===========================================================================
// PART 2 — ROBOT DIMENSIONS / BAGIAN 2 — UKURAN ROBOT / 第二部分 — 机器人尺寸
// ===========================================================================

/*
  EN: These numbers are what let the majuJarak() function do its math.
      You MUST adjust them to match your own robot, or the results will
      be off.

      Common VEX wheel sizes — pick one:
        2.75 → small wheel, agile robot
        3.25 → most commonly used on competition drivetrains
        4.00 → large wheel, furthest distance per rotation

  ID: Angka-angka ini yang bikin fungsi majuJarak() bisa ngitung.
      WAJIB kamu sesuaikan sama robot kamu sendiri, atau hasilnya ngaco.

      Ukuran roda VEX yang umum, tinggal pilih:
        2.75 → roda kecil, robot lincah
        3.25 → paling sering dipakai di drivetrain kompetisi
        4.00 → roda besar, jarak per putaran paling jauh

  ZH: 这些数值是 majuJarak() 函数用来计算的依据。
      必须根据你自己的机器人调整，否则结果会不准。

      常见的 VEX 轮子尺寸，选一个：
        2.75 → 小轮子，机器人更灵活
        3.25 → 比赛底盘最常用的尺寸
        4.00 → 大轮子，每转一圈跑得最远
*/

const double DIAMETER_RODA_INCI = 4.0;  // EN: change to match your wheel | ID: ganti sesuai roda kamu | ZH: 根据你的轮子调整
const double RASIO_GEAR_LUAR    = 1.0;  // EN: 1.0 = motor connects directly to the wheel | ID: 1.0 = motor langsung ke roda | ZH: 1.0 = 电机直接连接到轮子

/*
  EN: NOTE about 600 RPM:

      The blue cartridge is really fast. If it's connected straight to
      the wheel with no extra gearing, your robot will be hard to control
      and will slip a lot.

      Competitive teams usually gear it back down externally, e.g. 36:60.
      If your robot is set up that way, change RASIO_GEAR_LUAR to
      60.0 / 36.0.

  ID: CATATAN soal 600 RPM:

      Cartridge biru itu cepat banget. Kalau langsung nyambung ke roda
      tanpa gear tambahan, robot kamu bakal susah dikontrol dan gampang
      selip.

      Tim kompetitif biasanya nurunin lagi pakai gear luar, misalnya
      36:60. Kalau robot kamu begitu, ubah RASIO_GEAR_LUAR jadi
      60.0 / 36.0.

  ZH: 关于 600 RPM 的说明：

      蓝色齿轮组的速度非常快。如果不加外部减速直接接到轮子上，
      机器人会很难控制，也容易打滑。

      参赛队伍通常会用外部齿轮再降速，比如 36:60。如果你的机器人是
      这样接的，把 RASIO_GEAR_LUAR 改成 60.0 / 36.0。
*/

// ===========================================================================
// PART 3 — METHOD ONE: MOVE FORWARD BY TIME
// BAGIAN 3 — CARA PERTAMA: MAJU BERDASARKAN WAKTU
// 第三部分 — 方法一：按时间前进
// ===========================================================================

/*
  EN: This is the simplest method. Tell the motors to spin, wait a bit,
      then stop.

      The downside: the result isn't consistent. A full battery makes the
      robot travel farther than a weak battery, even with the exact same
      code. A slippery floor affects it too.

      Fine for early practice. Not for competition autonomous.

  ID: Ini cara paling gampang. Suruh motor muter, tunggu sebentar, terus
      stop.

      Kelemahannya: hasilnya nggak konsisten. Baterai penuh bikin robot
      lari lebih jauh daripada baterai lemah, padahal kodenya sama
      persis. Lantai licin juga ngaruh.

      Buat latihan awal ini oke. Buat autonomous kompetisi, jangan.

  ZH: 这是最简单的方法。让电机转动，等一会儿，然后停下来。

      缺点：结果不稳定。电池满电时机器人跑得更远，电池弱的时候跑得
      更近，哪怕代码完全一样。地面打滑也会有影响。

      用于初期练习没问题，但比赛的 autonomous 阶段不要用这种方法。
*/

void majuWaktu(int durasiMs, int kecepatanPersen) {
  kiri.spin(forward, kecepatanPersen, percent);
  kanan.spin(forward, kecepatanPersen, percent);

  wait(durasiMs, msec);

  // EN: brake = stop and hold position | ID: brake = berhenti dan nahan posisi | ZH: brake = 停止并保持位置
  // EN: coast = stop but still glides a bit | ID: coast = berhenti tapi masih meluncur dikit | ZH: coast = 停止但仍会滑行一小段
  kiri.stop(brake);
  kanan.stop(brake);
}

// ===========================================================================
// PART 4 — METHOD TWO: MOVE FORWARD BY DISTANCE
// BAGIAN 4 — CARA KEDUA: MAJU BERDASARKAN JARAK
// 第四部分 — 方法二：按距离前进
// ===========================================================================

/*
  EN: This is the correct method.

      Every V5 motor has a built-in encoder — a sensor that counts how
      many degrees the motor has turned. So you don't need to buy an
      extra sensor.

      The logic:
        1. One wheel rotation = wheel circumference (inches)
        2. Distance you want  ÷  circumference  =  how many rotations
        3. Rotations × 360    =  how many degrees the motor needs to turn

      Because the robot counts its own rotations, a weak battery only
      makes it slower — not shorter.

      Example, with a 4-inch wheel:
        Circumference = 4 × 3.14159 = 12.57 inches
        Want to move 24 inches  →  24 ÷ 12.57 = 1.91 rotations
        1.91 × 360               =  687 degrees

  ID: Ini cara yang bener.

      Tiap motor V5 punya encoder di dalamnya — sensor yang ngitung sudah
      berapa derajat motor muter. Jadi kamu nggak perlu beli sensor
      tambahan.

      Logikanya:
        1. Satu putaran roda = keliling roda (inci)
        2. Jarak yang kamu mau  ÷  keliling  =  berapa putaran
        3. Putaran × 360        =  berapa derajat motor harus muter

      Karena robot ngitung putaran sendiri, baterai lemah cuma bikin dia
      lebih pelan — bukan lebih pendek.

      Contoh, roda 4 inci:
        Keliling = 4 × 3,14159 = 12,57 inci
        Mau maju 24 inci  →  24 ÷ 12,57 = 1,91 putaran
        1,91 × 360        =  687 derajat

  ZH: 这是正确的方法。

      每个 V5 电机内部都有编码器——一个能统计电机转过多少度的传感
      器。所以你不需要额外购买传感器。

      原理：
        1. 轮子转一圈 = 轮子周长（英寸）
        2. 想走的距离 ÷ 周长 = 需要转多少圈
        3. 圈数 × 360 = 电机需要转多少度

      因为机器人是靠自己计数转了多少圈，电池弱只会让它变慢——不会
      变短。

      举例，4 英寸的轮子：
        周长 = 4 × 3.14159 = 12.57 英寸
        想前进 24 英寸  →  24 ÷ 12.57 = 1.91 圈
        1.91 × 360      =  687 度
*/

double jarakKeDerajat(double jarakInci) {
  double kelilingInci = DIAMETER_RODA_INCI * 3.14159;

  return (jarakInci / kelilingInci) * 360.0 * RASIO_GEAR_LUAR;
}

void majuJarak(double jarakInci, int kecepatanPersen) {
  double derajat = jarakKeDerajat(jarakInci);

  // EN: Reset the encoder to zero first, so counting starts from the beginning
  // ID: Reset encoder ke nol dulu, biar hitungannya mulai dari awal
  // ZH: 先把编码器重置为零，让计数从头开始
  kiri.setPosition(0, degrees);
  kanan.setPosition(0, degrees);

  /*
    EN: Notice the false and true at the end:

        false = "run, but don't wait for it, move on to the next line"
        true  = "run, and wait until it's finished"

        The left side uses false so the right side can start moving right
        away. If both were true, the left side would run alone until
        finished before the right side even starts — your robot would
        spin instead of moving forward.

    ID: Perhatikan false dan true di akhir:

        false = "jalan, tapi jangan tungguin, lanjut ke baris berikutnya"
        true  = "jalan, dan tunggu sampai selesai"

        Sisi kiri pakai false supaya kanan bisa langsung ikut jalan.
        Kalau dua-duanya true, kiri jalan sendirian sampai selesai baru
        kanan mulai — robot kamu bakal muter, bukan maju.

    ZH: 注意末尾的 false 和 true：

        false = "执行，但不等它完成，直接往下走"
        true  = "执行，并且等它完成再往下走"

        左侧用 false，是为了让右侧可以立刻一起动起来。如果两边都用
        true，左侧会自己跑完才轮到右侧开始——机器人会原地打转，而
        不是前进。
  */
  kiri.spinFor(forward, derajat, degrees, kecepatanPersen, velocityUnits::pct, false);
  kanan.spinFor(forward, derajat, degrees, kecepatanPersen, velocityUnits::pct, true);
}

// ===========================================================================
// PART 5 — METHOD THREE: MOVE FORWARD WITH RAMPING
// BAGIAN 5 — CARA KETIGA: MAJU DENGAN PERCEPATAN
// 第五部分 — 方法三：带加速前进
// ===========================================================================

/*
  EN: If you go straight to 100% from a standstill, the wheels will slip
      and the robot will jerk. The distance traveled ends up off.

      The fix: increase the speed gradually. This is called ramping.

      This is also your first example of using a loop to control a
      motor — a concept you'll keep using going forward.

  ID: Kalau kamu langsung kasih 100% dari diam, roda bakal selip dan
      robot nyentak. Jarak yang ditempuh jadi meleset.

      Solusinya: naikin kecepatan pelan-pelan. Ini namanya ramp.

      Ini juga contoh pertama kamu pakai loop buat ngontrol motor —
      konsep yang bakal kepake terus nanti.

  ZH: 如果从静止状态直接给到 100%，轮子会打滑，机器人会猛地一顿，
      实际走的距离也会不准。

      解决办法：让速度慢慢往上加，这就叫做 ramp（渐进加速）。

      这也是你第一次用循环来控制电机——这个概念以后会一直用到。
*/

void majuHalus(int durasiMs, int kecepatanTarget) {
  int langkah    = 20;                    // EN: increase every 20 ms | ID: naik tiap 20 ms | ZH: 每 20 ms 增加一次
  int totalNaik  = 500;                   // EN: takes 500 ms to reach target | ID: butuh 500 ms buat sampai target | ZH: 需要 500 ms 才能到达目标速度
  int jumlahStep = totalNaik / langkah;

  for (int i = 1; i <= jumlahStep; i++) {
    int kecepatanSekarang = (kecepatanTarget * i) / jumlahStep;

    kiri.spin(forward, kecepatanSekarang, percent);
    kanan.spin(forward, kecepatanSekarang, percent);

    wait(langkah, msec);
  }

  // EN: Run the remaining time at full speed | ID: Sisa waktunya jalan di kecepatan penuh | ZH: 剩下的时间以全速运行
  wait(durasiMs - totalNaik, msec);

  kiri.stop(brake);
  kanan.stop(brake);
}

// ===========================================================================
// PART 6 — COMPETITION STRUCTURE / BAGIAN 6 — STRUKTUR COMPETITION / 第六部分 — Competition 结构
// ===========================================================================

/*
  EN: The three functions below are called automatically once the match
      starts. You never call them yourself — Field Control handles that.

  ID: Tiga fungsi di bawah ini yang dipanggil otomatis pas match jalan.
      Kamu nggak pernah manggil mereka sendiri — Field Control yang
      ngatur.

  ZH: 下面这三个函数会在比赛开始后自动被调用。你不需要自己去调用
      它们——这是由 Field Control 控制的。
*/

void pre_auton(void) {
  // EN: Runs once when the program starts, before the match begins. Usually used for sensor calibration. We don't have any sensors yet, so this is empty.
  // ID: Dijalanin sekali pas program dinyalakan, sebelum match mulai. Biasanya buat kalibrasi sensor. Kita belum punya sensor, jadi kosong.
  // ZH: 程序启动时运行一次，在比赛开始之前。通常用来做传感器校准。我们还没有传感器，所以先留空。
}

void autonomous(void) {
  // EN: First 15 seconds. The robot runs on its own, controller disabled.
  // ID: 15 detik pertama. Robot jalan sendiri, controller dimatikan.
  // ZH: 最初的 15 秒。机器人自主运行，controller 被禁用。

  Brain.Screen.clearScreen();
  Brain.Screen.setCursor(1, 1);
  Brain.Screen.print("Autonomous jalan");

  // EN: Try them one at a time. Comment out the others with //, leave only the one you want to test.
  // ID: Coba satu-satu. Comment yang lain pakai //, sisain satu yang mau dites.
  // ZH: 一次只试一个。用 // 把其他的注释掉，只留下你想测试的那一个。

  majuWaktu(1000, 50);          // EN: move forward 1 second, 50% speed | ID: maju 1 detik, kecepatan 50% | ZH: 前进 1 秒，速度 50%
  // majuJarak(24, 50);         // EN: move forward 24 inches = 1 field tile | ID: maju 24 inci = 1 ubin lapangan | ZH: 前进 24 英寸 = 场地 1 格
  // majuHalus(1500, 80);       // EN: move forward 1.5 seconds, ramping up to 80% | ID: maju 1,5 detik, pelan-pelan sampai 80% | ZH: 前进 1.5 秒，逐渐加速到 80%
}

void usercontrol(void) {
  // EN: Rest of the match. Controller is active.
  // ID: Sisa match. Controller aktif.
  // ZH: 比赛剩余时间。Controller 处于启用状态。

  while (true) {
    /*
      EN: The next lesson will fill in this part. For now leave it
          empty — the focus right now is still moving forward.

          But do NOT delete the wait() below. Without it, this loop
          spins thousands of times per second and the Brain's CPU runs
          out of breath.

      ID: Materi berikutnya bakal ngisi bagian ini. Sekarang biarkan
          kosong dulu — fokusnya masih ke gerak maju.

          Tapi wait() di bawah JANGAN dihapus. Tanpa itu, loop ini
          muter ribuan kali per detik dan CPU Brain kehabisan napas.

      ZH: 下一节课会填充这部分内容。现在先留空——目前的重点还是前
          进这个动作。

          但下面的 wait() 千万不要删掉。没有它，这个循环每秒会跑
          几千次，Brain 的 CPU 会喘不过气。
    */

    wait(20, msec);
  }
}

// ===========================================================================
// PART 7 — MAIN / BAGIAN 7 — MAIN / 第七部分 — MAIN
// ===========================================================================

int main() {
  // EN: Register which function gets called during which period | ID: Daftarkan fungsi mana yang dipanggil di periode mana | ZH: 注册在哪个阶段调用哪个函数
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  // EN: This loop keeps the program alive. Without it the program would exit immediately. | ID: Loop ini bikin program tetap hidup. Tanpa ini program langsung mati. | ZH: 这个循环让程序保持运行。没有它，程序会立刻结束。
  while (true) {
    wait(100, msec);
  }
}
