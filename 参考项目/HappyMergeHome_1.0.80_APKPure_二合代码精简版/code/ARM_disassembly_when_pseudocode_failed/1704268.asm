
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 1704268: e92d4830     	push	{r4, r5, r11, lr}
 170426c: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x1704348 <__start_il2cpp+0x1e3be8>
 1704270: e1a04000     	mov	r4, r0
 1704274: e08f5005     	add	r5, pc, r5
 1704278: e5d50000     	ldrb	r0, [r5]
 170427c: e3500000     	cmp	r0, #0
 1704280: 1a00000a     	bne	0x17042b0 <__start_il2cpp+0x1e3b50> @ imm = #0x28
 1704284: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x170434c <__start_il2cpp+0x1e3bec>
 1704288: e79f0000     	ldr	r0, [pc, r0]
 170428c: ebf490e5     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2dbc6c
 1704290: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x1704350 <__start_il2cpp+0x1e3bf0>
 1704294: e79f0000     	ldr	r0, [pc, r0]
 1704298: ebf490e2     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2dbc78
 170429c: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x1704354 <__start_il2cpp+0x1e3bf4>
 17042a0: e79f0000     	ldr	r0, [pc, r0]
 17042a4: ebf490df     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2dbc84
 17042a8: e3a00001     	mov	r0, #1
 17042ac: e5c50000     	strb	r0, [r5]
 17042b0: e3010655     	movw	r0, #0x1655
 17042b4: e3a01000     	mov	r1, #0
 17042b8: eb48ff45     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x123fd14
 17042bc: e3500000     	cmp	r0, #0
 17042c0: 0a00000b     	beq	0x17042f4 <__start_il2cpp+0x1e3b94> @ imm = #0x2c
 17042c4: e3010655     	movw	r0, #0x1655
 17042c8: e3a01000     	mov	r1, #0
 17042cc: eb48ff74     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x123fdd0
 17042d0: e1a05000     	mov	r5, r0
 17042d4: e3500000     	cmp	r0, #0
 17042d8: 1a000000     	bne	0x17042e0 <__start_il2cpp+0x1e3b80> @ imm = #0x0
 17042dc: ebf49180     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2dba00
 17042e0: e1a00005     	mov	r0, r5
 17042e4: e1a01004     	mov	r1, r4
 17042e8: e3a02000     	mov	r2, #0
 17042ec: e8bd4830     	pop	{r4, r5, r11, lr}
 17042f0: ea464a74     	b	0x2896cc8 <__start_il2cpp+0x1376568> @ imm = #0x11929d0
 17042f4: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x1704358 <__start_il2cpp+0x1e3bf8>
 17042f8: e79f0000     	ldr	r0, [pc, r0]
 17042fc: e5900000     	ldr	r0, [r0]
 1704300: e5901074     	ldr	r1, [r0, #0x74]
 1704304: e3510000     	cmp	r1, #0
 1704308: 1a000000     	bne	0x1704310 <__start_il2cpp+0x1e3bb0> @ imm = #0x0
 170430c: ebf49124     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x2dbb70
 1704310: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x170435c <__start_il2cpp+0x1e3bfc>
 1704314: e79f0000     	ldr	r0, [pc, r0]
 1704318: e5900000     	ldr	r0, [r0]
 170431c: ebf7547d     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x22ae0c
 1704320: e1a04000     	mov	r4, r0
 1704324: e3500000     	cmp	r0, #0
 1704328: 1a000000     	bne	0x1704330 <__start_il2cpp+0x1e3bd0> @ imm = #0x0
 170432c: ebf4916c     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2dba50
 1704330: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x1704360 <__start_il2cpp+0x1e3c00>
 1704334: e79f0000     	ldr	r0, [pc, r0]
 1704338: e5901000     	ldr	r1, [r0]
 170433c: e1a00004     	mov	r0, r4
 1704340: e8bd4830     	pop	{r4, r5, r11, lr}
 1704344: ea7f2411     	b	0x36cd390 <__start_il2cpp+0x21acc30> @ imm = #0x1fc9044
 1704348: 04dfb49c     	ldrbeq	r11, [pc], #1180
 170434c: 04b54ce0     	ldrteq	r4, [r5], #3296
 1704350: 04b54cd8     	ldrteq	r4, [r5], #3288
 1704354: 04b54ce8     	ldrteq	r4, [r5], #3304
 1704358: 04b54c74     	ldrteq	r4, [r5], #3188
 170435c: 04b54c54     	ldrteq	r4, [r5], #3156
 1704360: 04b54c54     	ldrteq	r4, [r5], #3156
