
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 16a66fc: e92d4830     	push	{r4, r5, r11, lr}
 16a6700: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x16a67dc <__start_il2cpp+0x18607c>
 16a6704: e1a04000     	mov	r4, r0
 16a6708: e08f5005     	add	r5, pc, r5
 16a670c: e5d50000     	ldrb	r0, [r5]
 16a6710: e3500000     	cmp	r0, #0
 16a6714: 1a00000a     	bne	0x16a6744 <__start_il2cpp+0x185fe4> @ imm = #0x28
 16a6718: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x16a67e0 <__start_il2cpp+0x186080>
 16a671c: e79f0000     	ldr	r0, [pc, r0]
 16a6720: ebf607c0     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x27e100
 16a6724: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x16a67e4 <__start_il2cpp+0x186084>
 16a6728: e79f0000     	ldr	r0, [pc, r0]
 16a672c: ebf607bd     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x27e10c
 16a6730: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x16a67e8 <__start_il2cpp+0x186088>
 16a6734: e79f0000     	ldr	r0, [pc, r0]
 16a6738: ebf607ba     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x27e118
 16a673c: e3a00001     	mov	r0, #1
 16a6740: e5c50000     	strb	r0, [r5]
 16a6744: e301084c     	movw	r0, #0x184c
 16a6748: e3a01000     	mov	r1, #0
 16a674c: eb4a7620     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x129d880
 16a6750: e3500000     	cmp	r0, #0
 16a6754: 0a00000b     	beq	0x16a6788 <__start_il2cpp+0x186028> @ imm = #0x2c
 16a6758: e301084c     	movw	r0, #0x184c
 16a675c: e3a01000     	mov	r1, #0
 16a6760: eb4a764f     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x129d93c
 16a6764: e1a05000     	mov	r5, r0
 16a6768: e3500000     	cmp	r0, #0
 16a676c: 1a000000     	bne	0x16a6774 <__start_il2cpp+0x186014> @ imm = #0x0
 16a6770: ebf6085b     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x27de94
 16a6774: e1a00005     	mov	r0, r5
 16a6778: e1a01004     	mov	r1, r4
 16a677c: e3a02000     	mov	r2, #0
 16a6780: e8bd4830     	pop	{r4, r5, r11, lr}
 16a6784: ea47ce8a     	b	0x289a1b4 <__start_il2cpp+0x1379a54> @ imm = #0x11f3a28
 16a6788: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x16a67ec <__start_il2cpp+0x18608c>
 16a678c: e79f0000     	ldr	r0, [pc, r0]
 16a6790: e5900000     	ldr	r0, [r0]
 16a6794: e5901074     	ldr	r1, [r0, #0x74]
 16a6798: e3510000     	cmp	r1, #0
 16a679c: 1a000000     	bne	0x16a67a4 <__start_il2cpp+0x186044> @ imm = #0x0
 16a67a0: ebf607ff     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x27e004
 16a67a4: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x16a67f0 <__start_il2cpp+0x186090>
 16a67a8: e79f0000     	ldr	r0, [pc, r0]
 16a67ac: e5900000     	ldr	r0, [r0]
 16a67b0: ebf8cb58     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x1cd2a0
 16a67b4: e1a04000     	mov	r4, r0
 16a67b8: e3500000     	cmp	r0, #0
 16a67bc: 1a000000     	bne	0x16a67c4 <__start_il2cpp+0x186064> @ imm = #0x0
 16a67c0: ebf60847     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x27dee4
 16a67c4: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x16a67f4 <__start_il2cpp+0x186094>
 16a67c8: e79f0000     	ldr	r0, [pc, r0]
 16a67cc: e5901000     	ldr	r1, [r0]
 16a67d0: e1a00004     	mov	r0, r4
 16a67d4: e8bd4830     	pop	{r4, r5, r11, lr}
 16a67d8: ea38eacb     	b	0x24e130c <__start_il2cpp+0xfc0bac> @ imm = #0xe3ab2c
 16a67dc: 04e58dfc     	strbteq	r8, [r5], #3580
 16a67e0: 04bb20fc     	ldrteq	r2, [r11], #252
 16a67e4: 04bb20f4     	ldrteq	r2, [r11], #244
 16a67e8: 04bb2104     	ldrteq	r2, [r11], #260
 16a67ec: 04bb2090     	ldrteq	r2, [r11], #144
 16a67f0: 04bb2070     	ldrteq	r2, [r11], #112
 16a67f4: 04bb2070     	ldrteq	r2, [r11], #112
