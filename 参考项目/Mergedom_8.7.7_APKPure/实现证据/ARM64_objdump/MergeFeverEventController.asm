
# MergeFeverEventController :: System.Void add_onMergeFeverCountChanged(System.Action`1<System.Boolean> value)
# VA 0x2c32510 .. 0x2c325c0 (next mapped method entry)
 2c32510: f81c0ffe     	str	x30, [sp, #-0x40]!
 2c32514: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c32518: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c3251c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c32520: 9001d715     	adrp	x21, 0x6712000
 2c32524: aa0103f3     	mov	x19, x1
 2c32528: aa0003f4     	mov	x20, x0
 2c3252c: 397392a8     	ldrb	w8, [x21, #0xce4]
 2c32530: 370000c8     	tbnz	w8, #0x0, 0x2c32548 <__start_il2cpp+0x169f34>
 2c32534: d001b600     	adrp	x0, 0x62f4000
 2c32538: f941f400     	ldr	x0, [x0, #0x3e8]
 2c3253c: 97f69229     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32540: 52800028     	mov	w8, #0x1                // =1
 2c32544: 393392a8     	strb	w8, [x21, #0xce4]
 2c32548: d001b618     	adrp	x24, 0x62f4000
 2c3254c: f941f718     	ldr	x24, [x24, #0x3e8]
 2c32550: f8490e95     	ldr	x21, [x20, #0x90]!
 2c32554: aa1503e0     	mov	x0, x21
 2c32558: aa1303e1     	mov	x1, x19
 2c3255c: aa1f03e2     	mov	x2, xzr
 2c32560: 9494828d     	bl	0x5152f94 <__start_il2cpp+0x268a980>
 2c32564: b4000100     	cbz	x0, 0x2c32584 <__start_il2cpp+0x169f70>
 2c32568: f9400317     	ldr	x23, [x24]
 2c3256c: aa0003f6     	mov	x22, x0
 2c32570: aa1703e1     	mov	x1, x23
 2c32574: 97f6927b     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c32578: aa0003e1     	mov	x1, x0
 2c3257c: b5000060     	cbnz	x0, 0x2c32588 <__start_il2cpp+0x169f74>
 2c32580: 1400000d     	b	0x2c325b4 <__start_il2cpp+0x169fa0>
 2c32584: aa1f03e1     	mov	x1, xzr
 2c32588: aa1403e0     	mov	x0, x20
 2c3258c: aa1503e2     	mov	x2, x21
 2c32590: 97f76d87     	bl	0x2a0dbac <JNI_OnUnload+0xdd5c>
 2c32594: eb15001f     	cmp	x0, x21
 2c32598: aa0003f5     	mov	x21, x0
 2c3259c: 54fffdc1     	b.ne	0x2c32554 <__start_il2cpp+0x169f40>
 2c325a0: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c325a4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c325a8: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c325ac: f84407fe     	ldr	x30, [sp], #0x40
 2c325b0: d65f03c0     	ret
 2c325b4: aa1603e0     	mov	x0, x22
 2c325b8: aa1703e1     	mov	x1, x23
 2c325bc: 97f69393     	bl	0x29d7408 <mono_class_get_checked+0xcf0>

# MergeFeverEventController :: System.Void remove_onMergeFeverCountChanged(System.Action`1<System.Boolean> value)
# VA 0x2c325c0 .. 0x2c32670 (next mapped method entry)
 2c325c0: f81c0ffe     	str	x30, [sp, #-0x40]!
 2c325c4: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c325c8: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c325cc: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c325d0: 9001d715     	adrp	x21, 0x6712000
 2c325d4: aa0103f3     	mov	x19, x1
 2c325d8: aa0003f4     	mov	x20, x0
 2c325dc: 397396a8     	ldrb	w8, [x21, #0xce5]
 2c325e0: 370000c8     	tbnz	w8, #0x0, 0x2c325f8 <__start_il2cpp+0x169fe4>
 2c325e4: d001b600     	adrp	x0, 0x62f4000
 2c325e8: f941f400     	ldr	x0, [x0, #0x3e8]
 2c325ec: 97f691fd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c325f0: 52800028     	mov	w8, #0x1                // =1
 2c325f4: 393396a8     	strb	w8, [x21, #0xce5]
 2c325f8: d001b618     	adrp	x24, 0x62f4000
 2c325fc: f941f718     	ldr	x24, [x24, #0x3e8]
 2c32600: f8490e95     	ldr	x21, [x20, #0x90]!
 2c32604: aa1503e0     	mov	x0, x21
 2c32608: aa1303e1     	mov	x1, x19
 2c3260c: aa1f03e2     	mov	x2, xzr
 2c32610: 949482dc     	bl	0x5153180 <__start_il2cpp+0x268ab6c>
 2c32614: b4000100     	cbz	x0, 0x2c32634 <__start_il2cpp+0x16a020>
 2c32618: f9400317     	ldr	x23, [x24]
 2c3261c: aa0003f6     	mov	x22, x0
 2c32620: aa1703e1     	mov	x1, x23
 2c32624: 97f6924f     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c32628: aa0003e1     	mov	x1, x0
 2c3262c: b5000060     	cbnz	x0, 0x2c32638 <__start_il2cpp+0x16a024>
 2c32630: 1400000d     	b	0x2c32664 <__start_il2cpp+0x16a050>
 2c32634: aa1f03e1     	mov	x1, xzr
 2c32638: aa1403e0     	mov	x0, x20
 2c3263c: aa1503e2     	mov	x2, x21
 2c32640: 97f76d5b     	bl	0x2a0dbac <JNI_OnUnload+0xdd5c>
 2c32644: eb15001f     	cmp	x0, x21
 2c32648: aa0003f5     	mov	x21, x0
 2c3264c: 54fffdc1     	b.ne	0x2c32604 <__start_il2cpp+0x169ff0>
 2c32650: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c32654: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c32658: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c3265c: f84407fe     	ldr	x30, [sp], #0x40
 2c32660: d65f03c0     	ret
 2c32664: aa1603e0     	mov	x0, x22
 2c32668: aa1703e1     	mov	x1, x23
 2c3266c: 97f69367     	bl	0x29d7408 <mono_class_get_checked+0xcf0>

# MergeFeverEventController :: MergeFeverEventData get_currentMergeFeverEvent()
# VA 0x2c32670 .. 0x2c32678 (next mapped method entry)
 2c32670: f9404c00     	ldr	x0, [x0, #0x98]
 2c32674: d65f03c0     	ret

# MergeFeverEventController :: System.Void set_currentMergeFeverEvent(MergeFeverEventData value)
# VA 0x2c32678 .. 0x2c32680 (next mapped method entry)
 2c32678: f8098c01     	str	x1, [x0, #0x98]!
 2c3267c: 17f691c4     	b	0x29d6d8c <mono_class_get_checked+0x674>

# MergeFeverEventController :: MergeFever.MergeFeverLevel get_currentLevel()
# VA 0x2c32680 .. 0x2c326c0 (next mapped method entry)
 2c32680: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c32684: f9400c08     	ldr	x8, [x0, #0x18]
 2c32688: b40001a8     	cbz	x8, 0x2c326bc <__start_il2cpp+0x16a0a8>
 2c3268c: f9402d08     	ldr	x8, [x8, #0x58]
 2c32690: b4000168     	cbz	x8, 0x2c326bc <__start_il2cpp+0x16a0a8>
 2c32694: f9403013     	ldr	x19, [x0, #0x60]
 2c32698: aa0803e0     	mov	x0, x8
 2c3269c: aa1f03e1     	mov	x1, xzr
 2c326a0: 97fc7695     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c326a4: b40000d3     	cbz	x19, 0x2c326bc <__start_il2cpp+0x16a0a8>
 2c326a8: 2a0003e1     	mov	w1, w0
 2c326ac: aa1303e0     	mov	x0, x19
 2c326b0: aa1f03e2     	mov	x2, xzr
 2c326b4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c326b8: 1404b4ac     	b	0x2d5f968 <__start_il2cpp+0x297354>
 2c326bc: 97f69273     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: MergeFeverEventDataPiece get_dataPiece()
# VA 0x2c326c0 .. 0x2c326d8 (next mapped method entry)
 2c326c0: f9400c08     	ldr	x8, [x0, #0x18]
 2c326c4: b4000068     	cbz	x8, 0x2c326d0 <__start_il2cpp+0x16a0bc>
 2c326c8: f9402d00     	ldr	x0, [x8, #0x58]
 2c326cc: d65f03c0     	ret
 2c326d0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c326d4: 97f6926d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: MergeFever.MergeFeverLevel get_lastLevel()
# VA 0x2c326d8 .. 0x2c326f0 (next mapped method entry)
 2c326d8: f9403000     	ldr	x0, [x0, #0x60]
 2c326dc: b4000060     	cbz	x0, 0x2c326e8 <__start_il2cpp+0x16a0d4>
 2c326e0: aa1f03e1     	mov	x1, xzr
 2c326e4: 1404b53f     	b	0x2d5fbe0 <__start_il2cpp+0x2975cc>
 2c326e8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c326ec: 97f69267     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Boolean get_isAvailble()
# VA 0x2c326f0 .. 0x2c32754 (next mapped method entry)
 2c326f0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c326f4: aa0003f3     	mov	x19, x0
 2c326f8: aa1f03e0     	mov	x0, xzr
 2c326fc: 97fe0d70     	bl	0x2bb5cbc <__start_il2cpp+0xed6a8>
 2c32700: f9403268     	ldr	x8, [x19, #0x60]
 2c32704: b4000268     	cbz	x8, 0x2c32750 <__start_il2cpp+0x16a13c>
 2c32708: b9403108     	ldr	w8, [x8, #0x30]
 2c3270c: 6b08001f     	cmp	w0, w8
 2c32710: 540001aa     	b.ge	0x2c32744 <__start_il2cpp+0x16a130>
 2c32714: f9400e68     	ldr	x8, [x19, #0x18]
 2c32718: b40001c8     	cbz	x8, 0x2c32750 <__start_il2cpp+0x16a13c>
 2c3271c: f9400d00     	ldr	x0, [x8, #0x18]
 2c32720: b4000180     	cbz	x0, 0x2c32750 <__start_il2cpp+0x16a13c>
 2c32724: aa1f03e1     	mov	x1, xzr
 2c32728: 97fc72e4     	bl	0x2b4f2b8 <__start_il2cpp+0x86ca4>
 2c3272c: f9403268     	ldr	x8, [x19, #0x60]
 2c32730: b4000108     	cbz	x8, 0x2c32750 <__start_il2cpp+0x16a13c>
 2c32734: b9403508     	ldr	w8, [x8, #0x34]
 2c32738: 6b08001f     	cmp	w0, w8
 2c3273c: 1a9fb7e0     	cset	w0, ge
 2c32740: 14000002     	b	0x2c32748 <__start_il2cpp+0x16a134>
 2c32744: 52800020     	mov	w0, #0x1                // =1
 2c32748: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c3274c: d65f03c0     	ret
 2c32750: 97f6924e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Boolean get_isCompleted()
# VA 0x2c32754 .. 0x2c327a0 (next mapped method entry)
 2c32754: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c32758: f9400c08     	ldr	x8, [x0, #0x18]
 2c3275c: b4000208     	cbz	x8, 0x2c3279c <__start_il2cpp+0x16a188>
 2c32760: aa0003f3     	mov	x19, x0
 2c32764: f9402d00     	ldr	x0, [x8, #0x58]
 2c32768: b40001a0     	cbz	x0, 0x2c3279c <__start_il2cpp+0x16a188>
 2c3276c: aa1f03e1     	mov	x1, xzr
 2c32770: 97fc7661     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c32774: f9403268     	ldr	x8, [x19, #0x60]
 2c32778: b4000128     	cbz	x8, 0x2c3279c <__start_il2cpp+0x16a188>
 2c3277c: 2a0003f3     	mov	w19, w0
 2c32780: aa0803e0     	mov	x0, x8
 2c32784: aa1f03e1     	mov	x1, xzr
 2c32788: 9404b462     	bl	0x2d5f910 <__start_il2cpp+0x2972fc>
 2c3278c: 6b00027f     	cmp	w19, w0
 2c32790: 1a9fb7e0     	cset	w0, ge
 2c32794: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c32798: d65f03c0     	ret
 2c3279c: 97f6923b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Boolean get_isNewMergeFeverAvailable()
# VA 0x2c327a0 .. 0x2c32804 (next mapped method entry)
 2c327a0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c327a4: f9404c08     	ldr	x8, [x0, #0x98]
 2c327a8: b4000268     	cbz	x8, 0x2c327f4 <__start_il2cpp+0x16a1e0>
 2c327ac: f9400c08     	ldr	x8, [x0, #0x18]
 2c327b0: aa0003f3     	mov	x19, x0
 2c327b4: b4000268     	cbz	x8, 0x2c32800 <__start_il2cpp+0x16a1ec>
 2c327b8: f9402d00     	ldr	x0, [x8, #0x58]
 2c327bc: b4000220     	cbz	x0, 0x2c32800 <__start_il2cpp+0x16a1ec>
 2c327c0: aa1f03e1     	mov	x1, xzr
 2c327c4: 97fc7658     	bl	0x2b50124 <__start_il2cpp+0x87b10>
 2c327c8: f9404e68     	ldr	x8, [x19, #0x98]
 2c327cc: b40001a8     	cbz	x8, 0x2c32800 <__start_il2cpp+0x16a1ec>
 2c327d0: aa0003f3     	mov	x19, x0
 2c327d4: aa0803e0     	mov	x0, x8
 2c327d8: aa1f03e1     	mov	x1, xzr
 2c327dc: 97fd2092     	bl	0x2b7aa24 <__start_il2cpp+0xb2410>
 2c327e0: aa0003e1     	mov	x1, x0
 2c327e4: aa1303e0     	mov	x0, x19
 2c327e8: aa1f03e2     	mov	x2, xzr
 2c327ec: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c327f0: 148d081f     	b	0x4f7486c <__start_il2cpp+0x24ac258>
 2c327f4: 2a1f03e0     	mov	w0, wzr
 2c327f8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c327fc: d65f03c0     	ret
 2c32800: 97f69222     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Boolean get_isEventState()
# VA 0x2c32804 .. 0x2c3280c (next mapped method entry)
 2c32804: 3942a000     	ldrb	w0, [x0, #0xa8]
 2c32808: d65f03c0     	ret

# MergeFeverEventController :: System.Void set_isEventState(System.Boolean value)
# VA 0x2c3280c .. 0x2c32814 (next mapped method entry)
 2c3280c: 3902a001     	strb	w1, [x0, #0xa8]
 2c32810: d65f03c0     	ret

# MergeFeverEventController :: System.Boolean get_isInitialized()
# VA 0x2c32814 .. 0x2c3281c (next mapped method entry)
 2c32814: 3942a400     	ldrb	w0, [x0, #0xa9]
 2c32818: d65f03c0     	ret

# MergeFeverEventController :: System.Void set_isInitialized(System.Boolean value)
# VA 0x2c3281c .. 0x2c32824 (next mapped method entry)
 2c3281c: 3902a401     	strb	w1, [x0, #0xa9]
 2c32820: d65f03c0     	ret

# MergeFeverEventController :: Cysharp.Threading.Tasks.UniTask Initialize(Zenject.SignalBus signalBus, GameData gameData, SlidingTextController slidingTextController, MergeFeverViewer mergeFeverViewer, IGameManager gameManager, ItemQueueController itemQueueController, EnergyController energyController, NavigationBarComponent navigationBarComponent, GameSceneManager gameSceneManager, TutorialController tutorialController)
# VA 0x2c32824 .. 0x2c329c0 (next mapped method entry)
 2c32824: d103c3ff     	sub	sp, sp, #0xf0
 2c32828: a9097bfd     	stp	x29, x30, [sp, #0x90]
 2c3282c: a90a6ffc     	stp	x28, x27, [sp, #0xa0]
 2c32830: a90b67fa     	stp	x26, x25, [sp, #0xb0]
 2c32834: a90c5ff8     	stp	x24, x23, [sp, #0xc0]
 2c32838: a90d57f6     	stp	x22, x21, [sp, #0xd0]
 2c3283c: a90e4ff4     	stp	x20, x19, [sp, #0xe0]
 2c32840: a94fa3f5     	ldp	x21, x8, [sp, #0xf8]
 2c32844: 9001d714     	adrp	x20, 0x6712000
 2c32848: f9407bf7     	ldr	x23, [sp, #0xf0]
 2c3284c: aa0703f3     	mov	x19, x7
 2c32850: aa0603f6     	mov	x22, x6
 2c32854: aa0503f8     	mov	x24, x5
 2c32858: aa0403f9     	mov	x25, x4
 2c3285c: aa0303fa     	mov	x26, x3
 2c32860: f90007e8     	str	x8, [sp, #0x8]
 2c32864: 39739a88     	ldrb	w8, [x20, #0xce6]
 2c32868: aa0203fb     	mov	x27, x2
 2c3286c: aa0103fc     	mov	x28, x1
 2c32870: aa0003fd     	mov	x29, x0
 2c32874: 370000c8     	tbnz	w8, #0x0, 0x2c3288c <__start_il2cpp+0x16a278>
 2c32878: 9001b660     	adrp	x0, 0x62fe000
 2c3287c: f9409c00     	ldr	x0, [x0, #0x138]
 2c32880: 97f69158     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32884: 52800028     	mov	w8, #0x1                // =1
 2c32888: 39339a88     	strb	w8, [x20, #0xce6]
 2c3288c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c32890: 910043f4     	add	x20, sp, #0x10
 2c32894: aa1f03e1     	mov	x1, xzr
 2c32898: b27d0280     	orr	x0, x20, #0x8
 2c3289c: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2c328a0: ad0183e0     	stp	q0, q0, [sp, #0x30]
 2c328a4: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c328a8: ad0383e0     	stp	q0, q0, [sp, #0x70]
 2c328ac: 97f69138     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c328b0: 91006280     	add	x0, x20, #0x18
 2c328b4: aa1d03e1     	mov	x1, x29
 2c328b8: f90017fd     	str	x29, [sp, #0x28]
 2c328bc: 97f69134     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c328c0: 91008280     	add	x0, x20, #0x20
 2c328c4: aa1c03e1     	mov	x1, x28
 2c328c8: f9001bfc     	str	x28, [sp, #0x30]
 2c328cc: 97f69130     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c328d0: 9100a280     	add	x0, x20, #0x28
 2c328d4: aa1b03e1     	mov	x1, x27
 2c328d8: f9001ffb     	str	x27, [sp, #0x38]
 2c328dc: 97f6912c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c328e0: 9100c280     	add	x0, x20, #0x30
 2c328e4: aa1a03e1     	mov	x1, x26
 2c328e8: f90023fa     	str	x26, [sp, #0x40]
 2c328ec: 97f69128     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c328f0: 9100e280     	add	x0, x20, #0x38
 2c328f4: aa1903e1     	mov	x1, x25
 2c328f8: f90027f9     	str	x25, [sp, #0x48]
 2c328fc: 97f69124     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32900: 91010280     	add	x0, x20, #0x40
 2c32904: aa1803e1     	mov	x1, x24
 2c32908: f9002bf8     	str	x24, [sp, #0x50]
 2c3290c: 97f69120     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32910: 91012280     	add	x0, x20, #0x48
 2c32914: aa1603e1     	mov	x1, x22
 2c32918: f9002ff6     	str	x22, [sp, #0x58]
 2c3291c: 97f6911c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32920: 91014280     	add	x0, x20, #0x50
 2c32924: aa1303e1     	mov	x1, x19
 2c32928: f90033f3     	str	x19, [sp, #0x60]
 2c3292c: 97f69118     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32930: 91016280     	add	x0, x20, #0x58
 2c32934: aa1703e1     	mov	x1, x23
 2c32938: f90037f7     	str	x23, [sp, #0x68]
 2c3293c: 97f69114     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32940: 91018280     	add	x0, x20, #0x60
 2c32944: aa1503e1     	mov	x1, x21
 2c32948: f9003bf5     	str	x21, [sp, #0x70]
 2c3294c: 97f69110     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32950: f94007e1     	ldr	x1, [sp, #0x8]
 2c32954: 9101a280     	add	x0, x20, #0x68
 2c32958: f9003fe1     	str	x1, [sp, #0x78]
 2c3295c: 97f6910c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32960: 9001b668     	adrp	x8, 0x62fe000
 2c32964: 12800009     	mov	w9, #-0x1               // =-1
 2c32968: f9409d08     	ldr	x8, [x8, #0x138]
 2c3296c: b90013e9     	str	w9, [sp, #0x10]
 2c32970: f9400113     	ldr	x19, [x8]
 2c32974: f9401e68     	ldr	x8, [x19, #0x38]
 2c32978: b5000088     	cbnz	x8, 0x2c32988 <__start_il2cpp+0x16a374>
 2c3297c: aa1303e0     	mov	x0, x19
 2c32980: 97f76dc1     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c32984: f9401e68     	ldr	x8, [x19, #0x38]
 2c32988: f9400901     	ldr	x1, [x8, #0x10]
 2c3298c: 910043e0     	add	x0, sp, #0x10
 2c32990: 94001025     	bl	0x2c36a24 <__start_il2cpp+0x16e410>
 2c32994: b27d0280     	orr	x0, x20, #0x8
 2c32998: aa1f03e1     	mov	x1, xzr
 2c3299c: 97fbdc6b     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c329a0: a94e4ff4     	ldp	x20, x19, [sp, #0xe0]
 2c329a4: a94d57f6     	ldp	x22, x21, [sp, #0xd0]
 2c329a8: a94c5ff8     	ldp	x24, x23, [sp, #0xc0]
 2c329ac: a94b67fa     	ldp	x26, x25, [sp, #0xb0]
 2c329b0: a94a6ffc     	ldp	x28, x27, [sp, #0xa0]
 2c329b4: a9497bfd     	ldp	x29, x30, [sp, #0x90]
 2c329b8: 9103c3ff     	add	sp, sp, #0xf0
 2c329bc: d65f03c0     	ret

# MergeFeverEventController :: ConfigMergeFeverEvent ResolveConfigs()
# VA 0x2c329c0 .. 0x2c32bbc (next mapped method entry)
 2c329c0: a9bc67fe     	stp	x30, x25, [sp, #-0x40]!
 2c329c4: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c329c8: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c329cc: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c329d0: 9001d714     	adrp	x20, 0x6712000
 2c329d4: d001b617     	adrp	x23, 0x62f4000
 2c329d8: aa0003f3     	mov	x19, x0
 2c329dc: 39739e88     	ldrb	w8, [x20, #0xce7]
 2c329e0: f9461ef7     	ldr	x23, [x23, #0xc38]
 2c329e4: 370002a8     	tbnz	w8, #0x0, 0x2c32a38 <__start_il2cpp+0x16a424>
 2c329e8: 9001b600     	adrp	x0, 0x62f2000
 2c329ec: f940ac00     	ldr	x0, [x0, #0x158]
 2c329f0: 97f690fc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c329f4: 9001b660     	adrp	x0, 0x62fe000
 2c329f8: f940a000     	ldr	x0, [x0, #0x140]
 2c329fc: 97f690f9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32a00: d001b600     	adrp	x0, 0x62f4000
 2c32a04: f9461c00     	ldr	x0, [x0, #0xc38]
 2c32a08: 97f690f6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32a0c: 9001b620     	adrp	x0, 0x62f6000
 2c32a10: f9422000     	ldr	x0, [x0, #0x440]
 2c32a14: 97f690f3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32a18: 9001b660     	adrp	x0, 0x62fe000
 2c32a1c: f940a400     	ldr	x0, [x0, #0x148]
 2c32a20: 97f690f0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32a24: 9001b660     	adrp	x0, 0x62fe000
 2c32a28: f940a800     	ldr	x0, [x0, #0x150]
 2c32a2c: 97f690ed     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32a30: 52800028     	mov	w8, #0x1                // =1
 2c32a34: 39339e88     	strb	w8, [x20, #0xce7]
 2c32a38: f94002e0     	ldr	x0, [x23]
 2c32a3c: 9001b674     	adrp	x20, 0x62fe000
 2c32a40: 9001b678     	adrp	x24, 0x62fe000
 2c32a44: f940a694     	ldr	x20, [x20, #0x148]
 2c32a48: b940e408     	ldr	w8, [x0, #0xe4]
 2c32a4c: f940a318     	ldr	x24, [x24, #0x140]
 2c32a50: 35000048     	cbnz	w8, 0x2c32a58 <__start_il2cpp+0x16a444>
 2c32a54: 97f69142     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c32a58: f9400280     	ldr	x0, [x20]
 2c32a5c: f9400302     	ldr	x2, [x24]
 2c32a60: 2a1f03e1     	mov	w1, wzr
 2c32a64: 94219246     	bl	0x349737c <__start_il2cpp+0x9ced68>
 2c32a68: f9400e68     	ldr	x8, [x19, #0x18]
 2c32a6c: b4000a68     	cbz	x8, 0x2c32bb8 <__start_il2cpp+0x16a5a4>
 2c32a70: f9406d15     	ldr	x21, [x8, #0xd8]
 2c32a74: b4000a35     	cbz	x21, 0x2c32bb8 <__start_il2cpp+0x16a5a4>
 2c32a78: 9001b62a     	adrp	x10, 0x62f6000
 2c32a7c: f94002a8     	ldr	x8, [x21]
 2c32a80: aa0003f4     	mov	x20, x0
 2c32a84: f942214a     	ldr	x10, [x10, #0x440]
 2c32a88: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c32a8c: f9400141     	ldr	x1, [x10]
 2c32a90: b4000129     	cbz	x9, 0x2c32ab4 <__start_il2cpp+0x16a4a0>
 2c32a94: f940590a     	ldr	x10, [x8, #0xb0]
 2c32a98: 9100214a     	add	x10, x10, #0x8
 2c32a9c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c32aa0: eb01017f     	cmp	x11, x1
 2c32aa4: 54000100     	b.eq	0x2c32ac4 <__start_il2cpp+0x16a4b0>
 2c32aa8: f1000529     	subs	x9, x9, #0x1
 2c32aac: 9100414a     	add	x10, x10, #0x10
 2c32ab0: 54ffff61     	b.ne	0x2c32a9c <__start_il2cpp+0x16a488>
 2c32ab4: aa1503e0     	mov	x0, x21
 2c32ab8: 2a1f03e2     	mov	w2, wzr
 2c32abc: 97f76e2a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c32ac0: 14000004     	b	0x2c32ad0 <__start_il2cpp+0x16a4bc>
 2c32ac4: b9800149     	ldrsw	x9, [x10]
 2c32ac8: 8b091108     	add	x8, x8, x9, lsl #4
 2c32acc: 9104e100     	add	x0, x8, #0x138
 2c32ad0: a9400408     	ldp	x8, x1, [x0]
 2c32ad4: aa1503e0     	mov	x0, x21
 2c32ad8: d63f0100     	blr	x8
 2c32adc: b40006f4     	cbz	x20, 0x2c32bb8 <__start_il2cpp+0x16a5a4>
 2c32ae0: 9001b619     	adrp	x25, 0x62f2000
 2c32ae4: aa0003f5     	mov	x21, x0
 2c32ae8: aa1403e0     	mov	x0, x20
 2c32aec: f940af39     	ldr	x25, [x25, #0x158]
 2c32af0: aa1f03e1     	mov	x1, xzr
 2c32af4: 9404b32d     	bl	0x2d5f7a8 <__start_il2cpp+0x297194>
 2c32af8: f9400328     	ldr	x8, [x25]
 2c32afc: aa0003f6     	mov	x22, x0
 2c32b00: b940e509     	ldr	w9, [x8, #0xe4]
 2c32b04: 35000069     	cbnz	w9, 0x2c32b10 <__start_il2cpp+0x16a4fc>
 2c32b08: aa0803e0     	mov	x0, x8
 2c32b0c: 97f69114     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c32b10: aa1603e0     	mov	x0, x22
 2c32b14: aa1503e1     	mov	x1, x21
 2c32b18: aa1f03e2     	mov	x2, xzr
 2c32b1c: 9492eba8     	bl	0x50ed9bc <__start_il2cpp+0x26253a8>
 2c32b20: 360002e0     	tbz	w0, #0x0, 0x2c32b7c <__start_il2cpp+0x16a568>
 2c32b24: aa1403e0     	mov	x0, x20
 2c32b28: aa1f03e1     	mov	x1, xzr
 2c32b2c: 9404b377     	bl	0x2d5f908 <__start_il2cpp+0x2972f4>
 2c32b30: f9400328     	ldr	x8, [x25]
 2c32b34: aa0003f6     	mov	x22, x0
 2c32b38: b940e509     	ldr	w9, [x8, #0xe4]
 2c32b3c: 35000069     	cbnz	w9, 0x2c32b48 <__start_il2cpp+0x16a534>
 2c32b40: aa0803e0     	mov	x0, x8
 2c32b44: 97f69106     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c32b48: aa1603e0     	mov	x0, x22
 2c32b4c: aa1503e1     	mov	x1, x21
 2c32b50: aa1f03e2     	mov	x2, xzr
 2c32b54: 9492ebd0     	bl	0x50eda94 <__start_il2cpp+0x2625480>
 2c32b58: 36000120     	tbz	w0, #0x0, 0x2c32b7c <__start_il2cpp+0x16a568>
 2c32b5c: 52800028     	mov	w8, #0x1                // =1
 2c32b60: aa1403e0     	mov	x0, x20
 2c32b64: 3902a268     	strb	w8, [x19, #0xa8]
 2c32b68: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c32b6c: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c32b70: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c32b74: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2c32b78: d65f03c0     	ret
 2c32b7c: f94002e0     	ldr	x0, [x23]
 2c32b80: 9001b674     	adrp	x20, 0x62fe000
 2c32b84: b940e408     	ldr	w8, [x0, #0xe4]
 2c32b88: f940aa94     	ldr	x20, [x20, #0x150]
 2c32b8c: 3902a27f     	strb	wzr, [x19, #0xa8]
 2c32b90: 35000048     	cbnz	w8, 0x2c32b98 <__start_il2cpp+0x16a584>
 2c32b94: 97f690f2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c32b98: f9400280     	ldr	x0, [x20]
 2c32b9c: f9400302     	ldr	x2, [x24]
 2c32ba0: 2a1f03e1     	mov	w1, wzr
 2c32ba4: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c32ba8: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c32bac: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c32bb0: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2c32bb4: 142191f2     	b	0x349737c <__start_il2cpp+0x9ced68>
 2c32bb8: 97f69134     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void UpdateMergeFeverStatus(System.Boolean isFirstTimeChecking, System.Boolean isForInitProgress = False)
# VA 0x2c32bbc .. 0x2c32e88 (next mapped method entry)
 2c32bbc: d10283ff     	sub	sp, sp, #0xa0
 2c32bc0: f90023fe     	str	x30, [sp, #0x40]
 2c32bc4: a9056ffc     	stp	x28, x27, [sp, #0x50]
 2c32bc8: a90667fa     	stp	x26, x25, [sp, #0x60]
 2c32bcc: a9075ff8     	stp	x24, x23, [sp, #0x70]
 2c32bd0: a90857f6     	stp	x22, x21, [sp, #0x80]
 2c32bd4: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2c32bd8: 9001d716     	adrp	x22, 0x6712000
 2c32bdc: 2a0203f4     	mov	w20, w2
 2c32be0: 2a0103f5     	mov	w21, w1
 2c32be4: 3973a2c8     	ldrb	w8, [x22, #0xce8]
 2c32be8: aa0003f3     	mov	x19, x0
 2c32bec: 37000188     	tbnz	w8, #0x0, 0x2c32c1c <__start_il2cpp+0x16a608>
 2c32bf0: 9001b660     	adrp	x0, 0x62fe000
 2c32bf4: f940ac00     	ldr	x0, [x0, #0x158]
 2c32bf8: 97f6907a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32bfc: 9001b660     	adrp	x0, 0x62fe000
 2c32c00: f940b000     	ldr	x0, [x0, #0x160]
 2c32c04: 97f69077     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32c08: 9001b660     	adrp	x0, 0x62fe000
 2c32c0c: f940b400     	ldr	x0, [x0, #0x168]
 2c32c10: 97f69074     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32c14: 52800028     	mov	w8, #0x1                // =1
 2c32c18: 3933a2c8     	strb	w8, [x22, #0xce8]
 2c32c1c: aa1303e0     	mov	x0, x19
 2c32c20: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2c32c24: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c32c28: 97fffeb2     	bl	0x2c326f0 <__start_il2cpp+0x16a0dc>
 2c32c2c: 360011c0     	tbz	w0, #0x0, 0x2c32e64 <__start_il2cpp+0x16a850>
 2c32c30: f9404e60     	ldr	x0, [x19, #0x98]
 2c32c34: b4000800     	cbz	x0, 0x2c32d34 <__start_il2cpp+0x16a720>
 2c32c38: aa1f03e1     	mov	x1, xzr
 2c32c3c: 97fd1f86     	bl	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c32c40: 360007a0     	tbz	w0, #0x0, 0x2c32d34 <__start_il2cpp+0x16a720>
 2c32c44: aa1303e0     	mov	x0, x19
 2c32c48: 940000e3     	bl	0x2c32fd4 <__start_il2cpp+0x16a9c0>
 2c32c4c: 2a0003f6     	mov	w22, w0
 2c32c50: aa1303e0     	mov	x0, x19
 2c32c54: 940000f6     	bl	0x2c3302c <__start_il2cpp+0x16aa18>
 2c32c58: 2a0003f9     	mov	w25, w0
 2c32c5c: aa1303e0     	mov	x0, x19
 2c32c60: 94000112     	bl	0x2c330a8 <__start_il2cpp+0x16aa94>
 2c32c64: 2a0003f8     	mov	w24, w0
 2c32c68: aa1303e0     	mov	x0, x19
 2c32c6c: 94000148     	bl	0x2c3318c <__start_il2cpp+0x16ab78>
 2c32c70: 6b19031b     	subs	w27, w24, w25
 2c32c74: 54000f80     	b.eq	0x2c32e64 <__start_il2cpp+0x16a850>
 2c32c78: 6b16031f     	cmp	w24, w22
 2c32c7c: 2a0003fa     	mov	w26, w0
 2c32c80: 1a9f17fc     	cset	w28, eq
 2c32c84: 54000241     	b.ne	0x2c32ccc <__start_il2cpp+0x16a6b8>
 2c32c88: aa1303e0     	mov	x0, x19
 2c32c8c: 9400015f     	bl	0x2c33208 <__start_il2cpp+0x16abf4>
 2c32c90: f9400e68     	ldr	x8, [x19, #0x18]
 2c32c94: b4000f88     	cbz	x8, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32c98: f9402d00     	ldr	x0, [x8, #0x58]
 2c32c9c: b4000f40     	cbz	x0, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32ca0: aa1f03e1     	mov	x1, xzr
 2c32ca4: 97fc7622     	bl	0x2b5052c <__start_il2cpp+0x87f18>
 2c32ca8: f9404e77     	ldr	x23, [x19, #0x98]
 2c32cac: aa1303e0     	mov	x0, x19
 2c32cb0: 97fffea9     	bl	0x2c32754 <__start_il2cpp+0x16a140>
 2c32cb4: b4000e97     	cbz	x23, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32cb8: 52800028     	mov	w8, #0x1                // =1
 2c32cbc: aa1f03e2     	mov	x2, xzr
 2c32cc0: 0a200101     	bic	w1, w8, w0
 2c32cc4: aa1703e0     	mov	x0, x23
 2c32cc8: 97fd1f6b     	bl	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c32ccc: b9408a69     	ldr	w9, [x19, #0x88]
 2c32cd0: 3941a268     	ldrb	w8, [x19, #0x68]
 2c32cd4: 4b19034a     	sub	w10, w26, w25
 2c32cd8: f9400a77     	ldr	x23, [x19, #0x10]
 2c32cdc: 360003f5     	tbz	w21, #0x0, 0x2c32d58 <__start_il2cpp+0x16a744>
 2c32ce0: 370003d4     	tbnz	w20, #0x0, 0x2c32d58 <__start_il2cpp+0x16a744>
 2c32ce4: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2c32ce8: 910033e1     	add	x1, sp, #0xc
 2c32cec: 2901e3ea     	stp	w10, w24, [sp, #0xc]
 2c32cf0: 2902a7f6     	stp	w22, w9, [sp, #0x14]
 2c32cf4: 9001b669     	adrp	x9, 0x62fe000
 2c32cf8: f940ad29     	ldr	x9, [x9, #0x158]
 2c32cfc: 390073fc     	strb	w28, [sp, #0x1c]
 2c32d00: 390077e8     	strb	w8, [sp, #0x1d]
 2c32d04: f9400120     	ldr	x0, [x9]
 2c32d08: 79003fff     	strh	wzr, [sp, #0x1e]
 2c32d0c: 97f69096     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c32d10: aa0003e1     	mov	x1, x0
 2c32d14: f9001be0     	str	x0, [sp, #0x30]
 2c32d18: 9100c3e0     	add	x0, sp, #0x30
 2c32d1c: 97f6901c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32d20: b4000b37     	cbz	x23, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32d24: 9001b668     	adrp	x8, 0x62fe000
 2c32d28: f940b508     	ldr	x8, [x8, #0x168]
 2c32d2c: a9430be1     	ldp	x1, x2, [sp, #0x30]
 2c32d30: 1400001d     	b	0x2c32da4 <__start_il2cpp+0x16a790>
 2c32d34: aa1303e0     	mov	x0, x19
 2c32d38: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2c32d3c: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2c32d40: f94023fe     	ldr	x30, [sp, #0x40]
 2c32d44: a9475ff8     	ldp	x24, x23, [sp, #0x70]
 2c32d48: a94667fa     	ldp	x26, x25, [sp, #0x60]
 2c32d4c: a9456ffc     	ldp	x28, x27, [sp, #0x50]
 2c32d50: 910283ff     	add	sp, sp, #0xa0
 2c32d54: 14000052     	b	0x2c32e9c <__start_il2cpp+0x16a888>
 2c32d58: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c32d5c: 910033e1     	add	x1, sp, #0xc
 2c32d60: 2901e3ea     	stp	w10, w24, [sp, #0xc]
 2c32d64: 2902a7f6     	stp	w22, w9, [sp, #0x14]
 2c32d68: 9001b669     	adrp	x9, 0x62fe000
 2c32d6c: f940ad29     	ldr	x9, [x9, #0x158]
 2c32d70: 390073fc     	strb	w28, [sp, #0x1c]
 2c32d74: 390077e8     	strb	w8, [sp, #0x1d]
 2c32d78: f9400120     	ldr	x0, [x9]
 2c32d7c: 79003fff     	strh	wzr, [sp, #0x1e]
 2c32d80: 97f69079     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c32d84: aa0003e1     	mov	x1, x0
 2c32d88: f90013e0     	str	x0, [sp, #0x20]
 2c32d8c: 910083e0     	add	x0, sp, #0x20
 2c32d90: 97f68fff     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32d94: b4000797     	cbz	x23, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32d98: 9001b668     	adrp	x8, 0x62fe000
 2c32d9c: f940b108     	ldr	x8, [x8, #0x160]
 2c32da0: a9420be1     	ldp	x1, x2, [sp, #0x20]
 2c32da4: f9400103     	ldr	x3, [x8]
 2c32da8: aa1703e0     	mov	x0, x23
 2c32dac: 9427c007     	bl	0x3622dc8 <__start_il2cpp+0xb5a7b4>
 2c32db0: f9400e68     	ldr	x8, [x19, #0x18]
 2c32db4: b4000688     	cbz	x8, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32db8: f9402d00     	ldr	x0, [x8, #0x58]
 2c32dbc: b4000640     	cbz	x0, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32dc0: aa1f03e1     	mov	x1, xzr
 2c32dc4: 97fc74cc     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c32dc8: f9403268     	ldr	x8, [x19, #0x60]
 2c32dcc: b40005c8     	cbz	x8, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32dd0: 2a0003f4     	mov	w20, w0
 2c32dd4: aa0803e0     	mov	x0, x8
 2c32dd8: aa1f03e1     	mov	x1, xzr
 2c32ddc: 9404b2cd     	bl	0x2d5f910 <__start_il2cpp+0x2972fc>
 2c32de0: 51000408     	sub	w8, w0, #0x1
 2c32de4: 6b08029f     	cmp	w20, w8
 2c32de8: 540001aa     	b.ge	0x2c32e1c <__start_il2cpp+0x16a808>
 2c32dec: f9400e68     	ldr	x8, [x19, #0x18]
 2c32df0: b40004a8     	cbz	x8, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32df4: f9402d00     	ldr	x0, [x8, #0x58]
 2c32df8: b4000460     	cbz	x0, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32dfc: aa1f03e1     	mov	x1, xzr
 2c32e00: 97fc74c3     	bl	0x2b5010c <__start_il2cpp+0x87af8>
 2c32e04: 2a0003f4     	mov	w20, w0
 2c32e08: aa1303e0     	mov	x0, x19
 2c32e0c: 97fffe1d     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c32e10: 6b00029f     	cmp	w20, w0
 2c32e14: 1a9fb7e1     	cset	w1, ge
 2c32e18: 14000002     	b	0x2c32e20 <__start_il2cpp+0x16a80c>
 2c32e1c: 2a1f03e1     	mov	w1, wzr
 2c32e20: f9404a68     	ldr	x8, [x19, #0x90]
 2c32e24: b40000a8     	cbz	x8, 0x2c32e38 <__start_il2cpp+0x16a824>
 2c32e28: f9400d09     	ldr	x9, [x8, #0x18]
 2c32e2c: f9402100     	ldr	x0, [x8, #0x40]
 2c32e30: f9401502     	ldr	x2, [x8, #0x28]
 2c32e34: d63f0120     	blr	x9
 2c32e38: f9400e68     	ldr	x8, [x19, #0x18]
 2c32e3c: b4000248     	cbz	x8, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32e40: f9402d13     	ldr	x19, [x8, #0x58]
 2c32e44: b4000213     	cbz	x19, 0x2c32e84 <__start_il2cpp+0x16a870>
 2c32e48: aa1303e0     	mov	x0, x19
 2c32e4c: aa1f03e1     	mov	x1, xzr
 2c32e50: 97fc7491     	bl	0x2b50094 <__start_il2cpp+0x87a80>
 2c32e54: 0b000361     	add	w1, w27, w0
 2c32e58: aa1303e0     	mov	x0, x19
 2c32e5c: aa1f03e2     	mov	x2, xzr
 2c32e60: 97fc7568     	bl	0x2b50400 <__start_il2cpp+0x87dec>
 2c32e64: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2c32e68: f94023fe     	ldr	x30, [sp, #0x40]
 2c32e6c: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2c32e70: a9475ff8     	ldp	x24, x23, [sp, #0x70]
 2c32e74: a94667fa     	ldp	x26, x25, [sp, #0x60]
 2c32e78: a9456ffc     	ldp	x28, x27, [sp, #0x50]
 2c32e7c: 910283ff     	add	sp, sp, #0xa0
 2c32e80: d65f03c0     	ret
 2c32e84: 97f69081     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Boolean IsCurrentMergeFeverActive()
# VA 0x2c32e88 .. 0x2c32e9c (next mapped method entry)
 2c32e88: f9404c00     	ldr	x0, [x0, #0x98]
 2c32e8c: b4000060     	cbz	x0, 0x2c32e98 <__start_il2cpp+0x16a884>
 2c32e90: aa1f03e1     	mov	x1, xzr
 2c32e94: 17fd1ef0     	b	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c32e98: d65f03c0     	ret

# MergeFeverEventController :: System.Boolean TryStartNewMergeFever()
# VA 0x2c32e9c .. 0x2c32fd4 (next mapped method entry)
 2c32e9c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c32ea0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c32ea4: 9001d714     	adrp	x20, 0x6712000
 2c32ea8: aa0003f3     	mov	x19, x0
 2c32eac: 3973aa88     	ldrb	w8, [x20, #0xcea]
 2c32eb0: 37000188     	tbnz	w8, #0x0, 0x2c32ee0 <__start_il2cpp+0x16a8cc>
 2c32eb4: 9001b660     	adrp	x0, 0x62fe000
 2c32eb8: f940b800     	ldr	x0, [x0, #0x170]
 2c32ebc: 97f68fc9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32ec0: 9001b660     	adrp	x0, 0x62fe000
 2c32ec4: f940bc00     	ldr	x0, [x0, #0x178]
 2c32ec8: 97f68fc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32ecc: 9001b620     	adrp	x0, 0x62f6000
 2c32ed0: f9411000     	ldr	x0, [x0, #0x220]
 2c32ed4: 97f68fc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c32ed8: 52800028     	mov	w8, #0x1                // =1
 2c32edc: 3933aa88     	strb	w8, [x20, #0xcea]
 2c32ee0: aa1303e0     	mov	x0, x19
 2c32ee4: 97fffe03     	bl	0x2c326f0 <__start_il2cpp+0x16a0dc>
 2c32ee8: 360006c0     	tbz	w0, #0x0, 0x2c32fc0 <__start_il2cpp+0x16a9ac>
 2c32eec: 9001b628     	adrp	x8, 0x62f6000
 2c32ef0: 9001b669     	adrp	x9, 0x62fe000
 2c32ef4: 9001b66a     	adrp	x10, 0x62fe000
 2c32ef8: f9411108     	ldr	x8, [x8, #0x220]
 2c32efc: f940b929     	ldr	x9, [x9, #0x170]
 2c32f00: f940bd4a     	ldr	x10, [x10, #0x178]
 2c32f04: 12800001     	mov	w1, #-0x1               // =-1
 2c32f08: aa1f03e5     	mov	x5, xzr
 2c32f0c: f9400122     	ldr	x2, [x9]
 2c32f10: f9400100     	ldr	x0, [x8]
 2c32f14: f9400144     	ldr	x4, [x10]
 2c32f18: aa0203e3     	mov	x3, x2
 2c32f1c: 9407fa55     	bl	0x2e31870 <__start_il2cpp+0x36925c>
 2c32f20: f9400e68     	ldr	x8, [x19, #0x18]
 2c32f24: b4000568     	cbz	x8, 0x2c32fd0 <__start_il2cpp+0x16a9bc>
 2c32f28: f9402d00     	ldr	x0, [x8, #0x58]
 2c32f2c: b4000520     	cbz	x0, 0x2c32fd0 <__start_il2cpp+0x16a9bc>
 2c32f30: aa1f03e1     	mov	x1, xzr
 2c32f34: 97fc75ab     	bl	0x2b505e0 <__start_il2cpp+0x87fcc>
 2c32f38: f9405260     	ldr	x0, [x19, #0xa0]
 2c32f3c: b40004a0     	cbz	x0, 0x2c32fd0 <__start_il2cpp+0x16a9bc>
 2c32f40: aa1f03e1     	mov	x1, xzr
 2c32f44: 9408e896     	bl	0x2e6d19c <__start_il2cpp+0x3a4b88>
 2c32f48: aa1303f4     	mov	x20, x19
 2c32f4c: aa0003e1     	mov	x1, x0
 2c32f50: f8098e80     	str	x0, [x20, #0x98]!
 2c32f54: aa1403e0     	mov	x0, x20
 2c32f58: 97f68f8d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32f5c: aa1303e0     	mov	x0, x19
 2c32f60: 9400037a     	bl	0x2c33d48 <__start_il2cpp+0x16b734>
 2c32f64: 36000260     	tbz	w0, #0x0, 0x2c32fb0 <__start_il2cpp+0x16a99c>
 2c32f68: aa1303e0     	mov	x0, x19
 2c32f6c: 940003f3     	bl	0x2c33f38 <__start_il2cpp+0x16b924>
 2c32f70: f9400e68     	ldr	x8, [x19, #0x18]
 2c32f74: b40002e8     	cbz	x8, 0x2c32fd0 <__start_il2cpp+0x16a9bc>
 2c32f78: f9400280     	ldr	x0, [x20]
 2c32f7c: b40002a0     	cbz	x0, 0x2c32fd0 <__start_il2cpp+0x16a9bc>
 2c32f80: f9402d14     	ldr	x20, [x8, #0x58]
 2c32f84: aa1f03e1     	mov	x1, xzr
 2c32f88: 97fd1ea7     	bl	0x2b7aa24 <__start_il2cpp+0xb2410>
 2c32f8c: b4000234     	cbz	x20, 0x2c32fd0 <__start_il2cpp+0x16a9bc>
 2c32f90: aa0003e1     	mov	x1, x0
 2c32f94: aa1403e0     	mov	x0, x20
 2c32f98: aa1f03e2     	mov	x2, xzr
 2c32f9c: 97fc7508     	bl	0x2b503bc <__start_il2cpp+0x87da8>
 2c32fa0: aa1303e0     	mov	x0, x19
 2c32fa4: 9400040c     	bl	0x2c33fd4 <__start_il2cpp+0x16b9c0>
 2c32fa8: 52800020     	mov	w0, #0x1                // =1
 2c32fac: 14000006     	b	0x2c32fc4 <__start_il2cpp+0x16a9b0>
 2c32fb0: aa1403e0     	mov	x0, x20
 2c32fb4: aa1f03e1     	mov	x1, xzr
 2c32fb8: f900029f     	str	xzr, [x20]
 2c32fbc: 97f68f74     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c32fc0: 2a1f03e0     	mov	w0, wzr
 2c32fc4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c32fc8: f84207fe     	ldr	x30, [sp], #0x20
 2c32fcc: d65f03c0     	ret
 2c32fd0: 97f6902e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Int32 GetCurrentLevelMergeTotalCount()
# VA 0x2c32fd4 .. 0x2c3302c (next mapped method entry)
 2c32fd4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c32fd8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c32fdc: f9400c08     	ldr	x8, [x0, #0x18]
 2c32fe0: b4000248     	cbz	x8, 0x2c33028 <__start_il2cpp+0x16aa14>
 2c32fe4: aa0003f3     	mov	x19, x0
 2c32fe8: f9402d00     	ldr	x0, [x8, #0x58]
 2c32fec: b40001e0     	cbz	x0, 0x2c33028 <__start_il2cpp+0x16aa14>
 2c32ff0: aa1f03e1     	mov	x1, xzr
 2c32ff4: 97fc7440     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c32ff8: 2a0003f5     	mov	w21, w0
 2c32ffc: aa1303e0     	mov	x0, x19
 2c33000: 97fffda0     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c33004: aa0003f4     	mov	x20, x0
 2c33008: 34000095     	cbz	w21, 0x2c33018 <__start_il2cpp+0x16aa04>
 2c3300c: aa1303e0     	mov	x0, x19
 2c33010: 94000814     	bl	0x2c35060 <__start_il2cpp+0x16ca4c>
 2c33014: 4b000294     	sub	w20, w20, w0
 2c33018: 2a1403e0     	mov	w0, w20
 2c3301c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33020: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c33024: d65f03c0     	ret
 2c33028: 97f69018     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Int32 GetRelativeLastMergeCount()
# VA 0x2c3302c .. 0x2c330a8 (next mapped method entry)
 2c3302c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c33030: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c33034: f9400c08     	ldr	x8, [x0, #0x18]
 2c33038: b4000368     	cbz	x8, 0x2c330a4 <__start_il2cpp+0x16aa90>
 2c3303c: aa0003f3     	mov	x19, x0
 2c33040: f9402d00     	ldr	x0, [x8, #0x58]
 2c33044: b4000300     	cbz	x0, 0x2c330a4 <__start_il2cpp+0x16aa90>
 2c33048: aa1f03e1     	mov	x1, xzr
 2c3304c: 97fc742a     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c33050: f9400e68     	ldr	x8, [x19, #0x18]
 2c33054: 340001a0     	cbz	w0, 0x2c33088 <__start_il2cpp+0x16aa74>
 2c33058: b4000268     	cbz	x8, 0x2c330a4 <__start_il2cpp+0x16aa90>
 2c3305c: f9402d00     	ldr	x0, [x8, #0x58]
 2c33060: b4000220     	cbz	x0, 0x2c330a4 <__start_il2cpp+0x16aa90>
 2c33064: aa1f03e1     	mov	x1, xzr
 2c33068: 97fc740b     	bl	0x2b50094 <__start_il2cpp+0x87a80>
 2c3306c: 2a0003f4     	mov	w20, w0
 2c33070: aa1303e0     	mov	x0, x19
 2c33074: 940007fb     	bl	0x2c35060 <__start_il2cpp+0x16ca4c>
 2c33078: 4b000280     	sub	w0, w20, w0
 2c3307c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33080: f84207fe     	ldr	x30, [sp], #0x20
 2c33084: d65f03c0     	ret
 2c33088: b40000e8     	cbz	x8, 0x2c330a4 <__start_il2cpp+0x16aa90>
 2c3308c: f9402d00     	ldr	x0, [x8, #0x58]
 2c33090: b40000a0     	cbz	x0, 0x2c330a4 <__start_il2cpp+0x16aa90>
 2c33094: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33098: aa1f03e1     	mov	x1, xzr
 2c3309c: f84207fe     	ldr	x30, [sp], #0x20
 2c330a0: 17fc73fd     	b	0x2b50094 <__start_il2cpp+0x87a80>
 2c330a4: 97f68ff9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Int32 GetRelativeCurrentMergeCount()
# VA 0x2c330a8 .. 0x2c3318c (next mapped method entry)
 2c330a8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c330ac: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c330b0: f9400c08     	ldr	x8, [x0, #0x18]
 2c330b4: b40006a8     	cbz	x8, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c330b8: aa0003f3     	mov	x19, x0
 2c330bc: f9402d00     	ldr	x0, [x8, #0x58]
 2c330c0: b4000640     	cbz	x0, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c330c4: aa1f03e1     	mov	x1, xzr
 2c330c8: 97fc7411     	bl	0x2b5010c <__start_il2cpp+0x87af8>
 2c330cc: 2a0003f4     	mov	w20, w0
 2c330d0: aa1303e0     	mov	x0, x19
 2c330d4: 97fffd6b     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c330d8: f9400e68     	ldr	x8, [x19, #0x18]
 2c330dc: 6b00029f     	cmp	w20, w0
 2c330e0: 540001ed     	b.le	0x2c3311c <__start_il2cpp+0x16ab08>
 2c330e4: b4000528     	cbz	x8, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c330e8: f9402d00     	ldr	x0, [x8, #0x58]
 2c330ec: b40004e0     	cbz	x0, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c330f0: aa1f03e1     	mov	x1, xzr
 2c330f4: 97fc7400     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c330f8: 2a0003f5     	mov	w21, w0
 2c330fc: aa1303e0     	mov	x0, x19
 2c33100: 97fffd60     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c33104: aa0003f4     	mov	x20, x0
 2c33108: 340002b5     	cbz	w21, 0x2c3315c <__start_il2cpp+0x16ab48>
 2c3310c: aa1303e0     	mov	x0, x19
 2c33110: 940007d4     	bl	0x2c35060 <__start_il2cpp+0x16ca4c>
 2c33114: 4b000294     	sub	w20, w20, w0
 2c33118: 14000011     	b	0x2c3315c <__start_il2cpp+0x16ab48>
 2c3311c: b4000368     	cbz	x8, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c33120: f9402d00     	ldr	x0, [x8, #0x58]
 2c33124: b4000320     	cbz	x0, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c33128: aa1f03e1     	mov	x1, xzr
 2c3312c: 97fc73f2     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c33130: f9400e68     	ldr	x8, [x19, #0x18]
 2c33134: 340001c0     	cbz	w0, 0x2c3316c <__start_il2cpp+0x16ab58>
 2c33138: b4000288     	cbz	x8, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c3313c: f9402d00     	ldr	x0, [x8, #0x58]
 2c33140: b4000240     	cbz	x0, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c33144: aa1f03e1     	mov	x1, xzr
 2c33148: 97fc73f1     	bl	0x2b5010c <__start_il2cpp+0x87af8>
 2c3314c: 2a0003f4     	mov	w20, w0
 2c33150: aa1303e0     	mov	x0, x19
 2c33154: 940007c3     	bl	0x2c35060 <__start_il2cpp+0x16ca4c>
 2c33158: 4b000294     	sub	w20, w20, w0
 2c3315c: 2a1403e0     	mov	w0, w20
 2c33160: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33164: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c33168: d65f03c0     	ret
 2c3316c: b40000e8     	cbz	x8, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c33170: f9402d00     	ldr	x0, [x8, #0x58]
 2c33174: b40000a0     	cbz	x0, 0x2c33188 <__start_il2cpp+0x16ab74>
 2c33178: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c3317c: aa1f03e1     	mov	x1, xzr
 2c33180: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c33184: 17fc73e2     	b	0x2b5010c <__start_il2cpp+0x87af8>
 2c33188: 97f68fc0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Int32 GetRelativeMergeCount()
# VA 0x2c3318c .. 0x2c33208 (next mapped method entry)
 2c3318c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c33190: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c33194: f9400c08     	ldr	x8, [x0, #0x18]
 2c33198: b4000368     	cbz	x8, 0x2c33204 <__start_il2cpp+0x16abf0>
 2c3319c: aa0003f3     	mov	x19, x0
 2c331a0: f9402d00     	ldr	x0, [x8, #0x58]
 2c331a4: b4000300     	cbz	x0, 0x2c33204 <__start_il2cpp+0x16abf0>
 2c331a8: aa1f03e1     	mov	x1, xzr
 2c331ac: 97fc73d2     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c331b0: f9400e68     	ldr	x8, [x19, #0x18]
 2c331b4: 340001a0     	cbz	w0, 0x2c331e8 <__start_il2cpp+0x16abd4>
 2c331b8: b4000268     	cbz	x8, 0x2c33204 <__start_il2cpp+0x16abf0>
 2c331bc: f9402d00     	ldr	x0, [x8, #0x58]
 2c331c0: b4000220     	cbz	x0, 0x2c33204 <__start_il2cpp+0x16abf0>
 2c331c4: aa1f03e1     	mov	x1, xzr
 2c331c8: 97fc73d1     	bl	0x2b5010c <__start_il2cpp+0x87af8>
 2c331cc: 2a0003f4     	mov	w20, w0
 2c331d0: aa1303e0     	mov	x0, x19
 2c331d4: 940007a3     	bl	0x2c35060 <__start_il2cpp+0x16ca4c>
 2c331d8: 4b000280     	sub	w0, w20, w0
 2c331dc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c331e0: f84207fe     	ldr	x30, [sp], #0x20
 2c331e4: d65f03c0     	ret
 2c331e8: b40000e8     	cbz	x8, 0x2c33204 <__start_il2cpp+0x16abf0>
 2c331ec: f9402d00     	ldr	x0, [x8, #0x58]
 2c331f0: b40000a0     	cbz	x0, 0x2c33204 <__start_il2cpp+0x16abf0>
 2c331f4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c331f8: aa1f03e1     	mov	x1, xzr
 2c331fc: f84207fe     	ldr	x30, [sp], #0x20
 2c33200: 17fc73c3     	b	0x2b5010c <__start_il2cpp+0x87af8>
 2c33204: 97f68fa1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void CollectReward()
# VA 0x2c33208 .. 0x2c337a0 (next mapped method entry)
 2c33208: d10443ff     	sub	sp, sp, #0x110
 2c3320c: a90b7bfd     	stp	x29, x30, [sp, #0xb0]
 2c33210: a90c6ffc     	stp	x28, x27, [sp, #0xc0]
 2c33214: a90d67fa     	stp	x26, x25, [sp, #0xd0]
 2c33218: a90e5ff8     	stp	x24, x23, [sp, #0xe0]
 2c3321c: a90f57f6     	stp	x22, x21, [sp, #0xf0]
 2c33220: a9104ff4     	stp	x20, x19, [sp, #0x100]
 2c33224: f001d6f7     	adrp	x23, 0x6712000
 2c33228: d001b5f6     	adrp	x22, 0x62f1000
 2c3322c: d001b5f5     	adrp	x21, 0x62f1000
 2c33230: d001b5f4     	adrp	x20, 0x62f1000
 2c33234: f940bed6     	ldr	x22, [x22, #0x178]
 2c33238: 3973c6e8     	ldrb	w8, [x23, #0xcf1]
 2c3323c: f940bab5     	ldr	x21, [x21, #0x170]
 2c33240: f940da94     	ldr	x20, [x20, #0x1b0]
 2c33244: aa0003f3     	mov	x19, x0
 2c33248: 37000728     	tbnz	w8, #0x0, 0x2c3332c <__start_il2cpp+0x16ad18>
 2c3324c: b001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c33250: f946e800     	ldr	x0, [x0, #0xdd0]
 2c33254: 97f68ee3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33258: f001b640     	adrp	x0, 0x62fe000
 2c3325c: f940c000     	ldr	x0, [x0, #0x180]
 2c33260: 97f68ee0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33264: f001b640     	adrp	x0, 0x62fe000
 2c33268: f940c400     	ldr	x0, [x0, #0x188]
 2c3326c: 97f68edd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33270: f001b640     	adrp	x0, 0x62fe000
 2c33274: f940c800     	ldr	x0, [x0, #0x190]
 2c33278: 97f68eda     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3327c: b001b600     	adrp	x0, 0x62f4000
 2c33280: f9476c00     	ldr	x0, [x0, #0xed8]
 2c33284: 97f68ed7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33288: d001b5e0     	adrp	x0, 0x62f1000
 2c3328c: f9418400     	ldr	x0, [x0, #0x308]
 2c33290: 97f68ed4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33294: f001b640     	adrp	x0, 0x62fe000
 2c33298: f940cc00     	ldr	x0, [x0, #0x198]
 2c3329c: 97f68ed1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332a0: d001b5e0     	adrp	x0, 0x62f1000
 2c332a4: f940b800     	ldr	x0, [x0, #0x170]
 2c332a8: 97f68ece     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332ac: d001b5e0     	adrp	x0, 0x62f1000
 2c332b0: f940bc00     	ldr	x0, [x0, #0x178]
 2c332b4: 97f68ecb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332b8: f001b640     	adrp	x0, 0x62fe000
 2c332bc: f940d000     	ldr	x0, [x0, #0x1a0]
 2c332c0: 97f68ec8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332c4: 9001b600     	adrp	x0, 0x62f3000
 2c332c8: f9431400     	ldr	x0, [x0, #0x628]
 2c332cc: 97f68ec5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332d0: f001b640     	adrp	x0, 0x62fe000
 2c332d4: f940d400     	ldr	x0, [x0, #0x1a8]
 2c332d8: 97f68ec2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332dc: f001b640     	adrp	x0, 0x62fe000
 2c332e0: f940d800     	ldr	x0, [x0, #0x1b0]
 2c332e4: 97f68ebf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332e8: f001b640     	adrp	x0, 0x62fe000
 2c332ec: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c332f0: 97f68ebc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c332f4: f001b640     	adrp	x0, 0x62fe000
 2c332f8: f940e000     	ldr	x0, [x0, #0x1c0]
 2c332fc: 97f68eb9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33300: d001b600     	adrp	x0, 0x62f5000
 2c33304: f947e800     	ldr	x0, [x0, #0xfd0]
 2c33308: 97f68eb6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3330c: f001b640     	adrp	x0, 0x62fe000
 2c33310: f940e400     	ldr	x0, [x0, #0x1c8]
 2c33314: 97f68eb3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33318: d001b5e0     	adrp	x0, 0x62f1000
 2c3331c: f940d800     	ldr	x0, [x0, #0x1b0]
 2c33320: 97f68eb0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33324: 52800028     	mov	w8, #0x1                // =1
 2c33328: 3933c6e8     	strb	w8, [x23, #0xcf1]
 2c3332c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c33330: aa1303e0     	mov	x0, x19
 2c33334: a90a7fff     	stp	xzr, xzr, [sp, #0xa0]
 2c33338: f9003fff     	str	xzr, [sp, #0x78]
 2c3333c: ad0403e0     	stp	q0, q0, [sp, #0x80]
 2c33340: 97fffcd0     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c33344: f9000be0     	str	x0, [sp, #0x10]
 2c33348: f94002c0     	ldr	x0, [x22]
 2c3334c: aa0103f6     	mov	x22, x1
 2c33350: 97f68f4a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c33354: f94002a1     	ldr	x1, [x21]
 2c33358: aa0003f5     	mov	x21, x0
 2c3335c: 943bd49b     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c33360: f9400288     	ldr	x8, [x20]
 2c33364: f90057e8     	str	x8, [sp, #0xa8]
 2c33368: b4001cf6     	cbz	x22, 0x2c33704 <__start_il2cpp+0x16b0f0>
 2c3336c: f001b648     	adrp	x8, 0x62fe000
 2c33370: f001b65b     	adrp	x27, 0x62fe000
 2c33374: f001b65c     	adrp	x28, 0x62fe000
 2c33378: f940cd08     	ldr	x8, [x8, #0x198]
 2c3337c: f001b65d     	adrp	x29, 0x62fe000
 2c33380: b001b5f9     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c33384: f940c77b     	ldr	x27, [x27, #0x188]
 2c33388: f940d39c     	ldr	x28, [x28, #0x1a0]
 2c3338c: f940dfbd     	ldr	x29, [x29, #0x1b8]
 2c33390: f946eb39     	ldr	x25, [x25, #0xdd0]
 2c33394: f9400101     	ldr	x1, [x8]
 2c33398: 910143e8     	add	x8, sp, #0x50
 2c3339c: aa1603e0     	mov	x0, x22
 2c333a0: 943c8a39     	bl	0x3b55c84 <__start_il2cpp+0x108d670>
 2c333a4: ad4287e0     	ldp	q0, q1, [sp, #0x50]
 2c333a8: b001b5f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c333ac: f9403be8     	ldr	x8, [sp, #0x70]
 2c333b0: 910203e9     	add	x9, sp, #0x80
 2c333b4: ad0407e0     	stp	q0, q1, [sp, #0x80]
 2c333b8: f90053e8     	str	x8, [sp, #0xa0]
 2c333bc: f9470e94     	ldr	x20, [x20, #0xe18]
 2c333c0: a90527ff     	stp	xzr, x9, [sp, #0x50]
 2c333c4: f9400361     	ldr	x1, [x27]
 2c333c8: 910203e0     	add	x0, sp, #0x80
 2c333cc: 9479674c     	bl	0x4a8d0fc <__start_il2cpp+0x1fc4ae8>
 2c333d0: 36001320     	tbz	w0, #0x0, 0x2c33634 <__start_il2cpp+0x16b020>
 2c333d4: a9495bf8     	ldp	x24, x22, [sp, #0x90]
 2c333d8: f94053fa     	ldr	x26, [sp, #0xa0]
 2c333dc: f9400380     	ldr	x0, [x28]
 2c333e0: b9004ff8     	str	w24, [sp, #0x4c]
 2c333e4: 910133e1     	add	x1, sp, #0x4c
 2c333e8: 97f68edf     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c333ec: aa0003f7     	mov	x23, x0
 2c333f0: f9402680     	ldr	x0, [x20, #0x48]
 2c333f4: b9004bfa     	str	w26, [sp, #0x48]
 2c333f8: 910123e1     	add	x1, sp, #0x48
 2c333fc: 97f68eda     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c33400: aa0003e3     	mov	x3, x0
 2c33404: f94003a0     	ldr	x0, [x29]
 2c33408: aa1703e1     	mov	x1, x23
 2c3340c: aa1603e2     	mov	x2, x22
 2c33410: aa1f03e4     	mov	x4, xzr
 2c33414: 948d0ec9     	bl	0x4f76f38 <__start_il2cpp+0x24ae924>
 2c33418: aa0003f7     	mov	x23, x0
 2c3341c: f9400320     	ldr	x0, [x25]
 2c33420: b940e408     	ldr	w8, [x0, #0xe4]
 2c33424: 35000048     	cbnz	w8, 0x2c3342c <__start_il2cpp+0x16ae18>
 2c33428: 97f68ecd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c3342c: aa1703e0     	mov	x0, x23
 2c33430: aa1f03e1     	mov	x1, xzr
 2c33434: 94bb23bc     	bl	0x5afc324 <__start_il2cpp+0x3033d10>
 2c33438: 7100071f     	cmp	w24, #0x1
 2c3343c: 54000580     	b.eq	0x2c334ec <__start_il2cpp+0x16aed8>
 2c33440: 71000b1f     	cmp	w24, #0x2
 2c33444: 540005e1     	b.ne	0x2c33500 <__start_il2cpp+0x16aeec>
 2c33448: 9001b608     	adrp	x8, 0x62f3000
 2c3344c: f9431508     	ldr	x8, [x8, #0x628]
 2c33450: f9400101     	ldr	x1, [x8]
 2c33454: aa1603e0     	mov	x0, x22
 2c33458: aa1f03e2     	mov	x2, xzr
 2c3345c: 948d0504     	bl	0x4f7486c <__start_il2cpp+0x24ac258>
 2c33460: 36000500     	tbz	w0, #0x0, 0x2c33500 <__start_il2cpp+0x16aeec>
 2c33464: f001b648     	adrp	x8, 0x62fe000
 2c33468: f940d508     	ldr	x8, [x8, #0x1a8]
 2c3346c: f9400100     	ldr	x0, [x8]
 2c33470: aa1603e1     	mov	x1, x22
 2c33474: aa1f03e2     	mov	x2, xzr
 2c33478: 948cd64a     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c3347c: b001b608     	adrp	x8, 0x62f4000
 2c33480: aa0003f8     	mov	x24, x0
 2c33484: f9476d08     	ldr	x8, [x8, #0xed8]
 2c33488: f9400100     	ldr	x0, [x8]
 2c3348c: 97f68efb     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c33490: aa1803e1     	mov	x1, x24
 2c33494: aa1f03e2     	mov	x2, xzr
 2c33498: aa1f03e3     	mov	x3, xzr
 2c3349c: aa0003f7     	mov	x23, x0
 2c334a0: 97fbf29e     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c334a4: aa1703e0     	mov	x0, x23
 2c334a8: aa1f03e1     	mov	x1, xzr
 2c334ac: 940c463e     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c334b0: f001b648     	adrp	x8, 0x62fe000
 2c334b4: f940d508     	ldr	x8, [x8, #0x1a8]
 2c334b8: f9400100     	ldr	x0, [x8]
 2c334bc: aa1603e1     	mov	x1, x22
 2c334c0: aa1f03e2     	mov	x2, xzr
 2c334c4: 948cd637     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c334c8: aa0003f6     	mov	x22, x0
 2c334cc: f9400320     	ldr	x0, [x25]
 2c334d0: b940e408     	ldr	w8, [x0, #0xe4]
 2c334d4: 35000048     	cbnz	w8, 0x2c334dc <__start_il2cpp+0x16aec8>
 2c334d8: 97f68ea1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c334dc: aa1603e0     	mov	x0, x22
 2c334e0: aa1f03e1     	mov	x1, xzr
 2c334e4: 94bb2523     	bl	0x5afc970 <__start_il2cpp+0x303435c>
 2c334e8: 17ffffb7     	b	0x2c333c4 <__start_il2cpp+0x16adb0>
 2c334ec: a9035bf8     	stp	x24, x22, [sp, #0x30]
 2c334f0: f90023fa     	str	x26, [sp, #0x40]
 2c334f4: 9100c3e1     	add	x1, sp, #0x30
 2c334f8: 94000474     	bl	0x2c346c8 <__start_il2cpp+0x16c0b4>
 2c334fc: 36000440     	tbz	w0, #0x0, 0x2c33584 <__start_il2cpp+0x16af70>
 2c33500: a901dbf8     	stp	x24, x22, [sp, #0x18]
 2c33504: f90017fa     	str	x26, [sp, #0x28]
 2c33508: 910063e1     	add	x1, sp, #0x18
 2c3350c: 9101e3e2     	add	x2, sp, #0x78
 2c33510: 9102a3e3     	add	x3, sp, #0xa8
 2c33514: aa1303e0     	mov	x0, x19
 2c33518: 9400055e     	bl	0x2c34a90 <__start_il2cpp+0x16c47c>
 2c3351c: b4000f35     	cbz	x21, 0x2c33700 <__start_il2cpp+0x16b0ec>
 2c33520: d001b5e9     	adrp	x9, 0x62f1000
 2c33524: b9401eaa     	ldr	w10, [x21, #0x1c]
 2c33528: f9400aa8     	ldr	x8, [x21, #0x10]
 2c3352c: f9403fe1     	ldr	x1, [sp, #0x78]
 2c33530: f9418529     	ldr	x9, [x9, #0x308]
 2c33534: 1100054a     	add	w10, w10, #0x1
 2c33538: f9400129     	ldr	x9, [x9]
 2c3353c: b9001eaa     	str	w10, [x21, #0x1c]
 2c33540: b4000e08     	cbz	x8, 0x2c33700 <__start_il2cpp+0x16b0ec>
 2c33544: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2c33548: b940190b     	ldr	w11, [x8, #0x18]
 2c3354c: 6b0b015f     	cmp	w10, w11
 2c33550: 540000e2     	b.hs	0x2c3356c <__start_il2cpp+0x16af58>
 2c33554: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2c33558: 11000549     	add	w9, w10, #0x1
 2c3355c: b9001aa9     	str	w9, [x21, #0x18]
 2c33560: f8020c01     	str	x1, [x0, #0x20]!
 2c33564: 97f68e0a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33568: 17ffff97     	b	0x2c333c4 <__start_il2cpp+0x16adb0>
 2c3356c: f9401128     	ldr	x8, [x9, #0x20]
 2c33570: f9406108     	ldr	x8, [x8, #0xc0]
 2c33574: f9403902     	ldr	x2, [x8, #0x70]
 2c33578: aa1503e0     	mov	x0, x21
 2c3357c: 943bd62d     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2c33580: 17ffff91     	b	0x2c333c4 <__start_il2cpp+0x16adb0>
 2c33584: f9400380     	ldr	x0, [x28]
 2c33588: 52800028     	mov	w8, #0x1                // =1
 2c3358c: b9004fe8     	str	w8, [sp, #0x4c]
 2c33590: 910133e1     	add	x1, sp, #0x4c
 2c33594: 97f68e74     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c33598: aa0003e1     	mov	x1, x0
 2c3359c: f001b648     	adrp	x8, 0x62fe000
 2c335a0: f940e508     	ldr	x8, [x8, #0x1c8]
 2c335a4: f9400100     	ldr	x0, [x8]
 2c335a8: aa1f03e2     	mov	x2, xzr
 2c335ac: 948ce471     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c335b0: b001b608     	adrp	x8, 0x62f4000
 2c335b4: aa0003f7     	mov	x23, x0
 2c335b8: f9476d08     	ldr	x8, [x8, #0xed8]
 2c335bc: f9400100     	ldr	x0, [x8]
 2c335c0: 97f68eae     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c335c4: aa1703e1     	mov	x1, x23
 2c335c8: aa1f03e2     	mov	x2, xzr
 2c335cc: aa1f03e3     	mov	x3, xzr
 2c335d0: aa0003f6     	mov	x22, x0
 2c335d4: 97fbf251     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c335d8: aa1603e0     	mov	x0, x22
 2c335dc: aa1f03e1     	mov	x1, xzr
 2c335e0: 940c45f1     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c335e4: f9400380     	ldr	x0, [x28]
 2c335e8: 52800028     	mov	w8, #0x1                // =1
 2c335ec: b9004be8     	str	w8, [sp, #0x48]
 2c335f0: 910123e1     	add	x1, sp, #0x48
 2c335f4: 97f68e5c     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c335f8: aa0003e1     	mov	x1, x0
 2c335fc: f001b648     	adrp	x8, 0x62fe000
 2c33600: f940e508     	ldr	x8, [x8, #0x1c8]
 2c33604: f9400100     	ldr	x0, [x8]
 2c33608: aa1f03e2     	mov	x2, xzr
 2c3360c: 948ce459     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c33610: aa0003f6     	mov	x22, x0
 2c33614: f9400320     	ldr	x0, [x25]
 2c33618: b940e408     	ldr	w8, [x0, #0xe4]
 2c3361c: 35000048     	cbnz	w8, 0x2c33624 <__start_il2cpp+0x16b010>
 2c33620: 97f68e4f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c33624: aa1603e0     	mov	x0, x22
 2c33628: aa1f03e1     	mov	x1, xzr
 2c3362c: 94bb24d1     	bl	0x5afc970 <__start_il2cpp+0x303435c>
 2c33630: 17ffff65     	b	0x2c333c4 <__start_il2cpp+0x16adb0>
 2c33634: f001b648     	adrp	x8, 0x62fe000
 2c33638: 910203e0     	add	x0, sp, #0x80
 2c3363c: f940c108     	ldr	x8, [x8, #0x180]
 2c33640: f9400101     	ldr	x1, [x8]
 2c33644: 947966ad     	bl	0x4a8d0f8 <__start_il2cpp+0x1fc4ae4>
 2c33648: d001b608     	adrp	x8, 0x62f5000
 2c3364c: aa1503e1     	mov	x1, x21
 2c33650: aa1f03e2     	mov	x2, xzr
 2c33654: f947e908     	ldr	x8, [x8, #0xfd0]
 2c33658: f9400100     	ldr	x0, [x8]
 2c3365c: 948d0fc5     	bl	0x4f77570 <__start_il2cpp+0x24aef5c>
 2c33660: f9400be8     	ldr	x8, [sp, #0x10]
 2c33664: aa0003f4     	mov	x20, x0
 2c33668: d360fd08     	lsr	x8, x8, #32
 2c3366c: b4000188     	cbz	x8, 0x2c3369c <__start_il2cpp+0x16b088>
 2c33670: f001b648     	adrp	x8, 0x62fe000
 2c33674: f001b649     	adrp	x9, 0x62fe000
 2c33678: aa1403e1     	mov	x1, x20
 2c3367c: f940d908     	ldr	x8, [x8, #0x1b0]
 2c33680: f940e129     	ldr	x9, [x9, #0x1c0]
 2c33684: aa1f03e2     	mov	x2, xzr
 2c33688: f9400108     	ldr	x8, [x8]
 2c3368c: f9400120     	ldr	x0, [x9]
 2c33690: f90057e8     	str	x8, [sp, #0xa8]
 2c33694: 948cd5c3     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c33698: aa0003f4     	mov	x20, x0
 2c3369c: f9404e60     	ldr	x0, [x19, #0x98]
 2c336a0: b4000320     	cbz	x0, 0x2c33704 <__start_il2cpp+0x16b0f0>
 2c336a4: aa1f03e1     	mov	x1, xzr
 2c336a8: 97fd1cdf     	bl	0x2b7aa24 <__start_il2cpp+0xb2410>
 2c336ac: f9400e68     	ldr	x8, [x19, #0x18]
 2c336b0: b40002a8     	cbz	x8, 0x2c33704 <__start_il2cpp+0x16b0f0>
 2c336b4: aa0003f3     	mov	x19, x0
 2c336b8: f9402d00     	ldr	x0, [x8, #0x58]
 2c336bc: b4000240     	cbz	x0, 0x2c33704 <__start_il2cpp+0x16b0f0>
 2c336c0: aa1f03e1     	mov	x1, xzr
 2c336c4: 97fc728c     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c336c8: f94057e2     	ldr	x2, [sp, #0xa8]
 2c336cc: 11000401     	add	w1, w0, #0x1
 2c336d0: aa1303e0     	mov	x0, x19
 2c336d4: aa1403e3     	mov	x3, x20
 2c336d8: aa1f03e4     	mov	x4, xzr
 2c336dc: 9400c871     	bl	0x2c658a0 <__start_il2cpp+0x19d28c>
 2c336e0: a9504ff4     	ldp	x20, x19, [sp, #0x100]
 2c336e4: a94f57f6     	ldp	x22, x21, [sp, #0xf0]
 2c336e8: a94e5ff8     	ldp	x24, x23, [sp, #0xe0]
 2c336ec: a94d67fa     	ldp	x26, x25, [sp, #0xd0]
 2c336f0: a94c6ffc     	ldp	x28, x27, [sp, #0xc0]
 2c336f4: a94b7bfd     	ldp	x29, x30, [sp, #0xb0]
 2c336f8: 910443ff     	add	sp, sp, #0x110
 2c336fc: d65f03c0     	ret
 2c33700: 97f68e62     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c33704: 97f68e61     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c33708: 14000010     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c3370c: 1400000f     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33710: 1400000e     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33714: 1400000d     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33718: 1400000c     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c3371c: 1400000b     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33720: 1400000a     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33724: 14000009     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33728: 14000008     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c3372c: 14000007     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33730: 14000006     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33734: 14000005     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33738: 14000004     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c3373c: 14000003     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33740: 14000002     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33744: 14000001     	b	0x2c33748 <__start_il2cpp+0x16b134>
 2c33748: aa0003f6     	mov	x22, x0
 2c3374c: 7100043f     	cmp	w1, #0x1
 2c33750: 540001e1     	b.ne	0x2c3378c <__start_il2cpp+0x16b178>
 2c33754: aa1603e0     	mov	x0, x22
 2c33758: 94cbcbfa     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c3375c: f9400016     	ldr	x22, [x0]
 2c33760: f9002bf6     	str	x22, [sp, #0x50]
 2c33764: 94cbcbfb     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c33768: f001b648     	adrp	x8, 0x62fe000
 2c3376c: f9402fe0     	ldr	x0, [sp, #0x58]
 2c33770: f940c108     	ldr	x8, [x8, #0x180]
 2c33774: f9400101     	ldr	x1, [x8]
 2c33778: 94796660     	bl	0x4a8d0f8 <__start_il2cpp+0x1fc4ae4>
 2c3377c: b4fff676     	cbz	x22, 0x2c33648 <__start_il2cpp+0x16b034>
 2c33780: aa1603e0     	mov	x0, x22
 2c33784: 97f68e3f     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2c33788: aa0003f6     	mov	x22, x0
 2c3378c: 910143e0     	add	x0, sp, #0x50
 2c33790: 97e9da30     	bl	0x26aa050 <.text+0x4ef0>
 2c33794: aa1603e0     	mov	x0, x22
 2c33798: 97fa43d1     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c3379c: 97e9c8ac     	bl	0x26a5a4c <.text+0x8ec>

# MergeFeverEventController :: System.Void OnMergeFeverCountChanged(System.Boolean rewardReadyToBeClaimed)
# VA 0x2c337a0 .. 0x2c337c0 (next mapped method entry)
 2c337a0: f9404808     	ldr	x8, [x0, #0x90]
 2c337a4: b40000c8     	cbz	x8, 0x2c337bc <__start_il2cpp+0x16b1a8>
 2c337a8: f9402100     	ldr	x0, [x8, #0x40]
 2c337ac: f9401502     	ldr	x2, [x8, #0x28]
 2c337b0: 12000021     	and	w1, w1, #0x1
 2c337b4: f9400d03     	ldr	x3, [x8, #0x18]
 2c337b8: d61f0060     	br	x3
 2c337bc: d65f03c0     	ret

# MergeFeverEventController :: System.Boolean CheckMergeFeverNotification()
# VA 0x2c337c0 .. 0x2c338d0 (next mapped method entry)
 2c337c0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c337c4: 3942a408     	ldrb	w8, [x0, #0xa9]
 2c337c8: 34000648     	cbz	w8, 0x2c33890 <__start_il2cpp+0x16b27c>
 2c337cc: aa0003f3     	mov	x19, x0
 2c337d0: 97fffbc8     	bl	0x2c326f0 <__start_il2cpp+0x16a0dc>
 2c337d4: 360005c0     	tbz	w0, #0x0, 0x2c3388c <__start_il2cpp+0x16b278>
 2c337d8: aa1303e0     	mov	x0, x19
 2c337dc: 97fffbf1     	bl	0x2c327a0 <__start_il2cpp+0x16a18c>
 2c337e0: 36000560     	tbz	w0, #0x0, 0x2c3388c <__start_il2cpp+0x16b278>
 2c337e4: f9400e68     	ldr	x8, [x19, #0x18]
 2c337e8: b4000188     	cbz	x8, 0x2c33818 <__start_il2cpp+0x16b204>
 2c337ec: f9402d00     	ldr	x0, [x8, #0x58]
 2c337f0: b4000140     	cbz	x0, 0x2c33818 <__start_il2cpp+0x16b204>
 2c337f4: aa1f03e1     	mov	x1, xzr
 2c337f8: 97fc72a3     	bl	0x2b50284 <__start_il2cpp+0x87c70>
 2c337fc: 37000480     	tbnz	w0, #0x0, 0x2c3388c <__start_il2cpp+0x16b278>
 2c33800: f9404e60     	ldr	x0, [x19, #0x98]
 2c33804: b4000440     	cbz	x0, 0x2c3388c <__start_il2cpp+0x16b278>
 2c33808: aa1f03e1     	mov	x1, xzr
 2c3380c: 97fd1d30     	bl	0x2b7accc <__start_il2cpp+0xb26b8>
 2c33810: 52000008     	eor	w8, w0, #0x1
 2c33814: 1400001f     	b	0x2c33890 <__start_il2cpp+0x16b27c>
 2c33818: 97f68e1c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c3381c: 14000004     	b	0x2c3382c <__start_il2cpp+0x16b218>
 2c33820: 14000003     	b	0x2c3382c <__start_il2cpp+0x16b218>
 2c33824: 14000002     	b	0x2c3382c <__start_il2cpp+0x16b218>
 2c33828: 14000001     	b	0x2c3382c <__start_il2cpp+0x16b218>
 2c3382c: aa0003f3     	mov	x19, x0
 2c33830: 7100043f     	cmp	w1, #0x1
 2c33834: 54000481     	b.ne	0x2c338c4 <__start_il2cpp+0x16b2b0>
 2c33838: aa1303e0     	mov	x0, x19
 2c3383c: 94cbcbc1     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c33840: aa0003f3     	mov	x19, x0
 2c33844: b001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c33848: f946f000     	ldr	x0, [x0, #0xde0]
 2c3384c: 97f68d6a     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c33850: f9400268     	ldr	x8, [x19]
 2c33854: f9400101     	ldr	x1, [x8]
 2c33858: 97f68f0e     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2c3385c: 36000200     	tbz	w0, #0x0, 0x2c3389c <__start_il2cpp+0x16b288>
 2c33860: f9400273     	ldr	x19, [x19]
 2c33864: 94cbcbbb     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c33868: b001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c3386c: f946e800     	ldr	x0, [x0, #0xdd0]
 2c33870: 97f68d61     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c33874: b940e408     	ldr	w8, [x0, #0xe4]
 2c33878: 35000048     	cbnz	w8, 0x2c33880 <__start_il2cpp+0x16b26c>
 2c3387c: 97f68db8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c33880: aa1303e0     	mov	x0, x19
 2c33884: aa1f03e1     	mov	x1, xzr
 2c33888: 94bb243a     	bl	0x5afc970 <__start_il2cpp+0x303435c>
 2c3388c: 2a1f03e8     	mov	w8, wzr
 2c33890: 12000100     	and	w0, w8, #0x1
 2c33894: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c33898: d65f03c0     	ret
 2c3389c: 52800100     	mov	w0, #0x8                // =8
 2c338a0: 94cbcbc8     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2c338a4: f9400268     	ldr	x8, [x19]
 2c338a8: f9000008     	str	x8, [x0]
 2c338ac: b00197c1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2c338b0: 91302021     	add	x1, x1, #0xc08
 2c338b4: aa1f03e2     	mov	x2, xzr
 2c338b8: 94cbcbc6     	bl	0x5f267d0 <__cxa_throw@plt>
 2c338bc: aa0003f3     	mov	x19, x0
 2c338c0: 94cbcba4     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c338c4: aa1303e0     	mov	x0, x19
 2c338c8: 97fa4385     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c338cc: 97e9c860     	bl	0x26a5a4c <.text+0x8ec>

# MergeFeverEventController :: System.Void ShowNextReward()
# VA 0x2c338d0 .. 0x2c3399c (next mapped method entry)
 2c338d0: d10103ff     	sub	sp, sp, #0x40
 2c338d4: a90257fe     	stp	x30, x21, [sp, #0x20]
 2c338d8: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c338dc: f001d6f3     	adrp	x19, 0x6712000
 2c338e0: aa0003f4     	mov	x20, x0
 2c338e4: 3973a668     	ldrb	w8, [x19, #0xce9]
 2c338e8: 37000128     	tbnz	w8, #0x0, 0x2c3390c <__start_il2cpp+0x16b2f8>
 2c338ec: f001b640     	adrp	x0, 0x62fe000
 2c338f0: f940e800     	ldr	x0, [x0, #0x1d0]
 2c338f4: 97f68d3b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c338f8: f001b640     	adrp	x0, 0x62fe000
 2c338fc: f940ec00     	ldr	x0, [x0, #0x1d8]
 2c33900: 97f68d38     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33904: 52800028     	mov	w8, #0x1                // =1
 2c33908: 3933a668     	strb	w8, [x19, #0xce9]
 2c3390c: aa1403e0     	mov	x0, x20
 2c33910: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2c33914: 97fffb90     	bl	0x2c32754 <__start_il2cpp+0x16a140>
 2c33918: 360000c0     	tbz	w0, #0x0, 0x2c33930 <__start_il2cpp+0x16b31c>
 2c3391c: aa1403e0     	mov	x0, x20
 2c33920: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c33924: a94257fe     	ldp	x30, x21, [sp, #0x20]
 2c33928: 910103ff     	add	sp, sp, #0x40
 2c3392c: 1400001c     	b	0x2c3399c <__start_il2cpp+0x16b388>
 2c33930: f001b655     	adrp	x21, 0x62fe000
 2c33934: aa1403e0     	mov	x0, x20
 2c33938: f940eab5     	ldr	x21, [x21, #0x1d0]
 2c3393c: f9400a93     	ldr	x19, [x20, #0x10]
 2c33940: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2c33944: 97fffb4f     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c33948: f94002a8     	ldr	x8, [x21]
 2c3394c: a90007e0     	stp	x0, x1, [sp]
 2c33950: 910003e1     	mov	x1, sp
 2c33954: aa0803e0     	mov	x0, x8
 2c33958: 97f68d83     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c3395c: aa0003e1     	mov	x1, x0
 2c33960: f9000be0     	str	x0, [sp, #0x10]
 2c33964: 910043e0     	add	x0, sp, #0x10
 2c33968: 97f68d09     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c3396c: b4000173     	cbz	x19, 0x2c33998 <__start_il2cpp+0x16b384>
 2c33970: f001b648     	adrp	x8, 0x62fe000
 2c33974: aa1303e0     	mov	x0, x19
 2c33978: f940ed08     	ldr	x8, [x8, #0x1d8]
 2c3397c: a9410be1     	ldp	x1, x2, [sp, #0x10]
 2c33980: f9400103     	ldr	x3, [x8]
 2c33984: 9427bd11     	bl	0x3622dc8 <__start_il2cpp+0xb5a7b4>
 2c33988: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c3398c: a94257fe     	ldp	x30, x21, [sp, #0x20]
 2c33990: 910103ff     	add	sp, sp, #0x40
 2c33994: d65f03c0     	ret
 2c33998: 97f68dbc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void DisableMergeFever()
# VA 0x2c3399c .. 0x2c339c4 (next mapped method entry)
 2c3399c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c339a0: aa0003f3     	mov	x19, x0
 2c339a4: f9404c00     	ldr	x0, [x0, #0x98]
 2c339a8: b4000080     	cbz	x0, 0x2c339b8 <__start_il2cpp+0x16b3a4>
 2c339ac: 2a1f03e1     	mov	w1, wzr
 2c339b0: aa1f03e2     	mov	x2, xzr
 2c339b4: 97fd1c30     	bl	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c339b8: aa1303e0     	mov	x0, x19
 2c339bc: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c339c0: 140002c7     	b	0x2c344dc <__start_il2cpp+0x16bec8>

# MergeFeverEventController :: System.Void CheckDoubleMergeIsActive()
# VA 0x2c339c4 .. 0x2c33aec (next mapped method entry)
 2c339c4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c339c8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c339cc: f9400c08     	ldr	x8, [x0, #0x18]
 2c339d0: b40008c8     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c339d4: aa0003f3     	mov	x19, x0
 2c339d8: f9402d00     	ldr	x0, [x8, #0x58]
 2c339dc: b4000860     	cbz	x0, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c339e0: aa1f03e1     	mov	x1, xzr
 2c339e4: 97fc71b2     	bl	0x2b500ac <__start_il2cpp+0x87a98>
 2c339e8: aa1f03e1     	mov	x1, xzr
 2c339ec: 94004b2e     	bl	0x2c466a4 <__start_il2cpp+0x17e090>
 2c339f0: aa1f03e2     	mov	x2, xzr
 2c339f4: 94000bee     	bl	0x2c369ac <__start_il2cpp+0x16e398>
 2c339f8: f9400e68     	ldr	x8, [x19, #0x18]
 2c339fc: b4000768     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a00: aa0003f4     	mov	x20, x0
 2c33a04: f9402d00     	ldr	x0, [x8, #0x58]
 2c33a08: b4000700     	cbz	x0, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a0c: aa1f03e1     	mov	x1, xzr
 2c33a10: 97fc71ad     	bl	0x2b500c4 <__start_il2cpp+0x87ab0>
 2c33a14: eb20c29f     	cmp	x20, w0, sxtw
 2c33a18: 5400060a     	b.ge	0x2c33ad8 <__start_il2cpp+0x16b4c4>
 2c33a1c: f9400e68     	ldr	x8, [x19, #0x18]
 2c33a20: 52800029     	mov	w9, #0x1                // =1
 2c33a24: 3901a269     	strb	w9, [x19, #0x68]
 2c33a28: b4000608     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a2c: f9402d00     	ldr	x0, [x8, #0x58]
 2c33a30: b40005c0     	cbz	x0, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a34: aa1f03e1     	mov	x1, xzr
 2c33a38: 97fc719d     	bl	0x2b500ac <__start_il2cpp+0x87a98>
 2c33a3c: aa1f03e1     	mov	x1, xzr
 2c33a40: 94004b19     	bl	0x2c466a4 <__start_il2cpp+0x17e090>
 2c33a44: f9400e68     	ldr	x8, [x19, #0x18]
 2c33a48: a9070660     	stp	x0, x1, [x19, #0x70]
 2c33a4c: b40004e8     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a50: f9402d00     	ldr	x0, [x8, #0x58]
 2c33a54: b40004a0     	cbz	x0, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a58: aa1f03e1     	mov	x1, xzr
 2c33a5c: 97fc719a     	bl	0x2b500c4 <__start_il2cpp+0x87ab0>
 2c33a60: f9400e68     	ldr	x8, [x19, #0x18]
 2c33a64: b9008260     	str	w0, [x19, #0x80]
 2c33a68: b4000408     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a6c: f9402d00     	ldr	x0, [x8, #0x58]
 2c33a70: b40003c0     	cbz	x0, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33a74: aa1f03e1     	mov	x1, xzr
 2c33a78: 97fc7193     	bl	0x2b500c4 <__start_il2cpp+0x87ab0>
 2c33a7c: a9470668     	ldp	x8, x1, [x19, #0x70]
 2c33a80: 2a0003f4     	mov	w20, w0
 2c33a84: aa1f03e2     	mov	x2, xzr
 2c33a88: aa0803e0     	mov	x0, x8
 2c33a8c: 94000bc8     	bl	0x2c369ac <__start_il2cpp+0x16e398>
 2c33a90: f9400e68     	ldr	x8, [x19, #0x18]
 2c33a94: 4b000289     	sub	w9, w20, w0
 2c33a98: b9008669     	str	w9, [x19, #0x84]
 2c33a9c: b4000268     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33aa0: f9402d00     	ldr	x0, [x8, #0x58]
 2c33aa4: b4000220     	cbz	x0, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33aa8: aa1f03e1     	mov	x1, xzr
 2c33aac: 97fc718c     	bl	0x2b500dc <__start_il2cpp+0x87ac8>
 2c33ab0: f9401668     	ldr	x8, [x19, #0x28]
 2c33ab4: b9008a60     	str	w0, [x19, #0x88]
 2c33ab8: b4000188     	cbz	x8, 0x2c33ae8 <__start_il2cpp+0x16b4d4>
 2c33abc: aa0803e0     	mov	x0, x8
 2c33ac0: aa1f03e1     	mov	x1, xzr
 2c33ac4: 940016d9     	bl	0x2c39628 <__start_il2cpp+0x171014>
 2c33ac8: aa1303e0     	mov	x0, x19
 2c33acc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33ad0: f84207fe     	ldr	x30, [sp], #0x20
 2c33ad4: 14000043     	b	0x2c33be0 <__start_il2cpp+0x16b5cc>
 2c33ad8: aa1303e0     	mov	x0, x19
 2c33adc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33ae0: f84207fe     	ldr	x30, [sp], #0x20
 2c33ae4: 14000002     	b	0x2c33aec <__start_il2cpp+0x16b4d8>
 2c33ae8: 97f68d68     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void DisableDoubleMerge()
# VA 0x2c33aec .. 0x2c33be0 (next mapped method entry)
 2c33aec: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c33af0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c33af4: f001d6f4     	adrp	x20, 0x6712000
 2c33af8: aa0003f3     	mov	x19, x0
 2c33afc: 3973be88     	ldrb	w8, [x20, #0xcef]
 2c33b00: 370000c8     	tbnz	w8, #0x0, 0x2c33b18 <__start_il2cpp+0x16b504>
 2c33b04: b001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c33b08: f9478c00     	ldr	x0, [x0, #0xf18]
 2c33b0c: 97f68cb5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33b10: 52800028     	mov	w8, #0x1                // =1
 2c33b14: 3933be88     	strb	w8, [x20, #0xcef]
 2c33b18: 52800028     	mov	w8, #0x1                // =1
 2c33b1c: aa1f03e0     	mov	x0, xzr
 2c33b20: 3901a27f     	strb	wzr, [x19, #0x68]
 2c33b24: b9008a68     	str	w8, [x19, #0x88]
 2c33b28: 94004a9f     	bl	0x2c465a4 <__start_il2cpp+0x17df90>
 2c33b2c: f9400e68     	ldr	x8, [x19, #0x18]
 2c33b30: a9070660     	stp	x0, x1, [x19, #0x70]
 2c33b34: f900427f     	str	xzr, [x19, #0x80]
 2c33b38: b4000528     	cbz	x8, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33b3c: f9402d00     	ldr	x0, [x8, #0x58]
 2c33b40: b40004e0     	cbz	x0, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33b44: aa1f03e1     	mov	x1, xzr
 2c33b48: aa1f03e2     	mov	x2, xzr
 2c33b4c: 97fc723c     	bl	0x2b5043c <__start_il2cpp+0x87e28>
 2c33b50: f9400e68     	ldr	x8, [x19, #0x18]
 2c33b54: b4000448     	cbz	x8, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33b58: f9402d00     	ldr	x0, [x8, #0x58]
 2c33b5c: b4000400     	cbz	x0, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33b60: 2a1f03e1     	mov	w1, wzr
 2c33b64: aa1f03e2     	mov	x2, xzr
 2c33b68: 97fc7244     	bl	0x2b50478 <__start_il2cpp+0x87e64>
 2c33b6c: f9400e68     	ldr	x8, [x19, #0x18]
 2c33b70: b4000368     	cbz	x8, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33b74: f9402d00     	ldr	x0, [x8, #0x58]
 2c33b78: b4000320     	cbz	x0, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33b7c: b001b5f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c33b80: 52800021     	mov	w1, #0x1                // =1
 2c33b84: aa1f03e2     	mov	x2, xzr
 2c33b88: f9478e94     	ldr	x20, [x20, #0xf18]
 2c33b8c: 97fc724a     	bl	0x2b504b4 <__start_il2cpp+0x87ea0>
 2c33b90: f9400280     	ldr	x0, [x20]
 2c33b94: f9401674     	ldr	x20, [x19, #0x28]
 2c33b98: b940e408     	ldr	w8, [x0, #0xe4]
 2c33b9c: 35000048     	cbnz	w8, 0x2c33ba4 <__start_il2cpp+0x16b590>
 2c33ba0: 97f68cef     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c33ba4: aa1403e0     	mov	x0, x20
 2c33ba8: aa1f03e1     	mov	x1, xzr
 2c33bac: aa1f03e2     	mov	x2, xzr
 2c33bb0: 94bc4a92     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c33bb4: 36000080     	tbz	w0, #0x0, 0x2c33bc4 <__start_il2cpp+0x16b5b0>
 2c33bb8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33bbc: f84207fe     	ldr	x30, [sp], #0x20
 2c33bc0: d65f03c0     	ret
 2c33bc4: f9401660     	ldr	x0, [x19, #0x28]
 2c33bc8: b40000a0     	cbz	x0, 0x2c33bdc <__start_il2cpp+0x16b5c8>
 2c33bcc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33bd0: aa1f03e1     	mov	x1, xzr
 2c33bd4: f84207fe     	ldr	x30, [sp], #0x20
 2c33bd8: 140016b0     	b	0x2c39698 <__start_il2cpp+0x171084>
 2c33bdc: 97f68d2b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void DoubleMergeDeactivateCoroutine()
# VA 0x2c33be0 .. 0x2c33c84 (next mapped method entry)
 2c33be0: d10203ff     	sub	sp, sp, #0x80
 2c33be4: a90657fe     	stp	x30, x21, [sp, #0x60]
 2c33be8: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2c33bec: f001d6f5     	adrp	x21, 0x6712000
 2c33bf0: f001b654     	adrp	x20, 0x62fe000
 2c33bf4: aa0003f3     	mov	x19, x0
 2c33bf8: 3973baa8     	ldrb	w8, [x21, #0xcee]
 2c33bfc: f940f294     	ldr	x20, [x20, #0x1e0]
 2c33c00: 370000c8     	tbnz	w8, #0x0, 0x2c33c18 <__start_il2cpp+0x16b604>
 2c33c04: f001b640     	adrp	x0, 0x62fe000
 2c33c08: f940f000     	ldr	x0, [x0, #0x1e0]
 2c33c0c: 97f68c75     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33c10: 52800028     	mov	w8, #0x1                // =1
 2c33c14: 3933baa8     	strb	w8, [x21, #0xcee]
 2c33c18: 6f00e400     	movi	v0.2d, #0000000000000000
 2c33c1c: 910003e8     	mov	x8, sp
 2c33c20: aa1f03e0     	mov	x0, xzr
 2c33c24: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c33c28: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2c33c2c: 948f9a31     	bl	0x501a4f0 <__start_il2cpp+0x2551edc>
 2c33c30: ad4007e0     	ldp	q0, q1, [sp]
 2c33c34: 910083f5     	add	x21, sp, #0x20
 2c33c38: b27d02a0     	orr	x0, x21, #0x8
 2c33c3c: aa1f03e1     	mov	x1, xzr
 2c33c40: 3c8283e0     	stur	q0, [sp, #0x28]
 2c33c44: 3c8383e1     	stur	q1, [sp, #0x38]
 2c33c48: 97f68c51     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33c4c: 9100a2a0     	add	x0, x21, #0x28
 2c33c50: aa1303e1     	mov	x1, x19
 2c33c54: f90027f3     	str	x19, [sp, #0x48]
 2c33c58: 97f68c4d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33c5c: f9400282     	ldr	x2, [x20]
 2c33c60: 12800008     	mov	w8, #-0x1               // =-1
 2c33c64: b27d02a0     	orr	x0, x21, #0x8
 2c33c68: 910083e1     	add	x1, sp, #0x20
 2c33c6c: b90023e8     	str	w8, [sp, #0x20]
 2c33c70: 941c2e15     	bl	0x333f4c4 <__start_il2cpp+0x876eb0>
 2c33c74: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2c33c78: a94657fe     	ldp	x30, x21, [sp, #0x60]
 2c33c7c: 910203ff     	add	sp, sp, #0x80
 2c33c80: d65f03c0     	ret

# MergeFeverEventController :: System.Void OnRewardCollected()
# VA 0x2c33c84 .. 0x2c33cdc (next mapped method entry)
 2c33c84: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c33c88: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c33c8c: aa0003f3     	mov	x19, x0
 2c33c90: f9404c00     	ldr	x0, [x0, #0x98]
 2c33c94: b40001c0     	cbz	x0, 0x2c33ccc <__start_il2cpp+0x16b6b8>
 2c33c98: aa1f03e1     	mov	x1, xzr
 2c33c9c: 97fd1b6e     	bl	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c33ca0: 36000160     	tbz	w0, #0x0, 0x2c33ccc <__start_il2cpp+0x16b6b8>
 2c33ca4: f9401674     	ldr	x20, [x19, #0x28]
 2c33ca8: aa1303e0     	mov	x0, x19
 2c33cac: 97fffcca     	bl	0x2c32fd4 <__start_il2cpp+0x16a9c0>
 2c33cb0: b4000154     	cbz	x20, 0x2c33cd8 <__start_il2cpp+0x16b6c4>
 2c33cb4: 2a0003e1     	mov	w1, w0
 2c33cb8: aa1403e0     	mov	x0, x20
 2c33cbc: aa1f03e2     	mov	x2, xzr
 2c33cc0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33cc4: f84207fe     	ldr	x30, [sp], #0x20
 2c33cc8: 140016c0     	b	0x2c397c8 <__start_il2cpp+0x1711b4>
 2c33ccc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33cd0: f84207fe     	ldr	x30, [sp], #0x20
 2c33cd4: d65f03c0     	ret
 2c33cd8: 97f68cec     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void UpdateMergeFeverViewer()
# VA 0x2c33cdc .. 0x2c33d10 (next mapped method entry)
 2c33cdc: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c33ce0: f9401413     	ldr	x19, [x0, #0x28]
 2c33ce4: 97fffa67     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c33ce8: b4000133     	cbz	x19, 0x2c33d0c <__start_il2cpp+0x16b6f8>
 2c33cec: aa0003e2     	mov	x2, x0
 2c33cf0: aa0103e3     	mov	x3, x1
 2c33cf4: aa1303e0     	mov	x0, x19
 2c33cf8: aa0203e1     	mov	x1, x2
 2c33cfc: aa0303e2     	mov	x2, x3
 2c33d00: aa1f03e3     	mov	x3, xzr
 2c33d04: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c33d08: 1400153f     	b	0x2c39204 <__start_il2cpp+0x170bf0>
 2c33d0c: 97f68cdf     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void OnLevelUpPopupClosed()
# VA 0x2c33d10 .. 0x2c33d48 (next mapped method entry)
 2c33d10: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c33d14: aa0003f3     	mov	x19, x0
 2c33d18: 97fffa76     	bl	0x2c326f0 <__start_il2cpp+0x16a0dc>
 2c33d1c: 360000c0     	tbz	w0, #0x0, 0x2c33d34 <__start_il2cpp+0x16b720>
 2c33d20: f9404e60     	ldr	x0, [x19, #0x98]
 2c33d24: b40000c0     	cbz	x0, 0x2c33d3c <__start_il2cpp+0x16b728>
 2c33d28: aa1f03e1     	mov	x1, xzr
 2c33d2c: 97fd1b4a     	bl	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c33d30: 36000060     	tbz	w0, #0x0, 0x2c33d3c <__start_il2cpp+0x16b728>
 2c33d34: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c33d38: d65f03c0     	ret
 2c33d3c: aa1303e0     	mov	x0, x19
 2c33d40: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c33d44: 17fffc56     	b	0x2c32e9c <__start_il2cpp+0x16a888>

# MergeFeverEventController :: System.Boolean TryShowPopup()
# VA 0x2c33d48 .. 0x2c33f38 (next mapped method entry)
 2c33d48: d10303ff     	sub	sp, sp, #0xc0
 2c33d4c: a9095ffe     	stp	x30, x23, [sp, #0x90]
 2c33d50: a90a57f6     	stp	x22, x21, [sp, #0xa0]
 2c33d54: a90b4ff4     	stp	x20, x19, [sp, #0xb0]
 2c33d58: f001d6f3     	adrp	x19, 0x6712000
 2c33d5c: aa0003f4     	mov	x20, x0
 2c33d60: 3973b668     	ldrb	w8, [x19, #0xced]
 2c33d64: 37000248     	tbnz	w8, #0x0, 0x2c33dac <__start_il2cpp+0x16b798>
 2c33d68: f001b5e0     	adrp	x0, 0x62f2000
 2c33d6c: f943f000     	ldr	x0, [x0, #0x7e0]
 2c33d70: 97f68c1c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33d74: f001b640     	adrp	x0, 0x62fe000
 2c33d78: f940f400     	ldr	x0, [x0, #0x1e8]
 2c33d7c: 97f68c19     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33d80: f001b640     	adrp	x0, 0x62fe000
 2c33d84: f940f800     	ldr	x0, [x0, #0x1f0]
 2c33d88: 97f68c16     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33d8c: f001b640     	adrp	x0, 0x62fe000
 2c33d90: f940fc00     	ldr	x0, [x0, #0x1f8]
 2c33d94: 97f68c13     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33d98: f001b640     	adrp	x0, 0x62fe000
 2c33d9c: f9410000     	ldr	x0, [x0, #0x200]
 2c33da0: 97f68c10     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c33da4: 52800028     	mov	w8, #0x1                // =1
 2c33da8: 3933b668     	strb	w8, [x19, #0xced]
 2c33dac: 6f00e400     	movi	v0.2d, #0000000000000000
 2c33db0: aa1403e0     	mov	x0, x20
 2c33db4: a9087fff     	stp	xzr, xzr, [sp, #0x80]
 2c33db8: f9003bff     	str	xzr, [sp, #0x70]
 2c33dbc: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c33dc0: 3d8013e0     	str	q0, [sp, #0x40]
 2c33dc4: 940001df     	bl	0x2c34540 <__start_il2cpp+0x16bf2c>
 2c33dc8: 2a0003f3     	mov	w19, w0
 2c33dcc: 36000a80     	tbz	w0, #0x0, 0x2c33f1c <__start_il2cpp+0x16b908>
 2c33dd0: f9404e80     	ldr	x0, [x20, #0x98]
 2c33dd4: b4000b00     	cbz	x0, 0x2c33f34 <__start_il2cpp+0x16b920>
 2c33dd8: aa1f03e1     	mov	x1, xzr
 2c33ddc: 97fd1b12     	bl	0x2b7aa24 <__start_il2cpp+0xb2410>
 2c33de0: f001b648     	adrp	x8, 0x62fe000
 2c33de4: 2a1f03e1     	mov	w1, wzr
 2c33de8: aa1f03e3     	mov	x3, xzr
 2c33dec: f9410108     	ldr	x8, [x8, #0x200]
 2c33df0: f9400102     	ldr	x2, [x8]
 2c33df4: 9400c678     	bl	0x2c657d4 <__start_il2cpp+0x19d1c0>
 2c33df8: f9400e88     	ldr	x8, [x20, #0x18]
 2c33dfc: b40009c8     	cbz	x8, 0x2c33f34 <__start_il2cpp+0x16b920>
 2c33e00: f9402d00     	ldr	x0, [x8, #0x58]
 2c33e04: b4000980     	cbz	x0, 0x2c33f34 <__start_il2cpp+0x16b920>
 2c33e08: 52800021     	mov	w1, #0x1                // =1
 2c33e0c: aa1f03e2     	mov	x2, xzr
 2c33e10: 97fc7145     	bl	0x2b50324 <__start_il2cpp+0x87d10>
 2c33e14: 6f00e400     	movi	v0.2d, #0000000000000000
 2c33e18: 3942a288     	ldrb	w8, [x20, #0xa8]
 2c33e1c: f9400a95     	ldr	x21, [x20, #0x10]
 2c33e20: aa1403e0     	mov	x0, x20
 2c33e24: a9087fff     	stp	xzr, xzr, [sp, #0x80]
 2c33e28: f9003bff     	str	xzr, [sp, #0x70]
 2c33e2c: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2c33e30: 3d801be0     	str	q0, [sp, #0x60]
 2c33e34: 390103e8     	strb	w8, [sp, #0x40]
 2c33e38: 97fffc9c     	bl	0x2c330a8 <__start_il2cpp+0x16aa94>
 2c33e3c: b9004be0     	str	w0, [sp, #0x48]
 2c33e40: aa1403e0     	mov	x0, x20
 2c33e44: 97fffc64     	bl	0x2c32fd4 <__start_il2cpp+0x16a9c0>
 2c33e48: b90047e0     	str	w0, [sp, #0x44]
 2c33e4c: aa1403e0     	mov	x0, x20
 2c33e50: 97fffa0c     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c33e54: 910103f7     	add	x23, sp, #0x40
 2c33e58: a90507e0     	stp	x0, x1, [sp, #0x50]
 2c33e5c: aa1f03e1     	mov	x1, xzr
 2c33e60: 910062e0     	add	x0, x23, #0x18
 2c33e64: 97f68bca     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33e68: f9403280     	ldr	x0, [x20, #0x60]
 2c33e6c: b4000640     	cbz	x0, 0x2c33f34 <__start_il2cpp+0x16b920>
 2c33e70: aa1f03e1     	mov	x1, xzr
 2c33e74: 9404af5b     	bl	0x2d5fbe0 <__start_il2cpp+0x2975cc>
 2c33e78: a90687e0     	stp	x0, x1, [sp, #0x68]
 2c33e7c: 9100c2e0     	add	x0, x23, #0x30
 2c33e80: aa1f03e1     	mov	x1, xzr
 2c33e84: 97f68bc2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33e88: f001b5e8     	adrp	x8, 0x62f2000
 2c33e8c: f943f108     	ldr	x8, [x8, #0x7e0]
 2c33e90: f9400100     	ldr	x0, [x8]
 2c33e94: 97f68c79     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c33e98: f001b648     	adrp	x8, 0x62fe000
 2c33e9c: aa1403e1     	mov	x1, x20
 2c33ea0: aa1f03e3     	mov	x3, xzr
 2c33ea4: f940f508     	ldr	x8, [x8, #0x1e8]
 2c33ea8: aa0003f6     	mov	x22, x0
 2c33eac: f9400102     	ldr	x2, [x8]
 2c33eb0: 9490b99e     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c33eb4: 910082e0     	add	x0, x23, #0x20
 2c33eb8: aa1603e1     	mov	x1, x22
 2c33ebc: f90033f6     	str	x22, [sp, #0x60]
 2c33ec0: 97f68bb3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33ec4: f001b648     	adrp	x8, 0x62fe000
 2c33ec8: ad4207e0     	ldp	q0, q1, [sp, #0x40]
 2c33ecc: 3dc01be2     	ldr	q2, [sp, #0x60]
 2c33ed0: f940f908     	ldr	x8, [x8, #0x1f0]
 2c33ed4: 910003e1     	mov	x1, sp
 2c33ed8: f9403be9     	ldr	x9, [sp, #0x70]
 2c33edc: f9400100     	ldr	x0, [x8]
 2c33ee0: ad0007e0     	stp	q0, q1, [sp]
 2c33ee4: 3d800be2     	str	q2, [sp, #0x20]
 2c33ee8: f9001be9     	str	x9, [sp, #0x30]
 2c33eec: 97f68c1e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c33ef0: aa0003e1     	mov	x1, x0
 2c33ef4: f90043e0     	str	x0, [sp, #0x80]
 2c33ef8: 910203e0     	add	x0, sp, #0x80
 2c33efc: 97f68ba4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c33f00: b40001b5     	cbz	x21, 0x2c33f34 <__start_il2cpp+0x16b920>
 2c33f04: f001b648     	adrp	x8, 0x62fe000
 2c33f08: aa1503e0     	mov	x0, x21
 2c33f0c: f940fd08     	ldr	x8, [x8, #0x1f8]
 2c33f10: a9480be1     	ldp	x1, x2, [sp, #0x80]
 2c33f14: f9400103     	ldr	x3, [x8]
 2c33f18: 9427bbac     	bl	0x3622dc8 <__start_il2cpp+0xb5a7b4>
 2c33f1c: 12000260     	and	w0, w19, #0x1
 2c33f20: a94b4ff4     	ldp	x20, x19, [sp, #0xb0]
 2c33f24: a94a57f6     	ldp	x22, x21, [sp, #0xa0]
 2c33f28: a9495ffe     	ldp	x30, x23, [sp, #0x90]
 2c33f2c: 910303ff     	add	sp, sp, #0xc0
 2c33f30: d65f03c0     	ret
 2c33f34: 97f68c55     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void CalculateLevelIndex()
# VA 0x2c33f38 .. 0x2c33fd4 (next mapped method entry)
 2c33f38: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c33f3c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c33f40: f9400c08     	ldr	x8, [x0, #0x18]
 2c33f44: b9000fff     	str	wzr, [sp, #0xc]
 2c33f48: b4000448     	cbz	x8, 0x2c33fd0 <__start_il2cpp+0x16b9bc>
 2c33f4c: aa0003f3     	mov	x19, x0
 2c33f50: f9402d00     	ldr	x0, [x8, #0x58]
 2c33f54: b40003e0     	cbz	x0, 0x2c33fd0 <__start_il2cpp+0x16b9bc>
 2c33f58: f9403274     	ldr	x20, [x19, #0x60]
 2c33f5c: aa1f03e1     	mov	x1, xzr
 2c33f60: 97fc704d     	bl	0x2b50094 <__start_il2cpp+0x87a80>
 2c33f64: b4000374     	cbz	x20, 0x2c33fd0 <__start_il2cpp+0x16b9bc>
 2c33f68: 2a0003e1     	mov	w1, w0
 2c33f6c: 910033e2     	add	x2, sp, #0xc
 2c33f70: aa1403e0     	mov	x0, x20
 2c33f74: aa1f03e3     	mov	x3, xzr
 2c33f78: 9404af2c     	bl	0x2d5fc28 <__start_il2cpp+0x297614>
 2c33f7c: 36000240     	tbz	w0, #0x0, 0x2c33fc4 <__start_il2cpp+0x16b9b0>
 2c33f80: f9403260     	ldr	x0, [x19, #0x60]
 2c33f84: b4000260     	cbz	x0, 0x2c33fd0 <__start_il2cpp+0x16b9bc>
 2c33f88: b9400ff4     	ldr	w20, [sp, #0xc]
 2c33f8c: aa1f03e1     	mov	x1, xzr
 2c33f90: 9404ae60     	bl	0x2d5f910 <__start_il2cpp+0x2972fc>
 2c33f94: 51000409     	sub	w9, w0, #0x1
 2c33f98: f9400e68     	ldr	x8, [x19, #0x18]
 2c33f9c: 6b09029f     	cmp	w20, w9
 2c33fa0: 1a89b289     	csel	w9, w20, w9, lt
 2c33fa4: 7100029f     	cmp	w20, #0x0
 2c33fa8: 1a89b3e1     	csel	w1, wzr, w9, lt
 2c33fac: b9000fe1     	str	w1, [sp, #0xc]
 2c33fb0: b4000108     	cbz	x8, 0x2c33fd0 <__start_il2cpp+0x16b9bc>
 2c33fb4: f9402d00     	ldr	x0, [x8, #0x58]
 2c33fb8: b40000c0     	cbz	x0, 0x2c33fd0 <__start_il2cpp+0x16b9bc>
 2c33fbc: aa1f03e2     	mov	x2, xzr
 2c33fc0: 97fc714c     	bl	0x2b504f0 <__start_il2cpp+0x87edc>
 2c33fc4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c33fc8: f84207fe     	ldr	x30, [sp], #0x20
 2c33fcc: d65f03c0     	ret
 2c33fd0: 97f68c2e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void OnMergeFeverStarted()
# VA 0x2c33fd4 .. 0x2c34000 (next mapped method entry)
 2c33fd4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c33fd8: aa0003f3     	mov	x19, x0
 2c33fdc: 97fffe7a     	bl	0x2c339c4 <__start_il2cpp+0x16b3b0>
 2c33fe0: aa1303e0     	mov	x0, x19
 2c33fe4: 94000090     	bl	0x2c34224 <__start_il2cpp+0x16bc10>
 2c33fe8: aa1f03e2     	mov	x2, xzr
 2c33fec: 94b44aa0     	bl	0x5946a6c <__start_il2cpp+0x2e7e458>
 2c33ff0: aa1303e0     	mov	x0, x19
 2c33ff4: 2a1f03e1     	mov	w1, wzr
 2c33ff8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c33ffc: 140000b5     	b	0x2c342d0 <__start_il2cpp+0x16bcbc>

# MergeFeverEventController :: System.Boolean TryRestoreCurrentMergeFever()
# VA 0x2c34000 .. 0x2c3410c (next mapped method entry)
 2c34000: d10083ff     	sub	sp, sp, #0x20
 2c34004: a9014ffe     	stp	x30, x19, [sp, #0x10]
 2c34008: aa0003f3     	mov	x19, x0
 2c3400c: f90007ff     	str	xzr, [sp, #0x8]
 2c34010: 97fff9b8     	bl	0x2c326f0 <__start_il2cpp+0x16a0dc>
 2c34014: 36000720     	tbz	w0, #0x0, 0x2c340f8 <__start_il2cpp+0x16bae4>
 2c34018: f9405260     	ldr	x0, [x19, #0xa0]
 2c3401c: b4000760     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c34020: 910023e1     	add	x1, sp, #0x8
 2c34024: aa1f03e2     	mov	x2, xzr
 2c34028: 9408e527     	bl	0x2e6d4c4 <__start_il2cpp+0x3a4eb0>
 2c3402c: 370001a0     	tbnz	w0, #0x0, 0x2c34060 <__start_il2cpp+0x16ba4c>
 2c34030: aa1303e0     	mov	x0, x19
 2c34034: 97fff9c8     	bl	0x2c32754 <__start_il2cpp+0x16a140>
 2c34038: 37000600     	tbnz	w0, #0x0, 0x2c340f8 <__start_il2cpp+0x16bae4>
 2c3403c: f9405260     	ldr	x0, [x19, #0xa0]
 2c34040: b4000640     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c34044: aa1f03e1     	mov	x1, xzr
 2c34048: 9408e455     	bl	0x2e6d19c <__start_il2cpp+0x3a4b88>
 2c3404c: f90007e0     	str	x0, [sp, #0x8]
 2c34050: b40005c0     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c34054: 52800021     	mov	w1, #0x1                // =1
 2c34058: aa1f03e2     	mov	x2, xzr
 2c3405c: 97fd1a86     	bl	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c34060: f94007e0     	ldr	x0, [sp, #0x8]
 2c34064: b4000520     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c34068: aa1f03e1     	mov	x1, xzr
 2c3406c: 97fd1b18     	bl	0x2b7accc <__start_il2cpp+0xb26b8>
 2c34070: 2a0003e8     	mov	w8, w0
 2c34074: f94007e0     	ldr	x0, [sp, #0x8]
 2c34078: 36000108     	tbz	w8, #0x0, 0x2c34098 <__start_il2cpp+0x16ba84>
 2c3407c: b4000460     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c34080: 2a1f03e1     	mov	w1, wzr
 2c34084: aa1f03e2     	mov	x2, xzr
 2c34088: 97fd1a7b     	bl	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c3408c: aa1303e0     	mov	x0, x19
 2c34090: 94000026     	bl	0x2c34128 <__start_il2cpp+0x16bb14>
 2c34094: 14000019     	b	0x2c340f8 <__start_il2cpp+0x16bae4>
 2c34098: b4000380     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c3409c: aa1f03e1     	mov	x1, xzr
 2c340a0: 97fd1ad2     	bl	0x2b7abe8 <__start_il2cpp+0xb25d4>
 2c340a4: 2a0003e8     	mov	w8, w0
 2c340a8: f94007e0     	ldr	x0, [sp, #0x8]
 2c340ac: 360001e8     	tbz	w8, #0x0, 0x2c340e8 <__start_il2cpp+0x16bad4>
 2c340b0: b40002c0     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c340b4: aa1f03e1     	mov	x1, xzr
 2c340b8: 97fd1a67     	bl	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c340bc: 360001e0     	tbz	w0, #0x0, 0x2c340f8 <__start_il2cpp+0x16bae4>
 2c340c0: f94007e1     	ldr	x1, [sp, #0x8]
 2c340c4: aa1303e0     	mov	x0, x19
 2c340c8: f8098c01     	str	x1, [x0, #0x98]!
 2c340cc: 97f68b30     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c340d0: aa1303e0     	mov	x0, x19
 2c340d4: 97ffffc0     	bl	0x2c33fd4 <__start_il2cpp+0x16b9c0>
 2c340d8: aa1303e0     	mov	x0, x19
 2c340dc: 94000021     	bl	0x2c34160 <__start_il2cpp+0x16bb4c>
 2c340e0: 52800020     	mov	w0, #0x1                // =1
 2c340e4: 14000006     	b	0x2c340fc <__start_il2cpp+0x16bae8>
 2c340e8: b4000100     	cbz	x0, 0x2c34108 <__start_il2cpp+0x16baf4>
 2c340ec: 2a1f03e1     	mov	w1, wzr
 2c340f0: aa1f03e2     	mov	x2, xzr
 2c340f4: 97fd1a60     	bl	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c340f8: 2a1f03e0     	mov	w0, wzr
 2c340fc: a9414ffe     	ldp	x30, x19, [sp, #0x10]
 2c34100: 910083ff     	add	sp, sp, #0x20
 2c34104: d65f03c0     	ret
 2c34108: 97f68be0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void ChangeState(MergeFeverEventData mfEvent, System.Boolean isActive)
# VA 0x2c3410c .. 0x2c34128 (next mapped method entry)
 2c3410c: b40000a1     	cbz	x1, 0x2c34120 <__start_il2cpp+0x16bb0c>
 2c34110: aa0103e0     	mov	x0, x1
 2c34114: 12000041     	and	w1, w2, #0x1
 2c34118: aa1f03e2     	mov	x2, xzr
 2c3411c: 17fd1a56     	b	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c34120: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c34124: 97f68bd9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void OnMergeFeverEnded()
# VA 0x2c34128 .. 0x2c34160 (next mapped method entry)
 2c34128: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c3412c: f9400c08     	ldr	x8, [x0, #0x18]
 2c34130: b4000168     	cbz	x8, 0x2c3415c <__start_il2cpp+0x16bb48>
 2c34134: aa0003f3     	mov	x19, x0
 2c34138: f9402d00     	ldr	x0, [x8, #0x58]
 2c3413c: b4000100     	cbz	x0, 0x2c3415c <__start_il2cpp+0x16bb48>
 2c34140: aa1f03e1     	mov	x1, xzr
 2c34144: 97fc7127     	bl	0x2b505e0 <__start_il2cpp+0x87fcc>
 2c34148: aa1303e0     	mov	x0, x19
 2c3414c: 97fffe14     	bl	0x2c3399c <__start_il2cpp+0x16b388>
 2c34150: aa1303e0     	mov	x0, x19
 2c34154: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c34158: 17fffb51     	b	0x2c32e9c <__start_il2cpp+0x16a888>
 2c3415c: 97f68bcb     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void EnableMergeFever()
# VA 0x2c34160 .. 0x2c34224 (next mapped method entry)
 2c34160: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c34164: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c34168: d001d6f5     	adrp	x21, 0x6712000
 2c3416c: d001b614     	adrp	x20, 0x62f6000
 2c34170: aa0003f3     	mov	x19, x0
 2c34174: 3973b2a8     	ldrb	w8, [x21, #0xcec]
 2c34178: f9400e94     	ldr	x20, [x20, #0x18]
 2c3417c: 37000188     	tbnz	w8, #0x0, 0x2c341ac <__start_il2cpp+0x16bb98>
 2c34180: d001b600     	adrp	x0, 0x62f6000
 2c34184: f9400c00     	ldr	x0, [x0, #0x18]
 2c34188: 97f68b16     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3418c: d001b640     	adrp	x0, 0x62fe000
 2c34190: f9410400     	ldr	x0, [x0, #0x208]
 2c34194: 97f68b13     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34198: d001b640     	adrp	x0, 0x62fe000
 2c3419c: f940b800     	ldr	x0, [x0, #0x170]
 2c341a0: 97f68b10     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c341a4: 52800028     	mov	w8, #0x1                // =1
 2c341a8: 3933b2a8     	strb	w8, [x21, #0xcec]
 2c341ac: f9400280     	ldr	x0, [x20]
 2c341b0: d001b654     	adrp	x20, 0x62fe000
 2c341b4: d001b655     	adrp	x21, 0x62fe000
 2c341b8: f940ba94     	ldr	x20, [x20, #0x170]
 2c341bc: b940e408     	ldr	w8, [x0, #0xe4]
 2c341c0: f94106b5     	ldr	x21, [x21, #0x208]
 2c341c4: 35000048     	cbnz	w8, 0x2c341cc <__start_il2cpp+0x16bbb8>
 2c341c8: 97f68b65     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c341cc: f9400280     	ldr	x0, [x20]
 2c341d0: f94002a1     	ldr	x1, [x21]
 2c341d4: aa1f03e2     	mov	x2, xzr
 2c341d8: 97fc66d4     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2c341dc: f9403260     	ldr	x0, [x19, #0x60]
 2c341e0: b4000200     	cbz	x0, 0x2c34220 <__start_il2cpp+0x16bc0c>
 2c341e4: aa1f03e1     	mov	x1, xzr
 2c341e8: 9404adca     	bl	0x2d5f910 <__start_il2cpp+0x2972fc>
 2c341ec: 34000140     	cbz	w0, 0x2c34214 <__start_il2cpp+0x16bc00>
 2c341f0: f9404e60     	ldr	x0, [x19, #0x98]
 2c341f4: b4000100     	cbz	x0, 0x2c34214 <__start_il2cpp+0x16bc00>
 2c341f8: 52800021     	mov	w1, #0x1                // =1
 2c341fc: aa1f03e2     	mov	x2, xzr
 2c34200: 97fd1a1d     	bl	0x2b7aa74 <__start_il2cpp+0xb2460>
 2c34204: aa1303e0     	mov	x0, x19
 2c34208: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c3420c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c34210: 140000a8     	b	0x2c344b0 <__start_il2cpp+0x16be9c>
 2c34214: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c34218: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c3421c: d65f03c0     	ret
 2c34220: 97f68b9a     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: Cysharp.Threading.Tasks.UniTask CheckMergeFeverEnd()
# VA 0x2c34224 .. 0x2c342d0 (next mapped method entry)
 2c34224: d10143ff     	sub	sp, sp, #0x50
 2c34228: a90357fe     	stp	x30, x21, [sp, #0x30]
 2c3422c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2c34230: d001d6f4     	adrp	x20, 0x6712000
 2c34234: d001b655     	adrp	x21, 0x62fe000
 2c34238: aa0003f3     	mov	x19, x0
 2c3423c: 3973c288     	ldrb	w8, [x20, #0xcf0]
 2c34240: f9410ab5     	ldr	x21, [x21, #0x210]
 2c34244: 370000c8     	tbnz	w8, #0x0, 0x2c3425c <__start_il2cpp+0x16bc48>
 2c34248: d001b640     	adrp	x0, 0x62fe000
 2c3424c: f9410800     	ldr	x0, [x0, #0x210]
 2c34250: 97f68ae4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34254: 52800028     	mov	w8, #0x1                // =1
 2c34258: 3933c288     	strb	w8, [x20, #0xcf0]
 2c3425c: 6f00e400     	movi	v0.2d, #0000000000000000
 2c34260: 910003f4     	mov	x20, sp
 2c34264: aa1f03e1     	mov	x1, xzr
 2c34268: b27d0280     	orr	x0, x20, #0x8
 2c3426c: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2c34270: 3d8003e0     	str	q0, [sp]
 2c34274: 97f68ac6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34278: 91006280     	add	x0, x20, #0x18
 2c3427c: aa1303e1     	mov	x1, x19
 2c34280: f9000ff3     	str	x19, [sp, #0x18]
 2c34284: 97f68ac2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34288: f94002b3     	ldr	x19, [x21]
 2c3428c: 12800009     	mov	w9, #-0x1               // =-1
 2c34290: b90003e9     	str	w9, [sp]
 2c34294: f9401e68     	ldr	x8, [x19, #0x38]
 2c34298: b5000088     	cbnz	x8, 0x2c342a8 <__start_il2cpp+0x16bc94>
 2c3429c: aa1303e0     	mov	x0, x19
 2c342a0: 97f76779     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c342a4: f9401e68     	ldr	x8, [x19, #0x38]
 2c342a8: f9400901     	ldr	x1, [x8, #0x10]
 2c342ac: 910003e0     	mov	x0, sp
 2c342b0: 94000710     	bl	0x2c35ef0 <__start_il2cpp+0x16d8dc>
 2c342b4: b27d0280     	orr	x0, x20, #0x8
 2c342b8: aa1f03e1     	mov	x1, xzr
 2c342bc: 97fbd623     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c342c0: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2c342c4: a94357fe     	ldp	x30, x21, [sp, #0x30]
 2c342c8: 910143ff     	add	sp, sp, #0x50
 2c342cc: d65f03c0     	ret

# MergeFeverEventController :: System.Void InitViewer(System.Boolean animate)
# VA 0x2c342d0 .. 0x2c34340 (next mapped method entry)
 2c342d0: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c342d4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c342d8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c342dc: 2a0103f3     	mov	w19, w1
 2c342e0: aa0003f7     	mov	x23, x0
 2c342e4: 97fffb3c     	bl	0x2c32fd4 <__start_il2cpp+0x16a9c0>
 2c342e8: 2a0003f4     	mov	w20, w0
 2c342ec: aa1703e0     	mov	x0, x23
 2c342f0: 97fffb6e     	bl	0x2c330a8 <__start_il2cpp+0x16aa94>
 2c342f4: f94016f6     	ldr	x22, [x23, #0x28]
 2c342f8: 2a0003f5     	mov	w21, w0
 2c342fc: aa1703e0     	mov	x0, x23
 2c34300: 97fff8e0     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c34304: b40001d6     	cbz	x22, 0x2c3433c <__start_il2cpp+0x16bd28>
 2c34308: aa0003e2     	mov	x2, x0
 2c3430c: aa0103e3     	mov	x3, x1
 2c34310: 12000265     	and	w5, w19, #0x1
 2c34314: aa1603e0     	mov	x0, x22
 2c34318: aa0203e1     	mov	x1, x2
 2c3431c: aa0303e2     	mov	x2, x3
 2c34320: 2a1503e3     	mov	w3, w21
 2c34324: 2a1403e4     	mov	w4, w20
 2c34328: aa1f03e6     	mov	x6, xzr
 2c3432c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c34330: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c34334: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c34338: 14001232     	b	0x2c38c00 <__start_il2cpp+0x1705ec>
 2c3433c: 97f68b53     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void InitSignals()
# VA 0x2c34340 .. 0x2c344b0 (next mapped method entry)
 2c34340: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c34344: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c34348: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c3434c: d001d6f4     	adrp	x20, 0x6712000
 2c34350: f001b616     	adrp	x22, 0x62f7000
 2c34354: d001b655     	adrp	x21, 0x62fe000
 2c34358: 3973ae88     	ldrb	w8, [x20, #0xceb]
 2c3435c: f94556d6     	ldr	x22, [x22, #0xaa8]
 2c34360: f9410eb5     	ldr	x21, [x21, #0x218]
 2c34364: aa0003f3     	mov	x19, x0
 2c34368: 37000368     	tbnz	w8, #0x0, 0x2c343d4 <__start_il2cpp+0x16bdc0>
 2c3436c: f001b600     	adrp	x0, 0x62f7000
 2c34370: f9455400     	ldr	x0, [x0, #0xaa8]
 2c34374: 97f68a9b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34378: d001b5e0     	adrp	x0, 0x62f2000
 2c3437c: f943f000     	ldr	x0, [x0, #0x7e0]
 2c34380: 97f68a98     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34384: d001b640     	adrp	x0, 0x62fe000
 2c34388: f9411000     	ldr	x0, [x0, #0x220]
 2c3438c: 97f68a95     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34390: d001b640     	adrp	x0, 0x62fe000
 2c34394: f9411400     	ldr	x0, [x0, #0x228]
 2c34398: 97f68a92     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3439c: d001b640     	adrp	x0, 0x62fe000
 2c343a0: f9410c00     	ldr	x0, [x0, #0x218]
 2c343a4: 97f68a8f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c343a8: d001b640     	adrp	x0, 0x62fe000
 2c343ac: f9411800     	ldr	x0, [x0, #0x230]
 2c343b0: 97f68a8c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c343b4: d001b640     	adrp	x0, 0x62fe000
 2c343b8: f9411c00     	ldr	x0, [x0, #0x238]
 2c343bc: 97f68a89     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c343c0: f001b600     	adrp	x0, 0x62f7000
 2c343c4: f945a400     	ldr	x0, [x0, #0xb48]
 2c343c8: 97f68a86     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c343cc: 52800028     	mov	w8, #0x1                // =1
 2c343d0: 3933ae88     	strb	w8, [x20, #0xceb]
 2c343d4: f94002c0     	ldr	x0, [x22]
 2c343d8: f9400a74     	ldr	x20, [x19, #0x10]
 2c343dc: 97f68b27     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c343e0: f94002a2     	ldr	x2, [x21]
 2c343e4: aa1303e1     	mov	x1, x19
 2c343e8: aa1f03e3     	mov	x3, xzr
 2c343ec: aa0003f5     	mov	x21, x0
 2c343f0: 943b85d4     	bl	0x3b15b40 <__start_il2cpp+0x104d52c>
 2c343f4: b40005d4     	cbz	x20, 0x2c344ac <__start_il2cpp+0x16be98>
 2c343f8: f001b608     	adrp	x8, 0x62f7000
 2c343fc: d001b5f6     	adrp	x22, 0x62f2000
 2c34400: d001b657     	adrp	x23, 0x62fe000
 2c34404: f945a508     	ldr	x8, [x8, #0xb48]
 2c34408: f943f2d6     	ldr	x22, [x22, #0x7e0]
 2c3440c: f94112f7     	ldr	x23, [x23, #0x220]
 2c34410: aa1403e0     	mov	x0, x20
 2c34414: aa1503e1     	mov	x1, x21
 2c34418: f9400102     	ldr	x2, [x8]
 2c3441c: 9427d019     	bl	0x3628480 <__start_il2cpp+0xb5fe6c>
 2c34420: f94002c0     	ldr	x0, [x22]
 2c34424: f9400a74     	ldr	x20, [x19, #0x10]
 2c34428: 97f68b14     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c3442c: f94002e2     	ldr	x2, [x23]
 2c34430: aa1303e1     	mov	x1, x19
 2c34434: aa1f03e3     	mov	x3, xzr
 2c34438: aa0003f5     	mov	x21, x0
 2c3443c: 9490b83b     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c34440: b4000374     	cbz	x20, 0x2c344ac <__start_il2cpp+0x16be98>
 2c34444: d001b648     	adrp	x8, 0x62fe000
 2c34448: d001b657     	adrp	x23, 0x62fe000
 2c3444c: aa1403e0     	mov	x0, x20
 2c34450: f9411908     	ldr	x8, [x8, #0x230]
 2c34454: f94116f7     	ldr	x23, [x23, #0x228]
 2c34458: aa1503e1     	mov	x1, x21
 2c3445c: f9400102     	ldr	x2, [x8]
 2c34460: 9427cf2b     	bl	0x362810c <__start_il2cpp+0xb5faf8>
 2c34464: f94002c0     	ldr	x0, [x22]
 2c34468: f9400a74     	ldr	x20, [x19, #0x10]
 2c3446c: 97f68b03     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c34470: f94002e2     	ldr	x2, [x23]
 2c34474: aa1303e1     	mov	x1, x19
 2c34478: aa1f03e3     	mov	x3, xzr
 2c3447c: aa0003f5     	mov	x21, x0
 2c34480: 9490b82a     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c34484: b4000154     	cbz	x20, 0x2c344ac <__start_il2cpp+0x16be98>
 2c34488: d001b648     	adrp	x8, 0x62fe000
 2c3448c: aa1403e0     	mov	x0, x20
 2c34490: aa1503e1     	mov	x1, x21
 2c34494: f9411d08     	ldr	x8, [x8, #0x238]
 2c34498: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c3449c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c344a0: f9400102     	ldr	x2, [x8]
 2c344a4: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c344a8: 1427cea2     	b	0x3627f30 <__start_il2cpp+0xb5f91c>
 2c344ac: 97f68af7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void ShowViewer()
# VA 0x2c344b0 .. 0x2c344dc (next mapped method entry)
 2c344b0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c344b4: f9401400     	ldr	x0, [x0, #0x28]
 2c344b8: b4000100     	cbz	x0, 0x2c344d8 <__start_il2cpp+0x16bec4>
 2c344bc: aa1f03e1     	mov	x1, xzr
 2c344c0: 94bc2d5b     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c344c4: b40000a0     	cbz	x0, 0x2c344d8 <__start_il2cpp+0x16bec4>
 2c344c8: 52800021     	mov	w1, #0x1                // =1
 2c344cc: aa1f03e2     	mov	x2, xzr
 2c344d0: f84107fe     	ldr	x30, [sp], #0x10
 2c344d4: 14bc3fa9     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2c344d8: 97f68aec     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void HideViewer()
# VA 0x2c344dc .. 0x2c34508 (next mapped method entry)
 2c344dc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c344e0: f9401400     	ldr	x0, [x0, #0x28]
 2c344e4: b4000100     	cbz	x0, 0x2c34504 <__start_il2cpp+0x16bef0>
 2c344e8: aa1f03e1     	mov	x1, xzr
 2c344ec: 94bc2d50     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c344f0: b40000a0     	cbz	x0, 0x2c34504 <__start_il2cpp+0x16bef0>
 2c344f4: 2a1f03e1     	mov	w1, wzr
 2c344f8: aa1f03e2     	mov	x2, xzr
 2c344fc: f84107fe     	ldr	x30, [sp], #0x10
 2c34500: 14bc3f9e     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2c34504: 97f68ae1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void OnItemTaskCompleted()
# VA 0x2c34508 .. 0x2c34540 (next mapped method entry)
 2c34508: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c3450c: aa0003f3     	mov	x19, x0
 2c34510: 97fff878     	bl	0x2c326f0 <__start_il2cpp+0x16a0dc>
 2c34514: 360000c0     	tbz	w0, #0x0, 0x2c3452c <__start_il2cpp+0x16bf18>
 2c34518: f9404e60     	ldr	x0, [x19, #0x98]
 2c3451c: b40000c0     	cbz	x0, 0x2c34534 <__start_il2cpp+0x16bf20>
 2c34520: aa1f03e1     	mov	x1, xzr
 2c34524: 97fd194c     	bl	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c34528: 36000060     	tbz	w0, #0x0, 0x2c34534 <__start_il2cpp+0x16bf20>
 2c3452c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c34530: d65f03c0     	ret
 2c34534: aa1303e0     	mov	x0, x19
 2c34538: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c3453c: 17fffa58     	b	0x2c32e9c <__start_il2cpp+0x16a888>

# MergeFeverEventController :: System.Boolean CanShowPopup()
# VA 0x2c34540 .. 0x2c34588 (next mapped method entry)
 2c34540: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c34544: f9402808     	ldr	x8, [x0, #0x50]
 2c34548: b40001e8     	cbz	x8, 0x2c34584 <__start_il2cpp+0x16bf70>
 2c3454c: b9402108     	ldr	w8, [x8, #0x20]
 2c34550: 7100091f     	cmp	w8, #0x2
 2c34554: 54000061     	b.ne	0x2c34560 <__start_il2cpp+0x16bf4c>
 2c34558: 2a1f03e0     	mov	w0, wzr
 2c3455c: 14000008     	b	0x2c3457c <__start_il2cpp+0x16bf68>
 2c34560: f9402408     	ldr	x8, [x0, #0x48]
 2c34564: b4000108     	cbz	x8, 0x2c34584 <__start_il2cpp+0x16bf70>
 2c34568: f9402508     	ldr	x8, [x8, #0x48]
 2c3456c: b40000c8     	cbz	x8, 0x2c34584 <__start_il2cpp+0x16bf70>
 2c34570: b9404108     	ldr	w8, [x8, #0x40]
 2c34574: 7100091f     	cmp	w8, #0x2
 2c34578: 1a9f17e0     	cset	w0, eq
 2c3457c: f84107fe     	ldr	x30, [sp], #0x10
 2c34580: d65f03c0     	ret
 2c34584: 97f68ac1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void SetDoubleMergeData(MergeFever.Reward reward)
# VA 0x2c34588 .. 0x2c346c8 (next mapped method entry)
 2c34588: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c3458c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c34590: f9400c08     	ldr	x8, [x0, #0x18]
 2c34594: b4000988     	cbz	x8, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34598: aa0003f3     	mov	x19, x0
 2c3459c: f9402d00     	ldr	x0, [x8, #0x58]
 2c345a0: b4000920     	cbz	x0, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c345a4: aa0103f4     	mov	x20, x1
 2c345a8: aa1f03e1     	mov	x1, xzr
 2c345ac: 97fc6ec0     	bl	0x2b500ac <__start_il2cpp+0x87a98>
 2c345b0: aa1f03e1     	mov	x1, xzr
 2c345b4: 9400483c     	bl	0x2c466a4 <__start_il2cpp+0x17e090>
 2c345b8: aa1f03e2     	mov	x2, xzr
 2c345bc: 940008fc     	bl	0x2c369ac <__start_il2cpp+0x16e398>
 2c345c0: f9400e68     	ldr	x8, [x19, #0x18]
 2c345c4: b4000808     	cbz	x8, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c345c8: aa0003f5     	mov	x21, x0
 2c345cc: f9402d00     	ldr	x0, [x8, #0x58]
 2c345d0: b40007a0     	cbz	x0, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c345d4: aa1f03e1     	mov	x1, xzr
 2c345d8: 97fc6ebb     	bl	0x2b500c4 <__start_il2cpp+0x87ab0>
 2c345dc: f9400e68     	ldr	x8, [x19, #0x18]
 2c345e0: eb20c2bf     	cmp	x21, w0, sxtw
 2c345e4: 540001ca     	b.ge	0x2c3461c <__start_il2cpp+0x16c008>
 2c345e8: b40006e8     	cbz	x8, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c345ec: f9402d15     	ldr	x21, [x8, #0x58]
 2c345f0: b40006b5     	cbz	x21, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c345f4: aa1503e0     	mov	x0, x21
 2c345f8: aa1f03e1     	mov	x1, xzr
 2c345fc: 97fc6eb2     	bl	0x2b500c4 <__start_il2cpp+0x87ab0>
 2c34600: b9401288     	ldr	w8, [x20, #0x10]
 2c34604: 529d4c09     	mov	w9, #0xea60             // =60000
 2c34608: aa1f03e2     	mov	x2, xzr
 2c3460c: 1b090101     	madd	w1, w8, w9, w0
 2c34610: aa1503e0     	mov	x0, x21
 2c34614: 97fc6f99     	bl	0x2b50478 <__start_il2cpp+0x87e64>
 2c34618: 1400001e     	b	0x2c34690 <__start_il2cpp+0x16c07c>
 2c3461c: b4000548     	cbz	x8, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34620: f9402d15     	ldr	x21, [x8, #0x58]
 2c34624: aa1f03e0     	mov	x0, xzr
 2c34628: 940047df     	bl	0x2c465a4 <__start_il2cpp+0x17df90>
 2c3462c: b40004d5     	cbz	x21, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34630: aa0003e1     	mov	x1, x0
 2c34634: aa1503e0     	mov	x0, x21
 2c34638: aa1f03e2     	mov	x2, xzr
 2c3463c: 97fc6f80     	bl	0x2b5043c <__start_il2cpp+0x87e28>
 2c34640: f9400e68     	ldr	x8, [x19, #0x18]
 2c34644: b4000408     	cbz	x8, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34648: f9402d00     	ldr	x0, [x8, #0x58]
 2c3464c: b40003c0     	cbz	x0, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34650: b9401288     	ldr	w8, [x20, #0x10]
 2c34654: 529d4c09     	mov	w9, #0xea60             // =60000
 2c34658: aa1f03e2     	mov	x2, xzr
 2c3465c: 1b097d01     	mul	w1, w8, w9
 2c34660: 97fc6f86     	bl	0x2b50478 <__start_il2cpp+0x87e64>
 2c34664: f9400e68     	ldr	x8, [x19, #0x18]
 2c34668: b40002e8     	cbz	x8, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c3466c: f9400680     	ldr	x0, [x20, #0x8]
 2c34670: f9402d15     	ldr	x21, [x8, #0x58]
 2c34674: aa1f03e1     	mov	x1, xzr
 2c34678: 94935323     	bl	0x5109304 <__start_il2cpp+0x2640cf0>
 2c3467c: b4000255     	cbz	x21, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34680: 2a0003e1     	mov	w1, w0
 2c34684: aa1503e0     	mov	x0, x21
 2c34688: aa1f03e2     	mov	x2, xzr
 2c3468c: 97fc6f8a     	bl	0x2b504b4 <__start_il2cpp+0x87ea0>
 2c34690: f9401660     	ldr	x0, [x19, #0x28]
 2c34694: b4000180     	cbz	x0, 0x2c346c4 <__start_il2cpp+0x16c0b0>
 2c34698: b9808668     	ldrsw	x8, [x19, #0x84]
 2c3469c: 5289ba69     	mov	w9, #0x4dd3             // =19923
 2c346a0: aa1f03e2     	mov	x2, xzr
 2c346a4: 72a20c49     	movk	w9, #0x1062, lsl #16
 2c346a8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c346ac: 9b297d08     	smull	x8, w8, w9
 2c346b0: d37ffd09     	lsr	x9, x8, #63
 2c346b4: 9366fd08     	asr	x8, x8, #38
 2c346b8: 0b090101     	add	w1, w8, w9
 2c346bc: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c346c0: 140008c8     	b	0x2c369e0 <__start_il2cpp+0x16e3cc>
 2c346c4: 97f68a71     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Boolean TryValidateRewardData(MergeFever.Reward reward)
# VA 0x2c346c8 .. 0x2c34a90 (next mapped method entry)
 2c346c8: d10183ff     	sub	sp, sp, #0x60
 2c346cc: f9000bfe     	str	x30, [sp, #0x10]
 2c346d0: a90267fa     	stp	x26, x25, [sp, #0x20]
 2c346d4: a9035ff8     	stp	x24, x23, [sp, #0x30]
 2c346d8: a90457f6     	stp	x22, x21, [sp, #0x40]
 2c346dc: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2c346e0: d001d6f4     	adrp	x20, 0x6712000
 2c346e4: aa0103f3     	mov	x19, x1
 2c346e8: 3973ce88     	ldrb	w8, [x20, #0xcf3]
 2c346ec: 37000428     	tbnz	w8, #0x0, 0x2c34770 <__start_il2cpp+0x16c15c>
 2c346f0: 9001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c346f4: f946e800     	ldr	x0, [x0, #0xdd0]
 2c346f8: 97f689ba     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c346fc: 9001b600     	adrp	x0, 0x62f4000
 2c34700: f9476c00     	ldr	x0, [x0, #0xed8]
 2c34704: 97f689b7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34708: d001b640     	adrp	x0, 0x62fe000
 2c3470c: f940d000     	ldr	x0, [x0, #0x1a0]
 2c34710: 97f689b4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34714: b001b5e0     	adrp	x0, 0x62f1000
 2c34718: f9419400     	ldr	x0, [x0, #0x328]
 2c3471c: 97f689b1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34720: d001b640     	adrp	x0, 0x62fe000
 2c34724: f9412000     	ldr	x0, [x0, #0x240]
 2c34728: 97f689ae     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3472c: d001b640     	adrp	x0, 0x62fe000
 2c34730: f9412400     	ldr	x0, [x0, #0x248]
 2c34734: 97f689ab     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34738: d001b640     	adrp	x0, 0x62fe000
 2c3473c: f9412800     	ldr	x0, [x0, #0x250]
 2c34740: 97f689a8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34744: d001b640     	adrp	x0, 0x62fe000
 2c34748: f9412c00     	ldr	x0, [x0, #0x258]
 2c3474c: 97f689a5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34750: d001b640     	adrp	x0, 0x62fe000
 2c34754: f9413000     	ldr	x0, [x0, #0x260]
 2c34758: 97f689a2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3475c: d001b640     	adrp	x0, 0x62fe000
 2c34760: f9413400     	ldr	x0, [x0, #0x268]
 2c34764: 97f6899f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34768: 52800028     	mov	w8, #0x1                // =1
 2c3476c: 3933ce88     	strb	w8, [x20, #0xcf3]
 2c34770: d001b657     	adrp	x23, 0x62fe000
 2c34774: 9001b615     	adrp	x21, 0x62f4000
 2c34778: 9001b5f6     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c3477c: f940d2f7     	ldr	x23, [x23, #0x1a0]
 2c34780: f9476eb5     	ldr	x21, [x21, #0xed8]
 2c34784: f946ead6     	ldr	x22, [x22, #0xdd0]
 2c34788: f9400660     	ldr	x0, [x19, #0x8]
 2c3478c: aa1f03e1     	mov	x1, xzr
 2c34790: f9000fff     	str	xzr, [sp, #0x18]
 2c34794: 948d0414     	bl	0x4f757e4 <__start_il2cpp+0x24ad1d0>
 2c34798: 36000120     	tbz	w0, #0x0, 0x2c347bc <__start_il2cpp+0x16c1a8>
 2c3479c: d001b658     	adrp	x24, 0x62fe000
 2c347a0: b9400268     	ldr	w8, [x19]
 2c347a4: 910033e1     	add	x1, sp, #0xc
 2c347a8: f9412318     	ldr	x24, [x24, #0x240]
 2c347ac: f94002e0     	ldr	x0, [x23]
 2c347b0: b9000fe8     	str	w8, [sp, #0xc]
 2c347b4: 97f689ec     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c347b8: 14000054     	b	0x2c34908 <__start_il2cpp+0x16c2f4>
 2c347bc: f9400660     	ldr	x0, [x19, #0x8]
 2c347c0: b4001640     	cbz	x0, 0x2c34a88 <__start_il2cpp+0x16c474>
 2c347c4: 52800be1     	mov	w1, #0x5f               // =95
 2c347c8: 2a1f03e2     	mov	w2, wzr
 2c347cc: aa1f03e3     	mov	x3, xzr
 2c347d0: 948d112f     	bl	0x4f78c8c <__start_il2cpp+0x24b0678>
 2c347d4: b40015a0     	cbz	x0, 0x2c34a88 <__start_il2cpp+0x16c474>
 2c347d8: b9401808     	ldr	w8, [x0, #0x18]
 2c347dc: aa0003f4     	mov	x20, x0
 2c347e0: 7100091f     	cmp	w8, #0x2
 2c347e4: 540004e1     	b.ne	0x2c34880 <__start_il2cpp+0x16c26c>
 2c347e8: b001b5f9     	adrp	x25, 0x62f1000
 2c347ec: aa1f03f8     	mov	x24, xzr
 2c347f0: 9100829a     	add	x26, x20, #0x20
 2c347f4: f9419739     	ldr	x25, [x25, #0x328]
 2c347f8: 6b08031f     	cmp	w24, w8
 2c347fc: 54001482     	b.hs	0x2c34a8c <__start_il2cpp+0x16c478>
 2c34800: f8787b40     	ldr	x0, [x26, x24, lsl #3]
 2c34804: b4001420     	cbz	x0, 0x2c34a88 <__start_il2cpp+0x16c474>
 2c34808: f9400321     	ldr	x1, [x25]
 2c3480c: aa1f03e2     	mov	x2, xzr
 2c34810: 948d199f     	bl	0x4f7ae8c <__start_il2cpp+0x24b2878>
 2c34814: 370006c0     	tbnz	w0, #0x0, 0x2c348ec <__start_il2cpp+0x16c2d8>
 2c34818: b9401a88     	ldr	w8, [x20, #0x18]
 2c3481c: 91000718     	add	x24, x24, #0x1
 2c34820: 6b08031f     	cmp	w24, w8
 2c34824: 54fffeab     	b.lt	0x2c347f8 <__start_il2cpp+0x16c1e4>
 2c34828: 34001328     	cbz	w8, 0x2c34a8c <__start_il2cpp+0x16c478>
 2c3482c: f9401280     	ldr	x0, [x20, #0x20]
 2c34830: 910073e1     	add	x1, sp, #0x1c
 2c34834: aa1f03e2     	mov	x2, xzr
 2c34838: 949353ac     	bl	0x51096e8 <__start_il2cpp+0x26410d4>
 2c3483c: b9401a88     	ldr	w8, [x20, #0x18]
 2c34840: 36000bc0     	tbz	w0, #0x0, 0x2c349b8 <__start_il2cpp+0x16c3a4>
 2c34844: b9401fe9     	ldr	w9, [sp, #0x1c]
 2c34848: 7100013f     	cmp	w9, #0x0
 2c3484c: 54000b6d     	b.le	0x2c349b8 <__start_il2cpp+0x16c3a4>
 2c34850: f27f791f     	tst	x8, #0xfffffffe
 2c34854: 540011c0     	b.eq	0x2c34a8c <__start_il2cpp+0x16c478>
 2c34858: f9401680     	ldr	x0, [x20, #0x28]
 2c3485c: 910063e1     	add	x1, sp, #0x18
 2c34860: aa1f03e2     	mov	x2, xzr
 2c34864: 949353a1     	bl	0x51096e8 <__start_il2cpp+0x26410d4>
 2c34868: 36000d60     	tbz	w0, #0x0, 0x2c34a14 <__start_il2cpp+0x16c400>
 2c3486c: b9401be8     	ldr	w8, [sp, #0x18]
 2c34870: 7100011f     	cmp	w8, #0x0
 2c34874: 54000d0d     	b.le	0x2c34a14 <__start_il2cpp+0x16c400>
 2c34878: 52800020     	mov	w0, #0x1                // =1
 2c3487c: 14000048     	b	0x2c3499c <__start_il2cpp+0x16c388>
 2c34880: d001b657     	adrp	x23, 0x62fe000
 2c34884: d001b658     	adrp	x24, 0x62fe000
 2c34888: aa1f03e3     	mov	x3, xzr
 2c3488c: f94136f7     	ldr	x23, [x23, #0x268]
 2c34890: f9412b18     	ldr	x24, [x24, #0x250]
 2c34894: f9400661     	ldr	x1, [x19, #0x8]
 2c34898: f94002e0     	ldr	x0, [x23]
 2c3489c: f9400302     	ldr	x2, [x24]
 2c348a0: 948d06b3     	bl	0x4f7636c <__start_il2cpp+0x24add58>
 2c348a4: f94002a8     	ldr	x8, [x21]
 2c348a8: aa0003f4     	mov	x20, x0
 2c348ac: aa0803e0     	mov	x0, x8
 2c348b0: 97f689f2     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c348b4: aa1403e1     	mov	x1, x20
 2c348b8: aa1f03e2     	mov	x2, xzr
 2c348bc: aa1f03e3     	mov	x3, xzr
 2c348c0: aa0003f5     	mov	x21, x0
 2c348c4: 97fbed95     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c348c8: aa1503e0     	mov	x0, x21
 2c348cc: aa1f03e1     	mov	x1, xzr
 2c348d0: 940c4135     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c348d4: f9400661     	ldr	x1, [x19, #0x8]
 2c348d8: f94002e0     	ldr	x0, [x23]
 2c348dc: aa1f03e3     	mov	x3, xzr
 2c348e0: f9400302     	ldr	x2, [x24]
 2c348e4: 948d06a2     	bl	0x4f7636c <__start_il2cpp+0x24add58>
 2c348e8: 14000023     	b	0x2c34974 <__start_il2cpp+0x16c360>
 2c348ec: b9400268     	ldr	w8, [x19]
 2c348f0: f94002e0     	ldr	x0, [x23]
 2c348f4: 910033e1     	add	x1, sp, #0xc
 2c348f8: b9000fe8     	str	w8, [sp, #0xc]
 2c348fc: 97f6899a     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34900: d001b658     	adrp	x24, 0x62fe000
 2c34904: f9413318     	ldr	x24, [x24, #0x260]
 2c34908: f9400308     	ldr	x8, [x24]
 2c3490c: aa0003e1     	mov	x1, x0
 2c34910: aa1f03e2     	mov	x2, xzr
 2c34914: aa0803e0     	mov	x0, x8
 2c34918: 948cdf96     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c3491c: f94002a8     	ldr	x8, [x21]
 2c34920: aa0003f4     	mov	x20, x0
 2c34924: aa0803e0     	mov	x0, x8
 2c34928: 97f689d4     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c3492c: aa1403e1     	mov	x1, x20
 2c34930: aa1f03e2     	mov	x2, xzr
 2c34934: aa1f03e3     	mov	x3, xzr
 2c34938: aa0003f5     	mov	x21, x0
 2c3493c: 97fbed77     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c34940: aa1503e0     	mov	x0, x21
 2c34944: aa1f03e1     	mov	x1, xzr
 2c34948: 940c4117     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c3494c: b9400268     	ldr	w8, [x19]
 2c34950: f94002e0     	ldr	x0, [x23]
 2c34954: 910023e1     	add	x1, sp, #0x8
 2c34958: b9000be8     	str	w8, [sp, #0x8]
 2c3495c: 97f68982     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34960: f9400308     	ldr	x8, [x24]
 2c34964: aa0003e1     	mov	x1, x0
 2c34968: aa1f03e2     	mov	x2, xzr
 2c3496c: aa0803e0     	mov	x0, x8
 2c34970: 948cdf80     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c34974: f94002c8     	ldr	x8, [x22]
 2c34978: aa0003f3     	mov	x19, x0
 2c3497c: b940e509     	ldr	w9, [x8, #0xe4]
 2c34980: 35000069     	cbnz	w9, 0x2c3498c <__start_il2cpp+0x16c378>
 2c34984: aa0803e0     	mov	x0, x8
 2c34988: 97f68975     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c3498c: aa1303e0     	mov	x0, x19
 2c34990: aa1f03e1     	mov	x1, xzr
 2c34994: 94bb1ff7     	bl	0x5afc970 <__start_il2cpp+0x303435c>
 2c34998: 2a1f03e0     	mov	w0, wzr
 2c3499c: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2c349a0: f9400bfe     	ldr	x30, [sp, #0x10]
 2c349a4: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2c349a8: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 2c349ac: a94267fa     	ldp	x26, x25, [sp, #0x20]
 2c349b0: 910183ff     	add	sp, sp, #0x60
 2c349b4: d65f03c0     	ret
 2c349b8: b40006a8     	cbz	x8, 0x2c34a8c <__start_il2cpp+0x16c478>
 2c349bc: d001b657     	adrp	x23, 0x62fe000
 2c349c0: aa1f03e2     	mov	x2, xzr
 2c349c4: f9412ef7     	ldr	x23, [x23, #0x258]
 2c349c8: f9401281     	ldr	x1, [x20, #0x20]
 2c349cc: f94002e0     	ldr	x0, [x23]
 2c349d0: 948cd0f4     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c349d4: f94002a8     	ldr	x8, [x21]
 2c349d8: aa0003f3     	mov	x19, x0
 2c349dc: aa0803e0     	mov	x0, x8
 2c349e0: 97f689a6     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c349e4: aa1303e1     	mov	x1, x19
 2c349e8: aa1f03e2     	mov	x2, xzr
 2c349ec: aa1f03e3     	mov	x3, xzr
 2c349f0: aa0003f5     	mov	x21, x0
 2c349f4: 97fbed49     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c349f8: aa1503e0     	mov	x0, x21
 2c349fc: aa1f03e1     	mov	x1, xzr
 2c34a00: 940c40e9     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c34a04: b9401a88     	ldr	w8, [x20, #0x18]
 2c34a08: 34000428     	cbz	w8, 0x2c34a8c <__start_il2cpp+0x16c478>
 2c34a0c: f9401281     	ldr	x1, [x20, #0x20]
 2c34a10: 1400001a     	b	0x2c34a78 <__start_il2cpp+0x16c464>
 2c34a14: b9401a88     	ldr	w8, [x20, #0x18]
 2c34a18: 721f791f     	tst	w8, #0xfffffffe
 2c34a1c: 54000380     	b.eq	0x2c34a8c <__start_il2cpp+0x16c478>
 2c34a20: d001b657     	adrp	x23, 0x62fe000
 2c34a24: aa1f03e2     	mov	x2, xzr
 2c34a28: f94126f7     	ldr	x23, [x23, #0x248]
 2c34a2c: f9401681     	ldr	x1, [x20, #0x28]
 2c34a30: f94002e0     	ldr	x0, [x23]
 2c34a34: 948cd0db     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c34a38: f94002a8     	ldr	x8, [x21]
 2c34a3c: aa0003f3     	mov	x19, x0
 2c34a40: aa0803e0     	mov	x0, x8
 2c34a44: 97f6898d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c34a48: aa1303e1     	mov	x1, x19
 2c34a4c: aa1f03e2     	mov	x2, xzr
 2c34a50: aa1f03e3     	mov	x3, xzr
 2c34a54: aa0003f5     	mov	x21, x0
 2c34a58: 97fbed30     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c34a5c: aa1503e0     	mov	x0, x21
 2c34a60: aa1f03e1     	mov	x1, xzr
 2c34a64: 940c40d0     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2c34a68: b9401a88     	ldr	w8, [x20, #0x18]
 2c34a6c: 721f791f     	tst	w8, #0xfffffffe
 2c34a70: 540000e0     	b.eq	0x2c34a8c <__start_il2cpp+0x16c478>
 2c34a74: f9401681     	ldr	x1, [x20, #0x28]
 2c34a78: f94002e0     	ldr	x0, [x23]
 2c34a7c: aa1f03e2     	mov	x2, xzr
 2c34a80: 948cd0c8     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c34a84: 17ffffbc     	b	0x2c34974 <__start_il2cpp+0x16c360>
 2c34a88: 97f68980     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c34a8c: 97f68981     	bl	0x29d7090 <mono_class_get_checked+0x978>

# MergeFeverEventController :: System.Void CollectRewardByType(MergeFever.Reward reward, out System.String analyticsRewardString, out System.String analyticsTypeString)
# VA 0x2c34a90 .. 0x2c35060 (next mapped method entry)
 2c34a90: d10203ff     	sub	sp, sp, #0x80
 2c34a94: a90467fe     	stp	x30, x25, [sp, #0x40]
 2c34a98: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2c34a9c: a90657f6     	stp	x22, x21, [sp, #0x60]
 2c34aa0: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2c34aa4: d001d6f8     	adrp	x24, 0x6712000
 2c34aa8: b001b5f7     	adrp	x23, 0x62f1000
 2c34aac: aa0303f5     	mov	x21, x3
 2c34ab0: 3973cb08     	ldrb	w8, [x24, #0xcf2]
 2c34ab4: f940daf7     	ldr	x23, [x23, #0x1b0]
 2c34ab8: aa0203f3     	mov	x19, x2
 2c34abc: aa0103f4     	mov	x20, x1
 2c34ac0: aa0003f6     	mov	x22, x0
 2c34ac4: 37000608     	tbnz	w8, #0x0, 0x2c34b84 <__start_il2cpp+0x16c570>
 2c34ac8: 9001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34acc: f946e800     	ldr	x0, [x0, #0xdd0]
 2c34ad0: 97f688c4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34ad4: 9001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34ad8: f946f000     	ldr	x0, [x0, #0xde0]
 2c34adc: 97f688c1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34ae0: f001b620     	adrp	x0, 0x62fb000
 2c34ae4: f9466400     	ldr	x0, [x0, #0xcc8]
 2c34ae8: 97f688be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34aec: d001b640     	adrp	x0, 0x62fe000
 2c34af0: f9413800     	ldr	x0, [x0, #0x270]
 2c34af4: 97f688bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34af8: 9001b600     	adrp	x0, 0x62f4000
 2c34afc: f942ec00     	ldr	x0, [x0, #0x5d8]
 2c34b00: 97f688b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b04: b001b620     	adrp	x0, 0x62f9000
 2c34b08: f9444000     	ldr	x0, [x0, #0x880]
 2c34b0c: 97f688b5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b10: d001b640     	adrp	x0, 0x62fe000
 2c34b14: f9413c00     	ldr	x0, [x0, #0x278]
 2c34b18: 97f688b2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b1c: 9001b600     	adrp	x0, 0x62f4000
 2c34b20: f942f400     	ldr	x0, [x0, #0x5e8]
 2c34b24: 97f688af     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b28: d001b640     	adrp	x0, 0x62fe000
 2c34b2c: f9414000     	ldr	x0, [x0, #0x280]
 2c34b30: 97f688ac     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b34: d001b640     	adrp	x0, 0x62fe000
 2c34b38: f9414400     	ldr	x0, [x0, #0x288]
 2c34b3c: 97f688a9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b40: d001b600     	adrp	x0, 0x62f6000
 2c34b44: f9411000     	ldr	x0, [x0, #0x220]
 2c34b48: 97f688a6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b4c: d001b640     	adrp	x0, 0x62fe000
 2c34b50: f9414800     	ldr	x0, [x0, #0x290]
 2c34b54: 97f688a3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b58: d001b640     	adrp	x0, 0x62fe000
 2c34b5c: f9414c00     	ldr	x0, [x0, #0x298]
 2c34b60: 97f688a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b64: b001b5e0     	adrp	x0, 0x62f1000
 2c34b68: f940d800     	ldr	x0, [x0, #0x1b0]
 2c34b6c: 97f6889d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b70: d001b640     	adrp	x0, 0x62fe000
 2c34b74: f9415000     	ldr	x0, [x0, #0x2a0]
 2c34b78: 97f6889a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c34b7c: 52800028     	mov	w8, #0x1                // =1
 2c34b80: 3933cb08     	strb	w8, [x24, #0xcf2]
 2c34b84: f94002e1     	ldr	x1, [x23]
 2c34b88: aa1303e0     	mov	x0, x19
 2c34b8c: b9003bff     	str	wzr, [sp, #0x38]
 2c34b90: f9000261     	str	x1, [x19]
 2c34b94: 97f6887e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34b98: f94002e1     	ldr	x1, [x23]
 2c34b9c: aa1503e0     	mov	x0, x21
 2c34ba0: f90002a1     	str	x1, [x21]
 2c34ba4: 97f6887a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34ba8: b9400288     	ldr	w8, [x20]
 2c34bac: 7100051f     	cmp	w8, #0x1
 2c34bb0: 540009ac     	b.gt	0x2c34ce4 <__start_il2cpp+0x16c6d0>
 2c34bb4: 34001168     	cbz	w8, 0x2c34de0 <__start_il2cpp+0x16c7cc>
 2c34bb8: 7100051f     	cmp	w8, #0x1
 2c34bbc: 54000e21     	b.ne	0x2c34d80 <__start_il2cpp+0x16c76c>
 2c34bc0: f9400680     	ldr	x0, [x20, #0x8]
 2c34bc4: b4001d40     	cbz	x0, 0x2c34f6c <__start_il2cpp+0x16c958>
 2c34bc8: b001b628     	adrp	x8, 0x62f9000
 2c34bcc: f9444108     	ldr	x8, [x8, #0x880]
 2c34bd0: f9400101     	ldr	x1, [x8]
 2c34bd4: 2a1f03e2     	mov	w2, wzr
 2c34bd8: aa1f03e3     	mov	x3, xzr
 2c34bdc: 948d13cb     	bl	0x4f79b08 <__start_il2cpp+0x24b14f4>
 2c34be0: aa0003f8     	mov	x24, x0
 2c34be4: b4001c60     	cbz	x0, 0x2c34f70 <__start_il2cpp+0x16c95c>
 2c34be8: b9401b08     	ldr	w8, [x24, #0x18]
 2c34bec: 34001c48     	cbz	w8, 0x2c34f74 <__start_il2cpp+0x16c960>
 2c34bf0: f9401300     	ldr	x0, [x24, #0x20]
 2c34bf4: aa1f03e1     	mov	x1, xzr
 2c34bf8: 949351c3     	bl	0x5109304 <__start_il2cpp+0x2640cf0>
 2c34bfc: b9401b08     	ldr	w8, [x24, #0x18]
 2c34c00: 721f791f     	tst	w8, #0xfffffffe
 2c34c04: 54001ba0     	b.eq	0x2c34f78 <__start_il2cpp+0x16c964>
 2c34c08: 2a0003f7     	mov	w23, w0
 2c34c0c: f9401700     	ldr	x0, [x24, #0x28]
 2c34c10: aa1f03e1     	mov	x1, xzr
 2c34c14: 949351bc     	bl	0x5109304 <__start_il2cpp+0x2640cf0>
 2c34c18: b9401288     	ldr	w8, [x20, #0x10]
 2c34c1c: 2a0003f8     	mov	w24, w0
 2c34c20: 7100051f     	cmp	w8, #0x1
 2c34c24: 5400018b     	b.lt	0x2c34c54 <__start_il2cpp+0x16c640>
 2c34c28: 2a1f03f9     	mov	w25, wzr
 2c34c2c: f9401ec0     	ldr	x0, [x22, #0x38]
 2c34c30: b40019a0     	cbz	x0, 0x2c34f64 <__start_il2cpp+0x16c950>
 2c34c34: 2a1703e1     	mov	w1, w23
 2c34c38: 2a1803e2     	mov	w2, w24
 2c34c3c: 2a1f03e4     	mov	w4, wzr
 2c34c40: 97ff9e24     	bl	0x2c1c4d0 <__start_il2cpp+0x153ebc>
 2c34c44: b9401288     	ldr	w8, [x20, #0x10]
 2c34c48: 11000739     	add	w25, w25, #0x1
 2c34c4c: 6b08033f     	cmp	w25, w8
 2c34c50: 54fffeeb     	b.lt	0x2c34c2c <__start_il2cpp+0x16c618>
 2c34c54: 9001b608     	adrp	x8, 0x62f4000
 2c34c58: f942ed08     	ldr	x8, [x8, #0x5d8]
 2c34c5c: f9400101     	ldr	x1, [x8]
 2c34c60: f90002a1     	str	x1, [x21]
 2c34c64: aa1503e0     	mov	x0, x21
 2c34c68: 97f68849     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34c6c: 9001b5f9     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34c70: f9470f39     	ldr	x25, [x25, #0xe18]
 2c34c74: b9002ff7     	str	w23, [sp, #0x2c]
 2c34c78: f9402720     	ldr	x0, [x25, #0x48]
 2c34c7c: 9100b3e1     	add	x1, sp, #0x2c
 2c34c80: 97f688b9     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34c84: aa0003f5     	mov	x21, x0
 2c34c88: f9402720     	ldr	x0, [x25, #0x48]
 2c34c8c: b9002bf8     	str	w24, [sp, #0x28]
 2c34c90: 9100a3e1     	add	x1, sp, #0x28
 2c34c94: 97f688b4     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34c98: aa0003f6     	mov	x22, x0
 2c34c9c: b9401288     	ldr	w8, [x20, #0x10]
 2c34ca0: f9402720     	ldr	x0, [x25, #0x48]
 2c34ca4: b90027e8     	str	w8, [sp, #0x24]
 2c34ca8: 910093e1     	add	x1, sp, #0x24
 2c34cac: 97f688ae     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34cb0: d001b648     	adrp	x8, 0x62fe000
 2c34cb4: aa0003e3     	mov	x3, x0
 2c34cb8: f9414108     	ldr	x8, [x8, #0x280]
 2c34cbc: f9400100     	ldr	x0, [x8]
 2c34cc0: aa1503e1     	mov	x1, x21
 2c34cc4: aa1603e2     	mov	x2, x22
 2c34cc8: aa1f03e4     	mov	x4, xzr
 2c34ccc: 948d089b     	bl	0x4f76f38 <__start_il2cpp+0x24ae924>
 2c34cd0: aa0003e1     	mov	x1, x0
 2c34cd4: f9000261     	str	x1, [x19]
 2c34cd8: aa1303e0     	mov	x0, x19
 2c34cdc: 97f6882c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34ce0: 1400009b     	b	0x2c34f4c <__start_il2cpp+0x16c938>
 2c34ce4: 7100091f     	cmp	w8, #0x2
 2c34ce8: 54000ac0     	b.eq	0x2c34e40 <__start_il2cpp+0x16c82c>
 2c34cec: 71000d1f     	cmp	w8, #0x3
 2c34cf0: 54000481     	b.ne	0x2c34d80 <__start_il2cpp+0x16c76c>
 2c34cf4: d001b648     	adrp	x8, 0x62fe000
 2c34cf8: aa1503e0     	mov	x0, x21
 2c34cfc: f9415108     	ldr	x8, [x8, #0x2a0]
 2c34d00: f9400101     	ldr	x1, [x8]
 2c34d04: f90002a1     	str	x1, [x21]
 2c34d08: 97f68821     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34d0c: 9001b5e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34d10: 9100b3e1     	add	x1, sp, #0x2c
 2c34d14: f9470d08     	ldr	x8, [x8, #0xe18]
 2c34d18: b9401289     	ldr	w9, [x20, #0x10]
 2c34d1c: f9402500     	ldr	x0, [x8, #0x48]
 2c34d20: b9002fe9     	str	w9, [sp, #0x2c]
 2c34d24: 97f68890     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34d28: d001b648     	adrp	x8, 0x62fe000
 2c34d2c: aa0003e1     	mov	x1, x0
 2c34d30: aa1f03e2     	mov	x2, xzr
 2c34d34: f9414908     	ldr	x8, [x8, #0x290]
 2c34d38: f9400108     	ldr	x8, [x8]
 2c34d3c: aa0803e0     	mov	x0, x8
 2c34d40: 948cde8c     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c34d44: aa0003e1     	mov	x1, x0
 2c34d48: f9000260     	str	x0, [x19]
 2c34d4c: aa1303e0     	mov	x0, x19
 2c34d50: 97f6880f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34d54: f94022c0     	ldr	x0, [x22, #0x40]
 2c34d58: b4001080     	cbz	x0, 0x2c34f68 <__start_il2cpp+0x16c954>
 2c34d5c: b9401288     	ldr	w8, [x20, #0x10]
 2c34d60: d001b60a     	adrp	x10, 0x62f6000
 2c34d64: aa1f03e3     	mov	x3, xzr
 2c34d68: f941114a     	ldr	x10, [x10, #0x220]
 2c34d6c: 531a6509     	lsl	w9, w8, #6
 2c34d70: f9400142     	ldr	x2, [x10]
 2c34d74: 4b080921     	sub	w1, w9, w8, lsl #2
 2c34d78: 97fde246     	bl	0x2bad690 <__start_il2cpp+0xe507c>
 2c34d7c: 14000074     	b	0x2c34f4c <__start_il2cpp+0x16c938>
 2c34d80: 9001b5e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34d84: f946f108     	ldr	x8, [x8, #0xde0]
 2c34d88: f9400100     	ldr	x0, [x8]
 2c34d8c: 97f688bb     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c34d90: d001b648     	adrp	x8, 0x62fe000
 2c34d94: aa1f03e2     	mov	x2, xzr
 2c34d98: aa0003f3     	mov	x19, x0
 2c34d9c: f9414508     	ldr	x8, [x8, #0x288]
 2c34da0: f9400101     	ldr	x1, [x8]
 2c34da4: 94944002     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2c34da8: 9001b5e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34dac: f946e908     	ldr	x8, [x8, #0xdd0]
 2c34db0: f9400100     	ldr	x0, [x8]
 2c34db4: b940e408     	ldr	w8, [x0, #0xe4]
 2c34db8: 35000048     	cbnz	w8, 0x2c34dc0 <__start_il2cpp+0x16c7ac>
 2c34dbc: 97f68868     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c34dc0: aa1303e0     	mov	x0, x19
 2c34dc4: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2c34dc8: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2c34dcc: aa1f03e1     	mov	x1, xzr
 2c34dd0: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2c34dd4: a94467fe     	ldp	x30, x25, [sp, #0x40]
 2c34dd8: 910203ff     	add	sp, sp, #0x80
 2c34ddc: 14bb098b     	b	0x5af7408 <__start_il2cpp+0x302edf4>
 2c34de0: f9401ad6     	ldr	x22, [x22, #0x30]
 2c34de4: b4000c36     	cbz	x22, 0x2c34f68 <__start_il2cpp+0x16c954>
 2c34de8: f001b62a     	adrp	x10, 0x62fb000
 2c34dec: d001b60b     	adrp	x11, 0x62f6000
 2c34df0: f946654a     	ldr	x10, [x10, #0xcc8]
 2c34df4: f94002c8     	ldr	x8, [x22]
 2c34df8: f941116b     	ldr	x11, [x11, #0x220]
 2c34dfc: b9401298     	ldr	w24, [x20, #0x10]
 2c34e00: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c34e04: f9400141     	ldr	x1, [x10]
 2c34e08: f9400177     	ldr	x23, [x11]
 2c34e0c: b4000129     	cbz	x9, 0x2c34e30 <__start_il2cpp+0x16c81c>
 2c34e10: f940590a     	ldr	x10, [x8, #0xb0]
 2c34e14: 9100214a     	add	x10, x10, #0x8
 2c34e18: f85f814b     	ldur	x11, [x10, #-0x8]
 2c34e1c: eb01017f     	cmp	x11, x1
 2c34e20: 54000500     	b.eq	0x2c34ec0 <__start_il2cpp+0x16c8ac>
 2c34e24: f1000529     	subs	x9, x9, #0x1
 2c34e28: 9100414a     	add	x10, x10, #0x10
 2c34e2c: 54ffff61     	b.ne	0x2c34e18 <__start_il2cpp+0x16c804>
 2c34e30: aa1603e0     	mov	x0, x22
 2c34e34: 52800042     	mov	w2, #0x2                // =2
 2c34e38: 97f7654b     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c34e3c: 14000025     	b	0x2c34ed0 <__start_il2cpp+0x16c8bc>
 2c34e40: d001b648     	adrp	x8, 0x62fe000
 2c34e44: aa1503e0     	mov	x0, x21
 2c34e48: f9413908     	ldr	x8, [x8, #0x270]
 2c34e4c: f9400101     	ldr	x1, [x8]
 2c34e50: f90002a1     	str	x1, [x21]
 2c34e54: 97f687ce     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34e58: 9001b5e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34e5c: 9100b3e1     	add	x1, sp, #0x2c
 2c34e60: f9470d08     	ldr	x8, [x8, #0xe18]
 2c34e64: b9401289     	ldr	w9, [x20, #0x10]
 2c34e68: f9402500     	ldr	x0, [x8, #0x48]
 2c34e6c: b9002fe9     	str	w9, [sp, #0x2c]
 2c34e70: 97f6883d     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34e74: d001b648     	adrp	x8, 0x62fe000
 2c34e78: aa0003e1     	mov	x1, x0
 2c34e7c: aa1f03e2     	mov	x2, xzr
 2c34e80: f9414d08     	ldr	x8, [x8, #0x298]
 2c34e84: f9400108     	ldr	x8, [x8]
 2c34e88: aa0803e0     	mov	x0, x8
 2c34e8c: 948cde39     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c34e90: aa0003e1     	mov	x1, x0
 2c34e94: f9000260     	str	x0, [x19]
 2c34e98: aa1303e0     	mov	x0, x19
 2c34e9c: 97f687bc     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34ea0: 3dc00280     	ldr	q0, [x20]
 2c34ea4: f9400a88     	ldr	x8, [x20, #0x10]
 2c34ea8: 910003e1     	mov	x1, sp
 2c34eac: aa1603e0     	mov	x0, x22
 2c34eb0: 3d8003e0     	str	q0, [sp]
 2c34eb4: f9000be8     	str	x8, [sp, #0x10]
 2c34eb8: 97fffdb4     	bl	0x2c34588 <__start_il2cpp+0x16bf74>
 2c34ebc: 14000024     	b	0x2c34f4c <__start_il2cpp+0x16c938>
 2c34ec0: b9400149     	ldr	w9, [x10]
 2c34ec4: 11000929     	add	w9, w9, #0x2
 2c34ec8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c34ecc: 9104e100     	add	x0, x8, #0x138
 2c34ed0: a9401408     	ldp	x8, x5, [x0]
 2c34ed4: aa1603e0     	mov	x0, x22
 2c34ed8: 2a1803e1     	mov	w1, w24
 2c34edc: 2a1f03e2     	mov	w2, wzr
 2c34ee0: 2a1f03e3     	mov	w3, wzr
 2c34ee4: aa1703e4     	mov	x4, x23
 2c34ee8: d63f0100     	blr	x8
 2c34eec: 9001b608     	adrp	x8, 0x62f4000
 2c34ef0: aa1503e0     	mov	x0, x21
 2c34ef4: f942f508     	ldr	x8, [x8, #0x5e8]
 2c34ef8: f9400101     	ldr	x1, [x8]
 2c34efc: f90002a1     	str	x1, [x21]
 2c34f00: 97f687a3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34f04: 9001b5e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34f08: 9100b3e1     	add	x1, sp, #0x2c
 2c34f0c: f9470d08     	ldr	x8, [x8, #0xe18]
 2c34f10: b9401289     	ldr	w9, [x20, #0x10]
 2c34f14: f9402500     	ldr	x0, [x8, #0x48]
 2c34f18: b9002fe9     	str	w9, [sp, #0x2c]
 2c34f1c: 97f68812     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c34f20: d001b648     	adrp	x8, 0x62fe000
 2c34f24: aa0003e1     	mov	x1, x0
 2c34f28: aa1f03e2     	mov	x2, xzr
 2c34f2c: f9413d08     	ldr	x8, [x8, #0x278]
 2c34f30: f9400108     	ldr	x8, [x8]
 2c34f34: aa0803e0     	mov	x0, x8
 2c34f38: 948cde0e     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2c34f3c: aa0003e1     	mov	x1, x0
 2c34f40: f9000260     	str	x0, [x19]
 2c34f44: aa1303e0     	mov	x0, x19
 2c34f48: 97f68791     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c34f4c: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2c34f50: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2c34f54: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2c34f58: a94467fe     	ldp	x30, x25, [sp, #0x40]
 2c34f5c: 910203ff     	add	sp, sp, #0x80
 2c34f60: d65f03c0     	ret
 2c34f64: 97f68849     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c34f68: 97f68848     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c34f6c: 97f68847     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c34f70: 97f68846     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c34f74: 97f68847     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c34f78: 97f68846     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c34f7c: 1400000d     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f80: 1400000c     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f84: 1400000b     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f88: 1400000a     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f8c: 14000009     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f90: 14000008     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f94: 14000007     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f98: 14000006     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34f9c: 14000005     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34fa0: 14000004     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34fa4: 14000003     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34fa8: 14000002     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34fac: 14000001     	b	0x2c34fb0 <__start_il2cpp+0x16c99c>
 2c34fb0: aa0003f3     	mov	x19, x0
 2c34fb4: 7100043f     	cmp	w1, #0x1
 2c34fb8: 540004e1     	b.ne	0x2c35054 <__start_il2cpp+0x16ca40>
 2c34fbc: aa1303e0     	mov	x0, x19
 2c34fc0: 94cbc5e0     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c34fc4: aa0003f3     	mov	x19, x0
 2c34fc8: 9001b5e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c34fcc: f946f000     	ldr	x0, [x0, #0xde0]
 2c34fd0: 97f68789     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c34fd4: f9400268     	ldr	x8, [x19]
 2c34fd8: f9400101     	ldr	x1, [x8]
 2c34fdc: 97f6892d     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2c34fe0: 36000260     	tbz	w0, #0x0, 0x2c3502c <__start_il2cpp+0x16ca18>
 2c34fe4: b9803bf4     	ldrsw	x20, [sp, #0x38]
 2c34fe8: f9400273     	ldr	x19, [x19]
 2c34fec: 9100c3e8     	add	x8, sp, #0x30
 2c34ff0: f8347913     	str	x19, [x8, x20, lsl #3]
 2c34ff4: 11000688     	add	w8, w20, #0x1
 2c34ff8: b9003be8     	str	w8, [sp, #0x38]
 2c34ffc: 94cbc5d5     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c35000: f001b5c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c35004: f946e800     	ldr	x0, [x0, #0xdd0]
 2c35008: 97f6877b     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c3500c: b940e408     	ldr	w8, [x0, #0xe4]
 2c35010: 35000048     	cbnz	w8, 0x2c35018 <__start_il2cpp+0x16ca04>
 2c35014: 97f687d2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35018: aa1303e0     	mov	x0, x19
 2c3501c: aa1f03e1     	mov	x1, xzr
 2c35020: 94bb08fa     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2c35024: b9003bf4     	str	w20, [sp, #0x38]
 2c35028: 17ffffc9     	b	0x2c34f4c <__start_il2cpp+0x16c938>
 2c3502c: 52800100     	mov	w0, #0x8                // =8
 2c35030: 94cbc5e4     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2c35034: f9400268     	ldr	x8, [x19]
 2c35038: f9000008     	str	x8, [x0]
 2c3503c: f00197a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2c35040: 91302021     	add	x1, x1, #0xc08
 2c35044: aa1f03e2     	mov	x2, xzr
 2c35048: 94cbc5e2     	bl	0x5f267d0 <__cxa_throw@plt>
 2c3504c: aa0003f3     	mov	x19, x0
 2c35050: 94cbc5c0     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c35054: aa1303e0     	mov	x0, x19
 2c35058: 97fa3da1     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c3505c: 97e9c27c     	bl	0x26a5a4c <.text+0x8ec>

# MergeFeverEventController :: MergeFever.MergeFeverLevel get_previousLevel()
# VA 0x2c35060 .. 0x2c350a0 (next mapped method entry)
 2c35060: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c35064: f9400c08     	ldr	x8, [x0, #0x18]
 2c35068: b40001a8     	cbz	x8, 0x2c3509c <__start_il2cpp+0x16ca88>
 2c3506c: f9402d08     	ldr	x8, [x8, #0x58]
 2c35070: b4000168     	cbz	x8, 0x2c3509c <__start_il2cpp+0x16ca88>
 2c35074: f9403013     	ldr	x19, [x0, #0x60]
 2c35078: aa0803e0     	mov	x0, x8
 2c3507c: aa1f03e1     	mov	x1, xzr
 2c35080: 97fc6c1d     	bl	0x2b500f4 <__start_il2cpp+0x87ae0>
 2c35084: b40000d3     	cbz	x19, 0x2c3509c <__start_il2cpp+0x16ca88>
 2c35088: 51000401     	sub	w1, w0, #0x1
 2c3508c: aa1303e0     	mov	x0, x19
 2c35090: aa1f03e2     	mov	x2, xzr
 2c35094: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c35098: 1404aa34     	b	0x2d5f968 <__start_il2cpp+0x297354>
 2c3509c: 97f687fb     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void OnPostMerge(PostMergeSignal postMergeSignal)
# VA 0x2c350a0 .. 0x2c3523c (next mapped method entry)
 2c350a0: 6dbc23e9     	stp	d9, d8, [sp, #-0x40]!
 2c350a4: f9000bfe     	str	x30, [sp, #0x10]
 2c350a8: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c350ac: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c350b0: b001d6f4     	adrp	x20, 0x6712000
 2c350b4: aa0103f5     	mov	x21, x1
 2c350b8: aa0003f3     	mov	x19, x0
 2c350bc: 3973d288     	ldrb	w8, [x20, #0xcf4]
 2c350c0: 370000c8     	tbnz	w8, #0x0, 0x2c350d8 <__start_il2cpp+0x16cac4>
 2c350c4: d001b5e0     	adrp	x0, 0x62f3000
 2c350c8: f9431000     	ldr	x0, [x0, #0x620]
 2c350cc: 97f68745     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c350d0: 52800028     	mov	w8, #0x1                // =1
 2c350d4: 3933d288     	strb	w8, [x20, #0xcf4]
 2c350d8: f9404e60     	ldr	x0, [x19, #0x98]
 2c350dc: b4000a40     	cbz	x0, 0x2c35224 <__start_il2cpp+0x16cc10>
 2c350e0: aa1f03e1     	mov	x1, xzr
 2c350e4: 97fd165c     	bl	0x2b7aa54 <__start_il2cpp+0xb2440>
 2c350e8: 360009e0     	tbz	w0, #0x0, 0x2c35224 <__start_il2cpp+0x16cc10>
 2c350ec: 3940c6a8     	ldrb	w8, [x21, #0x31]
 2c350f0: 360009a8     	tbz	w8, #0x0, 0x2c35224 <__start_il2cpp+0x16cc10>
 2c350f4: f9403268     	ldr	x8, [x19, #0x60]
 2c350f8: b4000968     	cbz	x8, 0x2c35224 <__start_il2cpp+0x16cc10>
 2c350fc: f9401274     	ldr	x20, [x19, #0x20]
 2c35100: 91022260     	add	x0, x19, #0x88
 2c35104: aa1f03e1     	mov	x1, xzr
 2c35108: 94934fb3     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2c3510c: d001b5e8     	adrp	x8, 0x62f3000
 2c35110: aa0003e1     	mov	x1, x0
 2c35114: aa1f03e2     	mov	x2, xzr
 2c35118: f9431108     	ldr	x8, [x8, #0x620]
 2c3511c: f9400108     	ldr	x8, [x8]
 2c35120: aa0803e0     	mov	x0, x8
 2c35124: 948ccf1f     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c35128: f9400aa8     	ldr	x8, [x21, #0x10]
 2c3512c: b4000868     	cbz	x8, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c35130: aa0003f5     	mov	x21, x0
 2c35134: aa0803e0     	mov	x0, x8
 2c35138: aa1f03e1     	mov	x1, xzr
 2c3513c: 94bc2a08     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c35140: b40007c0     	cbz	x0, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c35144: aa1f03e1     	mov	x1, xzr
 2c35148: 94bc7bba     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c3514c: 1e204008     	fmov	s8, s0
 2c35150: 1e204029     	fmov	s9, s1
 2c35154: b001d6f6     	adrp	x22, 0x6712000
 2c35158: 39477ac8     	ldrb	w8, [x22, #0x1de]
 2c3515c: 350000c8     	cbnz	w8, 0x2c35174 <__start_il2cpp+0x16cb60>
 2c35160: 9001b5e0     	adrp	x0, 0x62f1000
 2c35164: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c35168: 97f6871e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3516c: 52800028     	mov	w8, #0x1                // =1
 2c35170: 39077ac8     	strb	w8, [x22, #0x1de]
 2c35174: b4000634     	cbz	x20, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c35178: 9001b5e8     	adrp	x8, 0x62f1000
 2c3517c: d0ff2269     	adrp	x9, 0x1083000
 2c35180: aa1403e0     	mov	x0, x20
 2c35184: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c35188: bd465120     	ldr	s0, [x9, #0x650]
 2c3518c: aa1503e1     	mov	x1, x21
 2c35190: aa1f03e2     	mov	x2, xzr
 2c35194: f9400108     	ldr	x8, [x8]
 2c35198: f9405d08     	ldr	x8, [x8, #0xb8]
 2c3519c: 2d430502     	ldp	s2, s1, [x8, #0x18]
 2c351a0: 1e200821     	fmul	s1, s1, s0
 2c351a4: 1e200840     	fmul	s0, s2, s0
 2c351a8: 1e212921     	fadd	s1, s9, s1
 2c351ac: 1e202900     	fadd	s0, s8, s0
 2c351b0: 9402c760     	bl	0x2ce6f30 <__start_il2cpp+0x21e91c>
 2c351b4: f9400e68     	ldr	x8, [x19, #0x18]
 2c351b8: b4000408     	cbz	x8, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c351bc: f9402d00     	ldr	x0, [x8, #0x58]
 2c351c0: b40003c0     	cbz	x0, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c351c4: b9408a61     	ldr	w1, [x19, #0x88]
 2c351c8: aa1f03e2     	mov	x2, xzr
 2c351cc: 97fc6cdf     	bl	0x2b50548 <__start_il2cpp+0x87f34>
 2c351d0: f9400e68     	ldr	x8, [x19, #0x18]
 2c351d4: b4000328     	cbz	x8, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c351d8: f9402d00     	ldr	x0, [x8, #0x58]
 2c351dc: b40002e0     	cbz	x0, 0x2c35238 <__start_il2cpp+0x16cc24>
 2c351e0: aa1f03e1     	mov	x1, xzr
 2c351e4: 97fc6bca     	bl	0x2b5010c <__start_il2cpp+0x87af8>
 2c351e8: 2a0003f4     	mov	w20, w0
 2c351ec: aa1303e0     	mov	x0, x19
 2c351f0: 97fff524     	bl	0x2c32680 <__start_il2cpp+0x16a06c>
 2c351f4: f9404a68     	ldr	x8, [x19, #0x90]
 2c351f8: b4000168     	cbz	x8, 0x2c35224 <__start_il2cpp+0x16cc10>
 2c351fc: 6b00029f     	cmp	w20, w0
 2c35200: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c35204: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c35208: 1a9fb7e1     	cset	w1, ge
 2c3520c: f9402100     	ldr	x0, [x8, #0x40]
 2c35210: f9401502     	ldr	x2, [x8, #0x28]
 2c35214: f9400d03     	ldr	x3, [x8, #0x18]
 2c35218: f9400bfe     	ldr	x30, [sp, #0x10]
 2c3521c: 6cc423e9     	ldp	d9, d8, [sp], #0x40
 2c35220: d61f0060     	br	x3
 2c35224: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c35228: f9400bfe     	ldr	x30, [sp, #0x10]
 2c3522c: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c35230: 6cc423e9     	ldp	d9, d8, [sp], #0x40
 2c35234: d65f03c0     	ret
 2c35238: 97f68794     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MergeFeverEventController :: System.Void .ctor()
# VA 0x2c3523c .. 0x2c35ef0 (next mapped method entry)
 2c3523c: 52800028     	mov	w8, #0x1                // =1
 2c35240: aa1f03e1     	mov	x1, xzr
 2c35244: b9008808     	str	w8, [x0, #0x88]
 2c35248: 14946a40     	b	0x514fb48 <__start_il2cpp+0x2687534>
 2c3524c: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35250: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35254: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35258: f9401c68     	ldr	x8, [x3, #0x38]
 2c3525c: aa0303f4     	mov	x20, x3
 2c35260: aa0203f7     	mov	x23, x2
 2c35264: aa0103f3     	mov	x19, x1
 2c35268: aa0003f6     	mov	x22, x0
 2c3526c: b5000108     	cbnz	x8, 0x2c3528c <__start_il2cpp+0x16cc78>
 2c35270: d001c200     	adrp	x0, 0x6477000
 2c35274: 910b0000     	add	x0, x0, #0x2c0
 2c35278: 97f686da     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3527c: f9401e88     	ldr	x8, [x20, #0x38]
 2c35280: b5000068     	cbnz	x8, 0x2c3528c <__start_il2cpp+0x16cc78>
 2c35284: aa1403e0     	mov	x0, x20
 2c35288: 97f7637f     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c3528c: f94002d5     	ldr	x21, [x22]
 2c35290: b5000235     	cbnz	x21, 0x2c352d4 <__start_il2cpp+0x16ccc0>
 2c35294: f9401e88     	ldr	x8, [x20, #0x38]
 2c35298: f9400900     	ldr	x0, [x8, #0x10]
 2c3529c: 9104d408     	add	x8, x0, #0x135
 2c352a0: 79400108     	ldrh	w8, [x8]
 2c352a4: 37000048     	tbnz	w8, #0x0, 0x2c352ac <__start_il2cpp+0x16cc98>
 2c352a8: 97f76360     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c352ac: b940e408     	ldr	w8, [x0, #0xe4]
 2c352b0: 35000048     	cbnz	w8, 0x2c352b8 <__start_il2cpp+0x16cca4>
 2c352b4: 97f6872a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c352b8: f9401e88     	ldr	x8, [x20, #0x38]
 2c352bc: aa1703e0     	mov	x0, x23
 2c352c0: aa1603e1     	mov	x1, x22
 2c352c4: f9400502     	ldr	x2, [x8, #0x8]
 2c352c8: 9466679a     	bl	0x45cf130 <__start_il2cpp+0x1b06b1c>
 2c352cc: f94002d5     	ldr	x21, [x22]
 2c352d0: b4000435     	cbz	x21, 0x2c35354 <__start_il2cpp+0x16cd40>
 2c352d4: d001b5ea     	adrp	x10, 0x62f3000
 2c352d8: f94002a8     	ldr	x8, [x21]
 2c352dc: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c352e0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c352e4: f9400141     	ldr	x1, [x10]
 2c352e8: b4000129     	cbz	x9, 0x2c3530c <__start_il2cpp+0x16ccf8>
 2c352ec: f940590a     	ldr	x10, [x8, #0xb0]
 2c352f0: 9100214a     	add	x10, x10, #0x8
 2c352f4: f85f814b     	ldur	x11, [x10, #-0x8]
 2c352f8: eb01017f     	cmp	x11, x1
 2c352fc: 54000100     	b.eq	0x2c3531c <__start_il2cpp+0x16cd08>
 2c35300: f1000529     	subs	x9, x9, #0x1
 2c35304: 9100414a     	add	x10, x10, #0x10
 2c35308: 54ffff61     	b.ne	0x2c352f4 <__start_il2cpp+0x16cce0>
 2c3530c: aa1503e0     	mov	x0, x21
 2c35310: 2a1f03e2     	mov	w2, wzr
 2c35314: 97f76414     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35318: 14000004     	b	0x2c35328 <__start_il2cpp+0x16cd14>
 2c3531c: b9800149     	ldrsw	x9, [x10]
 2c35320: 8b091108     	add	x8, x8, x9, lsl #4
 2c35324: 9104e100     	add	x0, x8, #0x138
 2c35328: a9400408     	ldp	x8, x1, [x0]
 2c3532c: aa1503e0     	mov	x0, x21
 2c35330: d63f0100     	blr	x8
 2c35334: f9401e88     	ldr	x8, [x20, #0x38]
 2c35338: aa0003e1     	mov	x1, x0
 2c3533c: aa1303e0     	mov	x0, x19
 2c35340: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35344: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35348: f9401502     	ldr	x2, [x8, #0x28]
 2c3534c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35350: 17fbd38c     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c35354: 97f6874d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35358: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c3535c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35360: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35364: f9401c68     	ldr	x8, [x3, #0x38]
 2c35368: aa0303f4     	mov	x20, x3
 2c3536c: aa0203f7     	mov	x23, x2
 2c35370: aa0103f3     	mov	x19, x1
 2c35374: aa0003f6     	mov	x22, x0
 2c35378: b5000108     	cbnz	x8, 0x2c35398 <__start_il2cpp+0x16cd84>
 2c3537c: d001c200     	adrp	x0, 0x6477000
 2c35380: 910b0000     	add	x0, x0, #0x2c0
 2c35384: 97f68697     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35388: f9401e88     	ldr	x8, [x20, #0x38]
 2c3538c: b5000068     	cbnz	x8, 0x2c35398 <__start_il2cpp+0x16cd84>
 2c35390: aa1403e0     	mov	x0, x20
 2c35394: 97f7633c     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c35398: f94002d5     	ldr	x21, [x22]
 2c3539c: b5000235     	cbnz	x21, 0x2c353e0 <__start_il2cpp+0x16cdcc>
 2c353a0: f9401e88     	ldr	x8, [x20, #0x38]
 2c353a4: f9400900     	ldr	x0, [x8, #0x10]
 2c353a8: 9104d408     	add	x8, x0, #0x135
 2c353ac: 79400108     	ldrh	w8, [x8]
 2c353b0: 37000048     	tbnz	w8, #0x0, 0x2c353b8 <__start_il2cpp+0x16cda4>
 2c353b4: 97f7631d     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c353b8: b940e408     	ldr	w8, [x0, #0xe4]
 2c353bc: 35000048     	cbnz	w8, 0x2c353c4 <__start_il2cpp+0x16cdb0>
 2c353c0: 97f686e7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c353c4: f9401e88     	ldr	x8, [x20, #0x38]
 2c353c8: aa1703e0     	mov	x0, x23
 2c353cc: aa1603e1     	mov	x1, x22
 2c353d0: f9400502     	ldr	x2, [x8, #0x8]
 2c353d4: 9466695e     	bl	0x45cf94c <__start_il2cpp+0x1b07338>
 2c353d8: f94002d5     	ldr	x21, [x22]
 2c353dc: b4000435     	cbz	x21, 0x2c35460 <__start_il2cpp+0x16ce4c>
 2c353e0: d001b5ea     	adrp	x10, 0x62f3000
 2c353e4: f94002a8     	ldr	x8, [x21]
 2c353e8: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c353ec: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c353f0: f9400141     	ldr	x1, [x10]
 2c353f4: b4000129     	cbz	x9, 0x2c35418 <__start_il2cpp+0x16ce04>
 2c353f8: f940590a     	ldr	x10, [x8, #0xb0]
 2c353fc: 9100214a     	add	x10, x10, #0x8
 2c35400: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35404: eb01017f     	cmp	x11, x1
 2c35408: 54000100     	b.eq	0x2c35428 <__start_il2cpp+0x16ce14>
 2c3540c: f1000529     	subs	x9, x9, #0x1
 2c35410: 9100414a     	add	x10, x10, #0x10
 2c35414: 54ffff61     	b.ne	0x2c35400 <__start_il2cpp+0x16cdec>
 2c35418: aa1503e0     	mov	x0, x21
 2c3541c: 2a1f03e2     	mov	w2, wzr
 2c35420: 97f763d1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35424: 14000004     	b	0x2c35434 <__start_il2cpp+0x16ce20>
 2c35428: b9800149     	ldrsw	x9, [x10]
 2c3542c: 8b091108     	add	x8, x8, x9, lsl #4
 2c35430: 9104e100     	add	x0, x8, #0x138
 2c35434: a9400408     	ldp	x8, x1, [x0]
 2c35438: aa1503e0     	mov	x0, x21
 2c3543c: d63f0100     	blr	x8
 2c35440: f9401e88     	ldr	x8, [x20, #0x38]
 2c35444: aa0003e1     	mov	x1, x0
 2c35448: aa1303e0     	mov	x0, x19
 2c3544c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35450: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35454: f9401502     	ldr	x2, [x8, #0x28]
 2c35458: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c3545c: 17fbd349     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c35460: 97f6870a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35464: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35468: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c3546c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35470: f9401c68     	ldr	x8, [x3, #0x38]
 2c35474: aa0303f4     	mov	x20, x3
 2c35478: aa0203f7     	mov	x23, x2
 2c3547c: aa0103f3     	mov	x19, x1
 2c35480: aa0003f6     	mov	x22, x0
 2c35484: b5000108     	cbnz	x8, 0x2c354a4 <__start_il2cpp+0x16ce90>
 2c35488: d001c200     	adrp	x0, 0x6477000
 2c3548c: 910b0000     	add	x0, x0, #0x2c0
 2c35490: 97f68654     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35494: f9401e88     	ldr	x8, [x20, #0x38]
 2c35498: b5000068     	cbnz	x8, 0x2c354a4 <__start_il2cpp+0x16ce90>
 2c3549c: aa1403e0     	mov	x0, x20
 2c354a0: 97f762f9     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c354a4: f94002d5     	ldr	x21, [x22]
 2c354a8: b5000235     	cbnz	x21, 0x2c354ec <__start_il2cpp+0x16ced8>
 2c354ac: f9401e88     	ldr	x8, [x20, #0x38]
 2c354b0: f9400900     	ldr	x0, [x8, #0x10]
 2c354b4: 9104d408     	add	x8, x0, #0x135
 2c354b8: 79400108     	ldrh	w8, [x8]
 2c354bc: 37000048     	tbnz	w8, #0x0, 0x2c354c4 <__start_il2cpp+0x16ceb0>
 2c354c0: 97f762da     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c354c4: b940e408     	ldr	w8, [x0, #0xe4]
 2c354c8: 35000048     	cbnz	w8, 0x2c354d0 <__start_il2cpp+0x16cebc>
 2c354cc: 97f686a4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c354d0: f9401e88     	ldr	x8, [x20, #0x38]
 2c354d4: aa1703e0     	mov	x0, x23
 2c354d8: aa1603e1     	mov	x1, x22
 2c354dc: f9400502     	ldr	x2, [x8, #0x8]
 2c354e0: 94666b25     	bl	0x45d0174 <__start_il2cpp+0x1b07b60>
 2c354e4: f94002d5     	ldr	x21, [x22]
 2c354e8: b4000435     	cbz	x21, 0x2c3556c <__start_il2cpp+0x16cf58>
 2c354ec: d001b5ea     	adrp	x10, 0x62f3000
 2c354f0: f94002a8     	ldr	x8, [x21]
 2c354f4: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c354f8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c354fc: f9400141     	ldr	x1, [x10]
 2c35500: b4000129     	cbz	x9, 0x2c35524 <__start_il2cpp+0x16cf10>
 2c35504: f940590a     	ldr	x10, [x8, #0xb0]
 2c35508: 9100214a     	add	x10, x10, #0x8
 2c3550c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35510: eb01017f     	cmp	x11, x1
 2c35514: 54000100     	b.eq	0x2c35534 <__start_il2cpp+0x16cf20>
 2c35518: f1000529     	subs	x9, x9, #0x1
 2c3551c: 9100414a     	add	x10, x10, #0x10
 2c35520: 54ffff61     	b.ne	0x2c3550c <__start_il2cpp+0x16cef8>
 2c35524: aa1503e0     	mov	x0, x21
 2c35528: 2a1f03e2     	mov	w2, wzr
 2c3552c: 97f7638e     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35530: 14000004     	b	0x2c35540 <__start_il2cpp+0x16cf2c>
 2c35534: b9800149     	ldrsw	x9, [x10]
 2c35538: 8b091108     	add	x8, x8, x9, lsl #4
 2c3553c: 9104e100     	add	x0, x8, #0x138
 2c35540: a9400408     	ldp	x8, x1, [x0]
 2c35544: aa1503e0     	mov	x0, x21
 2c35548: d63f0100     	blr	x8
 2c3554c: f9401e88     	ldr	x8, [x20, #0x38]
 2c35550: aa0003e1     	mov	x1, x0
 2c35554: aa1303e0     	mov	x0, x19
 2c35558: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c3555c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35560: f9401502     	ldr	x2, [x8, #0x28]
 2c35564: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35568: 14b49c43     	b	0x595c674 <__start_il2cpp+0x2e94060>
 2c3556c: 97f686c7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35570: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35574: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35578: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c3557c: f9401c68     	ldr	x8, [x3, #0x38]
 2c35580: aa0303f4     	mov	x20, x3
 2c35584: aa0203f7     	mov	x23, x2
 2c35588: aa0103f3     	mov	x19, x1
 2c3558c: aa0003f6     	mov	x22, x0
 2c35590: b5000108     	cbnz	x8, 0x2c355b0 <__start_il2cpp+0x16cf9c>
 2c35594: d001c200     	adrp	x0, 0x6477000
 2c35598: 910b0000     	add	x0, x0, #0x2c0
 2c3559c: 97f68611     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c355a0: f9401e88     	ldr	x8, [x20, #0x38]
 2c355a4: b5000068     	cbnz	x8, 0x2c355b0 <__start_il2cpp+0x16cf9c>
 2c355a8: aa1403e0     	mov	x0, x20
 2c355ac: 97f762b6     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c355b0: f94002d5     	ldr	x21, [x22]
 2c355b4: b5000235     	cbnz	x21, 0x2c355f8 <__start_il2cpp+0x16cfe4>
 2c355b8: f9401e88     	ldr	x8, [x20, #0x38]
 2c355bc: f9400900     	ldr	x0, [x8, #0x10]
 2c355c0: 9104d408     	add	x8, x0, #0x135
 2c355c4: 79400108     	ldrh	w8, [x8]
 2c355c8: 37000048     	tbnz	w8, #0x0, 0x2c355d0 <__start_il2cpp+0x16cfbc>
 2c355cc: 97f76297     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c355d0: b940e408     	ldr	w8, [x0, #0xe4]
 2c355d4: 35000048     	cbnz	w8, 0x2c355dc <__start_il2cpp+0x16cfc8>
 2c355d8: 97f68661     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c355dc: f9401e88     	ldr	x8, [x20, #0x38]
 2c355e0: aa1703e0     	mov	x0, x23
 2c355e4: aa1603e1     	mov	x1, x22
 2c355e8: f9400502     	ldr	x2, [x8, #0x8]
 2c355ec: 94666ce9     	bl	0x45d0990 <__start_il2cpp+0x1b0837c>
 2c355f0: f94002d5     	ldr	x21, [x22]
 2c355f4: b4000435     	cbz	x21, 0x2c35678 <__start_il2cpp+0x16d064>
 2c355f8: d001b5ea     	adrp	x10, 0x62f3000
 2c355fc: f94002a8     	ldr	x8, [x21]
 2c35600: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35604: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35608: f9400141     	ldr	x1, [x10]
 2c3560c: b4000129     	cbz	x9, 0x2c35630 <__start_il2cpp+0x16d01c>
 2c35610: f940590a     	ldr	x10, [x8, #0xb0]
 2c35614: 9100214a     	add	x10, x10, #0x8
 2c35618: f85f814b     	ldur	x11, [x10, #-0x8]
 2c3561c: eb01017f     	cmp	x11, x1
 2c35620: 54000100     	b.eq	0x2c35640 <__start_il2cpp+0x16d02c>
 2c35624: f1000529     	subs	x9, x9, #0x1
 2c35628: 9100414a     	add	x10, x10, #0x10
 2c3562c: 54ffff61     	b.ne	0x2c35618 <__start_il2cpp+0x16d004>
 2c35630: aa1503e0     	mov	x0, x21
 2c35634: 2a1f03e2     	mov	w2, wzr
 2c35638: 97f7634b     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c3563c: 14000004     	b	0x2c3564c <__start_il2cpp+0x16d038>
 2c35640: b9800149     	ldrsw	x9, [x10]
 2c35644: 8b091108     	add	x8, x8, x9, lsl #4
 2c35648: 9104e100     	add	x0, x8, #0x138
 2c3564c: a9400408     	ldp	x8, x1, [x0]
 2c35650: aa1503e0     	mov	x0, x21
 2c35654: d63f0100     	blr	x8
 2c35658: f9401e88     	ldr	x8, [x20, #0x38]
 2c3565c: aa0003e1     	mov	x1, x0
 2c35660: aa1303e0     	mov	x0, x19
 2c35664: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35668: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c3566c: f9401502     	ldr	x2, [x8, #0x28]
 2c35670: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35674: 17fbd2c3     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c35678: 97f68684     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c3567c: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35680: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35684: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35688: f9401c68     	ldr	x8, [x3, #0x38]
 2c3568c: aa0303f4     	mov	x20, x3
 2c35690: aa0203f7     	mov	x23, x2
 2c35694: aa0103f3     	mov	x19, x1
 2c35698: aa0003f6     	mov	x22, x0
 2c3569c: b5000108     	cbnz	x8, 0x2c356bc <__start_il2cpp+0x16d0a8>
 2c356a0: d001c200     	adrp	x0, 0x6477000
 2c356a4: 910b0000     	add	x0, x0, #0x2c0
 2c356a8: 97f685ce     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c356ac: f9401e88     	ldr	x8, [x20, #0x38]
 2c356b0: b5000068     	cbnz	x8, 0x2c356bc <__start_il2cpp+0x16d0a8>
 2c356b4: aa1403e0     	mov	x0, x20
 2c356b8: 97f76273     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c356bc: f94002d5     	ldr	x21, [x22]
 2c356c0: b5000235     	cbnz	x21, 0x2c35704 <__start_il2cpp+0x16d0f0>
 2c356c4: f9401e88     	ldr	x8, [x20, #0x38]
 2c356c8: f9400900     	ldr	x0, [x8, #0x10]
 2c356cc: 9104d408     	add	x8, x0, #0x135
 2c356d0: 79400108     	ldrh	w8, [x8]
 2c356d4: 37000048     	tbnz	w8, #0x0, 0x2c356dc <__start_il2cpp+0x16d0c8>
 2c356d8: 97f76254     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c356dc: b940e408     	ldr	w8, [x0, #0xe4]
 2c356e0: 35000048     	cbnz	w8, 0x2c356e8 <__start_il2cpp+0x16d0d4>
 2c356e4: 97f6861e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c356e8: f9401e88     	ldr	x8, [x20, #0x38]
 2c356ec: aa1703e0     	mov	x0, x23
 2c356f0: aa1603e1     	mov	x1, x22
 2c356f4: f9400502     	ldr	x2, [x8, #0x8]
 2c356f8: 94666eaf     	bl	0x45d11b4 <__start_il2cpp+0x1b08ba0>
 2c356fc: f94002d5     	ldr	x21, [x22]
 2c35700: b4000435     	cbz	x21, 0x2c35784 <__start_il2cpp+0x16d170>
 2c35704: d001b5ea     	adrp	x10, 0x62f3000
 2c35708: f94002a8     	ldr	x8, [x21]
 2c3570c: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35710: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35714: f9400141     	ldr	x1, [x10]
 2c35718: b4000129     	cbz	x9, 0x2c3573c <__start_il2cpp+0x16d128>
 2c3571c: f940590a     	ldr	x10, [x8, #0xb0]
 2c35720: 9100214a     	add	x10, x10, #0x8
 2c35724: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35728: eb01017f     	cmp	x11, x1
 2c3572c: 54000100     	b.eq	0x2c3574c <__start_il2cpp+0x16d138>
 2c35730: f1000529     	subs	x9, x9, #0x1
 2c35734: 9100414a     	add	x10, x10, #0x10
 2c35738: 54ffff61     	b.ne	0x2c35724 <__start_il2cpp+0x16d110>
 2c3573c: aa1503e0     	mov	x0, x21
 2c35740: 2a1f03e2     	mov	w2, wzr
 2c35744: 97f76308     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35748: 14000004     	b	0x2c35758 <__start_il2cpp+0x16d144>
 2c3574c: b9800149     	ldrsw	x9, [x10]
 2c35750: 8b091108     	add	x8, x8, x9, lsl #4
 2c35754: 9104e100     	add	x0, x8, #0x138
 2c35758: a9400408     	ldp	x8, x1, [x0]
 2c3575c: aa1503e0     	mov	x0, x21
 2c35760: d63f0100     	blr	x8
 2c35764: f9401e88     	ldr	x8, [x20, #0x38]
 2c35768: aa0003e1     	mov	x1, x0
 2c3576c: aa1303e0     	mov	x0, x19
 2c35770: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35774: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35778: f9401502     	ldr	x2, [x8, #0x28]
 2c3577c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35780: 14b49bbd     	b	0x595c674 <__start_il2cpp+0x2e94060>
 2c35784: 97f68641     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35788: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c3578c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35790: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35794: f9401c68     	ldr	x8, [x3, #0x38]
 2c35798: aa0303f4     	mov	x20, x3
 2c3579c: aa0203f7     	mov	x23, x2
 2c357a0: aa0103f3     	mov	x19, x1
 2c357a4: aa0003f6     	mov	x22, x0
 2c357a8: b5000108     	cbnz	x8, 0x2c357c8 <__start_il2cpp+0x16d1b4>
 2c357ac: d001c200     	adrp	x0, 0x6477000
 2c357b0: 910b0000     	add	x0, x0, #0x2c0
 2c357b4: 97f6858b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c357b8: f9401e88     	ldr	x8, [x20, #0x38]
 2c357bc: b5000068     	cbnz	x8, 0x2c357c8 <__start_il2cpp+0x16d1b4>
 2c357c0: aa1403e0     	mov	x0, x20
 2c357c4: 97f76230     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c357c8: f94002d5     	ldr	x21, [x22]
 2c357cc: b5000235     	cbnz	x21, 0x2c35810 <__start_il2cpp+0x16d1fc>
 2c357d0: f9401e88     	ldr	x8, [x20, #0x38]
 2c357d4: f9400900     	ldr	x0, [x8, #0x10]
 2c357d8: 9104d408     	add	x8, x0, #0x135
 2c357dc: 79400108     	ldrh	w8, [x8]
 2c357e0: 37000048     	tbnz	w8, #0x0, 0x2c357e8 <__start_il2cpp+0x16d1d4>
 2c357e4: 97f76211     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c357e8: b940e408     	ldr	w8, [x0, #0xe4]
 2c357ec: 35000048     	cbnz	w8, 0x2c357f4 <__start_il2cpp+0x16d1e0>
 2c357f0: 97f685db     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c357f4: f9401e88     	ldr	x8, [x20, #0x38]
 2c357f8: aa1703e0     	mov	x0, x23
 2c357fc: aa1603e1     	mov	x1, x22
 2c35800: f9400502     	ldr	x2, [x8, #0x8]
 2c35804: 94667073     	bl	0x45d19d0 <__start_il2cpp+0x1b093bc>
 2c35808: f94002d5     	ldr	x21, [x22]
 2c3580c: b4000435     	cbz	x21, 0x2c35890 <__start_il2cpp+0x16d27c>
 2c35810: d001b5ea     	adrp	x10, 0x62f3000
 2c35814: f94002a8     	ldr	x8, [x21]
 2c35818: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c3581c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35820: f9400141     	ldr	x1, [x10]
 2c35824: b4000129     	cbz	x9, 0x2c35848 <__start_il2cpp+0x16d234>
 2c35828: f940590a     	ldr	x10, [x8, #0xb0]
 2c3582c: 9100214a     	add	x10, x10, #0x8
 2c35830: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35834: eb01017f     	cmp	x11, x1
 2c35838: 54000100     	b.eq	0x2c35858 <__start_il2cpp+0x16d244>
 2c3583c: f1000529     	subs	x9, x9, #0x1
 2c35840: 9100414a     	add	x10, x10, #0x10
 2c35844: 54ffff61     	b.ne	0x2c35830 <__start_il2cpp+0x16d21c>
 2c35848: aa1503e0     	mov	x0, x21
 2c3584c: 2a1f03e2     	mov	w2, wzr
 2c35850: 97f762c5     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35854: 14000004     	b	0x2c35864 <__start_il2cpp+0x16d250>
 2c35858: b9800149     	ldrsw	x9, [x10]
 2c3585c: 8b091108     	add	x8, x8, x9, lsl #4
 2c35860: 9104e100     	add	x0, x8, #0x138
 2c35864: a9400408     	ldp	x8, x1, [x0]
 2c35868: aa1503e0     	mov	x0, x21
 2c3586c: d63f0100     	blr	x8
 2c35870: f9401e88     	ldr	x8, [x20, #0x38]
 2c35874: aa0003e1     	mov	x1, x0
 2c35878: aa1303e0     	mov	x0, x19
 2c3587c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35880: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35884: f9401502     	ldr	x2, [x8, #0x28]
 2c35888: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c3588c: 17fbd23d     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c35890: 97f685fe     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35894: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35898: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c3589c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c358a0: f9401c68     	ldr	x8, [x3, #0x38]
 2c358a4: aa0303f4     	mov	x20, x3
 2c358a8: aa0203f7     	mov	x23, x2
 2c358ac: aa0103f3     	mov	x19, x1
 2c358b0: aa0003f6     	mov	x22, x0
 2c358b4: b5000108     	cbnz	x8, 0x2c358d4 <__start_il2cpp+0x16d2c0>
 2c358b8: d001c200     	adrp	x0, 0x6477000
 2c358bc: 910b0000     	add	x0, x0, #0x2c0
 2c358c0: 97f68548     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c358c4: f9401e88     	ldr	x8, [x20, #0x38]
 2c358c8: b5000068     	cbnz	x8, 0x2c358d4 <__start_il2cpp+0x16d2c0>
 2c358cc: aa1403e0     	mov	x0, x20
 2c358d0: 97f761ed     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c358d4: f94002d5     	ldr	x21, [x22]
 2c358d8: b5000235     	cbnz	x21, 0x2c3591c <__start_il2cpp+0x16d308>
 2c358dc: f9401e88     	ldr	x8, [x20, #0x38]
 2c358e0: f9400900     	ldr	x0, [x8, #0x10]
 2c358e4: 9104d408     	add	x8, x0, #0x135
 2c358e8: 79400108     	ldrh	w8, [x8]
 2c358ec: 37000048     	tbnz	w8, #0x0, 0x2c358f4 <__start_il2cpp+0x16d2e0>
 2c358f0: 97f761ce     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c358f4: b940e408     	ldr	w8, [x0, #0xe4]
 2c358f8: 35000048     	cbnz	w8, 0x2c35900 <__start_il2cpp+0x16d2ec>
 2c358fc: 97f68598     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35900: f9401e88     	ldr	x8, [x20, #0x38]
 2c35904: aa1703e0     	mov	x0, x23
 2c35908: aa1603e1     	mov	x1, x22
 2c3590c: f9400502     	ldr	x2, [x8, #0x8]
 2c35910: 9465cda1     	bl	0x45a8f94 <__start_il2cpp+0x1ae0980>
 2c35914: f94002d5     	ldr	x21, [x22]
 2c35918: b4000435     	cbz	x21, 0x2c3599c <__start_il2cpp+0x16d388>
 2c3591c: d001b5ea     	adrp	x10, 0x62f3000
 2c35920: f94002a8     	ldr	x8, [x21]
 2c35924: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35928: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c3592c: f9400141     	ldr	x1, [x10]
 2c35930: b4000129     	cbz	x9, 0x2c35954 <__start_il2cpp+0x16d340>
 2c35934: f940590a     	ldr	x10, [x8, #0xb0]
 2c35938: 9100214a     	add	x10, x10, #0x8
 2c3593c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35940: eb01017f     	cmp	x11, x1
 2c35944: 54000100     	b.eq	0x2c35964 <__start_il2cpp+0x16d350>
 2c35948: f1000529     	subs	x9, x9, #0x1
 2c3594c: 9100414a     	add	x10, x10, #0x10
 2c35950: 54ffff61     	b.ne	0x2c3593c <__start_il2cpp+0x16d328>
 2c35954: aa1503e0     	mov	x0, x21
 2c35958: 2a1f03e2     	mov	w2, wzr
 2c3595c: 97f76282     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35960: 14000004     	b	0x2c35970 <__start_il2cpp+0x16d35c>
 2c35964: b9800149     	ldrsw	x9, [x10]
 2c35968: 8b091108     	add	x8, x8, x9, lsl #4
 2c3596c: 9104e100     	add	x0, x8, #0x138
 2c35970: a9400408     	ldp	x8, x1, [x0]
 2c35974: aa1503e0     	mov	x0, x21
 2c35978: d63f0100     	blr	x8
 2c3597c: f9401e88     	ldr	x8, [x20, #0x38]
 2c35980: aa0003e1     	mov	x1, x0
 2c35984: aa1303e0     	mov	x0, x19
 2c35988: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c3598c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35990: f9401502     	ldr	x2, [x8, #0x28]
 2c35994: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35998: 17fbd1fa     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c3599c: 97f685bb     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c359a0: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c359a4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c359a8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c359ac: f9401c68     	ldr	x8, [x3, #0x38]
 2c359b0: aa0303f4     	mov	x20, x3
 2c359b4: aa0203f7     	mov	x23, x2
 2c359b8: aa0103f3     	mov	x19, x1
 2c359bc: aa0003f6     	mov	x22, x0
 2c359c0: b5000108     	cbnz	x8, 0x2c359e0 <__start_il2cpp+0x16d3cc>
 2c359c4: d001c200     	adrp	x0, 0x6477000
 2c359c8: 910b0000     	add	x0, x0, #0x2c0
 2c359cc: 97f68505     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c359d0: f9401e88     	ldr	x8, [x20, #0x38]
 2c359d4: b5000068     	cbnz	x8, 0x2c359e0 <__start_il2cpp+0x16d3cc>
 2c359d8: aa1403e0     	mov	x0, x20
 2c359dc: 97f761aa     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c359e0: f94002d5     	ldr	x21, [x22]
 2c359e4: b5000235     	cbnz	x21, 0x2c35a28 <__start_il2cpp+0x16d414>
 2c359e8: f9401e88     	ldr	x8, [x20, #0x38]
 2c359ec: f9400900     	ldr	x0, [x8, #0x10]
 2c359f0: 9104d408     	add	x8, x0, #0x135
 2c359f4: 79400108     	ldrh	w8, [x8]
 2c359f8: 37000048     	tbnz	w8, #0x0, 0x2c35a00 <__start_il2cpp+0x16d3ec>
 2c359fc: 97f7618b     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35a00: b940e408     	ldr	w8, [x0, #0xe4]
 2c35a04: 35000048     	cbnz	w8, 0x2c35a0c <__start_il2cpp+0x16d3f8>
 2c35a08: 97f68555     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35a0c: f9401e88     	ldr	x8, [x20, #0x38]
 2c35a10: aa1703e0     	mov	x0, x23
 2c35a14: aa1603e1     	mov	x1, x22
 2c35a18: f9400502     	ldr	x2, [x8, #0x8]
 2c35a1c: 9465cd5e     	bl	0x45a8f94 <__start_il2cpp+0x1ae0980>
 2c35a20: f94002d5     	ldr	x21, [x22]
 2c35a24: b4000435     	cbz	x21, 0x2c35aa8 <__start_il2cpp+0x16d494>
 2c35a28: d001b5ea     	adrp	x10, 0x62f3000
 2c35a2c: f94002a8     	ldr	x8, [x21]
 2c35a30: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35a34: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35a38: f9400141     	ldr	x1, [x10]
 2c35a3c: b4000129     	cbz	x9, 0x2c35a60 <__start_il2cpp+0x16d44c>
 2c35a40: f940590a     	ldr	x10, [x8, #0xb0]
 2c35a44: 9100214a     	add	x10, x10, #0x8
 2c35a48: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35a4c: eb01017f     	cmp	x11, x1
 2c35a50: 54000100     	b.eq	0x2c35a70 <__start_il2cpp+0x16d45c>
 2c35a54: f1000529     	subs	x9, x9, #0x1
 2c35a58: 9100414a     	add	x10, x10, #0x10
 2c35a5c: 54ffff61     	b.ne	0x2c35a48 <__start_il2cpp+0x16d434>
 2c35a60: aa1503e0     	mov	x0, x21
 2c35a64: 2a1f03e2     	mov	w2, wzr
 2c35a68: 97f7623f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35a6c: 14000004     	b	0x2c35a7c <__start_il2cpp+0x16d468>
 2c35a70: b9800149     	ldrsw	x9, [x10]
 2c35a74: 8b091108     	add	x8, x8, x9, lsl #4
 2c35a78: 9104e100     	add	x0, x8, #0x138
 2c35a7c: a9400408     	ldp	x8, x1, [x0]
 2c35a80: aa1503e0     	mov	x0, x21
 2c35a84: d63f0100     	blr	x8
 2c35a88: f9401e88     	ldr	x8, [x20, #0x38]
 2c35a8c: aa0003e1     	mov	x1, x0
 2c35a90: aa1303e0     	mov	x0, x19
 2c35a94: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35a98: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35a9c: f9401502     	ldr	x2, [x8, #0x28]
 2c35aa0: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35aa4: 17fc5c66     	b	0x2b4cc3c <__start_il2cpp+0x84628>
 2c35aa8: 97f68578     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35aac: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35ab0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35ab4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35ab8: f9401c68     	ldr	x8, [x3, #0x38]
 2c35abc: aa0303f4     	mov	x20, x3
 2c35ac0: aa0203f7     	mov	x23, x2
 2c35ac4: aa0103f3     	mov	x19, x1
 2c35ac8: aa0003f6     	mov	x22, x0
 2c35acc: b5000068     	cbnz	x8, 0x2c35ad8 <__start_il2cpp+0x16d4c4>
 2c35ad0: aa1403e0     	mov	x0, x20
 2c35ad4: 97f7616c     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c35ad8: f94002d5     	ldr	x21, [x22]
 2c35adc: b5000235     	cbnz	x21, 0x2c35b20 <__start_il2cpp+0x16d50c>
 2c35ae0: f9401e88     	ldr	x8, [x20, #0x38]
 2c35ae4: f9400900     	ldr	x0, [x8, #0x10]
 2c35ae8: 9104d408     	add	x8, x0, #0x135
 2c35aec: 79400108     	ldrh	w8, [x8]
 2c35af0: 37000048     	tbnz	w8, #0x0, 0x2c35af8 <__start_il2cpp+0x16d4e4>
 2c35af4: 97f7614d     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35af8: b940e408     	ldr	w8, [x0, #0xe4]
 2c35afc: 35000048     	cbnz	w8, 0x2c35b04 <__start_il2cpp+0x16d4f0>
 2c35b00: 97f68517     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35b04: f9401e88     	ldr	x8, [x20, #0x38]
 2c35b08: aa1703e0     	mov	x0, x23
 2c35b0c: aa1603e1     	mov	x1, x22
 2c35b10: f9400502     	ldr	x2, [x8, #0x8]
 2c35b14: 9467986a     	bl	0x461bcbc <__start_il2cpp+0x1b536a8>
 2c35b18: f94002d5     	ldr	x21, [x22]
 2c35b1c: b4000575     	cbz	x21, 0x2c35bc8 <__start_il2cpp+0x16d5b4>
 2c35b20: f9401280     	ldr	x0, [x20, #0x20]
 2c35b24: 9104d408     	add	x8, x0, #0x135
 2c35b28: 79400108     	ldrh	w8, [x8]
 2c35b2c: 37000048     	tbnz	w8, #0x0, 0x2c35b34 <__start_il2cpp+0x16d520>
 2c35b30: 97f7613e     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35b34: f9406008     	ldr	x8, [x0, #0xc0]
 2c35b38: f9400501     	ldr	x1, [x8, #0x8]
 2c35b3c: 9104d428     	add	x8, x1, #0x135
 2c35b40: 79400108     	ldrh	w8, [x8]
 2c35b44: 37000088     	tbnz	w8, #0x0, 0x2c35b54 <__start_il2cpp+0x16d540>
 2c35b48: aa0103e0     	mov	x0, x1
 2c35b4c: 97f76137     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35b50: aa0003e1     	mov	x1, x0
 2c35b54: f94002a8     	ldr	x8, [x21]
 2c35b58: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35b5c: b4000129     	cbz	x9, 0x2c35b80 <__start_il2cpp+0x16d56c>
 2c35b60: f940590a     	ldr	x10, [x8, #0xb0]
 2c35b64: 9100214a     	add	x10, x10, #0x8
 2c35b68: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35b6c: eb01017f     	cmp	x11, x1
 2c35b70: 54000100     	b.eq	0x2c35b90 <__start_il2cpp+0x16d57c>
 2c35b74: f1000529     	subs	x9, x9, #0x1
 2c35b78: 9100414a     	add	x10, x10, #0x10
 2c35b7c: 54ffff61     	b.ne	0x2c35b68 <__start_il2cpp+0x16d554>
 2c35b80: aa1503e0     	mov	x0, x21
 2c35b84: 2a1f03e2     	mov	w2, wzr
 2c35b88: 97f761f7     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35b8c: 14000004     	b	0x2c35b9c <__start_il2cpp+0x16d588>
 2c35b90: b9800149     	ldrsw	x9, [x10]
 2c35b94: 8b091108     	add	x8, x8, x9, lsl #4
 2c35b98: 9104e100     	add	x0, x8, #0x138
 2c35b9c: a9400408     	ldp	x8, x1, [x0]
 2c35ba0: aa1503e0     	mov	x0, x21
 2c35ba4: d63f0100     	blr	x8
 2c35ba8: f9401e88     	ldr	x8, [x20, #0x38]
 2c35bac: aa0003e1     	mov	x1, x0
 2c35bb0: aa1303e0     	mov	x0, x19
 2c35bb4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35bb8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35bbc: f9401502     	ldr	x2, [x8, #0x28]
 2c35bc0: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35bc4: 17fc5c1e     	b	0x2b4cc3c <__start_il2cpp+0x84628>
 2c35bc8: 97f68530     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35bcc: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35bd0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35bd4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35bd8: f9401c68     	ldr	x8, [x3, #0x38]
 2c35bdc: aa0303f4     	mov	x20, x3
 2c35be0: aa0203f7     	mov	x23, x2
 2c35be4: aa0103f3     	mov	x19, x1
 2c35be8: aa0003f6     	mov	x22, x0
 2c35bec: b5000108     	cbnz	x8, 0x2c35c0c <__start_il2cpp+0x16d5f8>
 2c35bf0: d001c200     	adrp	x0, 0x6477000
 2c35bf4: 910b0000     	add	x0, x0, #0x2c0
 2c35bf8: 97f6847a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35bfc: f9401e88     	ldr	x8, [x20, #0x38]
 2c35c00: b5000068     	cbnz	x8, 0x2c35c0c <__start_il2cpp+0x16d5f8>
 2c35c04: aa1403e0     	mov	x0, x20
 2c35c08: 97f7611f     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c35c0c: f94002d5     	ldr	x21, [x22]
 2c35c10: b5000235     	cbnz	x21, 0x2c35c54 <__start_il2cpp+0x16d640>
 2c35c14: f9401e88     	ldr	x8, [x20, #0x38]
 2c35c18: f9400900     	ldr	x0, [x8, #0x10]
 2c35c1c: 9104d408     	add	x8, x0, #0x135
 2c35c20: 79400108     	ldrh	w8, [x8]
 2c35c24: 37000048     	tbnz	w8, #0x0, 0x2c35c2c <__start_il2cpp+0x16d618>
 2c35c28: 97f76100     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35c2c: b940e408     	ldr	w8, [x0, #0xe4]
 2c35c30: 35000048     	cbnz	w8, 0x2c35c38 <__start_il2cpp+0x16d624>
 2c35c34: 97f684ca     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35c38: f9401e88     	ldr	x8, [x20, #0x38]
 2c35c3c: aa1703e0     	mov	x0, x23
 2c35c40: aa1603e1     	mov	x1, x22
 2c35c44: f9400502     	ldr	x2, [x8, #0x8]
 2c35c48: 946615f8     	bl	0x45bb428 <__start_il2cpp+0x1af2e14>
 2c35c4c: f94002d5     	ldr	x21, [x22]
 2c35c50: b4000435     	cbz	x21, 0x2c35cd4 <__start_il2cpp+0x16d6c0>
 2c35c54: d001b5ea     	adrp	x10, 0x62f3000
 2c35c58: f94002a8     	ldr	x8, [x21]
 2c35c5c: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35c60: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35c64: f9400141     	ldr	x1, [x10]
 2c35c68: b4000129     	cbz	x9, 0x2c35c8c <__start_il2cpp+0x16d678>
 2c35c6c: f940590a     	ldr	x10, [x8, #0xb0]
 2c35c70: 9100214a     	add	x10, x10, #0x8
 2c35c74: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35c78: eb01017f     	cmp	x11, x1
 2c35c7c: 54000100     	b.eq	0x2c35c9c <__start_il2cpp+0x16d688>
 2c35c80: f1000529     	subs	x9, x9, #0x1
 2c35c84: 9100414a     	add	x10, x10, #0x10
 2c35c88: 54ffff61     	b.ne	0x2c35c74 <__start_il2cpp+0x16d660>
 2c35c8c: aa1503e0     	mov	x0, x21
 2c35c90: 2a1f03e2     	mov	w2, wzr
 2c35c94: 97f761b4     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35c98: 14000004     	b	0x2c35ca8 <__start_il2cpp+0x16d694>
 2c35c9c: b9800149     	ldrsw	x9, [x10]
 2c35ca0: 8b091108     	add	x8, x8, x9, lsl #4
 2c35ca4: 9104e100     	add	x0, x8, #0x138
 2c35ca8: a9400408     	ldp	x8, x1, [x0]
 2c35cac: aa1503e0     	mov	x0, x21
 2c35cb0: d63f0100     	blr	x8
 2c35cb4: f9401e88     	ldr	x8, [x20, #0x38]
 2c35cb8: aa0003e1     	mov	x1, x0
 2c35cbc: aa1303e0     	mov	x0, x19
 2c35cc0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35cc4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35cc8: f9401502     	ldr	x2, [x8, #0x28]
 2c35ccc: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35cd0: 17fbd12c     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c35cd4: 97f684ed     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35cd8: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35cdc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35ce0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35ce4: f9401c68     	ldr	x8, [x3, #0x38]
 2c35ce8: aa0303f4     	mov	x20, x3
 2c35cec: aa0203f7     	mov	x23, x2
 2c35cf0: aa0103f3     	mov	x19, x1
 2c35cf4: aa0003f6     	mov	x22, x0
 2c35cf8: b5000108     	cbnz	x8, 0x2c35d18 <__start_il2cpp+0x16d704>
 2c35cfc: d001c200     	adrp	x0, 0x6477000
 2c35d00: 910b0000     	add	x0, x0, #0x2c0
 2c35d04: 97f68437     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35d08: f9401e88     	ldr	x8, [x20, #0x38]
 2c35d0c: b5000068     	cbnz	x8, 0x2c35d18 <__start_il2cpp+0x16d704>
 2c35d10: aa1403e0     	mov	x0, x20
 2c35d14: 97f760dc     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c35d18: f94002d5     	ldr	x21, [x22]
 2c35d1c: b5000235     	cbnz	x21, 0x2c35d60 <__start_il2cpp+0x16d74c>
 2c35d20: f9401e88     	ldr	x8, [x20, #0x38]
 2c35d24: f9400900     	ldr	x0, [x8, #0x10]
 2c35d28: 9104d408     	add	x8, x0, #0x135
 2c35d2c: 79400108     	ldrh	w8, [x8]
 2c35d30: 37000048     	tbnz	w8, #0x0, 0x2c35d38 <__start_il2cpp+0x16d724>
 2c35d34: 97f760bd     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35d38: b940e408     	ldr	w8, [x0, #0xe4]
 2c35d3c: 35000048     	cbnz	w8, 0x2c35d44 <__start_il2cpp+0x16d730>
 2c35d40: 97f68487     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35d44: f9401e88     	ldr	x8, [x20, #0x38]
 2c35d48: aa1703e0     	mov	x0, x23
 2c35d4c: aa1603e1     	mov	x1, x22
 2c35d50: f9400502     	ldr	x2, [x8, #0x8]
 2c35d54: 946617bc     	bl	0x45bbc44 <__start_il2cpp+0x1af3630>
 2c35d58: f94002d5     	ldr	x21, [x22]
 2c35d5c: b4000435     	cbz	x21, 0x2c35de0 <__start_il2cpp+0x16d7cc>
 2c35d60: d001b5ea     	adrp	x10, 0x62f3000
 2c35d64: f94002a8     	ldr	x8, [x21]
 2c35d68: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35d6c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35d70: f9400141     	ldr	x1, [x10]
 2c35d74: b4000129     	cbz	x9, 0x2c35d98 <__start_il2cpp+0x16d784>
 2c35d78: f940590a     	ldr	x10, [x8, #0xb0]
 2c35d7c: 9100214a     	add	x10, x10, #0x8
 2c35d80: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35d84: eb01017f     	cmp	x11, x1
 2c35d88: 54000100     	b.eq	0x2c35da8 <__start_il2cpp+0x16d794>
 2c35d8c: f1000529     	subs	x9, x9, #0x1
 2c35d90: 9100414a     	add	x10, x10, #0x10
 2c35d94: 54ffff61     	b.ne	0x2c35d80 <__start_il2cpp+0x16d76c>
 2c35d98: aa1503e0     	mov	x0, x21
 2c35d9c: 2a1f03e2     	mov	w2, wzr
 2c35da0: 97f76171     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35da4: 14000004     	b	0x2c35db4 <__start_il2cpp+0x16d7a0>
 2c35da8: b9800149     	ldrsw	x9, [x10]
 2c35dac: 8b091108     	add	x8, x8, x9, lsl #4
 2c35db0: 9104e100     	add	x0, x8, #0x138
 2c35db4: a9400408     	ldp	x8, x1, [x0]
 2c35db8: aa1503e0     	mov	x0, x21
 2c35dbc: d63f0100     	blr	x8
 2c35dc0: f9401e88     	ldr	x8, [x20, #0x38]
 2c35dc4: aa0003e1     	mov	x1, x0
 2c35dc8: aa1303e0     	mov	x0, x19
 2c35dcc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35dd0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35dd4: f9401502     	ldr	x2, [x8, #0x28]
 2c35dd8: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35ddc: 17fc5b98     	b	0x2b4cc3c <__start_il2cpp+0x84628>
 2c35de0: 97f684aa     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c35de4: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c35de8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c35dec: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c35df0: f9401c68     	ldr	x8, [x3, #0x38]
 2c35df4: aa0303f4     	mov	x20, x3
 2c35df8: aa0203f7     	mov	x23, x2
 2c35dfc: aa0103f3     	mov	x19, x1
 2c35e00: aa0003f6     	mov	x22, x0
 2c35e04: b5000108     	cbnz	x8, 0x2c35e24 <__start_il2cpp+0x16d810>
 2c35e08: d001c200     	adrp	x0, 0x6477000
 2c35e0c: 910b0000     	add	x0, x0, #0x2c0
 2c35e10: 97f683f4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35e14: f9401e88     	ldr	x8, [x20, #0x38]
 2c35e18: b5000068     	cbnz	x8, 0x2c35e24 <__start_il2cpp+0x16d810>
 2c35e1c: aa1403e0     	mov	x0, x20
 2c35e20: 97f76099     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c35e24: f94002d5     	ldr	x21, [x22]
 2c35e28: b5000235     	cbnz	x21, 0x2c35e6c <__start_il2cpp+0x16d858>
 2c35e2c: f9401e88     	ldr	x8, [x20, #0x38]
 2c35e30: f9400900     	ldr	x0, [x8, #0x10]
 2c35e34: 9104d408     	add	x8, x0, #0x135
 2c35e38: 79400108     	ldrh	w8, [x8]
 2c35e3c: 37000048     	tbnz	w8, #0x0, 0x2c35e44 <__start_il2cpp+0x16d830>
 2c35e40: 97f7607a     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c35e44: b940e408     	ldr	w8, [x0, #0xe4]
 2c35e48: 35000048     	cbnz	w8, 0x2c35e50 <__start_il2cpp+0x16d83c>
 2c35e4c: 97f68444     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35e50: f9401e88     	ldr	x8, [x20, #0x38]
 2c35e54: aa1703e0     	mov	x0, x23
 2c35e58: aa1603e1     	mov	x1, x22
 2c35e5c: f9400502     	ldr	x2, [x8, #0x8]
 2c35e60: 94661779     	bl	0x45bbc44 <__start_il2cpp+0x1af3630>
 2c35e64: f94002d5     	ldr	x21, [x22]
 2c35e68: b4000435     	cbz	x21, 0x2c35eec <__start_il2cpp+0x16d8d8>
 2c35e6c: d001b5ea     	adrp	x10, 0x62f3000
 2c35e70: f94002a8     	ldr	x8, [x21]
 2c35e74: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c35e78: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c35e7c: f9400141     	ldr	x1, [x10]
 2c35e80: b4000129     	cbz	x9, 0x2c35ea4 <__start_il2cpp+0x16d890>
 2c35e84: f940590a     	ldr	x10, [x8, #0xb0]
 2c35e88: 9100214a     	add	x10, x10, #0x8
 2c35e8c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c35e90: eb01017f     	cmp	x11, x1
 2c35e94: 54000100     	b.eq	0x2c35eb4 <__start_il2cpp+0x16d8a0>
 2c35e98: f1000529     	subs	x9, x9, #0x1
 2c35e9c: 9100414a     	add	x10, x10, #0x10
 2c35ea0: 54ffff61     	b.ne	0x2c35e8c <__start_il2cpp+0x16d878>
 2c35ea4: aa1503e0     	mov	x0, x21
 2c35ea8: 2a1f03e2     	mov	w2, wzr
 2c35eac: 97f7612e     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c35eb0: 14000004     	b	0x2c35ec0 <__start_il2cpp+0x16d8ac>
 2c35eb4: b9800149     	ldrsw	x9, [x10]
 2c35eb8: 8b091108     	add	x8, x8, x9, lsl #4
 2c35ebc: 9104e100     	add	x0, x8, #0x138
 2c35ec0: a9400408     	ldp	x8, x1, [x0]
 2c35ec4: aa1503e0     	mov	x0, x21
 2c35ec8: d63f0100     	blr	x8
 2c35ecc: f9401e88     	ldr	x8, [x20, #0x38]
 2c35ed0: aa0003e1     	mov	x1, x0
 2c35ed4: aa1303e0     	mov	x0, x19
 2c35ed8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c35edc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c35ee0: f9401502     	ldr	x2, [x8, #0x28]
 2c35ee4: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c35ee8: 17fbd0a6     	b	0x2b2a180 <__start_il2cpp+0x61b6c>
 2c35eec: 97f68467     	bl	0x29d7088 <mono_class_get_checked+0x970>
