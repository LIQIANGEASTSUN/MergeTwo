
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 17c5094: e92d4830     	push	{r4, r5, r11, lr}
 17c5098: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x17c5174 <__start_il2cpp+0x2a4a14>
 17c509c: e1a04000     	mov	r4, r0
 17c50a0: e08f5005     	add	r5, pc, r5
 17c50a4: e5d50000     	ldrb	r0, [r5]
 17c50a8: e3500000     	cmp	r0, #0
 17c50ac: 1a00000a     	bne	0x17c50dc <__start_il2cpp+0x2a497c> @ imm = #0x28
 17c50b0: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x17c5178 <__start_il2cpp+0x2a4a18>
 17c50b4: e79f0000     	ldr	r0, [pc, r0]
 17c50b8: ebf18d5a     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x39ca98
 17c50bc: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x17c517c <__start_il2cpp+0x2a4a1c>
 17c50c0: e79f0000     	ldr	r0, [pc, r0]
 17c50c4: ebf18d57     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x39caa4
 17c50c8: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x17c5180 <__start_il2cpp+0x2a4a20>
 17c50cc: e79f0000     	ldr	r0, [pc, r0]
 17c50d0: ebf18d54     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x39cab0
 17c50d4: e3a00001     	mov	r0, #1
 17c50d8: e5c50000     	strb	r0, [r5]
 17c50dc: e301037d     	movw	r0, #0x137d
 17c50e0: e3a01000     	mov	r1, #0
 17c50e4: eb45fbba     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x117eee8
 17c50e8: e3500000     	cmp	r0, #0
 17c50ec: 0a00000b     	beq	0x17c5120 <__start_il2cpp+0x2a49c0> @ imm = #0x2c
 17c50f0: e301037d     	movw	r0, #0x137d
 17c50f4: e3a01000     	mov	r1, #0
 17c50f8: eb45fbe9     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x117efa4
 17c50fc: e1a05000     	mov	r5, r0
 17c5100: e3500000     	cmp	r0, #0
 17c5104: 1a000000     	bne	0x17c510c <__start_il2cpp+0x2a49ac> @ imm = #0x0
 17c5108: ebf18df5     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x39c82c
 17c510c: e1a00005     	mov	r0, r5
 17c5110: e1a01004     	mov	r1, r4
 17c5114: e3a02000     	mov	r2, #0
 17c5118: e8bd4830     	pop	{r4, r5, r11, lr}
 17c511c: ea4331ab     	b	0x28917d0 <__start_il2cpp+0x1371070> @ imm = #0x10cc6ac
 17c5120: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x17c5184 <__start_il2cpp+0x2a4a24>
 17c5124: e79f0000     	ldr	r0, [pc, r0]
 17c5128: e5900000     	ldr	r0, [r0]
 17c512c: e5901074     	ldr	r1, [r0, #0x74]
 17c5130: e3510000     	cmp	r1, #0
 17c5134: 1a000000     	bne	0x17c513c <__start_il2cpp+0x2a49dc> @ imm = #0x0
 17c5138: ebf18d99     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x39c99c
 17c513c: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x17c5188 <__start_il2cpp+0x2a4a28>
 17c5140: e79f0000     	ldr	r0, [pc, r0]
 17c5144: e5900000     	ldr	r0, [r0]
 17c5148: ebf450f2     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x2ebc38
 17c514c: e1a04000     	mov	r4, r0
 17c5150: e3500000     	cmp	r0, #0
 17c5154: 1a000000     	bne	0x17c515c <__start_il2cpp+0x2a49fc> @ imm = #0x0
 17c5158: ebf18de1     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x39c87c
 17c515c: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x17c518c <__start_il2cpp+0x2a4a2c>
 17c5160: e79f0000     	ldr	r0, [pc, r0]
 17c5164: e5901000     	ldr	r1, [r0]
 17c5168: e1a00004     	mov	r0, r4
 17c516c: e8bd4830     	pop	{r4, r5, r11, lr}
 17c5170: ea7c1870     	b	0x36cb338 <__start_il2cpp+0x21aabd8> @ imm = #0x1f061c0
 17c5174: 04d3aaad     	ldrbeq	r10, [r3], #2733
 17c5178: 04a91948     	strteq	r1, [r9], #2376
 17c517c: 04a91940     	strteq	r1, [r9], #2368
 17c5180: 04a95030     	strteq	r5, [r9], #48
 17c5184: 04a918dc     	strteq	r1, [r9], #2268
 17c5188: 04a918bc     	strteq	r1, [r9], #2236
 17c518c: 04a94f9c     	strteq	r4, [r9], #3996
