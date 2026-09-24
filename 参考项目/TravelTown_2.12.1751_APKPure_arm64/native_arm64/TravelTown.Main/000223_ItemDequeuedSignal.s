; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 223 MergeEngine.Signal.Items.ItemDequeuedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FF37B0 | public string get_BoosterUuid() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05FF37B0: 001040f9  ldr x0, [x0, #0x20]
0x05FF37B4: c0035fd6  ret

; RVA 0x5FF37B8 | public IBoosterItem get_BoosterItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05FF37B8: 001440f9  ldr x0, [x0, #0x28]
0x05FF37BC: c0035fd6  ret

; RVA 0x5FF37C0 | public void .ctor(IMergeItem item, int level, IBoosterItem boosterItem, string boosterUuid) { }
; bytes=104 sha256=0f1b481770c35df2ad9e776dc5d23954f539be08042f47dd23fa92ddc81dc9f2 status=arm64_complete_bound indexed_start=True
0x05FF37C0: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x05FF37C4: f65701a9  stp x22, x21, [sp, #0x10]
0x05FF37C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x05FF37CC: f60301aa  mov x22, x1
0x05FF37D0: e1031faa  mov x1, xzr
0x05FF37D4: f30304aa  mov x19, x4
0x05FF37D8: f40303aa  mov x20, x3
0x05FF37DC: f503022a  mov w21, w2
0x05FF37E0: f70300aa  mov x23, x0
0x05FF37E4: 869bdb97  bl #0x56da5fc
0x05FF37E8: e00317aa  mov x0, x23
0x05FF37EC: 160c01f8  str x22, [x0, #0x10]!
0x05FF37F0: e10316aa  mov x1, x22
0x05FF37F4: 74344697  bl #0x31809c4
0x05FF37F8: e00317aa  mov x0, x23
0x05FF37FC: f51a00b9  str w21, [x23, #0x18]
0x05FF3800: 148c02f8  str x20, [x0, #0x28]!
0x05FF3804: e10314aa  mov x1, x20
0x05FF3808: 6f344697  bl #0x31809c4
0x05FF380C: f30e02f8  str x19, [x23, #0x20]!
0x05FF3810: e10313aa  mov x1, x19
0x05FF3814: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05FF3818: f65741a9  ldp x22, x21, [sp, #0x10]
0x05FF381C: e00317aa  mov x0, x23
0x05FF3820: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x05FF3824: 68344617  b #0x31809c4

