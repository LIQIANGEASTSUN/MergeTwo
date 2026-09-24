
# BoardController+__Initialize_g__SaveBoardRepeatedly_32_5_d :: System.Void MoveNext()
# VA 0x2baa144 .. 0x2baa834 (next mapped method entry)
 2baa144: d10283ff     	sub	sp, sp, #0xa0
 2baa148: f90023fe     	str	x30, [sp, #0x40]
 2baa14c: a9056ffc     	stp	x28, x27, [sp, #0x50]
 2baa150: a90667fa     	stp	x26, x25, [sp, #0x60]
 2baa154: a9075ff8     	stp	x24, x23, [sp, #0x70]
 2baa158: a90857f6     	stp	x22, x21, [sp, #0x80]
 2baa15c: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2baa160: 9001db54     	adrp	x20, 0x6712000
 2baa164: aa0003f3     	mov	x19, x0
 2baa168: 39647688     	ldrb	w8, [x20, #0x91d]
 2baa16c: 370002a8     	tbnz	w8, #0x0, 0x2baa1c0 <__start_il2cpp+0xe1bac>
 2baa170: 9001ba80     	adrp	x0, 0x62fa000
 2baa174: f9429400     	ldr	x0, [x0, #0x528]
 2baa178: 97f8b31a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa17c: 9001ba60     	adrp	x0, 0x62f6000
 2baa180: f9439800     	ldr	x0, [x0, #0x730]
 2baa184: 97f8b317     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa188: 9001ba60     	adrp	x0, 0x62f6000
 2baa18c: f9439c00     	ldr	x0, [x0, #0x738]
 2baa190: 97f8b314     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa194: d001ba40     	adrp	x0, 0x62f4000
 2baa198: f9428800     	ldr	x0, [x0, #0x510]
 2baa19c: 97f8b311     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa1a0: 9001ba60     	adrp	x0, 0x62f6000
 2baa1a4: f943a000     	ldr	x0, [x0, #0x740]
 2baa1a8: 97f8b30e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa1ac: b001ba40     	adrp	x0, 0x62f3000
 2baa1b0: f9467000     	ldr	x0, [x0, #0xce0]
 2baa1b4: 97f8b30b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa1b8: 52800028     	mov	w8, #0x1                // =1
 2baa1bc: 39247688     	strb	w8, [x20, #0x91d]
 2baa1c0: 9001ba77     	adrp	x23, 0x62f6000
 2baa1c4: b001ba58     	adrp	x24, 0x62f3000
 2baa1c8: 9001ba79     	adrp	x25, 0x62f6000
 2baa1cc: f9439af7     	ldr	x23, [x23, #0x730]
 2baa1d0: f9467318     	ldr	x24, [x24, #0xce0]
 2baa1d4: f90017ff     	str	xzr, [sp, #0x28]
 2baa1d8: f943a339     	ldr	x25, [x25, #0x740]
 2baa1dc: f90013ff     	str	xzr, [sp, #0x20]
 2baa1e0: 9001ba7a     	adrp	x26, 0x62f6000
 2baa1e4: f9439f5a     	ldr	x26, [x26, #0x738]
 2baa1e8: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2baa1ec: b001ba5b     	adrp	x27, 0x62f3000
 2baa1f0: b9400268     	ldr	w8, [x19]
 2baa1f4: f9401674     	ldr	x20, [x19, #0x28]
 2baa1f8: f947e37b     	ldr	x27, [x27, #0xfc0]
 2baa1fc: 9001db5c     	adrp	x28, 0x6712000
 2baa200: b9000bff     	str	wzr, [sp, #0x8]
 2baa204: 34000128     	cbz	w8, 0x2baa228 <__start_il2cpp+0xe1c14>
 2baa208: 7100051f     	cmp	w8, #0x1
 2baa20c: 540001a1     	b.ne	0x2baa240 <__start_il2cpp+0xe1c2c>
 2baa210: 3dc00e60     	ldr	q0, [x19, #0x30]
 2baa214: 12800008     	mov	w8, #-0x1               // =-1
 2baa218: a9037e7f     	stp	xzr, xzr, [x19, #0x30]
 2baa21c: b9000268     	str	w8, [x19]
 2baa220: 3d800be0     	str	q0, [sp, #0x20]
 2baa224: 140000fe     	b	0x2baa61c <__start_il2cpp+0xe2008>
 2baa228: 3dc00e60     	ldr	q0, [x19, #0x30]
 2baa22c: 12800008     	mov	w8, #-0x1               // =-1
 2baa230: a9037e7f     	stp	xzr, xzr, [x19, #0x30]
 2baa234: b9000268     	str	w8, [x19]
 2baa238: 3d800be0     	str	q0, [sp, #0x20]
 2baa23c: 1400005b     	b	0x2baa3a8 <__start_il2cpp+0xe1d94>
 2baa240: b4001374     	cbz	x20, 0x2baa4ac <__start_il2cpp+0xe1e98>
 2baa244: aa1403f5     	mov	x21, x20
 2baa248: f84d0ea0     	ldr	x0, [x21, #0xd0]!
 2baa24c: b4000060     	cbz	x0, 0x2baa258 <__start_il2cpp+0xe1c44>
 2baa250: aa1f03e1     	mov	x1, xzr
 2baa254: 949725fb     	bl	0x5173a40 <__start_il2cpp+0x26ab42c>
 2baa258: d001ba48     	adrp	x8, 0x62f4000
 2baa25c: f9428908     	ldr	x8, [x8, #0x510]
 2baa260: f9400100     	ldr	x0, [x8]
 2baa264: 97f8b385     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2baa268: aa1f03e1     	mov	x1, xzr
 2baa26c: aa0003f6     	mov	x22, x0
 2baa270: 94972557     	bl	0x51737cc <__start_il2cpp+0x26ab1b8>
 2baa274: f90002b6     	str	x22, [x21]
 2baa278: aa1503e0     	mov	x0, x21
 2baa27c: aa1603e1     	mov	x1, x22
 2baa280: 97f8b2c3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2baa284: f94002a0     	ldr	x0, [x21]
 2baa288: b4001140     	cbz	x0, 0x2baa4b0 <__start_il2cpp+0xe1e9c>
 2baa28c: aa1f03e1     	mov	x1, xzr
 2baa290: 94972526     	bl	0x5173728 <__start_il2cpp+0x26ab114>
 2baa294: aa0003f5     	mov	x21, x0
 2baa298: f9400300     	ldr	x0, [x24]
 2baa29c: b940e408     	ldr	w8, [x0, #0xe4]
 2baa2a0: 35000048     	cbnz	w8, 0x2baa2a8 <__start_il2cpp+0xe1c94>
 2baa2a4: 97f8b32e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2baa2a8: 52827100     	mov	w0, #0x1388             // =5000
 2baa2ac: 2a1f03e1     	mov	w1, wzr
 2baa2b0: 52800102     	mov	w2, #0x8                // =8
 2baa2b4: aa1503e3     	mov	x3, x21
 2baa2b8: 2a1f03e4     	mov	w4, wzr
 2baa2bc: aa1f03e5     	mov	x5, xzr
 2baa2c0: 94b64d5d     	bl	0x593d834 <__start_il2cpp+0x2e75220>
 2baa2c4: a90107e0     	stp	x0, x1, [sp, #0x10]
 2baa2c8: 910043e0     	add	x0, sp, #0x10
 2baa2cc: aa1f03e1     	mov	x1, xzr
 2baa2d0: 94b64b1f     	bl	0x593cf4c <__start_il2cpp+0x2e74938>
 2baa2d4: f9400328     	ldr	x8, [x25]
 2baa2d8: aa0003f5     	mov	x21, x0
 2baa2dc: aa0103f6     	mov	x22, x1
 2baa2e0: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2baa2e4: f9401100     	ldr	x0, [x8, #0x20]
 2baa2e8: 3944d408     	ldrb	w8, [x0, #0x135]
 2baa2ec: 37000048     	tbnz	w8, #0x0, 0x2baa2f4 <__start_il2cpp+0xe1ce0>
 2baa2f0: 97f98f4e     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa2f4: a9035bf5     	stp	x21, x22, [sp, #0x30]
 2baa2f8: 9100c3e0     	add	x0, sp, #0x30
 2baa2fc: aa1f03e1     	mov	x1, xzr
 2baa300: 97f8b2a3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2baa304: f9400348     	ldr	x8, [x26]
 2baa308: 3dc00fe0     	ldr	q0, [sp, #0x30]
 2baa30c: f9401100     	ldr	x0, [x8, #0x20]
 2baa310: 3d800be0     	str	q0, [sp, #0x20]
 2baa314: 3944d408     	ldrb	w8, [x0, #0x135]
 2baa318: 37000048     	tbnz	w8, #0x0, 0x2baa320 <__start_il2cpp+0xe1d0c>
 2baa31c: 97f98f43     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa320: 395c3f88     	ldrb	w8, [x28, #0x70f]
 2baa324: 350000c8     	cbnz	w8, 0x2baa33c <__start_il2cpp+0xe1d28>
 2baa328: b001ba40     	adrp	x0, 0x62f3000
 2baa32c: f947e000     	ldr	x0, [x0, #0xfc0]
 2baa330: 97f8b2ac     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa334: 52800028     	mov	w8, #0x1                // =1
 2baa338: 391c3f88     	strb	w8, [x28, #0x70f]
 2baa33c: f94013f5     	ldr	x21, [sp, #0x20]
 2baa340: b4000855     	cbz	x21, 0x2baa448 <__start_il2cpp+0xe1e34>
 2baa344: f94002a8     	ldr	x8, [x21]
 2baa348: 794057f6     	ldrh	w22, [sp, #0x2a]
 2baa34c: f9400361     	ldr	x1, [x27]
 2baa350: 79425d09     	ldrh	w9, [x8, #0x12e]
 2baa354: b4000129     	cbz	x9, 0x2baa378 <__start_il2cpp+0xe1d64>
 2baa358: f940590a     	ldr	x10, [x8, #0xb0]
 2baa35c: 9100214a     	add	x10, x10, #0x8
 2baa360: f85f814b     	ldur	x11, [x10, #-0x8]
 2baa364: eb01017f     	cmp	x11, x1
 2baa368: 54000100     	b.eq	0x2baa388 <__start_il2cpp+0xe1d74>
 2baa36c: f1000529     	subs	x9, x9, #0x1
 2baa370: 9100414a     	add	x10, x10, #0x10
 2baa374: 54ffff61     	b.ne	0x2baa360 <__start_il2cpp+0xe1d4c>
 2baa378: aa1503e0     	mov	x0, x21
 2baa37c: 2a1f03e2     	mov	w2, wzr
 2baa380: 97f98ff9     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2baa384: 14000004     	b	0x2baa394 <__start_il2cpp+0xe1d80>
 2baa388: b9800149     	ldrsw	x9, [x10]
 2baa38c: 8b091108     	add	x8, x8, x9, lsl #4
 2baa390: 9104e100     	add	x0, x8, #0x138
 2baa394: a9400808     	ldp	x8, x2, [x0]
 2baa398: aa1503e0     	mov	x0, x21
 2baa39c: 2a1603e1     	mov	w1, w22
 2baa3a0: d63f0100     	blr	x8
 2baa3a4: 34000640     	cbz	w0, 0x2baa46c <__start_il2cpp+0xe1e58>
 2baa3a8: f94013f5     	ldr	x21, [sp, #0x20]
 2baa3ac: b40004d5     	cbz	x21, 0x2baa444 <__start_il2cpp+0xe1e30>
 2baa3b0: f94002e8     	ldr	x8, [x23]
 2baa3b4: 794057f6     	ldrh	w22, [sp, #0x2a]
 2baa3b8: f9401100     	ldr	x0, [x8, #0x20]
 2baa3bc: 9104d408     	add	x8, x0, #0x135
 2baa3c0: 79400108     	ldrh	w8, [x8]
 2baa3c4: 37000048     	tbnz	w8, #0x0, 0x2baa3cc <__start_il2cpp+0xe1db8>
 2baa3c8: 97f98f18     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa3cc: f9406008     	ldr	x8, [x0, #0xc0]
 2baa3d0: f9401501     	ldr	x1, [x8, #0x28]
 2baa3d4: 9104d428     	add	x8, x1, #0x135
 2baa3d8: 79400108     	ldrh	w8, [x8]
 2baa3dc: 37000088     	tbnz	w8, #0x0, 0x2baa3ec <__start_il2cpp+0xe1dd8>
 2baa3e0: aa0103e0     	mov	x0, x1
 2baa3e4: 97f98f11     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa3e8: aa0003e1     	mov	x1, x0
 2baa3ec: f94002a8     	ldr	x8, [x21]
 2baa3f0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2baa3f4: b4000129     	cbz	x9, 0x2baa418 <__start_il2cpp+0xe1e04>
 2baa3f8: f940590a     	ldr	x10, [x8, #0xb0]
 2baa3fc: 9100214a     	add	x10, x10, #0x8
 2baa400: f85f814b     	ldur	x11, [x10, #-0x8]
 2baa404: eb01017f     	cmp	x11, x1
 2baa408: 54000100     	b.eq	0x2baa428 <__start_il2cpp+0xe1e14>
 2baa40c: f1000529     	subs	x9, x9, #0x1
 2baa410: 9100414a     	add	x10, x10, #0x10
 2baa414: 54ffff61     	b.ne	0x2baa400 <__start_il2cpp+0xe1dec>
 2baa418: aa1503e0     	mov	x0, x21
 2baa41c: 2a1f03e2     	mov	w2, wzr
 2baa420: 97f98fd1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2baa424: 14000004     	b	0x2baa434 <__start_il2cpp+0xe1e20>
 2baa428: b9800149     	ldrsw	x9, [x10]
 2baa42c: 8b091108     	add	x8, x8, x9, lsl #4
 2baa430: 9104e100     	add	x0, x8, #0x138
 2baa434: a9400808     	ldp	x8, x2, [x0]
 2baa438: aa1503e0     	mov	x0, x21
 2baa43c: 2a1603e1     	mov	w1, w22
 2baa440: d63f0100     	blr	x8
 2baa444: b4000334     	cbz	x20, 0x2baa4a8 <__start_il2cpp+0xe1e94>
 2baa448: f9406a80     	ldr	x0, [x20, #0xd0]
 2baa44c: b40002c0     	cbz	x0, 0x2baa4a4 <__start_il2cpp+0xe1e90>
 2baa450: aa1f03e1     	mov	x1, xzr
 2baa454: 94971b65     	bl	0x51711e8 <__start_il2cpp+0x26a8bd4>
 2baa458: 37001440     	tbnz	w0, #0x0, 0x2baa6e0 <__start_il2cpp+0xe20cc>
 2baa45c: aa1403e0     	mov	x0, x20
 2baa460: 2a1f03e1     	mov	w1, wzr
 2baa464: 97fff820     	bl	0x2ba84e4 <__start_il2cpp+0xdfed0>
 2baa468: 14000024     	b	0x2baa4f8 <__start_il2cpp+0xe1ee4>
 2baa46c: 3dc00be0     	ldr	q0, [sp, #0x20]
 2baa470: b900027f     	str	wzr, [x19]
 2baa474: 3d800e60     	str	q0, [x19, #0x30]
 2baa478: 9100c260     	add	x0, x19, #0x30
 2baa47c: aa1f03e1     	mov	x1, xzr
 2baa480: 97f8b243     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2baa484: 9001ba88     	adrp	x8, 0x62fa000
 2baa488: f9429508     	ldr	x8, [x8, #0x528]
 2baa48c: f9400103     	ldr	x3, [x8]
 2baa490: 91002260     	add	x0, x19, #0x8
 2baa494: 910083e1     	add	x1, sp, #0x20
 2baa498: aa1303e2     	mov	x2, x19
 2baa49c: 941d7608     	bl	0x3307cbc <__start_il2cpp+0x83f6a8>
 2baa4a0: 140000a4     	b	0x2baa730 <__start_il2cpp+0xe211c>
 2baa4a4: 97f8b2f9     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa4a8: 97f8b2f8     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa4ac: 97f8b2f7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa4b0: 97f8b2f6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa4b4: 140000b7     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4b8: 140000b6     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4bc: 140000b5     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4c0: 140000b4     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4c4: 140000b3     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4c8: 140000b2     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4cc: 140000b1     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4d0: 140000b0     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4d4: 140000af     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4d8: 140000ae     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4dc: 140000ad     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4e0: 140000ac     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4e4: 140000ab     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4e8: 140000aa     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4ec: 140000a9     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4f0: 140000a8     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4f4: 140000a7     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa4f8: f9406a80     	ldr	x0, [x20, #0xd0]
 2baa4fc: b40012c0     	cbz	x0, 0x2baa754 <__start_il2cpp+0xe2140>
 2baa500: aa1f03e1     	mov	x1, xzr
 2baa504: 94972489     	bl	0x5173728 <__start_il2cpp+0x26ab114>
 2baa508: aa0003f5     	mov	x21, x0
 2baa50c: f9400300     	ldr	x0, [x24]
 2baa510: b940e408     	ldr	w8, [x0, #0xe4]
 2baa514: 35000048     	cbnz	w8, 0x2baa51c <__start_il2cpp+0xe1f08>
 2baa518: 97f8b291     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2baa51c: 5289c400     	mov	w0, #0x4e20             // =20000
 2baa520: 2a1f03e1     	mov	w1, wzr
 2baa524: 52800102     	mov	w2, #0x8                // =8
 2baa528: aa1503e3     	mov	x3, x21
 2baa52c: 2a1f03e4     	mov	w4, wzr
 2baa530: aa1f03e5     	mov	x5, xzr
 2baa534: 94b64cc0     	bl	0x593d834 <__start_il2cpp+0x2e75220>
 2baa538: a90107e0     	stp	x0, x1, [sp, #0x10]
 2baa53c: 910043e0     	add	x0, sp, #0x10
 2baa540: aa1f03e1     	mov	x1, xzr
 2baa544: 94b64a82     	bl	0x593cf4c <__start_il2cpp+0x2e74938>
 2baa548: f9400328     	ldr	x8, [x25]
 2baa54c: aa0003f5     	mov	x21, x0
 2baa550: aa0103f6     	mov	x22, x1
 2baa554: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2baa558: f9401100     	ldr	x0, [x8, #0x20]
 2baa55c: 3944d408     	ldrb	w8, [x0, #0x135]
 2baa560: 37000048     	tbnz	w8, #0x0, 0x2baa568 <__start_il2cpp+0xe1f54>
 2baa564: 97f98eb1     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa568: a9035bf5     	stp	x21, x22, [sp, #0x30]
 2baa56c: 9100c3e0     	add	x0, sp, #0x30
 2baa570: aa1f03e1     	mov	x1, xzr
 2baa574: 97f8b206     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2baa578: f9400348     	ldr	x8, [x26]
 2baa57c: 3dc00fe0     	ldr	q0, [sp, #0x30]
 2baa580: f9401100     	ldr	x0, [x8, #0x20]
 2baa584: 3d800be0     	str	q0, [sp, #0x20]
 2baa588: 3944d408     	ldrb	w8, [x0, #0x135]
 2baa58c: 37000048     	tbnz	w8, #0x0, 0x2baa594 <__start_il2cpp+0xe1f80>
 2baa590: 97f98ea6     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa594: 395c3f88     	ldrb	w8, [x28, #0x70f]
 2baa598: 350000c8     	cbnz	w8, 0x2baa5b0 <__start_il2cpp+0xe1f9c>
 2baa59c: b001ba40     	adrp	x0, 0x62f3000
 2baa5a0: f947e000     	ldr	x0, [x0, #0xfc0]
 2baa5a4: 97f8b20f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2baa5a8: 52800028     	mov	w8, #0x1                // =1
 2baa5ac: 391c3f88     	strb	w8, [x28, #0x70f]
 2baa5b0: f94013f5     	ldr	x21, [sp, #0x20]
 2baa5b4: b4000855     	cbz	x21, 0x2baa6bc <__start_il2cpp+0xe20a8>
 2baa5b8: f94002a8     	ldr	x8, [x21]
 2baa5bc: 794057f6     	ldrh	w22, [sp, #0x2a]
 2baa5c0: f9400361     	ldr	x1, [x27]
 2baa5c4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2baa5c8: b4000129     	cbz	x9, 0x2baa5ec <__start_il2cpp+0xe1fd8>
 2baa5cc: f940590a     	ldr	x10, [x8, #0xb0]
 2baa5d0: 9100214a     	add	x10, x10, #0x8
 2baa5d4: f85f814b     	ldur	x11, [x10, #-0x8]
 2baa5d8: eb01017f     	cmp	x11, x1
 2baa5dc: 54000100     	b.eq	0x2baa5fc <__start_il2cpp+0xe1fe8>
 2baa5e0: f1000529     	subs	x9, x9, #0x1
 2baa5e4: 9100414a     	add	x10, x10, #0x10
 2baa5e8: 54ffff61     	b.ne	0x2baa5d4 <__start_il2cpp+0xe1fc0>
 2baa5ec: aa1503e0     	mov	x0, x21
 2baa5f0: 2a1f03e2     	mov	w2, wzr
 2baa5f4: 97f98f5c     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2baa5f8: 14000004     	b	0x2baa608 <__start_il2cpp+0xe1ff4>
 2baa5fc: b9800149     	ldrsw	x9, [x10]
 2baa600: 8b091108     	add	x8, x8, x9, lsl #4
 2baa604: 9104e100     	add	x0, x8, #0x138
 2baa608: a9400808     	ldp	x8, x2, [x0]
 2baa60c: aa1503e0     	mov	x0, x21
 2baa610: 2a1603e1     	mov	w1, w22
 2baa614: d63f0100     	blr	x8
 2baa618: 34000700     	cbz	w0, 0x2baa6f8 <__start_il2cpp+0xe20e4>
 2baa61c: f94013f5     	ldr	x21, [sp, #0x20]
 2baa620: b40004d5     	cbz	x21, 0x2baa6b8 <__start_il2cpp+0xe20a4>
 2baa624: f94002e8     	ldr	x8, [x23]
 2baa628: 794057f6     	ldrh	w22, [sp, #0x2a]
 2baa62c: f9401100     	ldr	x0, [x8, #0x20]
 2baa630: 9104d408     	add	x8, x0, #0x135
 2baa634: 79400108     	ldrh	w8, [x8]
 2baa638: 37000048     	tbnz	w8, #0x0, 0x2baa640 <__start_il2cpp+0xe202c>
 2baa63c: 97f98e7b     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa640: f9406008     	ldr	x8, [x0, #0xc0]
 2baa644: f9401501     	ldr	x1, [x8, #0x28]
 2baa648: 9104d428     	add	x8, x1, #0x135
 2baa64c: 79400108     	ldrh	w8, [x8]
 2baa650: 37000088     	tbnz	w8, #0x0, 0x2baa660 <__start_il2cpp+0xe204c>
 2baa654: aa0103e0     	mov	x0, x1
 2baa658: 97f98e74     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2baa65c: aa0003e1     	mov	x1, x0
 2baa660: f94002a8     	ldr	x8, [x21]
 2baa664: 79425d09     	ldrh	w9, [x8, #0x12e]
 2baa668: b4000129     	cbz	x9, 0x2baa68c <__start_il2cpp+0xe2078>
 2baa66c: f940590a     	ldr	x10, [x8, #0xb0]
 2baa670: 9100214a     	add	x10, x10, #0x8
 2baa674: f85f814b     	ldur	x11, [x10, #-0x8]
 2baa678: eb01017f     	cmp	x11, x1
 2baa67c: 54000100     	b.eq	0x2baa69c <__start_il2cpp+0xe2088>
 2baa680: f1000529     	subs	x9, x9, #0x1
 2baa684: 9100414a     	add	x10, x10, #0x10
 2baa688: 54ffff61     	b.ne	0x2baa674 <__start_il2cpp+0xe2060>
 2baa68c: aa1503e0     	mov	x0, x21
 2baa690: 2a1f03e2     	mov	w2, wzr
 2baa694: 97f98f34     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2baa698: 14000004     	b	0x2baa6a8 <__start_il2cpp+0xe2094>
 2baa69c: b9800149     	ldrsw	x9, [x10]
 2baa6a0: 8b091108     	add	x8, x8, x9, lsl #4
 2baa6a4: 9104e100     	add	x0, x8, #0x138
 2baa6a8: a9400808     	ldp	x8, x2, [x0]
 2baa6ac: aa1503e0     	mov	x0, x21
 2baa6b0: 2a1603e1     	mov	w1, w22
 2baa6b4: d63f0100     	blr	x8
 2baa6b8: b4000514     	cbz	x20, 0x2baa758 <__start_il2cpp+0xe2144>
 2baa6bc: f9406a80     	ldr	x0, [x20, #0xd0]
 2baa6c0: b4000480     	cbz	x0, 0x2baa750 <__start_il2cpp+0xe213c>
 2baa6c4: aa1f03e1     	mov	x1, xzr
 2baa6c8: 94971ac8     	bl	0x51711e8 <__start_il2cpp+0x26a8bd4>
 2baa6cc: 370000a0     	tbnz	w0, #0x0, 0x2baa6e0 <__start_il2cpp+0xe20cc>
 2baa6d0: aa1403e0     	mov	x0, x20
 2baa6d4: 2a1f03e1     	mov	w1, wzr
 2baa6d8: 97fff783     	bl	0x2ba84e4 <__start_il2cpp+0xdfed0>
 2baa6dc: 17ffff87     	b	0x2baa4f8 <__start_il2cpp+0xe1ee4>
 2baa6e0: 12800028     	mov	w8, #-0x2               // =-2
 2baa6e4: aa1f03e1     	mov	x1, xzr
 2baa6e8: b8008668     	str	w8, [x19], #0x8
 2baa6ec: aa1303e0     	mov	x0, x19
 2baa6f0: 9491bfcb     	bl	0x501a61c <__start_il2cpp+0x2552008>
 2baa6f4: 1400000f     	b	0x2baa730 <__start_il2cpp+0xe211c>
 2baa6f8: 3dc00be0     	ldr	q0, [sp, #0x20]
 2baa6fc: 52800028     	mov	w8, #0x1                // =1
 2baa700: b9000268     	str	w8, [x19]
 2baa704: 3d800e60     	str	q0, [x19, #0x30]
 2baa708: 9100c260     	add	x0, x19, #0x30
 2baa70c: aa1f03e1     	mov	x1, xzr
 2baa710: 97f8b19f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2baa714: 9001ba88     	adrp	x8, 0x62fa000
 2baa718: f9429508     	ldr	x8, [x8, #0x528]
 2baa71c: f9400103     	ldr	x3, [x8]
 2baa720: 91002260     	add	x0, x19, #0x8
 2baa724: 910083e1     	add	x1, sp, #0x20
 2baa728: aa1303e2     	mov	x2, x19
 2baa72c: 941d7564     	bl	0x3307cbc <__start_il2cpp+0x83f6a8>
 2baa730: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2baa734: f94023fe     	ldr	x30, [sp, #0x40]
 2baa738: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2baa73c: a9475ff8     	ldp	x24, x23, [sp, #0x70]
 2baa740: a94667fa     	ldp	x26, x25, [sp, #0x60]
 2baa744: a9456ffc     	ldp	x28, x27, [sp, #0x50]
 2baa748: 910283ff     	add	sp, sp, #0xa0
 2baa74c: d65f03c0     	ret
 2baa750: 97f8b24e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa754: 97f8b24d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa758: 97f8b24c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2baa75c: 1400000d     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa760: 1400000c     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa764: 1400000b     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa768: 1400000a     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa76c: 14000009     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa770: 14000008     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa774: 14000007     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa778: 14000006     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa77c: 14000005     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa780: 14000004     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa784: 14000003     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa788: 14000002     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa78c: 14000001     	b	0x2baa790 <__start_il2cpp+0xe217c>
 2baa790: aa0003f4     	mov	x20, x0
 2baa794: 7100043f     	cmp	w1, #0x1
 2baa798: 54000481     	b.ne	0x2baa828 <__start_il2cpp+0xe2214>
 2baa79c: aa1403e0     	mov	x0, x20
 2baa7a0: 94cdefe8     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2baa7a4: aa0003f4     	mov	x20, x0
 2baa7a8: d001ba20     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2baa7ac: f946f000     	ldr	x0, [x0, #0xde0]
 2baa7b0: 97f8b191     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2baa7b4: f9400288     	ldr	x8, [x20]
 2baa7b8: f9400101     	ldr	x1, [x8]
 2baa7bc: 97f8b335     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2baa7c0: 36000200     	tbz	w0, #0x0, 0x2baa800 <__start_il2cpp+0xe21ec>
 2baa7c4: b9800bf5     	ldrsw	x21, [sp, #0x8]
 2baa7c8: f9400294     	ldr	x20, [x20]
 2baa7cc: 910003e8     	mov	x8, sp
 2baa7d0: f8357914     	str	x20, [x8, x21, lsl #3]
 2baa7d4: 110006a8     	add	w8, w21, #0x1
 2baa7d8: b9000be8     	str	w8, [sp, #0x8]
 2baa7dc: 94cdefdd     	bl	0x5f26750 <__cxa_end_catch@plt>
 2baa7e0: 12800028     	mov	w8, #-0x2               // =-2
 2baa7e4: aa1403e1     	mov	x1, x20
 2baa7e8: aa1f03e2     	mov	x2, xzr
 2baa7ec: b8008668     	str	w8, [x19], #0x8
 2baa7f0: aa1303e0     	mov	x0, x19
 2baa7f4: 9491bfe6     	bl	0x501a78c <__start_il2cpp+0x2552178>
 2baa7f8: b9000bf5     	str	w21, [sp, #0x8]
 2baa7fc: 17ffffcd     	b	0x2baa730 <__start_il2cpp+0xe211c>
 2baa800: 52800100     	mov	w0, #0x8                // =8
 2baa804: 94cdefef     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2baa808: f9400288     	ldr	x8, [x20]
 2baa80c: f9000008     	str	x8, [x0]
 2baa810: d0019c01     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2baa814: 91302021     	add	x1, x1, #0xc08
 2baa818: aa1f03e2     	mov	x2, xzr
 2baa81c: 94cdefed     	bl	0x5f267d0 <__cxa_throw@plt>
 2baa820: aa0003f4     	mov	x20, x0
 2baa824: 94cdefcb     	bl	0x5f26750 <__cxa_end_catch@plt>
 2baa828: aa1403e0     	mov	x0, x20
 2baa82c: 97fc67ac     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2baa830: 97ebec87     	bl	0x26a5a4c <.text+0x8ec>

# BoardController+__Initialize_g__SaveBoardRepeatedly_32_5_d :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2baa834 .. 0x2baa840 (next mapped method entry)
 2baa834: 91002000     	add	x0, x0, #0x8
 2baa838: aa1f03e2     	mov	x2, xzr
 2baa83c: 1491bf47     	b	0x501a558 <__start_il2cpp+0x2551f44>
