; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 6441 Merger.RemoteLiveOps.Controllers.EventControllerBase<TEventData>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAC08 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_HasRemoteAssets
; native signature: bool Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_HasRemoteAssets (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAC08* method);
; bytes=96 sha256=5628c8d2b708ee896cabb16f569109846c650c93dbef682448a8c083a1ecd0fd status=arm64_complete_bound indexed_start=True
0x051BAC08: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BAC0C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BAC10: 145b01b0  adrp x20, #0x7d1b000
0x051BAC14: 88ba7739  ldrb w8, [x20, #0xdee]
0x051BAC18: f30300aa  mov x19, x0
0x051BAC1C: c8000037  tbnz w8, #0, #0x51bac34
0x051BAC20: a02401f0  adrp x0, #0x7651000
0x051BAC24: 002845f9  ldr x0, [x0, #0xa50]
0x051BAC28: 7c177f97  bl #0x3180a18
0x051BAC2C: 28008052  movz w8, #0x1
0x051BAC30: 88ba3739  strb w8, [x20, #0xdee]
0x051BAC34: 680240f9  ldr x8, [x19]
0x051BAC38: e00313aa  mov x0, x19
0x051BAC3C: 097541f9  ldr x9, [x8, #0x2e8]
0x051BAC40: 017941f9  ldr x1, [x8, #0x2f0]
0x051BAC44: 20013fd6  blr x9
0x051BAC48: e00000b4  cbz x0, #0x51bac64
0x051BAC4C: 081840b9  ldr w8, [x0, #0x18]
0x051BAC50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BAC54: 1f010071  cmp w8, #0
0x051BAC58: e0d79f1a  cset w0, gt
0x051BAC5C: fe0742f8  ldr x30, [sp], #0x20
0x051BAC60: c0035fd6  ret
0x051BAC64: 12187f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAC68 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_EventTimeLeftSeconds
; native signature: Framework_Core_DataBinding_MutableBindableProperty_double__o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_EventTimeLeftSeconds (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAC68* method);
; bytes=8 sha256=8acf48fdbb8521073af2f36bb9112b7f2ef477cfaa15922bb3dc5322094b6251 status=arm64_complete_bound indexed_start=True
0x051BAC68: 005040f9  ldr x0, [x0, #0xa0]
0x051BAC6C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAC70 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_CurrentServerTimeMS
; native signature: int64_t Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_CurrentServerTimeMS (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAC70* method);
; bytes=160 sha256=7b1e34a81ed45bf2de2054b316543e44b8daa82f45d55a01ac42c88e1ae11d1b status=arm64_complete_bound indexed_start=True
0x051BAC70: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BAC74: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BAC78: 145b01b0  adrp x20, #0x7d1b000
0x051BAC7C: 88be7739  ldrb w8, [x20, #0xdef]
0x051BAC80: f30300aa  mov x19, x0
0x051BAC84: c8000037  tbnz w8, #0, #0x51bac9c
0x051BAC88: c02501b0  adrp x0, #0x7673000
0x051BAC8C: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BAC90: 62177f97  bl #0x3180a18
0x051BAC94: 28008052  movz w8, #0x1
0x051BAC98: 88be3739  strb w8, [x20, #0xdef]
0x051BAC9C: 733240f9  ldr x19, [x19, #0x60]
0x051BACA0: 730300b4  cbz x19, #0x51bad0c
0x051BACA4: ca2501b0  adrp x10, #0x7673000
0x051BACA8: 680240f9  ldr x8, [x19]
0x051BACAC: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x051BACB0: 095d4279  ldrh w9, [x8, #0x12e]
0x051BACB4: 410140f9  ldr x1, [x10]
0x051BACB8: 290100b4  cbz x9, #0x51bacdc
0x051BACBC: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BACC0: 4a210091  add x10, x10, #8
0x051BACC4: 4b815ff8  ldur x11, [x10, #-8]
0x051BACC8: 7f0101eb  cmp x11, x1
0x051BACCC: 00010054  b.eq #0x51bacec
0x051BACD0: 290500f1  subs x9, x9, #1
0x051BACD4: 4a410091  add x10, x10, #0x10
0x051BACD8: 61ffff54  b.ne #0x51bacc4
0x051BACDC: e00313aa  mov x0, x19
0x051BACE0: e2031f2a  mov w2, wzr
0x051BACE4: 8b6f7e97  bl #0x3156b10
0x051BACE8: 04000014  b #0x51bacf8
0x051BACEC: 490180b9  ldrsw x9, [x10]
0x051BACF0: 0811098b  add x8, x8, x9, lsl #4
0x051BACF4: 00e10491  add x0, x8, #0x138
0x051BACF8: 020440a9  ldp x2, x1, [x0]
0x051BACFC: e00313aa  mov x0, x19
0x051BAD00: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BAD04: fe0742f8  ldr x30, [sp], #0x20
0x051BAD08: 40001fd6  br x2
0x051BAD0C: e8177f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAD10 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_RemoteBundleName
; native signature: System_String_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_RemoteBundleName (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAD10* method);
; bytes=72 sha256=d430f441ed29158cd02792aa10902fa74a51455b16773d185d4eaf3913146008 status=arm64_complete_bound indexed_start=True
0x051BAD10: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BAD14: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BAD18: 135b01b0  adrp x19, #0x7d1b000
0x051BAD1C: b4240190  adrp x20, #0x764e000
0x051BAD20: 68c27739  ldrb w8, [x19, #0xdf0]
0x051BAD24: 94ee42f9  ldr x20, [x20, #0x5d8]
0x051BAD28: c8000037  tbnz w8, #0, #0x51bad40
0x051BAD2C: a0240190  adrp x0, #0x764e000
0x051BAD30: 00ec42f9  ldr x0, [x0, #0x5d8]
0x051BAD34: 39177f97  bl #0x3180a18
0x051BAD38: 28008052  movz w8, #0x1
0x051BAD3C: 68c23739  strb w8, [x19, #0xdf0]
0x051BAD40: 880240f9  ldr x8, [x20]
0x051BAD44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BAD48: 085d40f9  ldr x8, [x8, #0xb8]
0x051BAD4C: 000140f9  ldr x0, [x8]
0x051BAD50: fe0742f8  ldr x30, [sp], #0x20
0x051BAD54: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAD58 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_RemoteBadgesBundleName
; native signature: System_String_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_RemoteBadgesBundleName (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAD58* method);
; bytes=72 sha256=ddeafa954f45e711f2059d00d16b3eea7297680891a72d8d8f288a60a3d27e97 status=arm64_complete_bound indexed_start=True
0x051BAD58: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BAD5C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BAD60: 135b01b0  adrp x19, #0x7d1b000
0x051BAD64: b4240190  adrp x20, #0x764e000
0x051BAD68: 68c67739  ldrb w8, [x19, #0xdf1]
0x051BAD6C: 94ee42f9  ldr x20, [x20, #0x5d8]
0x051BAD70: c8000037  tbnz w8, #0, #0x51bad88
0x051BAD74: a0240190  adrp x0, #0x764e000
0x051BAD78: 00ec42f9  ldr x0, [x0, #0x5d8]
0x051BAD7C: 27177f97  bl #0x3180a18
0x051BAD80: 28008052  movz w8, #0x1
0x051BAD84: 68c63739  strb w8, [x19, #0xdf1]
0x051BAD88: 880240f9  ldr x8, [x20]
0x051BAD8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BAD90: 085d40f9  ldr x8, [x8, #0xb8]
0x051BAD94: 000140f9  ldr x0, [x8]
0x051BAD98: fe0742f8  ldr x30, [sp], #0x20
0x051BAD9C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BADA0 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_EventAssetsKeys
; native signature: System_Collections_Generic_List_string__o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_EventAssetsKeys (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BADA0* method);
; bytes=8 sha256=ba4c2ccef6b9b64afc1064a567fd2323a67d13fa4034430dd8b448e052ddbdf2 status=arm64_complete_bound indexed_start=True
0x051BADA0: 006840f9  ldr x0, [x0, #0xd0]
0x051BADA4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BADA8 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_BadgesBundleAssetsKeys
; native signature: System_Collections_Generic_List_string__o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_BadgesBundleAssetsKeys (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BADA8* method);
; bytes=8 sha256=e49d723757a27dfbd7d070c170b9b4dd52389a089158ee08e5b69641210ae3f3 status=arm64_complete_bound indexed_start=True
0x051BADA8: 006c40f9  ldr x0, [x0, #0xd8]
0x051BADAC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BADB0 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_TextMeshSpriteOverrideName
; native signature: System_String_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_TextMeshSpriteOverrideName (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BADB0* method);
; bytes=72 sha256=4395464f7753b34b7eeea1a50d22d7c9a7b7628c3eed2a6ef11b3c4c57c14ea5 status=arm64_complete_bound indexed_start=True
0x051BADB0: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BADB4: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BADB8: 135b01b0  adrp x19, #0x7d1b000
0x051BADBC: b4240190  adrp x20, #0x764e000
0x051BADC0: 68ca7739  ldrb w8, [x19, #0xdf2]
0x051BADC4: 94ee42f9  ldr x20, [x20, #0x5d8]
0x051BADC8: c8000037  tbnz w8, #0, #0x51bade0
0x051BADCC: a0240190  adrp x0, #0x764e000
0x051BADD0: 00ec42f9  ldr x0, [x0, #0x5d8]
0x051BADD4: 11177f97  bl #0x3180a18
0x051BADD8: 28008052  movz w8, #0x1
0x051BADDC: 68ca3739  strb w8, [x19, #0xdf2]
0x051BADE0: 880240f9  ldr x8, [x20]
0x051BADE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BADE8: 085d40f9  ldr x8, [x8, #0xb8]
0x051BADEC: 000140f9  ldr x0, [x8]
0x051BADF0: fe0742f8  ldr x30, [sp], #0x20
0x051BADF4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BADF8 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_EventId
; native signature: System_String_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_EventId (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BADF8* method);
; bytes=8 sha256=91126818b91e6c658aba941cdc52be48c76903dd7308b0d57361e2fbf8a6e140 status=arm64_complete_bound indexed_start=True
0x051BADF8: 007440f9  ldr x0, [x0, #0xe8]
0x051BADFC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE00 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$set_EventId
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___set_EventId (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_String_o* value, const MethodInfo_51BAE00* method);
; bytes=8 sha256=fd68f2ffa851052c5b22468ba33d08dec3dd6d9820b6350e3cc4bbad2379f029 status=arm64_complete_bound indexed_start=True
0x051BAE00: 018c0ef8  str x1, [x0, #0xe8]!
0x051BAE04: f0167f17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE08 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_EventData
; native signature: Il2CppObject* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_EventData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE08* method);
; bytes=8 sha256=c722475f27d1559e22a1016eaa0b9e7955020853a913fb1f32807bd840e68b6b status=arm64_complete_bound indexed_start=True
0x051BAE08: 007840f9  ldr x0, [x0, #0xf0]
0x051BAE0C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE10 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$set_EventData
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___set_EventData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Il2CppObject* value, const MethodInfo_51BAE10* method);
; bytes=8 sha256=e98301863affa8691dd81e5e901fc964b0d46ec85993697ec65da48037601add status=arm64_complete_bound indexed_start=True
0x051BAE10: 010c0ff8  str x1, [x0, #0xf0]!
0x051BAE14: ec167f17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE18 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_SystemManager
; native signature: MergeEngine_ECS_Systems_ISystemManager_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_SystemManager (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE18* method);
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x051BAE18: 001840f9  ldr x0, [x0, #0x30]
0x051BAE1C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE20 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_AssetManager
; native signature: Framework_Core_Assets_IAssetManager_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_AssetManager (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE20* method);
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x051BAE20: 001c40f9  ldr x0, [x0, #0x38]
0x051BAE24: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE28 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_RemoteServerStatesService
; native signature: Framework_Core_Services_Backend_Remote_IRemoteServerStatesService_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_RemoteServerStatesService (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE28* method);
; bytes=8 sha256=f637e07b3820a82a5634a0174c92391b8ec5194fafa5b124fa3a73d3007ae512 status=arm64_complete_bound indexed_start=True
0x051BAE28: 003440f9  ldr x0, [x0, #0x68]
0x051BAE2C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE30 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_RemoteLiveOpsService
; native signature: Merger_RemoteLiveOps_IRemoteLiveOpsService_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_RemoteLiveOpsService (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE30* method);
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x051BAE30: 002040f9  ldr x0, [x0, #0x40]
0x051BAE34: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE38 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_RemoteLiveOpsActivationService
; native signature: Merger_RemoteLiveOps_Service_IRemoteLiveOpsActivationService_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_RemoteLiveOpsActivationService (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE38* method);
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x051BAE38: 002440f9  ldr x0, [x0, #0x48]
0x051BAE3C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE40 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_RemoteContentService
; native signature: Merger_RemoteContentManager_Services_IRemoteContentService_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_RemoteContentService (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE40* method);
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x051BAE40: 002840f9  ldr x0, [x0, #0x50]
0x051BAE44: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE48 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_JsonService
; native signature: Framework_Core_Services_IJsonService_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_JsonService (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE48* method);
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x051BAE48: 002c40f9  ldr x0, [x0, #0x58]
0x051BAE4C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAE50 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_IconsSystem
; native signature: MergeEngine_ECS_Systems_IconsSystem_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_IconsSystem (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAE50* method);
; bytes=184 sha256=ebb17810ebc1b20f7c191cf1cc86fcf09a2adaabf04e6f72d414603c9870138e status=arm64_complete_bound indexed_start=True
0x051BAE50: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BAE54: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BAE58: 145b01b0  adrp x20, #0x7d1b000
0x051BAE5C: 88ce7739  ldrb w8, [x20, #0xdf3]
0x051BAE60: f30300aa  mov x19, x0
0x051BAE64: c8000037  tbnz w8, #0, #0x51bae7c
0x051BAE68: a02501b0  adrp x0, #0x766f000
0x051BAE6C: 009445f9  ldr x0, [x0, #0xb28]
0x051BAE70: ea167f97  bl #0x3180a18
0x051BAE74: 28008052  movz w8, #0x1
0x051BAE78: 88ce3739  strb w8, [x20, #0xdf3]
0x051BAE7C: 731a40f9  ldr x19, [x19, #0x30]
0x051BAE80: 330400b4  cbz x19, #0x51baf04
0x051BAE84: a92501b0  adrp x9, #0x766f000
0x051BAE88: 299545f9  ldr x9, [x9, #0xb28]
0x051BAE8C: 680240f9  ldr x8, [x19]
0x051BAE90: 340140f9  ldr x20, [x9]
0x051BAE94: 095d4279  ldrh w9, [x8, #0x12e]
0x051BAE98: 811240f9  ldr x1, [x20, #0x20]
0x051BAE9C: 82a24079  ldrh w2, [x20, #0x50]
0x051BAEA0: 290100b4  cbz x9, #0x51baec4
0x051BAEA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BAEA8: 4a210091  add x10, x10, #8
0x051BAEAC: 4b815ff8  ldur x11, [x10, #-8]
0x051BAEB0: 7f0101eb  cmp x11, x1
0x051BAEB4: e0000054  b.eq #0x51baed0
0x051BAEB8: 290500f1  subs x9, x9, #1
0x051BAEBC: 4a410091  add x10, x10, #0x10
0x051BAEC0: 61ffff54  b.ne #0x51baeac
0x051BAEC4: e00313aa  mov x0, x19
0x051BAEC8: 126f7e97  bl #0x3156b10
0x051BAECC: 05000014  b #0x51baee0
0x051BAED0: 490140b9  ldr w9, [x10]
0x051BAED4: 2901020b  add w9, w9, w2
0x051BAED8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BAEDC: 00e10491  add x0, x8, #0x138
0x051BAEE0: 000440f9  ldr x0, [x0, #8]
0x051BAEE4: e10314aa  mov x1, x20
0x051BAEE8: 28177f97  bl #0x3180b88
0x051BAEEC: e10300aa  mov x1, x0
0x051BAEF0: 020440f9  ldr x2, [x0, #8]
0x051BAEF4: e00313aa  mov x0, x19
0x051BAEF8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BAEFC: fe0742f8  ldr x30, [sp], #0x20
0x051BAF00: 40001fd6  br x2
0x051BAF04: 6a177f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF08 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_ActivationStates
; native signature: Framework_Core_Services_Backend_Remote_Payloads_BackendStates_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_ActivationStates (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF08* method);
; bytes=8 sha256=888f9cf38c658ba6677f84e11ca73155613e88dcdb916650d2a0352dface8fa1 status=arm64_complete_bound indexed_start=True
0x051BAF08: 008040f9  ldr x0, [x0, #0x100]
0x051BAF0C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF10 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$set_ActivationStates
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___set_ActivationStates (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Framework_Core_Services_Backend_Remote_Payloads_BackendStates_o* value, const MethodInfo_51BAF10* method);
; bytes=16 sha256=3b94651cb51c57bafd2417556388e4f7ac26389ec125e87e6cd0ebc36a128622 status=arm64_complete_bound indexed_start=True
0x051BAF10: 08000491  add x8, x0, #0x100
0x051BAF14: 018000f9  str x1, [x0, #0x100]
0x051BAF18: e00308aa  mov x0, x8
0x051BAF1C: aa167f17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF20 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_IconPriority
; native signature: int32_t Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_IconPriority (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF20* method);
; bytes=8 sha256=a4c77fb43e258650636274b2beb619b73fe6445455871172ed7a1da67d025f78 status=arm64_complete_bound indexed_start=True
0x051BAF20: 800c8052  movz w0, #0x64
0x051BAF24: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF28 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnInitialized
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnInitialized (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF28* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BAF28: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF2C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnEventResumed
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnEventResumed (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF2C* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BAF2C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF30 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_AudioConfigKey
; native signature: System_String_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_AudioConfigKey (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF30* method);
; bytes=8 sha256=ed86e0b2911b6a4e9edfa1a48e9544ba115299466a1992e2370619d8ce8e29fc status=arm64_complete_bound indexed_start=True
0x051BAF30: e0031faa  mov x0, xzr
0x051BAF34: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF38 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_ExternalAssetPromise
; native signature: strange_extensions_promise_api_IPromise_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_ExternalAssetPromise (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF38* method);
; bytes=8 sha256=ede0a1721ccfac82e21b1cce350873068e49ce71fbb47b023d86a0232ec6e3fc status=arm64_complete_bound indexed_start=True
0x051BAF38: 008440f9  ldr x0, [x0, #0x108]
0x051BAF3C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF40 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$set_ExternalAssetPromise
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___set_ExternalAssetPromise (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, strange_extensions_promise_api_IPromise_o* value, const MethodInfo_51BAF40* method);
; bytes=16 sha256=e1e87157f41743a0b4e6499e59bc21e6e61d3044fa091170b15dbf617494e5bc status=arm64_complete_bound indexed_start=True
0x051BAF40: 08200491  add x8, x0, #0x108
0x051BAF44: 018400f9  str x1, [x0, #0x108]
0x051BAF48: e00308aa  mov x0, x8
0x051BAF4C: 9e167f17  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF50 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_AssetsDownloadCompleted
; native signature: bool Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_AssetsDownloadCompleted (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF50* method);
; bytes=8 sha256=b6e45e39862790ae55b102d5f150b1bbc78fa7a04f35a7d988e35311df9744cb status=arm64_complete_bound indexed_start=True
0x051BAF50: 00404239  ldrb w0, [x0, #0x90]
0x051BAF54: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF58 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$get_CurrentEventState
; native signature: int32_t Merger_RemoteLiveOps_Controllers_EventControllerBase_object___get_CurrentEventState (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF58* method);
; bytes=8 sha256=0d937dd3c58a71f19c89f6429d2bafede910e523e8d13bdc6a755a6ff3c78593 status=arm64_complete_bound indexed_start=True
0x051BAF58: 001041b9  ldr w0, [x0, #0x110]
0x051BAF5C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF60 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$set_CurrentEventState
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___set_CurrentEventState (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, int32_t value, const MethodInfo_51BAF60* method);
; bytes=8 sha256=d824babfa8bb58037210503ad5f8c5f8e5989641c875dcf80442015b09c6c7d8 status=arm64_complete_bound indexed_start=True
0x051BAF60: 011001b9  str w1, [x0, #0x110]
0x051BAF64: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF68 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnAfterAssetsDownloaded
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnAfterAssetsDownloaded (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF68* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BAF68: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF6C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnAssetsDownloadFailed
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnAssetsDownloadFailed (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF6C* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BAF6C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BAF70 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$SubscribeToSignals
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___SubscribeToSignals (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BAF70* method);
; bytes=272 sha256=783e3b9e7fc8af6c44f8887d987a0a864a29a8cf053768d7f3829db16827d48e status=arm64_complete_bound indexed_start=True
0x051BAF70: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x051BAF74: f65701a9  stp x22, x21, [sp, #0x10]
0x051BAF78: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BAF7C: 155b01b0  adrp x21, #0x7d1b000
0x051BAF80: a8d27739  ldrb w8, [x21, #0xdf4]
0x051BAF84: f40301aa  mov x20, x1
0x051BAF88: f30300aa  mov x19, x0
0x051BAF8C: e8010037  tbnz w8, #0, #0x51bafc8
0x051BAF90: 202601f0  adrp x0, #0x7681000
0x051BAF94: 001046f9  ldr x0, [x0, #0xc20]
0x051BAF98: a0167f97  bl #0x3180a18
0x051BAF9C: 002601d0  adrp x0, #0x767c000
0x051BAFA0: 00b440f9  ldr x0, [x0, #0x168]
0x051BAFA4: 9d167f97  bl #0x3180a18
0x051BAFA8: 002601d0  adrp x0, #0x767c000
0x051BAFAC: 007442f9  ldr x0, [x0, #0x4e8]
0x051BAFB0: 9a167f97  bl #0x3180a18
0x051BAFB4: 202601f0  adrp x0, #0x7681000
0x051BAFB8: 001446f9  ldr x0, [x0, #0xc28]
0x051BAFBC: 97167f97  bl #0x3180a18
0x051BAFC0: 28008052  movz w8, #0x1
0x051BAFC4: a8d23739  strb w8, [x21, #0xdf4]
0x051BAFC8: b30500b4  cbz x19, #0x51bb07c
0x051BAFCC: 162601d0  adrp x22, #0x767c000
0x051BAFD0: d6b640f9  ldr x22, [x22, #0x168]
0x051BAFD4: e00313aa  mov x0, x19
0x051BAFD8: e1031faa  mov x1, xzr
0x051BAFDC: addf5b94  bl #0x68b2e90
0x051BAFE0: c00240f9  ldr x0, [x22]
0x051BAFE4: 751240f9  ldr x21, [x19, #0x20]
0x051BAFE8: 2e177f97  bl #0x3180ca0
0x051BAFEC: 881240f9  ldr x8, [x20, #0x20]
0x051BAFF0: e10313aa  mov x1, x19
0x051BAFF4: e3031faa  mov x3, xzr
0x051BAFF8: f60300aa  mov x22, x0
0x051BAFFC: 086140f9  ldr x8, [x8, #0xc0]
0x051BB000: 021140f9  ldr x2, [x8, #0x20]
0x051BB004: 749c0594  bl #0x53221d4
0x051BB008: b50300b4  cbz x21, #0x51bb07c
0x051BB00C: 082601b0  adrp x8, #0x767c000
0x051BB010: 087542f9  ldr x8, [x8, #0x4e8]
0x051BB014: 372601d0  adrp x23, #0x7681000
0x051BB018: e00315aa  mov x0, x21
0x051BB01C: e10316aa  mov x1, x22
0x051BB020: 020140f9  ldr x2, [x8]
0x051BB024: f71246f9  ldr x23, [x23, #0xc20]
0x051BB028: b7a8af97  bl #0x3da5304
0x051BB02C: e00240f9  ldr x0, [x23]
0x051BB030: 751240f9  ldr x21, [x19, #0x20]
0x051BB034: 1b177f97  bl #0x3180ca0
0x051BB038: 881240f9  ldr x8, [x20, #0x20]
0x051BB03C: e10313aa  mov x1, x19
0x051BB040: e3031faa  mov x3, xzr
0x051BB044: f40300aa  mov x20, x0
0x051BB048: 086140f9  ldr x8, [x8, #0xc0]
0x051BB04C: 021540f9  ldr x2, [x8, #0x28]
0x051BB050: 619c0594  bl #0x53221d4
0x051BB054: 550100b4  cbz x21, #0x51bb07c
0x051BB058: 282601d0  adrp x8, #0x7681000
0x051BB05C: 081546f9  ldr x8, [x8, #0xc28]
0x051BB060: e00315aa  mov x0, x21
0x051BB064: e10314aa  mov x1, x20
0x051BB068: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BB06C: 020140f9  ldr x2, [x8]
0x051BB070: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BB074: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x051BB078: a3a8af17  b #0x3da5304
0x051BB07C: 0c177f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB080 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$UpdateRewardsData
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___UpdateRewardsData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Il2CppObject* updatedConfig, const MethodInfo_51BB080* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BB080: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB084 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$TryUpdateRewardsWithActivationData
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___TryUpdateRewardsWithActivationData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Newtonsoft_Json_Linq_JObject_o* activationData, const MethodInfo_51BB084* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BB084: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB088 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnDestroy
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnDestroy (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB088* method);
; bytes=188 sha256=94f6a0ec46c0660c99a69095953bf665d8f547bb0e44e565a09541feee8586a3 status=arm64_complete_bound indexed_start=True
0x051BB088: fe0f1df8  str x30, [sp, #-0x30]!
0x051BB08C: f65701a9  stp x22, x21, [sp, #0x10]
0x051BB090: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BB094: 165b0190  adrp x22, #0x7d1b000
0x051BB098: 352601d0  adrp x21, #0x7681000
0x051BB09C: c8d67739  ldrb w8, [x22, #0xdf5]
0x051BB0A0: b51a46f9  ldr x21, [x21, #0xc30]
0x051BB0A4: f40301aa  mov x20, x1
0x051BB0A8: f30300aa  mov x19, x0
0x051BB0AC: 28010037  tbnz w8, #0, #0x51bb0d0
0x051BB0B0: 202601d0  adrp x0, #0x7681000
0x051BB0B4: 001846f9  ldr x0, [x0, #0xc30]
0x051BB0B8: 58167f97  bl #0x3180a18
0x051BB0BC: 202601d0  adrp x0, #0x7681000
0x051BB0C0: 001c46f9  ldr x0, [x0, #0xc38]
0x051BB0C4: 55167f97  bl #0x3180a18
0x051BB0C8: 28008052  movz w8, #0x1
0x051BB0CC: c8d63739  strb w8, [x22, #0xdf5]
0x051BB0D0: 680240f9  ldr x8, [x19]
0x051BB0D4: e00313aa  mov x0, x19
0x051BB0D8: 09e541f9  ldr x9, [x8, #0x3c8]
0x051BB0DC: 01e941f9  ldr x1, [x8, #0x3d0]
0x051BB0E0: 20013fd6  blr x9
0x051BB0E4: 881240f9  ldr x8, [x20, #0x20]
0x051BB0E8: e00313aa  mov x0, x19
0x051BB0EC: 086140f9  ldr x8, [x8, #0xc0]
0x051BB0F0: 011d40f9  ldr x1, [x8, #0x38]
0x051BB0F4: 7f0a0094  bl #0x51bdaf0
0x051BB0F8: e00313aa  mov x0, x19
0x051BB0FC: 90090094  bl #0x51bd73c
0x051BB100: a00240f9  ldr x0, [x21]
0x051BB104: 731240f9  ldr x19, [x19, #0x20]
0x051BB108: e6167f97  bl #0x3180ca0
0x051BB10C: e1031faa  mov x1, xzr
0x051BB110: f40300aa  mov x20, x0
0x051BB114: daaf4a94  bl #0x646707c
0x051BB118: 530100b4  cbz x19, #0x51bb140
0x051BB11C: 282601d0  adrp x8, #0x7681000
0x051BB120: 081d46f9  ldr x8, [x8, #0xc38]
0x051BB124: e00313aa  mov x0, x19
0x051BB128: e10314aa  mov x1, x20
0x051BB12C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BB130: 020140f9  ldr x2, [x8]
0x051BB134: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BB138: fe0743f8  ldr x30, [sp], #0x30
0x051BB13C: 0ca7af17  b #0x3da4d6c
0x051BB140: db167f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB144 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$EndEvent
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___EndEvent (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB144* method);
; bytes=296 sha256=bdd1da815b754f8c4e4ea951e5d2766648be61122c5e681eadbf01bbbf40bb5d status=arm64_complete_bound indexed_start=True
0x051BB144: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BB148: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BB14C: 145b0190  adrp x20, #0x7d1b000
0x051BB150: 352601d0  adrp x21, #0x7681000
0x051BB154: 88da7739  ldrb w8, [x20, #0xdf6]
0x051BB158: b52246f9  ldr x21, [x21, #0xc40]
0x051BB15C: f30300aa  mov x19, x0
0x051BB160: e8010037  tbnz w8, #0, #0x51bb19c
0x051BB164: 202601d0  adrp x0, #0x7681000
0x051BB168: 002446f9  ldr x0, [x0, #0xc48]
0x051BB16C: 2b167f97  bl #0x3180a18
0x051BB170: 202601d0  adrp x0, #0x7681000
0x051BB174: 002846f9  ldr x0, [x0, #0xc50]
0x051BB178: 28167f97  bl #0x3180a18
0x051BB17C: 202601d0  adrp x0, #0x7681000
0x051BB180: 002c46f9  ldr x0, [x0, #0xc58]
0x051BB184: 25167f97  bl #0x3180a18
0x051BB188: 202601d0  adrp x0, #0x7681000
0x051BB18C: 002046f9  ldr x0, [x0, #0xc40]
0x051BB190: 22167f97  bl #0x3180a18
0x051BB194: 28008052  movz w8, #0x1
0x051BB198: 88da3739  strb w8, [x20, #0xdf6]
0x051BB19C: 617640f9  ldr x1, [x19, #0xe8]
0x051BB1A0: a00240f9  ldr x0, [x21]
0x051BB1A4: 741640f9  ldr x20, [x19, #0x28]
0x051BB1A8: e2031faa  mov x2, xzr
0x051BB1AC: 7dbd0c94  bl #0x54ea7a0
0x051BB1B0: d40500b4  cbz x20, #0x51bb268
0x051BB1B4: 2a2601d0  adrp x10, #0x7681000
0x051BB1B8: 880240f9  ldr x8, [x20]
0x051BB1BC: 4a2546f9  ldr x10, [x10, #0xc48]
0x051BB1C0: f50300aa  mov x21, x0
0x051BB1C4: 095d4279  ldrh w9, [x8, #0x12e]
0x051BB1C8: 410140f9  ldr x1, [x10]
0x051BB1CC: 290100b4  cbz x9, #0x51bb1f0
0x051BB1D0: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BB1D4: 4a210091  add x10, x10, #8
0x051BB1D8: 4b815ff8  ldur x11, [x10, #-8]
0x051BB1DC: 7f0101eb  cmp x11, x1
0x051BB1E0: 00010054  b.eq #0x51bb200
0x051BB1E4: 290500f1  subs x9, x9, #1
0x051BB1E8: 4a410091  add x10, x10, #0x10
0x051BB1EC: 61ffff54  b.ne #0x51bb1d8
0x051BB1F0: 22008052  movz w2, #0x1
0x051BB1F4: e00314aa  mov x0, x20
0x051BB1F8: 466e7e97  bl #0x3156b10
0x051BB1FC: 05000014  b #0x51bb210
0x051BB200: 490140b9  ldr w9, [x10]
0x051BB204: 29050011  add w9, w9, #1
0x051BB208: 08d1298b  add x8, x8, w9, sxtw #4
0x051BB20C: 00e10491  add x0, x8, #0x138
0x051BB210: 080840a9  ldp x8, x2, [x0]
0x051BB214: e00314aa  mov x0, x20
0x051BB218: e10315aa  mov x1, x21
0x051BB21C: 00013fd6  blr x8
0x051BB220: 530200b4  cbz x19, #0x51bb268
0x051BB224: 282601d0  adrp x8, #0x7681000
0x051BB228: 082946f9  ldr x8, [x8, #0xc50]
0x051BB22C: 731240f9  ldr x19, [x19, #0x20]
0x051BB230: 000140f9  ldr x0, [x8]
0x051BB234: 9b167f97  bl #0x3180ca0
0x051BB238: e1031faa  mov x1, xzr
0x051BB23C: f40300aa  mov x20, x0
0x051BB240: 93af4a94  bl #0x646708c
0x051BB244: 330100b4  cbz x19, #0x51bb268
0x051BB248: 282601d0  adrp x8, #0x7681000
0x051BB24C: 082d46f9  ldr x8, [x8, #0xc58]
0x051BB250: e00313aa  mov x0, x19
0x051BB254: e10314aa  mov x1, x20
0x051BB258: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB25C: 020140f9  ldr x2, [x8]
0x051BB260: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BB264: c2a6af17  b #0x3da4d6c
0x051BB268: 91167f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB26C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnCreate
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnCreate (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_String_o* eventId, Il2CppObject* eventData, const MethodInfo_51BB26C* method);
; bytes=204 sha256=899abe44168f574aae3628093712e3339408e6e7357dc70814c2ef336532fed0 status=arm64_complete_bound indexed_start=True
0x051BB26C: fe0f1cf8  str x30, [sp, #-0x40]!
0x051BB270: f85f01a9  stp x24, x23, [sp, #0x10]
0x051BB274: f65702a9  stp x22, x21, [sp, #0x20]
0x051BB278: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BB27C: 185b0190  adrp x24, #0x7d1b000
0x051BB280: b7250190  adrp x23, #0x766f000
0x051BB284: 08df7739  ldrb w8, [x24, #0xdf7]
0x051BB288: f77244f9  ldr x23, [x23, #0x8e0]
0x051BB28C: f40303aa  mov x20, x3
0x051BB290: f50302aa  mov x21, x2
0x051BB294: f60301aa  mov x22, x1
0x051BB298: f30300aa  mov x19, x0
0x051BB29C: c8000037  tbnz w8, #0, #0x51bb2b4
0x051BB2A0: a0250190  adrp x0, #0x766f000
0x051BB2A4: 007044f9  ldr x0, [x0, #0x8e0]
0x051BB2A8: dc157f97  bl #0x3180a18
0x051BB2AC: 28008052  movz w8, #0x1
0x051BB2B0: 08df3739  strb w8, [x24, #0xdf7]
0x051BB2B4: e00313aa  mov x0, x19
0x051BB2B8: 168c0ef8  str x22, [x0, #0xe8]!
0x051BB2BC: e10316aa  mov x1, x22
0x051BB2C0: c1157f97  bl #0x31809c4
0x051BB2C4: e00240f9  ldr x0, [x23]
0x051BB2C8: 76167f97  bl #0x3180ca0
0x051BB2CC: e1031faa  mov x1, xzr
0x051BB2D0: f60300aa  mov x22, x0
0x051BB2D4: 7a172094  bl #0x59c10bc
0x051BB2D8: e00313aa  mov x0, x19
0x051BB2DC: 168c0cf8  str x22, [x0, #0xc8]!
0x051BB2E0: e10316aa  mov x1, x22
0x051BB2E4: b8157f97  bl #0x31809c4
0x051BB2E8: 881240f9  ldr x8, [x20, #0x20]
0x051BB2EC: e00313aa  mov x0, x19
0x051BB2F0: e10315aa  mov x1, x21
0x051BB2F4: 086140f9  ldr x8, [x8, #0xc0]
0x051BB2F8: 022d40f9  ldr x2, [x8, #0x58]
0x051BB2FC: 2b050094  bl #0x51bc7a8
0x051BB300: 881240f9  ldr x8, [x20, #0x20]
0x051BB304: e00313aa  mov x0, x19
0x051BB308: 086140f9  ldr x8, [x8, #0xc0]
0x051BB30C: 013140f9  ldr x1, [x8, #0x60]
0x051BB310: a9070094  bl #0x51bd1b4
0x051BB314: 680240f9  ldr x8, [x19]
0x051BB318: e00313aa  mov x0, x19
0x051BB31C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BB320: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BB324: 02ed41f9  ldr x2, [x8, #0x3d8]
0x051BB328: 01f141f9  ldr x1, [x8, #0x3e0]
0x051BB32C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BB330: fe0744f8  ldr x30, [sp], #0x40
0x051BB334: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB338 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnEventCreated
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnEventCreated (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB338* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BB338: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB33C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$AbortEvent
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___AbortEvent (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_String_o* message, const MethodInfo_51BB33C* method);
; bytes=216 sha256=8c5054a8978d3b5a3bc04b7540be86271a6848892acda6bc1fd3dff216d4ad6a status=arm64_complete_bound indexed_start=True
0x051BB33C: fe0f1df8  str x30, [sp, #-0x30]!
0x051BB340: f65701a9  stp x22, x21, [sp, #0x10]
0x051BB344: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BB348: 165b0190  adrp x22, #0x7d1b000
0x051BB34C: 952401f0  adrp x21, #0x764e000
0x051BB350: c8e27739  ldrb w8, [x22, #0xdf8]
0x051BB354: b5ce42f9  ldr x21, [x21, #0x598]
0x051BB358: f40301aa  mov x20, x1
0x051BB35C: f30300aa  mov x19, x0
0x051BB360: 88010037  tbnz w8, #0, #0x51bb390
0x051BB364: 802401f0  adrp x0, #0x764e000
0x051BB368: 00cc42f9  ldr x0, [x0, #0x598]
0x051BB36C: ab157f97  bl #0x3180a18
0x051BB370: 202601d0  adrp x0, #0x7681000
0x051BB374: 003046f9  ldr x0, [x0, #0xc60]
0x051BB378: a8157f97  bl #0x3180a18
0x051BB37C: 202601d0  adrp x0, #0x7681000
0x051BB380: 003446f9  ldr x0, [x0, #0xc68]
0x051BB384: a5157f97  bl #0x3180a18
0x051BB388: 28008052  movz w8, #0x1
0x051BB38C: c8e23739  strb w8, [x22, #0xdf8]
0x051BB390: a00240f9  ldr x0, [x21]
0x051BB394: 362601d0  adrp x22, #0x7681000
0x051BB398: 08e040b9  ldr w8, [x0, #0xe0]
0x051BB39C: d63246f9  ldr x22, [x22, #0xc60]
0x051BB3A0: 48000035  cbnz w8, #0x51bb3a8
0x051BB3A4: fa157f97  bl #0x3180b8c
0x051BB3A8: e00314aa  mov x0, x20
0x051BB3AC: e1031faa  mov x1, xzr
0x051BB3B0: 32bb7394  bl #0x6eaa078
0x051BB3B4: 680240f9  ldr x8, [x19]
0x051BB3B8: e00313aa  mov x0, x19
0x051BB3BC: 09dd41f9  ldr x9, [x8, #0x3b8]
0x051BB3C0: 01e141f9  ldr x1, [x8, #0x3c0]
0x051BB3C4: 20013fd6  blr x9
0x051BB3C8: c00240f9  ldr x0, [x22]
0x051BB3CC: 741240f9  ldr x20, [x19, #0x20]
0x051BB3D0: 757640f9  ldr x21, [x19, #0xe8]
0x051BB3D4: 33167f97  bl #0x3180ca0
0x051BB3D8: e10315aa  mov x1, x21
0x051BB3DC: e2031faa  mov x2, xzr
0x051BB3E0: f30300aa  mov x19, x0
0x051BB3E4: 08af4a94  bl #0x6467004
0x051BB3E8: 540100b4  cbz x20, #0x51bb410
0x051BB3EC: 282601d0  adrp x8, #0x7681000
0x051BB3F0: 083546f9  ldr x8, [x8, #0xc68]
0x051BB3F4: e00314aa  mov x0, x20
0x051BB3F8: e10313aa  mov x1, x19
0x051BB3FC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BB400: 020140f9  ldr x2, [x8]
0x051BB404: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BB408: fe0743f8  ldr x30, [sp], #0x30
0x051BB40C: 58a6af17  b #0x3da4d6c
0x051BB410: 27167f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB414 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnUpdate
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnUpdate (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Il2CppObject* eventData, const MethodInfo_51BB414* method);
; bytes=80 sha256=c6ec61893f2daa6df671e87b2206bf16982456270e24119dc9d99ac5fc3c5fec status=arm64_complete_bound indexed_start=True
0x051BB414: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BB418: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BB41C: 481040f9  ldr x8, [x2, #0x20]
0x051BB420: f30302aa  mov x19, x2
0x051BB424: f40300aa  mov x20, x0
0x051BB428: 086140f9  ldr x8, [x8, #0xc0]
0x051BB42C: 022d40f9  ldr x2, [x8, #0x58]
0x051BB430: de040094  bl #0x51bc7a8
0x051BB434: 681240f9  ldr x8, [x19, #0x20]
0x051BB438: e00314aa  mov x0, x20
0x051BB43C: 086140f9  ldr x8, [x8, #0xc0]
0x051BB440: 013d40f9  ldr x1, [x8, #0x78]
0x051BB444: 08000094  bl #0x51bb464
0x051BB448: 880240f9  ldr x8, [x20]
0x051BB44C: e00314aa  mov x0, x20
0x051BB450: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB454: 029d41f9  ldr x2, [x8, #0x338]
0x051BB458: 01a141f9  ldr x1, [x8, #0x340]
0x051BB45C: fe0742f8  ldr x30, [sp], #0x20
0x051BB460: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB464 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$TrySetStateToPendingActivation
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___TrySetStateToPendingActivation (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB464* method);
; bytes=228 sha256=ec5e3af231d78d9080833cd5049197cb7f131340967feb159de315b62433d6e7 status=arm64_complete_bound indexed_start=True
0x051BB464: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BB468: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BB46C: 145b0190  adrp x20, #0x7d1b000
0x051BB470: 88e67739  ldrb w8, [x20, #0xdf9]
0x051BB474: f30300aa  mov x19, x0
0x051BB478: c8000037  tbnz w8, #0, #0x51bb490
0x051BB47C: 202601d0  adrp x0, #0x7681000
0x051BB480: 003846f9  ldr x0, [x0, #0xc70]
0x051BB484: 65157f97  bl #0x3180a18
0x051BB488: 28008052  movz w8, #0x1
0x051BB48C: 88e63739  strb w8, [x20, #0xdf9]
0x051BB490: 681241b9  ldr w8, [x19, #0x110]
0x051BB494: 1f090071  cmp w8, #2
0x051BB498: 01040054  b.ne #0x51bb518
0x051BB49C: 742640f9  ldr x20, [x19, #0x48]
0x051BB4A0: 340500b4  cbz x20, #0x51bb544
0x051BB4A4: 2a2601d0  adrp x10, #0x7681000
0x051BB4A8: 880240f9  ldr x8, [x20]
0x051BB4AC: 757640f9  ldr x21, [x19, #0xe8]
0x051BB4B0: 4a3946f9  ldr x10, [x10, #0xc70]
0x051BB4B4: 095d4279  ldrh w9, [x8, #0x12e]
0x051BB4B8: 410140f9  ldr x1, [x10]
0x051BB4BC: 290100b4  cbz x9, #0x51bb4e0
0x051BB4C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BB4C4: 4a210091  add x10, x10, #8
0x051BB4C8: 4b815ff8  ldur x11, [x10, #-8]
0x051BB4CC: 7f0101eb  cmp x11, x1
0x051BB4D0: 00010054  b.eq #0x51bb4f0
0x051BB4D4: 290500f1  subs x9, x9, #1
0x051BB4D8: 4a410091  add x10, x10, #0x10
0x051BB4DC: 61ffff54  b.ne #0x51bb4c8
0x051BB4E0: 42008052  movz w2, #0x2
0x051BB4E4: e00314aa  mov x0, x20
0x051BB4E8: 8a6d7e97  bl #0x3156b10
0x051BB4EC: 05000014  b #0x51bb500
0x051BB4F0: 490140b9  ldr w9, [x10]
0x051BB4F4: 29090011  add w9, w9, #2
0x051BB4F8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BB4FC: 00e10491  add x0, x8, #0x138
0x051BB500: 080840a9  ldp x8, x2, [x0]
0x051BB504: e00314aa  mov x0, x20
0x051BB508: e10315aa  mov x1, x21
0x051BB50C: 00013fd6  blr x8
0x051BB510: 20010036  tbz w0, #0, #0x51bb534
0x051BB514: 681241b9  ldr w8, [x19, #0x110]
0x051BB518: 1f050071  cmp w8, #1
0x051BB51C: e1000054  b.ne #0x51bb538
0x051BB520: 687a40f9  ldr x8, [x19, #0xf0]
0x051BB524: 080100b4  cbz x8, #0x51bb544
0x051BB528: 081140b9  ldr w8, [x8, #0x10]
0x051BB52C: 1f250071  cmp w8, #9
0x051BB530: 41000054  b.ne #0x51bb538
0x051BB534: 7f1201b9  str wzr, [x19, #0x110]
0x051BB538: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB53C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BB540: c0035fd6  ret
0x051BB544: da157f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB548 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnStatusChanged
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnStatusChanged (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, int32_t status, const MethodInfo_51BB548* method);
; bytes=412 sha256=a98fd7539f2cd3c87bad230e6435b859fbbe3bd2409e43c0a92d9584e248b09e status=arm64_complete_bound indexed_start=True
0x051BB548: ff4301d1  sub sp, sp, #0x50
0x051BB54C: fe1300f9  str x30, [sp, #0x20]
0x051BB550: f65703a9  stp x22, x21, [sp, #0x30]
0x051BB554: f44f04a9  stp x20, x19, [sp, #0x40]
0x051BB558: 165b0190  adrp x22, #0x7d1b000
0x051BB55C: c8ea7739  ldrb w8, [x22, #0xdfa]
0x051BB560: f40302aa  mov x20, x2
0x051BB564: f503012a  mov w21, w1
0x051BB568: f30300aa  mov x19, x0
0x051BB56C: 08030037  tbnz w8, #0, #0x51bb5cc
0x051BB570: 802501d0  adrp x0, #0x766d000
0x051BB574: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BB578: 28157f97  bl #0x3180a18
0x051BB57C: 202601d0  adrp x0, #0x7681000
0x051BB580: 003c46f9  ldr x0, [x0, #0xc78]
0x051BB584: 25157f97  bl #0x3180a18
0x051BB588: 202601d0  adrp x0, #0x7681000
0x051BB58C: 004046f9  ldr x0, [x0, #0xc80]
0x051BB590: 22157f97  bl #0x3180a18
0x051BB594: 202601d0  adrp x0, #0x7681000
0x051BB598: 004446f9  ldr x0, [x0, #0xc88]
0x051BB59C: 1f157f97  bl #0x3180a18
0x051BB5A0: 202601d0  adrp x0, #0x7681000
0x051BB5A4: 004846f9  ldr x0, [x0, #0xc90]
0x051BB5A8: 1c157f97  bl #0x3180a18
0x051BB5AC: a02401b0  adrp x0, #0x7650000
0x051BB5B0: 00dc41f9  ldr x0, [x0, #0x3b8]
0x051BB5B4: 19157f97  bl #0x3180a18
0x051BB5B8: 20260190  adrp x0, #0x767f000
0x051BB5BC: 005845f9  ldr x0, [x0, #0xab0]
0x051BB5C0: 16157f97  bl #0x3180a18
0x051BB5C4: 28008052  movz w8, #0x1
0x051BB5C8: c8ea3739  strb w8, [x22, #0xdfa]
0x051BB5CC: f5020034  cbz w21, #0x51bb628
0x051BB5D0: 687a40f9  ldr x8, [x19, #0xf0]
0x051BB5D4: 680800b4  cbz x8, #0x51bb6e0
0x051BB5D8: 891240f9  ldr x9, [x20, #0x20]
0x051BB5DC: e00313aa  mov x0, x19
0x051BB5E0: 296140f9  ldr x9, [x9, #0xc0]
0x051BB5E4: 151100b9  str w21, [x8, #0x10]
0x051BB5E8: 215140f9  ldr x1, [x9, #0xa0]
0x051BB5EC: 8e040094  bl #0x51bc824
0x051BB5F0: 881240f9  ldr x8, [x20, #0x20]
0x051BB5F4: e00313aa  mov x0, x19
0x051BB5F8: 086140f9  ldr x8, [x8, #0xc0]
0x051BB5FC: 013d40f9  ldr x1, [x8, #0x78]
0x051BB600: 99ffff97  bl #0x51bb464
0x051BB604: 680240f9  ldr x8, [x19]
0x051BB608: e00313aa  mov x0, x19
0x051BB60C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x051BB610: f65743a9  ldp x22, x21, [sp, #0x30]
0x051BB614: 029d41f9  ldr x2, [x8, #0x338]
0x051BB618: 01a141f9  ldr x1, [x8, #0x340]
0x051BB61C: fe1340f9  ldr x30, [sp, #0x20]
0x051BB620: ff430191  add sp, sp, #0x50
0x051BB624: 40001fd6  br x2
0x051BB628: 282601d0  adrp x8, #0x7681000
0x051BB62C: 083d46f9  ldr x8, [x8, #0xc78]
0x051BB630: 09008092  movn x9, #0
0x051BB634: e0230091  add x0, sp, #8
0x051BB638: e1031faa  mov x1, xzr
0x051BB63C: 080140f9  ldr x8, [x8]
0x051BB640: ff1b00b9  str wzr, [sp, #0x18]
0x051BB644: e8a700a9  stp x8, x9, [sp, #8]
0x051BB648: 27481494  bl #0x56cd6e4
0x051BB64C: 282601d0  adrp x8, #0x7681000
0x051BB650: 084946f9  ldr x8, [x8, #0xc90]
0x051BB654: 292601d0  adrp x9, #0x7681000
0x051BB658: 294146f9  ldr x9, [x9, #0xc80]
0x051BB65C: e10300aa  mov x1, x0
0x051BB660: 080140f9  ldr x8, [x8]
0x051BB664: e3031faa  mov x3, xzr
0x051BB668: 220140f9  ldr x2, [x9]
0x051BB66C: e00308aa  mov x0, x8
0x051BB670: b2ef0c94  bl #0x54f7538
0x051BB674: 882501d0  adrp x8, #0x766d000
0x051BB678: 086d46f9  ldr x8, [x8, #0xcd8]
0x051BB67C: f30300aa  mov x19, x0
0x051BB680: 080140f9  ldr x8, [x8]
0x051BB684: 09e140b9  ldr w9, [x8, #0xe0]
0x051BB688: 69000035  cbnz w9, #0x51bb694
0x051BB68C: e00308aa  mov x0, x8
0x051BB690: 3f157f97  bl #0x3180b8c
0x051BB694: a82401b0  adrp x8, #0x7650000
0x051BB698: 292601d0  adrp x9, #0x7681000
0x051BB69C: 2a260190  adrp x10, #0x767f000
0x051BB6A0: 08dd41f9  ldr x8, [x8, #0x3b8]
0x051BB6A4: 294546f9  ldr x9, [x9, #0xc88]
0x051BB6A8: 4a5945f9  ldr x10, [x10, #0xab0]
0x051BB6AC: e00313aa  mov x0, x19
0x051BB6B0: 010140f9  ldr x1, [x8]
0x051BB6B4: 230140f9  ldr x3, [x9]
0x051BB6B8: 440140f9  ldr x4, [x10]
0x051BB6BC: e2031faa  mov x2, xzr
0x051BB6C0: e5031faa  mov x5, xzr
0x051BB6C4: e6031faa  mov x6, xzr
0x051BB6C8: 5bc30a94  bl #0x546c434
0x051BB6CC: f44f44a9  ldp x20, x19, [sp, #0x40]
0x051BB6D0: f65743a9  ldp x22, x21, [sp, #0x30]
0x051BB6D4: fe1340f9  ldr x30, [sp, #0x20]
0x051BB6D8: ff430191  add sp, sp, #0x50
0x051BB6DC: c0035fd6  ret
0x051BB6E0: 73157f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB6E4 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$ActivateOrStartEvent
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___ActivateOrStartEvent (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB6E4* method);
; bytes=116 sha256=adea9344ff7dfb36713863448eb6f420f222d79257709611ea8f0bf4656e5c3c status=arm64_complete_bound indexed_start=True
0x051BB6E4: fe0f1ff8  str x30, [sp, #-0x10]!
0x051BB6E8: 08404239  ldrb w8, [x0, #0x90]
0x051BB6EC: a8020034  cbz w8, #0x51bb740
0x051BB6F0: 087840f9  ldr x8, [x0, #0xf0]
0x051BB6F4: 080300b4  cbz x8, #0x51bb754
0x051BB6F8: 2a1040f9  ldr x10, [x1, #0x20]
0x051BB6FC: 091140b9  ldr w9, [x8, #0x10]
0x051BB700: 486140f9  ldr x8, [x10, #0xc0]
0x051BB704: 3f090071  cmp w9, #2
0x051BB708: 81000054  b.ne #0x51bb718
0x051BB70C: 015d40f9  ldr x1, [x8, #0xb8]
0x051BB710: fe0741f8  ldr x30, [sp], #0x10
0x051BB714: 52050014  b #0x51bcc5c
0x051BB718: 2a0d0051  sub w10, w9, #3
0x051BB71C: 5f090071  cmp w10, #2
0x051BB720: 43010054  b.lo #0x51bb748
0x051BB724: 3f250071  cmp w9, #9
0x051BB728: c1000054  b.ne #0x51bb740
0x051BB72C: 080040f9  ldr x8, [x0]
0x051BB730: 020542f9  ldr x2, [x8, #0x408]
0x051BB734: 010942f9  ldr x1, [x8, #0x410]
0x051BB738: fe0741f8  ldr x30, [sp], #0x10
0x051BB73C: 40001fd6  br x2
0x051BB740: fe0741f8  ldr x30, [sp], #0x10
0x051BB744: c0035fd6  ret
0x051BB748: 015540f9  ldr x1, [x8, #0xa8]
0x051BB74C: fe0741f8  ldr x30, [sp], #0x10
0x051BB750: 57000014  b #0x51bb8ac
0x051BB754: 56157f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB758 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$ActivateRemoteLiveOpEvent
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___ActivateRemoteLiveOpEvent (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB758* method);
; bytes=168 sha256=6a0e052adb7916a8473267166cc8b94ac7422af42a4ae478414442f9043a910c status=arm64_complete_bound indexed_start=True
0x051BB758: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BB75C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BB760: 135b0190  adrp x19, #0x7d1b000
0x051BB764: 68ee7739  ldrb w8, [x19, #0xdfb]
0x051BB768: f40300aa  mov x20, x0
0x051BB76C: c8000037  tbnz w8, #0, #0x51bb784
0x051BB770: 202601d0  adrp x0, #0x7681000
0x051BB774: 003846f9  ldr x0, [x0, #0xc70]
0x051BB778: a8147f97  bl #0x3180a18
0x051BB77C: 28008052  movz w8, #0x1
0x051BB780: 68ee3739  strb w8, [x19, #0xdfb]
0x051BB784: 932640f9  ldr x19, [x20, #0x48]
0x051BB788: b30300b4  cbz x19, #0x51bb7fc
0x051BB78C: 2a2601d0  adrp x10, #0x7681000
0x051BB790: 680240f9  ldr x8, [x19]
0x051BB794: 4a3946f9  ldr x10, [x10, #0xc70]
0x051BB798: 947640f9  ldr x20, [x20, #0xe8]
0x051BB79C: 095d4279  ldrh w9, [x8, #0x12e]
0x051BB7A0: 410140f9  ldr x1, [x10]
0x051BB7A4: 290100b4  cbz x9, #0x51bb7c8
0x051BB7A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BB7AC: 4a210091  add x10, x10, #8
0x051BB7B0: 4b815ff8  ldur x11, [x10, #-8]
0x051BB7B4: 7f0101eb  cmp x11, x1
0x051BB7B8: 00010054  b.eq #0x51bb7d8
0x051BB7BC: 290500f1  subs x9, x9, #1
0x051BB7C0: 4a410091  add x10, x10, #0x10
0x051BB7C4: 61ffff54  b.ne #0x51bb7b0
0x051BB7C8: e00313aa  mov x0, x19
0x051BB7CC: e2031f2a  mov w2, wzr
0x051BB7D0: d06c7e97  bl #0x3156b10
0x051BB7D4: 04000014  b #0x51bb7e4
0x051BB7D8: 490180b9  ldrsw x9, [x10]
0x051BB7DC: 0811098b  add x8, x8, x9, lsl #4
0x051BB7E0: 00e10491  add x0, x8, #0x138
0x051BB7E4: 030840a9  ldp x3, x2, [x0]
0x051BB7E8: e00313aa  mov x0, x19
0x051BB7EC: e10314aa  mov x1, x20
0x051BB7F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB7F4: fe0742f8  ldr x30, [sp], #0x20
0x051BB7F8: 60001fd6  br x3
0x051BB7FC: 2c157f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB800 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$SetupRemoteLiveOp
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___SetupRemoteLiveOp (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB800* method);
; bytes=172 sha256=42bba4e7cd4a42bc8dce1786b12ab22fbb50731a5122c98f87a97c9bff83e5b3 status=arm64_complete_bound indexed_start=True
0x051BB800: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BB804: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BB808: 135b0190  adrp x19, #0x7d1b000
0x051BB80C: 68f27739  ldrb w8, [x19, #0xdfc]
0x051BB810: f40300aa  mov x20, x0
0x051BB814: c8000037  tbnz w8, #0, #0x51bb82c
0x051BB818: c0250190  adrp x0, #0x7673000
0x051BB81C: 007446f9  ldr x0, [x0, #0xce8]
0x051BB820: 7e147f97  bl #0x3180a18
0x051BB824: 28008052  movz w8, #0x1
0x051BB828: 68f23739  strb w8, [x19, #0xdfc]
0x051BB82C: 934240f9  ldr x19, [x20, #0x80]
0x051BB830: d30300b4  cbz x19, #0x51bb8a8
0x051BB834: ca250190  adrp x10, #0x7673000
0x051BB838: 680240f9  ldr x8, [x19]
0x051BB83C: 4a7546f9  ldr x10, [x10, #0xce8]
0x051BB840: 947640f9  ldr x20, [x20, #0xe8]
0x051BB844: 095d4279  ldrh w9, [x8, #0x12e]
0x051BB848: 410140f9  ldr x1, [x10]
0x051BB84C: 290100b4  cbz x9, #0x51bb870
0x051BB850: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BB854: 4a210091  add x10, x10, #8
0x051BB858: 4b815ff8  ldur x11, [x10, #-8]
0x051BB85C: 7f0101eb  cmp x11, x1
0x051BB860: 00010054  b.eq #0x51bb880
0x051BB864: 290500f1  subs x9, x9, #1
0x051BB868: 4a410091  add x10, x10, #0x10
0x051BB86C: 61ffff54  b.ne #0x51bb858
0x051BB870: e00313aa  mov x0, x19
0x051BB874: e2031f2a  mov w2, wzr
0x051BB878: a66c7e97  bl #0x3156b10
0x051BB87C: 04000014  b #0x51bb88c
0x051BB880: 490180b9  ldrsw x9, [x10]
0x051BB884: 0811098b  add x8, x8, x9, lsl #4
0x051BB888: 00e10491  add x0, x8, #0x138
0x051BB88C: 040c40a9  ldp x4, x3, [x0]
0x051BB890: e00313aa  mov x0, x19
0x051BB894: e10314aa  mov x1, x20
0x051BB898: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB89C: e2031faa  mov x2, xzr
0x051BB8A0: fe0742f8  ldr x30, [sp], #0x20
0x051BB8A4: 80001fd6  br x4
0x051BB8A8: 01157f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB8AC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$ActivateEvent
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___ActivateEvent (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB8AC* method);
; bytes=256 sha256=8987d4bf7017754f8e7125889d5b49c883b37c005c7a5873de01f03bbb9c9e75 status=arm64_complete_bound indexed_start=True
0x051BB8AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BB8B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BB8B4: 145b0190  adrp x20, #0x7d1b000
0x051BB8B8: 88f67739  ldrb w8, [x20, #0xdfd]
0x051BB8BC: f30300aa  mov x19, x0
0x051BB8C0: c8000037  tbnz w8, #0, #0x51bb8d8
0x051BB8C4: 202601d0  adrp x0, #0x7681000
0x051BB8C8: 003846f9  ldr x0, [x0, #0xc70]
0x051BB8CC: 53147f97  bl #0x3180a18
0x051BB8D0: 28008052  movz w8, #0x1
0x051BB8D4: 88f63739  strb w8, [x20, #0xdfd]
0x051BB8D8: 681241b9  ldr w8, [x19, #0x110]
0x051BB8DC: e8040035  cbnz w8, #0x51bb978
0x051BB8E0: 742640f9  ldr x20, [x19, #0x48]
0x051BB8E4: 340600b4  cbz x20, #0x51bb9a8
0x051BB8E8: 2a2601d0  adrp x10, #0x7681000
0x051BB8EC: 880240f9  ldr x8, [x20]
0x051BB8F0: 4a3946f9  ldr x10, [x10, #0xc70]
0x051BB8F4: 095d4279  ldrh w9, [x8, #0x12e]
0x051BB8F8: 410140f9  ldr x1, [x10]
0x051BB8FC: 290100b4  cbz x9, #0x51bb920
0x051BB900: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BB904: 4a210091  add x10, x10, #8
0x051BB908: 4b815ff8  ldur x11, [x10, #-8]
0x051BB90C: 7f0101eb  cmp x11, x1
0x051BB910: 00010054  b.eq #0x51bb930
0x051BB914: 290500f1  subs x9, x9, #1
0x051BB918: 4a410091  add x10, x10, #0x10
0x051BB91C: 61ffff54  b.ne #0x51bb908
0x051BB920: 62008052  movz w2, #0x3
0x051BB924: e00314aa  mov x0, x20
0x051BB928: 7a6c7e97  bl #0x3156b10
0x051BB92C: 05000014  b #0x51bb940
0x051BB930: 490140b9  ldr w9, [x10]
0x051BB934: 290d0011  add w9, w9, #3
0x051BB938: 08d1298b  add x8, x8, w9, sxtw #4
0x051BB93C: 00e10491  add x0, x8, #0x138
0x051BB940: 080440a9  ldp x8, x1, [x0]
0x051BB944: e00314aa  mov x0, x20
0x051BB948: 00013fd6  blr x8
0x051BB94C: 60010036  tbz w0, #0, #0x51bb978
0x051BB950: 687a40f9  ldr x8, [x19, #0xf0]
0x051BB954: a80200b4  cbz x8, #0x51bb9a8
0x051BB958: 08414139  ldrb w8, [x8, #0x50]
0x051BB95C: 48010034  cbz w8, #0x51bb984
0x051BB960: 680240f9  ldr x8, [x19]
0x051BB964: 49008052  movz w9, #0x2
0x051BB968: 691201b9  str w9, [x19, #0x110]
0x051BB96C: 02f541f9  ldr x2, [x8, #0x3e8]
0x051BB970: 01f941f9  ldr x1, [x8, #0x3f0]
0x051BB974: 09000014  b #0x51bb998
0x051BB978: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB97C: fe0742f8  ldr x30, [sp], #0x20
0x051BB980: c0035fd6  ret
0x051BB984: 680240f9  ldr x8, [x19]
0x051BB988: 29008052  movz w9, #0x1
0x051BB98C: 691201b9  str w9, [x19, #0x110]
0x051BB990: 02fd41f9  ldr x2, [x8, #0x3f8]
0x051BB994: 010142f9  ldr x1, [x8, #0x400]
0x051BB998: e00313aa  mov x0, x19
0x051BB99C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BB9A0: fe0742f8  ldr x30, [sp], #0x20
0x051BB9A4: 40001fd6  br x2
0x051BB9A8: c1147f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB9AC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnSuccessfulSetup
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnSuccessfulSetup (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB9AC* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BB9AC: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BB9B0 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$InitializeRemoteContentBundleHandler
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___InitializeRemoteContentBundleHandler (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BB9B0* method);
; bytes=556 sha256=eae522338bf60e459a58c01cb1d43e2432a8f36f58cb0bd909c912201aa6a07e status=arm64_complete_bound indexed_start=True
0x051BB9B0: ff0301d1  sub sp, sp, #0x40
0x051BB9B4: fe0b00f9  str x30, [sp, #0x10]
0x051BB9B8: f65702a9  stp x22, x21, [sp, #0x20]
0x051BB9BC: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BB9C0: 145b0190  adrp x20, #0x7d1b000
0x051BB9C4: 88fa7739  ldrb w8, [x20, #0xdfe]
0x051BB9C8: f30300aa  mov x19, x0
0x051BB9CC: 28010037  tbnz w8, #0, #0x51bb9f0
0x051BB9D0: c02501b0  adrp x0, #0x7674000
0x051BB9D4: 009844f9  ldr x0, [x0, #0x930]
0x051BB9D8: 10147f97  bl #0x3180a18
0x051BB9DC: 002601b0  adrp x0, #0x767c000
0x051BB9E0: 008c42f9  ldr x0, [x0, #0x518]
0x051BB9E4: 0d147f97  bl #0x3180a18
0x051BB9E8: 28008052  movz w8, #0x1
0x051BB9EC: 88fa3739  strb w8, [x20, #0xdfe]
0x051BB9F0: e00313aa  mov x0, x19
0x051BB9F4: 85fcff97  bl #0x51bac08
0x051BB9F8: 600e0036  tbz w0, #0, #0x51bbbc4
0x051BB9FC: 687a40f9  ldr x8, [x19, #0xf0]
0x051BBA00: c80e00b4  cbz x8, #0x51bbbd8
0x051BBA04: 142540f9  ldr x20, [x8, #0x48]
0x051BBA08: f40d00b4  cbz x20, #0x51bbbc4
0x051BBA0C: 680240f9  ldr x8, [x19]
0x051BBA10: e00313aa  mov x0, x19
0x051BBA14: 096541f9  ldr x9, [x8, #0x2c8]
0x051BBA18: 016941f9  ldr x1, [x8, #0x2d0]
0x051BBA1C: 20013fd6  blr x9
0x051BBA20: e10300aa  mov x1, x0
0x051BBA24: e00314aa  mov x0, x20
0x051BBA28: e2031faa  mov x2, xzr
0x051BBA2C: aba34a94  bl #0x64648d8
0x051BBA30: 742a40f9  ldr x20, [x19, #0x50]
0x051BBA34: 340d00b4  cbz x20, #0x51bbbd8
0x051BBA38: d62501b0  adrp x22, #0x7674000
0x051BBA3C: 880240f9  ldr x8, [x20]
0x051BBA40: d69a44f9  ldr x22, [x22, #0x930]
0x051BBA44: f50300aa  mov x21, x0
0x051BBA48: 095d4279  ldrh w9, [x8, #0x12e]
0x051BBA4C: c10240f9  ldr x1, [x22]
0x051BBA50: 290100b4  cbz x9, #0x51bba74
0x051BBA54: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BBA58: 4a210091  add x10, x10, #8
0x051BBA5C: 4b815ff8  ldur x11, [x10, #-8]
0x051BBA60: 7f0101eb  cmp x11, x1
0x051BBA64: 00010054  b.eq #0x51bba84
0x051BBA68: 290500f1  subs x9, x9, #1
0x051BBA6C: 4a410091  add x10, x10, #0x10
0x051BBA70: 61ffff54  b.ne #0x51bba5c
0x051BBA74: 42008052  movz w2, #0x2
0x051BBA78: e00314aa  mov x0, x20
0x051BBA7C: 256c7e97  bl #0x3156b10
0x051BBA80: 05000014  b #0x51bba94
0x051BBA84: 490140b9  ldr w9, [x10]
0x051BBA88: 29090011  add w9, w9, #2
0x051BBA8C: 08d1298b  add x8, x8, w9, sxtw #4
0x051BBA90: 00e10491  add x0, x8, #0x138
0x051BBA94: 081040a9  ldp x8, x4, [x0]
0x051BBA98: 22008052  movz w2, #0x1
0x051BBA9C: e00314aa  mov x0, x20
0x051BBAA0: e10315aa  mov x1, x21
0x051BBAA4: e3031faa  mov x3, xzr
0x051BBAA8: 00013fd6  blr x8
0x051BBAAC: e80313aa  mov x8, x19
0x051BBAB0: 008d0af8  str x0, [x8, #0xa8]!
0x051BBAB4: e00308aa  mov x0, x8
0x051BBAB8: e1031faa  mov x1, xzr
0x051BBABC: c2137f97  bl #0x31809c4
0x051BBAC0: 680240f9  ldr x8, [x19]
0x051BBAC4: e00313aa  mov x0, x19
0x051BBAC8: 096d41f9  ldr x9, [x8, #0x2d8]
0x051BBACC: 017141f9  ldr x1, [x8, #0x2e0]
0x051BBAD0: 20013fd6  blr x9
0x051BBAD4: e1031faa  mov x1, xzr
0x051BBAD8: f5ef0c94  bl #0x54f7aac
0x051BBADC: 40070037  tbnz w0, #0, #0x51bbbc4
0x051BBAE0: 687a40f9  ldr x8, [x19, #0xf0]
0x051BBAE4: a80700b4  cbz x8, #0x51bbbd8
0x051BBAE8: 690240f9  ldr x9, [x19]
0x051BBAEC: 142540f9  ldr x20, [x8, #0x48]
0x051BBAF0: e00313aa  mov x0, x19
0x051BBAF4: 286d41f9  ldr x8, [x9, #0x2d8]
0x051BBAF8: 217141f9  ldr x1, [x9, #0x2e0]
0x051BBAFC: 00013fd6  blr x8
0x051BBB00: d40600b4  cbz x20, #0x51bbbd8
0x051BBB04: e10300aa  mov x1, x0
0x051BBB08: e00314aa  mov x0, x20
0x051BBB0C: e2031faa  mov x2, xzr
0x051BBB10: 72a34a94  bl #0x64648d8
0x051BBB14: e1031faa  mov x1, xzr
0x051BBB18: f40300aa  mov x20, x0
0x051BBB1C: e4ef0c94  bl #0x54f7aac
0x051BBB20: 20050037  tbnz w0, #0, #0x51bbbc4
0x051BBB24: 752a40f9  ldr x21, [x19, #0x50]
0x051BBB28: 950500b4  cbz x21, #0x51bbbd8
0x051BBB2C: a80240f9  ldr x8, [x21]
0x051BBB30: c10240f9  ldr x1, [x22]
0x051BBB34: 095d4279  ldrh w9, [x8, #0x12e]
0x051BBB38: 290100b4  cbz x9, #0x51bbb5c
0x051BBB3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BBB40: 4a210091  add x10, x10, #8
0x051BBB44: 4b815ff8  ldur x11, [x10, #-8]
0x051BBB48: 7f0101eb  cmp x11, x1
0x051BBB4C: 00010054  b.eq #0x51bbb6c
0x051BBB50: 290500f1  subs x9, x9, #1
0x051BBB54: 4a410091  add x10, x10, #0x10
0x051BBB58: 61ffff54  b.ne #0x51bbb44
0x051BBB5C: 42008052  movz w2, #0x2
0x051BBB60: e00315aa  mov x0, x21
0x051BBB64: eb6b7e97  bl #0x3156b10
0x051BBB68: 05000014  b #0x51bbb7c
0x051BBB6C: 490140b9  ldr w9, [x10]
0x051BBB70: 29090011  add w9, w9, #2
0x051BBB74: 08d1298b  add x8, x8, w9, sxtw #4
0x051BBB78: 00e10491  add x0, x8, #0x138
0x051BBB7C: 081040a9  ldp x8, x4, [x0]
0x051BBB80: 22008052  movz w2, #0x1
0x051BBB84: e00315aa  mov x0, x21
0x051BBB88: e10314aa  mov x1, x20
0x051BBB8C: e3031faa  mov x3, xzr
0x051BBB90: 00013fd6  blr x8
0x051BBB94: 082601b0  adrp x8, #0x767c000
0x051BBB98: 088d42f9  ldr x8, [x8, #0x518]
0x051BBB9C: e10300aa  mov x1, x0
0x051BBBA0: e0030091  mov x0, sp
0x051BBBA4: ff7f00a9  stp xzr, xzr, [sp]
0x051BBBA8: 020140f9  ldr x2, [x8]
0x051BBBAC: ca08c397  bl #0x427ded4
0x051BBBB0: e003c03d  ldr q0, [sp]
0x051BBBB4: 60e20291  add x0, x19, #0xb8
0x051BBBB8: e1031faa  mov x1, xzr
0x051BBBBC: 602e803d  str q0, [x19, #0xb0]
0x051BBBC0: 81137f97  bl #0x31809c4
0x051BBBC4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BBBC8: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BBBCC: fe0b40f9  ldr x30, [sp, #0x10]
0x051BBBD0: ff030191  add sp, sp, #0x40
0x051BBBD4: c0035fd6  ret
0x051BBBD8: 35147f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BBBDC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$DownloadAsset
; native signature: strange_extensions_promise_api_IPromise_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___DownloadAsset (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_String_o* assetKey, Merger_RemoteContentManager_Models_RemoteContentBundleHandle_o bundleHandle, const MethodInfo_51BBBDC* method);
; bytes=208 sha256=6c3ecefbd0a879f5fdcff73556d6bad24928666e34ccde4620edda1de6c012e7 status=arm64_complete_bound indexed_start=True
0x051BBBDC: ffc300d1  sub sp, sp, #0x30
0x051BBBE0: fe5701a9  stp x30, x21, [sp, #0x10]
0x051BBBE4: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BBBE8: 155b0190  adrp x21, #0x7d1b000
0x051BBBEC: a8fe7739  ldrb w8, [x21, #0xdff]
0x051BBBF0: f40301aa  mov x20, x1
0x051BBBF4: f30300aa  mov x19, x0
0x051BBBF8: e20700f9  str x2, [sp, #8]
0x051BBBFC: c8000037  tbnz w8, #0, #0x51bbc14
0x051BBC00: c02501b0  adrp x0, #0x7674000
0x051BBC04: 009844f9  ldr x0, [x0, #0x930]
0x051BBC08: 84137f97  bl #0x3180a18
0x051BBC0C: 28008052  movz w8, #0x1
0x051BBC10: a8fe3739  strb w8, [x21, #0xdff]
0x051BBC14: 732a40f9  ldr x19, [x19, #0x50]
0x051BBC18: e0230091  add x0, sp, #8
0x051BBC1C: e10314aa  mov x1, x20
0x051BBC20: e2031faa  mov x2, xzr
0x051BBC24: a4470b94  bl #0x548dab4
0x051BBC28: 130400b4  cbz x19, #0x51bbca8
0x051BBC2C: ca2501b0  adrp x10, #0x7674000
0x051BBC30: 680240f9  ldr x8, [x19]
0x051BBC34: 4a9944f9  ldr x10, [x10, #0x930]
0x051BBC38: f40300aa  mov x20, x0
0x051BBC3C: 095d4279  ldrh w9, [x8, #0x12e]
0x051BBC40: 410140f9  ldr x1, [x10]
0x051BBC44: 290100b4  cbz x9, #0x51bbc68
0x051BBC48: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BBC4C: 4a210091  add x10, x10, #8
0x051BBC50: 4b815ff8  ldur x11, [x10, #-8]
0x051BBC54: 7f0101eb  cmp x11, x1
0x051BBC58: 00010054  b.eq #0x51bbc78
0x051BBC5C: 290500f1  subs x9, x9, #1
0x051BBC60: 4a410091  add x10, x10, #0x10
0x051BBC64: 61ffff54  b.ne #0x51bbc50
0x051BBC68: 62008052  movz w2, #0x3
0x051BBC6C: e00313aa  mov x0, x19
0x051BBC70: a86b7e97  bl #0x3156b10
0x051BBC74: 05000014  b #0x51bbc88
0x051BBC78: 490140b9  ldr w9, [x10]
0x051BBC7C: 290d0011  add w9, w9, #3
0x051BBC80: 08d1298b  add x8, x8, w9, sxtw #4
0x051BBC84: 00e10491  add x0, x8, #0x138
0x051BBC88: 080840a9  ldp x8, x2, [x0]
0x051BBC8C: e00313aa  mov x0, x19
0x051BBC90: e10314aa  mov x1, x20
0x051BBC94: 00013fd6  blr x8
0x051BBC98: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BBC9C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x051BBCA0: ffc30091  add sp, sp, #0x30
0x051BBCA4: c0035fd6  ret
0x051BBCA8: 01147f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BBCAC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$DownloadEventAssets
; native signature: strange_extensions_promise_api_IPromise_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___DownloadEventAssets (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BBCAC* method);
; bytes=1184 sha256=329e289f40ef8924430652a58f46b245055ea40c7de63dfaae36b319d6039a68 status=arm64_complete_bound indexed_start=True
0x051BBCAC: ff4302d1  sub sp, sp, #0x90
0x051BBCB0: fe6f04a9  stp x30, x27, [sp, #0x40]
0x051BBCB4: fa6705a9  stp x26, x25, [sp, #0x50]
0x051BBCB8: f85f06a9  stp x24, x23, [sp, #0x60]
0x051BBCBC: f65707a9  stp x22, x21, [sp, #0x70]
0x051BBCC0: f44f08a9  stp x20, x19, [sp, #0x80]
0x051BBCC4: 145b0190  adrp x20, #0x7d1b000
0x051BBCC8: 88027839  ldrb w8, [x20, #0xe00]
0x051BBCCC: f30300aa  mov x19, x0
0x051BBCD0: 88070037  tbnz w8, #0, #0x51bbdc0
0x051BBCD4: a02501f0  adrp x0, #0x7672000
0x051BBCD8: 00d446f9  ldr x0, [x0, #0xda8]
0x051BBCDC: 4f137f97  bl #0x3180a18
0x051BBCE0: 802501d0  adrp x0, #0x766d000
0x051BBCE4: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BBCE8: 4c137f97  bl #0x3180a18
0x051BBCEC: a02401b0  adrp x0, #0x7650000
0x051BBCF0: 005046f9  ldr x0, [x0, #0xca0]
0x051BBCF4: 49137f97  bl #0x3180a18
0x051BBCF8: a02401b0  adrp x0, #0x7650000
0x051BBCFC: 005446f9  ldr x0, [x0, #0xca8]
0x051BBD00: 46137f97  bl #0x3180a18
0x051BBD04: a02401b0  adrp x0, #0x7650000
0x051BBD08: 005846f9  ldr x0, [x0, #0xcb0]
0x051BBD0C: 43137f97  bl #0x3180a18
0x051BBD10: e0240190  adrp x0, #0x7657000
0x051BBD14: 002446f9  ldr x0, [x0, #0xc48]
0x051BBD18: 40137f97  bl #0x3180a18
0x051BBD1C: e02401f0  adrp x0, #0x765a000
0x051BBD20: 000846f9  ldr x0, [x0, #0xc10]
0x051BBD24: 3d137f97  bl #0x3180a18
0x051BBD28: a02401f0  adrp x0, #0x7652000
0x051BBD2C: 004846f9  ldr x0, [x0, #0xc90]
0x051BBD30: 3a137f97  bl #0x3180a18
0x051BBD34: a0250190  adrp x0, #0x766f000
0x051BBD38: 002441f9  ldr x0, [x0, #0x248]
0x051BBD3C: 37137f97  bl #0x3180a18
0x051BBD40: a02401b0  adrp x0, #0x7650000
0x051BBD44: 006046f9  ldr x0, [x0, #0xcc0]
0x051BBD48: 34137f97  bl #0x3180a18
0x051BBD4C: a02401d0  adrp x0, #0x7651000
0x051BBD50: 002845f9  ldr x0, [x0, #0xa50]
0x051BBD54: 31137f97  bl #0x3180a18
0x051BBD58: 002601b0  adrp x0, #0x767c000
0x051BBD5C: 001443f9  ldr x0, [x0, #0x628]
0x051BBD60: 2e137f97  bl #0x3180a18
0x051BBD64: 002601b0  adrp x0, #0x767c000
0x051BBD68: 004043f9  ldr x0, [x0, #0x680]
0x051BBD6C: 2b137f97  bl #0x3180a18
0x051BBD70: a0250190  adrp x0, #0x766f000
0x051BBD74: 00a445f9  ldr x0, [x0, #0xb48]
0x051BBD78: 28137f97  bl #0x3180a18
0x051BBD7C: 202601d0  adrp x0, #0x7681000
0x051BBD80: 004c46f9  ldr x0, [x0, #0xc98]
0x051BBD84: 25137f97  bl #0x3180a18
0x051BBD88: 202601d0  adrp x0, #0x7681000
0x051BBD8C: 004446f9  ldr x0, [x0, #0xc88]
0x051BBD90: 22137f97  bl #0x3180a18
0x051BBD94: 202601d0  adrp x0, #0x7681000
0x051BBD98: 005046f9  ldr x0, [x0, #0xca0]
0x051BBD9C: 1f137f97  bl #0x3180a18
0x051BBDA0: 202601d0  adrp x0, #0x7681000
0x051BBDA4: 005446f9  ldr x0, [x0, #0xca8]
0x051BBDA8: 1c137f97  bl #0x3180a18
0x051BBDAC: a02401b0  adrp x0, #0x7650000
0x051BBDB0: 00dc41f9  ldr x0, [x0, #0x3b8]
0x051BBDB4: 19137f97  bl #0x3180a18
0x051BBDB8: 28008052  movz w8, #0x1
0x051BBDBC: 88023839  strb w8, [x20, #0xe00]
0x051BBDC0: ff7f02a9  stp xzr, xzr, [sp, #0x20]
0x051BBDC4: ff1b00f9  str xzr, [sp, #0x30]
0x051BBDC8: 748640f9  ldr x20, [x19, #0x108]
0x051BBDCC: e00313aa  mov x0, x19
0x051BBDD0: 8efbff97  bl #0x51bac08
0x051BBDD4: 740400b4  cbz x20, #0x51bbe60
0x051BBDD8: 00040036  tbz w0, #0, #0x51bbe58
0x051BBDDC: 282601d0  adrp x8, #0x7681000
0x051BBDE0: 292601d0  adrp x9, #0x7681000
0x051BBDE4: 617640f9  ldr x1, [x19, #0xe8]
0x051BBDE8: 085546f9  ldr x8, [x8, #0xca8]
0x051BBDEC: 294d46f9  ldr x9, [x9, #0xc98]
0x051BBDF0: e3031faa  mov x3, xzr
0x051BBDF4: 000140f9  ldr x0, [x8]
0x051BBDF8: 220140f9  ldr x2, [x9]
0x051BBDFC: cfed0c94  bl #0x54f7538
0x051BBE00: 882501d0  adrp x8, #0x766d000
0x051BBE04: 086d46f9  ldr x8, [x8, #0xcd8]
0x051BBE08: f40300aa  mov x20, x0
0x051BBE0C: 080140f9  ldr x8, [x8]
0x051BBE10: 09e140b9  ldr w9, [x8, #0xe0]
0x051BBE14: 69000035  cbnz w9, #0x51bbe20
0x051BBE18: e00308aa  mov x0, x8
0x051BBE1C: 5c137f97  bl #0x3180b8c
0x051BBE20: a82401b0  adrp x8, #0x7650000
0x051BBE24: 292601d0  adrp x9, #0x7681000
0x051BBE28: 2a2601d0  adrp x10, #0x7681000
0x051BBE2C: 08dd41f9  ldr x8, [x8, #0x3b8]
0x051BBE30: 294546f9  ldr x9, [x9, #0xc88]
0x051BBE34: 4a5146f9  ldr x10, [x10, #0xca0]
0x051BBE38: e00314aa  mov x0, x20
0x051BBE3C: 010140f9  ldr x1, [x8]
0x051BBE40: 230140f9  ldr x3, [x9]
0x051BBE44: 440140f9  ldr x4, [x10]
0x051BBE48: e2031faa  mov x2, xzr
0x051BBE4C: e5031faa  mov x5, xzr
0x051BBE50: e6031faa  mov x6, xzr
0x051BBE54: 78c10a94  bl #0x546c434
0x051BBE58: 608640f9  ldr x0, [x19, #0x108]
0x051BBE5C: 8e000014  b #0x51bc094
0x051BBE60: a0100036  tbz w0, #0, #0x51bc074
0x051BBE64: a82501f0  adrp x8, #0x7672000
0x051BBE68: 08d546f9  ldr x8, [x8, #0xda8]
0x051BBE6C: 000140f9  ldr x0, [x8]
0x051BBE70: 8c137f97  bl #0x3180ca0
0x051BBE74: e1031faa  mov x1, xzr
0x051BBE78: f50300aa  mov x21, x0
0x051BBE7C: 11615a94  bl #0x68542c0
0x051BBE80: f40313aa  mov x20, x19
0x051BBE84: 950e0cf8  str x21, [x20, #0xc0]!
0x051BBE88: e00314aa  mov x0, x20
0x051BBE8C: e10315aa  mov x1, x21
0x051BBE90: cd127f97  bl #0x31809c4
0x051BBE94: f50313aa  mov x21, x19
0x051BBE98: a80e4b38  ldrb w8, [x21, #0xb0]!
0x051BBE9C: 88030034  cbz w8, #0x51bbf0c
0x051BBEA0: 680240f9  ldr x8, [x19]
0x051BBEA4: e00313aa  mov x0, x19
0x051BBEA8: 097d41f9  ldr x9, [x8, #0x2f8]
0x051BBEAC: 018141f9  ldr x1, [x8, #0x300]
0x051BBEB0: 20013fd6  blr x9
0x051BBEB4: 201000b4  cbz x0, #0x51bc0b8
0x051BBEB8: 081840b9  ldr w8, [x0, #0x18]
0x051BBEBC: 1f050071  cmp w8, #1
0x051BBEC0: 6b020054  b.lt #0x51bbf0c
0x051BBEC4: 680240f9  ldr x8, [x19]
0x051BBEC8: e00313aa  mov x0, x19
0x051BBECC: 097d41f9  ldr x9, [x8, #0x2f8]
0x051BBED0: 018141f9  ldr x1, [x8, #0x300]
0x051BBED4: 20013fd6  blr x9
0x051BBED8: a82401f0  adrp x8, #0x7652000
0x051BBEDC: 084946f9  ldr x8, [x8, #0xc90]
0x051BBEE0: f70300aa  mov x23, x0
0x051BBEE4: 080140f9  ldr x8, [x8]
0x051BBEE8: e00308aa  mov x0, x8
0x051BBEEC: 6d137f97  bl #0x3180ca0
0x051BBEF0: e82401f0  adrp x8, #0x765a000
0x051BBEF4: 080946f9  ldr x8, [x8, #0xc10]
0x051BBEF8: e10317aa  mov x1, x23
0x051BBEFC: f60300aa  mov x22, x0
0x051BBF00: 020140f9  ldr x2, [x8]
0x051BBF04: 0b100494  bl #0x52bff30
0x051BBF08: 02000014  b #0x51bbf10
0x051BBF0C: f6031faa  mov x22, xzr
0x051BBF10: 680240f9  ldr x8, [x19]
0x051BBF14: e00313aa  mov x0, x19
0x051BBF18: 097541f9  ldr x9, [x8, #0x2e8]
0x051BBF1C: 017941f9  ldr x1, [x8, #0x2f0]
0x051BBF20: 20013fd6  blr x9
0x051BBF24: a00c00b4  cbz x0, #0x51bc0b8
0x051BBF28: a82401b0  adrp x8, #0x7650000
0x051BBF2C: 086146f9  ldr x8, [x8, #0xcc0]
0x051BBF30: 010140f9  ldr x1, [x8]
0x051BBF34: e8230091  add x8, sp, #8
0x051BBF38: 4c24ba97  bl #0x4045068
0x051BBF3C: e083c03c  ldur q0, [sp, #8]
0x051BBF40: e80f40f9  ldr x8, [sp, #0x18]
0x051BBF44: b82401b0  adrp x24, #0x7650000
0x051BBF48: b9250190  adrp x25, #0x766f000
0x051BBF4C: fa240190  adrp x26, #0x7657000
0x051BBF50: 185746f9  ldr x24, [x24, #0xca8]
0x051BBF54: 392741f9  ldr x25, [x25, #0x248]
0x051BBF58: 5a2746f9  ldr x26, [x26, #0xc48]
0x051BBF5C: e00b803d  str q0, [sp, #0x20]
0x051BBF60: e81b00f9  str x8, [sp, #0x30]
0x051BBF64: 1b2601b0  adrp x27, #0x767c000
0x051BBF68: 7b4343f9  ldr x27, [x27, #0x680]
0x051BBF6C: 010340f9  ldr x1, [x24]
0x051BBF70: e0830091  add x0, sp, #0x20
0x051BBF74: 9066f997  bl #0x50159b4
0x051BBF78: 60060036  tbz w0, #0, #0x51bc044
0x051BBF7C: f71b40f9  ldr x23, [sp, #0x30]
0x051BBF80: 760100b4  cbz x22, #0x51bbfac
0x051BBF84: 420340f9  ldr x2, [x26]
0x051BBF88: e00316aa  mov x0, x22
0x051BBF8C: e10317aa  mov x1, x23
0x051BBF90: 69110494  bl #0x52c0534
0x051BBF94: c0000036  tbz w0, #0, #0x51bbfac
0x051BBF98: 610340f9  ldr x1, [x27]
0x051BBF9C: e00315aa  mov x0, x21
0x051BBFA0: d807c397  bl #0x427df00
0x051BBFA4: e20300aa  mov x2, x0
0x051BBFA8: 02000014  b #0x51bbfb0
0x051BBFAC: 625640f9  ldr x2, [x19, #0xa8]
0x051BBFB0: e00313aa  mov x0, x19
0x051BBFB4: e10317aa  mov x1, x23
0x051BBFB8: 09ffff97  bl #0x51bbbdc
0x051BBFBC: f70300aa  mov x23, x0
0x051BBFC0: 800700b4  cbz x0, #0x51bc0b0
0x051BBFC4: e80240f9  ldr x8, [x23]
0x051BBFC8: 210340f9  ldr x1, [x25]
0x051BBFCC: 095d4279  ldrh w9, [x8, #0x12e]
0x051BBFD0: 290100b4  cbz x9, #0x51bbff4
0x051BBFD4: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BBFD8: 4a210091  add x10, x10, #8
0x051BBFDC: 4b815ff8  ldur x11, [x10, #-8]
0x051BBFE0: 7f0101eb  cmp x11, x1
0x051BBFE4: 00010054  b.eq #0x51bc004
0x051BBFE8: 290500f1  subs x9, x9, #1
0x051BBFEC: 4a410091  add x10, x10, #0x10
0x051BBFF0: 61ffff54  b.ne #0x51bbfdc
0x051BBFF4: 42018052  movz w2, #0xa
0x051BBFF8: e00317aa  mov x0, x23
0x051BBFFC: c56a7e97  bl #0x3156b10
0x051BC000: 05000014  b #0x51bc014
0x051BC004: 490140b9  ldr w9, [x10]
0x051BC008: 29290011  add w9, w9, #0xa
0x051BC00C: 08d1298b  add x8, x8, w9, sxtw #4
0x051BC010: 00e10491  add x0, x8, #0x138
0x051BC014: 080440a9  ldp x8, x1, [x0]
0x051BC018: e00317aa  mov x0, x23
0x051BC01C: 00013fd6  blr x8
0x051BC020: 60faff34  cbz w0, #0x51bbf6c
0x051BC024: 800240f9  ldr x0, [x20]
0x051BC028: 600400b4  cbz x0, #0x51bc0b4
0x051BC02C: 080040f9  ldr x8, [x0]
0x051BC030: 093d41f9  ldr x9, [x8, #0x278]
0x051BC034: 024141f9  ldr x2, [x8, #0x280]
0x051BC038: e10317aa  mov x1, x23
0x051BC03C: 20013fd6  blr x9
0x051BC040: cbffff17  b #0x51bbf6c
0x051BC044: a8240190  adrp x8, #0x7650000
0x051BC048: 085146f9  ldr x8, [x8, #0xca0]
0x051BC04C: e0830091  add x0, sp, #0x20
0x051BC050: 010140f9  ldr x1, [x8]
0x051BC054: 5766f997  bl #0x50159b0
0x051BC058: 800240f9  ldr x0, [x20]
0x051BC05C: e00200b4  cbz x0, #0x51bc0b8
0x051BC060: e1031faa  mov x1, xzr
0x051BC064: ae5f5a94  bl #0x6853f1c
0x051BC068: 60000034  cbz w0, #0x51bc074
0x051BC06C: 800240f9  ldr x0, [x20]
0x051BC070: 09000014  b #0x51bc094
0x051BC074: 882501f0  adrp x8, #0x766f000
0x051BC078: 08a545f9  ldr x8, [x8, #0xb48]
0x051BC07C: 000140f9  ldr x0, [x8]
0x051BC080: 08e040b9  ldr w8, [x0, #0xe0]
0x051BC084: 48000035  cbnz w8, #0x51bc08c
0x051BC088: c1127f97  bl #0x3180b8c
0x051BC08C: e0031faa  mov x0, xzr
0x051BC090: 06645a94  bl #0x68550a8
0x051BC094: f44f48a9  ldp x20, x19, [sp, #0x80]
0x051BC098: f65747a9  ldp x22, x21, [sp, #0x70]
0x051BC09C: f85f46a9  ldp x24, x23, [sp, #0x60]
0x051BC0A0: fa6745a9  ldp x26, x25, [sp, #0x50]
0x051BC0A4: fe6f44a9  ldp x30, x27, [sp, #0x40]
0x051BC0A8: ff430291  add sp, sp, #0x90
0x051BC0AC: c0035fd6  ret
0x051BC0B0: ff127f97  bl #0x3180cac
0x051BC0B4: fe127f97  bl #0x3180cac
0x051BC0B8: fd127f97  bl #0x3180cac
0x051BC0BC: 07000014  b #0x51bc0d8
0x051BC0C0: 06000014  b #0x51bc0d8
0x051BC0C4: 05000014  b #0x51bc0d8
0x051BC0C8: 04000014  b #0x51bc0d8
0x051BC0CC: 03000014  b #0x51bc0d8
0x051BC0D0: 02000014  b #0x51bc0d8
0x051BC0D4: 01000014  b #0x51bc0d8
0x051BC0D8: f30300aa  mov x19, x0
0x051BC0DC: 3f040071  cmp w1, #1
0x051BC0E0: a1010054  b.ne #0x51bc114
0x051BC0E4: e00313aa  mov x0, x19
0x051BC0E8: 0a4a8094  bl #0x71ce910
0x051BC0EC: 150040f9  ldr x21, [x0]
0x051BC0F0: 0c4a8094  bl #0x71ce920
0x051BC0F4: a8240190  adrp x8, #0x7650000
0x051BC0F8: 085146f9  ldr x8, [x8, #0xca0]
0x051BC0FC: e0830091  add x0, sp, #0x20
0x051BC100: 010140f9  ldr x1, [x8]
0x051BC104: 2b66f997  bl #0x50159b0
0x051BC108: 95faffb4  cbz x21, #0x51bc058
0x051BC10C: e00315aa  mov x0, x21
0x051BC110: e5127f97  bl #0x3180ca4
0x051BC114: f5031faa  mov x21, xzr
0x051BC118: 02000014  b #0x51bc120
0x051BC11C: f30300aa  mov x19, x0
0x051BC120: a8240190  adrp x8, #0x7650000
0x051BC124: 085146f9  ldr x8, [x8, #0xca0]
0x051BC128: 010140f9  ldr x1, [x8]
0x051BC12C: e0830091  add x0, sp, #0x20
0x051BC130: 2066f997  bl #0x50159b0
0x051BC134: 750000b5  cbnz x21, #0x51bc140
0x051BC138: e00313aa  mov x0, x19
0x051BC13C: 07a68297  bl #0x3265958
0x051BC140: e00315aa  mov x0, x21
0x051BC144: d8127f97  bl #0x3180ca4
0x051BC148: f3347197  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC14C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnRemoteLiveOpConfigUpdatedSignal
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnRemoteLiveOpConfigUpdatedSignal (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Merger_RemoteLiveOps_Signals_RemoteLiveOpConfigUpdatedSignal_o* signal, const MethodInfo_51BC14C* method);
; bytes=120 sha256=8688d8873c28d6a18a4d6fae42d10f16e9dabda4d16bdc068bd27512b6a75be6 status=arm64_complete_bound indexed_start=True
0x051BC14C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BC150: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BC154: 610300b4  cbz x1, #0x51bc1c0
0x051BC158: f40301aa  mov x20, x1
0x051BC15C: f30300aa  mov x19, x0
0x051BC160: 007440f9  ldr x0, [x0, #0xe8]
0x051BC164: 210840f9  ldr x1, [x1, #0x10]
0x051BC168: f50302aa  mov x21, x2
0x051BC16C: e2031faa  mov x2, xzr
0x051BC170: c0b90c94  bl #0x54ea870
0x051BC174: 00010037  tbnz w0, #0, #0x51bc194
0x051BC178: 680240f9  ldr x8, [x19]
0x051BC17C: 810a40f9  ldr x1, [x20, #0x10]
0x051BC180: e00313aa  mov x0, x19
0x051BC184: 090d42f9  ldr x9, [x8, #0x418]
0x051BC188: 021142f9  ldr x2, [x8, #0x420]
0x051BC18C: 20013fd6  blr x9
0x051BC190: 20010036  tbz w0, #0, #0x51bc1b4
0x051BC194: a81240f9  ldr x8, [x21, #0x20]
0x051BC198: 810e40f9  ldr x1, [x20, #0x18]
0x051BC19C: e00313aa  mov x0, x19
0x051BC1A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BC1A4: 086140f9  ldr x8, [x8, #0xc0]
0x051BC1A8: 028540f9  ldr x2, [x8, #0x108]
0x051BC1AC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BC1B0: ec000014  b #0x51bc560
0x051BC1B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BC1B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BC1BC: c0035fd6  ret
0x051BC1C0: bb127f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC1C4 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$IsSubEvent
; native signature: bool Merger_RemoteLiveOps_Controllers_EventControllerBase_object___IsSubEvent (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_String_o* eventId, const MethodInfo_51BC1C4* method);
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x051BC1C4: e0031f2a  mov w0, wzr
0x051BC1C8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC1CC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnRemoteLiveOpActivatedSignal
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnRemoteLiveOpActivatedSignal (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Merger_RemoteLiveOps_Signals_RemoteLiveOpActivatedSignal_o* signal, const MethodInfo_51BC1CC* method);
; bytes=704 sha256=8bfe0e7f9141ad76dd90aa78db2821988bc58a06a629b09d0b94faff9a7bdfcf status=arm64_complete_bound indexed_start=True
0x051BC1CC: fe0f1cf8  str x30, [sp, #-0x40]!
0x051BC1D0: f85f01a9  stp x24, x23, [sp, #0x10]
0x051BC1D4: f65702a9  stp x22, x21, [sp, #0x20]
0x051BC1D8: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BC1DC: f65a01f0  adrp x22, #0x7d1b000
0x051BC1E0: c8067839  ldrb w8, [x22, #0xe01]
0x051BC1E4: f40302aa  mov x20, x2
0x051BC1E8: f50301aa  mov x21, x1
0x051BC1EC: f30300aa  mov x19, x0
0x051BC1F0: e8010037  tbnz w8, #0, #0x51bc22c
0x051BC1F4: 00260190  adrp x0, #0x767c000
0x051BC1F8: 00b440f9  ldr x0, [x0, #0x168]
0x051BC1FC: 07127f97  bl #0x3180a18
0x051BC200: a02501b0  adrp x0, #0x7671000
0x051BC204: 006047f9  ldr x0, [x0, #0xec0]
0x051BC208: 04127f97  bl #0x3180a18
0x051BC20C: 202601b0  adrp x0, #0x7681000
0x051BC210: 005846f9  ldr x0, [x0, #0xcb0]
0x051BC214: 01127f97  bl #0x3180a18
0x051BC218: 00260190  adrp x0, #0x767c000
0x051BC21C: 00bc40f9  ldr x0, [x0, #0x178]
0x051BC220: fe117f97  bl #0x3180a18
0x051BC224: 28008052  movz w8, #0x1
0x051BC228: c8063839  strb w8, [x22, #0xe01]
0x051BC22C: 681241b9  ldr w8, [x19, #0x110]
0x051BC230: 18260190  adrp x24, #0x767c000
0x051BC234: 18b740f9  ldr x24, [x24, #0x168]
0x051BC238: 08791f12  and w8, w8, #0xfffffffe
0x051BC23C: 1f110071  cmp w8, #4
0x051BC240: c1020054  b.ne #0x51bc298
0x051BC244: 000340f9  ldr x0, [x24]
0x051BC248: 751240f9  ldr x21, [x19, #0x20]
0x051BC24C: 95127f97  bl #0x3180ca0
0x051BC250: 881240f9  ldr x8, [x20, #0x20]
0x051BC254: e10313aa  mov x1, x19
0x051BC258: e3031faa  mov x3, xzr
0x051BC25C: f40300aa  mov x20, x0
0x051BC260: 086140f9  ldr x8, [x8, #0xc0]
0x051BC264: 021140f9  ldr x2, [x8, #0x20]
0x051BC268: db970594  bl #0x53221d4
0x051BC26C: f51000b4  cbz x21, #0x51bc488
0x051BC270: 282601b0  adrp x8, #0x7681000
0x051BC274: 085946f9  ldr x8, [x8, #0xcb0]
0x051BC278: e00315aa  mov x0, x21
0x051BC27C: e10314aa  mov x1, x20
0x051BC280: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BC284: 020140f9  ldr x2, [x8]
0x051BC288: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BC28C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BC290: fe0744f8  ldr x30, [sp], #0x40
0x051BC294: 03a7af17  b #0x3da5ea0
0x051BC298: 950f00b4  cbz x21, #0x51bc488
0x051BC29C: a00e40f9  ldr x0, [x21, #0x18]
0x051BC2A0: e1031faa  mov x1, xzr
0x051BC2A4: 02ee0c94  bl #0x54f7aac
0x051BC2A8: f60313aa  mov x22, x19
0x051BC2AC: c88e4ef8  ldr x8, [x22, #0xe8]!
0x051BC2B0: 80000036  tbz w0, #0, #0x51bc2c0
0x051BC2B4: a80e00b4  cbz x8, #0x51bc488
0x051BC2B8: a10a40f9  ldr x1, [x21, #0x10]
0x051BC2BC: 03000014  b #0x51bc2c8
0x051BC2C0: 480e00b4  cbz x8, #0x51bc488
0x051BC2C4: a10e40f9  ldr x1, [x21, #0x18]
0x051BC2C8: e00308aa  mov x0, x8
0x051BC2CC: e2031faa  mov x2, xzr
0x051BC2D0: dae90c94  bl #0x54f6a38
0x051BC2D4: 00050036  tbz w0, #0, #0x51bc374
0x051BC2D8: 000340f9  ldr x0, [x24]
0x051BC2DC: 771240f9  ldr x23, [x19, #0x20]
0x051BC2E0: 70127f97  bl #0x3180ca0
0x051BC2E4: 881240f9  ldr x8, [x20, #0x20]
0x051BC2E8: e10313aa  mov x1, x19
0x051BC2EC: e3031faa  mov x3, xzr
0x051BC2F0: f80300aa  mov x24, x0
0x051BC2F4: 086140f9  ldr x8, [x8, #0xc0]
0x051BC2F8: 021140f9  ldr x2, [x8, #0x20]
0x051BC2FC: b6970594  bl #0x53221d4
0x051BC300: 570c00b4  cbz x23, #0x51bc488
0x051BC304: 08260190  adrp x8, #0x767c000
0x051BC308: 08bd40f9  ldr x8, [x8, #0x178]
0x051BC30C: e00317aa  mov x0, x23
0x051BC310: e10318aa  mov x1, x24
0x051BC314: 020140f9  ldr x2, [x8]
0x051BC318: bca7af97  bl #0x3da6208
0x051BC31C: a8824039  ldrb w8, [x21, #0x20]
0x051BC320: 48030034  cbz w8, #0x51bc388
0x051BC324: 776640f9  ldr x23, [x19, #0xc8]
0x051BC328: 170b00b4  cbz x23, #0x51bc488
0x051BC32C: aa2501b0  adrp x10, #0x7671000
0x051BC330: e80240f9  ldr x8, [x23]
0x051BC334: 4a6147f9  ldr x10, [x10, #0xec0]
0x051BC338: 095d4279  ldrh w9, [x8, #0x12e]
0x051BC33C: 410140f9  ldr x1, [x10]
0x051BC340: 290100b4  cbz x9, #0x51bc364
0x051BC344: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BC348: 4a210091  add x10, x10, #8
0x051BC34C: 4b815ff8  ldur x11, [x10, #-8]
0x051BC350: 7f0101eb  cmp x11, x1
0x051BC354: c0020054  b.eq #0x51bc3ac
0x051BC358: 290500f1  subs x9, x9, #1
0x051BC35C: 4a410091  add x10, x10, #0x10
0x051BC360: 61ffff54  b.ne #0x51bc34c
0x051BC364: 22008052  movz w2, #0x1
0x051BC368: e00317aa  mov x0, x23
0x051BC36C: e9697e97  bl #0x3156b10
0x051BC370: 13000014  b #0x51bc3bc
0x051BC374: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BC378: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BC37C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BC380: fe0744f8  ldr x30, [sp], #0x40
0x051BC384: c0035fd6  ret
0x051BC388: 680240f9  ldr x8, [x19]
0x051BC38C: e00313aa  mov x0, x19
0x051BC390: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BC394: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BC398: 022d42f9  ldr x2, [x8, #0x458]
0x051BC39C: 013142f9  ldr x1, [x8, #0x460]
0x051BC3A0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BC3A4: fe0744f8  ldr x30, [sp], #0x40
0x051BC3A8: 40001fd6  br x2
0x051BC3AC: 490140b9  ldr w9, [x10]
0x051BC3B0: 29050011  add w9, w9, #1
0x051BC3B4: 08d1298b  add x8, x8, w9, sxtw #4
0x051BC3B8: 00e10491  add x0, x8, #0x138
0x051BC3BC: 080440a9  ldp x8, x1, [x0]
0x051BC3C0: e00317aa  mov x0, x23
0x051BC3C4: 00013fd6  blr x8
0x051BC3C8: 28008052  movz w8, #0x1
0x051BC3CC: 68e20339  strb w8, [x19, #0xf8]
0x051BC3D0: a11640f9  ldr x1, [x21, #0x28]
0x051BC3D4: 60020491  add x0, x19, #0x100
0x051BC3D8: 618200f9  str x1, [x19, #0x100]
0x051BC3DC: 7a117f97  bl #0x31809c4
0x051BC3E0: a10a40f9  ldr x1, [x21, #0x10]
0x051BC3E4: e00316aa  mov x0, x22
0x051BC3E8: 617600f9  str x1, [x19, #0xe8]
0x051BC3EC: 76117f97  bl #0x31809c4
0x051BC3F0: a91e40f9  ldr x9, [x21, #0x38]
0x051BC3F4: 687a40f9  ldr x8, [x19, #0xf0]
0x051BC3F8: 690000b4  cbz x9, #0x51bc404
0x051BC3FC: 880000b5  cbnz x8, #0x51bc40c
0x051BC400: 22000014  b #0x51bc488
0x051BC404: 280400b4  cbz x8, #0x51bc488
0x051BC408: 091140f9  ldr x9, [x8, #0x20]
0x051BC40C: 091100f9  str x9, [x8, #0x20]
0x051BC410: a92240f9  ldr x9, [x21, #0x40]
0x051BC414: 490000b5  cbnz x9, #0x51bc41c
0x051BC418: 090d40f9  ldr x9, [x8, #0x18]
0x051BC41C: 090d00f9  str x9, [x8, #0x18]
0x051BC420: 680240f9  ldr x8, [x19]
0x051BC424: e00313aa  mov x0, x19
0x051BC428: 094d42f9  ldr x9, [x8, #0x498]
0x051BC42C: 015142f9  ldr x1, [x8, #0x4a0]
0x051BC430: 20013fd6  blr x9
0x051BC434: 881240f9  ldr x8, [x20, #0x20]
0x051BC438: a11a40f9  ldr x1, [x21, #0x30]
0x051BC43C: e00313aa  mov x0, x19
0x051BC440: 086140f9  ldr x8, [x8, #0xc0]
0x051BC444: 028540f9  ldr x2, [x8, #0x108]
0x051BC448: 46000094  bl #0x51bc560
0x051BC44C: 881240f9  ldr x8, [x20, #0x20]
0x051BC450: e00313aa  mov x0, x19
0x051BC454: 086140f9  ldr x8, [x8, #0xc0]
0x051BC458: 015d40f9  ldr x1, [x8, #0xb8]
0x051BC45C: 00020094  bl #0x51bcc5c
0x051BC460: 680240f9  ldr x8, [x19]
0x051BC464: e00313aa  mov x0, x19
0x051BC468: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BC46C: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BC470: 031542f9  ldr x3, [x8, #0x428]
0x051BC474: 021942f9  ldr x2, [x8, #0x430]
0x051BC478: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BC47C: e1031f2a  mov w1, wzr
0x051BC480: fe0744f8  ldr x30, [sp], #0x40
0x051BC484: 60001fd6  br x3
0x051BC488: 09127f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC48C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$ApplyStates
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___ApplyStates (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, bool shouldUpdateBoardItems, const MethodInfo_51BC48C* method);
; bytes=208 sha256=10627a71df81292b7132537ba13fe5104735df7d89b31a7d6b89ecc1ed05ff3b status=arm64_complete_bound indexed_start=True
0x051BC48C: fe0f1df8  str x30, [sp, #-0x30]!
0x051BC490: f65701a9  stp x22, x21, [sp, #0x10]
0x051BC494: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BC498: f55a01f0  adrp x21, #0x7d1b000
0x051BC49C: a80a7839  ldrb w8, [x21, #0xe02]
0x051BC4A0: f403012a  mov w20, w1
0x051BC4A4: f30300aa  mov x19, x0
0x051BC4A8: c8000037  tbnz w8, #0, #0x51bc4c0
0x051BC4AC: 802501f0  adrp x0, #0x766f000
0x051BC4B0: 00a841f9  ldr x0, [x0, #0x350]
0x051BC4B4: 59117f97  bl #0x3180a18
0x051BC4B8: 28008052  movz w8, #0x1
0x051BC4BC: a80a3839  strb w8, [x21, #0xe02]
0x051BC4C0: 758240f9  ldr x21, [x19, #0x100]
0x051BC4C4: b50300b4  cbz x21, #0x51bc538
0x051BC4C8: 763640f9  ldr x22, [x19, #0x68]
0x051BC4CC: 760400b4  cbz x22, #0x51bc558
0x051BC4D0: 8a2501f0  adrp x10, #0x766f000
0x051BC4D4: c80240f9  ldr x8, [x22]
0x051BC4D8: 4aa941f9  ldr x10, [x10, #0x350]
0x051BC4DC: 095d4279  ldrh w9, [x8, #0x12e]
0x051BC4E0: 410140f9  ldr x1, [x10]
0x051BC4E4: 290100b4  cbz x9, #0x51bc508
0x051BC4E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BC4EC: 4a210091  add x10, x10, #8
0x051BC4F0: 4b815ff8  ldur x11, [x10, #-8]
0x051BC4F4: 7f0101eb  cmp x11, x1
0x051BC4F8: 00010054  b.eq #0x51bc518
0x051BC4FC: 290500f1  subs x9, x9, #1
0x051BC500: 4a410091  add x10, x10, #0x10
0x051BC504: 61ffff54  b.ne #0x51bc4f0
0x051BC508: e00316aa  mov x0, x22
0x051BC50C: e2031f2a  mov w2, wzr
0x051BC510: 80697e97  bl #0x3156b10
0x051BC514: 04000014  b #0x51bc524
0x051BC518: 490180b9  ldrsw x9, [x10]
0x051BC51C: 0811098b  add x8, x8, x9, lsl #4
0x051BC520: 00e10491  add x0, x8, #0x138
0x051BC524: 080c40a9  ldp x8, x3, [x0]
0x051BC528: 82020012  and w2, w20, #1
0x051BC52C: e00316aa  mov x0, x22
0x051BC530: e10315aa  mov x1, x21
0x051BC534: 00013fd6  blr x8
0x051BC538: 680240f9  ldr x8, [x19]
0x051BC53C: e00313aa  mov x0, x19
0x051BC540: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BC544: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BC548: 021d42f9  ldr x2, [x8, #0x438]
0x051BC54C: 012142f9  ldr x1, [x8, #0x440]
0x051BC550: fe0743f8  ldr x30, [sp], #0x30
0x051BC554: 40001fd6  br x2
0x051BC558: d5117f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC55C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnStatesApplied
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnStatesApplied (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BC55C* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BC55C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC560 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$UpdateOnActivationIfNeeded
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___UpdateOnActivationIfNeeded (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Newtonsoft_Json_Linq_JObject_o* activationData, const MethodInfo_51BC560* method);
; bytes=576 sha256=8159860e3bdb94d58bcfe466c3765056f08d4c5c4c59eb3fbb4fb4eef926eb21 status=arm64_complete_bound indexed_start=True
0x051BC560: fe0f1df8  str x30, [sp, #-0x30]!
0x051BC564: f65701a9  stp x22, x21, [sp, #0x10]
0x051BC568: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BC56C: e10600b4  cbz x1, #0x51bc648
0x051BC570: 080040f9  ldr x8, [x0]
0x051BC574: f60302aa  mov x22, x2
0x051BC578: f40301aa  mov x20, x1
0x051BC57C: f30300aa  mov x19, x0
0x051BC580: 092542f9  ldr x9, [x8, #0x448]
0x051BC584: 022942f9  ldr x2, [x8, #0x450]
0x051BC588: 20013fd6  blr x9
0x051BC58C: 752e40f9  ldr x21, [x19, #0x58]
0x051BC590: 550600b4  cbz x21, #0x51bc658
0x051BC594: c81240f9  ldr x8, [x22, #0x20]
0x051BC598: 096140f9  ldr x9, [x8, #0xc0]
0x051BC59C: a80240f9  ldr x8, [x21]
0x051BC5A0: 36a940f9  ldr x22, [x9, #0x150]
0x051BC5A4: 095d4279  ldrh w9, [x8, #0x12e]
0x051BC5A8: c11240f9  ldr x1, [x22, #0x20]
0x051BC5AC: c2a24079  ldrh w2, [x22, #0x50]
0x051BC5B0: 290100b4  cbz x9, #0x51bc5d4
0x051BC5B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BC5B8: 4a210091  add x10, x10, #8
0x051BC5BC: 4b815ff8  ldur x11, [x10, #-8]
0x051BC5C0: 7f0101eb  cmp x11, x1
0x051BC5C4: e0000054  b.eq #0x51bc5e0
0x051BC5C8: 290500f1  subs x9, x9, #1
0x051BC5CC: 4a410091  add x10, x10, #0x10
0x051BC5D0: 61ffff54  b.ne #0x51bc5bc
0x051BC5D4: e00315aa  mov x0, x21
0x051BC5D8: 4e697e97  bl #0x3156b10
0x051BC5DC: 05000014  b #0x51bc5f0
0x051BC5E0: 490140b9  ldr w9, [x10]
0x051BC5E4: 2901020b  add w9, w9, w2
0x051BC5E8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BC5EC: 00e10491  add x0, x8, #0x138
0x051BC5F0: 000440f9  ldr x0, [x0, #8]
0x051BC5F4: e10316aa  mov x1, x22
0x051BC5F8: 64117f97  bl #0x3180b88
0x051BC5FC: 080440f9  ldr x8, [x0, #8]
0x051BC600: e20300aa  mov x2, x0
0x051BC604: e00315aa  mov x0, x21
0x051BC608: e10314aa  mov x1, x20
0x051BC60C: 00013fd6  blr x8
0x051BC610: 680240f9  ldr x8, [x19]
0x051BC614: f50300aa  mov x21, x0
0x051BC618: 09d541f9  ldr x9, [x8, #0x3a8]
0x051BC61C: 02d941f9  ldr x2, [x8, #0x3b0]
0x051BC620: e00313aa  mov x0, x19
0x051BC624: e10314aa  mov x1, x20
0x051BC628: 20013fd6  blr x9
0x051BC62C: f50000b4  cbz x21, #0x51bc648
0x051BC630: 680240f9  ldr x8, [x19]
0x051BC634: 09cd41f9  ldr x9, [x8, #0x398]
0x051BC638: 02d141f9  ldr x2, [x8, #0x3a0]
0x051BC63C: e00313aa  mov x0, x19
0x051BC640: e10315aa  mov x1, x21
0x051BC644: 20013fd6  blr x9
0x051BC648: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BC64C: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BC650: fe0743f8  ldr x30, [sp], #0x30
0x051BC654: c0035fd6  ret
0x051BC658: 95117f97  bl #0x3180cac
0x051BC65C: 03000014  b #0x51bc668
0x051BC660: 02000014  b #0x51bc668
0x051BC664: 01000014  b #0x51bc668
0x051BC668: f40300aa  mov x20, x0
0x051BC66C: 3f040071  cmp w1, #1
0x051BC670: 21090054  b.ne #0x51bc794
0x051BC674: e00314aa  mov x0, x20
0x051BC678: a6488094  bl #0x71ce910
0x051BC67C: f40300aa  mov x20, x0
0x051BC680: 802401d0  adrp x0, #0x764e000
0x051BC684: 006c42f9  ldr x0, [x0, #0x4d8]
0x051BC688: e9107f97  bl #0x3180a2c
0x051BC68C: 880240f9  ldr x8, [x20]
0x051BC690: 010140f9  ldr x1, [x8]
0x051BC694: 91127f97  bl #0x31810d8
0x051BC698: 80060036  tbz w0, #0, #0x51bc768
0x051BC69C: 940240f9  ldr x20, [x20]
0x051BC6A0: a0488094  bl #0x71ce920
0x051BC6A4: 340700b4  cbz x20, #0x51bc788
0x051BC6A8: 880240f9  ldr x8, [x20]
0x051BC6AC: 737640f9  ldr x19, [x19, #0xe8]
0x051BC6B0: e00314aa  mov x0, x20
0x051BC6B4: 098558a9  ldp x9, x1, [x8, #0x188]
0x051BC6B8: 20013fd6  blr x9
0x051BC6BC: f40300aa  mov x20, x0
0x051BC6C0: 202601b0  adrp x0, #0x7681000
0x051BC6C4: 005c46f9  ldr x0, [x0, #0xcb8]
0x051BC6C8: d9107f97  bl #0x3180a2c
0x051BC6CC: f50300aa  mov x21, x0
0x051BC6D0: c0250190  adrp x0, #0x7674000
0x051BC6D4: 00dc42f9  ldr x0, [x0, #0x5b8]
0x051BC6D8: d5107f97  bl #0x3180a2c
0x051BC6DC: e20300aa  mov x2, x0
0x051BC6E0: e00315aa  mov x0, x21
0x051BC6E4: e10313aa  mov x1, x19
0x051BC6E8: e30314aa  mov x3, x20
0x051BC6EC: e4031faa  mov x4, xzr
0x051BC6F0: f7ec0c94  bl #0x54f7acc
0x051BC6F4: f30300aa  mov x19, x0
0x051BC6F8: 802501b0  adrp x0, #0x766d000
0x051BC6FC: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BC700: cb107f97  bl #0x3180a2c
0x051BC704: 08e040b9  ldr w8, [x0, #0xe0]
0x051BC708: 48000035  cbnz w8, #0x51bc710
0x051BC70C: 20117f97  bl #0x3180b8c
0x051BC710: a0240190  adrp x0, #0x7650000
0x051BC714: 00dc41f9  ldr x0, [x0, #0x3b8]
0x051BC718: c5107f97  bl #0x3180a2c
0x051BC71C: f40300aa  mov x20, x0
0x051BC720: 202601b0  adrp x0, #0x7681000
0x051BC724: 004446f9  ldr x0, [x0, #0xc88]
0x051BC728: c1107f97  bl #0x3180a2c
0x051BC72C: f50300aa  mov x21, x0
0x051BC730: 202601b0  adrp x0, #0x7681000
0x051BC734: 006046f9  ldr x0, [x0, #0xcc0]
0x051BC738: bd107f97  bl #0x3180a2c
0x051BC73C: e40300aa  mov x4, x0
0x051BC740: e00313aa  mov x0, x19
0x051BC744: e10314aa  mov x1, x20
0x051BC748: e30315aa  mov x3, x21
0x051BC74C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BC750: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BC754: e2031faa  mov x2, xzr
0x051BC758: e5031faa  mov x5, xzr
0x051BC75C: e6031faa  mov x6, xzr
0x051BC760: fe0743f8  ldr x30, [sp], #0x30
0x051BC764: 34bf0a14  b #0x546c434
0x051BC768: 00018052  movz w0, #0x8
0x051BC76C: 71488094  bl #0x71ce930
0x051BC770: 880240f9  ldr x8, [x20]
0x051BC774: 080000f9  str x8, [x0]
0x051BC778: c1000190  adrp x1, #0x71d4000
0x051BC77C: 21a03491  add x1, x1, #0xd28
0x051BC780: e2031faa  mov x2, xzr
0x051BC784: 6f488094  bl #0x71ce940
0x051BC788: 49117f97  bl #0x3180cac
0x051BC78C: f40300aa  mov x20, x0
0x051BC790: 64488094  bl #0x71ce920
0x051BC794: e00314aa  mov x0, x20
0x051BC798: 70a48297  bl #0x3265958
0x051BC79C: 5e337197  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC7A0 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$UpdateActivationData
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___UpdateActivationData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Newtonsoft_Json_Linq_JObject_o* activationData, const MethodInfo_51BC7A0* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BC7A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC7A4 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnRemoteLiveOpActivationFailed
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnRemoteLiveOpActivationFailed (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BC7A4* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x051BC7A4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC7A8 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$UpdateData
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___UpdateData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Il2CppObject* eventData, const MethodInfo_51BC7A8* method);
; bytes=124 sha256=8fa64a2636f214708dd867434b11eb18ab15d9321447160b2b1ad012df3b6b12 status=arm64_complete_bound indexed_start=True
0x051BC7A8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BC7AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BC7B0: f50300aa  mov x21, x0
0x051BC7B4: a10e0ff8  str x1, [x21, #0xf0]!
0x051BC7B8: f30300aa  mov x19, x0
0x051BC7BC: e00315aa  mov x0, x21
0x051BC7C0: f40302aa  mov x20, x2
0x051BC7C4: 80107f97  bl #0x31809c4
0x051BC7C8: a82240b9  ldr w8, [x21, #0x20]
0x051BC7CC: 1f190071  cmp w8, #6
0x051BC7D0: a1010054  b.ne #0x51bc804
0x051BC7D4: a80240f9  ldr x8, [x21]
0x051BC7D8: 480200b4  cbz x8, #0x51bc820
0x051BC7DC: 081140b9  ldr w8, [x8, #0x10]
0x051BC7E0: 1f090071  cmp w8, #2
0x051BC7E4: 01010054  b.ne #0x51bc804
0x051BC7E8: 680240f9  ldr x8, [x19]
0x051BC7EC: 89008052  movz w9, #0x4
0x051BC7F0: 691201b9  str w9, [x19, #0x110]
0x051BC7F4: e00313aa  mov x0, x19
0x051BC7F8: 09ad41f9  ldr x9, [x8, #0x358]
0x051BC7FC: 01b141f9  ldr x1, [x8, #0x360]
0x051BC800: 20013fd6  blr x9
0x051BC804: 881240f9  ldr x8, [x20, #0x20]
0x051BC808: e00313aa  mov x0, x19
0x051BC80C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BC810: 086140f9  ldr x8, [x8, #0xc0]
0x051BC814: 015140f9  ldr x1, [x8, #0xa0]
0x051BC818: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BC81C: 02000014  b #0x51bc824
0x051BC820: 23117f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC824 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$SetActivationDependency
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___SetActivationDependency (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BC824* method);
; bytes=288 sha256=860e4e75ca26fad745c3a22064231d6355e5c1ec02dfed2d2ea8c8ab355effe5 status=arm64_complete_bound indexed_start=True
0x051BC824: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BC828: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BC82C: f45a01f0  adrp x20, #0x7d1b000
0x051BC830: 952501f0  adrp x21, #0x766f000
0x051BC834: 880e7839  ldrb w8, [x20, #0xe03]
0x051BC838: b57244f9  ldr x21, [x21, #0x8e0]
0x051BC83C: f30300aa  mov x19, x0
0x051BC840: 28010037  tbnz w8, #0, #0x51bc864
0x051BC844: a02501b0  adrp x0, #0x7671000
0x051BC848: 006047f9  ldr x0, [x0, #0xec0]
0x051BC84C: 73107f97  bl #0x3180a18
0x051BC850: 802501f0  adrp x0, #0x766f000
0x051BC854: 007044f9  ldr x0, [x0, #0x8e0]
0x051BC858: 70107f97  bl #0x3180a18
0x051BC85C: 28008052  movz w8, #0x1
0x051BC860: 880e3839  strb w8, [x20, #0xe03]
0x051BC864: a00240f9  ldr x0, [x21]
0x051BC868: 0e117f97  bl #0x3180ca0
0x051BC86C: e1031faa  mov x1, xzr
0x051BC870: f50300aa  mov x21, x0
0x051BC874: 12122094  bl #0x59c10bc
0x051BC878: f40313aa  mov x20, x19
0x051BC87C: 958e0cf8  str x21, [x20, #0xc8]!
0x051BC880: e00314aa  mov x0, x20
0x051BC884: e10315aa  mov x1, x21
0x051BC888: 4f107f97  bl #0x31809c4
0x051BC88C: 881640f9  ldr x8, [x20, #0x28]
0x051BC890: 880500b4  cbz x8, #0x51bc940
0x051BC894: 081140b9  ldr w8, [x8, #0x10]
0x051BC898: 1f090071  cmp w8, #2
0x051BC89C: 81030054  b.ne #0x51bc90c
0x051BC8A0: 940240f9  ldr x20, [x20]
0x051BC8A4: f40400b4  cbz x20, #0x51bc940
0x051BC8A8: aa2501b0  adrp x10, #0x7671000
0x051BC8AC: 880240f9  ldr x8, [x20]
0x051BC8B0: 4a6147f9  ldr x10, [x10, #0xec0]
0x051BC8B4: 095d4279  ldrh w9, [x8, #0x12e]
0x051BC8B8: 410140f9  ldr x1, [x10]
0x051BC8BC: 290100b4  cbz x9, #0x51bc8e0
0x051BC8C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BC8C4: 4a210091  add x10, x10, #8
0x051BC8C8: 4b815ff8  ldur x11, [x10, #-8]
0x051BC8CC: 7f0101eb  cmp x11, x1
0x051BC8D0: 00010054  b.eq #0x51bc8f0
0x051BC8D4: 290500f1  subs x9, x9, #1
0x051BC8D8: 4a410091  add x10, x10, #0x10
0x051BC8DC: 61ffff54  b.ne #0x51bc8c8
0x051BC8E0: 22008052  movz w2, #0x1
0x051BC8E4: e00314aa  mov x0, x20
0x051BC8E8: 8a687e97  bl #0x3156b10
0x051BC8EC: 05000014  b #0x51bc900
0x051BC8F0: 490140b9  ldr w9, [x10]
0x051BC8F4: 29050011  add w9, w9, #1
0x051BC8F8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BC8FC: 00e10491  add x0, x8, #0x138
0x051BC900: 080440a9  ldp x8, x1, [x0]
0x051BC904: e00314aa  mov x0, x20
0x051BC908: 00013fd6  blr x8
0x051BC90C: 681241b9  ldr w8, [x19, #0x110]
0x051BC910: 1f110071  cmp w8, #4
0x051BC914: 01010054  b.ne #0x51bc934
0x051BC918: 680240f9  ldr x8, [x19]
0x051BC91C: e00313aa  mov x0, x19
0x051BC920: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BC924: 024d42f9  ldr x2, [x8, #0x498]
0x051BC928: 015142f9  ldr x1, [x8, #0x4a0]
0x051BC92C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BC930: 40001fd6  br x2
0x051BC934: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BC938: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BC93C: c0035fd6  ret
0x051BC940: db107f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BC944 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnTimePassed
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnTimePassed (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, double timePassed, const MethodInfo_51BC944* method);
; bytes=196 sha256=ba419a7dbeb0c30e8e074668126dd7e7394b4aa1abcfed8d3d4c78eb55ed7ba7 status=arm64_complete_bound indexed_start=True
0x051BC944: e923bd6d  stp d9, d8, [sp, #-0x30]!
0x051BC948: fe0b00f9  str x30, [sp, #0x10]
0x051BC94C: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BC950: f45a01f0  adrp x20, #0x7d1b000
0x051BC954: 88127839  ldrb w8, [x20, #0xe04]
0x051BC958: 081ca04e  mov v8.16b, v0.16b
0x051BC95C: f30300aa  mov x19, x0
0x051BC960: 88010037  tbnz w8, #0, #0x51bc990
0x051BC964: 802401d0  adrp x0, #0x764e000
0x051BC968: 000447f9  ldr x0, [x0, #0xe08]
0x051BC96C: 2b107f97  bl #0x3180a18
0x051BC970: c0250190  adrp x0, #0x7674000
0x051BC974: 00c442f9  ldr x0, [x0, #0x588]
0x051BC978: 28107f97  bl #0x3180a18
0x051BC97C: a02501f0  adrp x0, #0x7673000
0x051BC980: 00b843f9  ldr x0, [x0, #0x770]
0x051BC984: 25107f97  bl #0x3180a18
0x051BC988: 28008052  movz w8, #0x1
0x051BC98C: 88123839  strb w8, [x20, #0xe04]
0x051BC990: 681241b9  ldr w8, [x19, #0x110]
0x051BC994: 1f110071  cmp w8, #4
0x051BC998: 61020054  b.ne #0x51bc9e4
0x051BC99C: 745240f9  ldr x20, [x19, #0xa0]
0x051BC9A0: 340300b4  cbz x20, #0x51bca04
0x051BC9A4: 882401d0  adrp x8, #0x764e000
0x051BC9A8: 080547f9  ldr x8, [x8, #0xe08]
0x051BC9AC: 891240fd  ldr d9, [x20, #0x20]
0x051BC9B0: 000140f9  ldr x0, [x8]
0x051BC9B4: 08e040b9  ldr w8, [x0, #0xe0]
0x051BC9B8: 48000035  cbnz w8, #0x51bc9c0
0x051BC9BC: 74107f97  bl #0x3180b8c
0x051BC9C0: 2139681e  fsub d1, d9, d8
0x051BC9C4: e003679e  fmov d0, xzr
0x051BC9C8: e0031faa  mov x0, xzr
0x051BC9CC: 8f6a1394  bl #0x5697408
0x051BC9D0: a82501f0  adrp x8, #0x7673000
0x051BC9D4: 08b943f9  ldr x8, [x8, #0x770]
0x051BC9D8: e00314aa  mov x0, x20
0x051BC9DC: 010140f9  ldr x1, [x8]
0x051BC9E0: 4893c197  bl #0x4221700
0x051BC9E4: 680240f9  ldr x8, [x19]
0x051BC9E8: e00313aa  mov x0, x19
0x051BC9EC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BC9F0: fe0b40f9  ldr x30, [sp, #0x10]
0x051BC9F4: 023d42f9  ldr x2, [x8, #0x478]
0x051BC9F8: 014142f9  ldr x1, [x8, #0x480]
0x051BC9FC: e923c36c  ldp d9, d8, [sp], #0x30
0x051BCA00: 40001fd6  br x2
0x051BCA04: aa107f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCA08 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$OnForceRemove
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___OnForceRemove (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Merger_TriggerNotifications_Data_TriggerLiveOpAnalytics_o* triggerLiveOpAnalytics, const MethodInfo_51BCA08* method);
; bytes=16 sha256=34ccf840cab9671c8f12d0373be257073212caf83d7bcc1949b871c0139e6a00 status=arm64_complete_bound indexed_start=True
0x051BCA08: 080040f9  ldr x8, [x0]
0x051BCA0C: 02e541f9  ldr x2, [x8, #0x3c8]
0x051BCA10: 01e941f9  ldr x1, [x8, #0x3d0]
0x051BCA14: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCA18 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$Tick
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___Tick (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BCA18* method);
; bytes=112 sha256=63f1acdc2274d89f42df51fd69b7e680f6afdb586a09df9a318157baf8dd4af3 status=arm64_complete_bound indexed_start=True
0x051BCA18: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BCA1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BCA20: 080040f9  ldr x8, [x0]
0x051BCA24: f40301aa  mov x20, x1
0x051BCA28: f30300aa  mov x19, x0
0x051BCA2C: 094542f9  ldr x9, [x8, #0x488]
0x051BCA30: 084942f9  ldr x8, [x8, #0x490]
0x051BCA34: e10308aa  mov x1, x8
0x051BCA38: 20013fd6  blr x9
0x051BCA3C: c0000036  tbz w0, #0, #0x51bca54
0x051BCA40: 881240f9  ldr x8, [x20, #0x20]
0x051BCA44: e00313aa  mov x0, x19
0x051BCA48: 086140f9  ldr x8, [x8, #0xc0]
0x051BCA4C: 01c940f9  ldr x1, [x8, #0x190]
0x051BCA50: 25fbff97  bl #0x51bb6e4
0x051BCA54: 681241b9  ldr w8, [x19, #0x110]
0x051BCA58: 1f110071  cmp w8, #4
0x051BCA5C: 01010054  b.ne #0x51bca7c
0x051BCA60: 680240f9  ldr x8, [x19]
0x051BCA64: e00313aa  mov x0, x19
0x051BCA68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BCA6C: 024d42f9  ldr x2, [x8, #0x498]
0x051BCA70: 015142f9  ldr x1, [x8, #0x4a0]
0x051BCA74: fe0742f8  ldr x30, [sp], #0x20
0x051BCA78: 40001fd6  br x2
0x051BCA7C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BCA80: fe0742f8  ldr x30, [sp], #0x20
0x051BCA84: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCA88 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$EventReadyForActivation
; native signature: bool Merger_RemoteLiveOps_Controllers_EventControllerBase_object___EventReadyForActivation (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BCA88* method);
; bytes=100 sha256=ef85f1e68ead4a5c4febcb3b66913d1a546c7c2bff2321adb94501bd82b934a2 status=arm64_complete_bound indexed_start=True
0x051BCA88: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BCA8C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BCA90: 081041b9  ldr w8, [x0, #0x110]
0x051BCA94: 28010035  cbnz w8, #0x51bcab8
0x051BCA98: 087840f9  ldr x8, [x0, #0xf0]
0x051BCA9C: f30300aa  mov x19, x0
0x051BCAA0: 480200b4  cbz x8, #0x51bcae8
0x051BCAA4: 140d40f9  ldr x20, [x8, #0x18]
0x051BCAA8: e00313aa  mov x0, x19
0x051BCAAC: 71f8ff97  bl #0x51bac70
0x051BCAB0: 9f0200eb  cmp x20, x0
0x051BCAB4: ad000054  b.le #0x51bcac8
0x051BCAB8: e0031f2a  mov w0, wzr
0x051BCABC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BCAC0: fe0742f8  ldr x30, [sp], #0x20
0x051BCAC4: c0035fd6  ret
0x051BCAC8: 687a40f9  ldr x8, [x19, #0xf0]
0x051BCACC: e80000b4  cbz x8, #0x51bcae8
0x051BCAD0: 141140f9  ldr x20, [x8, #0x20]
0x051BCAD4: e00313aa  mov x0, x19
0x051BCAD8: 66f8ff97  bl #0x51bac70
0x051BCADC: 9f0200eb  cmp x20, x0
0x051BCAE0: e0d79f1a  cset w0, gt
0x051BCAE4: f6ffff17  b #0x51bcabc
0x051BCAE8: 71107f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCAEC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$SetEventTimeLeft
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___SetEventTimeLeft (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BCAEC* method);
; bytes=368 sha256=a0490633c28bf6b6007a8d73b1d3a1826bbb53333650f8404af1b44958b13bbb status=arm64_complete_bound indexed_start=True
0x051BCAEC: e80f1cfc  str d8, [sp, #-0x40]!
0x051BCAF0: fe5f01a9  stp x30, x23, [sp, #0x10]
0x051BCAF4: f65702a9  stp x22, x21, [sp, #0x20]
0x051BCAF8: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BCAFC: f45a01f0  adrp x20, #0x7d1b000
0x051BCB00: 88167839  ldrb w8, [x20, #0xe05]
0x051BCB04: f30300aa  mov x19, x0
0x051BCB08: e8010037  tbnz w8, #0, #0x51bcb44
0x051BCB0C: a02501f0  adrp x0, #0x7673000
0x051BCB10: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BCB14: c10f7f97  bl #0x3180a18
0x051BCB18: 802401d0  adrp x0, #0x764e000
0x051BCB1C: 000447f9  ldr x0, [x0, #0xe08]
0x051BCB20: be0f7f97  bl #0x3180a18
0x051BCB24: a02501f0  adrp x0, #0x7673000
0x051BCB28: 00b843f9  ldr x0, [x0, #0x770]
0x051BCB2C: bb0f7f97  bl #0x3180a18
0x051BCB30: a02401b0  adrp x0, #0x7651000
0x051BCB34: 00ec43f9  ldr x0, [x0, #0x7d8]
0x051BCB38: b80f7f97  bl #0x3180a18
0x051BCB3C: 28008052  movz w8, #0x1
0x051BCB40: 88163839  strb w8, [x20, #0xe05]
0x051BCB44: ff0700f9  str xzr, [sp, #8]
0x051BCB48: 697a40f9  ldr x9, [x19, #0xf0]
0x051BCB4C: 690800b4  cbz x9, #0x51bcc58
0x051BCB50: 743240f9  ldr x20, [x19, #0x60]
0x051BCB54: 340800b4  cbz x20, #0x51bcc58
0x051BCB58: aa2501f0  adrp x10, #0x7673000
0x051BCB5C: 880240f9  ldr x8, [x20]
0x051BCB60: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x051BCB64: b62401b0  adrp x22, #0x7651000
0x051BCB68: 735240f9  ldr x19, [x19, #0xa0]
0x051BCB6C: 351140f9  ldr x21, [x9, #0x20]
0x051BCB70: 095d4279  ldrh w9, [x8, #0x12e]
0x051BCB74: 410140f9  ldr x1, [x10]
0x051BCB78: d6ee43f9  ldr x22, [x22, #0x7d8]
0x051BCB7C: 290100b4  cbz x9, #0x51bcba0
0x051BCB80: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BCB84: 4a210091  add x10, x10, #8
0x051BCB88: 4b815ff8  ldur x11, [x10, #-8]
0x051BCB8C: 7f0101eb  cmp x11, x1
0x051BCB90: 00010054  b.eq #0x51bcbb0
0x051BCB94: 290500f1  subs x9, x9, #1
0x051BCB98: 4a410091  add x10, x10, #0x10
0x051BCB9C: 61ffff54  b.ne #0x51bcb88
0x051BCBA0: e00314aa  mov x0, x20
0x051BCBA4: e2031f2a  mov w2, wzr
0x051BCBA8: da677e97  bl #0x3156b10
0x051BCBAC: 04000014  b #0x51bcbbc
0x051BCBB0: 490180b9  ldrsw x9, [x10]
0x051BCBB4: 0811098b  add x8, x8, x9, lsl #4
0x051BCBB8: 00e10491  add x0, x8, #0x138
0x051BCBBC: 080440a9  ldp x8, x1, [x0]
0x051BCBC0: 972401d0  adrp x23, #0x764e000
0x051BCBC4: f70647f9  ldr x23, [x23, #0xe08]
0x051BCBC8: e00314aa  mov x0, x20
0x051BCBCC: 00013fd6  blr x8
0x051BCBD0: c80240f9  ldr x8, [x22]
0x051BCBD4: f40300aa  mov x20, x0
0x051BCBD8: 09e140b9  ldr w9, [x8, #0xe0]
0x051BCBDC: 69000035  cbnz w9, #0x51bcbe8
0x051BCBE0: e00308aa  mov x0, x8
0x051BCBE4: ea0f7f97  bl #0x3180b8c
0x051BCBE8: a80214cb  sub x8, x21, x20
0x051BCBEC: 0001629e  scvtf d0, x8
0x051BCBF0: e0031faa  mov x0, xzr
0x051BCBF4: 3fc41394  bl #0x56adcf0
0x051BCBF8: e00700f9  str x0, [sp, #8]
0x051BCBFC: e0230091  add x0, sp, #8
0x051BCC00: e1031faa  mov x1, xzr
0x051BCC04: 49c31394  bl #0x56ad928
0x051BCC08: e00240f9  ldr x0, [x23]
0x051BCC0C: 081ca04e  mov v8.16b, v0.16b
0x051BCC10: 08e040b9  ldr w8, [x0, #0xe0]
0x051BCC14: 48000035  cbnz w8, #0x51bcc1c
0x051BCC18: dd0f7f97  bl #0x3180b8c
0x051BCC1C: e003679e  fmov d0, xzr
0x051BCC20: 011da84e  mov v1.16b, v8.16b
0x051BCC24: e0031faa  mov x0, xzr
0x051BCC28: f8691394  bl #0x5697408
0x051BCC2C: 730100b4  cbz x19, #0x51bcc58
0x051BCC30: a82501f0  adrp x8, #0x7673000
0x051BCC34: 08b943f9  ldr x8, [x8, #0x770]
0x051BCC38: e00313aa  mov x0, x19
0x051BCC3C: 010140f9  ldr x1, [x8]
0x051BCC40: b092c197  bl #0x4221700
0x051BCC44: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BCC48: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BCC4C: fe5f41a9  ldp x30, x23, [sp, #0x10]
0x051BCC50: e80744fc  ldr d8, [sp], #0x40
0x051BCC54: c0035fd6  ret
0x051BCC58: 15107f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCC5C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$StartEventInternal
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___StartEventInternal (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BCC5C* method);
; bytes=316 sha256=b2c9fc8a6cd9e84ed6ebe2673a77ae90804f392466bf0f5d2d0b73c66946b1fc status=arm64_complete_bound indexed_start=True
0x051BCC5C: fe0f1df8  str x30, [sp, #-0x30]!
0x051BCC60: f65701a9  stp x22, x21, [sp, #0x10]
0x051BCC64: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BCC68: f55a01f0  adrp x21, #0x7d1b000
0x051BCC6C: a81a7839  ldrb w8, [x21, #0xe06]
0x051BCC70: f40301aa  mov x20, x1
0x051BCC74: f30300aa  mov x19, x0
0x051BCC78: 28010037  tbnz w8, #0, #0x51bcc9c
0x051BCC7C: 202601b0  adrp x0, #0x7681000
0x051BCC80: 002446f9  ldr x0, [x0, #0xc48]
0x051BCC84: 650f7f97  bl #0x3180a18
0x051BCC88: 202601b0  adrp x0, #0x7681000
0x051BCC8C: 006446f9  ldr x0, [x0, #0xcc8]
0x051BCC90: 620f7f97  bl #0x3180a18
0x051BCC94: 28008052  movz w8, #0x1
0x051BCC98: a81a3839  strb w8, [x21, #0xe06]
0x051BCC9C: 681241b9  ldr w8, [x19, #0x110]
0x051BCCA0: 080d0051  sub w8, w8, #3
0x051BCCA4: 1f090071  cmp w8, #2
0x051BCCA8: e3060054  b.lo #0x51bcd84
0x051BCCAC: 282601b0  adrp x8, #0x7681000
0x051BCCB0: 751640f9  ldr x21, [x19, #0x28]
0x051BCCB4: 617640f9  ldr x1, [x19, #0xe8]
0x051BCCB8: 086546f9  ldr x8, [x8, #0xcc8]
0x051BCCBC: e2031faa  mov x2, xzr
0x051BCCC0: 000140f9  ldr x0, [x8]
0x051BCCC4: b7b60c94  bl #0x54ea7a0
0x051BCCC8: 750600b4  cbz x21, #0x51bcd94
0x051BCCCC: 2a2601b0  adrp x10, #0x7681000
0x051BCCD0: a80240f9  ldr x8, [x21]
0x051BCCD4: 4a2546f9  ldr x10, [x10, #0xc48]
0x051BCCD8: f60300aa  mov x22, x0
0x051BCCDC: 095d4279  ldrh w9, [x8, #0x12e]
0x051BCCE0: 410140f9  ldr x1, [x10]
0x051BCCE4: 290100b4  cbz x9, #0x51bcd08
0x051BCCE8: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BCCEC: 4a210091  add x10, x10, #8
0x051BCCF0: 4b815ff8  ldur x11, [x10, #-8]
0x051BCCF4: 7f0101eb  cmp x11, x1
0x051BCCF8: 00010054  b.eq #0x51bcd18
0x051BCCFC: 290500f1  subs x9, x9, #1
0x051BCD00: 4a410091  add x10, x10, #0x10
0x051BCD04: 61ffff54  b.ne #0x51bccf0
0x051BCD08: 22008052  movz w2, #0x1
0x051BCD0C: e00315aa  mov x0, x21
0x051BCD10: 80677e97  bl #0x3156b10
0x051BCD14: 05000014  b #0x51bcd28
0x051BCD18: 490140b9  ldr w9, [x10]
0x051BCD1C: 29050011  add w9, w9, #1
0x051BCD20: 08d1298b  add x8, x8, w9, sxtw #4
0x051BCD24: 00e10491  add x0, x8, #0x138
0x051BCD28: 080840a9  ldp x8, x2, [x0]
0x051BCD2C: e00315aa  mov x0, x21
0x051BCD30: e10316aa  mov x1, x22
0x051BCD34: 00013fd6  blr x8
0x051BCD38: 680240f9  ldr x8, [x19]
0x051BCD3C: 69008052  movz w9, #0x3
0x051BCD40: 691201b9  str w9, [x19, #0x110]
0x051BCD44: e00313aa  mov x0, x19
0x051BCD48: 094d42f9  ldr x9, [x8, #0x498]
0x051BCD4C: 015142f9  ldr x1, [x8, #0x4a0]
0x051BCD50: 20013fd6  blr x9
0x051BCD54: 881240f9  ldr x8, [x20, #0x20]
0x051BCD58: e00313aa  mov x0, x19
0x051BCD5C: 086140f9  ldr x8, [x8, #0xc0]
0x051BCD60: 01d140f9  ldr x1, [x8, #0x1a0]
0x051BCD64: 99020094  bl #0x51bd7c8
0x051BCD68: 680240f9  ldr x8, [x19]
0x051BCD6C: e00313aa  mov x0, x19
0x051BCD70: 099541f9  ldr x9, [x8, #0x328]
0x051BCD74: 019941f9  ldr x1, [x8, #0x330]
0x051BCD78: 20013fd6  blr x9
0x051BCD7C: 88008052  movz w8, #0x4
0x051BCD80: 681201b9  str w8, [x19, #0x110]
0x051BCD84: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BCD88: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BCD8C: fe0743f8  ldr x30, [sp], #0x30
0x051BCD90: c0035fd6  ret
0x051BCD94: c60f7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCD98 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$GetIconAsset
; native signature: Framework_Core_Assets_IAsset_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___GetIconAsset (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BCD98* method);
; bytes=76 sha256=b399b7167512599510990f94f6690742dcd409d57439c9cfd9ad73c974be6fba status=arm64_complete_bound indexed_start=True
0x051BCD98: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BCD9C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BCDA0: f55a01f0  adrp x21, #0x7d1b000
0x051BCDA4: b42501f0  adrp x20, #0x7673000
0x051BCDA8: a81e7839  ldrb w8, [x21, #0xe07]
0x051BCDAC: 947245f9  ldr x20, [x20, #0xae0]
0x051BCDB0: f30300aa  mov x19, x0
0x051BCDB4: c8000037  tbnz w8, #0, #0x51bcdcc
0x051BCDB8: a02501f0  adrp x0, #0x7673000
0x051BCDBC: 007045f9  ldr x0, [x0, #0xae0]
0x051BCDC0: 160f7f97  bl #0x3180a18
0x051BCDC4: 28008052  movz w8, #0x1
0x051BCDC8: a81e3839  strb w8, [x21, #0xe07]
0x051BCDCC: 810240f9  ldr x1, [x20]
0x051BCDD0: 60a20291  add x0, x19, #0xa8
0x051BCDD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BCDD8: e2031faa  mov x2, xzr
0x051BCDDC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BCDE0: 35430b14  b #0x548dab4

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BCDE4 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$CreateIconDataContainer
; native signature: Merger_Game_Views_Icons_IconDataContainer_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___CreateIconDataContainer (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BCDE4* method);
; bytes=676 sha256=dde69c2fad0f6be2f9c0aed7fd06eac645e42600d58901ccf99605aec1134d5e status=arm64_complete_bound indexed_start=True
0x051BCDE4: ff0302d1  sub sp, sp, #0x80
0x051BCDE8: fe2300f9  str x30, [sp, #0x40]
0x051BCDEC: f85f05a9  stp x24, x23, [sp, #0x50]
0x051BCDF0: f65706a9  stp x22, x21, [sp, #0x60]
0x051BCDF4: f44f07a9  stp x20, x19, [sp, #0x70]
0x051BCDF8: f45a01f0  adrp x20, #0x7d1b000
0x051BCDFC: 88227839  ldrb w8, [x20, #0xe08]
0x051BCE00: f30300aa  mov x19, x0
0x051BCE04: a8020037  tbnz w8, #0, #0x51bce58
0x051BCE08: 802401d0  adrp x0, #0x764e000
0x051BCE0C: 00cc42f9  ldr x0, [x0, #0x598]
0x051BCE10: 020f7f97  bl #0x3180a18
0x051BCE14: 00260190  adrp x0, #0x767c000
0x051BCE18: 004843f9  ldr x0, [x0, #0x690]
0x051BCE1C: ff0e7f97  bl #0x3180a18
0x051BCE20: 802401d0  adrp x0, #0x764e000
0x051BCE24: 005c43f9  ldr x0, [x0, #0x6b8]
0x051BCE28: fc0e7f97  bl #0x3180a18
0x051BCE2C: 202601b0  adrp x0, #0x7681000
0x051BCE30: 006846f9  ldr x0, [x0, #0xcd0]
0x051BCE34: f90e7f97  bl #0x3180a18
0x051BCE38: 202601b0  adrp x0, #0x7681000
0x051BCE3C: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BCE40: f60e7f97  bl #0x3180a18
0x051BCE44: c02401d0  adrp x0, #0x7656000
0x051BCE48: 009441f9  ldr x0, [x0, #0x328]
0x051BCE4C: f30e7f97  bl #0x3180a18
0x051BCE50: 28008052  movz w8, #0x1
0x051BCE54: 88223839  strb w8, [x20, #0xe08]
0x051BCE58: 680240f9  ldr x8, [x19]
0x051BCE5C: e00313aa  mov x0, x19
0x051BCE60: 096542f9  ldr x9, [x8, #0x4c8]
0x051BCE64: 016942f9  ldr x1, [x8, #0x4d0]
0x051BCE68: 20013fd6  blr x9
0x051BCE6C: 680240f9  ldr x8, [x19]
0x051BCE70: f40300aa  mov x20, x0
0x051BCE74: e00313aa  mov x0, x19
0x051BCE78: 095542f9  ldr x9, [x8, #0x4a8]
0x051BCE7C: 015942f9  ldr x1, [x8, #0x4b0]
0x051BCE80: 20013fd6  blr x9
0x051BCE84: a00400b4  cbz x0, #0x51bcf18
0x051BCE88: 687a40f9  ldr x8, [x19, #0xf0]
0x051BCE8C: a80f00b4  cbz x8, #0x51bd080
0x051BCE90: 082540f9  ldr x8, [x8, #0x48]
0x051BCE94: 680f00b4  cbz x8, #0x51bd080
0x051BCE98: 690240f9  ldr x9, [x19]
0x051BCE9C: 170940f9  ldr x23, [x8, #0x10]
0x051BCEA0: 18260190  adrp x24, #0x767c000
0x051BCEA4: 767640f9  ldr x22, [x19, #0xe8]
0x051BCEA8: 288d41f9  ldr x8, [x9, #0x318]
0x051BCEAC: 219141f9  ldr x1, [x9, #0x320]
0x051BCEB0: 184b43f9  ldr x24, [x24, #0x690]
0x051BCEB4: f50300aa  mov x21, x0
0x051BCEB8: e00313aa  mov x0, x19
0x051BCEBC: 00013fd6  blr x8
0x051BCEC0: 080340f9  ldr x8, [x24]
0x051BCEC4: f303002a  mov w19, w0
0x051BCEC8: e00308aa  mov x0, x8
0x051BCECC: 750f7f97  bl #0x3180ca0
0x051BCED0: 00e4006f  movi v0.2d, #0000000000000000
0x051BCED4: 28008052  movz w8, #0x1
0x051BCED8: 24008052  movz w4, #0x1
0x051BCEDC: 25008052  movz w5, #0x1
0x051BCEE0: 26008052  movz w6, #0x1
0x051BCEE4: 47008052  movz w7, #0x2
0x051BCEE8: e10316aa  mov x1, x22
0x051BCEEC: e20317aa  mov x2, x23
0x051BCEF0: e303132a  mov w3, w19
0x051BCEF4: f80300aa  mov x24, x0
0x051BCEF8: f50b00f9  str x21, [sp, #0x10]
0x051BCEFC: e083823c  stur q0, [sp, #0x28]
0x051BCF00: e083813c  stur q0, [sp, #0x18]
0x051BCF04: e8230039  strb w8, [sp, #8]
0x051BCF08: f40300f9  str x20, [sp]
0x051BCF0C: 50445594  bl #0x670e04c
0x051BCF10: e00318aa  mov x0, x24
0x051BCF14: 55000014  b #0x51bd068
0x051BCF18: 882401d0  adrp x8, #0x764e000
0x051BCF1C: 085d43f9  ldr x8, [x8, #0x6b8]
0x051BCF20: a1008052  movz w1, #0x5
0x051BCF24: 000140f9  ldr x0, [x8]
0x051BCF28: f50e7f97  bl #0x3180afc
0x051BCF2C: a00a00b4  cbz x0, #0x51bd080
0x051BCF30: 081840b9  ldr w8, [x0, #0x18]
0x051BCF34: f40300aa  mov x20, x0
0x051BCF38: 680a0034  cbz w8, #0x51bd084
0x051BCF3C: c82401d0  adrp x8, #0x7656000
0x051BCF40: 089541f9  ldr x8, [x8, #0x328]
0x051BCF44: e00314aa  mov x0, x20
0x051BCF48: 010140f9  ldr x1, [x8]
0x051BCF4C: 010c02f8  str x1, [x0, #0x20]!
0x051BCF50: 9d0e7f97  bl #0x31809c4
0x051BCF54: e00313aa  mov x0, x19
0x051BCF58: e1031faa  mov x1, xzr
0x051BCF5C: 9a771494  bl #0x56dadc4
0x051BCF60: 000900b4  cbz x0, #0x51bd080
0x051BCF64: 080040f9  ldr x8, [x0]
0x051BCF68: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x051BCF6C: 20013fd6  blr x9
0x051BCF70: 881a40b9  ldr w8, [x20, #0x18]
0x051BCF74: 1f050071  cmp w8, #1
0x051BCF78: 69080054  b.ls #0x51bd084
0x051BCF7C: f50314aa  mov x21, x20
0x051BCF80: a08e02f8  str x0, [x21, #0x28]!
0x051BCF84: e10300aa  mov x1, x0
0x051BCF88: e00315aa  mov x0, x21
0x051BCF8C: 8e0e7f97  bl #0x31809c4
0x051BCF90: a8025fb8  ldur w8, [x21, #-0x10]
0x051BCF94: 1f090071  cmp w8, #2
0x051BCF98: 69070054  b.ls #0x51bd084
0x051BCF9C: 282601b0  adrp x8, #0x7681000
0x051BCFA0: 086946f9  ldr x8, [x8, #0xcd0]
0x051BCFA4: e00314aa  mov x0, x20
0x051BCFA8: 010140f9  ldr x1, [x8]
0x051BCFAC: 010c03f8  str x1, [x0, #0x30]!
0x051BCFB0: 850e7f97  bl #0x31809c4
0x051BCFB4: 687a40f9  ldr x8, [x19, #0xf0]
0x051BCFB8: 480600b4  cbz x8, #0x51bd080
0x051BCFBC: 690240f9  ldr x9, [x19]
0x051BCFC0: 152540f9  ldr x21, [x8, #0x48]
0x051BCFC4: e00313aa  mov x0, x19
0x051BCFC8: 286541f9  ldr x8, [x9, #0x2c8]
0x051BCFCC: 216941f9  ldr x1, [x9, #0x2d0]
0x051BCFD0: 00013fd6  blr x8
0x051BCFD4: 750500b4  cbz x21, #0x51bd080
0x051BCFD8: e10300aa  mov x1, x0
0x051BCFDC: e00315aa  mov x0, x21
0x051BCFE0: e2031faa  mov x2, xzr
0x051BCFE4: 3d9e4a94  bl #0x64648d8
0x051BCFE8: 881a40b9  ldr w8, [x20, #0x18]
0x051BCFEC: 1f0d0071  cmp w8, #3
0x051BCFF0: a9040054  b.ls #0x51bd084
0x051BCFF4: f30314aa  mov x19, x20
0x051BCFF8: 608e03f8  str x0, [x19, #0x38]!
0x051BCFFC: e10300aa  mov x1, x0
0x051BD000: e00313aa  mov x0, x19
0x051BD004: 700e7f97  bl #0x31809c4
0x051BD008: 68025eb8  ldur w8, [x19, #-0x20]
0x051BD00C: 1f110071  cmp w8, #4
0x051BD010: a9030054  b.ls #0x51bd084
0x051BD014: 28260190  adrp x8, #0x7681000
0x051BD018: 086d46f9  ldr x8, [x8, #0xcd8]
0x051BD01C: e00314aa  mov x0, x20
0x051BD020: 010140f9  ldr x1, [x8]
0x051BD024: 010c04f8  str x1, [x0, #0x40]!
0x051BD028: 670e7f97  bl #0x31809c4
0x051BD02C: e00314aa  mov x0, x20
0x051BD030: e1031faa  mov x1, xzr
0x051BD034: e8ea0c94  bl #0x54f7bd4
0x051BD038: 882401b0  adrp x8, #0x764e000
0x051BD03C: 08cd42f9  ldr x8, [x8, #0x598]
0x051BD040: f30300aa  mov x19, x0
0x051BD044: 080140f9  ldr x8, [x8]
0x051BD048: 09e140b9  ldr w9, [x8, #0xe0]
0x051BD04C: 69000035  cbnz w9, #0x51bd058
0x051BD050: e00308aa  mov x0, x8
0x051BD054: ce0e7f97  bl #0x3180b8c
0x051BD058: e00313aa  mov x0, x19
0x051BD05C: e1031faa  mov x1, xzr
0x051BD060: 06b47394  bl #0x6eaa078
0x051BD064: e0031faa  mov x0, xzr
0x051BD068: f44f47a9  ldp x20, x19, [sp, #0x70]
0x051BD06C: f65746a9  ldp x22, x21, [sp, #0x60]
0x051BD070: f85f45a9  ldp x24, x23, [sp, #0x50]
0x051BD074: fe2340f9  ldr x30, [sp, #0x40]
0x051BD078: ff030291  add sp, sp, #0x80
0x051BD07C: c0035fd6  ret
0x051BD080: 0b0f7f97  bl #0x3180cac
0x051BD084: 0c0f7f97  bl #0x3180cb4

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD088 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$ShowGenericIcon
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___ShowGenericIcon (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BD088* method);
; bytes=100 sha256=2947cab858b1bf7172a00ee1cd90b0f10a27cfa93dcbc576c0bbb90b6dc4a0ad status=arm64_complete_bound indexed_start=True
0x051BD088: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BD08C: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BD090: 281040f9  ldr x8, [x1, #0x20]
0x051BD094: f40301aa  mov x20, x1
0x051BD098: f50300aa  mov x21, x0
0x051BD09C: 086140f9  ldr x8, [x8, #0xc0]
0x051BD0A0: 01e540f9  ldr x1, [x8, #0x1c8]
0x051BD0A4: 50ffff97  bl #0x51bcde4
0x051BD0A8: a00100b4  cbz x0, #0x51bd0dc
0x051BD0AC: 881240f9  ldr x8, [x20, #0x20]
0x051BD0B0: f30300aa  mov x19, x0
0x051BD0B4: e00315aa  mov x0, x21
0x051BD0B8: 086140f9  ldr x8, [x8, #0xc0]
0x051BD0BC: 01e940f9  ldr x1, [x8, #0x1d0]
0x051BD0C0: 64f7ff97  bl #0x51bae50
0x051BD0C4: 200100b4  cbz x0, #0x51bd0e8
0x051BD0C8: e10313aa  mov x1, x19
0x051BD0CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BD0D0: e2031faa  mov x2, xzr
0x051BD0D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BD0D8: ce074314  b #0x627f010
0x051BD0DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BD0E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BD0E4: c0035fd6  ret
0x051BD0E8: f10e7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD0EC | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$CreateIconData
; native signature: Merger_Game_Views_Icons_TimedIconData_o* Merger_RemoteLiveOps_Controllers_EventControllerBase_object___CreateIconData (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BD0EC* method);
; bytes=72 sha256=057404b5f7a0c22770be4d5ed4dfbcbba426fd16fddb5da1798a1600fef6604d status=arm64_complete_bound indexed_start=True
0x051BD0EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BD0F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BD0F4: 802401d0  adrp x0, #0x764f000
0x051BD0F8: 009c41f9  ldr x0, [x0, #0x338]
0x051BD0FC: f30301aa  mov x19, x1
0x051BD100: 4b0e7f97  bl #0x3180a2c
0x051BD104: e70e7f97  bl #0x3180ca0
0x051BD108: f40300aa  mov x20, x0
0x051BD10C: 20260190  adrp x0, #0x7681000
0x051BD110: 007046f9  ldr x0, [x0, #0xce0]
0x051BD114: 460e7f97  bl #0x3180a2c
0x051BD118: e10300aa  mov x1, x0
0x051BD11C: e00314aa  mov x0, x20
0x051BD120: e2031faa  mov x2, xzr
0x051BD124: 746e1394  bl #0x5698af4
0x051BD128: e00314aa  mov x0, x20
0x051BD12C: e10313aa  mov x1, x19
0x051BD130: 930e7f97  bl #0x3180b7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD134 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$ToggleIcon
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___ToggleIcon (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, bool displayIcon, const MethodInfo_51BD134* method);
; bytes=128 sha256=b87f76c8a730a51a9f7d8a619b7c73a30418b3d055f92a9fdf27d5ea3ba7d7f9 status=arm64_complete_bound indexed_start=True
0x051BD134: fe0f1ef8  str x30, [sp, #-0x20]!
0x051BD138: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BD13C: 481040f9  ldr x8, [x2, #0x20]
0x051BD140: f30300aa  mov x19, x0
0x051BD144: 086140f9  ldr x8, [x8, #0xc0]
0x051BD148: 21020036  tbz w1, #0, #0x51bd18c
0x051BD14C: 01e540f9  ldr x1, [x8, #0x1c8]
0x051BD150: e00313aa  mov x0, x19
0x051BD154: f40302aa  mov x20, x2
0x051BD158: 23ffff97  bl #0x51bcde4
0x051BD15C: 881240f9  ldr x8, [x20, #0x20]
0x051BD160: f40300aa  mov x20, x0
0x051BD164: e00313aa  mov x0, x19
0x051BD168: 086140f9  ldr x8, [x8, #0xc0]
0x051BD16C: 01e940f9  ldr x1, [x8, #0x1d0]
0x051BD170: 38f7ff97  bl #0x51bae50
0x051BD174: e00100b4  cbz x0, #0x51bd1b0
0x051BD178: e10314aa  mov x1, x20
0x051BD17C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BD180: e2031faa  mov x2, xzr
0x051BD184: fe0742f8  ldr x30, [sp], #0x20
0x051BD188: a2074314  b #0x627f010
0x051BD18C: 01e940f9  ldr x1, [x8, #0x1d0]
0x051BD190: e00313aa  mov x0, x19
0x051BD194: 2ff7ff97  bl #0x51bae50
0x051BD198: c00000b4  cbz x0, #0x51bd1b0
0x051BD19C: 617640f9  ldr x1, [x19, #0xe8]
0x051BD1A0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BD1A4: e2031faa  mov x2, xzr
0x051BD1A8: fe0742f8  ldr x30, [sp], #0x20
0x051BD1AC: c7074314  b #0x627f0c8
0x051BD1B0: bf0e7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD1B4 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$LateCreate
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___LateCreate (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BD1B4* method);
; bytes=644 sha256=46ac07945451855b7e13234634f48b772f37a5c98d82628ffd5cd31f4699255f status=arm64_complete_bound indexed_start=True
0x051BD1B4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x051BD1B8: f65701a9  stp x22, x21, [sp, #0x10]
0x051BD1BC: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BD1C0: f55a01d0  adrp x21, #0x7d1b000
0x051BD1C4: 36260190  adrp x22, #0x7681000
0x051BD1C8: a8267839  ldrb w8, [x21, #0xe09]
0x051BD1CC: d67646f9  ldr x22, [x22, #0xce8]
0x051BD1D0: f40301aa  mov x20, x1
0x051BD1D4: f30300aa  mov x19, x0
0x051BD1D8: a8020037  tbnz w8, #0, #0x51bd22c
0x051BD1DC: 802501d0  adrp x0, #0x766f000
0x051BD1E0: 002041f9  ldr x0, [x0, #0x240]
0x051BD1E4: 0d0e7f97  bl #0x3180a18
0x051BD1E8: 802401b0  adrp x0, #0x764e000
0x051BD1EC: 00ac43f9  ldr x0, [x0, #0x758]
0x051BD1F0: 0a0e7f97  bl #0x3180a18
0x051BD1F4: 802501d0  adrp x0, #0x766f000
0x051BD1F8: 002441f9  ldr x0, [x0, #0x248]
0x051BD1FC: 070e7f97  bl #0x3180a18
0x051BD200: 20260190  adrp x0, #0x7681000
0x051BD204: 002446f9  ldr x0, [x0, #0xc48]
0x051BD208: 040e7f97  bl #0x3180a18
0x051BD20C: a0250190  adrp x0, #0x7671000
0x051BD210: 006047f9  ldr x0, [x0, #0xec0]
0x051BD214: 010e7f97  bl #0x3180a18
0x051BD218: 20260190  adrp x0, #0x7681000
0x051BD21C: 007446f9  ldr x0, [x0, #0xce8]
0x051BD220: fe0d7f97  bl #0x3180a18
0x051BD224: 28008052  movz w8, #0x1
0x051BD228: a8263839  strb w8, [x21, #0xe09]
0x051BD22C: 881240f9  ldr x8, [x20, #0x20]
0x051BD230: e00313aa  mov x0, x19
0x051BD234: 086140f9  ldr x8, [x8, #0xc0]
0x051BD238: 01ed40f9  ldr x1, [x8, #0x1d8]
0x051BD23C: ddf9ff97  bl #0x51bb9b0
0x051BD240: 680240f9  ldr x8, [x19]
0x051BD244: e00313aa  mov x0, x19
0x051BD248: 09a541f9  ldr x9, [x8, #0x348]
0x051BD24C: 01a941f9  ldr x1, [x8, #0x350]
0x051BD250: 20013fd6  blr x9
0x051BD254: 617640f9  ldr x1, [x19, #0xe8]
0x051BD258: c00240f9  ldr x0, [x22]
0x051BD25C: 751640f9  ldr x21, [x19, #0x28]
0x051BD260: e2031faa  mov x2, xzr
0x051BD264: 4fb50c94  bl #0x54ea7a0
0x051BD268: 750e00b4  cbz x21, #0x51bd434
0x051BD26C: 2a260190  adrp x10, #0x7681000
0x051BD270: a80240f9  ldr x8, [x21]
0x051BD274: 4a2546f9  ldr x10, [x10, #0xc48]
0x051BD278: 972401b0  adrp x23, #0x764e000
0x051BD27C: f60300aa  mov x22, x0
0x051BD280: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD284: 410140f9  ldr x1, [x10]
0x051BD288: f7ae43f9  ldr x23, [x23, #0x758]
0x051BD28C: 290100b4  cbz x9, #0x51bd2b0
0x051BD290: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD294: 4a210091  add x10, x10, #8
0x051BD298: 4b815ff8  ldur x11, [x10, #-8]
0x051BD29C: 7f0101eb  cmp x11, x1
0x051BD2A0: 00010054  b.eq #0x51bd2c0
0x051BD2A4: 290500f1  subs x9, x9, #1
0x051BD2A8: 4a410091  add x10, x10, #0x10
0x051BD2AC: 61ffff54  b.ne #0x51bd298
0x051BD2B0: 22008052  movz w2, #0x1
0x051BD2B4: e00315aa  mov x0, x21
0x051BD2B8: 16667e97  bl #0x3156b10
0x051BD2BC: 05000014  b #0x51bd2d0
0x051BD2C0: 490140b9  ldr w9, [x10]
0x051BD2C4: 29050011  add w9, w9, #1
0x051BD2C8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BD2CC: 00e10491  add x0, x8, #0x138
0x051BD2D0: 080840a9  ldp x8, x2, [x0]
0x051BD2D4: e00315aa  mov x0, x21
0x051BD2D8: e10316aa  mov x1, x22
0x051BD2DC: 00013fd6  blr x8
0x051BD2E0: 881240f9  ldr x8, [x20, #0x20]
0x051BD2E4: e00313aa  mov x0, x19
0x051BD2E8: 086140f9  ldr x8, [x8, #0xc0]
0x051BD2EC: 01f540f9  ldr x1, [x8, #0x1e8]
0x051BD2F0: 6ffaff97  bl #0x51bbcac
0x051BD2F4: e80240f9  ldr x8, [x23]
0x051BD2F8: f50300aa  mov x21, x0
0x051BD2FC: e00308aa  mov x0, x8
0x051BD300: 680e7f97  bl #0x3180ca0
0x051BD304: 881240f9  ldr x8, [x20, #0x20]
0x051BD308: e10313aa  mov x1, x19
0x051BD30C: e3031faa  mov x3, xzr
0x051BD310: f60300aa  mov x22, x0
0x051BD314: 086140f9  ldr x8, [x8, #0xc0]
0x051BD318: 02f940f9  ldr x2, [x8, #0x1f0]
0x051BD31C: 05c11094  bl #0x55ed730
0x051BD320: b50800b4  cbz x21, #0x51bd434
0x051BD324: aa250190  adrp x10, #0x7671000
0x051BD328: a80240f9  ldr x8, [x21]
0x051BD32C: 4a6147f9  ldr x10, [x10, #0xec0]
0x051BD330: 972501d0  adrp x23, #0x766f000
0x051BD334: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD338: 410140f9  ldr x1, [x10]
0x051BD33C: f72241f9  ldr x23, [x23, #0x240]
0x051BD340: 290100b4  cbz x9, #0x51bd364
0x051BD344: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD348: 4a210091  add x10, x10, #8
0x051BD34C: 4b815ff8  ldur x11, [x10, #-8]
0x051BD350: 7f0101eb  cmp x11, x1
0x051BD354: 00010054  b.eq #0x51bd374
0x051BD358: 290500f1  subs x9, x9, #1
0x051BD35C: 4a410091  add x10, x10, #0x10
0x051BD360: 61ffff54  b.ne #0x51bd34c
0x051BD364: e00315aa  mov x0, x21
0x051BD368: e2031f2a  mov w2, wzr
0x051BD36C: e9657e97  bl #0x3156b10
0x051BD370: 04000014  b #0x51bd380
0x051BD374: 490180b9  ldrsw x9, [x10]
0x051BD378: 0811098b  add x8, x8, x9, lsl #4
0x051BD37C: 00e10491  add x0, x8, #0x138
0x051BD380: 080840a9  ldp x8, x2, [x0]
0x051BD384: e00315aa  mov x0, x21
0x051BD388: e10316aa  mov x1, x22
0x051BD38C: 00013fd6  blr x8
0x051BD390: e80240f9  ldr x8, [x23]
0x051BD394: f50300aa  mov x21, x0
0x051BD398: e00308aa  mov x0, x8
0x051BD39C: 410e7f97  bl #0x3180ca0
0x051BD3A0: 881240f9  ldr x8, [x20, #0x20]
0x051BD3A4: e10313aa  mov x1, x19
0x051BD3A8: e3031faa  mov x3, xzr
0x051BD3AC: f40300aa  mov x20, x0
0x051BD3B0: 086140f9  ldr x8, [x8, #0xc0]
0x051BD3B4: 02fd40f9  ldr x2, [x8, #0x1f8]
0x051BD3B8: 87930594  bl #0x53221d4
0x051BD3BC: d50300b4  cbz x21, #0x51bd434
0x051BD3C0: 8a2501d0  adrp x10, #0x766f000
0x051BD3C4: a80240f9  ldr x8, [x21]
0x051BD3C8: 4a2541f9  ldr x10, [x10, #0x248]
0x051BD3CC: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD3D0: 410140f9  ldr x1, [x10]
0x051BD3D4: 290100b4  cbz x9, #0x51bd3f8
0x051BD3D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD3DC: 4a210091  add x10, x10, #8
0x051BD3E0: 4b815ff8  ldur x11, [x10, #-8]
0x051BD3E4: 7f0101eb  cmp x11, x1
0x051BD3E8: 00010054  b.eq #0x51bd408
0x051BD3EC: 290500f1  subs x9, x9, #1
0x051BD3F0: 4a410091  add x10, x10, #0x10
0x051BD3F4: 61ffff54  b.ne #0x51bd3e0
0x051BD3F8: 22008052  movz w2, #0x1
0x051BD3FC: e00315aa  mov x0, x21
0x051BD400: c4657e97  bl #0x3156b10
0x051BD404: 05000014  b #0x51bd418
0x051BD408: 490140b9  ldr w9, [x10]
0x051BD40C: 29050011  add w9, w9, #1
0x051BD410: 08d1298b  add x8, x8, w9, sxtw #4
0x051BD414: 00e10491  add x0, x8, #0x138
0x051BD418: 030840a9  ldp x3, x2, [x0]
0x051BD41C: e00315aa  mov x0, x21
0x051BD420: e10314aa  mov x1, x20
0x051BD424: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BD428: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BD42C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x051BD430: 60001fd6  br x3
0x051BD434: 1e0e7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD438 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$TryAddTmpSpriteOverride
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___TryAddTmpSpriteOverride (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BD438* method);
; bytes=772 sha256=ee5210b14d77fda00b0c1cbb9d1c549c6923d6a5426853cc558244c558c7384e status=arm64_complete_bound indexed_start=True
0x051BD438: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x051BD43C: f65701a9  stp x22, x21, [sp, #0x10]
0x051BD440: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BD444: f55a01d0  adrp x21, #0x7d1b000
0x051BD448: a82a7839  ldrb w8, [x21, #0xe0a]
0x051BD44C: f40301aa  mov x20, x1
0x051BD450: f30300aa  mov x19, x0
0x051BD454: a8020037  tbnz w8, #0, #0x51bd4a8
0x051BD458: 00260190  adrp x0, #0x767d000
0x051BD45C: 006845f9  ldr x0, [x0, #0xad0]
0x051BD460: 6e0d7f97  bl #0x3180a18
0x051BD464: 802501d0  adrp x0, #0x766f000
0x051BD468: 002041f9  ldr x0, [x0, #0x240]
0x051BD46C: 6b0d7f97  bl #0x3180a18
0x051BD470: 20260190  adrp x0, #0x7681000
0x051BD474: 007846f9  ldr x0, [x0, #0xcf0]
0x051BD478: 680d7f97  bl #0x3180a18
0x051BD47C: e0250190  adrp x0, #0x7679000
0x051BD480: 000043f9  ldr x0, [x0, #0x600]
0x051BD484: 650d7f97  bl #0x3180a18
0x051BD488: 802501d0  adrp x0, #0x766f000
0x051BD48C: 002441f9  ldr x0, [x0, #0x248]
0x051BD490: 620d7f97  bl #0x3180a18
0x051BD494: 00260190  adrp x0, #0x767d000
0x051BD498: 006c45f9  ldr x0, [x0, #0xad8]
0x051BD49C: 5f0d7f97  bl #0x3180a18
0x051BD4A0: 28008052  movz w8, #0x1
0x051BD4A4: a82a3839  strb w8, [x21, #0xe0a]
0x051BD4A8: 680240f9  ldr x8, [x19]
0x051BD4AC: e00313aa  mov x0, x19
0x051BD4B0: 098541f9  ldr x9, [x8, #0x308]
0x051BD4B4: 018941f9  ldr x1, [x8, #0x310]
0x051BD4B8: 20013fd6  blr x9
0x051BD4BC: e1031faa  mov x1, xzr
0x051BD4C0: 7be90c94  bl #0x54f7aac
0x051BD4C4: 60070037  tbnz w0, #0, #0x51bd5b0
0x051BD4C8: f50313aa  mov x21, x19
0x051BD4CC: a8864af8  ldr x8, [x21], #0xa8
0x051BD4D0: e00313aa  mov x0, x19
0x051BD4D4: 098541f9  ldr x9, [x8, #0x308]
0x051BD4D8: 018941f9  ldr x1, [x8, #0x310]
0x051BD4DC: 20013fd6  blr x9
0x051BD4E0: e10300aa  mov x1, x0
0x051BD4E4: e00315aa  mov x0, x21
0x051BD4E8: e2031faa  mov x2, xzr
0x051BD4EC: 72410b94  bl #0x548dab4
0x051BD4F0: 401200b4  cbz x0, #0x51bd738
0x051BD4F4: ea250190  adrp x10, #0x7679000
0x051BD4F8: 080040f9  ldr x8, [x0]
0x051BD4FC: 4a0143f9  ldr x10, [x10, #0x600]
0x051BD500: f50300aa  mov x21, x0
0x051BD504: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD508: 410140f9  ldr x1, [x10]
0x051BD50C: 290100b4  cbz x9, #0x51bd530
0x051BD510: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD514: 4a210091  add x10, x10, #8
0x051BD518: 4b815ff8  ldur x11, [x10, #-8]
0x051BD51C: 7f0101eb  cmp x11, x1
0x051BD520: 00010054  b.eq #0x51bd540
0x051BD524: 290500f1  subs x9, x9, #1
0x051BD528: 4a410091  add x10, x10, #0x10
0x051BD52C: 61ffff54  b.ne #0x51bd518
0x051BD530: e00315aa  mov x0, x21
0x051BD534: e2031f2a  mov w2, wzr
0x051BD538: 76657e97  bl #0x3156b10
0x051BD53C: 04000014  b #0x51bd54c
0x051BD540: 490180b9  ldrsw x9, [x10]
0x051BD544: 0811098b  add x8, x8, x9, lsl #4
0x051BD548: 00e10491  add x0, x8, #0x138
0x051BD54C: 080440a9  ldp x8, x1, [x0]
0x051BD550: e00315aa  mov x0, x21
0x051BD554: 00013fd6  blr x8
0x051BD558: c0020036  tbz w0, #0, #0x51bd5b0
0x051BD55C: 761e40f9  ldr x22, [x19, #0x38]
0x051BD560: d60e00b4  cbz x22, #0x51bd738
0x051BD564: 29260190  adrp x9, #0x7681000
0x051BD568: 297946f9  ldr x9, [x9, #0xcf0]
0x051BD56C: c80240f9  ldr x8, [x22]
0x051BD570: 370140f9  ldr x23, [x9]
0x051BD574: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD578: e11240f9  ldr x1, [x23, #0x20]
0x051BD57C: e2a24079  ldrh w2, [x23, #0x50]
0x051BD580: 290100b4  cbz x9, #0x51bd5a4
0x051BD584: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD588: 4a210091  add x10, x10, #8
0x051BD58C: 4b815ff8  ldur x11, [x10, #-8]
0x051BD590: 7f0101eb  cmp x11, x1
0x051BD594: 60010054  b.eq #0x51bd5c0
0x051BD598: 290500f1  subs x9, x9, #1
0x051BD59C: 4a410091  add x10, x10, #0x10
0x051BD5A0: 61ffff54  b.ne #0x51bd58c
0x051BD5A4: e00316aa  mov x0, x22
0x051BD5A8: 5a657e97  bl #0x3156b10
0x051BD5AC: 09000014  b #0x51bd5d0
0x051BD5B0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BD5B4: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BD5B8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x051BD5BC: c0035fd6  ret
0x051BD5C0: 490140b9  ldr w9, [x10]
0x051BD5C4: 2901020b  add w9, w9, w2
0x051BD5C8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BD5CC: 00e10491  add x0, x8, #0x138
0x051BD5D0: 000440f9  ldr x0, [x0, #8]
0x051BD5D4: e10317aa  mov x1, x23
0x051BD5D8: 6c0d7f97  bl #0x3180b88
0x051BD5DC: 080440f9  ldr x8, [x0, #8]
0x051BD5E0: e20300aa  mov x2, x0
0x051BD5E4: e00316aa  mov x0, x22
0x051BD5E8: e10315aa  mov x1, x21
0x051BD5EC: 00013fd6  blr x8
0x051BD5F0: 08260190  adrp x8, #0x767d000
0x051BD5F4: 086945f9  ldr x8, [x8, #0xad0]
0x051BD5F8: f50300aa  mov x21, x0
0x051BD5FC: 080140f9  ldr x8, [x8]
0x051BD600: e00308aa  mov x0, x8
0x051BD604: a70d7f97  bl #0x3180ca0
0x051BD608: 881240f9  ldr x8, [x20, #0x20]
0x051BD60C: e10313aa  mov x1, x19
0x051BD610: e3031faa  mov x3, xzr
0x051BD614: f60300aa  mov x22, x0
0x051BD618: 086140f9  ldr x8, [x8, #0xc0]
0x051BD61C: 020941f9  ldr x2, [x8, #0x210]
0x051BD620: ed920594  bl #0x53221d4
0x051BD624: b50800b4  cbz x21, #0x51bd738
0x051BD628: 0a260190  adrp x10, #0x767d000
0x051BD62C: a80240f9  ldr x8, [x21]
0x051BD630: 4a6d45f9  ldr x10, [x10, #0xad8]
0x051BD634: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD638: 410140f9  ldr x1, [x10]
0x051BD63C: 290100b4  cbz x9, #0x51bd660
0x051BD640: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD644: 4a210091  add x10, x10, #8
0x051BD648: 4b815ff8  ldur x11, [x10, #-8]
0x051BD64C: 7f0101eb  cmp x11, x1
0x051BD650: 00010054  b.eq #0x51bd670
0x051BD654: 290500f1  subs x9, x9, #1
0x051BD658: 4a410091  add x10, x10, #0x10
0x051BD65C: 61ffff54  b.ne #0x51bd648
0x051BD660: e00315aa  mov x0, x21
0x051BD664: e2031f2a  mov w2, wzr
0x051BD668: 2a657e97  bl #0x3156b10
0x051BD66C: 04000014  b #0x51bd67c
0x051BD670: 490180b9  ldrsw x9, [x10]
0x051BD674: 0811098b  add x8, x8, x9, lsl #4
0x051BD678: 00e10491  add x0, x8, #0x138
0x051BD67C: 080840a9  ldp x8, x2, [x0]
0x051BD680: e00315aa  mov x0, x21
0x051BD684: e10316aa  mov x1, x22
0x051BD688: 00013fd6  blr x8
0x051BD68C: 882501d0  adrp x8, #0x766f000
0x051BD690: 082141f9  ldr x8, [x8, #0x240]
0x051BD694: f50300aa  mov x21, x0
0x051BD698: 080140f9  ldr x8, [x8]
0x051BD69C: e00308aa  mov x0, x8
0x051BD6A0: 800d7f97  bl #0x3180ca0
0x051BD6A4: 881240f9  ldr x8, [x20, #0x20]
0x051BD6A8: e10313aa  mov x1, x19
0x051BD6AC: e3031faa  mov x3, xzr
0x051BD6B0: f40300aa  mov x20, x0
0x051BD6B4: 086140f9  ldr x8, [x8, #0xc0]
0x051BD6B8: 020d41f9  ldr x2, [x8, #0x218]
0x051BD6BC: c6920594  bl #0x53221d4
0x051BD6C0: d50300b4  cbz x21, #0x51bd738
0x051BD6C4: 8a2501d0  adrp x10, #0x766f000
0x051BD6C8: a80240f9  ldr x8, [x21]
0x051BD6CC: 4a2541f9  ldr x10, [x10, #0x248]
0x051BD6D0: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD6D4: 410140f9  ldr x1, [x10]
0x051BD6D8: 290100b4  cbz x9, #0x51bd6fc
0x051BD6DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD6E0: 4a210091  add x10, x10, #8
0x051BD6E4: 4b815ff8  ldur x11, [x10, #-8]
0x051BD6E8: 7f0101eb  cmp x11, x1
0x051BD6EC: 00010054  b.eq #0x51bd70c
0x051BD6F0: 290500f1  subs x9, x9, #1
0x051BD6F4: 4a410091  add x10, x10, #0x10
0x051BD6F8: 61ffff54  b.ne #0x51bd6e4
0x051BD6FC: 22008052  movz w2, #0x1
0x051BD700: e00315aa  mov x0, x21
0x051BD704: 03657e97  bl #0x3156b10
0x051BD708: 05000014  b #0x51bd71c
0x051BD70C: 490140b9  ldr w9, [x10]
0x051BD710: 29050011  add w9, w9, #1
0x051BD714: 08d1298b  add x8, x8, w9, sxtw #4
0x051BD718: 00e10491  add x0, x8, #0x138
0x051BD71C: 030840a9  ldp x3, x2, [x0]
0x051BD720: e00315aa  mov x0, x21
0x051BD724: e10314aa  mov x1, x20
0x051BD728: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BD72C: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BD730: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x051BD734: 60001fd6  br x3
0x051BD738: 5d0d7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD73C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$TryUnloadTmpSpriteOverride
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___TryUnloadTmpSpriteOverride (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BD73C* method);
; bytes=140 sha256=092685e878593b16a0694f40bea5ebd81de72f68a0fc1bd8cce596bdb7868b70 status=arm64_complete_bound indexed_start=True
0x051BD73C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BD740: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BD744: f45a01d0  adrp x20, #0x7d1b000
0x051BD748: 952401b0  adrp x21, #0x764e000
0x051BD74C: 882e7839  ldrb w8, [x20, #0xe0b]
0x051BD750: b57242f9  ldr x21, [x21, #0x4e0]
0x051BD754: f30300aa  mov x19, x0
0x051BD758: c8000037  tbnz w8, #0, #0x51bd770
0x051BD75C: 802401b0  adrp x0, #0x764e000
0x051BD760: 007042f9  ldr x0, [x0, #0x4e0]
0x051BD764: ad0c7f97  bl #0x3180a18
0x051BD768: 28008052  movz w8, #0x1
0x051BD76C: 882e3839  strb w8, [x20, #0xe0b]
0x051BD770: 740e4ef8  ldr x20, [x19, #0xe0]!
0x051BD774: a00240f9  ldr x0, [x21]
0x051BD778: 08e040b9  ldr w8, [x0, #0xe0]
0x051BD77C: 48000035  cbnz w8, #0x51bd784
0x051BD780: 030d7f97  bl #0x3180b8c
0x051BD784: e00314aa  mov x0, x20
0x051BD788: e1031faa  mov x1, xzr
0x051BD78C: e2031faa  mov x2, xzr
0x051BD790: f9847494  bl #0x6edeb74
0x051BD794: 40010036  tbz w0, #0, #0x51bd7bc
0x051BD798: 600240f9  ldr x0, [x19]
0x051BD79C: e1031faa  mov x1, xzr
0x051BD7A0: a90c3b94  bl #0x6080a44
0x051BD7A4: 7f0200f9  str xzr, [x19]
0x051BD7A8: e00313aa  mov x0, x19
0x051BD7AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BD7B0: e1031faa  mov x1, xzr
0x051BD7B4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BD7B8: 830c7f17  b #0x31809c4
0x051BD7BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BD7C0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BD7C4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BD7C8 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$LoadSoundConfig
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___LoadSoundConfig (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BD7C8* method);
; bytes=808 sha256=49d2b6f6e1f29d775ac6257456f47223aa6d9604a298f92f7642d372825f2acd status=arm64_complete_bound indexed_start=True
0x051BD7C8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x051BD7CC: f65701a9  stp x22, x21, [sp, #0x10]
0x051BD7D0: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BD7D4: f65a01d0  adrp x22, #0x7d1b000
0x051BD7D8: 952401b0  adrp x21, #0x764e000
0x051BD7DC: c8327839  ldrb w8, [x22, #0xe0c]
0x051BD7E0: b57242f9  ldr x21, [x21, #0x4e0]
0x051BD7E4: f40301aa  mov x20, x1
0x051BD7E8: f30300aa  mov x19, x0
0x051BD7EC: 08030037  tbnz w8, #0, #0x51bd84c
0x051BD7F0: e02501f0  adrp x0, #0x767c000
0x051BD7F4: 00c842f9  ldr x0, [x0, #0x590]
0x051BD7F8: 880c7f97  bl #0x3180a18
0x051BD7FC: 802501d0  adrp x0, #0x766f000
0x051BD800: 002041f9  ldr x0, [x0, #0x240]
0x051BD804: 850c7f97  bl #0x3180a18
0x051BD808: e02501f0  adrp x0, #0x767c000
0x051BD80C: 00cc42f9  ldr x0, [x0, #0x598]
0x051BD810: 820c7f97  bl #0x3180a18
0x051BD814: e0250190  adrp x0, #0x7679000
0x051BD818: 000043f9  ldr x0, [x0, #0x600]
0x051BD81C: 7f0c7f97  bl #0x3180a18
0x051BD820: 802501d0  adrp x0, #0x766f000
0x051BD824: 002441f9  ldr x0, [x0, #0x248]
0x051BD828: 7c0c7f97  bl #0x3180a18
0x051BD82C: e02501f0  adrp x0, #0x767c000
0x051BD830: 00d442f9  ldr x0, [x0, #0x5a8]
0x051BD834: 790c7f97  bl #0x3180a18
0x051BD838: 802401b0  adrp x0, #0x764e000
0x051BD83C: 007042f9  ldr x0, [x0, #0x4e0]
0x051BD840: 760c7f97  bl #0x3180a18
0x051BD844: 28008052  movz w8, #0x1
0x051BD848: c8323839  strb w8, [x22, #0xe0c]
0x051BD84C: a00240f9  ldr x0, [x21]
0x051BD850: 754e40f9  ldr x21, [x19, #0x98]
0x051BD854: 08e040b9  ldr w8, [x0, #0xe0]
0x051BD858: 48000035  cbnz w8, #0x51bd860
0x051BD85C: cc0c7f97  bl #0x3180b8c
0x051BD860: e00315aa  mov x0, x21
0x051BD864: e1031faa  mov x1, xzr
0x051BD868: 2d977494  bl #0x6ee351c
0x051BD86C: c0070037  tbnz w0, #0, #0x51bd964
0x051BD870: 680240f9  ldr x8, [x19]
0x051BD874: e00313aa  mov x0, x19
0x051BD878: 09b541f9  ldr x9, [x8, #0x368]
0x051BD87C: 01b941f9  ldr x1, [x8, #0x370]
0x051BD880: 20013fd6  blr x9
0x051BD884: e1031faa  mov x1, xzr
0x051BD888: f50300aa  mov x21, x0
0x051BD88C: 60010d94  bl #0x54fde0c
0x051BD890: a0060037  tbnz w0, #0, #0x51bd964
0x051BD894: 60a20291  add x0, x19, #0xa8
0x051BD898: e10315aa  mov x1, x21
0x051BD89C: e2031faa  mov x2, xzr
0x051BD8A0: 85400b94  bl #0x548dab4
0x051BD8A4: 401200b4  cbz x0, #0x51bdaec
0x051BD8A8: ea250190  adrp x10, #0x7679000
0x051BD8AC: 080040f9  ldr x8, [x0]
0x051BD8B0: 4a0143f9  ldr x10, [x10, #0x600]
0x051BD8B4: f50300aa  mov x21, x0
0x051BD8B8: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD8BC: 410140f9  ldr x1, [x10]
0x051BD8C0: 290100b4  cbz x9, #0x51bd8e4
0x051BD8C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD8C8: 4a210091  add x10, x10, #8
0x051BD8CC: 4b815ff8  ldur x11, [x10, #-8]
0x051BD8D0: 7f0101eb  cmp x11, x1
0x051BD8D4: 00010054  b.eq #0x51bd8f4
0x051BD8D8: 290500f1  subs x9, x9, #1
0x051BD8DC: 4a410091  add x10, x10, #0x10
0x051BD8E0: 61ffff54  b.ne #0x51bd8cc
0x051BD8E4: e00315aa  mov x0, x21
0x051BD8E8: e2031f2a  mov w2, wzr
0x051BD8EC: 89647e97  bl #0x3156b10
0x051BD8F0: 04000014  b #0x51bd900
0x051BD8F4: 490180b9  ldrsw x9, [x10]
0x051BD8F8: 0811098b  add x8, x8, x9, lsl #4
0x051BD8FC: 00e10491  add x0, x8, #0x138
0x051BD900: 080440a9  ldp x8, x1, [x0]
0x051BD904: e00315aa  mov x0, x21
0x051BD908: 00013fd6  blr x8
0x051BD90C: c0020036  tbz w0, #0, #0x51bd964
0x051BD910: 761e40f9  ldr x22, [x19, #0x38]
0x051BD914: d60e00b4  cbz x22, #0x51bdaec
0x051BD918: e92501f0  adrp x9, #0x767c000
0x051BD91C: 29cd42f9  ldr x9, [x9, #0x598]
0x051BD920: c80240f9  ldr x8, [x22]
0x051BD924: 370140f9  ldr x23, [x9]
0x051BD928: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD92C: e11240f9  ldr x1, [x23, #0x20]
0x051BD930: e2a24079  ldrh w2, [x23, #0x50]
0x051BD934: 290100b4  cbz x9, #0x51bd958
0x051BD938: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD93C: 4a210091  add x10, x10, #8
0x051BD940: 4b815ff8  ldur x11, [x10, #-8]
0x051BD944: 7f0101eb  cmp x11, x1
0x051BD948: 60010054  b.eq #0x51bd974
0x051BD94C: 290500f1  subs x9, x9, #1
0x051BD950: 4a410091  add x10, x10, #0x10
0x051BD954: 61ffff54  b.ne #0x51bd940
0x051BD958: e00316aa  mov x0, x22
0x051BD95C: 6d647e97  bl #0x3156b10
0x051BD960: 09000014  b #0x51bd984
0x051BD964: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BD968: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BD96C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x051BD970: c0035fd6  ret
0x051BD974: 490140b9  ldr w9, [x10]
0x051BD978: 2901020b  add w9, w9, w2
0x051BD97C: 08d1298b  add x8, x8, w9, sxtw #4
0x051BD980: 00e10491  add x0, x8, #0x138
0x051BD984: 000440f9  ldr x0, [x0, #8]
0x051BD988: e10317aa  mov x1, x23
0x051BD98C: 7f0c7f97  bl #0x3180b88
0x051BD990: 080440f9  ldr x8, [x0, #8]
0x051BD994: e20300aa  mov x2, x0
0x051BD998: e00316aa  mov x0, x22
0x051BD99C: e10315aa  mov x1, x21
0x051BD9A0: 00013fd6  blr x8
0x051BD9A4: e82501f0  adrp x8, #0x767c000
0x051BD9A8: 08c942f9  ldr x8, [x8, #0x590]
0x051BD9AC: f50300aa  mov x21, x0
0x051BD9B0: 080140f9  ldr x8, [x8]
0x051BD9B4: e00308aa  mov x0, x8
0x051BD9B8: ba0c7f97  bl #0x3180ca0
0x051BD9BC: 881240f9  ldr x8, [x20, #0x20]
0x051BD9C0: e10313aa  mov x1, x19
0x051BD9C4: e3031faa  mov x3, xzr
0x051BD9C8: f60300aa  mov x22, x0
0x051BD9CC: 086140f9  ldr x8, [x8, #0xc0]
0x051BD9D0: 021541f9  ldr x2, [x8, #0x228]
0x051BD9D4: 00920594  bl #0x53221d4
0x051BD9D8: b50800b4  cbz x21, #0x51bdaec
0x051BD9DC: ea2501f0  adrp x10, #0x767c000
0x051BD9E0: a80240f9  ldr x8, [x21]
0x051BD9E4: 4ad542f9  ldr x10, [x10, #0x5a8]
0x051BD9E8: 095d4279  ldrh w9, [x8, #0x12e]
0x051BD9EC: 410140f9  ldr x1, [x10]
0x051BD9F0: 290100b4  cbz x9, #0x51bda14
0x051BD9F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BD9F8: 4a210091  add x10, x10, #8
0x051BD9FC: 4b815ff8  ldur x11, [x10, #-8]
0x051BDA00: 7f0101eb  cmp x11, x1
0x051BDA04: 00010054  b.eq #0x51bda24
0x051BDA08: 290500f1  subs x9, x9, #1
0x051BDA0C: 4a410091  add x10, x10, #0x10
0x051BDA10: 61ffff54  b.ne #0x51bd9fc
0x051BDA14: e00315aa  mov x0, x21
0x051BDA18: e2031f2a  mov w2, wzr
0x051BDA1C: 3d647e97  bl #0x3156b10
0x051BDA20: 04000014  b #0x51bda30
0x051BDA24: 490180b9  ldrsw x9, [x10]
0x051BDA28: 0811098b  add x8, x8, x9, lsl #4
0x051BDA2C: 00e10491  add x0, x8, #0x138
0x051BDA30: 080840a9  ldp x8, x2, [x0]
0x051BDA34: e00315aa  mov x0, x21
0x051BDA38: e10316aa  mov x1, x22
0x051BDA3C: 00013fd6  blr x8
0x051BDA40: 882501d0  adrp x8, #0x766f000
0x051BDA44: 082141f9  ldr x8, [x8, #0x240]
0x051BDA48: f50300aa  mov x21, x0
0x051BDA4C: 080140f9  ldr x8, [x8]
0x051BDA50: e00308aa  mov x0, x8
0x051BDA54: 930c7f97  bl #0x3180ca0
0x051BDA58: 881240f9  ldr x8, [x20, #0x20]
0x051BDA5C: e10313aa  mov x1, x19
0x051BDA60: e3031faa  mov x3, xzr
0x051BDA64: f40300aa  mov x20, x0
0x051BDA68: 086140f9  ldr x8, [x8, #0xc0]
0x051BDA6C: 021941f9  ldr x2, [x8, #0x230]
0x051BDA70: d9910594  bl #0x53221d4
0x051BDA74: d50300b4  cbz x21, #0x51bdaec
0x051BDA78: 8a2501d0  adrp x10, #0x766f000
0x051BDA7C: a80240f9  ldr x8, [x21]
0x051BDA80: 4a2541f9  ldr x10, [x10, #0x248]
0x051BDA84: 095d4279  ldrh w9, [x8, #0x12e]
0x051BDA88: 410140f9  ldr x1, [x10]
0x051BDA8C: 290100b4  cbz x9, #0x51bdab0
0x051BDA90: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BDA94: 4a210091  add x10, x10, #8
0x051BDA98: 4b815ff8  ldur x11, [x10, #-8]
0x051BDA9C: 7f0101eb  cmp x11, x1
0x051BDAA0: 00010054  b.eq #0x51bdac0
0x051BDAA4: 290500f1  subs x9, x9, #1
0x051BDAA8: 4a410091  add x10, x10, #0x10
0x051BDAAC: 61ffff54  b.ne #0x51bda98
0x051BDAB0: 22008052  movz w2, #0x1
0x051BDAB4: e00315aa  mov x0, x21
0x051BDAB8: 16647e97  bl #0x3156b10
0x051BDABC: 05000014  b #0x51bdad0
0x051BDAC0: 490140b9  ldr w9, [x10]
0x051BDAC4: 29050011  add w9, w9, #1
0x051BDAC8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BDACC: 00e10491  add x0, x8, #0x138
0x051BDAD0: 030840a9  ldp x3, x2, [x0]
0x051BDAD4: e00315aa  mov x0, x21
0x051BDAD8: e10314aa  mov x1, x20
0x051BDADC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BDAE0: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BDAE4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x051BDAE8: 60001fd6  br x3
0x051BDAEC: 700c7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BDAF0 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$UnloadSoundConfig
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object___UnloadSoundConfig (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BDAF0* method);
; bytes=424 sha256=ff137ce80fc2ea74baaf062f1bdc82d1f895bd0fe53beb86234d0dc9336e7bd4 status=arm64_complete_bound indexed_start=True
0x051BDAF0: fe0f1df8  str x30, [sp, #-0x30]!
0x051BDAF4: f65701a9  stp x22, x21, [sp, #0x10]
0x051BDAF8: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BDAFC: f35a01d0  adrp x19, #0x7d1b000
0x051BDB00: 962401b0  adrp x22, #0x764e000
0x051BDB04: 68367839  ldrb w8, [x19, #0xe0d]
0x051BDB08: d67242f9  ldr x22, [x22, #0x4e0]
0x051BDB0C: f40300aa  mov x20, x0
0x051BDB10: 88010037  tbnz w8, #0, #0x51bdb40
0x051BDB14: e02501f0  adrp x0, #0x767c000
0x051BDB18: 006c43f9  ldr x0, [x0, #0x6d8]
0x051BDB1C: bf0b7f97  bl #0x3180a18
0x051BDB20: e02501f0  adrp x0, #0x767c000
0x051BDB24: 005841f9  ldr x0, [x0, #0x2b0]
0x051BDB28: bc0b7f97  bl #0x3180a18
0x051BDB2C: 802401b0  adrp x0, #0x764e000
0x051BDB30: 007042f9  ldr x0, [x0, #0x4e0]
0x051BDB34: b90b7f97  bl #0x3180a18
0x051BDB38: 28008052  movz w8, #0x1
0x051BDB3C: 68363839  strb w8, [x19, #0xe0d]
0x051BDB40: f30314aa  mov x19, x20
0x051BDB44: 758e49f8  ldr x21, [x19, #0x98]!
0x051BDB48: c00240f9  ldr x0, [x22]
0x051BDB4C: 08e040b9  ldr w8, [x0, #0xe0]
0x051BDB50: 48000035  cbnz w8, #0x51bdb58
0x051BDB54: 0e0c7f97  bl #0x3180b8c
0x051BDB58: e00315aa  mov x0, x21
0x051BDB5C: e1031faa  mov x1, xzr
0x051BDB60: 6f967494  bl #0x6ee351c
0x051BDB64: c0020036  tbz w0, #0, #0x51bdbbc
0x051BDB68: 953a40f9  ldr x21, [x20, #0x70]
0x051BDB6C: 550900b4  cbz x21, #0x51bdc94
0x051BDB70: ea2501f0  adrp x10, #0x767c000
0x051BDB74: a80240f9  ldr x8, [x21]
0x051BDB78: 964e40f9  ldr x22, [x20, #0x98]
0x051BDB7C: 4a5941f9  ldr x10, [x10, #0x2b0]
0x051BDB80: 095d4279  ldrh w9, [x8, #0x12e]
0x051BDB84: 410140f9  ldr x1, [x10]
0x051BDB88: 290100b4  cbz x9, #0x51bdbac
0x051BDB8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BDB90: 4a210091  add x10, x10, #8
0x051BDB94: 4b815ff8  ldur x11, [x10, #-8]
0x051BDB98: 7f0101eb  cmp x11, x1
0x051BDB9C: 80010054  b.eq #0x51bdbcc
0x051BDBA0: 290500f1  subs x9, x9, #1
0x051BDBA4: 4a410091  add x10, x10, #0x10
0x051BDBA8: 61ffff54  b.ne #0x51bdb94
0x051BDBAC: 22018052  movz w2, #0x9
0x051BDBB0: e00315aa  mov x0, x21
0x051BDBB4: d7637e97  bl #0x3156b10
0x051BDBB8: 09000014  b #0x51bdbdc
0x051BDBBC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BDBC0: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BDBC4: fe0743f8  ldr x30, [sp], #0x30
0x051BDBC8: c0035fd6  ret
0x051BDBCC: 490140b9  ldr w9, [x10]
0x051BDBD0: 29250011  add w9, w9, #9
0x051BDBD4: 08d1298b  add x8, x8, w9, sxtw #4
0x051BDBD8: 00e10491  add x0, x8, #0x138
0x051BDBDC: 080840a9  ldp x8, x2, [x0]
0x051BDBE0: e00315aa  mov x0, x21
0x051BDBE4: e10316aa  mov x1, x22
0x051BDBE8: 00013fd6  blr x8
0x051BDBEC: 951e40f9  ldr x21, [x20, #0x38]
0x051BDBF0: 350500b4  cbz x21, #0x51bdc94
0x051BDBF4: e92501f0  adrp x9, #0x767c000
0x051BDBF8: 296d43f9  ldr x9, [x9, #0x6d8]
0x051BDBFC: a80240f9  ldr x8, [x21]
0x051BDC00: 944e40f9  ldr x20, [x20, #0x98]
0x051BDC04: 360140f9  ldr x22, [x9]
0x051BDC08: 095d4279  ldrh w9, [x8, #0x12e]
0x051BDC0C: c11240f9  ldr x1, [x22, #0x20]
0x051BDC10: c2a24079  ldrh w2, [x22, #0x50]
0x051BDC14: 290100b4  cbz x9, #0x51bdc38
0x051BDC18: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BDC1C: 4a210091  add x10, x10, #8
0x051BDC20: 4b815ff8  ldur x11, [x10, #-8]
0x051BDC24: 7f0101eb  cmp x11, x1
0x051BDC28: e0000054  b.eq #0x51bdc44
0x051BDC2C: 290500f1  subs x9, x9, #1
0x051BDC30: 4a410091  add x10, x10, #0x10
0x051BDC34: 61ffff54  b.ne #0x51bdc20
0x051BDC38: e00315aa  mov x0, x21
0x051BDC3C: b5637e97  bl #0x3156b10
0x051BDC40: 05000014  b #0x51bdc54
0x051BDC44: 490140b9  ldr w9, [x10]
0x051BDC48: 2901020b  add w9, w9, w2
0x051BDC4C: 08d1298b  add x8, x8, w9, sxtw #4
0x051BDC50: 00e10491  add x0, x8, #0x138
0x051BDC54: 000440f9  ldr x0, [x0, #8]
0x051BDC58: e10316aa  mov x1, x22
0x051BDC5C: cb0b7f97  bl #0x3180b88
0x051BDC60: 080440f9  ldr x8, [x0, #8]
0x051BDC64: e30300aa  mov x3, x0
0x051BDC68: e00315aa  mov x0, x21
0x051BDC6C: e10314aa  mov x1, x20
0x051BDC70: e2031f2a  mov w2, wzr
0x051BDC74: 00013fd6  blr x8
0x051BDC78: 7f0200f9  str xzr, [x19]
0x051BDC7C: e00313aa  mov x0, x19
0x051BDC80: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BDC84: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BDC88: e1031faa  mov x1, xzr
0x051BDC8C: fe0743f8  ldr x30, [sp], #0x30
0x051BDC90: 4d0b7f17  b #0x31809c4
0x051BDC94: 060c7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BDC98 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$.ctor
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____ctor (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BDC98* method);
; bytes=260 sha256=360134b3489e7d27bed1bb36ab31d93d5649d44c506645164c2a030b2c1dc819 status=arm64_complete_bound indexed_start=True
0x051BDC98: fe0f1cf8  str x30, [sp, #-0x40]!
0x051BDC9C: f85f01a9  stp x24, x23, [sp, #0x10]
0x051BDCA0: f65702a9  stp x22, x21, [sp, #0x20]
0x051BDCA4: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BDCA8: f75a01d0  adrp x23, #0x7d1b000
0x051BDCAC: b82501d0  adrp x24, #0x7673000
0x051BDCB0: b42501d0  adrp x20, #0x7673000
0x051BDCB4: 962401b0  adrp x22, #0x764e000
0x051BDCB8: 952401b0  adrp x21, #0x764e000
0x051BDCBC: e83a7839  ldrb w8, [x23, #0xe0e]
0x051BDCC0: 18bf43f9  ldr x24, [x24, #0x778]
0x051BDCC4: 94c243f9  ldr x20, [x20, #0x780]
0x051BDCC8: d65e46f9  ldr x22, [x22, #0xcb8]
0x051BDCCC: b56246f9  ldr x21, [x21, #0xcc0]
0x051BDCD0: f30300aa  mov x19, x0
0x051BDCD4: e8010037  tbnz w8, #0, #0x51bdd10
0x051BDCD8: 802401b0  adrp x0, #0x764e000
0x051BDCDC: 006046f9  ldr x0, [x0, #0xcc0]
0x051BDCE0: 4e0b7f97  bl #0x3180a18
0x051BDCE4: 802401b0  adrp x0, #0x764e000
0x051BDCE8: 005c46f9  ldr x0, [x0, #0xcb8]
0x051BDCEC: 4b0b7f97  bl #0x3180a18
0x051BDCF0: a02501d0  adrp x0, #0x7673000
0x051BDCF4: 00c043f9  ldr x0, [x0, #0x780]
0x051BDCF8: 480b7f97  bl #0x3180a18
0x051BDCFC: a02501d0  adrp x0, #0x7673000
0x051BDD00: 00bc43f9  ldr x0, [x0, #0x778]
0x051BDD04: 450b7f97  bl #0x3180a18
0x051BDD08: 28008052  movz w8, #0x1
0x051BDD0C: e83a3839  strb w8, [x23, #0xe0e]
0x051BDD10: 000340f9  ldr x0, [x24]
0x051BDD14: e30b7f97  bl #0x3180ca0
0x051BDD18: 810240f9  ldr x1, [x20]
0x051BDD1C: e003679e  fmov d0, xzr
0x051BDD20: f40300aa  mov x20, x0
0x051BDD24: 718ec197  bl #0x42216e8
0x051BDD28: e00313aa  mov x0, x19
0x051BDD2C: 140c0af8  str x20, [x0, #0xa0]!
0x051BDD30: e10314aa  mov x1, x20
0x051BDD34: 240b7f97  bl #0x31809c4
0x051BDD38: c00240f9  ldr x0, [x22]
0x051BDD3C: d90b7f97  bl #0x3180ca0
0x051BDD40: a10240f9  ldr x1, [x21]
0x051BDD44: f40300aa  mov x20, x0
0x051BDD48: bc17ba97  bl #0x4043c38
0x051BDD4C: e00313aa  mov x0, x19
0x051BDD50: 140c0df8  str x20, [x0, #0xd0]!
0x051BDD54: e10314aa  mov x1, x20
0x051BDD58: 1b0b7f97  bl #0x31809c4
0x051BDD5C: c00240f9  ldr x0, [x22]
0x051BDD60: d00b7f97  bl #0x3180ca0
0x051BDD64: a10240f9  ldr x1, [x21]
0x051BDD68: f40300aa  mov x20, x0
0x051BDD6C: b317ba97  bl #0x4043c38
0x051BDD70: e00313aa  mov x0, x19
0x051BDD74: 148c0df8  str x20, [x0, #0xd8]!
0x051BDD78: e10314aa  mov x1, x20
0x051BDD7C: 120b7f97  bl #0x31809c4
0x051BDD80: e00313aa  mov x0, x19
0x051BDD84: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BDD88: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BDD8C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BDD90: e1031faa  mov x1, xzr
0x051BDD94: fe0744f8  ldr x30, [sp], #0x40
0x051BDD98: 59d45b14  b #0x68b2efc

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BDD9C | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$<LateCreate>b__128_0
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____LateCreate_b__128_0 (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, const MethodInfo_51BDD9C* method);
; bytes=268 sha256=ed3c0f1ac2f7b5fc5d6dbe69fbf038740025f48601dd83f8125744054679bd97 status=arm64_complete_bound indexed_start=True
0x051BDD9C: fe0f1df8  str x30, [sp, #-0x30]!
0x051BDDA0: f65701a9  stp x22, x21, [sp, #0x10]
0x051BDDA4: f44f02a9  stp x20, x19, [sp, #0x20]
0x051BDDA8: f55a01d0  adrp x21, #0x7d1b000
0x051BDDAC: 36260190  adrp x22, #0x7681000
0x051BDDB0: a83e7839  ldrb w8, [x21, #0xe0f]
0x051BDDB4: d67e46f9  ldr x22, [x22, #0xcf8]
0x051BDDB8: f40301aa  mov x20, x1
0x051BDDBC: f30300aa  mov x19, x0
0x051BDDC0: 28010037  tbnz w8, #0, #0x51bdde4
0x051BDDC4: 20260190  adrp x0, #0x7681000
0x051BDDC8: 002446f9  ldr x0, [x0, #0xc48]
0x051BDDCC: 130b7f97  bl #0x3180a18
0x051BDDD0: 20260190  adrp x0, #0x7681000
0x051BDDD4: 007c46f9  ldr x0, [x0, #0xcf8]
0x051BDDD8: 100b7f97  bl #0x3180a18
0x051BDDDC: 28008052  movz w8, #0x1
0x051BDDE0: a83e3839  strb w8, [x21, #0xe0f]
0x051BDDE4: 28008052  movz w8, #0x1
0x051BDDE8: 68420239  strb w8, [x19, #0x90]
0x051BDDEC: 617640f9  ldr x1, [x19, #0xe8]
0x051BDDF0: c00240f9  ldr x0, [x22]
0x051BDDF4: 751640f9  ldr x21, [x19, #0x28]
0x051BDDF8: e2031faa  mov x2, xzr
0x051BDDFC: 69b20c94  bl #0x54ea7a0
0x051BDE00: 350500b4  cbz x21, #0x51bdea4
0x051BDE04: 2a260190  adrp x10, #0x7681000
0x051BDE08: a80240f9  ldr x8, [x21]
0x051BDE0C: 4a2546f9  ldr x10, [x10, #0xc48]
0x051BDE10: f60300aa  mov x22, x0
0x051BDE14: 095d4279  ldrh w9, [x8, #0x12e]
0x051BDE18: 410140f9  ldr x1, [x10]
0x051BDE1C: 290100b4  cbz x9, #0x51bde40
0x051BDE20: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BDE24: 4a210091  add x10, x10, #8
0x051BDE28: 4b815ff8  ldur x11, [x10, #-8]
0x051BDE2C: 7f0101eb  cmp x11, x1
0x051BDE30: 00010054  b.eq #0x51bde50
0x051BDE34: 290500f1  subs x9, x9, #1
0x051BDE38: 4a410091  add x10, x10, #0x10
0x051BDE3C: 61ffff54  b.ne #0x51bde28
0x051BDE40: 22008052  movz w2, #0x1
0x051BDE44: e00315aa  mov x0, x21
0x051BDE48: 32637e97  bl #0x3156b10
0x051BDE4C: 05000014  b #0x51bde60
0x051BDE50: 490140b9  ldr w9, [x10]
0x051BDE54: 29050011  add w9, w9, #1
0x051BDE58: 08d1298b  add x8, x8, w9, sxtw #4
0x051BDE5C: 00e10491  add x0, x8, #0x138
0x051BDE60: 080840a9  ldp x8, x2, [x0]
0x051BDE64: e00315aa  mov x0, x21
0x051BDE68: e10316aa  mov x1, x22
0x051BDE6C: 00013fd6  blr x8
0x051BDE70: 881240f9  ldr x8, [x20, #0x20]
0x051BDE74: e00313aa  mov x0, x19
0x051BDE78: 086140f9  ldr x8, [x8, #0xc0]
0x051BDE7C: 011d41f9  ldr x1, [x8, #0x238]
0x051BDE80: 6efdff97  bl #0x51bd438
0x051BDE84: 680240f9  ldr x8, [x19]
0x051BDE88: e00313aa  mov x0, x19
0x051BDE8C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x051BDE90: f65741a9  ldp x22, x21, [sp, #0x10]
0x051BDE94: 02bd41f9  ldr x2, [x8, #0x378]
0x051BDE98: 01c141f9  ldr x1, [x8, #0x380]
0x051BDE9C: fe0743f8  ldr x30, [sp], #0x30
0x051BDEA0: 40001fd6  br x2
0x051BDEA4: 820b7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BDEA8 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$<LateCreate>b__128_1
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____LateCreate_b__128_1 (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_Exception_o* exception, const MethodInfo_51BDEA8* method);
; bytes=408 sha256=059967e2e86f4425011dd8d732a007c47b2e64b955499e7c6563150592d5517d status=arm64_complete_bound indexed_start=True
0x051BDEA8: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x051BDEAC: f85f01a9  stp x24, x23, [sp, #0x10]
0x051BDEB0: f65702a9  stp x22, x21, [sp, #0x20]
0x051BDEB4: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BDEB8: f65a01d0  adrp x22, #0x7d1b000
0x051BDEBC: c8427839  ldrb w8, [x22, #0xe10]
0x051BDEC0: f30302aa  mov x19, x2
0x051BDEC4: f50301aa  mov x21, x1
0x051BDEC8: f40300aa  mov x20, x0
0x051BDECC: e8010037  tbnz w8, #0, #0x51bdf08
0x051BDED0: 20260190  adrp x0, #0x7681000
0x051BDED4: 002446f9  ldr x0, [x0, #0xc48]
0x051BDED8: d00a7f97  bl #0x3180a18
0x051BDEDC: 20260190  adrp x0, #0x7681000
0x051BDEE0: 008046f9  ldr x0, [x0, #0xd00]
0x051BDEE4: cd0a7f97  bl #0x3180a18
0x051BDEE8: 20260190  adrp x0, #0x7681000
0x051BDEEC: 008446f9  ldr x0, [x0, #0xd08]
0x051BDEF0: ca0a7f97  bl #0x3180a18
0x051BDEF4: 20260190  adrp x0, #0x7681000
0x051BDEF8: 008846f9  ldr x0, [x0, #0xd10]
0x051BDEFC: c70a7f97  bl #0x3180a18
0x051BDF00: 28008052  movz w8, #0x1
0x051BDF04: c8423839  strb w8, [x22, #0xe10]
0x051BDF08: b50900b4  cbz x21, #0x51be03c
0x051BDF0C: a80240f9  ldr x8, [x21]
0x051BDF10: 38260190  adrp x24, #0x7681000
0x051BDF14: 39260190  adrp x25, #0x7681000
0x051BDF18: 961640f9  ldr x22, [x20, #0x28]
0x051BDF1C: 098558a9  ldp x9, x1, [x8, #0x188]
0x051BDF20: 977640f9  ldr x23, [x20, #0xe8]
0x051BDF24: 188b46f9  ldr x24, [x24, #0xd10]
0x051BDF28: 398746f9  ldr x25, [x25, #0xd08]
0x051BDF2C: e00315aa  mov x0, x21
0x051BDF30: 20013fd6  blr x9
0x051BDF34: 080340f9  ldr x8, [x24]
0x051BDF38: 220340f9  ldr x2, [x25]
0x051BDF3C: e30300aa  mov x3, x0
0x051BDF40: e10317aa  mov x1, x23
0x051BDF44: e00308aa  mov x0, x8
0x051BDF48: e4031faa  mov x4, xzr
0x051BDF4C: e0e60c94  bl #0x54f7acc
0x051BDF50: 760700b4  cbz x22, #0x51be03c
0x051BDF54: 2a260190  adrp x10, #0x7681000
0x051BDF58: c80240f9  ldr x8, [x22]
0x051BDF5C: 4a2546f9  ldr x10, [x10, #0xc48]
0x051BDF60: f70300aa  mov x23, x0
0x051BDF64: 095d4279  ldrh w9, [x8, #0x12e]
0x051BDF68: 410140f9  ldr x1, [x10]
0x051BDF6C: 290100b4  cbz x9, #0x51bdf90
0x051BDF70: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BDF74: 4a210091  add x10, x10, #8
0x051BDF78: 4b815ff8  ldur x11, [x10, #-8]
0x051BDF7C: 7f0101eb  cmp x11, x1
0x051BDF80: 00010054  b.eq #0x51bdfa0
0x051BDF84: 290500f1  subs x9, x9, #1
0x051BDF88: 4a410091  add x10, x10, #0x10
0x051BDF8C: 61ffff54  b.ne #0x51bdf78
0x051BDF90: 22008052  movz w2, #0x1
0x051BDF94: e00316aa  mov x0, x22
0x051BDF98: de627e97  bl #0x3156b10
0x051BDF9C: 05000014  b #0x51bdfb0
0x051BDFA0: 490140b9  ldr w9, [x10]
0x051BDFA4: 29050011  add w9, w9, #1
0x051BDFA8: 08d1298b  add x8, x8, w9, sxtw #4
0x051BDFAC: 00e10491  add x0, x8, #0x138
0x051BDFB0: 080840a9  ldp x8, x2, [x0]
0x051BDFB4: e00316aa  mov x0, x22
0x051BDFB8: e10317aa  mov x1, x23
0x051BDFBC: 00013fd6  blr x8
0x051BDFC0: 880240f9  ldr x8, [x20]
0x051BDFC4: e00314aa  mov x0, x20
0x051BDFC8: 09c541f9  ldr x9, [x8, #0x388]
0x051BDFCC: 01c941f9  ldr x1, [x8, #0x390]
0x051BDFD0: 20013fd6  blr x9
0x051BDFD4: e00314aa  mov x0, x20
0x051BDFD8: e1031faa  mov x1, xzr
0x051BDFDC: 7a731494  bl #0x56dadc4
0x051BDFE0: e00200b4  cbz x0, #0x51be03c
0x051BDFE4: 080040f9  ldr x8, [x0]
0x051BDFE8: 36260190  adrp x22, #0x7681000
0x051BDFEC: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x051BDFF0: d68246f9  ldr x22, [x22, #0xd00]
0x051BDFF4: 20013fd6  blr x9
0x051BDFF8: c80240f9  ldr x8, [x22]
0x051BDFFC: 827640f9  ldr x2, [x20, #0xe8]
0x051BE000: e10300aa  mov x1, x0
0x051BE004: e30315aa  mov x3, x21
0x051BE008: e00308aa  mov x0, x8
0x051BE00C: e4031faa  mov x4, xzr
0x051BE010: c4e70c94  bl #0x54f7f20
0x051BE014: 681240f9  ldr x8, [x19, #0x20]
0x051BE018: e10300aa  mov x1, x0
0x051BE01C: e00314aa  mov x0, x20
0x051BE020: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BE024: 086140f9  ldr x8, [x8, #0xc0]
0x051BE028: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BE02C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BE030: 022941f9  ldr x2, [x8, #0x250]
0x051BE034: fe67c4a8  ldp x30, x25, [sp], #0x40
0x051BE038: c1f4ff17  b #0x51bb33c
0x051BE03C: 1c0b7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BE040 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$<TryAddTmpSpriteOverride>b__129_0
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____TryAddTmpSpriteOverride_b__129_0 (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, TMPro_TMP_SpriteAsset_o* spriteAsset, const MethodInfo_51BE040* method);
; bytes=32 sha256=70dbf7994b4f8916569b2cab2ba19337b15d8de3480a461325330d518fe2d995 status=arm64_complete_bound indexed_start=True
0x051BE040: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x051BE044: 010c0ef8  str x1, [x0, #0xe0]!
0x051BE048: f30301aa  mov x19, x1
0x051BE04C: 5e0a7f97  bl #0x31809c4
0x051BE050: e00313aa  mov x0, x19
0x051BE054: e1031faa  mov x1, xzr
0x051BE058: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x051BE05C: 0b0a3b14  b #0x6080888

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BE060 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$<TryAddTmpSpriteOverride>b__129_1
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____TryAddTmpSpriteOverride_b__129_1 (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_Exception_o* ex, const MethodInfo_51BE060* method);
; bytes=564 sha256=178ed3d024f90fcc00ff7d8e8b5addcc1f8a6986050a3c3d3ca539e98e423de3 status=arm64_complete_bound indexed_start=True
0x051BE060: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x051BE064: f85f01a9  stp x24, x23, [sp, #0x10]
0x051BE068: f65702a9  stp x22, x21, [sp, #0x20]
0x051BE06C: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BE070: f45a01b0  adrp x20, #0x7d1b000
0x051BE074: 96240190  adrp x22, #0x764e000
0x051BE078: 88467839  ldrb w8, [x20, #0xe11]
0x051BE07C: d6d242f9  ldr x22, [x22, #0x5a0]
0x051BE080: f30301aa  mov x19, x1
0x051BE084: f50300aa  mov x21, x0
0x051BE088: 08030037  tbnz w8, #0, #0x51be0e8
0x051BE08C: 602501f0  adrp x0, #0x766d000
0x051BE090: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BE094: 610a7f97  bl #0x3180a18
0x051BE098: 80240190  adrp x0, #0x764e000
0x051BE09C: 00d042f9  ldr x0, [x0, #0x5a0]
0x051BE0A0: 5e0a7f97  bl #0x3180a18
0x051BE0A4: 002601f0  adrp x0, #0x7681000
0x051BE0A8: 008c46f9  ldr x0, [x0, #0xd18]
0x051BE0AC: 5b0a7f97  bl #0x3180a18
0x051BE0B0: 002601f0  adrp x0, #0x7681000
0x051BE0B4: 004446f9  ldr x0, [x0, #0xc88]
0x051BE0B8: 580a7f97  bl #0x3180a18
0x051BE0BC: 002601f0  adrp x0, #0x7681000
0x051BE0C0: 009046f9  ldr x0, [x0, #0xd20]
0x051BE0C4: 550a7f97  bl #0x3180a18
0x051BE0C8: e02501d0  adrp x0, #0x767c000
0x051BE0CC: 006441f9  ldr x0, [x0, #0x2c8]
0x051BE0D0: 520a7f97  bl #0x3180a18
0x051BE0D4: 802401d0  adrp x0, #0x7650000
0x051BE0D8: 00dc41f9  ldr x0, [x0, #0x3b8]
0x051BE0DC: 4f0a7f97  bl #0x3180a18
0x051BE0E0: 28008052  movz w8, #0x1
0x051BE0E4: 88463839  strb w8, [x20, #0xe11]
0x051BE0E8: c00240f9  ldr x0, [x22]
0x051BE0EC: 81008052  movz w1, #0x4
0x051BE0F0: 830a7f97  bl #0x3180afc
0x051BE0F4: 950c00b4  cbz x21, #0x51be284
0x051BE0F8: f40300aa  mov x20, x0
0x051BE0FC: e00315aa  mov x0, x21
0x051BE100: e1031faa  mov x1, xzr
0x051BE104: 30731494  bl #0x56dadc4
0x051BE108: e00b00b4  cbz x0, #0x51be284
0x051BE10C: 080040f9  ldr x8, [x0]
0x051BE110: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x051BE114: 20013fd6  blr x9
0x051BE118: 740b00b4  cbz x20, #0x51be284
0x051BE11C: f60300aa  mov x22, x0
0x051BE120: c00000b4  cbz x0, #0x51be138
0x051BE124: 880240f9  ldr x8, [x20]
0x051BE128: e00316aa  mov x0, x22
0x051BE12C: 012140f9  ldr x1, [x8, #0x40]
0x051BE130: 980a7f97  bl #0x3180b90
0x051BE134: a00a00b4  cbz x0, #0x51be288
0x051BE138: 881a40b9  ldr w8, [x20, #0x18]
0x051BE13C: 280a0034  cbz w8, #0x51be280
0x051BE140: 172601f0  adrp x23, #0x7681000
0x051BE144: f78e46f9  ldr x23, [x23, #0xd18]
0x051BE148: e00314aa  mov x0, x20
0x051BE14C: 160c02f8  str x22, [x0, #0x20]!
0x051BE150: e10316aa  mov x1, x22
0x051BE154: 1c0a7f97  bl #0x31809c4
0x051BE158: e00240f9  ldr x0, [x23]
0x051BE15C: e00000b4  cbz x0, #0x51be178
0x051BE160: 880240f9  ldr x8, [x20]
0x051BE164: 012140f9  ldr x1, [x8, #0x40]
0x051BE168: 8a0a7f97  bl #0x3180b90
0x051BE16C: e00800b4  cbz x0, #0x51be288
0x051BE170: e10240f9  ldr x1, [x23]
0x051BE174: 02000014  b #0x51be17c
0x051BE178: e1031faa  mov x1, xzr
0x051BE17C: 881a40b9  ldr w8, [x20, #0x18]
0x051BE180: 1f050071  cmp w8, #1
0x051BE184: e9070054  b.ls #0x51be280
0x051BE188: e00314aa  mov x0, x20
0x051BE18C: 018c02f8  str x1, [x0, #0x28]!
0x051BE190: 0d0a7f97  bl #0x31809c4
0x051BE194: b57640f9  ldr x21, [x21, #0xe8]
0x051BE198: d50000b4  cbz x21, #0x51be1b0
0x051BE19C: 880240f9  ldr x8, [x20]
0x051BE1A0: e00315aa  mov x0, x21
0x051BE1A4: 012140f9  ldr x1, [x8, #0x40]
0x051BE1A8: 7a0a7f97  bl #0x3180b90
0x051BE1AC: e00600b4  cbz x0, #0x51be288
0x051BE1B0: 881a40b9  ldr w8, [x20, #0x18]
0x051BE1B4: 1f090071  cmp w8, #2
0x051BE1B8: 49060054  b.ls #0x51be280
0x051BE1BC: e00314aa  mov x0, x20
0x051BE1C0: 150c03f8  str x21, [x0, #0x30]!
0x051BE1C4: e10315aa  mov x1, x21
0x051BE1C8: ff097f97  bl #0x31809c4
0x051BE1CC: d30000b4  cbz x19, #0x51be1e4
0x051BE1D0: 880240f9  ldr x8, [x20]
0x051BE1D4: e00313aa  mov x0, x19
0x051BE1D8: 012140f9  ldr x1, [x8, #0x40]
0x051BE1DC: 6d0a7f97  bl #0x3180b90
0x051BE1E0: 400500b4  cbz x0, #0x51be288
0x051BE1E4: 881a40b9  ldr w8, [x20, #0x18]
0x051BE1E8: 1f0d0071  cmp w8, #3
0x051BE1EC: a9040054  b.ls #0x51be280
0x051BE1F0: f82501d0  adrp x24, #0x767c000
0x051BE1F4: 792501f0  adrp x25, #0x766d000
0x051BE1F8: 952401d0  adrp x21, #0x7650000
0x051BE1FC: 162601f0  adrp x22, #0x7681000
0x051BE200: 172601f0  adrp x23, #0x7681000
0x051BE204: 186741f9  ldr x24, [x24, #0x2c8]
0x051BE208: 396f46f9  ldr x25, [x25, #0xcd8]
0x051BE20C: b5de41f9  ldr x21, [x21, #0x3b8]
0x051BE210: d64646f9  ldr x22, [x22, #0xc88]
0x051BE214: f79246f9  ldr x23, [x23, #0xd20]
0x051BE218: e00314aa  mov x0, x20
0x051BE21C: 138c03f8  str x19, [x0, #0x38]!
0x051BE220: e10313aa  mov x1, x19
0x051BE224: e8097f97  bl #0x31809c4
0x051BE228: 000340f9  ldr x0, [x24]
0x051BE22C: e10314aa  mov x1, x20
0x051BE230: e2031faa  mov x2, xzr
0x051BE234: 4ce70c94  bl #0x54f7f64
0x051BE238: 280340f9  ldr x8, [x25]
0x051BE23C: f30300aa  mov x19, x0
0x051BE240: 09e140b9  ldr w9, [x8, #0xe0]
0x051BE244: 69000035  cbnz w9, #0x51be250
0x051BE248: e00308aa  mov x0, x8
0x051BE24C: 500a7f97  bl #0x3180b8c
0x051BE250: a10240f9  ldr x1, [x21]
0x051BE254: c30240f9  ldr x3, [x22]
0x051BE258: e40240f9  ldr x4, [x23]
0x051BE25C: e00313aa  mov x0, x19
0x051BE260: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BE264: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BE268: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BE26C: e2031faa  mov x2, xzr
0x051BE270: e5031faa  mov x5, xzr
0x051BE274: e6031faa  mov x6, xzr
0x051BE278: fe67c4a8  ldp x30, x25, [sp], #0x40
0x051BE27C: 6eb80a14  b #0x546c434
0x051BE280: 8d0a7f97  bl #0x3180cb4
0x051BE284: 8a0a7f97  bl #0x3180cac
0x051BE288: 920a7f97  bl #0x3180cd0
0x051BE28C: e1031faa  mov x1, xzr
0x051BE290: 3b0a7f97  bl #0x3180b7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BE294 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$<LoadSoundConfig>b__131_0
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____LoadSoundConfig_b__131_0 (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, Merger_Audio_Configuration_Sound_o* config, const MethodInfo_51BE294* method);
; bytes=188 sha256=8f54c0e5475bd56167166a149ce3b2310dbecf9633aae33db7ec122617bee180 status=arm64_complete_bound indexed_start=True
0x051BE294: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x051BE298: f44f01a9  stp x20, x19, [sp, #0x10]
0x051BE29C: f55a01b0  adrp x21, #0x7d1b000
0x051BE2A0: a84a7839  ldrb w8, [x21, #0xe12]
0x051BE2A4: f30301aa  mov x19, x1
0x051BE2A8: f40300aa  mov x20, x0
0x051BE2AC: c8000037  tbnz w8, #0, #0x51be2c4
0x051BE2B0: e02501d0  adrp x0, #0x767c000
0x051BE2B4: 005841f9  ldr x0, [x0, #0x2b0]
0x051BE2B8: d8097f97  bl #0x3180a18
0x051BE2BC: 28008052  movz w8, #0x1
0x051BE2C0: a84a3839  strb w8, [x21, #0xe12]
0x051BE2C4: 938e09f8  str x19, [x20, #0x98]!
0x051BE2C8: e00314aa  mov x0, x20
0x051BE2CC: e10313aa  mov x1, x19
0x051BE2D0: bd097f97  bl #0x31809c4
0x051BE2D4: 94825df8  ldur x20, [x20, #-0x28]
0x051BE2D8: b40300b4  cbz x20, #0x51be34c
0x051BE2DC: ea2501d0  adrp x10, #0x767c000
0x051BE2E0: 880240f9  ldr x8, [x20]
0x051BE2E4: 4a5941f9  ldr x10, [x10, #0x2b0]
0x051BE2E8: 095d4279  ldrh w9, [x8, #0x12e]
0x051BE2EC: 410140f9  ldr x1, [x10]
0x051BE2F0: 290100b4  cbz x9, #0x51be314
0x051BE2F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x051BE2F8: 4a210091  add x10, x10, #8
0x051BE2FC: 4b815ff8  ldur x11, [x10, #-8]
0x051BE300: 7f0101eb  cmp x11, x1
0x051BE304: 00010054  b.eq #0x51be324
0x051BE308: 290500f1  subs x9, x9, #1
0x051BE30C: 4a410091  add x10, x10, #0x10
0x051BE310: 61ffff54  b.ne #0x51be2fc
0x051BE314: 02018052  movz w2, #0x8
0x051BE318: e00314aa  mov x0, x20
0x051BE31C: fd617e97  bl #0x3156b10
0x051BE320: 05000014  b #0x51be334
0x051BE324: 490140b9  ldr w9, [x10]
0x051BE328: 29210011  add w9, w9, #8
0x051BE32C: 08d1298b  add x8, x8, w9, sxtw #4
0x051BE330: 00e10491  add x0, x8, #0x138
0x051BE334: 030840a9  ldp x3, x2, [x0]
0x051BE338: e00314aa  mov x0, x20
0x051BE33C: e10313aa  mov x1, x19
0x051BE340: f44f41a9  ldp x20, x19, [sp, #0x10]
0x051BE344: fe57c2a8  ldp x30, x21, [sp], #0x20
0x051BE348: 60001fd6  br x3
0x051BE34C: 580a7f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x51BE350 | Merger.RemoteLiveOps.Controllers.EventControllerBase<object>$$<LoadSoundConfig>b__131_1
; native signature: void Merger_RemoteLiveOps_Controllers_EventControllerBase_object____LoadSoundConfig_b__131_1 (Merger_RemoteLiveOps_Controllers_EventControllerBase_TEventData__o* __this, System_Exception_o* ex, const MethodInfo_51BE350* method);
; bytes=564 sha256=84eab3e8adc650c9e7f0c5d8be3d3c014d9ff8dc669d7ddc7d2532c145440957 status=arm64_complete_bound indexed_start=True
0x051BE350: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x051BE354: f85f01a9  stp x24, x23, [sp, #0x10]
0x051BE358: f65702a9  stp x22, x21, [sp, #0x20]
0x051BE35C: f44f03a9  stp x20, x19, [sp, #0x30]
0x051BE360: f45a01b0  adrp x20, #0x7d1b000
0x051BE364: 96240190  adrp x22, #0x764e000
0x051BE368: 884e7839  ldrb w8, [x20, #0xe13]
0x051BE36C: d6d242f9  ldr x22, [x22, #0x5a0]
0x051BE370: f30301aa  mov x19, x1
0x051BE374: f50300aa  mov x21, x0
0x051BE378: 08030037  tbnz w8, #0, #0x51be3d8
0x051BE37C: 602501f0  adrp x0, #0x766d000
0x051BE380: 006c46f9  ldr x0, [x0, #0xcd8]
0x051BE384: a5097f97  bl #0x3180a18
0x051BE388: 80240190  adrp x0, #0x764e000
0x051BE38C: 00d042f9  ldr x0, [x0, #0x5a0]
0x051BE390: a2097f97  bl #0x3180a18
0x051BE394: 002601f0  adrp x0, #0x7681000
0x051BE398: 004446f9  ldr x0, [x0, #0xc88]
0x051BE39C: 9f097f97  bl #0x3180a18
0x051BE3A0: e02501d0  adrp x0, #0x767c000
0x051BE3A4: 006041f9  ldr x0, [x0, #0x2c0]
0x051BE3A8: 9c097f97  bl #0x3180a18
0x051BE3AC: e02501d0  adrp x0, #0x767c000
0x051BE3B0: 006441f9  ldr x0, [x0, #0x2c8]
0x051BE3B4: 99097f97  bl #0x3180a18
0x051BE3B8: 002601f0  adrp x0, #0x7681000
0x051BE3BC: 009446f9  ldr x0, [x0, #0xd28]
0x051BE3C0: 96097f97  bl #0x3180a18
0x051BE3C4: 802401d0  adrp x0, #0x7650000
0x051BE3C8: 00dc41f9  ldr x0, [x0, #0x3b8]
0x051BE3CC: 93097f97  bl #0x3180a18
0x051BE3D0: 28008052  movz w8, #0x1
0x051BE3D4: 884e3839  strb w8, [x20, #0xe13]
0x051BE3D8: c00240f9  ldr x0, [x22]
0x051BE3DC: 81008052  movz w1, #0x4
0x051BE3E0: c7097f97  bl #0x3180afc
0x051BE3E4: 950c00b4  cbz x21, #0x51be574
0x051BE3E8: f40300aa  mov x20, x0
0x051BE3EC: e00315aa  mov x0, x21
0x051BE3F0: e1031faa  mov x1, xzr
0x051BE3F4: 74721494  bl #0x56dadc4
0x051BE3F8: e00b00b4  cbz x0, #0x51be574
0x051BE3FC: 080040f9  ldr x8, [x0]
0x051BE400: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x051BE404: 20013fd6  blr x9
0x051BE408: 740b00b4  cbz x20, #0x51be574
0x051BE40C: f60300aa  mov x22, x0
0x051BE410: c00000b4  cbz x0, #0x51be428
0x051BE414: 880240f9  ldr x8, [x20]
0x051BE418: e00316aa  mov x0, x22
0x051BE41C: 012140f9  ldr x1, [x8, #0x40]
0x051BE420: dc097f97  bl #0x3180b90
0x051BE424: a00a00b4  cbz x0, #0x51be578
0x051BE428: 881a40b9  ldr w8, [x20, #0x18]
0x051BE42C: 280a0034  cbz w8, #0x51be570
0x051BE430: f72501d0  adrp x23, #0x767c000
0x051BE434: f76241f9  ldr x23, [x23, #0x2c0]
0x051BE438: e00314aa  mov x0, x20
0x051BE43C: 160c02f8  str x22, [x0, #0x20]!
0x051BE440: e10316aa  mov x1, x22
0x051BE444: 60097f97  bl #0x31809c4
0x051BE448: e00240f9  ldr x0, [x23]
0x051BE44C: e00000b4  cbz x0, #0x51be468
0x051BE450: 880240f9  ldr x8, [x20]
0x051BE454: 012140f9  ldr x1, [x8, #0x40]
0x051BE458: ce097f97  bl #0x3180b90
0x051BE45C: e00800b4  cbz x0, #0x51be578
0x051BE460: e10240f9  ldr x1, [x23]
0x051BE464: 02000014  b #0x51be46c
0x051BE468: e1031faa  mov x1, xzr
0x051BE46C: 881a40b9  ldr w8, [x20, #0x18]
0x051BE470: 1f050071  cmp w8, #1
0x051BE474: e9070054  b.ls #0x51be570
0x051BE478: e00314aa  mov x0, x20
0x051BE47C: 018c02f8  str x1, [x0, #0x28]!
0x051BE480: 51097f97  bl #0x31809c4
0x051BE484: b57640f9  ldr x21, [x21, #0xe8]
0x051BE488: d50000b4  cbz x21, #0x51be4a0
0x051BE48C: 880240f9  ldr x8, [x20]
0x051BE490: e00315aa  mov x0, x21
0x051BE494: 012140f9  ldr x1, [x8, #0x40]
0x051BE498: be097f97  bl #0x3180b90
0x051BE49C: e00600b4  cbz x0, #0x51be578
0x051BE4A0: 881a40b9  ldr w8, [x20, #0x18]
0x051BE4A4: 1f090071  cmp w8, #2
0x051BE4A8: 49060054  b.ls #0x51be570
0x051BE4AC: e00314aa  mov x0, x20
0x051BE4B0: 150c03f8  str x21, [x0, #0x30]!
0x051BE4B4: e10315aa  mov x1, x21
0x051BE4B8: 43097f97  bl #0x31809c4
0x051BE4BC: d30000b4  cbz x19, #0x51be4d4
0x051BE4C0: 880240f9  ldr x8, [x20]
0x051BE4C4: e00313aa  mov x0, x19
0x051BE4C8: 012140f9  ldr x1, [x8, #0x40]
0x051BE4CC: b1097f97  bl #0x3180b90
0x051BE4D0: 400500b4  cbz x0, #0x51be578
0x051BE4D4: 881a40b9  ldr w8, [x20, #0x18]
0x051BE4D8: 1f0d0071  cmp w8, #3
0x051BE4DC: a9040054  b.ls #0x51be570
0x051BE4E0: f82501d0  adrp x24, #0x767c000
0x051BE4E4: 792501f0  adrp x25, #0x766d000
0x051BE4E8: 952401d0  adrp x21, #0x7650000
0x051BE4EC: 162601f0  adrp x22, #0x7681000
0x051BE4F0: 172601f0  adrp x23, #0x7681000
0x051BE4F4: 186741f9  ldr x24, [x24, #0x2c8]
0x051BE4F8: 396f46f9  ldr x25, [x25, #0xcd8]
0x051BE4FC: b5de41f9  ldr x21, [x21, #0x3b8]
0x051BE500: d64646f9  ldr x22, [x22, #0xc88]
0x051BE504: f79646f9  ldr x23, [x23, #0xd28]
0x051BE508: e00314aa  mov x0, x20
0x051BE50C: 138c03f8  str x19, [x0, #0x38]!
0x051BE510: e10313aa  mov x1, x19
0x051BE514: 2c097f97  bl #0x31809c4
0x051BE518: 000340f9  ldr x0, [x24]
0x051BE51C: e10314aa  mov x1, x20
0x051BE520: e2031faa  mov x2, xzr
0x051BE524: 90e60c94  bl #0x54f7f64
0x051BE528: 280340f9  ldr x8, [x25]
0x051BE52C: f30300aa  mov x19, x0
0x051BE530: 09e140b9  ldr w9, [x8, #0xe0]
0x051BE534: 69000035  cbnz w9, #0x51be540
0x051BE538: e00308aa  mov x0, x8
0x051BE53C: 94097f97  bl #0x3180b8c
0x051BE540: a10240f9  ldr x1, [x21]
0x051BE544: c30240f9  ldr x3, [x22]
0x051BE548: e40240f9  ldr x4, [x23]
0x051BE54C: e00313aa  mov x0, x19
0x051BE550: f44f43a9  ldp x20, x19, [sp, #0x30]
0x051BE554: f65742a9  ldp x22, x21, [sp, #0x20]
0x051BE558: f85f41a9  ldp x24, x23, [sp, #0x10]
0x051BE55C: e2031faa  mov x2, xzr
0x051BE560: e5031faa  mov x5, xzr
0x051BE564: e6031faa  mov x6, xzr
0x051BE568: fe67c4a8  ldp x30, x25, [sp], #0x40
0x051BE56C: b2b70a14  b #0x546c434
0x051BE570: d1097f97  bl #0x3180cb4
0x051BE574: ce097f97  bl #0x3180cac
0x051BE578: d6097f97  bl #0x3180cd0
0x051BE57C: e1031faa  mov x1, xzr
0x051BE580: 7f097f97  bl #0x3180b7c

