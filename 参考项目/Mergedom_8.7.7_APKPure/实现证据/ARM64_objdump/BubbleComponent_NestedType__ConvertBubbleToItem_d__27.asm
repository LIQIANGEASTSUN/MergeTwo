
# BubbleComponent+_ConvertBubbleToItem_d__27 :: System.Void MoveNext()
# VA 0x2ba1564 .. 0x2ba1fe0 (next mapped method entry)
 2ba1564: d10283ff     	sub	sp, sp, #0xa0
 2ba1568: a90667fe     	stp	x30, x25, [sp, #0x60]
 2ba156c: a9075ff8     	stp	x24, x23, [sp, #0x70]
 2ba1570: a90857f6     	stp	x22, x21, [sp, #0x80]
 2ba1574: a9094ff4     	stp	x20, x19, [sp, #0x90]
 2ba1578: b001db94     	adrp	x20, 0x6712000
 2ba157c: aa0003f3     	mov	x19, x0
 2ba1580: 39638688     	ldrb	w8, [x20, #0x8e1]
 2ba1584: 37000308     	tbnz	w8, #0x0, 0x2ba15e4 <__start_il2cpp+0xd8fd0>
 2ba1588: b001bac0     	adrp	x0, 0x62fa000
 2ba158c: f9406400     	ldr	x0, [x0, #0xc8]
 2ba1590: 97f8d614     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1594: b001bac0     	adrp	x0, 0x62fa000
 2ba1598: f9404400     	ldr	x0, [x0, #0x88]
 2ba159c: 97f8d611     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba15a0: b001bac0     	adrp	x0, 0x62fa000
 2ba15a4: f9406800     	ldr	x0, [x0, #0xd0]
 2ba15a8: 97f8d60e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba15ac: d001ba80     	adrp	x0, 0x62f3000
 2ba15b0: f9479000     	ldr	x0, [x0, #0xf20]
 2ba15b4: 97f8d60b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba15b8: 9001bac0     	adrp	x0, 0x62f9000
 2ba15bc: f9474800     	ldr	x0, [x0, #0xe90]
 2ba15c0: 97f8d608     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba15c4: b001bac0     	adrp	x0, 0x62fa000
 2ba15c8: f9406c00     	ldr	x0, [x0, #0xd8]
 2ba15cc: 97f8d605     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba15d0: d001ba80     	adrp	x0, 0x62f3000
 2ba15d4: f9467000     	ldr	x0, [x0, #0xce0]
 2ba15d8: 97f8d602     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba15dc: 52800028     	mov	w8, #0x1                // =1
 2ba15e0: 39238688     	strb	w8, [x20, #0x8e1]
 2ba15e4: 9001bad7     	adrp	x23, 0x62f9000
 2ba15e8: d001ba99     	adrp	x25, 0x62f3000
 2ba15ec: b001db98     	adrp	x24, 0x6712000
 2ba15f0: f9474af7     	ldr	x23, [x23, #0xe90]
 2ba15f4: f90027ff     	str	xzr, [sp, #0x48]
 2ba15f8: f9467339     	ldr	x25, [x25, #0xce0]
 2ba15fc: b9400268     	ldr	w8, [x19]
 2ba1600: f9401674     	ldr	x20, [x19, #0x28]
 2ba1604: a903ffff     	stp	xzr, xzr, [sp, #0x38]
 2ba1608: f9001bff     	str	xzr, [sp, #0x30]
 2ba160c: b9002bff     	str	wzr, [sp, #0x28]
 2ba1610: 34000128     	cbz	w8, 0x2ba1634 <__start_il2cpp+0xd9020>
 2ba1614: 7100051f     	cmp	w8, #0x1
 2ba1618: 54000501     	b.ne	0x2ba16b8 <__start_il2cpp+0xd90a4>
 2ba161c: 3cc48260     	ldur	q0, [x19, #0x48]
 2ba1620: 12800008     	mov	w8, #-0x1               // =-1
 2ba1624: a904fe7f     	stp	xzr, xzr, [x19, #0x48]
 2ba1628: b9000268     	str	w8, [x19]
 2ba162c: 3d8013e0     	str	q0, [sp, #0x40]
 2ba1630: 140000d8     	b	0x2ba1990 <__start_il2cpp+0xd937c>
 2ba1634: 3cc48260     	ldur	q0, [x19, #0x48]
 2ba1638: 12800008     	mov	w8, #-0x1               // =-1
 2ba163c: a904fe7f     	stp	xzr, xzr, [x19, #0x48]
 2ba1640: b9000268     	str	w8, [x19]
 2ba1644: 3d8013e0     	str	q0, [sp, #0x40]
 2ba1648: 39528708     	ldrb	w8, [x24, #0x4a1]
 2ba164c: 350000c8     	cbnz	w8, 0x2ba1664 <__start_il2cpp+0xd9050>
 2ba1650: d001ba80     	adrp	x0, 0x62f3000
 2ba1654: f947e000     	ldr	x0, [x0, #0xfc0]
 2ba1658: 97f8d5e2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba165c: 52800028     	mov	w8, #0x1                // =1
 2ba1660: 39128708     	strb	w8, [x24, #0x4a1]
 2ba1664: f94023f5     	ldr	x21, [sp, #0x40]
 2ba1668: b4000ad5     	cbz	x21, 0x2ba17c0 <__start_il2cpp+0xd91ac>
 2ba166c: d001ba8a     	adrp	x10, 0x62f3000
 2ba1670: f94002a8     	ldr	x8, [x21]
 2ba1674: f947e14a     	ldr	x10, [x10, #0xfc0]
 2ba1678: 794093f6     	ldrh	w22, [sp, #0x48]
 2ba167c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba1680: f9400141     	ldr	x1, [x10]
 2ba1684: b4000129     	cbz	x9, 0x2ba16a8 <__start_il2cpp+0xd9094>
 2ba1688: f940590a     	ldr	x10, [x8, #0xb0]
 2ba168c: 9100214a     	add	x10, x10, #0x8
 2ba1690: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba1694: eb01017f     	cmp	x11, x1
 2ba1698: 54000840     	b.eq	0x2ba17a0 <__start_il2cpp+0xd918c>
 2ba169c: f1000529     	subs	x9, x9, #0x1
 2ba16a0: 9100414a     	add	x10, x10, #0x10
 2ba16a4: 54ffff61     	b.ne	0x2ba1690 <__start_il2cpp+0xd907c>
 2ba16a8: aa1503e0     	mov	x0, x21
 2ba16ac: 52800042     	mov	w2, #0x2                // =2
 2ba16b0: 97f9b32d     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba16b4: 1400003f     	b	0x2ba17b0 <__start_il2cpp+0xd919c>
 2ba16b8: b4002a74     	cbz	x20, 0x2ba1c04 <__start_il2cpp+0xd95f0>
 2ba16bc: 39422288     	ldrb	w8, [x20, #0x88]
 2ba16c0: 34000828     	cbz	w8, 0x2ba17c4 <__start_il2cpp+0xd91b0>
 2ba16c4: aa1403e0     	mov	x0, x20
 2ba16c8: 97ffff37     	bl	0x2ba13a4 <__start_il2cpp+0xd8d90>
 2ba16cc: aa0003f5     	mov	x21, x0
 2ba16d0: f9400320     	ldr	x0, [x25]
 2ba16d4: aa0103f6     	mov	x22, x1
 2ba16d8: b940e408     	ldr	w8, [x0, #0xe4]
 2ba16dc: 35000048     	cbnz	w8, 0x2ba16e4 <__start_il2cpp+0xd90d0>
 2ba16e0: 97f8d61f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba16e4: a9055bf5     	stp	x21, x22, [sp, #0x50]
 2ba16e8: 910143e0     	add	x0, sp, #0x50
 2ba16ec: aa1f03e1     	mov	x1, xzr
 2ba16f0: 97f8d5a7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba16f4: b001db95     	adrp	x21, 0x6712000
 2ba16f8: 3dc017e0     	ldr	q0, [sp, #0x50]
 2ba16fc: 39527ea8     	ldrb	w8, [x21, #0x49f]
 2ba1700: 3d8013e0     	str	q0, [sp, #0x40]
 2ba1704: 350000c8     	cbnz	w8, 0x2ba171c <__start_il2cpp+0xd9108>
 2ba1708: d001ba80     	adrp	x0, 0x62f3000
 2ba170c: f9467000     	ldr	x0, [x0, #0xce0]
 2ba1710: 97f8d5b4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1714: 52800028     	mov	w8, #0x1                // =1
 2ba1718: 39127ea8     	strb	w8, [x21, #0x49f]
 2ba171c: f9400320     	ldr	x0, [x25]
 2ba1720: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1724: 35000048     	cbnz	w8, 0x2ba172c <__start_il2cpp+0xd9118>
 2ba1728: 97f8d60d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba172c: b001db95     	adrp	x21, 0x6712000
 2ba1730: 395282a8     	ldrb	w8, [x21, #0x4a0]
 2ba1734: 350000c8     	cbnz	w8, 0x2ba174c <__start_il2cpp+0xd9138>
 2ba1738: d001ba80     	adrp	x0, 0x62f3000
 2ba173c: f947e000     	ldr	x0, [x0, #0xfc0]
 2ba1740: 97f8d5a8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1744: 52800028     	mov	w8, #0x1                // =1
 2ba1748: 391282a8     	strb	w8, [x21, #0x4a0]
 2ba174c: f94023f5     	ldr	x21, [sp, #0x40]
 2ba1750: b4fff7d5     	cbz	x21, 0x2ba1648 <__start_il2cpp+0xd9034>
 2ba1754: d001ba8a     	adrp	x10, 0x62f3000
 2ba1758: f94002a8     	ldr	x8, [x21]
 2ba175c: f947e14a     	ldr	x10, [x10, #0xfc0]
 2ba1760: 794093f6     	ldrh	w22, [sp, #0x48]
 2ba1764: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba1768: f9400141     	ldr	x1, [x10]
 2ba176c: b4000129     	cbz	x9, 0x2ba1790 <__start_il2cpp+0xd917c>
 2ba1770: f940590a     	ldr	x10, [x8, #0xb0]
 2ba1774: 9100214a     	add	x10, x10, #0x8
 2ba1778: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba177c: eb01017f     	cmp	x11, x1
 2ba1780: 54002060     	b.eq	0x2ba1b8c <__start_il2cpp+0xd9578>
 2ba1784: f1000529     	subs	x9, x9, #0x1
 2ba1788: 9100414a     	add	x10, x10, #0x10
 2ba178c: 54ffff61     	b.ne	0x2ba1778 <__start_il2cpp+0xd9164>
 2ba1790: aa1503e0     	mov	x0, x21
 2ba1794: 2a1f03e2     	mov	w2, wzr
 2ba1798: 97f9b2f3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba179c: 140000ff     	b	0x2ba1b98 <__start_il2cpp+0xd9584>
 2ba17a0: b9400149     	ldr	w9, [x10]
 2ba17a4: 11000929     	add	w9, w9, #0x2
 2ba17a8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba17ac: 9104e100     	add	x0, x8, #0x138
 2ba17b0: a9400808     	ldp	x8, x2, [x0]
 2ba17b4: aa1503e0     	mov	x0, x21
 2ba17b8: 2a1603e1     	mov	w1, w22
 2ba17bc: d63f0100     	blr	x8
 2ba17c0: b4002214     	cbz	x20, 0x2ba1c00 <__start_il2cpp+0xd95ec>
 2ba17c4: b001bac8     	adrp	x8, 0x62fa000
 2ba17c8: f9406908     	ldr	x8, [x8, #0xd0]
 2ba17cc: f9400101     	ldr	x1, [x8]
 2ba17d0: aa1403e0     	mov	x0, x20
 2ba17d4: 941ffccf     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2ba17d8: aa0003e1     	mov	x1, x0
 2ba17dc: aa1303f5     	mov	x21, x19
 2ba17e0: f8038ea1     	str	x1, [x21, #0x38]!
 2ba17e4: aa1503e0     	mov	x0, x21
 2ba17e8: 97f8d569     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba17ec: f94002e0     	ldr	x0, [x23]
 2ba17f0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba17f4: 35000068     	cbnz	w8, 0x2ba1800 <__start_il2cpp+0xd91ec>
 2ba17f8: 97f8d5d9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba17fc: f94002e0     	ldr	x0, [x23]
 2ba1800: f9405c08     	ldr	x8, [x0, #0xb8]
 2ba1804: f9400508     	ldr	x8, [x8, #0x8]
 2ba1808: b4001f68     	cbz	x8, 0x2ba1bf4 <__start_il2cpp+0xd95e0>
 2ba180c: f94002a1     	ldr	x1, [x21]
 2ba1810: f9402100     	ldr	x0, [x8, #0x40]
 2ba1814: f9400d09     	ldr	x9, [x8, #0x18]
 2ba1818: f9401503     	ldr	x3, [x8, #0x28]
 2ba181c: aa1f03e2     	mov	x2, xzr
 2ba1820: d63f0120     	blr	x9
 2ba1824: aa1403e0     	mov	x0, x20
 2ba1828: 97fffdfa     	bl	0x2ba1010 <__start_il2cpp+0xd89fc>
 2ba182c: f94002a8     	ldr	x8, [x21]
 2ba1830: b4001e48     	cbz	x8, 0x2ba1bf8 <__start_il2cpp+0xd95e4>
 2ba1834: f9402d01     	ldr	x1, [x8, #0x58]
 2ba1838: 29460e62     	ldp	w2, w3, [x19, #0x30]
 2ba183c: aa1403e0     	mov	x0, x20
 2ba1840: 97fffe63     	bl	0x2ba11cc <__start_il2cpp+0xd8bb8>
 2ba1844: aa0003e1     	mov	x1, x0
 2ba1848: aa1303f5     	mov	x21, x19
 2ba184c: f8040ea1     	str	x1, [x21, #0x40]!
 2ba1850: aa1503e0     	mov	x0, x21
 2ba1854: 97f8d54e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1858: f94002a1     	ldr	x1, [x21]
 2ba185c: f9401295     	ldr	x21, [x20, #0x20]
 2ba1860: f9001fe1     	str	x1, [sp, #0x38]
 2ba1864: 9100e3e0     	add	x0, sp, #0x38
 2ba1868: 97f8d549     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba186c: b4001c95     	cbz	x21, 0x2ba1bfc <__start_il2cpp+0xd95e8>
 2ba1870: b001bac8     	adrp	x8, 0x62fa000
 2ba1874: f9406d08     	ldr	x8, [x8, #0xd8]
 2ba1878: f9401fe1     	ldr	x1, [sp, #0x38]
 2ba187c: f9400102     	ldr	x2, [x8]
 2ba1880: aa1503e0     	mov	x0, x21
 2ba1884: 942a06a4     	bl	0x3623314 <__start_il2cpp+0xb5ad00>
 2ba1888: f9400320     	ldr	x0, [x25]
 2ba188c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1890: 35000048     	cbnz	w8, 0x2ba1898 <__start_il2cpp+0xd9284>
 2ba1894: 97f8d5b2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1898: 52800d20     	mov	w0, #0x69               // =105
 2ba189c: 2a1f03e1     	mov	w1, wzr
 2ba18a0: 52800102     	mov	w2, #0x8                // =8
 2ba18a4: aa1f03e3     	mov	x3, xzr
 2ba18a8: 2a1f03e4     	mov	w4, wzr
 2ba18ac: aa1f03e5     	mov	x5, xzr
 2ba18b0: 94b66fe1     	bl	0x593d834 <__start_il2cpp+0x2e75220>
 2ba18b4: a90507e0     	stp	x0, x1, [sp, #0x50]
 2ba18b8: 910143e0     	add	x0, sp, #0x50
 2ba18bc: aa1f03e1     	mov	x1, xzr
 2ba18c0: 97f8d533     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba18c4: b001db95     	adrp	x21, 0x6712000
 2ba18c8: 3dc017e0     	ldr	q0, [sp, #0x50]
 2ba18cc: 39527ea8     	ldrb	w8, [x21, #0x49f]
 2ba18d0: 3d8013e0     	str	q0, [sp, #0x40]
 2ba18d4: 350000c8     	cbnz	w8, 0x2ba18ec <__start_il2cpp+0xd92d8>
 2ba18d8: d001ba80     	adrp	x0, 0x62f3000
 2ba18dc: f9467000     	ldr	x0, [x0, #0xce0]
 2ba18e0: 97f8d540     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba18e4: 52800028     	mov	w8, #0x1                // =1
 2ba18e8: 39127ea8     	strb	w8, [x21, #0x49f]
 2ba18ec: f9400320     	ldr	x0, [x25]
 2ba18f0: b940e408     	ldr	w8, [x0, #0xe4]
 2ba18f4: 35000048     	cbnz	w8, 0x2ba18fc <__start_il2cpp+0xd92e8>
 2ba18f8: 97f8d599     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba18fc: b001db95     	adrp	x21, 0x6712000
 2ba1900: 395282a8     	ldrb	w8, [x21, #0x4a0]
 2ba1904: 350000c8     	cbnz	w8, 0x2ba191c <__start_il2cpp+0xd9308>
 2ba1908: d001ba80     	adrp	x0, 0x62f3000
 2ba190c: f947e000     	ldr	x0, [x0, #0xfc0]
 2ba1910: 97f8d534     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba1914: 52800028     	mov	w8, #0x1                // =1
 2ba1918: 391282a8     	strb	w8, [x21, #0x4a0]
 2ba191c: f94023f5     	ldr	x21, [sp, #0x40]
 2ba1920: b4000395     	cbz	x21, 0x2ba1990 <__start_il2cpp+0xd937c>
 2ba1924: d001ba8a     	adrp	x10, 0x62f3000
 2ba1928: f94002a8     	ldr	x8, [x21]
 2ba192c: f947e14a     	ldr	x10, [x10, #0xfc0]
 2ba1930: 794093f6     	ldrh	w22, [sp, #0x48]
 2ba1934: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba1938: f9400141     	ldr	x1, [x10]
 2ba193c: b4000129     	cbz	x9, 0x2ba1960 <__start_il2cpp+0xd934c>
 2ba1940: f940590a     	ldr	x10, [x8, #0xb0]
 2ba1944: 9100214a     	add	x10, x10, #0x8
 2ba1948: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba194c: eb01017f     	cmp	x11, x1
 2ba1950: 54000100     	b.eq	0x2ba1970 <__start_il2cpp+0xd935c>
 2ba1954: f1000529     	subs	x9, x9, #0x1
 2ba1958: 9100414a     	add	x10, x10, #0x10
 2ba195c: 54ffff61     	b.ne	0x2ba1948 <__start_il2cpp+0xd9334>
 2ba1960: aa1503e0     	mov	x0, x21
 2ba1964: 2a1f03e2     	mov	w2, wzr
 2ba1968: 97f9b27f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba196c: 14000004     	b	0x2ba197c <__start_il2cpp+0xd9368>
 2ba1970: b9800149     	ldrsw	x9, [x10]
 2ba1974: 8b091108     	add	x8, x8, x9, lsl #4
 2ba1978: 9104e100     	add	x0, x8, #0x138
 2ba197c: a9400808     	ldp	x8, x2, [x0]
 2ba1980: aa1503e0     	mov	x0, x21
 2ba1984: 2a1603e1     	mov	w1, w22
 2ba1988: d63f0100     	blr	x8
 2ba198c: 34000e20     	cbz	w0, 0x2ba1b50 <__start_il2cpp+0xd953c>
 2ba1990: 39528708     	ldrb	w8, [x24, #0x4a1]
 2ba1994: 350000c8     	cbnz	w8, 0x2ba19ac <__start_il2cpp+0xd9398>
 2ba1998: d001ba80     	adrp	x0, 0x62f3000
 2ba199c: f947e000     	ldr	x0, [x0, #0xfc0]
 2ba19a0: 97f8d510     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2ba19a4: 52800028     	mov	w8, #0x1                // =1
 2ba19a8: 39128708     	strb	w8, [x24, #0x4a1]
 2ba19ac: f94023f5     	ldr	x21, [sp, #0x40]
 2ba19b0: b4000395     	cbz	x21, 0x2ba1a20 <__start_il2cpp+0xd940c>
 2ba19b4: d001ba8a     	adrp	x10, 0x62f3000
 2ba19b8: f94002a8     	ldr	x8, [x21]
 2ba19bc: f947e14a     	ldr	x10, [x10, #0xfc0]
 2ba19c0: 794093f6     	ldrh	w22, [sp, #0x48]
 2ba19c4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba19c8: f9400141     	ldr	x1, [x10]
 2ba19cc: b4000129     	cbz	x9, 0x2ba19f0 <__start_il2cpp+0xd93dc>
 2ba19d0: f940590a     	ldr	x10, [x8, #0xb0]
 2ba19d4: 9100214a     	add	x10, x10, #0x8
 2ba19d8: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba19dc: eb01017f     	cmp	x11, x1
 2ba19e0: 54000100     	b.eq	0x2ba1a00 <__start_il2cpp+0xd93ec>
 2ba19e4: f1000529     	subs	x9, x9, #0x1
 2ba19e8: 9100414a     	add	x10, x10, #0x10
 2ba19ec: 54ffff61     	b.ne	0x2ba19d8 <__start_il2cpp+0xd93c4>
 2ba19f0: aa1503e0     	mov	x0, x21
 2ba19f4: 52800042     	mov	w2, #0x2                // =2
 2ba19f8: 97f9b25b     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba19fc: 14000005     	b	0x2ba1a10 <__start_il2cpp+0xd93fc>
 2ba1a00: b9400149     	ldr	w9, [x10]
 2ba1a04: 11000929     	add	w9, w9, #0x2
 2ba1a08: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba1a0c: 9104e100     	add	x0, x8, #0x138
 2ba1a10: a9400808     	ldp	x8, x2, [x0]
 2ba1a14: aa1503e0     	mov	x0, x21
 2ba1a18: 2a1603e1     	mov	w1, w22
 2ba1a1c: d63f0100     	blr	x8
 2ba1a20: f94002e0     	ldr	x0, [x23]
 2ba1a24: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1a28: 35000068     	cbnz	w8, 0x2ba1a34 <__start_il2cpp+0xd9420>
 2ba1a2c: 97f8d54c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1a30: f94002e0     	ldr	x0, [x23]
 2ba1a34: f9405c08     	ldr	x8, [x0, #0xb8]
 2ba1a38: f9400908     	ldr	x8, [x8, #0x10]
 2ba1a3c: b4000d48     	cbz	x8, 0x2ba1be4 <__start_il2cpp+0xd95d0>
 2ba1a40: f8440261     	ldur	x1, [x19, #0x40]
 2ba1a44: f9402100     	ldr	x0, [x8, #0x40]
 2ba1a48: f9400d09     	ldr	x9, [x8, #0x18]
 2ba1a4c: f9401503     	ldr	x3, [x8, #0x28]
 2ba1a50: aa1f03e2     	mov	x2, xzr
 2ba1a54: d63f0120     	blr	x9
 2ba1a58: b4000c94     	cbz	x20, 0x2ba1be8 <__start_il2cpp+0xd95d4>
 2ba1a5c: f9403a80     	ldr	x0, [x20, #0x70]
 2ba1a60: b4000c60     	cbz	x0, 0x2ba1bec <__start_il2cpp+0xd95d8>
 2ba1a64: aa1f03e1     	mov	x1, xzr
 2ba1a68: 94050db5     	bl	0x2ce513c <__start_il2cpp+0x21cb28>
 2ba1a6c: f9401696     	ldr	x22, [x20, #0x28]
 2ba1a70: b4000c16     	cbz	x22, 0x2ba1bf0 <__start_il2cpp+0xd95dc>
 2ba1a74: d001ba8a     	adrp	x10, 0x62f3000
 2ba1a78: f94002c8     	ldr	x8, [x22]
 2ba1a7c: aa1303f5     	mov	x21, x19
 2ba1a80: f947914a     	ldr	x10, [x10, #0xf20]
 2ba1a84: f8438eb7     	ldr	x23, [x21, #0x38]!
 2ba1a88: 79425d09     	ldrh	w9, [x8, #0x12e]
 2ba1a8c: f9400141     	ldr	x1, [x10]
 2ba1a90: b4000129     	cbz	x9, 0x2ba1ab4 <__start_il2cpp+0xd94a0>
 2ba1a94: f940590a     	ldr	x10, [x8, #0xb0]
 2ba1a98: 9100214a     	add	x10, x10, #0x8
 2ba1a9c: f85f814b     	ldur	x11, [x10, #-0x8]
 2ba1aa0: eb01017f     	cmp	x11, x1
 2ba1aa4: 54000100     	b.eq	0x2ba1ac4 <__start_il2cpp+0xd94b0>
 2ba1aa8: f1000529     	subs	x9, x9, #0x1
 2ba1aac: 9100414a     	add	x10, x10, #0x10
 2ba1ab0: 54ffff61     	b.ne	0x2ba1a9c <__start_il2cpp+0xd9488>
 2ba1ab4: aa1603e0     	mov	x0, x22
 2ba1ab8: 52800062     	mov	w2, #0x3                // =3
 2ba1abc: 97f9b22a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2ba1ac0: 14000005     	b	0x2ba1ad4 <__start_il2cpp+0xd94c0>
 2ba1ac4: b9400149     	ldr	w9, [x10]
 2ba1ac8: 11000d29     	add	w9, w9, #0x3
 2ba1acc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2ba1ad0: 9104e100     	add	x0, x8, #0x138
 2ba1ad4: a9400c08     	ldp	x8, x3, [x0]
 2ba1ad8: aa1603e0     	mov	x0, x22
 2ba1adc: aa1703e1     	mov	x1, x23
 2ba1ae0: 2a1f03e2     	mov	w2, wzr
 2ba1ae4: d63f0100     	blr	x8
 2ba1ae8: f90002bf     	str	xzr, [x21]
 2ba1aec: aa1503e0     	mov	x0, x21
 2ba1af0: aa1f03e1     	mov	x1, xzr
 2ba1af4: 97f8d4a6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1af8: f804027f     	stur	xzr, [x19, #0x40]
 2ba1afc: 91010260     	add	x0, x19, #0x40
 2ba1b00: aa1f03e1     	mov	x1, xzr
 2ba1b04: 97f8d4a2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1b08: b001bac8     	adrp	x8, 0x62fa000
 2ba1b0c: 1280002a     	mov	w10, #-0x2              // =-2
 2ba1b10: aa1f03e1     	mov	x1, xzr
 2ba1b14: f9404508     	ldr	x8, [x8, #0x88]
 2ba1b18: f9400108     	ldr	x8, [x8]
 2ba1b1c: f9405d08     	ldr	x8, [x8, #0xb8]
 2ba1b20: b9400109     	ldr	w9, [x8]
 2ba1b24: 51000529     	sub	w9, w9, #0x1
 2ba1b28: b9000109     	str	w9, [x8]
 2ba1b2c: b800866a     	str	w10, [x19], #0x8
 2ba1b30: aa1303e0     	mov	x0, x19
 2ba1b34: 9491e2ba     	bl	0x501a61c <__start_il2cpp+0x2552008>
 2ba1b38: a9494ff4     	ldp	x20, x19, [sp, #0x90]
 2ba1b3c: a94857f6     	ldp	x22, x21, [sp, #0x80]
 2ba1b40: a9475ff8     	ldp	x24, x23, [sp, #0x70]
 2ba1b44: a94667fe     	ldp	x30, x25, [sp, #0x60]
 2ba1b48: 910283ff     	add	sp, sp, #0xa0
 2ba1b4c: d65f03c0     	ret
 2ba1b50: 3dc013e0     	ldr	q0, [sp, #0x40]
 2ba1b54: 52800028     	mov	w8, #0x1                // =1
 2ba1b58: b9000268     	str	w8, [x19]
 2ba1b5c: 3c848260     	stur	q0, [x19, #0x48]
 2ba1b60: 91012260     	add	x0, x19, #0x48
 2ba1b64: aa1f03e1     	mov	x1, xzr
 2ba1b68: 97f8d489     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1b6c: b001bac8     	adrp	x8, 0x62fa000
 2ba1b70: f9406508     	ldr	x8, [x8, #0xc8]
 2ba1b74: f9400103     	ldr	x3, [x8]
 2ba1b78: 91002260     	add	x0, x19, #0x8
 2ba1b7c: 910103e1     	add	x1, sp, #0x40
 2ba1b80: aa1303e2     	mov	x2, x19
 2ba1b84: 941e0843     	bl	0x3323c90 <__start_il2cpp+0x85b67c>
 2ba1b88: 17ffffec     	b	0x2ba1b38 <__start_il2cpp+0xd9524>
 2ba1b8c: b9800149     	ldrsw	x9, [x10]
 2ba1b90: 8b091108     	add	x8, x8, x9, lsl #4
 2ba1b94: 9104e100     	add	x0, x8, #0x138
 2ba1b98: a9400808     	ldp	x8, x2, [x0]
 2ba1b9c: aa1503e0     	mov	x0, x21
 2ba1ba0: 2a1603e1     	mov	w1, w22
 2ba1ba4: d63f0100     	blr	x8
 2ba1ba8: 35ffd500     	cbnz	w0, 0x2ba1648 <__start_il2cpp+0xd9034>
 2ba1bac: 3dc013e0     	ldr	q0, [sp, #0x40]
 2ba1bb0: b900027f     	str	wzr, [x19]
 2ba1bb4: 3c848260     	stur	q0, [x19, #0x48]
 2ba1bb8: 91012260     	add	x0, x19, #0x48
 2ba1bbc: aa1f03e1     	mov	x1, xzr
 2ba1bc0: 97f8d473     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2ba1bc4: b001bac8     	adrp	x8, 0x62fa000
 2ba1bc8: f9406508     	ldr	x8, [x8, #0xc8]
 2ba1bcc: f9400103     	ldr	x3, [x8]
 2ba1bd0: 91002260     	add	x0, x19, #0x8
 2ba1bd4: 910103e1     	add	x1, sp, #0x40
 2ba1bd8: aa1303e2     	mov	x2, x19
 2ba1bdc: 941e082d     	bl	0x3323c90 <__start_il2cpp+0x85b67c>
 2ba1be0: 17ffffd6     	b	0x2ba1b38 <__start_il2cpp+0xd9524>
 2ba1be4: 97f8d529     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1be8: 97f8d528     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1bec: 97f8d527     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1bf0: 97f8d526     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1bf4: 97f8d525     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1bf8: 97f8d524     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1bfc: 97f8d523     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1c00: 97f8d522     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1c04: 97f8d521     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1c08: 1400001a     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c0c: 14000019     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c10: 14000018     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c14: 14000017     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c18: 14000016     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c1c: 14000015     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c20: 14000014     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c24: 14000013     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c28: 14000012     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c2c: 14000011     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c30: 14000010     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c34: 1400000f     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c38: 1400000e     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c3c: 1400000d     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c40: 1400000c     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c44: 1400000b     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c48: 1400000a     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c4c: 14000009     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c50: 14000008     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c54: 14000007     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c58: 14000006     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c5c: 14000005     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c60: 14000004     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c64: 14000003     	b	0x2ba1c70 <__start_il2cpp+0xd965c>
 2ba1c68: aa0003f5     	mov	x21, x0
 2ba1c6c: 14000002     	b	0x2ba1c74 <__start_il2cpp+0xd9660>
 2ba1c70: aa0003f5     	mov	x21, x0
 2ba1c74: 7100043f     	cmp	w1, #0x1
 2ba1c78: 54001621     	b.ne	0x2ba1f3c <__start_il2cpp+0xd9928>
 2ba1c7c: aa1503e0     	mov	x0, x21
 2ba1c80: 94ce12b0     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba1c84: aa0003f5     	mov	x21, x0
 2ba1c88: f001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba1c8c: f946f000     	ldr	x0, [x0, #0xde0]
 2ba1c90: 97f8d459     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1c94: f94002a8     	ldr	x8, [x21]
 2ba1c98: f9400101     	ldr	x1, [x8]
 2ba1c9c: 97f8d5fd     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2ba1ca0: 360010c0     	tbz	w0, #0x0, 0x2ba1eb8 <__start_il2cpp+0xd98a4>
 2ba1ca4: b9802bf8     	ldrsw	x24, [sp, #0x28]
 2ba1ca8: f94002b5     	ldr	x21, [x21]
 2ba1cac: 910063e8     	add	x8, sp, #0x18
 2ba1cb0: f8387915     	str	x21, [x8, x24, lsl #3]
 2ba1cb4: 11000708     	add	w8, w24, #0x1
 2ba1cb8: b9002be8     	str	w8, [sp, #0x28]
 2ba1cbc: 94ce12a5     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba1cc0: b40010f4     	cbz	x20, 0x2ba1edc <__start_il2cpp+0xd98c8>
 2ba1cc4: b001bac0     	adrp	x0, 0x62fa000
 2ba1cc8: f9407000     	ldr	x0, [x0, #0xe0]
 2ba1ccc: 97f8d44a     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1cd0: aa0003e2     	mov	x2, x0
 2ba1cd4: 9100c3e1     	add	x1, sp, #0x30
 2ba1cd8: aa1403e0     	mov	x0, x20
 2ba1cdc: 941ffed4     	bl	0x33a182c <__start_il2cpp+0x8d9218>
 2ba1ce0: f001ba79     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba1ce4: 2a0003f6     	mov	w22, w0
 2ba1ce8: f9470f39     	ldr	x25, [x25, #0xe18]
 2ba1cec: 360006c0     	tbz	w0, #0x0, 0x2ba1dc4 <__start_il2cpp+0xd97b0>
 2ba1cf0: f9401bf7     	ldr	x23, [sp, #0x30]
 2ba1cf4: f001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba1cf8: f9478c00     	ldr	x0, [x0, #0xf18]
 2ba1cfc: 97f8d43e     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1d00: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1d04: 35000048     	cbnz	w8, 0x2ba1d0c <__start_il2cpp+0xd96f8>
 2ba1d08: 97f8d495     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1d0c: aa1703e0     	mov	x0, x23
 2ba1d10: aa1f03e1     	mov	x1, xzr
 2ba1d14: aa1f03e2     	mov	x2, xzr
 2ba1d18: 94be8431     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2ba1d1c: 12000008     	and	w8, w0, #0x1
 2ba1d20: f9401720     	ldr	x0, [x25, #0x28]
 2ba1d24: 390043e8     	strb	w8, [sp, #0x10]
 2ba1d28: 910043e1     	add	x1, sp, #0x10
 2ba1d2c: 97f8d48e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba1d30: aa0003f7     	mov	x23, x0
 2ba1d34: b001bac0     	adrp	x0, 0x62fa000
 2ba1d38: f9407400     	ldr	x0, [x0, #0xe8]
 2ba1d3c: 97f8d42e     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1d40: aa1703e1     	mov	x1, x23
 2ba1d44: aa1f03e2     	mov	x2, xzr
 2ba1d48: 948f2a8a     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2ba1d4c: aa0003f7     	mov	x23, x0
 2ba1d50: f001ba80     	adrp	x0, 0x62f4000
 2ba1d54: f9466400     	ldr	x0, [x0, #0xcc8]
 2ba1d58: 97f8d427     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1d5c: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1d60: 35000048     	cbnz	w8, 0x2ba1d68 <__start_il2cpp+0xd9754>
 2ba1d64: 97f8d47e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1d68: aa1703e0     	mov	x0, x23
 2ba1d6c: aa1f03e1     	mov	x1, xzr
 2ba1d70: 97fe42c2     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba1d74: f9401be8     	ldr	x8, [sp, #0x30]
 2ba1d78: b4000b48     	cbz	x8, 0x2ba1ee0 <__start_il2cpp+0xd98cc>
 2ba1d7c: f9402d00     	ldr	x0, [x8, #0x58]
 2ba1d80: aa1f03e1     	mov	x1, xzr
 2ba1d84: aa1f03e2     	mov	x2, xzr
 2ba1d88: 94be921c     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2ba1d8c: 12000008     	and	w8, w0, #0x1
 2ba1d90: f9401720     	ldr	x0, [x25, #0x28]
 2ba1d94: 390033e8     	strb	w8, [sp, #0xc]
 2ba1d98: 910033e1     	add	x1, sp, #0xc
 2ba1d9c: 97f8d472     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba1da0: aa0003f7     	mov	x23, x0
 2ba1da4: b001bac0     	adrp	x0, 0x62fa000
 2ba1da8: f9407800     	ldr	x0, [x0, #0xf0]
 2ba1dac: 97f8d412     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1db0: aa1703e1     	mov	x1, x23
 2ba1db4: aa1f03e2     	mov	x2, xzr
 2ba1db8: 948f2a6e     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2ba1dbc: aa1f03e1     	mov	x1, xzr
 2ba1dc0: 97fe42ae     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba1dc4: f9401720     	ldr	x0, [x25, #0x28]
 2ba1dc8: 120002c8     	and	w8, w22, #0x1
 2ba1dcc: 390053e8     	strb	w8, [sp, #0x14]
 2ba1dd0: 910053e1     	add	x1, sp, #0x14
 2ba1dd4: 97f8d464     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba1dd8: aa0003f6     	mov	x22, x0
 2ba1ddc: b001bac0     	adrp	x0, 0x62fa000
 2ba1de0: f9407c00     	ldr	x0, [x0, #0xf8]
 2ba1de4: 97f8d404     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1de8: aa1603e1     	mov	x1, x22
 2ba1dec: aa1f03e2     	mov	x2, xzr
 2ba1df0: 948f2a60     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2ba1df4: aa0003f6     	mov	x22, x0
 2ba1df8: f001ba80     	adrp	x0, 0x62f4000
 2ba1dfc: f9466400     	ldr	x0, [x0, #0xcc8]
 2ba1e00: 97f8d3fd     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1e04: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1e08: 35000048     	cbnz	w8, 0x2ba1e10 <__start_il2cpp+0xd97fc>
 2ba1e0c: 97f8d454     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1e10: aa1603e0     	mov	x0, x22
 2ba1e14: aa1f03e1     	mov	x1, xzr
 2ba1e18: 97fe4298     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba1e1c: b9405a88     	ldr	w8, [x20, #0x58]
 2ba1e20: f9402720     	ldr	x0, [x25, #0x48]
 2ba1e24: b90013e8     	str	w8, [sp, #0x10]
 2ba1e28: 910043e1     	add	x1, sp, #0x10
 2ba1e2c: 97f8d44e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba1e30: aa0003f6     	mov	x22, x0
 2ba1e34: b001bac0     	adrp	x0, 0x62fa000
 2ba1e38: f9408000     	ldr	x0, [x0, #0x100]
 2ba1e3c: 97f8d3ee     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1e40: aa1603e1     	mov	x1, x22
 2ba1e44: aa1f03e2     	mov	x2, xzr
 2ba1e48: 948f2a4a     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2ba1e4c: aa1f03e1     	mov	x1, xzr
 2ba1e50: 97fe428a     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba1e54: b9405e88     	ldr	w8, [x20, #0x5c]
 2ba1e58: f9402720     	ldr	x0, [x25, #0x48]
 2ba1e5c: b9000fe8     	str	w8, [sp, #0xc]
 2ba1e60: 910033e1     	add	x1, sp, #0xc
 2ba1e64: 97f8d440     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2ba1e68: aa0003f4     	mov	x20, x0
 2ba1e6c: b001bac0     	adrp	x0, 0x62fa000
 2ba1e70: f9408400     	ldr	x0, [x0, #0x108]
 2ba1e74: 97f8d3e0     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1e78: aa1403e1     	mov	x1, x20
 2ba1e7c: aa1f03e2     	mov	x2, xzr
 2ba1e80: 948f2a3c     	bl	0x4f6c770 <__start_il2cpp+0x24a415c>
 2ba1e84: aa1f03e1     	mov	x1, xzr
 2ba1e88: 97fe427c     	bl	0x2b32878 <__start_il2cpp+0x6a264>
 2ba1e8c: f001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba1e90: f946e800     	ldr	x0, [x0, #0xdd0]
 2ba1e94: 97f8d3d8     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1e98: b940e408     	ldr	w8, [x0, #0xe4]
 2ba1e9c: 35000048     	cbnz	w8, 0x2ba1ea4 <__start_il2cpp+0xd9890>
 2ba1ea0: 97f8d42f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2ba1ea4: aa1503e0     	mov	x0, x21
 2ba1ea8: aa1f03e1     	mov	x1, xzr
 2ba1eac: 94bd5557     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2ba1eb0: b9002bf8     	str	w24, [sp, #0x28]
 2ba1eb4: 17ffff15     	b	0x2ba1b08 <__start_il2cpp+0xd94f4>
 2ba1eb8: 52800100     	mov	w0, #0x8                // =8
 2ba1ebc: 94ce1241     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2ba1ec0: f94002a8     	ldr	x8, [x21]
 2ba1ec4: f9000008     	str	x8, [x0]
 2ba1ec8: f0019c41     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2ba1ecc: 91302021     	add	x1, x1, #0xc08
 2ba1ed0: aa1f03e2     	mov	x2, xzr
 2ba1ed4: 94ce123f     	bl	0x5f267d0 <__cxa_throw@plt>
 2ba1ed8: 1400003d     	b	0x2ba1fcc <__start_il2cpp+0xd99b8>
 2ba1edc: 97f8d46b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1ee0: 97f8d46a     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2ba1ee4: 14000015     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1ee8: 14000014     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1eec: 14000013     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1ef0: 14000012     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1ef4: 14000011     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1ef8: 14000010     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1efc: 1400000f     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f00: 1400000e     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f04: 1400000d     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f08: 1400000c     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f0c: 1400000b     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f10: 1400000a     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f14: 14000009     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f18: 14000008     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f1c: 14000007     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f20: aa0103f4     	mov	x20, x1
 2ba1f24: aa0003f5     	mov	x21, x0
 2ba1f28: 94ce120a     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba1f2c: 2a1403e1     	mov	w1, w20
 2ba1f30: 14000003     	b	0x2ba1f3c <__start_il2cpp+0xd9928>
 2ba1f34: 14000001     	b	0x2ba1f38 <__start_il2cpp+0xd9924>
 2ba1f38: aa0003f5     	mov	x21, x0
 2ba1f3c: 52800028     	mov	w8, #0x1                // =1
 2ba1f40: 6b08003f     	cmp	w1, w8
 2ba1f44: 54000481     	b.ne	0x2ba1fd4 <__start_il2cpp+0xd99c0>
 2ba1f48: aa1503e0     	mov	x0, x21
 2ba1f4c: 94ce11fd     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2ba1f50: aa0003f4     	mov	x20, x0
 2ba1f54: f001ba60     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2ba1f58: f946f000     	ldr	x0, [x0, #0xde0]
 2ba1f5c: 97f8d3a6     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2ba1f60: f9400288     	ldr	x8, [x20]
 2ba1f64: f9400101     	ldr	x1, [x8]
 2ba1f68: 97f8d54a     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2ba1f6c: 36000200     	tbz	w0, #0x0, 0x2ba1fac <__start_il2cpp+0xd9998>
 2ba1f70: b9802bf5     	ldrsw	x21, [sp, #0x28]
 2ba1f74: f9400294     	ldr	x20, [x20]
 2ba1f78: 910063e8     	add	x8, sp, #0x18
 2ba1f7c: f8357914     	str	x20, [x8, x21, lsl #3]
 2ba1f80: 110006a8     	add	w8, w21, #0x1
 2ba1f84: b9002be8     	str	w8, [sp, #0x28]
 2ba1f88: 94ce11f2     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba1f8c: 12800028     	mov	w8, #-0x2               // =-2
 2ba1f90: aa1403e1     	mov	x1, x20
 2ba1f94: aa1f03e2     	mov	x2, xzr
 2ba1f98: b8008668     	str	w8, [x19], #0x8
 2ba1f9c: aa1303e0     	mov	x0, x19
 2ba1fa0: 9491e1fb     	bl	0x501a78c <__start_il2cpp+0x2552178>
 2ba1fa4: b9002bf5     	str	w21, [sp, #0x28]
 2ba1fa8: 17fffee4     	b	0x2ba1b38 <__start_il2cpp+0xd9524>
 2ba1fac: 52800100     	mov	w0, #0x8                // =8
 2ba1fb0: 94ce1204     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2ba1fb4: f9400288     	ldr	x8, [x20]
 2ba1fb8: f9000008     	str	x8, [x0]
 2ba1fbc: f0019c41     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2ba1fc0: 91302021     	add	x1, x1, #0xc08
 2ba1fc4: aa1f03e2     	mov	x2, xzr
 2ba1fc8: 94ce1202     	bl	0x5f267d0 <__cxa_throw@plt>
 2ba1fcc: aa0003f5     	mov	x21, x0
 2ba1fd0: 94ce11e0     	bl	0x5f26750 <__cxa_end_catch@plt>
 2ba1fd4: aa1503e0     	mov	x0, x21
 2ba1fd8: 97fc89c1     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2ba1fdc: 97ec0e9c     	bl	0x26a5a4c <.text+0x8ec>

# BubbleComponent+_ConvertBubbleToItem_d__27 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2ba1fe0 .. 0x2ba1fec (next mapped method entry)
 2ba1fe0: 91002000     	add	x0, x0, #0x8
 2ba1fe4: aa1f03e2     	mov	x2, xzr
 2ba1fe8: 1491e15c     	b	0x501a558 <__start_il2cpp+0x2551f44>
