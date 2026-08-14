# 01 — Struktur

Rangka robot. Semua part lain nempel ke sini.

Yang harus kamu sadari duluan: **ada dua versi dari hampir semua part di sini —
aluminium dan baja.** Bentuk dan lubangnya sama, yang beda cuma bahan. Baja jauh
lebih kaku tapi jauh lebih berat.

---

## C-Channel & U-Channel — Aluminium

| Part | Kode |
|---|---|
| 1x2x1x25 Aluminum C-Channel | `276-2288` |
| 1x2x1x35 Aluminum C-Channel | `276-2289` |
| 1x3x1x35 Aluminum C-Channel | `276-4359` |
| 1x5x1x25 Aluminum C-Channel | `276-2290` |
| 1x5x1x35 Aluminum C-Channel | `276-2298` |
| 2x2x2x20 Aluminum U-Channel | `276-7285` |

**Baca namanya.** `1x5x1x35` = sisi 1 lubang, tengah 5 lubang, sisi 1 lubang,
panjang 35 lubang. Angka terakhir selalu panjang.

**Kenapa bentuk C.** Batang yang dilipat jauh lebih kuat nahan bengkok daripada
pelat rata dengan berat aluminium yang sama. Sisi yang berdiri itu yang nahan
beban.

**U-channel** punya dua sisi yang lebih tinggi. Lebih kaku lagi, tapi lebih berat
dan lebih makan ruang.

**Lubangnya kotak, bukan bulat.** Ini yang paling bikin bingung pemula.
Penjelasannya ada di folder 02, bagian Bearing Flat.

---

## Angle, Bar, Plate — Aluminium

| Part | Kode |
|---|---|
| 1x1x35 Aluminum Angle | `276-6484` |
| 2x2x35 Aluminum Angle | `276-2304` |
| 1x25 Aluminum Bar | `276-2307` |
| 5x25 Aluminum Plate | `276-2311` |
| 15 x 30 Base Plate | `276-1341` |

**Angle** bentuk L. Lebih ringan dari C-channel tapi lebih lemah. Buat sambungan
sudut dan bagian yang nggak nahan beban berat.

**Bar** dan **Plate** rata. Paling lemah. Gampang dibengkokin sesuai kebutuhan.
Bagus buat penutup dan penghubung, jangan buat rangka utama.

**Base Plate 15x30** itu pelat besar buat dasar robot.

---

## Struktur Baja

| Part | Kode |
|---|---|
| 1x2x1x35 Steel C-Channel | `276-2906` |
| 1x5x1x25 Steel C-Channel | `275-1138` |
| 1x5x1x35 Steel C-Channel | `275-1139` |
| 2x2x25 Steel Angle | `275-1142` |
| 2x2x35 Steel Angle | `275-1143` |
| 3x3x35 Steel Angle | `275-1144` |
| 2x1x25 Steel Chassis Rail | `275-1145` |
| 2x1x35 Steel Chassis Rail | `275-1146` |
| 1 x 25 Steel Bar | `275-1141` |
| 5x15 Steel Plate | `275-2023` |
| 5x25 Steel Plate | `275-1140` |

**Kapan pakai baja.** Cuma di tempat yang beneran butuh kaku — biasanya rangka
drivetrain bawah. Baja bikin robot berat, dan berat bikin motor kerja lebih keras
dan baterai cepat habis.

**Chassis Rail** cuma ada versi baja. Bentuknya dirancang khusus buat rangka
drivetrain.

---

## Gusset

Pelat kecil bersudut buat nguatin sambungan. Kalau rangka goyang di sudutnya,
ini yang kamu butuh.

**Sistem bersudut** — tiap sudut ada versi flat (rata) dan bent (ditekuk):

| Sudut | Flat | Bent |
|---|---|---|
| 30° | `276-7758-001` | `276-7758-002` |
| 45° | `276-7759-001` | `276-7759-002` |
| 60° | `276-7760-001` | `276-7760-002` |
| 90° | `276-7761-001` | `276-7761-002` |

**Flat** buat nyambungin dua part yang sebidang. **Bent** buat nyambungin dua
part yang beda bidang.

**Gusset lain:**

| Part | Kode |
|---|---|
| 45-Degree Gusset | `275-1186` |
| Plus Gusset | `276-1110-001` |
| 90-Degree Gusset | `276-1110-002` |
| Angle Gusset | `276-1110-003` |
| C-Channel Coupler Gusset | `276-2575` |
| Angle Corner Gusset | `276-2576` |
| 90-Degree Gusset Angle | `276-2577-001` |
| 90-Degree Gusset Plate | `276-2577-002` |
| Angle Coupler Gusset | `276-2578` |

**Coupler gusset** khusus buat nyambung dua C-channel jadi satu batang panjang.

---

## Standoff

Batang bulat berulir di kedua ujung. Bikin jarak antara dua bagian robot.

| Panjang | Kode |
|---|---|
| 1/2" | `275-1014` |
| 3/4" | `275-1015` |
| 1.00" | `275-1016` |
| 1.50" | `275-1017` |
| 2.00" | `275-1018` |
| 2.50" | `275-1019` |
| 3.00" | `275-1020` |
| 4.00" | `275-1021` |
| 5.00" | `275-1022` |
| 6.00" | `275-1023` |

**Jangan diremehkan.** Dua pelat yang disambung standoff jauh lebih kaku daripada
satu pelat sendirian. Standoff sering jadi cara paling ringan buat bikin rangka
kaku tanpa nambah C-channel.

---

## Yang Sering Salah

**Pakai baja di mana-mana.** Robot jadi berat, lambat, dan boros baterai. Baja
cuma di tempat yang beneran butuh.

**Pakai plate buat rangka utama.** Plate itu paling lemah. Rangka pakai
C-channel.

**Salah baca ukuran C-channel.** Angka terakhir itu panjang, bukan lebar.

**Lupa gusset di sudut.** Rangka kotak tanpa gusset bisa jadi jajar genjang pas
kena benturan.

---

Nomor part dari sheet [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml).