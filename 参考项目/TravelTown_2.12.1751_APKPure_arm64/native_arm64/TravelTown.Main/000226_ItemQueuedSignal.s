; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 226 MergeEngine.Signal.Items.ItemQueuedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF38BC | public IItem get_Item() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05FF38BC: 000840f9  ldr x0, [x0, #0x10]
0x05FF38C0: c0035fd6  ret

; RVA 0x5FF38C4 | public Vector2 get_Position() { }
; bytes=8 sha256=2fd2014205e56457b13fe2df93ece194fe202f0bfcf2128bd50e7356d73f9b9e status=arm64_complete_bound indexed_start=True
0x05FF38C4: 0004432d  ldp s0, s1, [x0, #0x18]
0x05FF38C8: c0035fd6  ret

; RVA 0x5FF38CC | public bool get_Animate() { }
; bytes=8 sha256=143b3c7bd83b0aed91598bc840f9d6c3eed331434f835849cdbe01fd7801fad5 status=arm64_complete_bound indexed_start=True
0x05FF38CC: 00804039  ldrb w0, [x0, #0x20]
0x05FF38D0: c0035fd6  ret

; RVA 0x5FF38D4 | public ItemQueuedAnalytics get_AnalyticsObject() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05FF38D4: 001440f9  ldr x0, [x0, #0x28]
0x05FF38D8: c0035fd6  ret

; RVA 0x5FF38DC | public IRewardViewData get_RewardItemMultiple() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x05FF38DC: 001840f9  ldr x0, [x0, #0x30]
0x05FF38E0: c0035fd6  ret

; RVA 0x5FF38E4 | public Func<GameObject> get_GetPrefabInstance() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x05FF38E4: 001c40f9  ldr x0, [x0, #0x38]
0x05FF38E8: c0035fd6  ret

; RVA 0x5FF38EC | public Func<FlyingIconView, InstantiateAndSlideIconsAnimationSettings, Tween> get_OverrideTween() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x05FF38EC: 002040f9  ldr x0, [x0, #0x40]
0x05FF38F0: c0035fd6  ret

; RVA 0x5FF38F4 | public bool get_ActivateQueueAfterAnimation() { }
; bytes=8 sha256=078ba4becdbd72e872ae0ff730955d197071ab6ad37418e7c2e1548bed4f2dbf status=arm64_complete_bound indexed_start=True
0x05FF38F4: 00204139  ldrb w0, [x0, #0x48]
0x05FF38F8: c0035fd6  ret

; RVA 0x5FF38FC | public bool get_SlideBoardItemToQueue() { }
; bytes=8 sha256=2d96bea2f03fdb6bbcafe6dbf255ea02bd91faf78ea11d880b12940ff69198a5 status=arm64_complete_bound indexed_start=True
0x05FF38FC: 00244139  ldrb w0, [x0, #0x49]
0x05FF3900: c0035fd6  ret

; RVA 0x5FF3904 | public InstantiateAndSlideIconsAnimationSettings get_AnimationSettings() { }
; bytes=8 sha256=989bb1a041c93e09fa2954014eaba1a46b19128664c6bbb210694e0989f09532 status=arm64_complete_bound indexed_start=True
0x05FF3904: 002840f9  ldr x0, [x0, #0x50]
0x05FF3908: c0035fd6  ret

; RVA 0x5FF390C | public void .ctor(IItem item, Vector2 position, bool animate, ItemQueuedAnalytics analyticsObject, IRewardViewData rewardItemMultiple, bool slideBoardItemToQueue, Func<GameObject> getPrefabInstance, Func<FlyingIconView, InstantiateAndSlideIconsAnimationSettings, Tween> overrideTween, bool activateQueueAfterAnimation = False, InstantiateAndSlideIconsAnimationSettings animationSettings) { }
; bytes=228 sha256=070ab958298f17f5ccdf429b3fd4f83eabbd06802be940e37137c3a7309fb272 status=arm64_complete_bound indexed_start=True
0x05FF390C: e923b96d  stp d9, d8, [sp, #-0x70]!
0x05FF3910: fe0b00f9  str x30, [sp, #0x10]
0x05FF3914: fc6f02a9  stp x28, x27, [sp, #0x20]
0x05FF3918: fa6703a9  stp x26, x25, [sp, #0x30]
0x05FF391C: f85f04a9  stp x24, x23, [sp, #0x40]
0x05FF3920: f65705a9  stp x22, x21, [sp, #0x50]
0x05FF3924: f44f06a9  stp x20, x19, [sp, #0x60]
0x05FF3928: e8c34139  ldrb w8, [sp, #0x70]
0x05FF392C: f93f40f9  ldr x25, [sp, #0x78]
0x05FF3930: f70301aa  mov x23, x1
0x05FF3934: e1031faa  mov x1, xzr
0x05FF3938: f30307aa  mov x19, x7
0x05FF393C: f40306aa  mov x20, x6
0x05FF3940: f50304aa  mov x21, x4
0x05FF3944: f60303aa  mov x22, x3
0x05FF3948: 281ca14e  mov v8.16b, v1.16b
0x05FF394C: 091ca04e  mov v9.16b, v0.16b
0x05FF3950: f80300aa  mov x24, x0
0x05FF3954: 5a000012  and w26, w2, #1
0x05FF3958: bb000012  and w27, w5, #1
0x05FF395C: 1c010012  and w28, w8, #1
0x05FF3960: 279bdb97  bl #0x56da5fc
0x05FF3964: e00318aa  mov x0, x24
0x05FF3968: 170c01f8  str x23, [x0, #0x10]!
0x05FF396C: e10317aa  mov x1, x23
0x05FF3970: 15344697  bl #0x31809c4
0x05FF3974: e00318aa  mov x0, x24
0x05FF3978: 0923032d  stp s9, s8, [x24, #0x18]
0x05FF397C: 1a830039  strb w26, [x24, #0x20]
0x05FF3980: 168c02f8  str x22, [x0, #0x28]!
0x05FF3984: e10316aa  mov x1, x22
0x05FF3988: 0f344697  bl #0x31809c4
0x05FF398C: e00318aa  mov x0, x24
0x05FF3990: 150c03f8  str x21, [x0, #0x30]!
0x05FF3994: e10315aa  mov x1, x21
0x05FF3998: 0b344697  bl #0x31809c4
0x05FF399C: e00318aa  mov x0, x24
0x05FF39A0: 1b270139  strb w27, [x24, #0x49]
0x05FF39A4: 130c04f8  str x19, [x0, #0x40]!
0x05FF39A8: e10313aa  mov x1, x19
0x05FF39AC: 06344697  bl #0x31809c4
0x05FF39B0: e00318aa  mov x0, x24
0x05FF39B4: 148c03f8  str x20, [x0, #0x38]!
0x05FF39B8: e10314aa  mov x1, x20
0x05FF39BC: 02344697  bl #0x31809c4
0x05FF39C0: 190f05f8  str x25, [x24, #0x50]!
0x05FF39C4: 1c831f38  sturb w28, [x24, #-8]
0x05FF39C8: e00318aa  mov x0, x24
0x05FF39CC: e10319aa  mov x1, x25
0x05FF39D0: f44f46a9  ldp x20, x19, [sp, #0x60]
0x05FF39D4: f65745a9  ldp x22, x21, [sp, #0x50]
0x05FF39D8: f85f44a9  ldp x24, x23, [sp, #0x40]
0x05FF39DC: fa6743a9  ldp x26, x25, [sp, #0x30]
0x05FF39E0: fc6f42a9  ldp x28, x27, [sp, #0x20]
0x05FF39E4: fe0b40f9  ldr x30, [sp, #0x10]
0x05FF39E8: e923c76c  ldp d9, d8, [sp], #0x70
0x05FF39EC: f6334617  b #0x31809c4

