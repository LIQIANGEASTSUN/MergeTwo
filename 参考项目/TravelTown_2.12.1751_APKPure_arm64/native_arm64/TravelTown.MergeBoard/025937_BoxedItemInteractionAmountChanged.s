; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25937 Merger.MergeBoard.Data.TickResultArgs.BoxedItemInteractionAmountChanged
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A218 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A218: 000840f9  ldr x0, [x0, #0x10]
0x06A9A21C: c0035fd6  ret

; RVA 0x6A9A220 | public void set_Entity(Entity value) { }
; bytes=8 sha256=c03d6eb8f718f017a80bb1e02e61ead5f6f372a0635de649f66f00185a42b229 status=arm64_complete_bound indexed_start=True
0x06A9A220: 010c01f8  str x1, [x0, #0x10]!
0x06A9A224: e8991b17  b #0x31809c4

; RVA 0x6A9A228 | public int get_MergeItemsLeft() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9A228: 001840b9  ldr w0, [x0, #0x18]
0x06A9A22C: c0035fd6  ret

; RVA 0x6A9A230 | public void set_MergeItemsLeft(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9A230: 011800b9  str w1, [x0, #0x18]
0x06A9A234: c0035fd6  ret

; RVA 0x6A9A238 | public string get_InteractionItemId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A238: 001040f9  ldr x0, [x0, #0x20]
0x06A9A23C: c0035fd6  ret

; RVA 0x6A9A240 | public void set_InteractionItemId(string value) { }
; bytes=8 sha256=1bb15668bd0808c39f8ed852cf2592ba016eca1ef88bc7b1e490bdb3b5183a7b status=arm64_complete_bound indexed_start=True
0x06A9A240: 010c02f8  str x1, [x0, #0x20]!
0x06A9A244: e0991b17  b #0x31809c4

; RVA 0x6A9A248 | public string get_InteractionResourceType() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9A248: 001440f9  ldr x0, [x0, #0x28]
0x06A9A24C: c0035fd6  ret

; RVA 0x6A9A250 | public void set_InteractionResourceType(string value) { }
; bytes=8 sha256=127b207d71823415f263367af672ad344d3440405b197d8adeaee7cf64be812f status=arm64_complete_bound indexed_start=True
0x06A9A250: 018c02f8  str x1, [x0, #0x28]!
0x06A9A254: dc991b17  b #0x31809c4

; RVA 0x6A9A258 | public string get_ConsumerItemId() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A9A258: 001840f9  ldr x0, [x0, #0x30]
0x06A9A25C: c0035fd6  ret

; RVA 0x6A9A260 | public void set_ConsumerItemId(string value) { }
; bytes=8 sha256=4d6d17b0b7bd024dba6aafccaefb8e199726249791f1261e992e4a797f7dd766 status=arm64_complete_bound indexed_start=True
0x06A9A260: 010c03f8  str x1, [x0, #0x30]!
0x06A9A264: d8991b17  b #0x31809c4

; RVA 0x6A9A268 | public int get_ConsumerPositionIndex() { }
; bytes=8 sha256=70b6226cdde2aa2e19c7cef1812dc4f3cd14b63d0b93bca2e70ec7210fcf097f status=arm64_complete_bound indexed_start=True
0x06A9A268: 003840b9  ldr w0, [x0, #0x38]
0x06A9A26C: c0035fd6  ret

; RVA 0x6A9A270 | public void set_ConsumerPositionIndex(int value) { }
; bytes=8 sha256=23e2a2078bd41e84b46906ac0e13db3743cb4f934a32dac307e79ba21bc620b5 status=arm64_complete_bound indexed_start=True
0x06A9A270: 013800b9  str w1, [x0, #0x38]
0x06A9A274: c0035fd6  ret

; RVA 0x6A9A278 | public string get_InteractionReason() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x06A9A278: 002040f9  ldr x0, [x0, #0x40]
0x06A9A27C: c0035fd6  ret

; RVA 0x6A9A280 | public void set_InteractionReason(string value) { }
; bytes=8 sha256=9823d5248980d3741a9df5518edb050d05c840028fd0b68444f08ba435b9bc25 status=arm64_complete_bound indexed_start=True
0x06A9A280: 010c04f8  str x1, [x0, #0x40]!
0x06A9A284: d0991b17  b #0x31809c4

; RVA 0x6A9A288 | public void .ctor() { }
; bytes=8 sha256=94247cd08075ab776a9241a1f0173492e79c35b3f36365b06449e3a16360efa5 status=arm64_complete_bound indexed_start=True
0x06A9A288: e1031faa  mov x1, xzr
0x06A9A28C: dc00b117  b #0x56da5fc

