; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26022 Merger.MergeBoard.Components.TimeLimitedActivationComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C53C | public long get_TimerDuration() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9C53C: 000040f9  ldr x0, [x0]
0x06A9C540: c0035fd6  ret

; RVA 0x6A9C544 | public void set_TimerDuration(long value) { }
; bytes=8 sha256=bc7d7bfe1862508f235acee5544afc3a7c13a06c79ca1e67d8ba71c403df8071 status=arm64_complete_bound indexed_start=True
0x06A9C544: 010000f9  str x1, [x0]
0x06A9C548: c0035fd6  ret

; RVA 0x6A9C54C | public long get_ExpirationTimeStamp() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x06A9C54C: 000440f9  ldr x0, [x0, #8]
0x06A9C550: c0035fd6  ret

; RVA 0x6A9C554 | public void set_ExpirationTimeStamp(long value) { }
; bytes=8 sha256=ab203c9f462e14bd4e997db2460790fd1a22f16c02c4fcef69fd84fcdc395371 status=arm64_complete_bound indexed_start=True
0x06A9C554: 010400f9  str x1, [x0, #8]
0x06A9C558: c0035fd6  ret

; RVA 0x6A9C55C | public long get_ActivationTimeStamp() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9C55C: 000840f9  ldr x0, [x0, #0x10]
0x06A9C560: c0035fd6  ret

; RVA 0x6A9C564 | public void set_ActivationTimeStamp(long value) { }
; bytes=8 sha256=303da3301898a95e86f40a0e005bc411a134e5d7bc97e044157001606ef01a2a status=arm64_complete_bound indexed_start=True
0x06A9C564: 010800f9  str x1, [x0, #0x10]
0x06A9C568: c0035fd6  ret

; RVA 0x6A9C56C | public bool get_HasExpired() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06A9C56C: 00604039  ldrb w0, [x0, #0x18]
0x06A9C570: c0035fd6  ret

; RVA 0x6A9C574 | public void set_HasExpired(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x06A9C574: 28000012  and w8, w1, #1
0x06A9C578: 08600039  strb w8, [x0, #0x18]
0x06A9C57C: c0035fd6  ret

