; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1092 MergeEngine.ECS.Components.Items.TimeLimitedActivationComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FDFC0 | public long get_TimerDuration() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x068FDFC0: 001040f9  ldr x0, [x0, #0x20]
0x068FDFC4: c0035fd6  ret

; RVA 0x68FDFC8 | public void set_TimerDuration(long value) { }
; bytes=8 sha256=e2049e634203975b3ab577fcedd5fcebf7eb16547f254b69f38a7efd4d28f8c7 status=arm64_complete_bound indexed_start=True
0x068FDFC8: 011000f9  str x1, [x0, #0x20]
0x068FDFCC: c0035fd6  ret

; RVA 0x68FDFD0 | public long get_ExpirationTimeStamp() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x068FDFD0: 001440f9  ldr x0, [x0, #0x28]
0x068FDFD4: c0035fd6  ret

; RVA 0x68FDFD8 | public void set_ExpirationTimeStamp(long value) { }
; bytes=8 sha256=fb47a7abf4cba0cd5311b8b425d77a409859dd7b4fd92dbf5d99d451f425b80c status=arm64_complete_bound indexed_start=True
0x068FDFD8: 011400f9  str x1, [x0, #0x28]
0x068FDFDC: c0035fd6  ret

; RVA 0x68FDFE0 | public long get_ActivationTimeStamp() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x068FDFE0: 001840f9  ldr x0, [x0, #0x30]
0x068FDFE4: c0035fd6  ret

; RVA 0x68FDFE8 | public void set_ActivationTimeStamp(long value) { }
; bytes=8 sha256=6215e1bbd3c8ac0311d5a5d6e67e46e033efc47a193976238e4ff03101d8acf6 status=arm64_complete_bound indexed_start=True
0x068FDFE8: 011800f9  str x1, [x0, #0x30]
0x068FDFEC: c0035fd6  ret

; RVA 0x68FDFF0 | public bool get_HasExpired() { }
; bytes=8 sha256=6770a96f4998ce8df43beb8e497cf1a56ff280479bbf45eeb6d10b8b1fe08600 status=arm64_complete_bound indexed_start=True
0x068FDFF0: 00e04039  ldrb w0, [x0, #0x38]
0x068FDFF4: c0035fd6  ret

; RVA 0x68FDFF8 | public void set_HasExpired(bool value) { }
; bytes=12 sha256=ad4db97ee2c8b47615142569a0603a73f36cb9cd1a44e165cf1c86be0bdb34a9 status=arm64_complete_bound indexed_start=True
0x068FDFF8: 28000012  and w8, w1, #1
0x068FDFFC: 08e00039  strb w8, [x0, #0x38]
0x068FE000: c0035fd6  ret

; RVA 0x68FE004 | public bool get_WasCreatedInPreviousSession() { }
; bytes=8 sha256=7a756a9b8e42ed0e2657a638ad6069959baba9084de4d2cf5279e570574329df status=arm64_complete_bound indexed_start=True
0x068FE004: 00e44039  ldrb w0, [x0, #0x39]
0x068FE008: c0035fd6  ret

; RVA 0x68FE00C | public void set_WasCreatedInPreviousSession(bool value) { }
; bytes=12 sha256=977d87c56c99234786fdcc913bb5c343755520a8df74735ae9e34ec5760431f6 status=arm64_complete_bound indexed_start=True
0x068FE00C: 28000012  and w8, w1, #1
0x068FE010: 08e40039  strb w8, [x0, #0x39]
0x068FE014: c0035fd6  ret

; RVA 0x68FE018 | public ExtraData get_ExtraData() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x068FE018: 002040f9  ldr x0, [x0, #0x40]
0x068FE01C: c0035fd6  ret

; RVA 0x68FE020 | public void set_ExtraData(ExtraData value) { }
; bytes=8 sha256=20fba782a46076df4961c4d9e5772e7da47709917b4c706dbfdcd54fee5e2ef9 status=arm64_complete_bound indexed_start=True
0x068FE020: 010c04f8  str x1, [x0, #0x40]!
0x068FE024: 680a2217  b #0x31809c4

; RVA 0x68FE028 | public TimeLimitedAnalyticsData get_AnalyticsData() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x068FE028: 002440f9  ldr x0, [x0, #0x48]
0x068FE02C: c0035fd6  ret

; RVA 0x68FE030 | public void set_AnalyticsData(TimeLimitedAnalyticsData value) { }
; bytes=8 sha256=b84e4d5c893fd21216dbbc1ce130e0cfa9dddc83b56f05e7a9e450df84e6e14c status=arm64_complete_bound indexed_start=True
0x068FE030: 018c04f8  str x1, [x0, #0x48]!
0x068FE034: 640a2217  b #0x31809c4

; RVA 0x68FE038 | public bool get_ShouldIgnoreSendingData() { }
; bytes=8 sha256=eaa8f5bab95d1713110a3774aeaebf65c0af3605085769e01b2fdfa404ba8cfd status=arm64_complete_bound indexed_start=True
0x068FE038: 00404139  ldrb w0, [x0, #0x50]
0x068FE03C: c0035fd6  ret

; RVA 0x68FE040 | public void set_ShouldIgnoreSendingData(bool value) { }
; bytes=12 sha256=c5177acf6df3d1e45a8c58677795df0e04c5bd5fa7037d9fc82cedc5cbbeccdc status=arm64_complete_bound indexed_start=True
0x068FE040: 28000012  and w8, w1, #1
0x068FE044: 08400139  strb w8, [x0, #0x50]
0x068FE048: c0035fd6  ret

; RVA 0x68FE04C | public bool get_NeedProcessCombiningProducer() { }
; bytes=8 sha256=ba8e74d89bf338ce7f44cd67c102589f5b60c0c01750e8f2f91877dbb0c0d801 status=arm64_complete_bound indexed_start=True
0x068FE04C: 00444139  ldrb w0, [x0, #0x51]
0x068FE050: c0035fd6  ret

; RVA 0x68FE054 | public void set_NeedProcessCombiningProducer(bool value) { }
; bytes=12 sha256=0f9bd1e0d68ffcdcf8c8614840f1067021e384bbd03a57f76a867252f5c62992 status=arm64_complete_bound indexed_start=True
0x068FE054: 28000012  and w8, w1, #1
0x068FE058: 08440139  strb w8, [x0, #0x51]
0x068FE05C: c0035fd6  ret

; RVA 0x68FE060 | public bool get_SendForTheFirstTime() { }
; bytes=8 sha256=e92168681de9d1e4201052aacce17718d3025fdeadf3b96deaaad91d56181dbc status=arm64_complete_bound indexed_start=True
0x068FE060: 00484139  ldrb w0, [x0, #0x52]
0x068FE064: c0035fd6  ret

; RVA 0x68FE068 | public void set_SendForTheFirstTime(bool value) { }
; bytes=12 sha256=e8402386060e97fc60cf96226977a8e3e62cdc9d78fb6f98d9d49ff4f9a72b17 status=arm64_complete_bound indexed_start=True
0x068FE068: 28000012  and w8, w1, #1
0x068FE06C: 08480139  strb w8, [x0, #0x52]
0x068FE070: c0035fd6  ret

; RVA 0x68FE074 | public void .ctor(Entity entity) { }
; bytes=48 sha256=974ef0eac9a6a5ad4dc099698b9cbf23dfa107960dc9d5aead080df901246f29 status=arm64_complete_bound indexed_start=True
0x068FE074: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FE078: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FE07C: f30301aa  mov x19, x1
0x068FE080: e1031faa  mov x1, xzr
0x068FE084: f40300aa  mov x20, x0
0x068FE088: 5d71b797  bl #0x56da5fc
0x068FE08C: 930e01f8  str x19, [x20, #0x10]!
0x068FE090: e00314aa  mov x0, x20
0x068FE094: e10313aa  mov x1, x19
0x068FE098: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FE09C: fe0742f8  ldr x30, [sp], #0x20
0x068FE0A0: 490a2217  b #0x31809c4

