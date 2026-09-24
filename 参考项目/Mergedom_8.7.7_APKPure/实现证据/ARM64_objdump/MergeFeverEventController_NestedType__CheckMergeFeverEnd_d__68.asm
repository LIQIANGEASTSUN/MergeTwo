
# MergeFeverEventController+_CheckMergeFeverEnd_d__68 :: System.Void MoveNext()
# VA 0x2c35ef0 .. 0x2c36320 (next mapped method entry)
 2c35ef0: d101c3ff     	sub	sp, sp, #0x70
 2c35ef4: a90367fe     	stp	x30, x25, [sp, #0x30]
 2c35ef8: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c35efc: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c35f00: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c35f04: b001d6f4     	adrp	x20, 0x6712000
 2c35f08: aa0003f3     	mov	x19, x0
 2c35f0c: 3973d688     	ldrb	w8, [x20, #0xcf5]
 2c35f10: 37000128     	tbnz	w8, #0x0, 0x2c35f34 <__start_il2cpp+0x16d920>
 2c35f14: b001b640     	adrp	x0, 0x62fe000
 2c35f18: f9415400     	ldr	x0, [x0, #0x2a8]
 2c35f1c: 97f683b1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35f20: d001b5e0     	adrp	x0, 0x62f3000
 2c35f24: f9467000     	ldr	x0, [x0, #0xce0]
 2c35f28: 97f683ae     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c35f2c: 52800028     	mov	w8, #0x1                // =1
 2c35f30: 3933d688     	strb	w8, [x20, #0xcf5]
 2c35f34: d001b5f7     	adrp	x23, 0x62f3000
 2c35f38: d001b5f8     	adrp	x24, 0x62f3000
 2c35f3c: f94672f7     	ldr	x23, [x23, #0xce0]
 2c35f40: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2c35f44: b9400268     	ldr	w8, [x19]
 2c35f48: f9400e74     	ldr	x20, [x19, #0x18]
 2c35f4c: f947e318     	ldr	x24, [x24, #0xfc0]
 2c35f50: b9000bff     	str	wzr, [sp, #0x8]
 2c35f54: 350000e8     	cbnz	w8, 0x2c35f70 <__start_il2cpp+0x16d95c>
 2c35f58: 3dc00a60     	ldr	q0, [x19, #0x20]
 2c35f5c: 12800008     	mov	w8, #-0x1               // =-1
 2c35f60: a9027e7f     	stp	xzr, xzr, [x19, #0x20]
 2c35f64: b9000268     	str	w8, [x19]
 2c35f68: 3d8007e0     	str	q0, [sp, #0x10]
 2c35f6c: 14000055     	b	0x2c360c0 <__start_il2cpp+0x16daac>
 2c35f70: b40016b4     	cbz	x20, 0x2c36244 <__start_il2cpp+0x16dc30>
 2c35f74: f9404e80     	ldr	x0, [x20, #0x98]
 2c35f78: b4000f20     	cbz	x0, 0x2c3615c <__start_il2cpp+0x16db48>
 2c35f7c: aa1f03e1     	mov	x1, xzr
 2c35f80: 97fd1353     	bl	0x2b7accc <__start_il2cpp+0xb26b8>
 2c35f84: 37000e60     	tbnz	w0, #0x0, 0x2c36150 <__start_il2cpp+0x16db3c>
 2c35f88: f9404e80     	ldr	x0, [x20, #0x98]
 2c35f8c: b40015e0     	cbz	x0, 0x2c36248 <__start_il2cpp+0x16dc34>
 2c35f90: aa1f03e1     	mov	x1, xzr
 2c35f94: 97fd12bf     	bl	0x2b7aa90 <__start_il2cpp+0xb247c>
 2c35f98: f9401695     	ldr	x21, [x20, #0x28]
 2c35f9c: 940000e1     	bl	0x2c36320 <__start_il2cpp+0x16dd0c>
 2c35fa0: aa0003e1     	mov	x1, x0
 2c35fa4: b40014f5     	cbz	x21, 0x2c36240 <__start_il2cpp+0x16dc2c>
 2c35fa8: f94026a0     	ldr	x0, [x21, #0x48]
 2c35fac: b40014a0     	cbz	x0, 0x2c36240 <__start_il2cpp+0x16dc2c>
 2c35fb0: f9400008     	ldr	x8, [x0]
 2c35fb4: f942ad09     	ldr	x9, [x8, #0x558]
 2c35fb8: f942b102     	ldr	x2, [x8, #0x560]
 2c35fbc: d63f0120     	blr	x9
 2c35fc0: f94002e0     	ldr	x0, [x23]
 2c35fc4: b940e408     	ldr	w8, [x0, #0xe4]
 2c35fc8: 35000048     	cbnz	w8, 0x2c35fd0 <__start_il2cpp+0x16d9bc>
 2c35fcc: 97f683e4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c35fd0: 52807d00     	mov	w0, #0x3e8              // =1000
 2c35fd4: 2a1f03e1     	mov	w1, wzr
 2c35fd8: 52800102     	mov	w2, #0x8                // =8
 2c35fdc: aa1f03e3     	mov	x3, xzr
 2c35fe0: 2a1f03e4     	mov	w4, wzr
 2c35fe4: aa1f03e5     	mov	x5, xzr
 2c35fe8: 94b41e13     	bl	0x593d834 <__start_il2cpp+0x2e75220>
 2c35fec: a90207e0     	stp	x0, x1, [sp, #0x20]
 2c35ff0: 910083e0     	add	x0, sp, #0x20
 2c35ff4: aa1f03e1     	mov	x1, xzr
 2c35ff8: 97f68365     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c35ffc: b001d6f9     	adrp	x25, 0x6712000
 2c36000: a9425bf5     	ldp	x21, x22, [sp, #0x20]
 2c36004: 39527f28     	ldrb	w8, [x25, #0x49f]
 2c36008: a9015bf5     	stp	x21, x22, [sp, #0x10]
 2c3600c: 350000c8     	cbnz	w8, 0x2c36024 <__start_il2cpp+0x16da10>
 2c36010: b001b5e0     	adrp	x0, 0x62f3000
 2c36014: f9467000     	ldr	x0, [x0, #0xce0]
 2c36018: 97f68372     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3601c: 52800028     	mov	w8, #0x1                // =1
 2c36020: 39127f28     	strb	w8, [x25, #0x49f]
 2c36024: f94002e0     	ldr	x0, [x23]
 2c36028: b940e408     	ldr	w8, [x0, #0xe4]
 2c3602c: 35000048     	cbnz	w8, 0x2c36034 <__start_il2cpp+0x16da20>
 2c36030: 97f683cb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c36034: 9001d6f9     	adrp	x25, 0x6712000
 2c36038: 39528328     	ldrb	w8, [x25, #0x4a0]
 2c3603c: 34000068     	cbz	w8, 0x2c36048 <__start_il2cpp+0x16da34>
 2c36040: b5000115     	cbnz	x21, 0x2c36060 <__start_il2cpp+0x16da4c>
 2c36044: 1400001f     	b	0x2c360c0 <__start_il2cpp+0x16daac>
 2c36048: b001b5e0     	adrp	x0, 0x62f3000
 2c3604c: f947e000     	ldr	x0, [x0, #0xfc0]
 2c36050: 97f68364     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c36054: 52800028     	mov	w8, #0x1                // =1
 2c36058: 39128328     	strb	w8, [x25, #0x4a0]
 2c3605c: b4000335     	cbz	x21, 0x2c360c0 <__start_il2cpp+0x16daac>
 2c36060: f94002a8     	ldr	x8, [x21]
 2c36064: f9400301     	ldr	x1, [x24]
 2c36068: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c3606c: b4000129     	cbz	x9, 0x2c36090 <__start_il2cpp+0x16da7c>
 2c36070: f940590a     	ldr	x10, [x8, #0xb0]
 2c36074: 9100214a     	add	x10, x10, #0x8
 2c36078: f85f814b     	ldur	x11, [x10, #-0x8]
 2c3607c: eb01017f     	cmp	x11, x1
 2c36080: 54000100     	b.eq	0x2c360a0 <__start_il2cpp+0x16da8c>
 2c36084: f1000529     	subs	x9, x9, #0x1
 2c36088: 9100414a     	add	x10, x10, #0x10
 2c3608c: 54ffff61     	b.ne	0x2c36078 <__start_il2cpp+0x16da64>
 2c36090: aa1503e0     	mov	x0, x21
 2c36094: 2a1f03e2     	mov	w2, wzr
 2c36098: 97f760b3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c3609c: 14000004     	b	0x2c360ac <__start_il2cpp+0x16da98>
 2c360a0: b9800149     	ldrsw	x9, [x10]
 2c360a4: 8b091108     	add	x8, x8, x9, lsl #4
 2c360a8: 9104e100     	add	x0, x8, #0x138
 2c360ac: a9400808     	ldp	x8, x2, [x0]
 2c360b0: aa1503e0     	mov	x0, x21
 2c360b4: 2a1603e1     	mov	w1, w22
 2c360b8: d63f0100     	blr	x8
 2c360bc: 340008c0     	cbz	w0, 0x2c361d4 <__start_il2cpp+0x16dbc0>
 2c360c0: 9001d6f5     	adrp	x21, 0x6712000
 2c360c4: 395286a8     	ldrb	w8, [x21, #0x4a1]
 2c360c8: 350000c8     	cbnz	w8, 0x2c360e0 <__start_il2cpp+0x16dacc>
 2c360cc: b001b5e0     	adrp	x0, 0x62f3000
 2c360d0: f947e000     	ldr	x0, [x0, #0xfc0]
 2c360d4: 97f68343     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c360d8: 52800028     	mov	w8, #0x1                // =1
 2c360dc: 391286a8     	strb	w8, [x21, #0x4a1]
 2c360e0: f9400bf5     	ldr	x21, [sp, #0x10]
 2c360e4: b4fff475     	cbz	x21, 0x2c35f70 <__start_il2cpp+0x16d95c>
 2c360e8: f94002a8     	ldr	x8, [x21]
 2c360ec: 794033f6     	ldrh	w22, [sp, #0x18]
 2c360f0: f9400301     	ldr	x1, [x24]
 2c360f4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c360f8: b4000129     	cbz	x9, 0x2c3611c <__start_il2cpp+0x16db08>
 2c360fc: f940590a     	ldr	x10, [x8, #0xb0]
 2c36100: 9100214a     	add	x10, x10, #0x8
 2c36104: f85f814b     	ldur	x11, [x10, #-0x8]
 2c36108: eb01017f     	cmp	x11, x1
 2c3610c: 54000100     	b.eq	0x2c3612c <__start_il2cpp+0x16db18>
 2c36110: f1000529     	subs	x9, x9, #0x1
 2c36114: 9100414a     	add	x10, x10, #0x10
 2c36118: 54ffff61     	b.ne	0x2c36104 <__start_il2cpp+0x16daf0>
 2c3611c: aa1503e0     	mov	x0, x21
 2c36120: 52800042     	mov	w2, #0x2                // =2
 2c36124: 97f76090     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c36128: 14000005     	b	0x2c3613c <__start_il2cpp+0x16db28>
 2c3612c: b9400149     	ldr	w9, [x10]
 2c36130: 11000929     	add	w9, w9, #0x2
 2c36134: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c36138: 9104e100     	add	x0, x8, #0x138
 2c3613c: a9400808     	ldp	x8, x2, [x0]
 2c36140: aa1503e0     	mov	x0, x21
 2c36144: 2a1603e1     	mov	w1, w22
 2c36148: d63f0100     	blr	x8
 2c3614c: 17ffff89     	b	0x2c35f70 <__start_il2cpp+0x16d95c>
 2c36150: aa1403e0     	mov	x0, x20
 2c36154: aa1f03e1     	mov	x1, xzr
 2c36158: 97fff7f4     	bl	0x2c34128 <__start_il2cpp+0x16bb14>
 2c3615c: 9001d6f4     	adrp	x20, 0x6712000
 2c36160: 12800029     	mov	w9, #-0x2               // =-2
 2c36164: 39527a88     	ldrb	w8, [x20, #0x49e]
 2c36168: b9000269     	str	w9, [x19]
 2c3616c: 350000c8     	cbnz	w8, 0x2c36184 <__start_il2cpp+0x16db70>
 2c36170: b001b5e0     	adrp	x0, 0x62f3000
 2c36174: f9466c00     	ldr	x0, [x0, #0xcd8]
 2c36178: 97f6831a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c3617c: 52800028     	mov	w8, #0x1                // =1
 2c36180: 39127a88     	strb	w8, [x20, #0x49e]
 2c36184: f9400673     	ldr	x19, [x19, #0x8]
 2c36188: b4000513     	cbz	x19, 0x2c36228 <__start_il2cpp+0x16dc14>
 2c3618c: b001b5ea     	adrp	x10, 0x62f3000
 2c36190: f9400268     	ldr	x8, [x19]
 2c36194: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2c36198: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c3619c: f9400141     	ldr	x1, [x10]
 2c361a0: b4000129     	cbz	x9, 0x2c361c4 <__start_il2cpp+0x16dbb0>
 2c361a4: f940590a     	ldr	x10, [x8, #0xb0]
 2c361a8: 9100214a     	add	x10, x10, #0x8
 2c361ac: f85f814b     	ldur	x11, [x10, #-0x8]
 2c361b0: eb01017f     	cmp	x11, x1
 2c361b4: 540002c0     	b.eq	0x2c3620c <__start_il2cpp+0x16dbf8>
 2c361b8: f1000529     	subs	x9, x9, #0x1
 2c361bc: 9100414a     	add	x10, x10, #0x10
 2c361c0: 54ffff61     	b.ne	0x2c361ac <__start_il2cpp+0x16db98>
 2c361c4: aa1303e0     	mov	x0, x19
 2c361c8: 52800042     	mov	w2, #0x2                // =2
 2c361cc: 97f76066     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c361d0: 14000013     	b	0x2c3621c <__start_il2cpp+0x16dc08>
 2c361d4: 3dc007e0     	ldr	q0, [sp, #0x10]
 2c361d8: b900027f     	str	wzr, [x19]
 2c361dc: 3d800a60     	str	q0, [x19, #0x20]
 2c361e0: 91008260     	add	x0, x19, #0x20
 2c361e4: aa1f03e1     	mov	x1, xzr
 2c361e8: 97f682e9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c361ec: 9001b648     	adrp	x8, 0x62fe000
 2c361f0: f9415508     	ldr	x8, [x8, #0x2a8]
 2c361f4: f9400103     	ldr	x3, [x8]
 2c361f8: 91002260     	add	x0, x19, #0x8
 2c361fc: 910043e1     	add	x1, sp, #0x10
 2c36200: aa1303e2     	mov	x2, x19
 2c36204: 94006078     	bl	0x2c4e3e4 <__start_il2cpp+0x185dd0>
 2c36208: 14000008     	b	0x2c36228 <__start_il2cpp+0x16dc14>
 2c3620c: b9400149     	ldr	w9, [x10]
 2c36210: 11000929     	add	w9, w9, #0x2
 2c36214: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c36218: 9104e100     	add	x0, x8, #0x138
 2c3621c: a9400408     	ldp	x8, x1, [x0]
 2c36220: aa1303e0     	mov	x0, x19
 2c36224: d63f0100     	blr	x8
 2c36228: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c3622c: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c36230: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c36234: a94367fe     	ldp	x30, x25, [sp, #0x30]
 2c36238: 9101c3ff     	add	sp, sp, #0x70
 2c3623c: d65f03c0     	ret
 2c36240: 97f68392     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c36244: 97f68391     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c36248: 97f68390     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c3624c: 1400000c     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36250: 1400000b     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36254: 1400000a     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36258: 14000009     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c3625c: 14000008     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36260: 14000007     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36264: 14000006     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36268: 14000005     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c3626c: 14000004     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36270: 14000003     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36274: 14000002     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c36278: 14000001     	b	0x2c3627c <__start_il2cpp+0x16dc68>
 2c3627c: aa0003f4     	mov	x20, x0
 2c36280: 7100043f     	cmp	w1, #0x1
 2c36284: 54000481     	b.ne	0x2c36314 <__start_il2cpp+0x16dd00>
 2c36288: aa1403e0     	mov	x0, x20
 2c3628c: 94cbc12d     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2c36290: aa0003f4     	mov	x20, x0
 2c36294: d001b5c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c36298: f946f000     	ldr	x0, [x0, #0xde0]
 2c3629c: 97f682d6     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c362a0: f9400288     	ldr	x8, [x20]
 2c362a4: f9400101     	ldr	x1, [x8]
 2c362a8: 97f6847a     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2c362ac: 36000200     	tbz	w0, #0x0, 0x2c362ec <__start_il2cpp+0x16dcd8>
 2c362b0: b9800bf5     	ldrsw	x21, [sp, #0x8]
 2c362b4: f9400294     	ldr	x20, [x20]
 2c362b8: 910003e8     	mov	x8, sp
 2c362bc: f8357914     	str	x20, [x8, x21, lsl #3]
 2c362c0: 110006a8     	add	w8, w21, #0x1
 2c362c4: b9000be8     	str	w8, [sp, #0x8]
 2c362c8: 94cbc122     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c362cc: 12800028     	mov	w8, #-0x2               // =-2
 2c362d0: aa1403e1     	mov	x1, x20
 2c362d4: aa1f03e2     	mov	x2, xzr
 2c362d8: b8008668     	str	w8, [x19], #0x8
 2c362dc: aa1303e0     	mov	x0, x19
 2c362e0: 97fbce6c     	bl	0x2b29c90 <__start_il2cpp+0x6167c>
 2c362e4: b9000bf5     	str	w21, [sp, #0x8]
 2c362e8: 17ffffd0     	b	0x2c36228 <__start_il2cpp+0x16dc14>
 2c362ec: 52800100     	mov	w0, #0x8                // =8
 2c362f0: 94cbc134     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2c362f4: f9400288     	ldr	x8, [x20]
 2c362f8: f9000008     	str	x8, [x0]
 2c362fc: d00197a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2c36300: 91302021     	add	x1, x1, #0xc08
 2c36304: aa1f03e2     	mov	x2, xzr
 2c36308: 94cbc132     	bl	0x5f267d0 <__cxa_throw@plt>
 2c3630c: aa0003f4     	mov	x20, x0
 2c36310: 94cbc110     	bl	0x5f26750 <__cxa_end_catch@plt>
 2c36314: aa1403e0     	mov	x0, x20
 2c36318: 97fa38f1     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2c3631c: 97e9bdcc     	bl	0x26a5a4c <.text+0x8ec>

# MergeFeverEventController+_CheckMergeFeverEnd_d__68 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2c365ec .. 0x2c365f8 (next mapped method entry)
 2c365ec: 91002000     	add	x0, x0, #0x8
 2c365f0: aa1f03e2     	mov	x2, xzr
 2c365f4: 14b43959     	b	0x5944b58 <__start_il2cpp+0x2e7c544>
