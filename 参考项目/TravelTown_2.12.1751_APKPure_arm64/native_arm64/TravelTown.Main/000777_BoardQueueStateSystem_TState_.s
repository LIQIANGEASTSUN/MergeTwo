; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 777 MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<TState>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1A7A8 | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$InitializeSystem
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___InitializeSystem (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, const MethodInfo_4C1A7A8* method);
; bytes=180 sha256=8374b8e2f490106665ef1d02212de63c4cc0097608a1e149e627e5ccbd33e46f status=arm64_complete_bound indexed_start=True
0x04C1A7A8: fe0f1df8  str x30, [sp, #-0x30]!
0x04C1A7AC: f65701a9  stp x22, x21, [sp, #0x10]
0x04C1A7B0: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C1A7B4: 15880190  adrp x21, #0x7d1a000
0x04C1A7B8: a8567c39  ldrb w8, [x21, #0xf15]
0x04C1A7BC: f40301aa  mov x20, x1
0x04C1A7C0: f30300aa  mov x19, x0
0x04C1A7C4: 28010037  tbnz w8, #0, #0x4c1a7e8
0x04C1A7C8: a0510190  adrp x0, #0x764e000
0x04C1A7CC: 00ac43f9  ldr x0, [x0, #0x758]
0x04C1A7D0: 92989597  bl #0x3180a18
0x04C1A7D4: 205301d0  adrp x0, #0x7680000
0x04C1A7D8: 008042f9  ldr x0, [x0, #0x500]
0x04C1A7DC: 8f989597  bl #0x3180a18
0x04C1A7E0: 28008052  movz w8, #0x1
0x04C1A7E4: a8563c39  strb w8, [x21, #0xf15]
0x04C1A7E8: 930300b4  cbz x19, #0x4c1a858
0x04C1A7EC: 881240f9  ldr x8, [x20, #0x20]
0x04C1A7F0: b6510190  adrp x22, #0x764e000
0x04C1A7F4: e00313aa  mov x0, x19
0x04C1A7F8: 086140f9  ldr x8, [x8, #0xc0]
0x04C1A7FC: 010140f9  ldr x1, [x8]
0x04C1A800: d6ae43f9  ldr x22, [x22, #0x758]
0x04C1A804: 1aaae497  bl #0x454506c
0x04C1A808: c00240f9  ldr x0, [x22]
0x04C1A80C: 751640f9  ldr x21, [x19, #0x28]
0x04C1A810: 24999597  bl #0x3180ca0
0x04C1A814: 881240f9  ldr x8, [x20, #0x20]
0x04C1A818: e10313aa  mov x1, x19
0x04C1A81C: e3031faa  mov x3, xzr
0x04C1A820: f40300aa  mov x20, x0
0x04C1A824: 086140f9  ldr x8, [x8, #0xc0]
0x04C1A828: 020540f9  ldr x2, [x8, #8]
0x04C1A82C: c14b2794  bl #0x55ed730
0x04C1A830: 550100b4  cbz x21, #0x4c1a858
0x04C1A834: 285301d0  adrp x8, #0x7680000
0x04C1A838: 088142f9  ldr x8, [x8, #0x500]
0x04C1A83C: e00315aa  mov x0, x21
0x04C1A840: e10314aa  mov x1, x20
0x04C1A844: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C1A848: 020140f9  ldr x2, [x8]
0x04C1A84C: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C1A850: fe0743f8  ldr x30, [sp], #0x30
0x04C1A854: bd2ac617  b #0x3da5348
0x04C1A858: 15999597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1A85C | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$DisposeSystem
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___DisposeSystem (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, const MethodInfo_4C1A85C* method);
; bytes=180 sha256=0062e09b9225602d86d298d046ded85ebf867127ae27eb49dded544c231339af status=arm64_complete_bound indexed_start=True
0x04C1A85C: fe0f1df8  str x30, [sp, #-0x30]!
0x04C1A860: f65701a9  stp x22, x21, [sp, #0x10]
0x04C1A864: f44f02a9  stp x20, x19, [sp, #0x20]
0x04C1A868: 15880190  adrp x21, #0x7d1a000
0x04C1A86C: a85a7c39  ldrb w8, [x21, #0xf16]
0x04C1A870: f30301aa  mov x19, x1
0x04C1A874: f40300aa  mov x20, x0
0x04C1A878: 28010037  tbnz w8, #0, #0x4c1a89c
0x04C1A87C: a0510190  adrp x0, #0x764e000
0x04C1A880: 00ac43f9  ldr x0, [x0, #0x758]
0x04C1A884: 65989597  bl #0x3180a18
0x04C1A888: 205301d0  adrp x0, #0x7680000
0x04C1A88C: 008442f9  ldr x0, [x0, #0x508]
0x04C1A890: 62989597  bl #0x3180a18
0x04C1A894: 28008052  movz w8, #0x1
0x04C1A898: a85a3c39  strb w8, [x21, #0xf16]
0x04C1A89C: 940300b4  cbz x20, #0x4c1a90c
0x04C1A8A0: a8510190  adrp x8, #0x764e000
0x04C1A8A4: 08ad43f9  ldr x8, [x8, #0x758]
0x04C1A8A8: 951640f9  ldr x21, [x20, #0x28]
0x04C1A8AC: 000140f9  ldr x0, [x8]
0x04C1A8B0: fc989597  bl #0x3180ca0
0x04C1A8B4: 681240f9  ldr x8, [x19, #0x20]
0x04C1A8B8: e10314aa  mov x1, x20
0x04C1A8BC: e3031faa  mov x3, xzr
0x04C1A8C0: f60300aa  mov x22, x0
0x04C1A8C4: 086140f9  ldr x8, [x8, #0xc0]
0x04C1A8C8: 020540f9  ldr x2, [x8, #8]
0x04C1A8CC: 994b2794  bl #0x55ed730
0x04C1A8D0: f50100b4  cbz x21, #0x4c1a90c
0x04C1A8D4: 285301d0  adrp x8, #0x7680000
0x04C1A8D8: 088542f9  ldr x8, [x8, #0x508]
0x04C1A8DC: e00315aa  mov x0, x21
0x04C1A8E0: e10316aa  mov x1, x22
0x04C1A8E4: 020140f9  ldr x2, [x8]
0x04C1A8E8: 592ec697  bl #0x3da624c
0x04C1A8EC: 681240f9  ldr x8, [x19, #0x20]
0x04C1A8F0: e00314aa  mov x0, x20
0x04C1A8F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04C1A8F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x04C1A8FC: 086140f9  ldr x8, [x8, #0xc0]
0x04C1A900: 010940f9  ldr x1, [x8, #0x10]
0x04C1A904: fe0743f8  ldr x30, [sp], #0x30
0x04C1A908: faa9e417  b #0x45450f0
0x04C1A90C: e8989597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1A910 | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$OnBoardSwitched
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___OnBoardSwitched (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, const MethodInfo_4C1A910* method);
; bytes=92 sha256=8839df43a5a90488057be6003e5ef70dc10a3bf4aabc0b160d76a3014330c23c status=arm64_complete_bound indexed_start=True
0x04C1A910: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C1A914: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C1A918: 14880190  adrp x20, #0x7d1a000
0x04C1A91C: 885e7c39  ldrb w8, [x20, #0xf17]
0x04C1A920: f30300aa  mov x19, x0
0x04C1A924: c8000037  tbnz w8, #0, #0x4c1a93c
0x04C1A928: 205301d0  adrp x0, #0x7680000
0x04C1A92C: 008842f9  ldr x0, [x0, #0x510]
0x04C1A930: 3a989597  bl #0x3180a18
0x04C1A934: 28008052  movz w8, #0x1
0x04C1A938: 885e3c39  strb w8, [x20, #0xf17]
0x04C1A93C: 730100b4  cbz x19, #0x4c1a968
0x04C1A940: 285301d0  adrp x8, #0x7680000
0x04C1A944: 088942f9  ldr x8, [x8, #0x510]
0x04C1A948: e00313aa  mov x0, x19
0x04C1A94C: 010140f9  ldr x1, [x8]
0x04C1A950: eb6fc697  bl #0x3db68fc
0x04C1A954: a00000b4  cbz x0, #0x4c1a968
0x04C1A958: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C1A95C: e1031faa  mov x1, xzr
0x04C1A960: fe0742f8  ldr x30, [sp], #0x20
0x04C1A964: d2a57314  b #0x69040ac
0x04C1A968: d1989597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1A96C | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$LoadState
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___LoadState (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, Il2CppObject* boardQueueBackendState, const MethodInfo_4C1A96C* method);
; bytes=360 sha256=8f5da171208b12dea782359c694abe1faecfd3c2ed4534ab27d69b1b68b726fc status=arm64_complete_bound indexed_start=True
0x04C1A96C: fe0f1cf8  str x30, [sp, #-0x40]!
0x04C1A970: f85f01a9  stp x24, x23, [sp, #0x10]
0x04C1A974: f65702a9  stp x22, x21, [sp, #0x20]
0x04C1A978: f44f03a9  stp x20, x19, [sp, #0x30]
0x04C1A97C: 16880190  adrp x22, #0x7d1a000
0x04C1A980: c8627c39  ldrb w8, [x22, #0xf18]
0x04C1A984: f30302aa  mov x19, x2
0x04C1A988: f50301aa  mov x21, x1
0x04C1A98C: f40300aa  mov x20, x0
0x04C1A990: 28010037  tbnz w8, #0, #0x4c1a9b4
0x04C1A994: 205301d0  adrp x0, #0x7680000
0x04C1A998: 008c42f9  ldr x0, [x0, #0x518]
0x04C1A99C: 1f989597  bl #0x3180a18
0x04C1A9A0: 205301d0  adrp x0, #0x7680000
0x04C1A9A4: 008842f9  ldr x0, [x0, #0x510]
0x04C1A9A8: 1c989597  bl #0x3180a18
0x04C1A9AC: 28008052  movz w8, #0x1
0x04C1A9B0: c8623c39  strb w8, [x22, #0xf18]
0x04C1A9B4: f50500b4  cbz x21, #0x4c1aa70
0x04C1A9B8: 880240f9  ldr x8, [x20]
0x04C1A9BC: e00314aa  mov x0, x20
0x04C1A9C0: 090d41f9  ldr x9, [x8, #0x218]
0x04C1A9C4: 011141f9  ldr x1, [x8, #0x220]
0x04C1A9C8: 20013fd6  blr x9
0x04C1A9CC: 20050036  tbz w0, #0, #0x4c1aa70
0x04C1A9D0: 285301d0  adrp x8, #0x7680000
0x04C1A9D4: 088942f9  ldr x8, [x8, #0x510]
0x04C1A9D8: e00314aa  mov x0, x20
0x04C1A9DC: 010140f9  ldr x1, [x8]
0x04C1A9E0: c76fc697  bl #0x3db68fc
0x04C1A9E4: 681240f9  ldr x8, [x19, #0x20]
0x04C1A9E8: a10e40f9  ldr x1, [x21, #0x18]
0x04C1A9EC: f50300aa  mov x21, x0
0x04C1A9F0: e00314aa  mov x0, x20
0x04C1A9F4: 086140f9  ldr x8, [x8, #0xc0]
0x04C1A9F8: 021940f9  ldr x2, [x8, #0x30]
0x04C1A9FC: 36000094  bl #0x4c1aad4
0x04C1AA00: 950600b4  cbz x21, #0x4c1aad0
0x04C1AA04: f60300aa  mov x22, x0
0x04C1AA08: e00315aa  mov x0, x21
0x04C1AA0C: e10316aa  mov x1, x22
0x04C1AA10: e2031faa  mov x2, xzr
0x04C1AA14: 62a67394  bl #0x690439c
0x04C1AA18: 600400b4  cbz x0, #0x4c1aaa4
0x04C1AA1C: 983a40f9  ldr x24, [x20, #0x70]
0x04C1AA20: 980500b4  cbz x24, #0x4c1aad0
0x04C1AA24: 2a5301d0  adrp x10, #0x7680000
0x04C1AA28: 080340f9  ldr x8, [x24]
0x04C1AA2C: 4a8d42f9  ldr x10, [x10, #0x518]
0x04C1AA30: f70300aa  mov x23, x0
0x04C1AA34: 095d4279  ldrh w9, [x8, #0x12e]
0x04C1AA38: 410140f9  ldr x1, [x10]
0x04C1AA3C: 290100b4  cbz x9, #0x4c1aa60
0x04C1AA40: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C1AA44: 4a210091  add x10, x10, #8
0x04C1AA48: 4b815ff8  ldur x11, [x10, #-8]
0x04C1AA4C: 7f0101eb  cmp x11, x1
0x04C1AA50: a0010054  b.eq #0x4c1aa84
0x04C1AA54: 290500f1  subs x9, x9, #1
0x04C1AA58: 4a410091  add x10, x10, #0x10
0x04C1AA5C: 61ffff54  b.ne #0x4c1aa48
0x04C1AA60: 22008052  movz w2, #0x1
0x04C1AA64: e00318aa  mov x0, x24
0x04C1AA68: 2af09497  bl #0x3156b10
0x04C1AA6C: 0a000014  b #0x4c1aa94
0x04C1AA70: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04C1AA74: f65742a9  ldp x22, x21, [sp, #0x20]
0x04C1AA78: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04C1AA7C: fe0744f8  ldr x30, [sp], #0x40
0x04C1AA80: c0035fd6  ret
0x04C1AA84: 490140b9  ldr w9, [x10]
0x04C1AA88: 29050011  add w9, w9, #1
0x04C1AA8C: 08d1298b  add x8, x8, w9, sxtw #4
0x04C1AA90: 00e10491  add x0, x8, #0x138
0x04C1AA94: 080840a9  ldp x8, x2, [x0]
0x04C1AA98: e00318aa  mov x0, x24
0x04C1AA9C: e10317aa  mov x1, x23
0x04C1AAA0: 00013fd6  blr x8
0x04C1AAA4: 681240f9  ldr x8, [x19, #0x20]
0x04C1AAA8: e00314aa  mov x0, x20
0x04C1AAAC: e10315aa  mov x1, x21
0x04C1AAB0: e20316aa  mov x2, x22
0x04C1AAB4: 086140f9  ldr x8, [x8, #0xc0]
0x04C1AAB8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x04C1AABC: f65742a9  ldp x22, x21, [sp, #0x20]
0x04C1AAC0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x04C1AAC4: 031d40f9  ldr x3, [x8, #0x38]
0x04C1AAC8: fe0744f8  ldr x30, [sp], #0x40
0x04C1AACC: 8771bb17  b #0x3af70e8
0x04C1AAD0: 77989597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1AAD4 | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$ConvertToQueuedItem
; native signature: System_Collections_Generic_List_QueuedItem__o* MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___ConvertToQueuedItem (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, System_Collections_Generic_List_BackendBoardQueueItem__o* backendBoardQueueItems, const MethodInfo_4C1AAD4* method);
; bytes=720 sha256=718ba586276db9a65e27b32d56d172f7f031d90573e79de1f9e67cc7932f5d3f status=arm64_complete_bound indexed_start=True
0x04C1AAD4: ff8302d1  sub sp, sp, #0xa0
0x04C1AAD8: fd7b04a9  stp x29, x30, [sp, #0x40]
0x04C1AADC: fc6f05a9  stp x28, x27, [sp, #0x50]
0x04C1AAE0: fa6706a9  stp x26, x25, [sp, #0x60]
0x04C1AAE4: f85f07a9  stp x24, x23, [sp, #0x70]
0x04C1AAE8: f65708a9  stp x22, x21, [sp, #0x80]
0x04C1AAEC: f44f09a9  stp x20, x19, [sp, #0x90]
0x04C1AAF0: 13880190  adrp x19, #0x7d1a000
0x04C1AAF4: 68667c39  ldrb w8, [x19, #0xf19]
0x04C1AAF8: f50301aa  mov x21, x1
0x04C1AAFC: f40300aa  mov x20, x0
0x04C1AB00: c8030037  tbnz w8, #0, #0x4c1ab78
0x04C1AB04: 205301d0  adrp x0, #0x7680000
0x04C1AB08: 009042f9  ldr x0, [x0, #0x520]
0x04C1AB0C: c3979597  bl #0x3180a18
0x04C1AB10: 205301d0  adrp x0, #0x7680000
0x04C1AB14: 009442f9  ldr x0, [x0, #0x528]
0x04C1AB18: c0979597  bl #0x3180a18
0x04C1AB1C: 205301d0  adrp x0, #0x7680000
0x04C1AB20: 009842f9  ldr x0, [x0, #0x530]
0x04C1AB24: bd979597  bl #0x3180a18
0x04C1AB28: 205301d0  adrp x0, #0x7680000
0x04C1AB2C: 009c42f9  ldr x0, [x0, #0x538]
0x04C1AB30: ba979597  bl #0x3180a18
0x04C1AB34: 205301d0  adrp x0, #0x7680000
0x04C1AB38: 00a042f9  ldr x0, [x0, #0x540]
0x04C1AB3C: b7979597  bl #0x3180a18
0x04C1AB40: 205301d0  adrp x0, #0x7680000
0x04C1AB44: 00a442f9  ldr x0, [x0, #0x548]
0x04C1AB48: b4979597  bl #0x3180a18
0x04C1AB4C: 205301d0  adrp x0, #0x7680000
0x04C1AB50: 00a842f9  ldr x0, [x0, #0x550]
0x04C1AB54: b1979597  bl #0x3180a18
0x04C1AB58: 205301d0  adrp x0, #0x7680000
0x04C1AB5C: 00ac42f9  ldr x0, [x0, #0x558]
0x04C1AB60: ae979597  bl #0x3180a18
0x04C1AB64: 205301d0  adrp x0, #0x7680000
0x04C1AB68: 00b042f9  ldr x0, [x0, #0x560]
0x04C1AB6C: ab979597  bl #0x3180a18
0x04C1AB70: 28008052  movz w8, #0x1
0x04C1AB74: 68663c39  strb w8, [x19, #0xf19]
0x04C1AB78: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x04C1AB7C: ff1b00f9  str xzr, [sp, #0x30]
0x04C1AB80: 950c00b4  cbz x21, #0x4c1ad10
0x04C1AB84: 285301d0  adrp x8, #0x7680000
0x04C1AB88: 08ad42f9  ldr x8, [x8, #0x558]
0x04C1AB8C: 335301d0  adrp x19, #0x7680000
0x04C1AB90: 375301d0  adrp x23, #0x7680000
0x04C1AB94: 3d5301d0  adrp x29, #0x7680000
0x04C1AB98: 73a642f9  ldr x19, [x19, #0x548]
0x04C1AB9C: f7a242f9  ldr x23, [x23, #0x540]
0x04C1ABA0: bd9742f9  ldr x29, [x29, #0x528]
0x04C1ABA4: 000140f9  ldr x0, [x8]
0x04C1ABA8: b61a40b9  ldr w22, [x21, #0x18]
0x04C1ABAC: 3d989597  bl #0x3180ca0
0x04C1ABB0: 620240f9  ldr x2, [x19]
0x04C1ABB4: e103162a  mov w1, w22
0x04C1ABB8: f30300aa  mov x19, x0
0x04C1ABBC: 3ba4d097  bl #0x4043ca8
0x04C1ABC0: e10240f9  ldr x1, [x23]
0x04C1ABC4: e8230091  add x8, sp, #8
0x04C1ABC8: e00315aa  mov x0, x21
0x04C1ABCC: 27a9d097  bl #0x4045068
0x04C1ABD0: e083c03c  ldur q0, [sp, #8]
0x04C1ABD4: e80f40f9  ldr x8, [sp, #0x18]
0x04C1ABD8: fc031faa  mov x28, xzr
0x04C1ABDC: e00b803d  str q0, [sp, #0x20]
0x04C1ABE0: e81b00f9  str x8, [sp, #0x30]
0x04C1ABE4: a10340f9  ldr x1, [x29]
0x04C1ABE8: e0830091  add x0, sp, #0x20
0x04C1ABEC: 72eb0f94  bl #0x50159b4
0x04C1ABF0: 40070036  tbz w0, #0, #0x4c1acd8
0x04C1ABF4: f51b40f9  ldr x21, [sp, #0x30]
0x04C1ABF8: 75ffffb4  cbz x21, #0x4c1abe4
0x04C1ABFC: a18a41a9  ldp x1, x2, [x21, #0x18]
0x04C1AC00: e00314aa  mov x0, x20
0x04C1AC04: 68000094  bl #0x4c1ada4
0x04C1AC08: a8e242a9  ldp x8, x24, [x21, #0x28]
0x04C1AC0C: b74a40b9  ldr w23, [x21, #0x48]
0x04C1AC10: b96a41a9  ldp x25, x26, [x21, #0x10]
0x04C1AC14: f60300aa  mov x22, x0
0x04C1AC18: 1f0100f1  cmp x8, #0
0x04C1AC1C: 9c03889a  csel x28, x28, x8, eq
0x04C1AC20: 880000b4  cbz x8, #0x4c1ac30
0x04C1AC24: dc0700b4  cbz x28, #0x4c1ad1c
0x04C1AC28: 9b0b40f9  ldr x27, [x28, #0x10]
0x04C1AC2C: 02000014  b #0x4c1ac34
0x04C1AC30: fb031faa  mov x27, xzr
0x04C1AC34: 285301d0  adrp x8, #0x7680000
0x04C1AC38: 08b142f9  ldr x8, [x8, #0x560]
0x04C1AC3C: 000140f9  ldr x0, [x8]
0x04C1AC40: 18989597  bl #0x3180ca0
0x04C1AC44: f50300aa  mov x21, x0
0x04C1AC48: e1031aaa  mov x1, x26
0x04C1AC4C: e20318aa  mov x2, x24
0x04C1AC50: e303172a  mov w3, w23
0x04C1AC54: e40319aa  mov x4, x25
0x04C1AC58: e50316aa  mov x5, x22
0x04C1AC5C: e6031baa  mov x6, x27
0x04C1AC60: e7031faa  mov x7, xzr
0x04C1AC64: ff0300f9  str xzr, [sp]
0x04C1AC68: 21896994  bl #0x667d0ec
0x04C1AC6C: 530500b4  cbz x19, #0x4c1ad14
0x04C1AC70: 295301d0  adrp x9, #0x7680000
0x04C1AC74: 6a1e40b9  ldr w10, [x19, #0x1c]
0x04C1AC78: 680a40f9  ldr x8, [x19, #0x10]
0x04C1AC7C: 299d42f9  ldr x9, [x9, #0x538]
0x04C1AC80: 4a050011  add w10, w10, #1
0x04C1AC84: 290140f9  ldr x9, [x9]
0x04C1AC88: 6a1e00b9  str w10, [x19, #0x1c]
0x04C1AC8C: 680400b4  cbz x8, #0x4c1ad18
0x04C1AC90: 6a1a80b9  ldrsw x10, [x19, #0x18]
0x04C1AC94: 0b1940b9  ldr w11, [x8, #0x18]
0x04C1AC98: 5f010b6b  cmp w10, w11
0x04C1AC9C: 02010054  b.hs #0x4c1acbc
0x04C1ACA0: 49050011  add w9, w10, #1
0x04C1ACA4: 000d0a8b  add x0, x8, x10, lsl #3
0x04C1ACA8: 691a00b9  str w9, [x19, #0x18]
0x04C1ACAC: 150c02f8  str x21, [x0, #0x20]!
0x04C1ACB0: e10315aa  mov x1, x21
0x04C1ACB4: 44979597  bl #0x31809c4
0x04C1ACB8: cbffff17  b #0x4c1abe4
0x04C1ACBC: 281140f9  ldr x8, [x9, #0x20]
0x04C1ACC0: 086140f9  ldr x8, [x8, #0xc0]
0x04C1ACC4: 023940f9  ldr x2, [x8, #0x70]
0x04C1ACC8: e00313aa  mov x0, x19
0x04C1ACCC: e10315aa  mov x1, x21
0x04C1ACD0: e7a5d097  bl #0x404446c
0x04C1ACD4: c4ffff17  b #0x4c1abe4
0x04C1ACD8: 285301d0  adrp x8, #0x7680000
0x04C1ACDC: 089142f9  ldr x8, [x8, #0x520]
0x04C1ACE0: e0830091  add x0, sp, #0x20
0x04C1ACE4: 010140f9  ldr x1, [x8]
0x04C1ACE8: 32eb0f94  bl #0x50159b0
0x04C1ACEC: e00313aa  mov x0, x19
0x04C1ACF0: f44f49a9  ldp x20, x19, [sp, #0x90]
0x04C1ACF4: f65748a9  ldp x22, x21, [sp, #0x80]
0x04C1ACF8: f85f47a9  ldp x24, x23, [sp, #0x70]
0x04C1ACFC: fa6746a9  ldp x26, x25, [sp, #0x60]
0x04C1AD00: fc6f45a9  ldp x28, x27, [sp, #0x50]
0x04C1AD04: fd7b44a9  ldp x29, x30, [sp, #0x40]
0x04C1AD08: ff830291  add sp, sp, #0xa0
0x04C1AD0C: c0035fd6  ret
0x04C1AD10: e7979597  bl #0x3180cac
0x04C1AD14: e6979597  bl #0x3180cac
0x04C1AD18: e5979597  bl #0x3180cac
0x04C1AD1C: e4979597  bl #0x3180cac
0x04C1AD20: 04000014  b #0x4c1ad30
0x04C1AD24: 03000014  b #0x4c1ad30
0x04C1AD28: 02000014  b #0x4c1ad30
0x04C1AD2C: 01000014  b #0x4c1ad30
0x04C1AD30: f40300aa  mov x20, x0
0x04C1AD34: 3f040071  cmp w1, #1
0x04C1AD38: a1010054  b.ne #0x4c1ad6c
0x04C1AD3C: e00314aa  mov x0, x20
0x04C1AD40: f4ce9694  bl #0x71ce910
0x04C1AD44: 150040f9  ldr x21, [x0]
0x04C1AD48: f6ce9694  bl #0x71ce920
0x04C1AD4C: 285301d0  adrp x8, #0x7680000
0x04C1AD50: 089142f9  ldr x8, [x8, #0x520]
0x04C1AD54: e0830091  add x0, sp, #0x20
0x04C1AD58: 010140f9  ldr x1, [x8]
0x04C1AD5C: 15eb0f94  bl #0x50159b0
0x04C1AD60: 75fcffb4  cbz x21, #0x4c1acec
0x04C1AD64: e00315aa  mov x0, x21
0x04C1AD68: cf979597  bl #0x3180ca4
0x04C1AD6C: f5031faa  mov x21, xzr
0x04C1AD70: 02000014  b #0x4c1ad78
0x04C1AD74: f40300aa  mov x20, x0
0x04C1AD78: 285301d0  adrp x8, #0x7680000
0x04C1AD7C: 089142f9  ldr x8, [x8, #0x520]
0x04C1AD80: 010140f9  ldr x1, [x8]
0x04C1AD84: e0830091  add x0, sp, #0x20
0x04C1AD88: 0aeb0f94  bl #0x50159b0
0x04C1AD8C: 750000b5  cbnz x21, #0x4c1ad98
0x04C1AD90: e00314aa  mov x0, x20
0x04C1AD94: f12a9997  bl #0x3265958
0x04C1AD98: e00315aa  mov x0, x21
0x04C1AD9C: c2979597  bl #0x3180ca4
0x04C1ADA0: ddb98797  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1ADA4 | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$GetItemEntityData
; native signature: MergeEngine_ECS_Entity_o* MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___GetItemEntityData (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, MergeEngine_Configuration_IItem_o* mergeItem, Merger_Services_Backend_Sync_Data_Payloads_Board_ItemPayloadBase_o* itemData, const MethodInfo_4C1ADA4* method);
; bytes=500 sha256=759bf9fe42c071c515b5d56779edfa9780cee1670880af4fe970a0834bf75c96 status=arm64_complete_bound indexed_start=True
0x04C1ADA4: fe0f1bf8  str x30, [sp, #-0x50]!
0x04C1ADA8: fa6701a9  stp x26, x25, [sp, #0x10]
0x04C1ADAC: f85f02a9  stp x24, x23, [sp, #0x20]
0x04C1ADB0: f65703a9  stp x22, x21, [sp, #0x30]
0x04C1ADB4: f44f04a9  stp x20, x19, [sp, #0x40]
0x04C1ADB8: 15880190  adrp x21, #0x7d1a000
0x04C1ADBC: a86a7c39  ldrb w8, [x21, #0xf1a]
0x04C1ADC0: f30302aa  mov x19, x2
0x04C1ADC4: f60301aa  mov x22, x1
0x04C1ADC8: f40300aa  mov x20, x0
0x04C1ADCC: e8010037  tbnz w8, #0, #0x4c1ae08
0x04C1ADD0: 20530190  adrp x0, #0x767e000
0x04C1ADD4: 00dc42f9  ldr x0, [x0, #0x5b8]
0x04C1ADD8: 10979597  bl #0x3180a18
0x04C1ADDC: 205301d0  adrp x0, #0x7680000
0x04C1ADE0: 00e841f9  ldr x0, [x0, #0x3d0]
0x04C1ADE4: 0d979597  bl #0x3180a18
0x04C1ADE8: 20530190  adrp x0, #0x767e000
0x04C1ADEC: 00a442f9  ldr x0, [x0, #0x548]
0x04C1ADF0: 0a979597  bl #0x3180a18
0x04C1ADF4: 20530190  adrp x0, #0x767e000
0x04C1ADF8: 00e842f9  ldr x0, [x0, #0x5d0]
0x04C1ADFC: 07979597  bl #0x3180a18
0x04C1AE00: 28008052  movz w8, #0x1
0x04C1AE04: a86a3c39  strb w8, [x21, #0xf1a]
0x04C1AE08: 930400b4  cbz x19, #0x4c1ae98
0x04C1AE0C: 37530190  adrp x23, #0x767e000
0x04C1AE10: f7ea42f9  ldr x23, [x23, #0x5d0]
0x04C1AE14: e0031faa  mov x0, xzr
0x04C1AE18: 9ca87394  bl #0x6905088
0x04C1AE1C: e20240f9  ldr x2, [x23]
0x04C1AE20: f50300aa  mov x21, x0
0x04C1AE24: e0230091  add x0, sp, #8
0x04C1AE28: 01048052  movz w1, #0x20
0x04C1AE2C: ff0700f9  str xzr, [sp, #8]
0x04C1AE30: 1b83d997  bl #0x427ba9c
0x04C1AE34: e10740f9  ldr x1, [sp, #8]
0x04C1AE38: e00315aa  mov x0, x21
0x04C1AE3C: e2031faa  mov x2, xzr
0x04C1AE40: e3031faa  mov x3, xzr
0x04C1AE44: e4031faa  mov x4, xzr
0x04C1AE48: 60e37394  bl #0x6913bc8
0x04C1AE4C: 540a00b4  cbz x20, #0x4c1af94
0x04C1AE50: 970e40f9  ldr x23, [x20, #0x18]
0x04C1AE54: 170a00b4  cbz x23, #0x4c1af94
0x04C1AE58: 28530190  adrp x8, #0x767e000
0x04C1AE5C: 08dd42f9  ldr x8, [x8, #0x5b8]
0x04C1AE60: f50300aa  mov x21, x0
0x04C1AE64: 190140f9  ldr x25, [x8]
0x04C1AE68: d60100b4  cbz x22, #0x4c1aea0
0x04C1AE6C: 28530190  adrp x8, #0x767e000
0x04C1AE70: 08a542f9  ldr x8, [x8, #0x548]
0x04C1AE74: e00316aa  mov x0, x22
0x04C1AE78: 1a0140f9  ldr x26, [x8]
0x04C1AE7C: e1031aaa  mov x1, x26
0x04C1AE80: 44979597  bl #0x3180b90
0x04C1AE84: f80300aa  mov x24, x0
0x04C1AE88: e00000b5  cbnz x0, #0x4c1aea4
0x04C1AE8C: e00316aa  mov x0, x22
0x04C1AE90: e1031aaa  mov x1, x26
0x04C1AE94: 6d989597  bl #0x3181048
0x04C1AE98: f4031faa  mov x20, xzr
0x04C1AE9C: 37000014  b #0x4c1af78
0x04C1AEA0: f8031faa  mov x24, xzr
0x04C1AEA4: e80240f9  ldr x8, [x23]
0x04C1AEA8: 095d4279  ldrh w9, [x8, #0x12e]
0x04C1AEAC: 290100b4  cbz x9, #0x4c1aed0
0x04C1AEB0: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C1AEB4: 4a210091  add x10, x10, #8
0x04C1AEB8: 4b815ff8  ldur x11, [x10, #-8]
0x04C1AEBC: 7f0119eb  cmp x11, x25
0x04C1AEC0: 20010054  b.eq #0x4c1aee4
0x04C1AEC4: 290500f1  subs x9, x9, #1
0x04C1AEC8: 4a410091  add x10, x10, #0x10
0x04C1AECC: 61ffff54  b.ne #0x4c1aeb8
0x04C1AED0: e00317aa  mov x0, x23
0x04C1AED4: e10319aa  mov x1, x25
0x04C1AED8: e2031f2a  mov w2, wzr
0x04C1AEDC: 0def9497  bl #0x3156b10
0x04C1AEE0: 04000014  b #0x4c1aef0
0x04C1AEE4: 490180b9  ldrsw x9, [x10]
0x04C1AEE8: 0811098b  add x8, x8, x9, lsl #4
0x04C1AEEC: 00e10491  add x0, x8, #0x138
0x04C1AEF0: 080c40a9  ldp x8, x3, [x0]
0x04C1AEF4: e00317aa  mov x0, x23
0x04C1AEF8: e10318aa  mov x1, x24
0x04C1AEFC: e20315aa  mov x2, x21
0x04C1AF00: 00013fd6  blr x8
0x04C1AF04: 952e40f9  ldr x21, [x20, #0x58]
0x04C1AF08: 750400b4  cbz x21, #0x4c1af94
0x04C1AF0C: 2a5301d0  adrp x10, #0x7680000
0x04C1AF10: a80240f9  ldr x8, [x21]
0x04C1AF14: 4ae941f9  ldr x10, [x10, #0x3d0]
0x04C1AF18: f40300aa  mov x20, x0
0x04C1AF1C: 095d4279  ldrh w9, [x8, #0x12e]
0x04C1AF20: 410140f9  ldr x1, [x10]
0x04C1AF24: 290100b4  cbz x9, #0x4c1af48
0x04C1AF28: 0a5940f9  ldr x10, [x8, #0xb0]
0x04C1AF2C: 4a210091  add x10, x10, #8
0x04C1AF30: 4b815ff8  ldur x11, [x10, #-8]
0x04C1AF34: 7f0101eb  cmp x11, x1
0x04C1AF38: 00010054  b.eq #0x4c1af58
0x04C1AF3C: 290500f1  subs x9, x9, #1
0x04C1AF40: 4a410091  add x10, x10, #0x10
0x04C1AF44: 61ffff54  b.ne #0x4c1af30
0x04C1AF48: e00315aa  mov x0, x21
0x04C1AF4C: e2031f2a  mov w2, wzr
0x04C1AF50: f0ee9497  bl #0x3156b10
0x04C1AF54: 04000014  b #0x4c1af64
0x04C1AF58: 490180b9  ldrsw x9, [x10]
0x04C1AF5C: 0811098b  add x8, x8, x9, lsl #4
0x04C1AF60: 00e10491  add x0, x8, #0x138
0x04C1AF64: 080c40a9  ldp x8, x3, [x0]
0x04C1AF68: e00315aa  mov x0, x21
0x04C1AF6C: e10314aa  mov x1, x20
0x04C1AF70: e20313aa  mov x2, x19
0x04C1AF74: 00013fd6  blr x8
0x04C1AF78: e00314aa  mov x0, x20
0x04C1AF7C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04C1AF80: f65743a9  ldp x22, x21, [sp, #0x30]
0x04C1AF84: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04C1AF88: fa6741a9  ldp x26, x25, [sp, #0x10]
0x04C1AF8C: fe0745f8  ldr x30, [sp], #0x50
0x04C1AF90: c0035fd6  ret
0x04C1AF94: 46979597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1AF98 | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$ShouldLoadStateForDomain
; native signature: bool MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___ShouldLoadStateForDomain (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, const MethodInfo_4C1AF98* method);
; bytes=100 sha256=f8685efa57977418da1682d1e92109b49c29ac0eadb7433c3c8f83dc35372db7 status=arm64_complete_bound indexed_start=True
0x04C1AF98: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C1AF9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C1AFA0: 14880190  adrp x20, #0x7d1a000
0x04C1AFA4: 886e7c39  ldrb w8, [x20, #0xf1b]
0x04C1AFA8: f30300aa  mov x19, x0
0x04C1AFAC: c8000037  tbnz w8, #0, #0x4c1afc4
0x04C1AFB0: 00530190  adrp x0, #0x767a000
0x04C1AFB4: 000443f9  ldr x0, [x0, #0x608]
0x04C1AFB8: 98969597  bl #0x3180a18
0x04C1AFBC: 28008052  movz w8, #0x1
0x04C1AFC0: 886e3c39  strb w8, [x20, #0xf1b]
0x04C1AFC4: 602a40f9  ldr x0, [x19, #0x50]
0x04C1AFC8: 800100b4  cbz x0, #0x4c1aff8
0x04C1AFCC: e1031faa  mov x1, xzr
0x04C1AFD0: 7c9a5d94  bl #0x63819c0
0x04C1AFD4: a00000b4  cbz x0, #0x4c1afe8
0x04C1AFD8: 001040f9  ldr x0, [x0, #0x20]
0x04C1AFDC: 600000b4  cbz x0, #0x4c1afe8
0x04C1AFE0: e1031faa  mov x1, xzr
0x04C1AFE4: a45f5d94  bl #0x6372e74
0x04C1AFE8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C1AFEC: e1031faa  mov x1, xzr
0x04C1AFF0: fe0742f8  ldr x30, [sp], #0x20
0x04C1AFF4: ae722314  b #0x54f7aac
0x04C1AFF8: 2d979597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1AFFC | MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>$$.ctor
; native signature: void MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object____ctor (MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_TState__o* __this, const MethodInfo_4C1AFFC* method);
; bytes=16 sha256=6841c1e0ffa5d5cadc3e06a7b3ac7f3683492478e634ceabf7ce25d774a3457a status=arm64_complete_bound indexed_start=True
0x04C1AFFC: 281040f9  ldr x8, [x1, #0x20]
0x04C1B000: 086140f9  ldr x8, [x8, #0xc0]
0x04C1B004: 012540f9  ldr x1, [x8, #0x48]
0x04C1B008: 64a8e417  b #0x4545198

