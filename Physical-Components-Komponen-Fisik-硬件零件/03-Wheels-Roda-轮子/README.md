<a name="top"></a>

**English** · [Bahasa Indonesia](#id) · [简体中文](#zh)

---

<a name="en"></a>

# 03 — Wheels

Wheels in VEX aren't just for driving. Most of them are actually used for intakes —
pulling game objects into the robot. Different purpose, different wheel.

---

## Traction Wheels

Ordinary wheels. Strong grip, forward and backward only.

| Part | Code |
|---|---|
| 2.75" Wheel | `276-1496` |
| 3.25" Traction Wheel | `276-3525` |
| 5" Wheel | `276-1498` |
| 4" High Traction Tire | `276-1489` |
| 6" Wheel Leg | `276-2218` |

---

## Omni-Directional Wheels

Wheels with small rollers around the rim.

| Part | Code |
|---|---|
| 2" Omni-Directional Wheel | `276-9044` |
| 2.75" Omni-Directional Wheel - Double Roller | `276-1902` |
| 3.25" Omni-Directional Wheel | `276-3526` |
| 4" Omni-Directional Wheel | `276-2185` |

> In the sheet, `276-9044` is written as `2'` (two feet). That's a typo — it means `2"`.

**What they do.** They drive forward normally, but they can also slide sideways
without resisting.

**Why that matters.** When a robot turns, the front and rear wheels travel paths of
different lengths. If everything is traction, one of them has to scrub — turning
gets heavy and the motors heat up. Omni wheels remove that problem.

These are the most common drivetrain wheel in VEX.

---

## Mecanum Wheels

| Part | Code |
|---|---|
| 2" Mecanum Wheel | `217-7400` |
| 2" Mecanum Wheels V2 | `276-9041` |
| 4" Mecanum Wheel | `276-1447` |

The rollers sit at 45°. The robot can strafe fully sideways without rotating.

**The downside:** weak grip, and easy for an opponent to push around.

---

## Anti-Static Wheels

| Part | Code |
|---|---|
| 2.75" (220mm Travel) Anti-Static Wheel | `276-8098` |
| 3.25" (260mm Travel) Anti-Static Wheel | `276-7771` |
| 4" (320mm Travel) Anti-Static Wheel | `276-8103` |
| 2.75" (220mm Travel) Omni-Directional Anti-Static | `276-8106` |
| 3.25" (260mm Travel) Omni-Directional Anti-Static | `276-8026` |
| 4" (320mm Travel) Omni-Directional Anti-Static | `276-8107` |

**Notice the naming.** These wheels are described by **distance travelled per
revolution**, not just diameter. `3.25" (260mm Travel)` means one revolution covers
260mm.

That's genuinely useful for autonomous — you don't have to work out the
circumference yourself.

**Why anti-static.** The field carpet builds up static charge. Enough of it can
reset the Brain in the middle of a match. These wheels drain the charge to the
floor.

---

## Compression Wheels

Solid rubber wheels. For intakes and rollers, not drivetrains.

| Diameter | 30A | 40A | 60A |
|---|---|---|---|
| 1.625" | `276-8877` | `276-8878` | `276-8879` |
| 2" | `276-8880` | `276-8881` | `276-8882` |

---

## Straight Flex Wheels

Wheels with hollow spokes that squash.

| Size | Bore | 30A | 40A | 60A |
|---|---|---|---|---|
| 1.625" OD × 1/2" WD | 1/2" Hex | `217-6350` | `217-6351` | `217-6352` |
| 2" OD × 1/2" WD | 1/2" Hex | `217-6353` | `217-6354` | `217-6446` |
| 3" OD × 1" WD | 1-1/8" ID | `217-6447` | `217-6448` | `217-6449` |
| 4" OD × 1" WD | 1-1/8" ID | `217-6450` | `217-6451` | `217-6452` |

**What they do.** Pull objects in. The hollow spokes let the wheel conform to
whatever it touches — far more contact area than a solid wheel.

**The downside.** Because they squash, the distance per revolution keeps changing.
Don't put flex wheels on a drivetrain whose autonomous relies on encoders.

### Reading the sizes

| Code | Meaning |
|---|---|
| `OD` | Outer diameter |
| `WD` | Wheel width |
| `ID` | Inner bore diameter. `1-1/8"` means **you need a hub** — see folder 04. |
| `Hex Bore` | Hexagonal bore, mounts straight onto a hex shaft |

### Reading durometer

Shore A scale — a measure of rubber hardness.

| Durometer | Character | When to use |
|---|---|---|
| 30A | Softest, strongest grip, wears out fastest | Slippery or light objects |
| 40A | Middle ground | General intakes |
| 60A | Hardest, most durable, most slippery | Heavy objects being pushed |

**Lower number means softer.** This is the one people get backwards most often.

---

## Tank Tread & Conveyor

| Part | Code |
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

**Tank tread** — a tank-style belt. Wide contact patch, but heavy and high
friction. Rarely used in competitive V5.

**Conveyor** — a belt that moves objects inside the robot. The inserts come in
three heights; taller ones hold objects in better.

---

## Common Mistakes

**Buying 3" flex wheels without a hub.** The wheel just spins freely on the shaft.
It genuinely needs a hub.

**Choosing 60A because it's "stronger".** Hard doesn't mean grippy. 60A is the
most slippery.

**Flex wheels on a drivetrain.** Autonomous will keep missing.

**All traction wheels.** The robot struggles to turn.

**Confusing anti-static with regular.** Both are "3.25 inch", different parts.

---

Part numbers from the [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml) sheet.

---
---

<a name="id"></a>

[English](#en) · **Bahasa Indonesia** · [简体中文](#zh)

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

---
---

<a name="zh"></a>

[English](#en) · [Bahasa Indonesia](#id) · **简体中文**

# 03 — 轮子

VEX 里的轮子不只是用来跑的。大部分其实是用在吸入机构上 ——
把场地道具卷进机器人里。用途不同，轮子也不同。

---

## 摩擦轮（Traction Wheel）

普通轮子。抓地力强，只能前后走。

| 零件 | 编号 |
|---|---|
| 2.75" Wheel | `276-1496` |
| 3.25" Traction Wheel | `276-3525` |
| 5" Wheel | `276-1498` |
| 4" High Traction Tire | `276-1489` |
| 6" Wheel Leg | `276-2218` |

---

## 全向轮（Omni-Directional Wheel）

轮缘上带一圈小滚子的轮子。

| 零件 | 编号 |
|---|---|
| 2" Omni-Directional Wheel | `276-9044` |
| 2.75" Omni-Directional Wheel - Double Roller | `276-1902` |
| 3.25" Omni-Directional Wheel | `276-3526` |
| 4" Omni-Directional Wheel | `276-2185` |

> 表格里 `276-9044` 写成了 `2'`（两英尺）。那是笔误 —— 应该是 `2"`。

**它能做什么。** 正常往前走没问题，同时也能不受阻碍地横向滑动。

**为什么重要。** 机器人转弯时，前轮和后轮走的路径长度不一样。
如果全用摩擦轮，总有一个要被硬拖着走 —— 转弯变沉，电机发热。
全向轮消除了这个问题。

这是 VEX 里最常见的底盘轮。

---

## 麦克纳姆轮（Mecanum Wheel）

| 零件 | 编号 |
|---|---|
| 2" Mecanum Wheel | `217-7400` |
| 2" Mecanum Wheels V2 | `276-9041` |
| 4" Mecanum Wheel | `276-1447` |

滚子是 45° 斜的。机器人可以完全横向平移，不用转身。

**缺点：** 抓地力弱，容易被对手推着走。

---

## 防静电轮（Anti-Static Wheel）

| 零件 | 编号 |
|---|---|
| 2.75" (220mm Travel) Anti-Static Wheel | `276-8098` |
| 3.25" (260mm Travel) Anti-Static Wheel | `276-7771` |
| 4" (320mm Travel) Anti-Static Wheel | `276-8103` |
| 2.75" (220mm Travel) Omni-Directional Anti-Static | `276-8106` |
| 3.25" (260mm Travel) Omni-Directional Anti-Static | `276-8026` |
| 4" (320mm Travel) Omni-Directional Anti-Static | `276-8107` |

**注意它的命名方式。** 这类轮子是用**每转行进距离**来标注的，不只是直径。
`3.25" (260mm Travel)` 意思是转一圈走 260mm。

这对自动阶段特别有用 —— 你不用自己算周长。

**为什么要防静电。** 场地地毯会积累静电。静电积到一定程度，
可能在比赛中途把主控重启。这种轮子把电荷导到地面。

---

## 压缩轮（Compression Wheel）

实心橡胶轮。用于吸入机构和滚轮，不是底盘。

| 直径 | 30A | 40A | 60A |
|---|---|---|---|
| 1.625" | `276-8877` | `276-8878` | `276-8879` |
| 2" | `276-8880` | `276-8881` | `276-8882` |

---

## 柔性轮（Straight Flex Wheel）

辐条中空、可以被压扁的轮子。

| 尺寸 | 内孔 | 30A | 40A | 60A |
|---|---|---|---|---|
| 1.625" OD × 1/2" WD | 1/2" Hex | `217-6350` | `217-6351` | `217-6352` |
| 2" OD × 1/2" WD | 1/2" Hex | `217-6353` | `217-6354` | `217-6446` |
| 3" OD × 1" WD | 1-1/8" ID | `217-6447` | `217-6448` | `217-6449` |
| 4" OD × 1" WD | 1-1/8" ID | `217-6450` | `217-6451` | `217-6452` |

**它能做什么。** 把道具卷进来。中空辐条让轮子能贴合所接触物体的形状 ——
接触面积比实心轮大得多。

**缺点。** 因为会被压扁，每转行进的距离一直在变。
不要把柔性轮装在依赖编码器跑自动的底盘上。

### 怎么看尺寸

| 代号 | 含义 |
|---|---|
| `OD` | 外径 |
| `WD` | 轮宽 |
| `ID` | 中心孔径。`1-1/8"` 表示**需要配轮毂** —— 见 04 文件夹。 |
| `Hex Bore` | 六角孔，直接套在六角轴上 |

### 怎么看硬度（Durometer）

Shore A 标度 —— 衡量橡胶硬度的指标。

| 硬度 | 特性 | 什么时候用 |
|---|---|---|
| 30A | 最软，抓得最牢，磨损最快 | 滑溜或轻的道具 |
| 40A | 折中 | 通用吸入机构 |
| 60A | 最硬，最耐用，也最滑 | 靠推动的重物 |

**数字越小越软。** 这一点最多人搞反。

---

## 履带和输送带

| 零件 | 编号 |
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

**Tank tread（履带）** —— 坦克式履带。接地面积大，但重、摩擦大。
在竞技 V5 里很少用。

**Conveyor（输送带）** —— 在机器人内部搬运道具的带子。
插件有三种高度，越高越能兜住道具不掉出来。

---

## 常见错误

**买了 3" 柔性轮却没买轮毂。** 轮子在轴上空转。它是真的需要轮毂。

**因为"更硬更强"而选 60A。** 硬不等于抓地。60A 是最滑的。

**把柔性轮装在底盘上。** 自动阶段会一直跑偏。

**全部用摩擦轮。** 机器人转弯很吃力。

**把防静电轮和普通轮搞混。** 两个都叫"3.25 英寸"，是不同零件。

---

零件编号来自 [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml) 表格。