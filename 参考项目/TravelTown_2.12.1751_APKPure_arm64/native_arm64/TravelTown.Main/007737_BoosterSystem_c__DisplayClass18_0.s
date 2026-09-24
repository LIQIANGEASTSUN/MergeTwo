; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7737 .BoosterSystem.<>c__DisplayClass18_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BDE84 | public void .ctor() { }
; bytes=8 sha256=6ef0fc23c4dc476f48b61325471d09d31f66fb50797769f3b3881f04f41e5d9f status=arm64_complete_bound indexed_start=True
0x065BDE84: e1031faa  mov x1, xzr
0x065BDE88: dd71c417  b #0x56da5fc

; RVA 0x65BEEB0 | internal bool <GetOrCreateBoosterItemEntity>b__0(BoosterIdComponent c) { }
; bytes=96 sha256=e893618db210a87577fa862e0e87ea404bdadadad3c67c0f120161bffe28927e status=arm64_complete_bound indexed_start=True
0x065BEEB0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065BEEB4: f44f01a9  stp x20, x19, [sp, #0x10]
0x065BEEB8: 55bb00b0  adrp x21, #0x7d27000
0x065BEEBC: a8226439  ldrb w8, [x21, #0x908]
0x065BEEC0: f40301aa  mov x20, x1
0x065BEEC4: f30300aa  mov x19, x0
0x065BEEC8: c8000037  tbnz w8, #0, #0x65beee0
0x065BEECC: 008600b0  adrp x0, #0x767f000
0x065BEED0: 00e843f9  ldr x0, [x0, #0x7d0]
0x065BEED4: d1062f97  bl #0x3180a18
0x065BEED8: 28008052  movz w8, #0x1
0x065BEEDC: a8222439  strb w8, [x21, #0x908]
0x065BEEE0: 740100b4  cbz x20, #0x65bef0c
0x065BEEE4: 088600b0  adrp x8, #0x767f000
0x065BEEE8: 08e943f9  ldr x8, [x8, #0x7d0]
0x065BEEEC: e00314aa  mov x0, x20
0x065BEEF0: 010140f9  ldr x1, [x8]
0x065BEEF4: 9cb49897  bl #0x4bec164
0x065BEEF8: 610a40f9  ldr x1, [x19, #0x10]
0x065BEEFC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065BEF00: e2031faa  mov x2, xzr
0x065BEF04: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065BEF08: 5aaebc17  b #0x54ea870
0x065BEF0C: 68072f97  bl #0x3180cac

