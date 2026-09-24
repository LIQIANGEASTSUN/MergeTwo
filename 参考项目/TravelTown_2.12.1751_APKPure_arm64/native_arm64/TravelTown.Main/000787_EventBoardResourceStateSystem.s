; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 787 MergeEngine.ECS.Systems.State.Board.Event.EventBoardResourceStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EB4D0 | protected override void LoadState(EventBoardResources newState) { }
; bytes=312 sha256=8abc3f019264496771c98d7a20b2f2cfee0846a4eb9ce87902680c9799f65081 status=arm64_complete_bound indexed_start=True
0x064EB4D0: ff0301d1  sub sp, sp, #0x40
0x064EB4D4: fe5702a9  stp x30, x21, [sp, #0x20]
0x064EB4D8: f44f03a9  stp x20, x19, [sp, #0x30]
0x064EB4DC: f5c10090  adrp x21, #0x7d27000
0x064EB4E0: a8524139  ldrb w8, [x21, #0x54]
0x064EB4E4: f40301aa  mov x20, x1
0x064EB4E8: f30300aa  mov x19, x0
0x064EB4EC: e8010037  tbnz w8, #0, #0x64eb528
0x064EB4F0: a08e00d0  adrp x0, #0x76c1000
0x064EB4F4: 006443f9  ldr x0, [x0, #0x6c8]
0x064EB4F8: 48553297  bl #0x3180a18
0x064EB4FC: a08e00d0  adrp x0, #0x76c1000
0x064EB500: 006843f9  ldr x0, [x0, #0x6d0]
0x064EB504: 45553297  bl #0x3180a18
0x064EB508: a08e00d0  adrp x0, #0x76c1000
0x064EB50C: 006c43f9  ldr x0, [x0, #0x6d8]
0x064EB510: 42553297  bl #0x3180a18
0x064EB514: a08e00d0  adrp x0, #0x76c1000
0x064EB518: 007043f9  ldr x0, [x0, #0x6e0]
0x064EB51C: 3f553297  bl #0x3180a18
0x064EB520: 28008052  movz w8, #0x1
0x064EB524: a8520139  strb w8, [x21, #0x54]
0x064EB528: ffff00a9  stp xzr, xzr, [sp, #8]
0x064EB52C: ff0f00f9  str xzr, [sp, #0x18]
0x064EB530: 740300b4  cbz x20, #0x64eb59c
0x064EB534: 800e40f9  ldr x0, [x20, #0x18]
0x064EB538: 200300b4  cbz x0, #0x64eb59c
0x064EB53C: a88e00d0  adrp x8, #0x76c1000
0x064EB540: 087143f9  ldr x8, [x8, #0x6e0]
0x064EB544: b48e00d0  adrp x20, #0x76c1000
0x064EB548: b58e00d0  adrp x21, #0x76c1000
0x064EB54C: 010140f9  ldr x1, [x8]
0x064EB550: 946a43f9  ldr x20, [x20, #0x6d0]
0x064EB554: b56643f9  ldr x21, [x21, #0x6c8]
0x064EB558: e8230091  add x8, sp, #8
0x064EB55C: c3666d97  bl #0x4045068
0x064EB560: 810240f9  ldr x1, [x20]
0x064EB564: e0230091  add x0, sp, #8
0x064EB568: 13a9ac97  bl #0x50159b4
0x064EB56C: a0000036  tbz w0, #0, #0x64eb580
0x064EB570: e10f40f9  ldr x1, [sp, #0x18]
0x064EB574: e00313aa  mov x0, x19
0x064EB578: 24000094  bl #0x64eb608
0x064EB57C: f9ffff17  b #0x64eb560
0x064EB580: a10240f9  ldr x1, [x21]
0x064EB584: e0230091  add x0, sp, #8
0x064EB588: 0aa9ac97  bl #0x50159b0
0x064EB58C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x064EB590: fe5742a9  ldp x30, x21, [sp, #0x20]
0x064EB594: ff030191  add sp, sp, #0x40
0x064EB598: c0035fd6  ret
0x064EB59C: c4553297  bl #0x3180cac
0x064EB5A0: 01000014  b #0x64eb5a4
0x064EB5A4: f40300aa  mov x20, x0
0x064EB5A8: 3f040071  cmp w1, #1
0x064EB5AC: 61010054  b.ne #0x64eb5d8
0x064EB5B0: e00314aa  mov x0, x20
0x064EB5B4: d78c3394  bl #0x71ce910
0x064EB5B8: 130040f9  ldr x19, [x0]
0x064EB5BC: d98c3394  bl #0x71ce920
0x064EB5C0: a10240f9  ldr x1, [x21]
0x064EB5C4: e0230091  add x0, sp, #8
0x064EB5C8: faa8ac97  bl #0x50159b0
0x064EB5CC: 13feffb4  cbz x19, #0x64eb58c
0x064EB5D0: e00313aa  mov x0, x19
0x064EB5D4: b4553297  bl #0x3180ca4
0x064EB5D8: f3031faa  mov x19, xzr
0x064EB5DC: 02000014  b #0x64eb5e4
0x064EB5E0: f40300aa  mov x20, x0
0x064EB5E4: a10240f9  ldr x1, [x21]
0x064EB5E8: e0230091  add x0, sp, #8
0x064EB5EC: f1a8ac97  bl #0x50159b0
0x064EB5F0: 730000b5  cbnz x19, #0x64eb5fc
0x064EB5F4: e00314aa  mov x0, x20
0x064EB5F8: d8e83597  bl #0x3265958
0x064EB5FC: e00313aa  mov x0, x19
0x064EB600: a9553297  bl #0x3180ca4
0x064EB604: c4772497  bl #0x2e09514

; RVA 0x64EB608 | private void UpdateSpecificResource(Resource resource) { }
; bytes=240 sha256=888b7c9ea91619a1b9820e6fab9e91c83373fde672738c52348476392bbcb0a4 status=arm64_complete_bound indexed_start=True
0x064EB608: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EB60C: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EB610: f5c10090  adrp x21, #0x7d27000
0x064EB614: a8564139  ldrb w8, [x21, #0x55]
0x064EB618: f30301aa  mov x19, x1
0x064EB61C: f40300aa  mov x20, x0
0x064EB620: 88010037  tbnz w8, #0, #0x64eb650
0x064EB624: 608c0090  adrp x0, #0x7677000
0x064EB628: 001042f9  ldr x0, [x0, #0x420]
0x064EB62C: fb543297  bl #0x3180a18
0x064EB630: 80900090  adrp x0, #0x76fb000
0x064EB634: 007845f9  ldr x0, [x0, #0xaf0]
0x064EB638: f8543297  bl #0x3180a18
0x064EB63C: 608c00f0  adrp x0, #0x767a000
0x064EB640: 00ec42f9  ldr x0, [x0, #0x5d8]
0x064EB644: f5543297  bl #0x3180a18
0x064EB648: 28008052  movz w8, #0x1
0x064EB64C: a8560139  strb w8, [x21, #0x55]
0x064EB650: 330500b4  cbz x19, #0x64eb6f4
0x064EB654: 688c0090  adrp x8, #0x7677000
0x064EB658: 081142f9  ldr x8, [x8, #0x420]
0x064EB65C: 750a40f9  ldr x21, [x19, #0x10]
0x064EB660: e2031faa  mov x2, xzr
0x064EB664: 010140f9  ldr x1, [x8]
0x064EB668: e00315aa  mov x0, x21
0x064EB66C: 81fcbf97  bl #0x54ea870
0x064EB670: c0000036  tbz w0, #0, #0x64eb688
0x064EB674: e00314aa  mov x0, x20
0x064EB678: e10313aa  mov x1, x19
0x064EB67C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EB680: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EB684: 1d000014  b #0x64eb6f8
0x064EB688: 88900090  adrp x8, #0x76fb000
0x064EB68C: 087945f9  ldr x8, [x8, #0xaf0]
0x064EB690: e00315aa  mov x0, x21
0x064EB694: e2031faa  mov x2, xzr
0x064EB698: 010140f9  ldr x1, [x8]
0x064EB69C: 75fcbf97  bl #0x54ea870
0x064EB6A0: c0000036  tbz w0, #0, #0x64eb6b8
0x064EB6A4: e00314aa  mov x0, x20
0x064EB6A8: e10313aa  mov x1, x19
0x064EB6AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EB6B0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EB6B4: 1a000014  b #0x64eb71c
0x064EB6B8: 688c00f0  adrp x8, #0x767a000
0x064EB6BC: 08ed42f9  ldr x8, [x8, #0x5d8]
0x064EB6C0: e00315aa  mov x0, x21
0x064EB6C4: e2031faa  mov x2, xzr
0x064EB6C8: 010140f9  ldr x1, [x8]
0x064EB6CC: 69fcbf97  bl #0x54ea870
0x064EB6D0: c0000036  tbz w0, #0, #0x64eb6e8
0x064EB6D4: e00314aa  mov x0, x20
0x064EB6D8: e10313aa  mov x1, x19
0x064EB6DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EB6E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EB6E4: 19000014  b #0x64eb748
0x064EB6E8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EB6EC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EB6F0: c0035fd6  ret
0x064EB6F4: 6e553297  bl #0x3180cac

; RVA 0x64EB6F8 | private void UpdateEventLevel(Resource resource) { }
; bytes=36 sha256=57bfdc62c62793a1230db06b2273d3d6bcffdaa321481418bec402559f2801af status=arm64_complete_bound indexed_start=True
0x064EB6F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EB6FC: e10000b4  cbz x1, #0x64eb718
0x064EB700: 082840f9  ldr x8, [x0, #0x50]
0x064EB704: a80000b4  cbz x8, #0x64eb718
0x064EB708: 291840b9  ldr w9, [x1, #0x18]
0x064EB70C: 098100b9  str w9, [x8, #0x80]
0x064EB710: fe0741f8  ldr x30, [sp], #0x10
0x064EB714: c0035fd6  ret
0x064EB718: 65553297  bl #0x3180cac

; RVA 0x64EB71C | private void UpdateEventXp(Resource resource) { }
; bytes=44 sha256=657f1f1b51be205a02edb339d424193f4197ff75cebd74d514c5037bf3bd8473 status=arm64_complete_bound indexed_start=True
0x064EB71C: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EB720: 210100b4  cbz x1, #0x64eb744
0x064EB724: 002440f9  ldr x0, [x0, #0x48]
0x064EB728: e00000b4  cbz x0, #0x64eb744
0x064EB72C: 221840b9  ldr w2, [x1, #0x18]
0x064EB730: 81008052  movz w1, #0x4
0x064EB734: 23008052  movz w3, #0x1
0x064EB738: c4038052  movz w4, #0x1e
0x064EB73C: fe0741f8  ldr x30, [sp], #0x10
0x064EB740: 0d000014  b #0x64eb774
0x064EB744: 5a553297  bl #0x3180cac

; RVA 0x64EB748 | private void UpdateEventEnergy(Resource resource) { }
; bytes=44 sha256=2733ded46c1e2ac24633e29ff0ef05603b26325d9ea8723305d7604d8b0d3a02 status=arm64_complete_bound indexed_start=True
0x064EB748: fe0f1ff8  str x30, [sp, #-0x10]!
0x064EB74C: 210100b4  cbz x1, #0x64eb770
0x064EB750: 002440f9  ldr x0, [x0, #0x48]
0x064EB754: e00000b4  cbz x0, #0x64eb770
0x064EB758: 221840b9  ldr w2, [x1, #0x18]
0x064EB75C: a1008052  movz w1, #0x5
0x064EB760: c4038052  movz w4, #0x1e
0x064EB764: e3031f2a  mov w3, wzr
0x064EB768: fe0741f8  ldr x30, [sp], #0x10
0x064EB76C: 02000014  b #0x64eb774
0x064EB770: 4f553297  bl #0x3180cac

; RVA 0x64EB804 | public void .ctor() { }
; bytes=72 sha256=42cb9644cf1c6000fc68f120e5f34f4df310106e30c232c9616e1e07d1d34626 status=arm64_complete_bound indexed_start=True
0x064EB804: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EB808: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EB80C: f4c10090  adrp x20, #0x7d27000
0x064EB810: 95900090  adrp x21, #0x76fb000
0x064EB814: 885a4139  ldrb w8, [x20, #0x56]
0x064EB818: b57e45f9  ldr x21, [x21, #0xaf8]
0x064EB81C: f30300aa  mov x19, x0
0x064EB820: c8000037  tbnz w8, #0, #0x64eb838
0x064EB824: 80900090  adrp x0, #0x76fb000
0x064EB828: 007c45f9  ldr x0, [x0, #0xaf8]
0x064EB82C: 7b543297  bl #0x3180a18
0x064EB830: 28008052  movz w8, #0x1
0x064EB834: 885a0139  strb w8, [x20, #0x56]
0x064EB838: a10240f9  ldr x1, [x21]
0x064EB83C: e00313aa  mov x0, x19
0x064EB840: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EB844: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EB848: 54668117  b #0x4545198

