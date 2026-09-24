; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9881 Merger.Services.Backend.Sync.Data.Payloads.Board.ItemQueue
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67CCA1C | public void .ctor(string itemId, string uuid, ItemPayloadBase itemBaseData, DynamicMergeItemConfig dynamicMergeItemConfig, long addedTimestamp = 0) { }
; bytes=136 sha256=63a969db3b4162aeb31bc484e066fb67411b98b63866c8f0c17ac99129ab7918 status=arm64_complete_bound indexed_start=True
0x067CCA1C: fe0f1cf8  str x30, [sp, #-0x40]!
0x067CCA20: f85f01a9  stp x24, x23, [sp, #0x10]
0x067CCA24: f65702a9  stp x22, x21, [sp, #0x20]
0x067CCA28: f44f03a9  stp x20, x19, [sp, #0x30]
0x067CCA2C: f70301aa  mov x23, x1
0x067CCA30: e1031faa  mov x1, xzr
0x067CCA34: f30305aa  mov x19, x5
0x067CCA38: f40304aa  mov x20, x4
0x067CCA3C: f50303aa  mov x21, x3
0x067CCA40: f60302aa  mov x22, x2
0x067CCA44: f80300aa  mov x24, x0
0x067CCA48: ed36bc97  bl #0x56da5fc
0x067CCA4C: e00318aa  mov x0, x24
0x067CCA50: 170c01f8  str x23, [x0, #0x10]!
0x067CCA54: e10317aa  mov x1, x23
0x067CCA58: dbcf2697  bl #0x31809c4
0x067CCA5C: e00318aa  mov x0, x24
0x067CCA60: 168c01f8  str x22, [x0, #0x18]!
0x067CCA64: e10316aa  mov x1, x22
0x067CCA68: d7cf2697  bl #0x31809c4
0x067CCA6C: e00318aa  mov x0, x24
0x067CCA70: 150c02f8  str x21, [x0, #0x20]!
0x067CCA74: e10315aa  mov x1, x21
0x067CCA78: d3cf2697  bl #0x31809c4
0x067CCA7C: 148f02f8  str x20, [x24, #0x28]!
0x067CCA80: e00318aa  mov x0, x24
0x067CCA84: e10314aa  mov x1, x20
0x067CCA88: cfcf2697  bl #0x31809c4
0x067CCA8C: 130700f9  str x19, [x24, #8]
0x067CCA90: f44f43a9  ldp x20, x19, [sp, #0x30]
0x067CCA94: f65742a9  ldp x22, x21, [sp, #0x20]
0x067CCA98: f85f41a9  ldp x24, x23, [sp, #0x10]
0x067CCA9C: fe0744f8  ldr x30, [sp], #0x40
0x067CCAA0: c0035fd6  ret

