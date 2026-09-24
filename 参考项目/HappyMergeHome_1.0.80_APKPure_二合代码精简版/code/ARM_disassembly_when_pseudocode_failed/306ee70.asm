
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 306ee70: e92d4830     	push	{r4, r5, r11, lr}
 306ee74: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x306ef50 <__start_il2cpp+0x1b4e7f0>
 306ee78: e1a04000     	mov	r4, r0
 306ee7c: e08f5005     	add	r5, pc, r5
 306ee80: e5d50000     	ldrb	r0, [r5]
 306ee84: e3500000     	cmp	r0, #0
 306ee88: 1a00000a     	bne	0x306eeb8 <__start_il2cpp+0x1b4e758> @ imm = #0x28
 306ee8c: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x306ef54 <__start_il2cpp+0x1b4e7f4>
 306ee90: e79f0000     	ldr	r0, [pc, r0]
 306ee94: eb8ee5e3     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1c46874
 306ee98: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x306ef58 <__start_il2cpp+0x1b4e7f8>
 306ee9c: e79f0000     	ldr	r0, [pc, r0]
 306eea0: eb8ee5e0     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1c46880
 306eea4: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x306ef5c <__start_il2cpp+0x1b4e7fc>
 306eea8: e79f0000     	ldr	r0, [pc, r0]
 306eeac: eb8ee5dd     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1c4688c
 306eeb0: e3a00001     	mov	r0, #1
 306eeb4: e5c50000     	strb	r0, [r5]
 306eeb8: e3010525     	movw	r0, #0x1525
 306eebc: e3a01000     	mov	r1, #0
 306eec0: ebe35443     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x72aef4
 306eec4: e3500000     	cmp	r0, #0
 306eec8: 0a00000b     	beq	0x306eefc <__start_il2cpp+0x1b4e79c> @ imm = #0x2c
 306eecc: e3010525     	movw	r0, #0x1525
 306eed0: e3a01000     	mov	r1, #0
 306eed4: ebe35472     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x72ae38
 306eed8: e1a05000     	mov	r5, r0
 306eedc: e3500000     	cmp	r0, #0
 306eee0: 1a000000     	bne	0x306eee8 <__start_il2cpp+0x1b4e788> @ imm = #0x0
 306eee4: eb8ee67e     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1c46608
 306eee8: e1a00005     	mov	r0, r5
 306eeec: e1a01004     	mov	r1, r4
 306eef0: e3a02000     	mov	r2, #0
 306eef4: e8bd4830     	pop	{r4, r5, r11, lr}
 306eef8: eae097c5     	b	0x2894e14 <__start_il2cpp+0x13746b4> @ imm = #-0x7da0ec
 306eefc: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x306ef60 <__start_il2cpp+0x1b4e800>
 306ef00: e79f0000     	ldr	r0, [pc, r0]
 306ef04: e5900000     	ldr	r0, [r0]
 306ef08: e5901074     	ldr	r1, [r0, #0x74]
 306ef0c: e3510000     	cmp	r1, #0
 306ef10: 1a000000     	bne	0x306ef18 <__start_il2cpp+0x1b4e7b8> @ imm = #0x0
 306ef14: eb8ee622     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1c46778
 306ef18: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x306ef64 <__start_il2cpp+0x1b4e804>
 306ef1c: e79f0000     	ldr	r0, [pc, r0]
 306ef20: e5900000     	ldr	r0, [r0]
 306ef24: eb772c3f     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1dcb0fc
 306ef28: e1a04000     	mov	r4, r0
 306ef2c: e3500000     	cmp	r0, #0
 306ef30: 1a000000     	bne	0x306ef38 <__start_il2cpp+0x1b4e7d8> @ imm = #0x0
 306ef34: eb8ee66a     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1c46658
 306ef38: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x306ef68 <__start_il2cpp+0x1b4e808>
 306ef3c: e79f0000     	ldr	r0, [pc, r0]
 306ef40: e5901000     	ldr	r1, [r0]
 306ef44: e1a00004     	mov	r0, r4
 306ef48: e8bd4830     	pop	{r4, r5, r11, lr}
 306ef4c: ea1a32e7     	b	0x36fbaf0 <__start_il2cpp+0x21db390> @ imm = #0x68cb9c
 306ef50: 0349a6ef     	movteq	r10, #0x96ef
 306ef54: 03217e68     	<unknown>
 306ef58: 031fb22c     	tsteq	pc, #44, #4
 306ef5c: 0321f944     	msreq	CPSR_c, #68, #18
 306ef60: 031fb1c8     	tsteq	pc, #200, #2
 306ef64: 03217ddc     	<unknown>
 306ef68: 0321f8b0     	msreq	CPSR_c, #176, #16
