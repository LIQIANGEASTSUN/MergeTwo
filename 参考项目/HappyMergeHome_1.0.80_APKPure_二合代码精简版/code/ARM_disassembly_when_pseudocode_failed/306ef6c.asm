
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 306ef6c: e92d4830     	push	{r4, r5, r11, lr}
 306ef70: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x306f04c <__start_il2cpp+0x1b4e8ec>
 306ef74: e1a04000     	mov	r4, r0
 306ef78: e08f5005     	add	r5, pc, r5
 306ef7c: e5d50000     	ldrb	r0, [r5]
 306ef80: e3500000     	cmp	r0, #0
 306ef84: 1a00000a     	bne	0x306efb4 <__start_il2cpp+0x1b4e854> @ imm = #0x28
 306ef88: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x306f050 <__start_il2cpp+0x1b4e8f0>
 306ef8c: e79f0000     	ldr	r0, [pc, r0]
 306ef90: eb8ee5a4     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1c46970
 306ef94: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x306f054 <__start_il2cpp+0x1b4e8f4>
 306ef98: e79f0000     	ldr	r0, [pc, r0]
 306ef9c: eb8ee5a1     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1c4697c
 306efa0: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x306f058 <__start_il2cpp+0x1b4e8f8>
 306efa4: e79f0000     	ldr	r0, [pc, r0]
 306efa8: eb8ee59e     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1c46988
 306efac: e3a00001     	mov	r0, #1
 306efb0: e5c50000     	strb	r0, [r5]
 306efb4: e3070592     	movw	r0, #0x7592
 306efb8: e3a01000     	mov	r1, #0
 306efbc: ebe35404     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x72aff0
 306efc0: e3500000     	cmp	r0, #0
 306efc4: 0a00000b     	beq	0x306eff8 <__start_il2cpp+0x1b4e898> @ imm = #0x2c
 306efc8: e3070592     	movw	r0, #0x7592
 306efcc: e3a01000     	mov	r1, #0
 306efd0: ebe35433     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x72af34
 306efd4: e1a05000     	mov	r5, r0
 306efd8: e3500000     	cmp	r0, #0
 306efdc: 1a000000     	bne	0x306efe4 <__start_il2cpp+0x1b4e884> @ imm = #0x0
 306efe0: eb8ee63f     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1c46704
 306efe4: e1a00005     	mov	r0, r5
 306efe8: e1a01004     	mov	r1, r4
 306efec: e3a02000     	mov	r2, #0
 306eff0: e8bd4830     	pop	{r4, r5, r11, lr}
 306eff4: eae266f0     	b	0x2908bbc <__start_il2cpp+0x13e845c> @ imm = #-0x766440
 306eff8: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x306f05c <__start_il2cpp+0x1b4e8fc>
 306effc: e79f0000     	ldr	r0, [pc, r0]
 306f000: e5900000     	ldr	r0, [r0]
 306f004: e5901074     	ldr	r1, [r0, #0x74]
 306f008: e3510000     	cmp	r1, #0
 306f00c: 1a000000     	bne	0x306f014 <__start_il2cpp+0x1b4e8b4> @ imm = #0x0
 306f010: eb8ee5e3     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1c46874
 306f014: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x306f060 <__start_il2cpp+0x1b4e900>
 306f018: e79f0000     	ldr	r0, [pc, r0]
 306f01c: e5900000     	ldr	r0, [r0]
 306f020: eb772c00     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1dcb000
 306f024: e1a04000     	mov	r4, r0
 306f028: e3500000     	cmp	r0, #0
 306f02c: 1a000000     	bne	0x306f034 <__start_il2cpp+0x1b4e8d4> @ imm = #0x0
 306f030: eb8ee62b     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1c46754
 306f034: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x306f064 <__start_il2cpp+0x1b4e904>
 306f038: e79f0000     	ldr	r0, [pc, r0]
 306f03c: e5901000     	ldr	r1, [r0]
 306f040: e1a00004     	mov	r0, r4
 306f044: e8bd4830     	pop	{r4, r5, r11, lr}
 306f048: ea1a32a8     	b	0x36fbaf0 <__start_il2cpp+0x21db390> @ imm = #0x68caa0
 306f04c: 0349a5f4     	movteq	r10, #0x95f4
 306f050: 03217d6c     	<unknown>
 306f054: 031fb130     	tsteq	pc, #48, #2
 306f058: 0321f84c     	msreq	CPSR_c, #76, #16
 306f05c: 031fb0cc     	tsteq	pc, #204
 306f060: 03217ce0     	<unknown>
 306f064: 0321f7b8     	msreq	CPSR_c, #184, #14
