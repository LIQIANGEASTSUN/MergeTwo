
# BaseItem :: System.Void Reset(System.Boolean willPlayEffect = False)
# VA 0x2bf26a8 .. 0x2bf2968 (next mapped method entry)
 2bf26a8: d10183ff     	sub	sp, sp, #0x60
 2bf26ac: f9001bfe     	str	x30, [sp, #0x30]
 2bf26b0: a90457f6     	stp	x22, x21, [sp, #0x40]
 2bf26b4: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2bf26b8: 9001d914     	adrp	x20, 0x6712000
 2bf26bc: aa0003f3     	mov	x19, x0
 2bf26c0: 396c3e88     	ldrb	w8, [x20, #0xb0f]
 2bf26c4: 370002a8     	tbnz	w8, #0x0, 0x2bf2718 <__start_il2cpp+0x12a104>
 2bf26c8: 9001b840     	adrp	x0, 0x62fa000
 2bf26cc: f9421400     	ldr	x0, [x0, #0x428]
 2bf26d0: 97f791c4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf26d4: 9001b840     	adrp	x0, 0x62fa000
 2bf26d8: f9421800     	ldr	x0, [x0, #0x430]
 2bf26dc: 97f791c1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf26e0: 9001b840     	adrp	x0, 0x62fa000
 2bf26e4: f9421c00     	ldr	x0, [x0, #0x438]
 2bf26e8: 97f791be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf26ec: d001b840     	adrp	x0, 0x62fc000
 2bf26f0: f942cc00     	ldr	x0, [x0, #0x598]
 2bf26f4: 97f791bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf26f8: 9001b840     	adrp	x0, 0x62fa000
 2bf26fc: f9422000     	ldr	x0, [x0, #0x440]
 2bf2700: 97f791b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2704: d001b840     	adrp	x0, 0x62fc000
 2bf2708: f942d000     	ldr	x0, [x0, #0x5a0]
 2bf270c: 97f791b5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2710: 52800028     	mov	w8, #0x1                // =1
 2bf2714: 392c3e88     	strb	w8, [x20, #0xb0f]
 2bf2718: aa1303e0     	mov	x0, x19
 2bf271c: aa1f03e1     	mov	x1, xzr
 2bf2720: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2bf2724: f90017ff     	str	xzr, [sp, #0x28]
 2bf2728: 94bd34c1     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2bf272c: b4000f00     	cbz	x0, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf2730: 2a1f03e1     	mov	w1, wzr
 2bf2734: aa1f03e2     	mov	x2, xzr
 2bf2738: 94bd4710     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf273c: f9403260     	ldr	x0, [x19, #0x60]
 2bf2740: 2a1f03e1     	mov	w1, wzr
 2bf2744: aa1f03e2     	mov	x2, xzr
 2bf2748: 940c2d37     	bl	0x2efdc24 <__start_il2cpp+0x435610>
 2bf274c: 52800036     	mov	w22, #0x1               // =1
 2bf2750: aa1303e0     	mov	x0, x19
 2bf2754: aa1f03e1     	mov	x1, xzr
 2bf2758: 3901027f     	strb	wzr, [x19, #0x40]
 2bf275c: b9004676     	str	w22, [x19, #0x44]
 2bf2760: f80b0c1f     	str	xzr, [x0, #0xb0]!
 2bf2764: 97f7918a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf2768: aa1303e0     	mov	x0, x19
 2bf276c: aa1f03e1     	mov	x1, xzr
 2bf2770: 94bd347b     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf2774: 9001d915     	adrp	x21, 0x6712000
 2bf2778: aa0003f4     	mov	x20, x0
 2bf277c: 394786a8     	ldrb	w8, [x21, #0x1e1]
 2bf2780: 350000a8     	cbnz	w8, 0x2bf2794 <__start_il2cpp+0x12a180>
 2bf2784: f001b7e0     	adrp	x0, 0x62f1000
 2bf2788: f940dc00     	ldr	x0, [x0, #0x1b8]
 2bf278c: 97f79195     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2790: 390786b6     	strb	w22, [x21, #0x1e1]
 2bf2794: b4000bd4     	cbz	x20, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf2798: f001b7f6     	adrp	x22, 0x62f1000
 2bf279c: aa1403e0     	mov	x0, x20
 2bf27a0: aa1f03e1     	mov	x1, xzr
 2bf27a4: f940ded6     	ldr	x22, [x22, #0x1b8]
 2bf27a8: f94002c8     	ldr	x8, [x22]
 2bf27ac: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf27b0: 2d420901     	ldp	s1, s2, [x8, #0x10]
 2bf27b4: bd400d00     	ldr	s0, [x8, #0xc]
 2bf27b8: 94bd89e3     	bl	0x5b54f44 <__start_il2cpp+0x308c930>
 2bf27bc: f9403260     	ldr	x0, [x19, #0x60]
 2bf27c0: b4000a60     	cbz	x0, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf27c4: aa1f03e1     	mov	x1, xzr
 2bf27c8: 94bd3465     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf27cc: 394786a8     	ldrb	w8, [x21, #0x1e1]
 2bf27d0: aa0003f4     	mov	x20, x0
 2bf27d4: 350000c8     	cbnz	w8, 0x2bf27ec <__start_il2cpp+0x12a1d8>
 2bf27d8: f001b7e0     	adrp	x0, 0x62f1000
 2bf27dc: f940dc00     	ldr	x0, [x0, #0x1b8]
 2bf27e0: 97f79180     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf27e4: 52800028     	mov	w8, #0x1                // =1
 2bf27e8: 390786a8     	strb	w8, [x21, #0x1e1]
 2bf27ec: b4000914     	cbz	x20, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf27f0: f94002c8     	ldr	x8, [x22]
 2bf27f4: aa1403e0     	mov	x0, x20
 2bf27f8: aa1f03e1     	mov	x1, xzr
 2bf27fc: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf2800: 2d420901     	ldp	s1, s2, [x8, #0x10]
 2bf2804: bd400d00     	ldr	s0, [x8, #0xc]
 2bf2808: 94bd89cf     	bl	0x5b54f44 <__start_il2cpp+0x308c930>
 2bf280c: f9403260     	ldr	x0, [x19, #0x60]
 2bf2810: b40007e0     	cbz	x0, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf2814: d001b848     	adrp	x8, 0x62fc000
 2bf2818: aa1f03e2     	mov	x2, xzr
 2bf281c: f942d108     	ldr	x8, [x8, #0x5a0]
 2bf2820: f9400101     	ldr	x1, [x8]
 2bf2824: 9401575b     	bl	0x2c48590 <__start_il2cpp+0x17ff7c>
 2bf2828: aa1303f4     	mov	x20, x19
 2bf282c: aa1f03e1     	mov	x1, xzr
 2bf2830: f8058e9f     	str	xzr, [x20, #0x58]!
 2bf2834: aa1403e0     	mov	x0, x20
 2bf2838: 97f79155     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf283c: f9400a80     	ldr	x0, [x20, #0x10]
 2bf2840: b4000660     	cbz	x0, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf2844: 2a1f03e1     	mov	w1, wzr
 2bf2848: aa1f03e2     	mov	x2, xzr
 2bf284c: 94bd46cb     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf2850: aa1303e0     	mov	x0, x19
 2bf2854: 94000761     	bl	0x2bf45d8 <__start_il2cpp+0x12bfc4>
 2bf2858: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf285c: b4000480     	cbz	x0, 0x2bf28ec <__start_il2cpp+0x12a2d8>
 2bf2860: 9001b848     	adrp	x8, 0x62fa000
 2bf2864: 9001b854     	adrp	x20, 0x62fa000
 2bf2868: 9001b855     	adrp	x21, 0x62fa000
 2bf286c: f9422108     	ldr	x8, [x8, #0x440]
 2bf2870: f9421a94     	ldr	x20, [x20, #0x430]
 2bf2874: f94216b5     	ldr	x21, [x21, #0x428]
 2bf2878: 910063f6     	add	x22, sp, #0x18
 2bf287c: f9400101     	ldr	x1, [x8]
 2bf2880: 910063e8     	add	x8, sp, #0x18
 2bf2884: 943cdc4f     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2bf2888: a900dbff     	stp	xzr, x22, [sp, #0x8]
 2bf288c: f9400281     	ldr	x1, [x20]
 2bf2890: 910063e0     	add	x0, sp, #0x18
 2bf2894: 947a5001     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2bf2898: 360000e0     	tbz	w0, #0x0, 0x2bf28b4 <__start_il2cpp+0x12a2a0>
 2bf289c: f94017e0     	ldr	x0, [sp, #0x28]
 2bf28a0: b4000340     	cbz	x0, 0x2bf2908 <__start_il2cpp+0x12a2f4>
 2bf28a4: f9400008     	ldr	x8, [x0]
 2bf28a8: a9598509     	ldp	x9, x1, [x8, #0x198]
 2bf28ac: d63f0120     	blr	x9
 2bf28b0: 17fffff7     	b	0x2bf288c <__start_il2cpp+0x12a278>
 2bf28b4: f94002a1     	ldr	x1, [x21]
 2bf28b8: 910063e0     	add	x0, sp, #0x18
 2bf28bc: 947a4ff6     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf28c0: f9405e68     	ldr	x8, [x19, #0xb8]
 2bf28c4: b4000248     	cbz	x8, 0x2bf290c <__start_il2cpp+0x12a2f8>
 2bf28c8: 29432502     	ldp	w2, w9, [x8, #0x18]
 2bf28cc: 11000529     	add	w9, w9, #0x1
 2bf28d0: 7100045f     	cmp	w2, #0x1
 2bf28d4: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2bf28d8: 540000ab     	b.lt	0x2bf28ec <__start_il2cpp+0x12a2d8>
 2bf28dc: f9400900     	ldr	x0, [x8, #0x10]
 2bf28e0: 2a1f03e1     	mov	w1, wzr
 2bf28e4: aa1f03e3     	mov	x3, xzr
 2bf28e8: 9494f5bb     	bl	0x512ffd4 <__start_il2cpp+0x26679c0>
 2bf28ec: aa1303e0     	mov	x0, x19
 2bf28f0: 94000467     	bl	0x2bf3a8c <__start_il2cpp+0x12b478>
 2bf28f4: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2bf28f8: f9401bfe     	ldr	x30, [sp, #0x30]
 2bf28fc: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2bf2900: 910183ff     	add	sp, sp, #0x60
 2bf2904: d65f03c0     	ret
 2bf2908: 97f791e0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf290c: 97f791df     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf2910: 14000002     	b	0x2bf2918 <__start_il2cpp+0x12a304>
 2bf2914: 14000001     	b	0x2bf2918 <__start_il2cpp+0x12a304>
 2bf2918: aa0003f4     	mov	x20, x0
 2bf291c: 7100043f     	cmp	w1, #0x1
 2bf2920: 540001a1     	b.ne	0x2bf2954 <__start_il2cpp+0x12a340>
 2bf2924: aa1403e0     	mov	x0, x20
 2bf2928: 94cccf86     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf292c: f9400014     	ldr	x20, [x0]
 2bf2930: f90007f4     	str	x20, [sp, #0x8]
 2bf2934: 94cccf87     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf2938: f9400be0     	ldr	x0, [sp, #0x10]
 2bf293c: f94002a1     	ldr	x1, [x21]
 2bf2940: 947a4fd5     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf2944: b4fffbf4     	cbz	x20, 0x2bf28c0 <__start_il2cpp+0x12a2ac>
 2bf2948: aa1403e0     	mov	x0, x20
 2bf294c: 97f791cd     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2bf2950: aa0003f4     	mov	x20, x0
 2bf2954: 910023e0     	add	x0, sp, #0x8
 2bf2958: 97ead75c     	bl	0x26a86c8 <.text+0x3568>
 2bf295c: aa1403e0     	mov	x0, x20
 2bf2960: 97fb475f     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf2964: 97eacc3a     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.Void .ctor()
# VA 0x2bf296c .. 0x2bf29e0 (next mapped method entry)
 2bf296c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf2970: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2974: 9001d915     	adrp	x21, 0x6712000
 2bf2978: f001b814     	adrp	x20, 0x62f5000
 2bf297c: aa0003f3     	mov	x19, x0
 2bf2980: 396c9aa8     	ldrb	w8, [x21, #0xb26]
 2bf2984: f9447e94     	ldr	x20, [x20, #0x8f8]
 2bf2988: 370000c8     	tbnz	w8, #0x0, 0x2bf29a0 <__start_il2cpp+0x12a38c>
 2bf298c: f001b800     	adrp	x0, 0x62f5000
 2bf2990: f9447c00     	ldr	x0, [x0, #0x8f8]
 2bf2994: 97f79113     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2998: 52800028     	mov	w8, #0x1                // =1
 2bf299c: 392c9aa8     	strb	w8, [x21, #0xb26]
 2bf29a0: f9400280     	ldr	x0, [x20]
 2bf29a4: 52800028     	mov	w8, #0x1                // =1
 2bf29a8: b9004668     	str	w8, [x19, #0x44]
 2bf29ac: 97f791b3     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf29b0: aa1f03e1     	mov	x1, xzr
 2bf29b4: aa0003f4     	mov	x20, x0
 2bf29b8: 94957464     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2bf29bc: aa1303e0     	mov	x0, x19
 2bf29c0: aa1403e1     	mov	x1, x20
 2bf29c4: f80d0c14     	str	x20, [x0, #0xd0]!
 2bf29c8: 97f790f1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf29cc: aa1303e0     	mov	x0, x19
 2bf29d0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf29d4: aa1f03e1     	mov	x1, xzr
 2bf29d8: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf29dc: 14bd5592     	b	0x5b48024 <__start_il2cpp+0x307fa10>

# BaseItem :: System.Void OnItemPlacedToBoard(System.Boolean willPlayParticle = False)
# VA 0x2bf2b3c .. 0x2bf2b40 (next mapped method entry)
 2bf2b3c: d65f03c0     	ret

# BaseItem :: System.Void OnStartItemDrag()
# VA 0x2bf2d48 .. 0x2bf2d4c (next mapped method entry)
 2bf2d48: d65f03c0     	ret

# BaseItem :: System.Void OnEndItemDrag()
# VA 0x2bf2de8 .. 0x2bf2dec (next mapped method entry)
 2bf2de8: d65f03c0     	ret

# BaseItem :: System.Void OnRechargeStarted()
# VA 0x2bf2fc4 .. 0x2bf2fc8 (next mapped method entry)
 2bf2fc4: d65f03c0     	ret

# BaseItem :: System.Void OnRechargeCompleted()
# VA 0x2bf31cc .. 0x2bf31dc (next mapped method entry)
 2bf31cc: 39432008     	ldrb	w8, [x0, #0xc8]
 2bf31d0: 34000048     	cbz	w8, 0x2bf31d8 <__start_il2cpp+0x12abc4>
 2bf31d4: d65f03c0     	ret
 2bf31d8: 140005ba     	b	0x2bf48c0 <__start_il2cpp+0x12c2ac>

# BaseItem :: System.Boolean get_IsMaxLeveled()
# VA 0x2bf3374 .. 0x2bf3410 (next mapped method entry)
 2bf3374: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf3378: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf337c: f001d8f4     	adrp	x20, 0x6712000
 2bf3380: aa0003f3     	mov	x19, x0
 2bf3384: 396c2a88     	ldrb	w8, [x20, #0xb0a]
 2bf3388: 37000128     	tbnz	w8, #0x0, 0x2bf33ac <__start_il2cpp+0x12ad98>
 2bf338c: f001b820     	adrp	x0, 0x62fa000
 2bf3390: f9405000     	ldr	x0, [x0, #0xa0]
 2bf3394: 97f78e93     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3398: f001b820     	adrp	x0, 0x62fa000
 2bf339c: f940b800     	ldr	x0, [x0, #0x170]
 2bf33a0: 97f78e90     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf33a4: 52800028     	mov	w8, #0x1                // =1
 2bf33a8: 392c2a88     	strb	w8, [x20, #0xb0a]
 2bf33ac: f9402a68     	ldr	x8, [x19, #0x50]
 2bf33b0: b40002e8     	cbz	x8, 0x2bf340c <__start_il2cpp+0x12adf8>
 2bf33b4: f001b829     	adrp	x9, 0x62fa000
 2bf33b8: f9405129     	ldr	x9, [x9, #0xa0]
 2bf33bc: b9403114     	ldr	w20, [x8, #0x30]
 2bf33c0: f9400120     	ldr	x0, [x9]
 2bf33c4: b940e409     	ldr	w9, [x0, #0xe4]
 2bf33c8: 34000169     	cbz	w9, 0x2bf33f4 <__start_il2cpp+0x12ade0>
 2bf33cc: 37f80194     	tbnz	w20, #0x1f, 0x2bf33fc <__start_il2cpp+0x12ade8>
 2bf33d0: f9402a68     	ldr	x8, [x19, #0x50]
 2bf33d4: b40001c8     	cbz	x8, 0x2bf340c <__start_il2cpp+0x12adf8>
 2bf33d8: f9402d08     	ldr	x8, [x8, #0x58]
 2bf33dc: b4000188     	cbz	x8, 0x2bf340c <__start_il2cpp+0x12adf8>
 2bf33e0: b9404669     	ldr	w9, [x19, #0x44]
 2bf33e4: b9401908     	ldr	w8, [x8, #0x18]
 2bf33e8: 6b08013f     	cmp	w9, w8
 2bf33ec: 1a9f17e0     	cset	w0, eq
 2bf33f0: 14000004     	b	0x2bf3400 <__start_il2cpp+0x12adec>
 2bf33f4: 97f78eda     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf33f8: 36fffed4     	tbz	w20, #0x1f, 0x2bf33d0 <__start_il2cpp+0x12adbc>
 2bf33fc: 2a1f03e0     	mov	w0, wzr
 2bf3400: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3404: f84207fe     	ldr	x30, [sp], #0x20
 2bf3408: d65f03c0     	ret
 2bf340c: 97f78f1f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2bf3444 .. 0x2bf3528 (next mapped method entry)
 2bf3444: d10203ff     	sub	sp, sp, #0x80
 2bf3448: a9055ffe     	stp	x30, x23, [sp, #0x50]
 2bf344c: a90657f6     	stp	x22, x21, [sp, #0x60]
 2bf3450: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2bf3454: f001d8f6     	adrp	x22, 0x6712000
 2bf3458: b001b855     	adrp	x21, 0x62fc000
 2bf345c: aa0003f4     	mov	x20, x0
 2bf3460: 396c66c9     	ldrb	w9, [x22, #0xb19]
 2bf3464: f942eab5     	ldr	x21, [x21, #0x5d0]
 2bf3468: aa0803f3     	mov	x19, x8
 2bf346c: 37000189     	tbnz	w9, #0x0, 0x2bf349c <__start_il2cpp+0x12ae88>
 2bf3470: b001b840     	adrp	x0, 0x62fc000
 2bf3474: f942e000     	ldr	x0, [x0, #0x5c0]
 2bf3478: 97f78e5a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf347c: b001b840     	adrp	x0, 0x62fc000
 2bf3480: f942e800     	ldr	x0, [x0, #0x5d0]
 2bf3484: 97f78e57     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3488: b001b840     	adrp	x0, 0x62fc000
 2bf348c: f942e400     	ldr	x0, [x0, #0x5c8]
 2bf3490: 97f78e54     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3494: 52800028     	mov	w8, #0x1                // =1
 2bf3498: 392c66c8     	strb	w8, [x22, #0xb19]
 2bf349c: 6f00e400     	movi	v0.2d, #0000000000000000
 2bf34a0: b001b857     	adrp	x23, 0x62fc000
 2bf34a4: 910083f6     	add	x22, sp, #0x20
 2bf34a8: b27d02c0     	orr	x0, x22, #0x8
 2bf34ac: aa1f03e1     	mov	x1, xzr
 2bf34b0: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2bf34b4: a903ffff     	stp	xzr, xzr, [sp, #0x38]
 2bf34b8: f942e6f7     	ldr	x23, [x23, #0x5c8]
 2bf34bc: a902ffff     	stp	xzr, xzr, [sp, #0x28]
 2bf34c0: 97f78e33     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf34c4: 910082c0     	add	x0, x22, #0x20
 2bf34c8: aa1403e1     	mov	x1, x20
 2bf34cc: f90023f4     	str	x20, [sp, #0x40]
 2bf34d0: 97f78e2f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf34d4: f94002a0     	ldr	x0, [x21]
 2bf34d8: 12800009     	mov	w9, #-0x1               // =-1
 2bf34dc: b90023e9     	str	w9, [sp, #0x20]
 2bf34e0: f9401c08     	ldr	x8, [x0, #0x38]
 2bf34e4: b5000048     	cbnz	x8, 0x2bf34ec <__start_il2cpp+0x12aed8>
 2bf34e8: 97f86ae7     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2bf34ec: 910083e0     	add	x0, sp, #0x20
 2bf34f0: 940009d0     	bl	0x2bf5c30 <__start_il2cpp+0x12d61c>
 2bf34f4: f94002e1     	ldr	x1, [x23]
 2bf34f8: 910023e8     	add	x8, sp, #0x8
 2bf34fc: b27d02c0     	orr	x0, x22, #0x8
 2bf3500: 97fea389     	bl	0x2b9c324 <__start_il2cpp+0xd3d10>
 2bf3504: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf3508: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf350c: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2bf3510: 3d800260     	str	q0, [x19]
 2bf3514: a9455ffe     	ldp	x30, x23, [sp, #0x50]
 2bf3518: f9000a68     	str	x8, [x19, #0x10]
 2bf351c: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2bf3520: 910203ff     	add	sp, sp, #0x80
 2bf3524: d65f03c0     	ret

# BaseItem :: System.Void ResetProducerViewers()
# VA 0x2bf3a8c .. 0x2bf3b14 (next mapped method entry)
 2bf3a8c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf3a90: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf3a94: f001d8f5     	adrp	x21, 0x6712000
 2bf3a98: b001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3a9c: aa0003f3     	mov	x19, x0
 2bf3aa0: 396c42a8     	ldrb	w8, [x21, #0xb10]
 2bf3aa4: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf3aa8: 370000c8     	tbnz	w8, #0x0, 0x2bf3ac0 <__start_il2cpp+0x12b4ac>
 2bf3aac: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3ab0: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf3ab4: 97f78ccb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3ab8: 52800028     	mov	w8, #0x1                // =1
 2bf3abc: 392c42a8     	strb	w8, [x21, #0xb10]
 2bf3ac0: f9400280     	ldr	x0, [x20]
 2bf3ac4: f9404a74     	ldr	x20, [x19, #0x90]
 2bf3ac8: b940e408     	ldr	w8, [x0, #0xe4]
 2bf3acc: 35000048     	cbnz	w8, 0x2bf3ad4 <__start_il2cpp+0x12b4c0>
 2bf3ad0: 97f78d23     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf3ad4: aa1403e0     	mov	x0, x20
 2bf3ad8: aa1f03e1     	mov	x1, xzr
 2bf3adc: 94bd5ada     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf3ae0: 360000c0     	tbz	w0, #0x0, 0x2bf3af8 <__start_il2cpp+0x12b4e4>
 2bf3ae4: f9404a60     	ldr	x0, [x19, #0x90]
 2bf3ae8: b4000140     	cbz	x0, 0x2bf3b10 <__start_il2cpp+0x12b4fc>
 2bf3aec: 2a1f03e1     	mov	w1, wzr
 2bf3af0: aa1f03e2     	mov	x2, xzr
 2bf3af4: 94bd4221     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf3af8: f9404260     	ldr	x0, [x19, #0x80]
 2bf3afc: 940002d8     	bl	0x2bf465c <__start_il2cpp+0x12c048>
 2bf3b00: f9404660     	ldr	x0, [x19, #0x88]
 2bf3b04: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3b08: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf3b0c: 140002d4     	b	0x2bf465c <__start_il2cpp+0x12c048>
 2bf3b10: 97f78d5e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Boolean get_isNewFtueItem()
# VA 0x2bf3b6c .. 0x2bf3b74 (next mapped method entry)
 2bf3b6c: 39412000     	ldrb	w0, [x0, #0x48]
 2bf3b70: d65f03c0     	ret

# BaseItem :: System.Void set_isNewFtueItem(System.Boolean value)
# VA 0x2bf3b74 .. 0x2bf3b7c (next mapped method entry)
 2bf3b74: 39012001     	strb	w1, [x0, #0x48]
 2bf3b78: d65f03c0     	ret

# BaseItem :: System.Void SetIsNewFtueItem(System.Boolean value)
# VA 0x2bf3b7c .. 0x2bf3b84 (next mapped method entry)
 2bf3b7c: 39012001     	strb	w1, [x0, #0x48]
 2bf3b80: d65f03c0     	ret

# BaseItem :: ItemLevelData get_CurrentLevelData()
# VA 0x2bf3b8c .. 0x2bf3c70 (next mapped method entry)
 2bf3b8c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf3b90: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf3b94: f001d8f4     	adrp	x20, 0x6712000
 2bf3b98: aa0003f3     	mov	x19, x0
 2bf3b9c: 396c2e88     	ldrb	w8, [x20, #0xb0b]
 2bf3ba0: 370000c8     	tbnz	w8, #0x0, 0x2bf3bb8 <__start_il2cpp+0x12b5a4>
 2bf3ba4: f001b820     	adrp	x0, 0x62fa000
 2bf3ba8: f940a800     	ldr	x0, [x0, #0x150]
 2bf3bac: 97f78c8d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3bb0: 52800028     	mov	w8, #0x1                // =1
 2bf3bb4: 392c2e88     	strb	w8, [x20, #0xb0b]
 2bf3bb8: f9402a68     	ldr	x8, [x19, #0x50]
 2bf3bbc: b4000188     	cbz	x8, 0x2bf3bec <__start_il2cpp+0x12b5d8>
 2bf3bc0: f9402d00     	ldr	x0, [x8, #0x58]
 2bf3bc4: b4000160     	cbz	x0, 0x2bf3bf0 <__start_il2cpp+0x12b5dc>
 2bf3bc8: f001b828     	adrp	x8, 0x62fa000
 2bf3bcc: f940a908     	ldr	x8, [x8, #0x150]
 2bf3bd0: b9404669     	ldr	w9, [x19, #0x44]
 2bf3bd4: f9400102     	ldr	x2, [x8]
 2bf3bd8: 51000521     	sub	w1, w9, #0x1
 2bf3bdc: 943cd3e1     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf3be0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3be4: f84207fe     	ldr	x30, [sp], #0x20
 2bf3be8: d65f03c0     	ret
 2bf3bec: 97f78d27     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf3bf0: 97f78d26     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf3bf4: 14000002     	b	0x2bf3bfc <__start_il2cpp+0x12b5e8>
 2bf3bf8: 14000001     	b	0x2bf3bfc <__start_il2cpp+0x12b5e8>
 2bf3bfc: aa0003f3     	mov	x19, x0
 2bf3c00: 7100043f     	cmp	w1, #0x1
 2bf3c04: 54000301     	b.ne	0x2bf3c64 <__start_il2cpp+0x12b650>
 2bf3c08: aa1303e0     	mov	x0, x19
 2bf3c0c: 94cccacd     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf3c10: b001b7e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3c14: aa0003f3     	mov	x19, x0
 2bf3c18: f9470d08     	ldr	x8, [x8, #0xe18]
 2bf3c1c: f9400009     	ldr	x9, [x0]
 2bf3c20: f9400900     	ldr	x0, [x8, #0x10]
 2bf3c24: f9400121     	ldr	x1, [x9]
 2bf3c28: 97f78e1a     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf3c2c: 36000080     	tbz	w0, #0x0, 0x2bf3c3c <__start_il2cpp+0x12b628>
 2bf3c30: 94cccac8     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf3c34: aa1f03e0     	mov	x0, xzr
 2bf3c38: 17ffffea     	b	0x2bf3be0 <__start_il2cpp+0x12b5cc>
 2bf3c3c: 52800100     	mov	w0, #0x8                // =8
 2bf3c40: 94cccae0     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf3c44: f9400268     	ldr	x8, [x19]
 2bf3c48: f9000008     	str	x8, [x0]
 2bf3c4c: b00199c1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf3c50: 91302021     	add	x1, x1, #0xc08
 2bf3c54: aa1f03e2     	mov	x2, xzr
 2bf3c58: 94cccade     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf3c5c: aa0003f3     	mov	x19, x0
 2bf3c60: 94cccabc     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf3c64: aa1303e0     	mov	x0, x19
 2bf3c68: 97fb429d     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf3c6c: 97eac778     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.Int32 get_MaxLevel()
# VA 0x2bf3c70 .. 0x2bf3cc0 (next mapped method entry)
 2bf3c70: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf3c74: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf3c78: f001d8f4     	adrp	x20, 0x6712000
 2bf3c7c: aa0003f3     	mov	x19, x0
 2bf3c80: 396c3288     	ldrb	w8, [x20, #0xb0c]
 2bf3c84: 370000c8     	tbnz	w8, #0x0, 0x2bf3c9c <__start_il2cpp+0x12b688>
 2bf3c88: f001b820     	adrp	x0, 0x62fa000
 2bf3c8c: f940b800     	ldr	x0, [x0, #0x170]
 2bf3c90: 97f78c54     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3c94: 52800028     	mov	w8, #0x1                // =1
 2bf3c98: 392c3288     	strb	w8, [x20, #0xb0c]
 2bf3c9c: f9402a68     	ldr	x8, [x19, #0x50]
 2bf3ca0: b40000e8     	cbz	x8, 0x2bf3cbc <__start_il2cpp+0x12b6a8>
 2bf3ca4: f9402d08     	ldr	x8, [x8, #0x58]
 2bf3ca8: b40000a8     	cbz	x8, 0x2bf3cbc <__start_il2cpp+0x12b6a8>
 2bf3cac: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3cb0: b9401900     	ldr	w0, [x8, #0x18]
 2bf3cb4: f84207fe     	ldr	x30, [sp], #0x20
 2bf3cb8: d65f03c0     	ret
 2bf3cbc: 97f78cf3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: BoardSlot get_BoardSlot()
# VA 0x2bf3cc0 .. 0x2bf3cc8 (next mapped method entry)
 2bf3cc0: f9402c00     	ldr	x0, [x0, #0x58]
 2bf3cc4: d65f03c0     	ret

# BaseItem :: System.Void set_BoardSlot(BoardSlot value)
# VA 0x2bf3cc8 .. 0x2bf3cd0 (next mapped method entry)
 2bf3cc8: f8058c01     	str	x1, [x0, #0x58]!
 2bf3ccc: 17f78c30     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BaseItem :: System.Boolean get_IsSellable()
# VA 0x2bf3cd0 .. 0x2bf3d00 (next mapped method entry)
 2bf3cd0: f9402808     	ldr	x8, [x0, #0x50]
 2bf3cd4: b4000128     	cbz	x8, 0x2bf3cf8 <__start_il2cpp+0x12b6e4>
 2bf3cd8: 3940e108     	ldrb	w8, [x8, #0x38]
 2bf3cdc: 340000a8     	cbz	w8, 0x2bf3cf0 <__start_il2cpp+0x12b6dc>
 2bf3ce0: 39410008     	ldrb	w8, [x0, #0x40]
 2bf3ce4: 7100011f     	cmp	w8, #0x0
 2bf3ce8: 1a9f17e0     	cset	w0, eq
 2bf3cec: d65f03c0     	ret
 2bf3cf0: 2a1f03e0     	mov	w0, wzr
 2bf3cf4: d65f03c0     	ret
 2bf3cf8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bf3cfc: 97f78ce3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void Awake()
# VA 0x2bf3d00 .. 0x2bf3d84 (next mapped method entry)
 2bf3d00: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf3d04: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf3d08: f001d8f5     	adrp	x21, 0x6712000
 2bf3d0c: b001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3d10: aa0003f3     	mov	x19, x0
 2bf3d14: 396c36a8     	ldrb	w8, [x21, #0xb0d]
 2bf3d18: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf3d1c: 370000c8     	tbnz	w8, #0x0, 0x2bf3d34 <__start_il2cpp+0x12b720>
 2bf3d20: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3d24: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf3d28: 97f78c2e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3d2c: 52800028     	mov	w8, #0x1                // =1
 2bf3d30: 392c36a8     	strb	w8, [x21, #0xb0d]
 2bf3d34: f9400280     	ldr	x0, [x20]
 2bf3d38: f9404674     	ldr	x20, [x19, #0x88]
 2bf3d3c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf3d40: 35000048     	cbnz	w8, 0x2bf3d48 <__start_il2cpp+0x12b734>
 2bf3d44: 97f78c86     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf3d48: aa1403e0     	mov	x0, x20
 2bf3d4c: aa1f03e1     	mov	x1, xzr
 2bf3d50: 94bd5a3d     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf3d54: 36000100     	tbz	w0, #0x0, 0x2bf3d74 <__start_il2cpp+0x12b760>
 2bf3d58: f9404660     	ldr	x0, [x19, #0x88]
 2bf3d5c: b4000120     	cbz	x0, 0x2bf3d80 <__start_il2cpp+0x12b76c>
 2bf3d60: f9404261     	ldr	x1, [x19, #0x80]
 2bf3d64: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3d68: f8040c01     	str	x1, [x0, #0x40]!
 2bf3d6c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf3d70: 17f78c07     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3d74: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3d78: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf3d7c: d65f03c0     	ret
 2bf3d80: 97f78cc2     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void Init(System.Boolean isLocked, System.Int32 level)
# VA 0x2bf3d84 .. 0x2bf3d90 (next mapped method entry)
 2bf3d84: 39010001     	strb	w1, [x0, #0x40]
 2bf3d88: b9004402     	str	w2, [x0, #0x44]
 2bf3d8c: 14000001     	b	0x2bf3d90 <__start_il2cpp+0x12b77c>

# BaseItem :: System.Void SetLevelProperties()
# VA 0x2bf3d90 .. 0x2bf3f6c (next mapped method entry)
 2bf3d90: d10143ff     	sub	sp, sp, #0x50
 2bf3d94: a90167fe     	stp	x30, x25, [sp, #0x10]
 2bf3d98: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2bf3d9c: a90357f6     	stp	x22, x21, [sp, #0x30]
 2bf3da0: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2bf3da4: f001d8f4     	adrp	x20, 0x6712000
 2bf3da8: aa0003f3     	mov	x19, x0
 2bf3dac: 396c5288     	ldrb	w8, [x20, #0xb14]
 2bf3db0: 37000248     	tbnz	w8, #0x0, 0x2bf3df8 <__start_il2cpp+0x12b7e4>
 2bf3db4: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3db8: f946e800     	ldr	x0, [x0, #0xdd0]
 2bf3dbc: 97f78c09     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3dc0: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3dc4: f946f000     	ldr	x0, [x0, #0xde0]
 2bf3dc8: 97f78c06     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3dcc: f001b820     	adrp	x0, 0x62fa000
 2bf3dd0: f940b800     	ldr	x0, [x0, #0x170]
 2bf3dd4: 97f78c03     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3dd8: f001b820     	adrp	x0, 0x62fa000
 2bf3ddc: f940a800     	ldr	x0, [x0, #0x150]
 2bf3de0: 97f78c00     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3de4: b001b840     	adrp	x0, 0x62fc000
 2bf3de8: f9430800     	ldr	x0, [x0, #0x610]
 2bf3dec: 97f78bfd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3df0: 52800028     	mov	w8, #0x1                // =1
 2bf3df4: 392c5288     	strb	w8, [x20, #0xb14]
 2bf3df8: b9404668     	ldr	w8, [x19, #0x44]
 2bf3dfc: 71000501     	subs	w1, w8, #0x1
 2bf3e00: f9402a68     	ldr	x8, [x19, #0x50]
 2bf3e04: 54000104     	b.mi	0x2bf3e24 <__start_il2cpp+0x12b810>
 2bf3e08: b4000b08     	cbz	x8, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3e0c: f9402d00     	ldr	x0, [x8, #0x58]
 2bf3e10: b4000ac0     	cbz	x0, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3e14: b9401809     	ldr	w9, [x0, #0x18]
 2bf3e18: 6b09003f     	cmp	w1, w9
 2bf3e1c: 5400006a     	b.ge	0x2bf3e28 <__start_il2cpp+0x12b814>
 2bf3e20: 1400003c     	b	0x2bf3f10 <__start_il2cpp+0x12b8fc>
 2bf3e24: b4000a28     	cbz	x8, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3e28: b001b7f6     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3e2c: 910033e1     	add	x1, sp, #0xc
 2bf3e30: f9470ed6     	ldr	x22, [x22, #0xe18]
 2bf3e34: b9403108     	ldr	w8, [x8, #0x30]
 2bf3e38: f94026c0     	ldr	x0, [x22, #0x48]
 2bf3e3c: b9000fe8     	str	w8, [sp, #0xc]
 2bf3e40: 97f78c49     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf3e44: aa0003f4     	mov	x20, x0
 2bf3e48: b9404668     	ldr	w8, [x19, #0x44]
 2bf3e4c: f94026c0     	ldr	x0, [x22, #0x48]
 2bf3e50: 910023e1     	add	x1, sp, #0x8
 2bf3e54: b9000be8     	str	w8, [sp, #0x8]
 2bf3e58: 97f78c43     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf3e5c: f9402a68     	ldr	x8, [x19, #0x50]
 2bf3e60: b4000848     	cbz	x8, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3e64: f9402d08     	ldr	x8, [x8, #0x58]
 2bf3e68: b4000808     	cbz	x8, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3e6c: b001b857     	adrp	x23, 0x62fc000
 2bf3e70: b001b7f8     	adrp	x24, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3e74: b001b7f9     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3e78: aa0003f5     	mov	x21, x0
 2bf3e7c: f9430af7     	ldr	x23, [x23, #0x610]
 2bf3e80: f946f318     	ldr	x24, [x24, #0xde0]
 2bf3e84: b9401908     	ldr	w8, [x8, #0x18]
 2bf3e88: f946eb39     	ldr	x25, [x25, #0xdd0]
 2bf3e8c: f94026c0     	ldr	x0, [x22, #0x48]
 2bf3e90: 910013e1     	add	x1, sp, #0x4
 2bf3e94: b90007e8     	str	w8, [sp, #0x4]
 2bf3e98: 97f78c33     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf3e9c: f94002e8     	ldr	x8, [x23]
 2bf3ea0: aa0003e3     	mov	x3, x0
 2bf3ea4: aa1403e1     	mov	x1, x20
 2bf3ea8: aa1503e2     	mov	x2, x21
 2bf3eac: aa1f03e4     	mov	x4, xzr
 2bf3eb0: aa0803e0     	mov	x0, x8
 2bf3eb4: 948e0c21     	bl	0x4f76f38 <__start_il2cpp+0x24ae924>
 2bf3eb8: f9400308     	ldr	x8, [x24]
 2bf3ebc: aa0003f5     	mov	x21, x0
 2bf3ec0: aa0803e0     	mov	x0, x8
 2bf3ec4: 97f78c6d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf3ec8: aa1503e1     	mov	x1, x21
 2bf3ecc: aa1f03e2     	mov	x2, xzr
 2bf3ed0: aa0003f4     	mov	x20, x0
 2bf3ed4: 949543b6     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2bf3ed8: f9400320     	ldr	x0, [x25]
 2bf3edc: b940e408     	ldr	w8, [x0, #0xe4]
 2bf3ee0: 35000048     	cbnz	w8, 0x2bf3ee8 <__start_il2cpp+0x12b8d4>
 2bf3ee4: 97f78c1e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf3ee8: aa1403e0     	mov	x0, x20
 2bf3eec: aa1f03e1     	mov	x1, xzr
 2bf3ef0: 94bc0d46     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2bf3ef4: f9402a68     	ldr	x8, [x19, #0x50]
 2bf3ef8: b4000388     	cbz	x8, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3efc: f9402d00     	ldr	x0, [x8, #0x58]
 2bf3f00: b4000340     	cbz	x0, 0x2bf3f68 <__start_il2cpp+0x12b954>
 2bf3f04: b9401808     	ldr	w8, [x0, #0x18]
 2bf3f08: 51000501     	sub	w1, w8, #0x1
 2bf3f0c: b9004668     	str	w8, [x19, #0x44]
 2bf3f10: f001b828     	adrp	x8, 0x62fa000
 2bf3f14: f940a908     	ldr	x8, [x8, #0x150]
 2bf3f18: f9400102     	ldr	x2, [x8]
 2bf3f1c: 943cd311     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf3f20: aa0003e1     	mov	x1, x0
 2bf3f24: aa1303e0     	mov	x0, x19
 2bf3f28: f80b0c01     	str	x1, [x0, #0xb0]!
 2bf3f2c: 97f78b98     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3f30: f9400268     	ldr	x8, [x19]
 2bf3f34: aa1303e0     	mov	x0, x19
 2bf3f38: a9598509     	ldp	x9, x1, [x8, #0x198]
 2bf3f3c: d63f0120     	blr	x9
 2bf3f40: f80c0e7f     	str	xzr, [x19, #0xc0]!
 2bf3f44: aa1303e0     	mov	x0, x19
 2bf3f48: aa1f03e1     	mov	x1, xzr
 2bf3f4c: 97f78b90     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3f50: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2bf3f54: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2bf3f58: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2bf3f5c: a94167fe     	ldp	x30, x25, [sp, #0x10]
 2bf3f60: 910143ff     	add	sp, sp, #0x50
 2bf3f64: d65f03c0     	ret
 2bf3f68: 97f78c48     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void Init(BoardSlotData boardSlotData)
# VA 0x2bf3f6c .. 0x2bf3f8c (next mapped method entry)
 2bf3f6c: b40000c1     	cbz	x1, 0x2bf3f84 <__start_il2cpp+0x12b970>
 2bf3f70: 39406028     	ldrb	w8, [x1, #0x18]
 2bf3f74: b9401c29     	ldr	w9, [x1, #0x1c]
 2bf3f78: 39010008     	strb	w8, [x0, #0x40]
 2bf3f7c: b9004409     	str	w9, [x0, #0x44]
 2bf3f80: 17ffff84     	b	0x2bf3d90 <__start_il2cpp+0x12b77c>
 2bf3f84: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bf3f88: 97f78c40     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void Unlock()
# VA 0x2bf3f8c .. 0x2bf3f9c (next mapped method entry)
 2bf3f8c: f9400008     	ldr	x8, [x0]
 2bf3f90: 3901001f     	strb	wzr, [x0, #0x40]
 2bf3f94: a9598502     	ldp	x2, x1, [x8, #0x198]
 2bf3f98: d61f0040     	br	x2

# BaseItem :: System.Void SetBoardSlot(BoardSlot slot)
# VA 0x2bf3f9c .. 0x2bf3fa4 (next mapped method entry)
 2bf3f9c: f8058c01     	str	x1, [x0, #0x58]!
 2bf3fa0: 17f78b7b     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BaseItem :: System.Void SetVisual()
# VA 0x2bf3fa4 .. 0x2bf4094 (next mapped method entry)
 2bf3fa4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf3fa8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf3fac: f001d8f4     	adrp	x20, 0x6712000
 2bf3fb0: aa0003f3     	mov	x19, x0
 2bf3fb4: 396c3a88     	ldrb	w8, [x20, #0xb0e]
 2bf3fb8: 370000c8     	tbnz	w8, #0x0, 0x2bf3fd0 <__start_il2cpp+0x12b9bc>
 2bf3fbc: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3fc0: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf3fc4: 97f78b87     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3fc8: 52800028     	mov	w8, #0x1                // =1
 2bf3fcc: 392c3a88     	strb	w8, [x20, #0xb0e]
 2bf3fd0: f9403269     	ldr	x9, [x19, #0x60]
 2bf3fd4: b40005e9     	cbz	x9, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf3fd8: f9405a68     	ldr	x8, [x19, #0xb0]
 2bf3fdc: b40005a8     	cbz	x8, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf3fe0: f9401520     	ldr	x0, [x9, #0x28]
 2bf3fe4: b4000560     	cbz	x0, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf3fe8: f9400d01     	ldr	x1, [x8, #0x18]
 2bf3fec: aa1f03e2     	mov	x2, xzr
 2bf3ff0: 94bbed91     	bl	0x5aef634 <__start_il2cpp+0x3027020>
 2bf3ff4: f9403268     	ldr	x8, [x19, #0x60]
 2bf3ff8: b40004c8     	cbz	x8, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf3ffc: f9401500     	ldr	x0, [x8, #0x28]
 2bf4000: b4000480     	cbz	x0, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf4004: 39410268     	ldrb	w8, [x19, #0x40]
 2bf4008: f0ff2469     	adrp	x9, 0x1083000
 2bf400c: 1e2e1000     	fmov	s0, #1.00000000
 2bf4010: bd45a521     	ldr	s1, [x9, #0x5a4]
 2bf4014: 1e2e1003     	fmov	s3, #1.00000000
 2bf4018: 9001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf401c: 7100011f     	cmp	w8, #0x0
 2bf4020: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf4024: aa1f03e1     	mov	x1, xzr
 2bf4028: 1e210c00     	fcsel	s0, s0, s1, eq
 2bf402c: 1e204001     	fmov	s1, s0
 2bf4030: 1e204002     	fmov	s2, s0
 2bf4034: 94bbef77     	bl	0x5aefe10 <__start_il2cpp+0x30277fc>
 2bf4038: f9400280     	ldr	x0, [x20]
 2bf403c: f9403e74     	ldr	x20, [x19, #0x78]
 2bf4040: b940e408     	ldr	w8, [x0, #0xe4]
 2bf4044: 35000048     	cbnz	w8, 0x2bf404c <__start_il2cpp+0x12ba38>
 2bf4048: 97f78bc5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf404c: aa1403e0     	mov	x0, x20
 2bf4050: aa1f03e1     	mov	x1, xzr
 2bf4054: 94bd597c     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf4058: 36000160     	tbz	w0, #0x0, 0x2bf4084 <__start_il2cpp+0x12ba70>
 2bf405c: f9403e60     	ldr	x0, [x19, #0x78]
 2bf4060: b4000180     	cbz	x0, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf4064: aa1f03e1     	mov	x1, xzr
 2bf4068: 94bd4849     	bl	0x5b4618c <__start_il2cpp+0x307db78>
 2bf406c: b4000120     	cbz	x0, 0x2bf4090 <__start_il2cpp+0x12ba7c>
 2bf4070: 39410261     	ldrb	w1, [x19, #0x40]
 2bf4074: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf4078: aa1f03e2     	mov	x2, xzr
 2bf407c: f84207fe     	ldr	x30, [sp], #0x20
 2bf4080: 14bd40be     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf4084: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf4088: f84207fe     	ldr	x30, [sp], #0x20
 2bf408c: d65f03c0     	ret
 2bf4090: 97f78bfe     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void LevelUp()
# VA 0x2bf4094 .. 0x2bf40d4 (next mapped method entry)
 2bf4094: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2bf4098: aa0003f3     	mov	x19, x0
 2bf409c: 97fffcb6     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf40a0: 36000060     	tbz	w0, #0x0, 0x2bf40ac <__start_il2cpp+0x12ba98>
 2bf40a4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2bf40a8: d65f03c0     	ret
 2bf40ac: b9404668     	ldr	w8, [x19, #0x44]
 2bf40b0: aa1303e0     	mov	x0, x19
 2bf40b4: 11000508     	add	w8, w8, #0x1
 2bf40b8: b9004668     	str	w8, [x19, #0x44]
 2bf40bc: 97ffff35     	bl	0x2bf3d90 <__start_il2cpp+0x12b77c>
 2bf40c0: aa1303e0     	mov	x0, x19
 2bf40c4: 52800021     	mov	w1, #0x1                // =1
 2bf40c8: aa1f03e2     	mov	x2, xzr
 2bf40cc: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2bf40d0: 14000001     	b	0x2bf40d4 <__start_il2cpp+0x12bac0>

# BaseItem :: System.Void SetProducers(System.Boolean startOnInit, System.Collections.Generic.List`1<ActiveItemProducerData> savedProducersData = null)
# VA 0x2bf40d4 .. 0x2bf45bc (next mapped method entry)
 2bf40d4: d101c3ff     	sub	sp, sp, #0x70
 2bf40d8: a9017bfd     	stp	x29, x30, [sp, #0x10]
 2bf40dc: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2bf40e0: a90367fa     	stp	x26, x25, [sp, #0x30]
 2bf40e4: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2bf40e8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2bf40ec: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2bf40f0: d001d8f6     	adrp	x22, 0x6712000
 2bf40f4: aa0203f4     	mov	x20, x2
 2bf40f8: 2a0103f5     	mov	w21, w1
 2bf40fc: 396c5ac8     	ldrb	w8, [x22, #0xb16]
 2bf4100: aa0003f3     	mov	x19, x0
 2bf4104: 370005a8     	tbnz	w8, #0x0, 0x2bf41b8 <__start_il2cpp+0x12bba4>
 2bf4108: 9001b840     	adrp	x0, 0x62fc000
 2bf410c: f9430c00     	ldr	x0, [x0, #0x618]
 2bf4110: 97f78b34     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4114: 9001b840     	adrp	x0, 0x62fc000
 2bf4118: f9431000     	ldr	x0, [x0, #0x620]
 2bf411c: 97f78b31     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4120: 9001b840     	adrp	x0, 0x62fc000
 2bf4124: f9431400     	ldr	x0, [x0, #0x628]
 2bf4128: 97f78b2e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf412c: 9001b840     	adrp	x0, 0x62fc000
 2bf4130: f9431800     	ldr	x0, [x0, #0x630]
 2bf4134: 97f78b2b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4138: 9001b840     	adrp	x0, 0x62fc000
 2bf413c: f9431c00     	ldr	x0, [x0, #0x638]
 2bf4140: 97f78b28     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4144: 9001b840     	adrp	x0, 0x62fc000
 2bf4148: f942cc00     	ldr	x0, [x0, #0x598]
 2bf414c: 97f78b25     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4150: 9001b840     	adrp	x0, 0x62fc000
 2bf4154: f9432000     	ldr	x0, [x0, #0x640]
 2bf4158: 97f78b22     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf415c: 9001b840     	adrp	x0, 0x62fc000
 2bf4160: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf4164: 97f78b1f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4168: 9001b840     	adrp	x0, 0x62fc000
 2bf416c: f9432400     	ldr	x0, [x0, #0x648]
 2bf4170: 97f78b1c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4174: 9001b840     	adrp	x0, 0x62fc000
 2bf4178: f9432800     	ldr	x0, [x0, #0x650]
 2bf417c: 97f78b19     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4180: d001b820     	adrp	x0, 0x62fa000
 2bf4184: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf4188: 97f78b16     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf418c: 9001b840     	adrp	x0, 0x62fc000
 2bf4190: f9432c00     	ldr	x0, [x0, #0x658]
 2bf4194: 97f78b13     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4198: 9001b840     	adrp	x0, 0x62fc000
 2bf419c: f9433000     	ldr	x0, [x0, #0x660]
 2bf41a0: 97f78b10     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf41a4: 9001b840     	adrp	x0, 0x62fc000
 2bf41a8: f9433400     	ldr	x0, [x0, #0x668]
 2bf41ac: 97f78b0d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf41b0: 52800028     	mov	w8, #0x1                // =1
 2bf41b4: 392c5ac8     	strb	w8, [x22, #0xb16]
 2bf41b8: 52800028     	mov	w8, #0x1                // =1
 2bf41bc: aa1303e0     	mov	x0, x19
 2bf41c0: 39032268     	strb	w8, [x19, #0xc8]
 2bf41c4: 97fffe32     	bl	0x2bf3a8c <__start_il2cpp+0x12b478>
 2bf41c8: f9405a68     	ldr	x8, [x19, #0xb0]
 2bf41cc: b40016c8     	cbz	x8, 0x2bf44a4 <__start_il2cpp+0x12be90>
 2bf41d0: 3940d508     	ldrb	w8, [x8, #0x35]
 2bf41d4: 34000288     	cbz	w8, 0x2bf4224 <__start_il2cpp+0x12bc10>
 2bf41d8: aa1303f6     	mov	x22, x19
 2bf41dc: f84b8ec0     	ldr	x0, [x22, #0xb8]!
 2bf41e0: b40004a0     	cbz	x0, 0x2bf4274 <__start_il2cpp+0x12bc60>
 2bf41e4: d001b838     	adrp	x24, 0x62fa000
 2bf41e8: 2a1f03f7     	mov	w23, wzr
 2bf41ec: f9427718     	ldr	x24, [x24, #0x4e8]
 2bf41f0: b9401808     	ldr	w8, [x0, #0x18]
 2bf41f4: 6b0802ff     	cmp	w23, w8
 2bf41f8: 540005ca     	b.ge	0x2bf42b0 <__start_il2cpp+0x12bc9c>
 2bf41fc: f9400302     	ldr	x2, [x24]
 2bf4200: 2a1703e1     	mov	w1, w23
 2bf4204: 943cd257     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf4208: b40000c0     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf420c: aa1f03e1     	mov	x1, xzr
 2bf4210: 94006311     	bl	0x2c0ce54 <__start_il2cpp+0x144840>
 2bf4214: f94002c0     	ldr	x0, [x22]
 2bf4218: 110006f7     	add	w23, w23, #0x1
 2bf421c: b5fffea0     	cbnz	x0, 0x2bf41f0 <__start_il2cpp+0x12bbdc>
 2bf4220: 97f78b9a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4224: aa1303e0     	mov	x0, x19
 2bf4228: 97fffe19     	bl	0x2bf3a8c <__start_il2cpp+0x12b478>
 2bf422c: f9405e68     	ldr	x8, [x19, #0xb8]
 2bf4230: b40012a8     	cbz	x8, 0x2bf4484 <__start_il2cpp+0x12be70>
 2bf4234: 29432502     	ldp	w2, w9, [x8, #0x18]
 2bf4238: 11000529     	add	w9, w9, #0x1
 2bf423c: 7100045f     	cmp	w2, #0x1
 2bf4240: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2bf4244: 5400120b     	b.lt	0x2bf4484 <__start_il2cpp+0x12be70>
 2bf4248: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2bf424c: 2a1f03e1     	mov	w1, wzr
 2bf4250: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2bf4254: aa1f03e3     	mov	x3, xzr
 2bf4258: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2bf425c: f9400900     	ldr	x0, [x8, #0x10]
 2bf4260: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2bf4264: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2bf4268: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2bf426c: 9101c3ff     	add	sp, sp, #0x70
 2bf4270: 1494ef59     	b	0x512ffd4 <__start_il2cpp+0x26679c0>
 2bf4274: 9001b848     	adrp	x8, 0x62fc000
 2bf4278: f9433508     	ldr	x8, [x8, #0x668]
 2bf427c: f9400100     	ldr	x0, [x8]
 2bf4280: 97f78b7e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf4284: 9001b848     	adrp	x8, 0x62fc000
 2bf4288: aa0003f7     	mov	x23, x0
 2bf428c: f9432108     	ldr	x8, [x8, #0x640]
 2bf4290: f9400101     	ldr	x1, [x8]
 2bf4294: 943cd0cd     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2bf4298: aa1603e0     	mov	x0, x22
 2bf429c: aa1703e1     	mov	x1, x23
 2bf42a0: f90002d7     	str	x23, [x22]
 2bf42a4: 97f78aba     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf42a8: f94002c0     	ldr	x0, [x22]
 2bf42ac: b4fffba0     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf42b0: 29432002     	ldp	w2, w8, [x0, #0x18]
 2bf42b4: 11000508     	add	w8, w8, #0x1
 2bf42b8: 7100045f     	cmp	w2, #0x1
 2bf42bc: 2903201f     	stp	wzr, w8, [x0, #0x18]
 2bf42c0: 540000ab     	b.lt	0x2bf42d4 <__start_il2cpp+0x12bcc0>
 2bf42c4: f9400800     	ldr	x0, [x0, #0x10]
 2bf42c8: 2a1f03e1     	mov	w1, wzr
 2bf42cc: aa1f03e3     	mov	x3, xzr
 2bf42d0: 9494ef41     	bl	0x512ffd4 <__start_il2cpp+0x26679c0>
 2bf42d4: f9405a68     	ldr	x8, [x19, #0xb0]
 2bf42d8: b4fffa48     	cbz	x8, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf42dc: f9401d16     	ldr	x22, [x8, #0x38]
 2bf42e0: b4fffa16     	cbz	x22, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf42e4: b9401ac8     	ldr	w8, [x22, #0x18]
 2bf42e8: 34000ce8     	cbz	w8, 0x2bf4484 <__start_il2cpp+0x12be70>
 2bf42ec: 7100051f     	cmp	w8, #0x1
 2bf42f0: 54000c8b     	b.lt	0x2bf4480 <__start_il2cpp+0x12be6c>
 2bf42f4: 9001b85a     	adrp	x26, 0x62fc000
 2bf42f8: 9001b85d     	adrp	x29, 0x62fc000
 2bf42fc: 2a1f03f7     	mov	w23, wzr
 2bf4300: f9432f5a     	ldr	x26, [x26, #0x658]
 2bf4304: f9431fbd     	ldr	x29, [x29, #0x638]
 2bf4308: 5280111c     	mov	w28, #0x88              // =136
 2bf430c: 5280101b     	mov	w27, #0x80              // =128
 2bf4310: f9400342     	ldr	x2, [x26]
 2bf4314: aa1603e0     	mov	x0, x22
 2bf4318: 2a1703e1     	mov	w1, w23
 2bf431c: 943cd211     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf4320: b4fff800     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf4324: b9403008     	ldr	w8, [x0, #0x30]
 2bf4328: aa0003f8     	mov	x24, x0
 2bf432c: 34000108     	cbz	w8, 0x2bf434c <__start_il2cpp+0x12bd38>
 2bf4330: 7100091f     	cmp	w8, #0x2
 2bf4334: 540001a1     	b.ne	0x2bf4368 <__start_il2cpp+0x12bd54>
 2bf4338: f9401260     	ldr	x0, [x19, #0x20]
 2bf433c: b4fff720     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf4340: 9001b848     	adrp	x8, 0x62fc000
 2bf4344: f9430d08     	ldr	x8, [x8, #0x618]
 2bf4348: 14000010     	b	0x2bf4388 <__start_il2cpp+0x12bd74>
 2bf434c: 39411b08     	ldrb	w8, [x24, #0x46]
 2bf4350: f9401260     	ldr	x0, [x19, #0x20]
 2bf4354: 34000148     	cbz	w8, 0x2bf437c <__start_il2cpp+0x12bd68>
 2bf4358: 9001b848     	adrp	x8, 0x62fc000
 2bf435c: f9431508     	ldr	x8, [x8, #0x628]
 2bf4360: b5000140     	cbnz	x0, 0x2bf4388 <__start_il2cpp+0x12bd74>
 2bf4364: 17ffffaf     	b	0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf4368: f9401260     	ldr	x0, [x19, #0x20]
 2bf436c: b4fff5a0     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf4370: 9001b848     	adrp	x8, 0x62fc000
 2bf4374: f9431108     	ldr	x8, [x8, #0x620]
 2bf4378: 14000004     	b	0x2bf4388 <__start_il2cpp+0x12bd74>
 2bf437c: 9001b848     	adrp	x8, 0x62fc000
 2bf4380: f9431908     	ldr	x8, [x8, #0x630]
 2bf4384: b4fff4e0     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf4388: f9400101     	ldr	x1, [x8]
 2bf438c: 941f9b03     	bl	0x33daf98 <__start_il2cpp+0x912984>
 2bf4390: aa0003f9     	mov	x25, x0
 2bf4394: b4000174     	cbz	x20, 0x2bf43c0 <__start_il2cpp+0x12bdac>
 2bf4398: b9401a88     	ldr	w8, [x20, #0x18]
 2bf439c: 34000128     	cbz	w8, 0x2bf43c0 <__start_il2cpp+0x12bdac>
 2bf43a0: 9001b848     	adrp	x8, 0x62fc000
 2bf43a4: aa1403e0     	mov	x0, x20
 2bf43a8: 2a1703e1     	mov	w1, w23
 2bf43ac: f9433108     	ldr	x8, [x8, #0x660]
 2bf43b0: f9400102     	ldr	x2, [x8]
 2bf43b4: 943cd1eb     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf43b8: aa0003e6     	mov	x6, x0
 2bf43bc: 14000002     	b	0x2bf43c4 <__start_il2cpp+0x12bdb0>
 2bf43c0: aa1f03e6     	mov	x6, xzr
 2bf43c4: 710002ff     	cmp	w23, #0x0
 2bf43c8: 9a9c0368     	csel	x8, x27, x28, eq
 2bf43cc: f8686a63     	ldr	x3, [x19, x8]
 2bf43d0: 34000097     	cbz	w23, 0x2bf43e0 <__start_il2cpp+0x12bdcc>
 2bf43d4: aa1f03e4     	mov	x4, xzr
 2bf43d8: b5000099     	cbnz	x25, 0x2bf43e8 <__start_il2cpp+0x12bdd4>
 2bf43dc: 17ffff91     	b	0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf43e0: f9404a64     	ldr	x4, [x19, #0x90]
 2bf43e4: b4fff1f9     	cbz	x25, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf43e8: f9400328     	ldr	x8, [x25]
 2bf43ec: f9405267     	ldr	x7, [x19, #0xa0]
 2bf43f0: 120002a5     	and	w5, w21, #0x1
 2bf43f4: aa1903e0     	mov	x0, x25
 2bf43f8: aa1303e1     	mov	x1, x19
 2bf43fc: aa1803e2     	mov	x2, x24
 2bf4400: a95da109     	ldp	x9, x8, [x8, #0x1d8]
 2bf4404: f90003e8     	str	x8, [sp]
 2bf4408: d63f0120     	blr	x9
 2bf440c: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf4410: b4fff080     	cbz	x0, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf4414: b9401c0a     	ldr	w10, [x0, #0x1c]
 2bf4418: f9400808     	ldr	x8, [x0, #0x10]
 2bf441c: f94003a9     	ldr	x9, [x29]
 2bf4420: 1100054a     	add	w10, w10, #0x1
 2bf4424: b9001c0a     	str	w10, [x0, #0x1c]
 2bf4428: b4ffefc8     	cbz	x8, 0x2bf4220 <__start_il2cpp+0x12bc0c>
 2bf442c: b980180a     	ldrsw	x10, [x0, #0x18]
 2bf4430: b940190b     	ldr	w11, [x8, #0x18]
 2bf4434: 6b0b015f     	cmp	w10, w11
 2bf4438: 54000122     	b.hs	0x2bf445c <__start_il2cpp+0x12be48>
 2bf443c: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2bf4440: 11000549     	add	w9, w10, #0x1
 2bf4444: aa1903e1     	mov	x1, x25
 2bf4448: b9001809     	str	w9, [x0, #0x18]
 2bf444c: f8020d19     	str	x25, [x8, #0x20]!
 2bf4450: aa0803e0     	mov	x0, x8
 2bf4454: 97f78a4e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf4458: 14000006     	b	0x2bf4470 <__start_il2cpp+0x12be5c>
 2bf445c: f9401128     	ldr	x8, [x9, #0x20]
 2bf4460: aa1903e1     	mov	x1, x25
 2bf4464: f9406108     	ldr	x8, [x8, #0xc0]
 2bf4468: f9403902     	ldr	x2, [x8, #0x70]
 2bf446c: 943cd271     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2bf4470: b9401ac8     	ldr	w8, [x22, #0x18]
 2bf4474: 110006f7     	add	w23, w23, #0x1
 2bf4478: 6b0802ff     	cmp	w23, w8
 2bf447c: 54fff4ab     	b.lt	0x2bf4310 <__start_il2cpp+0x12bcfc>
 2bf4480: 3903227f     	strb	wzr, [x19, #0xc8]
 2bf4484: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2bf4488: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2bf448c: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2bf4490: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2bf4494: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2bf4498: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2bf449c: 9101c3ff     	add	sp, sp, #0x70
 2bf44a0: d65f03c0     	ret
 2bf44a4: aa1303e0     	mov	x0, x19
 2bf44a8: 97fffe3a     	bl	0x2bf3d90 <__start_il2cpp+0x12b77c>
 2bf44ac: aa1303e0     	mov	x0, x19
 2bf44b0: aa1f03e1     	mov	x1, xzr
 2bf44b4: 94bd58be     	bl	0x5b4a7ac <__start_il2cpp+0x3082198>
 2bf44b8: aa0003f6     	mov	x22, x0
 2bf44bc: 9001b840     	adrp	x0, 0x62fc000
 2bf44c0: f9433800     	ldr	x0, [x0, #0x670]
 2bf44c4: 97f78a4c     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf44c8: aa0003f7     	mov	x23, x0
 2bf44cc: 9001b840     	adrp	x0, 0x62fc000
 2bf44d0: f9433c00     	ldr	x0, [x0, #0x678]
 2bf44d4: 97f78a48     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf44d8: aa0003e2     	mov	x2, x0
 2bf44dc: aa1703e0     	mov	x0, x23
 2bf44e0: aa1603e1     	mov	x1, x22
 2bf44e4: aa1f03e3     	mov	x3, xzr
 2bf44e8: 948e07a1     	bl	0x4f7636c <__start_il2cpp+0x24add58>
 2bf44ec: aa0003f7     	mov	x23, x0
 2bf44f0: 9001b800     	adrp	x0, 0x62f4000
 2bf44f4: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf44f8: 97f78a3f     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf44fc: 97f78adf     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf4500: aa1703e1     	mov	x1, x23
 2bf4504: aa1f03e2     	mov	x2, xzr
 2bf4508: aa1f03e3     	mov	x3, xzr
 2bf450c: aa0003f6     	mov	x22, x0
 2bf4510: 97fcee82     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2bf4514: 9001b840     	adrp	x0, 0x62fc000
 2bf4518: f9434000     	ldr	x0, [x0, #0x680]
 2bf451c: 97f78a36     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf4520: aa0003e1     	mov	x1, x0
 2bf4524: aa1603e0     	mov	x0, x22
 2bf4528: 97f78a89     	bl	0x29d6f4c <mono_class_get_checked+0x834>
 2bf452c: 14000002     	b	0x2bf4534 <__start_il2cpp+0x12bf20>
 2bf4530: 14000001     	b	0x2bf4534 <__start_il2cpp+0x12bf20>
 2bf4534: aa0003f6     	mov	x22, x0
 2bf4538: 7100043f     	cmp	w1, #0x1
 2bf453c: 540003a1     	b.ne	0x2bf45b0 <__start_il2cpp+0x12bf9c>
 2bf4540: aa1603e0     	mov	x0, x22
 2bf4544: 94ccc87f     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf4548: aa0003f6     	mov	x22, x0
 2bf454c: 9001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4550: f946f000     	ldr	x0, [x0, #0xde0]
 2bf4554: 97f78a28     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf4558: f94002c8     	ldr	x8, [x22]
 2bf455c: f9400101     	ldr	x1, [x8]
 2bf4560: 97f78bcc     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf4564: 36000120     	tbz	w0, #0x0, 0x2bf4588 <__start_il2cpp+0x12bf74>
 2bf4568: f94002d6     	ldr	x22, [x22]
 2bf456c: 94ccc879     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf4570: aa1603e0     	mov	x0, x22
 2bf4574: aa1f03e1     	mov	x1, xzr
 2bf4578: 940d420b     	bl	0x2f44da4 <__start_il2cpp+0x47c790>
 2bf457c: f9405a68     	ldr	x8, [x19, #0xb0]
 2bf4580: b5ffe288     	cbnz	x8, 0x2bf41d0 <__start_il2cpp+0x12bbbc>
 2bf4584: 17ffffc0     	b	0x2bf4484 <__start_il2cpp+0x12be70>
 2bf4588: 52800100     	mov	w0, #0x8                // =8
 2bf458c: 94ccc88d     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf4590: f94002c8     	ldr	x8, [x22]
 2bf4594: f9000008     	str	x8, [x0]
 2bf4598: 900199c1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf459c: 91302021     	add	x1, x1, #0xc08
 2bf45a0: aa1f03e2     	mov	x2, xzr
 2bf45a4: 94ccc88b     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf45a8: aa0003f6     	mov	x22, x0
 2bf45ac: 94ccc869     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf45b0: aa1603e0     	mov	x0, x22
 2bf45b4: 97fb404a     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf45b8: 97eac525     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.Void ActivateObjectiveTick(System.Boolean status)
# VA 0x2bf45bc .. 0x2bf45d8 (next mapped method entry)
 2bf45bc: f9403400     	ldr	x0, [x0, #0x68]
 2bf45c0: b4000080     	cbz	x0, 0x2bf45d0 <__start_il2cpp+0x12bfbc>
 2bf45c4: 12000021     	and	w1, w1, #0x1
 2bf45c8: aa1f03e2     	mov	x2, xzr
 2bf45cc: 14bd3f6b     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf45d0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bf45d4: 97f78aad     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void DisableQuestObjectiveTick()
# VA 0x2bf45d8 .. 0x2bf465c (next mapped method entry)
 2bf45d8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf45dc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf45e0: d001d8f5     	adrp	x21, 0x6712000
 2bf45e4: 9001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf45e8: aa0003f3     	mov	x19, x0
 2bf45ec: 396c4aa8     	ldrb	w8, [x21, #0xb12]
 2bf45f0: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf45f4: 370000c8     	tbnz	w8, #0x0, 0x2bf460c <__start_il2cpp+0x12bff8>
 2bf45f8: 9001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf45fc: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf4600: 97f789f8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4604: 52800028     	mov	w8, #0x1                // =1
 2bf4608: 392c4aa8     	strb	w8, [x21, #0xb12]
 2bf460c: f9400280     	ldr	x0, [x20]
 2bf4610: f9403a74     	ldr	x20, [x19, #0x70]
 2bf4614: b940e408     	ldr	w8, [x0, #0xe4]
 2bf4618: 35000048     	cbnz	w8, 0x2bf4620 <__start_il2cpp+0x12c00c>
 2bf461c: 97f78a50     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf4620: aa1403e0     	mov	x0, x20
 2bf4624: aa1f03e1     	mov	x1, xzr
 2bf4628: 94bd5807     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf462c: 36000100     	tbz	w0, #0x0, 0x2bf464c <__start_il2cpp+0x12c038>
 2bf4630: f9403a60     	ldr	x0, [x19, #0x70]
 2bf4634: b4000120     	cbz	x0, 0x2bf4658 <__start_il2cpp+0x12c044>
 2bf4638: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf463c: 2a1f03e1     	mov	w1, wzr
 2bf4640: aa1f03e2     	mov	x2, xzr
 2bf4644: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf4648: 14bd3f4c     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf464c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf4650: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf4654: d65f03c0     	ret
 2bf4658: 97f78a8c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void <ResetProducerViewers>g__ResetProducerTimer|47_0(ItemProducerTimer timer)
# VA 0x2bf465c .. 0x2bf472c (next mapped method entry)
 2bf465c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf4660: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf4664: d001d8f4     	adrp	x20, 0x6712000
 2bf4668: 9001b7f5     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf466c: aa0003f3     	mov	x19, x0
 2bf4670: 396c9e88     	ldrb	w8, [x20, #0xb27]
 2bf4674: f9478eb5     	ldr	x21, [x21, #0xf18]
 2bf4678: 37000128     	tbnz	w8, #0x0, 0x2bf469c <__start_il2cpp+0x12c088>
 2bf467c: 9001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4680: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf4684: 97f789d7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4688: 9001b840     	adrp	x0, 0x62fc000
 2bf468c: f9434400     	ldr	x0, [x0, #0x688]
 2bf4690: 97f789d4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4694: 52800028     	mov	w8, #0x1                // =1
 2bf4698: 392c9e88     	strb	w8, [x20, #0xb27]
 2bf469c: f94002a0     	ldr	x0, [x21]
 2bf46a0: b940e408     	ldr	w8, [x0, #0xe4]
 2bf46a4: 35000048     	cbnz	w8, 0x2bf46ac <__start_il2cpp+0x12c098>
 2bf46a8: 97f78a2d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf46ac: aa1303e0     	mov	x0, x19
 2bf46b0: aa1f03e1     	mov	x1, xzr
 2bf46b4: 94bd57e4     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf46b8: 36000320     	tbz	w0, #0x0, 0x2bf471c <__start_il2cpp+0x12c108>
 2bf46bc: b4000373     	cbz	x19, 0x2bf4728 <__start_il2cpp+0x12c114>
 2bf46c0: aa1303e0     	mov	x0, x19
 2bf46c4: 2a1f03e1     	mov	w1, wzr
 2bf46c8: aa1f03e2     	mov	x2, xzr
 2bf46cc: 9400617b     	bl	0x2c0ccb8 <__start_il2cpp+0x1446a4>
 2bf46d0: f9401660     	ldr	x0, [x19, #0x28]
 2bf46d4: b40002a0     	cbz	x0, 0x2bf4728 <__start_il2cpp+0x12c114>
 2bf46d8: 52800021     	mov	w1, #0x1                // =1
 2bf46dc: aa1f03e2     	mov	x2, xzr
 2bf46e0: 94c90238     	bl	0x5e34fc0 <__start_il2cpp+0x336c9ac>
 2bf46e4: f9401660     	ldr	x0, [x19, #0x28]
 2bf46e8: b4000200     	cbz	x0, 0x2bf4728 <__start_il2cpp+0x12c114>
 2bf46ec: 9001b848     	adrp	x8, 0x62fc000
 2bf46f0: aa1f03e2     	mov	x2, xzr
 2bf46f4: f9434508     	ldr	x8, [x8, #0x688]
 2bf46f8: f9400101     	ldr	x1, [x8]
 2bf46fc: 94c90463     	bl	0x5e35888 <__start_il2cpp+0x336d274>
 2bf4700: f9401660     	ldr	x0, [x19, #0x28]
 2bf4704: b4000120     	cbz	x0, 0x2bf4728 <__start_il2cpp+0x12c114>
 2bf4708: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf470c: 52800041     	mov	w1, #0x2                // =2
 2bf4710: aa1f03e2     	mov	x2, xzr
 2bf4714: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf4718: 14c90288     	b	0x5e35138 <__start_il2cpp+0x336cb24>
 2bf471c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf4720: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf4724: d65f03c0     	ret
 2bf4728: 97f78a58     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void ForceCompleteProducerViewerAnimations()
# VA 0x2bf472c .. 0x2bf4838 (next mapped method entry)
 2bf472c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf4730: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf4734: d001d8f4     	adrp	x20, 0x6712000
 2bf4738: 9001b7f5     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf473c: aa0003f3     	mov	x19, x0
 2bf4740: 396c4688     	ldrb	w8, [x20, #0xb11]
 2bf4744: f9478eb5     	ldr	x21, [x21, #0xf18]
 2bf4748: 370000c8     	tbnz	w8, #0x0, 0x2bf4760 <__start_il2cpp+0x12c14c>
 2bf474c: 9001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4750: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf4754: 97f789a3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4758: 52800028     	mov	w8, #0x1                // =1
 2bf475c: 392c4688     	strb	w8, [x20, #0xb11]
 2bf4760: f94002a0     	ldr	x0, [x21]
 2bf4764: f9404a74     	ldr	x20, [x19, #0x90]
 2bf4768: b940e408     	ldr	w8, [x0, #0xe4]
 2bf476c: 35000048     	cbnz	w8, 0x2bf4774 <__start_il2cpp+0x12c160>
 2bf4770: 97f789fb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf4774: aa1403e0     	mov	x0, x20
 2bf4778: aa1f03e1     	mov	x1, xzr
 2bf477c: 94bd57b2     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf4780: 36000100     	tbz	w0, #0x0, 0x2bf47a0 <__start_il2cpp+0x12c18c>
 2bf4784: f9404a60     	ldr	x0, [x19, #0x90]
 2bf4788: b4000560     	cbz	x0, 0x2bf4834 <__start_il2cpp+0x12c220>
 2bf478c: aa1f03e1     	mov	x1, xzr
 2bf4790: 94bd3dd5     	bl	0x5b43ee4 <__start_il2cpp+0x307b8d0>
 2bf4794: 2a1f03e1     	mov	w1, wzr
 2bf4798: aa1f03e2     	mov	x2, xzr
 2bf479c: 940c24f0     	bl	0x2efdb5c <__start_il2cpp+0x435548>
 2bf47a0: f94002a0     	ldr	x0, [x21]
 2bf47a4: f9404274     	ldr	x20, [x19, #0x80]
 2bf47a8: b940e408     	ldr	w8, [x0, #0xe4]
 2bf47ac: 35000048     	cbnz	w8, 0x2bf47b4 <__start_il2cpp+0x12c1a0>
 2bf47b0: 97f789eb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf47b4: aa1403e0     	mov	x0, x20
 2bf47b8: aa1f03e1     	mov	x1, xzr
 2bf47bc: 94bd57a2     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf47c0: 36000100     	tbz	w0, #0x0, 0x2bf47e0 <__start_il2cpp+0x12c1cc>
 2bf47c4: f9404260     	ldr	x0, [x19, #0x80]
 2bf47c8: b4000360     	cbz	x0, 0x2bf4834 <__start_il2cpp+0x12c220>
 2bf47cc: aa1f03e1     	mov	x1, xzr
 2bf47d0: 94bd2c63     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf47d4: 2a1f03e1     	mov	w1, wzr
 2bf47d8: aa1f03e2     	mov	x2, xzr
 2bf47dc: 940c24e0     	bl	0x2efdb5c <__start_il2cpp+0x435548>
 2bf47e0: f94002a0     	ldr	x0, [x21]
 2bf47e4: f9404674     	ldr	x20, [x19, #0x88]
 2bf47e8: b940e408     	ldr	w8, [x0, #0xe4]
 2bf47ec: 35000048     	cbnz	w8, 0x2bf47f4 <__start_il2cpp+0x12c1e0>
 2bf47f0: 97f789db     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf47f4: aa1403e0     	mov	x0, x20
 2bf47f8: aa1f03e1     	mov	x1, xzr
 2bf47fc: 94bd5792     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf4800: 36000140     	tbz	w0, #0x0, 0x2bf4828 <__start_il2cpp+0x12c214>
 2bf4804: f9404660     	ldr	x0, [x19, #0x88]
 2bf4808: b4000160     	cbz	x0, 0x2bf4834 <__start_il2cpp+0x12c220>
 2bf480c: aa1f03e1     	mov	x1, xzr
 2bf4810: 94bd2c53     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf4814: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf4818: 2a1f03e1     	mov	w1, wzr
 2bf481c: aa1f03e2     	mov	x2, xzr
 2bf4820: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf4824: 140c24ce     	b	0x2efdb5c <__start_il2cpp+0x435548>
 2bf4828: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf482c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf4830: d65f03c0     	ret
 2bf4834: 97f78a15     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void EnableQuestObjectiveTick()
# VA 0x2bf4838 .. 0x2bf48bc (next mapped method entry)
 2bf4838: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf483c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf4840: d001d8f5     	adrp	x21, 0x6712000
 2bf4844: 9001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4848: aa0003f3     	mov	x19, x0
 2bf484c: 396c4ea8     	ldrb	w8, [x21, #0xb13]
 2bf4850: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf4854: 370000c8     	tbnz	w8, #0x0, 0x2bf486c <__start_il2cpp+0x12c258>
 2bf4858: 9001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf485c: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf4860: 97f78960     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4864: 52800028     	mov	w8, #0x1                // =1
 2bf4868: 392c4ea8     	strb	w8, [x21, #0xb13]
 2bf486c: f9400280     	ldr	x0, [x20]
 2bf4870: f9403a74     	ldr	x20, [x19, #0x70]
 2bf4874: b940e408     	ldr	w8, [x0, #0xe4]
 2bf4878: 35000048     	cbnz	w8, 0x2bf4880 <__start_il2cpp+0x12c26c>
 2bf487c: 97f789b8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf4880: aa1403e0     	mov	x0, x20
 2bf4884: aa1f03e1     	mov	x1, xzr
 2bf4888: 94bd576f     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf488c: 36000100     	tbz	w0, #0x0, 0x2bf48ac <__start_il2cpp+0x12c298>
 2bf4890: f9403a60     	ldr	x0, [x19, #0x70]
 2bf4894: b4000120     	cbz	x0, 0x2bf48b8 <__start_il2cpp+0x12c2a4>
 2bf4898: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf489c: 52800021     	mov	w1, #0x1                // =1
 2bf48a0: aa1f03e2     	mov	x2, xzr
 2bf48a4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf48a8: 14bd3eb4     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf48ac: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf48b0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf48b4: d65f03c0     	ret
 2bf48b8: 97f789f4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void OnItemDragging()
# VA 0x2bf48bc .. 0x2bf48c0 (next mapped method entry)
 2bf48bc: d65f03c0     	ret

# BaseItem :: System.Void UpdateProducerTimers()
# VA 0x2bf48c0 .. 0x2bf4a88 (next mapped method entry)
 2bf48c0: d101c3ff     	sub	sp, sp, #0x70
 2bf48c4: a9045ffe     	stp	x30, x23, [sp, #0x40]
 2bf48c8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2bf48cc: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2bf48d0: d001d8f4     	adrp	x20, 0x6712000
 2bf48d4: aa0003f3     	mov	x19, x0
 2bf48d8: 396c5688     	ldrb	w8, [x20, #0xb15]
 2bf48dc: 37000248     	tbnz	w8, #0x0, 0x2bf4924 <__start_il2cpp+0x12c310>
 2bf48e0: d001b820     	adrp	x0, 0x62fa000
 2bf48e4: f9421400     	ldr	x0, [x0, #0x428]
 2bf48e8: 97f7893e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf48ec: d001b820     	adrp	x0, 0x62fa000
 2bf48f0: f9421800     	ldr	x0, [x0, #0x430]
 2bf48f4: 97f7893b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf48f8: d001b820     	adrp	x0, 0x62fa000
 2bf48fc: f9421c00     	ldr	x0, [x0, #0x438]
 2bf4900: 97f78938     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4904: d001b820     	adrp	x0, 0x62fa000
 2bf4908: f9422000     	ldr	x0, [x0, #0x440]
 2bf490c: 97f78935     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4910: 9001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4914: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf4918: 97f78932     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf491c: 52800028     	mov	w8, #0x1                // =1
 2bf4920: 392c5688     	strb	w8, [x20, #0xb15]
 2bf4924: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf4928: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2bf492c: f9001bff     	str	xzr, [sp, #0x30]
 2bf4930: b4000780     	cbz	x0, 0x2bf4a20 <__start_il2cpp+0x12c40c>
 2bf4934: d001b828     	adrp	x8, 0x62fa000
 2bf4938: d001b835     	adrp	x21, 0x62fa000
 2bf493c: 9001b7f6     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4940: f9422108     	ldr	x8, [x8, #0x440]
 2bf4944: d001b834     	adrp	x20, 0x62fa000
 2bf4948: f9421ab5     	ldr	x21, [x21, #0x430]
 2bf494c: f9478ed6     	ldr	x22, [x22, #0xf18]
 2bf4950: f9421694     	ldr	x20, [x20, #0x428]
 2bf4954: f9400101     	ldr	x1, [x8]
 2bf4958: 910023e8     	add	x8, sp, #0x8
 2bf495c: 943cd419     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2bf4960: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf4964: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf4968: f9001be8     	str	x8, [sp, #0x30]
 2bf496c: 910083e8     	add	x8, sp, #0x20
 2bf4970: 3d800be0     	str	q0, [sp, #0x20]
 2bf4974: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2bf4978: f94002a1     	ldr	x1, [x21]
 2bf497c: 910083e0     	add	x0, sp, #0x20
 2bf4980: 947a47c6     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2bf4984: 36000380     	tbz	w0, #0x0, 0x2bf49f4 <__start_il2cpp+0x12c3e0>
 2bf4988: f9401bf7     	ldr	x23, [sp, #0x30]
 2bf498c: b4000457     	cbz	x23, 0x2bf4a14 <__start_il2cpp+0x12c400>
 2bf4990: f94002c0     	ldr	x0, [x22]
 2bf4994: f9402ef3     	ldr	x19, [x23, #0x58]
 2bf4998: b940e408     	ldr	w8, [x0, #0xe4]
 2bf499c: 35000048     	cbnz	w8, 0x2bf49a4 <__start_il2cpp+0x12c390>
 2bf49a0: 97f7896f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf49a4: aa1303e0     	mov	x0, x19
 2bf49a8: aa1f03e1     	mov	x1, xzr
 2bf49ac: 94bd5726     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf49b0: 3607fe40     	tbz	w0, #0x0, 0x2bf4978 <__start_il2cpp+0x12c364>
 2bf49b4: b94032e8     	ldr	w8, [x23, #0x30]
 2bf49b8: 340000e8     	cbz	w8, 0x2bf49d4 <__start_il2cpp+0x12c3c0>
 2bf49bc: f9402ee0     	ldr	x0, [x23, #0x58]
 2bf49c0: b40002c0     	cbz	x0, 0x2bf4a18 <__start_il2cpp+0x12c404>
 2bf49c4: 52800021     	mov	w1, #0x1                // =1
 2bf49c8: aa1f03e2     	mov	x2, xzr
 2bf49cc: 940060bb     	bl	0x2c0ccb8 <__start_il2cpp+0x1446a4>
 2bf49d0: 17ffffea     	b	0x2bf4978 <__start_il2cpp+0x12c364>
 2bf49d4: 3940d2e8     	ldrb	w8, [x23, #0x34]
 2bf49d8: 34ffff28     	cbz	w8, 0x2bf49bc <__start_il2cpp+0x12c3a8>
 2bf49dc: f9402ee0     	ldr	x0, [x23, #0x58]
 2bf49e0: b40001e0     	cbz	x0, 0x2bf4a1c <__start_il2cpp+0x12c408>
 2bf49e4: 52800021     	mov	w1, #0x1                // =1
 2bf49e8: aa1f03e2     	mov	x2, xzr
 2bf49ec: 940059fe     	bl	0x2c0b1e4 <__start_il2cpp+0x142bd0>
 2bf49f0: 17ffffe2     	b	0x2bf4978 <__start_il2cpp+0x12c364>
 2bf49f4: f9400281     	ldr	x1, [x20]
 2bf49f8: 910083e0     	add	x0, sp, #0x20
 2bf49fc: 947a47a6     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf4a00: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2bf4a04: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2bf4a08: a9445ffe     	ldp	x30, x23, [sp, #0x40]
 2bf4a0c: 9101c3ff     	add	sp, sp, #0x70
 2bf4a10: d65f03c0     	ret
 2bf4a14: 97f7899d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4a18: 97f7899c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4a1c: 97f7899b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4a20: 97f7899a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4a24: 14000007     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a28: 14000006     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a2c: 14000005     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a30: 14000004     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a34: 14000003     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a38: 14000002     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a3c: 14000001     	b	0x2bf4a40 <__start_il2cpp+0x12c42c>
 2bf4a40: 7100043f     	cmp	w1, #0x1
 2bf4a44: 54000161     	b.ne	0x2bf4a70 <__start_il2cpp+0x12c45c>
 2bf4a48: 94ccc73e     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf4a4c: f9400013     	ldr	x19, [x0]
 2bf4a50: f90007f3     	str	x19, [sp, #0x8]
 2bf4a54: 94ccc73f     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf4a58: f9400be0     	ldr	x0, [sp, #0x10]
 2bf4a5c: f9400281     	ldr	x1, [x20]
 2bf4a60: 947a478d     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf4a64: b4fffcf3     	cbz	x19, 0x2bf4a00 <__start_il2cpp+0x12c3ec>
 2bf4a68: aa1303e0     	mov	x0, x19
 2bf4a6c: 97f78985     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2bf4a70: aa0003f3     	mov	x19, x0
 2bf4a74: 910023e0     	add	x0, sp, #0x8
 2bf4a78: 97eacf14     	bl	0x26a86c8 <.text+0x3568>
 2bf4a7c: aa1303e0     	mov	x0, x19
 2bf4a80: 97fb3f17     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf4a84: 97eac3f2     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.Void OnProducerCapacityEmpty()
# VA 0x2bf4a88 .. 0x2bf4ac0 (next mapped method entry)
 2bf4a88: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2bf4a8c: 39432008     	ldrb	w8, [x0, #0xc8]
 2bf4a90: 34000068     	cbz	w8, 0x2bf4a9c <__start_il2cpp+0x12c488>
 2bf4a94: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2bf4a98: d65f03c0     	ret
 2bf4a9c: aa0003f3     	mov	x19, x0
 2bf4aa0: 97ffff88     	bl	0x2bf48c0 <__start_il2cpp+0x12c2ac>
 2bf4aa4: f9401a60     	ldr	x0, [x19, #0x30]
 2bf4aa8: b40000a0     	cbz	x0, 0x2bf4abc <__start_il2cpp+0x12c4a8>
 2bf4aac: aa1303e1     	mov	x1, x19
 2bf4ab0: aa1f03e2     	mov	x2, xzr
 2bf4ab4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2bf4ab8: 14039f2d     	b	0x2cdc76c <__start_il2cpp+0x214158>
 2bf4abc: 97f78973     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void OnTapped()
# VA 0x2bf4ac0 .. 0x2bf4c80 (next mapped method entry)
 2bf4ac0: d10183ff     	sub	sp, sp, #0x60
 2bf4ac4: f9001bfe     	str	x30, [sp, #0x30]
 2bf4ac8: a90457f6     	stp	x22, x21, [sp, #0x40]
 2bf4acc: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2bf4ad0: d001d8f4     	adrp	x20, 0x6712000
 2bf4ad4: aa0003f3     	mov	x19, x0
 2bf4ad8: 396c5e88     	ldrb	w8, [x20, #0xb17]
 2bf4adc: 37000128     	tbnz	w8, #0x0, 0x2bf4b00 <__start_il2cpp+0x12c4ec>
 2bf4ae0: 9001b840     	adrp	x0, 0x62fc000
 2bf4ae4: f9434800     	ldr	x0, [x0, #0x690]
 2bf4ae8: 97f788be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4aec: 9001b840     	adrp	x0, 0x62fc000
 2bf4af0: f9434c00     	ldr	x0, [x0, #0x698]
 2bf4af4: 97f788bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4af8: 52800028     	mov	w8, #0x1                // =1
 2bf4afc: 392c5e88     	strb	w8, [x20, #0xb17]
 2bf4b00: f9406a60     	ldr	x0, [x19, #0xd0]
 2bf4b04: 9100b3e8     	add	x8, sp, #0x2c
 2bf4b08: f9001fff     	str	xzr, [sp, #0x38]
 2bf4b0c: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2bf4b10: 9100e3e8     	add	x8, sp, #0x38
 2bf4b14: 3900b3ff     	strb	wzr, [sp, #0x2c]
 2bf4b18: f9001fe0     	str	x0, [sp, #0x38]
 2bf4b1c: a901ffe8     	stp	x8, xzr, [sp, #0x18]
 2bf4b20: 9100b3e1     	add	x1, sp, #0x2c
 2bf4b24: aa1f03e2     	mov	x2, xzr
 2bf4b28: 949616d4     	bl	0x517a678 <__start_il2cpp+0x26b2064>
 2bf4b2c: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf4b30: b4000360     	cbz	x0, 0x2bf4b9c <__start_il2cpp+0x12c588>
 2bf4b34: 9001b848     	adrp	x8, 0x62fc000
 2bf4b38: f9434908     	ldr	x8, [x8, #0x690]
 2bf4b3c: f9400101     	ldr	x1, [x8]
 2bf4b40: 943cd7b2     	bl	0x3b2aa08 <__start_il2cpp+0x10623f4>
 2bf4b44: aa0003f4     	mov	x20, x0
 2bf4b48: b4000700     	cbz	x0, 0x2bf4c28 <__start_il2cpp+0x12c614>
 2bf4b4c: b9401a88     	ldr	w8, [x20, #0x18]
 2bf4b50: 7100051f     	cmp	w8, #0x1
 2bf4b54: 540001eb     	b.lt	0x2bf4b90 <__start_il2cpp+0x12c57c>
 2bf4b58: aa1f03f5     	mov	x21, xzr
 2bf4b5c: 91008296     	add	x22, x20, #0x20
 2bf4b60: 6b0802bf     	cmp	w21, w8
 2bf4b64: 540005a2     	b.hs	0x2bf4c18 <__start_il2cpp+0x12c604>
 2bf4b68: f8757ac0     	ldr	x0, [x22, x21, lsl #3]
 2bf4b6c: b4000540     	cbz	x0, 0x2bf4c14 <__start_il2cpp+0x12c600>
 2bf4b70: f9400008     	ldr	x8, [x0]
 2bf4b74: f9410901     	ldr	x1, [x8, #0x210]
 2bf4b78: f9410509     	ldr	x9, [x8, #0x208]
 2bf4b7c: d63f0120     	blr	x9
 2bf4b80: b9401a88     	ldr	w8, [x20, #0x18]
 2bf4b84: 910006b5     	add	x21, x21, #0x1
 2bf4b88: 6b0802bf     	cmp	w21, w8
 2bf4b8c: 54fffeab     	b.lt	0x2bf4b60 <__start_il2cpp+0x12c54c>
 2bf4b90: aa1f03f4     	mov	x20, xzr
 2bf4b94: 528000d5     	mov	w21, #0x6               // =6
 2bf4b98: 14000003     	b	0x2bf4ba4 <__start_il2cpp+0x12c590>
 2bf4b9c: aa1f03f4     	mov	x20, xzr
 2bf4ba0: 52800075     	mov	w21, #0x3               // =3
 2bf4ba4: 9100b3e8     	add	x8, sp, #0x2c
 2bf4ba8: 39400108     	ldrb	w8, [x8]
 2bf4bac: 340000a8     	cbz	w8, 0x2bf4bc0 <__start_il2cpp+0x12c5ac>
 2bf4bb0: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf4bb4: aa1f03e1     	mov	x1, xzr
 2bf4bb8: f9400100     	ldr	x0, [x8]
 2bf4bbc: 949616d4     	bl	0x517a70c <__start_il2cpp+0x26b20f8>
 2bf4bc0: b50002f4     	cbnz	x20, 0x2bf4c1c <__start_il2cpp+0x12c608>
 2bf4bc4: 71001abf     	cmp	w21, #0x6
 2bf4bc8: 54000040     	b.eq	0x2bf4bd0 <__start_il2cpp+0x12c5bc>
 2bf4bcc: 350001b5     	cbnz	w21, 0x2bf4c00 <__start_il2cpp+0x12c5ec>
 2bf4bd0: f9401e74     	ldr	x20, [x19, #0x38]
 2bf4bd4: 910083e0     	add	x0, sp, #0x20
 2bf4bd8: aa1303e1     	mov	x1, x19
 2bf4bdc: f90013f3     	str	x19, [sp, #0x20]
 2bf4be0: 97f7886b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf4be4: b4000214     	cbz	x20, 0x2bf4c24 <__start_il2cpp+0x12c610>
 2bf4be8: 9001b848     	adrp	x8, 0x62fc000
 2bf4bec: aa1403e0     	mov	x0, x20
 2bf4bf0: f9434d08     	ldr	x8, [x8, #0x698]
 2bf4bf4: f94013e1     	ldr	x1, [sp, #0x20]
 2bf4bf8: f9400102     	ldr	x2, [x8]
 2bf4bfc: 9428bacb     	bl	0x3623728 <__start_il2cpp+0xb5b114>
 2bf4c00: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2bf4c04: f9401bfe     	ldr	x30, [sp, #0x30]
 2bf4c08: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2bf4c0c: 910183ff     	add	sp, sp, #0x60
 2bf4c10: d65f03c0     	ret
 2bf4c14: 97f7891d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4c18: 97f7891e     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2bf4c1c: aa1403e0     	mov	x0, x20
 2bf4c20: 97f78918     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2bf4c24: 97f78919     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4c28: 97f78918     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4c2c: 14000004     	b	0x2bf4c3c <__start_il2cpp+0x12c628>
 2bf4c30: 14000003     	b	0x2bf4c3c <__start_il2cpp+0x12c628>
 2bf4c34: 14000002     	b	0x2bf4c3c <__start_il2cpp+0x12c628>
 2bf4c38: 14000001     	b	0x2bf4c3c <__start_il2cpp+0x12c628>
 2bf4c3c: aa0003f4     	mov	x20, x0
 2bf4c40: 7100043f     	cmp	w1, #0x1
 2bf4c44: 54000141     	b.ne	0x2bf4c6c <__start_il2cpp+0x12c658>
 2bf4c48: aa1403e0     	mov	x0, x20
 2bf4c4c: 94ccc6bd     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf4c50: f9400014     	ldr	x20, [x0]
 2bf4c54: f90007f4     	str	x20, [sp, #0x8]
 2bf4c58: 94ccc6be     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf4c5c: f9400be8     	ldr	x8, [sp, #0x10]
 2bf4c60: 2a1f03f5     	mov	w21, wzr
 2bf4c64: 17ffffd1     	b	0x2bf4ba8 <__start_il2cpp+0x12c594>
 2bf4c68: aa0003f4     	mov	x20, x0
 2bf4c6c: 910023e0     	add	x0, sp, #0x8
 2bf4c70: 97eac8be     	bl	0x26a6f68 <.text+0x1e08>
 2bf4c74: aa1403e0     	mov	x0, x20
 2bf4c78: 97fb3e99     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf4c7c: 97eac374     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: Cysharp.Threading.Tasks.UniTask PreMerge(System.Boolean withAnimation)
# VA 0x2bf4c80 .. 0x2bf4d34 (next mapped method entry)
 2bf4c80: d10183ff     	sub	sp, sp, #0x60
 2bf4c84: f9001bfe     	str	x30, [sp, #0x30]
 2bf4c88: a90457f6     	stp	x22, x21, [sp, #0x40]
 2bf4c8c: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2bf4c90: d001d8f6     	adrp	x22, 0x6712000
 2bf4c94: 9001b855     	adrp	x21, 0x62fc000
 2bf4c98: 2a0103f4     	mov	w20, w1
 2bf4c9c: 396c62c8     	ldrb	w8, [x22, #0xb18]
 2bf4ca0: f94352b5     	ldr	x21, [x21, #0x6a0]
 2bf4ca4: aa0003f3     	mov	x19, x0
 2bf4ca8: 370000c8     	tbnz	w8, #0x0, 0x2bf4cc0 <__start_il2cpp+0x12c6ac>
 2bf4cac: 9001b840     	adrp	x0, 0x62fc000
 2bf4cb0: f9435000     	ldr	x0, [x0, #0x6a0]
 2bf4cb4: 97f7884b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4cb8: 52800028     	mov	w8, #0x1                // =1
 2bf4cbc: 392c62c8     	strb	w8, [x22, #0xb18]
 2bf4cc0: 6f00e400     	movi	v0.2d, #0000000000000000
 2bf4cc4: 12000296     	and	w22, w20, #0x1
 2bf4cc8: 910003f4     	mov	x20, sp
 2bf4ccc: b27d0280     	orr	x0, x20, #0x8
 2bf4cd0: aa1f03e1     	mov	x1, xzr
 2bf4cd4: f90013ff     	str	xzr, [sp, #0x20]
 2bf4cd8: ad0003e0     	stp	q0, q0, [sp]
 2bf4cdc: 97f7882c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf4ce0: 91008280     	add	x0, x20, #0x20
 2bf4ce4: aa1303e1     	mov	x1, x19
 2bf4ce8: f90013f3     	str	x19, [sp, #0x20]
 2bf4cec: 97f78828     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf4cf0: f94002a0     	ldr	x0, [x21]
 2bf4cf4: 12800009     	mov	w9, #-0x1               // =-1
 2bf4cf8: 390063f6     	strb	w22, [sp, #0x18]
 2bf4cfc: b90003e9     	str	w9, [sp]
 2bf4d00: f9401c08     	ldr	x8, [x0, #0x38]
 2bf4d04: b5000048     	cbnz	x8, 0x2bf4d0c <__start_il2cpp+0x12c6f8>
 2bf4d08: 97f864df     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2bf4d0c: 910003e0     	mov	x0, sp
 2bf4d10: 940004a3     	bl	0x2bf5f9c <__start_il2cpp+0x12d988>
 2bf4d14: b27d0280     	orr	x0, x20, #0x8
 2bf4d18: aa1f03e1     	mov	x1, xzr
 2bf4d1c: 97fcd38b     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2bf4d20: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2bf4d24: f9401bfe     	ldr	x30, [sp, #0x30]
 2bf4d28: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2bf4d2c: 910183ff     	add	sp, sp, #0x60
 2bf4d30: d65f03c0     	ret

# BaseItem :: System.Int32 GetProducerRemainingRechargeTime()
# VA 0x2bf4d34 .. 0x2bf4de8 (next mapped method entry)
 2bf4d34: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf4d38: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf4d3c: d001d8f4     	adrp	x20, 0x6712000
 2bf4d40: aa0003f3     	mov	x19, x0
 2bf4d44: 396c6a88     	ldrb	w8, [x20, #0xb1a]
 2bf4d48: 37000188     	tbnz	w8, #0x0, 0x2bf4d78 <__start_il2cpp+0x12c764>
 2bf4d4c: d001b820     	adrp	x0, 0x62fa000
 2bf4d50: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf4d54: 97f78823     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4d58: b001b800     	adrp	x0, 0x62f5000
 2bf4d5c: f947a400     	ldr	x0, [x0, #0xf48]
 2bf4d60: 97f78820     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4d64: d001b800     	adrp	x0, 0x62f6000
 2bf4d68: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf4d6c: 97f7881d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4d70: 52800028     	mov	w8, #0x1                // =1
 2bf4d74: 392c6a88     	strb	w8, [x20, #0xb1a]
 2bf4d78: aa1303e0     	mov	x0, x19
 2bf4d7c: f90007ff     	str	xzr, [sp, #0x8]
 2bf4d80: 9400001a     	bl	0x2bf4de8 <__start_il2cpp+0x12c7d4>
 2bf4d84: f2401c1f     	tst	x0, #0xff
 2bf4d88: f90007e0     	str	x0, [sp, #0x8]
 2bf4d8c: 54000240     	b.eq	0x2bf4dd4 <__start_il2cpp+0x12c7c0>
 2bf4d90: d001b808     	adrp	x8, 0x62f6000
 2bf4d94: 910023e0     	add	x0, sp, #0x8
 2bf4d98: f942d508     	ldr	x8, [x8, #0x5a8]
 2bf4d9c: f9405e73     	ldr	x19, [x19, #0xb8]
 2bf4da0: f9400101     	ldr	x1, [x8]
 2bf4da4: 9443b7e2     	bl	0x3ce2d2c <__start_il2cpp+0x121a718>
 2bf4da8: b40001f3     	cbz	x19, 0x2bf4de4 <__start_il2cpp+0x12c7d0>
 2bf4dac: d001b828     	adrp	x8, 0x62fa000
 2bf4db0: 2a0003e1     	mov	w1, w0
 2bf4db4: aa1303e0     	mov	x0, x19
 2bf4db8: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf4dbc: f9400102     	ldr	x2, [x8]
 2bf4dc0: 943ccf68     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf4dc4: b4000100     	cbz	x0, 0x2bf4de4 <__start_il2cpp+0x12c7d0>
 2bf4dc8: aa1f03e1     	mov	x1, xzr
 2bf4dcc: 94005fe9     	bl	0x2c0cd70 <__start_il2cpp+0x14475c>
 2bf4dd0: 14000002     	b	0x2bf4dd8 <__start_il2cpp+0x12c7c4>
 2bf4dd4: 12800000     	mov	w0, #-0x1               // =-1
 2bf4dd8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf4ddc: f84207fe     	ldr	x30, [sp], #0x20
 2bf4de0: d65f03c0     	ret
 2bf4de4: 97f788a9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Nullable`1<System.Int32> GetFirstRechargingProducerIndex()
# VA 0x2bf4de8 .. 0x2bf4ec4 (next mapped method entry)
 2bf4de8: d100c3ff     	sub	sp, sp, #0x30
 2bf4dec: a90157fe     	stp	x30, x21, [sp, #0x10]
 2bf4df0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf4df4: d001d8f4     	adrp	x20, 0x6712000
 2bf4df8: aa0003f3     	mov	x19, x0
 2bf4dfc: 396c7e88     	ldrb	w8, [x20, #0xb1f]
 2bf4e00: 37000188     	tbnz	w8, #0x0, 0x2bf4e30 <__start_il2cpp+0x12c81c>
 2bf4e04: 9001b840     	adrp	x0, 0x62fc000
 2bf4e08: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf4e0c: 97f787f5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4e10: d001b820     	adrp	x0, 0x62fa000
 2bf4e14: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf4e18: 97f787f2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4e1c: b001b800     	adrp	x0, 0x62f5000
 2bf4e20: f947a000     	ldr	x0, [x0, #0xf40]
 2bf4e24: 97f787ef     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4e28: 52800028     	mov	w8, #0x1                // =1
 2bf4e2c: 392c7e88     	strb	w8, [x20, #0xb1f]
 2bf4e30: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf4e34: b40002c0     	cbz	x0, 0x2bf4e8c <__start_il2cpp+0x12c878>
 2bf4e38: b9401808     	ldr	w8, [x0, #0x18]
 2bf4e3c: 34000268     	cbz	w8, 0x2bf4e88 <__start_il2cpp+0x12c874>
 2bf4e40: d001b835     	adrp	x21, 0x62fa000
 2bf4e44: 2a1f03f4     	mov	w20, wzr
 2bf4e48: f94276b5     	ldr	x21, [x21, #0x4e8]
 2bf4e4c: b9401808     	ldr	w8, [x0, #0x18]
 2bf4e50: 6b08029f     	cmp	w20, w8
 2bf4e54: 540001aa     	b.ge	0x2bf4e88 <__start_il2cpp+0x12c874>
 2bf4e58: f94002a2     	ldr	x2, [x21]
 2bf4e5c: 2a1403e1     	mov	w1, w20
 2bf4e60: 943ccf40     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf4e64: b40000a0     	cbz	x0, 0x2bf4e78 <__start_il2cpp+0x12c864>
 2bf4e68: 3940d008     	ldrb	w8, [x0, #0x34]
 2bf4e6c: 34000068     	cbz	w8, 0x2bf4e78 <__start_il2cpp+0x12c864>
 2bf4e70: b9403008     	ldr	w8, [x0, #0x30]
 2bf4e74: 34000168     	cbz	w8, 0x2bf4ea0 <__start_il2cpp+0x12c88c>
 2bf4e78: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf4e7c: 11000694     	add	w20, w20, #0x1
 2bf4e80: b5fffe60     	cbnz	x0, 0x2bf4e4c <__start_il2cpp+0x12c838>
 2bf4e84: 97f78881     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf4e88: aa1f03e0     	mov	x0, xzr
 2bf4e8c: f90007ff     	str	xzr, [sp, #0x8]
 2bf4e90: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf4e94: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2bf4e98: 9100c3ff     	add	sp, sp, #0x30
 2bf4e9c: d65f03c0     	ret
 2bf4ea0: b001b808     	adrp	x8, 0x62f5000
 2bf4ea4: 910023e0     	add	x0, sp, #0x8
 2bf4ea8: 2a1403e1     	mov	w1, w20
 2bf4eac: f947a108     	ldr	x8, [x8, #0xf40]
 2bf4eb0: f90007ff     	str	xzr, [sp, #0x8]
 2bf4eb4: f9400102     	ldr	x2, [x8]
 2bf4eb8: 9443b797     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bf4ebc: f94007e0     	ldr	x0, [sp, #0x8]
 2bf4ec0: 17fffff4     	b	0x2bf4e90 <__start_il2cpp+0x12c87c>

# BaseItem :: System.Void SpeedUpProducerRechargeTime()
# VA 0x2bf4ec4 .. 0x2bf501c (next mapped method entry)
 2bf4ec4: d100c3ff     	sub	sp, sp, #0x30
 2bf4ec8: a90157fe     	stp	x30, x21, [sp, #0x10]
 2bf4ecc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf4ed0: d001d8f4     	adrp	x20, 0x6712000
 2bf4ed4: aa0003f3     	mov	x19, x0
 2bf4ed8: 396c6e88     	ldrb	w8, [x20, #0xb1b]
 2bf4edc: 37000248     	tbnz	w8, #0x0, 0x2bf4f24 <__start_il2cpp+0x12c910>
 2bf4ee0: d001b820     	adrp	x0, 0x62fa000
 2bf4ee4: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf4ee8: 97f787be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4eec: d001b800     	adrp	x0, 0x62f6000
 2bf4ef0: f9400c00     	ldr	x0, [x0, #0x18]
 2bf4ef4: 97f787bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4ef8: b001b800     	adrp	x0, 0x62f5000
 2bf4efc: f947a400     	ldr	x0, [x0, #0xf48]
 2bf4f00: 97f787b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4f04: d001b800     	adrp	x0, 0x62f6000
 2bf4f08: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf4f0c: 97f787b5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4f10: 9001b840     	adrp	x0, 0x62fc000
 2bf4f14: f9435400     	ldr	x0, [x0, #0x6a8]
 2bf4f18: 97f787b2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf4f1c: 52800028     	mov	w8, #0x1                // =1
 2bf4f20: 392c6e88     	strb	w8, [x20, #0xb1b]
 2bf4f24: aa1303e0     	mov	x0, x19
 2bf4f28: f90007ff     	str	xzr, [sp, #0x8]
 2bf4f2c: 97ffffaf     	bl	0x2bf4de8 <__start_il2cpp+0x12c7d4>
 2bf4f30: f2401c1f     	tst	x0, #0xff
 2bf4f34: f90007e0     	str	x0, [sp, #0x8]
 2bf4f38: 54000240     	b.eq	0x2bf4f80 <__start_il2cpp+0x12c96c>
 2bf4f3c: d001b808     	adrp	x8, 0x62f6000
 2bf4f40: 910023e0     	add	x0, sp, #0x8
 2bf4f44: f942d508     	ldr	x8, [x8, #0x5a8]
 2bf4f48: f9405e73     	ldr	x19, [x19, #0xb8]
 2bf4f4c: f9400101     	ldr	x1, [x8]
 2bf4f50: 9443b777     	bl	0x3ce2d2c <__start_il2cpp+0x121a718>
 2bf4f54: b4000633     	cbz	x19, 0x2bf5018 <__start_il2cpp+0x12ca04>
 2bf4f58: d001b828     	adrp	x8, 0x62fa000
 2bf4f5c: 2a0003e1     	mov	w1, w0
 2bf4f60: aa1303e0     	mov	x0, x19
 2bf4f64: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf4f68: f9400102     	ldr	x2, [x8]
 2bf4f6c: 943ccefd     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf4f70: b4000540     	cbz	x0, 0x2bf5018 <__start_il2cpp+0x12ca04>
 2bf4f74: aa1f03e1     	mov	x1, xzr
 2bf4f78: 94005fb0     	bl	0x2c0ce38 <__start_il2cpp+0x144824>
 2bf4f7c: 14000023     	b	0x2bf5008 <__start_il2cpp+0x12c9f4>
 2bf4f80: f9402a68     	ldr	x8, [x19, #0x50]
 2bf4f84: b40004a8     	cbz	x8, 0x2bf5018 <__start_il2cpp+0x12ca04>
 2bf4f88: 9001b7f5     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf4f8c: 910013e1     	add	x1, sp, #0x4
 2bf4f90: f9470eb5     	ldr	x21, [x21, #0xe18]
 2bf4f94: b9403108     	ldr	w8, [x8, #0x30]
 2bf4f98: f94026a0     	ldr	x0, [x21, #0x48]
 2bf4f9c: b90007e8     	str	w8, [sp, #0x4]
 2bf4fa0: 97f787f1     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf4fa4: aa0003f4     	mov	x20, x0
 2bf4fa8: b9404668     	ldr	w8, [x19, #0x44]
 2bf4fac: f94026a0     	ldr	x0, [x21, #0x48]
 2bf4fb0: 910003e1     	mov	x1, sp
 2bf4fb4: b90003e8     	str	w8, [sp]
 2bf4fb8: 97f787eb     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2bf4fbc: 9001b848     	adrp	x8, 0x62fc000
 2bf4fc0: aa0003e2     	mov	x2, x0
 2bf4fc4: aa1403e1     	mov	x1, x20
 2bf4fc8: f9435508     	ldr	x8, [x8, #0x6a8]
 2bf4fcc: aa1f03e3     	mov	x3, xzr
 2bf4fd0: f9400108     	ldr	x8, [x8]
 2bf4fd4: aa0803e0     	mov	x0, x8
 2bf4fd8: 948e07c7     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2bf4fdc: d001b808     	adrp	x8, 0x62f6000
 2bf4fe0: aa0003f3     	mov	x19, x0
 2bf4fe4: f9400d08     	ldr	x8, [x8, #0x18]
 2bf4fe8: f9400108     	ldr	x8, [x8]
 2bf4fec: b940e509     	ldr	w9, [x8, #0xe4]
 2bf4ff0: 35000069     	cbnz	w9, 0x2bf4ffc <__start_il2cpp+0x12c9e8>
 2bf4ff4: aa0803e0     	mov	x0, x8
 2bf4ff8: 97f787d9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf4ffc: aa1303e0     	mov	x0, x19
 2bf5000: aa1f03e1     	mov	x1, xzr
 2bf5004: 97fd7a81     	bl	0x2b53a08 <__start_il2cpp+0x8b3f4>
 2bf5008: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf500c: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2bf5010: 9100c3ff     	add	sp, sp, #0x30
 2bf5014: d65f03c0     	ret
 2bf5018: 97f7881c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void SpeedUpAllProducersRechargeTime()
# VA 0x2bf501c .. 0x2bf5154 (next mapped method entry)
 2bf501c: d10143ff     	sub	sp, sp, #0x50
 2bf5020: a90357fe     	stp	x30, x21, [sp, #0x30]
 2bf5024: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2bf5028: b001d8f4     	adrp	x20, 0x6712000
 2bf502c: aa0003f3     	mov	x19, x0
 2bf5030: 396c7288     	ldrb	w8, [x20, #0xb1c]
 2bf5034: 370001e8     	tbnz	w8, #0x0, 0x2bf5070 <__start_il2cpp+0x12ca5c>
 2bf5038: b001b820     	adrp	x0, 0x62fa000
 2bf503c: f9421400     	ldr	x0, [x0, #0x428]
 2bf5040: 97f78768     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5044: b001b820     	adrp	x0, 0x62fa000
 2bf5048: f9421800     	ldr	x0, [x0, #0x430]
 2bf504c: 97f78765     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5050: b001b820     	adrp	x0, 0x62fa000
 2bf5054: f9421c00     	ldr	x0, [x0, #0x438]
 2bf5058: 97f78762     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf505c: b001b820     	adrp	x0, 0x62fa000
 2bf5060: f9422000     	ldr	x0, [x0, #0x440]
 2bf5064: 97f7875f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5068: 52800028     	mov	w8, #0x1                // =1
 2bf506c: 392c7288     	strb	w8, [x20, #0xb1c]
 2bf5070: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf5074: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2bf5078: f90017ff     	str	xzr, [sp, #0x28]
 2bf507c: b40003e0     	cbz	x0, 0x2bf50f8 <__start_il2cpp+0x12cae4>
 2bf5080: b001b828     	adrp	x8, 0x62fa000
 2bf5084: b001b833     	adrp	x19, 0x62fa000
 2bf5088: b001b834     	adrp	x20, 0x62fa000
 2bf508c: f9422108     	ldr	x8, [x8, #0x440]
 2bf5090: f9421a73     	ldr	x19, [x19, #0x430]
 2bf5094: f9421694     	ldr	x20, [x20, #0x428]
 2bf5098: 910063f5     	add	x21, sp, #0x18
 2bf509c: f9400101     	ldr	x1, [x8]
 2bf50a0: 910063e8     	add	x8, sp, #0x18
 2bf50a4: 943cd247     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2bf50a8: a900d7ff     	stp	xzr, x21, [sp, #0x8]
 2bf50ac: f9400261     	ldr	x1, [x19]
 2bf50b0: 910063e0     	add	x0, sp, #0x18
 2bf50b4: 947a45f9     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2bf50b8: 36000100     	tbz	w0, #0x0, 0x2bf50d8 <__start_il2cpp+0x12cac4>
 2bf50bc: f94017e0     	ldr	x0, [sp, #0x28]
 2bf50c0: b40001a0     	cbz	x0, 0x2bf50f4 <__start_il2cpp+0x12cae0>
 2bf50c4: 3940d008     	ldrb	w8, [x0, #0x34]
 2bf50c8: 34ffff28     	cbz	w8, 0x2bf50ac <__start_il2cpp+0x12ca98>
 2bf50cc: aa1f03e1     	mov	x1, xzr
 2bf50d0: 94005f5a     	bl	0x2c0ce38 <__start_il2cpp+0x144824>
 2bf50d4: 17fffff6     	b	0x2bf50ac <__start_il2cpp+0x12ca98>
 2bf50d8: f9400281     	ldr	x1, [x20]
 2bf50dc: 910063e0     	add	x0, sp, #0x18
 2bf50e0: 947a45ed     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf50e4: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2bf50e8: a94357fe     	ldp	x30, x21, [sp, #0x30]
 2bf50ec: 910143ff     	add	sp, sp, #0x50
 2bf50f0: d65f03c0     	ret
 2bf50f4: 97f787e5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf50f8: 97f787e4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf50fc: 14000002     	b	0x2bf5104 <__start_il2cpp+0x12caf0>
 2bf5100: 14000001     	b	0x2bf5104 <__start_il2cpp+0x12caf0>
 2bf5104: aa0003f3     	mov	x19, x0
 2bf5108: 7100043f     	cmp	w1, #0x1
 2bf510c: 540001a1     	b.ne	0x2bf5140 <__start_il2cpp+0x12cb2c>
 2bf5110: aa1303e0     	mov	x0, x19
 2bf5114: 94ccc58b     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf5118: f9400013     	ldr	x19, [x0]
 2bf511c: f90007f3     	str	x19, [sp, #0x8]
 2bf5120: 94ccc58c     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf5124: f9400be0     	ldr	x0, [sp, #0x10]
 2bf5128: f9400281     	ldr	x1, [x20]
 2bf512c: 947a45da     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf5130: b4fffdb3     	cbz	x19, 0x2bf50e4 <__start_il2cpp+0x12cad0>
 2bf5134: aa1303e0     	mov	x0, x19
 2bf5138: 97f787d2     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2bf513c: aa0003f3     	mov	x19, x0
 2bf5140: 910023e0     	add	x0, sp, #0x8
 2bf5144: 97eacd61     	bl	0x26a86c8 <.text+0x3568>
 2bf5148: aa1303e0     	mov	x0, x19
 2bf514c: 97fb3d64     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf5150: 97eac23f     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.Collections.Generic.List`1<ItemProducer> GetProducers()
# VA 0x2bf5154 .. 0x2bf515c (next mapped method entry)
 2bf5154: f9405c00     	ldr	x0, [x0, #0xb8]
 2bf5158: d65f03c0     	ret

# BaseItem :: System.Boolean IsProducer()
# VA 0x2bf515c .. 0x2bf51b0 (next mapped method entry)
 2bf515c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf5160: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf5164: b001d8f4     	adrp	x20, 0x6712000
 2bf5168: aa0003f3     	mov	x19, x0
 2bf516c: 396c7688     	ldrb	w8, [x20, #0xb1d]
 2bf5170: 370000c8     	tbnz	w8, #0x0, 0x2bf5188 <__start_il2cpp+0x12cb74>
 2bf5174: f001b820     	adrp	x0, 0x62fc000
 2bf5178: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf517c: 97f78719     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5180: 52800028     	mov	w8, #0x1                // =1
 2bf5184: 392c7688     	strb	w8, [x20, #0xb1d]
 2bf5188: f9405e68     	ldr	x8, [x19, #0xb8]
 2bf518c: b40000a8     	cbz	x8, 0x2bf51a0 <__start_il2cpp+0x12cb8c>
 2bf5190: b9401908     	ldr	w8, [x8, #0x18]
 2bf5194: 7100011f     	cmp	w8, #0x0
 2bf5198: 1a9fd7e0     	cset	w0, gt
 2bf519c: 14000002     	b	0x2bf51a4 <__start_il2cpp+0x12cb90>
 2bf51a0: 2a1f03e0     	mov	w0, wzr
 2bf51a4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf51a8: f84207fe     	ldr	x30, [sp], #0x20
 2bf51ac: d65f03c0     	ret

# BaseItem :: System.Boolean IsProducersRecharging()
# VA 0x2bf51b0 .. 0x2bf5230 (next mapped method entry)
 2bf51b0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf51b4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf51b8: b001d8f4     	adrp	x20, 0x6712000
 2bf51bc: aa0003f3     	mov	x19, x0
 2bf51c0: 396c7a88     	ldrb	w8, [x20, #0xb1e]
 2bf51c4: 37000128     	tbnz	w8, #0x0, 0x2bf51e8 <__start_il2cpp+0x12cbd4>
 2bf51c8: 9001b800     	adrp	x0, 0x62f5000
 2bf51cc: f947a400     	ldr	x0, [x0, #0xf48]
 2bf51d0: 97f78704     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf51d4: b001b800     	adrp	x0, 0x62f6000
 2bf51d8: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf51dc: 97f78701     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf51e0: 52800028     	mov	w8, #0x1                // =1
 2bf51e4: 392c7a88     	strb	w8, [x20, #0xb1e]
 2bf51e8: aa1303e0     	mov	x0, x19
 2bf51ec: f90007ff     	str	xzr, [sp, #0x8]
 2bf51f0: 97fffefe     	bl	0x2bf4de8 <__start_il2cpp+0x12c7d4>
 2bf51f4: f2401c1f     	tst	x0, #0xff
 2bf51f8: f90007e0     	str	x0, [sp, #0x8]
 2bf51fc: 54000120     	b.eq	0x2bf5220 <__start_il2cpp+0x12cc0c>
 2bf5200: b001b808     	adrp	x8, 0x62f6000
 2bf5204: 910023e0     	add	x0, sp, #0x8
 2bf5208: f942d508     	ldr	x8, [x8, #0x5a8]
 2bf520c: f9400101     	ldr	x1, [x8]
 2bf5210: 9443b6c7     	bl	0x3ce2d2c <__start_il2cpp+0x121a718>
 2bf5214: 2a2003e8     	mvn	w8, w0
 2bf5218: 531f7d00     	lsr	w0, w8, #31
 2bf521c: 14000002     	b	0x2bf5224 <__start_il2cpp+0x12cc10>
 2bf5220: 2a1f03e0     	mov	w0, wzr
 2bf5224: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf5228: f84207fe     	ldr	x30, [sp], #0x20
 2bf522c: d65f03c0     	ret

# BaseItem :: ItemProducer GetFirstRechargingProducer()
# VA 0x2bf5230 .. 0x2bf5308 (next mapped method entry)
 2bf5230: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf5234: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf5238: b001d8f4     	adrp	x20, 0x6712000
 2bf523c: aa0003f3     	mov	x19, x0
 2bf5240: 396c8288     	ldrb	w8, [x20, #0xb20]
 2bf5244: 37000248     	tbnz	w8, #0x0, 0x2bf528c <__start_il2cpp+0x12cc78>
 2bf5248: f001b820     	adrp	x0, 0x62fc000
 2bf524c: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf5250: 97f786e4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5254: b001b820     	adrp	x0, 0x62fa000
 2bf5258: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf525c: 97f786e1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5260: 9001b800     	adrp	x0, 0x62f5000
 2bf5264: f9479c00     	ldr	x0, [x0, #0xf38]
 2bf5268: 97f786de     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf526c: 9001b800     	adrp	x0, 0x62f5000
 2bf5270: f947a400     	ldr	x0, [x0, #0xf48]
 2bf5274: 97f786db     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5278: b001b800     	adrp	x0, 0x62f6000
 2bf527c: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf5280: 97f786d8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5284: 52800028     	mov	w8, #0x1                // =1
 2bf5288: 392c8288     	strb	w8, [x20, #0xb20]
 2bf528c: aa1303e0     	mov	x0, x19
 2bf5290: f90007ff     	str	xzr, [sp, #0x8]
 2bf5294: 97fffed5     	bl	0x2bf4de8 <__start_il2cpp+0x12c7d4>
 2bf5298: f9405e73     	ldr	x19, [x19, #0xb8]
 2bf529c: aa0003e8     	mov	x8, x0
 2bf52a0: aa1f03e0     	mov	x0, xzr
 2bf52a4: f90007e8     	str	x8, [sp, #0x8]
 2bf52a8: b40002b3     	cbz	x19, 0x2bf52fc <__start_il2cpp+0x12cce8>
 2bf52ac: 92401d09     	and	x9, x8, #0xff
 2bf52b0: b4000269     	cbz	x9, 0x2bf52fc <__start_il2cpp+0x12cce8>
 2bf52b4: f2401d1f     	tst	x8, #0xff
 2bf52b8: aa1f03e0     	mov	x0, xzr
 2bf52bc: 54000200     	b.eq	0x2bf52fc <__start_il2cpp+0x12cce8>
 2bf52c0: d360fd08     	lsr	x8, x8, #32
 2bf52c4: b9401a69     	ldr	w9, [x19, #0x18]
 2bf52c8: 6b08013f     	cmp	w9, w8
 2bf52cc: 5400018d     	b.le	0x2bf52fc <__start_il2cpp+0x12cce8>
 2bf52d0: b001b808     	adrp	x8, 0x62f6000
 2bf52d4: 910023e0     	add	x0, sp, #0x8
 2bf52d8: f942d508     	ldr	x8, [x8, #0x5a8]
 2bf52dc: f9400101     	ldr	x1, [x8]
 2bf52e0: 9443b693     	bl	0x3ce2d2c <__start_il2cpp+0x121a718>
 2bf52e4: b001b828     	adrp	x8, 0x62fa000
 2bf52e8: 2a0003e1     	mov	w1, w0
 2bf52ec: aa1303e0     	mov	x0, x19
 2bf52f0: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf52f4: f9400102     	ldr	x2, [x8]
 2bf52f8: 943cce1a     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf52fc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf5300: f84207fe     	ldr	x30, [sp], #0x20
 2bf5304: d65f03c0     	ret

# BaseItem :: System.Int32 GetRechargeCost()
# VA 0x2bf5308 .. 0x2bf5440 (next mapped method entry)
 2bf5308: d100c3ff     	sub	sp, sp, #0x30
 2bf530c: a90157fe     	stp	x30, x21, [sp, #0x10]
 2bf5310: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf5314: b001d8f4     	adrp	x20, 0x6712000
 2bf5318: aa0003f3     	mov	x19, x0
 2bf531c: 396c8688     	ldrb	w8, [x20, #0xb21]
 2bf5320: 370001e8     	tbnz	w8, #0x0, 0x2bf535c <__start_il2cpp+0x12cd48>
 2bf5324: f001b820     	adrp	x0, 0x62fc000
 2bf5328: f9435800     	ldr	x0, [x0, #0x6b0]
 2bf532c: 97f786ad     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5330: b001b820     	adrp	x0, 0x62fa000
 2bf5334: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf5338: 97f786aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf533c: 9001b800     	adrp	x0, 0x62f5000
 2bf5340: f947a400     	ldr	x0, [x0, #0xf48]
 2bf5344: 97f786a7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5348: b001b800     	adrp	x0, 0x62f6000
 2bf534c: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf5350: 97f786a4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5354: 52800028     	mov	w8, #0x1                // =1
 2bf5358: 392c8688     	strb	w8, [x20, #0xb21]
 2bf535c: b001d8f4     	adrp	x20, 0x6712000
 2bf5360: f90007ff     	str	xzr, [sp, #0x8]
 2bf5364: 396c7688     	ldrb	w8, [x20, #0xb1d]
 2bf5368: 370000c8     	tbnz	w8, #0x0, 0x2bf5380 <__start_il2cpp+0x12cd6c>
 2bf536c: f001b820     	adrp	x0, 0x62fc000
 2bf5370: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf5374: 97f7869b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5378: 52800028     	mov	w8, #0x1                // =1
 2bf537c: 392c7688     	strb	w8, [x20, #0xb1d]
 2bf5380: f9405e68     	ldr	x8, [x19, #0xb8]
 2bf5384: b4000528     	cbz	x8, 0x2bf5428 <__start_il2cpp+0x12ce14>
 2bf5388: b9401908     	ldr	w8, [x8, #0x18]
 2bf538c: 7100051f     	cmp	w8, #0x1
 2bf5390: 540004cb     	b.lt	0x2bf5428 <__start_il2cpp+0x12ce14>
 2bf5394: aa1303e0     	mov	x0, x19
 2bf5398: 97fffe94     	bl	0x2bf4de8 <__start_il2cpp+0x12c7d4>
 2bf539c: f2401c1f     	tst	x0, #0xff
 2bf53a0: f90007e0     	str	x0, [sp, #0x8]
 2bf53a4: 54000420     	b.eq	0x2bf5428 <__start_il2cpp+0x12ce14>
 2bf53a8: b001b808     	adrp	x8, 0x62f6000
 2bf53ac: 910023e0     	add	x0, sp, #0x8
 2bf53b0: f942d508     	ldr	x8, [x8, #0x5a8]
 2bf53b4: f9405e73     	ldr	x19, [x19, #0xb8]
 2bf53b8: f9400101     	ldr	x1, [x8]
 2bf53bc: 9443b65c     	bl	0x3ce2d2c <__start_il2cpp+0x121a718>
 2bf53c0: b40003f3     	cbz	x19, 0x2bf543c <__start_il2cpp+0x12ce28>
 2bf53c4: b001b828     	adrp	x8, 0x62fa000
 2bf53c8: 2a0003e1     	mov	w1, w0
 2bf53cc: aa1303e0     	mov	x0, x19
 2bf53d0: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf53d4: f9400102     	ldr	x2, [x8]
 2bf53d8: 943ccde2     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf53dc: b4000300     	cbz	x0, 0x2bf543c <__start_il2cpp+0x12ce28>
 2bf53e0: aa1f03e1     	mov	x1, xzr
 2bf53e4: aa0003f3     	mov	x19, x0
 2bf53e8: 94005e62     	bl	0x2c0cd70 <__start_il2cpp+0x14475c>
 2bf53ec: f9402268     	ldr	x8, [x19, #0x40]
 2bf53f0: b4000268     	cbz	x8, 0x2bf543c <__start_il2cpp+0x12ce28>
 2bf53f4: f001b829     	adrp	x9, 0x62fc000
 2bf53f8: 2a0003f3     	mov	w19, w0
 2bf53fc: f9435929     	ldr	x9, [x9, #0x6b0]
 2bf5400: 29425115     	ldp	w21, w20, [x8, #0x10]
 2bf5404: f9400120     	ldr	x0, [x9]
 2bf5408: b940e409     	ldr	w9, [x0, #0xe4]
 2bf540c: 35000049     	cbnz	w9, 0x2bf5414 <__start_il2cpp+0x12ce00>
 2bf5410: 97f786d3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf5414: 2a1303e0     	mov	w0, w19
 2bf5418: 2a1403e1     	mov	w1, w20
 2bf541c: 2a1503e2     	mov	w2, w21
 2bf5420: 94000008     	bl	0x2bf5440 <__start_il2cpp+0x12ce2c>
 2bf5424: 14000002     	b	0x2bf542c <__start_il2cpp+0x12ce18>
 2bf5428: 2a1f03e0     	mov	w0, wzr
 2bf542c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5430: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2bf5434: 9100c3ff     	add	sp, sp, #0x30
 2bf5438: d65f03c0     	ret
 2bf543c: 97f78713     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Boolean CanMerge()
# VA 0x2bf54dc .. 0x2bf55c0 (next mapped method entry)
 2bf54dc: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf54e0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf54e4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf54e8: b001d8f4     	adrp	x20, 0x6712000
 2bf54ec: aa0003f3     	mov	x19, x0
 2bf54f0: 396c8a88     	ldrb	w8, [x20, #0xb22]
 2bf54f4: 37000188     	tbnz	w8, #0x0, 0x2bf5524 <__start_il2cpp+0x12cf10>
 2bf54f8: f001b820     	adrp	x0, 0x62fc000
 2bf54fc: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf5500: 97f78638     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5504: b001b820     	adrp	x0, 0x62fa000
 2bf5508: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf550c: 97f78635     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5510: f001b820     	adrp	x0, 0x62fc000
 2bf5514: f9435c00     	ldr	x0, [x0, #0x6b8]
 2bf5518: 97f78632     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf551c: 52800028     	mov	w8, #0x1                // =1
 2bf5520: 392c8a88     	strb	w8, [x20, #0xb22]
 2bf5524: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf5528: b4000380     	cbz	x0, 0x2bf5598 <__start_il2cpp+0x12cf84>
 2bf552c: b001b835     	adrp	x21, 0x62fa000
 2bf5530: f001b836     	adrp	x22, 0x62fc000
 2bf5534: 2a1f03f4     	mov	w20, wzr
 2bf5538: f94276b5     	ldr	x21, [x21, #0x4e8]
 2bf553c: f9435ed6     	ldr	x22, [x22, #0x6b8]
 2bf5540: b9401808     	ldr	w8, [x0, #0x18]
 2bf5544: 6b08029f     	cmp	w20, w8
 2bf5548: 5400028a     	b.ge	0x2bf5598 <__start_il2cpp+0x12cf84>
 2bf554c: f94002a2     	ldr	x2, [x21]
 2bf5550: 2a1403e1     	mov	w1, w20
 2bf5554: 943ccd83     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf5558: b4000180     	cbz	x0, 0x2bf5588 <__start_il2cpp+0x12cf74>
 2bf555c: f94002c8     	ldr	x8, [x22]
 2bf5560: f9400009     	ldr	x9, [x0]
 2bf5564: 3944c12b     	ldrb	w11, [x9, #0x130]
 2bf5568: 3944c10a     	ldrb	w10, [x8, #0x130]
 2bf556c: 6b0a017f     	cmp	w11, w10
 2bf5570: 540000c3     	b.lo	0x2bf5588 <__start_il2cpp+0x12cf74>
 2bf5574: f9406529     	ldr	x9, [x9, #0xc8]
 2bf5578: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2bf557c: f85f8129     	ldur	x9, [x9, #-0x8]
 2bf5580: eb08013f     	cmp	x9, x8
 2bf5584: 540001a0     	b.eq	0x2bf55b8 <__start_il2cpp+0x12cfa4>
 2bf5588: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf558c: 11000694     	add	w20, w20, #0x1
 2bf5590: b5fffd80     	cbnz	x0, 0x2bf5540 <__start_il2cpp+0x12cf2c>
 2bf5594: 97f786bd     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5598: aa1303e0     	mov	x0, x19
 2bf559c: 97fff776     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf55a0: 52000008     	eor	w8, w0, #0x1
 2bf55a4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf55a8: 12000100     	and	w0, w8, #0x1
 2bf55ac: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf55b0: f84307fe     	ldr	x30, [sp], #0x30
 2bf55b4: d65f03c0     	ret
 2bf55b8: 52800028     	mov	w8, #0x1                // =1
 2bf55bc: 17fffffa     	b	0x2bf55a4 <__start_il2cpp+0x12cf90>

# BaseItem :: System.Boolean CanHintedForMerge()
# VA 0x2bf55c0 .. 0x2bf55c4 (next mapped method entry)
 2bf55c0: 17ffffc7     	b	0x2bf54dc <__start_il2cpp+0x12cec8>

# BaseItem :: System.Boolean CanMergeWith(BaseItem otherItem)
# VA 0x2bf55c4 .. 0x2bf5754 (next mapped method entry)
 2bf55c4: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2bf55c8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf55cc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf55d0: b001d8f5     	adrp	x21, 0x6712000
 2bf55d4: aa0103f4     	mov	x20, x1
 2bf55d8: aa0003f3     	mov	x19, x0
 2bf55dc: 396c8ea8     	ldrb	w8, [x21, #0xb23]
 2bf55e0: 37000248     	tbnz	w8, #0x0, 0x2bf5628 <__start_il2cpp+0x12d014>
 2bf55e4: f001b820     	adrp	x0, 0x62fc000
 2bf55e8: f9436000     	ldr	x0, [x0, #0x6c0]
 2bf55ec: 97f785fd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf55f0: f001b820     	adrp	x0, 0x62fc000
 2bf55f4: f9436400     	ldr	x0, [x0, #0x6c8]
 2bf55f8: 97f785fa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf55fc: b001b820     	adrp	x0, 0x62fa000
 2bf5600: f9405000     	ldr	x0, [x0, #0xa0]
 2bf5604: 97f785f7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5608: f001b820     	adrp	x0, 0x62fc000
 2bf560c: f9436800     	ldr	x0, [x0, #0x6d0]
 2bf5610: 97f785f4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5614: f001b820     	adrp	x0, 0x62fc000
 2bf5618: f9436c00     	ldr	x0, [x0, #0x6d8]
 2bf561c: 97f785f1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5620: 52800028     	mov	w8, #0x1                // =1
 2bf5624: 392c8ea8     	strb	w8, [x21, #0xb23]
 2bf5628: f9402a68     	ldr	x8, [x19, #0x50]
 2bf562c: b4000928     	cbz	x8, 0x2bf5750 <__start_il2cpp+0x12d13c>
 2bf5630: b4000914     	cbz	x20, 0x2bf5750 <__start_il2cpp+0x12d13c>
 2bf5634: f9402a89     	ldr	x9, [x20, #0x50]
 2bf5638: b40008c9     	cbz	x9, 0x2bf5750 <__start_il2cpp+0x12d13c>
 2bf563c: b001b82a     	adrp	x10, 0x62fa000
 2bf5640: f940514a     	ldr	x10, [x10, #0xa0]
 2bf5644: b9403115     	ldr	w21, [x8, #0x30]
 2bf5648: b9403136     	ldr	w22, [x9, #0x30]
 2bf564c: f9400140     	ldr	x0, [x10]
 2bf5650: b940e40a     	ldr	w10, [x0, #0xe4]
 2bf5654: 3500004a     	cbnz	w10, 0x2bf565c <__start_il2cpp+0x12d048>
 2bf5658: 97f78641     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf565c: 2a1503e0     	mov	w0, w21
 2bf5660: 2a1603e1     	mov	w1, w22
 2bf5664: 9400003c     	bl	0x2bf5754 <__start_il2cpp+0x12d140>
 2bf5668: 36000600     	tbz	w0, #0x0, 0x2bf5728 <__start_il2cpp+0x12d114>
 2bf566c: b9404668     	ldr	w8, [x19, #0x44]
 2bf5670: b9404689     	ldr	w9, [x20, #0x44]
 2bf5674: 6b09011f     	cmp	w8, w9
 2bf5678: 54000581     	b.ne	0x2bf5728 <__start_il2cpp+0x12d114>
 2bf567c: f9405e74     	ldr	x20, [x19, #0xb8]
 2bf5680: b4000614     	cbz	x20, 0x2bf5740 <__start_il2cpp+0x12d12c>
 2bf5684: f001b837     	adrp	x23, 0x62fc000
 2bf5688: f9436ef7     	ldr	x23, [x23, #0x6d8]
 2bf568c: f94002e0     	ldr	x0, [x23]
 2bf5690: b940e408     	ldr	w8, [x0, #0xe4]
 2bf5694: 35000068     	cbnz	w8, 0x2bf56a0 <__start_il2cpp+0x12d08c>
 2bf5698: 97f78631     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf569c: f94002e0     	ldr	x0, [x23]
 2bf56a0: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf56a4: f9400515     	ldr	x21, [x8, #0x8]
 2bf56a8: b50002f5     	cbnz	x21, 0x2bf5704 <__start_il2cpp+0x12d0f0>
 2bf56ac: b940e409     	ldr	w9, [x0, #0xe4]
 2bf56b0: 35000089     	cbnz	w9, 0x2bf56c0 <__start_il2cpp+0x12d0ac>
 2bf56b4: 97f7862a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf56b8: f94002e8     	ldr	x8, [x23]
 2bf56bc: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf56c0: f001b829     	adrp	x9, 0x62fc000
 2bf56c4: f9436529     	ldr	x9, [x9, #0x6c8]
 2bf56c8: f9400116     	ldr	x22, [x8]
 2bf56cc: f9400120     	ldr	x0, [x9]
 2bf56d0: 97f7866a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf56d4: f001b828     	adrp	x8, 0x62fc000
 2bf56d8: aa1603e1     	mov	x1, x22
 2bf56dc: aa1f03e3     	mov	x3, xzr
 2bf56e0: f9436908     	ldr	x8, [x8, #0x6d0]
 2bf56e4: aa0003f5     	mov	x21, x0
 2bf56e8: f9400102     	ldr	x2, [x8]
 2bf56ec: 94830168     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2bf56f0: f94002e8     	ldr	x8, [x23]
 2bf56f4: aa1503e1     	mov	x1, x21
 2bf56f8: f9405d00     	ldr	x0, [x8, #0xb8]
 2bf56fc: f8008c15     	str	x21, [x0, #0x8]!
 2bf5700: 97f785a3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf5704: f001b828     	adrp	x8, 0x62fc000
 2bf5708: aa1403e0     	mov	x0, x20
 2bf570c: aa1503e1     	mov	x1, x21
 2bf5710: f9436108     	ldr	x8, [x8, #0x6c0]
 2bf5714: f9400102     	ldr	x2, [x8]
 2bf5718: 941ffcd1     	bl	0x33f4a5c <__start_il2cpp+0x92c448>
 2bf571c: 36000120     	tbz	w0, #0x0, 0x2bf5740 <__start_il2cpp+0x12d12c>
 2bf5720: 52800028     	mov	w8, #0x1                // =1
 2bf5724: 14000002     	b	0x2bf572c <__start_il2cpp+0x12d118>
 2bf5728: 2a1f03e8     	mov	w8, wzr
 2bf572c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5730: 12000100     	and	w0, w8, #0x1
 2bf5734: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf5738: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2bf573c: d65f03c0     	ret
 2bf5740: aa1303e0     	mov	x0, x19
 2bf5744: 97fff70c     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf5748: 52000008     	eor	w8, w0, #0x1
 2bf574c: 17fffff8     	b	0x2bf572c <__start_il2cpp+0x12d118>
 2bf5750: 97f7864e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseItem :: System.Void OnSell()
# VA 0x2bf57f4 .. 0x2bf5924 (next mapped method entry)
 2bf57f4: d10143ff     	sub	sp, sp, #0x50
 2bf57f8: a90357fe     	stp	x30, x21, [sp, #0x30]
 2bf57fc: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2bf5800: b001d8f4     	adrp	x20, 0x6712000
 2bf5804: aa0003f3     	mov	x19, x0
 2bf5808: 396c9288     	ldrb	w8, [x20, #0xb24]
 2bf580c: 370001e8     	tbnz	w8, #0x0, 0x2bf5848 <__start_il2cpp+0x12d234>
 2bf5810: b001b820     	adrp	x0, 0x62fa000
 2bf5814: f9421400     	ldr	x0, [x0, #0x428]
 2bf5818: 97f78572     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf581c: b001b820     	adrp	x0, 0x62fa000
 2bf5820: f9421800     	ldr	x0, [x0, #0x430]
 2bf5824: 97f7856f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5828: b001b820     	adrp	x0, 0x62fa000
 2bf582c: f9421c00     	ldr	x0, [x0, #0x438]
 2bf5830: 97f7856c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5834: b001b820     	adrp	x0, 0x62fa000
 2bf5838: f9422000     	ldr	x0, [x0, #0x440]
 2bf583c: 97f78569     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5840: 52800028     	mov	w8, #0x1                // =1
 2bf5844: 392c9288     	strb	w8, [x20, #0xb24]
 2bf5848: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf584c: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2bf5850: f90017ff     	str	xzr, [sp, #0x28]
 2bf5854: b4000320     	cbz	x0, 0x2bf58b8 <__start_il2cpp+0x12d2a4>
 2bf5858: b001b828     	adrp	x8, 0x62fa000
 2bf585c: b001b833     	adrp	x19, 0x62fa000
 2bf5860: b001b834     	adrp	x20, 0x62fa000
 2bf5864: f9422108     	ldr	x8, [x8, #0x440]
 2bf5868: f9421a73     	ldr	x19, [x19, #0x430]
 2bf586c: f9421694     	ldr	x20, [x20, #0x428]
 2bf5870: 910063f5     	add	x21, sp, #0x18
 2bf5874: f9400101     	ldr	x1, [x8]
 2bf5878: 910063e8     	add	x8, sp, #0x18
 2bf587c: 943cd051     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2bf5880: a900d7ff     	stp	xzr, x21, [sp, #0x8]
 2bf5884: f9400261     	ldr	x1, [x19]
 2bf5888: 910063e0     	add	x0, sp, #0x18
 2bf588c: 947a4403     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2bf5890: 360000e0     	tbz	w0, #0x0, 0x2bf58ac <__start_il2cpp+0x12d298>
 2bf5894: f94017e0     	ldr	x0, [sp, #0x28]
 2bf5898: b4000180     	cbz	x0, 0x2bf58c8 <__start_il2cpp+0x12d2b4>
 2bf589c: f9400008     	ldr	x8, [x0]
 2bf58a0: a9598509     	ldp	x9, x1, [x8, #0x198]
 2bf58a4: d63f0120     	blr	x9
 2bf58a8: 17fffff7     	b	0x2bf5884 <__start_il2cpp+0x12d270>
 2bf58ac: f9400281     	ldr	x1, [x20]
 2bf58b0: 910063e0     	add	x0, sp, #0x18
 2bf58b4: 947a43f8     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf58b8: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2bf58bc: a94357fe     	ldp	x30, x21, [sp, #0x30]
 2bf58c0: 910143ff     	add	sp, sp, #0x50
 2bf58c4: d65f03c0     	ret
 2bf58c8: 97f785f0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf58cc: 14000002     	b	0x2bf58d4 <__start_il2cpp+0x12d2c0>
 2bf58d0: 14000001     	b	0x2bf58d4 <__start_il2cpp+0x12d2c0>
 2bf58d4: aa0003f3     	mov	x19, x0
 2bf58d8: 7100043f     	cmp	w1, #0x1
 2bf58dc: 540001a1     	b.ne	0x2bf5910 <__start_il2cpp+0x12d2fc>
 2bf58e0: aa1303e0     	mov	x0, x19
 2bf58e4: 94ccc397     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf58e8: f9400013     	ldr	x19, [x0]
 2bf58ec: f90007f3     	str	x19, [sp, #0x8]
 2bf58f0: 94ccc398     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf58f4: f9400be0     	ldr	x0, [sp, #0x10]
 2bf58f8: f9400281     	ldr	x1, [x20]
 2bf58fc: 947a43e6     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf5900: b4fffdd3     	cbz	x19, 0x2bf58b8 <__start_il2cpp+0x12d2a4>
 2bf5904: aa1303e0     	mov	x0, x19
 2bf5908: 97f785de     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2bf590c: aa0003f3     	mov	x19, x0
 2bf5910: 910023e0     	add	x0, sp, #0x8
 2bf5914: 97eacb6d     	bl	0x26a86c8 <.text+0x3568>
 2bf5918: aa1303e0     	mov	x0, x19
 2bf591c: 97fb3b70     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf5920: 97eac04b     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.Void OnUndoSell()
# VA 0x2bf5924 .. 0x2bf5a54 (next mapped method entry)
 2bf5924: d10143ff     	sub	sp, sp, #0x50
 2bf5928: a90357fe     	stp	x30, x21, [sp, #0x30]
 2bf592c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2bf5930: b001d8f4     	adrp	x20, 0x6712000
 2bf5934: aa0003f3     	mov	x19, x0
 2bf5938: 396c9688     	ldrb	w8, [x20, #0xb25]
 2bf593c: 370001e8     	tbnz	w8, #0x0, 0x2bf5978 <__start_il2cpp+0x12d364>
 2bf5940: b001b820     	adrp	x0, 0x62fa000
 2bf5944: f9421400     	ldr	x0, [x0, #0x428]
 2bf5948: 97f78526     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf594c: b001b820     	adrp	x0, 0x62fa000
 2bf5950: f9421800     	ldr	x0, [x0, #0x430]
 2bf5954: 97f78523     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5958: b001b820     	adrp	x0, 0x62fa000
 2bf595c: f9421c00     	ldr	x0, [x0, #0x438]
 2bf5960: 97f78520     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5964: b001b820     	adrp	x0, 0x62fa000
 2bf5968: f9422000     	ldr	x0, [x0, #0x440]
 2bf596c: 97f7851d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5970: 52800028     	mov	w8, #0x1                // =1
 2bf5974: 392c9688     	strb	w8, [x20, #0xb25]
 2bf5978: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf597c: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2bf5980: f90017ff     	str	xzr, [sp, #0x28]
 2bf5984: b4000320     	cbz	x0, 0x2bf59e8 <__start_il2cpp+0x12d3d4>
 2bf5988: b001b828     	adrp	x8, 0x62fa000
 2bf598c: b001b833     	adrp	x19, 0x62fa000
 2bf5990: b001b834     	adrp	x20, 0x62fa000
 2bf5994: f9422108     	ldr	x8, [x8, #0x440]
 2bf5998: f9421a73     	ldr	x19, [x19, #0x430]
 2bf599c: f9421694     	ldr	x20, [x20, #0x428]
 2bf59a0: 910063f5     	add	x21, sp, #0x18
 2bf59a4: f9400101     	ldr	x1, [x8]
 2bf59a8: 910063e8     	add	x8, sp, #0x18
 2bf59ac: 943cd005     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2bf59b0: a900d7ff     	stp	xzr, x21, [sp, #0x8]
 2bf59b4: f9400261     	ldr	x1, [x19]
 2bf59b8: 910063e0     	add	x0, sp, #0x18
 2bf59bc: 947a43b7     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2bf59c0: 360000e0     	tbz	w0, #0x0, 0x2bf59dc <__start_il2cpp+0x12d3c8>
 2bf59c4: f94017e0     	ldr	x0, [sp, #0x28]
 2bf59c8: b4000180     	cbz	x0, 0x2bf59f8 <__start_il2cpp+0x12d3e4>
 2bf59cc: f9400008     	ldr	x8, [x0]
 2bf59d0: a95a8509     	ldp	x9, x1, [x8, #0x1a8]
 2bf59d4: d63f0120     	blr	x9
 2bf59d8: 17fffff7     	b	0x2bf59b4 <__start_il2cpp+0x12d3a0>
 2bf59dc: f9400281     	ldr	x1, [x20]
 2bf59e0: 910063e0     	add	x0, sp, #0x18
 2bf59e4: 947a43ac     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf59e8: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2bf59ec: a94357fe     	ldp	x30, x21, [sp, #0x30]
 2bf59f0: 910143ff     	add	sp, sp, #0x50
 2bf59f4: d65f03c0     	ret
 2bf59f8: 97f785a4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf59fc: 14000002     	b	0x2bf5a04 <__start_il2cpp+0x12d3f0>
 2bf5a00: 14000001     	b	0x2bf5a04 <__start_il2cpp+0x12d3f0>
 2bf5a04: aa0003f3     	mov	x19, x0
 2bf5a08: 7100043f     	cmp	w1, #0x1
 2bf5a0c: 540001a1     	b.ne	0x2bf5a40 <__start_il2cpp+0x12d42c>
 2bf5a10: aa1303e0     	mov	x0, x19
 2bf5a14: 94ccc34b     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf5a18: f9400013     	ldr	x19, [x0]
 2bf5a1c: f90007f3     	str	x19, [sp, #0x8]
 2bf5a20: 94ccc34c     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf5a24: f9400be0     	ldr	x0, [sp, #0x10]
 2bf5a28: f9400281     	ldr	x1, [x20]
 2bf5a2c: 947a439a     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2bf5a30: b4fffdd3     	cbz	x19, 0x2bf59e8 <__start_il2cpp+0x12d3d4>
 2bf5a34: aa1303e0     	mov	x0, x19
 2bf5a38: 97f78592     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2bf5a3c: aa0003f3     	mov	x19, x0
 2bf5a40: 910023e0     	add	x0, sp, #0x8
 2bf5a44: 97eacb21     	bl	0x26a86c8 <.text+0x3568>
 2bf5a48: aa1303e0     	mov	x0, x19
 2bf5a4c: 97fb3b24     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf5a50: 97eabfff     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem :: System.String ToString()
# VA 0x2bf5a54 .. 0x2bf5a70 (next mapped method entry)
 2bf5a54: f9402800     	ldr	x0, [x0, #0x50]
 2bf5a58: b4000080     	cbz	x0, 0x2bf5a68 <__start_il2cpp+0x12d454>
 2bf5a5c: f9400008     	ldr	x8, [x0]
 2bf5a60: a9568502     	ldp	x2, x1, [x8, #0x168]
 2bf5a64: d61f0040     	br	x2
 2bf5a68: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bf5a6c: 97f78587     	bl	0x29d7088 <mono_class_get_checked+0x970>
