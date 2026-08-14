# 03 — Roda

Roda di VEX nggak cuma buat jalan. Sebagian besar justru dipakai buat intake —
narik objek permainan masuk ke robot. Beda tujuan, beda jenis roda.

---

## Traction Wheel

Roda biasa. Cengkeraman kuat, cuma bisa maju-mundur.

| Part | Kode |
|---|---|
| 2.75" Wheel | `276-1496` |
| 3.25" Traction Wheel | `276-3525` |
| 5" Wheel | `276-1498` |
| 4" High Traction Tire | `276-1489` |
| 6" Wheel Leg | `276-2218` |

---

## Omni-Directional Wheel

Roda dengan roller kecil di sisinya.

| Part | Kode |
|---|---|
| 2" Omni-Directional Wheel | `276-9044` |
| 2.75" Omni-Directional Wheel - Double Roller | `276-1902` |
| 3.25" Omni-Directional Wheel | `276-3526` |
| 4" Omni-Directional Wheel | `276-2185` |

> Di sheet, `276-9044` ketulis `2'` (dua kaki). Salah ketik — maksudnya `2"`.

**Fungsinya.** Bisa didorong maju normal, tapi juga bisa geser ke samping tanpa
nahan.

**Kenapa penting.** Pas robot belok, roda depan dan belakang nempuh lintasan yang
beda panjangnya. Kalau semua traction, salah satunya pasti terseret — belok jadi
berat dan motor panas. Roda omni ngilangin masalah itu.

Ini roda drivetrain paling umum di VEX.

---

## Mecanum Wheel

| Part | Kode |
|---|---|
| 2" Mecanum Wheel | `217-7400` |
| 2" Mecanum Wheels V2 | `276-9041` |
| 4" Mecanum Wheel | `276-1447` |

Roller-nya miring 45°. Robot bisa geser menyamping penuh tanpa muter.

**Kelemahannya:** cengkeraman lemah dan gampang didorong lawan.

---

## Anti-Static Wheel

| Part | Kode |
|---|---|
| 2.75" (220mm Travel) Anti-Static Wheel | `276-8098` |
| 3.25" (260mm Travel) Anti-Static Wheel | `276-7771` |
| 4" (320mm Travel) Anti-Static Wheel | `276-8103` |
| 2.75" (220mm Travel) Omni-Directional Anti-Static | `276-8106` |
| 3.25" (260mm Travel) Omni-Directional Anti-Static | `276-8026` |
| 4" (320mm Travel) Omni-Directional Anti-Static | `276-8107` |

**Perhatiin penamaannya.** Roda ini disebut pakai **jarak tempuh per putaran**,
bukan cuma diameter. `3.25" (260mm Travel)` artinya sekali putaran nempuh 260mm.

Ini berguna banget buat autonomous — kamu nggak perlu ngitung keliling sendiri.

**Kenapa anti-static.** Karpet lapangan bikin listrik statis numpuk. Statis yang
cukup besar bisa nge-reset Brain di tengah match. Roda ini nyalurin muatannya ke
lantai.

---

## Compression Wheel

Roda karet padat. Buat intake dan roller, bukan drivetrain.

| Diameter | 30A | 40A | 60A |
|---|---|---|---|
| 1.625" | `276-8877` | `276-8878` | `276-8879` |
| 2" | `276-8880` | `276-8881` | `276-8882` |

---

## Straight Flex Wheel

Roda dengan jari-jari berongga yang bisa penyet.

| Ukuran | Bore | 30A | 40A | 60A |
|---|---|---|---|---|
| 1.625" OD × 1/2" WD | 1/2" Hex | `217-6350` | `217-6351` | `217-6352` |
| 2" OD × 1/2" WD | 1/2" Hex | `217-6353` | `217-6354` | `217-6446` |
| 3" OD × 1" WD | 1-1/8" ID | `217-6447` | `217-6448` | `217-6449` |
| 4" OD × 1" WD | 1-1/8" ID | `217-6450` | `217-6451` | `217-6452` |

**Fungsinya.** Narik objek masuk. Jari-jari berongga bikin roda nyesuain bentuk
objek yang disentuh — permukaan kontaknya jauh lebih luas dari roda padat.

**Kelemahannya.** Karena penyet, jarak per putaran berubah-ubah. Jangan pakai
flex wheel di drivetrain yang autonomous-nya ngandelin encoder.

### Cara baca ukurannya

| Kode | Artinya |
|---|---|
| `OD` | Diameter luar |
| `WD` | Lebar roda |
| `ID` | Diameter lubang tengah. `1-1/8"` berarti **butuh hub** — lihat folder 04. |
| `Hex Bore` | Lubang segi enam, langsung nyantol ke shaft hex |

### Cara baca durometer

Skala Shore A — ukuran kekerasan karet.

| Durometer | Sifat | Kapan dipakai |
|---|---|---|
| 30A | Paling lembut, cengkeraman paling kuat, paling cepat aus | Objek licin atau ringan |
| 40A | Tengah-tengah | Intake umum |
| 60A | Paling keras, awet, paling licin | Objek berat yang didorong |

**Makin kecil angkanya, makin lembut.** Ini yang paling sering ketuker.

---

## Tank Tread & Conveyor

| Part | Kode |
|---|---|
| Tank Tread Link | `276-2168-002` |
| Tank Tread Link | `276-2168-302` |
| Tank Tread Sprocket | `276-2168-003` |
| Tank Tread Traction Links | `276-2214-001` |
| Single Bogie Wheel | `276-2168-004` |
| Double Bogie Wheel | `276-2168-005` |
| Conveyor-belt Base Links | `276-2214-002` |
| Short Conveyor-belt Inserts | `276-2214-003` |
| Medium Conveyor-belt Inserts | `276-2214-004` |
| Tall Conveyor-belt Inserts | `276-2214-005` |

**Tank tread** — sabuk model tank. Cengkeraman luas, tapi berat dan gesekannya
besar. Jarang dipakai di V5 kompetitif.

**Conveyor** — sabuk pengangkut objek di dalam robot. Insert-nya ada tiga tinggi;
makin tinggi, makin kuat nahan objek biar nggak jatuh.

---

## Yang Sering Salah

**Beli flex wheel 3" tanpa hub.** Rodanya muter bebas di shaft. Emang butuh hub.

**Pakai 60A karena "lebih kuat".** Keras bukan berarti cengkeram. 60A paling
licin.

**Flex wheel di drivetrain.** Autonomous bakal meleset terus.

**Semua roda traction.** Robot susah belok.

**Ketuker anti-static sama biasa.** Dua-duanya "3.25 inci", beda part.

---

Nomor part dari sheet [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml).