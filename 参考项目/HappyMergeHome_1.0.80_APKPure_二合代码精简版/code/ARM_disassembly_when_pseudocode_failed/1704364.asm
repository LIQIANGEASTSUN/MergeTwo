
/private/tmp/happy_merge_home_1.0.80_reverse_rip/unpacked_apk/lib/armeabi-v7a/libil2cpp.so:	file format elf32-littlearm

Disassembly of section il2cpp:

01520760 <__start_il2cpp>:
 1704364: e92d4830     	push	{r4, r5, r11, lr}
 1704368: e59f50d4     	ldr	r5, [pc, #0xd4]         @ 0x1704444 <__start_il2cpp+0x1e3ce4>
 170436c: e1a04000     	mov	r4, r0
 1704370: e08f5005     	add	r5, pc, r5
 1704374: e5d50000     	ldrb	r0, [r5]
 1704378: e3500000     	cmp	r0, #0
 170437c: 1a00000a     	bne	0x17043ac <__start_il2cpp+0x1e3c4c> @ imm = #0x28
 1704380: e59f00c0     	ldr	r0, [pc, #0xc0]         @ 0x1704448 <__start_il2cpp+0x1e3ce8>
 1704384: e79f0000     	ldr	r0, [pc, r0]
 1704388: ebf490a6     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2dbd68
 170438c: e59f00b8     	ldr	r0, [pc, #0xb8]         @ 0x170444c <__start_il2cpp+0x1e3cec>
 1704390: e79f0000     	ldr	r0, [pc, r0]
 1704394: ebf490a3     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2dbd74
 1704398: e59f00b0     	ldr	r0, [pc, #0xb0]         @ 0x1704450 <__start_il2cpp+0x1e3cf0>
 170439c: e79f0000     	ldr	r0, [pc, r0]
 17043a0: ebf490a0     	bl	0x1428628 <.text+0x38ba28> @ imm = #-0x2dbd80
 17043a4: e3a00001     	mov	r0, #1
 17043a8: e5c50000     	strb	r0, [r5]
 17043ac: e3080b71     	movw	r0, #0x8b71
 17043b0: e3a01000     	mov	r1, #0
 17043b4: eb48ff06     	bl	0x2943fd4 <__start_il2cpp+0x1423874> @ imm = #0x123fc18
 17043b8: e3500000     	cmp	r0, #0
 17043bc: 0a00000b     	beq	0x17043f0 <__start_il2cpp+0x1e3c90> @ imm = #0x2c
 17043c0: e3080b71     	movw	r0, #0x8b71
 17043c4: e3a01000     	mov	r1, #0
 17043c8: eb48ff35     	bl	0x29440a4 <__start_il2cpp+0x1423944> @ imm = #0x123fcd4
 17043cc: e1a05000     	mov	r5, r0
 17043d0: e3500000     	cmp	r0, #0
 17043d4: 1a000000     	bne	0x17043dc <__start_il2cpp+0x1e3c7c> @ imm = #0x0
 17043d8: ebf49141     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2dbafc
 17043dc: e1a00005     	mov	r0, r5
 17043e0: e1a01004     	mov	r1, r4
 17043e4: e3a02000     	mov	r2, #0
 17043e8: e8bd4830     	pop	{r4, r5, r11, lr}
 17043ec: ea484098     	b	0x2914654 <__start_il2cpp+0x13f3ef4> @ imm = #0x1210260
 17043f0: e59f005c     	ldr	r0, [pc, #0x5c]         @ 0x1704454 <__start_il2cpp+0x1e3cf4>
 17043f4: e79f0000     	ldr	r0, [pc, r0]
 17043f8: e5900000     	ldr	r0, [r0]
 17043fc: e5901074     	ldr	r1, [r0, #0x74]
 1704400: e3510000     	cmp	r1, #0
 1704404: 1a000000     	bne	0x170440c <__start_il2cpp+0x1e3cac> @ imm = #0x0
 1704408: ebf490e5     	bl	0x14287a4 <.text+0x38bba4> @ imm = #-0x2dbc6c
 170440c: e59f0044     	ldr	r0, [pc, #0x44]         @ 0x1704458 <__start_il2cpp+0x1e3cf8>
 1704410: e79f0000     	ldr	r0, [pc, r0]
 1704414: e5900000     	ldr	r0, [r0]
 1704418: ebf7543e     	bl	0x14d9518 <__emutls_get_address+0x2ffc> @ imm = #-0x22af08
 170441c: e1a04000     	mov	r4, r0
 1704420: e3500000     	cmp	r0, #0
 1704424: 1a000000     	bne	0x170442c <__start_il2cpp+0x1e3ccc> @ imm = #0x0
 1704428: ebf4912d     	bl	0x14288e4 <.text+0x38bce4> @ imm = #-0x2dbb4c
 170442c: e59f0028     	ldr	r0, [pc, #0x28]         @ 0x170445c <__start_il2cpp+0x1e3cfc>
 1704430: e79f0000     	ldr	r0, [pc, r0]
 1704434: e5901000     	ldr	r1, [r0]
 1704438: e1a00004     	mov	r0, r4
 170443c: e8bd4830     	pop	{r4, r5, r11, lr}
 1704440: ea7f23d2     	b	0x36cd390 <__start_il2cpp+0x21acc30> @ imm = #0x1fc8f48
 1704444: 04dfb3a1     	ldrbeq	r11, [pc], #929
 1704448: 04b54be4     	ldrteq	r4, [r5], #3044
 170444c: 04b54bdc     	ldrteq	r4, [r5], #3036
 1704450: 04b54bf0     	ldrteq	r4, [r5], #3056
 1704454: 04b54b78     	ldrteq	r4, [r5], #2936
 1704458: 04b54b58     	ldrteq	r4, [r5], #2904
 170445c: 04b54b5c     	ldrteq	r4, [r5], #2908
