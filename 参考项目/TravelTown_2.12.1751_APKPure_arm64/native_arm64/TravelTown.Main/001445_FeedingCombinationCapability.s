; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1445 MergeEngine.Configuration.Capabilities.FeedingCombinationCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x60105A8 | public void .ctor(InteractionCapability interactionCapability) { }
; bytes=100 sha256=7da13828fcf510431083369654683831268a3131f13ae3640710171505af452b status=arm64_complete_bound indexed_start=True
0x060105A8: fe0f1ef8  str x30, [sp, #-0x20]!
0x060105AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x060105B0: f40301aa  mov x20, x1
0x060105B4: e1031faa  mov x1, xzr
0x060105B8: f30300aa  mov x19, x0
0x060105BC: 1028db97  bl #0x56da5fc
0x060105C0: e00313aa  mov x0, x19
0x060105C4: 148c01f8  str x20, [x0, #0x18]!
0x060105C8: e10314aa  mov x1, x20
0x060105CC: fec04597  bl #0x31809c4
0x060105D0: 340100b4  cbz x20, #0x60105f4
0x060105D4: 88424039  ldrb w8, [x20, #0x10]
0x060105D8: 68000035  cbnz w8, #0x60105e4
0x060105DC: 88464039  ldrb w8, [x20, #0x11]
0x060105E0: a8000034  cbz w8, #0x60105f4
0x060105E4: e00314aa  mov x0, x20
0x060105E8: e1031faa  mov x1, xzr
0x060105EC: 859f0994  bl #0x6278400
0x060105F0: 02000014  b #0x60105f8
0x060105F4: e0031f2a  mov w0, wzr
0x060105F8: 08000012  and w8, w0, #1
0x060105FC: 68420039  strb w8, [x19, #0x10]
0x06010600: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06010604: fe0742f8  ldr x30, [sp], #0x20
0x06010608: c0035fd6  ret

