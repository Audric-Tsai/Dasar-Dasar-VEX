# 07 — Sensor

Mata robot. Tanpa sensor, autonomous cuma nebak.

**Dua jenis port.** Sensor smart colok ke port smart (yang sama kayak motor).
Sensor 3-wire colok ke port 3-wire. Beda colokan, beda part, nggak bisa ketuker.

---

## Sensor Smart

| Part | Kode |
|---|---|
| Vision Sensor | `276-4850` |
| AI Vision Sensor | `276-8659` |
| Distance Sensor | `276-4852` |
| Inertial Sensor | `276-4855` |
| Rotation Sensor | `276-6050` |
| Optical Sensor | `276-7043` |
| V5 GPS Sensor | `276-7405` |

**Inertial Sensor** — baca arah hadap robot. **Ini sensor paling penting buat
autonomous.** Tanpa ini, belok kamu ngandelin waktu atau encoder, dan dua-duanya
meleset kalau roda selip. Dengan inertial, robot tau dia udah muter berapa
derajat beneran.

**Rotation Sensor** — ngitung putaran di bagian yang nggak ada motornya. Berguna
buat lengan yang digerakin karet, atau roda odometry yang cuma ikut muter.

**Distance Sensor** — ukur jarak ke benda di depan.

**Optical Sensor** — deteksi warna dan gerakan.

**Vision Sensor** — kamera. Bisa dilatih ngenalin objek berwarna. **AI Vision
Sensor** versi barunya, lebih pintar ngenalin objek permainan.

**GPS Sensor** — baca posisi robot di lapangan pakai strip kode di dinding
lapangan. Cuma jalan kalau lapangannya punya strip itu.

---

## Sensor 3-Wire

| Part | Kode |
|---|---|
| Bumper Switch | `276-2159` |
| Bumper Switch v2 | `276-4858` |
| Bumper Switch 6N | `276-8010` |
| Limit Switch | `276-2174` |
| Potentiometer | `276-2216` |
| Potentiometer V2 | `276-7417` |
| Line Tracker | `276-2154` |
| Light Sensor | `276-2158` |
| Ultrasonic Range Finder | `276-2155` |
| Optical Shaft Encoder | `276-2156` |
| Yaw Rate Gyroscope Sensor V1.0 | `276-2333` |

**Bumper Switch** — tombol besar, nyala pas kesentuh. Paling sering dipakai buat
nandain lengan udah sampai batas.

**Limit Switch** — sama fungsinya, bentuknya kecil bertuas. Muat di tempat sempit.

**Potentiometer** — baca sudut putaran, maksimal sekitar 250°. Buat lengan yang
nggak muter penuh.

**Line Tracker** — bedain permukaan terang dan gelap.

**Ultrasonic Range Finder** — ukur jarak pakai gelombang suara. Versi murah dari
Distance Sensor, tapi kurang akurat.

**Optical Shaft Encoder** — ngitung putaran shaft. Kalau kamu pakai motor V5,
kamu udah punya encoder di dalam motornya, jadi ini jarang perlu.

**Yaw Rate Gyroscope V1.0** — sensor lama. Inertial Sensor jauh lebih baik.
Jangan beli ini kalau kamu mulai dari nol.

---

## Yang Sebaiknya Kamu Beli Duluan

Kalau budget terbatas dan kamu baru mulai autonomous:

1. **Inertial Sensor** — dampaknya paling besar
2. **Distance Sensor** — buat berhenti di jarak tertentu
3. **Optical Sensor** — kalau musimnya ada objek berwarna

Sisanya bisa nunggu.

---

## Yang Sering Salah

**Beli Yaw Rate Gyroscope.** Itu sensor generasi lama. Ambil Inertial Sensor.

**Beli Optical Shaft Encoder padahal pakai motor V5.** Motornya udah ada encoder.

**Ngandelin GPS Sensor tanpa cek lapangan.** Kalau lapangan latihan kamu nggak
punya strip kode, sensornya nggak baca apa-apa.

---

Nomor part dari sheet [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml).