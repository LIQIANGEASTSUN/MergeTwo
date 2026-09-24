
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 316e308: e92d4830     	push	{r4, r5, r11, lr}
 316e30c: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x316e3e8 <__start_il2cpp+0x1c4dc88>
 316e310: e1a04000     	mov	r4, r0
 316e314: e08f5005     	add	r5, pc, r5
 316e318: e5d50000     	ldrb	r0, [r5]
 316e31c: e3500000     	cmp	r0, #0
 316e320: 1a00000a     	bne	0x316e350 <__start_il2cpp+0x1c4dbf0> @ imm = #0x28
 316e324: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x316e3ec <__start_il2cpp+0x1c4dc8c>
 316e328: e79f0000     	ldr	r0, [pc, r0]
 316e32c: eb8ae8bd     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1d45d0c
 316e330: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x316e3f0 <__start_il2cpp+0x1c4dc90>
 316e334: e79f0000     	ldr	r0, [pc, r0]
 316e338: eb8ae8ba     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1d45d18
 316e33c: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x316e3f4 <__start_il2cpp+0x1c4dc94>
 316e340: e79f0000     	ldr	r0, [pc, r0]
 316e344: eb8ae8b7     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1d45d24
 316e348: e3a00001     	mov	r0, #1
 316e34c: e5c50000     	strb	r0, [r5]
 316e350: e3010362     	movw	r0, #0x1362
 316e354: e3a01000     	mov	r1, #0
 316e358: ebdf571d     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x82a38c
 316e35c: e3500000     	cmp	r0, #0
 316e360: 0a00000b     	beq	0x316e394 <__start_il2cpp+0x1c4dc34> @ imm = #0x2c
 316e364: e3010362     	movw	r0, #0x1362
 316e368: e3a01000     	mov	r1, #0
 316e36c: ebdf574c     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x82a2d0
 316e370: e1a05000     	mov	r5, r0
 316e374: e3500000     	cmp	r0, #0
 316e378: 1a000000     	bne	0x316e380 <__start_il2cpp+0x1c4dc20> @ imm = #0x0
 316e37c: eb8ae958     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1d45aa0
 316e380: e1a00005     	mov	r0, r5
 316e384: e1a01004     	mov	r1, r4
 316e388: e3a02000     	mov	r2, #0
 316e38c: e8bd4830     	pop	{r4, r5, r11, lr}
 316e390: eadc8c06     	b	0x28913b0 <__start_il2cpp+0x1370c50> @ imm = #-0x8dcfe8
 316e394: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x316e3f8 <__start_il2cpp+0x1c4dc98>
 316e398: e79f0000     	ldr	r0, [pc, r0]
 316e39c: e5900000     	ldr	r0, [r0]
 316e3a0: e5901074     	ldr	r1, [r0, #0x74]
 316e3a4: e3510000     	cmp	r1, #0
 316e3a8: 1a000000     	bne	0x316e3b0 <__start_il2cpp+0x1c4dc50> @ imm = #0x0
 316e3ac: eb8ae8fc     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1d45c10
 316e3b0: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x316e3fc <__start_il2cpp+0x1c4dc9c>
 316e3b4: e79f0000     	ldr	r0, [pc, r0]
 316e3b8: e5900000     	ldr	r0, [r0]
 316e3bc: eb732f19     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1ccbc64
 316e3c0: e1a04000     	mov	r4, r0
 316e3c4: e3500000     	cmp	r0, #0
 316e3c8: 1a000000     	bne	0x316e3d0 <__start_il2cpp+0x1c4dc70> @ imm = #0x0
 316e3cc: eb8ae944     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1d45af0
 316e3d0: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x316e400 <__start_il2cpp+0x1c4dca0>
 316e3d4: e79f0000     	ldr	r0, [pc, r0]
 316e3d8: e5901000     	ldr	r1, [r0]
 316e3dc: e1a00004     	mov	r0, r4
 316e3e0: e8bd4830     	pop	{r4, r5, r11, lr}
 316e3e4: ea159d1f     	b	0x36d5868 <__start_il2cpp+0x21b5108> @ imm = #0x56747c
 316e3e8: 0339b7db     	teqeq	r9, #57409536
 316e3ec: 03118754     	tsteq	r1, #84, #14
 316e3f0: 030fc118     	movweq	r12, #0xf118
 316e3f4: 03121840     	tsteq	r2, #64, #16
 316e3f8: 030fc0b4     	movweq	r12, #0xf0b4
 316e3fc: 031186c8     	tsteq	r1, #200, #12
 316e400: 031217ac     	tsteq	r2, #172, #14
