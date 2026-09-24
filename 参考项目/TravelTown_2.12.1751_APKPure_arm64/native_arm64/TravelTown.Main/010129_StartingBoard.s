; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10129 Merger.Services.User.Data.Profile.Game.StartingBoard.StartingBoard
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68418E4 | public string get_UniqueId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x068418E4: 000c40f9  ldr x0, [x0, #0x18]
0x068418E8: c0035fd6  ret

; RVA 0x68418EC | public void set_UniqueId(string value) { }
; bytes=8 sha256=dbcbccfffe804a8fb588d7540acfbc12d7a59eb4ba2d0e00fdc5c3a884d5f2bc status=arm64_complete_bound indexed_start=True
0x068418EC: 018c01f8  str x1, [x0, #0x18]!
0x068418F0: 35fc2417  b #0x31809c4

; RVA 0x68418F4 | public MergeBoardItem[,] GetBoardItems() { }
; bytes=64 sha256=d5aa3f1b40ad289df6ba8e5491b299aa1eb6cfa13c6b7e620fcfad33ccb43c25 status=arm64_complete_bound indexed_start=True
0x068418F4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068418F8: f44f01a9  stp x20, x19, [sp, #0x10]
0x068418FC: f30300aa  mov x19, x0
0x06841900: 740e42f8  ldr x20, [x19, #0x20]!
0x06841904: 140100b5  cbnz x20, #0x6841924
0x06841908: f50300aa  mov x21, x0
0x0684190C: 0a000094  bl #0x6841934
0x06841910: f40300aa  mov x20, x0
0x06841914: a01200f9  str x0, [x21, #0x20]
0x06841918: e00313aa  mov x0, x19
0x0684191C: e10314aa  mov x1, x20
0x06841920: 29fc2497  bl #0x31809c4
0x06841924: e00314aa  mov x0, x20
0x06841928: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0684192C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06841930: c0035fd6  ret

; RVA 0x6841A74 | public void .ctor() { }
; bytes=8 sha256=9e9be5aeb74eb713e7d0f9881dbbe39b7bf42ae1337041ee9e30dfa9b8e8d50e status=arm64_complete_bound indexed_start=True
0x06841A74: e1031faa  mov x1, xzr
0x06841A78: e162ba17  b #0x56da5fc

; RVA 0x6841A7C | public void .ctor(string uniqueId, List<StartingBoardRow> boardRows) { }
; bytes=68 sha256=c483587e4794ea2c3d70f3a39e4e4053798133f0fe643696b813a08ecb71a2cb status=arm64_complete_bound indexed_start=True
0x06841A7C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06841A80: f44f01a9  stp x20, x19, [sp, #0x10]
0x06841A84: f40301aa  mov x20, x1
0x06841A88: e1031faa  mov x1, xzr
0x06841A8C: f30302aa  mov x19, x2
0x06841A90: f50300aa  mov x21, x0
0x06841A94: da62ba97  bl #0x56da5fc
0x06841A98: e00315aa  mov x0, x21
0x06841A9C: 130c01f8  str x19, [x0, #0x10]!
0x06841AA0: e10313aa  mov x1, x19
0x06841AA4: c8fb2497  bl #0x31809c4
0x06841AA8: b48e01f8  str x20, [x21, #0x18]!
0x06841AAC: e10314aa  mov x1, x20
0x06841AB0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06841AB4: e00315aa  mov x0, x21
0x06841AB8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06841ABC: c2fb2417  b #0x31809c4

; RVA 0x6841934 | private MergeBoardItem[,] CreateBoardItems() { }
; bytes=320 sha256=aca1e3c20ac601be03804f6fc49c4b82816a9f73c2f732838ff6efee69807961 status=arm64_complete_bound indexed_start=True
0x06841934: ff4301d1  sub sp, sp, #0x50
0x06841938: fe0b00f9  str x30, [sp, #0x10]
0x0684193C: f85f02a9  stp x24, x23, [sp, #0x20]
0x06841940: f65703a9  stp x22, x21, [sp, #0x30]
0x06841944: f44f04a9  stp x20, x19, [sp, #0x40]
0x06841948: 55a70090  adrp x21, #0x7d29000
0x0684194C: b47600b0  adrp x20, #0x7716000
0x06841950: a8564e39  ldrb w8, [x21, #0x395]
0x06841954: 943e47f9  ldr x20, [x20, #0xe78]
0x06841958: f30300aa  mov x19, x0
0x0684195C: 28010037  tbnz w8, #0, #0x6841980
0x06841960: a07600b0  adrp x0, #0x7716000
0x06841964: 004047f9  ldr x0, [x0, #0xe80]
0x06841968: 2cfc2497  bl #0x3180a18
0x0684196C: a07600b0  adrp x0, #0x7716000
0x06841970: 003c47f9  ldr x0, [x0, #0xe78]
0x06841974: 29fc2497  bl #0x3180a18
0x06841978: 28008052  movz w8, #0x1
0x0684197C: a8560e39  strb w8, [x21, #0x395]
0x06841980: e873fdb0  adrp x8, #0x16be000
0x06841984: 08c13e91  add x8, x8, #0xfb0
0x06841988: 0001c03d  ldr q0, [x8]
0x0684198C: 800240f9  ldr x0, [x20]
0x06841990: b67600b0  adrp x22, #0x7716000
0x06841994: d64247f9  ldr x22, [x22, #0xe80]
0x06841998: e1030091  mov x1, sp
0x0684199C: e003803d  str q0, [sp]
0x068419A0: 59fc2497  bl #0x3180b04
0x068419A4: f40313aa  mov x20, x19
0x068419A8: 800e02f8  str x0, [x20, #0x20]!
0x068419AC: e10300aa  mov x1, x0
0x068419B0: e00314aa  mov x0, x20
0x068419B4: 04fc2497  bl #0x31809c4
0x068419B8: e8031f2a  mov w8, wzr
0x068419BC: f5031faa  mov x21, xzr
0x068419C0: 177d4093  sxtw x23, w8
0x068419C4: 600a40f9  ldr x0, [x19, #0x10]
0x068419C8: 200500b4  cbz x0, #0x6841a6c
0x068419CC: c20240f9  ldr x2, [x22]
0x068419D0: e103152a  mov w1, w21
0x068419D4: f2096097  bl #0x404419c
0x068419D8: a00400b4  cbz x0, #0x6841a6c
0x068419DC: 39000094  bl #0x6841ac0
0x068419E0: 600400b4  cbz x0, #0x6841a6c
0x068419E4: 081840b9  ldr w8, [x0, #0x18]
0x068419E8: ff02086b  cmp w23, w8
0x068419EC: 22040054  b.hs #0x6841a70
0x068419F0: 080c178b  add x8, x0, x23, lsl #3
0x068419F4: 001140f9  ldr x0, [x8, #0x20]
0x068419F8: a00300b4  cbz x0, #0x6841a6c
0x068419FC: 980240f9  ldr x24, [x20]
0x06841A00: 40000094  bl #0x6841b00
0x06841A04: 580300b4  cbz x24, #0x6841a6c
0x06841A08: 080b40f9  ldr x8, [x24, #0x10]
0x06841A0C: 090140b9  ldr w9, [x8]
0x06841A10: bf0209eb  cmp x21, x9
0x06841A14: e2020054  b.hs #0x6841a70
0x06841A18: 080940f9  ldr x8, [x8, #0x10]
0x06841A1C: ff02086b  cmp w23, w8
0x06841A20: 82020054  b.hs #0x6841a70
0x06841A24: 085d159b  madd x8, x8, x21, x23
0x06841A28: e10300aa  mov x1, x0
0x06841A2C: 000f088b  add x0, x24, x8, lsl #3
0x06841A30: 010c02f8  str x1, [x0, #0x20]!
0x06841A34: e4fb2497  bl #0x31809c4
0x06841A38: b5060091  add x21, x21, #1
0x06841A3C: bf2600f1  cmp x21, #9
0x06841A40: 21fcff54  b.ne #0x68419c4
0x06841A44: e8060011  add w8, w23, #1
0x06841A48: 1f1d0071  cmp w8, #7
0x06841A4C: 81fbff54  b.ne #0x68419bc
0x06841A50: 800240f9  ldr x0, [x20]
0x06841A54: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06841A58: f65743a9  ldp x22, x21, [sp, #0x30]
0x06841A5C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x06841A60: fe0b40f9  ldr x30, [sp, #0x10]
0x06841A64: ff430191  add sp, sp, #0x50
0x06841A68: c0035fd6  ret
0x06841A6C: 90fc2497  bl #0x3180cac
0x06841A70: 91fc2497  bl #0x3180cb4

