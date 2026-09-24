; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9354 Merger.Game.Signal.BubbledItemExpiredSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676AE88 | public int get_BubblesOnBoard() { }
; bytes=8 sha256=ba269e200604d0dd95f57e6bd974cfb4fb4a15db1799161315f4b00aef67931c status=arm64_complete_bound indexed_start=True
0x0676AE88: 002840b9  ldr w0, [x0, #0x28]
0x0676AE8C: c0035fd6  ret

; RVA 0x676AE90 | public int get_BurstPrice() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x0676AE90: 002c40b9  ldr w0, [x0, #0x2c]
0x0676AE94: c0035fd6  ret

; RVA 0x676AE98 | public BubbledItemExpiredSignal.Collectable get_SpawnedCollectable() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x0676AE98: 001840f9  ldr x0, [x0, #0x30]
0x0676AE9C: c0035fd6  ret

; RVA 0x676AEA0 | public int get_BubbleTier() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x0676AEA0: 003840b9  ldr w0, [x0, #0x38]
0x0676AEA4: c0035fd6  ret

; RVA 0x676AEA8 | public void .ctor(IMergeItem mergeItem, int mergeItemLevel, int bubblesOnBoard, int burstPrice, CollectableComponent spawnedCollectableComponent, int bubbleTier) { }
; bytes=216 sha256=acda324a815801fe38db7b80e6ff1b120697cf2e1b28b3512be86d56fdbc8233 status=arm64_complete_bound indexed_start=True
0x0676AEA8: fe0f1bf8  str x30, [sp, #-0x50]!
0x0676AEAC: fa6701a9  stp x26, x25, [sp, #0x10]
0x0676AEB0: f85f02a9  stp x24, x23, [sp, #0x20]
0x0676AEB4: f65703a9  stp x22, x21, [sp, #0x30]
0x0676AEB8: f44f04a9  stp x20, x19, [sp, #0x40]
0x0676AEBC: faad00d0  adrp x26, #0x7d28000
0x0676AEC0: 48a77139  ldrb w8, [x26, #0xc69]
0x0676AEC4: f503062a  mov w21, w6
0x0676AEC8: f30305aa  mov x19, x5
0x0676AECC: f603042a  mov w22, w4
0x0676AED0: f703032a  mov w23, w3
0x0676AED4: f803022a  mov w24, w2
0x0676AED8: f90301aa  mov x25, x1
0x0676AEDC: f40300aa  mov x20, x0
0x0676AEE0: c8000037  tbnz w8, #0, #0x676aef8
0x0676AEE4: a07c00d0  adrp x0, #0x7700000
0x0676AEE8: 006c46f9  ldr x0, [x0, #0xcd8]
0x0676AEEC: cb562897  bl #0x3180a18
0x0676AEF0: 28008052  movz w8, #0x1
0x0676AEF4: 48a73139  strb w8, [x26, #0xc69]
0x0676AEF8: e00314aa  mov x0, x20
0x0676AEFC: e10319aa  mov x1, x25
0x0676AF00: e203182a  mov w2, w24
0x0676AF04: e3031faa  mov x3, xzr
0x0676AF08: 1923e297  bl #0x5ff3b6c
0x0676AF0C: 975a0529  stp w23, w22, [x20, #0x28]
0x0676AF10: 953a00b9  str w21, [x20, #0x38]
0x0676AF14: 930200b4  cbz x19, #0x676af64
0x0676AF18: a87c00d0  adrp x8, #0x7700000
0x0676AF1C: 086d46f9  ldr x8, [x8, #0xcd8]
0x0676AF20: 000140f9  ldr x0, [x8]
0x0676AF24: 5f572897  bl #0x3180ca0
0x0676AF28: e1031faa  mov x1, xzr
0x0676AF2C: f50300aa  mov x21, x0
0x0676AF30: b3bdbd97  bl #0x56da5fc
0x0676AF34: 550200b4  cbz x21, #0x676af7c
0x0676AF38: 60c242fc  ldur d0, [x19, #0x2c]
0x0676AF3C: e10315aa  mov x1, x21
0x0676AF40: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0676AF44: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0676AF48: a00a00fd  str d0, [x21, #0x10]
0x0676AF4C: 950e03f8  str x21, [x20, #0x30]!
0x0676AF50: e00314aa  mov x0, x20
0x0676AF54: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0676AF58: f65743a9  ldp x22, x21, [sp, #0x30]
0x0676AF5C: fe0745f8  ldr x30, [sp], #0x50
0x0676AF60: 99562817  b #0x31809c4
0x0676AF64: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0676AF68: f65743a9  ldp x22, x21, [sp, #0x30]
0x0676AF6C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0676AF70: fa6741a9  ldp x26, x25, [sp, #0x10]
0x0676AF74: fe0745f8  ldr x30, [sp], #0x50
0x0676AF78: c0035fd6  ret
0x0676AF7C: 4c572897  bl #0x3180cac

