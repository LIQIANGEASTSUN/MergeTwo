
# BaseItem+OnMergedDelegate :: System.Void .ctor(System.Object object, System.IntPtr method)
# VA 0x2bf5a70 .. 0x2bf5b0c (next mapped method entry)
 2bf5a70: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf5a74: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf5a78: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf5a7c: f9400448     	ldr	x8, [x2, #0x8]
 2bf5a80: aa0203f5     	mov	x21, x2
 2bf5a84: aa0103f4     	mov	x20, x1
 2bf5a88: aa0003f3     	mov	x19, x0
 2bf5a8c: f9001402     	str	x2, [x0, #0x28]
 2bf5a90: f9000808     	str	x8, [x0, #0x10]
 2bf5a94: f8020c01     	str	x1, [x0, #0x20]!
 2bf5a98: 97f784bd     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf5a9c: 39414ab6     	ldrb	w22, [x21, #0x52]
 2bf5aa0: aa1503e0     	mov	x0, x21
 2bf5aa4: f9002273     	str	x19, [x19, #0x40]
 2bf5aa8: 97f7850f     	bl	0x29d6ee4 <mono_class_get_checked+0x7cc>
 2bf5aac: 360000c0     	tbz	w0, #0x0, 0x2bf5ac4 <__start_il2cpp+0x12d4b0>
 2bf5ab0: 350000d6     	cbnz	w22, 0x2bf5ac8 <__start_il2cpp+0x12d4b4>
 2bf5ab4: 90ffd5a8     	adrp	x8, 0x26a9000 <.text+0x3ea0>
 2bf5ab8: 910bb108     	add	x8, x8, #0x2ec
 2bf5abc: f9000e68     	str	x8, [x19, #0x18]
 2bf5ac0: 14000006     	b	0x2bf5ad8 <__start_il2cpp+0x12d4c4>
 2bf5ac4: b4000194     	cbz	x20, 0x2bf5af4 <__start_il2cpp+0x12d4e0>
 2bf5ac8: f9400a68     	ldr	x8, [x19, #0x10]
 2bf5acc: f9401269     	ldr	x9, [x19, #0x20]
 2bf5ad0: f9000e68     	str	x8, [x19, #0x18]
 2bf5ad4: f9002269     	str	x9, [x19, #0x40]
 2bf5ad8: 90ffd5a8     	adrp	x8, 0x26a9000 <.text+0x3ea0>
 2bf5adc: 910ab108     	add	x8, x8, #0x2ac
 2bf5ae0: f9001e68     	str	x8, [x19, #0x38]
 2bf5ae4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5ae8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf5aec: f84307fe     	ldr	x30, [sp], #0x30
 2bf5af0: d65f03c0     	ret
 2bf5af4: d0ff2601     	adrp	x1, 0x10b7000
 2bf5af8: 913f8c21     	add	x1, x1, #0xfe3
 2bf5afc: aa1f03e0     	mov	x0, xzr
 2bf5b00: 97f78569     	bl	0x29d70a4 <mono_class_get_checked+0x98c>
 2bf5b04: aa1f03e1     	mov	x1, xzr
 2bf5b08: 97f78511     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# BaseItem+OnMergedDelegate :: System.Void Invoke()
# VA 0x2bf5b0c .. 0x2bf5b20 (next mapped method entry)
 2bf5b0c: f9402008     	ldr	x8, [x0, #0x40]
 2bf5b10: f9401401     	ldr	x1, [x0, #0x28]
 2bf5b14: f9400c02     	ldr	x2, [x0, #0x18]
 2bf5b18: aa0803e0     	mov	x0, x8
 2bf5b1c: d61f0040     	br	x2

# BaseItem+OnMergedDelegate :: System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
# VA 0x2bf5b20 .. 0x2bf5b3c (next mapped method entry)
 2bf5b20: a9bf7ffe     	stp	x30, xzr, [sp, #-0x10]!
 2bf5b24: aa0203e3     	mov	x3, x2
 2bf5b28: aa0103e2     	mov	x2, x1
 2bf5b2c: 910023e1     	add	x1, sp, #0x8
 2bf5b30: 97f7849b     	bl	0x29d6d9c <mono_class_get_checked+0x684>
 2bf5b34: f84107fe     	ldr	x30, [sp], #0x10
 2bf5b38: d65f03c0     	ret

# BaseItem+OnMergedDelegate :: System.Void EndInvoke(System.IAsyncResult result)
# VA 0x2bf5b3c .. 0x2bf5b48 (next mapped method entry)
 2bf5b3c: aa0103e0     	mov	x0, x1
 2bf5b40: aa1f03e1     	mov	x1, xzr
 2bf5b44: 17f78497     	b	0x29d6da0 <mono_class_get_checked+0x688>
