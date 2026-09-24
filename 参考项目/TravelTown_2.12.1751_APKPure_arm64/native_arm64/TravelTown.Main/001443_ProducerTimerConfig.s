; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1443 MergeEngine.Configuration.Capabilities.ProducerTimerConfig
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6010454 | public ProducerTimerTrigger get_Trigger() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x06010454: 001440b9  ldr w0, [x0, #0x14]
0x06010458: c0035fd6  ret

; RVA 0x601045C | public int get_Duration() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x0601045C: 001040b9  ldr w0, [x0, #0x10]
0x06010460: c0035fd6  ret

; RVA 0x6010464 | private void set_Duration(int value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x06010464: 011000b9  str w1, [x0, #0x10]
0x06010468: c0035fd6  ret

; RVA 0x601046C | public string get_TriggerString() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0601046C: 000c40f9  ldr x0, [x0, #0x18]
0x06010470: c0035fd6  ret

; RVA 0x6010474 | private void set_TriggerString(string value) { }
; bytes=168 sha256=8bb32a9484f0c7d8e7d462e7de5dacc4e492fc1df1edf20e141c86e806da328c status=arm64_complete_bound indexed_start=True
0x06010474: fe0f1df8  str x30, [sp, #-0x30]!
0x06010478: f65701a9  stp x22, x21, [sp, #0x10]
0x0601047C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06010480: 96e800f0  adrp x22, #0x7d23000
0x06010484: f5b100f0  adrp x21, #0x764f000
0x06010488: c8665f39  ldrb w8, [x22, #0x7d9]
0x0601048C: b5ae43f9  ldr x21, [x21, #0x758]
0x06010490: f40301aa  mov x20, x1
0x06010494: f30300aa  mov x19, x0
0x06010498: 28010037  tbnz w8, #0, #0x60104bc
0x0601049C: e0b500f0  adrp x0, #0x76cf000
0x060104A0: 006c42f9  ldr x0, [x0, #0x4d8]
0x060104A4: 5dc14597  bl #0x3180a18
0x060104A8: e0b100f0  adrp x0, #0x764f000
0x060104AC: 00ac43f9  ldr x0, [x0, #0x758]
0x060104B0: 5ac14597  bl #0x3180a18
0x060104B4: 28008052  movz w8, #0x1
0x060104B8: c8661f39  strb w8, [x22, #0x7d9]
0x060104BC: f6b500f0  adrp x22, #0x76cf000
0x060104C0: d66e42f9  ldr x22, [x22, #0x4d8]
0x060104C4: e00313aa  mov x0, x19
0x060104C8: ff0f00b9  str wzr, [sp, #0xc]
0x060104CC: 148c01f8  str x20, [x0, #0x18]!
0x060104D0: e10314aa  mov x1, x20
0x060104D4: 3cc14597  bl #0x31809c4
0x060104D8: a00240f9  ldr x0, [x21]
0x060104DC: 08e040b9  ldr w8, [x0, #0xe0]
0x060104E0: 48000035  cbnz w8, #0x60104e8
0x060104E4: aac14597  bl #0x3180b8c
0x060104E8: c30240f9  ldr x3, [x22]
0x060104EC: e2330091  add x2, sp, #0xc
0x060104F0: 21008052  movz w1, #0x1
0x060104F4: e00314aa  mov x0, x20
0x060104F8: 754a7097  bl #0x3c22ecc
0x060104FC: e80f40b9  ldr w8, [sp, #0xc]
0x06010500: 1f000072  tst w0, #1
0x06010504: f65741a9  ldp x22, x21, [sp, #0x10]
0x06010508: 08119f1a  csel w8, w8, wzr, ne
0x0601050C: 681600b9  str w8, [x19, #0x14]
0x06010510: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06010514: fe0743f8  ldr x30, [sp], #0x30
0x06010518: c0035fd6  ret

; RVA 0x601051C | public void .ctor() { }
; bytes=8 sha256=fe1b870efdc450f01df64e772aaf5a2e7bf00c64c9894d132d5ca167f97af2ae status=arm64_complete_bound indexed_start=True
0x0601051C: e1031faa  mov x1, xzr
0x06010520: 3728db17  b #0x56da5fc

; RVA 0x6010524 | public void .ctor(ProducerTimerConfig other) { }
; bytes=64 sha256=ac83d81a40594ceaf91cd3137377176f0e2915252366a49972a8b727ee12a78b status=arm64_complete_bound indexed_start=True
0x06010524: fe0f1ef8  str x30, [sp, #-0x20]!
0x06010528: f44f01a9  stp x20, x19, [sp, #0x10]
0x0601052C: f40301aa  mov x20, x1
0x06010530: e1031faa  mov x1, xzr
0x06010534: f30300aa  mov x19, x0
0x06010538: 3128db97  bl #0x56da5fc
0x0601053C: 340100b4  cbz x20, #0x6010560
0x06010540: 800a40fd  ldr d0, [x20, #0x10]
0x06010544: 600a00fd  str d0, [x19, #0x10]
0x06010548: 810e40f9  ldr x1, [x20, #0x18]
0x0601054C: 618e01f8  str x1, [x19, #0x18]!
0x06010550: e00313aa  mov x0, x19
0x06010554: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06010558: fe0742f8  ldr x30, [sp], #0x20
0x0601055C: 1ac14517  b #0x31809c4
0x06010560: d3c14597  bl #0x3180cac

; RVA 0x6010564 | public void .ctor(int duration, ProducerTimerTrigger trigger, string triggerString) { }
; bytes=68 sha256=6deeff76c7cdaae148683aaff2dc6c078d6fd24ee2d56ceafee1d545b7067389 status=arm64_complete_bound indexed_start=True
0x06010564: fe0f1df8  str x30, [sp, #-0x30]!
0x06010568: f65701a9  stp x22, x21, [sp, #0x10]
0x0601056C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06010570: f503012a  mov w21, w1
0x06010574: e1031faa  mov x1, xzr
0x06010578: f30303aa  mov x19, x3
0x0601057C: f403022a  mov w20, w2
0x06010580: f60300aa  mov x22, x0
0x06010584: 1e28db97  bl #0x56da5fc
0x06010588: d38e01f8  str x19, [x22, #0x18]!
0x0601058C: d5523f29  stp w21, w20, [x22, #-8]
0x06010590: e00316aa  mov x0, x22
0x06010594: e10313aa  mov x1, x19
0x06010598: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601059C: f65741a9  ldp x22, x21, [sp, #0x10]
0x060105A0: fe0743f8  ldr x30, [sp], #0x30
0x060105A4: 08c14517  b #0x31809c4

