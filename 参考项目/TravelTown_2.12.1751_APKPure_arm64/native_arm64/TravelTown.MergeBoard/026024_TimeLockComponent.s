; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 26024 Merger.MergeBoard.Components.TimeLockComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9C580 | public double get_TimeLeft() { }
; bytes=8 sha256=1c5e73c85446f7f7b1aea752c4751ce39d32328c7d290dbc33e82e91f749e9e0 status=arm64_complete_bound indexed_start=True
0x06A9C580: 000040fd  ldr d0, [x0]
0x06A9C584: c0035fd6  ret

; RVA 0x6A9C588 | public void set_TimeLeft(double value) { }
; bytes=8 sha256=bfab8b3ca678dd2dcafaa7c2b96a24088bc0987e09cdce8161afd9f63af4b645 status=arm64_complete_bound indexed_start=True
0x06A9C588: 000000fd  str d0, [x0]
0x06A9C58C: c0035fd6  ret

; RVA 0x6A9C590 | public double get_LockTime() { }
; bytes=8 sha256=19f9fb53bc7c7b99b9e1cc2d0790901a3f68171943ad915fc62f38f6aa81532e status=arm64_complete_bound indexed_start=True
0x06A9C590: 000440fd  ldr d0, [x0, #8]
0x06A9C594: c0035fd6  ret

; RVA 0x6A9C598 | public void set_LockTime(double value) { }
; bytes=8 sha256=97aa2e10d07323f881d7dcf45aedb7a32c757e144aa0ccae3c8957528db204d3 status=arm64_complete_bound indexed_start=True
0x06A9C598: 000400fd  str d0, [x0, #8]
0x06A9C59C: c0035fd6  ret

; RVA 0x6A9C5A0 | public bool get_IsCooldownBlocked() { }
; bytes=8 sha256=0e6de766d449fe554507239b6a7ad2c85106a33b67dea05075aa7cbb025dafb1 status=arm64_complete_bound indexed_start=True
0x06A9C5A0: 00404039  ldrb w0, [x0, #0x10]
0x06A9C5A4: c0035fd6  ret

; RVA 0x6A9C5A8 | public void set_IsCooldownBlocked(bool value) { }
; bytes=12 sha256=9906fb0bb75f2a4f1e046af27730d9706441c14db85d4c11511dbf71d58892f3 status=arm64_complete_bound indexed_start=True
0x06A9C5A8: 28000012  and w8, w1, #1
0x06A9C5AC: 08400039  strb w8, [x0, #0x10]
0x06A9C5B0: c0035fd6  ret

; RVA 0x6A9C5B4 | public TimeLockGroup get_LockGroup() { }
; bytes=8 sha256=ca9be5891608b757b7bc8d84905b452237de4af4115e73ad7cd6348b92859bf1 status=arm64_complete_bound indexed_start=True
0x06A9C5B4: 001440b9  ldr w0, [x0, #0x14]
0x06A9C5B8: c0035fd6  ret

; RVA 0x6A9C5BC | public void set_LockGroup(TimeLockGroup value) { }
; bytes=8 sha256=cf9ba67002cd8d3271068d0d8dcf883aea02f0e4e521c63f5083025bd8dfb1aa status=arm64_complete_bound indexed_start=True
0x06A9C5BC: 011400b9  str w1, [x0, #0x14]
0x06A9C5C0: c0035fd6  ret

; RVA 0x6A9C5C4 | public bool get_BeingUnlocked() { }
; bytes=8 sha256=e4c1a301829bf7e242097004cb25fc213af6f8bee45f49527b010f07bce68f54 status=arm64_complete_bound indexed_start=True
0x06A9C5C4: 00604039  ldrb w0, [x0, #0x18]
0x06A9C5C8: c0035fd6  ret

; RVA 0x6A9C5CC | public void set_BeingUnlocked(bool value) { }
; bytes=12 sha256=44e17fb1eb8f8ff9cdde629de5faf61cf17316e0f5f154eccbf27e368f8511ec status=arm64_complete_bound indexed_start=True
0x06A9C5CC: 28000012  and w8, w1, #1
0x06A9C5D0: 08600039  strb w8, [x0, #0x18]
0x06A9C5D4: c0035fd6  ret

; RVA 0x6A9C5D8 | public bool get_CanBeUnlocked() { }
; bytes=8 sha256=c7a1e6ceac1d2acb2fa17c1eef5d0a1395c5e3a5abb550b2689ad1452e511bc2 status=arm64_complete_bound indexed_start=True
0x06A9C5D8: 00644039  ldrb w0, [x0, #0x19]
0x06A9C5DC: c0035fd6  ret

; RVA 0x6A9C5E0 | public void set_CanBeUnlocked(bool value) { }
; bytes=12 sha256=74aeea5920fee09301ab77389184b96a16247fe0c792645e5bb4f55e80c3abb7 status=arm64_complete_bound indexed_start=True
0x06A9C5E0: 28000012  and w8, w1, #1
0x06A9C5E4: 08640039  strb w8, [x0, #0x19]
0x06A9C5E8: c0035fd6  ret

; RVA 0x6A9C5EC | public ItemOrigin get_LockOrigins() { }
; bytes=8 sha256=7a2c484f16193ad2c5617bbe6704b2ccbdcc31004cfa1370a3ba4533f12de7f9 status=arm64_complete_bound indexed_start=True
0x06A9C5EC: 001c40b9  ldr w0, [x0, #0x1c]
0x06A9C5F0: c0035fd6  ret

; RVA 0x6A9C5F4 | public void set_LockOrigins(ItemOrigin value) { }
; bytes=8 sha256=8d949aab655e204531190fa3b81e45ed0ac7d262e77a5a3a6e06979fd43d7a3b status=arm64_complete_bound indexed_start=True
0x06A9C5F4: 011c00b9  str w1, [x0, #0x1c]
0x06A9C5F8: c0035fd6  ret

; RVA 0x6A9C5FC | public bool get_ModifiedByStateLoad() { }
; bytes=8 sha256=143b3c7bd83b0aed91598bc840f9d6c3eed331434f835849cdbe01fd7801fad5 status=arm64_complete_bound indexed_start=True
0x06A9C5FC: 00804039  ldrb w0, [x0, #0x20]
0x06A9C600: c0035fd6  ret

; RVA 0x6A9C604 | public void set_ModifiedByStateLoad(bool value) { }
; bytes=12 sha256=cb035ed5867369c7e909c72176ed236910c661408e75a418c417b7be426c41d6 status=arm64_complete_bound indexed_start=True
0x06A9C604: 28000012  and w8, w1, #1
0x06A9C608: 08800039  strb w8, [x0, #0x20]
0x06A9C60C: c0035fd6  ret

; RVA 0x6A9C610 | public bool get_Used() { }
; bytes=8 sha256=f98747d786b21bdf58861c7a5e5441f42c5e123f39e63ff71cdf9fec0016e625 status=arm64_complete_bound indexed_start=True
0x06A9C610: 00844039  ldrb w0, [x0, #0x21]
0x06A9C614: c0035fd6  ret

; RVA 0x6A9C618 | public void set_Used(bool value) { }
; bytes=12 sha256=6d6fc51ef57bfbc40ba558bf1f7ac40e7e9567a8bc559be4ba1c6ecb4f662db4 status=arm64_complete_bound indexed_start=True
0x06A9C618: 28000012  and w8, w1, #1
0x06A9C61C: 08840039  strb w8, [x0, #0x21]
0x06A9C620: c0035fd6  ret

; RVA 0x6A9C624 | public bool get_Locked() { }
; bytes=36 sha256=5327e63097e3632d4c305c2571bc744dd9a481de2b8b2f8ae4d1ec0cf33b58a4 status=arm64_complete_bound indexed_start=True
0x06A9C624: 000040fd  ldr d0, [x0]
0x06A9C628: 0820601e  fcmp d0, #0.0
0x06A9C62C: ad000054  b.le #0x6a9c640
0x06A9C630: 08404039  ldrb w8, [x0, #0x10]
0x06A9C634: 1f010071  cmp w8, #0
0x06A9C638: e0179f1a  cset w0, eq
0x06A9C63C: c0035fd6  ret
0x06A9C640: e0031f2a  mov w0, wzr
0x06A9C644: c0035fd6  ret

