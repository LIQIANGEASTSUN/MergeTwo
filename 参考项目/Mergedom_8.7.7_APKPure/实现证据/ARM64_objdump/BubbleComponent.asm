
# BubbleComponent :: System.Boolean get_IsPicked()
# VA 0x2ba0ad0 .. 0x2ba0ad8 (next mapped method entry)
 2ba0ad0: 39422000     	ldrb	w0, [x0, #0x88]
 2ba0ad4: d65f03c0     	ret

# BubbleComponent :: System.Void set_IsPicked(System.Boolean value)
# VA 0x2ba0ad8 .. 0x2ba0ae0 (next mapped method entry)
 2ba0ad8: 39022001     	strb	w1, [x0, #0x88]
 2ba0adc: d65f03c0     	ret

# BubbleComponent :: System.Void Init(BaseItem producedItem)
# VA 0x2ba0ae0 .. 0x2ba0bf4 (next mapped method entry)
 2ba0ae0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba0ae4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba0ae8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba0aec: d001db96     	adrp	x22, 0x6712000
 2ba0af0: d001ba95     	adrp	x21, 0x62f2000
 2ba0af4: aa0103f4     	mov	x20, x1
 2ba0af8: 39635ec8     	ldrb	w8, [x22, #0x8d7]
 2ba0afc: f940aeb5     	ldr	x21, [x21, #0x158]
 2ba0b00: aa0003f3     	mov	x19, x0
 2ba0b04: 370000c8     	tbnz	w8, #0x0, 0x2ba0b1c <__start_il2cpp+0xd8508>
 2ba0b08: d001ba80     	adrp	x0, 0x62f2000
 2ba0b0c: f940ac00     	ldr	x0, [x0, #0x158]
 2ba0b10: 97f8d8b4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0b14: 52800028     	mov	w8, #0x1                // =1
 2ba0b18: 39235ec8     	strb	w8, [x22, #0x8d7]
 2ba0b1c: f94002a0     	ldr	x0, [x21]
 2ba0b20: b940e408     	ldr	w8, [x0, #0xe4]
 2ba0b24: 35000068     	cbnz	w8, 0x2ba0b30 <__start_il2cpp+0xd851c>
 2ba0b28: 97f8d90d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba0b2c: f94002a0     	ldr	x0, [x21]
 2ba0b30: f9405c08     	ldr	x8, [x0, #0xb8]
 2ba0b34: f9400908     	ldr	x8, [x8, #0x10]
 2ba0b38: f9002a68     	str	x8, [x19, #0x50]
 2ba0b3c: b40005b4     	cbz	x20, 0x2ba0bf0 <__start_il2cpp+0xd85dc>
 2ba0b40: f9402a88     	ldr	x8, [x20, #0x50]
 2ba0b44: b4000568     	cbz	x8, 0x2ba0bf0 <__start_il2cpp+0xd85dc>
 2ba0b48: b9403101     	ldr	w1, [x8, #0x30]
 2ba0b4c: b9404682     	ldr	w2, [x20, #0x44]
 2ba0b50: f9402268     	ldr	x8, [x19, #0x40]
 2ba0b54: 290b0a61     	stp	w1, w2, [x19, #0x58]
 2ba0b58: b40000a8     	cbz	x8, 0x2ba0b6c <__start_il2cpp+0xd8558>
 2ba0b5c: f9400d00     	ldr	x0, [x8, #0x18]
 2ba0b60: b4000080     	cbz	x0, 0x2ba0b70 <__start_il2cpp+0xd855c>
 2ba0b64: 97fffd0b     	bl	0x2b9ff90 <__start_il2cpp+0xd797c>
 2ba0b68: 14000002     	b	0x2ba0b70 <__start_il2cpp+0xd855c>
 2ba0b6c: 2a1f03e0     	mov	w0, wzr
 2ba0b70: 12000008     	and	w8, w0, #0x1
 2ba0b74: aa1403e0     	mov	x0, x20
 2ba0b78: aa1f03e1     	mov	x1, xzr
 2ba0b7c: 39018268     	strb	w8, [x19, #0x60]
 2ba0b80: 94014c03     	bl	0x2bf3b8c <__start_il2cpp+0x12b578>
 2ba0b84: b4000360     	cbz	x0, 0x2ba0bf0 <__start_il2cpp+0xd85dc>
 2ba0b88: f9400c01     	ldr	x1, [x0, #0x18]
 2ba0b8c: aa1303e0     	mov	x0, x19
 2ba0b90: f8080c01     	str	x1, [x0, #0x80]!
 2ba0b94: 97f8d87e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba0b98: aa1403e0     	mov	x0, x20
 2ba0b9c: aa1f03e1     	mov	x1, xzr
 2ba0ba0: 94014bfb     	bl	0x2bf3b8c <__start_il2cpp+0x12b578>
 2ba0ba4: b4000260     	cbz	x0, 0x2ba0bf0 <__start_il2cpp+0xd85dc>
 2ba0ba8: b9402c08     	ldr	w8, [x0, #0x2c]
 2ba0bac: aa1403e0     	mov	x0, x20
 2ba0bb0: aa1f03e1     	mov	x1, xzr
 2ba0bb4: b9004a68     	str	w8, [x19, #0x48]
 2ba0bb8: 94014bf5     	bl	0x2bf3b8c <__start_il2cpp+0x12b578>
 2ba0bbc: b40001a0     	cbz	x0, 0x2ba0bf0 <__start_il2cpp+0xd85dc>
 2ba0bc0: b9403008     	ldr	w8, [x0, #0x30]
 2ba0bc4: 52803e80     	mov	w0, #0x1f4              // =500
 2ba0bc8: aa1f03e1     	mov	x1, xzr
 2ba0bcc: b9008e68     	str	w8, [x19, #0x8c]
 2ba0bd0: 9402974d     	bl	0x2c46904 <__start_il2cpp+0x17e2f0>
 2ba0bd4: f8078e60     	str	x0, [x19, #0x78]!
 2ba0bd8: aa0003e1     	mov	x1, x0
 2ba0bdc: aa1303e0     	mov	x0, x19
 2ba0be0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba0be4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba0be8: f84307fe     	ldr	x30, [sp], #0x30
 2ba0bec: 17f8d868     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2ba0bf0: 97f8d926     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleComponent :: System.Void Spawn(System.DateTime spawnTime)
# VA 0x2ba0bf4 .. 0x2ba0c9c (next mapped method entry)
 2ba0bf4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba0bf8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba0bfc: d001db95     	adrp	x21, 0x6712000
 2ba0c00: aa0103f4     	mov	x20, x1
 2ba0c04: aa0003f3     	mov	x19, x0
 2ba0c08: 396362a8     	ldrb	w8, [x21, #0x8d8]
 2ba0c0c: 370000c8     	tbnz	w8, #0x0, 0x2ba0c24 <__start_il2cpp+0xd8610>
 2ba0c10: d001bac0     	adrp	x0, 0x62fa000
 2ba0c14: f9404400     	ldr	x0, [x0, #0x88]
 2ba0c18: 97f8d872     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0c1c: 52800028     	mov	w8, #0x1                // =1
 2ba0c20: 392362a8     	strb	w8, [x21, #0x8d8]
 2ba0c24: f9403660     	ldr	x0, [x19, #0x68]
 2ba0c28: f9002a74     	str	x20, [x19, #0x50]
 2ba0c2c: b4000360     	cbz	x0, 0x2ba0c98 <__start_il2cpp+0xd8684>
 2ba0c30: f9404261     	ldr	x1, [x19, #0x80]
 2ba0c34: aa1f03e2     	mov	x2, xzr
 2ba0c38: 94bd3a7f     	bl	0x5aef634 <__start_il2cpp+0x3027020>
 2ba0c3c: f9403660     	ldr	x0, [x19, #0x68]
 2ba0c40: b40002c0     	cbz	x0, 0x2ba0c98 <__start_il2cpp+0xd8684>
 2ba0c44: 1e2e1000     	fmov	s0, #1.00000000
 2ba0c48: 1e2e1001     	fmov	s1, #1.00000000
 2ba0c4c: d001bad4     	adrp	x20, 0x62fa000
 2ba0c50: 1e2e1002     	fmov	s2, #1.00000000
 2ba0c54: 1e2e1003     	fmov	s3, #1.00000000
 2ba0c58: f9404694     	ldr	x20, [x20, #0x88]
 2ba0c5c: aa1f03e1     	mov	x1, xzr
 2ba0c60: 94bd3c6c     	bl	0x5aefe10 <__start_il2cpp+0x30277fc>
 2ba0c64: f9400288     	ldr	x8, [x20]
 2ba0c68: f9403a60     	ldr	x0, [x19, #0x70]
 2ba0c6c: f9405d08     	ldr	x8, [x8, #0xb8]
 2ba0c70: b9400109     	ldr	w9, [x8]
 2ba0c74: 11000529     	add	w9, w9, #0x1
 2ba0c78: b9000109     	str	w9, [x8]
 2ba0c7c: b40000e0     	cbz	x0, 0x2ba0c98 <__start_il2cpp+0xd8684>
 2ba0c80: aa1f03e1     	mov	x1, xzr
 2ba0c84: 94051103     	bl	0x2ce5090 <__start_il2cpp+0x21ca7c>
 2ba0c88: aa1303e0     	mov	x0, x19
 2ba0c8c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba0c90: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba0c94: 14000002     	b	0x2ba0c9c <__start_il2cpp+0xd8688>
 2ba0c98: 97f8d8fc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleComponent :: System.Void StartBubbleEndTimer()
# VA 0x2ba0c9c .. 0x2ba0d98 (next mapped method entry)
 2ba0c9c: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2ba0ca0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba0ca4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba0ca8: d001db94     	adrp	x20, 0x6712000
 2ba0cac: 9001bab6     	adrp	x22, 0x62f4000
 2ba0cb0: d001bad5     	adrp	x21, 0x62fa000
 2ba0cb4: 39637a88     	ldrb	w8, [x20, #0x8de]
 2ba0cb8: f9409ad6     	ldr	x22, [x22, #0x130]
 2ba0cbc: f9404ab5     	ldr	x21, [x21, #0x90]
 2ba0cc0: aa0003f3     	mov	x19, x0
 2ba0cc4: 370001e8     	tbnz	w8, #0x0, 0x2ba0d00 <__start_il2cpp+0xd86ec>
 2ba0cc8: d001ba80     	adrp	x0, 0x62f2000
 2ba0ccc: f943f000     	ldr	x0, [x0, #0x7e0]
 2ba0cd0: 97f8d844     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0cd4: d001bac0     	adrp	x0, 0x62fa000
 2ba0cd8: f9404c00     	ldr	x0, [x0, #0x98]
 2ba0cdc: 97f8d841     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0ce0: d001bac0     	adrp	x0, 0x62fa000
 2ba0ce4: f9404800     	ldr	x0, [x0, #0x90]
 2ba0ce8: 97f8d83e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0cec: 9001baa0     	adrp	x0, 0x62f4000
 2ba0cf0: f9409800     	ldr	x0, [x0, #0x130]
 2ba0cf4: 97f8d83b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0cf8: 52800028     	mov	w8, #0x1                // =1
 2ba0cfc: 39237a88     	strb	w8, [x20, #0x8de]
 2ba0d00: f94002c0     	ldr	x0, [x22]
 2ba0d04: f9403e74     	ldr	x20, [x19, #0x78]
 2ba0d08: 97f8d8dc     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba0d0c: f94002a2     	ldr	x2, [x21]
 2ba0d10: aa1303e1     	mov	x1, x19
 2ba0d14: aa1f03e3     	mov	x3, xzr
 2ba0d18: aa0003f5     	mov	x21, x0
 2ba0d1c: 9484171a     	bl	0x4ca6984 <__start_il2cpp+0x21de370>
 2ba0d20: b40003b4     	cbz	x20, 0x2ba0d94 <__start_il2cpp+0xd8780>
 2ba0d24: d001ba96     	adrp	x22, 0x62f2000
 2ba0d28: d001bad7     	adrp	x23, 0x62fa000
 2ba0d2c: aa1403e0     	mov	x0, x20
 2ba0d30: f943f2d6     	ldr	x22, [x22, #0x7e0]
 2ba0d34: f9404ef7     	ldr	x23, [x23, #0x98]
 2ba0d38: aa1503e1     	mov	x1, x21
 2ba0d3c: aa1f03e2     	mov	x2, xzr
 2ba0d40: 94029707     	bl	0x2c4695c <__start_il2cpp+0x17e348>
 2ba0d44: f94002c8     	ldr	x8, [x22]
 2ba0d48: aa0003f4     	mov	x20, x0
 2ba0d4c: aa0803e0     	mov	x0, x8
 2ba0d50: 97f8d8ca     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba0d54: f94002e2     	ldr	x2, [x23]
 2ba0d58: aa1303e1     	mov	x1, x19
 2ba0d5c: aa1f03e3     	mov	x3, xzr
 2ba0d60: aa0003f5     	mov	x21, x0
 2ba0d64: 949305f1     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2ba0d68: b4000174     	cbz	x20, 0x2ba0d94 <__start_il2cpp+0xd8780>
 2ba0d6c: aa1403e0     	mov	x0, x20
 2ba0d70: aa1503e1     	mov	x1, x21
 2ba0d74: aa1f03e2     	mov	x2, xzr
 2ba0d78: 9402970e     	bl	0x2c469b0 <__start_il2cpp+0x17e39c>
 2ba0d7c: b40000c0     	cbz	x0, 0x2ba0d94 <__start_il2cpp+0xd8780>
 2ba0d80: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba0d84: aa1f03e1     	mov	x1, xzr
 2ba0d88: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba0d8c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2ba0d90: 1402970f     	b	0x2c469cc <__start_il2cpp+0x17e3b8>
 2ba0d94: 97f8d8bd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleComponent :: System.Void ConvertBubbleToGold(System.Int32 bubbleGoldConversionLevel)
# VA 0x2ba0d98 .. 0x2ba0e08 (next mapped method entry)
 2ba0d98: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba0d9c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba0da0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba0da4: d001db95     	adrp	x21, 0x6712000
 2ba0da8: d001bad6     	adrp	x22, 0x62fa000
 2ba0dac: 2a0103f3     	mov	w19, w1
 2ba0db0: 396366a8     	ldrb	w8, [x21, #0x8d9]
 2ba0db4: f94052d6     	ldr	x22, [x22, #0xa0]
 2ba0db8: aa0003f4     	mov	x20, x0
 2ba0dbc: 370000c8     	tbnz	w8, #0x0, 0x2ba0dd4 <__start_il2cpp+0xd87c0>
 2ba0dc0: d001bac0     	adrp	x0, 0x62fa000
 2ba0dc4: f9405000     	ldr	x0, [x0, #0xa0]
 2ba0dc8: 97f8d806     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0dcc: 52800028     	mov	w8, #0x1                // =1
 2ba0dd0: 392366a8     	strb	w8, [x21, #0x8d9]
 2ba0dd4: f94002c0     	ldr	x0, [x22]
 2ba0dd8: b940e408     	ldr	w8, [x0, #0xe4]
 2ba0ddc: 35000048     	cbnz	w8, 0x2ba0de4 <__start_il2cpp+0xd87d0>
 2ba0de0: 97f8d85f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba0de4: aa1f03e0     	mov	x0, xzr
 2ba0de8: 9401725a     	bl	0x2bfd750 <__start_il2cpp+0x13513c>
 2ba0dec: 2a0003e1     	mov	w1, w0
 2ba0df0: aa1403e0     	mov	x0, x20
 2ba0df4: 2a1303e2     	mov	w2, w19
 2ba0df8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba0dfc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba0e00: f84307fe     	ldr	x30, [sp], #0x30
 2ba0e04: 14000001     	b	0x2ba0e08 <__start_il2cpp+0xd87f4>

# BubbleComponent :: System.Void ConvertBubbleToItem(System.Int32 itemId, System.Int32 itemLevel)
# VA 0x2ba0e08 .. 0x2ba0ec8 (next mapped method entry)
 2ba0e08: d102c3ff     	sub	sp, sp, #0xb0
 2ba0e0c: a9085ffe     	stp	x30, x23, [sp, #0x80]
 2ba0e10: a90957f6     	stp	x22, x21, [sp, #0x90]
 2ba0e14: a90a4ff4     	stp	x20, x19, [sp, #0xa0]
 2ba0e18: d001db97     	adrp	x23, 0x6712000
 2ba0e1c: d001bad6     	adrp	x22, 0x62fa000
 2ba0e20: 2a0203f4     	mov	w20, w2
 2ba0e24: 39636ee8     	ldrb	w8, [x23, #0x8db]
 2ba0e28: f94056d6     	ldr	x22, [x22, #0xa8]
 2ba0e2c: 2a0103f3     	mov	w19, w1
 2ba0e30: aa0003f5     	mov	x21, x0
 2ba0e34: 370000c8     	tbnz	w8, #0x0, 0x2ba0e4c <__start_il2cpp+0xd8838>
 2ba0e38: d001bac0     	adrp	x0, 0x62fa000
 2ba0e3c: f9405400     	ldr	x0, [x0, #0xa8]
 2ba0e40: 97f8d7e8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0e44: 52800028     	mov	w8, #0x1                // =1
 2ba0e48: 39236ee8     	strb	w8, [x23, #0x8db]
 2ba0e4c: 6f00e400     	movi	v0.2d, #0000000000000000
 2ba0e50: 910003e8     	mov	x8, sp
 2ba0e54: aa1f03e0     	mov	x0, xzr
 2ba0e58: f9003bff     	str	xzr, [sp, #0x70]
 2ba0e5c: ad0183e0     	stp	q0, q0, [sp, #0x30]
 2ba0e60: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2ba0e64: 3d800be0     	str	q0, [sp, #0x20]
 2ba0e68: 9491e5a2     	bl	0x501a4f0 <__start_il2cpp+0x2551edc>
 2ba0e6c: ad4007e0     	ldp	q0, q1, [sp]
 2ba0e70: 910083f7     	add	x23, sp, #0x20
 2ba0e74: b27d02e0     	orr	x0, x23, #0x8
 2ba0e78: aa1f03e1     	mov	x1, xzr
 2ba0e7c: 3c8283e0     	stur	q0, [sp, #0x28]
 2ba0e80: 3c8383e1     	stur	q1, [sp, #0x38]
 2ba0e84: 97f8d7c2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba0e88: 9100a2e0     	add	x0, x23, #0x28
 2ba0e8c: aa1503e1     	mov	x1, x21
 2ba0e90: f90027f5     	str	x21, [sp, #0x48]
 2ba0e94: 97f8d7be     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba0e98: f94002c2     	ldr	x2, [x22]
 2ba0e9c: 12800008     	mov	w8, #-0x1               // =-1
 2ba0ea0: b27d02e0     	orr	x0, x23, #0x8
 2ba0ea4: 910083e1     	add	x1, sp, #0x20
 2ba0ea8: 290a53f3     	stp	w19, w20, [sp, #0x50]
 2ba0eac: b90023e8     	str	w8, [sp, #0x20]
 2ba0eb0: 941e5997     	bl	0x333750c <__start_il2cpp+0x86eef8>
 2ba0eb4: a94a4ff4     	ldp	x20, x19, [sp, #0xa0]
 2ba0eb8: a94957f6     	ldp	x22, x21, [sp, #0x90]
 2ba0ebc: a9485ffe     	ldp	x30, x23, [sp, #0x80]
 2ba0ec0: 9102c3ff     	add	sp, sp, #0xb0
 2ba0ec4: d65f03c0     	ret

# BubbleComponent :: System.Void ConvertBubbleToItem()
# VA 0x2ba0ec8 .. 0x2ba0f0c (next mapped method entry)
 2ba0ec8: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2ba0ecc: 294b0801     	ldp	w1, w2, [x0, #0x58]
 2ba0ed0: aa0003f3     	mov	x19, x0
 2ba0ed4: 97ffffcd     	bl	0x2ba0e08 <__start_il2cpp+0xd87f4>
 2ba0ed8: 294b0660     	ldp	w0, w1, [x19, #0x58]
 2ba0edc: b9404a62     	ldr	w2, [x19, #0x48]
 2ba0ee0: 39418264     	ldrb	w4, [x19, #0x60]
 2ba0ee4: 52800023     	mov	w3, #0x1                // =1
 2ba0ee8: aa1f03e5     	mov	x5, xzr
 2ba0eec: 940307d8     	bl	0x2c62e4c <__start_il2cpp+0x19a838>
 2ba0ef0: f9403e60     	ldr	x0, [x19, #0x78]
 2ba0ef4: b4000080     	cbz	x0, 0x2ba0f04 <__start_il2cpp+0xd88f0>
 2ba0ef8: aa1f03e1     	mov	x1, xzr
 2ba0efc: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2ba0f00: 140296dc     	b	0x2c46a70 <__start_il2cpp+0x17e45c>
 2ba0f04: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2ba0f08: d65f03c0     	ret

# BubbleComponent :: System.Int32 GetRemainingTime()
# VA 0x2ba0f0c .. 0x2ba0ffc (next mapped method entry)
 2ba0f0c: d100c3ff     	sub	sp, sp, #0x30
 2ba0f10: a90157fe     	stp	x30, x21, [sp, #0x10]
 2ba0f14: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba0f18: d001db95     	adrp	x21, 0x6712000
 2ba0f1c: d001ba94     	adrp	x20, 0x62f2000
 2ba0f20: aa0003f3     	mov	x19, x0
 2ba0f24: 39636aa8     	ldrb	w8, [x21, #0x8da]
 2ba0f28: f940ae94     	ldr	x20, [x20, #0x158]
 2ba0f2c: 37000128     	tbnz	w8, #0x0, 0x2ba0f50 <__start_il2cpp+0xd893c>
 2ba0f30: d001ba80     	adrp	x0, 0x62f2000
 2ba0f34: f940ac00     	ldr	x0, [x0, #0x158]
 2ba0f38: 97f8d7aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0f3c: 9001baa0     	adrp	x0, 0x62f4000
 2ba0f40: f940b000     	ldr	x0, [x0, #0x160]
 2ba0f44: 97f8d7a7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba0f48: 52800028     	mov	w8, #0x1                // =1
 2ba0f4c: 39236aa8     	strb	w8, [x21, #0x8da]
 2ba0f50: f9400280     	ldr	x0, [x20]
 2ba0f54: 9001bab5     	adrp	x21, 0x62f4000
 2ba0f58: b940e408     	ldr	w8, [x0, #0xe4]
 2ba0f5c: f940b2b5     	ldr	x21, [x21, #0x160]
 2ba0f60: b9406674     	ldr	w20, [x19, #0x64]
 2ba0f64: f90007ff     	str	xzr, [sp, #0x8]
 2ba0f68: 35000048     	cbnz	w8, 0x2ba0f70 <__start_il2cpp+0xd895c>
 2ba0f6c: 97f8d7fc     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba0f70: 1e620280     	scvtf	d0, w20
 2ba0f74: 91014260     	add	x0, x19, #0x50
 2ba0f78: aa1f03e1     	mov	x1, xzr
 2ba0f7c: 9495272e     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2ba0f80: aa0003f4     	mov	x20, x0
 2ba0f84: aa1f03e0     	mov	x0, xzr
 2ba0f88: 94952b7f     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2ba0f8c: aa0003e1     	mov	x1, x0
 2ba0f90: aa1403e0     	mov	x0, x20
 2ba0f94: aa1f03e2     	mov	x2, xzr
 2ba0f98: 9495323b     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2ba0f9c: f94002a8     	ldr	x8, [x21]
 2ba0fa0: f90007e0     	str	x0, [sp, #0x8]
 2ba0fa4: b940e509     	ldr	w9, [x8, #0xe4]
 2ba0fa8: 35000069     	cbnz	w9, 0x2ba0fb4 <__start_il2cpp+0xd89a0>
 2ba0fac: aa0803e0     	mov	x0, x8
 2ba0fb0: 97f8d7eb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba0fb4: 910023e0     	add	x0, sp, #0x8
 2ba0fb8: aa1f03e1     	mov	x1, xzr
 2ba0fbc: 94960bef     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2ba0fc0: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2ba0fc4: 1e780009     	fcvtzs	w9, d0
 2ba0fc8: 52b0000a     	mov	w10, #-0x80000000       // =-2147483648
 2ba0fcc: 9e670101     	fmov	d1, x8
 2ba0fd0: b9406668     	ldr	w8, [x19, #0x64]
 2ba0fd4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba0fd8: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2ba0fdc: 1e612000     	fcmp	d0, d1
 2ba0fe0: 1a890149     	csel	w9, w10, w9, eq
 2ba0fe4: 6b08013f     	cmp	w9, w8
 2ba0fe8: 1a88b128     	csel	w8, w9, w8, lt
 2ba0fec: 7100013f     	cmp	w9, #0x0
 2ba0ff0: 1a88b3e0     	csel	w0, wzr, w8, lt
 2ba0ff4: 9100c3ff     	add	sp, sp, #0x30
 2ba0ff8: d65f03c0     	ret

# BubbleComponent :: System.Void StopBubbleEndTimer()
# VA 0x2ba0ffc .. 0x2ba1010 (next mapped method entry)
 2ba0ffc: f9403c00     	ldr	x0, [x0, #0x78]
 2ba1000: b4000060     	cbz	x0, 0x2ba100c <__start_il2cpp+0xd89f8>
 2ba1004: aa1f03e1     	mov	x1, xzr
 2ba1008: 1402969a     	b	0x2c46a70 <__start_il2cpp+0x17e45c>
 2ba100c: d65f03c0     	ret

# BubbleComponent :: System.Void PlayBubbleExplosionFX()
# VA 0x2ba1010 .. 0x2ba1084 (next mapped method entry)
 2ba1010: f81e0ffe     	str	x30, [sp, #-0x20]!
 2ba1014: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba1018: aa0003f4     	mov	x20, x0
 2ba101c: f9401800     	ldr	x0, [x0, #0x30]
 2ba1020: b4000300     	cbz	x0, 0x2ba1080 <__start_il2cpp+0xd8a6c>
 2ba1024: 52800241     	mov	w1, #0x12               // =18
 2ba1028: aa1f03e2     	mov	x2, xzr
 2ba102c: 52800023     	mov	w3, #0x1                // =1
 2ba1030: aa1f03e4     	mov	x4, xzr
 2ba1034: 94029ff3     	bl	0x2c49000 <__start_il2cpp+0x1809ec>
 2ba1038: aa0003f3     	mov	x19, x0
 2ba103c: aa1403e0     	mov	x0, x20
 2ba1040: aa1f03e1     	mov	x1, xzr
 2ba1044: 94be7a46     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba1048: b40001c0     	cbz	x0, 0x2ba1080 <__start_il2cpp+0xd8a6c>
 2ba104c: aa1f03e1     	mov	x1, xzr
 2ba1050: 94becbf8     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2ba1054: b4000173     	cbz	x19, 0x2ba1080 <__start_il2cpp+0xd8a6c>
 2ba1058: f9400268     	ldr	x8, [x19]
 2ba105c: aa1303e0     	mov	x0, x19
 2ba1060: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2ba1064: d63f0120     	blr	x9
 2ba1068: 94000007     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2ba106c: b40000a0     	cbz	x0, 0x2ba1080 <__start_il2cpp+0xd8a6c>
 2ba1070: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba1074: f9409400     	ldr	x0, [x0, #0x128]
 2ba1078: f84207fe     	ldr	x30, [sp], #0x20
 2ba107c: 14000015     	b	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2ba1080: 97f8d802     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleComponent :: BaseItem GetItemFromPool(BoardSlot boardSlot, System.Int32 itemId, System.Int32 itemLevel)
# VA 0x2ba11cc .. 0x2ba13a4 (next mapped method entry)
 2ba11cc: d10143ff     	sub	sp, sp, #0x50
 2ba11d0: f9000bfe     	str	x30, [sp, #0x10]
 2ba11d4: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2ba11d8: a90357f6     	stp	x22, x21, [sp, #0x30]
 2ba11dc: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2ba11e0: b001db97     	adrp	x23, 0x6712000
 2ba11e4: 2a0303f6     	mov	w22, w3
 2ba11e8: 2a0203f5     	mov	w21, w2
 2ba11ec: 396372e8     	ldrb	w8, [x23, #0x8dc]
 2ba11f0: aa0103f3     	mov	x19, x1
 2ba11f4: aa0003f4     	mov	x20, x0
 2ba11f8: 37000128     	tbnz	w8, #0x0, 0x2ba121c <__start_il2cpp+0xd8c08>
 2ba11fc: d001ba80     	adrp	x0, 0x62f3000
 2ba1200: f9479000     	ldr	x0, [x0, #0xf20]
 2ba1204: 97f8d6f7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1208: b001bac0     	adrp	x0, 0x62fa000
 2ba120c: f9405c00     	ldr	x0, [x0, #0xb8]
 2ba1210: 97f8d6f4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1214: 52800028     	mov	w8, #0x1                // =1
 2ba1218: 392372e8     	strb	w8, [x23, #0x8dc]
 2ba121c: f9401697     	ldr	x23, [x20, #0x28]
 2ba1220: a9007fff     	stp	xzr, xzr, [sp]
 2ba1224: b4000bf7     	cbz	x23, 0x2ba13a0 <__start_il2cpp+0xd8d8c>
 2ba1228: d001ba8a     	adrp	x10, 0x62f3000
 2ba122c: f94002e8     	ldr	x8, [x23]
 2ba1230: f947914a     	ldr	x10, [x10, #0xf20]
 2ba1234: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba1238: f9400141     	ldr	x1, [x10]
 2ba123c: b4000129     	cbz	x9, 0x2ba1260 <__start_il2cpp+0xd8c4c>
 2ba1240: f940590a     	ldr	x10, [x8, #0xb0]
 2ba1244: 9100214a     	add	x10, x10, #0x8
 2ba1248: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba124c: eb01017f     	cmp	x11, x1
 2ba1250: 54000100     	b.eq	0x2ba1270 <__start_il2cpp+0xd8c5c>
 2ba1254: f1000529     	subs	x9, x9, #0x1
 2ba1258: 9100414a     	add	x10, x10, #0x10
 2ba125c: 54ffff61     	b.ne	0x2ba1248 <__start_il2cpp+0xd8c34>
 2ba1260: aa1703e0     	mov	x0, x23
 2ba1264: 52800022     	mov	w2, #0x1                // =1
 2ba1268: 97f9b43f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba126c: 14000005     	b	0x2ba1280 <__start_il2cpp+0xd8c6c>
 2ba1270: b9400149     	ldr	w9, [x10]
 2ba1274: 11000529     	add	w9, w9, #0x1
 2ba1278: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba127c: 9104e100     	add	x0, x8, #0x138
 2ba1280: a9400808     	ldp	x8, x2, [x0]
 2ba1284: aa1703e0     	mov	x0, x23
 2ba1288: 2a1503e1     	mov	w1, w21
 2ba128c: d63f0100     	blr	x8
 2ba1290: b4000880     	cbz	x0, 0x2ba13a0 <__start_il2cpp+0xd8d8c>
 2ba1294: f9400008     	ldr	x8, [x0]
 2ba1298: 2a1f03e1     	mov	w1, wzr
 2ba129c: 2a1603e2     	mov	w2, w22
 2ba12a0: aa0003f5     	mov	x21, x0
 2ba12a4: a9578d09     	ldp	x9, x3, [x8, #0x178]
 2ba12a8: d63f0120     	blr	x9
 2ba12ac: b40007b3     	cbz	x19, 0x2ba13a0 <__start_il2cpp+0xd8d8c>
 2ba12b0: aa1303e0     	mov	x0, x19
 2ba12b4: aa1503e1     	mov	x1, x21
 2ba12b8: 52800022     	mov	w2, #0x1                // =1
 2ba12bc: 52800037     	mov	w23, #0x1               // =1
 2ba12c0: 97fff993     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2ba12c4: aa1503e0     	mov	x0, x21
 2ba12c8: 52800021     	mov	w1, #0x1                // =1
 2ba12cc: aa1f03e2     	mov	x2, xzr
 2ba12d0: aa1f03e3     	mov	x3, xzr
 2ba12d4: 94014b80     	bl	0x2bf40d4 <__start_il2cpp+0x12bac0>
 2ba12d8: aa1503e0     	mov	x0, x21
 2ba12dc: aa1f03e1     	mov	x1, xzr
 2ba12e0: 94be799f     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2ba12e4: b001db98     	adrp	x24, 0x6712000
 2ba12e8: aa0003f6     	mov	x22, x0
 2ba12ec: 39476708     	ldrb	w8, [x24, #0x1d9]
 2ba12f0: 350000a8     	cbnz	w8, 0x2ba1304 <__start_il2cpp+0xd8cf0>
 2ba12f4: 9001ba80     	adrp	x0, 0x62f1000
 2ba12f8: f940dc00     	ldr	x0, [x0, #0x1b8]
 2ba12fc: 97f8d6b9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1300: 39076717     	strb	w23, [x24, #0x1d9]
 2ba1304: b40004f6     	cbz	x22, 0x2ba13a0 <__start_il2cpp+0xd8d8c>
 2ba1308: 9001ba88     	adrp	x8, 0x62f1000
 2ba130c: aa1603e0     	mov	x0, x22
 2ba1310: aa1f03e1     	mov	x1, xzr
 2ba1314: f940dd08     	ldr	x8, [x8, #0x1b8]
 2ba1318: f9400108     	ldr	x8, [x8]
 2ba131c: f9405d08     	ldr	x8, [x8, #0xb8]
 2ba1320: 2d408901     	ldp	s1, s2, [x8, #0x4]
 2ba1324: bd400100     	ldr	s0, [x8]
 2ba1328: 94becf07     	bl	0x5b54f44 <__start_il2cpp+0x308c930>
 2ba132c: f94002a8     	ldr	x8, [x21]
 2ba1330: aa1503e0     	mov	x0, x21
 2ba1334: 52800021     	mov	w1, #0x1                // =1
 2ba1338: a95b8909     	ldp	x9, x2, [x8, #0x1b8]
 2ba133c: d63f0120     	blr	x9
 2ba1340: 910003e8     	mov	x8, sp
 2ba1344: f9401294     	ldr	x20, [x20, #0x20]
 2ba1348: aa1303e1     	mov	x1, x19
 2ba134c: 91002100     	add	x0, x8, #0x8
 2ba1350: a9004fff     	stp	xzr, x19, [sp]
 2ba1354: 97f8d68e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1358: 910003e0     	mov	x0, sp
 2ba135c: aa1503e1     	mov	x1, x21
 2ba1360: f90003f5     	str	x21, [sp]
 2ba1364: 97f8d68a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1368: b40001d4     	cbz	x20, 0x2ba13a0 <__start_il2cpp+0xd8d8c>
 2ba136c: b001bac8     	adrp	x8, 0x62fa000
 2ba1370: aa1403e0     	mov	x0, x20
 2ba1374: f9405d08     	ldr	x8, [x8, #0xb8]
 2ba1378: a9400be1     	ldp	x1, x2, [sp]
 2ba137c: f9400103     	ldr	x3, [x8]
 2ba1380: 942a06c9     	bl	0x3622ea4 <__start_il2cpp+0xb5a890>
 2ba1384: aa1503e0     	mov	x0, x21
 2ba1388: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba138c: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba1390: f9400bfe     	ldr	x30, [sp, #0x10]
 2ba1394: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2ba1398: 910143ff     	add	sp, sp, #0x50
 2ba139c: d65f03c0     	ret
 2ba13a0: 97f8d73a     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleComponent :: Cysharp.Threading.Tasks.UniTask WhilePicked()
# VA 0x2ba13a4 .. 0x2ba1444 (next mapped method entry)
 2ba13a4: d10143ff     	sub	sp, sp, #0x50
 2ba13a8: a90357fe     	stp	x30, x21, [sp, #0x30]
 2ba13ac: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2ba13b0: b001db94     	adrp	x20, 0x6712000
 2ba13b4: b001bad5     	adrp	x21, 0x62fa000
 2ba13b8: aa0003f3     	mov	x19, x0
 2ba13bc: 39637688     	ldrb	w8, [x20, #0x8dd]
 2ba13c0: f94062b5     	ldr	x21, [x21, #0xc0]
 2ba13c4: 370000c8     	tbnz	w8, #0x0, 0x2ba13dc <__start_il2cpp+0xd8dc8>
 2ba13c8: b001bac0     	adrp	x0, 0x62fa000
 2ba13cc: f9406000     	ldr	x0, [x0, #0xc0]
 2ba13d0: 97f8d684     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba13d4: 52800028     	mov	w8, #0x1                // =1
 2ba13d8: 39237688     	strb	w8, [x20, #0x8dd]
 2ba13dc: 6f00e400     	movi	v0.2d, #0000000000000000
 2ba13e0: 910003f4     	mov	x20, sp
 2ba13e4: aa1f03e1     	mov	x1, xzr
 2ba13e8: b27d0280     	orr	x0, x20, #0x8
 2ba13ec: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2ba13f0: 3d8003e0     	str	q0, [sp]
 2ba13f4: 97f8d666     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba13f8: 91006280     	add	x0, x20, #0x18
 2ba13fc: aa1303e1     	mov	x1, x19
 2ba1400: f9000ff3     	str	x19, [sp, #0x18]
 2ba1404: 97f8d662     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1408: f94002a0     	ldr	x0, [x21]
 2ba140c: 12800009     	mov	w9, #-0x1               // =-1
 2ba1410: b90003e9     	str	w9, [sp]
 2ba1414: f9401c08     	ldr	x8, [x0, #0x38]
 2ba1418: b5000048     	cbnz	x8, 0x2ba1420 <__start_il2cpp+0xd8e0c>
 2ba141c: 97f9b31a     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2ba1420: 910003e0     	mov	x0, sp
 2ba1424: 940002f2     	bl	0x2ba1fec <__start_il2cpp+0xd99d8>
 2ba1428: b27d0280     	orr	x0, x20, #0x8
 2ba142c: aa1f03e1     	mov	x1, xzr
 2ba1430: 97fe21c6     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2ba1434: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba1438: a94357fe     	ldp	x30, x21, [sp, #0x30]
 2ba143c: 910143ff     	add	sp, sp, #0x50
 2ba1440: d65f03c0     	ret

# BubbleComponent :: System.Boolean CheckEndTimerCanceled()
# VA 0x2ba1444 .. 0x2ba145c (next mapped method entry)
 2ba1444: f9403c08     	ldr	x8, [x0, #0x78]
 2ba1448: b4000068     	cbz	x8, 0x2ba1454 <__start_il2cpp+0xd8e40>
 2ba144c: 39404100     	ldrb	w0, [x8, #0x10]
 2ba1450: d65f03c0     	ret
 2ba1454: f81f0ffe     	str	x30, [sp, #-0x10]!
 2ba1458: 97f8d70c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleComponent :: System.Void OnBubbleTimerEnded()
# VA 0x2ba145c .. 0x2ba14d8 (next mapped method entry)
 2ba145c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba1460: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba1464: b001db94     	adrp	x20, 0x6712000
 2ba1468: b001bad5     	adrp	x21, 0x62fa000
 2ba146c: aa0003f3     	mov	x19, x0
 2ba1470: 39637e88     	ldrb	w8, [x20, #0x8df]
 2ba1474: f94052b5     	ldr	x21, [x21, #0xa0]
 2ba1478: 370000c8     	tbnz	w8, #0x0, 0x2ba1490 <__start_il2cpp+0xd8e7c>
 2ba147c: b001bac0     	adrp	x0, 0x62fa000
 2ba1480: f9405000     	ldr	x0, [x0, #0xa0]
 2ba1484: 97f8d657     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1488: 52800028     	mov	w8, #0x1                // =1
 2ba148c: 39237e88     	strb	w8, [x20, #0x8df]
 2ba1490: f94002a0     	ldr	x0, [x21]
 2ba1494: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1498: 35000048     	cbnz	w8, 0x2ba14a0 <__start_il2cpp+0xd8e8c>
 2ba149c: 97f8d6b0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba14a0: aa1f03e0     	mov	x0, xzr
 2ba14a4: 940170ab     	bl	0x2bfd750 <__start_il2cpp+0x13513c>
 2ba14a8: b9408e62     	ldr	w2, [x19, #0x8c]
 2ba14ac: 2a0003e1     	mov	w1, w0
 2ba14b0: aa1303e0     	mov	x0, x19
 2ba14b4: 97fffe55     	bl	0x2ba0e08 <__start_il2cpp+0xd87f4>
 2ba14b8: 294b0660     	ldp	w0, w1, [x19, #0x58]
 2ba14bc: b9404a62     	ldr	w2, [x19, #0x48]
 2ba14c0: 39418264     	ldrb	w4, [x19, #0x60]
 2ba14c4: 2a1f03e3     	mov	w3, wzr
 2ba14c8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba14cc: aa1f03e5     	mov	x5, xzr
 2ba14d0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba14d4: 1403065e     	b	0x2c62e4c <__start_il2cpp+0x19a838>

# BubbleComponent :: System.Void .ctor()
# VA 0x2ba14d8 .. 0x2ba14e8 (next mapped method entry)
 2ba14d8: 52800788     	mov	w8, #0x3c               // =60
 2ba14dc: aa1f03e1     	mov	x1, xzr
 2ba14e0: b9006408     	str	w8, [x0, #0x64]
 2ba14e4: 14be9ad0     	b	0x5b48024 <__start_il2cpp+0x307fa10>

# BubbleComponent :: System.Boolean <StartBubbleEndTimer>b__31_0()
# VA 0x2ba14e8 .. 0x2ba1564 (next mapped method entry)
 2ba14e8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ba14ec: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba14f0: b001db95     	adrp	x21, 0x6712000
 2ba14f4: b001ba94     	adrp	x20, 0x62f2000
 2ba14f8: aa0003f3     	mov	x19, x0
 2ba14fc: 396382a8     	ldrb	w8, [x21, #0x8e0]
 2ba1500: f940ae94     	ldr	x20, [x20, #0x158]
 2ba1504: 370000c8     	tbnz	w8, #0x0, 0x2ba151c <__start_il2cpp+0xd8f08>
 2ba1508: b001ba80     	adrp	x0, 0x62f2000
 2ba150c: f940ac00     	ldr	x0, [x0, #0x158]
 2ba1510: 97f8d634     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1514: 52800028     	mov	w8, #0x1                // =1
 2ba1518: 392382a8     	strb	w8, [x21, #0x8e0]
 2ba151c: f9400280     	ldr	x0, [x20]
 2ba1520: b9406674     	ldr	w20, [x19, #0x64]
 2ba1524: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1528: 35000048     	cbnz	w8, 0x2ba1530 <__start_il2cpp+0xd8f1c>
 2ba152c: 97f8d68c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1530: 1e620280     	scvtf	d0, w20
 2ba1534: 91014260     	add	x0, x19, #0x50
 2ba1538: aa1f03e1     	mov	x1, xzr
 2ba153c: 949525be     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2ba1540: aa0003f3     	mov	x19, x0
 2ba1544: aa1f03e0     	mov	x0, xzr
 2ba1548: 94952a0f     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2ba154c: aa0003e1     	mov	x1, x0
 2ba1550: aa1303e0     	mov	x0, x19
 2ba1554: aa1f03e2     	mov	x2, xzr
 2ba1558: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba155c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ba1560: 14953168     	b	0x50edb00 <__start_il2cpp+0x26254ec>
