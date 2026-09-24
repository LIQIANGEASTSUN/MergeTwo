
# BoardDataPiece :: System.Void .ctor()
# VA 0x2edea74 .. 0x2edeae0 (next mapped method entry)
 2edea74: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2edea78: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2edea7c: d001c1b4     	adrp	x20, 0x6714000
 2edea80: f001a195     	adrp	x21, 0x6311000
 2edea84: aa0003f3     	mov	x19, x0
 2edea88: 394e9e88     	ldrb	w8, [x20, #0x3a7]
 2edea8c: f9460eb5     	ldr	x21, [x21, #0xc18]
 2edea90: 370000c8     	tbnz	w8, #0x0, 0x2edeaa8 <__start_il2cpp+0x416494>
 2edea94: f001a180     	adrp	x0, 0x6311000
 2edea98: f9460c00     	ldr	x0, [x0, #0xc18]
 2edea9c: 97ebe0d1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2edeaa0: 52800028     	mov	w8, #0x1                // =1
 2edeaa4: 390e9e88     	strb	w8, [x20, #0x3a7]
 2edeaa8: f94002a0     	ldr	x0, [x21]
 2edeaac: 97ebe173     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2edeab0: aa1f03e1     	mov	x1, xzr
 2edeab4: aa0003f4     	mov	x20, x0
 2edeab8: 97f5be49     	bl	0x2c4e3dc <__start_il2cpp+0x185dc8>
 2edeabc: aa1303e0     	mov	x0, x19
 2edeac0: aa1403e1     	mov	x1, x20
 2edeac4: f8030c14     	str	x20, [x0, #0x30]!
 2edeac8: 97ebe0b1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2edeacc: aa1303e0     	mov	x0, x19
 2edead0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2edead4: aa1f03e1     	mov	x1, xzr
 2edead8: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2edeadc: 1489c41b     	b	0x514fb48 <__start_il2cpp+0x2687534>

# BoardDataPiece :: BoardData get_boardData()
# VA 0x2ee1604 .. 0x2ee161c (next mapped method entry)
 2ee1604: f9401c08     	ldr	x8, [x0, #0x38]
 2ee1608: b4000068     	cbz	x8, 0x2ee1614 <__start_il2cpp+0x419000>
 2ee160c: f9401d00     	ldr	x0, [x8, #0x38]
 2ee1610: d65f03c0     	ret
 2ee1614: f81f0ffe     	str	x30, [sp, #-0x10]!
 2ee1618: 97ebd69c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardDataPiece :: System.Void SetKinoaInitialBoard(BoardData initialBoard)
# VA 0x2ee161c .. 0x2ee1624 (next mapped method entry)
 2ee161c: f8040c01     	str	x1, [x0, #0x40]!
 2ee1620: 17ebd5db     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BoardDataPiece :: System.String GetKey()
# VA 0x2ee1624 .. 0x2ee1664 (next mapped method entry)
 2ee1624: f81e0ffe     	str	x30, [sp, #-0x20]!
 2ee1628: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee162c: f001c193     	adrp	x19, 0x6714000
 2ee1630: f001a0d4     	adrp	x20, 0x62fc000
 2ee1634: 394e8a68     	ldrb	w8, [x19, #0x3a2]
 2ee1638: f943d694     	ldr	x20, [x20, #0x7a8]
 2ee163c: 370000c8     	tbnz	w8, #0x0, 0x2ee1654 <__start_il2cpp+0x419040>
 2ee1640: f001a0c0     	adrp	x0, 0x62fc000
 2ee1644: f943d400     	ldr	x0, [x0, #0x7a8]
 2ee1648: 97ebd5e6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee164c: 52800028     	mov	w8, #0x1                // =1
 2ee1650: 390e8a68     	strb	w8, [x19, #0x3a2]
 2ee1654: f9400280     	ldr	x0, [x20]
 2ee1658: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee165c: f84207fe     	ldr	x30, [sp], #0x20
 2ee1660: d65f03c0     	ret

# BoardDataPiece :: System.Void SetBoardData(BoardData data)
# VA 0x2ee1664 .. 0x2ee172c (next mapped method entry)
 2ee1664: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ee1668: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee166c: f001c195     	adrp	x21, 0x6714000
 2ee1670: aa0103f4     	mov	x20, x1
 2ee1674: aa0003f3     	mov	x19, x0
 2ee1678: 394e8ea8     	ldrb	w8, [x21, #0x3a3]
 2ee167c: 37000188     	tbnz	w8, #0x0, 0x2ee16ac <__start_il2cpp+0x419098>
 2ee1680: 9001a180     	adrp	x0, 0x6311000
 2ee1684: f9468800     	ldr	x0, [x0, #0xd10]
 2ee1688: 97ebd5d6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee168c: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1690: f946e800     	ldr	x0, [x0, #0xdd0]
 2ee1694: 97ebd5d3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1698: 9001a180     	adrp	x0, 0x6311000
 2ee169c: f9468c00     	ldr	x0, [x0, #0xd18]
 2ee16a0: 97ebd5d0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee16a4: 52800028     	mov	w8, #0x1                // =1
 2ee16a8: 390e8ea8     	strb	w8, [x21, #0x3a3]
 2ee16ac: 39408268     	ldrb	w8, [x19, #0x20]
 2ee16b0: 340001c8     	cbz	w8, 0x2ee16e8 <__start_il2cpp+0x4190d4>
 2ee16b4: f001a068     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee16b8: 9001a193     	adrp	x19, 0x6311000
 2ee16bc: f946e908     	ldr	x8, [x8, #0xdd0]
 2ee16c0: f9400100     	ldr	x0, [x8]
 2ee16c4: b940e408     	ldr	w8, [x0, #0xe4]
 2ee16c8: f9468e73     	ldr	x19, [x19, #0xd18]
 2ee16cc: 35000048     	cbnz	w8, 0x2ee16d4 <__start_il2cpp+0x4190c0>
 2ee16d0: 97ebd623     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee16d4: f9400260     	ldr	x0, [x19]
 2ee16d8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee16dc: aa1f03e1     	mov	x1, xzr
 2ee16e0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee16e4: 14b06ca3     	b	0x5afc970 <__start_il2cpp+0x303435c>
 2ee16e8: 9001a188     	adrp	x8, 0x6311000
 2ee16ec: f9468908     	ldr	x8, [x8, #0xd10]
 2ee16f0: f9400100     	ldr	x0, [x8]
 2ee16f4: 97ebd661     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee16f8: aa1403e1     	mov	x1, x20
 2ee16fc: aa1f03e2     	mov	x2, xzr
 2ee1700: aa0003f5     	mov	x21, x0
 2ee1704: 97fdd265     	bl	0x2e56098 <__start_il2cpp+0x38da84>
 2ee1708: aa1303e0     	mov	x0, x19
 2ee170c: aa1503e1     	mov	x1, x21
 2ee1710: f8038c15     	str	x21, [x0, #0x38]!
 2ee1714: 97ebd59e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1718: aa1303e0     	mov	x0, x19
 2ee171c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee1720: 52800021     	mov	w1, #0x1                // =1
 2ee1724: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee1728: 17fffd07     	b	0x2ee0b44 <__start_il2cpp+0x418530>

# BoardDataPiece :: System.Boolean TryDeserializeFromLocal(System.Boolean createInitialValuesIfNotExist = False)
# VA 0x2ee172c .. 0x2ee18d4 (next mapped method entry)
 2ee172c: d10103ff     	sub	sp, sp, #0x40
 2ee1730: f9000bfe     	str	x30, [sp, #0x10]
 2ee1734: a90257f6     	stp	x22, x21, [sp, #0x20]
 2ee1738: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2ee173c: f001c195     	adrp	x21, 0x6714000
 2ee1740: d001a094     	adrp	x20, 0x62f3000
 2ee1744: aa0003f3     	mov	x19, x0
 2ee1748: 394e92a8     	ldrb	w8, [x21, #0x3a4]
 2ee174c: f946b694     	ldr	x20, [x20, #0xd68]
 2ee1750: 12000036     	and	w22, w1, #0x1
 2ee1754: 370001e8     	tbnz	w8, #0x0, 0x2ee1790 <__start_il2cpp+0x41917c>
 2ee1758: 9001a180     	adrp	x0, 0x6311000
 2ee175c: f9468800     	ldr	x0, [x0, #0xd10]
 2ee1760: 97ebd5a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1764: 9001a180     	adrp	x0, 0x6311000
 2ee1768: f9469000     	ldr	x0, [x0, #0xd20]
 2ee176c: 97ebd59d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1770: d001a080     	adrp	x0, 0x62f3000
 2ee1774: f946b400     	ldr	x0, [x0, #0xd68]
 2ee1778: 97ebd59a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee177c: 9001a180     	adrp	x0, 0x6311000
 2ee1780: f9469400     	ldr	x0, [x0, #0xd28]
 2ee1784: 97ebd597     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1788: 52800028     	mov	w8, #0x1                // =1
 2ee178c: 390e92a8     	strb	w8, [x21, #0x3a4]
 2ee1790: f90003ff     	str	xzr, [sp]
 2ee1794: 9001a195     	adrp	x21, 0x6311000
 2ee1798: 910003e8     	mov	x8, sp
 2ee179c: f94696b5     	ldr	x21, [x21, #0xd28]
 2ee17a0: 91002100     	add	x0, x8, #0x8
 2ee17a4: aa1303e1     	mov	x1, x19
 2ee17a8: 390003f6     	strb	w22, [sp]
 2ee17ac: f90007f3     	str	x19, [sp, #0x8]
 2ee17b0: 97ebd577     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee17b4: f9400280     	ldr	x0, [x20]
 2ee17b8: b940e408     	ldr	w8, [x0, #0xe4]
 2ee17bc: 35000048     	cbnz	w8, 0x2ee17c4 <__start_il2cpp+0x4191b0>
 2ee17c0: 97ebd5e7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee17c4: f94002a0     	ldr	x0, [x21]
 2ee17c8: aa1f03e1     	mov	x1, xzr
 2ee17cc: 97f1323e     	bl	0x2b2e0c4 <__start_il2cpp+0x65ab0>
 2ee17d0: 36000220     	tbz	w0, #0x0, 0x2ee1814 <__start_il2cpp+0x419200>
 2ee17d4: f9400280     	ldr	x0, [x20]
 2ee17d8: 9001a194     	adrp	x20, 0x6311000
 2ee17dc: b940e408     	ldr	w8, [x0, #0xe4]
 2ee17e0: f9469294     	ldr	x20, [x20, #0xd20]
 2ee17e4: 35000048     	cbnz	w8, 0x2ee17ec <__start_il2cpp+0x4191d8>
 2ee17e8: 97ebd5dd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee17ec: f94002a0     	ldr	x0, [x21]
 2ee17f0: f9400283     	ldr	x3, [x20]
 2ee17f4: 2a1f03e1     	mov	w1, wzr
 2ee17f8: 2a1f03e2     	mov	w2, wzr
 2ee17fc: 9413880d     	bl	0x33c3830 <__start_il2cpp+0x8fb21c>
 2ee1800: aa0003e1     	mov	x1, x0
 2ee1804: aa1303e0     	mov	x0, x19
 2ee1808: f8038c01     	str	x1, [x0, #0x38]!
 2ee180c: 97ebd560     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1810: 14000021     	b	0x2ee1894 <__start_il2cpp+0x419280>
 2ee1814: f9401a60     	ldr	x0, [x19, #0x30]
 2ee1818: b40005c0     	cbz	x0, 0x2ee18d0 <__start_il2cpp+0x4192bc>
 2ee181c: aa1f03e1     	mov	x1, xzr
 2ee1820: 97f5b0c5     	bl	0x2c4db34 <__start_il2cpp+0x185520>
 2ee1824: f9401a60     	ldr	x0, [x19, #0x30]
 2ee1828: b4000540     	cbz	x0, 0x2ee18d0 <__start_il2cpp+0x4192bc>
 2ee182c: aa1f03e1     	mov	x1, xzr
 2ee1830: 97f5b1c8     	bl	0x2c4df50 <__start_il2cpp+0x18593c>
 2ee1834: b40003c0     	cbz	x0, 0x2ee18ac <__start_il2cpp+0x419298>
 2ee1838: 9001a188     	adrp	x8, 0x6311000
 2ee183c: aa0003f4     	mov	x20, x0
 2ee1840: f9468908     	ldr	x8, [x8, #0xd10]
 2ee1844: f9400100     	ldr	x0, [x8]
 2ee1848: 97ebd60c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee184c: aa1403e1     	mov	x1, x20
 2ee1850: aa1f03e2     	mov	x2, xzr
 2ee1854: aa0003f5     	mov	x21, x0
 2ee1858: 97fdd210     	bl	0x2e56098 <__start_il2cpp+0x38da84>
 2ee185c: aa1303f4     	mov	x20, x19
 2ee1860: aa1503e1     	mov	x1, x21
 2ee1864: f8038e95     	str	x21, [x20, #0x38]!
 2ee1868: aa1403e0     	mov	x0, x20
 2ee186c: 97ebd548     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1870: f9400288     	ldr	x8, [x20]
 2ee1874: b40002e8     	cbz	x8, 0x2ee18d0 <__start_il2cpp+0x4192bc>
 2ee1878: f9401d08     	ldr	x8, [x8, #0x38]
 2ee187c: b40000c8     	cbz	x8, 0x2ee1894 <__start_il2cpp+0x419280>
 2ee1880: f9400268     	ldr	x8, [x19]
 2ee1884: aa1303e0     	mov	x0, x19
 2ee1888: f9412d09     	ldr	x9, [x8, #0x258]
 2ee188c: f9413101     	ldr	x1, [x8, #0x260]
 2ee1890: d63f0120     	blr	x9
 2ee1894: f9401e68     	ldr	x8, [x19, #0x38]
 2ee1898: b40001c8     	cbz	x8, 0x2ee18d0 <__start_il2cpp+0x4192bc>
 2ee189c: f9401d08     	ldr	x8, [x8, #0x38]
 2ee18a0: b4000068     	cbz	x8, 0x2ee18ac <__start_il2cpp+0x419298>
 2ee18a4: 52800020     	mov	w0, #0x1                // =1
 2ee18a8: 14000004     	b	0x2ee18b8 <__start_il2cpp+0x4192a4>
 2ee18ac: 910003e1     	mov	x1, sp
 2ee18b0: aa1303e0     	mov	x0, x19
 2ee18b4: 94000008     	bl	0x2ee18d4 <__start_il2cpp+0x4192c0>
 2ee18b8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ee18bc: 12000000     	and	w0, w0, #0x1
 2ee18c0: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2ee18c4: f9400bfe     	ldr	x30, [sp, #0x10]
 2ee18c8: 910103ff     	add	sp, sp, #0x40
 2ee18cc: d65f03c0     	ret
 2ee18d0: 97ebd5ee     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardDataPiece :: System.Boolean <TryDeserializeFromLocal>g__TryCreateNewBoard|13_0(ref BoardDataPiece+<>c__DisplayClass13_0 param_0)
# VA 0x2ee18d4 .. 0x2ee1c44 (next mapped method entry)
 2ee18d4: f81c0ffe     	str	x30, [sp, #-0x40]!
 2ee18d8: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2ee18dc: a90257f6     	stp	x22, x21, [sp, #0x20]
 2ee18e0: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2ee18e4: f001c196     	adrp	x22, 0x6714000
 2ee18e8: b001a0b5     	adrp	x21, 0x62f6000
 2ee18ec: aa0103f4     	mov	x20, x1
 2ee18f0: 394ea2c8     	ldrb	w8, [x22, #0x3a8]
 2ee18f4: f9400eb5     	ldr	x21, [x21, #0x18]
 2ee18f8: aa0003f3     	mov	x19, x0
 2ee18fc: 37000608     	tbnz	w8, #0x0, 0x2ee19bc <__start_il2cpp+0x4193a8>
 2ee1900: 9001a180     	adrp	x0, 0x6311000
 2ee1904: f9468800     	ldr	x0, [x0, #0xd10]
 2ee1908: 97ebd536     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee190c: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1910: f946e800     	ldr	x0, [x0, #0xdd0]
 2ee1914: 97ebd533     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1918: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee191c: f946f000     	ldr	x0, [x0, #0xde0]
 2ee1920: 97ebd530     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1924: 9001a180     	adrp	x0, 0x6311000
 2ee1928: f9469800     	ldr	x0, [x0, #0xd30]
 2ee192c: 97ebd52d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1930: d001a140     	adrp	x0, 0x630b000
 2ee1934: f9400400     	ldr	x0, [x0, #0x8]
 2ee1938: 97ebd52a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee193c: b001a0a0     	adrp	x0, 0x62f6000
 2ee1940: f9400c00     	ldr	x0, [x0, #0x18]
 2ee1944: 97ebd527     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1948: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee194c: f9478c00     	ldr	x0, [x0, #0xf18]
 2ee1950: 97ebd524     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1954: 9001a0c0     	adrp	x0, 0x62f9000
 2ee1958: f9446800     	ldr	x0, [x0, #0x8d0]
 2ee195c: 97ebd521     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1960: 9001a180     	adrp	x0, 0x6311000
 2ee1964: f9469c00     	ldr	x0, [x0, #0xd38]
 2ee1968: 97ebd51e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee196c: 9001a180     	adrp	x0, 0x6311000
 2ee1970: f946a000     	ldr	x0, [x0, #0xd40]
 2ee1974: 97ebd51b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1978: 9001a180     	adrp	x0, 0x6311000
 2ee197c: f946a400     	ldr	x0, [x0, #0xd48]
 2ee1980: 97ebd518     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1984: 9001a180     	adrp	x0, 0x6311000
 2ee1988: f946a800     	ldr	x0, [x0, #0xd50]
 2ee198c: 97ebd515     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1990: 9001a180     	adrp	x0, 0x6311000
 2ee1994: f946ac00     	ldr	x0, [x0, #0xd58]
 2ee1998: 97ebd512     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee199c: 9001a180     	adrp	x0, 0x6311000
 2ee19a0: f946b000     	ldr	x0, [x0, #0xd60]
 2ee19a4: 97ebd50f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee19a8: 9001a180     	adrp	x0, 0x6311000
 2ee19ac: f946b400     	ldr	x0, [x0, #0xd68]
 2ee19b0: 97ebd50c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee19b4: 52800028     	mov	w8, #0x1                // =1
 2ee19b8: 390ea2c8     	strb	w8, [x22, #0x3a8]
 2ee19bc: f94002a0     	ldr	x0, [x21]
 2ee19c0: 9001a196     	adrp	x22, 0x6311000
 2ee19c4: 9001a197     	adrp	x23, 0x6311000
 2ee19c8: f946a6d6     	ldr	x22, [x22, #0xd48]
 2ee19cc: b940e408     	ldr	w8, [x0, #0xe4]
 2ee19d0: f946b6f7     	ldr	x23, [x23, #0xd68]
 2ee19d4: 35000048     	cbnz	w8, 0x2ee19dc <__start_il2cpp+0x4193c8>
 2ee19d8: 97ebd561     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee19dc: f94002c0     	ldr	x0, [x22]
 2ee19e0: f94002e1     	ldr	x1, [x23]
 2ee19e4: aa1f03e2     	mov	x2, xzr
 2ee19e8: 97f1b0d0     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ee19ec: 39400288     	ldrb	w8, [x20]
 2ee19f0: 340010c8     	cbz	w8, 0x2ee1c08 <__start_il2cpp+0x4195f4>
 2ee19f4: f9402268     	ldr	x8, [x19, #0x40]
 2ee19f8: b4000528     	cbz	x8, 0x2ee1a9c <__start_il2cpp+0x419488>
 2ee19fc: f9400908     	ldr	x8, [x8, #0x10]
 2ee1a00: b40004e8     	cbz	x8, 0x2ee1a9c <__start_il2cpp+0x419488>
 2ee1a04: b9401908     	ldr	w8, [x8, #0x18]
 2ee1a08: 7100fd1f     	cmp	w8, #0x3f
 2ee1a0c: 54000481     	b.ne	0x2ee1a9c <__start_il2cpp+0x419488>
 2ee1a10: f94002a0     	ldr	x0, [x21]
 2ee1a14: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1a18: 35000048     	cbnz	w8, 0x2ee1a20 <__start_il2cpp+0x41940c>
 2ee1a1c: 97ebd550     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1a20: 9001a188     	adrp	x8, 0x6311000
 2ee1a24: aa1f03e2     	mov	x2, xzr
 2ee1a28: f946ad08     	ldr	x8, [x8, #0xd58]
 2ee1a2c: f94002c0     	ldr	x0, [x22]
 2ee1a30: f9400101     	ldr	x1, [x8]
 2ee1a34: 97f1b0bd     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ee1a38: f9402260     	ldr	x0, [x19, #0x40]
 2ee1a3c: b4001020     	cbz	x0, 0x2ee1c40 <__start_il2cpp+0x41962c>
 2ee1a40: aa1f03e1     	mov	x1, xzr
 2ee1a44: 97f2efd7     	bl	0x2b9d9a0 <__start_il2cpp+0xd538c>
 2ee1a48: 9001a188     	adrp	x8, 0x6311000
 2ee1a4c: aa0003f4     	mov	x20, x0
 2ee1a50: f9468908     	ldr	x8, [x8, #0xd10]
 2ee1a54: f9400108     	ldr	x8, [x8]
 2ee1a58: aa0803e0     	mov	x0, x8
 2ee1a5c: 97ebd587     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee1a60: aa1403e1     	mov	x1, x20
 2ee1a64: aa1f03e2     	mov	x2, xzr
 2ee1a68: aa0003f5     	mov	x21, x0
 2ee1a6c: 97fdd18b     	bl	0x2e56098 <__start_il2cpp+0x38da84>
 2ee1a70: aa1303e0     	mov	x0, x19
 2ee1a74: aa1503e1     	mov	x1, x21
 2ee1a78: f8038c15     	str	x21, [x0, #0x38]!
 2ee1a7c: 97ebd4c4     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1a80: f9400268     	ldr	x8, [x19]
 2ee1a84: aa1303e0     	mov	x0, x19
 2ee1a88: f9412d09     	ldr	x9, [x8, #0x258]
 2ee1a8c: f9413101     	ldr	x1, [x8, #0x260]
 2ee1a90: d63f0120     	blr	x9
 2ee1a94: 52800020     	mov	w0, #0x1                // =1
 2ee1a98: 1400005d     	b	0x2ee1c0c <__start_il2cpp+0x4195f8>
 2ee1a9c: f94002a0     	ldr	x0, [x21]
 2ee1aa0: 9001a198     	adrp	x24, 0x6311000
 2ee1aa4: 9001a197     	adrp	x23, 0x6311000
 2ee1aa8: f9469f18     	ldr	x24, [x24, #0xd38]
 2ee1aac: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1ab0: f946aaf7     	ldr	x23, [x23, #0xd50]
 2ee1ab4: 35000048     	cbnz	w8, 0x2ee1abc <__start_il2cpp+0x4194a8>
 2ee1ab8: 97ebd529     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1abc: 9001a195     	adrp	x21, 0x6311000
 2ee1ac0: f001a074     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1ac4: aa1f03e2     	mov	x2, xzr
 2ee1ac8: f946a2b5     	ldr	x21, [x21, #0xd40]
 2ee1acc: f9478e94     	ldr	x20, [x20, #0xf18]
 2ee1ad0: f94002c0     	ldr	x0, [x22]
 2ee1ad4: f9400301     	ldr	x1, [x24]
 2ee1ad8: 97f1b094     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2ee1adc: b001c198     	adrp	x24, 0x6712000
 2ee1ae0: f94002f6     	ldr	x22, [x23]
 2ee1ae4: 39654708     	ldrb	w8, [x24, #0x951]
 2ee1ae8: 350000c8     	cbnz	w8, 0x2ee1b00 <__start_il2cpp+0x4194ec>
 2ee1aec: b001a0c0     	adrp	x0, 0x62fa000
 2ee1af0: f9445400     	ldr	x0, [x0, #0x8a8]
 2ee1af4: 97ebd4bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1af8: 52800028     	mov	w8, #0x1                // =1
 2ee1afc: 39254708     	strb	w8, [x24, #0x951]
 2ee1b00: b001a0c8     	adrp	x8, 0x62fa000
 2ee1b04: aa1f03e1     	mov	x1, xzr
 2ee1b08: f9445508     	ldr	x8, [x8, #0x8a8]
 2ee1b0c: f94002a9     	ldr	x9, [x21]
 2ee1b10: f9400108     	ldr	x8, [x8]
 2ee1b14: f9405d08     	ldr	x8, [x8, #0xb8]
 2ee1b18: b9400108     	ldr	w8, [x8]
 2ee1b1c: 51000508     	sub	w8, w8, #0x1
 2ee1b20: 7100091f     	cmp	w8, #0x2
 2ee1b24: 9a963120     	csel	x0, x9, x22, lo
 2ee1b28: 94b15e5d     	bl	0x5b3949c <__start_il2cpp+0x3070e88>
 2ee1b2c: f9400288     	ldr	x8, [x20]
 2ee1b30: aa0003f4     	mov	x20, x0
 2ee1b34: b940e509     	ldr	w9, [x8, #0xe4]
 2ee1b38: 35000069     	cbnz	w9, 0x2ee1b44 <__start_il2cpp+0x419530>
 2ee1b3c: aa0803e0     	mov	x0, x8
 2ee1b40: 97ebd507     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1b44: aa1403e0     	mov	x0, x20
 2ee1b48: aa1f03e1     	mov	x1, xzr
 2ee1b4c: aa1f03e2     	mov	x2, xzr
 2ee1b50: 94b184a3     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ee1b54: 360001e0     	tbz	w0, #0x0, 0x2ee1b90 <__start_il2cpp+0x41957c>
 2ee1b58: b40001d4     	cbz	x20, 0x2ee1b90 <__start_il2cpp+0x41957c>
 2ee1b5c: 9001a0c8     	adrp	x8, 0x62f9000
 2ee1b60: f9446908     	ldr	x8, [x8, #0x8d0]
 2ee1b64: f9400289     	ldr	x9, [x20]
 2ee1b68: f9400108     	ldr	x8, [x8]
 2ee1b6c: 3944c12b     	ldrb	w11, [x9, #0x130]
 2ee1b70: 3944c10a     	ldrb	w10, [x8, #0x130]
 2ee1b74: 6b0a017f     	cmp	w11, w10
 2ee1b78: 540000c3     	b.lo	0x2ee1b90 <__start_il2cpp+0x41957c>
 2ee1b7c: f9406529     	ldr	x9, [x9, #0xc8]
 2ee1b80: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2ee1b84: f85f8129     	ldur	x9, [x9, #-0x8]
 2ee1b88: eb08013f     	cmp	x9, x8
 2ee1b8c: 540004a0     	b.eq	0x2ee1c20 <__start_il2cpp+0x41960c>
 2ee1b90: f001a068     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1b94: f946f108     	ldr	x8, [x8, #0xde0]
 2ee1b98: f9400100     	ldr	x0, [x8]
 2ee1b9c: 97ebd537     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee1ba0: 9001a188     	adrp	x8, 0x6311000
 2ee1ba4: aa1f03e2     	mov	x2, xzr
 2ee1ba8: aa0003f4     	mov	x20, x0
 2ee1bac: f946b108     	ldr	x8, [x8, #0xd60]
 2ee1bb0: f9400101     	ldr	x1, [x8]
 2ee1bb4: 94898c7e     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2ee1bb8: f001a068     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1bbc: f946e908     	ldr	x8, [x8, #0xdd0]
 2ee1bc0: f9400100     	ldr	x0, [x8]
 2ee1bc4: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1bc8: 35000048     	cbnz	w8, 0x2ee1bd0 <__start_il2cpp+0x4195bc>
 2ee1bcc: 97ebd4e4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1bd0: aa1403e0     	mov	x0, x20
 2ee1bd4: aa1f03e1     	mov	x1, xzr
 2ee1bd8: 94b0560c     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2ee1bdc: 9001a188     	adrp	x8, 0x6311000
 2ee1be0: f9468908     	ldr	x8, [x8, #0xd10]
 2ee1be4: f9400100     	ldr	x0, [x8]
 2ee1be8: 97ebd524     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee1bec: aa1f03e1     	mov	x1, xzr
 2ee1bf0: aa0003f4     	mov	x20, x0
 2ee1bf4: 97fdd0d7     	bl	0x2e55f50 <__start_il2cpp+0x38d93c>
 2ee1bf8: f8038e74     	str	x20, [x19, #0x38]!
 2ee1bfc: aa1303e0     	mov	x0, x19
 2ee1c00: aa1403e1     	mov	x1, x20
 2ee1c04: 97ebd462     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1c08: 2a1f03e0     	mov	w0, wzr
 2ee1c0c: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2ee1c10: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2ee1c14: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2ee1c18: f84407fe     	ldr	x30, [sp], #0x40
 2ee1c1c: d65f03c0     	ret
 2ee1c20: aa1403e0     	mov	x0, x20
 2ee1c24: aa1f03e1     	mov	x1, xzr
 2ee1c28: 94b19f46     	bl	0x5b49940 <__start_il2cpp+0x308132c>
 2ee1c2c: 9001a188     	adrp	x8, 0x6311000
 2ee1c30: f9469908     	ldr	x8, [x8, #0xd30]
 2ee1c34: f9400101     	ldr	x1, [x8]
 2ee1c38: 9417f805     	bl	0x34dfc4c <__start_il2cpp+0xa17638>
 2ee1c3c: 17ffff83     	b	0x2ee1a48 <__start_il2cpp+0x419434>
 2ee1c40: 97ebd512     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardDataPiece :: System.Void DeleteLocalData()
# VA 0x2ee1c44 .. 0x2ee1d04 (next mapped method entry)
 2ee1c44: f81d0ffe     	str	x30, [sp, #-0x30]!
 2ee1c48: a90157f6     	stp	x22, x21, [sp, #0x10]
 2ee1c4c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2ee1c50: f001c196     	adrp	x22, 0x6714000
 2ee1c54: 9001a194     	adrp	x20, 0x6311000
 2ee1c58: d001a095     	adrp	x21, 0x62f3000
 2ee1c5c: 394e96c8     	ldrb	w8, [x22, #0x3a5]
 2ee1c60: f9468a94     	ldr	x20, [x20, #0xd10]
 2ee1c64: f946b6b5     	ldr	x21, [x21, #0xd68]
 2ee1c68: aa0003f3     	mov	x19, x0
 2ee1c6c: 37000188     	tbnz	w8, #0x0, 0x2ee1c9c <__start_il2cpp+0x419688>
 2ee1c70: 9001a180     	adrp	x0, 0x6311000
 2ee1c74: f9468800     	ldr	x0, [x0, #0xd10]
 2ee1c78: 97ebd45a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1c7c: d001a080     	adrp	x0, 0x62f3000
 2ee1c80: f946b400     	ldr	x0, [x0, #0xd68]
 2ee1c84: 97ebd457     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1c88: 9001a180     	adrp	x0, 0x6311000
 2ee1c8c: f9469400     	ldr	x0, [x0, #0xd28]
 2ee1c90: 97ebd454     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1c94: 52800028     	mov	w8, #0x1                // =1
 2ee1c98: 390e96c8     	strb	w8, [x22, #0x3a5]
 2ee1c9c: 9001a196     	adrp	x22, 0x6311000
 2ee1ca0: f94696d6     	ldr	x22, [x22, #0xd28]
 2ee1ca4: f9400280     	ldr	x0, [x20]
 2ee1ca8: 97ebd4f4     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee1cac: aa1f03e1     	mov	x1, xzr
 2ee1cb0: aa0003f4     	mov	x20, x0
 2ee1cb4: 97fdd0a7     	bl	0x2e55f50 <__start_il2cpp+0x38d93c>
 2ee1cb8: aa1303e0     	mov	x0, x19
 2ee1cbc: aa1403e1     	mov	x1, x20
 2ee1cc0: f8038c14     	str	x20, [x0, #0x38]!
 2ee1cc4: 97ebd432     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ee1cc8: f94002a0     	ldr	x0, [x21]
 2ee1ccc: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1cd0: 35000048     	cbnz	w8, 0x2ee1cd8 <__start_il2cpp+0x4196c4>
 2ee1cd4: 97ebd4a2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1cd8: f94002c0     	ldr	x0, [x22]
 2ee1cdc: aa1f03e1     	mov	x1, xzr
 2ee1ce0: 97f1313f     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2ee1ce4: f9401a60     	ldr	x0, [x19, #0x30]
 2ee1ce8: b40000c0     	cbz	x0, 0x2ee1d00 <__start_il2cpp+0x4196ec>
 2ee1cec: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2ee1cf0: aa1f03e1     	mov	x1, xzr
 2ee1cf4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2ee1cf8: f84307fe     	ldr	x30, [sp], #0x30
 2ee1cfc: 17f5b150     	b	0x2c4e23c <__start_il2cpp+0x185c28>
 2ee1d00: 97ebd4e2     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardDataPiece :: System.Boolean IsDirty()
# VA 0x2ee1d04 .. 0x2ee1d0c (next mapped method entry)
 2ee1d04: 52800020     	mov	w0, #0x1                // =1
 2ee1d08: d65f03c0     	ret

# BoardDataPiece :: System.Void SerializeToLocal()
# VA 0x2ee1d0c .. 0x2ee1e20 (next mapped method entry)
 2ee1d0c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2ee1d10: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2ee1d14: f001c194     	adrp	x20, 0x6714000
 2ee1d18: aa0003f3     	mov	x19, x0
 2ee1d1c: 394e9a88     	ldrb	w8, [x20, #0x3a6]
 2ee1d20: 370002a8     	tbnz	w8, #0x0, 0x2ee1d74 <__start_il2cpp+0x419760>
 2ee1d24: 9001a180     	adrp	x0, 0x6311000
 2ee1d28: f946b800     	ldr	x0, [x0, #0xd70]
 2ee1d2c: 97ebd42d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1d30: d001a080     	adrp	x0, 0x62f3000
 2ee1d34: f946b400     	ldr	x0, [x0, #0xd68]
 2ee1d38: 97ebd42a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1d3c: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1d40: f946e800     	ldr	x0, [x0, #0xdd0]
 2ee1d44: 97ebd427     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1d48: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1d4c: f946f000     	ldr	x0, [x0, #0xde0]
 2ee1d50: 97ebd424     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1d54: 9001a180     	adrp	x0, 0x6311000
 2ee1d58: f946bc00     	ldr	x0, [x0, #0xd78]
 2ee1d5c: 97ebd421     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1d60: 9001a180     	adrp	x0, 0x6311000
 2ee1d64: f9469400     	ldr	x0, [x0, #0xd28]
 2ee1d68: 97ebd41e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ee1d6c: 52800028     	mov	w8, #0x1                // =1
 2ee1d70: 390e9a88     	strb	w8, [x20, #0x3a6]
 2ee1d74: f9401e73     	ldr	x19, [x19, #0x38]
 2ee1d78: b4000533     	cbz	x19, 0x2ee1e1c <__start_il2cpp+0x419808>
 2ee1d7c: f9401e68     	ldr	x8, [x19, #0x38]
 2ee1d80: b4000248     	cbz	x8, 0x2ee1dc8 <__start_il2cpp+0x4197b4>
 2ee1d84: d001a088     	adrp	x8, 0x62f3000
 2ee1d88: 9001a194     	adrp	x20, 0x6311000
 2ee1d8c: 9001a195     	adrp	x21, 0x6311000
 2ee1d90: f946b508     	ldr	x8, [x8, #0xd68]
 2ee1d94: f9400100     	ldr	x0, [x8]
 2ee1d98: f9469694     	ldr	x20, [x20, #0xd28]
 2ee1d9c: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1da0: f946bab5     	ldr	x21, [x21, #0xd70]
 2ee1da4: 35000048     	cbnz	w8, 0x2ee1dac <__start_il2cpp+0x419798>
 2ee1da8: 97ebd46d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1dac: f9400280     	ldr	x0, [x20]
 2ee1db0: aa1303e1     	mov	x1, x19
 2ee1db4: f94002a3     	ldr	x3, [x21]
 2ee1db8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee1dbc: 2a1f03e2     	mov	w2, wzr
 2ee1dc0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee1dc4: 141387ae     	b	0x33c3c7c <__start_il2cpp+0x8fb668>
 2ee1dc8: f001a068     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1dcc: f946f108     	ldr	x8, [x8, #0xde0]
 2ee1dd0: f9400100     	ldr	x0, [x8]
 2ee1dd4: 97ebd4a9     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2ee1dd8: 9001a188     	adrp	x8, 0x6311000
 2ee1ddc: aa1f03e2     	mov	x2, xzr
 2ee1de0: aa0003f3     	mov	x19, x0
 2ee1de4: f946bd08     	ldr	x8, [x8, #0xd78]
 2ee1de8: f9400101     	ldr	x1, [x8]
 2ee1dec: 94898bf0     	bl	0x5144dac <__start_il2cpp+0x267c798>
 2ee1df0: f001a068     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1df4: f946e908     	ldr	x8, [x8, #0xdd0]
 2ee1df8: f9400100     	ldr	x0, [x8]
 2ee1dfc: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1e00: 35000048     	cbnz	w8, 0x2ee1e08 <__start_il2cpp+0x4197f4>
 2ee1e04: 97ebd456     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1e08: aa1303e0     	mov	x0, x19
 2ee1e0c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2ee1e10: aa1f03e1     	mov	x1, xzr
 2ee1e14: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2ee1e18: 14b0557c     	b	0x5af7408 <__start_il2cpp+0x302edf4>
 2ee1e1c: 97ebd49b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardDataPiece :: System.Void TriggerUpdate()
# VA 0x2ee1e20 .. 0x2ee1edc (next mapped method entry)
 2ee1e20: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2ee1e24: f9401408     	ldr	x8, [x0, #0x28]
 2ee1e28: b40000a8     	cbz	x8, 0x2ee1e3c <__start_il2cpp+0x419828>
 2ee1e2c: f9402100     	ldr	x0, [x8, #0x40]
 2ee1e30: f9401501     	ldr	x1, [x8, #0x28]
 2ee1e34: f9400d09     	ldr	x9, [x8, #0x18]
 2ee1e38: d63f0120     	blr	x9
 2ee1e3c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2ee1e40: d65f03c0     	ret
 2ee1e44: 7100043f     	cmp	w1, #0x1
 2ee1e48: aa0003f3     	mov	x19, x0
 2ee1e4c: 54000421     	b.ne	0x2ee1ed0 <__start_il2cpp+0x4198bc>
 2ee1e50: aa1303e0     	mov	x0, x19
 2ee1e54: 94c1123b     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ee1e58: aa0003f3     	mov	x19, x0
 2ee1e5c: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1e60: f946f000     	ldr	x0, [x0, #0xde0]
 2ee1e64: 97ebd3e4     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ee1e68: f9400268     	ldr	x8, [x19]
 2ee1e6c: f9400101     	ldr	x1, [x8]
 2ee1e70: 97ebd588     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2ee1e74: 360001a0     	tbz	w0, #0x0, 0x2ee1ea8 <__start_il2cpp+0x419894>
 2ee1e78: f9400273     	ldr	x19, [x19]
 2ee1e7c: 94c11235     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ee1e80: f001a060     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ee1e84: f946e800     	ldr	x0, [x0, #0xdd0]
 2ee1e88: 97ebd3db     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ee1e8c: b940e408     	ldr	w8, [x0, #0xe4]
 2ee1e90: 35000048     	cbnz	w8, 0x2ee1e98 <__start_il2cpp+0x419884>
 2ee1e94: 97ebd432     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ee1e98: aa1303e0     	mov	x0, x19
 2ee1e9c: aa1f03e1     	mov	x1, xzr
 2ee1ea0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2ee1ea4: 14b05559     	b	0x5af7408 <__start_il2cpp+0x302edf4>
 2ee1ea8: 52800100     	mov	w0, #0x8                // =8
 2ee1eac: 94c11245     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2ee1eb0: f9400268     	ldr	x8, [x19]
 2ee1eb4: f9000008     	str	x8, [x0]
 2ee1eb8: f0018241     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2ee1ebc: 91302021     	add	x1, x1, #0xc08
 2ee1ec0: aa1f03e2     	mov	x2, xzr
 2ee1ec4: 94c11243     	bl	0x5f267d0 <__cxa_throw@plt>
 2ee1ec8: aa0003f3     	mov	x19, x0
 2ee1ecc: 94c11221     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ee1ed0: aa1303e0     	mov	x0, x19
 2ee1ed4: 97ef8a02     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ee1ed8: 97df0edd     	bl	0x26a5a4c <.text+0x8ec>
