; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32796 Merger.MergeBoard.PowerBoost.Models.PowerBoostModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD1C2C | public int get_DefaultPowerBoostMode() { }
; bytes=8 sha256=5103ba3de080c52a046485f800433848701faa49ab8f60241a80987ca249d7ac status=arm64_complete_bound indexed_start=True
0x06AD1C2C: 20008052  movz w0, #0x1
0x06AD1C30: c0035fd6  ret

; RVA 0x6AD1C34 | public int get_MinUnlockableBoost() { }
; bytes=8 sha256=0becf359e148792c5ed24ca79a91209e5f15e0f015d2a0b9f4d69c2e82d59f3a status=arm64_complete_bound indexed_start=True
0x06AD1C34: 40008052  movz w0, #0x2
0x06AD1C38: c0035fd6  ret

; RVA 0x6AD1C3C | public int get_MaxBoostIndicationThreshold() { }
; bytes=8 sha256=866b82fb6649dcf0f7873c61006d47004b1074ea9b382227c4ab724c93f547f7 status=arm64_complete_bound indexed_start=True
0x06AD1C3C: 80008052  movz w0, #0x4
0x06AD1C40: c0035fd6  ret

; RVA 0x6AD1C44 | public PowerBoostMultiModesConfig get_Configuration() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06AD1C44: 000c40f9  ldr x0, [x0, #0x18]
0x06AD1C48: c0035fd6  ret

; RVA 0x6AD1C4C | private void set_Configuration(PowerBoostMultiModesConfig value) { }
; bytes=8 sha256=55a54150208d8c07f61de371527b2ff04552fe7738dfec1cec5a3e207b4584ce status=arm64_complete_bound indexed_start=True
0x06AD1C4C: 018c01f8  str x1, [x0, #0x18]!
0x06AD1C50: 5dbb1a17  b #0x31809c4

; RVA 0x6AD1C54 | public int get_CurrentConfigLevel() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x06AD1C54: 002040b9  ldr w0, [x0, #0x20]
0x06AD1C58: c0035fd6  ret

; RVA 0x6AD1C5C | private void set_CurrentConfigLevel(int value) { }
; bytes=8 sha256=f5044c26609fdbec3c7736771b22cfdf72c42bcc825f0051ef500d8f88aaa62e status=arm64_complete_bound indexed_start=True
0x06AD1C5C: 012000b9  str w1, [x0, #0x20]
0x06AD1C60: c0035fd6  ret

; RVA 0x6AD1C64 | public bool get_HasConfiguration() { }
; bytes=92 sha256=8940ae4dbb615263341d67bf61a66b4c5e6eb6c759cf48a3b0943d817a9a6814 status=arm64_complete_bound indexed_start=True
0x06AD1C64: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD1C68: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD1C6C: d49200b0  adrp x20, #0x7d2a000
0x06AD1C70: 884e6a39  ldrb w8, [x20, #0xa93]
0x06AD1C74: f30300aa  mov x19, x0
0x06AD1C78: c8000037  tbnz w8, #0, #0x6ad1c90
0x06AD1C7C: 606000d0  adrp x0, #0x76df000
0x06AD1C80: 00a442f9  ldr x0, [x0, #0x548]
0x06AD1C84: 65bb1a97  bl #0x3180a18
0x06AD1C88: 28008052  movz w8, #0x1
0x06AD1C8C: 884e2a39  strb w8, [x20, #0xa93]
0x06AD1C90: 680e40f9  ldr x8, [x19, #0x18]
0x06AD1C94: e80000b4  cbz x8, #0x6ad1cb0
0x06AD1C98: 696000d0  adrp x9, #0x76df000
0x06AD1C9C: 29a542f9  ldr x9, [x9, #0x548]
0x06AD1CA0: 001540f9  ldr x0, [x8, #0x28]
0x06AD1CA4: 210140f9  ldr x1, [x9]
0x06AD1CA8: cc594497  bl #0x3be83d8
0x06AD1CAC: 08000052  eor w8, w0, #1
0x06AD1CB0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD1CB4: 00010012  and w0, w8, #1
0x06AD1CB8: fe0742f8  ldr x30, [sp], #0x20
0x06AD1CBC: c0035fd6  ret

; RVA 0x6AD1CC0 | public bool get_IsPowerBoostEnabled() { }
; bytes=200 sha256=23e31ac0a1f03232cc3b194b79dd60ae06766f15533180f752e9878ce13af067 status=arm64_complete_bound indexed_start=True
0x06AD1CC0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD1CC4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD1CC8: d49200b0  adrp x20, #0x7d2a000
0x06AD1CCC: 88526a39  ldrb w8, [x20, #0xa94]
0x06AD1CD0: f30300aa  mov x19, x0
0x06AD1CD4: 88010037  tbnz w8, #0, #0x6ad1d04
0x06AD1CD8: 805c00b0  adrp x0, #0x7662000
0x06AD1CDC: 006c44f9  ldr x0, [x0, #0x8d8]
0x06AD1CE0: 4ebb1a97  bl #0x3180a18
0x06AD1CE4: e05b00f0  adrp x0, #0x7650000
0x06AD1CE8: 00d046f9  ldr x0, [x0, #0xda0]
0x06AD1CEC: 4bbb1a97  bl #0x3180a18
0x06AD1CF0: 805c00b0  adrp x0, #0x7662000
0x06AD1CF4: 007444f9  ldr x0, [x0, #0x8e8]
0x06AD1CF8: 48bb1a97  bl #0x3180a18
0x06AD1CFC: 28008052  movz w8, #0x1
0x06AD1D00: 88522a39  strb w8, [x20, #0xa94]
0x06AD1D04: e00313aa  mov x0, x19
0x06AD1D08: d7ffff97  bl #0x6ad1c64
0x06AD1D0C: 20030036  tbz w0, #0, #0x6ad1d70
0x06AD1D10: 680e40f9  ldr x8, [x19, #0x18]
0x06AD1D14: 680300b4  cbz x8, #0x6ad1d80
0x06AD1D18: 081540f9  ldr x8, [x8, #0x28]
0x06AD1D1C: 732240b9  ldr w19, [x19, #0x20]
0x06AD1D20: a80100b4  cbz x8, #0x6ad1d54
0x06AD1D24: 091940b9  ldr w9, [x8, #0x18]
0x06AD1D28: e9020034  cbz w9, #0x6ad1d84
0x06AD1D2C: 081140f9  ldr x8, [x8, #0x20]
0x06AD1D30: 880200b4  cbz x8, #0x6ad1d80
0x06AD1D34: 011140b9  ldr w1, [x8, #0x10]
0x06AD1D38: e85b00f0  adrp x8, #0x7650000
0x06AD1D3C: 08d146f9  ldr x8, [x8, #0xda0]
0x06AD1D40: e0230091  add x0, sp, #8
0x06AD1D44: ff0700f9  str xzr, [sp, #8]
0x06AD1D48: 020140f9  ldr x2, [x8]
0x06AD1D4C: 65a65e97  bl #0x427b6e0
0x06AD1D50: e80740f9  ldr x8, [sp, #8]
0x06AD1D54: 09fd60d3  lsr x9, x8, #0x20
0x06AD1D58: 1f1d0072  tst w8, #0xff
0x06AD1D5C: e8079f1a  cset w8, ne
0x06AD1D60: 7f02096b  cmp w19, w9
0x06AD1D64: e9b79f1a  cset w9, ge
0x06AD1D68: 0001090a  and w0, w8, w9
0x06AD1D6C: 02000014  b #0x6ad1d74
0x06AD1D70: e0031f2a  mov w0, wzr
0x06AD1D74: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD1D78: fe0742f8  ldr x30, [sp], #0x20
0x06AD1D7C: c0035fd6  ret
0x06AD1D80: cbbb1a97  bl #0x3180cac
0x06AD1D84: ccbb1a97  bl #0x3180cb4

; RVA 0x6AD1D88 | public int get_LastGrantedBoostRemote() { }
; bytes=24 sha256=c378534e5320d2edf036d9baa835b83ab1231f19947f6de4a8eea185a746ec83 status=arm64_complete_bound indexed_start=True
0x06AD1D88: 080c40f9  ldr x8, [x0, #0x18]
0x06AD1D8C: 680000b4  cbz x8, #0x6ad1d98
0x06AD1D90: 003140b9  ldr w0, [x8, #0x30]
0x06AD1D94: c0035fd6  ret
0x06AD1D98: 20008052  movz w0, #0x1
0x06AD1D9C: c0035fd6  ret

; RVA 0x6AD1DA0 | public BindableProperty<int> get_CurrentPowerBoostMode() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06AD1DA0: 001c40f9  ldr x0, [x0, #0x38]
0x06AD1DA4: c0035fd6  ret

; RVA 0x6AD1DA8 | public string get_EventId() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06AD1DA8: 001440f9  ldr x0, [x0, #0x28]
0x06AD1DAC: c0035fd6  ret

; RVA 0x6AD1DB0 | private void set_EventId(string value) { }
; bytes=8 sha256=7aa84546b0f6652d8211baaeb2ef7e186d086653cfc73f4ac7f8a72e381f0bd5 status=arm64_complete_bound indexed_start=True
0x06AD1DB0: 018c02f8  str x1, [x0, #0x28]!
0x06AD1DB4: 04bb1a17  b #0x31809c4

; RVA 0x6AD1DB8 | public int get_EventIndex() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x06AD1DB8: 003040b9  ldr w0, [x0, #0x30]
0x06AD1DBC: c0035fd6  ret

; RVA 0x6AD1DC0 | private void set_EventIndex(int value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x06AD1DC0: 013000b9  str w1, [x0, #0x30]
0x06AD1DC4: c0035fd6  ret

; RVA 0x6AD1DC8 | private MutableBindableProperty<int> get_BoostMode() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06AD1DC8: 001c40f9  ldr x0, [x0, #0x38]
0x06AD1DCC: c0035fd6  ret

; RVA 0x6AD1DD0 | private void set_BoostMode(MutableBindableProperty<int> value) { }
; bytes=8 sha256=4a8a6b1863f4a76ad1ab78fcd3ad24370ea42aec9de108064def30a54b000eec status=arm64_complete_bound indexed_start=True
0x06AD1DD0: 018c03f8  str x1, [x0, #0x38]!
0x06AD1DD4: fcba1a17  b #0x31809c4

; RVA 0x6AD1DD8 | public void Initialize() { }
; bytes=128 sha256=1d6ee191ecaac2d7d55ded63e0a97ee13b9c15aa67d3f5a8af701c546ac2f8c8 status=arm64_complete_bound indexed_start=True
0x06AD1DD8: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD1DDC: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD1DE0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD1DE4: d59200b0  adrp x21, #0x7d2a000
0x06AD1DE8: 165d00f0  adrp x22, #0x7674000
0x06AD1DEC: 145d00f0  adrp x20, #0x7674000
0x06AD1DF0: a8566a39  ldrb w8, [x21, #0xa95]
0x06AD1DF4: d67a42f9  ldr x22, [x22, #0x4f0]
0x06AD1DF8: 947e42f9  ldr x20, [x20, #0x4f8]
0x06AD1DFC: f30300aa  mov x19, x0
0x06AD1E00: 28010037  tbnz w8, #0, #0x6ad1e24
0x06AD1E04: 005d00f0  adrp x0, #0x7674000
0x06AD1E08: 007c42f9  ldr x0, [x0, #0x4f8]
0x06AD1E0C: 03bb1a97  bl #0x3180a18
0x06AD1E10: 005d00f0  adrp x0, #0x7674000
0x06AD1E14: 007842f9  ldr x0, [x0, #0x4f0]
0x06AD1E18: 00bb1a97  bl #0x3180a18
0x06AD1E1C: 28008052  movz w8, #0x1
0x06AD1E20: a8562a39  strb w8, [x21, #0xa95]
0x06AD1E24: c00240f9  ldr x0, [x22]
0x06AD1E28: 9ebb1a97  bl #0x3180ca0
0x06AD1E2C: 820240f9  ldr x2, [x20]
0x06AD1E30: 21008052  movz w1, #0x1
0x06AD1E34: f40300aa  mov x20, x0
0x06AD1E38: 593e5d97  bl #0x422179c
0x06AD1E3C: 748e03f8  str x20, [x19, #0x38]!
0x06AD1E40: e00313aa  mov x0, x19
0x06AD1E44: e10314aa  mov x1, x20
0x06AD1E48: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1E4C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1E50: fe0743f8  ldr x30, [sp], #0x30
0x06AD1E54: dcba1a17  b #0x31809c4

; RVA 0x6AD1E58 | public void UpdateConfiguration(string eventId, int eventIndex, int configLevel, PowerBoostMultiModesConfig configuration) { }
; bytes=76 sha256=c1dcf2b2dda92d5466f1e560c7b66f84f07a13921912da51e6c6a9b597efbe5e status=arm64_complete_bound indexed_start=True
0x06AD1E58: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD1E5C: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD1E60: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD1E64: f60300aa  mov x22, x0
0x06AD1E68: 018c02f8  str x1, [x0, #0x28]!
0x06AD1E6C: f30304aa  mov x19, x4
0x06AD1E70: f403032a  mov w20, w3
0x06AD1E74: f503022a  mov w21, w2
0x06AD1E78: d3ba1a97  bl #0x31809c4
0x06AD1E7C: d38e01f8  str x19, [x22, #0x18]!
0x06AD1E80: e00316aa  mov x0, x22
0x06AD1E84: e10313aa  mov x1, x19
0x06AD1E88: d51a00b9  str w21, [x22, #0x18]
0x06AD1E8C: ceba1a97  bl #0x31809c4
0x06AD1E90: d40a00b9  str w20, [x22, #8]
0x06AD1E94: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1E98: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1E9C: fe0743f8  ldr x30, [sp], #0x30
0x06AD1EA0: c0035fd6  ret

; RVA 0x6AD1EA4 | public void SetPowerBoostMode(int mode) { }
; bytes=152 sha256=8645c106f426770c29e8379870a322fc82aea75b26258d86f9e3b0ad30201b6d status=arm64_complete_bound indexed_start=True
0x06AD1EA4: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD1EA8: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD1EAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD1EB0: d69200b0  adrp x22, #0x7d2a000
0x06AD1EB4: f55b00b0  adrp x21, #0x764e000
0x06AD1EB8: c85a6a39  ldrb w8, [x22, #0xa96]
0x06AD1EBC: b50647f9  ldr x21, [x21, #0xe08]
0x06AD1EC0: f303012a  mov w19, w1
0x06AD1EC4: f40300aa  mov x20, x0
0x06AD1EC8: 28010037  tbnz w8, #0, #0x6ad1eec
0x06AD1ECC: e05b00b0  adrp x0, #0x764e000
0x06AD1ED0: 000447f9  ldr x0, [x0, #0xe08]
0x06AD1ED4: d1ba1a97  bl #0x3180a18
0x06AD1ED8: 605d0090  adrp x0, #0x767d000
0x06AD1EDC: 006442f9  ldr x0, [x0, #0x4c8]
0x06AD1EE0: ceba1a97  bl #0x3180a18
0x06AD1EE4: 28008052  movz w8, #0x1
0x06AD1EE8: c85a2a39  strb w8, [x22, #0xa96]
0x06AD1EEC: a00240f9  ldr x0, [x21]
0x06AD1EF0: 941e40f9  ldr x20, [x20, #0x38]
0x06AD1EF4: 08e040b9  ldr w8, [x0, #0xe0]
0x06AD1EF8: 48000035  cbnz w8, #0x6ad1f00
0x06AD1EFC: 24bb1a97  bl #0x3180b8c
0x06AD1F00: 21008052  movz w1, #0x1
0x06AD1F04: e003132a  mov w0, w19
0x06AD1F08: e2031faa  mov x2, xzr
0x06AD1F0C: 4b15af97  bl #0x5697438
0x06AD1F10: 540100b4  cbz x20, #0x6ad1f38
0x06AD1F14: 685d0090  adrp x8, #0x767d000
0x06AD1F18: 086542f9  ldr x8, [x8, #0x4c8]
0x06AD1F1C: e103002a  mov w1, w0
0x06AD1F20: e00314aa  mov x0, x20
0x06AD1F24: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1F28: 020140f9  ldr x2, [x8]
0x06AD1F2C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1F30: fe0743f8  ldr x30, [sp], #0x30
0x06AD1F34: 203e5d17  b #0x42217b4
0x06AD1F38: 5dbb1a97  bl #0x3180cac

; RVA 0x6AD1F3C | public void SetPowerBoostModeAndNotify(int mode) { }
; bytes=152 sha256=5d8445df1689c2dd9f2b583b9bd40b400209a1f09c6fc29373aaeeabc243a469 status=arm64_complete_bound indexed_start=True
0x06AD1F3C: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD1F40: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD1F44: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD1F48: d69200b0  adrp x22, #0x7d2a000
0x06AD1F4C: f55b00b0  adrp x21, #0x764e000
0x06AD1F50: c85e6a39  ldrb w8, [x22, #0xa97]
0x06AD1F54: b50647f9  ldr x21, [x21, #0xe08]
0x06AD1F58: f303012a  mov w19, w1
0x06AD1F5C: f40300aa  mov x20, x0
0x06AD1F60: 28010037  tbnz w8, #0, #0x6ad1f84
0x06AD1F64: e05b00b0  adrp x0, #0x764e000
0x06AD1F68: 000447f9  ldr x0, [x0, #0xe08]
0x06AD1F6C: abba1a97  bl #0x3180a18
0x06AD1F70: 005d00f0  adrp x0, #0x7674000
0x06AD1F74: 008042f9  ldr x0, [x0, #0x500]
0x06AD1F78: a8ba1a97  bl #0x3180a18
0x06AD1F7C: 28008052  movz w8, #0x1
0x06AD1F80: c85e2a39  strb w8, [x22, #0xa97]
0x06AD1F84: a00240f9  ldr x0, [x21]
0x06AD1F88: 941e40f9  ldr x20, [x20, #0x38]
0x06AD1F8C: 08e040b9  ldr w8, [x0, #0xe0]
0x06AD1F90: 48000035  cbnz w8, #0x6ad1f98
0x06AD1F94: feba1a97  bl #0x3180b8c
0x06AD1F98: 21008052  movz w1, #0x1
0x06AD1F9C: e003132a  mov w0, w19
0x06AD1FA0: e2031faa  mov x2, xzr
0x06AD1FA4: 2515af97  bl #0x5697438
0x06AD1FA8: 540100b4  cbz x20, #0x6ad1fd0
0x06AD1FAC: 085d00f0  adrp x8, #0x7674000
0x06AD1FB0: 088142f9  ldr x8, [x8, #0x500]
0x06AD1FB4: e103002a  mov w1, w0
0x06AD1FB8: e00314aa  mov x0, x20
0x06AD1FBC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD1FC0: 020140f9  ldr x2, [x8]
0x06AD1FC4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD1FC8: fe0743f8  ldr x30, [sp], #0x30
0x06AD1FCC: 173e5d17  b #0x4221828
0x06AD1FD0: 37bb1a97  bl #0x3180cac

; RVA 0x6AD1FD4 | public int GetEnergyThreshold(int boost) { }
; bytes=284 sha256=d8b3ff267abcc6a8fee7e5f80f68add159fee3cf6b5f06b5d45573a205e3c8b5 status=arm64_complete_bound indexed_start=True
0x06AD1FD4: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD1FD8: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD1FDC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD1FE0: d59200b0  adrp x21, #0x7d2a000
0x06AD1FE4: 166300f0  adrp x22, #0x7734000
0x06AD1FE8: a8626a39  ldrb w8, [x21, #0xa98]
0x06AD1FEC: d6ce40f9  ldr x22, [x22, #0x198]
0x06AD1FF0: f403012a  mov w20, w1
0x06AD1FF4: f30300aa  mov x19, x0
0x06AD1FF8: 48020037  tbnz w8, #0, #0x6ad2040
0x06AD1FFC: 606000d0  adrp x0, #0x76df000
0x06AD2000: 00a442f9  ldr x0, [x0, #0x548]
0x06AD2004: 85ba1a97  bl #0x3180a18
0x06AD2008: 606000b0  adrp x0, #0x76df000
0x06AD200C: 00b843f9  ldr x0, [x0, #0x770]
0x06AD2010: 82ba1a97  bl #0x3180a18
0x06AD2014: 606000b0  adrp x0, #0x76df000
0x06AD2018: 00bc42f9  ldr x0, [x0, #0x578]
0x06AD201C: 7fba1a97  bl #0x3180a18
0x06AD2020: 006300d0  adrp x0, #0x7734000
0x06AD2024: 00d040f9  ldr x0, [x0, #0x1a0]
0x06AD2028: 7cba1a97  bl #0x3180a18
0x06AD202C: 006300d0  adrp x0, #0x7734000
0x06AD2030: 00cc40f9  ldr x0, [x0, #0x198]
0x06AD2034: 79ba1a97  bl #0x3180a18
0x06AD2038: 28008052  movz w8, #0x1
0x06AD203C: a8622a39  strb w8, [x21, #0xa98]
0x06AD2040: c00240f9  ldr x0, [x22]
0x06AD2044: 17bb1a97  bl #0x3180ca0
0x06AD2048: e1031faa  mov x1, xzr
0x06AD204C: f50300aa  mov x21, x0
0x06AD2050: 6b21b097  bl #0x56da5fc
0x06AD2054: d50400b4  cbz x21, #0x6ad20ec
0x06AD2058: b41200b9  str w20, [x21, #0x10]
0x06AD205C: 680e40f9  ldr x8, [x19, #0x18]
0x06AD2060: e80000b4  cbz x8, #0x6ad207c
0x06AD2064: 696000b0  adrp x9, #0x76df000
0x06AD2068: 29a542f9  ldr x9, [x9, #0x548]
0x06AD206C: 001540f9  ldr x0, [x8, #0x28]
0x06AD2070: 210140f9  ldr x1, [x9]
0x06AD2074: d9584497  bl #0x3be83d8
0x06AD2078: 60000036  tbz w0, #0, #0x6ad2084
0x06AD207C: e0031f2a  mov w0, wzr
0x06AD2080: 17000014  b #0x6ad20dc
0x06AD2084: 680e40f9  ldr x8, [x19, #0x18]
0x06AD2088: 280300b4  cbz x8, #0x6ad20ec
0x06AD208C: 131540f9  ldr x19, [x8, #0x28]
0x06AD2090: 686000b0  adrp x8, #0x76df000
0x06AD2094: 08bd42f9  ldr x8, [x8, #0x578]
0x06AD2098: 000140f9  ldr x0, [x8]
0x06AD209C: 01bb1a97  bl #0x3180ca0
0x06AD20A0: 086300d0  adrp x8, #0x7734000
0x06AD20A4: 08d140f9  ldr x8, [x8, #0x1a0]
0x06AD20A8: e10315aa  mov x1, x21
0x06AD20AC: e3031faa  mov x3, xzr
0x06AD20B0: f40300aa  mov x20, x0
0x06AD20B4: 020140f9  ldr x2, [x8]
0x06AD20B8: c10f9e97  bl #0x5255fbc
0x06AD20BC: 686000b0  adrp x8, #0x76df000
0x06AD20C0: 08b943f9  ldr x8, [x8, #0x770]
0x06AD20C4: e00313aa  mov x0, x19
0x06AD20C8: e10314aa  mov x1, x20
0x06AD20CC: 020140f9  ldr x2, [x8]
0x06AD20D0: 18cc4597  bl #0x3c45130
0x06AD20D4: 400000b4  cbz x0, #0x6ad20dc
0x06AD20D8: 001840b9  ldr w0, [x0, #0x18]
0x06AD20DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD20E0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD20E4: fe0743f8  ldr x30, [sp], #0x30
0x06AD20E8: c0035fd6  ret
0x06AD20EC: f0ba1a97  bl #0x3180cac

; RVA 0x6AD20F8 | public void OnStartUnlockPopup() { }
; bytes=12 sha256=4dbd2283331b65122911f9a109d96f7f997f26ca833b8bdbb97e0746d32d04c7 status=arm64_complete_bound indexed_start=True
0x06AD20F8: 28008052  movz w8, #0x1
0x06AD20FC: 08000139  strb w8, [x0, #0x40]
0x06AD2100: c0035fd6  ret

; RVA 0x6AD2104 | public void OnUnlockPopupOpened() { }
; bytes=8 sha256=6e8d997bc2ceb1715af0a492814da1e27a12ebf4d916949c6ad40dc877463065 status=arm64_complete_bound indexed_start=True
0x06AD2104: 1f000139  strb wzr, [x0, #0x40]
0x06AD2108: c0035fd6  ret

; RVA 0x6AD210C | public bool IsUnlockPopupOpening() { }
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x06AD210C: 00004139  ldrb w0, [x0, #0x40]
0x06AD2110: c0035fd6  ret

; RVA 0x6AD2114 | public void .ctor() { }
; bytes=8 sha256=c2989ebabce3f4a9369a35a5304af88a14039e0ed78637d143f49542529552fa status=arm64_complete_bound indexed_start=True
0x06AD2114: e1031faa  mov x1, xzr
0x06AD2118: 3921b017  b #0x56da5fc

