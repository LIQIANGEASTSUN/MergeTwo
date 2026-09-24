
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 1632314: e92d4830     	push	{r4, r5, r11, lr}
 1632318: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x16323f4 <__start_il2cpp+0x111c94>
 163231c: e1a04000     	mov	r4, r0
 1632320: e08f5005     	add	r5, pc, r5
 1632324: e5d50000     	ldrb	r0, [r5]
 1632328: e3500000     	cmp	r0, #0
 163232c: 1a00000a     	bne	0x163235c <__start_il2cpp+0x111bfc> @ imm = #0x28
 1632330: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x16323f8 <__start_il2cpp+0x111c98>
 1632334: e79f0000     	ldr	r0, [pc, r0]
 1632338: ebf7d8ba     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x209d18
 163233c: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x16323fc <__start_il2cpp+0x111c9c>
 1632340: e79f0000     	ldr	r0, [pc, r0]
 1632344: ebf7d8b7     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x209d24
 1632348: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x1632400 <__start_il2cpp+0x111ca0>
 163234c: e79f0000     	ldr	r0, [pc, r0]
 1632350: ebf7d8b4     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x209d30
 1632354: e3a00001     	mov	r0, #1
 1632358: e5c50000     	strb	r0, [r5]
 163235c: e3080610     	movw	r0, #0x8610
 1632360: e3a01000     	mov	r1, #0
 1632364: eb4c471a     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x1311c68
 1632368: e3500000     	cmp	r0, #0
 163236c: 0a00000b     	beq	0x16323a0 <__start_il2cpp+0x111c40> @ imm = #0x2c
 1632370: e3080610     	movw	r0, #0x8610
 1632374: e3a01000     	mov	r1, #0
 1632378: eb4c4749     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x1311d24
 163237c: e1a05000     	mov	r5, r0
 1632380: e3500000     	cmp	r0, #0
 1632384: 1a000000     	bne	0x163238c <__start_il2cpp+0x111c2c> @ imm = #0x0
 1632388: ebf7d955     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x209aac
 163238c: e1a00005     	mov	r0, r5
 1632390: e1a01004     	mov	r1, r4
 1632394: e3a02000     	mov	r2, #0
 1632398: e8bd4830     	pop	{r4, r5, r11, lr}
 163239c: ea4b7d2d     	b	0x2911858 <__start_il2cpp+0x13f10f8> @ imm = #0x12df4b4
 16323a0: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x1632404 <__start_il2cpp+0x111ca4>
 16323a4: e79f0000     	ldr	r0, [pc, r0]
 16323a8: e5900000     	ldr	r0, [r0]
 16323ac: e5901074     	ldr	r1, [r0, #0x74]
 16323b0: e3510000     	cmp	r1, #0
 16323b4: 1a000000     	bne	0x16323bc <__start_il2cpp+0x111c5c> @ imm = #0x0
 16323b8: ebf7d8f9     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x209c1c
 16323bc: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x1632408 <__start_il2cpp+0x111ca8>
 16323c0: e79f0000     	ldr	r0, [pc, r0]
 16323c4: e5900000     	ldr	r0, [r0]
 16323c8: ebfa9c52     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x158eb8
 16323cc: e1a04000     	mov	r4, r0
 16323d0: e3500000     	cmp	r0, #0
 16323d4: 1a000000     	bne	0x16323dc <__start_il2cpp+0x111c7c> @ imm = #0x0
 16323d8: ebf7d941     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x209afc
 16323dc: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x163240c <__start_il2cpp+0x111cac>
 16323e0: e79f0000     	ldr	r0, [pc, r0]
 16323e4: e5901000     	ldr	r1, [r0]
 16323e8: e1a00004     	mov	r0, r4
 16323ec: e8bd4830     	pop	{r4, r5, r11, lr}
 16323f0: ea3abb1e     	b	0x24e1070 <__start_il2cpp+0xfc0910> @ imm = #0xeaec78
 16323f4: 04eccf63     	strbteq	r12, [r12], #3939
 16323f8: 04c257d8     	strbeq	r5, [r2], #2008
 16323fc: 04c257d0     	strbeq	r5, [r2], #2000
 1632400: 04c257f8     	strbeq	r5, [r2], #2040
 1632404: 04c2576c     	strbeq	r5, [r2], #1900
 1632408: 04c2574c     	strbeq	r5, [r2], #1868
 163240c: 04c25764     	strbeq	r5, [r2], #1892
