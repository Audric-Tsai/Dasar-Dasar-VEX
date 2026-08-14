# 08 — Pneumatik

Sistem udara bertekanan. Buat gerakan yang cuma butuh dua posisi — buka atau
tutup, naik atau turun — dan butuh cepat.

Motor bisa ngelakuin hal yang sama, tapi lebih lambat, lebih berat, dan makan
satu slot motor. Pneumatik nggak makan slot motor sama sekali.

**Ada dua sistem terpisah di daftar legal.** Yang lama pakai part industri SMC,
yang baru pakai part VEX sendiri. Nomor partnya beda total. **Jangan campur
sistemnya** — ukuran fitting dan selangnya nggak selalu cocok.

---

## Sistem VEX

Ini yang sebaiknya kamu pakai kalau mulai dari nol. Belinya dari toko VEX,
dokumentasinya jelas.

| Part | Kode |
|---|---|
| Dual Acting Cylinder, 10mm Bore, 25mm Stroke | `276-8642` |
| Dual Acting Cylinder, 10mm Bore, 50mm Stroke | `276-8644` |
| Dual Acting Cylinder, 10mm Bore, 75mm Stroke | `276-8646` |
| Double Acting Solenoid | `276-8752` |
| Air Tank 200ml | `276-8749` |
| Pneumatic Pressure Regulator | `276-8748` |
| Shut-off Valve Fitting | `276-8755` |
| Straight Pneumatic Fitting Kit | `276-8636` |
| Elbow Fitting Kit | `276-8637` |
| VEX "T" Pneumatic Fittings | `276-8638` |
| Assorted Pneumatic Fittings | `276-8639` |
| V5 Pneumatic Tubing (Black, 3m) | `276-8083` |
| Pneumatics Tubing (5') | `275-0447` |

**Baca ukuran silinder.** `10mm Bore, 50mm Stroke`. Bore = diameter piston, ini
yang nentuin seberapa kuat dorongannya. Stroke = seberapa jauh dia nyodok
keluar. Bore sama semua (10mm), yang kamu pilih cuma stroke-nya.

**Pressure Regulator** nurunin tekanan dari tangki ke level yang aman dan
konsisten. Tanpa ini, dorongan pertama jauh lebih keras dari dorongan terakhir.

**Shut-off Valve** buat matiin aliran udara pas lagi ngoprek robot. Keamanan
dasar — silinder yang nyodok pas jari kamu di situ itu sakit.

**Fitting kit** ada tiga bentuk: lurus, siku, dan T. T buat mecah satu jalur
udara ke dua tujuan.

---

## Sistem SMC

Part industri standar buatan SMC Pneumatics yang diizinkan di kompetisi.
**Nomor-nomor ini nggak ada di vexrobotics.com** — belinya dari distributor
industri.

| Komponen | Kode | Pembuat |
|---|---|---|
| Reservoir | `US14227-S0400` | SMC |
| Cylinder Single Acting | `NCJ2D10-200S` | SMC |
| Cylinder Double Acting | `NCJ2D10-200` | SMC |
| Solenoid Fwd/Reverse (5/2 Single Solenoid Valve, 5VDC) | `SYJ3120-SMO-M3-F` | SMC |
| Solenoid On/Off (3/2 Solenoid Valve, 5VDC) | `SY113-SMO-PM3-F` | SMC |
| Solenoid Driver (kabel + driver, 1 port I/O → 1 solenoid) | `275-1417` | VEX |
| Tubing | `TUO425B` atau `275-0447` | SMC / VEX |
| Flow Meter | `AS1201F-M5-04T` | SMC |
| Fittings for Valves | `KJS04-M3`, `KJL04-M3`, `KQ2S04-M3G`, `KQ2L04-M3G` | SMC |
| Fittings for Reservoirs | `KQ2H03-34S` atau `KQ2H03-34AS` | SMC |

**Baca kode fitting.** Huruf di tengah nunjukin bentuknya: `KJS` / `KQ2S` lurus,
`KJL` / `KQ2L` siku 90°, `KQ2H` sambungan reservoir.

**Solenoid Driver `275-1417`** — solenoid butuh listrik lebih besar daripada
yang bisa dikasih port I/O Brain langsung. Driver ini perantaranya. **Satu
driver, satu solenoid.**

---

## Cara Sistemnya Nyambung

```
Tangki  →  Regulator  →  Fitting  →  Selang  →  Solenoid  →  Selang  →  Silinder
(udara)    (tekanan)                            (katup)                 (yang gerak)
                                                    ↑
                                              sinyal listrik
                                                    ↑
                                                 Brain
```

Udara disimpan di tangki sebelum match. Solenoid nahan udara itu sampai Brain
ngasih sinyal. Begitu sinyal masuk, katup kebuka dan udara ngedorong silinder.

**Brain nggak nyentuh udara sama sekali.** Brain cuma ngasih sinyal listrik ke
solenoid, dan solenoid yang ngatur udaranya.

---

## Single Acting vs Double Acting

**Single acting** cuma didorong udara satu arah. Baliknya pakai per di dalamnya.
Hemat udara.

**Double acting** didorong udara di dua arah. Tenaganya sama kuat maju maupun
mundur. Lebih boros, tapi kontrol penuh.

**Solenoidnya harus cocok.** 5/2 buat double acting, 3/2 buat single acting.
Angka pertama = jumlah lubang di katup, angka kedua = jumlah posisi. Yang 5/2
punya lima lubang karena harus ngarahin udara ke dua sisi silinder bergantian.

Di sistem SMC, bedanya cuma huruf `S` di belakang: `NCJ2D10-200` vs
`NCJ2D10-200S`. Gampang banget ketuker pas order.

---

## Udara Itu Terbatas

Tangki diisi pakai pompa **sebelum** match. Begitu match jalan, nggak ada cara
ngisi ulang.

Tiap kali silinder gerak, udara kepakai. Kalau mekanisme kamu gerak lima puluh
kali per match, hitung dulu cukup atau nggak. Ini yang bikin pneumatik butuh
perencanaan lebih dari motor.

---

## Yang Sering Salah

**Campur sistem VEX dan SMC.** Fitting dan selangnya nggak selalu cocok.

**Ngira Brain nyambung langsung ke solenoid.** Di sistem SMC harus lewat driver
`275-1417`.

**Salah pasangin solenoid sama silinder.** 5/2 buat double acting, 3/2 buat
single acting.

**Lupa regulator.** Dorongan pertama keras, dorongan terakhir lemas.

**Nyari part SMC di toko VEX.** Nggak ada.

---

## Catatan Legalitas

Jumlah tangki yang boleh dipakai dan tekanan maksimum diatur ulang tiap musim.
Angkanya sengaja nggak ditulis di sini. **Cek Game Manual musim berjalan.**

---

Nomor part dari sheet [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml).