; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25774 .SplitSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7616C | private static void .cctor() { }
; bytes=104 sha256=6727f09600b4de3153fb6cedd19585946314b5685314771371cb579842e7ca9e status=arm64_complete_bound indexed_start=True
0x06A7616C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A76170: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A76174: b3950090  adrp x19, #0x7d2a000
0x06A76178: d46500f0  adrp x20, #0x7731000
0x06A7617C: 68125c39  ldrb w8, [x19, #0x704]
0x06A76180: 949a42f9  ldr x20, [x20, #0x530]
0x06A76184: c8000037  tbnz w8, #0, #0x6a7619c
0x06A76188: c06500f0  adrp x0, #0x7731000
0x06A7618C: 009842f9  ldr x0, [x0, #0x530]
0x06A76190: 222a1c97  bl #0x3180a18
0x06A76194: 28008052  movz w8, #0x1
0x06A76198: 68121c39  strb w8, [x19, #0x704]
0x06A7619C: 800240f9  ldr x0, [x20]
0x06A761A0: c02a1c97  bl #0x3180ca0
0x06A761A4: e1031faa  mov x1, xzr
0x06A761A8: f30300aa  mov x19, x0
0x06A761AC: 1491b197  bl #0x56da5fc
0x06A761B0: 880240f9  ldr x8, [x20]
0x06A761B4: e10313aa  mov x1, x19
0x06A761B8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A761BC: 130100f9  str x19, [x8]
0x06A761C0: 880240f9  ldr x8, [x20]
0x06A761C4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A761C8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A761CC: fe0742f8  ldr x30, [sp], #0x20
0x06A761D0: fd291c17  b #0x31809c4

; RVA 0x6A761D4 | public void .ctor() { }
; bytes=8 sha256=637b87df5d970017733ebf940518e5653578898d3e4da7a554c2abcf09c17428 status=arm64_complete_bound indexed_start=True
0x06A761D4: e1031faa  mov x1, xzr
0x06A761D8: 0991b117  b #0x56da5fc

; RVA 0x6A761DC | internal int <FindNearestPosition>b__9_0(ValueTuple<Entity, BoardTilePositionComponent> e) { }
; bytes=8 sha256=c284374dd3c4e6853c28106ef7a9bed989c1c15635d14fc3131dabe43632d003 status=arm64_complete_bound indexed_start=True
0x06A761DC: e00302aa  mov x0, x2
0x06A761E0: c0035fd6  ret

