; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33875 .SkipCooldownProvider.<>c__DisplayClass7_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A63458 | public void .ctor() { }
; bytes=8 sha256=72801a72f3f3fede6dc0dd775e0119a890ee7dd8b9b1dcf899f6670d887cdfc1 status=arm64_complete_bound indexed_start=True
0x06A63458: e1031faa  mov x1, xzr
0x06A6345C: 68dcb117  b #0x56da5fc

; RVA 0x6A638FC | internal bool <GetTimeLeft>b__0(ISkipCooldownStrategy strategy) { }
; bytes=168 sha256=4ae33fff8f3e020cb5a4b89389b74824229e25779998fc8ff681a3bd6e314610 status=arm64_complete_bound indexed_start=True
0x06A638FC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A63900: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A63904: 359600f0  adrp x21, #0x7d2a000
0x06A63908: a8125a39  ldrb w8, [x21, #0x684]
0x06A6390C: f30301aa  mov x19, x1
0x06A63910: f40300aa  mov x20, x0
0x06A63914: c8000037  tbnz w8, #0, #0x6a6392c
0x06A63918: 606600b0  adrp x0, #0x7730000
0x06A6391C: 008044f9  ldr x0, [x0, #0x900]
0x06A63920: 3e741c97  bl #0x3180a18
0x06A63924: 28008052  movz w8, #0x1
0x06A63928: a8121a39  strb w8, [x21, #0x684]
0x06A6392C: b30300b4  cbz x19, #0x6a639a0
0x06A63930: 6a6600b0  adrp x10, #0x7730000
0x06A63934: 680240f9  ldr x8, [x19]
0x06A63938: 4a8144f9  ldr x10, [x10, #0x900]
0x06A6393C: 940a40f9  ldr x20, [x20, #0x10]
0x06A63940: 095d4279  ldrh w9, [x8, #0x12e]
0x06A63944: 410140f9  ldr x1, [x10]
0x06A63948: 290100b4  cbz x9, #0x6a6396c
0x06A6394C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A63950: 4a210091  add x10, x10, #8
0x06A63954: 4b815ff8  ldur x11, [x10, #-8]
0x06A63958: 7f0101eb  cmp x11, x1
0x06A6395C: 00010054  b.eq #0x6a6397c
0x06A63960: 290500f1  subs x9, x9, #1
0x06A63964: 4a410091  add x10, x10, #0x10
0x06A63968: 61ffff54  b.ne #0x6a63954
0x06A6396C: e00313aa  mov x0, x19
0x06A63970: e2031f2a  mov w2, wzr
0x06A63974: 67cc1b97  bl #0x3156b10
0x06A63978: 04000014  b #0x6a63988
0x06A6397C: 490180b9  ldrsw x9, [x10]
0x06A63980: 0811098b  add x8, x8, x9, lsl #4
0x06A63984: 00e10491  add x0, x8, #0x138
0x06A63988: 030840a9  ldp x3, x2, [x0]
0x06A6398C: e00313aa  mov x0, x19
0x06A63990: e10314aa  mov x1, x20
0x06A63994: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A63998: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A6399C: 60001fd6  br x3
0x06A639A0: c3741c97  bl #0x3180cac

