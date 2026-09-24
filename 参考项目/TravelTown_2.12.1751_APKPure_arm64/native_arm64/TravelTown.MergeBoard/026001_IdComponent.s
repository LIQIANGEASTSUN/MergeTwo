; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26001 Merger.MergeBoard.Components.IdComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BEE4 | public string get_Id() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9BEE4: 000040f9  ldr x0, [x0]
0x06A9BEE8: c0035fd6  ret

; RVA 0x6A9BEEC | public void set_Id(string value) { }
; bytes=8 sha256=1887969daf641c70b5b42bdc49c183908c0d9e5d50d1ae52c2a4d6fe132b1ccb status=arm64_complete_bound indexed_start=True
0x06A9BEEC: 010000f9  str x1, [x0]
0x06A9BEF0: b5921b17  b #0x31809c4

; RVA 0x6A9BEF4 | public string get_Uuid() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x06A9BEF4: 000440f9  ldr x0, [x0, #8]
0x06A9BEF8: c0035fd6  ret

; RVA 0x6A9BEFC | public void set_Uuid(string value) { }
; bytes=8 sha256=3c38152a55bd7941ff3fdfa04ed4506b418ddc54add970c82d4f765729a730a0 status=arm64_complete_bound indexed_start=True
0x06A9BEFC: 018c00f8  str x1, [x0, #8]!
0x06A9BF00: b1921b17  b #0x31809c4

; RVA 0x6A9BF04 | public long get_CreatedTimestamp() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9BF04: 000840f9  ldr x0, [x0, #0x10]
0x06A9BF08: c0035fd6  ret

; RVA 0x6A9BF0C | public void set_CreatedTimestamp(long value) { }
; bytes=8 sha256=303da3301898a95e86f40a0e005bc411a134e5d7bc97e044157001606ef01a2a status=arm64_complete_bound indexed_start=True
0x06A9BF0C: 010800f9  str x1, [x0, #0x10]
0x06A9BF10: c0035fd6  ret

; RVA 0x6A9BF14 | public long get_MergedTimestamp() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9BF14: 000c40f9  ldr x0, [x0, #0x18]
0x06A9BF18: c0035fd6  ret

; RVA 0x6A9BF1C | public void set_MergedTimestamp(long value) { }
; bytes=8 sha256=eccec631fb26ef52ae81894fbca9f413e7a8019826502520a44f42b576b016f9 status=arm64_complete_bound indexed_start=True
0x06A9BF1C: 010c00f9  str x1, [x0, #0x18]
0x06A9BF20: c0035fd6  ret

; RVA 0x6A9BF24 | public ItemOrigin get_Origin() { }
; bytes=8 sha256=1f31d5ff0e22c7c2e3b958e4e0186cb71a2e67a614d53dd8d744824fcd4b1d53 status=arm64_complete_bound indexed_start=True
0x06A9BF24: 002040b9  ldr w0, [x0, #0x20]
0x06A9BF28: c0035fd6  ret

; RVA 0x6A9BF2C | public void set_Origin(ItemOrigin value) { }
; bytes=8 sha256=f5044c26609fdbec3c7736771b22cfdf72c42bcc825f0051ef500d8f88aaa62e status=arm64_complete_bound indexed_start=True
0x06A9BF2C: 012000b9  str w1, [x0, #0x20]
0x06A9BF30: c0035fd6  ret

; RVA 0x6A9BF34 | public long get_QueueAddedTimestamp() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9BF34: 001440f9  ldr x0, [x0, #0x28]
0x06A9BF38: c0035fd6  ret

; RVA 0x6A9BF3C | public void set_QueueAddedTimestamp(long value) { }
; bytes=8 sha256=fb47a7abf4cba0cd5311b8b425d77a409859dd7b4fd92dbf5d99d451f425b80c status=arm64_complete_bound indexed_start=True
0x06A9BF3C: 011400f9  str x1, [x0, #0x28]
0x06A9BF40: c0035fd6  ret

; RVA 0x6A95F98 | public void .ctor(string id, ItemOrigin origin) { }
; bytes=272 sha256=c783ba4694d6465594cd99f947446eaca8617ccfb089b41a4729ac58f261be58 status=arm64_complete_bound indexed_start=True
0x06A95F98: ff4301d1  sub sp, sp, #0x50
0x06A95F9C: fe1300f9  str x30, [sp, #0x20]
0x06A95FA0: f65703a9  stp x22, x21, [sp, #0x30]
0x06A95FA4: f44f04a9  stp x20, x19, [sp, #0x40]
0x06A95FA8: b69400b0  adrp x22, #0x7d2a000
0x06A95FAC: c8366139  ldrb w8, [x22, #0x84d]
0x06A95FB0: f403022a  mov w20, w2
0x06A95FB4: f50301aa  mov x21, x1
0x06A95FB8: f30300aa  mov x19, x0
0x06A95FBC: c8000037  tbnz w8, #0, #0x6a95fd4
0x06A95FC0: 605e00b0  adrp x0, #0x7662000
0x06A95FC4: 00cc41f9  ldr x0, [x0, #0x398]
0x06A95FC8: 94aa1b97  bl #0x3180a18
0x06A95FCC: 28008052  movz w8, #0x1
0x06A95FD0: c8362139  strb w8, [x22, #0x84d]
0x06A95FD4: e00313aa  mov x0, x19
0x06A95FD8: e10315aa  mov x1, x21
0x06A95FDC: ff7f00a9  stp xzr, xzr, [sp]
0x06A95FE0: 750200f9  str x21, [x19]
0x06A95FE4: 78aa1b97  bl #0x31809c4
0x06A95FE8: e0031faa  mov x0, xzr
0x06A95FEC: afe0af97  bl #0x568e2a8
0x06A95FF0: e00701a9  stp x0, x1, [sp, #0x10]
0x06A95FF4: e0430091  add x0, sp, #0x10
0x06A95FF8: e1031faa  mov x1, xzr
0x06A95FFC: 10e9af97  bl #0x569043c
0x06A96000: e10300aa  mov x1, x0
0x06A96004: f50313aa  mov x21, x19
0x06A96008: a18e00f8  str x1, [x21, #8]!
0x06A9600C: e00315aa  mov x0, x21
0x06A96010: 6daa1b97  bl #0x31809c4
0x06A96014: 9f060071  cmp w20, #1
0x06A96018: bffe00a9  stp xzr, xzr, [x21, #8]
0x06A9601C: b41a00b9  str w20, [x21, #0x18]
0x06A96020: 80030054  b.eq #0x6a96090
0x06A96024: 745e0090  adrp x20, #0x7662000
0x06A96028: 94ce41f9  ldr x20, [x20, #0x398]
0x06A9602C: 800240f9  ldr x0, [x20]
0x06A96030: 08e040b9  ldr w8, [x0, #0xe0]
0x06A96034: 48000035  cbnz w8, #0x6a9603c
0x06A96038: d5aa1b97  bl #0x3180b8c
0x06A9603C: e0031faa  mov x0, xzr
0x06A96040: de8eaf97  bl #0x5679bb8
0x06A96044: e00700a9  stp x0, x1, [sp]
0x06A96048: e0030091  mov x0, sp
0x06A9604C: e1031faa  mov x1, xzr
0x06A96050: 7e96af97  bl #0x567ba48
0x06A96054: 682240b9  ldr w8, [x19, #0x20]
0x06A96058: 600a00f9  str x0, [x19, #0x10]
0x06A9605C: 1f090071  cmp w8, #2
0x06A96060: 81010054  b.ne #0x6a96090
0x06A96064: 800240f9  ldr x0, [x20]
0x06A96068: 08e040b9  ldr w8, [x0, #0xe0]
0x06A9606C: 48000035  cbnz w8, #0x6a96074
0x06A96070: c7aa1b97  bl #0x3180b8c
0x06A96074: e0031faa  mov x0, xzr
0x06A96078: d08eaf97  bl #0x5679bb8
0x06A9607C: e00700a9  stp x0, x1, [sp]
0x06A96080: e0030091  mov x0, sp
0x06A96084: e1031faa  mov x1, xzr
0x06A96088: 7096af97  bl #0x567ba48
0x06A9608C: 600e00f9  str x0, [x19, #0x18]
0x06A96090: 7f1600f9  str xzr, [x19, #0x28]
0x06A96094: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06A96098: f65743a9  ldp x22, x21, [sp, #0x30]
0x06A9609C: fe1340f9  ldr x30, [sp, #0x20]
0x06A960A0: ff430191  add sp, sp, #0x50
0x06A960A4: c0035fd6  ret

