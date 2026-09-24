; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9148 Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18868 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$get_VisualComponent
; native signature: MergeEngine_ECS_Components_Items_IVisualComponent_o* Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___get_VisualComponent (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18868* method);
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x04C18868: 001c40f9  ldr x0, [x0, #0x38]
0x04C1886C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18870 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$get_BoardItemView
; native signature: Merger_Game_Views_BoardItem_BoardItemView2_o* Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___get_BoardItemView (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18870* method);
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x04C18870: 001840f9  ldr x0, [x0, #0x30]
0x04C18874: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18878 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$get_CanDoUpdate
; native signature: bool Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___get_CanDoUpdate (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18878* method);
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x04C18878: 00004139  ldrb w0, [x0, #0x40]
0x04C1887C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18880 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$get_Initialized
; native signature: bool Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___get_Initialized (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18880* method);
; bytes=8 sha256=6a4f1a962f868613e6936806601aa97f462be4272d6039e73d901c7f9868c768 status=arm64_complete_bound indexed_start=True
0x04C18880: 00004139  ldrb w0, [x0, #0x40]
0x04C18884: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18888 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$set_Initialized
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___set_Initialized (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, bool value, const MethodInfo_4C18888* method);
; bytes=12 sha256=501d7d5905288072269f6b4c4b92bbb856126869e31af66d1d507a7ad60889a3 status=arm64_complete_bound indexed_start=True
0x04C18888: 28000012  and w8, w1, #1
0x04C1888C: 08000139  strb w8, [x0, #0x40]
0x04C18890: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18894 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$Initialise
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___Initialise (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, MergeEngine_ECS_Components_Items_IVisualComponent_o* visualComponent, Merger_Game_Views_BoardItem_BoardItemView2_o* boardItemView, const MethodInfo_4C18894* method);
; bytes=80 sha256=673c8318865f13fd37531425192573a87786c2f360d6c0aef340a45800377e1d status=arm64_complete_bound indexed_start=True
0x04C18894: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C18898: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C1889C: f30301aa  mov x19, x1
0x04C188A0: f40300aa  mov x20, x0
0x04C188A4: 020c03f8  str x2, [x0, #0x30]!
0x04C188A8: e10302aa  mov x1, x2
0x04C188AC: 46a09597  bl #0x31809c4
0x04C188B0: e00314aa  mov x0, x20
0x04C188B4: 138c03f8  str x19, [x0, #0x38]!
0x04C188B8: e10313aa  mov x1, x19
0x04C188BC: 42a09597  bl #0x31809c4
0x04C188C0: 880240f9  ldr x8, [x20]
0x04C188C4: 29008052  movz w9, #0x1
0x04C188C8: 89020139  strb w9, [x20, #0x40]
0x04C188CC: e00314aa  mov x0, x20
0x04C188D0: 021541f9  ldr x2, [x8, #0x228]
0x04C188D4: 011941f9  ldr x1, [x8, #0x230]
0x04C188D8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C188DC: fe0742f8  ldr x30, [sp], #0x20
0x04C188E0: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C188E4 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$Dispose
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___Dispose (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C188E4* method);
; bytes=76 sha256=30488b87f20269f5f4b857c39c6585aed6a8cab1222c9b036903919d7a7903d2 status=arm64_complete_bound indexed_start=True
0x04C188E4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x04C188E8: 08004139  ldrb w8, [x0, #0x40]
0x04C188EC: f30300aa  mov x19, x0
0x04C188F0: c8000034  cbz w8, #0x4c18908
0x04C188F4: 680240f9  ldr x8, [x19]
0x04C188F8: e00313aa  mov x0, x19
0x04C188FC: 091d41f9  ldr x9, [x8, #0x238]
0x04C18900: 012141f9  ldr x1, [x8, #0x240]
0x04C18904: 20013fd6  blr x9
0x04C18908: e00313aa  mov x0, x19
0x04C1890C: 7f020139  strb wzr, [x19, #0x40]
0x04C18910: 1f0c03f8  str xzr, [x0, #0x30]!
0x04C18914: e1031faa  mov x1, xzr
0x04C18918: 2ba09597  bl #0x31809c4
0x04C1891C: 7f8e03f8  str xzr, [x19, #0x38]!
0x04C18920: e00313aa  mov x0, x19
0x04C18924: e1031faa  mov x1, xzr
0x04C18928: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x04C1892C: 26a09517  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18930 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$OnInitialize
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___OnInitialize (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18930* method);
; bytes=16 sha256=98fdc718e81859b7444ad71cfdebe2096862b07d23ae23a42be0dfa69f90f819 status=arm64_complete_bound indexed_start=True
0x04C18930: 080040f9  ldr x8, [x0]
0x04C18934: 023d41f9  ldr x2, [x8, #0x278]
0x04C18938: 014141f9  ldr x1, [x8, #0x280]
0x04C1893C: 40001fd6  br x2

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18940 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$OnDispose
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___OnDispose (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18940* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C18940: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18944 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$BehaviourAdded
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___BehaviourAdded (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18944* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C18944: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18948 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$OnUpdate
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___OnUpdate (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18948* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C18948: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1894C | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$Update
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___Update (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C1894C* method);
; bytes=28 sha256=8607d57aa77386eb8f41b0ce275ce761d83e4c4b1964436243d7d4e5095073b2 status=arm64_complete_bound indexed_start=True
0x04C1894C: 08004139  ldrb w8, [x0, #0x40]
0x04C18950: a8000034  cbz w8, #0x4c18964
0x04C18954: 080040f9  ldr x8, [x0]
0x04C18958: 022d41f9  ldr x2, [x8, #0x258]
0x04C1895C: 013141f9  ldr x1, [x8, #0x260]
0x04C18960: 40001fd6  br x2
0x04C18964: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18968 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$GetContainer
; native signature: UnityEngine_RectTransform_o* Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___GetContainer (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, System_String_o* containerId, const MethodInfo_4C18968* method);
; bytes=28 sha256=569ddb4b992a6abaeadc8800bcc74a2f4322fe376cb7bc5d8eda6e66dcd91692 status=arm64_complete_bound indexed_start=True
0x04C18968: fe0f1ff8  str x30, [sp, #-0x10]!
0x04C1896C: 001840f9  ldr x0, [x0, #0x30]
0x04C18970: 800000b4  cbz x0, #0x4c18980
0x04C18974: e2031faa  mov x2, xzr
0x04C18978: fe0741f8  ldr x30, [sp], #0x10
0x04C1897C: 105e6c14  b #0x67301bc
0x04C18980: cba09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3AE449C | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$GetBehaviour<object>
; native signature: Il2CppObject* Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___GetBehaviour_object_ (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_3AE449C* method);
; bytes=96 sha256=6a65eb840b966c85b4be88ce57460c10133d3f1f785f264b9b323eaf64698cba status=arm64_complete_bound indexed_start=True
0x03AE449C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03AE44A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03AE44A4: 281c40f9  ldr x8, [x1, #0x38]
0x03AE44A8: f40301aa  mov x20, x1
0x03AE44AC: f30300aa  mov x19, x0
0x03AE44B0: 680000b5  cbnz x8, #0x3ae44bc
0x03AE44B4: e00314aa  mov x0, x20
0x03AE44B8: f0c8d997  bl #0x3156878
0x03AE44BC: 731a40f9  ldr x19, [x19, #0x30]
0x03AE44C0: d30100b4  cbz x19, #0x3ae44f8
0x03AE44C4: 881e40f9  ldr x8, [x20, #0x38]
0x03AE44C8: 690240f9  ldr x9, [x19]
0x03AE44CC: 010140f9  ldr x1, [x8]
0x03AE44D0: 28a04079  ldrh w8, [x1, #0x50]
0x03AE44D4: 2811088b  add x8, x9, x8, lsl #4
0x03AE44D8: 00a140f9  ldr x0, [x8, #0x140]
0x03AE44DC: ab71da97  bl #0x3180b88
0x03AE44E0: e10300aa  mov x1, x0
0x03AE44E4: 020440f9  ldr x2, [x0, #8]
0x03AE44E8: e00313aa  mov x0, x19
0x03AE44EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03AE44F0: fe0742f8  ldr x30, [sp], #0x20
0x03AE44F4: 40001fd6  br x2
0x03AE44F8: ed71da97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3AE44FC | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$HasBehaviour<object>
; native signature: bool Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___HasBehaviour_object_ (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_3AE44FC* method);
; bytes=64 sha256=439f8072332dc54746eca55ad03f65d9c871129ec1c9e01cac2d0986723aeadc status=arm64_complete_bound indexed_start=True
0x03AE44FC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03AE4500: f44f01a9  stp x20, x19, [sp, #0x10]
0x03AE4504: 281c40f9  ldr x8, [x1, #0x38]
0x03AE4508: f30301aa  mov x19, x1
0x03AE450C: f40300aa  mov x20, x0
0x03AE4510: 680000b5  cbnz x8, #0x3ae451c
0x03AE4514: e00313aa  mov x0, x19
0x03AE4518: d8c8d997  bl #0x3156878
0x03AE451C: 801a40f9  ldr x0, [x20, #0x30]
0x03AE4520: c00000b4  cbz x0, #0x3ae4538
0x03AE4524: 681e40f9  ldr x8, [x19, #0x38]
0x03AE4528: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03AE452C: 010140f9  ldr x1, [x8]
0x03AE4530: fe0742f8  ldr x30, [sp], #0x20
0x03AE4534: b1d60314  b #0x3bd9ff8
0x03AE4538: dd71da97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18984 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$TryConsumeTap
; native signature: bool Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___TryConsumeTap (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18984* method);
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x04C18984: e0031f2a  mov w0, wzr
0x04C18988: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C1898C | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$ShowVisuals
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___ShowVisuals (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C1898C* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C1898C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18990 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$HideVisuals
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___HideVisuals (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18990* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C18990: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C18994 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$OnDestroy
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___OnDestroy (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C18994* method);
; bytes=64 sha256=76b8d672b98755248f24ac01cd085f52ad82e226742513c74216c71c2eda5a4e status=arm64_complete_bound indexed_start=True
0x04C18994: fe0f1ef8  str x30, [sp, #-0x20]!
0x04C18998: f44f01a9  stp x20, x19, [sp, #0x10]
0x04C1899C: a00100b4  cbz x0, #0x4c189d0
0x04C189A0: 080040f9  ldr x8, [x0]
0x04C189A4: f40301aa  mov x20, x1
0x04C189A8: f30300aa  mov x19, x0
0x04C189AC: 098559a9  ldp x9, x1, [x8, #0x198]
0x04C189B0: 20013fd6  blr x9
0x04C189B4: 881240f9  ldr x8, [x20, #0x20]
0x04C189B8: e00313aa  mov x0, x19
0x04C189BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04C189C0: 086140f9  ldr x8, [x8, #0xc0]
0x04C189C4: 012140f9  ldr x1, [x8, #0x40]
0x04C189C8: fe0742f8  ldr x30, [sp], #0x20
0x04C189CC: db64f417  b #0x4931d38
0x04C189D0: b7a09597  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C189D4 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$Initialize
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___Initialize (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C189D4* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C189D4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C189D8 | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$Deactivated
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___Deactivated (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C189D8* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04C189D8: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C189DC | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$.ctor
; native signature: void Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object____ctor (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C189DC* method);
; bytes=16 sha256=aa2e6564352d141135089dc01bd9698fe13ebd65fe02ed699262a8e78f8ddbcb status=arm64_complete_bound indexed_start=True
0x04C189DC: 281040f9  ldr x8, [x1, #0x20]
0x04C189E0: 086140f9  ldr x8, [x8, #0xc0]
0x04C189E4: 012540f9  ldr x1, [x8, #0x48]
0x04C189E8: e564f417  b #0x4931d7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x4C189EC | Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<object>$$Merger.Game.Views.BoardItem.ViewBehaviours.IBoardItemViewBehaviour.get_gameObject
; native signature: UnityEngine_GameObject_o* Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_object___Merger_Game_Views_BoardItem_ViewBehaviours_IBoardItemViewBehaviour_get_gameObject (Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel__o* __this, const MethodInfo_4C189EC* method);
; bytes=20 sha256=3ddf7f47c289d155e25a797e8d7c1614b4b332b22fafc4379ab163ef64ce3c56 status=arm64_complete_bound indexed_start=True
0x04C189EC: 600000b4  cbz x0, #0x4c189f8
0x04C189F0: e1031faa  mov x1, xzr
0x04C189F4: 370d8b14  b #0x6edbed0
0x04C189F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x04C189FC: aca09597  bl #0x3180cac

