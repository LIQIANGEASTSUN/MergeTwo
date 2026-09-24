
# BoardSlotData :: System.Void Reset()
# VA 0x2b9d5c8 .. 0x2b9d6bc (next mapped method entry)
 2b9d5c8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9d5cc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9d5d0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9d5d4: b001dbb4     	adrp	x20, 0x6712000
 2b9d5d8: b001bab5     	adrp	x21, 0x62f2000
 2b9d5dc: aa0003f3     	mov	x19, x0
 2b9d5e0: 3962ce88     	ldrb	w8, [x20, #0x8b3]
 2b9d5e4: f940aeb5     	ldr	x21, [x21, #0x158]
 2b9d5e8: 37000188     	tbnz	w8, #0x0, 0x2b9d618 <__start_il2cpp+0xd5004>
 2b9d5ec: b001baa0     	adrp	x0, 0x62f2000
 2b9d5f0: f940ac00     	ldr	x0, [x0, #0x158]
 2b9d5f4: 97f8e5fb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d5f8: 9001bae0     	adrp	x0, 0x62f9000
 2b9d5fc: f9470000     	ldr	x0, [x0, #0xe00]
 2b9d600: 97f8e5f8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d604: 9001bae0     	adrp	x0, 0x62f9000
 2b9d608: f9470400     	ldr	x0, [x0, #0xe08]
 2b9d60c: 97f8e5f5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d610: 52800028     	mov	w8, #0x1                // =1
 2b9d614: 3922ce88     	strb	w8, [x20, #0x8b3]
 2b9d618: d0ff2728     	adrp	x8, 0x1083000
 2b9d61c: 9001baf4     	adrp	x20, 0x62f9000
 2b9d620: 9001baf6     	adrp	x22, 0x62f9000
 2b9d624: fd40e900     	ldr	d0, [x8, #0x1d0]
 2b9d628: f9470694     	ldr	x20, [x20, #0xe08]
 2b9d62c: f94002a0     	ldr	x0, [x21]
 2b9d630: 12800008     	mov	w8, #-0x1               // =-1
 2b9d634: f90007ff     	str	xzr, [sp, #0x8]
 2b9d638: 3900427f     	strb	wzr, [x19, #0x10]
 2b9d63c: fc01c260     	stur	d0, [x19, #0x1c]
 2b9d640: b9001668     	str	w8, [x19, #0x14]
 2b9d644: b940e409     	ldr	w9, [x0, #0xe4]
 2b9d648: f94702d6     	ldr	x22, [x22, #0xe00]
 2b9d64c: 3900627f     	strb	wzr, [x19, #0x18]
 2b9d650: b9002668     	str	w8, [x19, #0x24]
 2b9d654: 35000069     	cbnz	w9, 0x2b9d660 <__start_il2cpp+0xd504c>
 2b9d658: 97f8e641     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9d65c: f94002a0     	ldr	x0, [x21]
 2b9d660: f9405c08     	ldr	x8, [x0, #0xb8]
 2b9d664: 910023e0     	add	x0, sp, #0x8
 2b9d668: aa1f03e1     	mov	x1, xzr
 2b9d66c: f9400908     	ldr	x8, [x8, #0x10]
 2b9d670: f90007e8     	str	x8, [sp, #0x8]
 2b9d674: 94953dad     	bl	0x50ecd28 <__start_il2cpp+0x2624714>
 2b9d678: aa0003e1     	mov	x1, x0
 2b9d67c: aa1303e0     	mov	x0, x19
 2b9d680: f8028c01     	str	x1, [x0, #0x28]!
 2b9d684: 97f8e5c2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d688: f9400280     	ldr	x0, [x20]
 2b9d68c: 97f8e67b     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9d690: f94002c1     	ldr	x1, [x22]
 2b9d694: aa0003f4     	mov	x20, x0
 2b9d698: 943e2bcc     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2b9d69c: f8030e74     	str	x20, [x19, #0x30]!
 2b9d6a0: aa1303e0     	mov	x0, x19
 2b9d6a4: aa1403e1     	mov	x1, x20
 2b9d6a8: 97f8e5b9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d6ac: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9d6b0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9d6b4: f84307fe     	ldr	x30, [sp], #0x30
 2b9d6b8: d65f03c0     	ret

# BoardSlotData :: System.String ToString()
# VA 0x2b9d6bc .. 0x2b9d728 (next mapped method entry)
 2b9d6bc: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9d6c0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9d6c4: b001dbb4     	adrp	x20, 0x6712000
 2b9d6c8: 9001bab5     	adrp	x21, 0x62f1000
 2b9d6cc: aa0003f3     	mov	x19, x0
 2b9d6d0: 3962d288     	ldrb	w8, [x20, #0x8b4]
 2b9d6d4: f94196b5     	ldr	x21, [x21, #0x328]
 2b9d6d8: 370000c8     	tbnz	w8, #0x0, 0x2b9d6f0 <__start_il2cpp+0xd50dc>
 2b9d6dc: 9001baa0     	adrp	x0, 0x62f1000
 2b9d6e0: f9419400     	ldr	x0, [x0, #0x328]
 2b9d6e4: 97f8e5bf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d6e8: 52800028     	mov	w8, #0x1                // =1
 2b9d6ec: 3922d288     	strb	w8, [x20, #0x8b4]
 2b9d6f0: 91005260     	add	x0, x19, #0x14
 2b9d6f4: aa1f03e1     	mov	x1, xzr
 2b9d6f8: 9495ae37     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2b9d6fc: aa0003f4     	mov	x20, x0
 2b9d700: 91007260     	add	x0, x19, #0x1c
 2b9d704: aa1f03e1     	mov	x1, xzr
 2b9d708: 9495ae33     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2b9d70c: aa0003e2     	mov	x2, x0
 2b9d710: aa1403e0     	mov	x0, x20
 2b9d714: f94002a1     	ldr	x1, [x21]
 2b9d718: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9d71c: aa1f03e3     	mov	x3, xzr
 2b9d720: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9d724: 148f6312     	b	0x4f7636c <__start_il2cpp+0x24add58>

# BoardSlotData :: BoardSlotData Clone()
# VA 0x2b9d728 .. 0x2b9d998 (next mapped method entry)
 2b9d728: d101c3ff     	sub	sp, sp, #0x70
 2b9d72c: f9001bfe     	str	x30, [sp, #0x30]
 2b9d730: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2b9d734: a90557f6     	stp	x22, x21, [sp, #0x50]
 2b9d738: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2b9d73c: b001dbb4     	adrp	x20, 0x6712000
 2b9d740: 9001baf3     	adrp	x19, 0x62f9000
 2b9d744: aa0003f5     	mov	x21, x0
 2b9d748: 3962d688     	ldrb	w8, [x20, #0x8b5]
 2b9d74c: f9470a73     	ldr	x19, [x19, #0xe10]
 2b9d750: 37000368     	tbnz	w8, #0x0, 0x2b9d7bc <__start_il2cpp+0xd51a8>
 2b9d754: 9001bae0     	adrp	x0, 0x62f9000
 2b9d758: f9470800     	ldr	x0, [x0, #0xe10]
 2b9d75c: 97f8e5a1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d760: 9001bae0     	adrp	x0, 0x62f9000
 2b9d764: f9470c00     	ldr	x0, [x0, #0xe18]
 2b9d768: 97f8e59e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d76c: 9001bae0     	adrp	x0, 0x62f9000
 2b9d770: f9471000     	ldr	x0, [x0, #0xe20]
 2b9d774: 97f8e59b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d778: 9001bae0     	adrp	x0, 0x62f9000
 2b9d77c: f9471400     	ldr	x0, [x0, #0xe28]
 2b9d780: 97f8e598     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d784: 9001bae0     	adrp	x0, 0x62f9000
 2b9d788: f9471800     	ldr	x0, [x0, #0xe30]
 2b9d78c: 97f8e595     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d790: 9001bae0     	adrp	x0, 0x62f9000
 2b9d794: f9471c00     	ldr	x0, [x0, #0xe38]
 2b9d798: 97f8e592     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d79c: 9001bae0     	adrp	x0, 0x62f9000
 2b9d7a0: f9470000     	ldr	x0, [x0, #0xe00]
 2b9d7a4: 97f8e58f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d7a8: 9001bae0     	adrp	x0, 0x62f9000
 2b9d7ac: f9470400     	ldr	x0, [x0, #0xe08]
 2b9d7b0: 97f8e58c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d7b4: 52800028     	mov	w8, #0x1                // =1
 2b9d7b8: 3922d688     	strb	w8, [x20, #0x8b5]
 2b9d7bc: f9400260     	ldr	x0, [x19]
 2b9d7c0: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2b9d7c4: f90017ff     	str	xzr, [sp, #0x28]
 2b9d7c8: 97f8e62c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9d7cc: aa1f03e1     	mov	x1, xzr
 2b9d7d0: aa0003f3     	mov	x19, x0
 2b9d7d4: 9496c8dd     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b9d7d8: b4000b13     	cbz	x19, 0x2b9d938 <__start_il2cpp+0xd5324>
 2b9d7dc: b94016a8     	ldr	w8, [x21, #0x14]
 2b9d7e0: 9001baf4     	adrp	x20, 0x62f9000
 2b9d7e4: 9001baf6     	adrp	x22, 0x62f9000
 2b9d7e8: aa1303e0     	mov	x0, x19
 2b9d7ec: b9001668     	str	w8, [x19, #0x14]
 2b9d7f0: f9470694     	ldr	x20, [x20, #0xe08]
 2b9d7f4: fc41c2a0     	ldur	d0, [x21, #0x1c]
 2b9d7f8: f94702d6     	ldr	x22, [x22, #0xe00]
 2b9d7fc: 394042a8     	ldrb	w8, [x21, #0x10]
 2b9d800: 394062a9     	ldrb	w9, [x21, #0x18]
 2b9d804: f94016a1     	ldr	x1, [x21, #0x28]
 2b9d808: fc01c260     	stur	d0, [x19, #0x1c]
 2b9d80c: 39004268     	strb	w8, [x19, #0x10]
 2b9d810: b94026a8     	ldr	w8, [x21, #0x24]
 2b9d814: 39006269     	strb	w9, [x19, #0x18]
 2b9d818: b9002668     	str	w8, [x19, #0x24]
 2b9d81c: f8028c01     	str	x1, [x0, #0x28]!
 2b9d820: 97f8e55b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d824: f9400280     	ldr	x0, [x20]
 2b9d828: 97f8e614     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9d82c: f94002c1     	ldr	x1, [x22]
 2b9d830: aa0003f6     	mov	x22, x0
 2b9d834: 943e2b65     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2b9d838: aa1303f4     	mov	x20, x19
 2b9d83c: aa1603e1     	mov	x1, x22
 2b9d840: f8030e96     	str	x22, [x20, #0x30]!
 2b9d844: aa1403e0     	mov	x0, x20
 2b9d848: 97f8e551     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d84c: f9401aa0     	ldr	x0, [x21, #0x30]
 2b9d850: b4000740     	cbz	x0, 0x2b9d938 <__start_il2cpp+0xd5324>
 2b9d854: 9001bae8     	adrp	x8, 0x62f9000
 2b9d858: 9001baf7     	adrp	x23, 0x62f9000
 2b9d85c: 9001baf8     	adrp	x24, 0x62f9000
 2b9d860: f9471d08     	ldr	x8, [x8, #0xe38]
 2b9d864: 9001baf6     	adrp	x22, 0x62f9000
 2b9d868: f94712f7     	ldr	x23, [x23, #0xe20]
 2b9d86c: f9471b18     	ldr	x24, [x24, #0xe30]
 2b9d870: f9470ed6     	ldr	x22, [x22, #0xe18]
 2b9d874: 910063f5     	add	x21, sp, #0x18
 2b9d878: f9400101     	ldr	x1, [x8]
 2b9d87c: 910063e8     	add	x8, sp, #0x18
 2b9d880: 943e3050     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2b9d884: a900d7ff     	stp	xzr, x21, [sp, #0x8]
 2b9d888: f94002e1     	ldr	x1, [x23]
 2b9d88c: 910063e0     	add	x0, sp, #0x18
 2b9d890: 947ba402     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2b9d894: 360003a0     	tbz	w0, #0x0, 0x2b9d908 <__start_il2cpp+0xd52f4>
 2b9d898: f94017e0     	ldr	x0, [sp, #0x28]
 2b9d89c: b40004c0     	cbz	x0, 0x2b9d934 <__start_il2cpp+0xd5320>
 2b9d8a0: f9400295     	ldr	x21, [x20]
 2b9d8a4: 97ffff1b     	bl	0x2b9d510 <__start_il2cpp+0xd4efc>
 2b9d8a8: aa0003e1     	mov	x1, x0
 2b9d8ac: b4000435     	cbz	x21, 0x2b9d930 <__start_il2cpp+0xd531c>
 2b9d8b0: b9401eaa     	ldr	w10, [x21, #0x1c]
 2b9d8b4: f9400aa8     	ldr	x8, [x21, #0x10]
 2b9d8b8: f9400309     	ldr	x9, [x24]
 2b9d8bc: 1100054a     	add	w10, w10, #0x1
 2b9d8c0: b9001eaa     	str	w10, [x21, #0x1c]
 2b9d8c4: b4000368     	cbz	x8, 0x2b9d930 <__start_il2cpp+0xd531c>
 2b9d8c8: b9801aaa     	ldrsw	x10, [x21, #0x18]
 2b9d8cc: b940190b     	ldr	w11, [x8, #0x18]
 2b9d8d0: 6b0b015f     	cmp	w10, w11
 2b9d8d4: 540000e2     	b.hs	0x2b9d8f0 <__start_il2cpp+0xd52dc>
 2b9d8d8: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2b9d8dc: 11000549     	add	w9, w10, #0x1
 2b9d8e0: b9001aa9     	str	w9, [x21, #0x18]
 2b9d8e4: f8020c01     	str	x1, [x0, #0x20]!
 2b9d8e8: 97f8e529     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9d8ec: 17ffffe7     	b	0x2b9d888 <__start_il2cpp+0xd5274>
 2b9d8f0: f9401128     	ldr	x8, [x9, #0x20]
 2b9d8f4: f9406108     	ldr	x8, [x8, #0xc0]
 2b9d8f8: f9403902     	ldr	x2, [x8, #0x70]
 2b9d8fc: aa1503e0     	mov	x0, x21
 2b9d900: 943e2d4c     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2b9d904: 17ffffe1     	b	0x2b9d888 <__start_il2cpp+0xd5274>
 2b9d908: f94002c1     	ldr	x1, [x22]
 2b9d90c: 910063e0     	add	x0, sp, #0x18
 2b9d910: 947ba3e1     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2b9d914: aa1303e0     	mov	x0, x19
 2b9d918: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2b9d91c: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2b9d920: f9401bfe     	ldr	x30, [sp, #0x30]
 2b9d924: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2b9d928: 9101c3ff     	add	sp, sp, #0x70
 2b9d92c: d65f03c0     	ret
 2b9d930: 97f8e5d6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9d934: 97f8e5d5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9d938: 97f8e5d4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9d93c: 14000003     	b	0x2b9d948 <__start_il2cpp+0xd5334>
 2b9d940: 14000002     	b	0x2b9d948 <__start_il2cpp+0xd5334>
 2b9d944: 14000001     	b	0x2b9d948 <__start_il2cpp+0xd5334>
 2b9d948: aa0003f4     	mov	x20, x0
 2b9d94c: 7100043f     	cmp	w1, #0x1
 2b9d950: 540001a1     	b.ne	0x2b9d984 <__start_il2cpp+0xd5370>
 2b9d954: aa1403e0     	mov	x0, x20
 2b9d958: 94ce237a     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2b9d95c: f9400014     	ldr	x20, [x0]
 2b9d960: f90007f4     	str	x20, [sp, #0x8]
 2b9d964: 94ce237b     	bl	0x5f26750 <__cxa_end_catch@plt>
 2b9d968: f9400be0     	ldr	x0, [sp, #0x10]
 2b9d96c: f94002c1     	ldr	x1, [x22]
 2b9d970: 947ba3c9     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2b9d974: b4fffd14     	cbz	x20, 0x2b9d914 <__start_il2cpp+0xd5300>
 2b9d978: aa1403e0     	mov	x0, x20
 2b9d97c: 97f8e5c1     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2b9d980: aa0003f4     	mov	x20, x0
 2b9d984: 910023e0     	add	x0, sp, #0x8
 2b9d988: 97ec2a97     	bl	0x26a83e4 <.text+0x3284>
 2b9d98c: aa1403e0     	mov	x0, x20
 2b9d990: 97fc9b53     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2b9d994: 97ec202e     	bl	0x26a5a4c <.text+0x8ec>

# BoardSlotData :: System.Void .ctor()
# VA 0x2b9d998 .. 0x2b9d9a0 (next mapped method entry)
 2b9d998: aa1f03e1     	mov	x1, xzr
 2b9d99c: 1496c86b     	b	0x514fb48 <__start_il2cpp+0x2687534>
