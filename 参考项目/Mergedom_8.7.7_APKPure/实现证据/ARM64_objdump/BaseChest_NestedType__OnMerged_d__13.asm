
# BaseChest+_OnMerged_d__13 :: System.Void MoveNext()
# VA 0x2bf3528 .. 0x2bf3a8c (next mapped method entry)
 2bf3528: d10283ff     	sub	sp, sp, #0xa0
 2bf352c: f9003bfe     	str	x30, [sp, #0x70]
 2bf3530: a90857f6     	stp	x22, x21, [sp, #0x80]
 2bf3534: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2bf3538: f001d8f4     	adrp	x20, 0x6712000
 2bf353c: aa0003f3     	mov	x19, x0
 2bf3540: 396c2288     	ldrb	w8, [x20, #0xb08]
 2bf3544: 37000308     	tbnz	w8, #0x0, 0x2bf35a4 <__start_il2cpp+0x12af90>
 2bf3548: b001b840     	adrp	x0, 0x62fc000
 2bf354c: f942ec00     	ldr	x0, [x0, #0x5d8]
 2bf3550: 97f78e24     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3554: b001b840     	adrp	x0, 0x62fc000
 2bf3558: f942f000     	ldr	x0, [x0, #0x5e0]
 2bf355c: 97f78e21     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3560: b001b840     	adrp	x0, 0x62fc000
 2bf3564: f942f400     	ldr	x0, [x0, #0x5e8]
 2bf3568: 97f78e1e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf356c: b001b840     	adrp	x0, 0x62fc000
 2bf3570: f942f800     	ldr	x0, [x0, #0x5f0]
 2bf3574: 97f78e1b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3578: d001b820     	adrp	x0, 0x62f9000
 2bf357c: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf3580: 97f78e18     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3584: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf3588: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf358c: 97f78e15     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3590: b001b840     	adrp	x0, 0x62fc000
 2bf3594: f942fc00     	ldr	x0, [x0, #0x5f8]
 2bf3598: 97f78e12     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf359c: 52800028     	mov	w8, #0x1                // =1
 2bf35a0: 392c2288     	strb	w8, [x20, #0xb08]
 2bf35a4: b9400268     	ldr	w8, [x19]
 2bf35a8: f9401274     	ldr	x20, [x19, #0x20]
 2bf35ac: a9037fff     	stp	xzr, xzr, [sp, #0x30]
 2bf35b0: f90023ff     	str	xzr, [sp, #0x40]
 2bf35b4: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2bf35b8: f90013ff     	str	xzr, [sp, #0x20]
 2bf35bc: b9000bff     	str	wzr, [sp, #0x8]
 2bf35c0: 34000b48     	cbz	w8, 0x2bf3728 <__start_il2cpp+0x12b114>
 2bf35c4: b4001ef4     	cbz	x20, 0x2bf39a0 <__start_il2cpp+0x12b38c>
 2bf35c8: aa1403e0     	mov	x0, x20
 2bf35cc: 94000130     	bl	0x2bf3a8c <__start_il2cpp+0x12b478>
 2bf35d0: b001b7e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf35d4: aa1403f5     	mov	x21, x20
 2bf35d8: f9478d08     	ldr	x8, [x8, #0xf18]
 2bf35dc: f84f0eb6     	ldr	x22, [x21, #0xf0]!
 2bf35e0: f9400100     	ldr	x0, [x8]
 2bf35e4: b940e408     	ldr	w8, [x0, #0xe4]
 2bf35e8: 35000048     	cbnz	w8, 0x2bf35f0 <__start_il2cpp+0x12afdc>
 2bf35ec: 97f78e5c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf35f0: aa1603e0     	mov	x0, x22
 2bf35f4: aa1f03e1     	mov	x1, xzr
 2bf35f8: 94bd5c13     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf35fc: 36000160     	tbz	w0, #0x0, 0x2bf3628 <__start_il2cpp+0x12b014>
 2bf3600: f9401680     	ldr	x0, [x20, #0x28]
 2bf3604: b4001d20     	cbz	x0, 0x2bf39a8 <__start_il2cpp+0x12b394>
 2bf3608: f94002a1     	ldr	x1, [x21]
 2bf360c: 52800022     	mov	w2, #0x1                // =1
 2bf3610: aa1f03e3     	mov	x3, xzr
 2bf3614: 9401576c     	bl	0x2c493c4 <__start_il2cpp+0x180db0>
 2bf3618: f90002bf     	str	xzr, [x21]
 2bf361c: aa1503e0     	mov	x0, x21
 2bf3620: aa1f03e1     	mov	x1, xzr
 2bf3624: 97f78dda     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3628: 910143e8     	add	x8, sp, #0x50
 2bf362c: aa1403e0     	mov	x0, x20
 2bf3630: 97ffff85     	bl	0x2bf3444 <__start_il2cpp+0x12ae30>
 2bf3634: b001b848     	adrp	x8, 0x62fc000
 2bf3638: f942fd08     	ldr	x8, [x8, #0x5f8]
 2bf363c: 3dc017e0     	ldr	q0, [sp, #0x50]
 2bf3640: f94033e9     	ldr	x9, [sp, #0x60]
 2bf3644: a905ffff     	stp	xzr, xzr, [sp, #0x58]
 2bf3648: f9400108     	ldr	x8, [x8]
 2bf364c: 3d8007e0     	str	q0, [sp, #0x10]
 2bf3650: f90013e9     	str	x9, [sp, #0x20]
 2bf3654: f9401100     	ldr	x0, [x8, #0x20]
 2bf3658: f9002bff     	str	xzr, [sp, #0x50]
 2bf365c: 3944d408     	ldrb	w8, [x0, #0x135]
 2bf3660: 37000048     	tbnz	w8, #0x0, 0x2bf3668 <__start_il2cpp+0x12b054>
 2bf3664: 97f86a71     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf3668: 3dc007e0     	ldr	q0, [sp, #0x10]
 2bf366c: f94013e8     	ldr	x8, [sp, #0x20]
 2bf3670: 3d8017e0     	str	q0, [sp, #0x50]
 2bf3674: f90033e8     	str	x8, [sp, #0x60]
 2bf3678: 910143e0     	add	x0, sp, #0x50
 2bf367c: aa1f03e1     	mov	x1, xzr
 2bf3680: 97f78dc3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3684: b001b848     	adrp	x8, 0x62fc000
 2bf3688: f942f908     	ldr	x8, [x8, #0x5f0]
 2bf368c: 3dc017e0     	ldr	q0, [sp, #0x50]
 2bf3690: f94033e9     	ldr	x9, [sp, #0x60]
 2bf3694: f9400108     	ldr	x8, [x8]
 2bf3698: 3d800fe0     	str	q0, [sp, #0x30]
 2bf369c: f90023e9     	str	x9, [sp, #0x40]
 2bf36a0: f9401100     	ldr	x0, [x8, #0x20]
 2bf36a4: 9104d408     	add	x8, x0, #0x135
 2bf36a8: 79400108     	ldrh	w8, [x8]
 2bf36ac: 37000048     	tbnz	w8, #0x0, 0x2bf36b4 <__start_il2cpp+0x12b0a0>
 2bf36b0: 97f86a5e     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf36b4: f001d8f5     	adrp	x21, 0x6712000
 2bf36b8: 3957fea8     	ldrb	w8, [x21, #0x5ff]
 2bf36bc: 350000c8     	cbnz	w8, 0x2bf36d4 <__start_il2cpp+0x12b0c0>
 2bf36c0: 9001b800     	adrp	x0, 0x62f3000
 2bf36c4: f947e000     	ldr	x0, [x0, #0xfc0]
 2bf36c8: 97f78dc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf36cc: 52800028     	mov	w8, #0x1                // =1
 2bf36d0: 3917fea8     	strb	w8, [x21, #0x5ff]
 2bf36d4: f9401bf5     	ldr	x21, [sp, #0x30]
 2bf36d8: b4000bf5     	cbz	x21, 0x2bf3854 <__start_il2cpp+0x12b240>
 2bf36dc: 9001b80a     	adrp	x10, 0x62f3000
 2bf36e0: f94002a8     	ldr	x8, [x21]
 2bf36e4: f947e14a     	ldr	x10, [x10, #0xfc0]
 2bf36e8: 794083f6     	ldrh	w22, [sp, #0x40]
 2bf36ec: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf36f0: f9400141     	ldr	x1, [x10]
 2bf36f4: b4000129     	cbz	x9, 0x2bf3718 <__start_il2cpp+0x12b104>
 2bf36f8: f940590a     	ldr	x10, [x8, #0xb0]
 2bf36fc: 9100214a     	add	x10, x10, #0x8
 2bf3700: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf3704: eb01017f     	cmp	x11, x1
 2bf3708: 54000240     	b.eq	0x2bf3750 <__start_il2cpp+0x12b13c>
 2bf370c: f1000529     	subs	x9, x9, #0x1
 2bf3710: 9100414a     	add	x10, x10, #0x10
 2bf3714: 54ffff61     	b.ne	0x2bf3700 <__start_il2cpp+0x12b0ec>
 2bf3718: aa1503e0     	mov	x0, x21
 2bf371c: 2a1f03e2     	mov	w2, wzr
 2bf3720: 97f86b11     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf3724: 1400000e     	b	0x2bf375c <__start_il2cpp+0x12b148>
 2bf3728: 3cc28260     	ldur	q0, [x19, #0x28]
 2bf372c: f9401e68     	ldr	x8, [x19, #0x38]
 2bf3730: a9037e7f     	stp	xzr, xzr, [x19, #0x30]
 2bf3734: f900167f     	str	xzr, [x19, #0x28]
 2bf3738: 3d800fe0     	str	q0, [sp, #0x30]
 2bf373c: f9401bf5     	ldr	x21, [sp, #0x30]
 2bf3740: f90023e8     	str	x8, [sp, #0x40]
 2bf3744: 12800008     	mov	w8, #-0x1               // =-1
 2bf3748: b9000268     	str	w8, [x19]
 2bf374c: 14000009     	b	0x2bf3770 <__start_il2cpp+0x12b15c>
 2bf3750: b9800149     	ldrsw	x9, [x10]
 2bf3754: 8b091108     	add	x8, x8, x9, lsl #4
 2bf3758: 9104e100     	add	x0, x8, #0x138
 2bf375c: a9400808     	ldp	x8, x2, [x0]
 2bf3760: aa1503e0     	mov	x0, x21
 2bf3764: 2a1603e1     	mov	w1, w22
 2bf3768: d63f0100     	blr	x8
 2bf376c: 34000440     	cbz	w0, 0x2bf37f4 <__start_il2cpp+0x12b1e0>
 2bf3770: b4000715     	cbz	x21, 0x2bf3850 <__start_il2cpp+0x12b23c>
 2bf3774: b001b848     	adrp	x8, 0x62fc000
 2bf3778: f942f508     	ldr	x8, [x8, #0x5e8]
 2bf377c: 794083f6     	ldrh	w22, [sp, #0x40]
 2bf3780: f9400108     	ldr	x8, [x8]
 2bf3784: f9401100     	ldr	x0, [x8, #0x20]
 2bf3788: 9104d408     	add	x8, x0, #0x135
 2bf378c: 79400108     	ldrh	w8, [x8]
 2bf3790: 37000048     	tbnz	w8, #0x0, 0x2bf3798 <__start_il2cpp+0x12b184>
 2bf3794: 97f86a25     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf3798: f9406008     	ldr	x8, [x0, #0xc0]
 2bf379c: f9401501     	ldr	x1, [x8, #0x28]
 2bf37a0: 9104d428     	add	x8, x1, #0x135
 2bf37a4: 79400108     	ldrh	w8, [x8]
 2bf37a8: 37000088     	tbnz	w8, #0x0, 0x2bf37b8 <__start_il2cpp+0x12b1a4>
 2bf37ac: aa0103e0     	mov	x0, x1
 2bf37b0: 97f86a1e     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf37b4: aa0003e1     	mov	x1, x0
 2bf37b8: f94002a8     	ldr	x8, [x21]
 2bf37bc: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf37c0: b4000129     	cbz	x9, 0x2bf37e4 <__start_il2cpp+0x12b1d0>
 2bf37c4: f940590a     	ldr	x10, [x8, #0xb0]
 2bf37c8: 9100214a     	add	x10, x10, #0x8
 2bf37cc: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf37d0: eb01017f     	cmp	x11, x1
 2bf37d4: 54000300     	b.eq	0x2bf3834 <__start_il2cpp+0x12b220>
 2bf37d8: f1000529     	subs	x9, x9, #0x1
 2bf37dc: 9100414a     	add	x10, x10, #0x10
 2bf37e0: 54ffff61     	b.ne	0x2bf37cc <__start_il2cpp+0x12b1b8>
 2bf37e4: aa1503e0     	mov	x0, x21
 2bf37e8: 2a1f03e2     	mov	w2, wzr
 2bf37ec: 97f86ade     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf37f0: 14000014     	b	0x2bf3840 <__start_il2cpp+0x12b22c>
 2bf37f4: 3dc00fe0     	ldr	q0, [sp, #0x30]
 2bf37f8: f94023e8     	ldr	x8, [sp, #0x40]
 2bf37fc: b900027f     	str	wzr, [x19]
 2bf3800: 3c828260     	stur	q0, [x19, #0x28]
 2bf3804: f9001e68     	str	x8, [x19, #0x38]
 2bf3808: 9100a260     	add	x0, x19, #0x28
 2bf380c: aa1f03e1     	mov	x1, xzr
 2bf3810: 97f78d5f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3814: b001b848     	adrp	x8, 0x62fc000
 2bf3818: f942ed08     	ldr	x8, [x8, #0x5d8]
 2bf381c: f9400103     	ldr	x3, [x8]
 2bf3820: 91002260     	add	x0, x19, #0x8
 2bf3824: 9100c3e1     	add	x1, sp, #0x30
 2bf3828: aa1303e2     	mov	x2, x19
 2bf382c: 94003ba5     	bl	0x2c026c0 <__start_il2cpp+0x13a0ac>
 2bf3830: 14000056     	b	0x2bf3988 <__start_il2cpp+0x12b374>
 2bf3834: b9800149     	ldrsw	x9, [x10]
 2bf3838: 8b091108     	add	x8, x8, x9, lsl #4
 2bf383c: 9104e100     	add	x0, x8, #0x138
 2bf3840: a9400808     	ldp	x8, x2, [x0]
 2bf3844: aa1503e0     	mov	x0, x21
 2bf3848: 2a1603e1     	mov	w1, w22
 2bf384c: d63f0100     	blr	x8
 2bf3850: b4000ab4     	cbz	x20, 0x2bf39a4 <__start_il2cpp+0x12b390>
 2bf3854: f9407295     	ldr	x21, [x20, #0xe0]
 2bf3858: b4000a35     	cbz	x21, 0x2bf399c <__start_il2cpp+0x12b388>
 2bf385c: d001b82a     	adrp	x10, 0x62f9000
 2bf3860: f94002a8     	ldr	x8, [x21]
 2bf3864: f9476d4a     	ldr	x10, [x10, #0xed8]
 2bf3868: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf386c: f9400141     	ldr	x1, [x10]
 2bf3870: b4000129     	cbz	x9, 0x2bf3894 <__start_il2cpp+0x12b280>
 2bf3874: f940590a     	ldr	x10, [x8, #0xb0]
 2bf3878: 9100214a     	add	x10, x10, #0x8
 2bf387c: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf3880: eb01017f     	cmp	x11, x1
 2bf3884: 54000100     	b.eq	0x2bf38a4 <__start_il2cpp+0x12b290>
 2bf3888: f1000529     	subs	x9, x9, #0x1
 2bf388c: 9100414a     	add	x10, x10, #0x10
 2bf3890: 54ffff61     	b.ne	0x2bf387c <__start_il2cpp+0x12b268>
 2bf3894: aa1503e0     	mov	x0, x21
 2bf3898: 52800262     	mov	w2, #0x13               // =19
 2bf389c: 97f86ab2     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf38a0: 14000005     	b	0x2bf38b4 <__start_il2cpp+0x12b2a0>
 2bf38a4: b9400149     	ldr	w9, [x10]
 2bf38a8: 11004d29     	add	w9, w9, #0x13
 2bf38ac: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf38b0: 9104e100     	add	x0, x8, #0x138
 2bf38b4: a9400c08     	ldp	x8, x3, [x0]
 2bf38b8: aa1503e0     	mov	x0, x21
 2bf38bc: aa1403e1     	mov	x1, x20
 2bf38c0: 2a1f03e2     	mov	w2, wzr
 2bf38c4: d63f0100     	blr	x8
 2bf38c8: f9400675     	ldr	x21, [x19, #0x8]
 2bf38cc: 12800028     	mov	w8, #-0x2               // =-2
 2bf38d0: b9000268     	str	w8, [x19]
 2bf38d4: b4000415     	cbz	x21, 0x2bf3954 <__start_il2cpp+0x12b340>
 2bf38d8: b001b848     	adrp	x8, 0x62fc000
 2bf38dc: f942f108     	ldr	x8, [x8, #0x5e0]
 2bf38e0: f9400108     	ldr	x8, [x8]
 2bf38e4: f9401100     	ldr	x0, [x8, #0x20]
 2bf38e8: 9104d408     	add	x8, x0, #0x135
 2bf38ec: 79400108     	ldrh	w8, [x8]
 2bf38f0: 37000048     	tbnz	w8, #0x0, 0x2bf38f8 <__start_il2cpp+0x12b2e4>
 2bf38f4: 97f869cd     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf38f8: f9406008     	ldr	x8, [x0, #0xc0]
 2bf38fc: f9400501     	ldr	x1, [x8, #0x8]
 2bf3900: 9104d428     	add	x8, x1, #0x135
 2bf3904: 79400108     	ldrh	w8, [x8]
 2bf3908: 37000088     	tbnz	w8, #0x0, 0x2bf3918 <__start_il2cpp+0x12b304>
 2bf390c: aa0103e0     	mov	x0, x1
 2bf3910: 97f869c6     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf3914: aa0003e1     	mov	x1, x0
 2bf3918: f94002a8     	ldr	x8, [x21]
 2bf391c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf3920: b4000129     	cbz	x9, 0x2bf3944 <__start_il2cpp+0x12b330>
 2bf3924: f940590a     	ldr	x10, [x8, #0xb0]
 2bf3928: 9100214a     	add	x10, x10, #0x8
 2bf392c: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf3930: eb01017f     	cmp	x11, x1
 2bf3934: 540001a0     	b.eq	0x2bf3968 <__start_il2cpp+0x12b354>
 2bf3938: f1000529     	subs	x9, x9, #0x1
 2bf393c: 9100414a     	add	x10, x10, #0x10
 2bf3940: 54ffff61     	b.ne	0x2bf392c <__start_il2cpp+0x12b318>
 2bf3944: aa1503e0     	mov	x0, x21
 2bf3948: 52800042     	mov	w2, #0x2                // =2
 2bf394c: 97f86a86     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf3950: 1400000a     	b	0x2bf3978 <__start_il2cpp+0x12b364>
 2bf3954: f8018e74     	str	x20, [x19, #0x18]!
 2bf3958: aa1303e0     	mov	x0, x19
 2bf395c: aa1403e1     	mov	x1, x20
 2bf3960: 97f78d0b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3964: 14000009     	b	0x2bf3988 <__start_il2cpp+0x12b374>
 2bf3968: b9400149     	ldr	w9, [x10]
 2bf396c: 11000929     	add	w9, w9, #0x2
 2bf3970: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf3974: 9104e100     	add	x0, x8, #0x138
 2bf3978: a9400808     	ldp	x8, x2, [x0]
 2bf397c: aa1503e0     	mov	x0, x21
 2bf3980: aa1403e1     	mov	x1, x20
 2bf3984: d63f0100     	blr	x8
 2bf3988: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2bf398c: f9403bfe     	ldr	x30, [sp, #0x70]
 2bf3990: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2bf3994: 910283ff     	add	sp, sp, #0xa0
 2bf3998: d65f03c0     	ret
 2bf399c: 97f78dbb     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf39a0: 97f78dba     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf39a4: 97f78db9     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf39a8: 97f78db8     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf39ac: 1400000c     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39b0: 1400000b     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39b4: 1400000a     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39b8: 14000009     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39bc: 14000008     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39c0: 14000007     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39c4: 14000006     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39c8: 14000005     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39cc: 14000004     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39d0: 14000003     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39d4: 14000002     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39d8: 14000001     	b	0x2bf39dc <__start_il2cpp+0x12b3c8>
 2bf39dc: aa0003f4     	mov	x20, x0
 2bf39e0: 7100043f     	cmp	w1, #0x1
 2bf39e4: 540004e1     	b.ne	0x2bf3a80 <__start_il2cpp+0x12b46c>
 2bf39e8: aa1403e0     	mov	x0, x20
 2bf39ec: 94cccb55     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf39f0: aa0003f4     	mov	x20, x0
 2bf39f4: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf39f8: f946f000     	ldr	x0, [x0, #0xde0]
 2bf39fc: 97f78cfe     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf3a00: f9400288     	ldr	x8, [x20]
 2bf3a04: f9400101     	ldr	x1, [x8]
 2bf3a08: 97f78ea2     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf3a0c: 36000260     	tbz	w0, #0x0, 0x2bf3a58 <__start_il2cpp+0x12b444>
 2bf3a10: b9800bf5     	ldrsw	x21, [sp, #0x8]
 2bf3a14: f9400294     	ldr	x20, [x20]
 2bf3a18: 910003e8     	mov	x8, sp
 2bf3a1c: f8357914     	str	x20, [x8, x21, lsl #3]
 2bf3a20: 110006a8     	add	w8, w21, #0x1
 2bf3a24: b9000be8     	str	w8, [sp, #0x8]
 2bf3a28: 94cccb4a     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf3a2c: 12800028     	mov	w8, #-0x2               // =-2
 2bf3a30: b001b840     	adrp	x0, 0x62fc000
 2bf3a34: b8008668     	str	w8, [x19], #0x8
 2bf3a38: f9430000     	ldr	x0, [x0, #0x600]
 2bf3a3c: 97f78cee     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf3a40: aa0003e2     	mov	x2, x0
 2bf3a44: aa1303e0     	mov	x0, x19
 2bf3a48: aa1403e1     	mov	x1, x20
 2bf3a4c: 97eacdf3     	bl	0x26a7218 <.text+0x20b8>
 2bf3a50: b9000bf5     	str	w21, [sp, #0x8]
 2bf3a54: 17ffffcd     	b	0x2bf3988 <__start_il2cpp+0x12b374>
 2bf3a58: 52800100     	mov	w0, #0x8                // =8
 2bf3a5c: 94cccb59     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf3a60: f9400288     	ldr	x8, [x20]
 2bf3a64: f9000008     	str	x8, [x0]
 2bf3a68: b00199c1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf3a6c: 91302021     	add	x1, x1, #0xc08
 2bf3a70: aa1f03e2     	mov	x2, xzr
 2bf3a74: 94cccb57     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf3a78: aa0003f4     	mov	x20, x0
 2bf3a7c: 94cccb35     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf3a80: aa1403e0     	mov	x0, x20
 2bf3a84: 97fb4316     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf3a88: 97eac7f1     	bl	0x26a5a4c <.text+0x8ec>

# BaseChest+_OnMerged_d__13 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2bf3b14 .. 0x2bf3b6c (next mapped method entry)
 2bf3b14: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf3b18: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf3b1c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf3b20: f001d8f5     	adrp	x21, 0x6712000
 2bf3b24: b001b856     	adrp	x22, 0x62fc000
 2bf3b28: aa0103f3     	mov	x19, x1
 2bf3b2c: 396c26a8     	ldrb	w8, [x21, #0xb09]
 2bf3b30: f94306d6     	ldr	x22, [x22, #0x608]
 2bf3b34: aa0003f4     	mov	x20, x0
 2bf3b38: 370000c8     	tbnz	w8, #0x0, 0x2bf3b50 <__start_il2cpp+0x12b53c>
 2bf3b3c: b001b840     	adrp	x0, 0x62fc000
 2bf3b40: f9430400     	ldr	x0, [x0, #0x608]
 2bf3b44: 97f78ca7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3b48: 52800028     	mov	w8, #0x1                // =1
 2bf3b4c: 392c26a8     	strb	w8, [x21, #0xb09]
 2bf3b50: f94002c2     	ldr	x2, [x22]
 2bf3b54: 91002280     	add	x0, x20, #0x8
 2bf3b58: aa1303e1     	mov	x1, x19
 2bf3b5c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf3b60: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf3b64: f84307fe     	ldr	x30, [sp], #0x30
 2bf3b68: 14663974     	b	0x4582138 <__start_il2cpp+0x1ab9b24>
