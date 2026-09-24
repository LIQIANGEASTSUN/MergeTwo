; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 692 .TimeDurationSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x63A8624 | private static void .cctor() { }
; bytes=104 sha256=6051fdea23f342a0f6763aa508dee1b9218833ff51e6ac3edfeb46b4ded0e446 status=arm64_complete_bound indexed_start=True
0x063A8624: fe0f1ef8  str x30, [sp, #-0x20]!
0x063A8628: f44f01a9  stp x20, x19, [sp, #0x10]
0x063A862C: f3cb00d0  adrp x19, #0x7d26000
0x063A8630: 549a00b0  adrp x20, #0x76f1000
0x063A8634: 68ee4539  ldrb w8, [x19, #0x17b]
0x063A8638: 948640f9  ldr x20, [x20, #0x108]
0x063A863C: c8000037  tbnz w8, #0, #0x63a8654
0x063A8640: 409a00b0  adrp x0, #0x76f1000
0x063A8644: 008440f9  ldr x0, [x0, #0x108]
0x063A8648: f4603797  bl #0x3180a18
0x063A864C: 28008052  movz w8, #0x1
0x063A8650: 68ee0539  strb w8, [x19, #0x17b]
0x063A8654: 800240f9  ldr x0, [x20]
0x063A8658: 92613797  bl #0x3180ca0
0x063A865C: e1031faa  mov x1, xzr
0x063A8660: f30300aa  mov x19, x0
0x063A8664: e6c7cc97  bl #0x56da5fc
0x063A8668: 880240f9  ldr x8, [x20]
0x063A866C: e10313aa  mov x1, x19
0x063A8670: 085d40f9  ldr x8, [x8, #0xb8]
0x063A8674: 130100f9  str x19, [x8]
0x063A8678: 880240f9  ldr x8, [x20]
0x063A867C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x063A8680: 005d40f9  ldr x0, [x8, #0xb8]
0x063A8684: fe0742f8  ldr x30, [sp], #0x20
0x063A8688: cf603717  b #0x31809c4

; RVA 0x63A868C | public void .ctor() { }
; bytes=8 sha256=aa1b0fc958e8da26d1a6bd9b63d5a3d26a955b758f840263d1a64b1bbd89926c status=arm64_complete_bound indexed_start=True
0x063A868C: e1031faa  mov x1, xzr
0x063A8690: dbc7cc17  b #0x56da5fc

; RVA 0x63A8694 | internal bool <ProcessComponents>b__5_0(TimeDurationComponent timeDuration) { }
; bytes=24 sha256=1e772d1478854f2d7a9c09e3e6eeb23133a050f93eca9d4604a1114afb9ae38d status=arm64_complete_bound indexed_start=True
0x063A8694: fe0f1ff8  str x30, [sp, #-0x10]!
0x063A8698: 810000b4  cbz x1, #0x63a86a8
0x063A869C: 20c04039  ldrb w0, [x1, #0x30]
0x063A86A0: fe0741f8  ldr x30, [sp], #0x10
0x063A86A4: c0035fd6  ret
0x063A86A8: 81613797  bl #0x3180cac

