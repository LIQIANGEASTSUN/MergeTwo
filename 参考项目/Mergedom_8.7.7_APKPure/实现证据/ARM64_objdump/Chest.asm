
# Chest :: System.Void .ctor()
# VA 0x2bf61d8 .. 0x2bf61dc (next mapped method entry)
 2bf61d8: 17fff1e5     	b	0x2bf296c <__start_il2cpp+0x12a358>

# Chest :: EffectTypes get_EffectType()
# VA 0x2bf7904 .. 0x2bf790c (next mapped method entry)
 2bf7904: 528000e0     	mov	w0, #0x7                // =7
 2bf7908: d65f03c0     	ret

# Chest :: System.Void Reset(System.Boolean willPlayEffect = False)
# VA 0x2bf790c .. 0x2bf7a98 (next mapped method entry)
 2bf790c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf7910: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf7914: f001d8d5     	adrp	x21, 0x6712000
 2bf7918: 2a0103f4     	mov	w20, w1
 2bf791c: aa0003f3     	mov	x19, x0
 2bf7920: 396ce2a8     	ldrb	w8, [x21, #0xb38]
 2bf7924: 37000128     	tbnz	w8, #0x0, 0x2bf7948 <__start_il2cpp+0x12f334>
 2bf7928: d001b800     	adrp	x0, 0x62f9000
 2bf792c: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf7930: 97f77d2c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7934: b001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf7938: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf793c: 97f77d29     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7940: 52800028     	mov	w8, #0x1                // =1
 2bf7944: 392ce2a8     	strb	w8, [x21, #0xb38]
 2bf7948: aa1303e0     	mov	x0, x19
 2bf794c: 2a1f03e1     	mov	w1, wzr
 2bf7950: 97ffeb56     	bl	0x2bf26a8 <__start_il2cpp+0x12a094>
 2bf7954: 36000294     	tbz	w20, #0x0, 0x2bf79a4 <__start_il2cpp+0x12f390>
 2bf7958: f9400268     	ldr	x8, [x19]
 2bf795c: f9401674     	ldr	x20, [x19, #0x28]
 2bf7960: aa1303e0     	mov	x0, x19
 2bf7964: f9413d09     	ldr	x9, [x8, #0x278]
 2bf7968: f9414101     	ldr	x1, [x8, #0x280]
 2bf796c: d63f0120     	blr	x9
 2bf7970: b4000934     	cbz	x20, 0x2bf7a94 <__start_il2cpp+0x12f480>
 2bf7974: 2a0003e1     	mov	w1, w0
 2bf7978: aa1403e0     	mov	x0, x20
 2bf797c: aa1303e2     	mov	x2, x19
 2bf7980: 52800023     	mov	w3, #0x1                // =1
 2bf7984: aa1f03e4     	mov	x4, xzr
 2bf7988: 9401459e     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2bf798c: aa1f03e0     	mov	x0, xzr
 2bf7990: 97fea5bd     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2bf7994: b4000800     	cbz	x0, 0x2bf7a94 <__start_il2cpp+0x12f480>
 2bf7998: f9408800     	ldr	x0, [x0, #0x110]
 2bf799c: aa1f03e1     	mov	x1, xzr
 2bf79a0: 97fea5cc     	bl	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2bf79a4: f9407274     	ldr	x20, [x19, #0xe0]
 2bf79a8: b4000774     	cbz	x20, 0x2bf7a94 <__start_il2cpp+0x12f480>
 2bf79ac: d001b80a     	adrp	x10, 0x62f9000
 2bf79b0: f9400288     	ldr	x8, [x20]
 2bf79b4: f9476d4a     	ldr	x10, [x10, #0xed8]
 2bf79b8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf79bc: f9400141     	ldr	x1, [x10]
 2bf79c0: b4000129     	cbz	x9, 0x2bf79e4 <__start_il2cpp+0x12f3d0>
 2bf79c4: f940590a     	ldr	x10, [x8, #0xb0]
 2bf79c8: 9100214a     	add	x10, x10, #0x8
 2bf79cc: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf79d0: eb01017f     	cmp	x11, x1
 2bf79d4: 54000100     	b.eq	0x2bf79f4 <__start_il2cpp+0x12f3e0>
 2bf79d8: f1000529     	subs	x9, x9, #0x1
 2bf79dc: 9100414a     	add	x10, x10, #0x10
 2bf79e0: 54ffff61     	b.ne	0x2bf79cc <__start_il2cpp+0x12f3b8>
 2bf79e4: aa1403e0     	mov	x0, x20
 2bf79e8: 52800242     	mov	w2, #0x12               // =18
 2bf79ec: 97f85a5e     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf79f0: 14000005     	b	0x2bf7a04 <__start_il2cpp+0x12f3f0>
 2bf79f4: b9400149     	ldr	w9, [x10]
 2bf79f8: 11004929     	add	w9, w9, #0x12
 2bf79fc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf7a00: 9104e100     	add	x0, x8, #0x138
 2bf7a04: a9400808     	ldp	x8, x2, [x0]
 2bf7a08: aa1403e0     	mov	x0, x20
 2bf7a0c: aa1303e1     	mov	x1, x19
 2bf7a10: d63f0100     	blr	x8
 2bf7a14: f9407660     	ldr	x0, [x19, #0xe8]
 2bf7a18: b40003e0     	cbz	x0, 0x2bf7a94 <__start_il2cpp+0x12f480>
 2bf7a1c: b001b7d4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf7a20: 2a1f03e1     	mov	w1, wzr
 2bf7a24: aa1f03e2     	mov	x2, xzr
 2bf7a28: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf7a2c: 94bd3253     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf7a30: f9400280     	ldr	x0, [x20]
 2bf7a34: aa1303f4     	mov	x20, x19
 2bf7a38: f84f0e95     	ldr	x21, [x20, #0xf0]!
 2bf7a3c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7a40: 35000048     	cbnz	w8, 0x2bf7a48 <__start_il2cpp+0x12f434>
 2bf7a44: 97f77d46     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7a48: aa1503e0     	mov	x0, x21
 2bf7a4c: aa1f03e1     	mov	x1, xzr
 2bf7a50: 94bd4afd     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf7a54: 360001a0     	tbz	w0, #0x0, 0x2bf7a88 <__start_il2cpp+0x12f474>
 2bf7a58: f9401660     	ldr	x0, [x19, #0x28]
 2bf7a5c: b40001c0     	cbz	x0, 0x2bf7a94 <__start_il2cpp+0x12f480>
 2bf7a60: f9400281     	ldr	x1, [x20]
 2bf7a64: 52800022     	mov	w2, #0x1                // =1
 2bf7a68: aa1f03e3     	mov	x3, xzr
 2bf7a6c: 94014656     	bl	0x2c493c4 <__start_il2cpp+0x180db0>
 2bf7a70: aa1403e0     	mov	x0, x20
 2bf7a74: f900029f     	str	xzr, [x20]
 2bf7a78: aa1f03e1     	mov	x1, xzr
 2bf7a7c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf7a80: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf7a84: 17f77cc2     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2bf7a88: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf7a8c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf7a90: d65f03c0     	ret
 2bf7a94: 97f77d7d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# Chest :: System.Void OnTapped()
# VA 0x2bf7a98 .. 0x2bf7d00 (next mapped method entry)
 2bf7a98: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2bf7a9c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf7aa0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf7aa4: f001d8d4     	adrp	x20, 0x6712000
 2bf7aa8: aa0003f3     	mov	x19, x0
 2bf7aac: 396ce688     	ldrb	w8, [x20, #0xb39]
 2bf7ab0: 370003c8     	tbnz	w8, #0x0, 0x2bf7b28 <__start_il2cpp+0x12f514>
 2bf7ab4: b001b820     	adrp	x0, 0x62fc000
 2bf7ab8: f943ac00     	ldr	x0, [x0, #0x758]
 2bf7abc: 97f77cc9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7ac0: b001b820     	adrp	x0, 0x62fc000
 2bf7ac4: f943b000     	ldr	x0, [x0, #0x760]
 2bf7ac8: 97f77cc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7acc: b001b820     	adrp	x0, 0x62fc000
 2bf7ad0: f943b400     	ldr	x0, [x0, #0x768]
 2bf7ad4: 97f77cc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7ad8: d001b800     	adrp	x0, 0x62f9000
 2bf7adc: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf7ae0: 97f77cc0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7ae4: d001b800     	adrp	x0, 0x62f9000
 2bf7ae8: f9479800     	ldr	x0, [x0, #0xf30]
 2bf7aec: 97f77cbd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7af0: b001b820     	adrp	x0, 0x62fc000
 2bf7af4: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf7af8: 97f77cba     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7afc: f001b800     	adrp	x0, 0x62fa000
 2bf7b00: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf7b04: 97f77cb7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7b08: b001b820     	adrp	x0, 0x62fc000
 2bf7b0c: f943b800     	ldr	x0, [x0, #0x770]
 2bf7b10: 97f77cb4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7b14: b001b820     	adrp	x0, 0x62fc000
 2bf7b18: f943bc00     	ldr	x0, [x0, #0x778]
 2bf7b1c: 97f77cb1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7b20: 52800028     	mov	w8, #0x1                // =1
 2bf7b24: 392ce688     	strb	w8, [x20, #0xb39]
 2bf7b28: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf7b2c: b4000de0     	cbz	x0, 0x2bf7ce8 <__start_il2cpp+0x12f6d4>
 2bf7b30: b9401808     	ldr	w8, [x0, #0x18]
 2bf7b34: 34000da8     	cbz	w8, 0x2bf7ce8 <__start_il2cpp+0x12f6d4>
 2bf7b38: f001b808     	adrp	x8, 0x62fa000
 2bf7b3c: 2a1f03e1     	mov	w1, wzr
 2bf7b40: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf7b44: f9400102     	ldr	x2, [x8]
 2bf7b48: 943cc406     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf7b4c: b4000d80     	cbz	x0, 0x2bf7cfc <__start_il2cpp+0x12f6e8>
 2bf7b50: 3940d008     	ldrb	w8, [x0, #0x34]
 2bf7b54: aa0003f4     	mov	x20, x0
 2bf7b58: 35000c88     	cbnz	w8, 0x2bf7ce8 <__start_il2cpp+0x12f6d4>
 2bf7b5c: aa1403e0     	mov	x0, x20
 2bf7b60: aa1f03e1     	mov	x1, xzr
 2bf7b64: 94004cd1     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2bf7b68: 36000c00     	tbz	w0, #0x0, 0x2bf7ce8 <__start_il2cpp+0x12f6d4>
 2bf7b6c: b9403288     	ldr	w8, [x20, #0x30]
 2bf7b70: 35000bc8     	cbnz	w8, 0x2bf7ce8 <__start_il2cpp+0x12f6d4>
 2bf7b74: f9408674     	ldr	x20, [x19, #0x108]
 2bf7b78: b4000c34     	cbz	x20, 0x2bf7cfc <__start_il2cpp+0x12f6e8>
 2bf7b7c: d001b80a     	adrp	x10, 0x62f9000
 2bf7b80: f9400288     	ldr	x8, [x20]
 2bf7b84: f9476d4a     	ldr	x10, [x10, #0xed8]
 2bf7b88: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf7b8c: f9400141     	ldr	x1, [x10]
 2bf7b90: b4000129     	cbz	x9, 0x2bf7bb4 <__start_il2cpp+0x12f5a0>
 2bf7b94: f940590a     	ldr	x10, [x8, #0xb0]
 2bf7b98: 9100214a     	add	x10, x10, #0x8
 2bf7b9c: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf7ba0: eb01017f     	cmp	x11, x1
 2bf7ba4: 54000100     	b.eq	0x2bf7bc4 <__start_il2cpp+0x12f5b0>
 2bf7ba8: f1000529     	subs	x9, x9, #0x1
 2bf7bac: 9100414a     	add	x10, x10, #0x10
 2bf7bb0: 54ffff61     	b.ne	0x2bf7b9c <__start_il2cpp+0x12f588>
 2bf7bb4: aa1403e0     	mov	x0, x20
 2bf7bb8: 528001c2     	mov	w2, #0xe                // =14
 2bf7bbc: 97f859ea     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf7bc0: 14000005     	b	0x2bf7bd4 <__start_il2cpp+0x12f5c0>
 2bf7bc4: b9400149     	ldr	w9, [x10]
 2bf7bc8: 11003929     	add	w9, w9, #0xe
 2bf7bcc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf7bd0: 9104e100     	add	x0, x8, #0x138
 2bf7bd4: a9400808     	ldp	x8, x2, [x0]
 2bf7bd8: aa1403e0     	mov	x0, x20
 2bf7bdc: 52800021     	mov	w1, #0x1                // =1
 2bf7be0: d63f0100     	blr	x8
 2bf7be4: b001b837     	adrp	x23, 0x62fc000
 2bf7be8: aa0003f4     	mov	x20, x0
 2bf7bec: f943bef7     	ldr	x23, [x23, #0x778]
 2bf7bf0: f94002e8     	ldr	x8, [x23]
 2bf7bf4: b940e509     	ldr	w9, [x8, #0xe4]
 2bf7bf8: 35000089     	cbnz	w9, 0x2bf7c08 <__start_il2cpp+0x12f5f4>
 2bf7bfc: aa0803e0     	mov	x0, x8
 2bf7c00: 97f77cd7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7c04: f94002e8     	ldr	x8, [x23]
 2bf7c08: f9405d09     	ldr	x9, [x8, #0xb8]
 2bf7c0c: f9400535     	ldr	x21, [x9, #0x8]
 2bf7c10: b5000315     	cbnz	x21, 0x2bf7c70 <__start_il2cpp+0x12f65c>
 2bf7c14: b940e50a     	ldr	w10, [x8, #0xe4]
 2bf7c18: 350000aa     	cbnz	w10, 0x2bf7c2c <__start_il2cpp+0x12f618>
 2bf7c1c: aa0803e0     	mov	x0, x8
 2bf7c20: 97f77ccf     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7c24: f94002e8     	ldr	x8, [x23]
 2bf7c28: f9405d09     	ldr	x9, [x8, #0xb8]
 2bf7c2c: b001b828     	adrp	x8, 0x62fc000
 2bf7c30: f943b508     	ldr	x8, [x8, #0x768]
 2bf7c34: f9400136     	ldr	x22, [x9]
 2bf7c38: f9400100     	ldr	x0, [x8]
 2bf7c3c: 97f77d0f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf7c40: b001b828     	adrp	x8, 0x62fc000
 2bf7c44: aa1603e1     	mov	x1, x22
 2bf7c48: aa1f03e3     	mov	x3, xzr
 2bf7c4c: f943b908     	ldr	x8, [x8, #0x770]
 2bf7c50: aa0003f5     	mov	x21, x0
 2bf7c54: f9400102     	ldr	x2, [x8]
 2bf7c58: 9482f80d     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2bf7c5c: f94002e8     	ldr	x8, [x23]
 2bf7c60: aa1503e1     	mov	x1, x21
 2bf7c64: f9405d00     	ldr	x0, [x8, #0xb8]
 2bf7c68: f8008c15     	str	x21, [x0, #0x8]!
 2bf7c6c: 97f77c48     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf7c70: b001b828     	adrp	x8, 0x62fc000
 2bf7c74: aa1403e0     	mov	x0, x20
 2bf7c78: aa1503e1     	mov	x1, x21
 2bf7c7c: f943b108     	ldr	x8, [x8, #0x760]
 2bf7c80: f9400102     	ldr	x2, [x8]
 2bf7c84: 94215c7f     	bl	0x344ee80 <__start_il2cpp+0x98686c>
 2bf7c88: b001b828     	adrp	x8, 0x62fc000
 2bf7c8c: f943ad08     	ldr	x8, [x8, #0x758]
 2bf7c90: f9400101     	ldr	x1, [x8]
 2bf7c94: 9421512d     	bl	0x344c148 <__start_il2cpp+0x983b34>
 2bf7c98: b4000320     	cbz	x0, 0x2bf7cfc <__start_il2cpp+0x12f6e8>
 2bf7c9c: b9401808     	ldr	w8, [x0, #0x18]
 2bf7ca0: 52800289     	mov	w9, #0x14               // =20
 2bf7ca4: f9408a75     	ldr	x21, [x19, #0x110]
 2bf7ca8: aa1303e0     	mov	x0, x19
 2bf7cac: aa1f03e1     	mov	x1, xzr
 2bf7cb0: 7100011f     	cmp	w8, #0x0
 2bf7cb4: 52800048     	mov	w8, #0x2                // =2
 2bf7cb8: 1a880134     	csel	w20, w9, w8, eq
 2bf7cbc: 94bd1f28     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf7cc0: b40001e0     	cbz	x0, 0x2bf7cfc <__start_il2cpp+0x12f6e8>
 2bf7cc4: aa1f03e1     	mov	x1, xzr
 2bf7cc8: 94bd70da     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2bf7ccc: b4000195     	cbz	x21, 0x2bf7cfc <__start_il2cpp+0x12f6e8>
 2bf7cd0: 52a84408     	mov	w8, #0x42200000         // =1109393408
 2bf7cd4: aa1503e0     	mov	x0, x21
 2bf7cd8: 2a1403e1     	mov	w1, w20
 2bf7cdc: 1e270102     	fmov	s2, w8
 2bf7ce0: aa1f03e2     	mov	x2, xzr
 2bf7ce4: 9403bcd1     	bl	0x2ce7028 <__start_il2cpp+0x21ea14>
 2bf7ce8: aa1303e0     	mov	x0, x19
 2bf7cec: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf7cf0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf7cf4: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2bf7cf8: 17fff372     	b	0x2bf4ac0 <__start_il2cpp+0x12c4ac>
 2bf7cfc: 97f77ce3     	bl	0x29d7088 <mono_class_get_checked+0x970>
