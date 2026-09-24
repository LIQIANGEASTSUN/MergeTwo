
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 16a67f8: e92d4830     	push	{r4, r5, r11, lr}
 16a67fc: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x16a68d8 <__start_il2cpp+0x186178>
 16a6800: e1a04000     	mov	r4, r0
 16a6804: e08f5005     	add	r5, pc, r5
 16a6808: e5d50000     	ldrb	r0, [r5]
 16a680c: e3500000     	cmp	r0, #0
 16a6810: 1a00000a     	bne	0x16a6840 <__start_il2cpp+0x1860e0> @ imm = #0x28
 16a6814: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x16a68dc <__start_il2cpp+0x18617c>
 16a6818: e79f0000     	ldr	r0, [pc, r0]
 16a681c: ebf60781     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x27e1fc
 16a6820: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x16a68e0 <__start_il2cpp+0x186180>
 16a6824: e79f0000     	ldr	r0, [pc, r0]
 16a6828: ebf6077e     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x27e208
 16a682c: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x16a68e4 <__start_il2cpp+0x186184>
 16a6830: e79f0000     	ldr	r0, [pc, r0]
 16a6834: ebf6077b     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x27e214
 16a6838: e3a00001     	mov	r0, #1
 16a683c: e5c50000     	strb	r0, [r5]
 16a6840: e3080914     	movw	r0, #0x8914
 16a6844: e3a01000     	mov	r1, #0
 16a6848: eb4a75e1     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x129d784
 16a684c: e3500000     	cmp	r0, #0
 16a6850: 0a00000b     	beq	0x16a6884 <__start_il2cpp+0x186124> @ imm = #0x2c
 16a6854: e3080914     	movw	r0, #0x8914
 16a6858: e3a01000     	mov	r1, #0
 16a685c: eb4a7610     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x129d840
 16a6860: e1a05000     	mov	r5, r0
 16a6864: e3500000     	cmp	r0, #0
 16a6868: 1a000000     	bne	0x16a6870 <__start_il2cpp+0x186110> @ imm = #0x0
 16a686c: ebf6081c     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x27df90
 16a6870: e1a00005     	mov	r0, r5
 16a6874: e1a01004     	mov	r1, r4
 16a6878: e3a02000     	mov	r2, #0
 16a687c: e8bd4830     	pop	{r4, r5, r11, lr}
 16a6880: ea49b28a     	b	0x29132b0 <__start_il2cpp+0x13f2b50> @ imm = #0x126ca28
 16a6884: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x16a68e8 <__start_il2cpp+0x186188>
 16a6888: e79f0000     	ldr	r0, [pc, r0]
 16a688c: e5900000     	ldr	r0, [r0]
 16a6890: e5901074     	ldr	r1, [r0, #0x74]
 16a6894: e3510000     	cmp	r1, #0
 16a6898: 1a000000     	bne	0x16a68a0 <__start_il2cpp+0x186140> @ imm = #0x0
 16a689c: ebf607c0     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x27e100
 16a68a0: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x16a68ec <__start_il2cpp+0x18618c>
 16a68a4: e79f0000     	ldr	r0, [pc, r0]
 16a68a8: e5900000     	ldr	r0, [r0]
 16a68ac: ebf8cb19     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x1cd39c
 16a68b0: e1a04000     	mov	r4, r0
 16a68b4: e3500000     	cmp	r0, #0
 16a68b8: 1a000000     	bne	0x16a68c0 <__start_il2cpp+0x186160> @ imm = #0x0
 16a68bc: ebf60808     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x27dfe0
 16a68c0: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x16a68f0 <__start_il2cpp+0x186190>
 16a68c4: e79f0000     	ldr	r0, [pc, r0]
 16a68c8: e5901000     	ldr	r1, [r0]
 16a68cc: e1a00004     	mov	r0, r4
 16a68d0: e8bd4830     	pop	{r4, r5, r11, lr}
 16a68d4: ea38ea8c     	b	0x24e130c <__start_il2cpp+0xfc0bac> @ imm = #0xe3aa30
 16a68d8: 04e58d01     	strbteq	r8, [r5], #3329
 16a68dc: 04bb2000     	ldrteq	r2, [r11], #0
 16a68e0: 04bb1ff8     	ldrteq	r1, [r11], #4088
 16a68e4: 04bb200c     	ldrteq	r2, [r11], #12
 16a68e8: 04bb1f94     	ldrteq	r1, [r11], #3988
 16a68ec: 04bb1f74     	ldrteq	r1, [r11], #3956
 16a68f0: 04bb1f78     	ldrteq	r1, [r11], #3960
