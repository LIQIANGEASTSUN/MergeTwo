
# ActiveItemTask+UniqueKey :: System.Boolean Equals(ActiveItemTask+UniqueKey other)
# VA 0x2e55cdc .. 0x2e55d08 (next mapped method entry)
 2e55cdc: 39400008     	ldrb	w8, [x0]
 2e55ce0: 12000029     	and	w9, w1, #0x1
 2e55ce4: 6b08013f     	cmp	w9, w8
 2e55ce8: 540000c1     	b.ne	0x2e55d00 <__start_il2cpp+0x38d6ec>
 2e55cec: d360fc28     	lsr	x8, x1, #32
 2e55cf0: b9400409     	ldr	w9, [x0, #0x4]
 2e55cf4: 6b08013f     	cmp	w9, w8
 2e55cf8: 1a9f17e0     	cset	w0, eq
 2e55cfc: d65f03c0     	ret
 2e55d00: 2a1f03e0     	mov	w0, wzr
 2e55d04: d65f03c0     	ret

# ActiveItemTask+UniqueKey :: System.Int32 GetHashCode()
# VA 0x2e55d08 .. 0x2e55d84 (next mapped method entry)
 2e55d08: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2e55d0c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2e55d10: d001c5f5     	adrp	x21, 0x6713000
 2e55d14: d001a554     	adrp	x20, 0x62ff000
 2e55d18: aa0003f3     	mov	x19, x0
 2e55d1c: 39798aa8     	ldrb	w8, [x21, #0xe62]
 2e55d20: f944ba94     	ldr	x20, [x20, #0x970]
 2e55d24: 37000128     	tbnz	w8, #0x0, 0x2e55d48 <__start_il2cpp+0x38d734>
 2e55d28: 9001a5c0     	adrp	x0, 0x630d000
 2e55d2c: f9445000     	ldr	x0, [x0, #0x8a0]
 2e55d30: 97ee042c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55d34: d001a540     	adrp	x0, 0x62ff000
 2e55d38: f944b800     	ldr	x0, [x0, #0x970]
 2e55d3c: 97ee0429     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55d40: 52800028     	mov	w8, #0x1                // =1
 2e55d44: 39398aa8     	strb	w8, [x21, #0xe62]
 2e55d48: f9400280     	ldr	x0, [x20]
 2e55d4c: 9001a5d4     	adrp	x20, 0x630d000
 2e55d50: f9445294     	ldr	x20, [x20, #0x8a0]
 2e55d54: 39400275     	ldrb	w21, [x19]
 2e55d58: b9400673     	ldr	w19, [x19, #0x4]
 2e55d5c: b940e408     	ldr	w8, [x0, #0xe4]
 2e55d60: 35000048     	cbnz	w8, 0x2e55d68 <__start_il2cpp+0x38d754>
 2e55d64: 97ee047e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e55d68: f9400282     	ldr	x2, [x20]
 2e55d6c: 2a1303e1     	mov	w1, w19
 2e55d70: 710002bf     	cmp	w21, #0x0
 2e55d74: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2e55d78: 1a9f07e0     	cset	w0, ne
 2e55d7c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2e55d80: 14193365     	b	0x34a2b14 <__start_il2cpp+0x9da500>

# ActiveItemTask+UniqueKey :: System.String ToString()
# VA 0x2e55d84 .. 0x2e55e0c (next mapped method entry)
 2e55d84: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2e55d88: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2e55d8c: d001c5f4     	adrp	x20, 0x6713000
 2e55d90: aa0003f3     	mov	x19, x0
 2e55d94: 39798e88     	ldrb	w8, [x20, #0xe63]
 2e55d98: 370000c8     	tbnz	w8, #0x0, 0x2e55db0 <__start_il2cpp+0x38d79c>
 2e55d9c: 9001a4e0     	adrp	x0, 0x62f1000
 2e55da0: f9419400     	ldr	x0, [x0, #0x328]
 2e55da4: 97ee040f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2e55da8: 52800028     	mov	w8, #0x1                // =1
 2e55dac: 39398e88     	strb	w8, [x20, #0xe63]
 2e55db0: 9001a4f5     	adrp	x21, 0x62f1000
 2e55db4: 91001260     	add	x0, x19, #0x4
 2e55db8: aa1f03e1     	mov	x1, xzr
 2e55dbc: f94196b5     	ldr	x21, [x21, #0x328]
 2e55dc0: 948acc85     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2e55dc4: f001a4c8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2e55dc8: aa0003f4     	mov	x20, x0
 2e55dcc: f9470d08     	ldr	x8, [x8, #0xe18]
 2e55dd0: f9401508     	ldr	x8, [x8, #0x28]
 2e55dd4: b940e509     	ldr	w9, [x8, #0xe4]
 2e55dd8: 35000069     	cbnz	w9, 0x2e55de4 <__start_il2cpp+0x38d7d0>
 2e55ddc: aa0803e0     	mov	x0, x8
 2e55de0: 97ee045f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2e55de4: aa1303e0     	mov	x0, x19
 2e55de8: aa1f03e1     	mov	x1, xzr
 2e55dec: 94883f50     	bl	0x5065b2c <__start_il2cpp+0x259d518>
 2e55df0: aa0003e2     	mov	x2, x0
 2e55df4: aa1403e0     	mov	x0, x20
 2e55df8: f94002a1     	ldr	x1, [x21]
 2e55dfc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2e55e00: aa1f03e3     	mov	x3, xzr
 2e55e04: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2e55e08: 14848159     	b	0x4f7636c <__start_il2cpp+0x24add58>
