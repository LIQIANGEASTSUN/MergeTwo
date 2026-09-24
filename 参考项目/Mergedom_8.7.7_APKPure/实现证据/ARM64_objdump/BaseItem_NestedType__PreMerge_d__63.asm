
# BaseItem+_PreMerge_d__63 :: System.Void MoveNext()
# VA 0x2bf5f9c .. 0x2bf6154 (next mapped method entry)
 2bf5f9c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bf5fa0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf5fa4: b001d8f4     	adrp	x20, 0x6712000
 2bf5fa8: aa0003f3     	mov	x19, x0
 2bf5fac: 396cb288     	ldrb	w8, [x20, #0xb2c]
 2bf5fb0: 370000c8     	tbnz	w8, #0x0, 0x2bf5fc8 <__start_il2cpp+0x12d9b4>
 2bf5fb4: 9001b820     	adrp	x0, 0x62f9000
 2bf5fb8: f9474800     	ldr	x0, [x0, #0xe90]
 2bf5fbc: 97f78389     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5fc0: 52800028     	mov	w8, #0x1                // =1
 2bf5fc4: 392cb288     	strb	w8, [x20, #0xb2c]
 2bf5fc8: 39406268     	ldrb	w8, [x19, #0x18]
 2bf5fcc: 34000248     	cbz	w8, 0x2bf6014 <__start_il2cpp+0x12da00>
 2bf5fd0: 9001b835     	adrp	x21, 0x62f9000
 2bf5fd4: f9474ab5     	ldr	x21, [x21, #0xe90]
 2bf5fd8: f9401274     	ldr	x20, [x19, #0x20]
 2bf5fdc: f94002a0     	ldr	x0, [x21]
 2bf5fe0: b940e408     	ldr	w8, [x0, #0xe4]
 2bf5fe4: 35000068     	cbnz	w8, 0x2bf5ff0 <__start_il2cpp+0x12d9dc>
 2bf5fe8: 97f783dd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf5fec: f94002a0     	ldr	x0, [x21]
 2bf5ff0: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf5ff4: f9400508     	ldr	x8, [x8, #0x8]
 2bf5ff8: b4000628     	cbz	x8, 0x2bf60bc <__start_il2cpp+0x12daa8>
 2bf5ffc: f9402100     	ldr	x0, [x8, #0x40]
 2bf6000: f9400d09     	ldr	x9, [x8, #0x18]
 2bf6004: f9401503     	ldr	x3, [x8, #0x28]
 2bf6008: aa1403e1     	mov	x1, x20
 2bf600c: aa1f03e2     	mov	x2, xzr
 2bf6010: d63f0120     	blr	x9
 2bf6014: 9001d8f4     	adrp	x20, 0x6712000
 2bf6018: 12800029     	mov	w9, #-0x2               // =-2
 2bf601c: 39527a88     	ldrb	w8, [x20, #0x49e]
 2bf6020: b9000269     	str	w9, [x19]
 2bf6024: 350000c8     	cbnz	w8, 0x2bf603c <__start_il2cpp+0x12da28>
 2bf6028: b001b7e0     	adrp	x0, 0x62f3000
 2bf602c: f9466c00     	ldr	x0, [x0, #0xcd8]
 2bf6030: 97f7836c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6034: 52800028     	mov	w8, #0x1                // =1
 2bf6038: 39127a88     	strb	w8, [x20, #0x49e]
 2bf603c: f9400673     	ldr	x19, [x19, #0x8]
 2bf6040: b4000273     	cbz	x19, 0x2bf608c <__start_il2cpp+0x12da78>
 2bf6044: b001b7ea     	adrp	x10, 0x62f3000
 2bf6048: f9400268     	ldr	x8, [x19]
 2bf604c: f9466d4a     	ldr	x10, [x10, #0xcd8]
 2bf6050: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf6054: f9400141     	ldr	x1, [x10]
 2bf6058: b4000129     	cbz	x9, 0x2bf607c <__start_il2cpp+0x12da68>
 2bf605c: f940590a     	ldr	x10, [x8, #0xb0]
 2bf6060: 9100214a     	add	x10, x10, #0x8
 2bf6064: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf6068: eb01017f     	cmp	x11, x1
 2bf606c: 54000160     	b.eq	0x2bf6098 <__start_il2cpp+0x12da84>
 2bf6070: f1000529     	subs	x9, x9, #0x1
 2bf6074: 9100414a     	add	x10, x10, #0x10
 2bf6078: 54ffff61     	b.ne	0x2bf6064 <__start_il2cpp+0x12da50>
 2bf607c: aa1303e0     	mov	x0, x19
 2bf6080: 52800042     	mov	w2, #0x2                // =2
 2bf6084: 97f860b8     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf6088: 14000008     	b	0x2bf60a8 <__start_il2cpp+0x12da94>
 2bf608c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6090: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf6094: d65f03c0     	ret
 2bf6098: b9400149     	ldr	w9, [x10]
 2bf609c: 11000929     	add	w9, w9, #0x2
 2bf60a0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf60a4: 9104e100     	add	x0, x8, #0x138
 2bf60a8: a9400402     	ldp	x2, x1, [x0]
 2bf60ac: aa1303e0     	mov	x0, x19
 2bf60b0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf60b4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf60b8: d61f0040     	br	x2
 2bf60bc: 97f783f3     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf60c0: 14000001     	b	0x2bf60c4 <__start_il2cpp+0x12dab0>
 2bf60c4: aa0003f4     	mov	x20, x0
 2bf60c8: 7100043f     	cmp	w1, #0x1
 2bf60cc: 540003e1     	b.ne	0x2bf6148 <__start_il2cpp+0x12db34>
 2bf60d0: aa1403e0     	mov	x0, x20
 2bf60d4: 94ccc19b     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf60d8: aa0003f4     	mov	x20, x0
 2bf60dc: d001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf60e0: f946f000     	ldr	x0, [x0, #0xde0]
 2bf60e4: 97f78344     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf60e8: f9400288     	ldr	x8, [x20]
 2bf60ec: f9400101     	ldr	x1, [x8]
 2bf60f0: 97f784e8     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf60f4: 36000160     	tbz	w0, #0x0, 0x2bf6120 <__start_il2cpp+0x12db0c>
 2bf60f8: f9400294     	ldr	x20, [x20]
 2bf60fc: 94ccc195     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf6100: 12800028     	mov	w8, #-0x2               // =-2
 2bf6104: aa1403e1     	mov	x1, x20
 2bf6108: aa1f03e2     	mov	x2, xzr
 2bf610c: b8008668     	str	w8, [x19], #0x8
 2bf6110: aa1303e0     	mov	x0, x19
 2bf6114: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6118: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bf611c: 17fccedd     	b	0x2b29c90 <__start_il2cpp+0x6167c>
 2bf6120: 52800100     	mov	w0, #0x8                // =8
 2bf6124: 94ccc1a7     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf6128: f9400288     	ldr	x8, [x20]
 2bf612c: f9000008     	str	x8, [x0]
 2bf6130: d00199a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf6134: 91302021     	add	x1, x1, #0xc08
 2bf6138: aa1f03e2     	mov	x2, xzr
 2bf613c: 94ccc1a5     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf6140: aa0003f4     	mov	x20, x0
 2bf6144: 94ccc183     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf6148: aa1403e0     	mov	x0, x20
 2bf614c: 97fb3964     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf6150: 97eabe3f     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem+_PreMerge_d__63 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2bf6154 .. 0x2bf6160 (next mapped method entry)
 2bf6154: 91002000     	add	x0, x0, #0x8
 2bf6158: aa1f03e2     	mov	x2, xzr
 2bf615c: 14b53a7f     	b	0x5944b58 <__start_il2cpp+0x2e7c544>
