
# ActiveItemTask :: System.Int32 get_number()
# VA 0x2e55a00 .. 0x2e55a18 (next mapped method entry)
 2e55a00: f9400808     	ldr	x8, [x0, #0x10]
 2e55a04: b4000068     	cbz	x8, 0x2e55a10 <__start_il2cpp+0x38d3fc>
 2e55a08: b9401100     	ldr	w0, [x8, #0x10]
 2e55a0c: d65f03c0     	ret
 2e55a10: f81f0ffe     	str	x30, [sp, #-0x10]!
 2e55a14: 97ee059d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemTask :: System.Int32 get_realNumber()
# VA 0x2e55a18 .. 0x2e55a30 (next mapped method entry)
 2e55a18: f9400808     	ldr	x8, [x0, #0x10]
 2e55a1c: b4000068     	cbz	x8, 0x2e55a28 <__start_il2cpp+0x38d414>
 2e55a20: b9401500     	ldr	w0, [x8, #0x14]
 2e55a24: d65f03c0     	ret
 2e55a28: f81f0ffe     	str	x30, [sp, #-0x10]!
 2e55a2c: 97ee0597     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemTask :: System.Int32 get_providerId()
# VA 0x2e55a30 .. 0x2e55a48 (next mapped method entry)
 2e55a30: f9400808     	ldr	x8, [x0, #0x10]
 2e55a34: b4000068     	cbz	x8, 0x2e55a40 <__start_il2cpp+0x38d42c>
 2e55a38: b9401900     	ldr	w0, [x8, #0x18]
 2e55a3c: d65f03c0     	ret
 2e55a40: f81f0ffe     	str	x30, [sp, #-0x10]!
 2e55a44: 97ee0591     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ActiveItemTask :: System.Void .ctor()
# VA 0x2e55a48 .. 0x2e55b24 (next mapped method entry)
 2e55a48: f81c0ffe     	str	x30, [sp, #-0x40]!
 2e55a4c: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2e55a50: a90257f6     	stp	x22, x21, [sp, #0x20]
 2e55a54: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2e55a58: f001a577     	adrp	x23, 0x6304000
 2e55a5c: d001c5f8     	adrp	x24, 0x6713000
 2e55a60: f001a574     	adrp	x20, 0x6304000
 2e55a64: 9001a5d6     	adrp	x22, 0x630d000
 2e55a68: 9001a5d5     	adrp	x21, 0x630d000
 2e55a6c: f9463af7     	ldr	x23, [x23, #0xc70]
 2e55a70: f9463e94     	ldr	x20, [x20, #0xc78]
 2e55a74: 39797f08     	ldrb	w8, [x24, #0xe5f]
 2e55a78: f9444ad6     	ldr	x22, [x22, #0x890]
 2e55a7c: f9444eb5     	ldr	x21, [x21, #0x898]
 2e55a80: aa0003f3     	mov	x19, x0
 2e55a84: 370001e8     	tbnz	w8, #0x0, 0x2e55ac0 <__start_il2cpp+0x38d4ac>
 2e55a88: f001a560     	adrp	x0, 0x6304000
 2e55a8c: f9463c00     	ldr	x0, [x0, #0xc78]
 2e55a90: 97ee04d4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55a94: f001a560     	adrp	x0, 0x6304000
 2e55a98: f9463800     	ldr	x0, [x0, #0xc70]
 2e55a9c: 97ee04d1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55aa0: 9001a5c0     	adrp	x0, 0x630d000
 2e55aa4: f9444c00     	ldr	x0, [x0, #0x898]
 2e55aa8: 97ee04ce     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55aac: 9001a5c0     	adrp	x0, 0x630d000
 2e55ab0: f9444800     	ldr	x0, [x0, #0x890]
 2e55ab4: 97ee04cb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55ab8: 52800028     	mov	w8, #0x1                // =1
 2e55abc: 39397f08     	strb	w8, [x24, #0xe5f]
 2e55ac0: f94002e0     	ldr	x0, [x23]
 2e55ac4: 97ee056d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e55ac8: f9400281     	ldr	x1, [x20]
 2e55acc: aa0003f4     	mov	x20, x0
 2e55ad0: 94684ac0     	bl	0x48685d0 <__start_il2cpp+0x1d9ffbc>
 2e55ad4: aa1303e0     	mov	x0, x19
 2e55ad8: aa1403e1     	mov	x1, x20
 2e55adc: f8020c14     	str	x20, [x0, #0x20]!
 2e55ae0: 97ee04ab     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e55ae4: f94002c0     	ldr	x0, [x22]
 2e55ae8: 97ee0564     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e55aec: f94002a1     	ldr	x1, [x21]
 2e55af0: aa0003f4     	mov	x20, x0
 2e55af4: 9430d7fd     	bl	0x3a8bae8 <__start_il2cpp+0xfc34d4>
 2e55af8: aa1303e0     	mov	x0, x19
 2e55afc: aa1403e1     	mov	x1, x20
 2e55b00: f8028c14     	str	x20, [x0, #0x28]!
 2e55b04: 97ee04a2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e55b08: aa1303e0     	mov	x0, x19
 2e55b0c: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2e55b10: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2e55b14: aa1f03e1     	mov	x1, xzr
 2e55b18: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2e55b1c: f84407fe     	ldr	x30, [sp], #0x40
 2e55b20: 148be80a     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ActiveItemTask :: System.Void .ctor(ActiveItemTaskData d)
# VA 0x2e55b24 .. 0x2e55c14 (next mapped method entry)
 2e55b24: a9bc67fe     	stp	x30, x25, [sp, #-0x40]!
 2e55b28: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2e55b2c: a90257f6     	stp	x22, x21, [sp, #0x20]
 2e55b30: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2e55b34: f001a578     	adrp	x24, 0x6304000
 2e55b38: d001c5f9     	adrp	x25, 0x6713000
 2e55b3c: f001a575     	adrp	x21, 0x6304000
 2e55b40: 9001a5d7     	adrp	x23, 0x630d000
 2e55b44: 9001a5d6     	adrp	x22, 0x630d000
 2e55b48: f9463b18     	ldr	x24, [x24, #0xc70]
 2e55b4c: f9463eb5     	ldr	x21, [x21, #0xc78]
 2e55b50: 39798328     	ldrb	w8, [x25, #0xe60]
 2e55b54: f9444af7     	ldr	x23, [x23, #0x890]
 2e55b58: f9444ed6     	ldr	x22, [x22, #0x898]
 2e55b5c: aa0103f3     	mov	x19, x1
 2e55b60: aa0003f4     	mov	x20, x0
 2e55b64: 370001e8     	tbnz	w8, #0x0, 0x2e55ba0 <__start_il2cpp+0x38d58c>
 2e55b68: f001a560     	adrp	x0, 0x6304000
 2e55b6c: f9463c00     	ldr	x0, [x0, #0xc78]
 2e55b70: 97ee049c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55b74: f001a560     	adrp	x0, 0x6304000
 2e55b78: f9463800     	ldr	x0, [x0, #0xc70]
 2e55b7c: 97ee0499     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55b80: 9001a5c0     	adrp	x0, 0x630d000
 2e55b84: f9444c00     	ldr	x0, [x0, #0x898]
 2e55b88: 97ee0496     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55b8c: 9001a5c0     	adrp	x0, 0x630d000
 2e55b90: f9444800     	ldr	x0, [x0, #0x890]
 2e55b94: 97ee0493     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55b98: 52800028     	mov	w8, #0x1                // =1
 2e55b9c: 39398328     	strb	w8, [x25, #0xe60]
 2e55ba0: f9400300     	ldr	x0, [x24]
 2e55ba4: 97ee0535     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e55ba8: f94002a1     	ldr	x1, [x21]
 2e55bac: aa0003f5     	mov	x21, x0
 2e55bb0: 94684a88     	bl	0x48685d0 <__start_il2cpp+0x1d9ffbc>
 2e55bb4: aa1403e0     	mov	x0, x20
 2e55bb8: aa1503e1     	mov	x1, x21
 2e55bbc: f8020c15     	str	x21, [x0, #0x20]!
 2e55bc0: 97ee0473     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e55bc4: f94002e0     	ldr	x0, [x23]
 2e55bc8: 97ee052c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2e55bcc: f94002c1     	ldr	x1, [x22]
 2e55bd0: aa0003f5     	mov	x21, x0
 2e55bd4: 9430d7c5     	bl	0x3a8bae8 <__start_il2cpp+0xfc34d4>
 2e55bd8: aa1403e0     	mov	x0, x20
 2e55bdc: aa1503e1     	mov	x1, x21
 2e55be0: f8028c15     	str	x21, [x0, #0x28]!
 2e55be4: 97ee046a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e55be8: aa1403e0     	mov	x0, x20
 2e55bec: aa1f03e1     	mov	x1, xzr
 2e55bf0: 948be7d6     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2e55bf4: f8010e93     	str	x19, [x20, #0x10]!
 2e55bf8: aa1403e0     	mov	x0, x20
 2e55bfc: aa1303e1     	mov	x1, x19
 2e55c00: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2e55c04: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2e55c08: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2e55c0c: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2e55c10: 17ee045f     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ActiveItemTask :: System.String ToString()
# VA 0x2e55c14 .. 0x2e55cb4 (next mapped method entry)
 2e55c14: d100c3ff     	sub	sp, sp, #0x30
 2e55c18: a90157fe     	stp	x30, x21, [sp, #0x10]
 2e55c1c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2e55c20: d001c5f4     	adrp	x20, 0x6713000
 2e55c24: aa0003f3     	mov	x19, x0
 2e55c28: 39798688     	ldrb	w8, [x20, #0xe61]
 2e55c2c: 370000c8     	tbnz	w8, #0x0, 0x2e55c44 <__start_il2cpp+0x38d630>
 2e55c30: 9001a4e0     	adrp	x0, 0x62f1000
 2e55c34: f9419400     	ldr	x0, [x0, #0x328]
 2e55c38: 97ee046a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55c3c: 52800028     	mov	w8, #0x1                // =1
 2e55c40: 39398688     	strb	w8, [x20, #0xe61]
 2e55c44: 9001a4f5     	adrp	x21, 0x62f1000
 2e55c48: f9400a60     	ldr	x0, [x19, #0x10]
 2e55c4c: f94196b5     	ldr	x21, [x21, #0x328]
 2e55c50: b9000fff     	str	wzr, [sp, #0xc]
 2e55c54: b40000c0     	cbz	x0, 0x2e55c6c <__start_il2cpp+0x38d658>
 2e55c58: f9400008     	ldr	x8, [x0]
 2e55c5c: a9568509     	ldp	x9, x1, [x8, #0x168]
 2e55c60: d63f0120     	blr	x9
 2e55c64: aa0003f4     	mov	x20, x0
 2e55c68: 14000002     	b	0x2e55c70 <__start_il2cpp+0x38d65c>
 2e55c6c: aa1f03f4     	mov	x20, xzr
 2e55c70: f9400268     	ldr	x8, [x19]
 2e55c74: aa1303e0     	mov	x0, x19
 2e55c78: a9558509     	ldp	x9, x1, [x8, #0x158]
 2e55c7c: d63f0120     	blr	x9
 2e55c80: b9000fe0     	str	w0, [sp, #0xc]
 2e55c84: 910033e0     	add	x0, sp, #0xc
 2e55c88: aa1f03e1     	mov	x1, xzr
 2e55c8c: 948accd2     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2e55c90: f94002a1     	ldr	x1, [x21]
 2e55c94: aa0003e2     	mov	x2, x0
 2e55c98: aa1403e0     	mov	x0, x20
 2e55c9c: aa1f03e3     	mov	x3, xzr
 2e55ca0: 948481b3     	bl	0x4f7636c <__start_il2cpp+0x24add58>
 2e55ca4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2e55ca8: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2e55cac: 9100c3ff     	add	sp, sp, #0x30
 2e55cb0: d65f03c0     	ret

# ActiveItemTask :: ActiveItemTask+UniqueKey GetUniqueKey()
# VA 0x2e55cb4 .. 0x2e55cdc (next mapped method entry)
 2e55cb4: f9400808     	ldr	x8, [x0, #0x10]
 2e55cb8: b40000e8     	cbz	x8, 0x2e55cd4 <__start_il2cpp+0x38d6c0>
 2e55cbc: b9401d09     	ldr	w9, [x8, #0x1c]
 2e55cc0: b9401508     	ldr	w8, [x8, #0x14]
 2e55cc4: 7100093f     	cmp	w9, #0x2
 2e55cc8: 1a9f17e9     	cset	w9, eq
 2e55ccc: aa088120     	orr	x0, x9, x8, lsl #32
 2e55cd0: d65f03c0     	ret
 2e55cd4: f81f0ffe     	str	x30, [sp, #-0x10]!
 2e55cd8: 97ee04ec     	bl	0x29d7088 <mono_class_get_checked+0x970>
