; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25780 .TimeCycleSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A77370 | private static void .cctor() { }
; bytes=104 sha256=b3ad57074ea2b141b26fdccdd90871d6d7f66f1ebfe7413dbdeaac9edf4efa75 status=arm64_complete_bound indexed_start=True
0x06A77370: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A77374: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A77378: 939500f0  adrp x19, #0x7d2a000
0x06A7737C: d46500d0  adrp x20, #0x7731000
0x06A77380: 68325c39  ldrb w8, [x19, #0x70c]
0x06A77384: 94e642f9  ldr x20, [x20, #0x5c8]
0x06A77388: c8000037  tbnz w8, #0, #0x6a773a0
0x06A7738C: c06500d0  adrp x0, #0x7731000
0x06A77390: 00e442f9  ldr x0, [x0, #0x5c8]
0x06A77394: a1251c97  bl #0x3180a18
0x06A77398: 28008052  movz w8, #0x1
0x06A7739C: 68321c39  strb w8, [x19, #0x70c]
0x06A773A0: 800240f9  ldr x0, [x20]
0x06A773A4: 3f261c97  bl #0x3180ca0
0x06A773A8: e1031faa  mov x1, xzr
0x06A773AC: f30300aa  mov x19, x0
0x06A773B0: 938cb197  bl #0x56da5fc
0x06A773B4: 880240f9  ldr x8, [x20]
0x06A773B8: e10313aa  mov x1, x19
0x06A773BC: 085d40f9  ldr x8, [x8, #0xb8]
0x06A773C0: 130100f9  str x19, [x8]
0x06A773C4: 880240f9  ldr x8, [x20]
0x06A773C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A773CC: 005d40f9  ldr x0, [x8, #0xb8]
0x06A773D0: fe0742f8  ldr x30, [sp], #0x20
0x06A773D4: 7c251c17  b #0x31809c4

; RVA 0x6A773D8 | public void .ctor() { }
; bytes=8 sha256=06b96ccdcf4b4cfa0b901e088247808ab01f64c2ac8b6f3f70e95ec55fa50f38 status=arm64_complete_bound indexed_start=True
0x06A773D8: e1031faa  mov x1, xzr
0x06A773DC: 888cb117  b #0x56da5fc

; RVA 0x6A773E0 | internal bool <Tick>b__1_0(ValueTuple<Entity, TimeCycleComponent> entity) { }
; bytes=32 sha256=c3a8f863780cb40824a07c423600b06f71dbe79b9324310a2b76de3fb3e5400e status=arm64_complete_bound indexed_start=True
0x06A773E0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A773E4: 200040f9  ldr x0, [x1]
0x06A773E8: e1031faa  mov x1, xzr
0x06A773EC: 3e3d0094  bl #0x6a868e4
0x06A773F0: e803202a  mvn w8, w0
0x06A773F4: 00010012  and w0, w8, #1
0x06A773F8: fe0741f8  ldr x30, [sp], #0x10
0x06A773FC: c0035fd6  ret

