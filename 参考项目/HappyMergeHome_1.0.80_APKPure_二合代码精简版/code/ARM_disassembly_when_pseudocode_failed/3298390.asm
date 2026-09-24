
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 3298390: e92d4830     	push	{r4, r5, r11, lr}
 3298394: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x3298470 <__start_il2cpp+0x1d77d10>
 3298398: e1a04000     	mov	r4, r0
 329839c: e08f5005     	add	r5, pc, r5
 32983a0: e5d50000     	ldrb	r0, [r5]
 32983a4: e3500000     	cmp	r0, #0
 32983a8: 1a00000a     	bne	0x32983d8 <__start_il2cpp+0x1d77c78> @ imm = #0x28
 32983ac: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x3298474 <__start_il2cpp+0x1d77d14>
 32983b0: e79f0000     	ldr	r0, [pc, r0]
 32983b4: eb86409b     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1e6fd94
 32983b8: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x3298478 <__start_il2cpp+0x1d77d18>
 32983bc: e79f0000     	ldr	r0, [pc, r0]
 32983c0: eb864098     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1e6fda0
 32983c4: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x329847c <__start_il2cpp+0x1d77d1c>
 32983c8: e79f0000     	ldr	r0, [pc, r0]
 32983cc: eb864095     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1e6fdac
 32983d0: e3a00001     	mov	r0, #1
 32983d4: e5c50000     	strb	r0, [r5]
 32983d8: e3010392     	movw	r0, #0x1392
 32983dc: e3a01000     	mov	r1, #0
 32983e0: ebdaaefb     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x954414
 32983e4: e3500000     	cmp	r0, #0
 32983e8: 0a00000b     	beq	0x329841c <__start_il2cpp+0x1d77cbc> @ imm = #0x2c
 32983ec: e3010392     	movw	r0, #0x1392
 32983f0: e3a01000     	mov	r1, #0
 32983f4: ebdaaf2a     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x954358
 32983f8: e1a05000     	mov	r5, r0
 32983fc: e3500000     	cmp	r0, #0
 3298400: 1a000000     	bne	0x3298408 <__start_il2cpp+0x1d77ca8> @ imm = #0x0
 3298404: eb864136     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1e6fb28
 3298408: e1a00005     	mov	r0, r5
 329840c: e1a01004     	mov	r1, r4
 3298410: e3a02000     	mov	r2, #0
 3298414: e8bd4830     	pop	{r4, r5, r11, lr}
 3298418: ead7e5f4     	b	0x2891bf0 <__start_il2cpp+0x1371490> @ imm = #-0xa06830
 329841c: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x3298480 <__start_il2cpp+0x1d77d20>
 3298420: e79f0000     	ldr	r0, [pc, r0]
 3298424: e5900000     	ldr	r0, [r0]
 3298428: e5901074     	ldr	r1, [r0, #0x74]
 329842c: e3510000     	cmp	r1, #0
 3298430: 1a000000     	bne	0x3298438 <__start_il2cpp+0x1d77cd8> @ imm = #0x0
 3298434: eb8640da     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1e6fc98
 3298438: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x3298484 <__start_il2cpp+0x1d77d24>
 329843c: e79f0000     	ldr	r0, [pc, r0]
 3298440: e5900000     	ldr	r0, [r0]
 3298444: eb6e86f7     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1ba1bdc
 3298448: e1a04000     	mov	r4, r0
 329844c: e3500000     	cmp	r0, #0
 3298450: 1a000000     	bne	0x3298458 <__start_il2cpp+0x1d77cf8> @ imm = #0x0
 3298454: eb864122     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1e6fb78
 3298458: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x3298488 <__start_il2cpp+0x1d77d28>
 329845c: e79f0000     	ldr	r0, [pc, r0]
 3298460: e5901000     	ldr	r1, [r0]
 3298464: e1a00004     	mov	r0, r4
 3298468: e8bd4830     	pop	{r4, r5, r11, lr}
 329846c: ea10e76f     	b	0x36d2230 <__start_il2cpp+0x21b1ad0> @ imm = #0x439dbc
 3298470: 03271dc8     	<unknown>
 3298474: 02fbe66c     	rscseq	lr, r11, #108, #12
 3298478: 02fbe664     	rscseq	lr, r11, #100, #12
 329847c: 02ff8ed8     	rscseq	r8, pc, #216, #28
 3298480: 02fbe600     	rscseq	lr, r11, #0, #12
 3298484: 02fbe5e0     	rscseq	lr, r11, #224, #10
 3298488: 02ff8e44     	rscseq	r8, pc, #68, #28
