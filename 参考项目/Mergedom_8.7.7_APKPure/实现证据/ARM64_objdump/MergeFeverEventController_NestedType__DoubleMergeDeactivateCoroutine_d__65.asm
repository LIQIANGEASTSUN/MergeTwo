
# MergeFeverEventController+_DoubleMergeDeactivateCoroutine_d__65 :: System.Void MoveNext()
# VA 0x2c365f8 .. 0x2c369ac (next mapped method entry)
 2c365f8: d101c3ff     	sub	sp, sp, #0x70
 2c365fc: a90367fe     	stp	x30, x25, [sp, #0x30]
 2c36600: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c36604: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c36608: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c3660c: 9001d6f4     	adrp	x20, 0x6712000
 2c36610: aa0003f3     	mov	x19, x0
 2c36614: 3973da88     	ldrb	w8, [x20, #0xcf6]
 2c36618: 37000128     	tbnz	w8, #0x0, 0x2c3663c <__start_il2cpp+0x16e028>
 2c3661c: 9001b640     	adrp	x0, 0x62fe000
 2c36620: f9417000     	ldr	x0, [x0, #0x2e0]
 2c36624: 97f681ef     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c36628: b001b5e0     	adrp	x0, 0x62f3000
 2c3662c: f9467000     	ldr	x0, [x0, #0xce0]
 2c36630: 97f681ec     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c36634: 52800028     	mov	w8, #0x1                // =1
 2c36638: 3933da88     	strb	w8, [x20, #0xcf6]
 2c3663c: b001b5f7     	adrp	x23, 0x62f3000
 2c36640: b001b5f8     	adrp	x24, 0x62f3000
 2c36644: f94672f7     	ldr	x23, [x23, #0xce0]
 2c36648: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2c3664c: b9400268     	ldr	w8, [x19]
 2c36650: f9401674     	ldr	x20, [x19, #0x28]
 2c36654: f947e318     	ldr	x24, [x24, #0xfc0]
 2c36658: b9000bff     	str	wzr, [sp, #0x8]
 2c3665c: 35000528     	cbnz	w8, 0x2c36700 <__start_il2cpp+0x16e0ec>
 2c36660: 3dc00e60     	ldr	q0, [x19, #0x30]
 2c36664: 12800008     	mov	w8, #-0x1               // =-1
 2c36668: a9037e7f     	stp	xzr, xzr, [x19, #0x30]
 2c3666c: b9000268     	str	w8, [x19]
 2c36670: 3d8007e0     	str	q0, [sp, #0x10]
 2c36674: 9001d6f5     	adrp	x21, 0x6712000
 2c36678: 395286a8     	ldrb	w8, [x21, #0x4a1]
 2c3667c: 350000c8     	cbnz	w8, 0x2c36694 <__start_il2cpp+0x16e080>
 2c36680: b001b5e0     	adrp	x0, 0x62f3000
 2c36684: f947e000     	ldr	x0, [x0, #0xfc0]
 2c36688: 97f681d6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3668c: 52800028     	mov	w8, #0x1                // =1
 2c36690: 391286a8     	strb	w8, [x21, #0x4a1]
 2c36694: f9400bf5     	ldr	x21, [sp, #0x10]
 2c36698: b4000355     	cbz	x21, 0x2c36700 <__start_il2cpp+0x16e0ec>
 2c3669c: f94002a8     	ldr	x8, [x21]
 2c366a0: 794033f6     	ldrh	w22, [sp, #0x18]
 2c366a4: f9400301     	ldr	x1, [x24]
 2c366a8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c366ac: b4000129     	cbz	x9, 0x2c366d0 <__start_il2cpp+0x16e0bc>
 2c366b0: f940590a     	ldr	x10, [x8, #0xb0]
 2c366b4: 9100214a     	add	x10, x10, #0x8
 2c366b8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c366bc: eb01017f     	cmp	x11, x1
 2c366c0: 54000100     	b.eq	0x2c366e0 <__start_il2cpp+0x16e0cc>
 2c366c4: f1000529     	subs	x9, x9, #0x1
 2c366c8: 9100414a     	add	x10, x10, #0x10
 2c366cc: 54ffff61     	b.ne	0x2c366b8 <__start_il2cpp+0x16e0a4>
 2c366d0: aa1503e0     	mov	x0, x21
 2c366d4: 52800042     	mov	w2, #0x2                // =2
 2c366d8: 97f75f23     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c366dc: 14000005     	b	0x2c366f0 <__start_il2cpp+0x16e0dc>
 2c366e0: b9400149     	ldr	w9, [x10]
 2c366e4: 11000929     	add	w9, w9, #0x2
 2c366e8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c366ec: 9104e100     	add	x0, x8, #0x138
 2c366f0: a9400808     	ldp	x8, x2, [x0]
 2c366f4: aa1503e0     	mov	x0, x21
 2c366f8: 2a1603e1     	mov	w1, w22
 2c366fc: d63f0100     	blr	x8
 2c36700: b4000eb4     	cbz	x20, 0x2c368d4 <__start_il2cpp+0x16e2c0>
 2c36704: b9408688     	ldr	w8, [x20, #0x84]
 2c36708: 7100051f     	cmp	w8, #0x1
 2c3670c: 54000c8b     	b.lt	0x2c3689c <__start_il2cpp+0x16e288>
 2c36710: aa1403e0     	mov	x0, x20
 2c36714: aa1f03e1     	mov	x1, xzr
 2c36718: 97fff1dc     	bl	0x2c32e88 <__start_il2cpp+0x16a874>
 2c3671c: 36000c00     	tbz	w0, #0x0, 0x2c3689c <__start_il2cpp+0x16e288>
 2c36720: b9408296     	ldr	w22, [x20, #0x80]
 2c36724: f9403a99     	ldr	x25, [x20, #0x70]
 2c36728: 94003fa7     	bl	0x2c465c4 <__start_il2cpp+0x17dfb0>
 2c3672c: aa0003f5     	mov	x21, x0
 2c36730: 94003fc1     	bl	0x2c46634 <__start_il2cpp+0x17e020>
 2c36734: 4b150328     	sub	w8, w25, w21
 2c36738: f9401680     	ldr	x0, [x20, #0x28]
 2c3673c: 0b0802c8     	add	w8, w22, w8
 2c36740: b9008688     	str	w8, [x20, #0x84]
 2c36744: b4000ca0     	cbz	x0, 0x2c368d8 <__start_il2cpp+0x16e2c4>
 2c36748: 5289ba69     	mov	w9, #0x4dd3             // =19923
 2c3674c: 72a20c49     	movk	w9, #0x1062, lsl #16
 2c36750: 9b297d08     	smull	x8, w8, w9
 2c36754: d37ffd09     	lsr	x9, x8, #63
 2c36758: 9366fd08     	asr	x8, x8, #38
 2c3675c: 0b090101     	add	w1, w8, w9
 2c36760: 940000a0     	bl	0x2c369e0 <__start_il2cpp+0x16e3cc>
 2c36764: f94002e0     	ldr	x0, [x23]
 2c36768: b940e408     	ldr	w8, [x0, #0xe4]
 2c3676c: 35000048     	cbnz	w8, 0x2c36774 <__start_il2cpp+0x16e160>
 2c36770: 97f681fb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c36774: 52807d00     	mov	w0, #0x3e8              // =1000
 2c36778: 2a1f03e1     	mov	w1, wzr
 2c3677c: 52800102     	mov	w2, #0x8                // =8
 2c36780: aa1f03e3     	mov	x3, xzr
 2c36784: 2a1f03e4     	mov	w4, wzr
 2c36788: aa1f03e5     	mov	x5, xzr
 2c3678c: 94b41c2a     	bl	0x593d834 <__start_il2cpp+0x2e75220>
 2c36790: a90207e0     	stp	x0, x1, [sp, #0x20]
 2c36794: 910083e0     	add	x0, sp, #0x20
 2c36798: aa1f03e1     	mov	x1, xzr
 2c3679c: 97f6817c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c367a0: 9001d6f9     	adrp	x25, 0x6712000
 2c367a4: a9425bf5     	ldp	x21, x22, [sp, #0x20]
 2c367a8: 39527f28     	ldrb	w8, [x25, #0x49f]
 2c367ac: a9015bf5     	stp	x21, x22, [sp, #0x10]
 2c367b0: 350000c8     	cbnz	w8, 0x2c367c8 <__start_il2cpp+0x16e1b4>
 2c367b4: b001b5e0     	adrp	x0, 0x62f3000
 2c367b8: f9467000     	ldr	x0, [x0, #0xce0]
 2c367bc: 97f68189     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c367c0: 52800028     	mov	w8, #0x1                // =1
 2c367c4: 39127f28     	strb	w8, [x25, #0x49f]
 2c367c8: f94002e0     	ldr	x0, [x23]
 2c367cc: b940e408     	ldr	w8, [x0, #0xe4]
 2c367d0: 35000048     	cbnz	w8, 0x2c367d8 <__start_il2cpp+0x16e1c4>
 2c367d4: 97f681e2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c367d8: 9001d6f9     	adrp	x25, 0x6712000
 2c367dc: 39528328     	ldrb	w8, [x25, #0x4a0]
 2c367e0: 34000068     	cbz	w8, 0x2c367ec <__start_il2cpp+0x16e1d8>
 2c367e4: b5000115     	cbnz	x21, 0x2c36804 <__start_il2cpp+0x16e1f0>
 2c367e8: 17ffffa3     	b	0x2c36674 <__start_il2cpp+0x16e060>
 2c367ec: b001b5e0     	adrp	x0, 0x62f3000
 2c367f0: f947e000     	ldr	x0, [x0, #0xfc0]
 2c367f4: 97f6817b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c367f8: 52800028     	mov	w8, #0x1                // =1
 2c367fc: 39128328     	strb	w8, [x25, #0x4a0]
 2c36800: b4fff3b5     	cbz	x21, 0x2c36674 <__start_il2cpp+0x16e060>
 2c36804: f94002a8     	ldr	x8, [x21]
 2c36808: f9400301     	ldr	x1, [x24]
 2c3680c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c36810: b4000129     	cbz	x9, 0x2c36834 <__start_il2cpp+0x16e220>
 2c36814: f940590a     	ldr	x10, [x8, #0xb0]
 2c36818: 9100214a     	add	x10, x10, #0x8
 2c3681c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c36820: eb01017f     	cmp	x11, x1
 2c36824: 54000100     	b.eq	0x2c36844 <__start_il2cpp+0x16e230>
 2c36828: f1000529     	subs	x9, x9, #0x1
 2c3682c: 9100414a     	add	x10, x10, #0x10
 2c36830: 54ffff61     	b.ne	0x2c3681c <__start_il2cpp+0x16e208>
 2c36834: aa1503e0     	mov	x0, x21
 2c36838: 2a1f03e2     	mov	w2, wzr
 2c3683c: 97f75eca     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c36840: 14000004     	b	0x2c36850 <__start_il2cpp+0x16e23c>
 2c36844: b9800149     	ldrsw	x9, [x10]
 2c36848: 8b091108     	add	x8, x8, x9, lsl #4
 2c3684c: 9104e100     	add	x0, x8, #0x138
 2c36850: a9400808     	ldp	x8, x2, [x0]
 2c36854: aa1503e0     	mov	x0, x21
 2c36858: 2a1603e1     	mov	w1, w22
 2c3685c: d63f0100     	blr	x8
 2c36860: 35fff0a0     	cbnz	w0, 0x2c36674 <__start_il2cpp+0x16e060>
 2c36864: 3dc007e0     	ldr	q0, [sp, #0x10]
 2c36868: b900027f     	str	wzr, [x19]
 2c3686c: 3d800e60     	str	q0, [x19, #0x30]
 2c36870: 9100c260     	add	x0, x19, #0x30
 2c36874: aa1f03e1     	mov	x1, xzr
 2c36878: 97f68145     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c3687c: 9001b648     	adrp	x8, 0x62fe000
 2c36880: f9417108     	ldr	x8, [x8, #0x2e0]
 2c36884: f9400103     	ldr	x3, [x8]
 2c36888: 91002260     	add	x0, x19, #0x8
 2c3688c: 910043e1     	add	x1, sp, #0x10
 2c36890: aa1303e2     	mov	x2, x19
 2c36894: 941bdc79     	bl	0x332da78 <__start_il2cpp+0x865464>
 2c36898: 14000009     	b	0x2c368bc <__start_il2cpp+0x16e2a8>
 2c3689c: aa1403e0     	mov	x0, x20
 2c368a0: aa1f03e1     	mov	x1, xzr
 2c368a4: 97fff492     	bl	0x2c33aec <__start_il2cpp+0x16b4d8>
 2c368a8: 12800028     	mov	w8, #-0x2               // =-2
 2c368ac: aa1f03e1     	mov	x1, xzr
 2c368b0: b8008668     	str	w8, [x19], #0x8
 2c368b4: aa1303e0     	mov	x0, x19
 2c368b8: 948f8f59     	bl	0x501a61c <__start_il2cpp+0x2552008>
 2c368bc: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c368c0: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c368c4: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c368c8: a94367fe     	ldp	x30, x25, [sp, #0x30]
 2c368cc: 9101c3ff     	add	sp, sp, #0x70
 2c368d0: d65f03c0     	ret
 2c368d4: 97f681ed     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c368d8: 97f681ec     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c368dc: 1400000b     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368e0: 1400000a     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368e4: 14000009     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368e8: 14000008     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368ec: 14000007     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368f0: 14000006     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368f4: 14000005     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368f8: 14000004     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c368fc: 14000003     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c36900: 14000002     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c36904: 14000001     	b	0x2c36908 <__start_il2cpp+0x16e2f4>
 2c36908: aa0003f4     	mov	x20, x0
 2c3690c: 7100043f     	cmp	w1, #0x1
 2c36910: 54000481     	b.ne	0x2c369a0 <__start_il2cpp+0x16e38c>
 2c36914: aa1403e0     	mov	x0, x20
 2c36918: 94cbbf8a     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c3691c: aa0003f4     	mov	x20, x0
 2c36920: d001b5c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c36924: f946f000     	ldr	x0, [x0, #0xde0]
 2c36928: 97f68133     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c3692c: f9400288     	ldr	x8, [x20]
 2c36930: f9400101     	ldr	x1, [x8]
 2c36934: 97f682d7     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2c36938: 36000200     	tbz	w0, #0x0, 0x2c36978 <__start_il2cpp+0x16e364>
 2c3693c: b9800bf5     	ldrsw	x21, [sp, #0x8]
 2c36940: f9400294     	ldr	x20, [x20]
 2c36944: 910003e8     	mov	x8, sp
 2c36948: f8357914     	str	x20, [x8, x21, lsl #3]
 2c3694c: 110006a8     	add	w8, w21, #0x1
 2c36950: b9000be8     	str	w8, [sp, #0x8]
 2c36954: 94cbbf7f     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c36958: 12800028     	mov	w8, #-0x2               // =-2
 2c3695c: aa1403e1     	mov	x1, x20
 2c36960: aa1f03e2     	mov	x2, xzr
 2c36964: b8008668     	str	w8, [x19], #0x8
 2c36968: aa1303e0     	mov	x0, x19
 2c3696c: 948f8f88     	bl	0x501a78c <__start_il2cpp+0x2552178>
 2c36970: b9000bf5     	str	w21, [sp, #0x8]
 2c36974: 17ffffd2     	b	0x2c368bc <__start_il2cpp+0x16e2a8>
 2c36978: 52800100     	mov	w0, #0x8                // =8
 2c3697c: 94cbbf91     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2c36980: f9400288     	ldr	x8, [x20]
 2c36984: f9000008     	str	x8, [x0]
 2c36988: d00197a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2c3698c: 91302021     	add	x1, x1, #0xc08
 2c36990: aa1f03e2     	mov	x2, xzr
 2c36994: 94cbbf8f     	bl	0x5f267d0 <__cxa_throw@plt>
 2c36998: aa0003f4     	mov	x20, x0
 2c3699c: 94cbbf6d     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c369a0: aa1403e0     	mov	x0, x20
 2c369a4: 97fa374e     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c369a8: 97e9bc29     	bl	0x26a5a4c <.text+0x8ec>

# MergeFeverEventController+_DoubleMergeDeactivateCoroutine_d__65 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2c36a18 .. 0x2c36a24 (next mapped method entry)
 2c36a18: 91002000     	add	x0, x0, #0x8
 2c36a1c: aa1f03e2     	mov	x2, xzr
 2c36a20: 148f8ece     	b	0x501a558 <__start_il2cpp+0x2551f44>
