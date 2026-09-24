; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1334 MergeEngine.Configuration.Definitions.WeightedItem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A2E9D4 | public bool Equals(WeightedItem other) { }
; bytes=112 sha256=a16df9185018c4fa3352e51a906987d99f654b8cd48547627c57539dd7e3603a status=arm64_complete_bound indexed_start=True
0x06A2E9D4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A2E9D8: e10200b4  cbz x1, #0x6a2ea34
0x06A2E9DC: 081040b9  ldr w8, [x0, #0x10]
0x06A2E9E0: 291040b9  ldr w9, [x1, #0x10]
0x06A2E9E4: f30301aa  mov x19, x1
0x06A2E9E8: 1f01096b  cmp w8, w9
0x06A2E9EC: 41020054  b.ne #0x6a2ea34
0x06A2E9F0: 000c40f9  ldr x0, [x0, #0x18]
0x06A2E9F4: 600200b4  cbz x0, #0x6a2ea40
0x06A2E9F8: 080040f9  ldr x8, [x0]
0x06A2E9FC: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A2EA00: 20013fd6  blr x9
0x06A2EA04: 680e40f9  ldr x8, [x19, #0x18]
0x06A2EA08: c80100b4  cbz x8, #0x6a2ea40
0x06A2EA0C: 090140f9  ldr x9, [x8]
0x06A2EA10: f30300aa  mov x19, x0
0x06A2EA14: e00308aa  mov x0, x8
0x06A2EA18: 2a855ca9  ldp x10, x1, [x9, #0x1c8]
0x06A2EA1C: 40013fd6  blr x10
0x06A2EA20: e10300aa  mov x1, x0
0x06A2EA24: e00313aa  mov x0, x19
0x06A2EA28: e2031faa  mov x2, xzr
0x06A2EA2C: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2EA30: 90efaa17  b #0x54ea870
0x06A2EA34: e0031f2a  mov w0, wzr
0x06A2EA38: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A2EA3C: c0035fd6  ret
0x06A2EA40: 9b481d97  bl #0x3180cac

; RVA 0x6A2EA44 | public void .ctor() { }
; bytes=8 sha256=84be24a3a879bf80962dd24546b57a26df8f2ba36284c2ee529965e7a671c432 status=arm64_complete_bound indexed_start=True
0x06A2EA44: e1031faa  mov x1, xzr
0x06A2EA48: edaeb217  b #0x56da5fc

