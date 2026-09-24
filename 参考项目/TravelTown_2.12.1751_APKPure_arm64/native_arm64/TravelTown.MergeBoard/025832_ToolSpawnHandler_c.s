; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25832 .ToolSpawnHandler.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A84C8C | private static void .cctor() { }
; bytes=104 sha256=66acc24ee8c074fabc0a9ff00ec5d231e43c7944368b4911d9852242784ceeca status=arm64_complete_bound indexed_start=True
0x06A84C8C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A84C90: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A84C94: 339500d0  adrp x19, #0x7d2a000
0x06A84C98: 746500b0  adrp x20, #0x7731000
0x06A84C9C: 68065e39  ldrb w8, [x19, #0x781]
0x06A84CA0: 94da45f9  ldr x20, [x20, #0xbb0]
0x06A84CA4: c8000037  tbnz w8, #0, #0x6a84cbc
0x06A84CA8: 606500b0  adrp x0, #0x7731000
0x06A84CAC: 00d845f9  ldr x0, [x0, #0xbb0]
0x06A84CB0: 5aef1b97  bl #0x3180a18
0x06A84CB4: 28008052  movz w8, #0x1
0x06A84CB8: 68061e39  strb w8, [x19, #0x781]
0x06A84CBC: 800240f9  ldr x0, [x20]
0x06A84CC0: f8ef1b97  bl #0x3180ca0
0x06A84CC4: e1031faa  mov x1, xzr
0x06A84CC8: f30300aa  mov x19, x0
0x06A84CCC: 4c56b197  bl #0x56da5fc
0x06A84CD0: 880240f9  ldr x8, [x20]
0x06A84CD4: e10313aa  mov x1, x19
0x06A84CD8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A84CDC: 130100f9  str x19, [x8]
0x06A84CE0: 880240f9  ldr x8, [x20]
0x06A84CE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A84CE8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A84CEC: fe0742f8  ldr x30, [sp], #0x20
0x06A84CF0: 35ef1b17  b #0x31809c4

; RVA 0x6A84CF4 | public void .ctor() { }
; bytes=8 sha256=0f5fee481dc97b72e2d1afa24f1ec1fd7067affb5d2f3bb71406acb2273545c8 status=arm64_complete_bound indexed_start=True
0x06A84CF4: e1031faa  mov x1, xzr
0x06A84CF8: 4156b117  b #0x56da5fc

; RVA 0x6A84CFC | internal int <SelectRandomWeightedTool>b__20_0(WeightedTool weighted) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06A84CFC: e00301aa  mov x0, x1
0x06A84D00: c0035fd6  ret

; RVA 0x6A84D04 | internal PlayerResourceEnum <SelectRandomWeightedTool>b__20_1(WeightedTool weighted) { }
; bytes=8 sha256=64c79be77fa91e9d2003e87b1df5c671c391704ceab50fc0617dd9992b285ad9 status=arm64_complete_bound indexed_start=True
0x06A84D04: 20fc60d3  lsr x0, x1, #0x20
0x06A84D08: c0035fd6  ret

; RVA 0x6A84D0C | internal int <GenerateRandomToolItemFromWeights>b__21_0(WeightedToolLevel weightedToolLevel) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x06A84D0C: e00301aa  mov x0, x1
0x06A84D10: c0035fd6  ret

; RVA 0x6A84D14 | internal int <GenerateRandomToolItemFromWeights>b__21_1(WeightedToolLevel weightedToolLevel) { }
; bytes=8 sha256=64c79be77fa91e9d2003e87b1df5c671c391704ceab50fc0617dd9992b285ad9 status=arm64_complete_bound indexed_start=True
0x06A84D14: 20fc60d3  lsr x0, x1, #0x20
0x06A84D18: c0035fd6  ret

; RVA 0x6A84D1C | internal bool <GetToolSpawnPriorityStrategy>b__29_0(KeyValuePair<PlayerResourceEnum, ToolProgressionData> toolProgression) { }
; bytes=84 sha256=38c2cad06b54c9efcbbfc675fa5c07d100241db18c9f7a06f56a3bba5d616cdb status=arm64_complete_bound indexed_start=True
0x06A84D1C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A84D20: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A84D24: 349500d0  adrp x20, #0x7d2a000
0x06A84D28: 880a5e39  ldrb w8, [x20, #0x782]
0x06A84D2C: f30302aa  mov x19, x2
0x06A84D30: c8000037  tbnz w8, #0, #0x6a84d48
0x06A84D34: 606500b0  adrp x0, #0x7731000
0x06A84D38: 002c46f9  ldr x0, [x0, #0xc58]
0x06A84D3C: 37ef1b97  bl #0x3180a18
0x06A84D40: 28008052  movz w8, #0x1
0x06A84D44: 880a1e39  strb w8, [x20, #0x782]
0x06A84D48: 330100b4  cbz x19, #0x6a84d6c
0x06A84D4C: 68264229  ldp w8, w9, [x19, #0x10]
0x06A84D50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A84D54: 0a0dc91a  sdiv w10, w8, w9
0x06A84D58: 48a1091b  msub w8, w10, w9, w8
0x06A84D5C: 1f010071  cmp w8, #0
0x06A84D60: e0d79f1a  cset w0, gt
0x06A84D64: fe0742f8  ldr x30, [sp], #0x20
0x06A84D68: c0035fd6  ret
0x06A84D6C: d0ef1b97  bl #0x3180cac

; RVA 0x6A84D80 | internal PlayerResourceEnum <GetToolSpawnPriorityStrategy>b__29_1(KeyValuePair<PlayerResourceEnum, ToolProgressionData> toolProgression) { }
; bytes=60 sha256=692e81a4ad5af8c1b269f6d24358303ff3d38b1f90f9f0bd6445a96410f3af3d status=arm64_complete_bound indexed_start=True
0x06A84D80: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A84D84: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A84D88: 349500d0  adrp x20, #0x7d2a000
0x06A84D8C: 880e5e39  ldrb w8, [x20, #0x783]
0x06A84D90: f30301aa  mov x19, x1
0x06A84D94: c8000037  tbnz w8, #0, #0x6a84dac
0x06A84D98: 606500b0  adrp x0, #0x7731000
0x06A84D9C: 003046f9  ldr x0, [x0, #0xc60]
0x06A84DA0: 1eef1b97  bl #0x3180a18
0x06A84DA4: 28008052  movz w8, #0x1
0x06A84DA8: 880e1e39  strb w8, [x20, #0x783]
0x06A84DAC: e003132a  mov w0, w19
0x06A84DB0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A84DB4: fe0742f8  ldr x30, [sp], #0x20
0x06A84DB8: c0035fd6  ret

