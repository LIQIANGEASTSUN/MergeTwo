; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1365 MergeEngine.Configuration.Definitions.WeakReferences.Providers.MergeBoardProvider
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6004EA4 | protected override IBoard ProvideInstance(WeakReference<IBoard, string> reference) { }
; bytes=192 sha256=5c7a071460c966877199be22bc62912000c5f9ee1e066380e2fb4ceacf388f88 status=arm64_complete_bound indexed_start=True
0x06004EA4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06004EA8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004EAC: f5e800f0  adrp x21, #0x7d23000
0x06004EB0: a8125d39  ldrb w8, [x21, #0x744]
0x06004EB4: f40301aa  mov x20, x1
0x06004EB8: f30300aa  mov x19, x0
0x06004EBC: c8000037  tbnz w8, #0, #0x6004ed4
0x06004EC0: 40b600d0  adrp x0, #0x76ce000
0x06004EC4: 00c846f9  ldr x0, [x0, #0xd90]
0x06004EC8: d4ee4597  bl #0x3180a18
0x06004ECC: 28008052  movz w8, #0x1
0x06004ED0: a8121d39  strb w8, [x21, #0x744]
0x06004ED4: 740400b4  cbz x20, #0x6004f60
0x06004ED8: 880240f9  ldr x8, [x20]
0x06004EDC: 730a40f9  ldr x19, [x19, #0x10]
0x06004EE0: e00314aa  mov x0, x20
0x06004EE4: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06004EE8: 20013fd6  blr x9
0x06004EEC: b30300b4  cbz x19, #0x6004f60
0x06004EF0: 4ab600d0  adrp x10, #0x76ce000
0x06004EF4: 680240f9  ldr x8, [x19]
0x06004EF8: 4ac946f9  ldr x10, [x10, #0xd90]
0x06004EFC: f40300aa  mov x20, x0
0x06004F00: 095d4279  ldrh w9, [x8, #0x12e]
0x06004F04: 410140f9  ldr x1, [x10]
0x06004F08: 290100b4  cbz x9, #0x6004f2c
0x06004F0C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06004F10: 4a210091  add x10, x10, #8
0x06004F14: 4b815ff8  ldur x11, [x10, #-8]
0x06004F18: 7f0101eb  cmp x11, x1
0x06004F1C: 00010054  b.eq #0x6004f3c
0x06004F20: 290500f1  subs x9, x9, #1
0x06004F24: 4a410091  add x10, x10, #0x10
0x06004F28: 61ffff54  b.ne #0x6004f14
0x06004F2C: e00313aa  mov x0, x19
0x06004F30: e2031f2a  mov w2, wzr
0x06004F34: f7464597  bl #0x3156b10
0x06004F38: 04000014  b #0x6004f48
0x06004F3C: 490180b9  ldrsw x9, [x10]
0x06004F40: 0811098b  add x8, x8, x9, lsl #4
0x06004F44: 00e10491  add x0, x8, #0x138
0x06004F48: 030840a9  ldp x3, x2, [x0]
0x06004F4C: e00313aa  mov x0, x19
0x06004F50: e10314aa  mov x1, x20
0x06004F54: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06004F58: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004F5C: 60001fd6  br x3
0x06004F60: 53ef4597  bl #0x3180cac

; RVA 0x600433C | public void .ctor() { }
; bytes=72 sha256=f15de8ee023379959e4f632a3072dcb7c8a50468fec4258d044431891e3352bb status=arm64_complete_bound indexed_start=True
0x0600433C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06004340: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004344: f4e800f0  adrp x20, #0x7d23000
0x06004348: 55b600d0  adrp x21, #0x76ce000
0x0600434C: 88165d39  ldrb w8, [x20, #0x745]
0x06004350: b57646f9  ldr x21, [x21, #0xce8]
0x06004354: f30300aa  mov x19, x0
0x06004358: c8000037  tbnz w8, #0, #0x6004370
0x0600435C: 40b600d0  adrp x0, #0x76ce000
0x06004360: 007446f9  ldr x0, [x0, #0xce8]
0x06004364: adf14597  bl #0x3180a18
0x06004368: 28008052  movz w8, #0x1
0x0600436C: 88161d39  strb w8, [x20, #0x745]
0x06004370: a10240f9  ldr x1, [x21]
0x06004374: e00313aa  mov x0, x19
0x06004378: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0600437C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06004380: 1ef6a417  b #0x4941bf8

