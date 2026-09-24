
# ItemProducerTimer :: System.Void Reset()
# VA 0x2c0af78 .. 0x2c0afa0 (next mapped method entry)
 2c0af78: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0af7c: aa1f03e1     	mov	x1, xzr
 2c0af80: 7900701f     	strh	wzr, [x0, #0x38]
 2c0af84: 94bcd2aa     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c0af88: b40000a0     	cbz	x0, 0x2c0af9c <__start_il2cpp+0x142988>
 2c0af8c: 2a1f03e1     	mov	w1, wzr
 2c0af90: aa1f03e2     	mov	x2, xzr
 2c0af94: f84107fe     	ldr	x30, [sp], #0x10
 2c0af98: 14bce4f8     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2c0af9c: 97f7303b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducerTimer :: System.Void Show(System.Boolean animate = False)
# VA 0x2c0b1e4 .. 0x2c0b2d8 (next mapped method entry)
 2c0b1e4: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0b1e8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0b1ec: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0b1f0: f001d836     	adrp	x22, 0x6712000
 2c0b1f4: b001b735     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b1f8: 2a0103f3     	mov	w19, w1
 2c0b1fc: 396faec8     	ldrb	w8, [x22, #0xbeb]
 2c0b200: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c0b204: aa0003f4     	mov	x20, x0
 2c0b208: 370000c8     	tbnz	w8, #0x0, 0x2c0b220 <__start_il2cpp+0x142c0c>
 2c0b20c: b001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b210: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0b214: 97f72ef3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b218: 52800028     	mov	w8, #0x1                // =1
 2c0b21c: 392faec8     	strb	w8, [x22, #0xbeb]
 2c0b220: f94002a0     	ldr	x0, [x21]
 2c0b224: f9402295     	ldr	x21, [x20, #0x40]
 2c0b228: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b22c: 35000048     	cbnz	w8, 0x2c0b234 <__start_il2cpp+0x142c20>
 2c0b230: 97f72f4b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b234: aa1503e0     	mov	x0, x21
 2c0b238: aa1f03e1     	mov	x1, xzr
 2c0b23c: aa1f03e2     	mov	x2, xzr
 2c0b240: 94bcdee7     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c0b244: 36000260     	tbz	w0, #0x0, 0x2c0b290 <__start_il2cpp+0x142c7c>
 2c0b248: f9402280     	ldr	x0, [x20, #0x40]
 2c0b24c: b4000440     	cbz	x0, 0x2c0b2d4 <__start_il2cpp+0x142cc0>
 2c0b250: aa1f03e1     	mov	x1, xzr
 2c0b254: 94bcd1f6     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c0b258: b40003e0     	cbz	x0, 0x2c0b2d4 <__start_il2cpp+0x142cc0>
 2c0b25c: aa1f03e1     	mov	x1, xzr
 2c0b260: 94bce477     	bl	0x5b4443c <__start_il2cpp+0x307be28>
 2c0b264: 36000160     	tbz	w0, #0x0, 0x2c0b290 <__start_il2cpp+0x142c7c>
 2c0b268: aa1403e0     	mov	x0, x20
 2c0b26c: aa1f03e1     	mov	x1, xzr
 2c0b270: 3900e69f     	strb	wzr, [x20, #0x39]
 2c0b274: 94bcd1ba     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0b278: 12000261     	and	w1, w19, #0x1
 2c0b27c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0b280: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0b284: aa1f03e2     	mov	x2, xzr
 2c0b288: f84307fe     	ldr	x30, [sp], #0x30
 2c0b28c: 1403915d     	b	0x2cef800 <__start_il2cpp+0x2271ec>
 2c0b290: 3940e688     	ldrb	w8, [x20, #0x39]
 2c0b294: 340000a8     	cbz	w8, 0x2c0b2a8 <__start_il2cpp+0x142c94>
 2c0b298: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0b29c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0b2a0: f84307fe     	ldr	x30, [sp], #0x30
 2c0b2a4: d65f03c0     	ret
 2c0b2a8: 52800028     	mov	w8, #0x1                // =1
 2c0b2ac: aa1403e0     	mov	x0, x20
 2c0b2b0: aa1f03e1     	mov	x1, xzr
 2c0b2b4: 3900e688     	strb	w8, [x20, #0x39]
 2c0b2b8: 94bcd1a9     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0b2bc: 12000261     	and	w1, w19, #0x1
 2c0b2c0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0b2c4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0b2c8: aa1f03e2     	mov	x2, xzr
 2c0b2cc: f84307fe     	ldr	x30, [sp], #0x30
 2c0b2d0: 140390fb     	b	0x2cef6bc <__start_il2cpp+0x2270a8>
 2c0b2d4: 97f72f6d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducerTimer :: System.Void UpdateTimerVisual(System.Single progress)
# VA 0x2c0c570 .. 0x2c0c594 (next mapped method entry)
 2c0c570: 3940e008     	ldrb	w8, [x0, #0x38]
 2c0c574: 34000048     	cbz	w8, 0x2c0c57c <__start_il2cpp+0x143f68>
 2c0c578: d65f03c0     	ret
 2c0c57c: f9401800     	ldr	x0, [x0, #0x30]
 2c0c580: b4000060     	cbz	x0, 0x2c0c58c <__start_il2cpp+0x143f78>
 2c0c584: aa1f03e1     	mov	x1, xzr
 2c0c588: 14c0c661     	b	0x5c3df0c <__start_il2cpp+0x31758f8>
 2c0c58c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0c590: 97f72abe     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducerTimer :: System.Void Hide(System.Boolean animate = False)
# VA 0x2c0ccb8 .. 0x2c0ccdc (next mapped method entry)
 2c0ccb8: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0ccbc: 2a0103f3     	mov	w19, w1
 2c0ccc0: aa1f03e1     	mov	x1, xzr
 2c0ccc4: 3900e41f     	strb	wzr, [x0, #0x39]
 2c0ccc8: 94bccb25     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0cccc: 2a1303e1     	mov	w1, w19
 2c0ccd0: aa1f03e2     	mov	x2, xzr
 2c0ccd4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0ccd8: 14038aca     	b	0x2cef800 <__start_il2cpp+0x2271ec>

# ItemProducerTimer :: Cysharp.Threading.Tasks.UniTask AnimateSkipTime(UnityEngine.Vector3 toPos)
# VA 0x2c0d308 .. 0x2c0d3d0 (next mapped method entry)
 2c0d308: d10283ff     	sub	sp, sp, #0xa0
 2c0d30c: fd0033ea     	str	d10, [sp, #0x60]
 2c0d310: 6d0723e9     	stp	d9, d8, [sp, #0x70]
 2c0d314: a90857fe     	stp	x30, x21, [sp, #0x80]
 2c0d318: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2c0d31c: 1e204048     	fmov	s8, s2
 2c0d320: 1e204029     	fmov	s9, s1
 2c0d324: b001d834     	adrp	x20, 0x6712000
 2c0d328: 1e20400a     	fmov	s10, s0
 2c0d32c: 9001b795     	adrp	x21, 0x62fd000
 2c0d330: 396faa88     	ldrb	w8, [x20, #0xbea]
 2c0d334: f94092b5     	ldr	x21, [x21, #0x120]
 2c0d338: aa0003f3     	mov	x19, x0
 2c0d33c: 370000c8     	tbnz	w8, #0x0, 0x2c0d354 <__start_il2cpp+0x144d40>
 2c0d340: 9001b780     	adrp	x0, 0x62fd000
 2c0d344: f9409000     	ldr	x0, [x0, #0x120]
 2c0d348: 97f726a6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0d34c: 52800028     	mov	w8, #0x1                // =1
 2c0d350: 392faa88     	strb	w8, [x20, #0xbea]
 2c0d354: 6f00e400     	movi	v0.2d, #0000000000000000
 2c0d358: 910003f4     	mov	x20, sp
 2c0d35c: aa1f03e1     	mov	x1, xzr
 2c0d360: b27d0280     	orr	x0, x20, #0x8
 2c0d364: ad0003e0     	stp	q0, q0, [sp]
 2c0d368: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c0d36c: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2c0d370: 97f72687     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0d374: 91006280     	add	x0, x20, #0x18
 2c0d378: aa1303e1     	mov	x1, x19
 2c0d37c: f9000ff3     	str	x19, [sp, #0x18]
 2c0d380: 97f72683     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0d384: f94002a0     	ldr	x0, [x21]
 2c0d388: 12800009     	mov	w9, #-0x1               // =-1
 2c0d38c: 2d0427ea     	stp	s10, s9, [sp, #0x20]
 2c0d390: bd002be8     	str	s8, [sp, #0x28]
 2c0d394: f9401c08     	ldr	x8, [x0, #0x38]
 2c0d398: b90003e9     	str	w9, [sp]
 2c0d39c: b5000048     	cbnz	x8, 0x2c0d3a4 <__start_il2cpp+0x144d90>
 2c0d3a0: 97f80339     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c0d3a4: 910003e0     	mov	x0, sp
 2c0d3a8: 9400000c     	bl	0x2c0d3d8 <__start_il2cpp+0x144dc4>
 2c0d3ac: b27d0280     	orr	x0, x20, #0x8
 2c0d3b0: aa1f03e1     	mov	x1, xzr
 2c0d3b4: 97fc71e5     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c0d3b8: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2c0d3bc: fd4033ea     	ldr	d10, [sp, #0x60]
 2c0d3c0: a94857fe     	ldp	x30, x21, [sp, #0x80]
 2c0d3c4: 6d4723e9     	ldp	d9, d8, [sp, #0x70]
 2c0d3c8: 910283ff     	add	sp, sp, #0xa0
 2c0d3cc: d65f03c0     	ret

# ItemProducerTimer :: System.Void .ctor()
# VA 0x2c0d3d0 .. 0x2c0d3d8 (next mapped method entry)
 2c0d3d0: aa1f03e1     	mov	x1, xzr
 2c0d3d4: 14bceb14     	b	0x5b48024 <__start_il2cpp+0x307fa10>
