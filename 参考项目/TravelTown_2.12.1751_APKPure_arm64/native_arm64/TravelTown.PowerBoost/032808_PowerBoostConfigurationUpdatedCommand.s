; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32808 Merger.MergeBoard.PowerBoost.Commands.PowerBoostConfigurationUpdatedCommand
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD4798 | public override void Execute(PowerBoostConfigurationUpdatedSignal signal) { }
; bytes=360 sha256=1f8a92e9d9d750f2e503f9f23f7c1e9f467925eb556ee2e82c5c8da686d00fe9 status=arm64_complete_bound indexed_start=True
0x06AD4798: fe0f1cf8  str x30, [sp, #-0x40]!
0x06AD479C: f85f01a9  stp x24, x23, [sp, #0x10]
0x06AD47A0: f65702a9  stp x22, x21, [sp, #0x20]
0x06AD47A4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06AD47A8: b49200d0  adrp x20, #0x7d2a000
0x06AD47AC: 88fe6a39  ldrb w8, [x20, #0xabf]
0x06AD47B0: f60301aa  mov x22, x1
0x06AD47B4: f30300aa  mov x19, x0
0x06AD47B8: 28010037  tbnz w8, #0, #0x6ad47dc
0x06AD47BC: e06200f0  adrp x0, #0x7733000
0x06AD47C0: 001047f9  ldr x0, [x0, #0xe20]
0x06AD47C4: 95b01a97  bl #0x3180a18
0x06AD47C8: e06200f0  adrp x0, #0x7733000
0x06AD47CC: 006847f9  ldr x0, [x0, #0xed0]
0x06AD47D0: 92b01a97  bl #0x3180a18
0x06AD47D4: 28008052  movz w8, #0x1
0x06AD47D8: 88fe2a39  strb w8, [x20, #0xabf]
0x06AD47DC: 160900b4  cbz x22, #0x6ad48fc
0x06AD47E0: d41240f9  ldr x20, [x22, #0x20]
0x06AD47E4: f40200b4  cbz x20, #0x6ad4840
0x06AD47E8: 751a40f9  ldr x21, [x19, #0x30]
0x06AD47EC: 950800b4  cbz x21, #0x6ad48fc
0x06AD47F0: ea6200f0  adrp x10, #0x7733000
0x06AD47F4: 4a1147f9  ldr x10, [x10, #0xe20]
0x06AD47F8: a80240f9  ldr x8, [x21]
0x06AD47FC: d80a40f9  ldr x24, [x22, #0x10]
0x06AD4800: d75a4329  ldp w23, w22, [x22, #0x18]
0x06AD4804: 410140f9  ldr x1, [x10]
0x06AD4808: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD480C: 290100b4  cbz x9, #0x6ad4830
0x06AD4810: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD4814: 4a210091  add x10, x10, #8
0x06AD4818: 4b815ff8  ldur x11, [x10, #-8]
0x06AD481C: 7f0101eb  cmp x11, x1
0x06AD4820: a0010054  b.eq #0x6ad4854
0x06AD4824: 290500f1  subs x9, x9, #1
0x06AD4828: 4a410091  add x10, x10, #0x10
0x06AD482C: 61ffff54  b.ne #0x6ad4818
0x06AD4830: 62018052  movz w2, #0xb
0x06AD4834: e00315aa  mov x0, x21
0x06AD4838: b6081a97  bl #0x3156b10
0x06AD483C: 0a000014  b #0x6ad4864
0x06AD4840: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD4844: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD4848: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06AD484C: fe0744f8  ldr x30, [sp], #0x40
0x06AD4850: c0035fd6  ret
0x06AD4854: 490140b9  ldr w9, [x10]
0x06AD4858: 292d0011  add w9, w9, #0xb
0x06AD485C: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD4860: 00e10491  add x0, x8, #0x138
0x06AD4864: 081440a9  ldp x8, x5, [x0]
0x06AD4868: e00315aa  mov x0, x21
0x06AD486C: e10318aa  mov x1, x24
0x06AD4870: e203172a  mov w2, w23
0x06AD4874: e303162a  mov w3, w22
0x06AD4878: e40314aa  mov x4, x20
0x06AD487C: 00013fd6  blr x8
0x06AD4880: 731e40f9  ldr x19, [x19, #0x38]
0x06AD4884: d30300b4  cbz x19, #0x6ad48fc
0x06AD4888: ea6200f0  adrp x10, #0x7733000
0x06AD488C: 680240f9  ldr x8, [x19]
0x06AD4890: 4a6947f9  ldr x10, [x10, #0xed0]
0x06AD4894: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD4898: 410140f9  ldr x1, [x10]
0x06AD489C: 290100b4  cbz x9, #0x6ad48c0
0x06AD48A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD48A4: 4a210091  add x10, x10, #8
0x06AD48A8: 4b815ff8  ldur x11, [x10, #-8]
0x06AD48AC: 7f0101eb  cmp x11, x1
0x06AD48B0: 00010054  b.eq #0x6ad48d0
0x06AD48B4: 290500f1  subs x9, x9, #1
0x06AD48B8: 4a410091  add x10, x10, #0x10
0x06AD48BC: 61ffff54  b.ne #0x6ad48a8
0x06AD48C0: 42018052  movz w2, #0xa
0x06AD48C4: e00313aa  mov x0, x19
0x06AD48C8: 92081a97  bl #0x3156b10
0x06AD48CC: 05000014  b #0x6ad48e0
0x06AD48D0: 490140b9  ldr w9, [x10]
0x06AD48D4: 29290011  add w9, w9, #0xa
0x06AD48D8: 08d1298b  add x8, x8, w9, sxtw #4
0x06AD48DC: 00e10491  add x0, x8, #0x138
0x06AD48E0: 020440a9  ldp x2, x1, [x0]
0x06AD48E4: e00313aa  mov x0, x19
0x06AD48E8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06AD48EC: f65742a9  ldp x22, x21, [sp, #0x20]
0x06AD48F0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06AD48F4: fe0744f8  ldr x30, [sp], #0x40
0x06AD48F8: 40001fd6  br x2
0x06AD48FC: ecb01a97  bl #0x3180cac

; RVA 0x6AD4900 | public void .ctor() { }
; bytes=72 sha256=d7a7fd28a7c7e1f015cda862c84a955ed1b16318a9112663d5bd9ef4b98848ca status=arm64_complete_bound indexed_start=True
0x06AD4900: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD4904: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD4908: b49200d0  adrp x20, #0x7d2a000
0x06AD490C: 15630090  adrp x21, #0x7734000
0x06AD4910: 88026b39  ldrb w8, [x20, #0xac0]
0x06AD4914: b59241f9  ldr x21, [x21, #0x320]
0x06AD4918: f30300aa  mov x19, x0
0x06AD491C: c8000037  tbnz w8, #0, #0x6ad4934
0x06AD4920: 00630090  adrp x0, #0x7734000
0x06AD4924: 009041f9  ldr x0, [x0, #0x320]
0x06AD4928: 3cb01a97  bl #0x3180a18
0x06AD492C: 28008052  movz w8, #0x1
0x06AD4930: 88022b39  strb w8, [x20, #0xac0]
0x06AD4934: a10240f9  ldr x1, [x21]
0x06AD4938: e00313aa  mov x0, x19
0x06AD493C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD4940: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD4944: 39378717  b #0x4ca2628

