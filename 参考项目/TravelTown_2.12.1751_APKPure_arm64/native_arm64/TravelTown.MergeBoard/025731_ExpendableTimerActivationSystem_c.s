; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25731 .ExpendableTimerActivationSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6727C | private static void .cctor() { }
; bytes=104 sha256=22a742280d2e9c936a6834d98698f148a274c3ed53a01032e6b19db659b66bf2 status=arm64_complete_bound indexed_start=True
0x06A6727C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A67280: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A67284: 139600f0  adrp x19, #0x7d2a000
0x06A67288: 546600b0  adrp x20, #0x7730000
0x06A6728C: 68a25a39  ldrb w8, [x19, #0x6a8]
0x06A67290: 94ce45f9  ldr x20, [x20, #0xb98]
0x06A67294: c8000037  tbnz w8, #0, #0x6a672ac
0x06A67298: 406600b0  adrp x0, #0x7730000
0x06A6729C: 00cc45f9  ldr x0, [x0, #0xb98]
0x06A672A0: de651c97  bl #0x3180a18
0x06A672A4: 28008052  movz w8, #0x1
0x06A672A8: 68a21a39  strb w8, [x19, #0x6a8]
0x06A672AC: 800240f9  ldr x0, [x20]
0x06A672B0: 7c661c97  bl #0x3180ca0
0x06A672B4: e1031faa  mov x1, xzr
0x06A672B8: f30300aa  mov x19, x0
0x06A672BC: d0ccb197  bl #0x56da5fc
0x06A672C0: 880240f9  ldr x8, [x20]
0x06A672C4: e10313aa  mov x1, x19
0x06A672C8: 085d40f9  ldr x8, [x8, #0xb8]
0x06A672CC: 130100f9  str x19, [x8]
0x06A672D0: 880240f9  ldr x8, [x20]
0x06A672D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A672D8: 005d40f9  ldr x0, [x8, #0xb8]
0x06A672DC: fe0742f8  ldr x30, [sp], #0x20
0x06A672E0: b9651c17  b #0x31809c4

; RVA 0x6A672E4 | public void .ctor() { }
; bytes=8 sha256=51591dcdf24c62a71bac0dc6d1fa48707a01285cd6b51b82f968f47a80bb9777 status=arm64_complete_bound indexed_start=True
0x06A672E4: e1031faa  mov x1, xzr
0x06A672E8: c5ccb117  b #0x56da5fc

; RVA 0x6A672EC | internal bool <HandleFirstTimeProduceTrigger>b__6_0(ValueTuple<Entity, ExpendableComponent, IdComponent, InteractionComponent, PendingInteractionComponent, TimeLimitedActivationComponent, TimeDurationComponent> entity) { }
; bytes=52 sha256=4c0c12afeaa60a83eddcb5c7f178a829652292b672f53b36384531074a9cdf31 status=arm64_complete_bound indexed_start=True
0x06A672EC: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A672F0: 28204339  ldrb w8, [x1, #0xc8]
0x06A672F4: 68000034  cbz w8, #0x6a67300
0x06A672F8: e0031f2a  mov w0, wzr
0x06A672FC: 06000014  b #0x6a67314
0x06A67300: 281840f9  ldr x8, [x1, #0x30]
0x06A67304: c80000b4  cbz x8, #0x6a6731c
0x06A67308: 081540b9  ldr w8, [x8, #0x14]
0x06A6730C: 1f090071  cmp w8, #2
0x06A67310: e0179f1a  cset w0, eq
0x06A67314: fe0741f8  ldr x30, [sp], #0x10
0x06A67318: c0035fd6  ret
0x06A6731C: 64661c97  bl #0x3180cac

; RVA 0x6A67320 | internal bool <HandleCreatedTrigger>b__7_0(ValueTuple<Entity, ExpendableComponent, TimeLimitedActivationComponent, TimeDurationComponent> entity) { }
; bytes=72 sha256=4b5561021cd4e7e0ccb2ad182694012d0b5b81bcfbda2a2b04a6e0b576bf7095 status=arm64_complete_bound indexed_start=True
0x06A67320: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A67324: 28804139  ldrb w8, [x1, #0x60]
0x06A67328: 68010035  cbnz w8, #0x6a67354
0x06A6732C: 281840f9  ldr x8, [x1, #0x30]
0x06A67330: a80100b4  cbz x8, #0x6a67364
0x06A67334: 081540b9  ldr w8, [x8, #0x14]
0x06A67338: 1f050071  cmp w8, #1
0x06A6733C: c1000054  b.ne #0x6a67354
0x06A67340: 200040f9  ldr x0, [x1]
0x06A67344: e1031faa  mov x1, xzr
0x06A67348: 677d0094  bl #0x6a868e4
0x06A6734C: 08000052  eor w8, w0, #1
0x06A67350: 02000014  b #0x6a67358
0x06A67354: e8031f2a  mov w8, wzr
0x06A67358: 00010012  and w0, w8, #1
0x06A6735C: fe0741f8  ldr x30, [sp], #0x10
0x06A67360: c0035fd6  ret
0x06A67364: 52661c97  bl #0x3180cac

