
# ExperiencePointProducer :: System.Boolean CanProduce(System.Int32 itemId, System.Int32 itemLevelBeforeMerge, System.Int32 itemDifficulty)
# VA 0x2c0abf4 .. 0x2c0ac18 (next mapped method entry)
 2c0abf4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0abf8: aa1f03e0     	mov	x0, xzr
 2c0abfc: 2a0203f3     	mov	w19, w2
 2c0ac00: 97feac2f     	bl	0x2bb5cbc <__start_il2cpp+0xed6a8>
 2c0ac04: 71000e7f     	cmp	w19, #0x3
 2c0ac08: 7a41c804     	ccmp	w0, #0x1, #0x4, gt
 2c0ac0c: 1a9fd7e0     	cset	w0, gt
 2c0ac10: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0ac14: d65f03c0     	ret

# ExperiencePointProducer :: System.Void Produce(System.Int32 mergedItemId, System.Int32 itemLevelBeforeMerge, System.Int32 itemDifficulty, BoardSlot fromBoardSlot)
# VA 0x2c0ac18 .. 0x2c0ad98 (next mapped method entry)
 2c0ac18: d10103ff     	sub	sp, sp, #0x40
 2c0ac1c: a9015ffe     	stp	x30, x23, [sp, #0x10]
 2c0ac20: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c0ac24: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c0ac28: 9001d857     	adrp	x23, 0x6712000
 2c0ac2c: aa0403f3     	mov	x19, x4
 2c0ac30: 2a0203f5     	mov	w21, w2
 2c0ac34: 396f4ae8     	ldrb	w8, [x23, #0xbd2]
 2c0ac38: 2a0103f6     	mov	w22, w1
 2c0ac3c: aa0003f4     	mov	x20, x0
 2c0ac40: 37000188     	tbnz	w8, #0x0, 0x2c0ac70 <__start_il2cpp+0x14265c>
 2c0ac44: f001b760     	adrp	x0, 0x62f9000
 2c0ac48: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0ac4c: 97f73065     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ac50: d001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0ac54: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0ac58: 97f73062     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ac5c: f001b780     	adrp	x0, 0x62fd000
 2c0ac60: f9402400     	ldr	x0, [x0, #0x48]
 2c0ac64: 97f7305f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ac68: 52800028     	mov	w8, #0x1                // =1
 2c0ac6c: 392f4ae8     	strb	w8, [x23, #0xbd2]
 2c0ac70: aa1f03e0     	mov	x0, xzr
 2c0ac74: 97feac12     	bl	0x2bb5cbc <__start_il2cpp+0xed6a8>
 2c0ac78: 710012bf     	cmp	w21, #0x4
 2c0ac7c: 5400082b     	b.lt	0x2c0ad80 <__start_il2cpp+0x14276c>
 2c0ac80: 7100081f     	cmp	w0, #0x2
 2c0ac84: 540007eb     	b.lt	0x2c0ad80 <__start_il2cpp+0x14276c>
 2c0ac88: d001b737     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0ac8c: 910033e1     	add	x1, sp, #0xc
 2c0ac90: f9470ef7     	ldr	x23, [x23, #0xe18]
 2c0ac94: f9401294     	ldr	x20, [x20, #0x20]
 2c0ac98: b9000ff6     	str	w22, [sp, #0xc]
 2c0ac9c: f94026e0     	ldr	x0, [x23, #0x48]
 2c0aca0: 97f730b1     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0aca4: aa0003f6     	mov	x22, x0
 2c0aca8: f94026e0     	ldr	x0, [x23, #0x48]
 2c0acac: 910023e1     	add	x1, sp, #0x8
 2c0acb0: b9000bf5     	str	w21, [sp, #0x8]
 2c0acb4: 97f730ac     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0acb8: f001b788     	adrp	x8, 0x62fd000
 2c0acbc: aa0003e2     	mov	x2, x0
 2c0acc0: aa1603e1     	mov	x1, x22
 2c0acc4: f9402508     	ldr	x8, [x8, #0x48]
 2c0acc8: aa1f03e3     	mov	x3, xzr
 2c0accc: f9400108     	ldr	x8, [x8]
 2c0acd0: aa0803e0     	mov	x0, x8
 2c0acd4: 948db088     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2c0acd8: b40005f4     	cbz	x20, 0x2c0ad94 <__start_il2cpp+0x142780>
 2c0acdc: f001b76a     	adrp	x10, 0x62f9000
 2c0ace0: f9400288     	ldr	x8, [x20]
 2c0ace4: aa0003f5     	mov	x21, x0
 2c0ace8: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c0acec: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0acf0: f9400141     	ldr	x1, [x10]
 2c0acf4: b4000129     	cbz	x9, 0x2c0ad18 <__start_il2cpp+0x142704>
 2c0acf8: f940590a     	ldr	x10, [x8, #0xb0]
 2c0acfc: 9100214a     	add	x10, x10, #0x8
 2c0ad00: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0ad04: eb01017f     	cmp	x11, x1
 2c0ad08: 54000100     	b.eq	0x2c0ad28 <__start_il2cpp+0x142714>
 2c0ad0c: f1000529     	subs	x9, x9, #0x1
 2c0ad10: 9100414a     	add	x10, x10, #0x10
 2c0ad14: 54ffff61     	b.ne	0x2c0ad00 <__start_il2cpp+0x1426ec>
 2c0ad18: aa1403e0     	mov	x0, x20
 2c0ad1c: 52800122     	mov	w2, #0x9                // =9
 2c0ad20: 97f80d91     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0ad24: 14000005     	b	0x2c0ad38 <__start_il2cpp+0x142724>
 2c0ad28: b9400149     	ldr	w9, [x10]
 2c0ad2c: 11002529     	add	w9, w9, #0x9
 2c0ad30: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0ad34: 9104e100     	add	x0, x8, #0x138
 2c0ad38: a9401008     	ldp	x8, x4, [x0]
 2c0ad3c: aa1403e0     	mov	x0, x20
 2c0ad40: aa1303e1     	mov	x1, x19
 2c0ad44: aa1503e2     	mov	x2, x21
 2c0ad48: 52800143     	mov	w3, #0xa                // =10
 2c0ad4c: d63f0100     	blr	x8
 2c0ad50: d001b728     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0ad54: aa0003f3     	mov	x19, x0
 2c0ad58: f9478d08     	ldr	x8, [x8, #0xf18]
 2c0ad5c: f9400108     	ldr	x8, [x8]
 2c0ad60: b940e509     	ldr	w9, [x8, #0xe4]
 2c0ad64: 35000069     	cbnz	w9, 0x2c0ad70 <__start_il2cpp+0x14275c>
 2c0ad68: aa0803e0     	mov	x0, x8
 2c0ad6c: 97f7307c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0ad70: aa1303e0     	mov	x0, x19
 2c0ad74: aa1f03e1     	mov	x1, xzr
 2c0ad78: aa1f03e2     	mov	x2, xzr
 2c0ad7c: 94bcee1f     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c0ad80: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0ad84: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c0ad88: a9415ffe     	ldp	x30, x23, [sp, #0x10]
 2c0ad8c: 910103ff     	add	sp, sp, #0x40
 2c0ad90: d65f03c0     	ret
 2c0ad94: 97f730bd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ExperiencePointProducer :: System.Void OnProduceSucceed(BaseItem producedItem)
# VA 0x2c0ad98 .. 0x2c0ad9c (next mapped method entry)
 2c0ad98: d65f03c0     	ret

# ExperiencePointProducer :: System.Void Initialize()
# VA 0x2c0ad9c .. 0x2c0ae40 (next mapped method entry)
 2c0ad9c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0ada0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0ada4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0ada8: 9001d854     	adrp	x20, 0x6712000
 2c0adac: b001b776     	adrp	x22, 0x62f7000
 2c0adb0: f001b795     	adrp	x21, 0x62fd000
 2c0adb4: 396f4e88     	ldrb	w8, [x20, #0xbd3]
 2c0adb8: f94556d6     	ldr	x22, [x22, #0xaa8]
 2c0adbc: f9402ab5     	ldr	x21, [x21, #0x50]
 2c0adc0: aa0003f3     	mov	x19, x0
 2c0adc4: 37000188     	tbnz	w8, #0x0, 0x2c0adf4 <__start_il2cpp+0x1427e0>
 2c0adc8: b001b760     	adrp	x0, 0x62f7000
 2c0adcc: f9455400     	ldr	x0, [x0, #0xaa8]
 2c0add0: 97f73004     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0add4: f001b780     	adrp	x0, 0x62fd000
 2c0add8: f9402800     	ldr	x0, [x0, #0x50]
 2c0addc: 97f73001     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ade0: b001b760     	adrp	x0, 0x62f7000
 2c0ade4: f945a400     	ldr	x0, [x0, #0xb48]
 2c0ade8: 97f72ffe     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0adec: 52800028     	mov	w8, #0x1                // =1
 2c0adf0: 392f4e88     	strb	w8, [x20, #0xbd3]
 2c0adf4: f94002c0     	ldr	x0, [x22]
 2c0adf8: f9401a74     	ldr	x20, [x19, #0x30]
 2c0adfc: 97f7309f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0ae00: f94002a2     	ldr	x2, [x21]
 2c0ae04: aa1303e1     	mov	x1, x19
 2c0ae08: aa1f03e3     	mov	x3, xzr
 2c0ae0c: aa0003f5     	mov	x21, x0
 2c0ae10: 943c2b4c     	bl	0x3b15b40 <__start_il2cpp+0x104d52c>
 2c0ae14: b4000154     	cbz	x20, 0x2c0ae3c <__start_il2cpp+0x142828>
 2c0ae18: b001b768     	adrp	x8, 0x62f7000
 2c0ae1c: aa1403e0     	mov	x0, x20
 2c0ae20: aa1503e1     	mov	x1, x21
 2c0ae24: f945a508     	ldr	x8, [x8, #0xb48]
 2c0ae28: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0ae2c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0ae30: f9400102     	ldr	x2, [x8]
 2c0ae34: f84307fe     	ldr	x30, [sp], #0x30
 2c0ae38: 14287592     	b	0x3628480 <__start_il2cpp+0xb5fe6c>
 2c0ae3c: 97f73093     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ExperiencePointProducer :: System.Void OnPostMerge(PostMergeSignal postMergeSignal)
# VA 0x2c0ae40 .. 0x2c0ae80 (next mapped method entry)
 2c0ae40: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0ae44: 3940cc28     	ldrb	w8, [x1, #0x33]
 2c0ae48: 37000068     	tbnz	w8, #0x0, 0x2c0ae54 <__start_il2cpp+0x142840>
 2c0ae4c: f84107fe     	ldr	x30, [sp], #0x10
 2c0ae50: d65f03c0     	ret
 2c0ae54: f9400828     	ldr	x8, [x1, #0x10]
 2c0ae58: b4000128     	cbz	x8, 0x2c0ae7c <__start_il2cpp+0x142868>
 2c0ae5c: f9402908     	ldr	x8, [x8, #0x50]
 2c0ae60: b40000e8     	cbz	x8, 0x2c0ae7c <__start_il2cpp+0x142868>
 2c0ae64: b9403108     	ldr	w8, [x8, #0x30]
 2c0ae68: b9400022     	ldr	w2, [x1]
 2c0ae6c: f9401024     	ldr	x4, [x1, #0x20]
 2c0ae70: 2a0803e1     	mov	w1, w8
 2c0ae74: f84107fe     	ldr	x30, [sp], #0x10
 2c0ae78: 17ffff68     	b	0x2c0ac18 <__start_il2cpp+0x142604>
 2c0ae7c: 97f73083     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ExperiencePointProducer :: System.Void .ctor()
# VA 0x2c0ae80 .. 0x2c0ae88 (next mapped method entry)
 2c0ae80: aa1f03e1     	mov	x1, xzr
 2c0ae84: 14951331     	b	0x514fb48 <__start_il2cpp+0x2687534>
