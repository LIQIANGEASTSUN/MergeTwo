
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 166c360: e92d4830     	push	{r4, r5, r11, lr}
 166c364: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x166c440 <__start_il2cpp+0x14bce0>
 166c368: e1a04000     	mov	r4, r0
 166c36c: e08f5005     	add	r5, pc, r5
 166c370: e5d50000     	ldrb	r0, [r5]
 166c374: e3500000     	cmp	r0, #0
 166c378: 1a00000a     	bne	0x166c3a8 <__start_il2cpp+0x14bc48> @ imm = #0x28
 166c37c: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x166c444 <__start_il2cpp+0x14bce4>
 166c380: e79f0000     	ldr	r0, [pc, r0]
 166c384: ebf6f0a7     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x243d64
 166c388: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x166c448 <__start_il2cpp+0x14bce8>
 166c38c: e79f0000     	ldr	r0, [pc, r0]
 166c390: ebf6f0a4     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x243d70
 166c394: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x166c44c <__start_il2cpp+0x14bcec>
 166c398: e79f0000     	ldr	r0, [pc, r0]
 166c39c: ebf6f0a1     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x243d7c
 166c3a0: e3a00001     	mov	r0, #1
 166c3a4: e5c50000     	strb	r0, [r5]
 166c3a8: e308078c     	movw	r0, #0x878c
 166c3ac: e3a01000     	mov	r1, #0
 166c3b0: eb4b5f07     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x12d7c1c
 166c3b4: e3500000     	cmp	r0, #0
 166c3b8: 0a00000b     	beq	0x166c3ec <__start_il2cpp+0x14bc8c> @ imm = #0x2c
 166c3bc: e308078c     	movw	r0, #0x878c
 166c3c0: e3a01000     	mov	r1, #0
 166c3c4: eb4b5f36     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x12d7cd8
 166c3c8: e1a05000     	mov	r5, r0
 166c3cc: e3500000     	cmp	r0, #0
 166c3d0: 1a000000     	bne	0x166c3d8 <__start_il2cpp+0x14bc78> @ imm = #0x0
 166c3d4: ebf6f142     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x243af8
 166c3d8: e1a00005     	mov	r0, r5
 166c3dc: e1a01004     	mov	r1, r4
 166c3e0: e3a02000     	mov	r2, #0
 166c3e4: e8bd4830     	pop	{r4, r5, r11, lr}
 166c3e8: ea4a9886     	b	0x2912608 <__start_il2cpp+0x13f1ea8> @ imm = #0x12a6218
 166c3ec: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x166c450 <__start_il2cpp+0x14bcf0>
 166c3f0: e79f0000     	ldr	r0, [pc, r0]
 166c3f4: e5900000     	ldr	r0, [r0]
 166c3f8: e5901074     	ldr	r1, [r0, #0x74]
 166c3fc: e3510000     	cmp	r1, #0
 166c400: 1a000000     	bne	0x166c408 <__start_il2cpp+0x14bca8> @ imm = #0x0
 166c404: ebf6f0e6     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x243c68
 166c408: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x166c454 <__start_il2cpp+0x14bcf4>
 166c40c: e79f0000     	ldr	r0, [pc, r0]
 166c410: e5900000     	ldr	r0, [r0]
 166c414: ebf9b43f     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x192f04
 166c418: e1a04000     	mov	r4, r0
 166c41c: e3500000     	cmp	r0, #0
 166c420: 1a000000     	bne	0x166c428 <__start_il2cpp+0x14bcc8> @ imm = #0x0
 166c424: ebf6f12e     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x243b48
 166c428: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x166c458 <__start_il2cpp+0x14bcf8>
 166c42c: e79f0000     	ldr	r0, [pc, r0]
 166c430: e5901000     	ldr	r1, [r0]
 166c434: e1a00004     	mov	r0, r4
 166c438: e8bd4830     	pop	{r4, r5, r11, lr}
 166c43c: ea39d39d     	b	0x24e12b8 <__start_il2cpp+0xfc0b58> @ imm = #0xe74e74
 166c440: 04e9305a     	strbteq	r3, [r9], #90
 166c444: 04bebfe0     	ldrteq	r11, [lr], #4064
 166c448: 04bebfd8     	ldrteq	r11, [lr], #4056
 166c44c: 04bebff0     	ldrteq	r11, [lr], #4080
 166c450: 04bebf74     	ldrteq	r11, [lr], #3956
 166c454: 04bebf54     	ldrteq	r11, [lr], #3924
 166c458: 04bebf5c     	ldrteq	r11, [lr], #3932
