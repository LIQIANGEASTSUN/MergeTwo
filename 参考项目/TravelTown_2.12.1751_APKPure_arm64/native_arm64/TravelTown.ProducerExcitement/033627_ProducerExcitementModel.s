; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33627 Merger.ProducerExcitement.Models.ProducerExcitementModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD8DD0 | public ObservableList<ProducerExcitementDataResponse> get_ExcitementStates() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06AD8DD0: 001440f9  ldr x0, [x0, #0x28]
0x06AD8DD4: c0035fd6  ret

; RVA 0x6AD8DD8 | public IReadOnlyList<int> get_ClaimedExcitementIds() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06AD8DD8: 001840f9  ldr x0, [x0, #0x30]
0x06AD8DDC: c0035fd6  ret

; RVA 0x6AD8DE0 | public void Update(ProducerExcitementDataResponse stateExcitements) { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x06AD8DE0: 01000014  b #0x6ad8de4

; RVA 0x6AD8F04 | public ExcitementVisibility GetVisibilityMode(int excitementClaimId) { }
; bytes=92 sha256=5e6aaffa8718485457cde833da7da6f3fac9cf456a13a73c8deb47fd2faa10ea status=arm64_complete_bound indexed_start=True
0x06AD8F04: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD8F08: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD8F0C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD8F10: 969200d0  adrp x22, #0x7d2a000
0x06AD8F14: f5620090  adrp x21, #0x7734000
0x06AD8F18: c8a66b39  ldrb w8, [x22, #0xae9]
0x06AD8F1C: b57a42f9  ldr x21, [x21, #0x4f0]
0x06AD8F20: f303012a  mov w19, w1
0x06AD8F24: f40300aa  mov x20, x0
0x06AD8F28: c8000037  tbnz w8, #0, #0x6ad8f40
0x06AD8F2C: e0620090  adrp x0, #0x7734000
0x06AD8F30: 007842f9  ldr x0, [x0, #0x4f0]
0x06AD8F34: b99e1a97  bl #0x3180a18
0x06AD8F38: 28008052  movz w8, #0x1
0x06AD8F3C: c8a62b39  strb w8, [x22, #0xae9]
0x06AD8F40: 801e40f9  ldr x0, [x20, #0x38]
0x06AD8F44: a30240f9  ldr x3, [x21]
0x06AD8F48: e103132a  mov w1, w19
0x06AD8F4C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD8F50: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD8F54: e2031f2a  mov w2, wzr
0x06AD8F58: fe0743f8  ldr x30, [sp], #0x30
0x06AD8F5C: 1e254417  b #0x3be23d4

; RVA 0x6AD8F60 | public ProducerExcitementAnalyticsDataPayload GetAnalyticsDataPayload(int excitementClaimId) { }
; bytes=88 sha256=55358138b73c99efbce44b3dbcd9eae197d01c548613ca464ec4680cb98f1d1e status=arm64_complete_bound indexed_start=True
0x06AD8F60: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD8F64: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD8F68: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD8F6C: 969200d0  adrp x22, #0x7d2a000
0x06AD8F70: f5620090  adrp x21, #0x7734000
0x06AD8F74: c8aa6b39  ldrb w8, [x22, #0xaea]
0x06AD8F78: b57e42f9  ldr x21, [x21, #0x4f8]
0x06AD8F7C: f303012a  mov w19, w1
0x06AD8F80: f40300aa  mov x20, x0
0x06AD8F84: c8000037  tbnz w8, #0, #0x6ad8f9c
0x06AD8F88: e0620090  adrp x0, #0x7734000
0x06AD8F8C: 007c42f9  ldr x0, [x0, #0x4f8]
0x06AD8F90: a29e1a97  bl #0x3180a18
0x06AD8F94: 28008052  movz w8, #0x1
0x06AD8F98: c8aa2b39  strb w8, [x22, #0xaea]
0x06AD8F9C: 802240f9  ldr x0, [x20, #0x40]
0x06AD8FA0: a20240f9  ldr x2, [x21]
0x06AD8FA4: e103132a  mov w1, w19
0x06AD8FA8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD8FAC: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD8FB0: fe0743f8  ldr x30, [sp], #0x30
0x06AD8FB4: 55244417  b #0x3be2108

; RVA 0x6AD8FB8 | public void RegisterAnalyticsData(ProducerExcitementAnalyticsDataPayload payload, int excitementId) { }
; bytes=104 sha256=67ee6c3a756adcc9ee2ca00d829dd482e888552e1389216efc539e67e579e3bb status=arm64_complete_bound indexed_start=True
0x06AD8FB8: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD8FBC: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD8FC0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD8FC4: 969200d0  adrp x22, #0x7d2a000
0x06AD8FC8: c8ae6b39  ldrb w8, [x22, #0xaeb]
0x06AD8FCC: f403022a  mov w20, w2
0x06AD8FD0: f30301aa  mov x19, x1
0x06AD8FD4: f50300aa  mov x21, x0
0x06AD8FD8: c8000037  tbnz w8, #0, #0x6ad8ff0
0x06AD8FDC: e0620090  adrp x0, #0x7734000
0x06AD8FE0: 008042f9  ldr x0, [x0, #0x500]
0x06AD8FE4: 8d9e1a97  bl #0x3180a18
0x06AD8FE8: 28008052  movz w8, #0x1
0x06AD8FEC: c8ae2b39  strb w8, [x22, #0xaeb]
0x06AD8FF0: a02240f9  ldr x0, [x21, #0x40]
0x06AD8FF4: 400100b4  cbz x0, #0x6ad901c
0x06AD8FF8: e8620090  adrp x8, #0x7734000
0x06AD8FFC: 088142f9  ldr x8, [x8, #0x500]
0x06AD9000: e103142a  mov w1, w20
0x06AD9004: e20313aa  mov x2, x19
0x06AD9008: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD900C: 030140f9  ldr x3, [x8]
0x06AD9010: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD9014: fe0743f8  ldr x30, [sp], #0x30
0x06AD9018: cb728d17  b #0x4e35b44
0x06AD901C: 249f1a97  bl #0x3180cac

; RVA 0x6AD9020 | public void AddClaimedExcitementId(int excitementId) { }
; bytes=324 sha256=2557ac06f065b1d35817dac820f7cc6df3463b2caea97d762d22c8c6f1ac0f65 status=arm64_complete_bound indexed_start=True
0x06AD9020: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06AD9024: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD9028: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD902C: 959200b0  adrp x21, #0x7d2a000
0x06AD9030: d66200f0  adrp x22, #0x7734000
0x06AD9034: a8b26b39  ldrb w8, [x21, #0xaec]
0x06AD9038: d68642f9  ldr x22, [x22, #0x508]
0x06AD903C: f403012a  mov w20, w1
0x06AD9040: f30300aa  mov x19, x0
0x06AD9044: 48020037  tbnz w8, #0, #0x6ad908c
0x06AD9048: 005c0090  adrp x0, #0x7659000
0x06AD904C: 006445f9  ldr x0, [x0, #0xac8]
0x06AD9050: 729e1a97  bl #0x3180a18
0x06AD9054: c06200f0  adrp x0, #0x7734000
0x06AD9058: 008842f9  ldr x0, [x0, #0x510]
0x06AD905C: 6f9e1a97  bl #0x3180a18
0x06AD9060: c06200f0  adrp x0, #0x7734000
0x06AD9064: 008c42f9  ldr x0, [x0, #0x518]
0x06AD9068: 6c9e1a97  bl #0x3180a18
0x06AD906C: c06200f0  adrp x0, #0x7734000
0x06AD9070: 009042f9  ldr x0, [x0, #0x520]
0x06AD9074: 699e1a97  bl #0x3180a18
0x06AD9078: c06200f0  adrp x0, #0x7734000
0x06AD907C: 008442f9  ldr x0, [x0, #0x508]
0x06AD9080: 669e1a97  bl #0x3180a18
0x06AD9084: 28008052  movz w8, #0x1
0x06AD9088: a8b22b39  strb w8, [x21, #0xaec]
0x06AD908C: c00240f9  ldr x0, [x22]
0x06AD9090: 049f1a97  bl #0x3180ca0
0x06AD9094: e1031faa  mov x1, xzr
0x06AD9098: f50300aa  mov x21, x0
0x06AD909C: 5805b097  bl #0x56da5fc
0x06AD90A0: 150600b4  cbz x21, #0x6ad9160
0x06AD90A4: b41200b9  str w20, [x21, #0x10]
0x06AD90A8: 601a40f9  ldr x0, [x19, #0x30]
0x06AD90AC: a00500b4  cbz x0, #0x6ad9160
0x06AD90B0: 095c0090  adrp x9, #0x7659000
0x06AD90B4: 296545f9  ldr x9, [x9, #0xac8]
0x06AD90B8: 0a1c40b9  ldr w10, [x0, #0x1c]
0x06AD90BC: 080840f9  ldr x8, [x0, #0x10]
0x06AD90C0: 290140f9  ldr x9, [x9]
0x06AD90C4: 4a050011  add w10, w10, #1
0x06AD90C8: 0a1c00b9  str w10, [x0, #0x1c]
0x06AD90CC: a80400b4  cbz x8, #0x6ad9160
0x06AD90D0: 0a1880b9  ldrsw x10, [x0, #0x18]
0x06AD90D4: 0b1940b9  ldr w11, [x8, #0x18]
0x06AD90D8: d76200f0  adrp x23, #0x7734000
0x06AD90DC: d66200f0  adrp x22, #0x7734000
0x06AD90E0: f78e42f9  ldr x23, [x23, #0x518]
0x06AD90E4: d69242f9  ldr x22, [x22, #0x520]
0x06AD90E8: 5f010b6b  cmp w10, w11
0x06AD90EC: c2000054  b.hs #0x6ad9104
0x06AD90F0: 49050011  add w9, w10, #1
0x06AD90F4: 08090a8b  add x8, x8, x10, lsl #2
0x06AD90F8: 091800b9  str w9, [x0, #0x18]
0x06AD90FC: 142100b9  str w20, [x8, #0x20]
0x06AD9100: 06000014  b #0x6ad9118
0x06AD9104: 281140f9  ldr x8, [x9, #0x20]
0x06AD9108: e103142a  mov w1, w20
0x06AD910C: 086140f9  ldr x8, [x8, #0xc0]
0x06AD9110: 023940f9  ldr x2, [x8, #0x70]
0x06AD9114: e1025597  bl #0x4019c98
0x06AD9118: e00240f9  ldr x0, [x23]
0x06AD911C: 731640f9  ldr x19, [x19, #0x28]
0x06AD9120: e09e1a97  bl #0x3180ca0
0x06AD9124: c20240f9  ldr x2, [x22]
0x06AD9128: e10315aa  mov x1, x21
0x06AD912C: e3031faa  mov x3, xzr
0x06AD9130: f40300aa  mov x20, x0
0x06AD9134: 0a136297  bl #0x435dd5c
0x06AD9138: 530100b4  cbz x19, #0x6ad9160
0x06AD913C: c86200f0  adrp x8, #0x7734000
0x06AD9140: 088942f9  ldr x8, [x8, #0x510]
0x06AD9144: e00313aa  mov x0, x19
0x06AD9148: e10314aa  mov x1, x20
0x06AD914C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD9150: 020140f9  ldr x2, [x8]
0x06AD9154: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD9158: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06AD915C: 904a6117  b #0x432bb9c
0x06AD9160: d39e1a97  bl #0x3180cac

; RVA 0x6AD916C | public void ResetClaimedExcitements() { }
; bytes=80 sha256=f606bd87135b21d850e915f255b70a3fe9089224e49ca784b6df915b5a757d6a status=arm64_complete_bound indexed_start=True
0x06AD916C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD9170: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD9174: 949200b0  adrp x20, #0x7d2a000
0x06AD9178: 88b66b39  ldrb w8, [x20, #0xaed]
0x06AD917C: f30300aa  mov x19, x0
0x06AD9180: c8000037  tbnz w8, #0, #0x6ad9198
0x06AD9184: 205d00d0  adrp x0, #0x767f000
0x06AD9188: 00c441f9  ldr x0, [x0, #0x388]
0x06AD918C: 239e1a97  bl #0x3180a18
0x06AD9190: 28008052  movz w8, #0x1
0x06AD9194: 88b62b39  strb w8, [x20, #0xaed]
0x06AD9198: 681a40f9  ldr x8, [x19, #0x30]
0x06AD919C: e80000b4  cbz x8, #0x6ad91b8
0x06AD91A0: 091d40b9  ldr w9, [x8, #0x1c]
0x06AD91A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD91A8: 29050011  add w9, w9, #1
0x06AD91AC: 1f250329  stp wzr, w9, [x8, #0x18]
0x06AD91B0: fe0742f8  ldr x30, [sp], #0x20
0x06AD91B4: c0035fd6  ret
0x06AD91B8: bd9e1a97  bl #0x3180cac

; RVA 0x6AD91BC | protected override void SubscribeToSignals() { }
; bytes=176 sha256=d73d69e0460ea58465e5ee4c46692fbff9a87ba2fc2ababa9c104fee072f38b8 status=arm64_complete_bound indexed_start=True
0x06AD91BC: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD91C0: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD91C4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD91C8: 949200b0  adrp x20, #0x7d2a000
0x06AD91CC: d66200f0  adrp x22, #0x7734000
0x06AD91D0: d56200f0  adrp x21, #0x7734000
0x06AD91D4: 88ba6b39  ldrb w8, [x20, #0xaee]
0x06AD91D8: d69642f9  ldr x22, [x22, #0x528]
0x06AD91DC: b59a42f9  ldr x21, [x21, #0x530]
0x06AD91E0: f30300aa  mov x19, x0
0x06AD91E4: 88010037  tbnz w8, #0, #0x6ad9214
0x06AD91E8: c06200f0  adrp x0, #0x7734000
0x06AD91EC: 009442f9  ldr x0, [x0, #0x528]
0x06AD91F0: 0a9e1a97  bl #0x3180a18
0x06AD91F4: c06200f0  adrp x0, #0x7734000
0x06AD91F8: 009842f9  ldr x0, [x0, #0x530]
0x06AD91FC: 079e1a97  bl #0x3180a18
0x06AD9200: c06200f0  adrp x0, #0x7734000
0x06AD9204: 009c42f9  ldr x0, [x0, #0x538]
0x06AD9208: 049e1a97  bl #0x3180a18
0x06AD920C: 28008052  movz w8, #0x1
0x06AD9210: 88ba2b39  strb w8, [x20, #0xaee]
0x06AD9214: e00313aa  mov x0, x19
0x06AD9218: e1031faa  mov x1, xzr
0x06AD921C: 1d67f797  bl #0x68b2e90
0x06AD9220: c00240f9  ldr x0, [x22]
0x06AD9224: 741240f9  ldr x20, [x19, #0x20]
0x06AD9228: 9e9e1a97  bl #0x3180ca0
0x06AD922C: a20240f9  ldr x2, [x21]
0x06AD9230: e10313aa  mov x1, x19
0x06AD9234: e3031faa  mov x3, xzr
0x06AD9238: f50300aa  mov x21, x0
0x06AD923C: e623a197  bl #0x53221d4
0x06AD9240: 540100b4  cbz x20, #0x6ad9268
0x06AD9244: c86200f0  adrp x8, #0x7734000
0x06AD9248: 089d42f9  ldr x8, [x8, #0x538]
0x06AD924C: e00314aa  mov x0, x20
0x06AD9250: e10315aa  mov x1, x21
0x06AD9254: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD9258: 020140f9  ldr x2, [x8]
0x06AD925C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD9260: fe0743f8  ldr x30, [sp], #0x30
0x06AD9264: 28304b17  b #0x3da5304
0x06AD9268: 919e1a97  bl #0x3180cac

; RVA 0x6AD926C | protected override void UnsubscribeFromSignals() { }
; bytes=176 sha256=a9bb15d24e8482740a9f12cbda89d26adc645bd1f4b70b2e6a283ad49a6180bb status=arm64_complete_bound indexed_start=True
0x06AD926C: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD9270: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD9274: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD9278: 949200b0  adrp x20, #0x7d2a000
0x06AD927C: d66200f0  adrp x22, #0x7734000
0x06AD9280: d56200f0  adrp x21, #0x7734000
0x06AD9284: 88be6b39  ldrb w8, [x20, #0xaef]
0x06AD9288: d69642f9  ldr x22, [x22, #0x528]
0x06AD928C: b59a42f9  ldr x21, [x21, #0x530]
0x06AD9290: f30300aa  mov x19, x0
0x06AD9294: 88010037  tbnz w8, #0, #0x6ad92c4
0x06AD9298: c06200f0  adrp x0, #0x7734000
0x06AD929C: 009442f9  ldr x0, [x0, #0x528]
0x06AD92A0: de9d1a97  bl #0x3180a18
0x06AD92A4: c06200f0  adrp x0, #0x7734000
0x06AD92A8: 009842f9  ldr x0, [x0, #0x530]
0x06AD92AC: db9d1a97  bl #0x3180a18
0x06AD92B0: c06200f0  adrp x0, #0x7734000
0x06AD92B4: 00a042f9  ldr x0, [x0, #0x540]
0x06AD92B8: d89d1a97  bl #0x3180a18
0x06AD92BC: 28008052  movz w8, #0x1
0x06AD92C0: 88be2b39  strb w8, [x20, #0xaef]
0x06AD92C4: e00313aa  mov x0, x19
0x06AD92C8: e1031faa  mov x1, xzr
0x06AD92CC: f266f797  bl #0x68b2e94
0x06AD92D0: c00240f9  ldr x0, [x22]
0x06AD92D4: 741240f9  ldr x20, [x19, #0x20]
0x06AD92D8: 729e1a97  bl #0x3180ca0
0x06AD92DC: a20240f9  ldr x2, [x21]
0x06AD92E0: e10313aa  mov x1, x19
0x06AD92E4: e3031faa  mov x3, xzr
0x06AD92E8: f50300aa  mov x21, x0
0x06AD92EC: ba23a197  bl #0x53221d4
0x06AD92F0: 540100b4  cbz x20, #0x6ad9318
0x06AD92F4: c86200f0  adrp x8, #0x7734000
0x06AD92F8: 08a142f9  ldr x8, [x8, #0x540]
0x06AD92FC: e00314aa  mov x0, x20
0x06AD9300: e10315aa  mov x1, x21
0x06AD9304: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD9308: 020140f9  ldr x2, [x8]
0x06AD930C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD9310: fe0743f8  ldr x30, [sp], #0x30
0x06AD9314: bd334b17  b #0x3da6208
0x06AD9318: 659e1a97  bl #0x3180cac

; RVA 0x6AD931C | private void OnProducerExcitementReceived(ProducerExcitementReceivedSignal signal) { }
; bytes=24 sha256=31b8f7a7f7f54e0a1c968636e82ce0ec56aa5f9673a335231dee3a76217be6ba status=arm64_complete_bound indexed_start=True
0x06AD931C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD9320: 810000b4  cbz x1, #0x6ad9330
0x06AD9324: 210840f9  ldr x1, [x1, #0x10]
0x06AD9328: fe0741f8  ldr x30, [sp], #0x10
0x06AD932C: aefeff17  b #0x6ad8de4
0x06AD9330: 5f9e1a97  bl #0x3180cac

; RVA 0x6AD9334 | private void SetVisibilityMode(int excitementClaimId, ExcitementVisibility visibility) { }
; bytes=104 sha256=992dc652a31f8ec1842e9ef795746419494b4218541a468602e07569ca532e85 status=arm64_complete_bound indexed_start=True
0x06AD9334: fe0f1df8  str x30, [sp, #-0x30]!
0x06AD9338: f65701a9  stp x22, x21, [sp, #0x10]
0x06AD933C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06AD9340: 969200b0  adrp x22, #0x7d2a000
0x06AD9344: c8c26b39  ldrb w8, [x22, #0xaf0]
0x06AD9348: f303022a  mov w19, w2
0x06AD934C: f403012a  mov w20, w1
0x06AD9350: f50300aa  mov x21, x0
0x06AD9354: c8000037  tbnz w8, #0, #0x6ad936c
0x06AD9358: c06200f0  adrp x0, #0x7734000
0x06AD935C: 00a442f9  ldr x0, [x0, #0x548]
0x06AD9360: ae9d1a97  bl #0x3180a18
0x06AD9364: 28008052  movz w8, #0x1
0x06AD9368: c8c22b39  strb w8, [x22, #0xaf0]
0x06AD936C: a01e40f9  ldr x0, [x21, #0x38]
0x06AD9370: 400100b4  cbz x0, #0x6ad9398
0x06AD9374: c86200f0  adrp x8, #0x7734000
0x06AD9378: 08a542f9  ldr x8, [x8, #0x548]
0x06AD937C: e103142a  mov w1, w20
0x06AD9380: e203132a  mov w2, w19
0x06AD9384: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06AD9388: 030140f9  ldr x3, [x8]
0x06AD938C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06AD9390: fe0743f8  ldr x30, [sp], #0x30
0x06AD9394: 1f578d17  b #0x4e2f010
0x06AD9398: 459e1a97  bl #0x3180cac

; RVA 0x6AD8DE4 | private void AddExcitementInternal(ProducerExcitementDataResponse stateExcitement) { }
; bytes=288 sha256=af86e25980e28c3fac0c6847491dc52cd98304b0172b8ace4bc191c839407864 status=arm64_complete_bound indexed_start=True
0x06AD8DE4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06AD8DE8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD8DEC: 959200d0  adrp x21, #0x7d2a000
0x06AD8DF0: a8c66b39  ldrb w8, [x21, #0xaf1]
0x06AD8DF4: f30301aa  mov x19, x1
0x06AD8DF8: f40300aa  mov x20, x0
0x06AD8DFC: e8010037  tbnz w8, #0, #0x6ad8e38
0x06AD8E00: e0620090  adrp x0, #0x7734000
0x06AD8E04: 006842f9  ldr x0, [x0, #0x4d0]
0x06AD8E08: 049f1a97  bl #0x3180a18
0x06AD8E0C: e0620090  adrp x0, #0x7734000
0x06AD8E10: 006c42f9  ldr x0, [x0, #0x4d8]
0x06AD8E14: 019f1a97  bl #0x3180a18
0x06AD8E18: e0620090  adrp x0, #0x7734000
0x06AD8E1C: 007042f9  ldr x0, [x0, #0x4e0]
0x06AD8E20: fe9e1a97  bl #0x3180a18
0x06AD8E24: e0620090  adrp x0, #0x7734000
0x06AD8E28: 007442f9  ldr x0, [x0, #0x4e8]
0x06AD8E2C: fb9e1a97  bl #0x3180a18
0x06AD8E30: 28008052  movz w8, #0x1
0x06AD8E34: a8c62b39  strb w8, [x21, #0xaf1]
0x06AD8E38: 801640f9  ldr x0, [x20, #0x28]
0x06AD8E3C: 200600b4  cbz x0, #0x6ad8f00
0x06AD8E40: e8620090  adrp x8, #0x7734000
0x06AD8E44: 086d42f9  ldr x8, [x8, #0x4d8]
0x06AD8E48: 010140f9  ldr x1, [x8]
0x06AD8E4C: 8d4a6197  bl #0x432b880
0x06AD8E50: 330500b4  cbz x19, #0x6ad8ef4
0x06AD8E54: 681240f9  ldr x8, [x19, #0x20]
0x06AD8E58: 080200b4  cbz x8, #0x6ad8e98
0x06AD8E5C: 69624039  ldrb w9, [x19, #0x18]
0x06AD8E60: c9010034  cbz w9, #0x6ad8e98
0x06AD8E64: 011140b9  ldr w1, [x8, #0x10]
0x06AD8E68: 621e40b9  ldr w2, [x19, #0x1c]
0x06AD8E6C: e00314aa  mov x0, x20
0x06AD8E70: 31010094  bl #0x6ad9334
0x06AD8E74: 801640f9  ldr x0, [x20, #0x28]
0x06AD8E78: 400400b4  cbz x0, #0x6ad8f00
0x06AD8E7C: e8620090  adrp x8, #0x7734000
0x06AD8E80: 086942f9  ldr x8, [x8, #0x4d0]
0x06AD8E84: e10313aa  mov x1, x19
0x06AD8E88: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD8E8C: 020140f9  ldr x2, [x8]
0x06AD8E90: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD8E94: 234a6117  b #0x432b720
0x06AD8E98: 751640f9  ldr x21, [x19, #0x28]
0x06AD8E9C: d50200b4  cbz x21, #0x6ad8ef4
0x06AD8EA0: e8620090  adrp x8, #0x7734000
0x06AD8EA4: 931240f9  ldr x19, [x20, #0x20]
0x06AD8EA8: 087142f9  ldr x8, [x8, #0x4e0]
0x06AD8EAC: 000140f9  ldr x0, [x8]
0x06AD8EB0: 7c9f1a97  bl #0x3180ca0
0x06AD8EB4: e1031faa  mov x1, xzr
0x06AD8EB8: f40300aa  mov x20, x0
0x06AD8EBC: d005b097  bl #0x56da5fc
0x06AD8EC0: e00314aa  mov x0, x20
0x06AD8EC4: 150c01f8  str x21, [x0, #0x10]!
0x06AD8EC8: e10315aa  mov x1, x21
0x06AD8ECC: be9e1a97  bl #0x31809c4
0x06AD8ED0: 930100b4  cbz x19, #0x6ad8f00
0x06AD8ED4: e8620090  adrp x8, #0x7734000
0x06AD8ED8: 087542f9  ldr x8, [x8, #0x4e8]
0x06AD8EDC: e00313aa  mov x0, x19
0x06AD8EE0: e10314aa  mov x1, x20
0x06AD8EE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD8EE8: 020140f9  ldr x2, [x8]
0x06AD8EEC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD8EF0: 9f2f4b17  b #0x3da4d6c
0x06AD8EF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD8EF8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06AD8EFC: c0035fd6  ret
0x06AD8F00: 6b9f1a97  bl #0x3180cac

; RVA 0x6AD939C | public void .ctor() { }
; bytes=388 sha256=bf0e3d13570fc01fe843906aa7736f4f94a558703951fb9dbd7ac68c8da4ae26 status=arm64_complete_bound indexed_start=True
0x06AD939C: fe0f1af8  str x30, [sp, #-0x60]!
0x06AD93A0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x06AD93A4: fa6702a9  stp x26, x25, [sp, #0x20]
0x06AD93A8: f85f03a9  stp x24, x23, [sp, #0x30]
0x06AD93AC: f65704a9  stp x22, x21, [sp, #0x40]
0x06AD93B0: f44f05a9  stp x20, x19, [sp, #0x50]
0x06AD93B4: 9b9200b0  adrp x27, #0x7d2a000
0x06AD93B8: 3c6000d0  adrp x28, #0x76df000
0x06AD93BC: 346000d0  adrp x20, #0x76df000
0x06AD93C0: 1a5c0090  adrp x26, #0x7659000
0x06AD93C4: 195c0090  adrp x25, #0x7659000
0x06AD93C8: d86200f0  adrp x24, #0x7734000
0x06AD93CC: d76200f0  adrp x23, #0x7734000
0x06AD93D0: d66200f0  adrp x22, #0x7734000
0x06AD93D4: d56200f0  adrp x21, #0x7734000
0x06AD93D8: 9c8b42f9  ldr x28, [x28, #0x510]
0x06AD93DC: 948e42f9  ldr x20, [x20, #0x518]
0x06AD93E0: 5a0b45f9  ldr x26, [x26, #0xa10]
0x06AD93E4: 68cb6b39  ldrb w8, [x27, #0xaf2]
0x06AD93E8: 390f45f9  ldr x25, [x25, #0xa18]
0x06AD93EC: 18ab42f9  ldr x24, [x24, #0x550]
0x06AD93F0: f7ae42f9  ldr x23, [x23, #0x558]
0x06AD93F4: d6b242f9  ldr x22, [x22, #0x560]
0x06AD93F8: b5b642f9  ldr x21, [x21, #0x568]
0x06AD93FC: f30300aa  mov x19, x0
0x06AD9400: 68030037  tbnz w8, #0, #0x6ad946c
0x06AD9404: c06200f0  adrp x0, #0x7734000
0x06AD9408: 00b442f9  ldr x0, [x0, #0x568]
0x06AD940C: 839d1a97  bl #0x3180a18
0x06AD9410: c06200f0  adrp x0, #0x7734000
0x06AD9414: 00ac42f9  ldr x0, [x0, #0x558]
0x06AD9418: 809d1a97  bl #0x3180a18
0x06AD941C: c06200f0  adrp x0, #0x7734000
0x06AD9420: 00b042f9  ldr x0, [x0, #0x560]
0x06AD9424: 7d9d1a97  bl #0x3180a18
0x06AD9428: c06200f0  adrp x0, #0x7734000
0x06AD942C: 00a842f9  ldr x0, [x0, #0x550]
0x06AD9430: 7a9d1a97  bl #0x3180a18
0x06AD9434: 005c0090  adrp x0, #0x7659000
0x06AD9438: 000c45f9  ldr x0, [x0, #0xa18]
0x06AD943C: 779d1a97  bl #0x3180a18
0x06AD9440: 005c0090  adrp x0, #0x7659000
0x06AD9444: 000845f9  ldr x0, [x0, #0xa10]
0x06AD9448: 749d1a97  bl #0x3180a18
0x06AD944C: 206000d0  adrp x0, #0x76df000
0x06AD9450: 008c42f9  ldr x0, [x0, #0x518]
0x06AD9454: 719d1a97  bl #0x3180a18
0x06AD9458: 206000d0  adrp x0, #0x76df000
0x06AD945C: 008842f9  ldr x0, [x0, #0x510]
0x06AD9460: 6e9d1a97  bl #0x3180a18
0x06AD9464: 28008052  movz w8, #0x1
0x06AD9468: 68cb2b39  strb w8, [x27, #0xaf2]
0x06AD946C: 800340f9  ldr x0, [x28]
0x06AD9470: 0c9e1a97  bl #0x3180ca0
0x06AD9474: 810240f9  ldr x1, [x20]
0x06AD9478: f40300aa  mov x20, x0
0x06AD947C: 59486197  bl #0x432b5e0
0x06AD9480: e00313aa  mov x0, x19
0x06AD9484: 148c02f8  str x20, [x0, #0x28]!
0x06AD9488: e10314aa  mov x1, x20
0x06AD948C: 4e9d1a97  bl #0x31809c4
0x06AD9490: 400340f9  ldr x0, [x26]
0x06AD9494: 039e1a97  bl #0x3180ca0
0x06AD9498: 210340f9  ldr x1, [x25]
0x06AD949C: f40300aa  mov x20, x0
0x06AD94A0: e9ff5497  bl #0x4019444
0x06AD94A4: e00313aa  mov x0, x19
0x06AD94A8: 140c03f8  str x20, [x0, #0x30]!
0x06AD94AC: e10314aa  mov x1, x20
0x06AD94B0: 459d1a97  bl #0x31809c4
0x06AD94B4: 000340f9  ldr x0, [x24]
0x06AD94B8: fa9d1a97  bl #0x3180ca0
0x06AD94BC: e10240f9  ldr x1, [x23]
0x06AD94C0: f40300aa  mov x20, x0
0x06AD94C4: 5f538d97  bl #0x4e2e240
0x06AD94C8: e00313aa  mov x0, x19
0x06AD94CC: 148c03f8  str x20, [x0, #0x38]!
0x06AD94D0: e10314aa  mov x1, x20
0x06AD94D4: 3c9d1a97  bl #0x31809c4
0x06AD94D8: c00240f9  ldr x0, [x22]
0x06AD94DC: f19d1a97  bl #0x3180ca0
0x06AD94E0: a10240f9  ldr x1, [x21]
0x06AD94E4: f40300aa  mov x20, x0
0x06AD94E8: 1d6e8d97  bl #0x4e34d5c
0x06AD94EC: e00313aa  mov x0, x19
0x06AD94F0: 140c04f8  str x20, [x0, #0x40]!
0x06AD94F4: e10314aa  mov x1, x20
0x06AD94F8: 339d1a97  bl #0x31809c4
0x06AD94FC: e00313aa  mov x0, x19
0x06AD9500: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06AD9504: f65744a9  ldp x22, x21, [sp, #0x40]
0x06AD9508: f85f43a9  ldp x24, x23, [sp, #0x30]
0x06AD950C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x06AD9510: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x06AD9514: e1031faa  mov x1, xzr
0x06AD9518: fe0746f8  ldr x30, [sp], #0x60
0x06AD951C: 8fcaf917  b #0x694bf58

