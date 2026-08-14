# 06 — Elektronik

Otak dan tenaga robot.

---

## V5 Inti

| Part | Kode |
|---|---|
| V5 Robot Brain | `276-4810` |
| V5 Robot Battery Li-Ion 1100mAh | `276-4811` |
| V5 Battery Clip | `276-6020` |
| V5 Power Cable Assortment | `276-4817` |
| V5 Controller | `276-4820` |
| V5 Robot Radio | `276-4831` |

**Brain** — komputer robot. 21 port smart, layar sentuh, 8 slot program. Semua
kode yang kamu tulis jalannya di sini.

**Battery** — Li-Ion 1100mAh. Perhatiin indikatornya. Robot dengan baterai di
bawah 50% gerakannya beda dari yang penuh, dan autonomous berbasis waktu bakal
meleset.

**Battery Clip** nahan baterai biar nggak lepas pas kena benturan. Murah, sering
dilupain, dan baterai copot di tengah match artinya robot mati total.

**Controller** — dua joystick, delapan tombol, layar kecil.

**Radio** — komunikasi Brain ke controller.

---

## Motor & Cartridge

| Part | Kode |
|---|---|
| V5 Smart Motor (11W) | `276-4840` |
| Smart Motor (5.5W) | `276-4842` |
| Smart Motor 36:1 Cartridge (100 RPM) | `276-5840` |
| Smart Motor 18:1 Cartridge (200 RPM) | `276-5841` |
| Smart Motor 6:1 Cartridge (600 RPM) | `276-5842` |
| Smart Motor Cap Replacement | `276-6780` |
| Smart Motor #8-32 Threaded Inserts | `276-6781` |

**Motor 11W** — motor utama. Di dalamnya sudah ada encoder yang ngitung posisi,
sensor suhu, dan pengukur arus. Ini alasan kamu bisa bikin autonomous akurat
tanpa beli sensor tambahan.

**Motor 5.5W** — versi kecil. Buat mekanisme ringan di tempat sempit.

### Cartridge

Gir yang bisa diganti di dalam motor. Ini yang nentuin karakter motornya.

| Warna | Rasio | Kecepatan | Sifat | Kode |
|---|---|---|---|---|
| Merah | 36:1 | 100 RPM | Paling kuat, paling pelan | `276-5840` |
| Hijau | 18:1 | 200 RPM | Standar | `276-5841` |
| Biru | 6:1 | 600 RPM | Paling cepat, paling lemah | `276-5842` |

**Cartridge itu SKU terpisah.** Motor dijual sama satu cartridge; kalau kamu
butuh yang lain, beli sendiri.

**Cartridge biru langsung ke roda itu jebakan.** 600 RPM terlalu cepat buat
drivetrain — robot susah dikontrol dan roda selip. Tim kompetitif hampir selalu
nurunin lagi pakai gear luar.

**Cap Replacement** dan **Threaded Insert** itu part servis. Tutup motor retak
dan ulir slek itu kejadian biasa setelah beberapa musim.

---

## Kabel

| Part | Kode |
|---|---|
| V5 Smart Cable - 200mm | `276-4860-010` |
| V5 Smart Cable - 300mm | `276-4860-020` |
| V5 Smart Cable - 600mm | `276-4860-030` |
| V5 Smart Cable - 900mm | `276-4861-010` |
| V5 Smart Cable - 1200mm | `276-4861-020` |
| V5 Smart Cable - 1500mm | `276-4861-030` |
| Smart Cables | `276-6364` |
| Smart Cable Stock (8m) | `276-5774` |
| Smart Cable Connectors | `276-5775` |
| 2-Wire Extension Cable 6" | `276-1433` |
| 2-Wire Extension Cable 12" | `276-1432` |
| 2-Wire Extension Cable 24" | `276-1431` |
| 2-Wire Extension Cable 36" | `276-1430` |
| 3-Wire Extension Cable 6" | `276-1427` |
| 3-Wire Extension Cable 12" | `276-1426` |
| 3-Wire Extension Cable 36" | `276-1976` |
| 3-Wire "Y"-Cable 6" | `276-1423` |
| Serial Y-Cable | `276-1579` |
| F-F 3-Wire Adapter Cable 12" | `276-2395` |
| 3-Wire Expander | `276-5299` |
| Extension Cable Retaining Clip | `276-4128` |

**Smart Cable** nyambungin motor dan sensor ke Brain. Bisa bolak-balik, jadi
nggak ada sisi yang salah.

**Cable Stock + Connectors** buat bikin kabel panjang custom. Kalau kamu sering
kepanjangan atau kependekan, ini solusinya.

**3-Wire Expander** nambah jumlah port 3-wire kalau port di Brain habis.

**Retaining Clip** nahan kabel biar nggak kecabut kena getaran. Kalau motor
tiba-tiba nggak kebaca, **kabel adalah tersangka pertama sebelum kode.**

---

## Yang Sering Salah

**Nyalahin kode padahal kabelnya lepas.** Cek kabel dulu, selalu.

**Lupa battery clip.** Baterai copot = robot mati total di tengah match.

**Cartridge biru langsung ke roda.** Robot lari kenceng dan nggak bisa
dikontrol.

**Kabel nggak dirapiin.** Kelilit roda, ketarik, motor mati. Zip tie itu murah —
lihat folder 10.

---

Nomor part dari sheet [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml).