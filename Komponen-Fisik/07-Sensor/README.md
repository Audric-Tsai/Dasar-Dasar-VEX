<a name="top"></a>

**English** · [Bahasa Indonesia](#id) · [简体中文](#zh)

---

<a name="en"></a>

# 07 — Sensors

The robot's eyes. Without sensors, autonomous is just guessing.

**Two port types.** Smart sensors plug into smart ports (the same ones motors
use). 3-wire sensors plug into 3-wire ports. Different connectors, different
parts, not interchangeable.

---

## Smart Sensors

| Part | Code |
|---|---|
| Vision Sensor | `276-4850` |
| AI Vision Sensor | `276-8659` |
| Distance Sensor | `276-4852` |
| Inertial Sensor | `276-4855` |
| Rotation Sensor | `276-6050` |
| Optical Sensor | `276-7043` |
| V5 GPS Sensor | `276-7405` |

**Inertial Sensor** — reads which way the robot is facing. **This is the most
important sensor for autonomous.** Without it, your turns depend on time or
encoders, and both go wrong when the wheels slip. With an inertial, the robot
knows how many degrees it has actually turned.

**Rotation Sensor** — counts rotation on a part that has no motor. Useful for an
arm driven by rubber bands, or an odometry wheel that just follows along.

**Distance Sensor** — measures distance to whatever is in front of it.

**Optical Sensor** — detects colour and movement.

**Vision Sensor** — a camera. Can be trained to recognise coloured objects. The
**AI Vision Sensor** is the newer version, better at recognising game objects.

**GPS Sensor** — reads the robot's position on the field using code strips on the
field walls. Only works if the field actually has those strips.

---

## 3-Wire Sensors

| Part | Code |
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

**Bumper Switch** — a large button that triggers on contact. Most often used to
mark that an arm has reached its limit.

**Limit Switch** — same job, small body with a lever. Fits in tight spaces.

**Potentiometer** — reads rotation angle, up to about 250°. For arms that don't
rotate all the way round.

**Line Tracker** — distinguishes light and dark surfaces.

**Ultrasonic Range Finder** — measures distance with sound waves. The cheap
version of the Distance Sensor, but less accurate.

**Optical Shaft Encoder** — counts shaft rotation. If you're using V5 motors, you
already have encoders inside them, so this is rarely needed.

**Yaw Rate Gyroscope V1.0** — an old sensor. The Inertial Sensor is far better.
Don't buy this if you're starting from scratch.

---

## What to Buy First

If money is tight and you're just starting autonomous:

1. **Inertial Sensor** — biggest impact by far
2. **Distance Sensor** — for stopping at a set distance
3. **Optical Sensor** — if the season involves coloured objects

The rest can wait.

---

## Common Mistakes

**Buying the Yaw Rate Gyroscope.** That's the old generation. Get the Inertial
Sensor.

**Buying an Optical Shaft Encoder while using V5 motors.** The motors already have
encoders.

**Relying on the GPS Sensor without checking the field.** If your practice field
has no code strips, the sensor reads nothing.

---

Part numbers from the [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml) sheet.

---
---

<a name="id"></a>

[English](#en) · **Bahasa Indonesia** · [简体中文](#zh)

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

---
---

<a name="zh"></a>

[English](#en) · [Bahasa Indonesia](#id) · **简体中文**

# 07 — 传感器

机器人的眼睛。没有传感器，自动阶段就只是在瞎猜。

**两种端口类型。** 智能传感器插智能端口（和电机用的是同一种）。
三线传感器插三线端口。接口不同，零件不同，不能互换。

---

## 智能传感器

| 零件 | 编号 |
|---|---|
| Vision Sensor | `276-4850` |
| AI Vision Sensor | `276-8659` |
| Distance Sensor | `276-4852` |
| Inertial Sensor | `276-4855` |
| Rotation Sensor | `276-6050` |
| Optical Sensor | `276-7043` |
| V5 GPS Sensor | `276-7405` |

**Inertial Sensor（惯性传感器）** —— 读取机器人的朝向。
**这是自动阶段最重要的传感器。** 没有它，转弯只能靠时间或编码器，
而轮子一打滑这两者都会出错。有了惯性传感器，机器人知道自己实际转了多少度。

**Rotation Sensor（旋转传感器）** —— 用来测量没有电机的部件的转动。
适合橡皮筋驱动的机械臂，或者只是跟着滚的里程计轮。

**Distance Sensor（距离传感器）** —— 测量到前方物体的距离。

**Optical Sensor（光学传感器）** —— 检测颜色和运动。

**Vision Sensor（视觉传感器）** —— 摄像头，可以训练它识别有颜色的物体。
**AI Vision Sensor** 是更新的版本，识别场地道具更聪明。

**GPS Sensor** —— 通过场地围栏上的编码条读取机器人在场上的位置。
只有场地确实装了那些编码条才管用。

---

## 三线传感器

| 零件 | 编号 |
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

**Bumper Switch（碰撞开关）** —— 一个大按钮，被碰到就触发。
最常用来标记机械臂已经到达极限位置。

**Limit Switch（限位开关）** —— 功能一样，体积小、带拨杆。能塞进窄的地方。

**Potentiometer（电位器）** —— 读取转动角度，最多大约 250°。
适合不会整圈转动的机械臂。

**Line Tracker（循线传感器）** —— 区分明暗表面。

**Ultrasonic Range Finder（超声波测距）** —— 用声波测距离。
是距离传感器的廉价替代，但精度差一些。

**Optical Shaft Encoder（光电编码器）** —— 计算轴的转动。
如果你用的是 V5 电机，电机内部已经有编码器了，所以这个很少需要。

**Yaw Rate Gyroscope V1.0（偏航角速度陀螺仪）** —— 老一代传感器。
惯性传感器好太多了。如果你是从零开始，不要买这个。

---

## 优先买哪些

如果预算有限，而你刚开始做自动程序：

1. **Inertial Sensor** —— 影响最大
2. **Distance Sensor** —— 用来在固定距离停下
3. **Optical Sensor** —— 如果这个赛季有带颜色的道具

其余的可以等。

---

## 常见错误

**买了 Yaw Rate Gyroscope。** 那是上一代的东西，要买惯性传感器。

**用着 V5 电机还去买光电编码器。** 电机里已经有编码器了。

**没确认场地就依赖 GPS 传感器。** 如果你的训练场地没有编码条，传感器什么也读不到。

---

零件编号来自 [VEX V5 Robotics Competition - Legal Parts](https://docs.google.com/spreadsheets/d/e/2PACX-1vQxumg3GopriUY8RF5cBCl_KomUCh_OeFnYosLip3rnEFuFYWdneuZUBEyODj52kCqCQCtvD3J2P4EQ/pubhtml) 表格。