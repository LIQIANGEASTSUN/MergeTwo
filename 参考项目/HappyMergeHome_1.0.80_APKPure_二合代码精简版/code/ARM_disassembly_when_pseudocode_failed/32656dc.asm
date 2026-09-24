
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 32656dc: e92d4830     	push	{r4, r5, r11, lr}
 32656e0: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x32657bc <__start_il2cpp+0x1d4505c>
 32656e4: e1a04000     	mov	r4, r0
 32656e8: e08f5005     	add	r5, pc, r5
 32656ec: e5d50000     	ldrb	r0, [r5]
 32656f0: e3500000     	cmp	r0, #0
 32656f4: 1a00000a     	bne	0x3265724 <__start_il2cpp+0x1d44fc4> @ imm = #0x28
 32656f8: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x32657c0 <__start_il2cpp+0x1d45060>
 32656fc: e79f0000     	ldr	r0, [pc, r0]
 3265700: eb870bc8     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1e3d0e0
 3265704: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x32657c4 <__start_il2cpp+0x1d45064>
 3265708: e79f0000     	ldr	r0, [pc, r0]
 326570c: eb870bc5     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1e3d0ec
 3265710: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x32657c8 <__start_il2cpp+0x1d45068>
 3265714: e79f0000     	ldr	r0, [pc, r0]
 3265718: eb870bc2     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1e3d0f8
 326571c: e3a00001     	mov	r0, #1
 3265720: e5c50000     	strb	r0, [r5]
 3265724: e301042d     	movw	r0, #0x142d
 3265728: e3a01000     	mov	r1, #0
 326572c: ebdb7a28     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x921760
 3265730: e3500000     	cmp	r0, #0
 3265734: 0a00000b     	beq	0x3265768 <__start_il2cpp+0x1d45008> @ imm = #0x2c
 3265738: e301042d     	movw	r0, #0x142d
 326573c: e3a01000     	mov	r1, #0
 3265740: ebdb7a57     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x9216a4
 3265744: e1a05000     	mov	r5, r0
 3265748: e3500000     	cmp	r0, #0
 326574c: 1a000000     	bne	0x3265754 <__start_il2cpp+0x1d44ff4> @ imm = #0x0
 3265750: eb870c63     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1e3ce74
 3265754: e1a00005     	mov	r0, r5
 3265758: e1a01004     	mov	r1, r4
 326575c: e3a02000     	mov	r2, #0
 3265760: e8bd4830     	pop	{r4, r5, r11, lr}
 3265764: ead8b63f     	b	0x2893068 <__start_il2cpp+0x1372908> @ imm = #-0x9d2704
 3265768: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x32657cc <__start_il2cpp+0x1d4506c>
 326576c: e79f0000     	ldr	r0, [pc, r0]
 3265770: e5900000     	ldr	r0, [r0]
 3265774: e5901074     	ldr	r1, [r0, #0x74]
 3265778: e3510000     	cmp	r1, #0
 326577c: 1a000000     	bne	0x3265784 <__start_il2cpp+0x1d45024> @ imm = #0x0
 3265780: eb870c07     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1e3cfe4
 3265784: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x32657d0 <__start_il2cpp+0x1d45070>
 3265788: e79f0000     	ldr	r0, [pc, r0]
 326578c: e5900000     	ldr	r0, [r0]
 3265790: eb6f5224     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1bd4890
 3265794: e1a04000     	mov	r4, r0
 3265798: e3500000     	cmp	r0, #0
 326579c: 1a000000     	bne	0x32657a4 <__start_il2cpp+0x1d45044> @ imm = #0x0
 32657a0: eb870c4f     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1e3cec4
 32657a4: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x32657d4 <__start_il2cpp+0x1d45074>
 32657a8: e79f0000     	ldr	r0, [pc, r0]
 32657ac: e5901000     	ldr	r1, [r0]
 32657b0: e1a00004     	mov	r0, r4
 32657b4: e8bd4830     	pop	{r4, r5, r11, lr}
 32657b8: ea11b4ee     	b	0x36d2b78 <__start_il2cpp+0x21b2418> @ imm = #0x46d3b8
 32657bc: 032a496e     	<unknown>
 32657c0: 03021530     	movweq	r1, #0x2530
 32657c4: 030050d4     	movweq	r5, #0xd4
 32657c8: 0302b7ac     	movweq	r11, #0x27ac
 32657cc: 03005070     	movweq	r5, #0x70
 32657d0: 030214a4     	movweq	r1, #0x24a4
 32657d4: 0302b718     	movweq	r11, #0x2718
