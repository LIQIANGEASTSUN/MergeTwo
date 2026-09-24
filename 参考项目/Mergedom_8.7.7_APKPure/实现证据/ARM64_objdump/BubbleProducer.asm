
# BubbleProducer :: System.Boolean CanProduce()
# VA 0x2ba23e8 .. 0x2ba2468 (next mapped method entry)
 2ba23e8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2ba23ec: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ba23f0: 9001db94     	adrp	x20, 0x6712000
 2ba23f4: aa0003f3     	mov	x19, x0
 2ba23f8: 39638e88     	ldrb	w8, [x20, #0x8e3]
 2ba23fc: 370000c8     	tbnz	w8, #0x0, 0x2ba2414 <__start_il2cpp+0xd9e00>
 2ba2400: 9001bac0     	adrp	x0, 0x62fa000
 2ba2404: f9404400     	ldr	x0, [x0, #0x88]
 2ba2408: 97f8d276     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba240c: 52800028     	mov	w8, #0x1                // =1
 2ba2410: 39238e88     	strb	w8, [x20, #0x8e3]
 2ba2414: aa1f03e0     	mov	x0, xzr
 2ba2418: 94004e29     	bl	0x2bb5cbc <__start_il2cpp+0xed6a8>
 2ba241c: f9401e68     	ldr	x8, [x19, #0x38]
 2ba2420: b4000228     	cbz	x8, 0x2ba2464 <__start_il2cpp+0xd9e50>
 2ba2424: b9401909     	ldr	w9, [x8, #0x18]
 2ba2428: 6b09001f     	cmp	w0, w9
 2ba242c: 5400006a     	b.ge	0x2ba2438 <__start_il2cpp+0xd9e24>
 2ba2430: 2a1f03e0     	mov	w0, wzr
 2ba2434: 14000009     	b	0x2ba2458 <__start_il2cpp+0xd9e44>
 2ba2438: 9001bac9     	adrp	x9, 0x62fa000
 2ba243c: f9404529     	ldr	x9, [x9, #0x88]
 2ba2440: b9401d08     	ldr	w8, [x8, #0x1c]
 2ba2444: f9400129     	ldr	x9, [x9]
 2ba2448: f9405d29     	ldr	x9, [x9, #0xb8]
 2ba244c: b9400129     	ldr	w9, [x9]
 2ba2450: 6b08013f     	cmp	w9, w8
 2ba2454: 1a9fa7e0     	cset	w0, lt
 2ba2458: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ba245c: f84207fe     	ldr	x30, [sp], #0x20
 2ba2460: d65f03c0     	ret
 2ba2464: 97f8d309     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleProducer :: System.Void ProduceBubble(PostMergeSignal postMergeSignal)
# VA 0x2ba2468 .. 0x2ba2840 (next mapped method entry)
 2ba2468: d10203ff     	sub	sp, sp, #0x80
 2ba246c: f90023fe     	str	x30, [sp, #0x40]
 2ba2470: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2ba2474: a90657f6     	stp	x22, x21, [sp, #0x60]
 2ba2478: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2ba247c: 9001db95     	adrp	x21, 0x6712000
 2ba2480: aa0103f3     	mov	x19, x1
 2ba2484: aa0003f4     	mov	x20, x0
 2ba2488: 396392a8     	ldrb	w8, [x21, #0x8e4]
 2ba248c: 370003c8     	tbnz	w8, #0x0, 0x2ba2504 <__start_il2cpp+0xd9ef0>
 2ba2490: 9001bac0     	adrp	x0, 0x62fa000
 2ba2494: f9408c00     	ldr	x0, [x0, #0x118]
 2ba2498: 97f8d252     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba249c: 9001bac0     	adrp	x0, 0x62fa000
 2ba24a0: f9409000     	ldr	x0, [x0, #0x120]
 2ba24a4: 97f8d24f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24a8: 9001bac0     	adrp	x0, 0x62fa000
 2ba24ac: f9409400     	ldr	x0, [x0, #0x128]
 2ba24b0: 97f8d24c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24b4: 9001ba80     	adrp	x0, 0x62f2000
 2ba24b8: f940ac00     	ldr	x0, [x0, #0x158]
 2ba24bc: 97f8d249     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24c0: f001baa0     	adrp	x0, 0x62f9000
 2ba24c4: f9476c00     	ldr	x0, [x0, #0xed8]
 2ba24c8: 97f8d246     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24cc: f001ba60     	adrp	x0, 0x62f1000
 2ba24d0: f9413c00     	ldr	x0, [x0, #0x278]
 2ba24d4: 97f8d243     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24d8: d001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba24dc: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba24e0: 97f8d240     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24e4: 9001bac0     	adrp	x0, 0x62fa000
 2ba24e8: f9409800     	ldr	x0, [x0, #0x130]
 2ba24ec: 97f8d23d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24f0: 9001bac0     	adrp	x0, 0x62fa000
 2ba24f4: f9409c00     	ldr	x0, [x0, #0x138]
 2ba24f8: 97f8d23a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba24fc: 52800028     	mov	w8, #0x1                // =1
 2ba2500: 392392a8     	strb	w8, [x21, #0x8e4]
 2ba2504: aa1403e0     	mov	x0, x20
 2ba2508: 97ffffb8     	bl	0x2ba23e8 <__start_il2cpp+0xd9dd4>
 2ba250c: 36001840     	tbz	w0, #0x0, 0x2ba2814 <__start_il2cpp+0xda200>
 2ba2510: 3940ca68     	ldrb	w8, [x19, #0x32]
 2ba2514: 36001808     	tbz	w8, #0x0, 0x2ba2814 <__start_il2cpp+0xda200>
 2ba2518: f9400a68     	ldr	x8, [x19, #0x10]
 2ba251c: b4001888     	cbz	x8, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2520: f9402908     	ldr	x8, [x8, #0x50]
 2ba2524: b4001848     	cbz	x8, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2528: d001ba78     	adrp	x24, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba252c: 910003e1     	mov	x1, sp
 2ba2530: f9470f18     	ldr	x24, [x24, #0xe18]
 2ba2534: b9403108     	ldr	w8, [x8, #0x30]
 2ba2538: f9401295     	ldr	x21, [x20, #0x20]
 2ba253c: f9401276     	ldr	x22, [x19, #0x20]
 2ba2540: f9402700     	ldr	x0, [x24, #0x48]
 2ba2544: b90003e8     	str	w8, [sp]
 2ba2548: 97f8d287     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba254c: aa0003f7     	mov	x23, x0
 2ba2550: b9400268     	ldr	w8, [x19]
 2ba2554: f9402700     	ldr	x0, [x24, #0x48]
 2ba2558: 910133e1     	add	x1, sp, #0x4c
 2ba255c: b9004fe8     	str	w8, [sp, #0x4c]
 2ba2560: 97f8d281     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2564: 9001bac8     	adrp	x8, 0x62fa000
 2ba2568: aa0003e2     	mov	x2, x0
 2ba256c: aa1703e1     	mov	x1, x23
 2ba2570: f9409d08     	ldr	x8, [x8, #0x138]
 2ba2574: aa1f03e3     	mov	x3, xzr
 2ba2578: f9400108     	ldr	x8, [x8]
 2ba257c: aa0803e0     	mov	x0, x8
 2ba2580: 948f525d     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2ba2584: b4001555     	cbz	x21, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2588: f001baaa     	adrp	x10, 0x62f9000
 2ba258c: f94002a8     	ldr	x8, [x21]
 2ba2590: aa0003f7     	mov	x23, x0
 2ba2594: f9476d4a     	ldr	x10, [x10, #0xed8]
 2ba2598: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba259c: f9400141     	ldr	x1, [x10]
 2ba25a0: b4000129     	cbz	x9, 0x2ba25c4 <__start_il2cpp+0xd9fb0>
 2ba25a4: f940590a     	ldr	x10, [x8, #0xb0]
 2ba25a8: 9100214a     	add	x10, x10, #0x8
 2ba25ac: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba25b0: eb01017f     	cmp	x11, x1
 2ba25b4: 54000100     	b.eq	0x2ba25d4 <__start_il2cpp+0xd9fc0>
 2ba25b8: f1000529     	subs	x9, x9, #0x1
 2ba25bc: 9100414a     	add	x10, x10, #0x10
 2ba25c0: 54ffff61     	b.ne	0x2ba25ac <__start_il2cpp+0xd9f98>
 2ba25c4: aa1503e0     	mov	x0, x21
 2ba25c8: 52800122     	mov	w2, #0x9                // =9
 2ba25cc: 97f9af66     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba25d0: 14000005     	b	0x2ba25e4 <__start_il2cpp+0xd9fd0>
 2ba25d4: b9400149     	ldr	w9, [x10]
 2ba25d8: 11002529     	add	w9, w9, #0x9
 2ba25dc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba25e0: 9104e100     	add	x0, x8, #0x138
 2ba25e4: a9401008     	ldp	x8, x4, [x0]
 2ba25e8: aa1503e0     	mov	x0, x21
 2ba25ec: aa1603e1     	mov	x1, x22
 2ba25f0: aa1703e2     	mov	x2, x23
 2ba25f4: 52800143     	mov	w3, #0xa                // =10
 2ba25f8: d63f0100     	blr	x8
 2ba25fc: aa0003f5     	mov	x21, x0
 2ba2600: aa1403e0     	mov	x0, x20
 2ba2604: aa1503e1     	mov	x1, x21
 2ba2608: f8048c15     	str	x21, [x0, #0x48]!
 2ba260c: 97f8d1e0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2610: d001ba68     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba2614: f9478d08     	ldr	x8, [x8, #0xf18]
 2ba2618: f9400100     	ldr	x0, [x8]
 2ba261c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba2620: 35000048     	cbnz	w8, 0x2ba2628 <__start_il2cpp+0xda014>
 2ba2624: 97f8d24e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba2628: aa1503e0     	mov	x0, x21
 2ba262c: aa1f03e1     	mov	x1, xzr
 2ba2630: aa1f03e2     	mov	x2, xzr
 2ba2634: 94be8ff1     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba2638: 37000ee0     	tbnz	w0, #0x0, 0x2ba2814 <__start_il2cpp+0xda200>
 2ba263c: f9400a60     	ldr	x0, [x19, #0x10]
 2ba2640: b4000f60     	cbz	x0, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2644: aa1f03e1     	mov	x1, xzr
 2ba2648: 94014551     	bl	0x2bf3b8c <__start_il2cpp+0x12b578>
 2ba264c: b4000f00     	cbz	x0, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2650: b9402808     	ldr	w8, [x0, #0x28]
 2ba2654: 7100051f     	cmp	w8, #0x1
 2ba2658: 54000deb     	b.lt	0x2ba2814 <__start_il2cpp+0xda200>
 2ba265c: 2a1f03e0     	mov	w0, wzr
 2ba2660: 52800c81     	mov	w1, #0x64               // =100
 2ba2664: aa1f03e2     	mov	x2, xzr
 2ba2668: 94be5772     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 2ba266c: f9400a68     	ldr	x8, [x19, #0x10]
 2ba2670: b4000de8     	cbz	x8, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2674: 2a0003f5     	mov	w21, w0
 2ba2678: aa0803e0     	mov	x0, x8
 2ba267c: aa1f03e1     	mov	x1, xzr
 2ba2680: 94014543     	bl	0x2bf3b8c <__start_il2cpp+0x12b578>
 2ba2684: b4000d40     	cbz	x0, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2688: b9402808     	ldr	w8, [x0, #0x28]
 2ba268c: 6b0802bf     	cmp	w21, w8
 2ba2690: 54000c2a     	b.ge	0x2ba2814 <__start_il2cpp+0xda200>
 2ba2694: f9401263     	ldr	x3, [x19, #0x20]
 2ba2698: f9402684     	ldr	x4, [x20, #0x48]
 2ba269c: aa1403e0     	mov	x0, x20
 2ba26a0: 52802581     	mov	w1, #0x12c              // =300
 2ba26a4: 52800022     	mov	w2, #0x1                // =1
 2ba26a8: 2a1f03e5     	mov	w5, wzr
 2ba26ac: aa1f03e6     	mov	x6, xzr
 2ba26b0: 9401a360     	bl	0x2c0b430 <__start_il2cpp+0x142e1c>
 2ba26b4: f9400a68     	ldr	x8, [x19, #0x10]
 2ba26b8: b4000ba8     	cbz	x8, 0x2ba282c <__start_il2cpp+0xda218>
 2ba26bc: f9402908     	ldr	x8, [x8, #0x50]
 2ba26c0: b4000b68     	cbz	x8, 0x2ba282c <__start_il2cpp+0xda218>
 2ba26c4: 9001bac9     	adrp	x9, 0x62fa000
 2ba26c8: aa0003f5     	mov	x21, x0
 2ba26cc: f9408d29     	ldr	x9, [x9, #0x118]
 2ba26d0: f9402516     	ldr	x22, [x8, #0x48]
 2ba26d4: f9400120     	ldr	x0, [x9]
 2ba26d8: 97f8d268     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba26dc: 9001bac8     	adrp	x8, 0x62fa000
 2ba26e0: aa1403e1     	mov	x1, x20
 2ba26e4: aa1f03e3     	mov	x3, xzr
 2ba26e8: f9409108     	ldr	x8, [x8, #0x120]
 2ba26ec: aa0003f7     	mov	x23, x0
 2ba26f0: f9400102     	ldr	x2, [x8]
 2ba26f4: 9441b7b1     	bl	0x3c105b8 <__start_il2cpp+0x1147fa4>
 2ba26f8: f001ba68     	adrp	x8, 0x62f1000
 2ba26fc: 52800041     	mov	w1, #0x2                // =2
 2ba2700: f9413d08     	ldr	x8, [x8, #0x278]
 2ba2704: f9400100     	ldr	x0, [x8]
 2ba2708: 97f8d1f1     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2ba270c: 9001bac8     	adrp	x8, 0x62fa000
 2ba2710: ad400660     	ldp	q0, q1, [x19]
 2ba2714: 3dc00a62     	ldr	q2, [x19, #0x20]
 2ba2718: f9409908     	ldr	x8, [x8, #0x130]
 2ba271c: aa0003f4     	mov	x20, x0
 2ba2720: f9401a69     	ldr	x9, [x19, #0x30]
 2ba2724: 910003e1     	mov	x1, sp
 2ba2728: f9400100     	ldr	x0, [x8]
 2ba272c: ad0007e0     	stp	q0, q1, [sp]
 2ba2730: 3d800be2     	str	q2, [sp, #0x20]
 2ba2734: f9001be9     	str	x9, [sp, #0x30]
 2ba2738: 97f8d20b     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba273c: b4000794     	cbz	x20, 0x2ba282c <__start_il2cpp+0xda218>
 2ba2740: aa0003f8     	mov	x24, x0
 2ba2744: b40000c0     	cbz	x0, 0x2ba275c <__start_il2cpp+0xda148>
 2ba2748: f9400288     	ldr	x8, [x20]
 2ba274c: aa1803e0     	mov	x0, x24
 2ba2750: f9402101     	ldr	x1, [x8, #0x40]
 2ba2754: 97f8d203     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2758: b40006e0     	cbz	x0, 0x2ba2834 <__start_il2cpp+0xda220>
 2ba275c: b9401a88     	ldr	w8, [x20, #0x18]
 2ba2760: 34000688     	cbz	w8, 0x2ba2830 <__start_il2cpp+0xda21c>
 2ba2764: aa1403e0     	mov	x0, x20
 2ba2768: aa1803e1     	mov	x1, x24
 2ba276c: f8020c18     	str	x24, [x0, #0x20]!
 2ba2770: 97f8d187     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2774: b40000d5     	cbz	x21, 0x2ba278c <__start_il2cpp+0xda178>
 2ba2778: f9400288     	ldr	x8, [x20]
 2ba277c: aa1503e0     	mov	x0, x21
 2ba2780: f9402101     	ldr	x1, [x8, #0x40]
 2ba2784: 97f8d1f7     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2788: b4000560     	cbz	x0, 0x2ba2834 <__start_il2cpp+0xda220>
 2ba278c: b9401a88     	ldr	w8, [x20, #0x18]
 2ba2790: 721f791f     	tst	w8, #0xfffffffe
 2ba2794: 540004e0     	b.eq	0x2ba2830 <__start_il2cpp+0xda21c>
 2ba2798: aa1403e0     	mov	x0, x20
 2ba279c: aa1503e1     	mov	x1, x21
 2ba27a0: f8028c15     	str	x21, [x0, #0x28]!
 2ba27a4: 97f8d17a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba27a8: aa1603e0     	mov	x0, x22
 2ba27ac: aa1703e1     	mov	x1, x23
 2ba27b0: aa1403e2     	mov	x2, x20
 2ba27b4: aa1f03e3     	mov	x3, xzr
 2ba27b8: 9402865b     	bl	0x2c44124 <__start_il2cpp+0x17bb10>
 2ba27bc: 370002c0     	tbnz	w0, #0x0, 0x2ba2814 <__start_il2cpp+0xda200>
 2ba27c0: b4000375     	cbz	x21, 0x2ba282c <__start_il2cpp+0xda218>
 2ba27c4: 9001bac8     	adrp	x8, 0x62fa000
 2ba27c8: aa1503e0     	mov	x0, x21
 2ba27cc: f9409508     	ldr	x8, [x8, #0x128]
 2ba27d0: f9400101     	ldr	x1, [x8]
 2ba27d4: 941ff8cf     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba27d8: b40002a0     	cbz	x0, 0x2ba282c <__start_il2cpp+0xda218>
 2ba27dc: f9400a61     	ldr	x1, [x19, #0x10]
 2ba27e0: aa0003f4     	mov	x20, x0
 2ba27e4: 97fff8bf     	bl	0x2ba0ae0 <__start_il2cpp+0xd84cc>
 2ba27e8: 9001ba88     	adrp	x8, 0x62f2000
 2ba27ec: f940ad08     	ldr	x8, [x8, #0x158]
 2ba27f0: f9400100     	ldr	x0, [x8]
 2ba27f4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba27f8: 35000048     	cbnz	w8, 0x2ba2800 <__start_il2cpp+0xda1ec>
 2ba27fc: 97f8d1d8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba2800: aa1f03e0     	mov	x0, xzr
 2ba2804: 94952560     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2ba2808: aa0003e1     	mov	x1, x0
 2ba280c: aa1403e0     	mov	x0, x20
 2ba2810: 97fff8f9     	bl	0x2ba0bf4 <__start_il2cpp+0xd85e0>
 2ba2814: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2ba2818: f94023fe     	ldr	x30, [sp, #0x40]
 2ba281c: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2ba2820: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2ba2824: 910203ff     	add	sp, sp, #0x80
 2ba2828: d65f03c0     	ret
 2ba282c: 97f8d217     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba2830: 97f8d218     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba2834: 97f8d21e     	bl	0x29d70ac <mono_class_get_checked+0x994>
 2ba2838: aa1f03e1     	mov	x1, xzr
 2ba283c: 97f8d1c4     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# BubbleProducer :: System.Void OnProducedItemPicked(System.Int32 index, System.Object[] parameters)
# VA 0x2ba2840 .. 0x2ba2b84 (next mapped method entry)
 2ba2840: a9bc67fe     	stp	x30, x25, [sp, #-0x40]!
 2ba2844: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2ba2848: a90257f6     	stp	x22, x21, [sp, #0x20]
 2ba284c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2ba2850: 9001db96     	adrp	x22, 0x6712000
 2ba2854: aa0203f4     	mov	x20, x2
 2ba2858: 2a0103f5     	mov	w21, w1
 2ba285c: 396396c8     	ldrb	w8, [x22, #0x8e5]
 2ba2860: aa0003f3     	mov	x19, x0
 2ba2864: 37000308     	tbnz	w8, #0x0, 0x2ba28c4 <__start_il2cpp+0xda2b0>
 2ba2868: 9001bac0     	adrp	x0, 0x62fa000
 2ba286c: f940a000     	ldr	x0, [x0, #0x140]
 2ba2870: 97f8d15c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2874: 9001bac0     	adrp	x0, 0x62fa000
 2ba2878: f9409400     	ldr	x0, [x0, #0x128]
 2ba287c: 97f8d159     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2880: 9001ba80     	adrp	x0, 0x62f2000
 2ba2884: f940ac00     	ldr	x0, [x0, #0x158]
 2ba2888: 97f8d156     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba288c: b001ba80     	adrp	x0, 0x62f3000
 2ba2890: f9479000     	ldr	x0, [x0, #0xf20]
 2ba2894: 97f8d153     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2898: 9001bac0     	adrp	x0, 0x62fa000
 2ba289c: f940a400     	ldr	x0, [x0, #0x148]
 2ba28a0: 97f8d150     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba28a4: f001ba80     	adrp	x0, 0x62f5000
 2ba28a8: f940f800     	ldr	x0, [x0, #0x1f0]
 2ba28ac: 97f8d14d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba28b0: 9001bac0     	adrp	x0, 0x62fa000
 2ba28b4: f9409800     	ldr	x0, [x0, #0x130]
 2ba28b8: 97f8d14a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba28bc: 52800028     	mov	w8, #0x1                // =1
 2ba28c0: 392396c8     	strb	w8, [x22, #0x8e5]
 2ba28c4: b4001594     	cbz	x20, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba28c8: b9401a88     	ldr	w8, [x20, #0x18]
 2ba28cc: 7100091f     	cmp	w8, #0x2
 2ba28d0: 5400060b     	b.lt	0x2ba2990 <__start_il2cpp+0xda37c>
 2ba28d4: f9401280     	ldr	x0, [x20, #0x20]
 2ba28d8: b40014e0     	cbz	x0, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba28dc: 9001bac8     	adrp	x8, 0x62fa000
 2ba28e0: f9409908     	ldr	x8, [x8, #0x130]
 2ba28e4: f9400101     	ldr	x1, [x8]
 2ba28e8: f9400008     	ldr	x8, [x0]
 2ba28ec: f9402108     	ldr	x8, [x8, #0x40]
 2ba28f0: f9402029     	ldr	x9, [x1, #0x40]
 2ba28f4: eb09011f     	cmp	x8, x9
 2ba28f8: 54001421     	b.ne	0x2ba2b7c <__start_il2cpp+0xda568>
 2ba28fc: 97f8d19b     	bl	0x29d6f68 <mono_class_get_checked+0x850>
 2ba2900: b9401a88     	ldr	w8, [x20, #0x18]
 2ba2904: 721f791f     	tst	w8, #0xfffffffe
 2ba2908: 540013c0     	b.eq	0x2ba2b80 <__start_il2cpp+0xda56c>
 2ba290c: f9400819     	ldr	x25, [x0, #0x10]
 2ba2910: b4001339     	cbz	x25, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2914: f9402b28     	ldr	x8, [x25, #0x50]
 2ba2918: b40012e8     	cbz	x8, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba291c: f9402100     	ldr	x0, [x8, #0x40]
 2ba2920: b40012a0     	cbz	x0, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2924: 9001bac8     	adrp	x8, 0x62fa000
 2ba2928: 2a1503e1     	mov	w1, w21
 2ba292c: f940a508     	ldr	x8, [x8, #0x148]
 2ba2930: f9401696     	ldr	x22, [x20, #0x28]
 2ba2934: f9402274     	ldr	x20, [x19, #0x40]
 2ba2938: f9400102     	ldr	x2, [x8]
 2ba293c: 943e1889     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba2940: b40011b4     	cbz	x20, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2944: b001ba98     	adrp	x24, 0x62f3000
 2ba2948: f9400288     	ldr	x8, [x20]
 2ba294c: aa0003f7     	mov	x23, x0
 2ba2950: f9479318     	ldr	x24, [x24, #0xf20]
 2ba2954: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba2958: f9400301     	ldr	x1, [x24]
 2ba295c: b4000129     	cbz	x9, 0x2ba2980 <__start_il2cpp+0xda36c>
 2ba2960: f940590a     	ldr	x10, [x8, #0xb0]
 2ba2964: 9100214a     	add	x10, x10, #0x8
 2ba2968: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba296c: eb01017f     	cmp	x11, x1
 2ba2970: 540001a0     	b.eq	0x2ba29a4 <__start_il2cpp+0xda390>
 2ba2974: f1000529     	subs	x9, x9, #0x1
 2ba2978: 9100414a     	add	x10, x10, #0x10
 2ba297c: 54ffff61     	b.ne	0x2ba2968 <__start_il2cpp+0xda354>
 2ba2980: aa1403e0     	mov	x0, x20
 2ba2984: 52800042     	mov	w2, #0x2                // =2
 2ba2988: 97f9ae77     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba298c: 1400000a     	b	0x2ba29b4 <__start_il2cpp+0xda3a0>
 2ba2990: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ba2994: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2ba2998: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2ba299c: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2ba29a0: d65f03c0     	ret
 2ba29a4: b9400149     	ldr	w9, [x10]
 2ba29a8: 11000929     	add	w9, w9, #0x2
 2ba29ac: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba29b0: 9104e100     	add	x0, x8, #0x138
 2ba29b4: a9400808     	ldp	x8, x2, [x0]
 2ba29b8: aa1403e0     	mov	x0, x20
 2ba29bc: aa1703e1     	mov	x1, x23
 2ba29c0: d63f0100     	blr	x8
 2ba29c4: f9402b28     	ldr	x8, [x25, #0x50]
 2ba29c8: b4000d68     	cbz	x8, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba29cc: aa0003f4     	mov	x20, x0
 2ba29d0: f9402900     	ldr	x0, [x8, #0x50]
 2ba29d4: b4000d00     	cbz	x0, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba29d8: f001ba88     	adrp	x8, 0x62f5000
 2ba29dc: 2a1503e1     	mov	w1, w21
 2ba29e0: f940f908     	ldr	x8, [x8, #0x1f0]
 2ba29e4: f9400102     	ldr	x2, [x8]
 2ba29e8: 943caeec     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2ba29ec: b4000c54     	cbz	x20, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba29f0: b9004680     	str	w0, [x20, #0x44]
 2ba29f4: b4000c16     	cbz	x22, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba29f8: 9001bac8     	adrp	x8, 0x62fa000
 2ba29fc: f940a108     	ldr	x8, [x8, #0x140]
 2ba2a00: f9400101     	ldr	x1, [x8]
 2ba2a04: f94002c8     	ldr	x8, [x22]
 2ba2a08: 3944c10a     	ldrb	w10, [x8, #0x130]
 2ba2a0c: 3944c029     	ldrb	w9, [x1, #0x130]
 2ba2a10: 6b09015f     	cmp	w10, w9
 2ba2a14: 54000b23     	b.lo	0x2ba2b78 <__start_il2cpp+0xda564>
 2ba2a18: f9406508     	ldr	x8, [x8, #0xc8]
 2ba2a1c: 8b090d08     	add	x8, x8, x9, lsl #3
 2ba2a20: f85f8108     	ldur	x8, [x8, #-0x8]
 2ba2a24: eb01011f     	cmp	x8, x1
 2ba2a28: 54000a81     	b.ne	0x2ba2b78 <__start_il2cpp+0xda564>
 2ba2a2c: 9001bac8     	adrp	x8, 0x62fa000
 2ba2a30: aa1603e0     	mov	x0, x22
 2ba2a34: f9409508     	ldr	x8, [x8, #0x128]
 2ba2a38: f9400101     	ldr	x1, [x8]
 2ba2a3c: 941ff835     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba2a40: b40009a0     	cbz	x0, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2a44: aa1403e1     	mov	x1, x20
 2ba2a48: aa0003f5     	mov	x21, x0
 2ba2a4c: 97fff825     	bl	0x2ba0ae0 <__start_il2cpp+0xd84cc>
 2ba2a50: 9001ba88     	adrp	x8, 0x62f2000
 2ba2a54: f940ad08     	ldr	x8, [x8, #0x158]
 2ba2a58: f9400100     	ldr	x0, [x8]
 2ba2a5c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba2a60: 35000048     	cbnz	w8, 0x2ba2a68 <__start_il2cpp+0xda454>
 2ba2a64: 97f8d13e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba2a68: aa1f03e0     	mov	x0, xzr
 2ba2a6c: 949524c6     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2ba2a70: aa0003e1     	mov	x1, x0
 2ba2a74: aa1503e0     	mov	x0, x21
 2ba2a78: 97fff85f     	bl	0x2ba0bf4 <__start_il2cpp+0xd85e0>
 2ba2a7c: f9402a8a     	ldr	x10, [x20, #0x50]
 2ba2a80: b40007aa     	cbz	x10, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2a84: f9402275     	ldr	x21, [x19, #0x40]
 2ba2a88: b4000775     	cbz	x21, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2a8c: f94002a8     	ldr	x8, [x21]
 2ba2a90: b9403156     	ldr	w22, [x10, #0x30]
 2ba2a94: b9404697     	ldr	w23, [x20, #0x44]
 2ba2a98: f9400301     	ldr	x1, [x24]
 2ba2a9c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba2aa0: b4000129     	cbz	x9, 0x2ba2ac4 <__start_il2cpp+0xda4b0>
 2ba2aa4: f940590a     	ldr	x10, [x8, #0xb0]
 2ba2aa8: 9100214a     	add	x10, x10, #0x8
 2ba2aac: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba2ab0: eb01017f     	cmp	x11, x1
 2ba2ab4: 54000100     	b.eq	0x2ba2ad4 <__start_il2cpp+0xda4c0>
 2ba2ab8: f1000529     	subs	x9, x9, #0x1
 2ba2abc: 9100414a     	add	x10, x10, #0x10
 2ba2ac0: 54ffff61     	b.ne	0x2ba2aac <__start_il2cpp+0xda498>
 2ba2ac4: aa1503e0     	mov	x0, x21
 2ba2ac8: 52800102     	mov	w2, #0x8                // =8
 2ba2acc: 97f9ae26     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba2ad0: 14000005     	b	0x2ba2ae4 <__start_il2cpp+0xda4d0>
 2ba2ad4: b9400149     	ldr	w9, [x10]
 2ba2ad8: 11002129     	add	w9, w9, #0x8
 2ba2adc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba2ae0: 9104e100     	add	x0, x8, #0x138
 2ba2ae4: a9400c08     	ldp	x8, x3, [x0]
 2ba2ae8: aa1503e0     	mov	x0, x21
 2ba2aec: 2a1603e1     	mov	w1, w22
 2ba2af0: 2a1703e2     	mov	w2, w23
 2ba2af4: d63f0100     	blr	x8
 2ba2af8: f9402273     	ldr	x19, [x19, #0x40]
 2ba2afc: b40003d3     	cbz	x19, 0x2ba2b74 <__start_il2cpp+0xda560>
 2ba2b00: f9400268     	ldr	x8, [x19]
 2ba2b04: f9400301     	ldr	x1, [x24]
 2ba2b08: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba2b0c: b4000129     	cbz	x9, 0x2ba2b30 <__start_il2cpp+0xda51c>
 2ba2b10: f940590a     	ldr	x10, [x8, #0xb0]
 2ba2b14: 9100214a     	add	x10, x10, #0x8
 2ba2b18: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba2b1c: eb01017f     	cmp	x11, x1
 2ba2b20: 54000100     	b.eq	0x2ba2b40 <__start_il2cpp+0xda52c>
 2ba2b24: f1000529     	subs	x9, x9, #0x1
 2ba2b28: 9100414a     	add	x10, x10, #0x10
 2ba2b2c: 54ffff61     	b.ne	0x2ba2b18 <__start_il2cpp+0xda504>
 2ba2b30: aa1303e0     	mov	x0, x19
 2ba2b34: 52800062     	mov	w2, #0x3                // =3
 2ba2b38: 97f9ae0b     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba2b3c: 14000005     	b	0x2ba2b50 <__start_il2cpp+0xda53c>
 2ba2b40: b9400149     	ldr	w9, [x10]
 2ba2b44: 11000d29     	add	w9, w9, #0x3
 2ba2b48: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba2b4c: 9104e100     	add	x0, x8, #0x138
 2ba2b50: a9400c04     	ldp	x4, x3, [x0]
 2ba2b54: aa1303e0     	mov	x0, x19
 2ba2b58: aa1403e1     	mov	x1, x20
 2ba2b5c: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ba2b60: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2ba2b64: 2a1f03e2     	mov	w2, wzr
 2ba2b68: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2ba2b6c: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2ba2b70: d61f0080     	br	x4
 2ba2b74: 97f8d145     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba2b78: aa1603e0     	mov	x0, x22
 2ba2b7c: 97f8d223     	bl	0x29d7408 <mono_class_get_checked+0xcf0>
 2ba2b80: 97f8d144     	bl	0x29d7090 <mono_class_get_checked+0x978>

# BubbleProducer :: System.Void TestProduce(System.Int32 sampleSize, System.Int32 id, System.Int32 level)
# VA 0x2ba2b84 .. 0x2ba2f54 (next mapped method entry)
 2ba2b84: d101c3ff     	sub	sp, sp, #0x70
 2ba2b88: a9026ffe     	stp	x30, x27, [sp, #0x20]
 2ba2b8c: a90367fa     	stp	x26, x25, [sp, #0x30]
 2ba2b90: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2ba2b94: a90557f6     	stp	x22, x21, [sp, #0x50]
 2ba2b98: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2ba2b9c: 9001db96     	adrp	x22, 0x6712000
 2ba2ba0: 2a0303f3     	mov	w19, w3
 2ba2ba4: 2a0203f7     	mov	w23, w2
 2ba2ba8: 39639ac8     	ldrb	w8, [x22, #0x8e6]
 2ba2bac: 2a0103f4     	mov	w20, w1
 2ba2bb0: aa0003f5     	mov	x21, x0
 2ba2bb4: 370002a8     	tbnz	w8, #0x0, 0x2ba2c08 <__start_il2cpp+0xda5f4>
 2ba2bb8: b001ba80     	adrp	x0, 0x62f3000
 2ba2bbc: f9479000     	ldr	x0, [x0, #0xf20]
 2ba2bc0: 97f8d088     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2bc4: 9001bac0     	adrp	x0, 0x62fa000
 2ba2bc8: f940a800     	ldr	x0, [x0, #0x150]
 2ba2bcc: 97f8d085     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2bd0: 9001baa0     	adrp	x0, 0x62f6000
 2ba2bd4: f9400c00     	ldr	x0, [x0, #0x18]
 2ba2bd8: 97f8d082     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2bdc: f001ba60     	adrp	x0, 0x62f1000
 2ba2be0: f9413c00     	ldr	x0, [x0, #0x278]
 2ba2be4: 97f8d07f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2be8: 9001bac0     	adrp	x0, 0x62fa000
 2ba2bec: f940ac00     	ldr	x0, [x0, #0x158]
 2ba2bf0: 97f8d07c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2bf4: 9001bac0     	adrp	x0, 0x62fa000
 2ba2bf8: f940b000     	ldr	x0, [x0, #0x160]
 2ba2bfc: 97f8d079     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2c00: 52800028     	mov	w8, #0x1                // =1
 2ba2c04: 39239ac8     	strb	w8, [x22, #0x8e6]
 2ba2c08: f94022b5     	ldr	x21, [x21, #0x40]
 2ba2c0c: b40019b5     	cbz	x21, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2c10: b001ba8a     	adrp	x10, 0x62f3000
 2ba2c14: f94002a8     	ldr	x8, [x21]
 2ba2c18: f947914a     	ldr	x10, [x10, #0xf20]
 2ba2c1c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba2c20: f9400141     	ldr	x1, [x10]
 2ba2c24: b4000129     	cbz	x9, 0x2ba2c48 <__start_il2cpp+0xda634>
 2ba2c28: f940590a     	ldr	x10, [x8, #0xb0]
 2ba2c2c: 9100214a     	add	x10, x10, #0x8
 2ba2c30: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba2c34: eb01017f     	cmp	x11, x1
 2ba2c38: 54000100     	b.eq	0x2ba2c58 <__start_il2cpp+0xda644>
 2ba2c3c: f1000529     	subs	x9, x9, #0x1
 2ba2c40: 9100414a     	add	x10, x10, #0x10
 2ba2c44: 54ffff61     	b.ne	0x2ba2c30 <__start_il2cpp+0xda61c>
 2ba2c48: aa1503e0     	mov	x0, x21
 2ba2c4c: 52800082     	mov	w2, #0x4                // =4
 2ba2c50: 97f9adc5     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba2c54: 14000005     	b	0x2ba2c68 <__start_il2cpp+0xda654>
 2ba2c58: b9400149     	ldr	w9, [x10]
 2ba2c5c: 11001129     	add	w9, w9, #0x4
 2ba2c60: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba2c64: 9104e100     	add	x0, x8, #0x138
 2ba2c68: 9001bad9     	adrp	x25, 0x62fa000
 2ba2c6c: 2a1703e1     	mov	w1, w23
 2ba2c70: f940ab39     	ldr	x25, [x25, #0x150]
 2ba2c74: a9400808     	ldp	x8, x2, [x0]
 2ba2c78: aa1503e0     	mov	x0, x21
 2ba2c7c: d63f0100     	blr	x8
 2ba2c80: 7100069f     	cmp	w20, #0x1
 2ba2c84: aa0003f5     	mov	x21, x0
 2ba2c88: 2a1f03fb     	mov	w27, wzr
 2ba2c8c: 5400026b     	b.lt	0x2ba2cd8 <__start_il2cpp+0xda6c4>
 2ba2c90: 2a1403f8     	mov	w24, w20
 2ba2c94: 2a1f03e0     	mov	w0, wzr
 2ba2c98: 52800c81     	mov	w1, #0x64               // =100
 2ba2c9c: aa1f03e2     	mov	x2, xzr
 2ba2ca0: 94be55e4     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 2ba2ca4: b40014f5     	cbz	x21, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2ca8: 2a0003f6     	mov	w22, w0
 2ba2cac: f9402ea0     	ldr	x0, [x21, #0x58]
 2ba2cb0: b4001480     	cbz	x0, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2cb4: f9400322     	ldr	x2, [x25]
 2ba2cb8: 2a1303e1     	mov	w1, w19
 2ba2cbc: 943e17a9     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba2cc0: b4001400     	cbz	x0, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2cc4: b9402808     	ldr	w8, [x0, #0x28]
 2ba2cc8: 6b0802df     	cmp	w22, w8
 2ba2ccc: 1a9ba77b     	cinc	w27, w27, lt
 2ba2cd0: 71000718     	subs	w24, w24, #0x1
 2ba2cd4: 54fffe01     	b.ne	0x2ba2c94 <__start_il2cpp+0xda680>
 2ba2cd8: f001ba68     	adrp	x8, 0x62f1000
 2ba2cdc: 528000c1     	mov	w1, #0x6                // =6
 2ba2ce0: f9413d08     	ldr	x8, [x8, #0x278]
 2ba2ce4: f9400100     	ldr	x0, [x8]
 2ba2ce8: 97f8d079     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2ba2cec: d001ba7a     	adrp	x26, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba2cf0: aa0003f6     	mov	x22, x0
 2ba2cf4: 910073e1     	add	x1, sp, #0x1c
 2ba2cf8: f9470f5a     	ldr	x26, [x26, #0xe18]
 2ba2cfc: b9001ff4     	str	w20, [sp, #0x1c]
 2ba2d00: f9402740     	ldr	x0, [x26, #0x48]
 2ba2d04: 97f8d098     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2d08: b40011d6     	cbz	x22, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2d0c: aa0003f8     	mov	x24, x0
 2ba2d10: b40000c0     	cbz	x0, 0x2ba2d28 <__start_il2cpp+0xda714>
 2ba2d14: f94002c8     	ldr	x8, [x22]
 2ba2d18: aa1803e0     	mov	x0, x24
 2ba2d1c: f9402101     	ldr	x1, [x8, #0x40]
 2ba2d20: 97f8d090     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2d24: b4001120     	cbz	x0, 0x2ba2f48 <__start_il2cpp+0xda934>
 2ba2d28: b9401ac8     	ldr	w8, [x22, #0x18]
 2ba2d2c: 340010c8     	cbz	w8, 0x2ba2f44 <__start_il2cpp+0xda930>
 2ba2d30: aa1603e0     	mov	x0, x22
 2ba2d34: aa1803e1     	mov	x1, x24
 2ba2d38: f8020c18     	str	x24, [x0, #0x20]!
 2ba2d3c: 97f8d014     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2d40: f9402740     	ldr	x0, [x26, #0x48]
 2ba2d44: 910063e1     	add	x1, sp, #0x18
 2ba2d48: b9001bf7     	str	w23, [sp, #0x18]
 2ba2d4c: 97f8d086     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2d50: aa0003f7     	mov	x23, x0
 2ba2d54: b40000c0     	cbz	x0, 0x2ba2d6c <__start_il2cpp+0xda758>
 2ba2d58: f94002c8     	ldr	x8, [x22]
 2ba2d5c: aa1703e0     	mov	x0, x23
 2ba2d60: f9402101     	ldr	x1, [x8, #0x40]
 2ba2d64: 97f8d07f     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2d68: b4000f00     	cbz	x0, 0x2ba2f48 <__start_il2cpp+0xda934>
 2ba2d6c: b9401ac8     	ldr	w8, [x22, #0x18]
 2ba2d70: 721f791f     	tst	w8, #0xfffffffe
 2ba2d74: 54000e80     	b.eq	0x2ba2f44 <__start_il2cpp+0xda930>
 2ba2d78: aa1603e0     	mov	x0, x22
 2ba2d7c: aa1703e1     	mov	x1, x23
 2ba2d80: f8028c17     	str	x23, [x0, #0x28]!
 2ba2d84: 97f8d002     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2d88: f9402740     	ldr	x0, [x26, #0x48]
 2ba2d8c: 910053e1     	add	x1, sp, #0x14
 2ba2d90: b90017f3     	str	w19, [sp, #0x14]
 2ba2d94: 97f8d074     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2d98: aa0003f7     	mov	x23, x0
 2ba2d9c: b40000c0     	cbz	x0, 0x2ba2db4 <__start_il2cpp+0xda7a0>
 2ba2da0: f94002c8     	ldr	x8, [x22]
 2ba2da4: aa1703e0     	mov	x0, x23
 2ba2da8: f9402101     	ldr	x1, [x8, #0x40]
 2ba2dac: 97f8d06d     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2db0: b4000cc0     	cbz	x0, 0x2ba2f48 <__start_il2cpp+0xda934>
 2ba2db4: b9401ac8     	ldr	w8, [x22, #0x18]
 2ba2db8: 7100091f     	cmp	w8, #0x2
 2ba2dbc: 54000c49     	b.ls	0x2ba2f44 <__start_il2cpp+0xda930>
 2ba2dc0: aa1603e0     	mov	x0, x22
 2ba2dc4: aa1703e1     	mov	x1, x23
 2ba2dc8: f8030c17     	str	x23, [x0, #0x30]!
 2ba2dcc: 97f8cff0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2dd0: f9402740     	ldr	x0, [x26, #0x48]
 2ba2dd4: 910043e1     	add	x1, sp, #0x10
 2ba2dd8: b90013fb     	str	w27, [sp, #0x10]
 2ba2ddc: 97f8d062     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2de0: aa0003f7     	mov	x23, x0
 2ba2de4: b40000c0     	cbz	x0, 0x2ba2dfc <__start_il2cpp+0xda7e8>
 2ba2de8: f94002c8     	ldr	x8, [x22]
 2ba2dec: aa1703e0     	mov	x0, x23
 2ba2df0: f9402101     	ldr	x1, [x8, #0x40]
 2ba2df4: 97f8d05b     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2df8: b4000a80     	cbz	x0, 0x2ba2f48 <__start_il2cpp+0xda934>
 2ba2dfc: b9401ac8     	ldr	w8, [x22, #0x18]
 2ba2e00: 721e751f     	tst	w8, #0xfffffffc
 2ba2e04: 54000a00     	b.eq	0x2ba2f44 <__start_il2cpp+0xda930>
 2ba2e08: aa1603e0     	mov	x0, x22
 2ba2e0c: aa1703e1     	mov	x1, x23
 2ba2e10: f8038c17     	str	x23, [x0, #0x38]!
 2ba2e14: 97f8cfde     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2e18: 1e220360     	scvtf	s0, w27
 2ba2e1c: 1e220281     	scvtf	s1, w20
 2ba2e20: f9403f40     	ldr	x0, [x26, #0x78]
 2ba2e24: 910033e1     	add	x1, sp, #0xc
 2ba2e28: 1e211800     	fdiv	s0, s0, s1
 2ba2e2c: bd000fe0     	str	s0, [sp, #0xc]
 2ba2e30: 97f8d04d     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2e34: aa0003f4     	mov	x20, x0
 2ba2e38: b40000c0     	cbz	x0, 0x2ba2e50 <__start_il2cpp+0xda83c>
 2ba2e3c: f94002c8     	ldr	x8, [x22]
 2ba2e40: aa1403e0     	mov	x0, x20
 2ba2e44: f9402101     	ldr	x1, [x8, #0x40]
 2ba2e48: 97f8d046     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2e4c: b40007e0     	cbz	x0, 0x2ba2f48 <__start_il2cpp+0xda934>
 2ba2e50: b9401ac8     	ldr	w8, [x22, #0x18]
 2ba2e54: 7100111f     	cmp	w8, #0x4
 2ba2e58: 54000769     	b.ls	0x2ba2f44 <__start_il2cpp+0xda930>
 2ba2e5c: aa1603e0     	mov	x0, x22
 2ba2e60: aa1403e1     	mov	x1, x20
 2ba2e64: f8040c14     	str	x20, [x0, #0x40]!
 2ba2e68: 97f8cfc9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2e6c: b40006b5     	cbz	x21, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2e70: f9402ea0     	ldr	x0, [x21, #0x58]
 2ba2e74: b4000660     	cbz	x0, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2e78: f9400322     	ldr	x2, [x25]
 2ba2e7c: 2a1303e1     	mov	w1, w19
 2ba2e80: 943e1738     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2ba2e84: b40005e0     	cbz	x0, 0x2ba2f40 <__start_il2cpp+0xda92c>
 2ba2e88: b9402808     	ldr	w8, [x0, #0x28]
 2ba2e8c: f9402740     	ldr	x0, [x26, #0x48]
 2ba2e90: 910023e1     	add	x1, sp, #0x8
 2ba2e94: b9000be8     	str	w8, [sp, #0x8]
 2ba2e98: 97f8d033     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba2e9c: aa0003f3     	mov	x19, x0
 2ba2ea0: b40000c0     	cbz	x0, 0x2ba2eb8 <__start_il2cpp+0xda8a4>
 2ba2ea4: f94002c8     	ldr	x8, [x22]
 2ba2ea8: aa1303e0     	mov	x0, x19
 2ba2eac: f9402101     	ldr	x1, [x8, #0x40]
 2ba2eb0: 97f8d02c     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2ba2eb4: b40004a0     	cbz	x0, 0x2ba2f48 <__start_il2cpp+0xda934>
 2ba2eb8: b9401ac8     	ldr	w8, [x22, #0x18]
 2ba2ebc: 7100151f     	cmp	w8, #0x5
 2ba2ec0: 54000429     	b.ls	0x2ba2f44 <__start_il2cpp+0xda930>
 2ba2ec4: 9001bad5     	adrp	x21, 0x62fa000
 2ba2ec8: 9001bab7     	adrp	x23, 0x62f6000
 2ba2ecc: 9001bad4     	adrp	x20, 0x62fa000
 2ba2ed0: f940b2b5     	ldr	x21, [x21, #0x160]
 2ba2ed4: f9400ef7     	ldr	x23, [x23, #0x18]
 2ba2ed8: f940ae94     	ldr	x20, [x20, #0x158]
 2ba2edc: aa1603e0     	mov	x0, x22
 2ba2ee0: aa1303e1     	mov	x1, x19
 2ba2ee4: f8048c13     	str	x19, [x0, #0x48]!
 2ba2ee8: 97f8cfa9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba2eec: f94002a0     	ldr	x0, [x21]
 2ba2ef0: aa1603e1     	mov	x1, x22
 2ba2ef4: aa1f03e2     	mov	x2, xzr
 2ba2ef8: 948f5021     	bl	0x4f76f7c <__start_il2cpp+0x24ae968>
 2ba2efc: f94002e8     	ldr	x8, [x23]
 2ba2f00: aa0003f3     	mov	x19, x0
 2ba2f04: b940e509     	ldr	w9, [x8, #0xe4]
 2ba2f08: 35000069     	cbnz	w9, 0x2ba2f14 <__start_il2cpp+0xda900>
 2ba2f0c: aa0803e0     	mov	x0, x8
 2ba2f10: 97f8d013     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba2f14: f9400280     	ldr	x0, [x20]
 2ba2f18: aa1303e1     	mov	x1, x19
 2ba2f1c: aa1f03e2     	mov	x2, xzr
 2ba2f20: 97feab82     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ba2f24: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2ba2f28: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2ba2f2c: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2ba2f30: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2ba2f34: a9426ffe     	ldp	x30, x27, [sp, #0x20]
 2ba2f38: 9101c3ff     	add	sp, sp, #0x70
 2ba2f3c: d65f03c0     	ret
 2ba2f40: 97f8d052     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba2f44: 97f8d053     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba2f48: 97f8d059     	bl	0x29d70ac <mono_class_get_checked+0x994>
 2ba2f4c: aa1f03e1     	mov	x1, xzr
 2ba2f50: 97f8cfff     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# BubbleProducer :: System.Void Initialize()
# VA 0x2ba2f54 .. 0x2ba2ff8 (next mapped method entry)
 2ba2f54: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ba2f58: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ba2f5c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ba2f60: 9001db94     	adrp	x20, 0x6712000
 2ba2f64: b001bab6     	adrp	x22, 0x62f7000
 2ba2f68: 9001bad5     	adrp	x21, 0x62fa000
 2ba2f6c: 39639e88     	ldrb	w8, [x20, #0x8e7]
 2ba2f70: f94556d6     	ldr	x22, [x22, #0xaa8]
 2ba2f74: f940b6b5     	ldr	x21, [x21, #0x168]
 2ba2f78: aa0003f3     	mov	x19, x0
 2ba2f7c: 37000188     	tbnz	w8, #0x0, 0x2ba2fac <__start_il2cpp+0xda998>
 2ba2f80: b001baa0     	adrp	x0, 0x62f7000
 2ba2f84: f9455400     	ldr	x0, [x0, #0xaa8]
 2ba2f88: 97f8cf96     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2f8c: 9001bac0     	adrp	x0, 0x62fa000
 2ba2f90: f940b400     	ldr	x0, [x0, #0x168]
 2ba2f94: 97f8cf93     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2f98: b001baa0     	adrp	x0, 0x62f7000
 2ba2f9c: f945a400     	ldr	x0, [x0, #0xb48]
 2ba2fa0: 97f8cf90     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba2fa4: 52800028     	mov	w8, #0x1                // =1
 2ba2fa8: 39239e88     	strb	w8, [x20, #0x8e7]
 2ba2fac: f94002c0     	ldr	x0, [x22]
 2ba2fb0: f9401a74     	ldr	x20, [x19, #0x30]
 2ba2fb4: 97f8d031     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ba2fb8: f94002a2     	ldr	x2, [x21]
 2ba2fbc: aa1303e1     	mov	x1, x19
 2ba2fc0: aa1f03e3     	mov	x3, xzr
 2ba2fc4: aa0003f5     	mov	x21, x0
 2ba2fc8: 943dcade     	bl	0x3b15b40 <__start_il2cpp+0x104d52c>
 2ba2fcc: b4000154     	cbz	x20, 0x2ba2ff4 <__start_il2cpp+0xda9e0>
 2ba2fd0: b001baa8     	adrp	x8, 0x62f7000
 2ba2fd4: aa1403e0     	mov	x0, x20
 2ba2fd8: aa1503e1     	mov	x1, x21
 2ba2fdc: f945a508     	ldr	x8, [x8, #0xb48]
 2ba2fe0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ba2fe4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ba2fe8: f9400102     	ldr	x2, [x8]
 2ba2fec: f84307fe     	ldr	x30, [sp], #0x30
 2ba2ff0: 142a1524     	b	0x3628480 <__start_il2cpp+0xb5fe6c>
 2ba2ff4: 97f8d025     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleProducer :: BubbleComponent DebugSpawnBubble(System.Int32 itemId, System.Int32 itemLevel)
# VA 0x2ba2ff8 .. 0x2ba35e4 (next mapped method entry)
 2ba2ff8: d10143ff     	sub	sp, sp, #0x50
 2ba2ffc: f9000bfe     	str	x30, [sp, #0x10]
 2ba3000: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2ba3004: a90357f6     	stp	x22, x21, [sp, #0x30]
 2ba3008: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2ba300c: f001db76     	adrp	x22, 0x6712000
 2ba3010: 2a0203f5     	mov	w21, w2
 2ba3014: 2a0103f4     	mov	w20, w1
 2ba3018: 3963a2c8     	ldrb	w8, [x22, #0x8e8]
 2ba301c: aa0003f3     	mov	x19, x0
 2ba3020: 370005a8     	tbnz	w8, #0x0, 0x2ba30d4 <__start_il2cpp+0xdaac0>
 2ba3024: f001baa0     	adrp	x0, 0x62fa000
 2ba3028: f9409400     	ldr	x0, [x0, #0x128]
 2ba302c: 97f8cf6d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3030: f001ba60     	adrp	x0, 0x62f2000
 2ba3034: f940ac00     	ldr	x0, [x0, #0x158]
 2ba3038: 97f8cf6a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba303c: d001baa0     	adrp	x0, 0x62f9000
 2ba3040: f9476c00     	ldr	x0, [x0, #0xed8]
 2ba3044: 97f8cf67     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3048: 9001ba80     	adrp	x0, 0x62f3000
 2ba304c: f9479000     	ldr	x0, [x0, #0xf20]
 2ba3050: 97f8cf64     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3054: f001baa0     	adrp	x0, 0x62fa000
 2ba3058: f940b800     	ldr	x0, [x0, #0x170]
 2ba305c: 97f8cf61     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3060: f001ba80     	adrp	x0, 0x62f6000
 2ba3064: f9400c00     	ldr	x0, [x0, #0x18]
 2ba3068: 97f8cf5e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba306c: b001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba3070: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba3074: 97f8cf5b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3078: f001baa0     	adrp	x0, 0x62fa000
 2ba307c: f940bc00     	ldr	x0, [x0, #0x178]
 2ba3080: 97f8cf58     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3084: f001baa0     	adrp	x0, 0x62fa000
 2ba3088: f940ac00     	ldr	x0, [x0, #0x158]
 2ba308c: 97f8cf55     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3090: f001baa0     	adrp	x0, 0x62fa000
 2ba3094: f940c000     	ldr	x0, [x0, #0x180]
 2ba3098: 97f8cf52     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba309c: f001baa0     	adrp	x0, 0x62fa000
 2ba30a0: f940c400     	ldr	x0, [x0, #0x188]
 2ba30a4: 97f8cf4f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba30a8: f001baa0     	adrp	x0, 0x62fa000
 2ba30ac: f940c800     	ldr	x0, [x0, #0x190]
 2ba30b0: 97f8cf4c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba30b4: f001baa0     	adrp	x0, 0x62fa000
 2ba30b8: f940cc00     	ldr	x0, [x0, #0x198]
 2ba30bc: 97f8cf49     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba30c0: f001baa0     	adrp	x0, 0x62fa000
 2ba30c4: f940d000     	ldr	x0, [x0, #0x1a0]
 2ba30c8: 97f8cf46     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba30cc: 52800028     	mov	w8, #0x1                // =1
 2ba30d0: 3923a2c8     	strb	w8, [x22, #0x8e8]
 2ba30d4: f9402276     	ldr	x22, [x19, #0x40]
 2ba30d8: b4002856     	cbz	x22, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba30dc: 9001ba98     	adrp	x24, 0x62f3000
 2ba30e0: f94002c8     	ldr	x8, [x22]
 2ba30e4: f9479318     	ldr	x24, [x24, #0xf20]
 2ba30e8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba30ec: f9400301     	ldr	x1, [x24]
 2ba30f0: b4000129     	cbz	x9, 0x2ba3114 <__start_il2cpp+0xdab00>
 2ba30f4: f940590a     	ldr	x10, [x8, #0xb0]
 2ba30f8: 9100214a     	add	x10, x10, #0x8
 2ba30fc: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba3100: eb01017f     	cmp	x11, x1
 2ba3104: 54000100     	b.eq	0x2ba3124 <__start_il2cpp+0xdab10>
 2ba3108: f1000529     	subs	x9, x9, #0x1
 2ba310c: 9100414a     	add	x10, x10, #0x10
 2ba3110: 54ffff61     	b.ne	0x2ba30fc <__start_il2cpp+0xdaae8>
 2ba3114: aa1603e0     	mov	x0, x22
 2ba3118: 52800162     	mov	w2, #0xb                // =11
 2ba311c: 97f9ac92     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba3120: 14000005     	b	0x2ba3134 <__start_il2cpp+0xdab20>
 2ba3124: b9400149     	ldr	w9, [x10]
 2ba3128: 11002d29     	add	w9, w9, #0xb
 2ba312c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba3130: 9104e100     	add	x0, x8, #0x138
 2ba3134: a9400808     	ldp	x8, x2, [x0]
 2ba3138: aa1603e0     	mov	x0, x22
 2ba313c: 2a1403e1     	mov	w1, w20
 2ba3140: d63f0100     	blr	x8
 2ba3144: 36000260     	tbz	w0, #0x0, 0x2ba3190 <__start_il2cpp+0xdab7c>
 2ba3148: f9402276     	ldr	x22, [x19, #0x40]
 2ba314c: b40024b6     	cbz	x22, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba3150: f94002c8     	ldr	x8, [x22]
 2ba3154: f9400301     	ldr	x1, [x24]
 2ba3158: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba315c: b4000129     	cbz	x9, 0x2ba3180 <__start_il2cpp+0xdab6c>
 2ba3160: f940590a     	ldr	x10, [x8, #0xb0]
 2ba3164: 9100214a     	add	x10, x10, #0x8
 2ba3168: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba316c: eb01017f     	cmp	x11, x1
 2ba3170: 54000220     	b.eq	0x2ba31b4 <__start_il2cpp+0xdaba0>
 2ba3174: f1000529     	subs	x9, x9, #0x1
 2ba3178: 9100414a     	add	x10, x10, #0x10
 2ba317c: 54ffff61     	b.ne	0x2ba3168 <__start_il2cpp+0xdab54>
 2ba3180: aa1603e0     	mov	x0, x22
 2ba3184: 52800082     	mov	w2, #0x4                // =4
 2ba3188: 97f9ac77     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba318c: 1400000e     	b	0x2ba31c4 <__start_il2cpp+0xdabb0>
 2ba3190: b001ba68     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba3194: 910073e1     	add	x1, sp, #0x1c
 2ba3198: f9470d08     	ldr	x8, [x8, #0xe18]
 2ba319c: b9001ff4     	str	w20, [sp, #0x1c]
 2ba31a0: f9402500     	ldr	x0, [x8, #0x48]
 2ba31a4: 97f8cf70     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba31a8: f001baa8     	adrp	x8, 0x62fa000
 2ba31ac: f940c108     	ldr	x8, [x8, #0x180]
 2ba31b0: 1400001e     	b	0x2ba3228 <__start_il2cpp+0xdac14>
 2ba31b4: b9400149     	ldr	w9, [x10]
 2ba31b8: 11001129     	add	w9, w9, #0x4
 2ba31bc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba31c0: 9104e100     	add	x0, x8, #0x138
 2ba31c4: a9400808     	ldp	x8, x2, [x0]
 2ba31c8: aa1603e0     	mov	x0, x22
 2ba31cc: 2a1403e1     	mov	w1, w20
 2ba31d0: d63f0100     	blr	x8
 2ba31d4: b001ba77     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba31d8: aa0003f6     	mov	x22, x0
 2ba31dc: f9478ef7     	ldr	x23, [x23, #0xf18]
 2ba31e0: f94002e8     	ldr	x8, [x23]
 2ba31e4: b940e509     	ldr	w9, [x8, #0xe4]
 2ba31e8: 35000069     	cbnz	w9, 0x2ba31f4 <__start_il2cpp+0xdabe0>
 2ba31ec: aa0803e0     	mov	x0, x8
 2ba31f0: 97f8cf5b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba31f4: aa1603e0     	mov	x0, x22
 2ba31f8: aa1f03e1     	mov	x1, xzr
 2ba31fc: aa1f03e2     	mov	x2, xzr
 2ba3200: 94be8cfe     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba3204: 36000480     	tbz	w0, #0x0, 0x2ba3294 <__start_il2cpp+0xdac80>
 2ba3208: b001ba68     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba320c: 910073e1     	add	x1, sp, #0x1c
 2ba3210: f9470d08     	ldr	x8, [x8, #0xe18]
 2ba3214: b9001ff4     	str	w20, [sp, #0x1c]
 2ba3218: f9402500     	ldr	x0, [x8, #0x48]
 2ba321c: 97f8cf52     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba3220: f001baa8     	adrp	x8, 0x62fa000
 2ba3224: f940cd08     	ldr	x8, [x8, #0x198]
 2ba3228: f9400108     	ldr	x8, [x8]
 2ba322c: aa0003e1     	mov	x1, x0
 2ba3230: aa1f03e2     	mov	x2, xzr
 2ba3234: aa0803e0     	mov	x0, x8
 2ba3238: 948f254e     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2ba323c: f001ba88     	adrp	x8, 0x62f6000
 2ba3240: aa0003f3     	mov	x19, x0
 2ba3244: f9400d08     	ldr	x8, [x8, #0x18]
 2ba3248: f9400108     	ldr	x8, [x8]
 2ba324c: b940e509     	ldr	w9, [x8, #0xe4]
 2ba3250: 35000069     	cbnz	w9, 0x2ba325c <__start_il2cpp+0xdac48>
 2ba3254: aa0803e0     	mov	x0, x8
 2ba3258: 97f8cf41     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba325c: f001baa8     	adrp	x8, 0x62fa000
 2ba3260: aa1303e1     	mov	x1, x19
 2ba3264: f940ad08     	ldr	x8, [x8, #0x158]
 2ba3268: f9400100     	ldr	x0, [x8]
 2ba326c: aa1f03e2     	mov	x2, xzr
 2ba3270: 97feaaae     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ba3274: aa1f03f4     	mov	x20, xzr
 2ba3278: aa1403e0     	mov	x0, x20
 2ba327c: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba3280: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba3284: f9400bfe     	ldr	x30, [sp, #0x10]
 2ba3288: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2ba328c: 910143ff     	add	sp, sp, #0x50
 2ba3290: d65f03c0     	ret
 2ba3294: 710006bf     	cmp	w21, #0x1
 2ba3298: 540000eb     	b.lt	0x2ba32b4 <__start_il2cpp+0xdaca0>
 2ba329c: b4001a36     	cbz	x22, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba32a0: f9402ec8     	ldr	x8, [x22, #0x58]
 2ba32a4: b40019e8     	cbz	x8, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba32a8: b9401908     	ldr	w8, [x8, #0x18]
 2ba32ac: 6b15011f     	cmp	w8, w21
 2ba32b0: 540003ea     	b.ge	0x2ba332c <__start_il2cpp+0xdad18>
 2ba32b4: b001ba77     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba32b8: 910073e1     	add	x1, sp, #0x1c
 2ba32bc: f9470ef7     	ldr	x23, [x23, #0xe18]
 2ba32c0: b9001ff5     	str	w21, [sp, #0x1c]
 2ba32c4: f94026e0     	ldr	x0, [x23, #0x48]
 2ba32c8: 97f8cf27     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba32cc: aa0003f3     	mov	x19, x0
 2ba32d0: f94026e0     	ldr	x0, [x23, #0x48]
 2ba32d4: 910063e1     	add	x1, sp, #0x18
 2ba32d8: b9001bf4     	str	w20, [sp, #0x18]
 2ba32dc: 97f8cf22     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba32e0: b4001816     	cbz	x22, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba32e4: f9402ec8     	ldr	x8, [x22, #0x58]
 2ba32e8: b40017c8     	cbz	x8, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba32ec: aa0003f4     	mov	x20, x0
 2ba32f0: b9401908     	ldr	w8, [x8, #0x18]
 2ba32f4: f94026e0     	ldr	x0, [x23, #0x48]
 2ba32f8: 910033e1     	add	x1, sp, #0xc
 2ba32fc: b9000fe8     	str	w8, [sp, #0xc]
 2ba3300: 97f8cf19     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba3304: f001baa8     	adrp	x8, 0x62fa000
 2ba3308: aa0003e3     	mov	x3, x0
 2ba330c: aa1303e1     	mov	x1, x19
 2ba3310: f940d108     	ldr	x8, [x8, #0x1a0]
 2ba3314: aa1403e2     	mov	x2, x20
 2ba3318: aa1f03e4     	mov	x4, xzr
 2ba331c: f9400108     	ldr	x8, [x8]
 2ba3320: aa0803e0     	mov	x0, x8
 2ba3324: 948f4f05     	bl	0x4f76f38 <__start_il2cpp+0x24ae924>
 2ba3328: 17ffffc5     	b	0x2ba323c <__start_il2cpp+0xdac28>
 2ba332c: f9401276     	ldr	x22, [x19, #0x20]
 2ba3330: b4001596     	cbz	x22, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba3334: d001baaa     	adrp	x10, 0x62f9000
 2ba3338: f94002c8     	ldr	x8, [x22]
 2ba333c: f9476d4a     	ldr	x10, [x10, #0xed8]
 2ba3340: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba3344: f9400141     	ldr	x1, [x10]
 2ba3348: b4000129     	cbz	x9, 0x2ba336c <__start_il2cpp+0xdad58>
 2ba334c: f940590a     	ldr	x10, [x8, #0xb0]
 2ba3350: 9100214a     	add	x10, x10, #0x8
 2ba3354: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba3358: eb01017f     	cmp	x11, x1
 2ba335c: 54000100     	b.eq	0x2ba337c <__start_il2cpp+0xdad68>
 2ba3360: f1000529     	subs	x9, x9, #0x1
 2ba3364: 9100414a     	add	x10, x10, #0x10
 2ba3368: 54ffff61     	b.ne	0x2ba3354 <__start_il2cpp+0xdad40>
 2ba336c: aa1603e0     	mov	x0, x22
 2ba3370: 52800142     	mov	w2, #0xa                // =10
 2ba3374: 97f9abfc     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba3378: 14000005     	b	0x2ba338c <__start_il2cpp+0xdad78>
 2ba337c: b9400149     	ldr	w9, [x10]
 2ba3380: 11002929     	add	w9, w9, #0xa
 2ba3384: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba3388: 9104e100     	add	x0, x8, #0x138
 2ba338c: a9400408     	ldp	x8, x1, [x0]
 2ba3390: aa1603e0     	mov	x0, x22
 2ba3394: d63f0100     	blr	x8
 2ba3398: f94002e8     	ldr	x8, [x23]
 2ba339c: aa0003f6     	mov	x22, x0
 2ba33a0: b940e509     	ldr	w9, [x8, #0xe4]
 2ba33a4: 35000069     	cbnz	w9, 0x2ba33b0 <__start_il2cpp+0xdad9c>
 2ba33a8: aa0803e0     	mov	x0, x8
 2ba33ac: 97f8ceec     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba33b0: aa1603e0     	mov	x0, x22
 2ba33b4: aa1f03e1     	mov	x1, xzr
 2ba33b8: aa1f03e2     	mov	x2, xzr
 2ba33bc: 94be8c8f     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba33c0: 36000180     	tbz	w0, #0x0, 0x2ba33f0 <__start_il2cpp+0xdaddc>
 2ba33c4: f001ba88     	adrp	x8, 0x62f6000
 2ba33c8: f9400d08     	ldr	x8, [x8, #0x18]
 2ba33cc: f9400100     	ldr	x0, [x8]
 2ba33d0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba33d4: 35000048     	cbnz	w8, 0x2ba33dc <__start_il2cpp+0xdadc8>
 2ba33d8: 97f8cee1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba33dc: f001baa8     	adrp	x8, 0x62fa000
 2ba33e0: f001baa9     	adrp	x9, 0x62fa000
 2ba33e4: f940ad08     	ldr	x8, [x8, #0x158]
 2ba33e8: f940bd29     	ldr	x9, [x9, #0x178]
 2ba33ec: 14000021     	b	0x2ba3470 <__start_il2cpp+0xdae5c>
 2ba33f0: aa1303e0     	mov	x0, x19
 2ba33f4: aa1603e1     	mov	x1, x22
 2ba33f8: 9400007b     	bl	0x2ba35e4 <__start_il2cpp+0xdafd0>
 2ba33fc: aa0003e3     	mov	x3, x0
 2ba3400: aa1303e0     	mov	x0, x19
 2ba3404: 52802581     	mov	w1, #0x12c              // =300
 2ba3408: 52800022     	mov	w2, #0x1                // =1
 2ba340c: aa1603e4     	mov	x4, x22
 2ba3410: 2a1f03e5     	mov	w5, wzr
 2ba3414: aa1f03e6     	mov	x6, xzr
 2ba3418: 9401a006     	bl	0x2c0b430 <__start_il2cpp+0x142e1c>
 2ba341c: f94002e8     	ldr	x8, [x23]
 2ba3420: aa0003f7     	mov	x23, x0
 2ba3424: b940e509     	ldr	w9, [x8, #0xe4]
 2ba3428: 35000069     	cbnz	w9, 0x2ba3434 <__start_il2cpp+0xdae20>
 2ba342c: aa0803e0     	mov	x0, x8
 2ba3430: 97f8cecb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba3434: aa1703e0     	mov	x0, x23
 2ba3438: aa1f03e1     	mov	x1, xzr
 2ba343c: aa1f03e2     	mov	x2, xzr
 2ba3440: 94be8c6e     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba3444: 360001c0     	tbz	w0, #0x0, 0x2ba347c <__start_il2cpp+0xdae68>
 2ba3448: f001ba88     	adrp	x8, 0x62f6000
 2ba344c: f9400d08     	ldr	x8, [x8, #0x18]
 2ba3450: f9400100     	ldr	x0, [x8]
 2ba3454: b940e408     	ldr	w8, [x0, #0xe4]
 2ba3458: 35000048     	cbnz	w8, 0x2ba3460 <__start_il2cpp+0xdae4c>
 2ba345c: 97f8cec0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba3460: f001baa8     	adrp	x8, 0x62fa000
 2ba3464: f001baa9     	adrp	x9, 0x62fa000
 2ba3468: f940ad08     	ldr	x8, [x8, #0x158]
 2ba346c: f940c529     	ldr	x9, [x9, #0x188]
 2ba3470: f9400100     	ldr	x0, [x8]
 2ba3474: f9400121     	ldr	x1, [x9]
 2ba3478: 17ffff7d     	b	0x2ba326c <__start_il2cpp+0xdac58>
 2ba347c: f9402262     	ldr	x2, [x19, #0x40]
 2ba3480: b4000b02     	cbz	x2, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba3484: f9400301     	ldr	x1, [x24]
 2ba3488: 52800020     	mov	w0, #0x1                // =1
 2ba348c: 2a1403e3     	mov	w3, w20
 2ba3490: 97ec1411     	bl	0x26a84d4 <.text+0x3374>
 2ba3494: b4000a60     	cbz	x0, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba3498: aa0003f6     	mov	x22, x0
 2ba349c: b9004415     	str	w21, [x0, #0x44]
 2ba34a0: b4000a17     	cbz	x23, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba34a4: f001baa8     	adrp	x8, 0x62fa000
 2ba34a8: aa1703e0     	mov	x0, x23
 2ba34ac: f9409508     	ldr	x8, [x8, #0x128]
 2ba34b0: f9400101     	ldr	x1, [x8]
 2ba34b4: 941ff597     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba34b8: b4000940     	cbz	x0, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba34bc: aa1603e1     	mov	x1, x22
 2ba34c0: aa0003f4     	mov	x20, x0
 2ba34c4: 97fff587     	bl	0x2ba0ae0 <__start_il2cpp+0xd84cc>
 2ba34c8: f001ba68     	adrp	x8, 0x62f2000
 2ba34cc: f940ad08     	ldr	x8, [x8, #0x158]
 2ba34d0: f9400100     	ldr	x0, [x8]
 2ba34d4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba34d8: 35000048     	cbnz	w8, 0x2ba34e0 <__start_il2cpp+0xdaecc>
 2ba34dc: 97f8cea0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba34e0: aa1f03e0     	mov	x0, xzr
 2ba34e4: 94952228     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2ba34e8: aa0003e1     	mov	x1, x0
 2ba34ec: aa1403e0     	mov	x0, x20
 2ba34f0: 97fff5c1     	bl	0x2ba0bf4 <__start_il2cpp+0xd85e0>
 2ba34f4: f9402ac8     	ldr	x8, [x22, #0x50]
 2ba34f8: b4000748     	cbz	x8, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba34fc: f9402262     	ldr	x2, [x19, #0x40]
 2ba3500: b4000702     	cbz	x2, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba3504: b94046c4     	ldr	w4, [x22, #0x44]
 2ba3508: b9403103     	ldr	w3, [x8, #0x30]
 2ba350c: 52800100     	mov	w0, #0x8                // =8
 2ba3510: f9400301     	ldr	x1, [x24]
 2ba3514: 97ec1436     	bl	0x26a85ec <.text+0x348c>
 2ba3518: f9402262     	ldr	x2, [x19, #0x40]
 2ba351c: b4000622     	cbz	x2, 0x2ba35e0 <__start_il2cpp+0xdafcc>
 2ba3520: f9400301     	ldr	x1, [x24]
 2ba3524: 52800060     	mov	w0, #0x3                // =3
 2ba3528: aa1603e3     	mov	x3, x22
 2ba352c: 2a1f03e4     	mov	w4, wzr
 2ba3530: 97ec1406     	bl	0x26a8548 <.text+0x33e8>
 2ba3534: b001ba76     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba3538: 910073e1     	add	x1, sp, #0x1c
 2ba353c: f9470ed6     	ldr	x22, [x22, #0xe18]
 2ba3540: b9405a88     	ldr	w8, [x20, #0x58]
 2ba3544: f94026c0     	ldr	x0, [x22, #0x48]
 2ba3548: b9001fe8     	str	w8, [sp, #0x1c]
 2ba354c: 97f8ce86     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba3550: aa0003f3     	mov	x19, x0
 2ba3554: b9405e88     	ldr	w8, [x20, #0x5c]
 2ba3558: f94026c0     	ldr	x0, [x22, #0x48]
 2ba355c: 910063e1     	add	x1, sp, #0x18
 2ba3560: b9001be8     	str	w8, [sp, #0x18]
 2ba3564: 97f8ce80     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba3568: aa0003f5     	mov	x21, x0
 2ba356c: 39418288     	ldrb	w8, [x20, #0x60]
 2ba3570: f94016c0     	ldr	x0, [x22, #0x28]
 2ba3574: 910033e1     	add	x1, sp, #0xc
 2ba3578: 390033e8     	strb	w8, [sp, #0xc]
 2ba357c: 97f8ce7a     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba3580: f001baa8     	adrp	x8, 0x62fa000
 2ba3584: aa0003e3     	mov	x3, x0
 2ba3588: aa1303e1     	mov	x1, x19
 2ba358c: f940c908     	ldr	x8, [x8, #0x190]
 2ba3590: aa1503e2     	mov	x2, x21
 2ba3594: aa1f03e4     	mov	x4, xzr
 2ba3598: f9400108     	ldr	x8, [x8]
 2ba359c: aa0803e0     	mov	x0, x8
 2ba35a0: 948f4e66     	bl	0x4f76f38 <__start_il2cpp+0x24ae924>
 2ba35a4: f001ba88     	adrp	x8, 0x62f6000
 2ba35a8: aa0003f3     	mov	x19, x0
 2ba35ac: f9400d08     	ldr	x8, [x8, #0x18]
 2ba35b0: f9400108     	ldr	x8, [x8]
 2ba35b4: b940e509     	ldr	w9, [x8, #0xe4]
 2ba35b8: 35000069     	cbnz	w9, 0x2ba35c4 <__start_il2cpp+0xdafb0>
 2ba35bc: aa0803e0     	mov	x0, x8
 2ba35c0: 97f8ce67     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba35c4: f001baa8     	adrp	x8, 0x62fa000
 2ba35c8: aa1303e1     	mov	x1, x19
 2ba35cc: aa1f03e2     	mov	x2, xzr
 2ba35d0: f940ad08     	ldr	x8, [x8, #0x158]
 2ba35d4: f9400100     	ldr	x0, [x8]
 2ba35d8: 97fea9d4     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ba35dc: 17ffff27     	b	0x2ba3278 <__start_il2cpp+0xdac64>
 2ba35e0: 97f8ceaa     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleProducer :: BoardSlot FindDebugAnimationSourceSlot(BoardSlot destSlot)
# VA 0x2ba35e4 .. 0x2ba383c (next mapped method entry)
 2ba35e4: f81b0ffe     	str	x30, [sp, #-0x50]!
 2ba35e8: a90167fa     	stp	x26, x25, [sp, #0x10]
 2ba35ec: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2ba35f0: a90357f6     	stp	x22, x21, [sp, #0x30]
 2ba35f4: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2ba35f8: f001db75     	adrp	x21, 0x6712000
 2ba35fc: aa0103f3     	mov	x19, x1
 2ba3600: aa0003f4     	mov	x20, x0
 2ba3604: 3963a6a8     	ldrb	w8, [x21, #0x8e9]
 2ba3608: 37000128     	tbnz	w8, #0x0, 0x2ba362c <__start_il2cpp+0xdb018>
 2ba360c: d001baa0     	adrp	x0, 0x62f9000
 2ba3610: f9476c00     	ldr	x0, [x0, #0xed8]
 2ba3614: 97f8cdf3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3618: b001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba361c: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba3620: 97f8cdf0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba3624: 52800028     	mov	w8, #0x1                // =1
 2ba3628: 3923a6a8     	strb	w8, [x21, #0x8e9]
 2ba362c: f9401294     	ldr	x20, [x20, #0x20]
 2ba3630: b4001054     	cbz	x20, 0x2ba3838 <__start_il2cpp+0xdb224>
 2ba3634: d001baaa     	adrp	x10, 0x62f9000
 2ba3638: f9400288     	ldr	x8, [x20]
 2ba363c: f9476d4a     	ldr	x10, [x10, #0xed8]
 2ba3640: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba3644: f9400141     	ldr	x1, [x10]
 2ba3648: b4000129     	cbz	x9, 0x2ba366c <__start_il2cpp+0xdb058>
 2ba364c: f940590a     	ldr	x10, [x8, #0xb0]
 2ba3650: 9100214a     	add	x10, x10, #0x8
 2ba3654: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba3658: eb01017f     	cmp	x11, x1
 2ba365c: 54000100     	b.eq	0x2ba367c <__start_il2cpp+0xdb068>
 2ba3660: f1000529     	subs	x9, x9, #0x1
 2ba3664: 9100414a     	add	x10, x10, #0x10
 2ba3668: 54ffff61     	b.ne	0x2ba3654 <__start_il2cpp+0xdb040>
 2ba366c: aa1403e0     	mov	x0, x20
 2ba3670: 52800022     	mov	w2, #0x1                // =1
 2ba3674: 97f9ab3c     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba3678: 14000005     	b	0x2ba368c <__start_il2cpp+0xdb078>
 2ba367c: b9400149     	ldr	w9, [x10]
 2ba3680: 11000529     	add	w9, w9, #0x1
 2ba3684: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba3688: 9104e100     	add	x0, x8, #0x138
 2ba368c: a9400408     	ldp	x8, x1, [x0]
 2ba3690: aa1403e0     	mov	x0, x20
 2ba3694: d63f0100     	blr	x8
 2ba3698: b4000d00     	cbz	x0, 0x2ba3838 <__start_il2cpp+0xdb224>
 2ba369c: b9401808     	ldr	w8, [x0, #0x18]
 2ba36a0: b001ba76     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba36a4: aa0003f4     	mov	x20, x0
 2ba36a8: f9478ed6     	ldr	x22, [x22, #0xf18]
 2ba36ac: 7100051f     	cmp	w8, #0x1
 2ba36b0: 540005cb     	b.lt	0x2ba3768 <__start_il2cpp+0xdb154>
 2ba36b4: aa1f03f7     	mov	x23, xzr
 2ba36b8: eb0802ff     	cmp	x23, x8
 2ba36bc: 54000bc2     	b.hs	0x2ba3834 <__start_il2cpp+0xdb220>
 2ba36c0: 8b170e88     	add	x8, x20, x23, lsl #3
 2ba36c4: f9401118     	ldr	x24, [x8, #0x20]
 2ba36c8: b4000b98     	cbz	x24, 0x2ba3838 <__start_il2cpp+0xdb224>
 2ba36cc: f9400f08     	ldr	x8, [x24, #0x18]
 2ba36d0: 7100051f     	cmp	w8, #0x1
 2ba36d4: 5400042b     	b.lt	0x2ba3758 <__start_il2cpp+0xdb144>
 2ba36d8: aa1f03f9     	mov	x25, xzr
 2ba36dc: 92407d08     	and	x8, x8, #0xffffffff
 2ba36e0: 9100831a     	add	x26, x24, #0x20
 2ba36e4: eb28433f     	cmp	x25, w8, uxtw
 2ba36e8: 54000a62     	b.hs	0x2ba3834 <__start_il2cpp+0xdb220>
 2ba36ec: f94002c0     	ldr	x0, [x22]
 2ba36f0: f8797b55     	ldr	x21, [x26, x25, lsl #3]
 2ba36f4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba36f8: 35000048     	cbnz	w8, 0x2ba3700 <__start_il2cpp+0xdb0ec>
 2ba36fc: 97f8ce18     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba3700: aa1503e0     	mov	x0, x21
 2ba3704: aa1f03e1     	mov	x1, xzr
 2ba3708: aa1f03e2     	mov	x2, xzr
 2ba370c: 94be7db4     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba3710: 360001c0     	tbz	w0, #0x0, 0x2ba3748 <__start_il2cpp+0xdb134>
 2ba3714: f94002c0     	ldr	x0, [x22]
 2ba3718: b940e408     	ldr	w8, [x0, #0xe4]
 2ba371c: 35000048     	cbnz	w8, 0x2ba3724 <__start_il2cpp+0xdb110>
 2ba3720: 97f8ce0f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba3724: aa1503e0     	mov	x0, x21
 2ba3728: aa1303e1     	mov	x1, x19
 2ba372c: aa1f03e2     	mov	x2, xzr
 2ba3730: 94be7dab     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba3734: 360000a0     	tbz	w0, #0x0, 0x2ba3748 <__start_il2cpp+0xdb134>
 2ba3738: b4000815     	cbz	x21, 0x2ba3838 <__start_il2cpp+0xdb224>
 2ba373c: aa1503e0     	mov	x0, x21
 2ba3740: 97ffeb72     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2ba3744: 360006a0     	tbz	w0, #0x0, 0x2ba3818 <__start_il2cpp+0xdb204>
 2ba3748: b9401b08     	ldr	w8, [x24, #0x18]
 2ba374c: 91000739     	add	x25, x25, #0x1
 2ba3750: eb28c33f     	cmp	x25, w8, sxtw
 2ba3754: 54fffc8b     	b.lt	0x2ba36e4 <__start_il2cpp+0xdb0d0>
 2ba3758: b9401a88     	ldr	w8, [x20, #0x18]
 2ba375c: 910006f7     	add	x23, x23, #0x1
 2ba3760: 6b0802ff     	cmp	w23, w8
 2ba3764: 54fffaab     	b.lt	0x2ba36b8 <__start_il2cpp+0xdb0a4>
 2ba3768: 7100051f     	cmp	w8, #0x1
 2ba376c: 5400054b     	b.lt	0x2ba3814 <__start_il2cpp+0xdb200>
 2ba3770: aa1f03f7     	mov	x23, xzr
 2ba3774: eb0802ff     	cmp	x23, x8
 2ba3778: 540005e2     	b.hs	0x2ba3834 <__start_il2cpp+0xdb220>
 2ba377c: 8b170e88     	add	x8, x20, x23, lsl #3
 2ba3780: f9401118     	ldr	x24, [x8, #0x20]
 2ba3784: b40005b8     	cbz	x24, 0x2ba3838 <__start_il2cpp+0xdb224>
 2ba3788: f9400f08     	ldr	x8, [x24, #0x18]
 2ba378c: 7100051f     	cmp	w8, #0x1
 2ba3790: 540003ab     	b.lt	0x2ba3804 <__start_il2cpp+0xdb1f0>
 2ba3794: aa1f03f9     	mov	x25, xzr
 2ba3798: 92407d08     	and	x8, x8, #0xffffffff
 2ba379c: 9100831a     	add	x26, x24, #0x20
 2ba37a0: eb28433f     	cmp	x25, w8, uxtw
 2ba37a4: 54000482     	b.hs	0x2ba3834 <__start_il2cpp+0xdb220>
 2ba37a8: f94002c0     	ldr	x0, [x22]
 2ba37ac: f8797b55     	ldr	x21, [x26, x25, lsl #3]
 2ba37b0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba37b4: 35000048     	cbnz	w8, 0x2ba37bc <__start_il2cpp+0xdb1a8>
 2ba37b8: 97f8cde9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba37bc: aa1503e0     	mov	x0, x21
 2ba37c0: aa1f03e1     	mov	x1, xzr
 2ba37c4: aa1f03e2     	mov	x2, xzr
 2ba37c8: 94be7d85     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba37cc: 36000140     	tbz	w0, #0x0, 0x2ba37f4 <__start_il2cpp+0xdb1e0>
 2ba37d0: f94002c0     	ldr	x0, [x22]
 2ba37d4: b940e408     	ldr	w8, [x0, #0xe4]
 2ba37d8: 35000048     	cbnz	w8, 0x2ba37e0 <__start_il2cpp+0xdb1cc>
 2ba37dc: 97f8cde0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba37e0: aa1503e0     	mov	x0, x21
 2ba37e4: aa1303e1     	mov	x1, x19
 2ba37e8: aa1f03e2     	mov	x2, xzr
 2ba37ec: 94be7d7c     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba37f0: 37000140     	tbnz	w0, #0x0, 0x2ba3818 <__start_il2cpp+0xdb204>
 2ba37f4: b9401b08     	ldr	w8, [x24, #0x18]
 2ba37f8: 91000739     	add	x25, x25, #0x1
 2ba37fc: eb28c33f     	cmp	x25, w8, sxtw
 2ba3800: 54fffd0b     	b.lt	0x2ba37a0 <__start_il2cpp+0xdb18c>
 2ba3804: b9401a88     	ldr	w8, [x20, #0x18]
 2ba3808: 910006f7     	add	x23, x23, #0x1
 2ba380c: 6b0802ff     	cmp	w23, w8
 2ba3810: 54fffb2b     	b.lt	0x2ba3774 <__start_il2cpp+0xdb160>
 2ba3814: aa1303f5     	mov	x21, x19
 2ba3818: aa1503e0     	mov	x0, x21
 2ba381c: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2ba3820: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2ba3824: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2ba3828: a94167fa     	ldp	x26, x25, [sp, #0x10]
 2ba382c: f84507fe     	ldr	x30, [sp], #0x50
 2ba3830: d65f03c0     	ret
 2ba3834: 97f8ce17     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2ba3838: 97f8ce14     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BubbleProducer :: System.Void .ctor()
# VA 0x2ba383c .. 0x2ba3844 (next mapped method entry)
 2ba383c: aa1f03e1     	mov	x1, xzr
 2ba3840: 14019d92     	b	0x2c0ae88 <__start_il2cpp+0x142874>
