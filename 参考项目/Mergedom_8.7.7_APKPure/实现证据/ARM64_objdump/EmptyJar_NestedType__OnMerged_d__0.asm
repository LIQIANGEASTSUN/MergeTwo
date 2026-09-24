
# EmptyJar+_OnMerged_d__0 :: System.Void MoveNext()
# VA 0x2bf9058 .. 0x2bf939c (next mapped method entry)
 2bf9058: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2bf905c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf9060: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf9064: b001d8d4     	adrp	x20, 0x6712000
 2bf9068: aa0003f3     	mov	x19, x0
 2bf906c: 396d1a88     	ldrb	w8, [x20, #0xb46]
 2bf9070: 37000248     	tbnz	w8, #0x0, 0x2bf90b8 <__start_il2cpp+0x130aa4>
 2bf9074: f001b800     	adrp	x0, 0x62fc000
 2bf9078: f942f000     	ldr	x0, [x0, #0x5e0]
 2bf907c: 97f77759     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf9080: 9001b800     	adrp	x0, 0x62f9000
 2bf9084: f9474800     	ldr	x0, [x0, #0xe90]
 2bf9088: 97f77756     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf908c: f001b800     	adrp	x0, 0x62fc000
 2bf9090: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf9094: 97f77753     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf9098: b001b800     	adrp	x0, 0x62fa000
 2bf909c: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf90a0: 97f77750     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf90a4: f001b800     	adrp	x0, 0x62fc000
 2bf90a8: f9435c00     	ldr	x0, [x0, #0x6b8]
 2bf90ac: 97f7774d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf90b0: 52800028     	mov	w8, #0x1                // =1
 2bf90b4: 392d1a88     	strb	w8, [x20, #0xb46]
 2bf90b8: f9401274     	ldr	x20, [x19, #0x20]
 2bf90bc: b4001094     	cbz	x20, 0x2bf92cc <__start_il2cpp+0x130cb8>
 2bf90c0: f9405e80     	ldr	x0, [x20, #0xb8]
 2bf90c4: b4000600     	cbz	x0, 0x2bf9184 <__start_il2cpp+0x130b70>
 2bf90c8: b001b816     	adrp	x22, 0x62fa000
 2bf90cc: f001b817     	adrp	x23, 0x62fc000
 2bf90d0: 2a1f03f5     	mov	w21, wzr
 2bf90d4: f94276d6     	ldr	x22, [x22, #0x4e8]
 2bf90d8: f9435ef7     	ldr	x23, [x23, #0x6b8]
 2bf90dc: b9401808     	ldr	w8, [x0, #0x18]
 2bf90e0: 6b0802bf     	cmp	w21, w8
 2bf90e4: 5400050a     	b.ge	0x2bf9184 <__start_il2cpp+0x130b70>
 2bf90e8: f94002c2     	ldr	x2, [x22]
 2bf90ec: 2a1503e1     	mov	w1, w21
 2bf90f0: 943cbe9c     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf90f4: b4000400     	cbz	x0, 0x2bf9174 <__start_il2cpp+0x130b60>
 2bf90f8: f94002e8     	ldr	x8, [x23]
 2bf90fc: f9400009     	ldr	x9, [x0]
 2bf9100: 3944c12b     	ldrb	w11, [x9, #0x130]
 2bf9104: 3944c10a     	ldrb	w10, [x8, #0x130]
 2bf9108: 6b0a017f     	cmp	w11, w10
 2bf910c: 54000343     	b.lo	0x2bf9174 <__start_il2cpp+0x130b60>
 2bf9110: f9406529     	ldr	x9, [x9, #0xc8]
 2bf9114: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2bf9118: f85f8129     	ldur	x9, [x9, #-0x8]
 2bf911c: eb08013f     	cmp	x9, x8
 2bf9120: 540002a1     	b.ne	0x2bf9174 <__start_il2cpp+0x130b60>
 2bf9124: f9405e80     	ldr	x0, [x20, #0xb8]
 2bf9128: b4000d00     	cbz	x0, 0x2bf92c8 <__start_il2cpp+0x130cb4>
 2bf912c: f94002c2     	ldr	x2, [x22]
 2bf9130: 2a1503e1     	mov	w1, w21
 2bf9134: 943cbe8b     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf9138: b4000c60     	cbz	x0, 0x2bf92c4 <__start_il2cpp+0x130cb0>
 2bf913c: f94002e1     	ldr	x1, [x23]
 2bf9140: f9400008     	ldr	x8, [x0]
 2bf9144: 3944c10a     	ldrb	w10, [x8, #0x130]
 2bf9148: 3944c029     	ldrb	w9, [x1, #0x130]
 2bf914c: 6b09015f     	cmp	w10, w9
 2bf9150: 54000b83     	b.lo	0x2bf92c0 <__start_il2cpp+0x130cac>
 2bf9154: f9406508     	ldr	x8, [x8, #0xc8]
 2bf9158: 8b090d08     	add	x8, x8, x9, lsl #3
 2bf915c: f85f8108     	ldur	x8, [x8, #-0x8]
 2bf9160: eb01011f     	cmp	x8, x1
 2bf9164: 54000ae1     	b.ne	0x2bf92c0 <__start_il2cpp+0x130cac>
 2bf9168: f9401661     	ldr	x1, [x19, #0x28]
 2bf916c: aa1f03e2     	mov	x2, xzr
 2bf9170: 940053c9     	bl	0x2c0e094 <__start_il2cpp+0x145a80>
 2bf9174: f9405e80     	ldr	x0, [x20, #0xb8]
 2bf9178: 110006b5     	add	w21, w21, #0x1
 2bf917c: b5fffb00     	cbnz	x0, 0x2bf90dc <__start_il2cpp+0x130ac8>
 2bf9180: 97f777c2     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf9184: aa1403e0     	mov	x0, x20
 2bf9188: 97ffebc3     	bl	0x2bf4094 <__start_il2cpp+0x12ba80>
 2bf918c: f9403680     	ldr	x0, [x20, #0x68]
 2bf9190: b4000a00     	cbz	x0, 0x2bf92d0 <__start_il2cpp+0x130cbc>
 2bf9194: 2a1f03e1     	mov	w1, wzr
 2bf9198: aa1f03e2     	mov	x2, xzr
 2bf919c: 94bd2c77     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf91a0: 52800080     	mov	w0, #0x4                // =4
 2bf91a4: aa1f03e1     	mov	x1, xzr
 2bf91a8: 97fcec5b     	bl	0x2b34314 <__start_il2cpp+0x6bd00>
 2bf91ac: 9001b815     	adrp	x21, 0x62f9000
 2bf91b0: f9474ab5     	ldr	x21, [x21, #0xe90]
 2bf91b4: f94002a0     	ldr	x0, [x21]
 2bf91b8: b940e408     	ldr	w8, [x0, #0xe4]
 2bf91bc: 35000068     	cbnz	w8, 0x2bf91c8 <__start_il2cpp+0x130bb4>
 2bf91c0: 97f77767     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf91c4: f94002a0     	ldr	x0, [x21]
 2bf91c8: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf91cc: f9400908     	ldr	x8, [x8, #0x10]
 2bf91d0: b4000828     	cbz	x8, 0x2bf92d4 <__start_il2cpp+0x130cc0>
 2bf91d4: f9402100     	ldr	x0, [x8, #0x40]
 2bf91d8: f9400d09     	ldr	x9, [x8, #0x18]
 2bf91dc: f9401503     	ldr	x3, [x8, #0x28]
 2bf91e0: aa1403e1     	mov	x1, x20
 2bf91e4: aa1f03e2     	mov	x2, xzr
 2bf91e8: d63f0120     	blr	x9
 2bf91ec: f9400675     	ldr	x21, [x19, #0x8]
 2bf91f0: 12800028     	mov	w8, #-0x2               // =-2
 2bf91f4: b9000268     	str	w8, [x19]
 2bf91f8: b4000415     	cbz	x21, 0x2bf9278 <__start_il2cpp+0x130c64>
 2bf91fc: f001b808     	adrp	x8, 0x62fc000
 2bf9200: f942f108     	ldr	x8, [x8, #0x5e0]
 2bf9204: f9400108     	ldr	x8, [x8]
 2bf9208: f9401100     	ldr	x0, [x8, #0x20]
 2bf920c: 9104d408     	add	x8, x0, #0x135
 2bf9210: 79400108     	ldrh	w8, [x8]
 2bf9214: 37000048     	tbnz	w8, #0x0, 0x2bf921c <__start_il2cpp+0x130c08>
 2bf9218: 97f85384     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf921c: f9406008     	ldr	x8, [x0, #0xc0]
 2bf9220: f9400501     	ldr	x1, [x8, #0x8]
 2bf9224: 9104d428     	add	x8, x1, #0x135
 2bf9228: 79400108     	ldrh	w8, [x8]
 2bf922c: 37000088     	tbnz	w8, #0x0, 0x2bf923c <__start_il2cpp+0x130c28>
 2bf9230: aa0103e0     	mov	x0, x1
 2bf9234: 97f8537d     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf9238: aa0003e1     	mov	x1, x0
 2bf923c: f94002a8     	ldr	x8, [x21]
 2bf9240: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf9244: b4000129     	cbz	x9, 0x2bf9268 <__start_il2cpp+0x130c54>
 2bf9248: f940590a     	ldr	x10, [x8, #0xb0]
 2bf924c: 9100214a     	add	x10, x10, #0x8
 2bf9250: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf9254: eb01017f     	cmp	x11, x1
 2bf9258: 540001e0     	b.eq	0x2bf9294 <__start_il2cpp+0x130c80>
 2bf925c: f1000529     	subs	x9, x9, #0x1
 2bf9260: 9100414a     	add	x10, x10, #0x10
 2bf9264: 54ffff61     	b.ne	0x2bf9250 <__start_il2cpp+0x130c3c>
 2bf9268: aa1503e0     	mov	x0, x21
 2bf926c: 52800042     	mov	w2, #0x2                // =2
 2bf9270: 97f8543d     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf9274: 1400000c     	b	0x2bf92a4 <__start_il2cpp+0x130c90>
 2bf9278: f8018e74     	str	x20, [x19, #0x18]!
 2bf927c: aa1303e0     	mov	x0, x19
 2bf9280: aa1403e1     	mov	x1, x20
 2bf9284: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf9288: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf928c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2bf9290: 17f776bf     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2bf9294: b9400149     	ldr	w9, [x10]
 2bf9298: 11000929     	add	w9, w9, #0x2
 2bf929c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf92a0: 9104e100     	add	x0, x8, #0x138
 2bf92a4: a9400803     	ldp	x3, x2, [x0]
 2bf92a8: aa1503e0     	mov	x0, x21
 2bf92ac: aa1403e1     	mov	x1, x20
 2bf92b0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf92b4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf92b8: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2bf92bc: d61f0060     	br	x3
 2bf92c0: 97f77852     	bl	0x29d7408 <mono_class_get_checked+0xcf0>
 2bf92c4: 97f77771     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf92c8: 97f77770     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf92cc: 97f7776f     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf92d0: 97f7776e     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf92d4: 97f7776d     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf92d8: 14000009     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92dc: 14000008     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92e0: 14000007     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92e4: 14000006     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92e8: 14000005     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92ec: 14000004     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92f0: 14000003     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92f4: 14000002     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92f8: 14000001     	b	0x2bf92fc <__start_il2cpp+0x130ce8>
 2bf92fc: aa0003f4     	mov	x20, x0
 2bf9300: 7100043f     	cmp	w1, #0x1
 2bf9304: 54000461     	b.ne	0x2bf9390 <__start_il2cpp+0x130d7c>
 2bf9308: aa1403e0     	mov	x0, x20
 2bf930c: 94ccb50d     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf9310: aa0003f4     	mov	x20, x0
 2bf9314: f001b7a0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf9318: f946f000     	ldr	x0, [x0, #0xde0]
 2bf931c: 97f776b6     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf9320: f9400288     	ldr	x8, [x20]
 2bf9324: f9400101     	ldr	x1, [x8]
 2bf9328: 97f7785a     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf932c: 360001e0     	tbz	w0, #0x0, 0x2bf9368 <__start_il2cpp+0x130d54>
 2bf9330: f9400294     	ldr	x20, [x20]
 2bf9334: 94ccb507     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf9338: 12800028     	mov	w8, #-0x2               // =-2
 2bf933c: f001b800     	adrp	x0, 0x62fc000
 2bf9340: b8008668     	str	w8, [x19], #0x8
 2bf9344: f9430000     	ldr	x0, [x0, #0x600]
 2bf9348: 97f776ab     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf934c: aa0003e2     	mov	x2, x0
 2bf9350: aa1303e0     	mov	x0, x19
 2bf9354: aa1403e1     	mov	x1, x20
 2bf9358: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf935c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf9360: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2bf9364: 17eab7ad     	b	0x26a7218 <.text+0x20b8>
 2bf9368: 52800100     	mov	w0, #0x8                // =8
 2bf936c: 94ccb515     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf9370: f9400288     	ldr	x8, [x20]
 2bf9374: f9000008     	str	x8, [x0]
 2bf9378: f0019981     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf937c: 91302021     	add	x1, x1, #0xc08
 2bf9380: aa1f03e2     	mov	x2, xzr
 2bf9384: 94ccb513     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf9388: aa0003f4     	mov	x20, x0
 2bf938c: 94ccb4f1     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf9390: aa1403e0     	mov	x0, x20
 2bf9394: 97fb2cd2     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf9398: 97eab1ad     	bl	0x26a5a4c <.text+0x8ec>

# EmptyJar+_OnMerged_d__0 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2bf939c .. 0x2bf93f4 (next mapped method entry)
 2bf939c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf93a0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf93a4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf93a8: b001d8d5     	adrp	x21, 0x6712000
 2bf93ac: f001b816     	adrp	x22, 0x62fc000
 2bf93b0: aa0103f3     	mov	x19, x1
 2bf93b4: 396d1ea8     	ldrb	w8, [x21, #0xb47]
 2bf93b8: f94306d6     	ldr	x22, [x22, #0x608]
 2bf93bc: aa0003f4     	mov	x20, x0
 2bf93c0: 370000c8     	tbnz	w8, #0x0, 0x2bf93d8 <__start_il2cpp+0x130dc4>
 2bf93c4: f001b800     	adrp	x0, 0x62fc000
 2bf93c8: f9430400     	ldr	x0, [x0, #0x608]
 2bf93cc: 97f77685     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf93d0: 52800028     	mov	w8, #0x1                // =1
 2bf93d4: 392d1ea8     	strb	w8, [x21, #0xb47]
 2bf93d8: f94002c2     	ldr	x2, [x22]
 2bf93dc: 91002280     	add	x0, x20, #0x8
 2bf93e0: aa1303e1     	mov	x1, x19
 2bf93e4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf93e8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf93ec: f84307fe     	ldr	x30, [sp], #0x30
 2bf93f0: 14662352     	b	0x4582138 <__start_il2cpp+0x1ab9b24>
