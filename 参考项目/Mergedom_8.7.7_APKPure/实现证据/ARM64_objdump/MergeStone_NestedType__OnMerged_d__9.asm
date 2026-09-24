
# MergeStone+_OnMerged_d__9 :: System.Void MoveNext()
# VA 0x2c08760 .. 0x2c091f8 (next mapped method entry)
 2c08760: d10283ff     	sub	sp, sp, #0xa0
 2c08764: f9003bfe     	str	x30, [sp, #0x70]
 2c08768: a90857f6     	stp	x22, x21, [sp, #0x80]
 2c0876c: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2c08770: d001d854     	adrp	x20, 0x6712000
 2c08774: aa0003f3     	mov	x19, x0
 2c08778: 396f1e88     	ldrb	w8, [x20, #0xbc7]
 2c0877c: 370004e8     	tbnz	w8, #0x0, 0x2c08818 <__start_il2cpp+0x140204>
 2c08780: 9001b7a0     	adrp	x0, 0x62fc000
 2c08784: f947e400     	ldr	x0, [x0, #0xfc8]
 2c08788: 97f73996     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0878c: 9001b7a0     	adrp	x0, 0x62fc000
 2c08790: f942f000     	ldr	x0, [x0, #0x5e0]
 2c08794: 97f73993     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08798: 9001b7a0     	adrp	x0, 0x62fc000
 2c0879c: f942f400     	ldr	x0, [x0, #0x5e8]
 2c087a0: 97f73990     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087a4: 9001b7a0     	adrp	x0, 0x62fc000
 2c087a8: f942f800     	ldr	x0, [x0, #0x5f0]
 2c087ac: 97f7398d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087b0: f001b740     	adrp	x0, 0x62f3000
 2c087b4: f9479000     	ldr	x0, [x0, #0xf20]
 2c087b8: 97f7398a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087bc: d001b780     	adrp	x0, 0x62fa000
 2c087c0: f9405000     	ldr	x0, [x0, #0xa0]
 2c087c4: 97f73987     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087c8: d001b760     	adrp	x0, 0x62f6000
 2c087cc: f9400c00     	ldr	x0, [x0, #0x18]
 2c087d0: 97f73984     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087d4: 9001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c087d8: f9478c00     	ldr	x0, [x0, #0xf18]
 2c087dc: 97f73981     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087e0: 9001b7a0     	adrp	x0, 0x62fc000
 2c087e4: f942fc00     	ldr	x0, [x0, #0x5f8]
 2c087e8: 97f7397e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087ec: 9001b7a0     	adrp	x0, 0x62fc000
 2c087f0: f943a400     	ldr	x0, [x0, #0x748]
 2c087f4: 97f7397b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c087f8: 9001b7a0     	adrp	x0, 0x62fc000
 2c087fc: f947e800     	ldr	x0, [x0, #0xfd0]
 2c08800: 97f73978     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08804: 9001b7a0     	adrp	x0, 0x62fc000
 2c08808: f947ec00     	ldr	x0, [x0, #0xfd8]
 2c0880c: 97f73975     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08810: 52800028     	mov	w8, #0x1                // =1
 2c08814: 392f1e88     	strb	w8, [x20, #0xbc7]
 2c08818: b9400268     	ldr	w8, [x19]
 2c0881c: f9401674     	ldr	x20, [x19, #0x28]
 2c08820: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2c08824: f90023ff     	str	xzr, [sp, #0x40]
 2c08828: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2c0882c: f90013ff     	str	xzr, [sp, #0x20]
 2c08830: b9000bff     	str	wzr, [sp, #0x8]
 2c08834: 340005a8     	cbz	w8, 0x2c088e8 <__start_il2cpp+0x1402d4>
 2c08838: 7100051f     	cmp	w8, #0x1
 2c0883c: 54000aa1     	b.ne	0x2c08990 <__start_il2cpp+0x14037c>
 2c08840: f9402668     	ldr	x8, [x19, #0x48]
 2c08844: 3cc38260     	ldur	q0, [x19, #0x38]
 2c08848: a9047e7f     	stp	xzr, xzr, [x19, #0x40]
 2c0884c: f9001e7f     	str	xzr, [x19, #0x38]
 2c08850: f90023e8     	str	x8, [sp, #0x40]
 2c08854: 12800008     	mov	w8, #-0x1               // =-1
 2c08858: 3d800fe0     	str	q0, [sp, #0x30]
 2c0885c: b9000268     	str	w8, [x19]
 2c08860: f9401bf4     	ldr	x20, [sp, #0x30]
 2c08864: b4002534     	cbz	x20, 0x2c08d08 <__start_il2cpp+0x1406f4>
 2c08868: 9001b7a8     	adrp	x8, 0x62fc000
 2c0886c: f942f508     	ldr	x8, [x8, #0x5e8]
 2c08870: 794083f5     	ldrh	w21, [sp, #0x40]
 2c08874: f9400108     	ldr	x8, [x8]
 2c08878: f9401100     	ldr	x0, [x8, #0x20]
 2c0887c: 9104d408     	add	x8, x0, #0x135
 2c08880: 79400108     	ldrh	w8, [x8]
 2c08884: 37000048     	tbnz	w8, #0x0, 0x2c0888c <__start_il2cpp+0x140278>
 2c08888: 97f815e8     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c0888c: f9406008     	ldr	x8, [x0, #0xc0]
 2c08890: f9401501     	ldr	x1, [x8, #0x28]
 2c08894: 9104d428     	add	x8, x1, #0x135
 2c08898: 79400108     	ldrh	w8, [x8]
 2c0889c: 37000088     	tbnz	w8, #0x0, 0x2c088ac <__start_il2cpp+0x140298>
 2c088a0: aa0103e0     	mov	x0, x1
 2c088a4: 97f815e1     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c088a8: aa0003e1     	mov	x1, x0
 2c088ac: f9400288     	ldr	x8, [x20]
 2c088b0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c088b4: b4000129     	cbz	x9, 0x2c088d8 <__start_il2cpp+0x1402c4>
 2c088b8: f940590a     	ldr	x10, [x8, #0xb0]
 2c088bc: 9100214a     	add	x10, x10, #0x8
 2c088c0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c088c4: eb01017f     	cmp	x11, x1
 2c088c8: 54002120     	b.eq	0x2c08cec <__start_il2cpp+0x1406d8>
 2c088cc: f1000529     	subs	x9, x9, #0x1
 2c088d0: 9100414a     	add	x10, x10, #0x10
 2c088d4: 54ffff61     	b.ne	0x2c088c0 <__start_il2cpp+0x1402ac>
 2c088d8: aa1403e0     	mov	x0, x20
 2c088dc: 2a1f03e2     	mov	w2, wzr
 2c088e0: 97f816a1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c088e4: 14000105     	b	0x2c08cf8 <__start_il2cpp+0x1406e4>
 2c088e8: f9402668     	ldr	x8, [x19, #0x48]
 2c088ec: 3cc38260     	ldur	q0, [x19, #0x38]
 2c088f0: a9047e7f     	stp	xzr, xzr, [x19, #0x40]
 2c088f4: f9001e7f     	str	xzr, [x19, #0x38]
 2c088f8: f90023e8     	str	x8, [sp, #0x40]
 2c088fc: 12800008     	mov	w8, #-0x1               // =-1
 2c08900: 3d800fe0     	str	q0, [sp, #0x30]
 2c08904: b9000268     	str	w8, [x19]
 2c08908: f9401bf5     	ldr	x21, [sp, #0x30]
 2c0890c: b4002015     	cbz	x21, 0x2c08d0c <__start_il2cpp+0x1406f8>
 2c08910: 9001b7a8     	adrp	x8, 0x62fc000
 2c08914: f942f508     	ldr	x8, [x8, #0x5e8]
 2c08918: 794083f6     	ldrh	w22, [sp, #0x40]
 2c0891c: f9400108     	ldr	x8, [x8]
 2c08920: f9401100     	ldr	x0, [x8, #0x20]
 2c08924: 9104d408     	add	x8, x0, #0x135
 2c08928: 79400108     	ldrh	w8, [x8]
 2c0892c: 37000048     	tbnz	w8, #0x0, 0x2c08934 <__start_il2cpp+0x140320>
 2c08930: 97f815be     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08934: f9406008     	ldr	x8, [x0, #0xc0]
 2c08938: f9401501     	ldr	x1, [x8, #0x28]
 2c0893c: 9104d428     	add	x8, x1, #0x135
 2c08940: 79400108     	ldrh	w8, [x8]
 2c08944: 37000088     	tbnz	w8, #0x0, 0x2c08954 <__start_il2cpp+0x140340>
 2c08948: aa0103e0     	mov	x0, x1
 2c0894c: 97f815b7     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08950: aa0003e1     	mov	x1, x0
 2c08954: f94002a8     	ldr	x8, [x21]
 2c08958: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0895c: b4000129     	cbz	x9, 0x2c08980 <__start_il2cpp+0x14036c>
 2c08960: f940590a     	ldr	x10, [x8, #0xb0]
 2c08964: 9100214a     	add	x10, x10, #0x8
 2c08968: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0896c: eb01017f     	cmp	x11, x1
 2c08970: 54001ae0     	b.eq	0x2c08ccc <__start_il2cpp+0x1406b8>
 2c08974: f1000529     	subs	x9, x9, #0x1
 2c08978: 9100414a     	add	x10, x10, #0x10
 2c0897c: 54ffff61     	b.ne	0x2c08968 <__start_il2cpp+0x140354>
 2c08980: aa1503e0     	mov	x0, x21
 2c08984: 2a1f03e2     	mov	w2, wzr
 2c08988: 97f81677     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0898c: 140000d3     	b	0x2c08cd8 <__start_il2cpp+0x1406c4>
 2c08990: f9401268     	ldr	x8, [x19, #0x20]
 2c08994: b4003568     	cbz	x8, 0x2c09040 <__start_il2cpp+0x140a2c>
 2c08998: f9402908     	ldr	x8, [x8, #0x50]
 2c0899c: b4003548     	cbz	x8, 0x2c09044 <__start_il2cpp+0x140a30>
 2c089a0: 9001b756     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c089a4: f9470ed6     	ldr	x22, [x22, #0xe18]
 2c089a8: b9403108     	ldr	w8, [x8, #0x30]
 2c089ac: f94026c0     	ldr	x0, [x22, #0x48]
 2c089b0: b90053e8     	str	w8, [sp, #0x50]
 2c089b4: 910143e1     	add	x1, sp, #0x50
 2c089b8: 97f7396b     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c089bc: f9401268     	ldr	x8, [x19, #0x20]
 2c089c0: b4003448     	cbz	x8, 0x2c09048 <__start_il2cpp+0x140a34>
 2c089c4: aa0003f5     	mov	x21, x0
 2c089c8: b9404508     	ldr	w8, [x8, #0x44]
 2c089cc: f94026c0     	ldr	x0, [x22, #0x48]
 2c089d0: b9007fe8     	str	w8, [sp, #0x7c]
 2c089d4: 9101f3e1     	add	x1, sp, #0x7c
 2c089d8: 97f73963     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c089dc: 9001b7a8     	adrp	x8, 0x62fc000
 2c089e0: aa0003e2     	mov	x2, x0
 2c089e4: f943a508     	ldr	x8, [x8, #0x748]
 2c089e8: f9400100     	ldr	x0, [x8]
 2c089ec: aa1503e1     	mov	x1, x21
 2c089f0: aa1f03e3     	mov	x3, xzr
 2c089f4: 948db940     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2c089f8: d001b768     	adrp	x8, 0x62f6000
 2c089fc: aa0003f5     	mov	x21, x0
 2c08a00: f9400d08     	ldr	x8, [x8, #0x18]
 2c08a04: f9400100     	ldr	x0, [x8]
 2c08a08: b940e408     	ldr	w8, [x0, #0xe4]
 2c08a0c: 35000048     	cbnz	w8, 0x2c08a14 <__start_il2cpp+0x140400>
 2c08a10: 97f73953     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08a14: 9001b7a8     	adrp	x8, 0x62fc000
 2c08a18: f947e908     	ldr	x8, [x8, #0xfd0]
 2c08a1c: f9400100     	ldr	x0, [x8]
 2c08a20: aa1503e1     	mov	x1, x21
 2c08a24: aa1f03e2     	mov	x2, xzr
 2c08a28: 97fd14c0     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2c08a2c: 9001b756     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c08a30: f9478ed6     	ldr	x22, [x22, #0xf18]
 2c08a34: f9401275     	ldr	x21, [x19, #0x20]
 2c08a38: f94002c0     	ldr	x0, [x22]
 2c08a3c: b940e408     	ldr	w8, [x0, #0xe4]
 2c08a40: 35000048     	cbnz	w8, 0x2c08a48 <__start_il2cpp+0x140434>
 2c08a44: 97f73946     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08a48: aa1503e0     	mov	x0, x21
 2c08a4c: aa1f03e1     	mov	x1, xzr
 2c08a50: aa1f03e2     	mov	x2, xzr
 2c08a54: 94bcf6e9     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c08a58: 36000060     	tbz	w0, #0x0, 0x2c08a64 <__start_il2cpp+0x140450>
 2c08a5c: aa1f03f4     	mov	x20, xzr
 2c08a60: 140000ab     	b	0x2c08d0c <__start_il2cpp+0x1406f8>
 2c08a64: b4002f54     	cbz	x20, 0x2c0904c <__start_il2cpp+0x140a38>
 2c08a68: f94002c0     	ldr	x0, [x22]
 2c08a6c: aa1403f5     	mov	x21, x20
 2c08a70: f84f8eb6     	ldr	x22, [x21, #0xf8]!
 2c08a74: b940e408     	ldr	w8, [x0, #0xe4]
 2c08a78: 35000048     	cbnz	w8, 0x2c08a80 <__start_il2cpp+0x14046c>
 2c08a7c: 97f73938     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08a80: aa1603e0     	mov	x0, x22
 2c08a84: aa1f03e1     	mov	x1, xzr
 2c08a88: 94bd06ef     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c08a8c: 36000160     	tbz	w0, #0x0, 0x2c08ab8 <__start_il2cpp+0x1404a4>
 2c08a90: f9401680     	ldr	x0, [x20, #0x28]
 2c08a94: b4002e40     	cbz	x0, 0x2c0905c <__start_il2cpp+0x140a48>
 2c08a98: f94002a1     	ldr	x1, [x21]
 2c08a9c: 52800262     	mov	w2, #0x13               // =19
 2c08aa0: aa1f03e3     	mov	x3, xzr
 2c08aa4: 94010248     	bl	0x2c493c4 <__start_il2cpp+0x180db0>
 2c08aa8: f90002bf     	str	xzr, [x21]
 2c08aac: aa1503e0     	mov	x0, x21
 2c08ab0: aa1f03e1     	mov	x1, xzr
 2c08ab4: 97f738b6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08ab8: f9401268     	ldr	x8, [x19, #0x20]
 2c08abc: b4002ca8     	cbz	x8, 0x2c09050 <__start_il2cpp+0x140a3c>
 2c08ac0: f9402909     	ldr	x9, [x8, #0x50]
 2c08ac4: b4002c89     	cbz	x9, 0x2c09054 <__start_il2cpp+0x140a40>
 2c08ac8: f9402a8a     	ldr	x10, [x20, #0x50]
 2c08acc: b4002c6a     	cbz	x10, 0x2c09058 <__start_il2cpp+0x140a44>
 2c08ad0: b9403121     	ldr	w1, [x9, #0x30]
 2c08ad4: b9403149     	ldr	w9, [x10, #0x30]
 2c08ad8: 6b09003f     	cmp	w1, w9
 2c08adc: 54000861     	b.ne	0x2c08be8 <__start_il2cpp+0x1405d4>
 2c08ae0: 910143e8     	add	x8, sp, #0x50
 2c08ae4: aa1403e0     	mov	x0, x20
 2c08ae8: aa1f03e1     	mov	x1, xzr
 2c08aec: aa1f03e2     	mov	x2, xzr
 2c08af0: 97ffb5e1     	bl	0x2bf6274 <__start_il2cpp+0x12dc60>
 2c08af4: 9001b7a8     	adrp	x8, 0x62fc000
 2c08af8: f942fd08     	ldr	x8, [x8, #0x5f8]
 2c08afc: 3dc017e0     	ldr	q0, [sp, #0x50]
 2c08b00: f94033e9     	ldr	x9, [sp, #0x60]
 2c08b04: a905ffff     	stp	xzr, xzr, [sp, #0x58]
 2c08b08: f9400108     	ldr	x8, [x8]
 2c08b0c: 3d8007e0     	str	q0, [sp, #0x10]
 2c08b10: f90013e9     	str	x9, [sp, #0x20]
 2c08b14: f9401100     	ldr	x0, [x8, #0x20]
 2c08b18: f9002bff     	str	xzr, [sp, #0x50]
 2c08b1c: 3944d408     	ldrb	w8, [x0, #0x135]
 2c08b20: 37000048     	tbnz	w8, #0x0, 0x2c08b28 <__start_il2cpp+0x140514>
 2c08b24: 97f81541     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08b28: 3dc007e0     	ldr	q0, [sp, #0x10]
 2c08b2c: f94013e8     	ldr	x8, [sp, #0x20]
 2c08b30: 3d8017e0     	str	q0, [sp, #0x50]
 2c08b34: f90033e8     	str	x8, [sp, #0x60]
 2c08b38: 910143e0     	add	x0, sp, #0x50
 2c08b3c: aa1f03e1     	mov	x1, xzr
 2c08b40: 97f73893     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08b44: 9001b7a8     	adrp	x8, 0x62fc000
 2c08b48: f942f908     	ldr	x8, [x8, #0x5f0]
 2c08b4c: 3dc017e0     	ldr	q0, [sp, #0x50]
 2c08b50: f94033e9     	ldr	x9, [sp, #0x60]
 2c08b54: f9400108     	ldr	x8, [x8]
 2c08b58: 3d800fe0     	str	q0, [sp, #0x30]
 2c08b5c: f90023e9     	str	x9, [sp, #0x40]
 2c08b60: f9401100     	ldr	x0, [x8, #0x20]
 2c08b64: 9104d408     	add	x8, x0, #0x135
 2c08b68: 79400108     	ldrh	w8, [x8]
 2c08b6c: 37000048     	tbnz	w8, #0x0, 0x2c08b74 <__start_il2cpp+0x140560>
 2c08b70: 97f8152e     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08b74: d001d855     	adrp	x21, 0x6712000
 2c08b78: 3957fea8     	ldrb	w8, [x21, #0x5ff]
 2c08b7c: 350000c8     	cbnz	w8, 0x2c08b94 <__start_il2cpp+0x140580>
 2c08b80: f001b740     	adrp	x0, 0x62f3000
 2c08b84: f947e000     	ldr	x0, [x0, #0xfc0]
 2c08b88: 97f73896     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08b8c: 52800028     	mov	w8, #0x1                // =1
 2c08b90: 3917fea8     	strb	w8, [x21, #0x5ff]
 2c08b94: f9401bf5     	ldr	x21, [sp, #0x30]
 2c08b98: b4000bb5     	cbz	x21, 0x2c08d0c <__start_il2cpp+0x1406f8>
 2c08b9c: f001b74a     	adrp	x10, 0x62f3000
 2c08ba0: f94002a8     	ldr	x8, [x21]
 2c08ba4: f947e14a     	ldr	x10, [x10, #0xfc0]
 2c08ba8: 794083f6     	ldrh	w22, [sp, #0x40]
 2c08bac: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c08bb0: f9400141     	ldr	x1, [x10]
 2c08bb4: b4000129     	cbz	x9, 0x2c08bd8 <__start_il2cpp+0x1405c4>
 2c08bb8: f940590a     	ldr	x10, [x8, #0xb0]
 2c08bbc: 9100214a     	add	x10, x10, #0x8
 2c08bc0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c08bc4: eb01017f     	cmp	x11, x1
 2c08bc8: 54001da0     	b.eq	0x2c08f7c <__start_il2cpp+0x140968>
 2c08bcc: f1000529     	subs	x9, x9, #0x1
 2c08bd0: 9100414a     	add	x10, x10, #0x10
 2c08bd4: 54ffff61     	b.ne	0x2c08bc0 <__start_il2cpp+0x1405ac>
 2c08bd8: aa1503e0     	mov	x0, x21
 2c08bdc: 2a1f03e2     	mov	w2, wzr
 2c08be0: 97f815e1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c08be4: 140000e9     	b	0x2c08f88 <__start_il2cpp+0x140974>
 2c08be8: 9001b7a9     	adrp	x9, 0x62fc000
 2c08bec: f947ed29     	ldr	x9, [x9, #0xfd8]
 2c08bf0: b9404502     	ldr	w2, [x8, #0x44]
 2c08bf4: f9400120     	ldr	x0, [x9]
 2c08bf8: aa1f03e3     	mov	x3, xzr
 2c08bfc: 940167ba     	bl	0x2c62ae4 <__start_il2cpp+0x19a4d0>
 2c08c00: f9401268     	ldr	x8, [x19, #0x20]
 2c08c04: b40022e8     	cbz	x8, 0x2c09060 <__start_il2cpp+0x140a4c>
 2c08c08: f9402908     	ldr	x8, [x8, #0x50]
 2c08c0c: b40022c8     	cbz	x8, 0x2c09064 <__start_il2cpp+0x140a50>
 2c08c10: d001b796     	adrp	x22, 0x62fa000
 2c08c14: f94052d6     	ldr	x22, [x22, #0xa0]
 2c08c18: b9403115     	ldr	w21, [x8, #0x30]
 2c08c1c: f94002c0     	ldr	x0, [x22]
 2c08c20: b940e409     	ldr	w9, [x0, #0xe4]
 2c08c24: 35000049     	cbnz	w9, 0x2c08c2c <__start_il2cpp+0x140618>
 2c08c28: 97f738cd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08c2c: 2a1503e0     	mov	w0, w21
 2c08c30: aa1f03e1     	mov	x1, xzr
 2c08c34: 97ffabd4     	bl	0x2bf3b84 <__start_il2cpp+0x12b570>
 2c08c38: 360001c0     	tbz	w0, #0x0, 0x2c08c70 <__start_il2cpp+0x14065c>
 2c08c3c: f9401268     	ldr	x8, [x19, #0x20]
 2c08c40: b4002208     	cbz	x8, 0x2c09080 <__start_il2cpp+0x140a6c>
 2c08c44: f9402908     	ldr	x8, [x8, #0x50]
 2c08c48: b40021e8     	cbz	x8, 0x2c09084 <__start_il2cpp+0x140a70>
 2c08c4c: f94002c0     	ldr	x0, [x22]
 2c08c50: b9403115     	ldr	w21, [x8, #0x30]
 2c08c54: b940e409     	ldr	w9, [x0, #0xe4]
 2c08c58: 35000049     	cbnz	w9, 0x2c08c60 <__start_il2cpp+0x14064c>
 2c08c5c: 97f738c0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c08c60: 2a1503e0     	mov	w0, w21
 2c08c64: aa1f03e1     	mov	x1, xzr
 2c08c68: 97ffd385     	bl	0x2bfda7c <__start_il2cpp+0x135468>
 2c08c6c: 2a0003f5     	mov	w21, w0
 2c08c70: aa1403e0     	mov	x0, x20
 2c08c74: aa1f03e1     	mov	x1, xzr
 2c08c78: 97ffb58f     	bl	0x2bf62b4 <__start_il2cpp+0x12dca0>
 2c08c7c: f9407294     	ldr	x20, [x20, #0xe0]
 2c08c80: b4001f54     	cbz	x20, 0x2c09068 <__start_il2cpp+0x140a54>
 2c08c84: f001b74a     	adrp	x10, 0x62f3000
 2c08c88: f9400288     	ldr	x8, [x20]
 2c08c8c: f947914a     	ldr	x10, [x10, #0xf20]
 2c08c90: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c08c94: f9400141     	ldr	x1, [x10]
 2c08c98: b4000129     	cbz	x9, 0x2c08cbc <__start_il2cpp+0x1406a8>
 2c08c9c: f940590a     	ldr	x10, [x8, #0xb0]
 2c08ca0: 9100214a     	add	x10, x10, #0x8
 2c08ca4: f85f814b     	ldur	x11, [x10, #-0x8]
 2c08ca8: eb01017f     	cmp	x11, x1
 2c08cac: 54000a20     	b.eq	0x2c08df0 <__start_il2cpp+0x1407dc>
 2c08cb0: f1000529     	subs	x9, x9, #0x1
 2c08cb4: 9100414a     	add	x10, x10, #0x10
 2c08cb8: 54ffff61     	b.ne	0x2c08ca4 <__start_il2cpp+0x140690>
 2c08cbc: aa1403e0     	mov	x0, x20
 2c08cc0: 52800022     	mov	w2, #0x1                // =1
 2c08cc4: 97f815a8     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c08cc8: 1400004e     	b	0x2c08e00 <__start_il2cpp+0x1407ec>
 2c08ccc: b9800149     	ldrsw	x9, [x10]
 2c08cd0: 8b091108     	add	x8, x8, x9, lsl #4
 2c08cd4: 9104e100     	add	x0, x8, #0x138
 2c08cd8: a9400808     	ldp	x8, x2, [x0]
 2c08cdc: aa1503e0     	mov	x0, x21
 2c08ce0: 2a1603e1     	mov	w1, w22
 2c08ce4: d63f0100     	blr	x8
 2c08ce8: 14000009     	b	0x2c08d0c <__start_il2cpp+0x1406f8>
 2c08cec: b9800149     	ldrsw	x9, [x10]
 2c08cf0: 8b091108     	add	x8, x8, x9, lsl #4
 2c08cf4: 9104e100     	add	x0, x8, #0x138
 2c08cf8: a9400808     	ldp	x8, x2, [x0]
 2c08cfc: aa1403e0     	mov	x0, x20
 2c08d00: 2a1503e1     	mov	w1, w21
 2c08d04: d63f0100     	blr	x8
 2c08d08: f9401a74     	ldr	x20, [x19, #0x30]
 2c08d0c: 12800028     	mov	w8, #-0x2               // =-2
 2c08d10: aa1303e0     	mov	x0, x19
 2c08d14: aa1f03e1     	mov	x1, xzr
 2c08d18: b9000268     	str	w8, [x19]
 2c08d1c: f8030c1f     	str	xzr, [x0, #0x30]!
 2c08d20: 97f7381b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08d24: f9400675     	ldr	x21, [x19, #0x8]
 2c08d28: b4000415     	cbz	x21, 0x2c08da8 <__start_il2cpp+0x140794>
 2c08d2c: 9001b7a8     	adrp	x8, 0x62fc000
 2c08d30: f942f108     	ldr	x8, [x8, #0x5e0]
 2c08d34: f9400108     	ldr	x8, [x8]
 2c08d38: f9401100     	ldr	x0, [x8, #0x20]
 2c08d3c: 9104d408     	add	x8, x0, #0x135
 2c08d40: 79400108     	ldrh	w8, [x8]
 2c08d44: 37000048     	tbnz	w8, #0x0, 0x2c08d4c <__start_il2cpp+0x140738>
 2c08d48: 97f814b8     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08d4c: f9406008     	ldr	x8, [x0, #0xc0]
 2c08d50: f9400501     	ldr	x1, [x8, #0x8]
 2c08d54: 9104d428     	add	x8, x1, #0x135
 2c08d58: 79400108     	ldrh	w8, [x8]
 2c08d5c: 37000088     	tbnz	w8, #0x0, 0x2c08d6c <__start_il2cpp+0x140758>
 2c08d60: aa0103e0     	mov	x0, x1
 2c08d64: 97f814b1     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08d68: aa0003e1     	mov	x1, x0
 2c08d6c: f94002a8     	ldr	x8, [x21]
 2c08d70: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c08d74: b4000129     	cbz	x9, 0x2c08d98 <__start_il2cpp+0x140784>
 2c08d78: f940590a     	ldr	x10, [x8, #0xb0]
 2c08d7c: 9100214a     	add	x10, x10, #0x8
 2c08d80: f85f814b     	ldur	x11, [x10, #-0x8]
 2c08d84: eb01017f     	cmp	x11, x1
 2c08d88: 540001a0     	b.eq	0x2c08dbc <__start_il2cpp+0x1407a8>
 2c08d8c: f1000529     	subs	x9, x9, #0x1
 2c08d90: 9100414a     	add	x10, x10, #0x10
 2c08d94: 54ffff61     	b.ne	0x2c08d80 <__start_il2cpp+0x14076c>
 2c08d98: aa1503e0     	mov	x0, x21
 2c08d9c: 52800042     	mov	w2, #0x2                // =2
 2c08da0: 97f81571     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c08da4: 1400000a     	b	0x2c08dcc <__start_il2cpp+0x1407b8>
 2c08da8: f8018e74     	str	x20, [x19, #0x18]!
 2c08dac: aa1303e0     	mov	x0, x19
 2c08db0: aa1403e1     	mov	x1, x20
 2c08db4: 97f737f6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08db8: 14000009     	b	0x2c08ddc <__start_il2cpp+0x1407c8>
 2c08dbc: b9400149     	ldr	w9, [x10]
 2c08dc0: 11000929     	add	w9, w9, #0x2
 2c08dc4: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c08dc8: 9104e100     	add	x0, x8, #0x138
 2c08dcc: a9400808     	ldp	x8, x2, [x0]
 2c08dd0: aa1503e0     	mov	x0, x21
 2c08dd4: aa1403e1     	mov	x1, x20
 2c08dd8: d63f0100     	blr	x8
 2c08ddc: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2c08de0: f9403bfe     	ldr	x30, [sp, #0x70]
 2c08de4: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2c08de8: 910283ff     	add	sp, sp, #0xa0
 2c08dec: d65f03c0     	ret
 2c08df0: b9400149     	ldr	w9, [x10]
 2c08df4: 11000529     	add	w9, w9, #0x1
 2c08df8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c08dfc: 9104e100     	add	x0, x8, #0x138
 2c08e00: a9400808     	ldp	x8, x2, [x0]
 2c08e04: aa1403e0     	mov	x0, x20
 2c08e08: 2a1503e1     	mov	w1, w21
 2c08e0c: d63f0100     	blr	x8
 2c08e10: aa0003e1     	mov	x1, x0
 2c08e14: aa1303f4     	mov	x20, x19
 2c08e18: f8030e81     	str	x1, [x20, #0x30]!
 2c08e1c: aa1403e0     	mov	x0, x20
 2c08e20: 97f737db     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08e24: f9401268     	ldr	x8, [x19, #0x20]
 2c08e28: b4001228     	cbz	x8, 0x2c0906c <__start_il2cpp+0x140a58>
 2c08e2c: f9401a60     	ldr	x0, [x19, #0x30]
 2c08e30: b4001200     	cbz	x0, 0x2c09070 <__start_il2cpp+0x140a5c>
 2c08e34: f9400009     	ldr	x9, [x0]
 2c08e38: b9404502     	ldr	w2, [x8, #0x44]
 2c08e3c: a9578d28     	ldp	x8, x3, [x9, #0x178]
 2c08e40: 2a1f03e1     	mov	w1, wzr
 2c08e44: d63f0100     	blr	x8
 2c08e48: f9401268     	ldr	x8, [x19, #0x20]
 2c08e4c: b4001148     	cbz	x8, 0x2c09074 <__start_il2cpp+0x140a60>
 2c08e50: f9402d00     	ldr	x0, [x8, #0x58]
 2c08e54: b4001120     	cbz	x0, 0x2c09078 <__start_il2cpp+0x140a64>
 2c08e58: f9400281     	ldr	x1, [x20]
 2c08e5c: 52800022     	mov	w2, #0x1                // =1
 2c08e60: aa1f03e3     	mov	x3, xzr
 2c08e64: 97fe5aaa     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c08e68: f9400280     	ldr	x0, [x20]
 2c08e6c: b4001080     	cbz	x0, 0x2c0907c <__start_il2cpp+0x140a68>
 2c08e70: f9400008     	ldr	x8, [x0]
 2c08e74: f9412509     	ldr	x9, [x8, #0x248]
 2c08e78: f9412902     	ldr	x2, [x8, #0x250]
 2c08e7c: 910143e8     	add	x8, sp, #0x50
 2c08e80: aa0003e1     	mov	x1, x0
 2c08e84: d63f0120     	blr	x9
 2c08e88: 9001b7a8     	adrp	x8, 0x62fc000
 2c08e8c: f942fd08     	ldr	x8, [x8, #0x5f8]
 2c08e90: 3dc017e0     	ldr	q0, [sp, #0x50]
 2c08e94: f94033e9     	ldr	x9, [sp, #0x60]
 2c08e98: a905ffff     	stp	xzr, xzr, [sp, #0x58]
 2c08e9c: f9400108     	ldr	x8, [x8]
 2c08ea0: 3d8007e0     	str	q0, [sp, #0x10]
 2c08ea4: f90013e9     	str	x9, [sp, #0x20]
 2c08ea8: f9401100     	ldr	x0, [x8, #0x20]
 2c08eac: f9002bff     	str	xzr, [sp, #0x50]
 2c08eb0: 3944d408     	ldrb	w8, [x0, #0x135]
 2c08eb4: 37000048     	tbnz	w8, #0x0, 0x2c08ebc <__start_il2cpp+0x1408a8>
 2c08eb8: 97f8145c     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08ebc: 3dc007e0     	ldr	q0, [sp, #0x10]
 2c08ec0: f94013e8     	ldr	x8, [sp, #0x20]
 2c08ec4: 3d8017e0     	str	q0, [sp, #0x50]
 2c08ec8: f90033e8     	str	x8, [sp, #0x60]
 2c08ecc: 910143e0     	add	x0, sp, #0x50
 2c08ed0: aa1f03e1     	mov	x1, xzr
 2c08ed4: 97f737ae     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08ed8: 9001b7a8     	adrp	x8, 0x62fc000
 2c08edc: f942f908     	ldr	x8, [x8, #0x5f0]
 2c08ee0: 3dc017e0     	ldr	q0, [sp, #0x50]
 2c08ee4: f94033e9     	ldr	x9, [sp, #0x60]
 2c08ee8: f9400108     	ldr	x8, [x8]
 2c08eec: 3d800fe0     	str	q0, [sp, #0x30]
 2c08ef0: f90023e9     	str	x9, [sp, #0x40]
 2c08ef4: f9401100     	ldr	x0, [x8, #0x20]
 2c08ef8: 9104d408     	add	x8, x0, #0x135
 2c08efc: 79400108     	ldrh	w8, [x8]
 2c08f00: 37000048     	tbnz	w8, #0x0, 0x2c08f08 <__start_il2cpp+0x1408f4>
 2c08f04: 97f81449     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2c08f08: d001d854     	adrp	x20, 0x6712000
 2c08f0c: 3957fe88     	ldrb	w8, [x20, #0x5ff]
 2c08f10: 350000c8     	cbnz	w8, 0x2c08f28 <__start_il2cpp+0x140914>
 2c08f14: f001b740     	adrp	x0, 0x62f3000
 2c08f18: f947e000     	ldr	x0, [x0, #0xfc0]
 2c08f1c: 97f737b1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c08f20: 52800028     	mov	w8, #0x1                // =1
 2c08f24: 3917fe88     	strb	w8, [x20, #0x5ff]
 2c08f28: f9401bf4     	ldr	x20, [sp, #0x30]
 2c08f2c: b4ffeef4     	cbz	x20, 0x2c08d08 <__start_il2cpp+0x1406f4>
 2c08f30: f001b74a     	adrp	x10, 0x62f3000
 2c08f34: f9400288     	ldr	x8, [x20]
 2c08f38: f947e14a     	ldr	x10, [x10, #0xfc0]
 2c08f3c: 794083f5     	ldrh	w21, [sp, #0x40]
 2c08f40: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c08f44: f9400141     	ldr	x1, [x10]
 2c08f48: b4000129     	cbz	x9, 0x2c08f6c <__start_il2cpp+0x140958>
 2c08f4c: f940590a     	ldr	x10, [x8, #0xb0]
 2c08f50: 9100214a     	add	x10, x10, #0x8
 2c08f54: f85f814b     	ldur	x11, [x10, #-0x8]
 2c08f58: eb01017f     	cmp	x11, x1
 2c08f5c: 54000400     	b.eq	0x2c08fdc <__start_il2cpp+0x1409c8>
 2c08f60: f1000529     	subs	x9, x9, #0x1
 2c08f64: 9100414a     	add	x10, x10, #0x10
 2c08f68: 54ffff61     	b.ne	0x2c08f54 <__start_il2cpp+0x140940>
 2c08f6c: aa1403e0     	mov	x0, x20
 2c08f70: 2a1f03e2     	mov	w2, wzr
 2c08f74: 97f814fc     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c08f78: 1400001c     	b	0x2c08fe8 <__start_il2cpp+0x1409d4>
 2c08f7c: b9800149     	ldrsw	x9, [x10]
 2c08f80: 8b091108     	add	x8, x8, x9, lsl #4
 2c08f84: 9104e100     	add	x0, x8, #0x138
 2c08f88: a9400808     	ldp	x8, x2, [x0]
 2c08f8c: aa1503e0     	mov	x0, x21
 2c08f90: 2a1603e1     	mov	w1, w22
 2c08f94: d63f0100     	blr	x8
 2c08f98: 35ffcb80     	cbnz	w0, 0x2c08908 <__start_il2cpp+0x1402f4>
 2c08f9c: 3dc00fe0     	ldr	q0, [sp, #0x30]
 2c08fa0: f94023e8     	ldr	x8, [sp, #0x40]
 2c08fa4: b900027f     	str	wzr, [x19]
 2c08fa8: 3c838260     	stur	q0, [x19, #0x38]
 2c08fac: f9002668     	str	x8, [x19, #0x48]
 2c08fb0: 9100e260     	add	x0, x19, #0x38
 2c08fb4: aa1f03e1     	mov	x1, xzr
 2c08fb8: 97f73775     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c08fbc: 9001b7a8     	adrp	x8, 0x62fc000
 2c08fc0: f947e508     	ldr	x8, [x8, #0xfc8]
 2c08fc4: f9400103     	ldr	x3, [x8]
 2c08fc8: 91002260     	add	x0, x19, #0x8
 2c08fcc: 9100c3e1     	add	x1, sp, #0x30
 2c08fd0: aa1303e2     	mov	x2, x19
 2c08fd4: 940041bb     	bl	0x2c196c0 <__start_il2cpp+0x1510ac>
 2c08fd8: 17ffff81     	b	0x2c08ddc <__start_il2cpp+0x1407c8>
 2c08fdc: b9800149     	ldrsw	x9, [x10]
 2c08fe0: 8b091108     	add	x8, x8, x9, lsl #4
 2c08fe4: 9104e100     	add	x0, x8, #0x138
 2c08fe8: a9400808     	ldp	x8, x2, [x0]
 2c08fec: aa1403e0     	mov	x0, x20
 2c08ff0: 2a1503e1     	mov	w1, w21
 2c08ff4: d63f0100     	blr	x8
 2c08ff8: 35ffc340     	cbnz	w0, 0x2c08860 <__start_il2cpp+0x14024c>
 2c08ffc: 3dc00fe0     	ldr	q0, [sp, #0x30]
 2c09000: f94023e9     	ldr	x9, [sp, #0x40]
 2c09004: 52800028     	mov	w8, #0x1                // =1
 2c09008: b9000268     	str	w8, [x19]
 2c0900c: 3c838260     	stur	q0, [x19, #0x38]
 2c09010: f9002669     	str	x9, [x19, #0x48]
 2c09014: 9100e260     	add	x0, x19, #0x38
 2c09018: aa1f03e1     	mov	x1, xzr
 2c0901c: 97f7375c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c09020: f001b788     	adrp	x8, 0x62fc000
 2c09024: f947e508     	ldr	x8, [x8, #0xfc8]
 2c09028: f9400103     	ldr	x3, [x8]
 2c0902c: 91002260     	add	x0, x19, #0x8
 2c09030: 9100c3e1     	add	x1, sp, #0x30
 2c09034: aa1303e2     	mov	x2, x19
 2c09038: 940041a2     	bl	0x2c196c0 <__start_il2cpp+0x1510ac>
 2c0903c: 17ffff68     	b	0x2c08ddc <__start_il2cpp+0x1407c8>
 2c09040: 97f73812     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09044: 97f73811     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09048: 97f73810     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c0904c: 97f7380f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09050: 97f7380e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09054: 97f7380d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09058: 97f7380c     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c0905c: 97f7380b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09060: 97f7380a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09064: 97f73809     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09068: 97f73808     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c0906c: 97f73807     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09070: 97f73806     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09074: 97f73805     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09078: 97f73804     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c0907c: 97f73803     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09080: 97f73802     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09084: 97f73801     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c09088: 1400002c     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c0908c: 1400002b     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09090: 1400002a     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09094: 14000029     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09098: 14000028     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c0909c: 14000027     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090a0: 14000026     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090a4: 14000025     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090a8: 14000024     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090ac: 14000023     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090b0: 14000022     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090b4: 14000021     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090b8: 14000020     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090bc: 1400001f     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090c0: 1400001e     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090c4: 1400001d     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090c8: 1400001c     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090cc: 1400001b     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090d0: 1400001a     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090d4: 14000019     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090d8: 14000018     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090dc: 14000017     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090e0: 14000016     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090e4: 14000015     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090e8: 14000014     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090ec: 14000013     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090f0: 14000012     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090f4: 14000011     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090f8: 14000010     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c090fc: 1400000f     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09100: 1400000e     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09104: 1400000d     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09108: 1400000c     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c0910c: 1400000b     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09110: 1400000a     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09114: 14000009     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09118: 14000008     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c0911c: 14000007     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09120: 14000006     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09124: 14000005     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09128: 14000004     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c0912c: 14000003     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09130: 14000002     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09134: 14000001     	b	0x2c09138 <__start_il2cpp+0x140b24>
 2c09138: aa0003f4     	mov	x20, x0
 2c0913c: 7100043f     	cmp	w1, #0x1
 2c09140: 54000561     	b.ne	0x2c091ec <__start_il2cpp+0x140bd8>
 2c09144: aa1403e0     	mov	x0, x20
 2c09148: 94cc757e     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c0914c: aa0003f4     	mov	x20, x0
 2c09150: f001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c09154: f946f000     	ldr	x0, [x0, #0xde0]
 2c09158: 97f73727     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c0915c: f9400288     	ldr	x8, [x20]
 2c09160: f9400101     	ldr	x1, [x8]
 2c09164: 97f738cb     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2c09168: 360002e0     	tbz	w0, #0x0, 0x2c091c4 <__start_il2cpp+0x140bb0>
 2c0916c: b9800bf5     	ldrsw	x21, [sp, #0x8]
 2c09170: f9400294     	ldr	x20, [x20]
 2c09174: 910003e8     	mov	x8, sp
 2c09178: f8357914     	str	x20, [x8, x21, lsl #3]
 2c0917c: 110006a8     	add	w8, w21, #0x1
 2c09180: b9000be8     	str	w8, [sp, #0x8]
 2c09184: 94cc7573     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c09188: 12800028     	mov	w8, #-0x2               // =-2
 2c0918c: aa1303e0     	mov	x0, x19
 2c09190: aa1f03e1     	mov	x1, xzr
 2c09194: b9000268     	str	w8, [x19]
 2c09198: f8030c1f     	str	xzr, [x0, #0x30]!
 2c0919c: 97f736fc     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c091a0: f001b780     	adrp	x0, 0x62fc000
 2c091a4: f9430000     	ldr	x0, [x0, #0x600]
 2c091a8: 97f73713     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c091ac: aa0003e2     	mov	x2, x0
 2c091b0: 91002260     	add	x0, x19, #0x8
 2c091b4: aa1403e1     	mov	x1, x20
 2c091b8: 97ea7818     	bl	0x26a7218 <.text+0x20b8>
 2c091bc: b9000bf5     	str	w21, [sp, #0x8]
 2c091c0: 17ffff07     	b	0x2c08ddc <__start_il2cpp+0x1407c8>
 2c091c4: 52800100     	mov	w0, #0x8                // =8
 2c091c8: 94cc757e     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2c091cc: f9400288     	ldr	x8, [x20]
 2c091d0: f9000008     	str	x8, [x0]
 2c091d4: f0019901     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2c091d8: 91302021     	add	x1, x1, #0xc08
 2c091dc: aa1f03e2     	mov	x2, xzr
 2c091e0: 94cc757c     	bl	0x5f267d0 <__cxa_throw@plt>
 2c091e4: aa0003f4     	mov	x20, x0
 2c091e8: 94cc755a     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c091ec: aa1403e0     	mov	x0, x20
 2c091f0: 97faed3b     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c091f4: 97ea7216     	bl	0x26a5a4c <.text+0x8ec>

# MergeStone+_OnMerged_d__9 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2c091f8 .. 0x2c09250 (next mapped method entry)
 2c091f8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c091fc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c09200: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c09204: b001d855     	adrp	x21, 0x6712000
 2c09208: f001b796     	adrp	x22, 0x62fc000
 2c0920c: aa0103f3     	mov	x19, x1
 2c09210: 396f22a8     	ldrb	w8, [x21, #0xbc8]
 2c09214: f94306d6     	ldr	x22, [x22, #0x608]
 2c09218: aa0003f4     	mov	x20, x0
 2c0921c: 370000c8     	tbnz	w8, #0x0, 0x2c09234 <__start_il2cpp+0x140c20>
 2c09220: f001b780     	adrp	x0, 0x62fc000
 2c09224: f9430400     	ldr	x0, [x0, #0x608]
 2c09228: 97f736ee     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0922c: 52800028     	mov	w8, #0x1                // =1
 2c09230: 392f22a8     	strb	w8, [x21, #0xbc8]
 2c09234: f94002c2     	ldr	x2, [x22]
 2c09238: 91002280     	add	x0, x20, #0x8
 2c0923c: aa1303e1     	mov	x1, x19
 2c09240: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c09244: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c09248: f84307fe     	ldr	x30, [sp], #0x30
 2c0924c: 1465e3bb     	b	0x4582138 <__start_il2cpp+0x1ab9b24>
