
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 173e0b4: e92d4830     	push	{r4, r5, r11, lr}
 173e0b8: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x173e194 <__start_il2cpp+0x21da34>
 173e0bc: e1a04000     	mov	r4, r0
 173e0c0: e08f5005     	add	r5, pc, r5
 173e0c4: e5d50000     	ldrb	r0, [r5]
 173e0c8: e3500000     	cmp	r0, #0
 173e0cc: 1a00000a     	bne	0x173e0fc <__start_il2cpp+0x21d99c> @ imm = #0x28
 173e0d0: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x173e198 <__start_il2cpp+0x21da38>
 173e0d4: e79f0000     	ldr	r0, [pc, r0]
 173e0d8: ebf3a952     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x315ab8
 173e0dc: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x173e19c <__start_il2cpp+0x21da3c>
 173e0e0: e79f0000     	ldr	r0, [pc, r0]
 173e0e4: ebf3a94f     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x315ac4
 173e0e8: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x173e1a0 <__start_il2cpp+0x21da40>
 173e0ec: e79f0000     	ldr	r0, [pc, r0]
 173e0f0: ebf3a94c     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x315ad0
 173e0f4: e3a00001     	mov	r0, #1
 173e0f8: e5c50000     	strb	r0, [r5]
 173e0fc: e30105d9     	movw	r0, #0x15d9
 173e100: e3a01000     	mov	r1, #0
 173e104: eb4817b2     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x1205ec8
 173e108: e3500000     	cmp	r0, #0
 173e10c: 0a00000b     	beq	0x173e140 <__start_il2cpp+0x21d9e0> @ imm = #0x2c
 173e110: e30105d9     	movw	r0, #0x15d9
 173e114: e3a01000     	mov	r1, #0
 173e118: eb4817e1     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x1205f84
 173e11c: e1a05000     	mov	r5, r0
 173e120: e3500000     	cmp	r0, #0
 173e124: 1a000000     	bne	0x173e12c <__start_il2cpp+0x21d9cc> @ imm = #0x0
 173e128: ebf3a9ed     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x31584c
 173e12c: e1a00005     	mov	r0, r5
 173e130: e1a01004     	mov	r1, r4
 173e134: e3a02000     	mov	r2, #0
 173e138: e8bd4830     	pop	{r4, r5, r11, lr}
 173e13c: ea455fce     	b	0x289607c <__start_il2cpp+0x137591c> @ imm = #0x1157f38
 173e140: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x173e1a4 <__start_il2cpp+0x21da44>
 173e144: e79f0000     	ldr	r0, [pc, r0]
 173e148: e5900000     	ldr	r0, [r0]
 173e14c: e5901074     	ldr	r1, [r0, #0x74]
 173e150: e3510000     	cmp	r1, #0
 173e154: 1a000000     	bne	0x173e15c <__start_il2cpp+0x21d9fc> @ imm = #0x0
 173e158: ebf3a991     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x3159bc
 173e15c: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x173e1a8 <__start_il2cpp+0x21da48>
 173e160: e79f0000     	ldr	r0, [pc, r0]
 173e164: e5900000     	ldr	r0, [r0]
 173e168: ebf66cea     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x264c58
 173e16c: e1a04000     	mov	r4, r0
 173e170: e3500000     	cmp	r0, #0
 173e174: 1a000000     	bne	0x173e17c <__start_il2cpp+0x21da1c> @ imm = #0x0
 173e178: ebf3a9d9     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x31589c
 173e17c: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x173e1ac <__start_il2cpp+0x21da4c>
 173e180: e79f0000     	ldr	r0, [pc, r0]
 173e184: e5901000     	ldr	r1, [r0]
 173e188: e1a00004     	mov	r0, r4
 173e18c: e8bd4830     	pop	{r4, r5, r11, lr}
 173e190: ea7e3958     	b	0x36cc6f8 <__start_il2cpp+0x21abf98> @ imm = #0x1f8e560
 173e194: 04dc178c     	ldrbeq	r1, [r12], #1932
 173e198: 04b1b2dc     	ldrteq	r11, [r1], #732
 173e19c: 04b1b2d4     	ldrteq	r11, [r1], #724
 173e1a0: 04b1b2e4     	ldrteq	r11, [r1], #740
 173e1a4: 04b1b270     	ldrteq	r11, [r1], #624
 173e1a8: 04b1b250     	ldrteq	r11, [r1], #592
 173e1ac: 04b1b250     	ldrteq	r11, [r1], #592
