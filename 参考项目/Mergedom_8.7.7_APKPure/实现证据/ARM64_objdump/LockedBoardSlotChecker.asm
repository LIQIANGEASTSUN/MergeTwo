
# LockedBoardSlotChecker :: System.Collections.Generic.List`1<BaseItem> GetSameIdNeighbours(BaseItem possibleItem)
# VA 0x2c8c31c .. 0x2c8c5cc (next mapped method entry)
 2c8c31c: d10103ff     	sub	sp, sp, #0x40
 2c8c320: a9015ffe     	stp	x30, x23, [sp, #0x10]
 2c8c324: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c8c328: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c8c32c: d001d437     	adrp	x23, 0x6712000
 2c8c330: b001b376     	adrp	x22, 0x62f9000
 2c8c334: b001b375     	adrp	x21, 0x62f9000
 2c8c338: 397f4ee8     	ldrb	w8, [x23, #0xfd3]
 2c8c33c: f94782d6     	ldr	x22, [x22, #0xf00]
 2c8c340: f94786b5     	ldr	x21, [x21, #0xf08]
 2c8c344: aa0103f3     	mov	x19, x1
 2c8c348: aa0003f4     	mov	x20, x0
 2c8c34c: 37000188     	tbnz	w8, #0x0, 0x2c8c37c <__start_il2cpp+0x1c3d68>
 2c8c350: b001b360     	adrp	x0, 0x62f9000
 2c8c354: f9476c00     	ldr	x0, [x0, #0xed8]
 2c8c358: 97f52aa2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c8c35c: b001b360     	adrp	x0, 0x62f9000
 2c8c360: f9478400     	ldr	x0, [x0, #0xf08]
 2c8c364: 97f52a9f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c8c368: b001b360     	adrp	x0, 0x62f9000
 2c8c36c: f9478000     	ldr	x0, [x0, #0xf00]
 2c8c370: 97f52a9c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c8c374: 52800028     	mov	w8, #0x1                // =1
 2c8c378: 393f4ee8     	strb	w8, [x23, #0xfd3]
 2c8c37c: f94002c0     	ldr	x0, [x22]
 2c8c380: f90007ff     	str	xzr, [sp, #0x8]
 2c8c384: 97f52b3d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c8c388: f94002a1     	ldr	x1, [x21]
 2c8c38c: aa0003f5     	mov	x21, x0
 2c8c390: 943a708e     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2c8c394: 910023e0     	add	x0, sp, #0x8
 2c8c398: aa1503e1     	mov	x1, x21
 2c8c39c: f90007f5     	str	x21, [sp, #0x8]
 2c8c3a0: 97f52a7b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c8c3a4: f9400a95     	ldr	x21, [x20, #0x10]
 2c8c3a8: b40010f5     	cbz	x21, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c3ac: b001b376     	adrp	x22, 0x62f9000
 2c8c3b0: f94002a8     	ldr	x8, [x21]
 2c8c3b4: f9476ed6     	ldr	x22, [x22, #0xed8]
 2c8c3b8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c8c3bc: f94002c1     	ldr	x1, [x22]
 2c8c3c0: b4000129     	cbz	x9, 0x2c8c3e4 <__start_il2cpp+0x1c3dd0>
 2c8c3c4: f940590a     	ldr	x10, [x8, #0xb0]
 2c8c3c8: 9100214a     	add	x10, x10, #0x8
 2c8c3cc: f85f814b     	ldur	x11, [x10, #-0x8]
 2c8c3d0: eb01017f     	cmp	x11, x1
 2c8c3d4: 54000100     	b.eq	0x2c8c3f4 <__start_il2cpp+0x1c3de0>
 2c8c3d8: f1000529     	subs	x9, x9, #0x1
 2c8c3dc: 9100414a     	add	x10, x10, #0x10
 2c8c3e0: 54ffff61     	b.ne	0x2c8c3cc <__start_il2cpp+0x1c3db8>
 2c8c3e4: aa1503e0     	mov	x0, x21
 2c8c3e8: 52800022     	mov	w2, #0x1                // =1
 2c8c3ec: 97f607de     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c8c3f0: 14000005     	b	0x2c8c404 <__start_il2cpp+0x1c3df0>
 2c8c3f4: b9400149     	ldr	w9, [x10]
 2c8c3f8: 11000529     	add	w9, w9, #0x1
 2c8c3fc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c8c400: 9104e100     	add	x0, x8, #0x138
 2c8c404: a9400408     	ldp	x8, x1, [x0]
 2c8c408: aa1503e0     	mov	x0, x21
 2c8c40c: d63f0100     	blr	x8
 2c8c410: f9400a95     	ldr	x21, [x20, #0x10]
 2c8c414: b4000d95     	cbz	x21, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c418: f94002a8     	ldr	x8, [x21]
 2c8c41c: f94002c1     	ldr	x1, [x22]
 2c8c420: aa0003f4     	mov	x20, x0
 2c8c424: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c8c428: b4000129     	cbz	x9, 0x2c8c44c <__start_il2cpp+0x1c3e38>
 2c8c42c: f940590a     	ldr	x10, [x8, #0xb0]
 2c8c430: 9100214a     	add	x10, x10, #0x8
 2c8c434: f85f814b     	ldur	x11, [x10, #-0x8]
 2c8c438: eb01017f     	cmp	x11, x1
 2c8c43c: 54000100     	b.eq	0x2c8c45c <__start_il2cpp+0x1c3e48>
 2c8c440: f1000529     	subs	x9, x9, #0x1
 2c8c444: 9100414a     	add	x10, x10, #0x10
 2c8c448: 54ffff61     	b.ne	0x2c8c434 <__start_il2cpp+0x1c3e20>
 2c8c44c: aa1503e0     	mov	x0, x21
 2c8c450: 52800082     	mov	w2, #0x4                // =4
 2c8c454: 97f607c4     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c8c458: 14000005     	b	0x2c8c46c <__start_il2cpp+0x1c3e58>
 2c8c45c: b9400149     	ldr	w9, [x10]
 2c8c460: 11001129     	add	w9, w9, #0x4
 2c8c464: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c8c468: 9104e100     	add	x0, x8, #0x138
 2c8c46c: a9400408     	ldp	x8, x1, [x0]
 2c8c470: aa1503e0     	mov	x0, x21
 2c8c474: d63f0100     	blr	x8
 2c8c478: b4000a73     	cbz	x19, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c47c: f9402e68     	ldr	x8, [x19, #0x58]
 2c8c480: b4000a28     	cbz	x8, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c484: 69445d16     	ldpsw	x22, x23, [x8, #0x20]
 2c8c488: aa0003f5     	mov	x21, x0
 2c8c48c: 710006c8     	subs	w8, w22, #0x1
 2c8c490: 54000204     	b.mi	0x2c8c4d0 <__start_il2cpp+0x1c3ebc>
 2c8c494: b4000994     	cbz	x20, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c498: b9401a89     	ldr	w9, [x20, #0x18]
 2c8c49c: 6b09011f     	cmp	w8, w9
 2c8c4a0: 54000942     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c4a4: 8b284e88     	add	x8, x20, w8, uxtw #3
 2c8c4a8: f9401108     	ldr	x8, [x8, #0x20]
 2c8c4ac: b40008c8     	cbz	x8, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c4b0: b9401909     	ldr	w9, [x8, #0x18]
 2c8c4b4: 6b0902ff     	cmp	w23, w9
 2c8c4b8: 54000882     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c4bc: 8b170d08     	add	x8, x8, x23, lsl #3
 2c8c4c0: 910023e2     	add	x2, sp, #0x8
 2c8c4c4: aa1303e0     	mov	x0, x19
 2c8c4c8: f9401101     	ldr	x1, [x8, #0x20]
 2c8c4cc: 94000040     	bl	0x2c8c5cc <__start_il2cpp+0x1c3fb8>
 2c8c4d0: b40007b5     	cbz	x21, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c4d4: b9401aa9     	ldr	w9, [x21, #0x18]
 2c8c4d8: 110006c8     	add	w8, w22, #0x1
 2c8c4dc: 6b09011f     	cmp	w8, w9
 2c8c4e0: 5400020a     	b.ge	0x2c8c520 <__start_il2cpp+0x1c3f0c>
 2c8c4e4: b4000714     	cbz	x20, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c4e8: b9401a89     	ldr	w9, [x20, #0x18]
 2c8c4ec: 6b09011f     	cmp	w8, w9
 2c8c4f0: 540006c2     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c4f4: 8b28ce88     	add	x8, x20, w8, sxtw #3
 2c8c4f8: f9401108     	ldr	x8, [x8, #0x20]
 2c8c4fc: b4000648     	cbz	x8, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c500: b9401909     	ldr	w9, [x8, #0x18]
 2c8c504: 6b0902ff     	cmp	w23, w9
 2c8c508: 54000602     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c50c: 8b170d08     	add	x8, x8, x23, lsl #3
 2c8c510: 910023e2     	add	x2, sp, #0x8
 2c8c514: aa1303e0     	mov	x0, x19
 2c8c518: f9401101     	ldr	x1, [x8, #0x20]
 2c8c51c: 9400002c     	bl	0x2c8c5cc <__start_il2cpp+0x1c3fb8>
 2c8c520: b9401ea9     	ldr	w9, [x21, #0x1c]
 2c8c524: 110006e8     	add	w8, w23, #0x1
 2c8c528: 8b160e95     	add	x21, x20, x22, lsl #3
 2c8c52c: 6b09011f     	cmp	w8, w9
 2c8c530: 540001ea     	b.ge	0x2c8c56c <__start_il2cpp+0x1c3f58>
 2c8c534: b4000494     	cbz	x20, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c538: b9401a89     	ldr	w9, [x20, #0x18]
 2c8c53c: 6b0902df     	cmp	w22, w9
 2c8c540: 54000442     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c544: f94012a9     	ldr	x9, [x21, #0x20]
 2c8c548: b40003e9     	cbz	x9, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c54c: b940192a     	ldr	w10, [x9, #0x18]
 2c8c550: 6b0a011f     	cmp	w8, w10
 2c8c554: 540003a2     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c558: 8b28cd28     	add	x8, x9, w8, sxtw #3
 2c8c55c: 910023e2     	add	x2, sp, #0x8
 2c8c560: aa1303e0     	mov	x0, x19
 2c8c564: f9401101     	ldr	x1, [x8, #0x20]
 2c8c568: 94000019     	bl	0x2c8c5cc <__start_il2cpp+0x1c3fb8>
 2c8c56c: 710006e8     	subs	w8, w23, #0x1
 2c8c570: 540001e4     	b.mi	0x2c8c5ac <__start_il2cpp+0x1c3f98>
 2c8c574: b4000294     	cbz	x20, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c578: b9401a89     	ldr	w9, [x20, #0x18]
 2c8c57c: 6b0902df     	cmp	w22, w9
 2c8c580: 54000242     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c584: f94012a9     	ldr	x9, [x21, #0x20]
 2c8c588: b40001e9     	cbz	x9, 0x2c8c5c4 <__start_il2cpp+0x1c3fb0>
 2c8c58c: b940192a     	ldr	w10, [x9, #0x18]
 2c8c590: 6b0a011f     	cmp	w8, w10
 2c8c594: 540001a2     	b.hs	0x2c8c5c8 <__start_il2cpp+0x1c3fb4>
 2c8c598: 8b284d28     	add	x8, x9, w8, uxtw #3
 2c8c59c: 910023e2     	add	x2, sp, #0x8
 2c8c5a0: aa1303e0     	mov	x0, x19
 2c8c5a4: f9401101     	ldr	x1, [x8, #0x20]
 2c8c5a8: 94000009     	bl	0x2c8c5cc <__start_il2cpp+0x1c3fb8>
 2c8c5ac: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c8c5b0: f94007e0     	ldr	x0, [sp, #0x8]
 2c8c5b4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c8c5b8: a9415ffe     	ldp	x30, x23, [sp, #0x10]
 2c8c5bc: 910103ff     	add	sp, sp, #0x40
 2c8c5c0: d65f03c0     	ret
 2c8c5c4: 97f52ab1     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c8c5c8: 97f52ab2     	bl	0x29d7090 <mono_class_get_checked+0x978>

# LockedBoardSlotChecker :: System.Void <GetSameIdNeighbours>g__AddSameLockedNeighbour|1_0(BaseItem item, BoardSlot slot, ref LockedBoardSlotChecker+<>c__DisplayClass1_0 param_2)
# VA 0x2c8c5cc .. 0x2c8c6c8 (next mapped method entry)
 2c8c5cc: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c8c5d0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c8c5d4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c8c5d8: d001d436     	adrp	x22, 0x6712000
 2c8c5dc: aa0203f3     	mov	x19, x2
 2c8c5e0: aa0103f5     	mov	x21, x1
 2c8c5e4: 397f52c8     	ldrb	w8, [x22, #0xfd4]
 2c8c5e8: aa0003f4     	mov	x20, x0
 2c8c5ec: 370000c8     	tbnz	w8, #0x0, 0x2c8c604 <__start_il2cpp+0x1c3ff0>
 2c8c5f0: b001b360     	adrp	x0, 0x62f9000
 2c8c5f4: f9477400     	ldr	x0, [x0, #0xee8]
 2c8c5f8: 97f529fa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c8c5fc: 52800028     	mov	w8, #0x1                // =1
 2c8c600: 393f52c8     	strb	w8, [x22, #0xfd4]
 2c8c604: b4000615     	cbz	x21, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c608: 3940b6a8     	ldrb	w8, [x21, #0x2d]
 2c8c60c: 34000448     	cbz	w8, 0x2c8c694 <__start_il2cpp+0x1c4080>
 2c8c610: f9401aa1     	ldr	x1, [x21, #0x30]
 2c8c614: b4000581     	cbz	x1, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c618: f9402828     	ldr	x8, [x1, #0x50]
 2c8c61c: b4000548     	cbz	x8, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c620: b4000534     	cbz	x20, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c624: f9402a89     	ldr	x9, [x20, #0x50]
 2c8c628: b40004e9     	cbz	x9, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c62c: b9403108     	ldr	w8, [x8, #0x30]
 2c8c630: b9403129     	ldr	w9, [x9, #0x30]
 2c8c634: 6b09011f     	cmp	w8, w9
 2c8c638: 540002e1     	b.ne	0x2c8c694 <__start_il2cpp+0x1c4080>
 2c8c63c: f9400268     	ldr	x8, [x19]
 2c8c640: b4000428     	cbz	x8, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c644: b001b36a     	adrp	x10, 0x62f9000
 2c8c648: f947754a     	ldr	x10, [x10, #0xee8]
 2c8c64c: b9401d0b     	ldr	w11, [x8, #0x1c]
 2c8c650: f9400909     	ldr	x9, [x8, #0x10]
 2c8c654: f940014a     	ldr	x10, [x10]
 2c8c658: 1100056b     	add	w11, w11, #0x1
 2c8c65c: b9001d0b     	str	w11, [x8, #0x1c]
 2c8c660: b4000329     	cbz	x9, 0x2c8c6c4 <__start_il2cpp+0x1c40b0>
 2c8c664: b980190b     	ldrsw	x11, [x8, #0x18]
 2c8c668: b940192c     	ldr	w12, [x9, #0x18]
 2c8c66c: 6b0c017f     	cmp	w11, w12
 2c8c670: 540001a2     	b.hs	0x2c8c6a4 <__start_il2cpp+0x1c4090>
 2c8c674: 8b0b0d20     	add	x0, x9, x11, lsl #3
 2c8c678: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c8c67c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c8c680: 11000569     	add	w9, w11, #0x1
 2c8c684: f8020c01     	str	x1, [x0, #0x20]!
 2c8c688: b9001909     	str	w9, [x8, #0x18]
 2c8c68c: f84307fe     	ldr	x30, [sp], #0x30
 2c8c690: 17f529bf     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2c8c694: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c8c698: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c8c69c: f84307fe     	ldr	x30, [sp], #0x30
 2c8c6a0: d65f03c0     	ret
 2c8c6a4: f9401149     	ldr	x9, [x10, #0x20]
 2c8c6a8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c8c6ac: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c8c6b0: aa0803e0     	mov	x0, x8
 2c8c6b4: f9406129     	ldr	x9, [x9, #0xc0]
 2c8c6b8: f9403922     	ldr	x2, [x9, #0x70]
 2c8c6bc: f84307fe     	ldr	x30, [sp], #0x30
 2c8c6c0: 143a71dc     	b	0x3b28e30 <__start_il2cpp+0x106081c>
 2c8c6c4: 97f52a71     	bl	0x29d7088 <mono_class_get_checked+0x970>

# LockedBoardSlotChecker :: System.Void .ctor()
# VA 0x2c8c6c8 .. 0x2c8c6d0 (next mapped method entry)
 2c8c6c8: aa1f03e1     	mov	x1, xzr
 2c8c6cc: 14930d1f     	b	0x514fb48 <__start_il2cpp+0x2687534>
