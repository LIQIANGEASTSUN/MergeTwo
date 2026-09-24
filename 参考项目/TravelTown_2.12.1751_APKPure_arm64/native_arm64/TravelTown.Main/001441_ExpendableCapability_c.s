; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1441 .ExpendableCapability.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601037C | private static void .cctor() { }
; bytes=104 sha256=f3e9ab5ffd1b670e6fd0e32283eb6385bbe6c9b97f2dc99603abb3f725756331 status=arm64_complete_bound indexed_start=True
0x0601037C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06010380: f44f01a9  stp x20, x19, [sp, #0x10]
0x06010384: 93e800f0  adrp x19, #0x7d23000
0x06010388: f4b500f0  adrp x20, #0x76cf000
0x0601038C: 68625f39  ldrb w8, [x19, #0x7d8]
0x06010390: 945a42f9  ldr x20, [x20, #0x4b0]
0x06010394: c8000037  tbnz w8, #0, #0x60103ac
0x06010398: e0b500f0  adrp x0, #0x76cf000
0x0601039C: 005842f9  ldr x0, [x0, #0x4b0]
0x060103A0: 9ec14597  bl #0x3180a18
0x060103A4: 28008052  movz w8, #0x1
0x060103A8: 68621f39  strb w8, [x19, #0x7d8]
0x060103AC: 800240f9  ldr x0, [x20]
0x060103B0: 3cc24597  bl #0x3180ca0
0x060103B4: e1031faa  mov x1, xzr
0x060103B8: f30300aa  mov x19, x0
0x060103BC: 9028db97  bl #0x56da5fc
0x060103C0: 880240f9  ldr x8, [x20]
0x060103C4: e10313aa  mov x1, x19
0x060103C8: 085d40f9  ldr x8, [x8, #0xb8]
0x060103CC: 130100f9  str x19, [x8]
0x060103D0: 880240f9  ldr x8, [x20]
0x060103D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x060103D8: 005d40f9  ldr x0, [x8, #0xb8]
0x060103DC: fe0742f8  ldr x30, [sp], #0x20
0x060103E0: 79c14517  b #0x31809c4

; RVA 0x60103E4 | public void .ctor() { }
; bytes=8 sha256=854a2093f2e06318a615fcc9040744570327a689a9eeb1332444dd5dcc1f8432 status=arm64_complete_bound indexed_start=True
0x060103E4: e1031faa  mov x1, xzr
0x060103E8: 8528db17  b #0x56da5fc

; RVA 0x60103EC | internal bool <get_SpawnedMergeItems>b__13_0(EmptiableWeightedItemSpawnable empitable) { }
; bytes=32 sha256=7bb5b72cd657cf2654b50c6bea25e4df931a8357f1d0e5f4d710a8d6f421c594 status=arm64_complete_bound indexed_start=True
0x060103EC: fe0f1ff8  str x30, [sp, #-0x10]!
0x060103F0: c10000b4  cbz x1, #0x6010408
0x060103F4: 28a84039  ldrb w8, [x1, #0x2a]
0x060103F8: 1f010071  cmp w8, #0
0x060103FC: e0179f1a  cset w0, eq
0x06010400: fe0741f8  ldr x30, [sp], #0x10
0x06010404: c0035fd6  ret
0x06010408: 29c24597  bl #0x3180cac

; RVA 0x601040C | internal IMergeItem <get_SpawnedMergeItems>b__13_1(EmptiableWeightedItemSpawnable weightedItem) { }
; bytes=36 sha256=0a6eef5304c28eecf65d80b38b487a27879828611c512dde2f796047594822f9 status=arm64_complete_bound indexed_start=True
0x0601040C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06010410: e10000b4  cbz x1, #0x601042c
0x06010414: 200840f9  ldr x0, [x1, #0x10]
0x06010418: a00000b4  cbz x0, #0x601042c
0x0601041C: 080040f9  ldr x8, [x0]
0x06010420: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06010424: fe0741f8  ldr x30, [sp], #0x10
0x06010428: 40001fd6  br x2
0x0601042C: 20c24597  bl #0x3180cac

; RVA 0x6010430 | internal IMergeItem <get_SpawnedMergeItems>b__13_2(WeightedItemSpawnable item) { }
; bytes=36 sha256=00539c494ce12c77ce2b73c07a13b77b23c7df7b123e262cef27661562d1f29f status=arm64_complete_bound indexed_start=True
0x06010430: fe0f1ff8  str x30, [sp, #-0x10]!
0x06010434: e10000b4  cbz x1, #0x6010450
0x06010438: 200840f9  ldr x0, [x1, #0x10]
0x0601043C: a00000b4  cbz x0, #0x6010450
0x06010440: 080040f9  ldr x8, [x0]
0x06010444: 02855ea9  ldp x2, x1, [x8, #0x1e8]
0x06010448: fe0741f8  ldr x30, [sp], #0x10
0x0601044C: 40001fd6  br x2
0x06010450: 17c24597  bl #0x3180cac

