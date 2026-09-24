; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 482 MergeEngine.Model.RemoteSpawning.PushedGraphItemsModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x612D6DC | protected override void InitializeModel() { }
; bytes=28 sha256=3eb3270fbc10d537940d86188031040341df9b1982f94e615159d398f99d59bf status=arm64_complete_bound indexed_start=True
0x0612D6DC: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0612D6E0: e1031faa  mov x1, xzr
0x0612D6E4: f30300aa  mov x19, x0
0x0612D6E8: 1a7a2094  bl #0x694bf50
0x0612D6EC: e00313aa  mov x0, x19
0x0612D6F0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0612D6F4: 01000014  b #0x612d6f8

; RVA 0x612D774 | protected override void DisposeModel() { }
; bytes=28 sha256=9ca3e2dac177d11f16ec97ff0af63db50c26087ae78b08b9b64f3c4138a369df status=arm64_complete_bound indexed_start=True
0x0612D774: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0612D778: f30300aa  mov x19, x0
0x0612D77C: 05000094  bl #0x612d790
0x0612D780: e00313aa  mov x0, x19
0x0612D784: e1031faa  mov x1, xzr
0x0612D788: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0612D78C: f2792014  b #0x694bf54

; RVA 0x612D800 | public void AddPushItem(PushedItem pushedItem) { }
; bytes=816 sha256=1f1cb83c1cdc289ae1589eb39e86206a7dbb1ad90491642f2ee0615e91032bd7 status=arm64_complete_bound indexed_start=True
0x0612D800: ff4301d1  sub sp, sp, #0x50
0x0612D804: fe5f02a9  stp x30, x23, [sp, #0x20]
0x0612D808: f65703a9  stp x22, x21, [sp, #0x30]
0x0612D80C: f44f04a9  stp x20, x19, [sp, #0x40]
0x0612D810: b4df00f0  adrp x20, #0x7d24000
0x0612D814: 88ce5339  ldrb w8, [x20, #0x4f3]
0x0612D818: f30301aa  mov x19, x1
0x0612D81C: f50300aa  mov x21, x0
0x0612D820: 68030037  tbnz w8, #0, #0x612d88c
0x0612D824: 00aa0090  adrp x0, #0x766d000
0x0612D828: 006c46f9  ldr x0, [x0, #0xcd8]
0x0612D82C: 7b4c4197  bl #0x3180a18
0x0612D830: 60ad00b0  adrp x0, #0x76da000
0x0612D834: 001c43f9  ldr x0, [x0, #0x638]
0x0612D838: 784c4197  bl #0x3180a18
0x0612D83C: 00a900b0  adrp x0, #0x764e000
0x0612D840: 00d042f9  ldr x0, [x0, #0x5a0]
0x0612D844: 754c4197  bl #0x3180a18
0x0612D848: 60aa0090  adrp x0, #0x7679000
0x0612D84C: 007844f9  ldr x0, [x0, #0x8f0]
0x0612D850: 724c4197  bl #0x3180a18
0x0612D854: 60ad00b0  adrp x0, #0x76da000
0x0612D858: 002043f9  ldr x0, [x0, #0x640]
0x0612D85C: 6f4c4197  bl #0x3180a18
0x0612D860: 60ad00b0  adrp x0, #0x76da000
0x0612D864: 002443f9  ldr x0, [x0, #0x648]
0x0612D868: 6c4c4197  bl #0x3180a18
0x0612D86C: 60ad00b0  adrp x0, #0x76da000
0x0612D870: 002843f9  ldr x0, [x0, #0x650]
0x0612D874: 694c4197  bl #0x3180a18
0x0612D878: 60ad00b0  adrp x0, #0x76da000
0x0612D87C: 002c43f9  ldr x0, [x0, #0x658]
0x0612D880: 664c4197  bl #0x3180a18
0x0612D884: 28008052  movz w8, #0x1
0x0612D888: 88ce1339  strb w8, [x20, #0x4f3]
0x0612D88C: 931400b4  cbz x19, #0x612db1c
0x0612D890: b41640f9  ldr x20, [x21, #0x28]
0x0612D894: 541400b4  cbz x20, #0x612db1c
0x0612D898: 69ad00b0  adrp x9, #0x76da000
0x0612D89C: 291d43f9  ldr x9, [x9, #0x638]
0x0612D8A0: 880240f9  ldr x8, [x20]
0x0612D8A4: 761640f9  ldr x22, [x19, #0x28]
0x0612D8A8: 370140f9  ldr x23, [x9]
0x0612D8AC: 095d4279  ldrh w9, [x8, #0x12e]
0x0612D8B0: e11240f9  ldr x1, [x23, #0x20]
0x0612D8B4: e2a24079  ldrh w2, [x23, #0x50]
0x0612D8B8: 290100b4  cbz x9, #0x612d8dc
0x0612D8BC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612D8C0: 4a210091  add x10, x10, #8
0x0612D8C4: 4b815ff8  ldur x11, [x10, #-8]
0x0612D8C8: 7f0101eb  cmp x11, x1
0x0612D8CC: e0000054  b.eq #0x612d8e8
0x0612D8D0: 290500f1  subs x9, x9, #1
0x0612D8D4: 4a410091  add x10, x10, #0x10
0x0612D8D8: 61ffff54  b.ne #0x612d8c4
0x0612D8DC: e00314aa  mov x0, x20
0x0612D8E0: 8ca44097  bl #0x3156b10
0x0612D8E4: 05000014  b #0x612d8f8
0x0612D8E8: 490140b9  ldr w9, [x10]
0x0612D8EC: 2901020b  add w9, w9, w2
0x0612D8F0: 08d1298b  add x8, x8, w9, sxtw #4
0x0612D8F4: 00e10491  add x0, x8, #0x138
0x0612D8F8: 000440f9  ldr x0, [x0, #8]
0x0612D8FC: e10317aa  mov x1, x23
0x0612D900: a24c4197  bl #0x3180b88
0x0612D904: 080440f9  ldr x8, [x0, #8]
0x0612D908: e20300aa  mov x2, x0
0x0612D90C: e00314aa  mov x0, x20
0x0612D910: e10316aa  mov x1, x22
0x0612D914: 00013fd6  blr x8
0x0612D918: c00100b4  cbz x0, #0x612d950
0x0612D91C: 611240f9  ldr x1, [x19, #0x20]
0x0612D920: 620a40f9  ldr x2, [x19, #0x10]
0x0612D924: e30300aa  mov x3, x0
0x0612D928: f40300aa  mov x20, x0
0x0612D92C: 81000094  bl #0x612db30
0x0612D930: 821240f9  ldr x2, [x20, #0x20]
0x0612D934: e10300aa  mov x1, x0
0x0612D938: e00315aa  mov x0, x21
0x0612D93C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0612D940: f65743a9  ldp x22, x21, [sp, #0x30]
0x0612D944: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x0612D948: ff430191  add sp, sp, #0x50
0x0612D94C: a4000014  b #0x612dbdc
0x0612D950: 08a900b0  adrp x8, #0x764e000
0x0612D954: 08d142f9  ldr x8, [x8, #0x5a0]
0x0612D958: 81008052  movz w1, #0x4
0x0612D95C: 000140f9  ldr x0, [x8]
0x0612D960: 674c4197  bl #0x3180afc
0x0612D964: f40300aa  mov x20, x0
0x0612D968: e00315aa  mov x0, x21
0x0612D96C: e1031faa  mov x1, xzr
0x0612D970: 15b5d697  bl #0x56dadc4
0x0612D974: 400d00b4  cbz x0, #0x612db1c
0x0612D978: 080040f9  ldr x8, [x0]
0x0612D97C: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x0612D980: 20013fd6  blr x9
0x0612D984: d40c00b4  cbz x20, #0x612db1c
0x0612D988: f50300aa  mov x21, x0
0x0612D98C: c00000b4  cbz x0, #0x612d9a4
0x0612D990: 880240f9  ldr x8, [x20]
0x0612D994: e00315aa  mov x0, x21
0x0612D998: 012140f9  ldr x1, [x8, #0x40]
0x0612D99C: 7d4c4197  bl #0x3180b90
0x0612D9A0: 200c00b4  cbz x0, #0x612db24
0x0612D9A4: 881a40b9  ldr w8, [x20, #0x18]
0x0612D9A8: c80b0034  cbz w8, #0x612db20
0x0612D9AC: e00314aa  mov x0, x20
0x0612D9B0: 150c02f8  str x21, [x0, #0x20]!
0x0612D9B4: e10315aa  mov x1, x21
0x0612D9B8: 034c4197  bl #0x31809c4
0x0612D9BC: 75ad00b0  adrp x21, #0x76da000
0x0612D9C0: b52643f9  ldr x21, [x21, #0x648]
0x0612D9C4: a00240f9  ldr x0, [x21]
0x0612D9C8: e00000b4  cbz x0, #0x612d9e4
0x0612D9CC: 880240f9  ldr x8, [x20]
0x0612D9D0: 012140f9  ldr x1, [x8, #0x40]
0x0612D9D4: 6f4c4197  bl #0x3180b90
0x0612D9D8: 600a00b4  cbz x0, #0x612db24
0x0612D9DC: a10240f9  ldr x1, [x21]
0x0612D9E0: 02000014  b #0x612d9e8
0x0612D9E4: e1031faa  mov x1, xzr
0x0612D9E8: 881a40b9  ldr w8, [x20, #0x18]
0x0612D9EC: 1f050071  cmp w8, #1
0x0612D9F0: 89090054  b.ls #0x612db20
0x0612D9F4: e00314aa  mov x0, x20
0x0612D9F8: 018c02f8  str x1, [x0, #0x28]!
0x0612D9FC: f24b4197  bl #0x31809c4
0x0612DA00: 76ad00b0  adrp x22, #0x76da000
0x0612DA04: d62a43f9  ldr x22, [x22, #0x650]
0x0612DA08: c00240f9  ldr x0, [x22]
0x0612DA0C: e00000b4  cbz x0, #0x612da28
0x0612DA10: 880240f9  ldr x8, [x20]
0x0612DA14: 012140f9  ldr x1, [x8, #0x40]
0x0612DA18: 5e4c4197  bl #0x3180b90
0x0612DA1C: 400800b4  cbz x0, #0x612db24
0x0612DA20: c10240f9  ldr x1, [x22]
0x0612DA24: 02000014  b #0x612da2c
0x0612DA28: e1031faa  mov x1, xzr
0x0612DA2C: 881a40b9  ldr w8, [x20, #0x18]
0x0612DA30: 1f090071  cmp w8, #2
0x0612DA34: 69070054  b.ls #0x612db20
0x0612DA38: e00314aa  mov x0, x20
0x0612DA3C: 010c03f8  str x1, [x0, #0x30]!
0x0612DA40: e14b4197  bl #0x31809c4
0x0612DA44: 731640f9  ldr x19, [x19, #0x28]
0x0612DA48: d30000b4  cbz x19, #0x612da60
0x0612DA4C: 880240f9  ldr x8, [x20]
0x0612DA50: e00313aa  mov x0, x19
0x0612DA54: 012140f9  ldr x1, [x8, #0x40]
0x0612DA58: 4e4c4197  bl #0x3180b90
0x0612DA5C: 400600b4  cbz x0, #0x612db24
0x0612DA60: 881a40b9  ldr w8, [x20, #0x18]
0x0612DA64: 1f0d0071  cmp w8, #3
0x0612DA68: c9050054  b.ls #0x612db20
0x0612DA6C: e00314aa  mov x0, x20
0x0612DA70: 138c03f8  str x19, [x0, #0x38]!
0x0612DA74: e10313aa  mov x1, x19
0x0612DA78: d34b4197  bl #0x31809c4
0x0612DA7C: 68ad00b0  adrp x8, #0x76da000
0x0612DA80: 082d43f9  ldr x8, [x8, #0x658]
0x0612DA84: e10314aa  mov x1, x20
0x0612DA88: e2031faa  mov x2, xzr
0x0612DA8C: 000140f9  ldr x0, [x8]
0x0612DA90: 3529cf97  bl #0x54f7f64
0x0612DA94: 68aa0090  adrp x8, #0x7679000
0x0612DA98: 087944f9  ldr x8, [x8, #0x8f0]
0x0612DA9C: f30300aa  mov x19, x0
0x0612DAA0: 09008092  movn x9, #0
0x0612DAA4: ca0a8052  movz w10, #0x56
0x0612DAA8: 080140f9  ldr x8, [x8]
0x0612DAAC: e0230091  add x0, sp, #8
0x0612DAB0: e1031faa  mov x1, xzr
0x0612DAB4: ea1b00b9  str w10, [sp, #0x18]
0x0612DAB8: e8a700a9  stp x8, x9, [sp, #8]
0x0612DABC: 0a7fd697  bl #0x56cd6e4
0x0612DAC0: 08aa0090  adrp x8, #0x766d000
0x0612DAC4: 086d46f9  ldr x8, [x8, #0xcd8]
0x0612DAC8: f40300aa  mov x20, x0
0x0612DACC: 080140f9  ldr x8, [x8]
0x0612DAD0: 09e140b9  ldr w9, [x8, #0xe0]
0x0612DAD4: 69000035  cbnz w9, #0x612dae0
0x0612DAD8: e00308aa  mov x0, x8
0x0612DADC: 2c4c4197  bl #0x3180b8c
0x0612DAE0: 68ad00b0  adrp x8, #0x76da000
0x0612DAE4: 082143f9  ldr x8, [x8, #0x640]
0x0612DAE8: a40240f9  ldr x4, [x21]
0x0612DAEC: e00313aa  mov x0, x19
0x0612DAF0: e10314aa  mov x1, x20
0x0612DAF4: 030140f9  ldr x3, [x8]
0x0612DAF8: e2031faa  mov x2, xzr
0x0612DAFC: e5031faa  mov x5, xzr
0x0612DB00: e6031faa  mov x6, xzr
0x0612DB04: 4cfacc97  bl #0x546c434
0x0612DB08: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0612DB0C: f65743a9  ldp x22, x21, [sp, #0x30]
0x0612DB10: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x0612DB14: ff430191  add sp, sp, #0x50
0x0612DB18: c0035fd6  ret
0x0612DB1C: 644c4197  bl #0x3180cac
0x0612DB20: 654c4197  bl #0x3180cb4
0x0612DB24: 6b4c4197  bl #0x3180cd0
0x0612DB28: e1031faa  mov x1, xzr
0x0612DB2C: 144c4197  bl #0x3180b7c

; RVA 0x612DB30 | private PushedGraphItemsModel.PushedGraphItem ConvertToPushedGraphItem(string pushId, string itemId, GraphPushedItemData extraData) { }
; bytes=172 sha256=37a17ed2de01b2c43badf4a4da56825c1c6a2fe55e0eec3ee5fbd87f294372e1 status=arm64_complete_bound indexed_start=True
0x0612DB30: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0612DB34: f65701a9  stp x22, x21, [sp, #0x10]
0x0612DB38: f44f02a9  stp x20, x19, [sp, #0x20]
0x0612DB3C: b5df00f0  adrp x21, #0x7d24000
0x0612DB40: 77ad00b0  adrp x23, #0x76da000
0x0612DB44: a8d25339  ldrb w8, [x21, #0x4f4]
0x0612DB48: f73243f9  ldr x23, [x23, #0x660]
0x0612DB4C: f30303aa  mov x19, x3
0x0612DB50: f60302aa  mov x22, x2
0x0612DB54: f40301aa  mov x20, x1
0x0612DB58: c8000037  tbnz w8, #0, #0x612db70
0x0612DB5C: 60ad00b0  adrp x0, #0x76da000
0x0612DB60: 003043f9  ldr x0, [x0, #0x660]
0x0612DB64: ad4b4197  bl #0x3180a18
0x0612DB68: 28008052  movz w8, #0x1
0x0612DB6C: a8d21339  strb w8, [x21, #0x4f4]
0x0612DB70: e00240f9  ldr x0, [x23]
0x0612DB74: 4b4c4197  bl #0x3180ca0
0x0612DB78: e1031faa  mov x1, xzr
0x0612DB7C: f50300aa  mov x21, x0
0x0612DB80: 9fb2d697  bl #0x56da5fc
0x0612DB84: b50200b4  cbz x21, #0x612dbd8
0x0612DB88: e00315aa  mov x0, x21
0x0612DB8C: 168c01f8  str x22, [x0, #0x18]!
0x0612DB90: e10316aa  mov x1, x22
0x0612DB94: 8c4b4197  bl #0x31809c4
0x0612DB98: 130200b4  cbz x19, #0x612dbd8
0x0612DB9C: 681a40b9  ldr w8, [x19, #0x18]
0x0612DBA0: e00315aa  mov x0, x21
0x0612DBA4: e10314aa  mov x1, x20
0x0612DBA8: a82200b9  str w8, [x21, #0x20]
0x0612DBAC: 140c01f8  str x20, [x0, #0x10]!
0x0612DBB0: 854b4197  bl #0x31809c4
0x0612DBB4: 610a40f9  ldr x1, [x19, #0x10]
0x0612DBB8: e00315aa  mov x0, x21
0x0612DBBC: 018c02f8  str x1, [x0, #0x28]!
0x0612DBC0: 814b4197  bl #0x31809c4
0x0612DBC4: e00315aa  mov x0, x21
0x0612DBC8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0612DBCC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0612DBD0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0612DBD4: c0035fd6  ret
0x0612DBD8: 354c4197  bl #0x3180cac

; RVA 0x612DBDC | private void AddPushedGraphItem(PushedGraphItemsModel.PushedGraphItem itemData, string graphId) { }
; bytes=1220 sha256=df702eba15b8343fb6e5c6f979e08d3cc9461d2f699cdf17a46b852aae09f6b4 status=arm64_complete_bound indexed_start=True
0x0612DBDC: ff8301d1  sub sp, sp, #0x60
0x0612DBE0: fe1300f9  str x30, [sp, #0x20]
0x0612DBE4: f85f03a9  stp x24, x23, [sp, #0x30]
0x0612DBE8: f65704a9  stp x22, x21, [sp, #0x40]
0x0612DBEC: f44f05a9  stp x20, x19, [sp, #0x50]
0x0612DBF0: b7df00f0  adrp x23, #0x7d24000
0x0612DBF4: 75ad00b0  adrp x21, #0x76da000
0x0612DBF8: e8d65339  ldrb w8, [x23, #0x4f5]
0x0612DBFC: b53643f9  ldr x21, [x21, #0x668]
0x0612DC00: f30302aa  mov x19, x2
0x0612DC04: f60301aa  mov x22, x1
0x0612DC08: f40300aa  mov x20, x0
0x0612DC0C: 88070037  tbnz w8, #0, #0x612dcfc
0x0612DC10: 00aa0090  adrp x0, #0x766d000
0x0612DC14: 006c46f9  ldr x0, [x0, #0xcd8]
0x0612DC18: 804b4197  bl #0x3180a18
0x0612DC1C: 60ad00b0  adrp x0, #0x76da000
0x0612DC20: 003843f9  ldr x0, [x0, #0x670]
0x0612DC24: 7d4b4197  bl #0x3180a18
0x0612DC28: 60ad00b0  adrp x0, #0x76da000
0x0612DC2C: 003c43f9  ldr x0, [x0, #0x678]
0x0612DC30: 7a4b4197  bl #0x3180a18
0x0612DC34: 60ad00b0  adrp x0, #0x76da000
0x0612DC38: 004043f9  ldr x0, [x0, #0x680]
0x0612DC3C: 774b4197  bl #0x3180a18
0x0612DC40: a0a900d0  adrp x0, #0x7663000
0x0612DC44: 00f446f9  ldr x0, [x0, #0xde8]
0x0612DC48: 744b4197  bl #0x3180a18
0x0612DC4C: 60ad00b0  adrp x0, #0x76da000
0x0612DC50: 004443f9  ldr x0, [x0, #0x688]
0x0612DC54: 714b4197  bl #0x3180a18
0x0612DC58: 60ad00b0  adrp x0, #0x76da000
0x0612DC5C: 004843f9  ldr x0, [x0, #0x690]
0x0612DC60: 6e4b4197  bl #0x3180a18
0x0612DC64: 60ad00b0  adrp x0, #0x76da000
0x0612DC68: 004c43f9  ldr x0, [x0, #0x698]
0x0612DC6C: 6b4b4197  bl #0x3180a18
0x0612DC70: 60ad00b0  adrp x0, #0x76da000
0x0612DC74: 005043f9  ldr x0, [x0, #0x6a0]
0x0612DC78: 684b4197  bl #0x3180a18
0x0612DC7C: 60ad00b0  adrp x0, #0x76da000
0x0612DC80: 005443f9  ldr x0, [x0, #0x6a8]
0x0612DC84: 654b4197  bl #0x3180a18
0x0612DC88: 60ad00b0  adrp x0, #0x76da000
0x0612DC8C: 005843f9  ldr x0, [x0, #0x6b0]
0x0612DC90: 624b4197  bl #0x3180a18
0x0612DC94: 60aa0090  adrp x0, #0x7679000
0x0612DC98: 007844f9  ldr x0, [x0, #0x8f0]
0x0612DC9C: 5f4b4197  bl #0x3180a18
0x0612DCA0: 60ad00b0  adrp x0, #0x76da000
0x0612DCA4: 005c43f9  ldr x0, [x0, #0x6b8]
0x0612DCA8: 5c4b4197  bl #0x3180a18
0x0612DCAC: 60ad00b0  adrp x0, #0x76da000
0x0612DCB0: 006043f9  ldr x0, [x0, #0x6c0]
0x0612DCB4: 594b4197  bl #0x3180a18
0x0612DCB8: 60ad00b0  adrp x0, #0x76da000
0x0612DCBC: 003443f9  ldr x0, [x0, #0x668]
0x0612DCC0: 564b4197  bl #0x3180a18
0x0612DCC4: 60ad00b0  adrp x0, #0x76da000
0x0612DCC8: 006443f9  ldr x0, [x0, #0x6c8]
0x0612DCCC: 534b4197  bl #0x3180a18
0x0612DCD0: 60ad00b0  adrp x0, #0x76da000
0x0612DCD4: 006843f9  ldr x0, [x0, #0x6d0]
0x0612DCD8: 504b4197  bl #0x3180a18
0x0612DCDC: 60ad00b0  adrp x0, #0x76da000
0x0612DCE0: 002043f9  ldr x0, [x0, #0x640]
0x0612DCE4: 4d4b4197  bl #0x3180a18
0x0612DCE8: 40a900b0  adrp x0, #0x7656000
0x0612DCEC: 009441f9  ldr x0, [x0, #0x328]
0x0612DCF0: 4a4b4197  bl #0x3180a18
0x0612DCF4: 28008052  movz w8, #0x1
0x0612DCF8: e8d61339  strb w8, [x23, #0x4f5]
0x0612DCFC: a00240f9  ldr x0, [x21]
0x0612DD00: ff1700f9  str xzr, [sp, #0x28]
0x0612DD04: e74b4197  bl #0x3180ca0
0x0612DD08: e1031faa  mov x1, xzr
0x0612DD0C: f70300aa  mov x23, x0
0x0612DD10: 3bb2d697  bl #0x56da5fc
0x0612DD14: 571c00b4  cbz x23, #0x612e09c
0x0612DD18: f50317aa  mov x21, x23
0x0612DD1C: b60e01f8  str x22, [x21, #0x10]!
0x0612DD20: e00315aa  mov x0, x21
0x0612DD24: e10316aa  mov x1, x22
0x0612DD28: 274b4197  bl #0x31809c4
0x0612DD2C: e00313aa  mov x0, x19
0x0612DD30: e1031faa  mov x1, xzr
0x0612DD34: 3640cf97  bl #0x54fde0c
0x0612DD38: 40060036  tbz w0, #0, #0x612de00
0x0612DD3C: e00314aa  mov x0, x20
0x0612DD40: e1031faa  mov x1, xzr
0x0612DD44: 20b4d697  bl #0x56dadc4
0x0612DD48: a01a00b4  cbz x0, #0x612e09c
0x0612DD4C: 080040f9  ldr x8, [x0]
0x0612DD50: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x0612DD54: 20013fd6  blr x9
0x0612DD58: 48a900b0  adrp x8, #0x7656000
0x0612DD5C: 089541f9  ldr x8, [x8, #0x328]
0x0612DD60: 69ad00b0  adrp x9, #0x76da000
0x0612DD64: 296943f9  ldr x9, [x9, #0x6d0]
0x0612DD68: e10300aa  mov x1, x0
0x0612DD6C: 080140f9  ldr x8, [x8]
0x0612DD70: e3031faa  mov x3, xzr
0x0612DD74: 220140f9  ldr x2, [x9]
0x0612DD78: e00308aa  mov x0, x8
0x0612DD7C: ef25cf97  bl #0x54f7538
0x0612DD80: 68aa0090  adrp x8, #0x7679000
0x0612DD84: 087944f9  ldr x8, [x8, #0x8f0]
0x0612DD88: f30300aa  mov x19, x0
0x0612DD8C: 09008092  movn x9, #0
0x0612DD90: ca0a8052  movz w10, #0x56
0x0612DD94: 080140f9  ldr x8, [x8]
0x0612DD98: e0230091  add x0, sp, #8
0x0612DD9C: e1031faa  mov x1, xzr
0x0612DDA0: ea1b00b9  str w10, [sp, #0x18]
0x0612DDA4: e8a700a9  stp x8, x9, [sp, #8]
0x0612DDA8: 4f7ed697  bl #0x56cd6e4
0x0612DDAC: 08aa0090  adrp x8, #0x766d000
0x0612DDB0: 086d46f9  ldr x8, [x8, #0xcd8]
0x0612DDB4: f40300aa  mov x20, x0
0x0612DDB8: 080140f9  ldr x8, [x8]
0x0612DDBC: 09e140b9  ldr w9, [x8, #0xe0]
0x0612DDC0: 69000035  cbnz w9, #0x612ddcc
0x0612DDC4: e00308aa  mov x0, x8
0x0612DDC8: 714b4197  bl #0x3180b8c
0x0612DDCC: 68ad00b0  adrp x8, #0x76da000
0x0612DDD0: 69ad00b0  adrp x9, #0x76da000
0x0612DDD4: 082143f9  ldr x8, [x8, #0x640]
0x0612DDD8: 296543f9  ldr x9, [x9, #0x6c8]
0x0612DDDC: e00313aa  mov x0, x19
0x0612DDE0: e10314aa  mov x1, x20
0x0612DDE4: 030140f9  ldr x3, [x8]
0x0612DDE8: 240140f9  ldr x4, [x9]
0x0612DDEC: e2031faa  mov x2, xzr
0x0612DDF0: e5031faa  mov x5, xzr
0x0612DDF4: e6031faa  mov x6, xzr
0x0612DDF8: 8ff9cc97  bl #0x546c434
0x0612DDFC: 9d000014  b #0x612e070
0x0612DE00: 801e40f9  ldr x0, [x20, #0x38]
0x0612DE04: c01400b4  cbz x0, #0x612e09c
0x0612DE08: 68ad00b0  adrp x8, #0x76da000
0x0612DE0C: 083943f9  ldr x8, [x8, #0x670]
0x0612DE10: e2a30091  add x2, sp, #0x28
0x0612DE14: e10313aa  mov x1, x19
0x0612DE18: 030140f9  ldr x3, [x8]
0x0612DE1C: a5dab697  bl #0x4ee48b0
0x0612DE20: 20050036  tbz w0, #0, #0x612dec4
0x0612DE24: f61740f9  ldr x22, [sp, #0x28]
0x0612DE28: 760100b5  cbnz x22, #0x612de54
0x0612DE2C: 68ad00b0  adrp x8, #0x76da000
0x0612DE30: 085143f9  ldr x8, [x8, #0x6a0]
0x0612DE34: 000140f9  ldr x0, [x8]
0x0612DE38: 9a4b4197  bl #0x3180ca0
0x0612DE3C: 68ad00b0  adrp x8, #0x76da000
0x0612DE40: 084943f9  ldr x8, [x8, #0x690]
0x0612DE44: f60300aa  mov x22, x0
0x0612DE48: 010140f9  ldr x1, [x8]
0x0612DE4C: 7b577c97  bl #0x4043c38
0x0612DE50: f61700f9  str x22, [sp, #0x28]
0x0612DE54: 68ad00b0  adrp x8, #0x76da000
0x0612DE58: 085543f9  ldr x8, [x8, #0x6a8]
0x0612DE5C: 000140f9  ldr x0, [x8]
0x0612DE60: 904b4197  bl #0x3180ca0
0x0612DE64: 68ad00b0  adrp x8, #0x76da000
0x0612DE68: 086143f9  ldr x8, [x8, #0x6c0]
0x0612DE6C: e10317aa  mov x1, x23
0x0612DE70: e3031faa  mov x3, xzr
0x0612DE74: f80300aa  mov x24, x0
0x0612DE78: 020140f9  ldr x2, [x8]
0x0612DE7C: b8bf8897  bl #0x435dd5c
0x0612DE80: f61000b4  cbz x22, #0x612e09c
0x0612DE84: 68ad00b0  adrp x8, #0x76da000
0x0612DE88: 084543f9  ldr x8, [x8, #0x688]
0x0612DE8C: e00316aa  mov x0, x22
0x0612DE90: e10318aa  mov x1, x24
0x0612DE94: 020140f9  ldr x2, [x8]
0x0612DE98: a45b7c97  bl #0x4044d28
0x0612DE9C: 4006f837  tbnz w0, #0x1f, #0x612df64
0x0612DEA0: e103002a  mov w1, w0
0x0612DEA4: e01740f9  ldr x0, [sp, #0x28]
0x0612DEA8: a00f00b4  cbz x0, #0x612e09c
0x0612DEAC: 68ad00b0  adrp x8, #0x76da000
0x0612DEB0: a20240f9  ldr x2, [x21]
0x0612DEB4: 084d43f9  ldr x8, [x8, #0x698]
0x0612DEB8: 030140f9  ldr x3, [x8]
0x0612DEBC: cd587c97  bl #0x40441f0
0x0612DEC0: 56000014  b #0x612e018
0x0612DEC4: a80240f9  ldr x8, [x21]
0x0612DEC8: a80e00b4  cbz x8, #0x612e09c
0x0612DECC: 802240f9  ldr x0, [x20, #0x40]
0x0612DED0: 600e00b4  cbz x0, #0x612e09c
0x0612DED4: 010940f9  ldr x1, [x8, #0x10]
0x0612DED8: a8a900d0  adrp x8, #0x7663000
0x0612DEDC: 08f546f9  ldr x8, [x8, #0xde8]
0x0612DEE0: 020140f9  ldr x2, [x8]
0x0612DEE4: 465a7c97  bl #0x40447fc
0x0612DEE8: 80090037  tbnz w0, #0, #0x612e018
0x0612DEEC: 68ad00b0  adrp x8, #0x76da000
0x0612DEF0: 961e40f9  ldr x22, [x20, #0x38]
0x0612DEF4: 085143f9  ldr x8, [x8, #0x6a0]
0x0612DEF8: 000140f9  ldr x0, [x8]
0x0612DEFC: 694b4197  bl #0x3180ca0
0x0612DF00: 68ad00b0  adrp x8, #0x76da000
0x0612DF04: 084943f9  ldr x8, [x8, #0x690]
0x0612DF08: f70300aa  mov x23, x0
0x0612DF0C: 010140f9  ldr x1, [x8]
0x0612DF10: 4a577c97  bl #0x4043c38
0x0612DF14: 570c00b4  cbz x23, #0x612e09c
0x0612DF18: 69ad00b0  adrp x9, #0x76da000
0x0612DF1C: a10240f9  ldr x1, [x21]
0x0612DF20: 294143f9  ldr x9, [x9, #0x680]
0x0612DF24: ea1e40b9  ldr w10, [x23, #0x1c]
0x0612DF28: e80a40f9  ldr x8, [x23, #0x10]
0x0612DF2C: 290140f9  ldr x9, [x9]
0x0612DF30: 4a050011  add w10, w10, #1
0x0612DF34: ea1e00b9  str w10, [x23, #0x1c]
0x0612DF38: 280b00b4  cbz x8, #0x612e09c
0x0612DF3C: ea1a80b9  ldrsw x10, [x23, #0x18]
0x0612DF40: 0b1940b9  ldr w11, [x8, #0x18]
0x0612DF44: 5f010b6b  cmp w10, w11
0x0612DF48: e2040054  b.hs #0x612dfe4
0x0612DF4C: 49050011  add w9, w10, #1
0x0612DF50: 000d0a8b  add x0, x8, x10, lsl #3
0x0612DF54: e91a00b9  str w9, [x23, #0x18]
0x0612DF58: 010c02f8  str x1, [x0, #0x20]!
0x0612DF5C: 9a4a4197  bl #0x31809c4
0x0612DF60: 26000014  b #0x612dff8
0x0612DF64: a80240f9  ldr x8, [x21]
0x0612DF68: a80900b4  cbz x8, #0x612e09c
0x0612DF6C: 802240f9  ldr x0, [x20, #0x40]
0x0612DF70: 600900b4  cbz x0, #0x612e09c
0x0612DF74: 010940f9  ldr x1, [x8, #0x10]
0x0612DF78: a8a900d0  adrp x8, #0x7663000
0x0612DF7C: 08f546f9  ldr x8, [x8, #0xde8]
0x0612DF80: 020140f9  ldr x2, [x8]
0x0612DF84: 1e5a7c97  bl #0x40447fc
0x0612DF88: 80040037  tbnz w0, #0, #0x612e018
0x0612DF8C: e01740f9  ldr x0, [sp, #0x28]
0x0612DF90: 600800b4  cbz x0, #0x612e09c
0x0612DF94: 69ad00b0  adrp x9, #0x76da000
0x0612DF98: a10240f9  ldr x1, [x21]
0x0612DF9C: 294143f9  ldr x9, [x9, #0x680]
0x0612DFA0: 0a1c40b9  ldr w10, [x0, #0x1c]
0x0612DFA4: 080840f9  ldr x8, [x0, #0x10]
0x0612DFA8: 290140f9  ldr x9, [x9]
0x0612DFAC: 4a050011  add w10, w10, #1
0x0612DFB0: 0a1c00b9  str w10, [x0, #0x1c]
0x0612DFB4: 480700b4  cbz x8, #0x612e09c
0x0612DFB8: 0a1880b9  ldrsw x10, [x0, #0x18]
0x0612DFBC: 0b1940b9  ldr w11, [x8, #0x18]
0x0612DFC0: 5f010b6b  cmp w10, w11
0x0612DFC4: 22060054  b.hs #0x612e088
0x0612DFC8: 49050011  add w9, w10, #1
0x0612DFCC: 080d0a8b  add x8, x8, x10, lsl #3
0x0612DFD0: 091800b9  str w9, [x0, #0x18]
0x0612DFD4: 010d02f8  str x1, [x8, #0x20]!
0x0612DFD8: e00308aa  mov x0, x8
0x0612DFDC: 7a4a4197  bl #0x31809c4
0x0612DFE0: 0e000014  b #0x612e018
0x0612DFE4: 281140f9  ldr x8, [x9, #0x20]
0x0612DFE8: e00317aa  mov x0, x23
0x0612DFEC: 086140f9  ldr x8, [x8, #0xc0]
0x0612DFF0: 023940f9  ldr x2, [x8, #0x70]
0x0612DFF4: 1e597c97  bl #0x404446c
0x0612DFF8: 360500b4  cbz x22, #0x612e09c
0x0612DFFC: 68ad00b0  adrp x8, #0x76da000
0x0612E000: 083d43f9  ldr x8, [x8, #0x678]
0x0612E004: e00316aa  mov x0, x22
0x0612E008: e10313aa  mov x1, x19
0x0612E00C: e20317aa  mov x2, x23
0x0612E010: 030140f9  ldr x3, [x8]
0x0612E014: 55d3b697  bl #0x4ee2d68
0x0612E018: a80240f9  ldr x8, [x21]
0x0612E01C: 080400b4  cbz x8, #0x612e09c
0x0612E020: 160d40f9  ldr x22, [x8, #0x18]
0x0612E024: 171540f9  ldr x23, [x8, #0x28]
0x0612E028: 68ad0090  adrp x8, #0x76da000
0x0612E02C: 941240f9  ldr x20, [x20, #0x20]
0x0612E030: 085943f9  ldr x8, [x8, #0x6b0]
0x0612E034: 000140f9  ldr x0, [x8]
0x0612E038: 1a4b4197  bl #0x3180ca0
0x0612E03C: e10313aa  mov x1, x19
0x0612E040: e20316aa  mov x2, x22
0x0612E044: e30317aa  mov x3, x23
0x0612E048: e4031faa  mov x4, xzr
0x0612E04C: f50300aa  mov x21, x0
0x0612E050: 155a1a94  bl #0x67c48a4
0x0612E054: 540200b4  cbz x20, #0x612e09c
0x0612E058: 68ad0090  adrp x8, #0x76da000
0x0612E05C: 085d43f9  ldr x8, [x8, #0x6b8]
0x0612E060: e00314aa  mov x0, x20
0x0612E064: e10315aa  mov x1, x21
0x0612E068: 020140f9  ldr x2, [x8]
0x0612E06C: 40db7197  bl #0x3da4d6c
0x0612E070: f44f45a9  ldp x20, x19, [sp, #0x50]
0x0612E074: f65744a9  ldp x22, x21, [sp, #0x40]
0x0612E078: f85f43a9  ldp x24, x23, [sp, #0x30]
0x0612E07C: fe1340f9  ldr x30, [sp, #0x20]
0x0612E080: ff830191  add sp, sp, #0x60
0x0612E084: c0035fd6  ret
0x0612E088: 281140f9  ldr x8, [x9, #0x20]
0x0612E08C: 086140f9  ldr x8, [x8, #0xc0]
0x0612E090: 023940f9  ldr x2, [x8, #0x70]
0x0612E094: f6587c97  bl #0x404446c
0x0612E098: e0ffff17  b #0x612e018
0x0612E09C: 044b4197  bl #0x3180cac

; RVA 0x612E0B0 | public PushedItemNotificationData FindItemToPushForSpawner(string spawnerId) { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x0612E0B0: 01000014  b #0x612e0b4

; RVA 0x612E438 | public string PeekItemForSpawner(string spawnerId) { }
; bytes=832 sha256=16a4c094d34af1a68b76998ceaa2ce499f07a4f2e77651d1cc755fb1f2871356 status=arm64_complete_bound indexed_start=True
0x0612E438: ff4301d1  sub sp, sp, #0x50
0x0612E43C: fe5f02a9  stp x30, x23, [sp, #0x20]
0x0612E440: f65703a9  stp x22, x21, [sp, #0x30]
0x0612E444: f44f04a9  stp x20, x19, [sp, #0x40]
0x0612E448: b5df00d0  adrp x21, #0x7d24000
0x0612E44C: a8da5339  ldrb w8, [x21, #0x4f6]
0x0612E450: f30301aa  mov x19, x1
0x0612E454: f40300aa  mov x20, x0
0x0612E458: 68030037  tbnz w8, #0, #0x612e4c4
0x0612E45C: 60ad0090  adrp x0, #0x76da000
0x0612E460: 003843f9  ldr x0, [x0, #0x670]
0x0612E464: 6d494197  bl #0x3180a18
0x0612E468: 60ad0090  adrp x0, #0x76da000
0x0612E46C: 008443f9  ldr x0, [x0, #0x708]
0x0612E470: 6a494197  bl #0x3180a18
0x0612E474: 60ad0090  adrp x0, #0x76da000
0x0612E478: 008843f9  ldr x0, [x0, #0x710]
0x0612E47C: 67494197  bl #0x3180a18
0x0612E480: 60ad0090  adrp x0, #0x76da000
0x0612E484: 008c43f9  ldr x0, [x0, #0x718]
0x0612E488: 64494197  bl #0x3180a18
0x0612E48C: 60aa0090  adrp x0, #0x767a000
0x0612E490: 004c42f9  ldr x0, [x0, #0x498]
0x0612E494: 61494197  bl #0x3180a18
0x0612E498: 40aa00f0  adrp x0, #0x7679000
0x0612E49C: 001044f9  ldr x0, [x0, #0x820]
0x0612E4A0: 5e494197  bl #0x3180a18
0x0612E4A4: 60ad0090  adrp x0, #0x76da000
0x0612E4A8: 009043f9  ldr x0, [x0, #0x720]
0x0612E4AC: 5b494197  bl #0x3180a18
0x0612E4B0: 00a90090  adrp x0, #0x764e000
0x0612E4B4: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0612E4B8: 58494197  bl #0x3180a18
0x0612E4BC: 28008052  movz w8, #0x1
0x0612E4C0: a8da1339  strb w8, [x21, #0x4f6]
0x0612E4C4: ff7f01a9  stp xzr, xzr, [sp, #0x10]
0x0612E4C8: ff7f00a9  stp xzr, xzr, [sp]
0x0612E4CC: 951a40f9  ldr x21, [x20, #0x30]
0x0612E4D0: 751100b4  cbz x21, #0x612e6fc
0x0612E4D4: 77aa0090  adrp x23, #0x767a000
0x0612E4D8: a80240f9  ldr x8, [x21]
0x0612E4DC: f74e42f9  ldr x23, [x23, #0x498]
0x0612E4E0: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E4E4: e10240f9  ldr x1, [x23]
0x0612E4E8: 290100b4  cbz x9, #0x612e50c
0x0612E4EC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E4F0: 4a210091  add x10, x10, #8
0x0612E4F4: 4b815ff8  ldur x11, [x10, #-8]
0x0612E4F8: 7f0101eb  cmp x11, x1
0x0612E4FC: 00010054  b.eq #0x612e51c
0x0612E500: 290500f1  subs x9, x9, #1
0x0612E504: 4a410091  add x10, x10, #0x10
0x0612E508: 61ffff54  b.ne #0x612e4f4
0x0612E50C: 82008052  movz w2, #0x4
0x0612E510: e00315aa  mov x0, x21
0x0612E514: 7fa14097  bl #0x3156b10
0x0612E518: 05000014  b #0x612e52c
0x0612E51C: 490140b9  ldr w9, [x10]
0x0612E520: 29110011  add w9, w9, #4
0x0612E524: 08d1298b  add x8, x8, w9, sxtw #4
0x0612E528: 00e10491  add x0, x8, #0x138
0x0612E52C: 080840a9  ldp x8, x2, [x0]
0x0612E530: e00315aa  mov x0, x21
0x0612E534: e10313aa  mov x1, x19
0x0612E538: 00013fd6  blr x8
0x0612E53C: 800c00b4  cbz x0, #0x612e6cc
0x0612E540: 4aaa00f0  adrp x10, #0x7679000
0x0612E544: 080040f9  ldr x8, [x0]
0x0612E548: 4a1144f9  ldr x10, [x10, #0x820]
0x0612E54C: 951e40f9  ldr x21, [x20, #0x38]
0x0612E550: f60300aa  mov x22, x0
0x0612E554: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E558: 410140f9  ldr x1, [x10]
0x0612E55C: 290100b4  cbz x9, #0x612e580
0x0612E560: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E564: 4a210091  add x10, x10, #8
0x0612E568: 4b815ff8  ldur x11, [x10, #-8]
0x0612E56C: 7f0101eb  cmp x11, x1
0x0612E570: 00010054  b.eq #0x612e590
0x0612E574: 290500f1  subs x9, x9, #1
0x0612E578: 4a410091  add x10, x10, #0x10
0x0612E57C: 61ffff54  b.ne #0x612e568
0x0612E580: e00316aa  mov x0, x22
0x0612E584: e2031f2a  mov w2, wzr
0x0612E588: 62a14097  bl #0x3156b10
0x0612E58C: 04000014  b #0x612e59c
0x0612E590: 490180b9  ldrsw x9, [x10]
0x0612E594: 0811098b  add x8, x8, x9, lsl #4
0x0612E598: 00e10491  add x0, x8, #0x138
0x0612E59C: 080440a9  ldp x8, x1, [x0]
0x0612E5A0: e00316aa  mov x0, x22
0x0612E5A4: 00013fd6  blr x8
0x0612E5A8: b50a00b4  cbz x21, #0x612e6fc
0x0612E5AC: 68ad0090  adrp x8, #0x76da000
0x0612E5B0: 083943f9  ldr x8, [x8, #0x670]
0x0612E5B4: e10300aa  mov x1, x0
0x0612E5B8: e2630091  add x2, sp, #0x18
0x0612E5BC: e00315aa  mov x0, x21
0x0612E5C0: 030140f9  ldr x3, [x8]
0x0612E5C4: bbd8b697  bl #0x4ee48b0
0x0612E5C8: 20080036  tbz w0, #0, #0x612e6cc
0x0612E5CC: 941a40f9  ldr x20, [x20, #0x30]
0x0612E5D0: 740900b4  cbz x20, #0x612e6fc
0x0612E5D4: 880240f9  ldr x8, [x20]
0x0612E5D8: e10240f9  ldr x1, [x23]
0x0612E5DC: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E5E0: 290100b4  cbz x9, #0x612e604
0x0612E5E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E5E8: 4a210091  add x10, x10, #8
0x0612E5EC: 4b815ff8  ldur x11, [x10, #-8]
0x0612E5F0: 7f0101eb  cmp x11, x1
0x0612E5F4: 00010054  b.eq #0x612e614
0x0612E5F8: 290500f1  subs x9, x9, #1
0x0612E5FC: 4a410091  add x10, x10, #0x10
0x0612E600: 61ffff54  b.ne #0x612e5ec
0x0612E604: 22038052  movz w2, #0x19
0x0612E608: e00314aa  mov x0, x20
0x0612E60C: 41a14097  bl #0x3156b10
0x0612E610: 05000014  b #0x612e624
0x0612E614: 490140b9  ldr w9, [x10]
0x0612E618: 29650011  add w9, w9, #0x19
0x0612E61C: 08d1298b  add x8, x8, w9, sxtw #4
0x0612E620: 00e10491  add x0, x8, #0x138
0x0612E624: 080840a9  ldp x8, x2, [x0]
0x0612E628: e00314aa  mov x0, x20
0x0612E62C: e10313aa  mov x1, x19
0x0612E630: 00013fd6  blr x8
0x0612E634: e90f40f9  ldr x9, [sp, #0x18]
0x0612E638: 290600b4  cbz x9, #0x612e6fc
0x0612E63C: 68ad0090  adrp x8, #0x76da000
0x0612E640: 089143f9  ldr x8, [x8, #0x720]
0x0612E644: f303002a  mov w19, w0
0x0612E648: e00309aa  mov x0, x9
0x0612E64C: 010140f9  ldr x1, [x8]
0x0612E650: e8030091  mov x8, sp
0x0612E654: 855a7c97  bl #0x4045068
0x0612E658: 74ad0090  adrp x20, #0x76da000
0x0612E65C: 948a43f9  ldr x20, [x20, #0x710]
0x0612E660: 810240f9  ldr x1, [x20]
0x0612E664: e0030091  mov x0, sp
0x0612E668: d39cbb97  bl #0x50159b4
0x0612E66C: 60020036  tbz w0, #0, #0x612e6b8
0x0612E670: e80b40f9  ldr x8, [sp, #0x10]
0x0612E674: 280400b4  cbz x8, #0x612e6f8
0x0612E678: 092140b9  ldr w9, [x8, #0x20]
0x0612E67C: 7f02096b  cmp w19, w9
0x0612E680: 0bffff54  b.lt #0x612e660
0x0612E684: 130d40f9  ldr x19, [x8, #0x18]
0x0612E688: d30000b5  cbnz x19, #0x612e6a0
0x0612E68C: 08a90090  adrp x8, #0x764e000
0x0612E690: 08ed42f9  ldr x8, [x8, #0x5d8]
0x0612E694: 080140f9  ldr x8, [x8]
0x0612E698: 085d40f9  ldr x8, [x8, #0xb8]
0x0612E69C: 130140f9  ldr x19, [x8]
0x0612E6A0: 68ad0090  adrp x8, #0x76da000
0x0612E6A4: 088543f9  ldr x8, [x8, #0x708]
0x0612E6A8: e0030091  mov x0, sp
0x0612E6AC: 010140f9  ldr x1, [x8]
0x0612E6B0: c09cbb97  bl #0x50159b0
0x0612E6B4: 0b000014  b #0x612e6e0
0x0612E6B8: 68ad0090  adrp x8, #0x76da000
0x0612E6BC: 088543f9  ldr x8, [x8, #0x708]
0x0612E6C0: e0030091  mov x0, sp
0x0612E6C4: 010140f9  ldr x1, [x8]
0x0612E6C8: ba9cbb97  bl #0x50159b0
0x0612E6CC: 08a90090  adrp x8, #0x764e000
0x0612E6D0: 08ed42f9  ldr x8, [x8, #0x5d8]
0x0612E6D4: 080140f9  ldr x8, [x8]
0x0612E6D8: 085d40f9  ldr x8, [x8, #0xb8]
0x0612E6DC: 130140f9  ldr x19, [x8]
0x0612E6E0: e00313aa  mov x0, x19
0x0612E6E4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x0612E6E8: f65743a9  ldp x22, x21, [sp, #0x30]
0x0612E6EC: fe5f42a9  ldp x30, x23, [sp, #0x20]
0x0612E6F0: ff430191  add sp, sp, #0x50
0x0612E6F4: c0035fd6  ret
0x0612E6F8: 6d494197  bl #0x3180cac
0x0612E6FC: 6c494197  bl #0x3180cac
0x0612E700: 01000014  b #0x612e704
0x0612E704: f40300aa  mov x20, x0
0x0612E708: 3f040071  cmp w1, #1
0x0612E70C: a1010054  b.ne #0x612e740
0x0612E710: e00314aa  mov x0, x20
0x0612E714: 7f804294  bl #0x71ce910
0x0612E718: 130040f9  ldr x19, [x0]
0x0612E71C: 81804294  bl #0x71ce920
0x0612E720: 68ad0090  adrp x8, #0x76da000
0x0612E724: 088543f9  ldr x8, [x8, #0x708]
0x0612E728: e0030091  mov x0, sp
0x0612E72C: 010140f9  ldr x1, [x8]
0x0612E730: a09cbb97  bl #0x50159b0
0x0612E734: d3fcffb4  cbz x19, #0x612e6cc
0x0612E738: e00313aa  mov x0, x19
0x0612E73C: 5a494197  bl #0x3180ca4
0x0612E740: f3031faa  mov x19, xzr
0x0612E744: 02000014  b #0x612e74c
0x0612E748: f40300aa  mov x20, x0
0x0612E74C: 68ad0090  adrp x8, #0x76da000
0x0612E750: 088543f9  ldr x8, [x8, #0x708]
0x0612E754: 010140f9  ldr x1, [x8]
0x0612E758: e0030091  mov x0, sp
0x0612E75C: 959cbb97  bl #0x50159b0
0x0612E760: 730000b5  cbnz x19, #0x612e76c
0x0612E764: e00314aa  mov x0, x20
0x0612E768: 7cdc4497  bl #0x3265958
0x0612E76C: e00313aa  mov x0, x19
0x0612E770: 4d494197  bl #0x3180ca4
0x0612E774: 686b3397  bl #0x2e09514

; RVA 0x612D790 | public void SaveCache() { }
; bytes=112 sha256=a516d566d2e2be0d53708f4c5beb956ce66492daf36eb3565ee10027a6d02243 status=arm64_complete_bound indexed_start=True
0x0612D790: fe0f1ef8  str x30, [sp, #-0x20]!
0x0612D794: f44f01a9  stp x20, x19, [sp, #0x10]
0x0612D798: b4df00f0  adrp x20, #0x7d24000
0x0612D79C: 88de5339  ldrb w8, [x20, #0x4f7]
0x0612D7A0: f30300aa  mov x19, x0
0x0612D7A4: c8000037  tbnz w8, #0, #0x612d7bc
0x0612D7A8: 60ad00b0  adrp x0, #0x76da000
0x0612D7AC: 001843f9  ldr x0, [x0, #0x630]
0x0612D7B0: 9a4c4197  bl #0x3180a18
0x0612D7B4: 28008052  movz w8, #0x1
0x0612D7B8: 88de1339  strb w8, [x20, #0x4f7]
0x0612D7BC: e00313aa  mov x0, x19
0x0612D7C0: ee030094  bl #0x612e778
0x0612D7C4: e1031faa  mov x1, xzr
0x0612D7C8: f30300aa  mov x19, x0
0x0612D7CC: 9041cf97  bl #0x54fde0c
0x0612D7D0: 80000036  tbz w0, #0, #0x612d7e0
0x0612D7D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0612D7D8: fe0742f8  ldr x30, [sp], #0x20
0x0612D7DC: c0035fd6  ret
0x0612D7E0: 68ad00b0  adrp x8, #0x76da000
0x0612D7E4: 081943f9  ldr x8, [x8, #0x630]
0x0612D7E8: e10313aa  mov x1, x19
0x0612D7EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0612D7F0: e2031faa  mov x2, xzr
0x0612D7F4: 000140f9  ldr x0, [x8]
0x0612D7F8: fe0742f8  ldr x30, [sp], #0x20
0x0612D7FC: 35ae3614  b #0x6ed90d0

; RVA 0x612D6F8 | public void LoadCache() { }
; bytes=124 sha256=8dfc277fe12da259377469fb6238c7c92ece52c414fb10fbe687e171941a557d status=arm64_complete_bound indexed_start=True
0x0612D6F8: fe0f1df8  str x30, [sp, #-0x30]!
0x0612D6FC: f65701a9  stp x22, x21, [sp, #0x10]
0x0612D700: f44f02a9  stp x20, x19, [sp, #0x20]
0x0612D704: b5df00f0  adrp x21, #0x7d24000
0x0612D708: 16a900b0  adrp x22, #0x764e000
0x0612D70C: 74ad00b0  adrp x20, #0x76da000
0x0612D710: a8e25339  ldrb w8, [x21, #0x4f8]
0x0612D714: d6ee42f9  ldr x22, [x22, #0x5d8]
0x0612D718: 941a43f9  ldr x20, [x20, #0x630]
0x0612D71C: f30300aa  mov x19, x0
0x0612D720: 28010037  tbnz w8, #0, #0x612d744
0x0612D724: 00a900b0  adrp x0, #0x764e000
0x0612D728: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0612D72C: bb4c4197  bl #0x3180a18
0x0612D730: 60ad00b0  adrp x0, #0x76da000
0x0612D734: 001843f9  ldr x0, [x0, #0x630]
0x0612D738: b84c4197  bl #0x3180a18
0x0612D73C: 28008052  movz w8, #0x1
0x0612D740: a8e21339  strb w8, [x21, #0x4f8]
0x0612D744: c80240f9  ldr x8, [x22]
0x0612D748: 800240f9  ldr x0, [x20]
0x0612D74C: e2031faa  mov x2, xzr
0x0612D750: 085d40f9  ldr x8, [x8, #0xb8]
0x0612D754: 010140f9  ldr x1, [x8]
0x0612D758: 82ae3694  bl #0x6ed9160
0x0612D75C: e10300aa  mov x1, x0
0x0612D760: e00313aa  mov x0, x19
0x0612D764: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0612D768: f65741a9  ldp x22, x21, [sp, #0x10]
0x0612D76C: fe0743f8  ldr x30, [sp], #0x30
0x0612D770: 3e040014  b #0x612e868

; RVA 0x612E868 | private void LoadFromJson(string json) { }
; bytes=252 sha256=d197153c1e896d33d384c0a686fa2a57bb6cb955efb6f59f6021140af8065ae4 status=arm64_complete_bound indexed_start=True
0x0612E868: fe0f1df8  str x30, [sp, #-0x30]!
0x0612E86C: f65701a9  stp x22, x21, [sp, #0x10]
0x0612E870: f44f02a9  stp x20, x19, [sp, #0x20]
0x0612E874: b5df00d0  adrp x21, #0x7d24000
0x0612E878: a8e65339  ldrb w8, [x21, #0x4f9]
0x0612E87C: f40301aa  mov x20, x1
0x0612E880: f30300aa  mov x19, x0
0x0612E884: c8000037  tbnz w8, #0, #0x612e89c
0x0612E888: 60ad0090  adrp x0, #0x76da000
0x0612E88C: 009843f9  ldr x0, [x0, #0x730]
0x0612E890: 62484197  bl #0x3180a18
0x0612E894: 28008052  movz w8, #0x1
0x0612E898: a8e61339  strb w8, [x21, #0x4f9]
0x0612E89C: e00314aa  mov x0, x20
0x0612E8A0: e1031faa  mov x1, xzr
0x0612E8A4: 5a3dcf97  bl #0x54fde0c
0x0612E8A8: 40050037  tbnz w0, #0, #0x612e950
0x0612E8AC: 751640f9  ldr x21, [x19, #0x28]
0x0612E8B0: 950500b4  cbz x21, #0x612e960
0x0612E8B4: 69ad0090  adrp x9, #0x76da000
0x0612E8B8: 299943f9  ldr x9, [x9, #0x730]
0x0612E8BC: a80240f9  ldr x8, [x21]
0x0612E8C0: 360140f9  ldr x22, [x9]
0x0612E8C4: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E8C8: c11240f9  ldr x1, [x22, #0x20]
0x0612E8CC: c2a24079  ldrh w2, [x22, #0x50]
0x0612E8D0: 290100b4  cbz x9, #0x612e8f4
0x0612E8D4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E8D8: 4a210091  add x10, x10, #8
0x0612E8DC: 4b815ff8  ldur x11, [x10, #-8]
0x0612E8E0: 7f0101eb  cmp x11, x1
0x0612E8E4: e0000054  b.eq #0x612e900
0x0612E8E8: 290500f1  subs x9, x9, #1
0x0612E8EC: 4a410091  add x10, x10, #0x10
0x0612E8F0: 61ffff54  b.ne #0x612e8dc
0x0612E8F4: e00315aa  mov x0, x21
0x0612E8F8: 86a04097  bl #0x3156b10
0x0612E8FC: 05000014  b #0x612e910
0x0612E900: 490140b9  ldr w9, [x10]
0x0612E904: 2901020b  add w9, w9, w2
0x0612E908: 08d1298b  add x8, x8, w9, sxtw #4
0x0612E90C: 00e10491  add x0, x8, #0x138
0x0612E910: 000440f9  ldr x0, [x0, #8]
0x0612E914: e10316aa  mov x1, x22
0x0612E918: 9c484197  bl #0x3180b88
0x0612E91C: 080440f9  ldr x8, [x0, #8]
0x0612E920: e20300aa  mov x2, x0
0x0612E924: e00315aa  mov x0, x21
0x0612E928: e10314aa  mov x1, x20
0x0612E92C: 00013fd6  blr x8
0x0612E930: 000100b4  cbz x0, #0x612e950
0x0612E934: 608e03f8  str x0, [x19, #0x38]!
0x0612E938: e10300aa  mov x1, x0
0x0612E93C: e00313aa  mov x0, x19
0x0612E940: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0612E944: f65741a9  ldp x22, x21, [sp, #0x10]
0x0612E948: fe0743f8  ldr x30, [sp], #0x30
0x0612E94C: 1e484117  b #0x31809c4
0x0612E950: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0612E954: f65741a9  ldp x22, x21, [sp, #0x10]
0x0612E958: fe0743f8  ldr x30, [sp], #0x30
0x0612E95C: c0035fd6  ret
0x0612E960: d3484197  bl #0x3180cac

; RVA 0x612E778 | private string SaveToJson() { }
; bytes=240 sha256=67b076bfa755aaff9ccb3b871a471e5ed4420362d4b46a27e0fbecd4387c3ae6 status=arm64_complete_bound indexed_start=True
0x0612E778: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0612E77C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0612E780: b3df00d0  adrp x19, #0x7d24000
0x0612E784: 68ea5339  ldrb w8, [x19, #0x4fa]
0x0612E788: f40300aa  mov x20, x0
0x0612E78C: 28010037  tbnz w8, #0, #0x612e7b0
0x0612E790: 60ad0090  adrp x0, #0x76da000
0x0612E794: 009443f9  ldr x0, [x0, #0x728]
0x0612E798: a0484197  bl #0x3180a18
0x0612E79C: 00a90090  adrp x0, #0x764e000
0x0612E7A0: 00ec42f9  ldr x0, [x0, #0x5d8]
0x0612E7A4: 9d484197  bl #0x3180a18
0x0612E7A8: 28008052  movz w8, #0x1
0x0612E7AC: 68ea1339  strb w8, [x19, #0x4fa]
0x0612E7B0: 931e40f9  ldr x19, [x20, #0x38]
0x0612E7B4: d30200b4  cbz x19, #0x612e80c
0x0612E7B8: 941640f9  ldr x20, [x20, #0x28]
0x0612E7BC: 540500b4  cbz x20, #0x612e864
0x0612E7C0: 69ad0090  adrp x9, #0x76da000
0x0612E7C4: 299543f9  ldr x9, [x9, #0x728]
0x0612E7C8: 880240f9  ldr x8, [x20]
0x0612E7CC: 350140f9  ldr x21, [x9]
0x0612E7D0: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E7D4: a11240f9  ldr x1, [x21, #0x20]
0x0612E7D8: a2a24079  ldrh w2, [x21, #0x50]
0x0612E7DC: 290100b4  cbz x9, #0x612e800
0x0612E7E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E7E4: 4a210091  add x10, x10, #8
0x0612E7E8: 4b815ff8  ldur x11, [x10, #-8]
0x0612E7EC: 7f0101eb  cmp x11, x1
0x0612E7F0: e0010054  b.eq #0x612e82c
0x0612E7F4: 290500f1  subs x9, x9, #1
0x0612E7F8: 4a410091  add x10, x10, #0x10
0x0612E7FC: 61ffff54  b.ne #0x612e7e8
0x0612E800: e00314aa  mov x0, x20
0x0612E804: c3a04097  bl #0x3156b10
0x0612E808: 0d000014  b #0x612e83c
0x0612E80C: 08a90090  adrp x8, #0x764e000
0x0612E810: 08ed42f9  ldr x8, [x8, #0x5d8]
0x0612E814: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0612E818: 080140f9  ldr x8, [x8]
0x0612E81C: 085d40f9  ldr x8, [x8, #0xb8]
0x0612E820: 000140f9  ldr x0, [x8]
0x0612E824: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0612E828: c0035fd6  ret
0x0612E82C: 490140b9  ldr w9, [x10]
0x0612E830: 2901020b  add w9, w9, w2
0x0612E834: 08d1298b  add x8, x8, w9, sxtw #4
0x0612E838: 00e10491  add x0, x8, #0x138
0x0612E83C: 000440f9  ldr x0, [x0, #8]
0x0612E840: e10315aa  mov x1, x21
0x0612E844: d1484197  bl #0x3180b88
0x0612E848: e20300aa  mov x2, x0
0x0612E84C: 030440f9  ldr x3, [x0, #8]
0x0612E850: e00314aa  mov x0, x20
0x0612E854: e10313aa  mov x1, x19
0x0612E858: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0612E85C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0612E860: 60001fd6  br x3
0x0612E864: 12494197  bl #0x3180cac

; RVA 0x612E0B4 | private PushedItemNotificationData FindGraphItemToPush(string spawnerId) { }
; bytes=900 sha256=d0a26ab2310d133a73c9e60b3bfd98ef56a99dbcfb6700946528bc616d85afae status=arm64_complete_bound indexed_start=True
0x0612E0B4: fe0f1cf8  str x30, [sp, #-0x40]!
0x0612E0B8: f85f01a9  stp x24, x23, [sp, #0x10]
0x0612E0BC: f65702a9  stp x22, x21, [sp, #0x20]
0x0612E0C0: f44f03a9  stp x20, x19, [sp, #0x30]
0x0612E0C4: b6df00d0  adrp x22, #0x7d24000
0x0612E0C8: 75ad0090  adrp x21, #0x76da000
0x0612E0CC: c8ee5339  ldrb w8, [x22, #0x4fb]
0x0612E0D0: b56e43f9  ldr x21, [x21, #0x6d8]
0x0612E0D4: f40301aa  mov x20, x1
0x0612E0D8: f30300aa  mov x19, x0
0x0612E0DC: 28040037  tbnz w8, #0, #0x612e160
0x0612E0E0: 60ad0090  adrp x0, #0x76da000
0x0612E0E4: 003843f9  ldr x0, [x0, #0x670]
0x0612E0E8: 4c4a4197  bl #0x3180a18
0x0612E0EC: 60ad0090  adrp x0, #0x76da000
0x0612E0F0: 007043f9  ldr x0, [x0, #0x6e0]
0x0612E0F4: 494a4197  bl #0x3180a18
0x0612E0F8: 60ad0090  adrp x0, #0x76da000
0x0612E0FC: 007443f9  ldr x0, [x0, #0x6e8]
0x0612E100: 464a4197  bl #0x3180a18
0x0612E104: 60aa0090  adrp x0, #0x767a000
0x0612E108: 004c42f9  ldr x0, [x0, #0x498]
0x0612E10C: 434a4197  bl #0x3180a18
0x0612E110: 40aa00f0  adrp x0, #0x7679000
0x0612E114: 001044f9  ldr x0, [x0, #0x820]
0x0612E118: 404a4197  bl #0x3180a18
0x0612E11C: 00a90090  adrp x0, #0x764e000
0x0612E120: 006446f9  ldr x0, [x0, #0xcc8]
0x0612E124: 3d4a4197  bl #0x3180a18
0x0612E128: 60ad0090  adrp x0, #0x76da000
0x0612E12C: 007843f9  ldr x0, [x0, #0x6f0]
0x0612E130: 3a4a4197  bl #0x3180a18
0x0612E134: 60ad0090  adrp x0, #0x76da000
0x0612E138: 007c43f9  ldr x0, [x0, #0x6f8]
0x0612E13C: 374a4197  bl #0x3180a18
0x0612E140: 60ad0090  adrp x0, #0x76da000
0x0612E144: 008043f9  ldr x0, [x0, #0x700]
0x0612E148: 344a4197  bl #0x3180a18
0x0612E14C: 60ad0090  adrp x0, #0x76da000
0x0612E150: 006c43f9  ldr x0, [x0, #0x6d8]
0x0612E154: 314a4197  bl #0x3180a18
0x0612E158: 28008052  movz w8, #0x1
0x0612E15C: c8ee1339  strb w8, [x22, #0x4fb]
0x0612E160: a00240f9  ldr x0, [x21]
0x0612E164: ff0700f9  str xzr, [sp, #8]
0x0612E168: ce4a4197  bl #0x3180ca0
0x0612E16C: e1031faa  mov x1, xzr
0x0612E170: f50300aa  mov x21, x0
0x0612E174: 22b1d697  bl #0x56da5fc
0x0612E178: 761a40f9  ldr x22, [x19, #0x30]
0x0612E17C: d61500b4  cbz x22, #0x612e434
0x0612E180: 78aa0090  adrp x24, #0x767a000
0x0612E184: c80240f9  ldr x8, [x22]
0x0612E188: 184f42f9  ldr x24, [x24, #0x498]
0x0612E18C: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E190: 010340f9  ldr x1, [x24]
0x0612E194: 290100b4  cbz x9, #0x612e1b8
0x0612E198: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E19C: 4a210091  add x10, x10, #8
0x0612E1A0: 4b815ff8  ldur x11, [x10, #-8]
0x0612E1A4: 7f0101eb  cmp x11, x1
0x0612E1A8: 00010054  b.eq #0x612e1c8
0x0612E1AC: 290500f1  subs x9, x9, #1
0x0612E1B0: 4a410091  add x10, x10, #0x10
0x0612E1B4: 61ffff54  b.ne #0x612e1a0
0x0612E1B8: 82008052  movz w2, #0x4
0x0612E1BC: e00316aa  mov x0, x22
0x0612E1C0: 54a24097  bl #0x3156b10
0x0612E1C4: 05000014  b #0x612e1d8
0x0612E1C8: 490140b9  ldr w9, [x10]
0x0612E1CC: 29110011  add w9, w9, #4
0x0612E1D0: 08d1298b  add x8, x8, w9, sxtw #4
0x0612E1D4: 00e10491  add x0, x8, #0x138
0x0612E1D8: 080840a9  ldp x8, x2, [x0]
0x0612E1DC: e00316aa  mov x0, x22
0x0612E1E0: e10314aa  mov x1, x20
0x0612E1E4: 00013fd6  blr x8
0x0612E1E8: a01000b4  cbz x0, #0x612e3fc
0x0612E1EC: 4aaa00f0  adrp x10, #0x7679000
0x0612E1F0: 080040f9  ldr x8, [x0]
0x0612E1F4: 4a1144f9  ldr x10, [x10, #0x820]
0x0612E1F8: 761e40f9  ldr x22, [x19, #0x38]
0x0612E1FC: f70300aa  mov x23, x0
0x0612E200: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E204: 410140f9  ldr x1, [x10]
0x0612E208: 290100b4  cbz x9, #0x612e22c
0x0612E20C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E210: 4a210091  add x10, x10, #8
0x0612E214: 4b815ff8  ldur x11, [x10, #-8]
0x0612E218: 7f0101eb  cmp x11, x1
0x0612E21C: 00010054  b.eq #0x612e23c
0x0612E220: 290500f1  subs x9, x9, #1
0x0612E224: 4a410091  add x10, x10, #0x10
0x0612E228: 61ffff54  b.ne #0x612e214
0x0612E22C: e00317aa  mov x0, x23
0x0612E230: e2031f2a  mov w2, wzr
0x0612E234: 37a24097  bl #0x3156b10
0x0612E238: 04000014  b #0x612e248
0x0612E23C: 490180b9  ldrsw x9, [x10]
0x0612E240: 0811098b  add x8, x8, x9, lsl #4
0x0612E244: 00e10491  add x0, x8, #0x138
0x0612E248: 080440a9  ldp x8, x1, [x0]
0x0612E24C: e00317aa  mov x0, x23
0x0612E250: 00013fd6  blr x8
0x0612E254: 160f00b4  cbz x22, #0x612e434
0x0612E258: 68ad0090  adrp x8, #0x76da000
0x0612E25C: 083943f9  ldr x8, [x8, #0x670]
0x0612E260: e10300aa  mov x1, x0
0x0612E264: e2230091  add x2, sp, #8
0x0612E268: e00316aa  mov x0, x22
0x0612E26C: 030140f9  ldr x3, [x8]
0x0612E270: 90d9b697  bl #0x4ee48b0
0x0612E274: 400c0036  tbz w0, #0, #0x612e3fc
0x0612E278: 761a40f9  ldr x22, [x19, #0x30]
0x0612E27C: d60d00b4  cbz x22, #0x612e434
0x0612E280: c80240f9  ldr x8, [x22]
0x0612E284: 010340f9  ldr x1, [x24]
0x0612E288: 095d4279  ldrh w9, [x8, #0x12e]
0x0612E28C: 290100b4  cbz x9, #0x612e2b0
0x0612E290: 0a5940f9  ldr x10, [x8, #0xb0]
0x0612E294: 4a210091  add x10, x10, #8
0x0612E298: 4b815ff8  ldur x11, [x10, #-8]
0x0612E29C: 7f0101eb  cmp x11, x1
0x0612E2A0: 00010054  b.eq #0x612e2c0
0x0612E2A4: 290500f1  subs x9, x9, #1
0x0612E2A8: 4a410091  add x10, x10, #0x10
0x0612E2AC: 61ffff54  b.ne #0x612e298
0x0612E2B0: 22038052  movz w2, #0x19
0x0612E2B4: e00316aa  mov x0, x22
0x0612E2B8: 16a24097  bl #0x3156b10
0x0612E2BC: 05000014  b #0x612e2d0
0x0612E2C0: 490140b9  ldr w9, [x10]
0x0612E2C4: 29650011  add w9, w9, #0x19
0x0612E2C8: 08d1298b  add x8, x8, w9, sxtw #4
0x0612E2CC: 00e10491  add x0, x8, #0x138
0x0612E2D0: 080840a9  ldp x8, x2, [x0]
0x0612E2D4: e00316aa  mov x0, x22
0x0612E2D8: e10314aa  mov x1, x20
0x0612E2DC: 00013fd6  blr x8
0x0612E2E0: b50a00b4  cbz x21, #0x612e434
0x0612E2E4: a01200b9  str w0, [x21, #0x10]
0x0612E2E8: 68ad0090  adrp x8, #0x76da000
0x0612E2EC: 087543f9  ldr x8, [x8, #0x6e8]
0x0612E2F0: f40740f9  ldr x20, [sp, #8]
0x0612E2F4: 000140f9  ldr x0, [x8]
0x0612E2F8: 6a4a4197  bl #0x3180ca0
0x0612E2FC: 68ad0090  adrp x8, #0x76da000
0x0612E300: 088143f9  ldr x8, [x8, #0x700]
0x0612E304: e10315aa  mov x1, x21
0x0612E308: e3031faa  mov x3, xzr
0x0612E30C: f60300aa  mov x22, x0
0x0612E310: 020140f9  ldr x2, [x8]
0x0612E314: 2a9fc497  bl #0x5255fbc
0x0612E318: 68ad0090  adrp x8, #0x76da000
0x0612E31C: 087143f9  ldr x8, [x8, #0x6e0]
0x0612E320: e00314aa  mov x0, x20
0x0612E324: e10316aa  mov x1, x22
0x0612E328: 020140f9  ldr x2, [x8]
0x0612E32C: 815b6c97  bl #0x3c45130
0x0612E330: 600600b4  cbz x0, #0x612e3fc
0x0612E334: 68ad0090  adrp x8, #0x76da000
0x0612E338: 087d43f9  ldr x8, [x8, #0x6f8]
0x0612E33C: f50300aa  mov x21, x0
0x0612E340: 000140f9  ldr x0, [x8]
0x0612E344: 574a4197  bl #0x3180ca0
0x0612E348: e1031faa  mov x1, xzr
0x0612E34C: f40300aa  mov x20, x0
0x0612E350: ef0a2094  bl #0x6930f0c
0x0612E354: 140700b4  cbz x20, #0x612e434
0x0612E358: a10e40f9  ldr x1, [x21, #0x18]
0x0612E35C: e00314aa  mov x0, x20
0x0612E360: 010c01f8  str x1, [x0, #0x10]!
0x0612E364: 98494197  bl #0x31809c4
0x0612E368: a11640f9  ldr x1, [x21, #0x28]
0x0612E36C: e00314aa  mov x0, x20
0x0612E370: 010c02f8  str x1, [x0, #0x20]!
0x0612E374: 94494197  bl #0x31809c4
0x0612E378: a10a40f9  ldr x1, [x21, #0x10]
0x0612E37C: e00314aa  mov x0, x20
0x0612E380: 018c02f8  str x1, [x0, #0x28]!
0x0612E384: 90494197  bl #0x31809c4
0x0612E388: e00740f9  ldr x0, [sp, #8]
0x0612E38C: 400500b4  cbz x0, #0x612e434
0x0612E390: 68ad0090  adrp x8, #0x76da000
0x0612E394: 087943f9  ldr x8, [x8, #0x6f0]
0x0612E398: e10315aa  mov x1, x21
0x0612E39C: 020140f9  ldr x2, [x8]
0x0612E3A0: d65d7c97  bl #0x4045af8
0x0612E3A4: 602240f9  ldr x0, [x19, #0x40]
0x0612E3A8: 600400b4  cbz x0, #0x612e434
0x0612E3AC: 09a90090  adrp x9, #0x764e000
0x0612E3B0: a10a40f9  ldr x1, [x21, #0x10]
0x0612E3B4: 296546f9  ldr x9, [x9, #0xcc8]
0x0612E3B8: 0a1c40b9  ldr w10, [x0, #0x1c]
0x0612E3BC: 080840f9  ldr x8, [x0, #0x10]
0x0612E3C0: 290140f9  ldr x9, [x9]
0x0612E3C4: 4a050011  add w10, w10, #1
0x0612E3C8: 0a1c00b9  str w10, [x0, #0x1c]
0x0612E3CC: 480300b4  cbz x8, #0x612e434
0x0612E3D0: 0a1880b9  ldrsw x10, [x0, #0x18]
0x0612E3D4: 0b1940b9  ldr w11, [x8, #0x18]
0x0612E3D8: 5f010b6b  cmp w10, w11
0x0612E3DC: e2010054  b.hs #0x612e418
0x0612E3E0: 49050011  add w9, w10, #1
0x0612E3E4: 080d0a8b  add x8, x8, x10, lsl #3
0x0612E3E8: 091800b9  str w9, [x0, #0x18]
0x0612E3EC: 010d02f8  str x1, [x8, #0x20]!
0x0612E3F0: e00308aa  mov x0, x8
0x0612E3F4: 74494197  bl #0x31809c4
0x0612E3F8: 0c000014  b #0x612e428
0x0612E3FC: f4031faa  mov x20, xzr
0x0612E400: e00314aa  mov x0, x20
0x0612E404: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0612E408: f65742a9  ldp x22, x21, [sp, #0x20]
0x0612E40C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0612E410: fe0744f8  ldr x30, [sp], #0x40
0x0612E414: c0035fd6  ret
0x0612E418: 281140f9  ldr x8, [x9, #0x20]
0x0612E41C: 086140f9  ldr x8, [x8, #0xc0]
0x0612E420: 023940f9  ldr x2, [x8, #0x70]
0x0612E424: 12587c97  bl #0x404446c
0x0612E428: e00313aa  mov x0, x19
0x0612E42C: d9fcff97  bl #0x612d790
0x0612E430: f4ffff17  b #0x612e400
0x0612E434: 1e4a4197  bl #0x3180cac

; RVA 0x612E96C | public void .ctor() { }
; bytes=220 sha256=2d35743ad6cf4dcf08ed48677b9039b4c50ca2d792578093c1250bf7ccd28391 status=arm64_complete_bound indexed_start=True
0x0612E96C: fe0f1cf8  str x30, [sp, #-0x40]!
0x0612E970: f85f01a9  stp x24, x23, [sp, #0x10]
0x0612E974: f65702a9  stp x22, x21, [sp, #0x20]
0x0612E978: f44f03a9  stp x20, x19, [sp, #0x30]
0x0612E97C: b7df00d0  adrp x23, #0x7d24000
0x0612E980: 78ad0090  adrp x24, #0x76da000
0x0612E984: 74ad0090  adrp x20, #0x76da000
0x0612E988: 16a90090  adrp x22, #0x764e000
0x0612E98C: 15a90090  adrp x21, #0x764e000
0x0612E990: e8f25339  ldrb w8, [x23, #0x4fc]
0x0612E994: 189f43f9  ldr x24, [x24, #0x738]
0x0612E998: 94a243f9  ldr x20, [x20, #0x740]
0x0612E99C: d65e46f9  ldr x22, [x22, #0xcb8]
0x0612E9A0: b56246f9  ldr x21, [x21, #0xcc0]
0x0612E9A4: f30300aa  mov x19, x0
0x0612E9A8: e8010037  tbnz w8, #0, #0x612e9e4
0x0612E9AC: 60ad0090  adrp x0, #0x76da000
0x0612E9B0: 00a043f9  ldr x0, [x0, #0x740]
0x0612E9B4: 19484197  bl #0x3180a18
0x0612E9B8: 60ad0090  adrp x0, #0x76da000
0x0612E9BC: 009c43f9  ldr x0, [x0, #0x738]
0x0612E9C0: 16484197  bl #0x3180a18
0x0612E9C4: 00a90090  adrp x0, #0x764e000
0x0612E9C8: 006046f9  ldr x0, [x0, #0xcc0]
0x0612E9CC: 13484197  bl #0x3180a18
0x0612E9D0: 00a90090  adrp x0, #0x764e000
0x0612E9D4: 005c46f9  ldr x0, [x0, #0xcb8]
0x0612E9D8: 10484197  bl #0x3180a18
0x0612E9DC: 28008052  movz w8, #0x1
0x0612E9E0: e8f21339  strb w8, [x23, #0x4fc]
0x0612E9E4: 000340f9  ldr x0, [x24]
0x0612E9E8: ae484197  bl #0x3180ca0
0x0612E9EC: 810240f9  ldr x1, [x20]
0x0612E9F0: f40300aa  mov x20, x0
0x0612E9F4: 6ccdb697  bl #0x4ee1fa4
0x0612E9F8: e00313aa  mov x0, x19
0x0612E9FC: 148c03f8  str x20, [x0, #0x38]!
0x0612EA00: e10314aa  mov x1, x20
0x0612EA04: f0474197  bl #0x31809c4
0x0612EA08: c00240f9  ldr x0, [x22]
0x0612EA0C: a5484197  bl #0x3180ca0
0x0612EA10: a10240f9  ldr x1, [x21]
0x0612EA14: f40300aa  mov x20, x0
0x0612EA18: 88547c97  bl #0x4043c38
0x0612EA1C: e00313aa  mov x0, x19
0x0612EA20: 140c04f8  str x20, [x0, #0x40]!
0x0612EA24: e10314aa  mov x1, x20
0x0612EA28: e7474197  bl #0x31809c4
0x0612EA2C: e00313aa  mov x0, x19
0x0612EA30: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0612EA34: f65742a9  ldp x22, x21, [sp, #0x20]
0x0612EA38: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0612EA3C: e1031faa  mov x1, xzr
0x0612EA40: fe0744f8  ldr x30, [sp], #0x40
0x0612EA44: 45752014  b #0x694bf58

