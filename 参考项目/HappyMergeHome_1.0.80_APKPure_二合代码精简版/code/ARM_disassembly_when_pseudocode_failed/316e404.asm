
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 316e404: e92d4830     	push	{r4, r5, r11, lr}
 316e408: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x316e4e4 <__start_il2cpp+0x1c4dd84>
 316e40c: e1a04000     	mov	r4, r0
 316e410: e08f5005     	add	r5, pc, r5
 316e414: e5d50000     	ldrb	r0, [r5]
 316e418: e3500000     	cmp	r0, #0
 316e41c: 1a00000a     	bne	0x316e44c <__start_il2cpp+0x1c4dcec> @ imm = #0x28
 316e420: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x316e4e8 <__start_il2cpp+0x1c4dd88>
 316e424: e79f0000     	ldr	r0, [pc, r0]
 316e428: eb8ae87e     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1d45e08
 316e42c: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x316e4ec <__start_il2cpp+0x1c4dd8c>
 316e430: e79f0000     	ldr	r0, [pc, r0]
 316e434: eb8ae87b     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1d45e14
 316e438: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x316e4f0 <__start_il2cpp+0x1c4dd90>
 316e43c: e79f0000     	ldr	r0, [pc, r0]
 316e440: eb8ae878     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1d45e20
 316e444: e3a00001     	mov	r0, #1
 316e448: e5c50000     	strb	r0, [r5]
 316e44c: e3070b8d     	movw	r0, #0x7b8d
 316e450: e3a01000     	mov	r1, #0
 316e454: ebdf56de     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x82a488
 316e458: e3500000     	cmp	r0, #0
 316e45c: 0a00000b     	beq	0x316e490 <__start_il2cpp+0x1c4dd30> @ imm = #0x2c
 316e460: e3070b8d     	movw	r0, #0x7b8d
 316e464: e3a01000     	mov	r1, #0
 316e468: ebdf570d     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x82a3cc
 316e46c: e1a05000     	mov	r5, r0
 316e470: e3500000     	cmp	r0, #0
 316e474: 1a000000     	bne	0x316e47c <__start_il2cpp+0x1c4dd1c> @ imm = #0x0
 316e478: eb8ae919     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1d45b9c
 316e47c: e1a00005     	mov	r0, r5
 316e480: e1a01004     	mov	r1, r4
 316e484: e3a02000     	mov	r2, #0
 316e488: e8bd4830     	pop	{r4, r5, r11, lr}
 316e48c: eade76f6     	b	0x290c06c <__start_il2cpp+0x13eb90c> @ imm = #-0x862428
 316e490: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x316e4f4 <__start_il2cpp+0x1c4dd94>
 316e494: e79f0000     	ldr	r0, [pc, r0]
 316e498: e5900000     	ldr	r0, [r0]
 316e49c: e5901074     	ldr	r1, [r0, #0x74]
 316e4a0: e3510000     	cmp	r1, #0
 316e4a4: 1a000000     	bne	0x316e4ac <__start_il2cpp+0x1c4dd4c> @ imm = #0x0
 316e4a8: eb8ae8bd     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1d45d0c
 316e4ac: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x316e4f8 <__start_il2cpp+0x1c4dd98>
 316e4b0: e79f0000     	ldr	r0, [pc, r0]
 316e4b4: e5900000     	ldr	r0, [r0]
 316e4b8: eb732eda     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1ccbb68
 316e4bc: e1a04000     	mov	r4, r0
 316e4c0: e3500000     	cmp	r0, #0
 316e4c4: 1a000000     	bne	0x316e4cc <__start_il2cpp+0x1c4dd6c> @ imm = #0x0
 316e4c8: eb8ae905     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1d45bec
 316e4cc: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x316e4fc <__start_il2cpp+0x1c4dd9c>
 316e4d0: e79f0000     	ldr	r0, [pc, r0]
 316e4d4: e5901000     	ldr	r1, [r0]
 316e4d8: e1a00004     	mov	r0, r4
 316e4dc: e8bd4830     	pop	{r4, r5, r11, lr}
 316e4e0: ea159ce0     	b	0x36d5868 <__start_il2cpp+0x21b5108> @ imm = #0x567380
 316e4e4: 0339b6e0     	teqeq	r9, #224, #12
 316e4e8: 03118658     	tsteq	r1, #88, #12
 316e4ec: 030fc01c     	movweq	r12, #0xf01c
 316e4f0: 03121748     	tsteq	r2, #72, #14
 316e4f4: 030fbfb8     	movweq	r11, #0xffb8
 316e4f8: 031185cc     	tsteq	r1, #204, #10
 316e4fc: 031216b4     	tsteq	r2, #180, #12
