
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 2ff9798: e92d4830     	push	{r4, r5, r11, lr}
 2ff979c: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x2ff9878 <__start_il2cpp+0x1ad9118>
 2ff97a0: e1a04000     	mov	r4, r0
 2ff97a4: e08f5005     	add	r5, pc, r5
 2ff97a8: e5d50000     	ldrb	r0, [r5]
 2ff97ac: e3500000     	cmp	r0, #0
 2ff97b0: 1a00000a     	bne	0x2ff97e0 <__start_il2cpp+0x1ad9080> @ imm = #0x28
 2ff97b4: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x2ff987c <__start_il2cpp+0x1ad911c>
 2ff97b8: e79f0000     	ldr	r0, [pc, r0]
 2ff97bc: eb90bb99     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1bd119c
 2ff97c0: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x2ff9880 <__start_il2cpp+0x1ad9120>
 2ff97c4: e79f0000     	ldr	r0, [pc, r0]
 2ff97c8: eb90bb96     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1bd11a8
 2ff97cc: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x2ff9884 <__start_il2cpp+0x1ad9124>
 2ff97d0: e79f0000     	ldr	r0, [pc, r0]
 2ff97d4: eb90bb93     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x1bd11b4
 2ff97d8: e3a00001     	mov	r0, #1
 2ff97dc: e5c50000     	strb	r0, [r5]
 2ff97e0: e30105a1     	movw	r0, #0x15a1
 2ff97e4: e3a01000     	mov	r1, #0
 2ff97e8: ebe529f9     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #-0x6b581c
 2ff97ec: e3500000     	cmp	r0, #0
 2ff97f0: 0a00000b     	beq	0x2ff9824 <__start_il2cpp+0x1ad90c4> @ imm = #0x2c
 2ff97f4: e30105a1     	movw	r0, #0x15a1
 2ff97f8: e3a01000     	mov	r1, #0
 2ff97fc: ebe52a28     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #-0x6b5760
 2ff9800: e1a05000     	mov	r5, r0
 2ff9804: e3500000     	cmp	r0, #0
 2ff9808: 1a000000     	bne	0x2ff9810 <__start_il2cpp+0x1ad90b0> @ imm = #0x0
 2ff980c: eb90bc34     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1bd0f30
 2ff9810: e1a00005     	mov	r0, r5
 2ff9814: e1a01004     	mov	r1, r4
 2ff9818: e3a02000     	mov	r2, #0
 2ff981c: e8bd4830     	pop	{r4, r5, r11, lr}
 2ff9820: eae2708e     	b	0x2895a60 <__start_il2cpp+0x1375300> @ imm = #-0x763dc8
 2ff9824: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x2ff9888 <__start_il2cpp+0x1ad9128>
 2ff9828: e79f0000     	ldr	r0, [pc, r0]
 2ff982c: e5900000     	ldr	r0, [r0]
 2ff9830: e5901074     	ldr	r1, [r0, #0x74]
 2ff9834: e3510000     	cmp	r1, #0
 2ff9838: 1a000000     	bne	0x2ff9840 <__start_il2cpp+0x1ad90e0> @ imm = #0x0
 2ff983c: eb90bbd8     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x1bd10a0
 2ff9840: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x2ff988c <__start_il2cpp+0x1ad912c>
 2ff9844: e79f0000     	ldr	r0, [pc, r0]
 2ff9848: e5900000     	ldr	r0, [r0]
 2ff984c: eb7901f5     	bl	0x4e3a028 <__start_il2cpp+0x39198c8> @ imm = #0x1e407d4
 2ff9850: e1a04000     	mov	r4, r0
 2ff9854: e3500000     	cmp	r0, #0
 2ff9858: 1a000000     	bne	0x2ff9860 <__start_il2cpp+0x1ad9100> @ imm = #0x0
 2ff985c: eb90bc20     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x1bd0f80
 2ff9860: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x2ff9890 <__start_il2cpp+0x1ad9130>
 2ff9864: e79f0000     	ldr	r0, [pc, r0]
 2ff9868: e5901000     	ldr	r1, [r0]
 2ff986c: e1a00004     	mov	r0, r4
 2ff9870: e8bd4830     	pop	{r4, r5, r11, lr}
 2ff9874: ea1c0ee9     	b	0x36fd420 <__start_il2cpp+0x21dccc0> @ imm = #0x703ba4
 2ff9878: 0350fb40     	cmpeq	r0, #64, #22
 2ff987c: 0328d4c4     	<unknown>
 2ff9880: 03270710     	<unknown>
 2ff9884: 03294780     	<unknown>
 2ff9888: 032706ac     	<unknown>
 2ff988c: 0328d438     	<unknown>
 2ff9890: 032946ec     	<unknown>
