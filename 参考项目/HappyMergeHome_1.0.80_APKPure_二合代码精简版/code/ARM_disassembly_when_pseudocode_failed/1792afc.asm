
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 1792afc: e92d4830     	push	{r4, r5, r11, lr}
 1792b00: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x1792bdc <__start_il2cpp+0x27247c>
 1792b04: e1a04000     	mov	r4, r0
 1792b08: e08f5005     	add	r5, pc, r5
 1792b0c: e5d50000     	ldrb	r0, [r5]
 1792b10: e3500000     	cmp	r0, #0
 1792b14: 1a00000a     	bne	0x1792b44 <__start_il2cpp+0x2723e4> @ imm = #0x28
 1792b18: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x1792be0 <__start_il2cpp+0x272480>
 1792b1c: e79f0000     	ldr	r0, [pc, r0]
 1792b20: ebf256c0     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x36a500
 1792b24: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x1792be4 <__start_il2cpp+0x272484>
 1792b28: e79f0000     	ldr	r0, [pc, r0]
 1792b2c: ebf256bd     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x36a50c
 1792b30: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x1792be8 <__start_il2cpp+0x272488>
 1792b34: e79f0000     	ldr	r0, [pc, r0]
 1792b38: ebf256ba     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x36a518
 1792b3c: e3a00001     	mov	r0, #1
 1792b40: e5c50000     	strb	r0, [r5]
 1792b44: e3010751     	movw	r0, #0x1751
 1792b48: e3a01000     	mov	r1, #0
 1792b4c: eb46c520     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x11b1480
 1792b50: e3500000     	cmp	r0, #0
 1792b54: 0a00000b     	beq	0x1792b88 <__start_il2cpp+0x272428> @ imm = #0x2c
 1792b58: e3010751     	movw	r0, #0x1751
 1792b5c: e3a01000     	mov	r1, #0
 1792b60: eb46c54f     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x11b153c
 1792b64: e1a05000     	mov	r5, r0
 1792b68: e3500000     	cmp	r0, #0
 1792b6c: 1a000000     	bne	0x1792b74 <__start_il2cpp+0x272414> @ imm = #0x0
 1792b70: ebf2575b     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x36a294
 1792b74: e1a00005     	mov	r0, r5
 1792b78: e1a01004     	mov	r1, r4
 1792b7c: e3a02000     	mov	r2, #0
 1792b80: e8bd4830     	pop	{r4, r5, r11, lr}
 1792b84: ea4416ef     	b	0x2898748 <__start_il2cpp+0x1377fe8> @ imm = #0x1105bbc
 1792b88: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x1792bec <__start_il2cpp+0x27248c>
 1792b8c: e79f0000     	ldr	r0, [pc, r0]
 1792b90: e5900000     	ldr	r0, [r0]
 1792b94: e5901074     	ldr	r1, [r0, #0x74]
 1792b98: e3510000     	cmp	r1, #0
 1792b9c: 1a000000     	bne	0x1792ba4 <__start_il2cpp+0x272444> @ imm = #0x0
 1792ba0: ebf256ff     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x36a404
 1792ba4: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x1792bf0 <__start_il2cpp+0x272490>
 1792ba8: e79f0000     	ldr	r0, [pc, r0]
 1792bac: e5900000     	ldr	r0, [r0]
 1792bb0: ebf51a58     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x2b96a0
 1792bb4: e1a04000     	mov	r4, r0
 1792bb8: e3500000     	cmp	r0, #0
 1792bbc: 1a000000     	bne	0x1792bc4 <__start_il2cpp+0x272464> @ imm = #0x0
 1792bc0: ebf25747     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x36a2e4
 1792bc4: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x1792bf4 <__start_il2cpp+0x272494>
 1792bc8: e79f0000     	ldr	r0, [pc, r0]
 1792bcc: e5901000     	ldr	r1, [r0]
 1792bd0: e1a00004     	mov	r0, r4
 1792bd4: e8bd4830     	pop	{r4, r5, r11, lr}
 1792bd8: ea7ce426     	b	0x36cbc78 <__start_il2cpp+0x21ab518> @ imm = #0x1f39098
 1792bdc: 04d6cf36     	ldrbeq	r12, [r6], #3894
 1792be0: 04ac7190     	strteq	r7, [r12], #400
 1792be4: 04ac7188     	strteq	r7, [r12], #392
 1792be8: 04ac7180     	strteq	r7, [r12], #384
 1792bec: 04ac7124     	strteq	r7, [r12], #292
 1792bf0: 04ac7104     	strteq	r7, [r12], #260
 1792bf4: 04ac70ec     	strteq	r7, [r12], #236
