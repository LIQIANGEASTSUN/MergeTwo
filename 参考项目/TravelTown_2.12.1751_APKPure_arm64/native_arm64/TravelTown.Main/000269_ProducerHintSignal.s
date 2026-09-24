; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 269 MergeEngine.Signal.Board.ProducerHintSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF4B04 | public string get_ItemUuid() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF4B04: 000840f9  ldr x0, [x0, #0x10]
0x05FF4B08: c0035fd6  ret

; RVA 0x5FF4B0C | public Transform get_HintTransform() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05FF4B0C: 000c40f9  ldr x0, [x0, #0x18]
0x05FF4B10: c0035fd6  ret

; RVA 0x5FF4B14 | public string get_Source() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF4B14: 001040f9  ldr x0, [x0, #0x20]
0x05FF4B18: c0035fd6  ret

; RVA 0x5FF4B1C | public void .ctor(IMergeItem producerMergeItem, string itemUuid, Transform hintTransform, string analyticsReason) { }
; bytes=116 sha256=4b9447fb880592b4f5b60d46db45f7585cfdc0e0f2609cb0265a98e3347c92e6 status=arm64_complete_bound indexed_start=True
0x05FF4B1C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FF4B20: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF4B24: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF4B28: f60301aa  mov x22, x1
0x05FF4B2C: e1031faa  mov x1, xzr
0x05FF4B30: f30304aa  mov x19, x4
0x05FF4B34: f40303aa  mov x20, x3
0x05FF4B38: f50302aa  mov x21, x2
0x05FF4B3C: f70300aa  mov x23, x0
0x05FF4B40: af96db97  bl #0x56da5fc
0x05FF4B44: e00317aa  mov x0, x23
0x05FF4B48: 150c01f8  str x21, [x0, #0x10]!
0x05FF4B4C: e10315aa  mov x1, x21
0x05FF4B50: 9d2f4697  bl #0x31809c4
0x05FF4B54: e00317aa  mov x0, x23
0x05FF4B58: 148c01f8  str x20, [x0, #0x18]!
0x05FF4B5C: e10314aa  mov x1, x20
0x05FF4B60: 992f4697  bl #0x31809c4
0x05FF4B64: e00317aa  mov x0, x23
0x05FF4B68: 130c02f8  str x19, [x0, #0x20]!
0x05FF4B6C: e10313aa  mov x1, x19
0x05FF4B70: 952f4697  bl #0x31809c4
0x05FF4B74: f68e02f8  str x22, [x23, #0x28]!
0x05FF4B78: e10316aa  mov x1, x22
0x05FF4B7C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF4B80: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF4B84: e00317aa  mov x0, x23
0x05FF4B88: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FF4B8C: 8e2f4617  b #0x31809c4

