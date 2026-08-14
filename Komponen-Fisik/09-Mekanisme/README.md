# 09 — Mekanisme

Part jadi buat gerakan yang lebih rumit dari sekadar muter. Kamu bisa bikin
sendiri dari C-channel dan gear, tapi ini udah dirancang dan tinggal pasang.

---

## Linear Motion

Buat gerakan lurus — lift, extension, slide.

| Part | Kode |
|---|---|
| Linear Slide Track | `276-1926-001` |
| Longer Linear Slide Track | `276-1926-005` |
| Linear Slide Bracket | `276-1926-002` |
| Inner Slide Truck | `276-1926-003` |
| Outer Slide Truck | `276-1926-004` |
| Inner Slide Truck | `276-6465-001` |
| Outer Slide Truck | `276-6465-002` |
| Linear Motion Additional Truck Kit | `276-4489` |

**Track** itu relnya, **truck** itu yang jalan di atas rel.

**Inner dan outer** dipakai bareng buat bikin lift bertingkat — track dalam geser
di track luar, jadi lift bisa lebih panjang dari rangka robotnya. Ini dasar dari
cascade lift.

---

## Turntable

| Part | Kode |
|---|---|
| Large Turntable Bearing Assembly | `276-1810-001` |
| Small Turntable Bearing Assembly | `276-1810-005` |
| Large Turntable Bearing V2 Assembly | `276-5652-000` |
| Small Turntable Bearing V2 Assembly | `276-5652-004` |
| Turntable Mounting Bracket | `276-5652-007` |

Bearing besar berbentuk cincin. Buat bagian robot yang muter di atas bagian lain
— misalnya lengan yang bisa muter 360° di atas drivetrain.

**Ambil yang V2** kalau beli baru.

---

## Advanced Mechanics and Motion Kit

| Part | Kode |
|---|---|
| Advanced Mechanics and Motion Kit | `276-2045` |
| Hand Crank | `276-2045-001` |
| Lead Screw | `276-2045-032` |
| Lead Screw Nut | `276-2045-031` |
| Lead Screw Bracket | `276-2045-033` |
| Drop Off Cam | `276-2045-061` |
| Cam Follower | `276-2045-066` |
| Cam Follower Bracket | `276-2045-064` |
| U-Joint | `276-2045-020` |
| 16t Bevel Gear | `276-2045-051` |
| 32t Bevel Gear | `276-2045-052` |

**Lead Screw** ubah putaran jadi gerak lurus yang pelan dan sangat kuat. Nggak
bisa didorong balik dari sisi output, jadi bisa nahan beban tanpa motor nyala.

**Cam** ubah putaran jadi gerakan naik-turun berulang.

**U-Joint** nyalurin putaran antara dua shaft yang nggak sejajar.

---

## Kit Jadi

| Part | Kode |
|---|---|
| Claw Kit | `276-2212` |
| Claw Kit v2 | `276-6010` |
| Winch and Pulley Kit | `276-1546` |
| Intake Roller | `276-1499` |
| Intake Roller | `276-2026` |
| Hinge | `275-1272` |
| V5 Flywheel Weight | `276-8794` |

**Claw Kit** capit jadi. **Ambil v2.**

**Winch and Pulley Kit** buat narik pakai tali. Berguna buat lift yang harus
ringan.

**Flywheel Weight** pemberat buat mekanisme lempar. Roda berat nyimpen energi
lebih banyak, jadi lemparannya lebih konsisten walaupun motor sempat drop.

---

## Yang Sering Salah

**Beli kit padahal bisa bikin sendiri.** Kit itu mahal dan berat. Buat belajar,
bikin sendiri dari C-channel lebih ngajarin.

**Campur inner dan outer truck beda seri.** `276-1926-xxx` dan `276-6465-xxx`
itu dua seri berbeda.

**Pakai turntable V1 padahal V2 ada.** V2 lebih halus dan lebih awet.

---

Nomor part dari sheet [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml).