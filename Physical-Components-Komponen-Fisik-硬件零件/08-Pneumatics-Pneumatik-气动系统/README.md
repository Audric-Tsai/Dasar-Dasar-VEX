<a name="top"></a>

**English** · [Bahasa Indonesia](#id) · [简体中文](#zh)

---

<a name="en"></a>

# 08 — Pneumatics

Compressed air systems. For movements that only need two positions — open or
closed, up or down — and need to be fast.

A motor can do the same job, but slower, heavier, and it uses up a motor slot.
Pneumatics use no motor slots at all.

**There are two separate systems on the legal parts list.** The older one uses
industrial SMC parts, the newer one uses VEX's own parts. The part numbers are
completely different. **Don't mix the systems** — fitting and tubing sizes don't
always match.

---

## The VEX System

This is what you should use if you're starting from scratch. Buy it from the VEX
store, the documentation is clear.

| Part | Code |
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

**Reading cylinder sizes.** `10mm Bore, 50mm Stroke`. Bore = piston diameter,
which determines how hard it pushes. Stroke = how far it extends. The bore is the
same across all of them (10mm), so the only choice you're making is stroke.

**The Pressure Regulator** drops tank pressure to a safe, consistent level.
Without it, the first push is much harder than the last.

**The Shut-off Valve** cuts the air supply while you're working on the robot.
Basic safety — a cylinder firing with your finger in the way hurts.

**Fitting kits** come in three shapes: straight, elbow, and T. The T splits one
air line into two destinations.

---

## The SMC System

Standard industrial parts made by SMC Pneumatics that are permitted in
competition. **These numbers don't exist on vexrobotics.com** — buy them from an
industrial distributor.

| Component | Code | Maker |
|---|---|---|
| Reservoir | `US14227-S0400` | SMC |
| Cylinder Single Acting | `NCJ2D10-200S` | SMC |
| Cylinder Double Acting | `NCJ2D10-200` | SMC |
| Solenoid Fwd/Reverse (5/2 Single Solenoid Valve, 5VDC) | `SYJ3120-SMO-M3-F` | SMC |
| Solenoid On/Off (3/2 Solenoid Valve, 5VDC) | `SY113-SMO-PM3-F` | SMC |
| Solenoid Driver (cable + driver, 1 I/O port → 1 solenoid) | `275-1417` | VEX |
| Tubing | `TUO425B` or `275-0447` | SMC / VEX |
| Flow Meter | `AS1201F-M5-04T` | SMC |
| Fittings for Valves | `KJS04-M3`, `KJL04-M3`, `KQ2S04-M3G`, `KQ2L04-M3G` | SMC |
| Fittings for Reservoirs | `KQ2H03-34S` or `KQ2H03-34AS` | SMC |

**Reading fitting codes.** The letters in the middle tell you the shape: `KJS` /
`KQ2S` straight, `KJL` / `KQ2L` 90° elbow, `KQ2H` reservoir connection.

**Solenoid Driver `275-1417`** — solenoids need more current than a Brain I/O port
can supply directly. This driver sits in between. **One driver, one solenoid.**

---

## How the System Connects

```
Tank  →  Regulator  →  Fitting  →  Tubing  →  Solenoid  →  Tubing  →  Cylinder
(air)     (pressure)                           (valve)                (the mover)
                                                   ↑
                                           electrical signal
                                                   ↑
                                                 Brain
```

Air is stored in the tank before the match. The solenoid holds that air back until
the Brain sends a signal. Once the signal arrives, the valve opens and air pushes
the cylinder.

**The Brain never touches the air at all.** It only sends an electrical signal to
the solenoid, and the solenoid handles the air.

---

## Single Acting vs Double Acting

**Single acting** is pushed by air in one direction only. It returns on an internal
spring. Uses less air.

**Double acting** is pushed by air in both directions. Equally strong extending and
retracting. Uses more air, but gives full control.

**The solenoid has to match.** 5/2 for double acting, 3/2 for single acting. The
first number is how many ports the valve has, the second is how many positions. The
5/2 has five ports because it has to direct air to both sides of the cylinder in
turn.

In the SMC system the difference is just a trailing `S`: `NCJ2D10-200` vs
`NCJ2D10-200S`. Very easy to mix up when ordering.

---

## Air Is Finite

The tank is filled with a pump **before** the match. Once the match starts, there's
no way to refill.

Every time a cylinder moves, air is spent. If your mechanism fires fifty times a
match, work out whether you have enough first. This is why pneumatics need more
planning than motors.

---

## Common Mistakes

**Mixing the VEX and SMC systems.** Fittings and tubing don't always match.

**Thinking the Brain connects directly to the solenoid.** On the SMC system it has
to go through the `275-1417` driver.

**Pairing the wrong solenoid with the cylinder.** 5/2 for double acting, 3/2 for
single acting.

**Skipping the regulator.** First push is hard, last push is feeble.

**Looking for SMC parts in the VEX store.** They're not there.

---

## Legality Note

How many tanks you may use and the maximum pressure are reset every season. The
numbers are deliberately not written here. **Check the current season's Game
Manual.**

---

Part numbers from the [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml) sheet.

---
---

<a name="id"></a>

[English](#en) · **Bahasa Indonesia** · [简体中文](#zh)

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

---
---

<a name="zh"></a>

[English](#en) · [Bahasa Indonesia](#id) · **简体中文**

# 08 — 气动系统

压缩空气系统。适合只需要两个位置的动作 —— 开或关、升或降 —— 而且要求快。

电机也能干同样的事，但更慢、更重，还要占用一个电机位。
气动完全不占电机位。

**合法零件表上有两套独立的系统。** 老的一套用 SMC 工业件，
新的一套用 VEX 自己的零件。编号完全不同。**不要混用这两套系统** ——
接头和气管的尺寸不一定对得上。

---

## VEX 系统

如果你是从零开始，就用这一套。在 VEX 商店买得到，文档也清楚。

| 零件 | 编号 |
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

**怎么看气缸尺寸。** `10mm Bore, 50mm Stroke`。Bore（缸径）= 活塞直径，
决定推力有多大。Stroke（行程）= 能伸出多远。
所有型号缸径都一样（10mm），你唯一要选的就是行程。

**Pressure Regulator（调压阀）** 把储气罐的压力降到安全且稳定的水平。
没有它，第一次动作比最后一次猛得多。

**Shut-off Valve（截止阀）** 在你调机器人的时候切断气路。
基本的安全措施 —— 手指还在那儿气缸就弹出来，是会疼的。

**接头套件** 有三种形状：直的、弯头、三通。三通把一路气分到两个地方。

---

## SMC 系统

由 SMC Pneumatics 生产、比赛允许使用的标准工业件。
**这些编号在 vexrobotics.com 上是查不到的** —— 要从工业经销商那里买。

| 部件 | 编号 | 厂商 |
|---|---|---|
| Reservoir | `US14227-S0400` | SMC |
| Cylinder Single Acting | `NCJ2D10-200S` | SMC |
| Cylinder Double Acting | `NCJ2D10-200` | SMC |
| Solenoid Fwd/Reverse (5/2 Single Solenoid Valve, 5VDC) | `SYJ3120-SMO-M3-F` | SMC |
| Solenoid On/Off (3/2 Solenoid Valve, 5VDC) | `SY113-SMO-PM3-F` | SMC |
| Solenoid Driver（线缆 + 驱动器，1 个 I/O 口 → 1 个电磁阀） | `275-1417` | VEX |
| Tubing | `TUO425B` 或 `275-0447` | SMC / VEX |
| Flow Meter | `AS1201F-M5-04T` | SMC |
| Fittings for Valves | `KJS04-M3`、`KJL04-M3`、`KQ2S04-M3G`、`KQ2L04-M3G` | SMC |
| Fittings for Reservoirs | `KQ2H03-34S` 或 `KQ2H03-34AS` | SMC |

**怎么看接头编号。** 中间的字母表示形状：`KJS` / `KQ2S` 是直通，
`KJL` / `KQ2L` 是 90° 弯头，`KQ2H` 是储气罐接口。

**Solenoid Driver `275-1417`** —— 电磁阀需要的电流比主控 I/O 口
能直接提供的更大，这个驱动器就是中间的桥梁。**一个驱动器对应一个电磁阀。**

---

## 整套系统怎么连

```
储气罐  →  调压阀  →  接头  →  气管  →  电磁阀  →  气管  →  气缸
（空气）   （压力）                      （阀）              （动作部件）
                                          ↑
                                       电信号
                                          ↑
                                        主控
```

空气在比赛前存进储气罐。电磁阀把气憋住，直到主控发出信号。
信号一到，阀门打开，空气推动气缸。

**主控完全不接触空气。** 它只是给电磁阀一个电信号，气由电磁阀来管。

---

## 单作用与双作用

**单作用（Single acting）** 只有一个方向靠气推，回位靠内部弹簧。省气。

**双作用（Double acting）** 两个方向都靠气推，伸出和收回力量一样大。
更费气，但控制更完整。

**电磁阀必须配套。** 5/2 配双作用，3/2 配单作用。
第一个数字是阀上的接口数量，第二个是位置数量。5/2 有五个口，
因为它要轮流把气送到气缸的两侧。

在 SMC 系统里，两者的区别只是末尾多一个 `S`：`NCJ2D10-200` 和
`NCJ2D10-200S`。下单时极容易搞混。

---

## 空气是有限的

储气罐在比赛**之前**用气泵打满。比赛一开始，就没法再补气了。

气缸每动一次就消耗一次气。如果你的机构一场比赛要动五十次，
先算算够不够。这就是气动比电机更需要提前规划的原因。

---

## 常见错误

**混用 VEX 和 SMC 系统。** 接头和气管不一定对得上。

**以为主控直接接电磁阀。** 在 SMC 系统里必须经过 `275-1417` 驱动器。

**电磁阀和气缸配错。** 5/2 配双作用，3/2 配单作用。

**省掉调压阀。** 第一下很猛，最后一下软绵绵。

**去 VEX 商店找 SMC 零件。** 没有。

---

## 关于合法性

允许使用的储气罐数量和最大压力每个赛季都会重新规定。
这里刻意不写具体数字。**请查阅当赛季的 Game Manual。**

---

零件编号来自 [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml) 表格。