
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 32fe8d0: e92d4830     	push	{r4, r5, r11, lr}
 32fe8d4: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x32fe9b0 <__start_il2cpp+0x1dde250>
 32fe8d8: e1a04000     	mov	r4, r0
 32fe8dc: e08f5005     	add	r5, pc, r5
 32fe8e0: e5d50000     	ldrb	r0, [r5]
 32fe8e4: e3500000     	cmp	r0, #0
 32fe8e8: 1a00000a     	bne	0x32fe918 <__start_il2cpp+0x1dde1b8> @ imm = #0x28
 32fe8ec: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x32fe9b4 <__start_il2cpp+0x1dde254>
 32fe8f0: e79f0000     	ldr	r0, [pc, r0]
 32fe8f4: eb84a74b     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1ed62d4
 32fe8f8: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x32fe9b8 <__start_il2cpp+0x1dde258>
 32fe8fc: e79f0000     	ldr	r0, [pc, r0]
 32fe900: eb84a748     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1ed62e0
 32fe904: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x32fe9bc <__start_il2cpp+0x1dde25c>
 32fe908: e79f0000     	ldr	r0, [pc, r0]
 32fe90c: eb84a745     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1ed62ec
 32fe910: e3a00001     	mov	r0, #1
 32fe914: e5c50000     	strb	r0, [r5]
 32fe918: e30103e8     	movw	r0, #0x13e8
 32fe91c: e3a01000     	mov	r1, #0
 32fe920: ebd915ab     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x9ba954
 32fe924: e3500000     	cmp	r0, #0
 32fe928: 0a00000b     	beq	0x32fe95c <__start_il2cpp+0x1dde1fc> @ imm = #0x2c
 32fe92c: e30103e8     	movw	r0, #0x13e8
 32fe930: e3a01000     	mov	r1, #0
 32fe934: ebd915da     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x9ba898
 32fe938: e1a05000     	mov	r5, r0
 32fe93c: e3500000     	cmp	r0, #0
 32fe940: 1a000000     	bne	0x32fe948 <__start_il2cpp+0x1dde1e8> @ imm = #0x0
 32fe944: eb84a7e6     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1ed6068
 32fe948: e1a00005     	mov	r0, r5
 32fe94c: e1a01004     	mov	r1, r4
 32fe950: e3a02000     	mov	r2, #0
 32fe954: e8bd4830     	pop	{r4, r5, r11, lr}
 32fe958: ead64f2e     	b	0x2892618 <__start_il2cpp+0x1371eb8> @ imm = #-0xa6c348
 32fe95c: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x32fe9c0 <__start_il2cpp+0x1dde260>
 32fe960: e79f0000     	ldr	r0, [pc, r0]
 32fe964: e5900000     	ldr	r0, [r0]
 32fe968: e5901074     	ldr	r1, [r0, #0x74]
 32fe96c: e3510000     	cmp	r1, #0
 32fe970: 1a000000     	bne	0x32fe978 <__start_il2cpp+0x1dde218> @ imm = #0x0
 32fe974: eb84a78a     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1ed61d8
 32fe978: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x32fe9c4 <__start_il2cpp+0x1dde264>
 32fe97c: e79f0000     	ldr	r0, [pc, r0]
 32fe980: e5900000     	ldr	r0, [r0]
 32fe984: eb6ceda7     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1b3b69c
 32fe988: e1a04000     	mov	r4, r0
 32fe98c: e3500000     	cmp	r0, #0
 32fe990: 1a000000     	bne	0x32fe998 <__start_il2cpp+0x1dde238> @ imm = #0x0
 32fe994: eb84a7d2     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1ed60b8
 32fe998: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x32fe9c8 <__start_il2cpp+0x1dde268>
 32fe99c: e79f0000     	ldr	r0, [pc, r0]
 32fe9a0: e5901000     	ldr	r1, [r0]
 32fe9a4: e1a00004     	mov	r0, r4
 32fe9a8: e8bd4830     	pop	{r4, r5, r11, lr}
 32fe9ac: ea0f487f     	b	0x36d0bb0 <__start_il2cpp+0x21b0450> @ imm = #0x3d21fc
 32fe9b0: 0320bac2     	<unknown>
 32fe9b4: 02f59180     	rscseq	r9, r5, #128, #2
 32fe9b8: 02f59178     	rscseq	r9, r5, #120, #2
 32fe9bc: 02f93130     	rscseq	r3, r9, #48, #2
 32fe9c0: 02f59114     	rscseq	r9, r5, #20, #2
 32fe9c4: 02f590f4     	rscseq	r9, r5, #244
 32fe9c8: 02f9309c     	rscseq	r3, r9, #156
