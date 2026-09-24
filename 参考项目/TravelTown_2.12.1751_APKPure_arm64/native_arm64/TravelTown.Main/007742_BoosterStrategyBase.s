; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7742 Merger.Boosters.Strategies.BoosterStrategyBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BF1B0 | public void TryActivate() { }
; bytes=168 sha256=a8f05476bc1e0a55189b8920be2cfcc760ce64c228e8a75dd47ef1733903d069 status=arm64_complete_bound indexed_start=True
0x065BF1B0: fe0f1ef8  str x30, [sp, #-0x20]!
0x065BF1B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x065BF1B8: 54bb0090  adrp x20, #0x7d27000
0x065BF1BC: 88326439  ldrb w8, [x20, #0x90c]
0x065BF1C0: f30300aa  mov x19, x0
0x065BF1C4: c8000037  tbnz w8, #0, #0x65bf1dc
0x065BF1C8: 408900b0  adrp x0, #0x76e8000
0x065BF1CC: 003446f9  ldr x0, [x0, #0xc68]
0x065BF1D0: 12062f97  bl #0x3180a18
0x065BF1D4: 28008052  movz w8, #0x1
0x065BF1D8: 88322439  strb w8, [x20, #0x90c]
0x065BF1DC: 731640f9  ldr x19, [x19, #0x28]
0x065BF1E0: b30300b4  cbz x19, #0x65bf254
0x065BF1E4: 4a8900b0  adrp x10, #0x76e8000
0x065BF1E8: 680240f9  ldr x8, [x19]
0x065BF1EC: 4a3546f9  ldr x10, [x10, #0xc68]
0x065BF1F0: 095d4279  ldrh w9, [x8, #0x12e]
0x065BF1F4: 410140f9  ldr x1, [x10]
0x065BF1F8: 290100b4  cbz x9, #0x65bf21c
0x065BF1FC: 0a5940f9  ldr x10, [x8, #0xb0]
0x065BF200: 4a210091  add x10, x10, #8
0x065BF204: 4b815ff8  ldur x11, [x10, #-8]
0x065BF208: 7f0101eb  cmp x11, x1
0x065BF20C: 00010054  b.eq #0x65bf22c
0x065BF210: 290500f1  subs x9, x9, #1
0x065BF214: 4a410091  add x10, x10, #0x10
0x065BF218: 61ffff54  b.ne #0x65bf204
0x065BF21C: a2008052  movz w2, #0x5
0x065BF220: e00313aa  mov x0, x19
0x065BF224: 3b5e2e97  bl #0x3156b10
0x065BF228: 05000014  b #0x65bf23c
0x065BF22C: 490140b9  ldr w9, [x10]
0x065BF230: 29150011  add w9, w9, #5
0x065BF234: 08d1298b  add x8, x8, w9, sxtw #4
0x065BF238: 00e10491  add x0, x8, #0x138
0x065BF23C: 030840a9  ldp x3, x2, [x0]
0x065BF240: e00313aa  mov x0, x19
0x065BF244: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065BF248: e1031f2a  mov w1, wzr
0x065BF24C: fe0742f8  ldr x30, [sp], #0x20
0x065BF250: 60001fd6  br x3
0x065BF254: 96062f97  bl #0x3180cac

; RVA 0x65BF258 | public virtual void TryDeactivate(string uuid) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x065BF258: c0035fd6  ret

; RVA 0x65BF25C | private void Zenject.IInitializable.Initialize() { }
; bytes=16 sha256=c80606d01f4f1667ce90a8d7db4a02edf129ac228676187fba14d29096a8aefc status=arm64_complete_bound indexed_start=True
0x065BF25C: 080040f9  ldr x8, [x0]
0x065BF260: 025d41f9  ldr x2, [x8, #0x2b8]
0x065BF264: 016141f9  ldr x1, [x8, #0x2c0]
0x065BF268: 40001fd6  br x2

; RVA 0x65BF26C | private void System.IDisposable.Dispose() { }
; bytes=8 sha256=883d97c03195cd2e1430fb764966c3478bfddbda1438d449dc32406d10a1725c status=arm64_complete_bound indexed_start=True
0x065BF26C: e1031faa  mov x1, xzr
0x065BF270: 0acf0b14  b #0x68b2e98

; RVA 0x65BF274 | protected virtual void InitializeStrategy() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x065BF274: c0035fd6  ret

; RVA 0x65BF278 | protected void .ctor() { }
; bytes=8 sha256=58213292c0ca0938f266312ae69ecaee902859b8bb27befa997b293532bac2fb status=arm64_complete_bound indexed_start=True
0x065BF278: e1031faa  mov x1, xzr
0x065BF27C: 20cf0b14  b #0x68b2efc

