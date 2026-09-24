; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9327 Merger.Game.Signal.BoardItemCooldownBaseSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676A790 | public IMergeItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676A790: 000840f9  ldr x0, [x0, #0x10]
0x0676A794: c0035fd6  ret

; RVA 0x676A798 | public string get_UUid() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676A798: 000c40f9  ldr x0, [x0, #0x18]
0x0676A79C: c0035fd6  ret

; RVA 0x676A7A0 | public int get_NumEmptyPositions() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x0676A7A0: 002040b9  ldr w0, [x0, #0x20]
0x0676A7A4: c0035fd6  ret

; RVA 0x676A7A8 | public TimeCycleComponentAnalytics get_TimeCycleComponentAnalytics() { }
; bytes=24 sha256=5bb4a1d2a56dcad3785224cb4178863fe4d0824b27eff8db1a7da7219ca1301f status=arm64_complete_bound indexed_start=True
0x0676A7A8: 092440f9  ldr x9, [x0, #0x48]
0x0676A7AC: 0080c33c  ldur q0, [x0, #0x38]
0x0676A7B0: 0180c23c  ldur q1, [x0, #0x28]
0x0676A7B4: 091100f9  str x9, [x8, #0x20]
0x0676A7B8: 010100ad  stp q1, q0, [x8]
0x0676A7BC: c0035fd6  ret

; RVA 0x676A7C0 | public ResourceMultiple get_CooldownPrice() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x0676A7C0: 002840f9  ldr x0, [x0, #0x50]
0x0676A7C4: c0035fd6  ret

; RVA 0x676A7C8 | public bool get_ShowTimeLeft() { }
; bytes=8 sha256=20c3cf3b61eb3d69a1f0bdcc870fb1ff285f3f542948523ae405f8f151895ec9 status=arm64_complete_bound indexed_start=True
0x0676A7C8: 00604139  ldrb w0, [x0, #0x58]
0x0676A7CC: c0035fd6  ret

; RVA 0x676A7D0 | public void .ctor(IMergeItem item, int numEmptyPositions, TimeCycleComponentAnalytics timeCycleComponentAnalytics, string uuId, bool showTimeLeft, ResourceMultiple cooldownPrice) { }
; bytes=148 sha256=9ad6498a11fe12784f4ea2cfbe49c6d5afe4de4c99fd29bdc8b37cb889c1c566 status=arm64_complete_bound indexed_start=True
0x0676A7D0: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x0676A7D4: f85f01a9  stp x24, x23, [sp, #0x10]
0x0676A7D8: f65702a9  stp x22, x21, [sp, #0x20]
0x0676A7DC: f44f03a9  stp x20, x19, [sp, #0x30]
0x0676A7E0: f70301aa  mov x23, x1
0x0676A7E4: e1031faa  mov x1, xzr
0x0676A7E8: f30306aa  mov x19, x6
0x0676A7EC: f40304aa  mov x20, x4
0x0676A7F0: f50303aa  mov x21, x3
0x0676A7F4: f603022a  mov w22, w2
0x0676A7F8: f80300aa  mov x24, x0
0x0676A7FC: b9000012  and w25, w5, #1
0x0676A800: 7fbfbd97  bl #0x56da5fc
0x0676A804: e00318aa  mov x0, x24
0x0676A808: 170c01f8  str x23, [x0, #0x10]!
0x0676A80C: e10317aa  mov x1, x23
0x0676A810: 6d582897  bl #0x31809c4
0x0676A814: e00318aa  mov x0, x24
0x0676A818: 148c01f8  str x20, [x0, #0x18]!
0x0676A81C: e10314aa  mov x1, x20
0x0676A820: 69582897  bl #0x31809c4
0x0676A824: 162300b9  str w22, [x24, #0x20]
0x0676A828: a81240f9  ldr x8, [x21, #0x20]
0x0676A82C: a10240ad  ldp q1, q0, [x21]
0x0676A830: 130f05f8  str x19, [x24, #0x50]!
0x0676A834: e00318aa  mov x0, x24
0x0676A838: e10313aa  mov x1, x19
0x0676A83C: 08831ff8  stur x8, [x24, #-8]
0x0676A840: 00839e3c  stur q0, [x24, #-0x18]
0x0676A844: 01839d3c  stur q1, [x24, #-0x28]
0x0676A848: 5f582897  bl #0x31809c4
0x0676A84C: 19230039  strb w25, [x24, #8]
0x0676A850: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0676A854: f65742a9  ldp x22, x21, [sp, #0x20]
0x0676A858: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0676A85C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x0676A860: c0035fd6  ret

