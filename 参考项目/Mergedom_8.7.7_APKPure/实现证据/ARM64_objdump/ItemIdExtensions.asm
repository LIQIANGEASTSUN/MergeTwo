
# ItemIdExtensions :: System.Boolean IsSame(BaseItem lhs, BaseItem rhs)
# VA 0x2bf77ec .. 0x2bf78ac (next mapped method entry)
 2bf77ec: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf77f0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf77f4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf77f8: b4000580     	cbz	x0, 0x2bf78a8 <__start_il2cpp+0x12f294>
 2bf77fc: f9402808     	ldr	x8, [x0, #0x50]
 2bf7800: b4000548     	cbz	x8, 0x2bf78a8 <__start_il2cpp+0x12f294>
 2bf7804: f001d8d5     	adrp	x21, 0x6712000
 2bf7808: b9403114     	ldr	w20, [x8, #0x30]
 2bf780c: aa0103f3     	mov	x19, x1
 2bf7810: 395c46a9     	ldrb	w9, [x21, #0x711]
 2bf7814: 350000c9     	cbnz	w9, 0x2bf782c <__start_il2cpp+0x12f218>
 2bf7818: d001b7c0     	adrp	x0, 0x62f1000
 2bf781c: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bf7820: 97f77d70     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7824: 52800028     	mov	w8, #0x1                // =1
 2bf7828: 391c46a8     	strb	w8, [x21, #0x711]
 2bf782c: d001b7d6     	adrp	x22, 0x62f1000
 2bf7830: f941fed6     	ldr	x22, [x22, #0x3f8]
 2bf7834: f94002c0     	ldr	x0, [x22]
 2bf7838: b940e408     	ldr	w8, [x0, #0xe4]
 2bf783c: 35000048     	cbnz	w8, 0x2bf7844 <__start_il2cpp+0x12f230>
 2bf7840: 97f77dc7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7844: b4000333     	cbz	x19, 0x2bf78a8 <__start_il2cpp+0x12f294>
 2bf7848: f9402a68     	ldr	x8, [x19, #0x50]
 2bf784c: b40002e8     	cbz	x8, 0x2bf78a8 <__start_il2cpp+0x12f294>
 2bf7850: 395c46a9     	ldrb	w9, [x21, #0x711]
 2bf7854: b9403113     	ldr	w19, [x8, #0x30]
 2bf7858: 350000c9     	cbnz	w9, 0x2bf7870 <__start_il2cpp+0x12f25c>
 2bf785c: d001b7c0     	adrp	x0, 0x62f1000
 2bf7860: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bf7864: 97f77d5f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7868: 52800028     	mov	w8, #0x1                // =1
 2bf786c: 391c46a8     	strb	w8, [x21, #0x711]
 2bf7870: f94002c0     	ldr	x0, [x22]
 2bf7874: b940e408     	ldr	w8, [x0, #0xe4]
 2bf7878: 35000048     	cbnz	w8, 0x2bf7880 <__start_il2cpp+0x12f26c>
 2bf787c: 97f77db8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf7880: 7100029f     	cmp	w20, #0x0
 2bf7884: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf7888: 5a945688     	cneg	w8, w20, mi
 2bf788c: 7100027f     	cmp	w19, #0x0
 2bf7890: 5a935669     	cneg	w9, w19, mi
 2bf7894: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf7898: 6b09011f     	cmp	w8, w9
 2bf789c: 1a9f17e0     	cset	w0, eq
 2bf78a0: f84307fe     	ldr	x30, [sp], #0x30
 2bf78a4: d65f03c0     	ret
 2bf78a8: 97f77df8     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemIdExtensions :: System.Boolean IsSame(ItemData lhs, ItemData rhs)
# VA 0x2bfe138 .. 0x2bfe1e8 (next mapped method entry)
 2bfe138: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bfe13c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bfe140: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bfe144: b4000500     	cbz	x0, 0x2bfe1e4 <__start_il2cpp+0x135bd0>
 2bfe148: 9001d8b5     	adrp	x21, 0x6712000
 2bfe14c: b9403014     	ldr	w20, [x0, #0x30]
 2bfe150: aa0103f3     	mov	x19, x1
 2bfe154: 395c46a8     	ldrb	w8, [x21, #0x711]
 2bfe158: 350000c8     	cbnz	w8, 0x2bfe170 <__start_il2cpp+0x135b5c>
 2bfe15c: f001b780     	adrp	x0, 0x62f1000
 2bfe160: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bfe164: 97f7631f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfe168: 52800028     	mov	w8, #0x1                // =1
 2bfe16c: 391c46a8     	strb	w8, [x21, #0x711]
 2bfe170: f001b796     	adrp	x22, 0x62f1000
 2bfe174: f941fed6     	ldr	x22, [x22, #0x3f8]
 2bfe178: f94002c0     	ldr	x0, [x22]
 2bfe17c: b940e408     	ldr	w8, [x0, #0xe4]
 2bfe180: 35000048     	cbnz	w8, 0x2bfe188 <__start_il2cpp+0x135b74>
 2bfe184: 97f76376     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfe188: b40002f3     	cbz	x19, 0x2bfe1e4 <__start_il2cpp+0x135bd0>
 2bfe18c: 395c46a8     	ldrb	w8, [x21, #0x711]
 2bfe190: b9403273     	ldr	w19, [x19, #0x30]
 2bfe194: 350000c8     	cbnz	w8, 0x2bfe1ac <__start_il2cpp+0x135b98>
 2bfe198: f001b780     	adrp	x0, 0x62f1000
 2bfe19c: f941fc00     	ldr	x0, [x0, #0x3f8]
 2bfe1a0: 97f76310     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bfe1a4: 52800028     	mov	w8, #0x1                // =1
 2bfe1a8: 391c46a8     	strb	w8, [x21, #0x711]
 2bfe1ac: f94002c0     	ldr	x0, [x22]
 2bfe1b0: b940e408     	ldr	w8, [x0, #0xe4]
 2bfe1b4: 35000048     	cbnz	w8, 0x2bfe1bc <__start_il2cpp+0x135ba8>
 2bfe1b8: 97f76369     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bfe1bc: 7100029f     	cmp	w20, #0x0
 2bfe1c0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bfe1c4: 5a945688     	cneg	w8, w20, mi
 2bfe1c8: 7100027f     	cmp	w19, #0x0
 2bfe1cc: 5a935669     	cneg	w9, w19, mi
 2bfe1d0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bfe1d4: 6b09011f     	cmp	w8, w9
 2bfe1d8: 1a9f17e0     	cset	w0, eq
 2bfe1dc: f84307fe     	ldr	x30, [sp], #0x30
 2bfe1e0: d65f03c0     	ret
 2bfe1e4: 97f763a9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemIdExtensions :: System.Boolean IsTutorialItem(BaseItem item)
# VA 0x2bfe1e8 .. 0x2bfe20c (next mapped method entry)
 2bfe1e8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2bfe1ec: b40000e0     	cbz	x0, 0x2bfe208 <__start_il2cpp+0x135bf4>
 2bfe1f0: f9402808     	ldr	x8, [x0, #0x50]
 2bfe1f4: b40000a8     	cbz	x8, 0x2bfe208 <__start_il2cpp+0x135bf4>
 2bfe1f8: b9403108     	ldr	w8, [x8, #0x30]
 2bfe1fc: 531f7d00     	lsr	w0, w8, #31
 2bfe200: f84107fe     	ldr	x30, [sp], #0x10
 2bfe204: d65f03c0     	ret
 2bfe208: 97f763a0     	bl	0x29d7088 <mono_class_get_checked+0x970>
