; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 672 .PersistenceSystem.<>c__DisplayClass23_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628CFD8 | public void .ctor() { }
; bytes=8 sha256=385b065008d3305b81acfd0bb92f78b9f1a158920e40b659dab1fb73647346b1 status=arm64_complete_bound indexed_start=True
0x0628CFD8: e1031faa  mov x1, xzr
0x0628CFDC: 8835d117  b #0x56da5fc

; RVA 0x628E00C | internal void <SerializeComponent>b__0(ISerializableComponent serializable) { }
; bytes=304 sha256=4da55effdfb4f16b738eaeb4c03214e2baf1d46a65dd14c6e4ed2f693d765d2c status=arm64_complete_bound indexed_start=True
0x0628E00C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628E010: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628E014: b5d400f0  adrp x21, #0x7d25000
0x0628E018: a87e5439  ldrb w8, [x21, #0x51f]
0x0628E01C: f30301aa  mov x19, x1
0x0628E020: f40300aa  mov x20, x0
0x0628E024: 28010037  tbnz w8, #0, #0x628e048
0x0628E028: 009e00d0  adrp x0, #0x7650000
0x0628E02C: 006846f9  ldr x0, [x0, #0xcd0]
0x0628E030: 7aca3b97  bl #0x3180a18
0x0628E034: c0a200b0  adrp x0, #0x76e7000
0x0628E038: 00d443f9  ldr x0, [x0, #0x7a8]
0x0628E03C: 77ca3b97  bl #0x3180a18
0x0628E040: 28008052  movz w8, #0x1
0x0628E044: a87e1439  strb w8, [x21, #0x51f]
0x0628E048: 930700b4  cbz x19, #0x628e138
0x0628E04C: d5a200b0  adrp x21, #0x76e7000
0x0628E050: 680240f9  ldr x8, [x19]
0x0628E054: b5d643f9  ldr x21, [x21, #0x7a8]
0x0628E058: 940a40f9  ldr x20, [x20, #0x10]
0x0628E05C: 095d4279  ldrh w9, [x8, #0x12e]
0x0628E060: a10240f9  ldr x1, [x21]
0x0628E064: 290100b4  cbz x9, #0x628e088
0x0628E068: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628E06C: 4a210091  add x10, x10, #8
0x0628E070: 4b815ff8  ldur x11, [x10, #-8]
0x0628E074: 7f0101eb  cmp x11, x1
0x0628E078: 00010054  b.eq #0x628e098
0x0628E07C: 290500f1  subs x9, x9, #1
0x0628E080: 4a410091  add x10, x10, #0x10
0x0628E084: 61ffff54  b.ne #0x628e070
0x0628E088: e00313aa  mov x0, x19
0x0628E08C: e2031f2a  mov w2, wzr
0x0628E090: a0223b97  bl #0x3156b10
0x0628E094: 04000014  b #0x628e0a4
0x0628E098: 490180b9  ldrsw x9, [x10]
0x0628E09C: 0811098b  add x8, x8, x9, lsl #4
0x0628E0A0: 00e10491  add x0, x8, #0x138
0x0628E0A4: 080440a9  ldp x8, x1, [x0]
0x0628E0A8: e00313aa  mov x0, x19
0x0628E0AC: 00013fd6  blr x8
0x0628E0B0: 680240f9  ldr x8, [x19]
0x0628E0B4: a10240f9  ldr x1, [x21]
0x0628E0B8: f50300aa  mov x21, x0
0x0628E0BC: 095d4279  ldrh w9, [x8, #0x12e]
0x0628E0C0: 290100b4  cbz x9, #0x628e0e4
0x0628E0C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628E0C8: 4a210091  add x10, x10, #8
0x0628E0CC: 4b815ff8  ldur x11, [x10, #-8]
0x0628E0D0: 7f0101eb  cmp x11, x1
0x0628E0D4: 00010054  b.eq #0x628e0f4
0x0628E0D8: 290500f1  subs x9, x9, #1
0x0628E0DC: 4a410091  add x10, x10, #0x10
0x0628E0E0: 61ffff54  b.ne #0x628e0cc
0x0628E0E4: 22008052  movz w2, #0x1
0x0628E0E8: e00313aa  mov x0, x19
0x0628E0EC: 89223b97  bl #0x3156b10
0x0628E0F0: 05000014  b #0x628e104
0x0628E0F4: 490140b9  ldr w9, [x10]
0x0628E0F8: 29050011  add w9, w9, #1
0x0628E0FC: 08d1298b  add x8, x8, w9, sxtw #4
0x0628E100: 00e10491  add x0, x8, #0x138
0x0628E104: 080440a9  ldp x8, x1, [x0]
0x0628E108: e00313aa  mov x0, x19
0x0628E10C: 00013fd6  blr x8
0x0628E110: 540100b4  cbz x20, #0x628e138
0x0628E114: 089e00d0  adrp x8, #0x7650000
0x0628E118: 086946f9  ldr x8, [x8, #0xcd0]
0x0628E11C: e20300aa  mov x2, x0
0x0628E120: e00314aa  mov x0, x20
0x0628E124: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628E128: 030140f9  ldr x3, [x8]
0x0628E12C: e10315aa  mov x1, x21
0x0628E130: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628E134: 0d53b117  b #0x4ee2d68
0x0628E138: ddca3b97  bl #0x3180cac

