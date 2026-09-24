; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25992 Merger.MergeBoard.Components.CollectableComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BC94 | public ItemCollectable get_ItemCollectable() { }
; bytes=8 sha256=4197ad96213c98161e13fbfd6185a724b5570ba296d316558cbd5cc5c1842369 status=arm64_complete_bound indexed_start=True
0x06A9BC94: 000040f9  ldr x0, [x0]
0x06A9BC98: c0035fd6  ret

; RVA 0x6A9BC9C | public void set_ItemCollectable(ItemCollectable value) { }
; bytes=8 sha256=6f5e79b940bac7d3e3c313bc3c688c2059f781875a397de0a2d217cc4021751b status=arm64_complete_bound indexed_start=True
0x06A9BC9C: 010000f9  str x1, [x0]
0x06A9BCA0: 49931b17  b #0x31809c4

; RVA 0x6A9BCA4 | public ItemCollectableResource get_ItemCollectableResource() { }
; bytes=8 sha256=19647f57f48e23c8730ecfc85bdce80bf67ce4eae56e82f97661432fa2018025 status=arm64_complete_bound indexed_start=True
0x06A9BCA4: 000440f9  ldr x0, [x0, #8]
0x06A9BCA8: c0035fd6  ret

; RVA 0x6A9BCAC | public void set_ItemCollectableResource(ItemCollectableResource value) { }
; bytes=8 sha256=686421ea07c5e703b78af81f55d2ed3f109c480352fbf129cbd779901685311f status=arm64_complete_bound indexed_start=True
0x06A9BCAC: 018c00f8  str x1, [x0, #8]!
0x06A9BCB0: 45931b17  b #0x31809c4

; RVA 0x6A9BCB4 | public AfterCollectAnimation get_AfterCollectAnimation() { }
; bytes=28 sha256=fc7a486bc5d38f4790ac5d39c92b935e51194b4db7875005d968774f4610f2d6 status=arm64_complete_bound indexed_start=True
0x06A9BCB4: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9BCB8: 080040f9  ldr x8, [x0]
0x06A9BCBC: 880000b4  cbz x8, #0x6a9bccc
0x06A9BCC0: 001140b9  ldr w0, [x8, #0x10]
0x06A9BCC4: fe0741f8  ldr x30, [sp], #0x10
0x06A9BCC8: c0035fd6  ret
0x06A9BCCC: f8931b97  bl #0x3180cac

; RVA 0x6A9BCD0 | public Reward get_CollectableReward() { }
; bytes=28 sha256=85eb896d9978d32b130d61ff388b6a4fecce932521d83f4f2593c207d48a5a9e status=arm64_complete_bound indexed_start=True
0x06A9BCD0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9BCD4: 080040f9  ldr x8, [x0]
0x06A9BCD8: 880000b4  cbz x8, #0x6a9bce8
0x06A9BCDC: 000d40f9  ldr x0, [x8, #0x18]
0x06A9BCE0: fe0741f8  ldr x30, [sp], #0x10
0x06A9BCE4: c0035fd6  ret
0x06A9BCE8: f1931b97  bl #0x3180cac

; RVA 0x6A9BCEC | public bool get_IsPlaygroundPoints() { }
; bytes=36 sha256=d0dfe6bbca14df8fab28492db1d04fcfbd3b3d57588a0e35d059145f3808c788 status=arm64_complete_bound indexed_start=True
0x06A9BCEC: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9BCF0: 080040f9  ldr x8, [x0]
0x06A9BCF4: c80000b4  cbz x8, #0x6a9bd0c
0x06A9BCF8: 082140b9  ldr w8, [x8, #0x20]
0x06A9BCFC: 1f090071  cmp w8, #2
0x06A9BD00: e0179f1a  cset w0, eq
0x06A9BD04: fe0741f8  ldr x30, [sp], #0x10
0x06A9BD08: c0035fd6  ret
0x06A9BD0C: e8931b97  bl #0x3180cac

; RVA 0x6A9BD10 | public bool get_IsImmediateReward() { }
; bytes=36 sha256=e93478cec57ce22eb7dab11fedbed036303ef97e05d2d159073e533f6024b2f0 status=arm64_complete_bound indexed_start=True
0x06A9BD10: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A9BD14: 080040f9  ldr x8, [x0]
0x06A9BD18: c80000b4  cbz x8, #0x6a9bd30
0x06A9BD1C: 082140b9  ldr w8, [x8, #0x20]
0x06A9BD20: 1f010071  cmp w8, #0
0x06A9BD24: e0079f1a  cset w0, ne
0x06A9BD28: fe0741f8  ldr x30, [sp], #0x10
0x06A9BD2C: c0035fd6  ret
0x06A9BD30: df931b97  bl #0x3180cac

; RVA 0x6A9BD34 | public bool get_ShouldRemoveFromBoard() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x06A9BD34: 00404039  ldrb w0, [x0, #0x10]
0x06A9BD38: c0035fd6  ret

; RVA 0x6A9BD3C | public void set_ShouldRemoveFromBoard(bool value) { }
; bytes=12 sha256=9906fb0bb75f2a4f1e046af27730d9706441c14db85d4c11511dbf71d58892f3 status=arm64_complete_bound indexed_start=True
0x06A9BD3C: 28000012  and w8, w1, #1
0x06A9BD40: 08400039  strb w8, [x0, #0x10]
0x06A9BD44: c0035fd6  ret

; RVA 0x6A9BD48 | public bool get_Collected() { }
; bytes=8 sha256=c9b2a0cdb85008af6a1f71226c45150e8385985933292dba021cda789b207e1c status=arm64_complete_bound indexed_start=True
0x06A9BD48: 00444039  ldrb w0, [x0, #0x11]
0x06A9BD4C: c0035fd6  ret

; RVA 0x6A9BD50 | public void set_Collected(bool value) { }
; bytes=12 sha256=921a6e8b87ae28314668f2446f87f66ce4128eff56573c78a040d121aedb5125 status=arm64_complete_bound indexed_start=True
0x06A9BD50: 28000012  and w8, w1, #1
0x06A9BD54: 08440039  strb w8, [x0, #0x11]
0x06A9BD58: c0035fd6  ret

