
# BaseChest :: System.Void OnItemPlacedToBoard(System.Boolean willPlayParticle = False)
# VA 0x2bf29e0 .. 0x2bf2b3c (next mapped method entry)
 2bf29e0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf29e4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf29e8: 9001d914     	adrp	x20, 0x6712000
 2bf29ec: aa0003f3     	mov	x19, x0
 2bf29f0: 396bfe88     	ldrb	w8, [x20, #0xaff]
 2bf29f4: 37000128     	tbnz	w8, #0x0, 0x2bf2a18 <__start_il2cpp+0x12a404>
 2bf29f8: f001b820     	adrp	x0, 0x62f9000
 2bf29fc: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf2a00: 97f790f8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2a04: d001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf2a08: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf2a0c: 97f790f5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2a10: 52800028     	mov	w8, #0x1                // =1
 2bf2a14: 392bfe88     	strb	w8, [x20, #0xaff]
 2bf2a18: f9407274     	ldr	x20, [x19, #0xe0]
 2bf2a1c: b40008f4     	cbz	x20, 0x2bf2b38 <__start_il2cpp+0x12a524>
 2bf2a20: f001b82a     	adrp	x10, 0x62f9000
 2bf2a24: f9400288     	ldr	x8, [x20]
 2bf2a28: f9476d4a     	ldr	x10, [x10, #0xed8]
 2bf2a2c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf2a30: f9400141     	ldr	x1, [x10]
 2bf2a34: b4000129     	cbz	x9, 0x2bf2a58 <__start_il2cpp+0x12a444>
 2bf2a38: f940590a     	ldr	x10, [x8, #0xb0]
 2bf2a3c: 9100214a     	add	x10, x10, #0x8
 2bf2a40: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf2a44: eb01017f     	cmp	x11, x1
 2bf2a48: 54000100     	b.eq	0x2bf2a68 <__start_il2cpp+0x12a454>
 2bf2a4c: f1000529     	subs	x9, x9, #0x1
 2bf2a50: 9100414a     	add	x10, x10, #0x10
 2bf2a54: 54ffff61     	b.ne	0x2bf2a40 <__start_il2cpp+0x12a42c>
 2bf2a58: aa1403e0     	mov	x0, x20
 2bf2a5c: 52800222     	mov	w2, #0x11               // =17
 2bf2a60: 97f86e41     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf2a64: 14000005     	b	0x2bf2a78 <__start_il2cpp+0x12a464>
 2bf2a68: b9400149     	ldr	w9, [x10]
 2bf2a6c: 11004529     	add	w9, w9, #0x11
 2bf2a70: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf2a74: 9104e100     	add	x0, x8, #0x138
 2bf2a78: a9400808     	ldp	x8, x2, [x0]
 2bf2a7c: aa1403e0     	mov	x0, x20
 2bf2a80: aa1303e1     	mov	x1, x19
 2bf2a84: d63f0100     	blr	x8
 2bf2a88: aa1303e0     	mov	x0, x19
 2bf2a8c: 9400002d     	bl	0x2bf2b40 <__start_il2cpp+0x12a52c>
 2bf2a90: 370004e0     	tbnz	w0, #0x0, 0x2bf2b2c <__start_il2cpp+0x12a518>
 2bf2a94: aa1303e0     	mov	x0, x19
 2bf2a98: 9400004c     	bl	0x2bf2bc8 <__start_il2cpp+0x12a5b4>
 2bf2a9c: 37000480     	tbnz	w0, #0x0, 0x2bf2b2c <__start_il2cpp+0x12a518>
 2bf2aa0: d001b7e8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf2aa4: aa1303f4     	mov	x20, x19
 2bf2aa8: f9478d08     	ldr	x8, [x8, #0xf18]
 2bf2aac: f84f0e95     	ldr	x21, [x20, #0xf0]!
 2bf2ab0: f9400100     	ldr	x0, [x8]
 2bf2ab4: b940e408     	ldr	w8, [x0, #0xe4]
 2bf2ab8: 35000048     	cbnz	w8, 0x2bf2ac0 <__start_il2cpp+0x12a4ac>
 2bf2abc: 97f79128     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf2ac0: aa1503e0     	mov	x0, x21
 2bf2ac4: aa1f03e1     	mov	x1, xzr
 2bf2ac8: aa1f03e2     	mov	x2, xzr
 2bf2acc: 94bd4ecb     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2bf2ad0: 360002e0     	tbz	w0, #0x0, 0x2bf2b2c <__start_il2cpp+0x12a518>
 2bf2ad4: f9401660     	ldr	x0, [x19, #0x28]
 2bf2ad8: b4000300     	cbz	x0, 0x2bf2b38 <__start_il2cpp+0x12a524>
 2bf2adc: 52800021     	mov	w1, #0x1                // =1
 2bf2ae0: aa1303e2     	mov	x2, x19
 2bf2ae4: 2a1f03e3     	mov	w3, wzr
 2bf2ae8: aa1f03e4     	mov	x4, xzr
 2bf2aec: 94015945     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2bf2af0: aa0003e1     	mov	x1, x0
 2bf2af4: f9007a60     	str	x0, [x19, #0xf0]
 2bf2af8: aa1403e0     	mov	x0, x20
 2bf2afc: 97f790a4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf2b00: f9407a74     	ldr	x20, [x19, #0xf0]
 2bf2b04: aa1303e0     	mov	x0, x19
 2bf2b08: aa1f03e1     	mov	x1, xzr
 2bf2b0c: 94bd3394     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf2b10: b4000154     	cbz	x20, 0x2bf2b38 <__start_il2cpp+0x12a524>
 2bf2b14: aa0003e1     	mov	x1, x0
 2bf2b18: aa1403e0     	mov	x0, x20
 2bf2b1c: aa1f03e2     	mov	x2, xzr
 2bf2b20: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2b24: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf2b28: 1401571e     	b	0x2c487a0 <__start_il2cpp+0x18018c>
 2bf2b2c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2b30: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf2b34: d65f03c0     	ret
 2bf2b38: 97f79154     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Boolean IsRechargeable()
# VA 0x2bf2b40 .. 0x2bf2bc8 (next mapped method entry)
 2bf2b40: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf2b44: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2b48: 9001d914     	adrp	x20, 0x6712000
 2bf2b4c: aa0003f3     	mov	x19, x0
 2bf2b50: 396c0a88     	ldrb	w8, [x20, #0xb02]
 2bf2b54: 37000128     	tbnz	w8, #0x0, 0x2bf2b78 <__start_il2cpp+0x12a564>
 2bf2b58: d001b840     	adrp	x0, 0x62fc000
 2bf2b5c: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf2b60: 97f790a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2b64: 9001b840     	adrp	x0, 0x62fa000
 2bf2b68: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf2b6c: 97f7909d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2b70: 52800028     	mov	w8, #0x1                // =1
 2bf2b74: 392c0a88     	strb	w8, [x20, #0xb02]
 2bf2b78: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf2b7c: b40001c0     	cbz	x0, 0x2bf2bb4 <__start_il2cpp+0x12a5a0>
 2bf2b80: b9401808     	ldr	w8, [x0, #0x18]
 2bf2b84: 7100051f     	cmp	w8, #0x1
 2bf2b88: 5400016b     	b.lt	0x2bf2bb4 <__start_il2cpp+0x12a5a0>
 2bf2b8c: 9001b848     	adrp	x8, 0x62fa000
 2bf2b90: 2a1f03e1     	mov	w1, wzr
 2bf2b94: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf2b98: f9400102     	ldr	x2, [x8]
 2bf2b9c: 943cd7f1     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf2ba0: b4000120     	cbz	x0, 0x2bf2bc4 <__start_il2cpp+0x12a5b0>
 2bf2ba4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2ba8: aa1f03e1     	mov	x1, xzr
 2bf2bac: f84207fe     	ldr	x30, [sp], #0x20
 2bf2bb0: 140060be     	b	0x2c0aea8 <__start_il2cpp+0x142894>
 2bf2bb4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2bb8: 2a1f03e0     	mov	w0, wzr
 2bf2bbc: f84207fe     	ldr	x30, [sp], #0x20
 2bf2bc0: d65f03c0     	ret
 2bf2bc4: 97f79131     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Boolean IsRecharging()
# VA 0x2bf2bc8 .. 0x2bf2c50 (next mapped method entry)
 2bf2bc8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf2bcc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2bd0: 9001d914     	adrp	x20, 0x6712000
 2bf2bd4: aa0003f3     	mov	x19, x0
 2bf2bd8: 396c0e88     	ldrb	w8, [x20, #0xb03]
 2bf2bdc: 37000128     	tbnz	w8, #0x0, 0x2bf2c00 <__start_il2cpp+0x12a5ec>
 2bf2be0: d001b840     	adrp	x0, 0x62fc000
 2bf2be4: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf2be8: 97f7907e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2bec: 9001b840     	adrp	x0, 0x62fa000
 2bf2bf0: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf2bf4: 97f7907b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2bf8: 52800028     	mov	w8, #0x1                // =1
 2bf2bfc: 392c0e88     	strb	w8, [x20, #0xb03]
 2bf2c00: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf2c04: b40001e0     	cbz	x0, 0x2bf2c40 <__start_il2cpp+0x12a62c>
 2bf2c08: b9401808     	ldr	w8, [x0, #0x18]
 2bf2c0c: 7100051f     	cmp	w8, #0x1
 2bf2c10: 5400016b     	b.lt	0x2bf2c3c <__start_il2cpp+0x12a628>
 2bf2c14: 9001b848     	adrp	x8, 0x62fa000
 2bf2c18: 2a1f03e1     	mov	w1, wzr
 2bf2c1c: f9427508     	ldr	x8, [x8, #0x4e8]
 2bf2c20: f9400102     	ldr	x2, [x8]
 2bf2c24: 943cd7cf     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf2c28: b4000120     	cbz	x0, 0x2bf2c4c <__start_il2cpp+0x12a638>
 2bf2c2c: 3940d008     	ldrb	w8, [x0, #0x34]
 2bf2c30: 7100011f     	cmp	w8, #0x0
 2bf2c34: 1a9f07e0     	cset	w0, ne
 2bf2c38: 14000002     	b	0x2bf2c40 <__start_il2cpp+0x12a62c>
 2bf2c3c: 2a1f03e0     	mov	w0, wzr
 2bf2c40: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2c44: f84207fe     	ldr	x30, [sp], #0x20
 2bf2c48: d65f03c0     	ret
 2bf2c4c: 97f7910f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Void OnStartItemDrag()
# VA 0x2bf2c50 .. 0x2bf2d48 (next mapped method entry)
 2bf2c50: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf2c54: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2c58: 9001d915     	adrp	x21, 0x6712000
 2bf2c5c: d001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf2c60: aa0003f3     	mov	x19, x0
 2bf2c64: 396c02a8     	ldrb	w8, [x21, #0xb00]
 2bf2c68: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf2c6c: 370000c8     	tbnz	w8, #0x0, 0x2bf2c84 <__start_il2cpp+0x12a670>
 2bf2c70: d001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf2c74: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf2c78: 97f7905a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2c7c: 52800028     	mov	w8, #0x1                // =1
 2bf2c80: 392c02a8     	strb	w8, [x21, #0xb00]
 2bf2c84: f9400280     	ldr	x0, [x20]
 2bf2c88: f9407a74     	ldr	x20, [x19, #0xf0]
 2bf2c8c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf2c90: 35000048     	cbnz	w8, 0x2bf2c98 <__start_il2cpp+0x12a684>
 2bf2c94: 97f790b2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf2c98: aa1403e0     	mov	x0, x20
 2bf2c9c: aa1f03e1     	mov	x1, xzr
 2bf2ca0: aa1f03e2     	mov	x2, xzr
 2bf2ca4: 94bd4e55     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2bf2ca8: 36000080     	tbz	w0, #0x0, 0x2bf2cb8 <__start_il2cpp+0x12a6a4>
 2bf2cac: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2cb0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf2cb4: d65f03c0     	ret
 2bf2cb8: f9407a60     	ldr	x0, [x19, #0xf0]
 2bf2cbc: b4000440     	cbz	x0, 0x2bf2d44 <__start_il2cpp+0x12a730>
 2bf2cc0: aa1f03e1     	mov	x1, xzr
 2bf2cc4: 94bd3326     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf2cc8: b40003e0     	cbz	x0, 0x2bf2d44 <__start_il2cpp+0x12a730>
 2bf2ccc: aa1f03e1     	mov	x1, xzr
 2bf2cd0: 94bd8866     	bl	0x5b54e68 <__start_il2cpp+0x308c854>
 2bf2cd4: f9407a60     	ldr	x0, [x19, #0xf0]
 2bf2cd8: 2d1f0660     	stp	s0, s1, [x19, #0xf8]
 2bf2cdc: bd010262     	str	s2, [x19, #0x100]
 2bf2ce0: b4000320     	cbz	x0, 0x2bf2d44 <__start_il2cpp+0x12a730>
 2bf2ce4: aa1f03e1     	mov	x1, xzr
 2bf2ce8: 94bd331d     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf2cec: 9001d914     	adrp	x20, 0x6712000
 2bf2cf0: aa0003f3     	mov	x19, x0
 2bf2cf4: 39476688     	ldrb	w8, [x20, #0x1d9]
 2bf2cf8: 350000c8     	cbnz	w8, 0x2bf2d10 <__start_il2cpp+0x12a6fc>
 2bf2cfc: f001b7e0     	adrp	x0, 0x62f1000
 2bf2d00: f940dc00     	ldr	x0, [x0, #0x1b8]
 2bf2d04: 97f79037     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2d08: 52800028     	mov	w8, #0x1                // =1
 2bf2d0c: 39076688     	strb	w8, [x20, #0x1d9]
 2bf2d10: f001b7e8     	adrp	x8, 0x62f1000
 2bf2d14: b0ff2489     	adrp	x9, 0x1083000
 2bf2d18: aa1303e0     	mov	x0, x19
 2bf2d1c: f940dd08     	ldr	x8, [x8, #0x1b8]
 2bf2d20: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2d24: bd462923     	ldr	s3, [x9, #0x628]
 2bf2d28: aa1f03e1     	mov	x1, xzr
 2bf2d2c: f9400108     	ldr	x8, [x8]
 2bf2d30: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf2d34: 2d400500     	ldp	s0, s1, [x8]
 2bf2d38: bd400902     	ldr	s2, [x8, #0x8]
 2bf2d3c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf2d40: 140c18f6     	b	0x2ef9118 <__start_il2cpp+0x430b04>
 2bf2d44: 97f790d1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Void OnEndItemDrag()
# VA 0x2bf2d4c .. 0x2bf2de8 (next mapped method entry)
 2bf2d4c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf2d50: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2d54: 9001d915     	adrp	x21, 0x6712000
 2bf2d58: d001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf2d5c: aa0003f3     	mov	x19, x0
 2bf2d60: 396c06a8     	ldrb	w8, [x21, #0xb01]
 2bf2d64: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf2d68: 370000c8     	tbnz	w8, #0x0, 0x2bf2d80 <__start_il2cpp+0x12a76c>
 2bf2d6c: d001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf2d70: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf2d74: 97f7901b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2d78: 52800028     	mov	w8, #0x1                // =1
 2bf2d7c: 392c06a8     	strb	w8, [x21, #0xb01]
 2bf2d80: f9400280     	ldr	x0, [x20]
 2bf2d84: f9407a74     	ldr	x20, [x19, #0xf0]
 2bf2d88: b940e408     	ldr	w8, [x0, #0xe4]
 2bf2d8c: 35000048     	cbnz	w8, 0x2bf2d94 <__start_il2cpp+0x12a780>
 2bf2d90: 97f79073     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf2d94: aa1403e0     	mov	x0, x20
 2bf2d98: aa1f03e1     	mov	x1, xzr
 2bf2d9c: aa1f03e2     	mov	x2, xzr
 2bf2da0: 94bd4e16     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2bf2da4: 36000080     	tbz	w0, #0x0, 0x2bf2db4 <__start_il2cpp+0x12a7a0>
 2bf2da8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2dac: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf2db0: d65f03c0     	ret
 2bf2db4: f9407a60     	ldr	x0, [x19, #0xf0]
 2bf2db8: b4000160     	cbz	x0, 0x2bf2de4 <__start_il2cpp+0x12a7d0>
 2bf2dbc: aa1f03e1     	mov	x1, xzr
 2bf2dc0: 94bd32e7     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf2dc4: 2d5f0660     	ldp	s0, s1, [x19, #0xf8]
 2bf2dc8: b0ff2488     	adrp	x8, 0x1083000
 2bf2dcc: bd410262     	ldr	s2, [x19, #0x100]
 2bf2dd0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2dd4: bd462903     	ldr	s3, [x8, #0x628]
 2bf2dd8: aa1f03e1     	mov	x1, xzr
 2bf2ddc: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf2de0: 140c18ce     	b	0x2ef9118 <__start_il2cpp+0x430b04>
 2bf2de4: 97f790a9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Void SetOpenHintIndicatorVisibility(System.Boolean anotherChestOpening)
# VA 0x2bf2dec .. 0x2bf2e4c (next mapped method entry)
 2bf2dec: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf2df0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf2df4: aa0003f3     	mov	x19, x0
 2bf2df8: f9407400     	ldr	x0, [x0, #0xe8]
 2bf2dfc: b4000260     	cbz	x0, 0x2bf2e48 <__start_il2cpp+0x12a834>
 2bf2e00: 2a0103f4     	mov	w20, w1
 2bf2e04: 2a1f03e1     	mov	w1, wzr
 2bf2e08: aa1f03e2     	mov	x2, xzr
 2bf2e0c: 94bd455b     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf2e10: 37000174     	tbnz	w20, #0x0, 0x2bf2e3c <__start_il2cpp+0x12a828>
 2bf2e14: aa1303e0     	mov	x0, x19
 2bf2e18: 97ffff4a     	bl	0x2bf2b40 <__start_il2cpp+0x12a52c>
 2bf2e1c: 36000100     	tbz	w0, #0x0, 0x2bf2e3c <__start_il2cpp+0x12a828>
 2bf2e20: f9407660     	ldr	x0, [x19, #0xe8]
 2bf2e24: b4000120     	cbz	x0, 0x2bf2e48 <__start_il2cpp+0x12a834>
 2bf2e28: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2e2c: 52800021     	mov	w1, #0x1                // =1
 2bf2e30: aa1f03e2     	mov	x2, xzr
 2bf2e34: f84207fe     	ldr	x30, [sp], #0x20
 2bf2e38: 14bd4550     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf2e3c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf2e40: f84207fe     	ldr	x30, [sp], #0x20
 2bf2e44: d65f03c0     	ret
 2bf2e48: 97f79090     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Void OnRechargeStarted()
# VA 0x2bf2e4c .. 0x2bf2fc4 (next mapped method entry)
 2bf2e4c: d100c3ff     	sub	sp, sp, #0x30
 2bf2e50: a90157fe     	stp	x30, x21, [sp, #0x10]
 2bf2e54: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf2e58: 9001d914     	adrp	x20, 0x6712000
 2bf2e5c: aa0003f3     	mov	x19, x0
 2bf2e60: 396c1288     	ldrb	w8, [x20, #0xb04]
 2bf2e64: 370001e8     	tbnz	w8, #0x0, 0x2bf2ea0 <__start_il2cpp+0x12a88c>
 2bf2e68: f001b820     	adrp	x0, 0x62f9000
 2bf2e6c: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf2e70: 97f78fdc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2e74: 9001b840     	adrp	x0, 0x62fa000
 2bf2e78: f9405000     	ldr	x0, [x0, #0xa0]
 2bf2e7c: 97f78fd9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2e80: 9001b840     	adrp	x0, 0x62fa000
 2bf2e84: f941e000     	ldr	x0, [x0, #0x3c0]
 2bf2e88: 97f78fd6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2e8c: d001b840     	adrp	x0, 0x62fc000
 2bf2e90: f942d800     	ldr	x0, [x0, #0x5b0]
 2bf2e94: 97f78fd3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf2e98: 52800028     	mov	w8, #0x1                // =1
 2bf2e9c: 392c1288     	strb	w8, [x20, #0xb04]
 2bf2ea0: f9402a68     	ldr	x8, [x19, #0x50]
 2bf2ea4: a9007fff     	stp	xzr, xzr, [sp]
 2bf2ea8: b40008c8     	cbz	x8, 0x2bf2fc0 <__start_il2cpp+0x12a9ac>
 2bf2eac: b9403108     	ldr	w8, [x8, #0x30]
 2bf2eb0: b9404669     	ldr	w9, [x19, #0x44]
 2bf2eb4: aa1303e1     	mov	x1, x19
 2bf2eb8: f9406e74     	ldr	x20, [x19, #0xd8]
 2bf2ebc: f90007f3     	str	x19, [sp, #0x8]
 2bf2ec0: 290027e8     	stp	w8, w9, [sp]
 2bf2ec4: 910003e8     	mov	x8, sp
 2bf2ec8: 91002100     	add	x0, x8, #0x8
 2bf2ecc: 97f78fb0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf2ed0: b4000794     	cbz	x20, 0x2bf2fc0 <__start_il2cpp+0x12a9ac>
 2bf2ed4: 9001b848     	adrp	x8, 0x62fa000
 2bf2ed8: aa1403e0     	mov	x0, x20
 2bf2edc: f941e108     	ldr	x8, [x8, #0x3c0]
 2bf2ee0: a9400be1     	ldp	x1, x2, [sp]
 2bf2ee4: f9400103     	ldr	x3, [x8]
 2bf2ee8: 9428c1ea     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2bf2eec: f9402a68     	ldr	x8, [x19, #0x50]
 2bf2ef0: b4000688     	cbz	x8, 0x2bf2fc0 <__start_il2cpp+0x12a9ac>
 2bf2ef4: 9001b849     	adrp	x9, 0x62fa000
 2bf2ef8: f9405129     	ldr	x9, [x9, #0xa0]
 2bf2efc: f9406e74     	ldr	x20, [x19, #0xd8]
 2bf2f00: b9403115     	ldr	w21, [x8, #0x30]
 2bf2f04: f9400120     	ldr	x0, [x9]
 2bf2f08: b940e409     	ldr	w9, [x0, #0xe4]
 2bf2f0c: 35000049     	cbnz	w9, 0x2bf2f14 <__start_il2cpp+0x12a900>
 2bf2f10: 97f79013     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf2f14: 9400002d     	bl	0x2bf2fc8 <__start_il2cpp+0x12a9b4>
 2bf2f18: b4000554     	cbz	x20, 0x2bf2fc0 <__start_il2cpp+0x12a9ac>
 2bf2f1c: d001b848     	adrp	x8, 0x62fc000
 2bf2f20: 6b0002bf     	cmp	w21, w0
 2bf2f24: aa1403e0     	mov	x0, x20
 2bf2f28: f942d908     	ldr	x8, [x8, #0x5b0]
 2bf2f2c: f9400102     	ldr	x2, [x8]
 2bf2f30: 52802028     	mov	w8, #0x101              // =257
 2bf2f34: 9a9f0501     	csinc	x1, x8, xzr, eq
 2bf2f38: 9428c284     	bl	0x3623948 <__start_il2cpp+0xb5b334>
 2bf2f3c: f9407274     	ldr	x20, [x19, #0xe0]
 2bf2f40: b4000414     	cbz	x20, 0x2bf2fc0 <__start_il2cpp+0x12a9ac>
 2bf2f44: f001b82a     	adrp	x10, 0x62f9000
 2bf2f48: f9400288     	ldr	x8, [x20]
 2bf2f4c: f9476d4a     	ldr	x10, [x10, #0xed8]
 2bf2f50: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf2f54: f9400141     	ldr	x1, [x10]
 2bf2f58: b4000129     	cbz	x9, 0x2bf2f7c <__start_il2cpp+0x12a968>
 2bf2f5c: f940590a     	ldr	x10, [x8, #0xb0]
 2bf2f60: 9100214a     	add	x10, x10, #0x8
 2bf2f64: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf2f68: eb01017f     	cmp	x11, x1
 2bf2f6c: 54000100     	b.eq	0x2bf2f8c <__start_il2cpp+0x12a978>
 2bf2f70: f1000529     	subs	x9, x9, #0x1
 2bf2f74: 9100414a     	add	x10, x10, #0x10
 2bf2f78: 54ffff61     	b.ne	0x2bf2f64 <__start_il2cpp+0x12a950>
 2bf2f7c: aa1403e0     	mov	x0, x20
 2bf2f80: 52800262     	mov	w2, #0x13               // =19
 2bf2f84: 97f86cf8     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf2f88: 14000005     	b	0x2bf2f9c <__start_il2cpp+0x12a988>
 2bf2f8c: b9400149     	ldr	w9, [x10]
 2bf2f90: 11004d29     	add	w9, w9, #0x13
 2bf2f94: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf2f98: 9104e100     	add	x0, x8, #0x138
 2bf2f9c: a9400c08     	ldp	x8, x3, [x0]
 2bf2fa0: aa1403e0     	mov	x0, x20
 2bf2fa4: aa1303e1     	mov	x1, x19
 2bf2fa8: 52800022     	mov	w2, #0x1                // =1
 2bf2fac: d63f0100     	blr	x8
 2bf2fb0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf2fb4: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2bf2fb8: 9100c3ff     	add	sp, sp, #0x30
 2bf2fbc: d65f03c0     	ret
 2bf2fc0: 97f79032     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Void OnRechargeCompleted()
# VA 0x2bf3018 .. 0x2bf31cc (next mapped method entry)
 2bf3018: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf301c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf3020: f001d8f4     	adrp	x20, 0x6712000
 2bf3024: aa0003f3     	mov	x19, x0
 2bf3028: 396c1688     	ldrb	w8, [x20, #0xb05]
 2bf302c: 370001e8     	tbnz	w8, #0x0, 0x2bf3068 <__start_il2cpp+0x12aa54>
 2bf3030: d001b820     	adrp	x0, 0x62f9000
 2bf3034: f9476c00     	ldr	x0, [x0, #0xed8]
 2bf3038: 97f78f6a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf303c: f001b820     	adrp	x0, 0x62fa000
 2bf3040: f9405000     	ldr	x0, [x0, #0xa0]
 2bf3044: 97f78f67     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3048: b001b7e0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf304c: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf3050: 97f78f64     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3054: b001b840     	adrp	x0, 0x62fc000
 2bf3058: f942d800     	ldr	x0, [x0, #0x5b0]
 2bf305c: 97f78f61     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3060: 52800028     	mov	w8, #0x1                // =1
 2bf3064: 392c1688     	strb	w8, [x20, #0xb05]
 2bf3068: b001b7f4     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf306c: 39432268     	ldrb	w8, [x19, #0xc8]
 2bf3070: f9478e94     	ldr	x20, [x20, #0xf18]
 2bf3074: 35000068     	cbnz	w8, 0x2bf3080 <__start_il2cpp+0x12aa6c>
 2bf3078: aa1303e0     	mov	x0, x19
 2bf307c: 94000611     	bl	0x2bf48c0 <__start_il2cpp+0x12c2ac>
 2bf3080: f9400280     	ldr	x0, [x20]
 2bf3084: aa1303f4     	mov	x20, x19
 2bf3088: f84f0e95     	ldr	x21, [x20, #0xf0]!
 2bf308c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf3090: 35000048     	cbnz	w8, 0x2bf3098 <__start_il2cpp+0x12aa84>
 2bf3094: 97f78fb2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf3098: aa1503e0     	mov	x0, x21
 2bf309c: aa1f03e1     	mov	x1, xzr
 2bf30a0: aa1f03e2     	mov	x2, xzr
 2bf30a4: 94bd4d55     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2bf30a8: 360002a0     	tbz	w0, #0x0, 0x2bf30fc <__start_il2cpp+0x12aae8>
 2bf30ac: f9401660     	ldr	x0, [x19, #0x28]
 2bf30b0: b40008c0     	cbz	x0, 0x2bf31c8 <__start_il2cpp+0x12abb4>
 2bf30b4: 52800021     	mov	w1, #0x1                // =1
 2bf30b8: aa1303e2     	mov	x2, x19
 2bf30bc: 2a1f03e3     	mov	w3, wzr
 2bf30c0: aa1f03e4     	mov	x4, xzr
 2bf30c4: 940157cf     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2bf30c8: aa0003e1     	mov	x1, x0
 2bf30cc: f9007a60     	str	x0, [x19, #0xf0]
 2bf30d0: aa1403e0     	mov	x0, x20
 2bf30d4: 97f78f2e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf30d8: f9407a74     	ldr	x20, [x19, #0xf0]
 2bf30dc: aa1303e0     	mov	x0, x19
 2bf30e0: aa1f03e1     	mov	x1, xzr
 2bf30e4: 94bd321e     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf30e8: b4000714     	cbz	x20, 0x2bf31c8 <__start_il2cpp+0x12abb4>
 2bf30ec: aa0003e1     	mov	x1, x0
 2bf30f0: aa1403e0     	mov	x0, x20
 2bf30f4: aa1f03e2     	mov	x2, xzr
 2bf30f8: 940155aa     	bl	0x2c487a0 <__start_il2cpp+0x18018c>
 2bf30fc: f9402a68     	ldr	x8, [x19, #0x50]
 2bf3100: b4000648     	cbz	x8, 0x2bf31c8 <__start_il2cpp+0x12abb4>
 2bf3104: f001b829     	adrp	x9, 0x62fa000
 2bf3108: f9405129     	ldr	x9, [x9, #0xa0]
 2bf310c: f9406e74     	ldr	x20, [x19, #0xd8]
 2bf3110: b9403115     	ldr	w21, [x8, #0x30]
 2bf3114: f9400120     	ldr	x0, [x9]
 2bf3118: b940e409     	ldr	w9, [x0, #0xe4]
 2bf311c: 35000049     	cbnz	w9, 0x2bf3124 <__start_il2cpp+0x12ab10>
 2bf3120: 97f78f8f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf3124: 97ffffa9     	bl	0x2bf2fc8 <__start_il2cpp+0x12a9b4>
 2bf3128: b4000514     	cbz	x20, 0x2bf31c8 <__start_il2cpp+0x12abb4>
 2bf312c: b001b848     	adrp	x8, 0x62fc000
 2bf3130: 6b0002bf     	cmp	w21, w0
 2bf3134: aa1403e0     	mov	x0, x20
 2bf3138: f942d908     	ldr	x8, [x8, #0x5b0]
 2bf313c: 1a9f17e9     	cset	w9, eq
 2bf3140: d3787d21     	ubfiz	x1, x9, #8, #32
 2bf3144: f9400102     	ldr	x2, [x8]
 2bf3148: 9428c200     	bl	0x3623948 <__start_il2cpp+0xb5b334>
 2bf314c: f9407274     	ldr	x20, [x19, #0xe0]
 2bf3150: b40003d4     	cbz	x20, 0x2bf31c8 <__start_il2cpp+0x12abb4>
 2bf3154: d001b82a     	adrp	x10, 0x62f9000
 2bf3158: f9400288     	ldr	x8, [x20]
 2bf315c: f9476d4a     	ldr	x10, [x10, #0xed8]
 2bf3160: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf3164: f9400141     	ldr	x1, [x10]
 2bf3168: b4000129     	cbz	x9, 0x2bf318c <__start_il2cpp+0x12ab78>
 2bf316c: f940590a     	ldr	x10, [x8, #0xb0]
 2bf3170: 9100214a     	add	x10, x10, #0x8
 2bf3174: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf3178: eb01017f     	cmp	x11, x1
 2bf317c: 54000100     	b.eq	0x2bf319c <__start_il2cpp+0x12ab88>
 2bf3180: f1000529     	subs	x9, x9, #0x1
 2bf3184: 9100414a     	add	x10, x10, #0x10
 2bf3188: 54ffff61     	b.ne	0x2bf3174 <__start_il2cpp+0x12ab60>
 2bf318c: aa1403e0     	mov	x0, x20
 2bf3190: 52800262     	mov	w2, #0x13               // =19
 2bf3194: 97f86c74     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf3198: 14000005     	b	0x2bf31ac <__start_il2cpp+0x12ab98>
 2bf319c: b9400149     	ldr	w9, [x10]
 2bf31a0: 11004d29     	add	w9, w9, #0x13
 2bf31a4: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf31a8: 9104e100     	add	x0, x8, #0x138
 2bf31ac: a9400c04     	ldp	x4, x3, [x0]
 2bf31b0: aa1403e0     	mov	x0, x20
 2bf31b4: aa1303e1     	mov	x1, x19
 2bf31b8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf31bc: 2a1f03e2     	mov	w2, wzr
 2bf31c0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf31c4: d61f0080     	br	x4
 2bf31c8: 97f78fb0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2bf31dc .. 0x2bf32c4 (next mapped method entry)
 2bf31dc: d10243ff     	sub	sp, sp, #0x90
 2bf31e0: a9065ffe     	stp	x30, x23, [sp, #0x60]
 2bf31e4: a90757f6     	stp	x22, x21, [sp, #0x70]
 2bf31e8: a9084ff4     	stp	x20, x19, [sp, #0x80]
 2bf31ec: f001d8f6     	adrp	x22, 0x6712000
 2bf31f0: b001b855     	adrp	x21, 0x62fc000
 2bf31f4: aa0003f4     	mov	x20, x0
 2bf31f8: 396c1ac9     	ldrb	w9, [x22, #0xb06]
 2bf31fc: f942deb5     	ldr	x21, [x21, #0x5b8]
 2bf3200: aa0803f3     	mov	x19, x8
 2bf3204: 37000189     	tbnz	w9, #0x0, 0x2bf3234 <__start_il2cpp+0x12ac20>
 2bf3208: b001b840     	adrp	x0, 0x62fc000
 2bf320c: f942e000     	ldr	x0, [x0, #0x5c0]
 2bf3210: 97f78ef4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3214: b001b840     	adrp	x0, 0x62fc000
 2bf3218: f942dc00     	ldr	x0, [x0, #0x5b8]
 2bf321c: 97f78ef1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf3220: b001b840     	adrp	x0, 0x62fc000
 2bf3224: f942e400     	ldr	x0, [x0, #0x5c8]
 2bf3228: 97f78eee     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf322c: 52800028     	mov	w8, #0x1                // =1
 2bf3230: 392c1ac8     	strb	w8, [x22, #0xb06]
 2bf3234: 6f00e400     	movi	v0.2d, #0000000000000000
 2bf3238: b001b857     	adrp	x23, 0x62fc000
 2bf323c: 910083f6     	add	x22, sp, #0x20
 2bf3240: b27d02c0     	orr	x0, x22, #0x8
 2bf3244: aa1f03e1     	mov	x1, xzr
 2bf3248: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2bf324c: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2bf3250: f9001fff     	str	xzr, [sp, #0x38]
 2bf3254: f942e6f7     	ldr	x23, [x23, #0x5c8]
 2bf3258: a902ffff     	stp	xzr, xzr, [sp, #0x28]
 2bf325c: 97f78ecc     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3260: 910082c0     	add	x0, x22, #0x20
 2bf3264: aa1403e1     	mov	x1, x20
 2bf3268: f90023f4     	str	x20, [sp, #0x40]
 2bf326c: 97f78ec8     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf3270: f94002a0     	ldr	x0, [x21]
 2bf3274: 12800009     	mov	w9, #-0x1               // =-1
 2bf3278: b90023e9     	str	w9, [sp, #0x20]
 2bf327c: f9401c08     	ldr	x8, [x0, #0x38]
 2bf3280: b5000048     	cbnz	x8, 0x2bf3288 <__start_il2cpp+0x12ac74>
 2bf3284: 97f86b80     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2bf3288: 910083e0     	add	x0, sp, #0x20
 2bf328c: 940000a7     	bl	0x2bf3528 <__start_il2cpp+0x12af14>
 2bf3290: f94002e1     	ldr	x1, [x23]
 2bf3294: 910023e8     	add	x8, sp, #0x8
 2bf3298: b27d02c0     	orr	x0, x22, #0x8
 2bf329c: 97fea422     	bl	0x2b9c324 <__start_il2cpp+0xd3d10>
 2bf32a0: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf32a4: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf32a8: a94757f6     	ldp	x22, x21, [sp, #0x70]
 2bf32ac: 3d800260     	str	q0, [x19]
 2bf32b0: a9465ffe     	ldp	x30, x23, [sp, #0x60]
 2bf32b4: f9000a68     	str	x8, [x19, #0x10]
 2bf32b8: a9484ff4     	ldp	x20, x19, [sp, #0x80]
 2bf32bc: 910243ff     	add	sp, sp, #0x90
 2bf32c0: d65f03c0     	ret

# BaseChest :: System.Boolean CanHintedForMerge()
# VA 0x2bf32c4 .. 0x2bf3374 (next mapped method entry)
 2bf32c4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf32c8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf32cc: f001d8f4     	adrp	x20, 0x6712000
 2bf32d0: aa0003f3     	mov	x19, x0
 2bf32d4: 396c1e88     	ldrb	w8, [x20, #0xb07]
 2bf32d8: 37000128     	tbnz	w8, #0x0, 0x2bf32fc <__start_il2cpp+0x12ace8>
 2bf32dc: b001b840     	adrp	x0, 0x62fc000
 2bf32e0: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf32e4: 97f78ebf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf32e8: f001b820     	adrp	x0, 0x62fa000
 2bf32ec: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf32f0: 97f78ebc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf32f4: 52800028     	mov	w8, #0x1                // =1
 2bf32f8: 392c1e88     	strb	w8, [x20, #0xb07]
 2bf32fc: aa1303e0     	mov	x0, x19
 2bf3300: 9400001d     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf3304: 370001a0     	tbnz	w0, #0x0, 0x2bf3338 <__start_il2cpp+0x12ad24>
 2bf3308: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf330c: b4000160     	cbz	x0, 0x2bf3338 <__start_il2cpp+0x12ad24>
 2bf3310: b9401808     	ldr	w8, [x0, #0x18]
 2bf3314: 34000128     	cbz	w8, 0x2bf3338 <__start_il2cpp+0x12ad24>
 2bf3318: f001b834     	adrp	x20, 0x62fa000
 2bf331c: 2a1f03e1     	mov	w1, wzr
 2bf3320: f9427694     	ldr	x20, [x20, #0x4e8]
 2bf3324: f9400282     	ldr	x2, [x20]
 2bf3328: 943cd60e     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf332c: b4000220     	cbz	x0, 0x2bf3370 <__start_il2cpp+0x12ad5c>
 2bf3330: 3940d008     	ldrb	w8, [x0, #0x34]
 2bf3334: 340000a8     	cbz	w8, 0x2bf3348 <__start_il2cpp+0x12ad34>
 2bf3338: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf333c: 2a1f03e0     	mov	w0, wzr
 2bf3340: f84207fe     	ldr	x30, [sp], #0x20
 2bf3344: d65f03c0     	ret
 2bf3348: f9405e60     	ldr	x0, [x19, #0xb8]
 2bf334c: b4000120     	cbz	x0, 0x2bf3370 <__start_il2cpp+0x12ad5c>
 2bf3350: f9400282     	ldr	x2, [x20]
 2bf3354: 2a1f03e1     	mov	w1, wzr
 2bf3358: 943cd602     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf335c: b40000a0     	cbz	x0, 0x2bf3370 <__start_il2cpp+0x12ad5c>
 2bf3360: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf3364: aa1f03e1     	mov	x1, xzr
 2bf3368: f84207fe     	ldr	x30, [sp], #0x20
 2bf336c: 14005ecf     	b	0x2c0aea8 <__start_il2cpp+0x142894>
 2bf3370: 97f78f46     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BaseChest :: System.Void .ctor()
# VA 0x2bf3410 .. 0x2bf3414 (next mapped method entry)
 2bf3410: 17fffd57     	b	0x2bf296c <__start_il2cpp+0x12a358>

# BaseChest :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> <>n__0(BaseItem otherItem)
# VA 0x2bf3414 .. 0x2bf3444 (next mapped method entry)
 2bf3414: d100c3ff     	sub	sp, sp, #0x30
 2bf3418: a9024ffe     	stp	x30, x19, [sp, #0x20]
 2bf341c: aa0803f3     	mov	x19, x8
 2bf3420: 910023e8     	add	x8, sp, #0x8
 2bf3424: 94000008     	bl	0x2bf3444 <__start_il2cpp+0x12ae30>
 2bf3428: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf342c: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf3430: 3d800260     	str	q0, [x19]
 2bf3434: f9000a68     	str	x8, [x19, #0x10]
 2bf3438: a9424ffe     	ldp	x30, x19, [sp, #0x20]
 2bf343c: 9100c3ff     	add	sp, sp, #0x30
 2bf3440: d65f03c0     	ret
