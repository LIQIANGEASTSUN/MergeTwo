; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1446 MergeEngine.Configuration.Capabilities.IdCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x601062C | public string get_Id() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0601062C: 000840f9  ldr x0, [x0, #0x10]
0x06010630: c0035fd6  ret

; RVA 0x6010634 | public Nullable<ItemOrigin> get_ItemOrigin() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06010634: 000c40f9  ldr x0, [x0, #0x18]
0x06010638: c0035fd6  ret

; RVA 0x601063C | public string get_UUid() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0601063C: 001040f9  ldr x0, [x0, #0x20]
0x06010640: c0035fd6  ret

; RVA 0x6010644 | public void .ctor(string id, Nullable<ItemOrigin> itemOrigin, string uuid) { }
; bytes=84 sha256=413aaab6a61580cbacc20a46aaa4ee17b6e07c74fd048ab33ca3eca0281d60f2 status=arm64_complete_bound indexed_start=True
0x06010644: fe0f1df8  str x30, [sp, #-0x30]!
0x06010648: f65701a9  stp x22, x21, [sp, #0x10]
0x0601064C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06010650: f50301aa  mov x21, x1
0x06010654: e1031faa  mov x1, xzr
0x06010658: f30303aa  mov x19, x3
0x0601065C: f40302aa  mov x20, x2
0x06010660: f60300aa  mov x22, x0
0x06010664: e627db97  bl #0x56da5fc
0x06010668: e00316aa  mov x0, x22
0x0601066C: 150c01f8  str x21, [x0, #0x10]!
0x06010670: e10315aa  mov x1, x21
0x06010674: d4c04597  bl #0x31809c4
0x06010678: d30e02f8  str x19, [x22, #0x20]!
0x0601067C: d4821ff8  stur x20, [x22, #-8]
0x06010680: e00316aa  mov x0, x22
0x06010684: e10313aa  mov x1, x19
0x06010688: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0601068C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06010690: fe0743f8  ldr x30, [sp], #0x30
0x06010694: ccc04517  b #0x31809c4

