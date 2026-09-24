; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7464 .BucketBubbleDropProbabilityModifier.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657F8F4 | private static void .cctor() { }
; bytes=104 sha256=1c8b8dec6c7dd62dc8d3d7fef449d4625168f1813b9fb2eeb7cd304aa1db056c status=arm64_complete_bound indexed_start=True
0x0657F8F4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657F8F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657F8FC: 53bd0090  adrp x19, #0x7d27000
0x0657F900: 148c00b0  adrp x20, #0x7700000
0x0657F904: 688e5939  ldrb w8, [x19, #0x663]
0x0657F908: 946a43f9  ldr x20, [x20, #0x6d0]
0x0657F90C: c8000037  tbnz w8, #0, #0x657f924
0x0657F910: 008c00b0  adrp x0, #0x7700000
0x0657F914: 006843f9  ldr x0, [x0, #0x6d0]
0x0657F918: 40043097  bl #0x3180a18
0x0657F91C: 28008052  movz w8, #0x1
0x0657F920: 688e1939  strb w8, [x19, #0x663]
0x0657F924: 800240f9  ldr x0, [x20]
0x0657F928: de043097  bl #0x3180ca0
0x0657F92C: e1031faa  mov x1, xzr
0x0657F930: f30300aa  mov x19, x0
0x0657F934: 326bc597  bl #0x56da5fc
0x0657F938: 880240f9  ldr x8, [x20]
0x0657F93C: e10313aa  mov x1, x19
0x0657F940: 085d40f9  ldr x8, [x8, #0xb8]
0x0657F944: 130100f9  str x19, [x8]
0x0657F948: 880240f9  ldr x8, [x20]
0x0657F94C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657F950: 005d40f9  ldr x0, [x8, #0xb8]
0x0657F954: fe0742f8  ldr x30, [sp], #0x20
0x0657F958: 1b043017  b #0x31809c4

; RVA 0x657F95C | public void .ctor() { }
; bytes=8 sha256=59e17dc35deb54a1f98cdc85a2f90c2844508286ae434795cc1d996174f1e281 status=arm64_complete_bound indexed_start=True
0x0657F95C: e1031faa  mov x1, xzr
0x0657F960: 276bc517  b #0x56da5fc

; RVA 0x657F964 | internal int <Initialize>b__9_0(SmarterBubblesConversionConfig b) { }
; bytes=24 sha256=081923484251866a103adeea119d2612505566085775214c4da976cbc0383c91 status=arm64_complete_bound indexed_start=True
0x0657F964: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657F968: 810000b4  cbz x1, #0x657f978
0x0657F96C: 201040b9  ldr w0, [x1, #0x10]
0x0657F970: fe0741f8  ldr x30, [sp], #0x10
0x0657F974: c0035fd6  ret
0x0657F978: cd043097  bl #0x3180cac

; RVA 0x657F97C | internal bool <CalculateConversionRatio>b__13_0(Bucket b) { }
; bytes=24 sha256=bfc8a53c8f56dbba8f6a6e991e36e14399a00a3762dbf8f855e0dfb52ea60aff status=arm64_complete_bound indexed_start=True
0x0657F97C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657F980: 810000b4  cbz x1, #0x657f990
0x0657F984: 20b04039  ldrb w0, [x1, #0x2c]
0x0657F988: fe0741f8  ldr x30, [sp], #0x10
0x0657F98C: c0035fd6  ret
0x0657F990: c7043097  bl #0x3180cac

; RVA 0x657F994 | internal int <CalculateConversionRatio>b__13_1(Bucket b) { }
; bytes=24 sha256=c28519276871ebd3b8a1044cea137c1525a25ccd42a265715187938376d77586 status=arm64_complete_bound indexed_start=True
0x0657F994: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657F998: 810000b4  cbz x1, #0x657f9a8
0x0657F99C: 201c40b9  ldr w0, [x1, #0x1c]
0x0657F9A0: fe0741f8  ldr x30, [sp], #0x10
0x0657F9A4: c0035fd6  ret
0x0657F9A8: c1043097  bl #0x3180cac

; RVA 0x657F9AC | internal BubbleData <CalculateConversionRatio>b__13_2(BubbleData b) { }
; bytes=8 sha256=50ddf39453988ba55a1b7d9bbba7f1ae7c5c5c3f7414c859acf17118fa4886b8 status=arm64_complete_bound indexed_start=True
0x0657F9AC: e00301aa  mov x0, x1
0x0657F9B0: c0035fd6  ret

; RVA 0x657F9B4 | internal long <CalculateConversionRatio>b__13_4(BubbleData bubble) { }
; bytes=24 sha256=f7b5f0d93bdaa71c32d4d7f0964117472a066bb84dddd1097853a41a679a2f37 status=arm64_complete_bound indexed_start=True
0x0657F9B4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657F9B8: 810000b4  cbz x1, #0x657f9c8
0x0657F9BC: 200c40f9  ldr x0, [x1, #0x18]
0x0657F9C0: fe0741f8  ldr x30, [sp], #0x10
0x0657F9C4: c0035fd6  ret
0x0657F9C8: b9043097  bl #0x3180cac

; RVA 0x657F9CC | internal bool <CalculateConversionRatio>b__13_5(BubbleData bubble) { }
; bytes=24 sha256=9bb0ac7e49eff29e7eaf71e0590d7d6145174748acb1a0818ff8851adad01ab3 status=arm64_complete_bound indexed_start=True
0x0657F9CC: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657F9D0: 810000b4  cbz x1, #0x657f9e0
0x0657F9D4: 20504039  ldrb w0, [x1, #0x14]
0x0657F9D8: fe0741f8  ldr x30, [sp], #0x10
0x0657F9DC: c0035fd6  ret
0x0657F9E0: b3043097  bl #0x3180cac

; RVA 0x657F9E4 | internal long <UpdateBuckets>b__14_1(BubbleData bubble) { }
; bytes=24 sha256=11728874aefb065a260c8c91cc40dc8cd1f1359f5bf8fbd4f8934ce6fbdeaa69 status=arm64_complete_bound indexed_start=True
0x0657F9E4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657F9E8: 810000b4  cbz x1, #0x657f9f8
0x0657F9EC: 200c40f9  ldr x0, [x1, #0x18]
0x0657F9F0: fe0741f8  ldr x30, [sp], #0x10
0x0657F9F4: c0035fd6  ret
0x0657F9F8: ad043097  bl #0x3180cac

; RVA 0x657F9FC | internal bool <UpdateBuckets>b__14_2(BubbleData bubble) { }
; bytes=24 sha256=6a4ccdfdbede6c289e957ea5991e4668607ba35dc2e7d5a65e171fd55d175697 status=arm64_complete_bound indexed_start=True
0x0657F9FC: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657FA00: 810000b4  cbz x1, #0x657fa10
0x0657FA04: 20504039  ldrb w0, [x1, #0x14]
0x0657FA08: fe0741f8  ldr x30, [sp], #0x10
0x0657FA0C: c0035fd6  ret
0x0657FA10: a7043097  bl #0x3180cac

