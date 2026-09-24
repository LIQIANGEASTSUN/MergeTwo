
# ItemData :: System.String ToString()
# VA 0x2bfc9ac .. 0x2bfca18 (next mapped method entry)
 2bfc9ac: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bfc9b0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bfc9b4: d001d8b4     	adrp	x20, 0x6712000
 2bfc9b8: b001b7b5     	adrp	x21, 0x62f1000
 2bfc9bc: aa0003f3     	mov	x19, x0
 2bfc9c0: 396d8e88     	ldrb	w8, [x20, #0xb63]
 2bfc9c4: f94196b5     	ldr	x21, [x21, #0x328]
 2bfc9c8: 370000c8     	tbnz	w8, #0x0, 0x2bfc9e0 <__start_il2cpp+0x1343cc>
 2bfc9cc: b001b7a0     	adrp	x0, 0x62f1000
 2bfc9d0: f9419400     	ldr	x0, [x0, #0x328]
 2bfc9d4: 97f76903     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfc9d8: 52800028     	mov	w8, #0x1                // =1
 2bfc9dc: 392d8e88     	strb	w8, [x20, #0xb63]
 2bfc9e0: aa1303e0     	mov	x0, x19
 2bfc9e4: aa1f03e1     	mov	x1, xzr
 2bfc9e8: 94bd3771     	bl	0x5b4a7ac <__start_il2cpp+0x3082198>
 2bfc9ec: aa0003f4     	mov	x20, x0
 2bfc9f0: 9100c260     	add	x0, x19, #0x30
 2bfc9f4: aa1f03e1     	mov	x1, xzr
 2bfc9f8: 94943177     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2bfc9fc: aa0003e2     	mov	x2, x0
 2bfca00: aa1403e0     	mov	x0, x20
 2bfca04: f94002a1     	ldr	x1, [x21]
 2bfca08: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bfca0c: aa1f03e3     	mov	x3, xzr
 2bfca10: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bfca14: 148de656     	b	0x4f7636c <__start_il2cpp+0x24add58>

# ItemData :: System.Void .ctor()
# VA 0x2bfca18 .. 0x2bfcb88 (next mapped method entry)
 2bfca18: f81b0ffe     	str	x30, [sp, #-0x50]!
 2bfca1c: a90167fa     	stp	x26, x25, [sp, #0x10]
 2bfca20: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2bfca24: a90357f6     	stp	x22, x21, [sp, #0x30]
 2bfca28: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2bfca2c: 9001b819     	adrp	x25, 0x62fc000
 2bfca30: 9001b814     	adrp	x20, 0x62fc000
 2bfca34: b001b7b8     	adrp	x24, 0x62f1000
 2bfca38: d001d8ba     	adrp	x26, 0x6712000
 2bfca3c: b001b7b7     	adrp	x23, 0x62f1000
 2bfca40: 9001b816     	adrp	x22, 0x62fc000
 2bfca44: 9001b815     	adrp	x21, 0x62fc000
 2bfca48: f9447739     	ldr	x25, [x25, #0x8e8]
 2bfca4c: f9447a94     	ldr	x20, [x20, #0x8f0]
 2bfca50: f9410318     	ldr	x24, [x24, #0x200]
 2bfca54: f940faf7     	ldr	x23, [x23, #0x1f0]
 2bfca58: 396d9348     	ldrb	w8, [x26, #0xb64]
 2bfca5c: f9447ed6     	ldr	x22, [x22, #0x8f8]
 2bfca60: f94482b5     	ldr	x21, [x21, #0x900]
 2bfca64: aa0003f3     	mov	x19, x0
 2bfca68: 370002a8     	tbnz	w8, #0x0, 0x2bfcabc <__start_il2cpp+0x1344a8>
 2bfca6c: b001b7a0     	adrp	x0, 0x62f1000
 2bfca70: f940f800     	ldr	x0, [x0, #0x1f0]
 2bfca74: 97f768db     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfca78: 9001b800     	adrp	x0, 0x62fc000
 2bfca7c: f9447800     	ldr	x0, [x0, #0x8f0]
 2bfca80: 97f768d8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfca84: 9001b800     	adrp	x0, 0x62fc000
 2bfca88: f9448000     	ldr	x0, [x0, #0x900]
 2bfca8c: 97f768d5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfca90: b001b7a0     	adrp	x0, 0x62f1000
 2bfca94: f9410000     	ldr	x0, [x0, #0x200]
 2bfca98: 97f768d2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfca9c: 9001b800     	adrp	x0, 0x62fc000
 2bfcaa0: f9447c00     	ldr	x0, [x0, #0x8f8]
 2bfcaa4: 97f768cf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfcaa8: 9001b800     	adrp	x0, 0x62fc000
 2bfcaac: f9447400     	ldr	x0, [x0, #0x8e8]
 2bfcab0: 97f768cc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfcab4: 52800028     	mov	w8, #0x1                // =1
 2bfcab8: 392d9348     	strb	w8, [x26, #0xb64]
 2bfcabc: d0ff2428     	adrp	x8, 0x1082000
 2bfcac0: f9400320     	ldr	x0, [x25]
 2bfcac4: 52802029     	mov	w9, #0x101              // =257
 2bfcac8: fd45c500     	ldr	d0, [x8, #0xb88]
 2bfcacc: 52800c88     	mov	w8, #0x64               // =100
 2bfcad0: 79007269     	strh	w9, [x19, #0x38]
 2bfcad4: b9003e68     	str	w8, [x19, #0x3c]
 2bfcad8: fd001a60     	str	d0, [x19, #0x30]
 2bfcadc: 97f76967     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bfcae0: f9400281     	ldr	x1, [x20]
 2bfcae4: aa0003f4     	mov	x20, x0
 2bfcae8: 943caeb8     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2bfcaec: aa1303e0     	mov	x0, x19
 2bfcaf0: aa1403e1     	mov	x1, x20
 2bfcaf4: f8040c14     	str	x20, [x0, #0x40]!
 2bfcaf8: 97f768a5     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bfcafc: f9400300     	ldr	x0, [x24]
 2bfcb00: 97f7695e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bfcb04: f94002e1     	ldr	x1, [x23]
 2bfcb08: aa0003f4     	mov	x20, x0
 2bfcb0c: 943b453d     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2bfcb10: aa1303e0     	mov	x0, x19
 2bfcb14: aa1403e1     	mov	x1, x20
 2bfcb18: f8048c14     	str	x20, [x0, #0x48]!
 2bfcb1c: 97f7689c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bfcb20: f9400300     	ldr	x0, [x24]
 2bfcb24: 97f76955     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bfcb28: f94002e1     	ldr	x1, [x23]
 2bfcb2c: aa0003f4     	mov	x20, x0
 2bfcb30: 943b4534     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2bfcb34: aa1303e0     	mov	x0, x19
 2bfcb38: aa1403e1     	mov	x1, x20
 2bfcb3c: f8050c14     	str	x20, [x0, #0x50]!
 2bfcb40: 97f76893     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bfcb44: f94002c0     	ldr	x0, [x22]
 2bfcb48: 97f7694c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bfcb4c: f94002a1     	ldr	x1, [x21]
 2bfcb50: aa0003f4     	mov	x20, x0
 2bfcb54: 943cae9d     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2bfcb58: aa1303e0     	mov	x0, x19
 2bfcb5c: aa1403e1     	mov	x1, x20
 2bfcb60: f8058c14     	str	x20, [x0, #0x58]!
 2bfcb64: 97f7688a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bfcb68: aa1303e0     	mov	x0, x19
 2bfcb6c: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2bfcb70: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2bfcb74: aa1f03e1     	mov	x1, xzr
 2bfcb78: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2bfcb7c: a94167fa     	ldp	x26, x25, [sp, #0x10]
 2bfcb80: f84507fe     	ldr	x30, [sp], #0x50
 2bfcb84: 14bd2d7f     	b	0x5b48180 <__start_il2cpp+0x307fb6c>
