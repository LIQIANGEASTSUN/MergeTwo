
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 1792bf8: e92d4830     	push	{r4, r5, r11, lr}
 1792bfc: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x1792cd8 <__start_il2cpp+0x272578>
 1792c00: e1a04000     	mov	r4, r0
 1792c04: e08f5005     	add	r5, pc, r5
 1792c08: e5d50000     	ldrb	r0, [r5]
 1792c0c: e3500000     	cmp	r0, #0
 1792c10: 1a00000a     	bne	0x1792c40 <__start_il2cpp+0x2724e0> @ imm = #0x28
 1792c14: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x1792cdc <__start_il2cpp+0x27257c>
 1792c18: e79f0000     	ldr	r0, [pc, r0]
 1792c1c: ebf25681     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x36a5fc
 1792c20: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x1792ce0 <__start_il2cpp+0x272580>
 1792c24: e79f0000     	ldr	r0, [pc, r0]
 1792c28: ebf2567e     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x36a608
 1792c2c: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x1792ce4 <__start_il2cpp+0x272584>
 1792c30: e79f0000     	ldr	r0, [pc, r0]
 1792c34: ebf2567b     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x36a614
 1792c38: e3a00001     	mov	r0, #1
 1792c3c: e5c50000     	strb	r0, [r5]
 1792c40: e3080e73     	movw	r0, #0x8e73
 1792c44: e3a01000     	mov	r1, #0
 1792c48: eb46c4e1     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x11b1384
 1792c4c: e3500000     	cmp	r0, #0
 1792c50: 0a00000b     	beq	0x1792c84 <__start_il2cpp+0x272524> @ imm = #0x2c
 1792c54: e3080e73     	movw	r0, #0x8e73
 1792c58: e3a01000     	mov	r1, #0
 1792c5c: eb46c510     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x11b1440
 1792c60: e1a05000     	mov	r5, r0
 1792c64: e3500000     	cmp	r0, #0
 1792c68: 1a000000     	bne	0x1792c70 <__start_il2cpp+0x272510> @ imm = #0x0
 1792c6c: ebf2571c     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x36a390
 1792c70: e1a00005     	mov	r0, r5
 1792c74: e1a01004     	mov	r1, r4
 1792c78: e3a02000     	mov	r2, #0
 1792c7c: e8bd4830     	pop	{r4, r5, r11, lr}
 1792c80: ea460d09     	b	0x29160ac <__start_il2cpp+0x13f594c> @ imm = #0x1183424
 1792c84: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x1792ce8 <__start_il2cpp+0x272588>
 1792c88: e79f0000     	ldr	r0, [pc, r0]
 1792c8c: e5900000     	ldr	r0, [r0]
 1792c90: e5901074     	ldr	r1, [r0, #0x74]
 1792c94: e3510000     	cmp	r1, #0
 1792c98: 1a000000     	bne	0x1792ca0 <__start_il2cpp+0x272540> @ imm = #0x0
 1792c9c: ebf256c0     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x36a500
 1792ca0: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x1792cec <__start_il2cpp+0x27258c>
 1792ca4: e79f0000     	ldr	r0, [pc, r0]
 1792ca8: e5900000     	ldr	r0, [r0]
 1792cac: ebf51a19     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x2b979c
 1792cb0: e1a04000     	mov	r4, r0
 1792cb4: e3500000     	cmp	r0, #0
 1792cb8: 1a000000     	bne	0x1792cc0 <__start_il2cpp+0x272560> @ imm = #0x0
 1792cbc: ebf25708     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x36a3e0
 1792cc0: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x1792cf0 <__start_il2cpp+0x272590>
 1792cc4: e79f0000     	ldr	r0, [pc, r0]
 1792cc8: e5901000     	ldr	r1, [r0]
 1792ccc: e1a00004     	mov	r0, r4
 1792cd0: e8bd4830     	pop	{r4, r5, r11, lr}
 1792cd4: ea7ce3e7     	b	0x36cbc78 <__start_il2cpp+0x21ab518> @ imm = #0x1f38f9c
 1792cd8: 04d6ce3b     	ldrbeq	r12, [r6], #3643
 1792cdc: 04ac7094     	strteq	r7, [r12], #148
 1792ce0: 04ac708c     	strteq	r7, [r12], #140
 1792ce4: 04ac7088     	strteq	r7, [r12], #136
 1792ce8: 04ac7028     	strteq	r7, [r12], #40
 1792cec: 04ac7008     	strteq	r7, [r12], #8
 1792cf0: 04ac6ff4     	strteq	r6, [r12], #4084
