; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25814 .TileConfigurationModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7E120 | private static void .cctor() { }
; bytes=104 sha256=11a62fdd863b7ea9a3de5636159b2fee5df515204e38dca21f846e7135f87910 status=arm64_complete_bound indexed_start=True
0x06A7E120: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7E124: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7E128: 73950090  adrp x19, #0x7d2a000
0x06A7E12C: 946500f0  adrp x20, #0x7731000
0x06A7E130: 683a5d39  ldrb w8, [x19, #0x74e]
0x06A7E134: 94fe44f9  ldr x20, [x20, #0x9f8]
0x06A7E138: c8000037  tbnz w8, #0, #0x6a7e150
0x06A7E13C: 806500f0  adrp x0, #0x7731000
0x06A7E140: 00fc44f9  ldr x0, [x0, #0x9f8]
0x06A7E144: 350a1c97  bl #0x3180a18
0x06A7E148: 28008052  movz w8, #0x1
0x06A7E14C: 683a1d39  strb w8, [x19, #0x74e]
0x06A7E150: 800240f9  ldr x0, [x20]
0x06A7E154: d30a1c97  bl #0x3180ca0
0x06A7E158: e1031faa  mov x1, xzr
0x06A7E15C: f30300aa  mov x19, x0
0x06A7E160: 2771b197  bl #0x56da5fc
0x06A7E164: 880240f9  ldr x8, [x20]
0x06A7E168: e10313aa  mov x1, x19
0x06A7E16C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A7E170: 130100f9  str x19, [x8]
0x06A7E174: 880240f9  ldr x8, [x20]
0x06A7E178: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7E17C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A7E180: fe0742f8  ldr x30, [sp], #0x20
0x06A7E184: 100a1c17  b #0x31809c4

; RVA 0x6A7E188 | public void .ctor() { }
; bytes=8 sha256=af2f02e34bbf71bdf7253b86c193b18c6da662329c1d2502fbbceb845eb47c3a status=arm64_complete_bound indexed_start=True
0x06A7E188: e1031faa  mov x1, xzr
0x06A7E18C: 1c71b117  b #0x56da5fc

; RVA 0x6A7E190 | internal int <SetTileConfiguration>b__5_0(DynamicBoardCellConfiguration tc) { }
; bytes=24 sha256=a3cf9ff44632009abc1028fc06b05a605603b3ec440f0c07498f7dfa9e3db3ce status=arm64_complete_bound indexed_start=True
0x06A7E190: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A7E194: 810000b4  cbz x1, #0x6a7e1a4
0x06A7E198: 203440b9  ldr w0, [x1, #0x34]
0x06A7E19C: fe0741f8  ldr x30, [sp], #0x10
0x06A7E1A0: c0035fd6  ret
0x06A7E1A4: c20a1c97  bl #0x3180cac

; RVA 0x6A7E1A8 | internal DynamicBoardCellConfiguration <SetTileConfiguration>b__5_1(DynamicBoardCellConfiguration tc) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06A7E1A8: e00301aa  mov x0, x1
0x06A7E1AC: c0035fd6  ret

