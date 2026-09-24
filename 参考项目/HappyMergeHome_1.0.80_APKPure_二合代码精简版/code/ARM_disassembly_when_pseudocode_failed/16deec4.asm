
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 16deec4: e92d4830     	push	{r4, r5, r11, lr}
 16deec8: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x16defa4 <__start_il2cpp+0x1be844>
 16deecc: e1a04000     	mov	r4, r0
 16deed0: e08f5005     	add	r5, pc, r5
 16deed4: e5d50000     	ldrb	r0, [r5]
 16deed8: e3500000     	cmp	r0, #0
 16deedc: 1a00000a     	bne	0x16def0c <__start_il2cpp+0x1be7ac> @ imm = #0x28
 16deee0: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x16defa8 <__start_il2cpp+0x1be848>
 16deee4: e79f0000     	ldr	r0, [pc, r0]
 16deee8: ebf525ce     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2b68c8
 16deeec: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x16defac <__start_il2cpp+0x1be84c>
 16deef0: e79f0000     	ldr	r0, [pc, r0]
 16deef4: ebf525cb     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2b68d4
 16deef8: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x16defb0 <__start_il2cpp+0x1be850>
 16deefc: e79f0000     	ldr	r0, [pc, r0]
 16def00: ebf525c8     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2b68e0
 16def04: e3a00001     	mov	r0, #1
 16def08: e5c50000     	strb	r0, [r5]
 16def0c: e3080a94     	movw	r0, #0x8a94
 16def10: e3a01000     	mov	r1, #0
 16def14: eb49942e     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x12650b8
 16def18: e3500000     	cmp	r0, #0
 16def1c: 0a00000b     	beq	0x16def50 <__start_il2cpp+0x1be7f0> @ imm = #0x2c
 16def20: e3080a94     	movw	r0, #0x8a94
 16def24: e3a01000     	mov	r1, #0
 16def28: eb49945d     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x1265174
 16def2c: e1a05000     	mov	r5, r0
 16def30: e3500000     	cmp	r0, #0
 16def34: 1a000000     	bne	0x16def3c <__start_il2cpp+0x1be7dc> @ imm = #0x0
 16def38: ebf52669     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2b665c
 16def3c: e1a00005     	mov	r0, r5
 16def40: e1a01004     	mov	r1, r4
 16def44: e3a02000     	mov	r2, #0
 16def48: e8bd4830     	pop	{r4, r5, r11, lr}
 16def4c: ea48d443     	b	0x2914060 <__start_il2cpp+0x13f3900> @ imm = #0x123510c
 16def50: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x16defb4 <__start_il2cpp+0x1be854>
 16def54: e79f0000     	ldr	r0, [pc, r0]
 16def58: e5900000     	ldr	r0, [r0]
 16def5c: e5901074     	ldr	r1, [r0, #0x74]
 16def60: e3510000     	cmp	r1, #0
 16def64: 1a000000     	bne	0x16def6c <__start_il2cpp+0x1be80c> @ imm = #0x0
 16def68: ebf5260d     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x2b67cc
 16def6c: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x16defb8 <__start_il2cpp+0x1be858>
 16def70: e79f0000     	ldr	r0, [pc, r0]
 16def74: e5900000     	ldr	r0, [r0]
 16def78: ebf7e966     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x205a68
 16def7c: e1a04000     	mov	r4, r0
 16def80: e3500000     	cmp	r0, #0
 16def84: 1a000000     	bne	0x16def8c <__start_il2cpp+0x1be82c> @ imm = #0x0
 16def88: ebf52655     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2b66ac
 16def8c: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x16defbc <__start_il2cpp+0x1be85c>
 16def90: e79f0000     	ldr	r0, [pc, r0]
 16def94: e5901000     	ldr	r1, [r0]
 16def98: e1a00004     	mov	r0, r4
 16def9c: e8bd4830     	pop	{r4, r5, r11, lr}
 16defa0: ea7fbb9a     	b	0x36cde10 <__start_il2cpp+0x21ad6b0> @ imm = #0x1feee68
 16defa4: 04e20770     	strbteq	r0, [r2], #1904
 16defa8: 04b79d9c     	ldrteq	r9, [r7], #3484
 16defac: 04b79d94     	ldrteq	r9, [r7], #3476
 16defb0: 04b79d90     	ldrteq	r9, [r7], #3472
 16defb4: 04b79d30     	ldrteq	r9, [r7], #3376
 16defb8: 04b79d10     	ldrteq	r9, [r7], #3344
 16defbc: 04b79cfc     	ldrteq	r9, [r7], #3324
