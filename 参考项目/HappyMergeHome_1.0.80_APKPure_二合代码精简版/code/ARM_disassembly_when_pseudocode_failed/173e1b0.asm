
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 173e1b0: e92d4830     	push	{r4, r5, r11, lr}
 173e1b4: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x173e290 <__start_il2cpp+0x21db30>
 173e1b8: e1a04000     	mov	r4, r0
 173e1bc: e08f5005     	add	r5, pc, r5
 173e1c0: e5d50000     	ldrb	r0, [r5]
 173e1c4: e3500000     	cmp	r0, #0
 173e1c8: 1a00000a     	bne	0x173e1f8 <__start_il2cpp+0x21da98> @ imm = #0x28
 173e1cc: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x173e294 <__start_il2cpp+0x21db34>
 173e1d0: e79f0000     	ldr	r0, [pc, r0]
 173e1d4: ebf3a913     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x315bb4
 173e1d8: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x173e298 <__start_il2cpp+0x21db38>
 173e1dc: e79f0000     	ldr	r0, [pc, r0]
 173e1e0: ebf3a910     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x315bc0
 173e1e4: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x173e29c <__start_il2cpp+0x21db3c>
 173e1e8: e79f0000     	ldr	r0, [pc, r0]
 173e1ec: ebf3a90d     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x315bcc
 173e1f0: e3a00001     	mov	r0, #1
 173e1f4: e5c50000     	strb	r0, [r5]
 173e1f8: e3080cf7     	movw	r0, #0x8cf7
 173e1fc: e3a01000     	mov	r1, #0
 173e200: eb481773     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x1205dcc
 173e204: e3500000     	cmp	r0, #0
 173e208: 0a00000b     	beq	0x173e23c <__start_il2cpp+0x21dadc> @ imm = #0x2c
 173e20c: e3080cf7     	movw	r0, #0x8cf7
 173e210: e3a01000     	mov	r1, #0
 173e214: eb4817a2     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x1205e88
 173e218: e1a05000     	mov	r5, r0
 173e21c: e3500000     	cmp	r0, #0
 173e220: 1a000000     	bne	0x173e228 <__start_il2cpp+0x21dac8> @ imm = #0x0
 173e224: ebf3a9ae     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x315948
 173e228: e1a00005     	mov	r0, r5
 173e22c: e1a01004     	mov	r1, r4
 173e230: e3a02000     	mov	r2, #0
 173e234: e8bd4830     	pop	{r4, r5, r11, lr}
 173e238: ea475c2f     	b	0x29152fc <__start_il2cpp+0x13f4b9c> @ imm = #0x11d70bc
 173e23c: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x173e2a0 <__start_il2cpp+0x21db40>
 173e240: e79f0000     	ldr	r0, [pc, r0]
 173e244: e5900000     	ldr	r0, [r0]
 173e248: e5901074     	ldr	r1, [r0, #0x74]
 173e24c: e3510000     	cmp	r1, #0
 173e250: 1a000000     	bne	0x173e258 <__start_il2cpp+0x21daf8> @ imm = #0x0
 173e254: ebf3a952     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x315ab8
 173e258: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x173e2a4 <__start_il2cpp+0x21db44>
 173e25c: e79f0000     	ldr	r0, [pc, r0]
 173e260: e5900000     	ldr	r0, [r0]
 173e264: ebf66cab     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x264d54
 173e268: e1a04000     	mov	r4, r0
 173e26c: e3500000     	cmp	r0, #0
 173e270: 1a000000     	bne	0x173e278 <__start_il2cpp+0x21db18> @ imm = #0x0
 173e274: ebf3a99a     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x315998
 173e278: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x173e2a8 <__start_il2cpp+0x21db48>
 173e27c: e79f0000     	ldr	r0, [pc, r0]
 173e280: e5901000     	ldr	r1, [r0]
 173e284: e1a00004     	mov	r0, r4
 173e288: e8bd4830     	pop	{r4, r5, r11, lr}
 173e28c: ea7e3919     	b	0x36cc6f8 <__start_il2cpp+0x21abf98> @ imm = #0x1f8e464
 173e290: 04dc1691     	ldrbeq	r1, [r12], #1681
 173e294: 04b1b1e0     	ldrteq	r11, [r1], #480
 173e298: 04b1b1d8     	ldrteq	r11, [r1], #472
 173e29c: 04b1b1ec     	ldrteq	r11, [r1], #492
 173e2a0: 04b1b174     	ldrteq	r11, [r1], #372
 173e2a4: 04b1b154     	ldrteq	r11, [r1], #340
 173e2a8: 04b1b158     	ldrteq	r11, [r1], #344
