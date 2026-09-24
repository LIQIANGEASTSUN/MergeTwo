; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33295 Merger.MergeBoardQueue.Services.MergeBoardItemRewardDequeueStrategy
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A57630 | public bool CanHandle(ItemMultiple itemMultiple) { }
; bytes=212 sha256=add473d27bba5fca1cb466c97f5bdef528b34885c2245e4849c1e8233f10e301 status=arm64_complete_bound indexed_start=True
0x06A57630: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A57634: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A57638: 959600f0  adrp x21, #0x7d2a000
0x06A5763C: a8fe5739  ldrb w8, [x21, #0x5ff]
0x06A57640: f40301aa  mov x20, x1
0x06A57644: f30300aa  mov x19, x0
0x06A57648: c8000037  tbnz w8, #0, #0x6a57660
0x06A5764C: 406300b0  adrp x0, #0x76c0000
0x06A57650: 008847f9  ldr x0, [x0, #0xf10]
0x06A57654: f1a41c97  bl #0x3180a18
0x06A57658: 28008052  movz w8, #0x1
0x06A5765C: a8fe1739  strb w8, [x21, #0x5ff]
0x06A57660: 140500b4  cbz x20, #0x6a57700
0x06A57664: 880240f9  ldr x8, [x20]
0x06A57668: 730a40f9  ldr x19, [x19, #0x10]
0x06A5766C: e00314aa  mov x0, x20
0x06A57670: 098541f9  ldr x9, [x8, #0x308]
0x06A57674: 018941f9  ldr x1, [x8, #0x310]
0x06A57678: 20013fd6  blr x9
0x06A5767C: 330400b4  cbz x19, #0x6a57700
0x06A57680: 4a6300b0  adrp x10, #0x76c0000
0x06A57684: 680240f9  ldr x8, [x19]
0x06A57688: 4a8947f9  ldr x10, [x10, #0xf10]
0x06A5768C: f40300aa  mov x20, x0
0x06A57690: 095d4279  ldrh w9, [x8, #0x12e]
0x06A57694: 410140f9  ldr x1, [x10]
0x06A57698: 290100b4  cbz x9, #0x6a576bc
0x06A5769C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A576A0: 4a210091  add x10, x10, #8
0x06A576A4: 4b815ff8  ldur x11, [x10, #-8]
0x06A576A8: 7f0101eb  cmp x11, x1
0x06A576AC: 00010054  b.eq #0x6a576cc
0x06A576B0: 290500f1  subs x9, x9, #1
0x06A576B4: 4a410091  add x10, x10, #0x10
0x06A576B8: 61ffff54  b.ne #0x6a576a4
0x06A576BC: a2008052  movz w2, #0x5
0x06A576C0: e00313aa  mov x0, x19
0x06A576C4: 13fd1b97  bl #0x3156b10
0x06A576C8: 05000014  b #0x6a576dc
0x06A576CC: 490140b9  ldr w9, [x10]
0x06A576D0: 29150011  add w9, w9, #5
0x06A576D4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A576D8: 00e10491  add x0, x8, #0x138
0x06A576DC: 080840a9  ldp x8, x2, [x0]
0x06A576E0: e00313aa  mov x0, x19
0x06A576E4: e10314aa  mov x1, x20
0x06A576E8: 00013fd6  blr x8
0x06A576EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A576F0: 1f0000f1  cmp x0, #0
0x06A576F4: e0079f1a  cset w0, ne
0x06A576F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A576FC: c0035fd6  ret
0x06A57700: 6ba51c97  bl #0x3180cac

; RVA 0x6A57704 | public bool TrySpawnDirectlyToBoard(ItemMultiple itemMultiple, List<Tuple<Vector3, IRewardViewData>> rewardsPositions, ResourceSource source, List<Tuple<Vector3, IRewardViewData>> flyRewardsToFill, Dictionary<IRewardViewData, RewardAnimationTargetData> overrideTargetDict) { }
; bytes=424 sha256=ee4fe0c74a5fc149ae7d2fb86b19b839f1cbce60b669559262364e7f89902312 status=arm64_complete_bound indexed_start=True
0x06A57704: fe0f1cf8  str x30, [sp, #-0x40]!
0x06A57708: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A5770C: f65702a9  stp x22, x21, [sp, #0x20]
0x06A57710: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A57714: 949600f0  adrp x20, #0x7d2a000
0x06A57718: 88025839  ldrb w8, [x20, #0x600]
0x06A5771C: f50301aa  mov x21, x1
0x06A57720: f30300aa  mov x19, x0
0x06A57724: e8010037  tbnz w8, #0, #0x6a57760
0x06A57728: c06600b0  adrp x0, #0x7730000
0x06A5772C: 007841f9  ldr x0, [x0, #0x2f0]
0x06A57730: baa41c97  bl #0x3180a18
0x06A57734: 406300b0  adrp x0, #0x76c0000
0x06A57738: 008847f9  ldr x0, [x0, #0xf10]
0x06A5773C: b7a41c97  bl #0x3180a18
0x06A57740: 206100f0  adrp x0, #0x767e000
0x06A57744: 00a442f9  ldr x0, [x0, #0x548]
0x06A57748: b4a41c97  bl #0x3180a18
0x06A5774C: c06600b0  adrp x0, #0x7730000
0x06A57750: 007c41f9  ldr x0, [x0, #0x2f8]
0x06A57754: b1a41c97  bl #0x3180a18
0x06A57758: 28008052  movz w8, #0x1
0x06A5775C: 88021839  strb w8, [x20, #0x600]
0x06A57760: e00313aa  mov x0, x19
0x06A57764: 52000094  bl #0x6a578ac
0x06A57768: 60000036  tbz w0, #0, #0x6a57774
0x06A5776C: e0031f2a  mov w0, wzr
0x06A57770: 49000014  b #0x6a57894
0x06A57774: b50900b4  cbz x21, #0x6a578a8
0x06A57778: a80240f9  ldr x8, [x21]
0x06A5777C: 740a40f9  ldr x20, [x19, #0x10]
0x06A57780: e00315aa  mov x0, x21
0x06A57784: 098541f9  ldr x9, [x8, #0x308]
0x06A57788: 018941f9  ldr x1, [x8, #0x310]
0x06A5778C: 20013fd6  blr x9
0x06A57790: d40800b4  cbz x20, #0x6a578a8
0x06A57794: 4a6300b0  adrp x10, #0x76c0000
0x06A57798: 880240f9  ldr x8, [x20]
0x06A5779C: 4a8947f9  ldr x10, [x10, #0xf10]
0x06A577A0: f50300aa  mov x21, x0
0x06A577A4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A577A8: 410140f9  ldr x1, [x10]
0x06A577AC: 290100b4  cbz x9, #0x6a577d0
0x06A577B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A577B4: 4a210091  add x10, x10, #8
0x06A577B8: 4b815ff8  ldur x11, [x10, #-8]
0x06A577BC: 7f0101eb  cmp x11, x1
0x06A577C0: 00010054  b.eq #0x6a577e0
0x06A577C4: 290500f1  subs x9, x9, #1
0x06A577C8: 4a410091  add x10, x10, #0x10
0x06A577CC: 61ffff54  b.ne #0x6a577b8
0x06A577D0: a2008052  movz w2, #0x5
0x06A577D4: e00314aa  mov x0, x20
0x06A577D8: cefc1b97  bl #0x3156b10
0x06A577DC: 05000014  b #0x6a577f0
0x06A577E0: 490140b9  ldr w9, [x10]
0x06A577E4: 29150011  add w9, w9, #5
0x06A577E8: 08d1298b  add x8, x8, w9, sxtw #4
0x06A577EC: 00e10491  add x0, x8, #0x138
0x06A577F0: 080840a9  ldp x8, x2, [x0]
0x06A577F4: e00314aa  mov x0, x20
0x06A577F8: e10315aa  mov x1, x21
0x06A577FC: 00013fd6  blr x8
0x06A57800: a00400b4  cbz x0, #0x6a57894
0x06A57804: c86600b0  adrp x8, #0x7730000
0x06A57808: 730e40f9  ldr x19, [x19, #0x18]
0x06A5780C: 087d41f9  ldr x8, [x8, #0x2f8]
0x06A57810: f50300aa  mov x21, x0
0x06A57814: 000140f9  ldr x0, [x8]
0x06A57818: 22a51c97  bl #0x3180ca0
0x06A5781C: e1031faa  mov x1, xzr
0x06A57820: f40300aa  mov x20, x0
0x06A57824: 760bb297  bl #0x56da5fc
0x06A57828: 140400b4  cbz x20, #0x6a578a8
0x06A5782C: 386100f0  adrp x24, #0x767e000
0x06A57830: b60a40f9  ldr x22, [x21, #0x10]
0x06A57834: 18a742f9  ldr x24, [x24, #0x548]
0x06A57838: e00316aa  mov x0, x22
0x06A5783C: 010340f9  ldr x1, [x24]
0x06A57840: d4a41c97  bl #0x3180b90
0x06A57844: f70314aa  mov x23, x20
0x06A57848: e00e01f8  str x0, [x23, #0x10]!
0x06A5784C: 010340f9  ldr x1, [x24]
0x06A57850: e00316aa  mov x0, x22
0x06A57854: cfa41c97  bl #0x3180b90
0x06A57858: e10300aa  mov x1, x0
0x06A5785C: e00317aa  mov x0, x23
0x06A57860: 59a41c97  bl #0x31809c4
0x06A57864: e00314aa  mov x0, x20
0x06A57868: 158c01f8  str x21, [x0, #0x18]!
0x06A5786C: e10315aa  mov x1, x21
0x06A57870: 55a41c97  bl #0x31809c4
0x06A57874: b30100b4  cbz x19, #0x6a578a8
0x06A57878: c86600b0  adrp x8, #0x7730000
0x06A5787C: 087941f9  ldr x8, [x8, #0x2f0]
0x06A57880: e00313aa  mov x0, x19
0x06A57884: e10314aa  mov x1, x20
0x06A57888: 020140f9  ldr x2, [x8]
0x06A5788C: d1074697  bl #0x3bd97d0
0x06A57890: 20008052  movz w0, #0x1
0x06A57894: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A57898: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A5789C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A578A0: fe0744f8  ldr x30, [sp], #0x40
0x06A578A4: c0035fd6  ret
0x06A578A8: 01a51c97  bl #0x3180cac

; RVA 0x6A578AC | private bool IsBoardFull() { }
; bytes=328 sha256=9bc62bc44056f651c567b16b6477fd89d8c0c80ed048faf331c07898ff7f89c0 status=arm64_complete_bound indexed_start=True
0x06A578AC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A578B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A578B4: 949600f0  adrp x20, #0x7d2a000
0x06A578B8: 88065839  ldrb w8, [x20, #0x601]
0x06A578BC: f30300aa  mov x19, x0
0x06A578C0: 88010037  tbnz w8, #0, #0x6a578f0
0x06A578C4: c0660090  adrp x0, #0x772f000
0x06A578C8: 005043f9  ldr x0, [x0, #0x6a0]
0x06A578CC: 53a41c97  bl #0x3180a18
0x06A578D0: 406300d0  adrp x0, #0x76c1000
0x06A578D4: 002047f9  ldr x0, [x0, #0xe40]
0x06A578D8: 50a41c97  bl #0x3180a18
0x06A578DC: 406300b0  adrp x0, #0x76c0000
0x06A578E0: 00dc43f9  ldr x0, [x0, #0x7b8]
0x06A578E4: 4da41c97  bl #0x3180a18
0x06A578E8: 28008052  movz w8, #0x1
0x06A578EC: 88061839  strb w8, [x20, #0x601]
0x06A578F0: 741240f9  ldr x20, [x19, #0x20]
0x06A578F4: f40700b4  cbz x20, #0x6a579f0
0x06A578F8: 4a6300d0  adrp x10, #0x76c1000
0x06A578FC: 880240f9  ldr x8, [x20]
0x06A57900: 4a2147f9  ldr x10, [x10, #0xe40]
0x06A57904: 095d4279  ldrh w9, [x8, #0x12e]
0x06A57908: 410140f9  ldr x1, [x10]
0x06A5790C: 290100b4  cbz x9, #0x6a57930
0x06A57910: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A57914: 4a210091  add x10, x10, #8
0x06A57918: 4b815ff8  ldur x11, [x10, #-8]
0x06A5791C: 7f0101eb  cmp x11, x1
0x06A57920: 00010054  b.eq #0x6a57940
0x06A57924: 290500f1  subs x9, x9, #1
0x06A57928: 4a410091  add x10, x10, #0x10
0x06A5792C: 61ffff54  b.ne #0x6a57918
0x06A57930: c2008052  movz w2, #0x6
0x06A57934: e00314aa  mov x0, x20
0x06A57938: 76fc1b97  bl #0x3156b10
0x06A5793C: 05000014  b #0x6a57950
0x06A57940: 490140b9  ldr w9, [x10]
0x06A57944: 29190011  add w9, w9, #6
0x06A57948: 08d1298b  add x8, x8, w9, sxtw #4
0x06A5794C: 00e10491  add x0, x8, #0x138
0x06A57950: 080440a9  ldp x8, x1, [x0]
0x06A57954: e00314aa  mov x0, x20
0x06A57958: 00013fd6  blr x8
0x06A5795C: 741640f9  ldr x20, [x19, #0x28]
0x06A57960: 940400b4  cbz x20, #0x6a579f0
0x06A57964: 4a6300b0  adrp x10, #0x76c0000
0x06A57968: 880240f9  ldr x8, [x20]
0x06A5796C: 4add43f9  ldr x10, [x10, #0x7b8]
0x06A57970: d5660090  adrp x21, #0x772f000
0x06A57974: f303002a  mov w19, w0
0x06A57978: 095d4279  ldrh w9, [x8, #0x12e]
0x06A5797C: 410140f9  ldr x1, [x10]
0x06A57980: b55243f9  ldr x21, [x21, #0x6a0]
0x06A57984: 290100b4  cbz x9, #0x6a579a8
0x06A57988: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A5798C: 4a210091  add x10, x10, #8
0x06A57990: 4b815ff8  ldur x11, [x10, #-8]
0x06A57994: 7f0101eb  cmp x11, x1
0x06A57998: 00010054  b.eq #0x6a579b8
0x06A5799C: 290500f1  subs x9, x9, #1
0x06A579A0: 4a410091  add x10, x10, #0x10
0x06A579A4: 61ffff54  b.ne #0x6a57990
0x06A579A8: 22008052  movz w2, #0x1
0x06A579AC: e00314aa  mov x0, x20
0x06A579B0: 58fc1b97  bl #0x3156b10
0x06A579B4: 05000014  b #0x6a579c8
0x06A579B8: 490140b9  ldr w9, [x10]
0x06A579BC: 29050011  add w9, w9, #1
0x06A579C0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A579C4: 00e10491  add x0, x8, #0x138
0x06A579C8: 080440a9  ldp x8, x1, [x0]
0x06A579CC: e00314aa  mov x0, x20
0x06A579D0: 00013fd6  blr x8
0x06A579D4: a10240f9  ldr x1, [x21]
0x06A579D8: d08a4797  bl #0x3c3a518
0x06A579DC: 7f02006b  cmp w19, w0
0x06A579E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A579E4: e0179f1a  cset w0, eq
0x06A579E8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A579EC: c0035fd6  ret
0x06A579F0: afa41c97  bl #0x3180cac

; RVA 0x6A579FC | public void .ctor() { }
; bytes=8 sha256=13576ece90f20b1cdb93ff4f6dbc9728f0fa363071113f2d50e7b3f7b9ee69b9 status=arm64_complete_bound indexed_start=True
0x06A579FC: e1031faa  mov x1, xzr
0x06A57A00: ff0ab217  b #0x56da5fc

