
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 166c264: e92d4830     	push	{r4, r5, r11, lr}
 166c268: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x166c344 <__start_il2cpp+0x14bbe4>
 166c26c: e1a04000     	mov	r4, r0
 166c270: e08f5005     	add	r5, pc, r5
 166c274: e5d50000     	ldrb	r0, [r5]
 166c278: e3500000     	cmp	r0, #0
 166c27c: 1a00000a     	bne	0x166c2ac <__start_il2cpp+0x14bb4c> @ imm = #0x28
 166c280: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x166c348 <__start_il2cpp+0x14bbe8>
 166c284: e79f0000     	ldr	r0, [pc, r0]
 166c288: ebf6f0e6     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x243c68
 166c28c: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x166c34c <__start_il2cpp+0x14bbec>
 166c290: e79f0000     	ldr	r0, [pc, r0]
 166c294: ebf6f0e3     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x243c74
 166c298: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x166c350 <__start_il2cpp+0x14bbf0>
 166c29c: e79f0000     	ldr	r0, [pc, r0]
 166c2a0: ebf6f0e0     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x243c80
 166c2a4: e3a00001     	mov	r0, #1
 166c2a8: e5c50000     	strb	r0, [r5]
 166c2ac: e30105fb     	movw	r0, #0x15fb
 166c2b0: e3a01000     	mov	r1, #0
 166c2b4: eb4b5f46     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x12d7d18
 166c2b8: e3500000     	cmp	r0, #0
 166c2bc: 0a00000b     	beq	0x166c2f0 <__start_il2cpp+0x14bb90> @ imm = #0x2c
 166c2c0: e30105fb     	movw	r0, #0x15fb
 166c2c4: e3a01000     	mov	r1, #0
 166c2c8: eb4b5f75     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x12d7dd4
 166c2cc: e1a05000     	mov	r5, r0
 166c2d0: e3500000     	cmp	r0, #0
 166c2d4: 1a000000     	bne	0x166c2dc <__start_il2cpp+0x14bb7c> @ imm = #0x0
 166c2d8: ebf6f181     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2439fc
 166c2dc: e1a00005     	mov	r0, r5
 166c2e0: e1a01004     	mov	r1, r4
 166c2e4: e3a02000     	mov	r2, #0
 166c2e8: e8bd4830     	pop	{r4, r5, r11, lr}
 166c2ec: ea48a828     	b	0x2896394 <__start_il2cpp+0x1375c34> @ imm = #0x122a0a0
 166c2f0: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x166c354 <__start_il2cpp+0x14bbf4>
 166c2f4: e79f0000     	ldr	r0, [pc, r0]
 166c2f8: e5900000     	ldr	r0, [r0]
 166c2fc: e5901074     	ldr	r1, [r0, #0x74]
 166c300: e3510000     	cmp	r1, #0
 166c304: 1a000000     	bne	0x166c30c <__start_il2cpp+0x14bbac> @ imm = #0x0
 166c308: ebf6f125     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x243b6c
 166c30c: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x166c358 <__start_il2cpp+0x14bbf8>
 166c310: e79f0000     	ldr	r0, [pc, r0]
 166c314: e5900000     	ldr	r0, [r0]
 166c318: ebf9b47e     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x192e08
 166c31c: e1a04000     	mov	r4, r0
 166c320: e3500000     	cmp	r0, #0
 166c324: 1a000000     	bne	0x166c32c <__start_il2cpp+0x14bbcc> @ imm = #0x0
 166c328: ebf6f16d     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x243a4c
 166c32c: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x166c35c <__start_il2cpp+0x14bbfc>
 166c330: e79f0000     	ldr	r0, [pc, r0]
 166c334: e5901000     	ldr	r1, [r0]
 166c338: e1a00004     	mov	r0, r4
 166c33c: e8bd4830     	pop	{r4, r5, r11, lr}
 166c340: ea39d3dc     	b	0x24e12b8 <__start_il2cpp+0xfc0b58> @ imm = #0xe74f70
 166c344: 04e93155     	strbteq	r3, [r9], #341
 166c348: 04bec0dc     	ldrteq	r12, [lr], #220
 166c34c: 04bec0d4     	ldrteq	r12, [lr], #212
 166c350: 04bec0e8     	ldrteq	r12, [lr], #232
 166c354: 04bec070     	ldrteq	r12, [lr], #112
 166c358: 04bec050     	ldrteq	r12, [lr], #80
 166c35c: 04bec054     	ldrteq	r12, [lr], #84
