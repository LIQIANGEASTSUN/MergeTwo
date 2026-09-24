
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 16dedc8: e92d4830     	push	{r4, r5, r11, lr}
 16dedcc: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x16deea8 <__start_il2cpp+0x1be748>
 16dedd0: e1a04000     	mov	r4, r0
 16dedd4: e08f5005     	add	r5, pc, r5
 16dedd8: e5d50000     	ldrb	r0, [r5]
 16deddc: e3500000     	cmp	r0, #0
 16dede0: 1a00000a     	bne	0x16dee10 <__start_il2cpp+0x1be6b0> @ imm = #0x28
 16dede4: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x16deeac <__start_il2cpp+0x1be74c>
 16dede8: e79f0000     	ldr	r0, [pc, r0]
 16dedec: ebf5260d     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2b67cc
 16dedf0: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x16deeb0 <__start_il2cpp+0x1be750>
 16dedf4: e79f0000     	ldr	r0, [pc, r0]
 16dedf8: ebf5260a     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2b67d8
 16dedfc: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x16deeb4 <__start_il2cpp+0x1be754>
 16dee00: e79f0000     	ldr	r0, [pc, r0]
 16dee04: ebf52607     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2b67e4
 16dee08: e3a00001     	mov	r0, #1
 16dee0c: e5c50000     	strb	r0, [r5]
 16dee10: e3010876     	movw	r0, #0x1876
 16dee14: e3a01000     	mov	r1, #0
 16dee18: eb49946d     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x12651b4
 16dee1c: e3500000     	cmp	r0, #0
 16dee20: 0a00000b     	beq	0x16dee54 <__start_il2cpp+0x1be6f4> @ imm = #0x2c
 16dee24: e3010876     	movw	r0, #0x1876
 16dee28: e3a01000     	mov	r1, #0
 16dee2c: eb49949c     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x1265270
 16dee30: e1a05000     	mov	r5, r0
 16dee34: e3500000     	cmp	r0, #0
 16dee38: 1a000000     	bne	0x16dee40 <__start_il2cpp+0x1be6e0> @ imm = #0x0
 16dee3c: ebf526a8     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2b6560
 16dee40: e1a00005     	mov	r0, r5
 16dee44: e1a01004     	mov	r1, r4
 16dee48: e3a02000     	mov	r2, #0
 16dee4c: e8bd4830     	pop	{r4, r5, r11, lr}
 16dee50: ea46ee1c     	b	0x289a6c8 <__start_il2cpp+0x1379f68> @ imm = #0x11bb870
 16dee54: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x16deeb8 <__start_il2cpp+0x1be758>
 16dee58: e79f0000     	ldr	r0, [pc, r0]
 16dee5c: e5900000     	ldr	r0, [r0]
 16dee60: e5901074     	ldr	r1, [r0, #0x74]
 16dee64: e3510000     	cmp	r1, #0
 16dee68: 1a000000     	bne	0x16dee70 <__start_il2cpp+0x1be710> @ imm = #0x0
 16dee6c: ebf5264c     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x2b66d0
 16dee70: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x16deebc <__start_il2cpp+0x1be75c>
 16dee74: e79f0000     	ldr	r0, [pc, r0]
 16dee78: e5900000     	ldr	r0, [r0]
 16dee7c: ebf7e9a5     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x20596c
 16dee80: e1a04000     	mov	r4, r0
 16dee84: e3500000     	cmp	r0, #0
 16dee88: 1a000000     	bne	0x16dee90 <__start_il2cpp+0x1be730> @ imm = #0x0
 16dee8c: ebf52694     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2b65b0
 16dee90: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x16deec0 <__start_il2cpp+0x1be760>
 16dee94: e79f0000     	ldr	r0, [pc, r0]
 16dee98: e5901000     	ldr	r1, [r0]
 16dee9c: e1a00004     	mov	r0, r4
 16deea0: e8bd4830     	pop	{r4, r5, r11, lr}
 16deea4: ea7fbbd9     	b	0x36cde10 <__start_il2cpp+0x21ad6b0> @ imm = #0x1feef64
 16deea8: 04e2086b     	strbteq	r0, [r2], #2155
 16deeac: 04b79e98     	ldrteq	r9, [r7], #3736
 16deeb0: 04b79e90     	ldrteq	r9, [r7], #3728
 16deeb4: 04b79e88     	ldrteq	r9, [r7], #3720
 16deeb8: 04b79e2c     	ldrteq	r9, [r7], #3628
 16deebc: 04b79e0c     	ldrteq	r9, [r7], #3596
 16deec0: 04b79df4     	ldrteq	r9, [r7], #3572
