
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 1632218: e92d4830     	push	{r4, r5, r11, lr}
 163221c: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x16322f8 <__start_il2cpp+0x111b98>
 1632220: e1a04000     	mov	r4, r0
 1632224: e08f5005     	add	r5, pc, r5
 1632228: e5d50000     	ldrb	r0, [r5]
 163222c: e3500000     	cmp	r0, #0
 1632230: 1a00000a     	bne	0x1632260 <__start_il2cpp+0x111b00> @ imm = #0x28
 1632234: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x16322fc <__start_il2cpp+0x111b9c>
 1632238: e79f0000     	ldr	r0, [pc, r0]
 163223c: ebf7d8f9     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x209c1c
 1632240: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x1632300 <__start_il2cpp+0x111ba0>
 1632244: e79f0000     	ldr	r0, [pc, r0]
 1632248: ebf7d8f6     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x209c28
 163224c: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x1632304 <__start_il2cpp+0x111ba4>
 1632250: e79f0000     	ldr	r0, [pc, r0]
 1632254: ebf7d8f3     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x209c34
 1632258: e3a00001     	mov	r0, #1
 163225c: e5c50000     	strb	r0, [r5]
 1632260: e301068d     	movw	r0, #0x168d
 1632264: e3a01000     	mov	r1, #0
 1632268: eb4c4759     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x1311d64
 163226c: e3500000     	cmp	r0, #0
 1632270: 0a00000b     	beq	0x16322a4 <__start_il2cpp+0x111b44> @ imm = #0x2c
 1632274: e301068d     	movw	r0, #0x168d
 1632278: e3a01000     	mov	r1, #0
 163227c: eb4c4788     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x1311e20
 1632280: e1a05000     	mov	r5, r0
 1632284: e3500000     	cmp	r0, #0
 1632288: 1a000000     	bne	0x1632290 <__start_il2cpp+0x111b30> @ imm = #0x0
 163228c: ebf7d994     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2099b0
 1632290: e1a00005     	mov	r0, r5
 1632294: e1a01004     	mov	r1, r4
 1632298: e3a02000     	mov	r2, #0
 163229c: e8bd4830     	pop	{r4, r5, r11, lr}
 16322a0: ea49940f     	b	0x28972e4 <__start_il2cpp+0x1376b84> @ imm = #0x126503c
 16322a4: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x1632308 <__start_il2cpp+0x111ba8>
 16322a8: e79f0000     	ldr	r0, [pc, r0]
 16322ac: e5900000     	ldr	r0, [r0]
 16322b0: e5901074     	ldr	r1, [r0, #0x74]
 16322b4: e3510000     	cmp	r1, #0
 16322b8: 1a000000     	bne	0x16322c0 <__start_il2cpp+0x111b60> @ imm = #0x0
 16322bc: ebf7d938     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x209b20
 16322c0: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x163230c <__start_il2cpp+0x111bac>
 16322c4: e79f0000     	ldr	r0, [pc, r0]
 16322c8: e5900000     	ldr	r0, [r0]
 16322cc: ebfa9c91     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x158dbc
 16322d0: e1a04000     	mov	r4, r0
 16322d4: e3500000     	cmp	r0, #0
 16322d8: 1a000000     	bne	0x16322e0 <__start_il2cpp+0x111b80> @ imm = #0x0
 16322dc: ebf7d980     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x209a00
 16322e0: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x1632310 <__start_il2cpp+0x111bb0>
 16322e4: e79f0000     	ldr	r0, [pc, r0]
 16322e8: e5901000     	ldr	r1, [r0]
 16322ec: e1a00004     	mov	r0, r4
 16322f0: e8bd4830     	pop	{r4, r5, r11, lr}
 16322f4: ea3abb5d     	b	0x24e1070 <__start_il2cpp+0xfc0910> @ imm = #0xeaed74
 16322f8: 04ecd05e     	strbteq	sp, [r12], #94
 16322fc: 04c258d4     	strbeq	r5, [r2], #2260
 1632300: 04c258cc     	strbeq	r5, [r2], #2252
 1632304: 04c258f0     	strbeq	r5, [r2], #2288
 1632308: 04c25868     	strbeq	r5, [r2], #2152
 163230c: 04c25848     	strbeq	r5, [r2], #2120
 1632310: 04c2585c     	strbeq	r5, [r2], #2140
