; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25769 .ResourceItemDropSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A74314 | private static void .cctor() { }
; bytes=104 sha256=6d7bffb76ef21efdf91d091d687dd9bb099fe8fcec72dfc7c0b4e0e1c5c4acad status=arm64_complete_bound indexed_start=True
0x06A74314: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A74318: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7431C: b39500d0  adrp x19, #0x7d2a000
0x06A74320: f46500b0  adrp x20, #0x7731000
0x06A74324: 68de5b39  ldrb w8, [x19, #0x6f7]
0x06A74328: 941a42f9  ldr x20, [x20, #0x430]
0x06A7432C: c8000037  tbnz w8, #0, #0x6a74344
0x06A74330: e06500b0  adrp x0, #0x7731000
0x06A74334: 001842f9  ldr x0, [x0, #0x430]
0x06A74338: b8311c97  bl #0x3180a18
0x06A7433C: 28008052  movz w8, #0x1
0x06A74340: 68de1b39  strb w8, [x19, #0x6f7]
0x06A74344: 800240f9  ldr x0, [x20]
0x06A74348: 56321c97  bl #0x3180ca0
0x06A7434C: e1031faa  mov x1, xzr
0x06A74350: f30300aa  mov x19, x0
0x06A74354: aa98b197  bl #0x56da5fc
0x06A74358: 880240f9  ldr x8, [x20]
0x06A7435C: e10313aa  mov x1, x19
0x06A74360: 085d40f9  ldr x8, [x8, #0xb8]
0x06A74364: 130100f9  str x19, [x8]
0x06A74368: 880240f9  ldr x8, [x20]
0x06A7436C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A74370: 005d40f9  ldr x0, [x8, #0xb8]
0x06A74374: fe0742f8  ldr x30, [sp], #0x20
0x06A74378: 93311c17  b #0x31809c4

; RVA 0x6A7437C | public void .ctor() { }
; bytes=8 sha256=e6467e40c01c4485c79841f3f7fb15e61fd8cb044df7e8d93f45ef7f79612e66 status=arm64_complete_bound indexed_start=True
0x06A7437C: e1031faa  mov x1, xzr
0x06A74380: 9f98b117  b #0x56da5fc

; RVA 0x6A74384 | internal bool <Tick>b__4_0(ValueTuple<Entity, BoardTilePositionComponent, IdComponent, BornComponent, ItemMergedComponent> queryEntity) { }
; bytes=32 sha256=a1dd14c45dc8d4313373c4d1addca6bce65e01f17a2aef0dd21bb85a233ec08c status=arm64_complete_bound indexed_start=True
0x06A74384: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A74388: 200040f9  ldr x0, [x1]
0x06A7438C: e1031faa  mov x1, xzr
0x06A74390: 55490094  bl #0x6a868e4
0x06A74394: e803202a  mvn w8, w0
0x06A74398: 00010012  and w0, w8, #1
0x06A7439C: fe0741f8  ldr x30, [sp], #0x10
0x06A743A0: c0035fd6  ret

