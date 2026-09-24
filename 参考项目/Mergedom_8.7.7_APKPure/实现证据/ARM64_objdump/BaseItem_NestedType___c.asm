
# BaseItem+__c :: System.Void .cctor()
# VA 0x2bf5b48 .. 0x2bf5bb0 (next mapped method entry)
 2bf5b48: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf5b4c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf5b50: b001d8f3     	adrp	x19, 0x6712000
 2bf5b54: f001b834     	adrp	x20, 0x62fc000
 2bf5b58: 396ca268     	ldrb	w8, [x19, #0xb28]
 2bf5b5c: f9436e94     	ldr	x20, [x20, #0x6d8]
 2bf5b60: 370000c8     	tbnz	w8, #0x0, 0x2bf5b78 <__start_il2cpp+0x12d564>
 2bf5b64: f001b820     	adrp	x0, 0x62fc000
 2bf5b68: f9436c00     	ldr	x0, [x0, #0x6d8]
 2bf5b6c: 97f7849d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5b70: 52800028     	mov	w8, #0x1                // =1
 2bf5b74: 392ca268     	strb	w8, [x19, #0xb28]
 2bf5b78: f9400280     	ldr	x0, [x20]
 2bf5b7c: 97f7853f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf5b80: aa1f03e1     	mov	x1, xzr
 2bf5b84: aa0003f3     	mov	x19, x0
 2bf5b88: 949567f0     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2bf5b8c: f9400288     	ldr	x8, [x20]
 2bf5b90: aa1303e1     	mov	x1, x19
 2bf5b94: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf5b98: f9000113     	str	x19, [x8]
 2bf5b9c: f9400288     	ldr	x8, [x20]
 2bf5ba0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf5ba4: f9405d00     	ldr	x0, [x8, #0xb8]
 2bf5ba8: f84207fe     	ldr	x30, [sp], #0x20
 2bf5bac: 17f78478     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BaseItem+__c :: System.Void .ctor()
# VA 0x2bf5bb0 .. 0x2bf5bb8 (next mapped method entry)
 2bf5bb0: aa1f03e1     	mov	x1, xzr
 2bf5bb4: 149567e5     	b	0x514fb48 <__start_il2cpp+0x2687534>

# BaseItem+__c :: System.Boolean <CanMergeWith>b__77_0(ItemProducer a)
# VA 0x2bf5bb8 .. 0x2bf5c30 (next mapped method entry)
 2bf5bb8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf5bbc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf5bc0: b001d8f4     	adrp	x20, 0x6712000
 2bf5bc4: aa0103f3     	mov	x19, x1
 2bf5bc8: 396ca688     	ldrb	w8, [x20, #0xb29]
 2bf5bcc: 370000c8     	tbnz	w8, #0x0, 0x2bf5be4 <__start_il2cpp+0x12d5d0>
 2bf5bd0: f001b820     	adrp	x0, 0x62fc000
 2bf5bd4: f9435c00     	ldr	x0, [x0, #0x6b8]
 2bf5bd8: 97f78482     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5bdc: 52800028     	mov	w8, #0x1                // =1
 2bf5be0: 392ca688     	strb	w8, [x20, #0xb29]
 2bf5be4: b4000133     	cbz	x19, 0x2bf5c08 <__start_il2cpp+0x12d5f4>
 2bf5be8: f001b828     	adrp	x8, 0x62fc000
 2bf5bec: f9435d08     	ldr	x8, [x8, #0x6b8]
 2bf5bf0: f9400269     	ldr	x9, [x19]
 2bf5bf4: f9400108     	ldr	x8, [x8]
 2bf5bf8: 3944c12b     	ldrb	w11, [x9, #0x130]
 2bf5bfc: 3944c10a     	ldrb	w10, [x8, #0x130]
 2bf5c00: 6b0a017f     	cmp	w11, w10
 2bf5c04: 54000062     	b.hs	0x2bf5c10 <__start_il2cpp+0x12d5fc>
 2bf5c08: 2a1f03e0     	mov	w0, wzr
 2bf5c0c: 14000006     	b	0x2bf5c24 <__start_il2cpp+0x12d610>
 2bf5c10: f9406529     	ldr	x9, [x9, #0xc8]
 2bf5c14: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2bf5c18: f85f8129     	ldur	x9, [x9, #-0x8]
 2bf5c1c: eb08013f     	cmp	x9, x8
 2bf5c20: 1a9f17e0     	cset	w0, eq
 2bf5c24: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf5c28: f84207fe     	ldr	x30, [sp], #0x20
 2bf5c2c: d65f03c0     	ret
