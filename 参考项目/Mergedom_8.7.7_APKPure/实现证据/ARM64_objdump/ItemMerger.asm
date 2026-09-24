
# ItemMerger :: System.Void Merge(BaseItem firstItem, BaseItem secondItem, BoardSlot firstItemBoardSlot, BoardSlot secondItemBoardSlot)
# VA 0x2c033a0 .. 0x2c034b0 (next mapped method entry)
 2c033a0: d10443ff     	sub	sp, sp, #0x110
 2c033a4: f90063fd     	str	x29, [sp, #0xc0]
 2c033a8: a90d67fe     	stp	x30, x25, [sp, #0xd0]
 2c033ac: a90e5ff8     	stp	x24, x23, [sp, #0xe0]
 2c033b0: a90f57f6     	stp	x22, x21, [sp, #0xf0]
 2c033b4: a9104ff4     	stp	x20, x19, [sp, #0x100]
 2c033b8: f001d879     	adrp	x25, 0x6712000
 2c033bc: b001b7d8     	adrp	x24, 0x62fc000
 2c033c0: aa0403f3     	mov	x19, x4
 2c033c4: 396e7b28     	ldrb	w8, [x25, #0xb9e]
 2c033c8: f946bf18     	ldr	x24, [x24, #0xd78]
 2c033cc: aa0303f4     	mov	x20, x3
 2c033d0: aa0203f5     	mov	x21, x2
 2c033d4: aa0103f6     	mov	x22, x1
 2c033d8: aa0003f7     	mov	x23, x0
 2c033dc: 370000c8     	tbnz	w8, #0x0, 0x2c033f4 <__start_il2cpp+0x13ade0>
 2c033e0: b001b7c0     	adrp	x0, 0x62fc000
 2c033e4: f946bc00     	ldr	x0, [x0, #0xd78]
 2c033e8: 97f74e7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c033ec: 52800028     	mov	w8, #0x1                // =1
 2c033f0: 392e7b28     	strb	w8, [x25, #0xb9e]
 2c033f4: 910083e0     	add	x0, sp, #0x20
 2c033f8: 2a1f03e1     	mov	w1, wzr
 2c033fc: 52801402     	mov	w2, #0xa0               // =160
 2c03400: 910083f9     	add	x25, sp, #0x20
 2c03404: 94cc8cc7     	bl	0x5f26720 <__register_atfork@plt+0x30>
 2c03408: 910003e8     	mov	x8, sp
 2c0340c: aa1f03e0     	mov	x0, xzr
 2c03410: 94905c38     	bl	0x501a4f0 <__start_il2cpp+0x2551edc>
 2c03414: ad4007e0     	ldp	q0, q1, [sp]
 2c03418: 91002320     	add	x0, x25, #0x8
 2c0341c: aa1f03e1     	mov	x1, xzr
 2c03420: 3c8283e0     	stur	q0, [sp, #0x28]
 2c03424: 3c8383e1     	stur	q1, [sp, #0x38]
 2c03428: 97f74e59     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0342c: 91012320     	add	x0, x25, #0x48
 2c03430: aa1703e1     	mov	x1, x23
 2c03434: f90037f7     	str	x23, [sp, #0x68]
 2c03438: 97f74e55     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0343c: 9100a320     	add	x0, x25, #0x28
 2c03440: aa1603e1     	mov	x1, x22
 2c03444: f90027f6     	str	x22, [sp, #0x48]
 2c03448: 97f74e51     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0344c: 91010320     	add	x0, x25, #0x40
 2c03450: aa1503e1     	mov	x1, x21
 2c03454: f90033f5     	str	x21, [sp, #0x60]
 2c03458: 97f74e4d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0345c: 9100e320     	add	x0, x25, #0x38
 2c03460: aa1403e1     	mov	x1, x20
 2c03464: f9002ff4     	str	x20, [sp, #0x58]
 2c03468: 97f74e49     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0346c: 9100c320     	add	x0, x25, #0x30
 2c03470: aa1303e1     	mov	x1, x19
 2c03474: f9002bf3     	str	x19, [sp, #0x50]
 2c03478: 97f74e45     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0347c: f9400302     	ldr	x2, [x24]
 2c03480: 12800008     	mov	w8, #-0x1               // =-1
 2c03484: 91002320     	add	x0, x25, #0x8
 2c03488: 910083e1     	add	x1, sp, #0x20
 2c0348c: b90023e8     	str	w8, [sp, #0x20]
 2c03490: 941ceb49     	bl	0x333e1b4 <__start_il2cpp+0x875ba0>
 2c03494: a9504ff4     	ldp	x20, x19, [sp, #0x100]
 2c03498: f94063fd     	ldr	x29, [sp, #0xc0]
 2c0349c: a94f57f6     	ldp	x22, x21, [sp, #0xf0]
 2c034a0: a94e5ff8     	ldp	x24, x23, [sp, #0xe0]
 2c034a4: a94d67fe     	ldp	x30, x25, [sp, #0xd0]
 2c034a8: 910443ff     	add	sp, sp, #0x110
 2c034ac: d65f03c0     	ret

# ItemMerger :: System.Void .ctor()
# VA 0x2c034b0 .. 0x2c03710 (next mapped method entry)
 2c034b0: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c034b4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c034b8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c034bc: f001d874     	adrp	x20, 0x6712000
 2c034c0: d001b777     	adrp	x23, 0x62f1000
 2c034c4: d001b776     	adrp	x22, 0x62f1000
 2c034c8: f001b7b5     	adrp	x21, 0x62fa000
 2c034cc: f94102f7     	ldr	x23, [x23, #0x200]
 2c034d0: 396e7e88     	ldrb	w8, [x20, #0xb9f]
 2c034d4: f940fad6     	ldr	x22, [x22, #0x1f0]
 2c034d8: f94052b5     	ldr	x21, [x21, #0xa0]
 2c034dc: aa0003f3     	mov	x19, x0
 2c034e0: 370001e8     	tbnz	w8, #0x0, 0x2c0351c <__start_il2cpp+0x13af08>
 2c034e4: f001b7a0     	adrp	x0, 0x62fa000
 2c034e8: f9405000     	ldr	x0, [x0, #0xa0]
 2c034ec: 97f74e3d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c034f0: d001b780     	adrp	x0, 0x62f5000
 2c034f4: f940e800     	ldr	x0, [x0, #0x1d0]
 2c034f8: 97f74e3a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c034fc: d001b760     	adrp	x0, 0x62f1000
 2c03500: f940f800     	ldr	x0, [x0, #0x1f0]
 2c03504: 97f74e37     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c03508: d001b760     	adrp	x0, 0x62f1000
 2c0350c: f9410000     	ldr	x0, [x0, #0x200]
 2c03510: 97f74e34     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c03514: 52800028     	mov	w8, #0x1                // =1
 2c03518: 392e7e88     	strb	w8, [x20, #0xb9f]
 2c0351c: f94002e0     	ldr	x0, [x23]
 2c03520: 97f74ed6     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c03524: f94002c1     	ldr	x1, [x22]
 2c03528: aa0003f4     	mov	x20, x0
 2c0352c: 943b2ab5     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c03530: f94002a0     	ldr	x0, [x21]
 2c03534: b940e408     	ldr	w8, [x0, #0xe4]
 2c03538: 35000048     	cbnz	w8, 0x2c03540 <__start_il2cpp+0x13af2c>
 2c0353c: 97f74e88     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c03540: aa1f03e0     	mov	x0, xzr
 2c03544: 97ffe92c     	bl	0x2bfd9f4 <__start_il2cpp+0x1353e0>
 2c03548: b4000e34     	cbz	x20, 0x2c0370c <__start_il2cpp+0x13b0f8>
 2c0354c: d001b795     	adrp	x21, 0x62f5000
 2c03550: f940eab5     	ldr	x21, [x21, #0x1d0]
 2c03554: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c03558: f9400a88     	ldr	x8, [x20, #0x10]
 2c0355c: f94002a9     	ldr	x9, [x21]
 2c03560: 1100054a     	add	w10, w10, #0x1
 2c03564: b9001e8a     	str	w10, [x20, #0x1c]
 2c03568: b4000d28     	cbz	x8, 0x2c0370c <__start_il2cpp+0x13b0f8>
 2c0356c: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c03570: b940190b     	ldr	w11, [x8, #0x18]
 2c03574: 2a0003e1     	mov	w1, w0
 2c03578: 6b0b015f     	cmp	w10, w11
 2c0357c: 540000c2     	b.hs	0x2c03594 <__start_il2cpp+0x13af80>
 2c03580: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c03584: 11000549     	add	w9, w10, #0x1
 2c03588: b9001a89     	str	w9, [x20, #0x18]
 2c0358c: b9002101     	str	w1, [x8, #0x20]
 2c03590: 14000006     	b	0x2c035a8 <__start_il2cpp+0x13af94>
 2c03594: f9401128     	ldr	x8, [x9, #0x20]
 2c03598: aa1403e0     	mov	x0, x20
 2c0359c: f9406108     	ldr	x8, [x8, #0xc0]
 2c035a0: f9403902     	ldr	x2, [x8, #0x70]
 2c035a4: 943b2cbb     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c035a8: aa1f03e0     	mov	x0, xzr
 2c035ac: 97ffe914     	bl	0x2bfd9fc <__start_il2cpp+0x1353e8>
 2c035b0: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c035b4: f9400a88     	ldr	x8, [x20, #0x10]
 2c035b8: f94002a9     	ldr	x9, [x21]
 2c035bc: 1100054a     	add	w10, w10, #0x1
 2c035c0: b9001e8a     	str	w10, [x20, #0x1c]
 2c035c4: b4000a48     	cbz	x8, 0x2c0370c <__start_il2cpp+0x13b0f8>
 2c035c8: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c035cc: b940190b     	ldr	w11, [x8, #0x18]
 2c035d0: 2a0003e1     	mov	w1, w0
 2c035d4: 6b0b015f     	cmp	w10, w11
 2c035d8: 540000c2     	b.hs	0x2c035f0 <__start_il2cpp+0x13afdc>
 2c035dc: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c035e0: 11000549     	add	w9, w10, #0x1
 2c035e4: b9001a89     	str	w9, [x20, #0x18]
 2c035e8: b9002101     	str	w1, [x8, #0x20]
 2c035ec: 14000006     	b	0x2c03604 <__start_il2cpp+0x13aff0>
 2c035f0: f9401128     	ldr	x8, [x9, #0x20]
 2c035f4: aa1403e0     	mov	x0, x20
 2c035f8: f9406108     	ldr	x8, [x8, #0xc0]
 2c035fc: f9403902     	ldr	x2, [x8, #0x70]
 2c03600: 943b2ca4     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c03604: aa1303e0     	mov	x0, x19
 2c03608: aa1403e1     	mov	x1, x20
 2c0360c: f8020c14     	str	x20, [x0, #0x20]!
 2c03610: 97f74ddf     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c03614: f94002e0     	ldr	x0, [x23]
 2c03618: 97f74e98     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0361c: f94002c1     	ldr	x1, [x22]
 2c03620: aa0003f4     	mov	x20, x0
 2c03624: 943b2a77     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c03628: aa1f03e0     	mov	x0, xzr
 2c0362c: 97ffe8f2     	bl	0x2bfd9f4 <__start_il2cpp+0x1353e0>
 2c03630: b40006f4     	cbz	x20, 0x2c0370c <__start_il2cpp+0x13b0f8>
 2c03634: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c03638: f9400a88     	ldr	x8, [x20, #0x10]
 2c0363c: f94002a9     	ldr	x9, [x21]
 2c03640: 1100054a     	add	w10, w10, #0x1
 2c03644: b9001e8a     	str	w10, [x20, #0x1c]
 2c03648: b4000628     	cbz	x8, 0x2c0370c <__start_il2cpp+0x13b0f8>
 2c0364c: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c03650: b940190b     	ldr	w11, [x8, #0x18]
 2c03654: 2a0003e1     	mov	w1, w0
 2c03658: 6b0b015f     	cmp	w10, w11
 2c0365c: 540000c2     	b.hs	0x2c03674 <__start_il2cpp+0x13b060>
 2c03660: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c03664: 11000549     	add	w9, w10, #0x1
 2c03668: b9001a89     	str	w9, [x20, #0x18]
 2c0366c: b9002101     	str	w1, [x8, #0x20]
 2c03670: 14000006     	b	0x2c03688 <__start_il2cpp+0x13b074>
 2c03674: f9401128     	ldr	x8, [x9, #0x20]
 2c03678: aa1403e0     	mov	x0, x20
 2c0367c: f9406108     	ldr	x8, [x8, #0xc0]
 2c03680: f9403902     	ldr	x2, [x8, #0x70]
 2c03684: 943b2c83     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c03688: aa1f03e0     	mov	x0, xzr
 2c0368c: 97ffe8dc     	bl	0x2bfd9fc <__start_il2cpp+0x1353e8>
 2c03690: b9401e8a     	ldr	w10, [x20, #0x1c]
 2c03694: f9400a88     	ldr	x8, [x20, #0x10]
 2c03698: f94002a9     	ldr	x9, [x21]
 2c0369c: 1100054a     	add	w10, w10, #0x1
 2c036a0: b9001e8a     	str	w10, [x20, #0x1c]
 2c036a4: b4000348     	cbz	x8, 0x2c0370c <__start_il2cpp+0x13b0f8>
 2c036a8: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2c036ac: b940190b     	ldr	w11, [x8, #0x18]
 2c036b0: 2a0003e1     	mov	w1, w0
 2c036b4: 6b0b015f     	cmp	w10, w11
 2c036b8: 540000c2     	b.hs	0x2c036d0 <__start_il2cpp+0x13b0bc>
 2c036bc: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c036c0: 11000549     	add	w9, w10, #0x1
 2c036c4: b9001a89     	str	w9, [x20, #0x18]
 2c036c8: b9002101     	str	w1, [x8, #0x20]
 2c036cc: 14000006     	b	0x2c036e4 <__start_il2cpp+0x13b0d0>
 2c036d0: f9401128     	ldr	x8, [x9, #0x20]
 2c036d4: aa1403e0     	mov	x0, x20
 2c036d8: f9406108     	ldr	x8, [x8, #0xc0]
 2c036dc: f9403902     	ldr	x2, [x8, #0x70]
 2c036e0: 943b2c6c     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c036e4: aa1303e0     	mov	x0, x19
 2c036e8: aa1403e1     	mov	x1, x20
 2c036ec: f8028c14     	str	x20, [x0, #0x28]!
 2c036f0: 97f74da7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c036f4: aa1303e0     	mov	x0, x19
 2c036f8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c036fc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c03700: aa1f03e1     	mov	x1, xzr
 2c03704: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c03708: 14953110     	b	0x514fb48 <__start_il2cpp+0x2687534>
 2c0370c: 97f74e5f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMerger :: System.Void .cctor()
# VA 0x2c03710 .. 0x2c038fc (next mapped method entry)
 2c03710: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c03714: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c03718: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0371c: f001d875     	adrp	x21, 0x6712000
 2c03720: d001b776     	adrp	x22, 0x62f1000
 2c03724: d001b773     	adrp	x19, 0x62f1000
 2c03728: f001b7b4     	adrp	x20, 0x62fa000
 2c0372c: f94102d6     	ldr	x22, [x22, #0x200]
 2c03730: 396e82a8     	ldrb	w8, [x21, #0xba0]
 2c03734: f940fa73     	ldr	x19, [x19, #0x1f0]
 2c03738: f9405294     	ldr	x20, [x20, #0xa0]
 2c0373c: 37000248     	tbnz	w8, #0x0, 0x2c03784 <__start_il2cpp+0x13b170>
 2c03740: f001b7a0     	adrp	x0, 0x62fa000
 2c03744: f9405000     	ldr	x0, [x0, #0xa0]
 2c03748: 97f74da6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0374c: b001b7c0     	adrp	x0, 0x62fc000
 2c03750: f946c000     	ldr	x0, [x0, #0xd80]
 2c03754: 97f74da3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c03758: d001b780     	adrp	x0, 0x62f5000
 2c0375c: f940e800     	ldr	x0, [x0, #0x1d0]
 2c03760: 97f74da0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c03764: d001b760     	adrp	x0, 0x62f1000
 2c03768: f940f800     	ldr	x0, [x0, #0x1f0]
 2c0376c: 97f74d9d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c03770: d001b760     	adrp	x0, 0x62f1000
 2c03774: f9410000     	ldr	x0, [x0, #0x200]
 2c03778: 97f74d9a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0377c: 52800028     	mov	w8, #0x1                // =1
 2c03780: 392e82a8     	strb	w8, [x21, #0xba0]
 2c03784: f94002c0     	ldr	x0, [x22]
 2c03788: 97f74e3c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0378c: f9400261     	ldr	x1, [x19]
 2c03790: aa0003f3     	mov	x19, x0
 2c03794: 943b2a1b     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c03798: f9400280     	ldr	x0, [x20]
 2c0379c: b940e408     	ldr	w8, [x0, #0xe4]
 2c037a0: 35000048     	cbnz	w8, 0x2c037a8 <__start_il2cpp+0x13b194>
 2c037a4: 97f74dee     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c037a8: aa1f03e0     	mov	x0, xzr
 2c037ac: 97ffe890     	bl	0x2bfd9ec <__start_il2cpp+0x1353d8>
 2c037b0: b4000a53     	cbz	x19, 0x2c038f8 <__start_il2cpp+0x13b2e4>
 2c037b4: d001b794     	adrp	x20, 0x62f5000
 2c037b8: f940ea94     	ldr	x20, [x20, #0x1d0]
 2c037bc: b9401e6a     	ldr	w10, [x19, #0x1c]
 2c037c0: f9400a68     	ldr	x8, [x19, #0x10]
 2c037c4: f9400289     	ldr	x9, [x20]
 2c037c8: 1100054a     	add	w10, w10, #0x1
 2c037cc: b9001e6a     	str	w10, [x19, #0x1c]
 2c037d0: b4000948     	cbz	x8, 0x2c038f8 <__start_il2cpp+0x13b2e4>
 2c037d4: b9801a6a     	ldrsw	x10, [x19, #0x18]
 2c037d8: b940190b     	ldr	w11, [x8, #0x18]
 2c037dc: 2a0003e1     	mov	w1, w0
 2c037e0: 6b0b015f     	cmp	w10, w11
 2c037e4: 540000c2     	b.hs	0x2c037fc <__start_il2cpp+0x13b1e8>
 2c037e8: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c037ec: 11000549     	add	w9, w10, #0x1
 2c037f0: b9001a69     	str	w9, [x19, #0x18]
 2c037f4: b9002101     	str	w1, [x8, #0x20]
 2c037f8: 14000006     	b	0x2c03810 <__start_il2cpp+0x13b1fc>
 2c037fc: f9401128     	ldr	x8, [x9, #0x20]
 2c03800: aa1303e0     	mov	x0, x19
 2c03804: f9406108     	ldr	x8, [x8, #0xc0]
 2c03808: f9403902     	ldr	x2, [x8, #0x70]
 2c0380c: 943b2c21     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c03810: aa1f03e0     	mov	x0, xzr
 2c03814: 97ffe878     	bl	0x2bfd9f4 <__start_il2cpp+0x1353e0>
 2c03818: b9401e6a     	ldr	w10, [x19, #0x1c]
 2c0381c: f9400a68     	ldr	x8, [x19, #0x10]
 2c03820: f9400289     	ldr	x9, [x20]
 2c03824: 1100054a     	add	w10, w10, #0x1
 2c03828: b9001e6a     	str	w10, [x19, #0x1c]
 2c0382c: b4000668     	cbz	x8, 0x2c038f8 <__start_il2cpp+0x13b2e4>
 2c03830: b9801a6a     	ldrsw	x10, [x19, #0x18]
 2c03834: b940190b     	ldr	w11, [x8, #0x18]
 2c03838: 2a0003e1     	mov	w1, w0
 2c0383c: 6b0b015f     	cmp	w10, w11
 2c03840: 540000c2     	b.hs	0x2c03858 <__start_il2cpp+0x13b244>
 2c03844: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c03848: 11000549     	add	w9, w10, #0x1
 2c0384c: b9001a69     	str	w9, [x19, #0x18]
 2c03850: b9002101     	str	w1, [x8, #0x20]
 2c03854: 14000006     	b	0x2c0386c <__start_il2cpp+0x13b258>
 2c03858: f9401128     	ldr	x8, [x9, #0x20]
 2c0385c: aa1303e0     	mov	x0, x19
 2c03860: f9406108     	ldr	x8, [x8, #0xc0]
 2c03864: f9403902     	ldr	x2, [x8, #0x70]
 2c03868: 943b2c0a     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c0386c: aa1f03e0     	mov	x0, xzr
 2c03870: 97ffe863     	bl	0x2bfd9fc <__start_il2cpp+0x1353e8>
 2c03874: b9401e6a     	ldr	w10, [x19, #0x1c]
 2c03878: f9400a68     	ldr	x8, [x19, #0x10]
 2c0387c: f9400289     	ldr	x9, [x20]
 2c03880: 1100054a     	add	w10, w10, #0x1
 2c03884: b9001e6a     	str	w10, [x19, #0x1c]
 2c03888: b4000388     	cbz	x8, 0x2c038f8 <__start_il2cpp+0x13b2e4>
 2c0388c: b9801a6a     	ldrsw	x10, [x19, #0x18]
 2c03890: b940190b     	ldr	w11, [x8, #0x18]
 2c03894: b001b7d4     	adrp	x20, 0x62fc000
 2c03898: f946c294     	ldr	x20, [x20, #0xd80]
 2c0389c: 2a0003e1     	mov	w1, w0
 2c038a0: 6b0b015f     	cmp	w10, w11
 2c038a4: 540000c2     	b.hs	0x2c038bc <__start_il2cpp+0x13b2a8>
 2c038a8: 8b0a0908     	add	x8, x8, x10, lsl #2
 2c038ac: 11000549     	add	w9, w10, #0x1
 2c038b0: b9001a69     	str	w9, [x19, #0x18]
 2c038b4: b9002101     	str	w1, [x8, #0x20]
 2c038b8: 14000006     	b	0x2c038d0 <__start_il2cpp+0x13b2bc>
 2c038bc: f9401128     	ldr	x8, [x9, #0x20]
 2c038c0: aa1303e0     	mov	x0, x19
 2c038c4: f9406108     	ldr	x8, [x8, #0xc0]
 2c038c8: f9403902     	ldr	x2, [x8, #0x70]
 2c038cc: 943b2bf1     	bl	0x3ace890 <__start_il2cpp+0x100627c>
 2c038d0: f9400288     	ldr	x8, [x20]
 2c038d4: aa1303e1     	mov	x1, x19
 2c038d8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c038dc: f9405d08     	ldr	x8, [x8, #0xb8]
 2c038e0: f9000113     	str	x19, [x8]
 2c038e4: f9400288     	ldr	x8, [x20]
 2c038e8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c038ec: f9405d00     	ldr	x0, [x8, #0xb8]
 2c038f0: f84307fe     	ldr	x30, [sp], #0x30
 2c038f4: 17f74d26     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2c038f8: 97f74de4     	bl	0x29d7088 <mono_class_get_checked+0x970>
