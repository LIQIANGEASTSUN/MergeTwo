; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 662 .ItemConsumeSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628B388 | private static void .cctor() { }
; bytes=104 sha256=1efb768c27590ccda37b837c557e2284fec1e223ea718ee4ab45ae04852fde3c status=arm64_complete_bound indexed_start=True
0x0628B388: fe0f1ef8  str x30, [sp, #-0x20]!
0x0628B38C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628B390: d3d400d0  adrp x19, #0x7d25000
0x0628B394: f4a20090  adrp x20, #0x76e7000
0x0628B398: 681e5439  ldrb w8, [x19, #0x507]
0x0628B39C: 94ba42f9  ldr x20, [x20, #0x570]
0x0628B3A0: c8000037  tbnz w8, #0, #0x628b3b8
0x0628B3A4: e0a20090  adrp x0, #0x76e7000
0x0628B3A8: 00b842f9  ldr x0, [x0, #0x570]
0x0628B3AC: 9bd53b97  bl #0x3180a18
0x0628B3B0: 28008052  movz w8, #0x1
0x0628B3B4: 681e1439  strb w8, [x19, #0x507]
0x0628B3B8: 800240f9  ldr x0, [x20]
0x0628B3BC: 39d63b97  bl #0x3180ca0
0x0628B3C0: e1031faa  mov x1, xzr
0x0628B3C4: f30300aa  mov x19, x0
0x0628B3C8: 8d3cd197  bl #0x56da5fc
0x0628B3CC: 880240f9  ldr x8, [x20]
0x0628B3D0: e10313aa  mov x1, x19
0x0628B3D4: 085d40f9  ldr x8, [x8, #0xb8]
0x0628B3D8: 130100f9  str x19, [x8]
0x0628B3DC: 880240f9  ldr x8, [x20]
0x0628B3E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628B3E4: 005d40f9  ldr x0, [x8, #0xb8]
0x0628B3E8: fe0742f8  ldr x30, [sp], #0x20
0x0628B3EC: 76d53b17  b #0x31809c4

; RVA 0x628B3F0 | public void .ctor() { }
; bytes=8 sha256=fadf662e9a6a0b213a72d3492ef8a313e8d0e23ed69db462d536555c9296cf82 status=arm64_complete_bound indexed_start=True
0x0628B3F0: e1031faa  mov x1, xzr
0x0628B3F4: 823cd117  b #0x56da5fc

; RVA 0x628B3F8 | internal bool <TryFindPreferredItemFromHint>b__8_0(VisualComponent component) { }
; bytes=24 sha256=901ad4e3821465cfbf43d73e4ebe8b88c6ad14377fe6be9cea24e1a987297534 status=arm64_complete_bound indexed_start=True
0x0628B3F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x0628B3FC: 810000b4  cbz x1, #0x628b40c
0x0628B400: 20604139  ldrb w0, [x1, #0x58]
0x0628B404: fe0741f8  ldr x30, [sp], #0x10
0x0628B408: c0035fd6  ret
0x0628B40C: 28d63b97  bl #0x3180cac

