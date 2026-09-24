; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1113 MergeEngine.ECS.Components.InteractionTracking.ExpendableTrackingData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6900500 | public string get_ExpendItemSpawned() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06900500: 001840f9  ldr x0, [x0, #0x30]
0x06900504: c0035fd6  ret

; RVA 0x6900508 | public void set_ExpendItemSpawned(string value) { }
; bytes=220 sha256=5850e7c6bee638ac23658ccdbe8b6154ac7f3d220f242b8a889c7028f166927b status=arm64_complete_bound indexed_start=True
0x06900508: fe0f1df8  str x30, [sp, #-0x30]!
0x0690050C: f65701a9  stp x22, x21, [sp, #0x10]
0x06900510: f44f02a9  stp x20, x19, [sp, #0x20]
0x06900514: 55a100b0  adrp x21, #0x7d29000
0x06900518: a8a66339  ldrb w8, [x21, #0x8e9]
0x0690051C: f40301aa  mov x20, x1
0x06900520: f30300aa  mov x19, x0
0x06900524: 28010037  tbnz w8, #0, #0x6900548
0x06900528: 606a00d0  adrp x0, #0x764e000
0x0690052C: 005c43f9  ldr x0, [x0, #0x6b8]
0x06900530: 3a012297  bl #0x3180a18
0x06900534: 606a00d0  adrp x0, #0x764e000
0x06900538: 005847f9  ldr x0, [x0, #0xeb0]
0x0690053C: 37012297  bl #0x3180a18
0x06900540: 28008052  movz w8, #0x1
0x06900544: a8a62339  strb w8, [x21, #0x8e9]
0x06900548: 680e43f8  ldr x8, [x19, #0x30]!
0x0690054C: a80300b4  cbz x8, #0x69005c0
0x06900550: 686a00d0  adrp x8, #0x764e000
0x06900554: 085d43f9  ldr x8, [x8, #0x6b8]
0x06900558: 41008052  movz w1, #0x2
0x0690055C: 000140f9  ldr x0, [x8]
0x06900560: 67012297  bl #0x3180afc
0x06900564: e00300b4  cbz x0, #0x69005e0
0x06900568: 081840b9  ldr w8, [x0, #0x18]
0x0690056C: f50300aa  mov x21, x0
0x06900570: 68030034  cbz w8, #0x69005dc
0x06900574: 610240f9  ldr x1, [x19]
0x06900578: f60315aa  mov x22, x21
0x0690057C: c10e02f8  str x1, [x22, #0x20]!
0x06900580: e00316aa  mov x0, x22
0x06900584: 10012297  bl #0x31809c4
0x06900588: c8825fb8  ldur w8, [x22, #-8]
0x0690058C: 1f050071  cmp w8, #1
0x06900590: 69020054  b.ls #0x69005dc
0x06900594: 766a00d0  adrp x22, #0x764e000
0x06900598: d65a47f9  ldr x22, [x22, #0xeb0]
0x0690059C: e00315aa  mov x0, x21
0x069005A0: 148c02f8  str x20, [x0, #0x28]!
0x069005A4: e10314aa  mov x1, x20
0x069005A8: 07012297  bl #0x31809c4
0x069005AC: c00240f9  ldr x0, [x22]
0x069005B0: e10315aa  mov x1, x21
0x069005B4: e2031faa  mov x2, xzr
0x069005B8: 64e0af97  bl #0x54f8748
0x069005BC: f40300aa  mov x20, x0
0x069005C0: 740200f9  str x20, [x19]
0x069005C4: e00313aa  mov x0, x19
0x069005C8: e10314aa  mov x1, x20
0x069005CC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x069005D0: f65741a9  ldp x22, x21, [sp, #0x10]
0x069005D4: fe0743f8  ldr x30, [sp], #0x30
0x069005D8: fb002217  b #0x31809c4
0x069005DC: b6012297  bl #0x3180cb4
0x069005E0: b3012297  bl #0x3180cac

; RVA 0x69005E4 | public void .ctor() { }
; bytes=8 sha256=8259c594bc5b29a21f37db5c04f244dc3e462b2c2441ebe1ccc4c99585f48791 status=arm64_complete_bound indexed_start=True
0x069005E4: e1031faa  mov x1, xzr
0x069005E8: 0568b717  b #0x56da5fc

