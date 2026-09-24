
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 31f990c: e92d4830     	push	{r4, r5, r11, lr}
 31f9910: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x31f99ec <__start_il2cpp+0x1cd928c>
 31f9914: e1a04000     	mov	r4, r0
 31f9918: e08f5005     	add	r5, pc, r5
 31f991c: e5d50000     	ldrb	r0, [r5]
 31f9920: e3500000     	cmp	r0, #0
 31f9924: 1a00000a     	bne	0x31f9954 <__start_il2cpp+0x1cd91f4> @ imm = #0x28
 31f9928: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x31f99f0 <__start_il2cpp+0x1cd9290>
 31f992c: e79f0000     	ldr	r0, [pc, r0]
 31f9930: eb88bb3c     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1dd1310
 31f9934: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x31f99f4 <__start_il2cpp+0x1cd9294>
 31f9938: e79f0000     	ldr	r0, [pc, r0]
 31f993c: eb88bb39     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1dd131c
 31f9940: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x31f99f8 <__start_il2cpp+0x1cd9298>
 31f9944: e79f0000     	ldr	r0, [pc, r0]
 31f9948: eb88bb36     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1dd1328
 31f994c: e3a00001     	mov	r0, #1
 31f9950: e5c50000     	strb	r0, [r5]
 31f9954: e3010413     	movw	r0, #0x1413
 31f9958: e3a01000     	mov	r1, #0
 31f995c: ebdd299c     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x8b5990
 31f9960: e3500000     	cmp	r0, #0
 31f9964: 0a00000b     	beq	0x31f9998 <__start_il2cpp+0x1cd9238> @ imm = #0x2c
 31f9968: e3010413     	movw	r0, #0x1413
 31f996c: e3a01000     	mov	r1, #0
 31f9970: ebdd29cb     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x8b58d4
 31f9974: e1a05000     	mov	r5, r0
 31f9978: e3500000     	cmp	r0, #0
 31f997c: 1a000000     	bne	0x31f9984 <__start_il2cpp+0x1cd9224> @ imm = #0x0
 31f9980: eb88bbd7     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1dd10a4
 31f9984: e1a00005     	mov	r0, r5
 31f9988: e1a01004     	mov	r1, r4
 31f998c: e3a02000     	mov	r2, #0
 31f9990: e8bd4830     	pop	{r4, r5, r11, lr}
 31f9994: eada64ab     	b	0x2892c48 <__start_il2cpp+0x13724e8> @ imm = #-0x966d54
 31f9998: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x31f99fc <__start_il2cpp+0x1cd929c>
 31f999c: e79f0000     	ldr	r0, [pc, r0]
 31f99a0: e5900000     	ldr	r0, [r0]
 31f99a4: e5901074     	ldr	r1, [r0, #0x74]
 31f99a8: e3510000     	cmp	r1, #0
 31f99ac: 1a000000     	bne	0x31f99b4 <__start_il2cpp+0x1cd9254> @ imm = #0x0
 31f99b0: eb88bb7b     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1dd1214
 31f99b4: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x31f9a00 <__start_il2cpp+0x1cd92a0>
 31f99b8: e79f0000     	ldr	r0, [pc, r0]
 31f99bc: e5900000     	ldr	r0, [r0]
 31f99c0: eb710198     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1c40660
 31f99c4: e1a04000     	mov	r4, r0
 31f99c8: e3500000     	cmp	r0, #0
 31f99cc: 1a000000     	bne	0x31f99d4 <__start_il2cpp+0x1cd9274> @ imm = #0x0
 31f99d0: eb88bbc3     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1dd10f4
 31f99d4: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x31f9a04 <__start_il2cpp+0x1cd92a4>
 31f99d8: e79f0000     	ldr	r0, [pc, r0]
 31f99dc: e5901000     	ldr	r1, [r0]
 31f99e0: e1a00004     	mov	r0, r4
 31f99e4: e8bd4830     	pop	{r4, r5, r11, lr}
 31f99e8: ea136a00     	b	0x36d41f0 <__start_il2cpp+0x21b3a90> @ imm = #0x4da800
 31f99ec: 033104ea     	teqeq	r1, #-369098752
 31f99f0: 0308d2d8     	movweq	sp, #0x82d8
 31f99f4: 03070ce4     	movweq	r0, #0x7ce4
 31f99f8: 03096d94     	movweq	r6, #0x9d94
 31f99fc: 03070c80     	movweq	r0, #0x7c80
 31f9a00: 0308d24c     	movweq	sp, #0x824c
 31f9a04: 03096d00     	movweq	r6, #0x9d00
