; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 6438 Merger.RemoteLiveOps.Data.EventData.RemoteEventData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64660BC | public RemoteFeatureStatus get_Status() { }
; bytes=8 sha256=6f1929ee2376e6ada94db6d2aafe012dfc8382613e73b99aea0c7dea270fac13 status=arm64_complete_bound indexed_start=True
0x064660BC: 001040b9  ldr w0, [x0, #0x10]
0x064660C0: c0035fd6  ret

; RVA 0x64660C4 | public void set_Status(RemoteFeatureStatus value) { }
; bytes=8 sha256=4f1731a5a3d5539e5c40e4019b837526eaa31ef7b03eb65ceaee7084e15a198b status=arm64_complete_bound indexed_start=True
0x064660C4: 011000b9  str w1, [x0, #0x10]
0x064660C8: c0035fd6  ret

; RVA 0x64660CC | public long get_StartDate() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x064660CC: 000c40f9  ldr x0, [x0, #0x18]
0x064660D0: c0035fd6  ret

; RVA 0x64660D4 | public void set_StartDate(long value) { }
; bytes=8 sha256=eccec631fb26ef52ae81894fbca9f413e7a8019826502520a44f42b576b016f9 status=arm64_complete_bound indexed_start=True
0x064660D4: 010c00f9  str x1, [x0, #0x18]
0x064660D8: c0035fd6  ret

; RVA 0x64660DC | public long get_EndDate() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x064660DC: 001040f9  ldr x0, [x0, #0x20]
0x064660E0: c0035fd6  ret

; RVA 0x64660E4 | public void set_EndDate(long value) { }
; bytes=8 sha256=e2049e634203975b3ab577fcedd5fcebf7eb16547f254b69f38a7efd4d28f8c7 status=arm64_complete_bound indexed_start=True
0x064660E4: 011000f9  str x1, [x0, #0x20]
0x064660E8: c0035fd6  ret

; RVA 0x64660EC | public string[] get_ConditionIds() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x064660EC: 001440f9  ldr x0, [x0, #0x28]
0x064660F0: c0035fd6  ret

; RVA 0x64660F4 | public void set_ConditionIds(string[] value) { }
; bytes=8 sha256=6eed1ddde9dd3f6f4e46a28af29e91cccab0efd3290f52fe23c8b3fd1aa9ba2a status=arm64_complete_bound indexed_start=True
0x064660F4: 018c02f8  str x1, [x0, #0x28]!
0x064660F8: 336a3417  b #0x31809c4

; RVA 0x64660FC | public RemoteEventData ShallowCopy() { }
; bytes=128 sha256=3892af6f4fc084a8041d2c682b3381a454e32b67be237aa2820f322511f2b319 status=arm64_complete_bound indexed_start=True
0x064660FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06466100: f44f01a9  stp x20, x19, [sp, #0x10]
0x06466104: 14c60090  adrp x20, #0x7d26000
0x06466108: 88f26739  ldrb w8, [x20, #0x9fc]
0x0646610C: f30300aa  mov x19, x0
0x06466110: c8000037  tbnz w8, #0, #0x6466128
0x06466114: 809400b0  adrp x0, #0x76f7000
0x06466118: 008842f9  ldr x0, [x0, #0x510]
0x0646611C: 3f6a3497  bl #0x3180a18
0x06466120: 28008052  movz w8, #0x1
0x06466124: 88f22739  strb w8, [x20, #0x9fc]
0x06466128: e00313aa  mov x0, x19
0x0646612C: e1031faa  mov x1, xzr
0x06466130: 49f2c997  bl #0x56e2a54
0x06466134: c00100b4  cbz x0, #0x646616c
0x06466138: 899400b0  adrp x9, #0x76f7000
0x0646613C: 298942f9  ldr x9, [x9, #0x510]
0x06466140: 080040f9  ldr x8, [x0]
0x06466144: 210140f9  ldr x1, [x9]
0x06466148: 0ac14439  ldrb w10, [x8, #0x130]
0x0646614C: 29c04439  ldrb w9, [x1, #0x130]
0x06466150: 5f01096b  cmp w10, w9
0x06466154: 23010054  b.lo #0x6466178
0x06466158: 086540f9  ldr x8, [x8, #0xc8]
0x0646615C: 080d098b  add x8, x8, x9, lsl #3
0x06466160: 08815ff8  ldur x8, [x8, #-8]
0x06466164: 1f0101eb  cmp x8, x1
0x06466168: 81000054  b.ne #0x6466178
0x0646616C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06466170: fe0742f8  ldr x30, [sp], #0x20
0x06466174: c0035fd6  ret
0x06466178: b46b3497  bl #0x3181048

; RVA 0x6465F70 | protected void .ctor() { }
; bytes=8 sha256=592b65b6a1a0b7547f94cf4cc75a4b1e539c9d5eebb6bc913d804af0fd6280b5 status=arm64_complete_bound indexed_start=True
0x06465F70: e1031faa  mov x1, xzr
0x06465F74: a2d1c917  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D6E904 | Merger.RemoteLiveOps.Data.EventData.RemoteEventData$$Update<object>
; native signature: void Merger_RemoteLiveOps_Data_EventData_RemoteEventData__Update_object_ (Merger_RemoteLiveOps_Data_EventData_RemoteEventData_o* __this, Il2CppObject* dataData, const MethodInfo_3D6E904* method);
; bytes=60 sha256=75238a19a30ee934066be20fca69a200bd2bcfa8ecd7bd40fe099978a641d948 status=arm64_complete_bound indexed_start=True
0x03D6E904: fe0f1ff8  str x30, [sp, #-0x10]!
0x03D6E908: a10100b4  cbz x1, #0x3d6e93c
0x03D6E90C: 281040b9  ldr w8, [x1, #0x10]
0x03D6E910: 081000b9  str w8, [x0, #0x10]
0x03D6E914: 280c40f9  ldr x8, [x1, #0x18]
0x03D6E918: 1f0500f1  cmp x8, #1
0x03D6E91C: 4b000054  b.lt #0x3d6e924
0x03D6E920: 080c00f9  str x8, [x0, #0x18]
0x03D6E924: 281040f9  ldr x8, [x1, #0x20]
0x03D6E928: 1f0500f1  cmp x8, #1
0x03D6E92C: 4b000054  b.lt #0x3d6e934
0x03D6E930: 081000f9  str x8, [x0, #0x20]
0x03D6E934: fe0741f8  ldr x30, [sp], #0x10
0x03D6E938: c0035fd6  ret
0x03D6E93C: dc48d097  bl #0x3180cac

