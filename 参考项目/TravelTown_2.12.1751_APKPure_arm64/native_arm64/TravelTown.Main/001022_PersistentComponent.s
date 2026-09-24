; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1022 MergeEngine.ECS.Components.PersistentComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F8604 | public string get_PersistentStoreKey() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x068F8604: 001840f9  ldr x0, [x0, #0x30]
0x068F8608: c0035fd6  ret

; RVA 0x68F860C | public bool get_UseLiveOpsPrefix() { }
; bytes=8 sha256=6770a96f4998ce8df43beb8e497cf1a56ff280479bbf45eeb6d10b8b1fe08600 status=arm64_complete_bound indexed_start=True
0x068F860C: 00e04039  ldrb w0, [x0, #0x38]
0x068F8610: c0035fd6  ret

; RVA 0x68F8614 | public void .ctor(PersistentCapability capability, Entity entity) { }
; bytes=132 sha256=9fe59278c4b59618e67f3c856d5c1b07818144b2109fe5b59e405c01b962187f status=arm64_complete_bound indexed_start=True
0x068F8614: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F8618: f65701a9  stp x22, x21, [sp, #0x10]
0x068F861C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F8620: 96a100b0  adrp x22, #0x7d29000
0x068F8624: 777100d0  adrp x23, #0x7726000
0x068F8628: c8626139  ldrb w8, [x22, #0x858]
0x068F862C: f73a42f9  ldr x23, [x23, #0x470]
0x068F8630: f50302aa  mov x21, x2
0x068F8634: f30301aa  mov x19, x1
0x068F8638: f40300aa  mov x20, x0
0x068F863C: c8000037  tbnz w8, #0, #0x68f8654
0x068F8640: 607100d0  adrp x0, #0x7726000
0x068F8644: 003842f9  ldr x0, [x0, #0x470]
0x068F8648: f4202297  bl #0x3180a18
0x068F864C: 28008052  movz w8, #0x1
0x068F8650: c8622139  strb w8, [x22, #0x858]
0x068F8654: e30240f9  ldr x3, [x23]
0x068F8658: e00314aa  mov x0, x20
0x068F865C: e10313aa  mov x1, x19
0x068F8660: e20315aa  mov x2, x21
0x068F8664: 3d9b9197  bl #0x4d5f358
0x068F8668: 730100b4  cbz x19, #0x68f8694
0x068F866C: 610a40f9  ldr x1, [x19, #0x10]
0x068F8670: 810e03f8  str x1, [x20, #0x30]!
0x068F8674: e00314aa  mov x0, x20
0x068F8678: d3202297  bl #0x31809c4
0x068F867C: 68624039  ldrb w8, [x19, #0x18]
0x068F8680: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F8684: 88220039  strb w8, [x20, #8]
0x068F8688: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F868C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F8690: c0035fd6  ret
0x068F8694: 86212297  bl #0x3180cac

