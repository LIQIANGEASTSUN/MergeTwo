; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11211 Framework.Core.MVVM.ViewModel.NavigationViewModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x694A7E8 | public void add_StateChanged(Action<string> value) { }
; bytes=172 sha256=cac1672df05bb170ad11beffd9c86e2f09886dcec058d101cef264e265308425 status=arm64_complete_bound indexed_start=True
0x0694A7E8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694A7EC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694A7F0: f59e00f0  adrp x21, #0x7d29000
0x0694A7F4: a8ee7039  ldrb w8, [x21, #0xc3b]
0x0694A7F8: f30301aa  mov x19, x1
0x0694A7FC: f40300aa  mov x20, x0
0x0694A800: c8000037  tbnz w8, #0, #0x694a818
0x0694A804: 206900b0  adrp x0, #0x766f000
0x0694A808: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694A80C: 83d82097  bl #0x3180a18
0x0694A810: 28008052  movz w8, #0x1
0x0694A814: a8ee3039  strb w8, [x21, #0xc3b]
0x0694A818: 941e40f9  ldr x20, [x20, #0x38]
0x0694A81C: b40300b4  cbz x20, #0x694a890
0x0694A820: 2a6900b0  adrp x10, #0x766f000
0x0694A824: 880240f9  ldr x8, [x20]
0x0694A828: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694A82C: 095d4279  ldrh w9, [x8, #0x12e]
0x0694A830: 410140f9  ldr x1, [x10]
0x0694A834: 290100b4  cbz x9, #0x694a858
0x0694A838: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694A83C: 4a210091  add x10, x10, #8
0x0694A840: 4b815ff8  ldur x11, [x10, #-8]
0x0694A844: 7f0101eb  cmp x11, x1
0x0694A848: 00010054  b.eq #0x694a868
0x0694A84C: 290500f1  subs x9, x9, #1
0x0694A850: 4a410091  add x10, x10, #0x10
0x0694A854: 61ffff54  b.ne #0x694a840
0x0694A858: a2018052  movz w2, #0xd
0x0694A85C: e00314aa  mov x0, x20
0x0694A860: ac302097  bl #0x3156b10
0x0694A864: 05000014  b #0x694a878
0x0694A868: 490140b9  ldr w9, [x10]
0x0694A86C: 29350011  add w9, w9, #0xd
0x0694A870: 08d1298b  add x8, x8, w9, sxtw #4
0x0694A874: 00e10491  add x0, x8, #0x138
0x0694A878: 030840a9  ldp x3, x2, [x0]
0x0694A87C: e00314aa  mov x0, x20
0x0694A880: e10313aa  mov x1, x19
0x0694A884: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694A888: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694A88C: 60001fd6  br x3
0x0694A890: 07d92097  bl #0x3180cac

; RVA 0x694A894 | public void remove_StateChanged(Action<string> value) { }
; bytes=172 sha256=ec96b6705491e94da97bd8454a185f06d09153604249bd95daa6ba4a7b957304 status=arm64_complete_bound indexed_start=True
0x0694A894: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694A898: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694A89C: f59e00f0  adrp x21, #0x7d29000
0x0694A8A0: a8f27039  ldrb w8, [x21, #0xc3c]
0x0694A8A4: f30301aa  mov x19, x1
0x0694A8A8: f40300aa  mov x20, x0
0x0694A8AC: c8000037  tbnz w8, #0, #0x694a8c4
0x0694A8B0: 206900b0  adrp x0, #0x766f000
0x0694A8B4: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694A8B8: 58d82097  bl #0x3180a18
0x0694A8BC: 28008052  movz w8, #0x1
0x0694A8C0: a8f23039  strb w8, [x21, #0xc3c]
0x0694A8C4: 941e40f9  ldr x20, [x20, #0x38]
0x0694A8C8: b40300b4  cbz x20, #0x694a93c
0x0694A8CC: 2a6900b0  adrp x10, #0x766f000
0x0694A8D0: 880240f9  ldr x8, [x20]
0x0694A8D4: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694A8D8: 095d4279  ldrh w9, [x8, #0x12e]
0x0694A8DC: 410140f9  ldr x1, [x10]
0x0694A8E0: 290100b4  cbz x9, #0x694a904
0x0694A8E4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694A8E8: 4a210091  add x10, x10, #8
0x0694A8EC: 4b815ff8  ldur x11, [x10, #-8]
0x0694A8F0: 7f0101eb  cmp x11, x1
0x0694A8F4: 00010054  b.eq #0x694a914
0x0694A8F8: 290500f1  subs x9, x9, #1
0x0694A8FC: 4a410091  add x10, x10, #0x10
0x0694A900: 61ffff54  b.ne #0x694a8ec
0x0694A904: c2018052  movz w2, #0xe
0x0694A908: e00314aa  mov x0, x20
0x0694A90C: 81302097  bl #0x3156b10
0x0694A910: 05000014  b #0x694a924
0x0694A914: 490140b9  ldr w9, [x10]
0x0694A918: 29390011  add w9, w9, #0xe
0x0694A91C: 08d1298b  add x8, x8, w9, sxtw #4
0x0694A920: 00e10491  add x0, x8, #0x138
0x0694A924: 030840a9  ldp x3, x2, [x0]
0x0694A928: e00314aa  mov x0, x20
0x0694A92C: e10313aa  mov x1, x19
0x0694A930: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694A934: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694A938: 60001fd6  br x3
0x0694A93C: dcd82097  bl #0x3180cac

; RVA 0x694A940 | public string get_CurrentStateName() { }
; bytes=164 sha256=007ac6a5332a5b13390835d6cd4c7d1f5ed6478fa27ab0a23fde473cd398d695 status=arm64_complete_bound indexed_start=True
0x0694A940: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694A944: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694A948: f49e00f0  adrp x20, #0x7d29000
0x0694A94C: 88f67039  ldrb w8, [x20, #0xc3d]
0x0694A950: f30300aa  mov x19, x0
0x0694A954: c8000037  tbnz w8, #0, #0x694a96c
0x0694A958: 206900b0  adrp x0, #0x766f000
0x0694A95C: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694A960: 2ed82097  bl #0x3180a18
0x0694A964: 28008052  movz w8, #0x1
0x0694A968: 88f63039  strb w8, [x20, #0xc3d]
0x0694A96C: 731e40f9  ldr x19, [x19, #0x38]
0x0694A970: 930300b4  cbz x19, #0x694a9e0
0x0694A974: 2a6900b0  adrp x10, #0x766f000
0x0694A978: 680240f9  ldr x8, [x19]
0x0694A97C: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694A980: 095d4279  ldrh w9, [x8, #0x12e]
0x0694A984: 410140f9  ldr x1, [x10]
0x0694A988: 290100b4  cbz x9, #0x694a9ac
0x0694A98C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694A990: 4a210091  add x10, x10, #8
0x0694A994: 4b815ff8  ldur x11, [x10, #-8]
0x0694A998: 7f0101eb  cmp x11, x1
0x0694A99C: 00010054  b.eq #0x694a9bc
0x0694A9A0: 290500f1  subs x9, x9, #1
0x0694A9A4: 4a410091  add x10, x10, #0x10
0x0694A9A8: 61ffff54  b.ne #0x694a994
0x0694A9AC: c2008052  movz w2, #0x6
0x0694A9B0: e00313aa  mov x0, x19
0x0694A9B4: 57302097  bl #0x3156b10
0x0694A9B8: 05000014  b #0x694a9cc
0x0694A9BC: 490140b9  ldr w9, [x10]
0x0694A9C0: 29190011  add w9, w9, #6
0x0694A9C4: 08d1298b  add x8, x8, w9, sxtw #4
0x0694A9C8: 00e10491  add x0, x8, #0x138
0x0694A9CC: 020440a9  ldp x2, x1, [x0]
0x0694A9D0: e00313aa  mov x0, x19
0x0694A9D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694A9D8: fe0742f8  ldr x30, [sp], #0x20
0x0694A9DC: 40001fd6  br x2
0x0694A9E0: b3d82097  bl #0x3180cac

; RVA 0x694A9E4 | public string get_PreviousStateName() { }
; bytes=164 sha256=81b7364779e794301fe83872ddcfc113984b1274b7cbd5984bad1bf12d24ff8c status=arm64_complete_bound indexed_start=True
0x0694A9E4: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694A9E8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694A9EC: f49e00f0  adrp x20, #0x7d29000
0x0694A9F0: 88fa7039  ldrb w8, [x20, #0xc3e]
0x0694A9F4: f30300aa  mov x19, x0
0x0694A9F8: c8000037  tbnz w8, #0, #0x694aa10
0x0694A9FC: 206900b0  adrp x0, #0x766f000
0x0694AA00: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694AA04: 05d82097  bl #0x3180a18
0x0694AA08: 28008052  movz w8, #0x1
0x0694AA0C: 88fa3039  strb w8, [x20, #0xc3e]
0x0694AA10: 731e40f9  ldr x19, [x19, #0x38]
0x0694AA14: 930300b4  cbz x19, #0x694aa84
0x0694AA18: 2a6900b0  adrp x10, #0x766f000
0x0694AA1C: 680240f9  ldr x8, [x19]
0x0694AA20: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694AA24: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AA28: 410140f9  ldr x1, [x10]
0x0694AA2C: 290100b4  cbz x9, #0x694aa50
0x0694AA30: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AA34: 4a210091  add x10, x10, #8
0x0694AA38: 4b815ff8  ldur x11, [x10, #-8]
0x0694AA3C: 7f0101eb  cmp x11, x1
0x0694AA40: 00010054  b.eq #0x694aa60
0x0694AA44: 290500f1  subs x9, x9, #1
0x0694AA48: 4a410091  add x10, x10, #0x10
0x0694AA4C: 61ffff54  b.ne #0x694aa38
0x0694AA50: e2008052  movz w2, #0x7
0x0694AA54: e00313aa  mov x0, x19
0x0694AA58: 2e302097  bl #0x3156b10
0x0694AA5C: 05000014  b #0x694aa70
0x0694AA60: 490140b9  ldr w9, [x10]
0x0694AA64: 291d0011  add w9, w9, #7
0x0694AA68: 08d1298b  add x8, x8, w9, sxtw #4
0x0694AA6C: 00e10491  add x0, x8, #0x138
0x0694AA70: 020440a9  ldp x2, x1, [x0]
0x0694AA74: e00313aa  mov x0, x19
0x0694AA78: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AA7C: fe0742f8  ldr x30, [sp], #0x20
0x0694AA80: 40001fd6  br x2
0x0694AA84: 8ad82097  bl #0x3180cac

; RVA 0x694AA88 | public AnalitycsState get_CurrentAnalyticsState() { }
; bytes=164 sha256=2518984529b9d01f5d7dd5ae891931374fc91692811e485f47219286eb8b5aab status=arm64_complete_bound indexed_start=True
0x0694AA88: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694AA8C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694AA90: f49e00f0  adrp x20, #0x7d29000
0x0694AA94: 88fe7039  ldrb w8, [x20, #0xc3f]
0x0694AA98: f30300aa  mov x19, x0
0x0694AA9C: c8000037  tbnz w8, #0, #0x694aab4
0x0694AAA0: 206900b0  adrp x0, #0x766f000
0x0694AAA4: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694AAA8: dcd72097  bl #0x3180a18
0x0694AAAC: 28008052  movz w8, #0x1
0x0694AAB0: 88fe3039  strb w8, [x20, #0xc3f]
0x0694AAB4: 731e40f9  ldr x19, [x19, #0x38]
0x0694AAB8: 930300b4  cbz x19, #0x694ab28
0x0694AABC: 2a6900b0  adrp x10, #0x766f000
0x0694AAC0: 680240f9  ldr x8, [x19]
0x0694AAC4: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694AAC8: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AACC: 410140f9  ldr x1, [x10]
0x0694AAD0: 290100b4  cbz x9, #0x694aaf4
0x0694AAD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AAD8: 4a210091  add x10, x10, #8
0x0694AADC: 4b815ff8  ldur x11, [x10, #-8]
0x0694AAE0: 7f0101eb  cmp x11, x1
0x0694AAE4: 00010054  b.eq #0x694ab04
0x0694AAE8: 290500f1  subs x9, x9, #1
0x0694AAEC: 4a410091  add x10, x10, #0x10
0x0694AAF0: 61ffff54  b.ne #0x694aadc
0x0694AAF4: a2008052  movz w2, #0x5
0x0694AAF8: e00313aa  mov x0, x19
0x0694AAFC: 05302097  bl #0x3156b10
0x0694AB00: 05000014  b #0x694ab14
0x0694AB04: 490140b9  ldr w9, [x10]
0x0694AB08: 29150011  add w9, w9, #5
0x0694AB0C: 08d1298b  add x8, x8, w9, sxtw #4
0x0694AB10: 00e10491  add x0, x8, #0x138
0x0694AB14: 020440a9  ldp x2, x1, [x0]
0x0694AB18: e00313aa  mov x0, x19
0x0694AB1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AB20: fe0742f8  ldr x30, [sp], #0x20
0x0694AB24: 40001fd6  br x2
0x0694AB28: 61d82097  bl #0x3180cac

; RVA 0x694AB2C | public BindableProperty<bool> get_UiEnabled() { }
; bytes=160 sha256=41ec3c062c01cb9af7a70b576fd7c695b0d2b2e132936d77e74c3f2ebcd7247b status=arm64_complete_bound indexed_start=True
0x0694AB2C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694AB30: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694AB34: f49e00f0  adrp x20, #0x7d29000
0x0694AB38: 88027139  ldrb w8, [x20, #0xc40]
0x0694AB3C: f30300aa  mov x19, x0
0x0694AB40: c8000037  tbnz w8, #0, #0x694ab58
0x0694AB44: 406900d0  adrp x0, #0x7674000
0x0694AB48: 007442f9  ldr x0, [x0, #0x4e8]
0x0694AB4C: b3d72097  bl #0x3180a18
0x0694AB50: 28008052  movz w8, #0x1
0x0694AB54: 88023139  strb w8, [x20, #0xc40]
0x0694AB58: 731640f9  ldr x19, [x19, #0x28]
0x0694AB5C: 730300b4  cbz x19, #0x694abc8
0x0694AB60: 4a6900d0  adrp x10, #0x7674000
0x0694AB64: 680240f9  ldr x8, [x19]
0x0694AB68: 4a7542f9  ldr x10, [x10, #0x4e8]
0x0694AB6C: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AB70: 410140f9  ldr x1, [x10]
0x0694AB74: 290100b4  cbz x9, #0x694ab98
0x0694AB78: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AB7C: 4a210091  add x10, x10, #8
0x0694AB80: 4b815ff8  ldur x11, [x10, #-8]
0x0694AB84: 7f0101eb  cmp x11, x1
0x0694AB88: 00010054  b.eq #0x694aba8
0x0694AB8C: 290500f1  subs x9, x9, #1
0x0694AB90: 4a410091  add x10, x10, #0x10
0x0694AB94: 61ffff54  b.ne #0x694ab80
0x0694AB98: e00313aa  mov x0, x19
0x0694AB9C: e2031f2a  mov w2, wzr
0x0694ABA0: dc2f2097  bl #0x3156b10
0x0694ABA4: 04000014  b #0x694abb4
0x0694ABA8: 490180b9  ldrsw x9, [x10]
0x0694ABAC: 0811098b  add x8, x8, x9, lsl #4
0x0694ABB0: 00e10491  add x0, x8, #0x138
0x0694ABB4: 020440a9  ldp x2, x1, [x0]
0x0694ABB8: e00313aa  mov x0, x19
0x0694ABBC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694ABC0: fe0742f8  ldr x30, [sp], #0x20
0x0694ABC4: 40001fd6  br x2
0x0694ABC8: 39d82097  bl #0x3180cac

; RVA 0x694ABCC | public bool get_BackButtonHasBlockingFlags() { }
; bytes=200 sha256=29ec1da9be4df5d49d8fba74c6be3b5eee33ece304fec949bc73fe2c986028b5 status=arm64_complete_bound indexed_start=True
0x0694ABCC: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694ABD0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694ABD4: f49e00f0  adrp x20, #0x7d29000
0x0694ABD8: 88067139  ldrb w8, [x20, #0xc41]
0x0694ABDC: f30300aa  mov x19, x0
0x0694ABE0: 28010037  tbnz w8, #0, #0x694ac04
0x0694ABE4: 206900b0  adrp x0, #0x766f000
0x0694ABE8: 001842f9  ldr x0, [x0, #0x430]
0x0694ABEC: 8bd72097  bl #0x3180a18
0x0694ABF0: 806900d0  adrp x0, #0x767c000
0x0694ABF4: 005847f9  ldr x0, [x0, #0xeb0]
0x0694ABF8: 88d72097  bl #0x3180a18
0x0694ABFC: 28008052  movz w8, #0x1
0x0694AC00: 88063139  strb w8, [x20, #0xc41]
0x0694AC04: 731a40f9  ldr x19, [x19, #0x30]
0x0694AC08: 530400b4  cbz x19, #0x694ac90
0x0694AC0C: 8a6900d0  adrp x10, #0x767c000
0x0694AC10: 680240f9  ldr x8, [x19]
0x0694AC14: 4a5947f9  ldr x10, [x10, #0xeb0]
0x0694AC18: 346900b0  adrp x20, #0x766f000
0x0694AC1C: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AC20: 410140f9  ldr x1, [x10]
0x0694AC24: 941a42f9  ldr x20, [x20, #0x430]
0x0694AC28: 290100b4  cbz x9, #0x694ac4c
0x0694AC2C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AC30: 4a210091  add x10, x10, #8
0x0694AC34: 4b815ff8  ldur x11, [x10, #-8]
0x0694AC38: 7f0101eb  cmp x11, x1
0x0694AC3C: 00010054  b.eq #0x694ac5c
0x0694AC40: 290500f1  subs x9, x9, #1
0x0694AC44: 4a410091  add x10, x10, #0x10
0x0694AC48: 61ffff54  b.ne #0x694ac34
0x0694AC4C: e00313aa  mov x0, x19
0x0694AC50: e2031f2a  mov w2, wzr
0x0694AC54: af2f2097  bl #0x3156b10
0x0694AC58: 04000014  b #0x694ac68
0x0694AC5C: 490180b9  ldrsw x9, [x10]
0x0694AC60: 0811098b  add x8, x8, x9, lsl #4
0x0694AC64: 00e10491  add x0, x8, #0x138
0x0694AC68: 080440a9  ldp x8, x1, [x0]
0x0694AC6C: e00313aa  mov x0, x19
0x0694AC70: 00013fd6  blr x8
0x0694AC74: 810240f9  ldr x1, [x20]
0x0694AC78: 190d8b97  bl #0x4c0e0dc
0x0694AC7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AC80: e803202a  mvn w8, w0
0x0694AC84: 00010012  and w0, w8, #1
0x0694AC88: fe0742f8  ldr x30, [sp], #0x20
0x0694AC8C: c0035fd6  ret
0x0694AC90: 07d82097  bl #0x3180cac

; RVA 0x694AC94 | protected INavigationModel get_NavigationModel() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x0694AC94: 001c40f9  ldr x0, [x0, #0x38]
0x0694AC98: c0035fd6  ret

; RVA 0x694AC9C | private void set_NavigationModel(INavigationModel value) { }
; bytes=40 sha256=4d263f70f014070efcacfef8072886b14112e311e5055a8ce16c2c8c73999a97 status=arm64_complete_bound indexed_start=True
0x0694AC9C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0694ACA0: f30300aa  mov x19, x0
0x0694ACA4: 018c03f8  str x1, [x0, #0x38]!
0x0694ACA8: 47d72097  bl #0x31809c4
0x0694ACAC: 680240f9  ldr x8, [x19]
0x0694ACB0: e00313aa  mov x0, x19
0x0694ACB4: 024d41f9  ldr x2, [x8, #0x298]
0x0694ACB8: 015141f9  ldr x1, [x8, #0x2a0]
0x0694ACBC: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0694ACC0: 40001fd6  br x2

; RVA 0x694ACC4 | protected virtual void NavigationModelSet() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0694ACC4: c0035fd6  ret

; RVA 0x694ACC8 | public bool CanGoBack() { }
; bytes=164 sha256=2133a0e3228ff0b6ca7dc4af3ac3667e9989dfdcebef9222d0f628308dd9af56 status=arm64_complete_bound indexed_start=True
0x0694ACC8: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694ACCC: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694ACD0: f49e00f0  adrp x20, #0x7d29000
0x0694ACD4: 880a7139  ldrb w8, [x20, #0xc42]
0x0694ACD8: f30300aa  mov x19, x0
0x0694ACDC: c8000037  tbnz w8, #0, #0x694acf4
0x0694ACE0: 206900b0  adrp x0, #0x766f000
0x0694ACE4: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694ACE8: 4cd72097  bl #0x3180a18
0x0694ACEC: 28008052  movz w8, #0x1
0x0694ACF0: 880a3139  strb w8, [x20, #0xc42]
0x0694ACF4: 731e40f9  ldr x19, [x19, #0x38]
0x0694ACF8: 930300b4  cbz x19, #0x694ad68
0x0694ACFC: 2a6900b0  adrp x10, #0x766f000
0x0694AD00: 680240f9  ldr x8, [x19]
0x0694AD04: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694AD08: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AD0C: 410140f9  ldr x1, [x10]
0x0694AD10: 290100b4  cbz x9, #0x694ad34
0x0694AD14: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AD18: 4a210091  add x10, x10, #8
0x0694AD1C: 4b815ff8  ldur x11, [x10, #-8]
0x0694AD20: 7f0101eb  cmp x11, x1
0x0694AD24: 00010054  b.eq #0x694ad44
0x0694AD28: 290500f1  subs x9, x9, #1
0x0694AD2C: 4a410091  add x10, x10, #0x10
0x0694AD30: 61ffff54  b.ne #0x694ad1c
0x0694AD34: 82018052  movz w2, #0xc
0x0694AD38: e00313aa  mov x0, x19
0x0694AD3C: 752f2097  bl #0x3156b10
0x0694AD40: 05000014  b #0x694ad54
0x0694AD44: 490140b9  ldr w9, [x10]
0x0694AD48: 29310011  add w9, w9, #0xc
0x0694AD4C: 08d1298b  add x8, x8, w9, sxtw #4
0x0694AD50: 00e10491  add x0, x8, #0x138
0x0694AD54: 020440a9  ldp x2, x1, [x0]
0x0694AD58: e00313aa  mov x0, x19
0x0694AD5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AD60: fe0742f8  ldr x30, [sp], #0x20
0x0694AD64: 40001fd6  br x2
0x0694AD68: d1d72097  bl #0x3180cac

; RVA 0x694AD6C | public bool CanTransitionTo(string transition) { }
; bytes=172 sha256=97590f81454ad372f2cfeb0d37863bf6cd8699579dc13ae8a23d3814ba33360e status=arm64_complete_bound indexed_start=True
0x0694AD6C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694AD70: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694AD74: f59e00f0  adrp x21, #0x7d29000
0x0694AD78: a80e7139  ldrb w8, [x21, #0xc43]
0x0694AD7C: f30301aa  mov x19, x1
0x0694AD80: f40300aa  mov x20, x0
0x0694AD84: c8000037  tbnz w8, #0, #0x694ad9c
0x0694AD88: 206900b0  adrp x0, #0x766f000
0x0694AD8C: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694AD90: 22d72097  bl #0x3180a18
0x0694AD94: 28008052  movz w8, #0x1
0x0694AD98: a80e3139  strb w8, [x21, #0xc43]
0x0694AD9C: 941e40f9  ldr x20, [x20, #0x38]
0x0694ADA0: b40300b4  cbz x20, #0x694ae14
0x0694ADA4: 2a6900b0  adrp x10, #0x766f000
0x0694ADA8: 880240f9  ldr x8, [x20]
0x0694ADAC: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694ADB0: 095d4279  ldrh w9, [x8, #0x12e]
0x0694ADB4: 410140f9  ldr x1, [x10]
0x0694ADB8: 290100b4  cbz x9, #0x694addc
0x0694ADBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694ADC0: 4a210091  add x10, x10, #8
0x0694ADC4: 4b815ff8  ldur x11, [x10, #-8]
0x0694ADC8: 7f0101eb  cmp x11, x1
0x0694ADCC: 00010054  b.eq #0x694adec
0x0694ADD0: 290500f1  subs x9, x9, #1
0x0694ADD4: 4a410091  add x10, x10, #0x10
0x0694ADD8: 61ffff54  b.ne #0x694adc4
0x0694ADDC: 62018052  movz w2, #0xb
0x0694ADE0: e00314aa  mov x0, x20
0x0694ADE4: 4b2f2097  bl #0x3156b10
0x0694ADE8: 05000014  b #0x694adfc
0x0694ADEC: 490140b9  ldr w9, [x10]
0x0694ADF0: 292d0011  add w9, w9, #0xb
0x0694ADF4: 08d1298b  add x8, x8, w9, sxtw #4
0x0694ADF8: 00e10491  add x0, x8, #0x138
0x0694ADFC: 030840a9  ldp x3, x2, [x0]
0x0694AE00: e00314aa  mov x0, x20
0x0694AE04: e10313aa  mov x1, x19
0x0694AE08: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AE0C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694AE10: 60001fd6  br x3
0x0694AE14: a6d72097  bl #0x3180cac

; RVA 0x694AE18 | public void EnableUI(BlockUIFlag flagToClear) { }
; bytes=172 sha256=b352deb4d3b32673f6195c8b20f60209e82a301d6769c7f78834484777f049e9 status=arm64_complete_bound indexed_start=True
0x0694AE18: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694AE1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694AE20: f59e00f0  adrp x21, #0x7d29000
0x0694AE24: a8127139  ldrb w8, [x21, #0xc44]
0x0694AE28: f303012a  mov w19, w1
0x0694AE2C: f40300aa  mov x20, x0
0x0694AE30: c8000037  tbnz w8, #0, #0x694ae48
0x0694AE34: 406900d0  adrp x0, #0x7674000
0x0694AE38: 007442f9  ldr x0, [x0, #0x4e8]
0x0694AE3C: f7d62097  bl #0x3180a18
0x0694AE40: 28008052  movz w8, #0x1
0x0694AE44: a8123139  strb w8, [x21, #0xc44]
0x0694AE48: 941640f9  ldr x20, [x20, #0x28]
0x0694AE4C: b40300b4  cbz x20, #0x694aec0
0x0694AE50: 4a6900d0  adrp x10, #0x7674000
0x0694AE54: 880240f9  ldr x8, [x20]
0x0694AE58: 4a7542f9  ldr x10, [x10, #0x4e8]
0x0694AE5C: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AE60: 410140f9  ldr x1, [x10]
0x0694AE64: 290100b4  cbz x9, #0x694ae88
0x0694AE68: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AE6C: 4a210091  add x10, x10, #8
0x0694AE70: 4b815ff8  ldur x11, [x10, #-8]
0x0694AE74: 7f0101eb  cmp x11, x1
0x0694AE78: 00010054  b.eq #0x694ae98
0x0694AE7C: 290500f1  subs x9, x9, #1
0x0694AE80: 4a410091  add x10, x10, #0x10
0x0694AE84: 61ffff54  b.ne #0x694ae70
0x0694AE88: 22008052  movz w2, #0x1
0x0694AE8C: e00314aa  mov x0, x20
0x0694AE90: 202f2097  bl #0x3156b10
0x0694AE94: 05000014  b #0x694aea8
0x0694AE98: 490140b9  ldr w9, [x10]
0x0694AE9C: 29050011  add w9, w9, #1
0x0694AEA0: 08d1298b  add x8, x8, w9, sxtw #4
0x0694AEA4: 00e10491  add x0, x8, #0x138
0x0694AEA8: 030840a9  ldp x3, x2, [x0]
0x0694AEAC: e00314aa  mov x0, x20
0x0694AEB0: e103132a  mov w1, w19
0x0694AEB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AEB8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694AEBC: 60001fd6  br x3
0x0694AEC0: 7bd72097  bl #0x3180cac

; RVA 0x694AEC4 | public void DisableUI(BlockUIFlag flagToRaise) { }
; bytes=172 sha256=e3c456b23baeb460a1b39dc87394476d636eed03980568eeb38419411230c435 status=arm64_complete_bound indexed_start=True
0x0694AEC4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694AEC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694AECC: f59e00f0  adrp x21, #0x7d29000
0x0694AED0: a8167139  ldrb w8, [x21, #0xc45]
0x0694AED4: f303012a  mov w19, w1
0x0694AED8: f40300aa  mov x20, x0
0x0694AEDC: c8000037  tbnz w8, #0, #0x694aef4
0x0694AEE0: 406900d0  adrp x0, #0x7674000
0x0694AEE4: 007442f9  ldr x0, [x0, #0x4e8]
0x0694AEE8: ccd62097  bl #0x3180a18
0x0694AEEC: 28008052  movz w8, #0x1
0x0694AEF0: a8163139  strb w8, [x21, #0xc45]
0x0694AEF4: 941640f9  ldr x20, [x20, #0x28]
0x0694AEF8: b40300b4  cbz x20, #0x694af6c
0x0694AEFC: 4a6900d0  adrp x10, #0x7674000
0x0694AF00: 880240f9  ldr x8, [x20]
0x0694AF04: 4a7542f9  ldr x10, [x10, #0x4e8]
0x0694AF08: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AF0C: 410140f9  ldr x1, [x10]
0x0694AF10: 290100b4  cbz x9, #0x694af34
0x0694AF14: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AF18: 4a210091  add x10, x10, #8
0x0694AF1C: 4b815ff8  ldur x11, [x10, #-8]
0x0694AF20: 7f0101eb  cmp x11, x1
0x0694AF24: 00010054  b.eq #0x694af44
0x0694AF28: 290500f1  subs x9, x9, #1
0x0694AF2C: 4a410091  add x10, x10, #0x10
0x0694AF30: 61ffff54  b.ne #0x694af1c
0x0694AF34: 42008052  movz w2, #0x2
0x0694AF38: e00314aa  mov x0, x20
0x0694AF3C: f52e2097  bl #0x3156b10
0x0694AF40: 05000014  b #0x694af54
0x0694AF44: 490140b9  ldr w9, [x10]
0x0694AF48: 29090011  add w9, w9, #2
0x0694AF4C: 08d1298b  add x8, x8, w9, sxtw #4
0x0694AF50: 00e10491  add x0, x8, #0x138
0x0694AF54: 030840a9  ldp x3, x2, [x0]
0x0694AF58: e00314aa  mov x0, x20
0x0694AF5C: e103132a  mov w1, w19
0x0694AF60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694AF64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694AF68: 60001fd6  br x3
0x0694AF6C: 50d72097  bl #0x3180cac

; RVA 0x694AF70 | public void RequestTransition(string transition, object payload) { }
; bytes=188 sha256=8f2d94b1810dc60d30df6c8dca79d8bd08b972f269cac296639a21202407ebd4 status=arm64_complete_bound indexed_start=True
0x0694AF70: fe0f1df8  str x30, [sp, #-0x30]!
0x0694AF74: f65701a9  stp x22, x21, [sp, #0x10]
0x0694AF78: f44f02a9  stp x20, x19, [sp, #0x20]
0x0694AF7C: f69e00f0  adrp x22, #0x7d29000
0x0694AF80: c81a7139  ldrb w8, [x22, #0xc46]
0x0694AF84: f30302aa  mov x19, x2
0x0694AF88: f40301aa  mov x20, x1
0x0694AF8C: f50300aa  mov x21, x0
0x0694AF90: c8000037  tbnz w8, #0, #0x694afa8
0x0694AF94: 206900b0  adrp x0, #0x766f000
0x0694AF98: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694AF9C: 9fd62097  bl #0x3180a18
0x0694AFA0: 28008052  movz w8, #0x1
0x0694AFA4: c81a3139  strb w8, [x22, #0xc46]
0x0694AFA8: b51e40f9  ldr x21, [x21, #0x38]
0x0694AFAC: f50300b4  cbz x21, #0x694b028
0x0694AFB0: 2a6900b0  adrp x10, #0x766f000
0x0694AFB4: a80240f9  ldr x8, [x21]
0x0694AFB8: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694AFBC: 095d4279  ldrh w9, [x8, #0x12e]
0x0694AFC0: 410140f9  ldr x1, [x10]
0x0694AFC4: 290100b4  cbz x9, #0x694afe8
0x0694AFC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694AFCC: 4a210091  add x10, x10, #8
0x0694AFD0: 4b815ff8  ldur x11, [x10, #-8]
0x0694AFD4: 7f0101eb  cmp x11, x1
0x0694AFD8: 00010054  b.eq #0x694aff8
0x0694AFDC: 290500f1  subs x9, x9, #1
0x0694AFE0: 4a410091  add x10, x10, #0x10
0x0694AFE4: 61ffff54  b.ne #0x694afd0
0x0694AFE8: 22018052  movz w2, #0x9
0x0694AFEC: e00315aa  mov x0, x21
0x0694AFF0: c82e2097  bl #0x3156b10
0x0694AFF4: 05000014  b #0x694b008
0x0694AFF8: 490140b9  ldr w9, [x10]
0x0694AFFC: 29250011  add w9, w9, #9
0x0694B000: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B004: 00e10491  add x0, x8, #0x138
0x0694B008: 040c40a9  ldp x4, x3, [x0]
0x0694B00C: e00315aa  mov x0, x21
0x0694B010: e10314aa  mov x1, x20
0x0694B014: e20313aa  mov x2, x19
0x0694B018: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0694B01C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0694B020: fe0743f8  ldr x30, [sp], #0x30
0x0694B024: 80001fd6  br x4
0x0694B028: 21d72097  bl #0x3180cac

; RVA 0x694B02C | public void Back() { }
; bytes=164 sha256=ffc0eacca2c6e4d48b3cd4bc5b3c15e380c488cb7fbfa68aa123b0e0da5a418a status=arm64_complete_bound indexed_start=True
0x0694B02C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694B030: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B034: f49e00d0  adrp x20, #0x7d29000
0x0694B038: 881e7139  ldrb w8, [x20, #0xc47]
0x0694B03C: f30300aa  mov x19, x0
0x0694B040: c8000037  tbnz w8, #0, #0x694b058
0x0694B044: 20690090  adrp x0, #0x766f000
0x0694B048: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694B04C: 73d62097  bl #0x3180a18
0x0694B050: 28008052  movz w8, #0x1
0x0694B054: 881e3139  strb w8, [x20, #0xc47]
0x0694B058: 731e40f9  ldr x19, [x19, #0x38]
0x0694B05C: 930300b4  cbz x19, #0x694b0cc
0x0694B060: 2a690090  adrp x10, #0x766f000
0x0694B064: 680240f9  ldr x8, [x19]
0x0694B068: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694B06C: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B070: 410140f9  ldr x1, [x10]
0x0694B074: 290100b4  cbz x9, #0x694b098
0x0694B078: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B07C: 4a210091  add x10, x10, #8
0x0694B080: 4b815ff8  ldur x11, [x10, #-8]
0x0694B084: 7f0101eb  cmp x11, x1
0x0694B088: 00010054  b.eq #0x694b0a8
0x0694B08C: 290500f1  subs x9, x9, #1
0x0694B090: 4a410091  add x10, x10, #0x10
0x0694B094: 61ffff54  b.ne #0x694b080
0x0694B098: 42018052  movz w2, #0xa
0x0694B09C: e00313aa  mov x0, x19
0x0694B0A0: 9c2e2097  bl #0x3156b10
0x0694B0A4: 05000014  b #0x694b0b8
0x0694B0A8: 490140b9  ldr w9, [x10]
0x0694B0AC: 29290011  add w9, w9, #0xa
0x0694B0B0: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B0B4: 00e10491  add x0, x8, #0x138
0x0694B0B8: 020440a9  ldp x2, x1, [x0]
0x0694B0BC: e00313aa  mov x0, x19
0x0694B0C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B0C4: fe0742f8  ldr x30, [sp], #0x20
0x0694B0C8: 40001fd6  br x2
0x0694B0CC: f8d62097  bl #0x3180cac

; RVA 0x694B0D0 | public void SetNavigationBackAction(Action action) { }
; bytes=172 sha256=478ea12d697779473200431d27707152d535f522793ac906bba4b44801f36530 status=arm64_complete_bound indexed_start=True
0x0694B0D0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694B0D4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B0D8: f59e00d0  adrp x21, #0x7d29000
0x0694B0DC: a8227139  ldrb w8, [x21, #0xc48]
0x0694B0E0: f30301aa  mov x19, x1
0x0694B0E4: f40300aa  mov x20, x0
0x0694B0E8: c8000037  tbnz w8, #0, #0x694b100
0x0694B0EC: 20690090  adrp x0, #0x766f000
0x0694B0F0: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694B0F4: 49d62097  bl #0x3180a18
0x0694B0F8: 28008052  movz w8, #0x1
0x0694B0FC: a8223139  strb w8, [x21, #0xc48]
0x0694B100: 941e40f9  ldr x20, [x20, #0x38]
0x0694B104: b40300b4  cbz x20, #0x694b178
0x0694B108: 2a690090  adrp x10, #0x766f000
0x0694B10C: 880240f9  ldr x8, [x20]
0x0694B110: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694B114: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B118: 410140f9  ldr x1, [x10]
0x0694B11C: 290100b4  cbz x9, #0x694b140
0x0694B120: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B124: 4a210091  add x10, x10, #8
0x0694B128: 4b815ff8  ldur x11, [x10, #-8]
0x0694B12C: 7f0101eb  cmp x11, x1
0x0694B130: 00010054  b.eq #0x694b150
0x0694B134: 290500f1  subs x9, x9, #1
0x0694B138: 4a410091  add x10, x10, #0x10
0x0694B13C: 61ffff54  b.ne #0x694b128
0x0694B140: 02028052  movz w2, #0x10
0x0694B144: e00314aa  mov x0, x20
0x0694B148: 722e2097  bl #0x3156b10
0x0694B14C: 05000014  b #0x694b160
0x0694B150: 490140b9  ldr w9, [x10]
0x0694B154: 29410011  add w9, w9, #0x10
0x0694B158: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B15C: 00e10491  add x0, x8, #0x138
0x0694B160: 030840a9  ldp x3, x2, [x0]
0x0694B164: e00314aa  mov x0, x20
0x0694B168: e10313aa  mov x1, x19
0x0694B16C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B170: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694B174: 60001fd6  br x3
0x0694B178: cdd62097  bl #0x3180cac

; RVA 0x694B17C | public void BlockBackButton() { }
; bytes=168 sha256=6ef7d957e3b224dc77fed6ad48f651e8a8c7b5be22952e0cc2de3cfe0e3fd00c status=arm64_complete_bound indexed_start=True
0x0694B17C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694B180: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B184: f49e00d0  adrp x20, #0x7d29000
0x0694B188: 88267139  ldrb w8, [x20, #0xc49]
0x0694B18C: f30300aa  mov x19, x0
0x0694B190: c8000037  tbnz w8, #0, #0x694b1a8
0x0694B194: 20690090  adrp x0, #0x766f000
0x0694B198: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694B19C: 1fd62097  bl #0x3180a18
0x0694B1A0: 28008052  movz w8, #0x1
0x0694B1A4: 88263139  strb w8, [x20, #0xc49]
0x0694B1A8: 731e40f9  ldr x19, [x19, #0x38]
0x0694B1AC: b30300b4  cbz x19, #0x694b220
0x0694B1B0: 2a690090  adrp x10, #0x766f000
0x0694B1B4: 680240f9  ldr x8, [x19]
0x0694B1B8: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694B1BC: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B1C0: 410140f9  ldr x1, [x10]
0x0694B1C4: 290100b4  cbz x9, #0x694b1e8
0x0694B1C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B1CC: 4a210091  add x10, x10, #8
0x0694B1D0: 4b815ff8  ldur x11, [x10, #-8]
0x0694B1D4: 7f0101eb  cmp x11, x1
0x0694B1D8: 00010054  b.eq #0x694b1f8
0x0694B1DC: 290500f1  subs x9, x9, #1
0x0694B1E0: 4a410091  add x10, x10, #0x10
0x0694B1E4: 61ffff54  b.ne #0x694b1d0
0x0694B1E8: 22028052  movz w2, #0x11
0x0694B1EC: e00313aa  mov x0, x19
0x0694B1F0: 482e2097  bl #0x3156b10
0x0694B1F4: 05000014  b #0x694b208
0x0694B1F8: 490140b9  ldr w9, [x10]
0x0694B1FC: 29450011  add w9, w9, #0x11
0x0694B200: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B204: 00e10491  add x0, x8, #0x138
0x0694B208: 030840a9  ldp x3, x2, [x0]
0x0694B20C: e00313aa  mov x0, x19
0x0694B210: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B214: 21008052  movz w1, #0x1
0x0694B218: fe0742f8  ldr x30, [sp], #0x20
0x0694B21C: 60001fd6  br x3
0x0694B220: a3d62097  bl #0x3180cac

; RVA 0x694B224 | public void UnblockBackButton() { }
; bytes=168 sha256=7e1f508a2728288709cc5ec1e9370f166ac2f914e462908ee1534fc663d7faff status=arm64_complete_bound indexed_start=True
0x0694B224: fe0f1ef8  str x30, [sp, #-0x20]!
0x0694B228: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B22C: f49e00d0  adrp x20, #0x7d29000
0x0694B230: 882a7139  ldrb w8, [x20, #0xc4a]
0x0694B234: f30300aa  mov x19, x0
0x0694B238: c8000037  tbnz w8, #0, #0x694b250
0x0694B23C: 20690090  adrp x0, #0x766f000
0x0694B240: 006c44f9  ldr x0, [x0, #0x8d8]
0x0694B244: f5d52097  bl #0x3180a18
0x0694B248: 28008052  movz w8, #0x1
0x0694B24C: 882a3139  strb w8, [x20, #0xc4a]
0x0694B250: 731e40f9  ldr x19, [x19, #0x38]
0x0694B254: b30300b4  cbz x19, #0x694b2c8
0x0694B258: 2a690090  adrp x10, #0x766f000
0x0694B25C: 680240f9  ldr x8, [x19]
0x0694B260: 4a6d44f9  ldr x10, [x10, #0x8d8]
0x0694B264: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B268: 410140f9  ldr x1, [x10]
0x0694B26C: 290100b4  cbz x9, #0x694b290
0x0694B270: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B274: 4a210091  add x10, x10, #8
0x0694B278: 4b815ff8  ldur x11, [x10, #-8]
0x0694B27C: 7f0101eb  cmp x11, x1
0x0694B280: 00010054  b.eq #0x694b2a0
0x0694B284: 290500f1  subs x9, x9, #1
0x0694B288: 4a410091  add x10, x10, #0x10
0x0694B28C: 61ffff54  b.ne #0x694b278
0x0694B290: 22028052  movz w2, #0x11
0x0694B294: e00313aa  mov x0, x19
0x0694B298: 1e2e2097  bl #0x3156b10
0x0694B29C: 05000014  b #0x694b2b0
0x0694B2A0: 490140b9  ldr w9, [x10]
0x0694B2A4: 29450011  add w9, w9, #0x11
0x0694B2A8: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B2AC: 00e10491  add x0, x8, #0x138
0x0694B2B0: 030840a9  ldp x3, x2, [x0]
0x0694B2B4: e00313aa  mov x0, x19
0x0694B2B8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B2BC: e1031f2a  mov w1, wzr
0x0694B2C0: fe0742f8  ldr x30, [sp], #0x20
0x0694B2C4: 60001fd6  br x3
0x0694B2C8: 79d62097  bl #0x3180cac

; RVA 0x694B2CC | public void BlockBackButton(BackButtonDisableFlag flagToRise) { }
; bytes=172 sha256=673a0682ffb88f0feab680bfce32d54a49070931b7f1c84bc1802a8438534660 status=arm64_complete_bound indexed_start=True
0x0694B2CC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694B2D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B2D4: f59e00d0  adrp x21, #0x7d29000
0x0694B2D8: a82e7139  ldrb w8, [x21, #0xc4b]
0x0694B2DC: f303012a  mov w19, w1
0x0694B2E0: f40300aa  mov x20, x0
0x0694B2E4: c8000037  tbnz w8, #0, #0x694b2fc
0x0694B2E8: 806900b0  adrp x0, #0x767c000
0x0694B2EC: 005847f9  ldr x0, [x0, #0xeb0]
0x0694B2F0: cad52097  bl #0x3180a18
0x0694B2F4: 28008052  movz w8, #0x1
0x0694B2F8: a82e3139  strb w8, [x21, #0xc4b]
0x0694B2FC: 941a40f9  ldr x20, [x20, #0x30]
0x0694B300: b40300b4  cbz x20, #0x694b374
0x0694B304: 8a6900b0  adrp x10, #0x767c000
0x0694B308: 880240f9  ldr x8, [x20]
0x0694B30C: 4a5947f9  ldr x10, [x10, #0xeb0]
0x0694B310: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B314: 410140f9  ldr x1, [x10]
0x0694B318: 290100b4  cbz x9, #0x694b33c
0x0694B31C: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B320: 4a210091  add x10, x10, #8
0x0694B324: 4b815ff8  ldur x11, [x10, #-8]
0x0694B328: 7f0101eb  cmp x11, x1
0x0694B32C: 00010054  b.eq #0x694b34c
0x0694B330: 290500f1  subs x9, x9, #1
0x0694B334: 4a410091  add x10, x10, #0x10
0x0694B338: 61ffff54  b.ne #0x694b324
0x0694B33C: 42008052  movz w2, #0x2
0x0694B340: e00314aa  mov x0, x20
0x0694B344: f32d2097  bl #0x3156b10
0x0694B348: 05000014  b #0x694b35c
0x0694B34C: 490140b9  ldr w9, [x10]
0x0694B350: 29090011  add w9, w9, #2
0x0694B354: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B358: 00e10491  add x0, x8, #0x138
0x0694B35C: 030840a9  ldp x3, x2, [x0]
0x0694B360: e00314aa  mov x0, x20
0x0694B364: e103132a  mov w1, w19
0x0694B368: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B36C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694B370: 60001fd6  br x3
0x0694B374: 4ed62097  bl #0x3180cac

; RVA 0x694B378 | public void UnblockBackButton(BackButtonDisableFlag flagToRemove) { }
; bytes=172 sha256=b657fdc371987be148c5b43b58c3c24e2c54c2d5fe270cc3c11dcb9d51151f4b status=arm64_complete_bound indexed_start=True
0x0694B378: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0694B37C: f44f01a9  stp x20, x19, [sp, #0x10]
0x0694B380: f59e00d0  adrp x21, #0x7d29000
0x0694B384: a8327139  ldrb w8, [x21, #0xc4c]
0x0694B388: f303012a  mov w19, w1
0x0694B38C: f40300aa  mov x20, x0
0x0694B390: c8000037  tbnz w8, #0, #0x694b3a8
0x0694B394: 806900b0  adrp x0, #0x767c000
0x0694B398: 005847f9  ldr x0, [x0, #0xeb0]
0x0694B39C: 9fd52097  bl #0x3180a18
0x0694B3A0: 28008052  movz w8, #0x1
0x0694B3A4: a8323139  strb w8, [x21, #0xc4c]
0x0694B3A8: 941a40f9  ldr x20, [x20, #0x30]
0x0694B3AC: b40300b4  cbz x20, #0x694b420
0x0694B3B0: 8a6900b0  adrp x10, #0x767c000
0x0694B3B4: 880240f9  ldr x8, [x20]
0x0694B3B8: 4a5947f9  ldr x10, [x10, #0xeb0]
0x0694B3BC: 095d4279  ldrh w9, [x8, #0x12e]
0x0694B3C0: 410140f9  ldr x1, [x10]
0x0694B3C4: 290100b4  cbz x9, #0x694b3e8
0x0694B3C8: 0a5940f9  ldr x10, [x8, #0xb0]
0x0694B3CC: 4a210091  add x10, x10, #8
0x0694B3D0: 4b815ff8  ldur x11, [x10, #-8]
0x0694B3D4: 7f0101eb  cmp x11, x1
0x0694B3D8: 00010054  b.eq #0x694b3f8
0x0694B3DC: 290500f1  subs x9, x9, #1
0x0694B3E0: 4a410091  add x10, x10, #0x10
0x0694B3E4: 61ffff54  b.ne #0x694b3d0
0x0694B3E8: 22008052  movz w2, #0x1
0x0694B3EC: e00314aa  mov x0, x20
0x0694B3F0: c82d2097  bl #0x3156b10
0x0694B3F4: 05000014  b #0x694b408
0x0694B3F8: 490140b9  ldr w9, [x10]
0x0694B3FC: 29050011  add w9, w9, #1
0x0694B400: 08d1298b  add x8, x8, w9, sxtw #4
0x0694B404: 00e10491  add x0, x8, #0x138
0x0694B408: 030840a9  ldp x3, x2, [x0]
0x0694B40C: e00314aa  mov x0, x20
0x0694B410: e103132a  mov w1, w19
0x0694B414: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0694B418: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0694B41C: 60001fd6  br x3
0x0694B420: 23d62097  bl #0x3180cac

; RVA 0x694B424 | public void .ctor() { }
; bytes=8 sha256=01def9145e06a90dfb13d7ea292d77b6c30899e1e1e508e841853ef0dc23928d status=arm64_complete_bound indexed_start=True
0x0694B424: e1031faa  mov x1, xzr
0x0694B428: b59efd17  b #0x68b2efc

