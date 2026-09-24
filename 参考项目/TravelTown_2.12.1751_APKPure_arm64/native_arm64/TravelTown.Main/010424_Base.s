; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10424 Framework.Core.Base
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68B2E64 | protected SignalBus get_SignalBus() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x068B2E64: 001040f9  ldr x0, [x0, #0x20]
0x068B2E68: c0035fd6  ret

; RVA 0x68B2E6C | private void set_SignalBus(SignalBus value) { }
; bytes=36 sha256=d120e7ffbe8bbb49eefbb2503f8a5e91f5d0ad14e5af9086b16f41ea1c353781 status=arm64_complete_bound indexed_start=True
0x068B2E6C: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x068B2E70: f30300aa  mov x19, x0
0x068B2E74: 010c02f8  str x1, [x0, #0x20]!
0x068B2E78: d3362397  bl #0x31809c4
0x068B2E7C: 680240f9  ldr x8, [x19]
0x068B2E80: e00313aa  mov x0, x19
0x068B2E84: 028557a9  ldp x2, x1, [x8, #0x178]
0x068B2E88: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x068B2E8C: 40001fd6  br x2

; RVA 0x68B2E90 | protected virtual void SubscribeToSignals() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x068B2E90: c0035fd6  ret

; RVA 0x68B2E94 | protected virtual void UnsubscribeFromSignals() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x068B2E94: c0035fd6  ret

; RVA 0x68B2E98 | public void Dispose() { }
; bytes=96 sha256=1f756f2f643ab97ad678fdd0e57acd12e80fab446e98a521637a26eaa5fd0b65 status=arm64_complete_bound indexed_start=True
0x068B2E98: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x068B2E9C: 08604039  ldrb w8, [x0, #0x18]
0x068B2EA0: 88020035  cbnz w8, #0x68b2ef0
0x068B2EA4: 080040f9  ldr x8, [x0]
0x068B2EA8: f30300aa  mov x19, x0
0x068B2EAC: 090d41f9  ldr x9, [x8, #0x218]
0x068B2EB0: 011141f9  ldr x1, [x8, #0x220]
0x068B2EB4: 20013fd6  blr x9
0x068B2EB8: 680240f9  ldr x8, [x19]
0x068B2EBC: e00313aa  mov x0, x19
0x068B2EC0: 098558a9  ldp x9, x1, [x8, #0x188]
0x068B2EC4: 20013fd6  blr x9
0x068B2EC8: e00313aa  mov x0, x19
0x068B2ECC: 1f0c01f8  str xzr, [x0, #0x10]!
0x068B2ED0: e1031faa  mov x1, xzr
0x068B2ED4: bc362397  bl #0x31809c4
0x068B2ED8: 7f0e02f8  str xzr, [x19, #0x20]!
0x068B2EDC: e00313aa  mov x0, x19
0x068B2EE0: e1031faa  mov x1, xzr
0x068B2EE4: b8362397  bl #0x31809c4
0x068B2EE8: 28008052  movz w8, #0x1
0x068B2EEC: 68821f38  sturb w8, [x19, #-8]
0x068B2EF0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x068B2EF4: c0035fd6  ret

; RVA 0x68B2EF8 | protected virtual void HandleDisposed() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x068B2EF8: c0035fd6  ret

; RVA 0x68B2EFC | public void .ctor() { }
; bytes=8 sha256=060724df1fbdf67f1b324104079dbca52e1613f09504a67f12d1ee9829a14123 status=arm64_complete_bound indexed_start=True
0x068B2EFC: e1031faa  mov x1, xzr
0x068B2F00: bf9db817  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC70A8 | Framework.Core.Base$$SubscribeToSignal<object>
; native signature: void Framework_Core_Base__SubscribeToSignal_object_ (Framework_Core_Base_o* __this, System_Action_TSignal__o* listener, const MethodInfo_3BC70A8* method);
; bytes=92 sha256=528f084e141946a77cf9b7f60e648ef274b100e7c8b526283883a132d00dded7 status=arm64_complete_bound indexed_start=True
0x03BC70A8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC70AC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC70B0: 481c40f9  ldr x8, [x2, #0x38]
0x03BC70B4: f40302aa  mov x20, x2
0x03BC70B8: f30301aa  mov x19, x1
0x03BC70BC: f50300aa  mov x21, x0
0x03BC70C0: 680000b5  cbnz x8, #0x3bc70cc
0x03BC70C4: e00314aa  mov x0, x20
0x03BC70C8: ec3dd697  bl #0x3156878
0x03BC70CC: a8624039  ldrb w8, [x21, #0x18]
0x03BC70D0: 88000034  cbz w8, #0x3bc70e0
0x03BC70D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC70D8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC70DC: c0035fd6  ret
0x03BC70E0: a01240f9  ldr x0, [x21, #0x20]
0x03BC70E4: e00000b4  cbz x0, #0x3bc7100
0x03BC70E8: 881e40f9  ldr x8, [x20, #0x38]
0x03BC70EC: e10313aa  mov x1, x19
0x03BC70F0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC70F4: 020540f9  ldr x2, [x8, #8]
0x03BC70F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC70FC: 82780714  b #0x3da5304
0x03BC7100: ebe6d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7160 | Framework.Core.Base$$SubscribeToSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__SubscribeToSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, System_Action_TSignal__o* listener, const MethodInfo_3BC7160* method);
; bytes=96 sha256=16915c7096a8292b04c7cf4fd73041a859393dd3d109ad2f9244b2317021b6e3 status=arm64_complete_bound indexed_start=True
0x03BC7160: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7164: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC7168: 481c40f9  ldr x8, [x2, #0x38]
0x03BC716C: f40302aa  mov x20, x2
0x03BC7170: f30301aa  mov x19, x1
0x03BC7174: f50300aa  mov x21, x0
0x03BC7178: 680000b5  cbnz x8, #0x3bc7184
0x03BC717C: e00314aa  mov x0, x20
0x03BC7180: be3dd697  bl #0x3156878
0x03BC7184: a8624039  ldrb w8, [x21, #0x18]
0x03BC7188: 88000034  cbz w8, #0x3bc7198
0x03BC718C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7190: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7194: c0035fd6  ret
0x03BC7198: a01240f9  ldr x0, [x21, #0x20]
0x03BC719C: 000100b4  cbz x0, #0x3bc71bc
0x03BC71A0: 881e40f9  ldr x8, [x20, #0x38]
0x03BC71A4: e10313aa  mov x1, x19
0x03BC71A8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC71AC: 020540f9  ldr x2, [x8, #8]
0x03BC71B0: 430040f9  ldr x3, [x2]
0x03BC71B4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC71B8: 60001fd6  br x3
0x03BC71BC: bce6d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7104 | Framework.Core.Base$$SubscribeToSignal<object>
; native signature: void Framework_Core_Base__SubscribeToSignal_object_ (Framework_Core_Base_o* __this, System_Action_o* listener, const MethodInfo_3BC7104* method);
; bytes=92 sha256=dcbd6b7ad5da0166beb834c8fb63f039098b2f8a7f083c5a56b8ed7d2190756d status=arm64_complete_bound indexed_start=True
0x03BC7104: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7108: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC710C: 481c40f9  ldr x8, [x2, #0x38]
0x03BC7110: f40302aa  mov x20, x2
0x03BC7114: f30301aa  mov x19, x1
0x03BC7118: f50300aa  mov x21, x0
0x03BC711C: 680000b5  cbnz x8, #0x3bc7128
0x03BC7120: e00314aa  mov x0, x20
0x03BC7124: d53dd697  bl #0x3156878
0x03BC7128: a8624039  ldrb w8, [x21, #0x18]
0x03BC712C: 88000034  cbz w8, #0x3bc713c
0x03BC7130: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7134: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7138: c0035fd6  ret
0x03BC713C: a01240f9  ldr x0, [x21, #0x20]
0x03BC7140: e00000b4  cbz x0, #0x3bc715c
0x03BC7144: 881e40f9  ldr x8, [x20, #0x38]
0x03BC7148: e10313aa  mov x1, x19
0x03BC714C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7150: 020140f9  ldr x2, [x8]
0x03BC7154: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7158: 7c780714  b #0x3da5348
0x03BC715C: d4e6d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC71C0 | Framework.Core.Base$$SubscribeToSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__SubscribeToSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, System_Action_o* listener, const MethodInfo_3BC71C0* method);
; bytes=96 sha256=2f2f87dda459250c4829ebf8a8f85d8833d0a841b6ea2a208ff34014786c6e9e status=arm64_complete_bound indexed_start=True
0x03BC71C0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC71C4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC71C8: 481c40f9  ldr x8, [x2, #0x38]
0x03BC71CC: f40302aa  mov x20, x2
0x03BC71D0: f30301aa  mov x19, x1
0x03BC71D4: f50300aa  mov x21, x0
0x03BC71D8: 680000b5  cbnz x8, #0x3bc71e4
0x03BC71DC: e00314aa  mov x0, x20
0x03BC71E0: a63dd697  bl #0x3156878
0x03BC71E4: a8624039  ldrb w8, [x21, #0x18]
0x03BC71E8: 88000034  cbz w8, #0x3bc71f8
0x03BC71EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC71F0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC71F4: c0035fd6  ret
0x03BC71F8: a01240f9  ldr x0, [x21, #0x20]
0x03BC71FC: 000100b4  cbz x0, #0x3bc721c
0x03BC7200: 881e40f9  ldr x8, [x20, #0x38]
0x03BC7204: e10313aa  mov x1, x19
0x03BC7208: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC720C: 020140f9  ldr x2, [x8]
0x03BC7210: 430040f9  ldr x3, [x2]
0x03BC7214: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7218: 60001fd6  br x3
0x03BC721C: a4e6d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC74C4 | Framework.Core.Base$$UnsubscribeFromSignal<object>
; native signature: void Framework_Core_Base__UnsubscribeFromSignal_object_ (Framework_Core_Base_o* __this, System_Action_TSignal__o* listener, const MethodInfo_3BC74C4* method);
; bytes=80 sha256=e31d3c91a8cc7922fdd0fbf5361cc7dc0e0621b46788b7f78e2c92787a451906 status=arm64_complete_bound indexed_start=True
0x03BC74C4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC74C8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC74CC: 481c40f9  ldr x8, [x2, #0x38]
0x03BC74D0: f40302aa  mov x20, x2
0x03BC74D4: f30301aa  mov x19, x1
0x03BC74D8: f50300aa  mov x21, x0
0x03BC74DC: 680000b5  cbnz x8, #0x3bc74e8
0x03BC74E0: e00314aa  mov x0, x20
0x03BC74E4: e53cd697  bl #0x3156878
0x03BC74E8: a01240f9  ldr x0, [x21, #0x20]
0x03BC74EC: e00000b4  cbz x0, #0x3bc7508
0x03BC74F0: 881e40f9  ldr x8, [x20, #0x38]
0x03BC74F4: e10313aa  mov x1, x19
0x03BC74F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC74FC: 020540f9  ldr x2, [x8, #8]
0x03BC7500: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7504: 677a0714  b #0x3da5ea0
0x03BC7508: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC750C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7510: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7564 | Framework.Core.Base$$UnsubscribeFromSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__UnsubscribeFromSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, System_Action_TSignal__o* listener, const MethodInfo_3BC7564* method);
; bytes=84 sha256=692650a487281be0350b9de675e69776d2a48540247c79421acb8904d3ba2cb9 status=arm64_complete_bound indexed_start=True
0x03BC7564: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7568: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC756C: 481c40f9  ldr x8, [x2, #0x38]
0x03BC7570: f40302aa  mov x20, x2
0x03BC7574: f30301aa  mov x19, x1
0x03BC7578: f50300aa  mov x21, x0
0x03BC757C: 680000b5  cbnz x8, #0x3bc7588
0x03BC7580: e00314aa  mov x0, x20
0x03BC7584: bd3cd697  bl #0x3156878
0x03BC7588: a01240f9  ldr x0, [x21, #0x20]
0x03BC758C: 000100b4  cbz x0, #0x3bc75ac
0x03BC7590: 881e40f9  ldr x8, [x20, #0x38]
0x03BC7594: e10313aa  mov x1, x19
0x03BC7598: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC759C: 020540f9  ldr x2, [x8, #8]
0x03BC75A0: 430040f9  ldr x3, [x2]
0x03BC75A4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC75A8: 60001fd6  br x3
0x03BC75AC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC75B0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC75B4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7514 | Framework.Core.Base$$UnsubscribeFromSignal<object>
; native signature: void Framework_Core_Base__UnsubscribeFromSignal_object_ (Framework_Core_Base_o* __this, System_Action_o* listener, const MethodInfo_3BC7514* method);
; bytes=80 sha256=33d73a56ddf70ac69c5c8c1cae7bb03745cc223253cdaedd3eeb5d9ee0c52b81 status=arm64_complete_bound indexed_start=True
0x03BC7514: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7518: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC751C: 481c40f9  ldr x8, [x2, #0x38]
0x03BC7520: f40302aa  mov x20, x2
0x03BC7524: f30301aa  mov x19, x1
0x03BC7528: f50300aa  mov x21, x0
0x03BC752C: 680000b5  cbnz x8, #0x3bc7538
0x03BC7530: e00314aa  mov x0, x20
0x03BC7534: d13cd697  bl #0x3156878
0x03BC7538: a01240f9  ldr x0, [x21, #0x20]
0x03BC753C: e00000b4  cbz x0, #0x3bc7558
0x03BC7540: 881e40f9  ldr x8, [x20, #0x38]
0x03BC7544: e10313aa  mov x1, x19
0x03BC7548: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC754C: 020140f9  ldr x2, [x8]
0x03BC7550: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7554: 647a0714  b #0x3da5ee4
0x03BC7558: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC755C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7560: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC75B8 | Framework.Core.Base$$UnsubscribeFromSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__UnsubscribeFromSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, System_Action_o* listener, const MethodInfo_3BC75B8* method);
; bytes=84 sha256=9af58ca36ae12444dceea608c7634d1fd79efd89c62dbe7280984f9e1d0d8d62 status=arm64_complete_bound indexed_start=True
0x03BC75B8: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC75BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC75C0: 481c40f9  ldr x8, [x2, #0x38]
0x03BC75C4: f40302aa  mov x20, x2
0x03BC75C8: f30301aa  mov x19, x1
0x03BC75CC: f50300aa  mov x21, x0
0x03BC75D0: 680000b5  cbnz x8, #0x3bc75dc
0x03BC75D4: e00314aa  mov x0, x20
0x03BC75D8: a83cd697  bl #0x3156878
0x03BC75DC: a01240f9  ldr x0, [x21, #0x20]
0x03BC75E0: 000100b4  cbz x0, #0x3bc7600
0x03BC75E4: 881e40f9  ldr x8, [x20, #0x38]
0x03BC75E8: e10313aa  mov x1, x19
0x03BC75EC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC75F0: 020140f9  ldr x2, [x8]
0x03BC75F4: 430040f9  ldr x3, [x2]
0x03BC75F8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC75FC: 60001fd6  br x3
0x03BC7600: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7604: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7608: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6B28 | Framework.Core.Base$$FireSignal<object>
; native signature: void Framework_Core_Base__FireSignal_object_ (Framework_Core_Base_o* __this, const MethodInfo_3BC6B28* method);
; bytes=84 sha256=d482fde2a76e3550cb7ed297b864862e4df57245bda0fa7fb93adae3d53aef5a status=arm64_complete_bound indexed_start=True
0x03BC6B28: fe0f1ef8  str x30, [sp, #-0x20]!
0x03BC6B2C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC6B30: 281c40f9  ldr x8, [x1, #0x38]
0x03BC6B34: f30301aa  mov x19, x1
0x03BC6B38: f40300aa  mov x20, x0
0x03BC6B3C: 680000b5  cbnz x8, #0x3bc6b48
0x03BC6B40: e00313aa  mov x0, x19
0x03BC6B44: 4d3fd697  bl #0x3156878
0x03BC6B48: 88624039  ldrb w8, [x20, #0x18]
0x03BC6B4C: 88000034  cbz w8, #0x3bc6b5c
0x03BC6B50: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6B54: fe0742f8  ldr x30, [sp], #0x20
0x03BC6B58: c0035fd6  ret
0x03BC6B5C: 801240f9  ldr x0, [x20, #0x20]
0x03BC6B60: c00000b4  cbz x0, #0x3bc6b78
0x03BC6B64: 681e40f9  ldr x8, [x19, #0x38]
0x03BC6B68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6B6C: 010140f9  ldr x1, [x8]
0x03BC6B70: fe0742f8  ldr x30, [sp], #0x20
0x03BC6B74: 5f780714  b #0x3da4cf0
0x03BC6B78: 4de8d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6B7C | Framework.Core.Base$$FireSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__FireSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, const MethodInfo_3BC6B7C* method);
; bytes=88 sha256=0031a183be830b5c21777829e30e09a3c097895ed1e09566737e2343f5d9aa03 status=arm64_complete_bound indexed_start=True
0x03BC6B7C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03BC6B80: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC6B84: 281c40f9  ldr x8, [x1, #0x38]
0x03BC6B88: f30301aa  mov x19, x1
0x03BC6B8C: f40300aa  mov x20, x0
0x03BC6B90: 680000b5  cbnz x8, #0x3bc6b9c
0x03BC6B94: e00313aa  mov x0, x19
0x03BC6B98: 383fd697  bl #0x3156878
0x03BC6B9C: 88624039  ldrb w8, [x20, #0x18]
0x03BC6BA0: 88000034  cbz w8, #0x3bc6bb0
0x03BC6BA4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6BA8: fe0742f8  ldr x30, [sp], #0x20
0x03BC6BAC: c0035fd6  ret
0x03BC6BB0: 801240f9  ldr x0, [x20, #0x20]
0x03BC6BB4: e00000b4  cbz x0, #0x3bc6bd0
0x03BC6BB8: 681e40f9  ldr x8, [x19, #0x38]
0x03BC6BBC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6BC0: 010140f9  ldr x1, [x8]
0x03BC6BC4: 220040f9  ldr x2, [x1]
0x03BC6BC8: fe0742f8  ldr x30, [sp], #0x20
0x03BC6BCC: 40001fd6  br x2
0x03BC6BD0: 37e8d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6BD4 | Framework.Core.Base$$FireSignal<object>
; native signature: void Framework_Core_Base__FireSignal_object_ (Framework_Core_Base_o* __this, Il2CppObject* signal, const MethodInfo_3BC6BD4* method);
; bytes=92 sha256=1b91f3b43da228cb34d3a2cdc208df067af83c6ee12fb4adbba72bd80500edca status=arm64_complete_bound indexed_start=True
0x03BC6BD4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC6BD8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC6BDC: 481c40f9  ldr x8, [x2, #0x38]
0x03BC6BE0: f40302aa  mov x20, x2
0x03BC6BE4: f30301aa  mov x19, x1
0x03BC6BE8: f50300aa  mov x21, x0
0x03BC6BEC: 680000b5  cbnz x8, #0x3bc6bf8
0x03BC6BF0: e00314aa  mov x0, x20
0x03BC6BF4: 213fd697  bl #0x3156878
0x03BC6BF8: a8624039  ldrb w8, [x21, #0x18]
0x03BC6BFC: 88000034  cbz w8, #0x3bc6c0c
0x03BC6C00: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6C04: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC6C08: c0035fd6  ret
0x03BC6C0C: a01240f9  ldr x0, [x21, #0x20]
0x03BC6C10: e00000b4  cbz x0, #0x3bc6c2c
0x03BC6C14: 881e40f9  ldr x8, [x20, #0x38]
0x03BC6C18: e10313aa  mov x1, x19
0x03BC6C1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6C20: 020540f9  ldr x2, [x8, #8]
0x03BC6C24: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC6C28: 51780714  b #0x3da4d6c
0x03BC6C2C: 20e8d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6C30 | Framework.Core.Base$$FireSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__FireSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o signal, const MethodInfo_3BC6C30* method);
; bytes=232 sha256=0770954ba6169b70459e11330c9532423fcbb28183ae106946fa98fd9f479c80 status=arm64_complete_bound indexed_start=True
0x03BC6C30: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03BC6C34: f70b00f9  str x23, [sp, #0x10]
0x03BC6C38: f65702a9  stp x22, x21, [sp, #0x20]
0x03BC6C3C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03BC6C40: fd030091  mov x29, sp
0x03BC6C44: ff8300d1  sub sp, sp, #0x20
0x03BC6C48: 56d03bd5  mrs x22, tpidr_el0
0x03BC6C4C: c81640f9  ldr x8, [x22, #0x28]
0x03BC6C50: f40301aa  mov x20, x1
0x03BC6C54: f50300aa  mov x21, x0
0x03BC6C58: a8831ff8  stur x8, [x29, #-8]
0x03BC6C5C: a1831ef8  stur x1, [x29, #-0x18]
0x03BC6C60: 571c40f9  ldr x23, [x2, #0x38]
0x03BC6C64: b70000b5  cbnz x23, #0x3bc6c78
0x03BC6C68: e00302aa  mov x0, x2
0x03BC6C6C: f30302aa  mov x19, x2
0x03BC6C70: 023fd697  bl #0x3156878
0x03BC6C74: 771e40f9  ldr x23, [x19, #0x38]
0x03BC6C78: e80240f9  ldr x8, [x23]
0x03BC6C7C: e9030091  mov x9, sp
0x03BC6C80: 02fd40b9  ldr w2, [x8, #0xfc]
0x03BC6C84: 4a3c0091  add x10, x2, #0xf
0x03BC6C88: 4a717c92  and x10, x10, #0x1fffffff0
0x03BC6C8C: 33010acb  sub x19, x9, x10
0x03BC6C90: 7f020091  mov sp, x19
0x03BC6C94: a9624039  ldrb w9, [x21, #0x18]
0x03BC6C98: 89020035  cbnz w9, #0x3bc6ce8
0x03BC6C9C: 082940b9  ldr w8, [x8, #0x28]
0x03BC6CA0: b51240f9  ldr x21, [x21, #0x20]
0x03BC6CA4: e00313aa  mov x0, x19
0x03BC6CA8: 1f010071  cmp w8, #0
0x03BC6CAC: a86300d1  sub x8, x29, #0x18
0x03BC6CB0: 81b2889a  csel x1, x20, x8, lt
0x03BC6CB4: 2f1fd894  bl #0x71ce970
0x03BC6CB8: d50200b4  cbz x21, #0x3bc6d10
0x03BC6CBC: e80640a9  ldp x8, x1, [x23]
0x03BC6CC0: 082940b9  ldr w8, [x8, #0x28]
0x03BC6CC4: 200040f9  ldr x0, [x1]
0x03BC6CC8: 4800f837  tbnz w8, #0x1f, #0x3bc6cd0
0x03BC6CCC: 730240f9  ldr x19, [x19]
0x03BC6CD0: b3031ff8  stur x19, [x29, #-0x10]
0x03BC6CD4: 280840f9  ldr x8, [x1, #0x10]
0x03BC6CD8: a34300d1  sub x3, x29, #0x10
0x03BC6CDC: e20315aa  mov x2, x21
0x03BC6CE0: e40313aa  mov x4, x19
0x03BC6CE4: 00013fd6  blr x8
0x03BC6CE8: c81640f9  ldr x8, [x22, #0x28]
0x03BC6CEC: a9835ff8  ldur x9, [x29, #-8]
0x03BC6CF0: 1f0109eb  cmp x8, x9
0x03BC6CF4: 01010054  b.ne #0x3bc6d14
0x03BC6CF8: bf030091  mov sp, x29
0x03BC6CFC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03BC6D00: f65742a9  ldp x22, x21, [sp, #0x20]
0x03BC6D04: f70b40f9  ldr x23, [sp, #0x10]
0x03BC6D08: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03BC6D0C: c0035fd6  ret
0x03BC6D10: e7e7d697  bl #0x3180cac
0x03BC6D14: 1f1fd894  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7220 | Framework.Core.Base$$TryFireSignal<object>
; native signature: void Framework_Core_Base__TryFireSignal_object_ (Framework_Core_Base_o* __this, Il2CppObject* signal, const MethodInfo_3BC7220* method);
; bytes=92 sha256=2515791ce8e0e443ac38fe13b098425a32dec3c6095fd2f8f41dde51b196a976 status=arm64_complete_bound indexed_start=True
0x03BC7220: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7224: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC7228: 481c40f9  ldr x8, [x2, #0x38]
0x03BC722C: f40302aa  mov x20, x2
0x03BC7230: f30301aa  mov x19, x1
0x03BC7234: f50300aa  mov x21, x0
0x03BC7238: 680000b5  cbnz x8, #0x3bc7244
0x03BC723C: e00314aa  mov x0, x20
0x03BC7240: 8e3dd697  bl #0x3156878
0x03BC7244: a8624039  ldrb w8, [x21, #0x18]
0x03BC7248: 88000034  cbz w8, #0x3bc7258
0x03BC724C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7250: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7254: c0035fd6  ret
0x03BC7258: a01240f9  ldr x0, [x21, #0x20]
0x03BC725C: e00000b4  cbz x0, #0x3bc7278
0x03BC7260: 881e40f9  ldr x8, [x20, #0x38]
0x03BC7264: e10313aa  mov x1, x19
0x03BC7268: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC726C: 020540f9  ldr x2, [x8, #8]
0x03BC7270: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7274: 9f790714  b #0x3da58f0
0x03BC7278: 8de6d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC727C | Framework.Core.Base$$TryFireSignal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__TryFireSignal___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o signal, const MethodInfo_3BC727C* method);
; bytes=232 sha256=95c18bc350d3b1e741acee1b7e29097f2be13a5cf83a03164a69ef7294b17d0d status=arm64_complete_bound indexed_start=True
0x03BC727C: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03BC7280: f70b00f9  str x23, [sp, #0x10]
0x03BC7284: f65702a9  stp x22, x21, [sp, #0x20]
0x03BC7288: f44f03a9  stp x20, x19, [sp, #0x30]
0x03BC728C: fd030091  mov x29, sp
0x03BC7290: ff8300d1  sub sp, sp, #0x20
0x03BC7294: 56d03bd5  mrs x22, tpidr_el0
0x03BC7298: c81640f9  ldr x8, [x22, #0x28]
0x03BC729C: f40301aa  mov x20, x1
0x03BC72A0: f50300aa  mov x21, x0
0x03BC72A4: a8831ff8  stur x8, [x29, #-8]
0x03BC72A8: a1831ef8  stur x1, [x29, #-0x18]
0x03BC72AC: 571c40f9  ldr x23, [x2, #0x38]
0x03BC72B0: b70000b5  cbnz x23, #0x3bc72c4
0x03BC72B4: e00302aa  mov x0, x2
0x03BC72B8: f30302aa  mov x19, x2
0x03BC72BC: 6f3dd697  bl #0x3156878
0x03BC72C0: 771e40f9  ldr x23, [x19, #0x38]
0x03BC72C4: e80240f9  ldr x8, [x23]
0x03BC72C8: e9030091  mov x9, sp
0x03BC72CC: 02fd40b9  ldr w2, [x8, #0xfc]
0x03BC72D0: 4a3c0091  add x10, x2, #0xf
0x03BC72D4: 4a717c92  and x10, x10, #0x1fffffff0
0x03BC72D8: 33010acb  sub x19, x9, x10
0x03BC72DC: 7f020091  mov sp, x19
0x03BC72E0: a9624039  ldrb w9, [x21, #0x18]
0x03BC72E4: 89020035  cbnz w9, #0x3bc7334
0x03BC72E8: 082940b9  ldr w8, [x8, #0x28]
0x03BC72EC: b51240f9  ldr x21, [x21, #0x20]
0x03BC72F0: e00313aa  mov x0, x19
0x03BC72F4: 1f010071  cmp w8, #0
0x03BC72F8: a86300d1  sub x8, x29, #0x18
0x03BC72FC: 81b2889a  csel x1, x20, x8, lt
0x03BC7300: 9c1dd894  bl #0x71ce970
0x03BC7304: d50200b4  cbz x21, #0x3bc735c
0x03BC7308: e80640a9  ldp x8, x1, [x23]
0x03BC730C: 082940b9  ldr w8, [x8, #0x28]
0x03BC7310: 200040f9  ldr x0, [x1]
0x03BC7314: 4800f837  tbnz w8, #0x1f, #0x3bc731c
0x03BC7318: 730240f9  ldr x19, [x19]
0x03BC731C: b3031ff8  stur x19, [x29, #-0x10]
0x03BC7320: 280840f9  ldr x8, [x1, #0x10]
0x03BC7324: a34300d1  sub x3, x29, #0x10
0x03BC7328: e20315aa  mov x2, x21
0x03BC732C: e40313aa  mov x4, x19
0x03BC7330: 00013fd6  blr x8
0x03BC7334: c81640f9  ldr x8, [x22, #0x28]
0x03BC7338: a9835ff8  ldur x9, [x29, #-8]
0x03BC733C: 1f0109eb  cmp x8, x9
0x03BC7340: 01010054  b.ne #0x3bc7360
0x03BC7344: bf030091  mov sp, x29
0x03BC7348: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03BC734C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03BC7350: f70b40f9  ldr x23, [sp, #0x10]
0x03BC7354: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03BC7358: c0035fd6  ret
0x03BC735C: 54e6d697  bl #0x3180cac
0x03BC7360: 8c1dd894  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6F20 | Framework.Core.Base$$Subscribe<object>
; native signature: void Framework_Core_Base__Subscribe_object_ (Framework_Core_Base_o* __this, System_Action_T__o* listener, const MethodInfo_3BC6F20* method);
; bytes=196 sha256=7bf0e9c36f90887a696561b03673cde627f66e689298e84f92845084309b6f00 status=arm64_complete_bound indexed_start=True
0x03BC6F20: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC6F24: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC6F28: 481c40f9  ldr x8, [x2, #0x38]
0x03BC6F2C: f50302aa  mov x21, x2
0x03BC6F30: f30301aa  mov x19, x1
0x03BC6F34: f40300aa  mov x20, x0
0x03BC6F38: 680000b5  cbnz x8, #0x3bc6f44
0x03BC6F3C: e00315aa  mov x0, x21
0x03BC6F40: 4e3ed697  bl #0x3156878
0x03BC6F44: 88624039  ldrb w8, [x20, #0x18]
0x03BC6F48: 88000034  cbz w8, #0x3bc6f58
0x03BC6F4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6F50: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC6F54: c0035fd6  ret
0x03BC6F58: 940a40f9  ldr x20, [x20, #0x10]
0x03BC6F5C: 340400b4  cbz x20, #0x3bc6fe0
0x03BC6F60: a91e40f9  ldr x9, [x21, #0x38]
0x03BC6F64: 880240f9  ldr x8, [x20]
0x03BC6F68: 350540f9  ldr x21, [x9, #8]
0x03BC6F6C: 095d4279  ldrh w9, [x8, #0x12e]
0x03BC6F70: a11240f9  ldr x1, [x21, #0x20]
0x03BC6F74: a2a24079  ldrh w2, [x21, #0x50]
0x03BC6F78: 290100b4  cbz x9, #0x3bc6f9c
0x03BC6F7C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BC6F80: 4a210091  add x10, x10, #8
0x03BC6F84: 4b815ff8  ldur x11, [x10, #-8]
0x03BC6F88: 7f0101eb  cmp x11, x1
0x03BC6F8C: e0000054  b.eq #0x3bc6fa8
0x03BC6F90: 290500f1  subs x9, x9, #1
0x03BC6F94: 4a410091  add x10, x10, #0x10
0x03BC6F98: 61ffff54  b.ne #0x3bc6f84
0x03BC6F9C: e00314aa  mov x0, x20
0x03BC6FA0: dc3ed697  bl #0x3156b10
0x03BC6FA4: 05000014  b #0x3bc6fb8
0x03BC6FA8: 490140b9  ldr w9, [x10]
0x03BC6FAC: 2901020b  add w9, w9, w2
0x03BC6FB0: 08d1298b  add x8, x8, w9, sxtw #4
0x03BC6FB4: 00e10491  add x0, x8, #0x138
0x03BC6FB8: 000440f9  ldr x0, [x0, #8]
0x03BC6FBC: e10315aa  mov x1, x21
0x03BC6FC0: f2e6d697  bl #0x3180b88
0x03BC6FC4: e20300aa  mov x2, x0
0x03BC6FC8: 030440f9  ldr x3, [x0, #8]
0x03BC6FCC: e00314aa  mov x0, x20
0x03BC6FD0: e10313aa  mov x1, x19
0x03BC6FD4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6FD8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC6FDC: 60001fd6  br x3
0x03BC6FE0: 33e7d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6FE4 | Framework.Core.Base$$Subscribe<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__Subscribe___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, System_Action_T__o* listener, const MethodInfo_3BC6FE4* method);
; bytes=196 sha256=a927f8d50999a51608180df4bc5f19a7066a4c32898ea622ca39383092690cd7 status=arm64_complete_bound indexed_start=True
0x03BC6FE4: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC6FE8: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC6FEC: 481c40f9  ldr x8, [x2, #0x38]
0x03BC6FF0: f50302aa  mov x21, x2
0x03BC6FF4: f30301aa  mov x19, x1
0x03BC6FF8: f40300aa  mov x20, x0
0x03BC6FFC: 680000b5  cbnz x8, #0x3bc7008
0x03BC7000: e00315aa  mov x0, x21
0x03BC7004: 1d3ed697  bl #0x3156878
0x03BC7008: 88624039  ldrb w8, [x20, #0x18]
0x03BC700C: 88000034  cbz w8, #0x3bc701c
0x03BC7010: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7014: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC7018: c0035fd6  ret
0x03BC701C: 940a40f9  ldr x20, [x20, #0x10]
0x03BC7020: 340400b4  cbz x20, #0x3bc70a4
0x03BC7024: a91e40f9  ldr x9, [x21, #0x38]
0x03BC7028: 880240f9  ldr x8, [x20]
0x03BC702C: 350540f9  ldr x21, [x9, #8]
0x03BC7030: 095d4279  ldrh w9, [x8, #0x12e]
0x03BC7034: a11240f9  ldr x1, [x21, #0x20]
0x03BC7038: a2a24079  ldrh w2, [x21, #0x50]
0x03BC703C: 290100b4  cbz x9, #0x3bc7060
0x03BC7040: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BC7044: 4a210091  add x10, x10, #8
0x03BC7048: 4b815ff8  ldur x11, [x10, #-8]
0x03BC704C: 7f0101eb  cmp x11, x1
0x03BC7050: e0000054  b.eq #0x3bc706c
0x03BC7054: 290500f1  subs x9, x9, #1
0x03BC7058: 4a410091  add x10, x10, #0x10
0x03BC705C: 61ffff54  b.ne #0x3bc7048
0x03BC7060: e00314aa  mov x0, x20
0x03BC7064: ab3ed697  bl #0x3156b10
0x03BC7068: 05000014  b #0x3bc707c
0x03BC706C: 490140b9  ldr w9, [x10]
0x03BC7070: 2901020b  add w9, w9, w2
0x03BC7074: 08d1298b  add x8, x8, w9, sxtw #4
0x03BC7078: 00e10491  add x0, x8, #0x138
0x03BC707C: 000440f9  ldr x0, [x0, #8]
0x03BC7080: e10315aa  mov x1, x21
0x03BC7084: c1e6d697  bl #0x3180b88
0x03BC7088: e20300aa  mov x2, x0
0x03BC708C: 030440f9  ldr x3, [x0, #8]
0x03BC7090: e00314aa  mov x0, x20
0x03BC7094: e10313aa  mov x1, x19
0x03BC7098: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC709C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC70A0: 60001fd6  br x3
0x03BC70A4: 02e7d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7364 | Framework.Core.Base$$Unsubscribe<object>
; native signature: void Framework_Core_Base__Unsubscribe_object_ (Framework_Core_Base_o* __this, System_Action_T__o* listener, const MethodInfo_3BC7364* method);
; bytes=176 sha256=2a5a7ae20208a507b69ec2de97275d33a69a8136387de70ae4d79b627a4309f8 status=arm64_complete_bound indexed_start=True
0x03BC7364: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7368: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC736C: 481c40f9  ldr x8, [x2, #0x38]
0x03BC7370: f50302aa  mov x21, x2
0x03BC7374: f30301aa  mov x19, x1
0x03BC7378: f40300aa  mov x20, x0
0x03BC737C: 680000b5  cbnz x8, #0x3bc7388
0x03BC7380: e00315aa  mov x0, x21
0x03BC7384: 3d3dd697  bl #0x3156878
0x03BC7388: 940a40f9  ldr x20, [x20, #0x10]
0x03BC738C: 340400b4  cbz x20, #0x3bc7410
0x03BC7390: a91e40f9  ldr x9, [x21, #0x38]
0x03BC7394: 880240f9  ldr x8, [x20]
0x03BC7398: 350540f9  ldr x21, [x9, #8]
0x03BC739C: 095d4279  ldrh w9, [x8, #0x12e]
0x03BC73A0: a11240f9  ldr x1, [x21, #0x20]
0x03BC73A4: a2a24079  ldrh w2, [x21, #0x50]
0x03BC73A8: 290100b4  cbz x9, #0x3bc73cc
0x03BC73AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BC73B0: 4a210091  add x10, x10, #8
0x03BC73B4: 4b815ff8  ldur x11, [x10, #-8]
0x03BC73B8: 7f0101eb  cmp x11, x1
0x03BC73BC: e0000054  b.eq #0x3bc73d8
0x03BC73C0: 290500f1  subs x9, x9, #1
0x03BC73C4: 4a410091  add x10, x10, #0x10
0x03BC73C8: 61ffff54  b.ne #0x3bc73b4
0x03BC73CC: e00314aa  mov x0, x20
0x03BC73D0: d03dd697  bl #0x3156b10
0x03BC73D4: 05000014  b #0x3bc73e8
0x03BC73D8: 490140b9  ldr w9, [x10]
0x03BC73DC: 2901020b  add w9, w9, w2
0x03BC73E0: 08d1298b  add x8, x8, w9, sxtw #4
0x03BC73E4: 00e10491  add x0, x8, #0x138
0x03BC73E8: 000440f9  ldr x0, [x0, #8]
0x03BC73EC: e10315aa  mov x1, x21
0x03BC73F0: e6e5d697  bl #0x3180b88
0x03BC73F4: e20300aa  mov x2, x0
0x03BC73F8: 030440f9  ldr x3, [x0, #8]
0x03BC73FC: e00314aa  mov x0, x20
0x03BC7400: e10313aa  mov x1, x19
0x03BC7404: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC7408: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC740C: 60001fd6  br x3
0x03BC7410: 27e6d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC7414 | Framework.Core.Base$$Unsubscribe<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__Unsubscribe___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, System_Action_T__o* listener, const MethodInfo_3BC7414* method);
; bytes=176 sha256=b8c6f360adee7d770f0e023f6f21514fc88e24178384c410b6f85f74b7901bd7 status=arm64_complete_bound indexed_start=True
0x03BC7414: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC7418: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC741C: 481c40f9  ldr x8, [x2, #0x38]
0x03BC7420: f50302aa  mov x21, x2
0x03BC7424: f30301aa  mov x19, x1
0x03BC7428: f40300aa  mov x20, x0
0x03BC742C: 680000b5  cbnz x8, #0x3bc7438
0x03BC7430: e00315aa  mov x0, x21
0x03BC7434: 113dd697  bl #0x3156878
0x03BC7438: 940a40f9  ldr x20, [x20, #0x10]
0x03BC743C: 340400b4  cbz x20, #0x3bc74c0
0x03BC7440: a91e40f9  ldr x9, [x21, #0x38]
0x03BC7444: 880240f9  ldr x8, [x20]
0x03BC7448: 350540f9  ldr x21, [x9, #8]
0x03BC744C: 095d4279  ldrh w9, [x8, #0x12e]
0x03BC7450: a11240f9  ldr x1, [x21, #0x20]
0x03BC7454: a2a24079  ldrh w2, [x21, #0x50]
0x03BC7458: 290100b4  cbz x9, #0x3bc747c
0x03BC745C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BC7460: 4a210091  add x10, x10, #8
0x03BC7464: 4b815ff8  ldur x11, [x10, #-8]
0x03BC7468: 7f0101eb  cmp x11, x1
0x03BC746C: e0000054  b.eq #0x3bc7488
0x03BC7470: 290500f1  subs x9, x9, #1
0x03BC7474: 4a410091  add x10, x10, #0x10
0x03BC7478: 61ffff54  b.ne #0x3bc7464
0x03BC747C: e00314aa  mov x0, x20
0x03BC7480: a43dd697  bl #0x3156b10
0x03BC7484: 05000014  b #0x3bc7498
0x03BC7488: 490140b9  ldr w9, [x10]
0x03BC748C: 2901020b  add w9, w9, w2
0x03BC7490: 08d1298b  add x8, x8, w9, sxtw #4
0x03BC7494: 00e10491  add x0, x8, #0x138
0x03BC7498: 000440f9  ldr x0, [x0, #8]
0x03BC749C: e10315aa  mov x1, x21
0x03BC74A0: bae5d697  bl #0x3180b88
0x03BC74A4: e20300aa  mov x2, x0
0x03BC74A8: 030440f9  ldr x3, [x0, #8]
0x03BC74AC: e00314aa  mov x0, x20
0x03BC74B0: e10313aa  mov x1, x19
0x03BC74B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC74B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC74BC: 60001fd6  br x3
0x03BC74C0: fbe5d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6D18 | Framework.Core.Base$$Publish<object>
; native signature: void Framework_Core_Base__Publish_object_ (Framework_Core_Base_o* __this, Il2CppObject* data, const MethodInfo_3BC6D18* method);
; bytes=196 sha256=1ad8b8afdc55b693b8d786b7507d130ff4ee4789a42358f1d894d7a9d338432c status=arm64_complete_bound indexed_start=True
0x03BC6D18: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03BC6D1C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BC6D20: 481c40f9  ldr x8, [x2, #0x38]
0x03BC6D24: f50302aa  mov x21, x2
0x03BC6D28: f30301aa  mov x19, x1
0x03BC6D2C: f40300aa  mov x20, x0
0x03BC6D30: 680000b5  cbnz x8, #0x3bc6d3c
0x03BC6D34: e00315aa  mov x0, x21
0x03BC6D38: d03ed697  bl #0x3156878
0x03BC6D3C: 88624039  ldrb w8, [x20, #0x18]
0x03BC6D40: 88000034  cbz w8, #0x3bc6d50
0x03BC6D44: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6D48: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC6D4C: c0035fd6  ret
0x03BC6D50: 940a40f9  ldr x20, [x20, #0x10]
0x03BC6D54: 340400b4  cbz x20, #0x3bc6dd8
0x03BC6D58: a91e40f9  ldr x9, [x21, #0x38]
0x03BC6D5C: 880240f9  ldr x8, [x20]
0x03BC6D60: 350540f9  ldr x21, [x9, #8]
0x03BC6D64: 095d4279  ldrh w9, [x8, #0x12e]
0x03BC6D68: a11240f9  ldr x1, [x21, #0x20]
0x03BC6D6C: a2a24079  ldrh w2, [x21, #0x50]
0x03BC6D70: 290100b4  cbz x9, #0x3bc6d94
0x03BC6D74: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BC6D78: 4a210091  add x10, x10, #8
0x03BC6D7C: 4b815ff8  ldur x11, [x10, #-8]
0x03BC6D80: 7f0101eb  cmp x11, x1
0x03BC6D84: e0000054  b.eq #0x3bc6da0
0x03BC6D88: 290500f1  subs x9, x9, #1
0x03BC6D8C: 4a410091  add x10, x10, #0x10
0x03BC6D90: 61ffff54  b.ne #0x3bc6d7c
0x03BC6D94: e00314aa  mov x0, x20
0x03BC6D98: 5e3fd697  bl #0x3156b10
0x03BC6D9C: 05000014  b #0x3bc6db0
0x03BC6DA0: 490140b9  ldr w9, [x10]
0x03BC6DA4: 2901020b  add w9, w9, w2
0x03BC6DA8: 08d1298b  add x8, x8, w9, sxtw #4
0x03BC6DAC: 00e10491  add x0, x8, #0x138
0x03BC6DB0: 000440f9  ldr x0, [x0, #8]
0x03BC6DB4: e10315aa  mov x1, x21
0x03BC6DB8: 74e7d697  bl #0x3180b88
0x03BC6DBC: e20300aa  mov x2, x0
0x03BC6DC0: 030440f9  ldr x3, [x0, #8]
0x03BC6DC4: e00314aa  mov x0, x20
0x03BC6DC8: e10313aa  mov x1, x19
0x03BC6DCC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BC6DD0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03BC6DD4: 60001fd6  br x3
0x03BC6DD8: b5e7d697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BC6DDC | Framework.Core.Base$$Publish<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Base__Publish___Il2CppFullySharedGenericType_ (Framework_Core_Base_o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o data, const MethodInfo_3BC6DDC* method);
; bytes=324 sha256=5e1c9a16a4154c315e8e52d4b81ccb481fc04df98d97287c78e7e9b788b9df70 status=arm64_complete_bound indexed_start=True
0x03BC6DDC: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03BC6DE0: f70b00f9  str x23, [sp, #0x10]
0x03BC6DE4: f65702a9  stp x22, x21, [sp, #0x20]
0x03BC6DE8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03BC6DEC: fd030091  mov x29, sp
0x03BC6DF0: ff8300d1  sub sp, sp, #0x20
0x03BC6DF4: 56d03bd5  mrs x22, tpidr_el0
0x03BC6DF8: c81640f9  ldr x8, [x22, #0x28]
0x03BC6DFC: f50301aa  mov x21, x1
0x03BC6E00: f40300aa  mov x20, x0
0x03BC6E04: a8831ff8  stur x8, [x29, #-8]
0x03BC6E08: a1831ef8  stur x1, [x29, #-0x18]
0x03BC6E0C: 571c40f9  ldr x23, [x2, #0x38]
0x03BC6E10: b70000b5  cbnz x23, #0x3bc6e24
0x03BC6E14: e00302aa  mov x0, x2
0x03BC6E18: f30302aa  mov x19, x2
0x03BC6E1C: 973ed697  bl #0x3156878
0x03BC6E20: 771e40f9  ldr x23, [x19, #0x38]
0x03BC6E24: e80240f9  ldr x8, [x23]
0x03BC6E28: e9030091  mov x9, sp
0x03BC6E2C: 02fd40b9  ldr w2, [x8, #0xfc]
0x03BC6E30: 4a3c0091  add x10, x2, #0xf
0x03BC6E34: 4a717c92  and x10, x10, #0x1fffffff0
0x03BC6E38: 33010acb  sub x19, x9, x10
0x03BC6E3C: 7f020091  mov sp, x19
0x03BC6E40: 89624039  ldrb w9, [x20, #0x18]
0x03BC6E44: 69050035  cbnz w9, #0x3bc6ef0
0x03BC6E48: 082940b9  ldr w8, [x8, #0x28]
0x03BC6E4C: 940a40f9  ldr x20, [x20, #0x10]
0x03BC6E50: e00313aa  mov x0, x19
0x03BC6E54: 1f010071  cmp w8, #0
0x03BC6E58: a86300d1  sub x8, x29, #0x18
0x03BC6E5C: a1b2889a  csel x1, x21, x8, lt
0x03BC6E60: c41ed894  bl #0x71ce970
0x03BC6E64: b40500b4  cbz x20, #0x3bc6f18
0x03BC6E68: e85640a9  ldp x8, x21, [x23]
0x03BC6E6C: 082940b9  ldr w8, [x8, #0x28]
0x03BC6E70: 4800f837  tbnz w8, #0x1f, #0x3bc6e78
0x03BC6E74: 730240f9  ldr x19, [x19]
0x03BC6E78: 880240f9  ldr x8, [x20]
0x03BC6E7C: a11240f9  ldr x1, [x21, #0x20]
0x03BC6E80: a2a24079  ldrh w2, [x21, #0x50]
0x03BC6E84: 095d4279  ldrh w9, [x8, #0x12e]
0x03BC6E88: 290100b4  cbz x9, #0x3bc6eac
0x03BC6E8C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03BC6E90: 4a210091  add x10, x10, #8
0x03BC6E94: 4b815ff8  ldur x11, [x10, #-8]
0x03BC6E98: 7f0101eb  cmp x11, x1
0x03BC6E9C: e0000054  b.eq #0x3bc6eb8
0x03BC6EA0: 290500f1  subs x9, x9, #1
0x03BC6EA4: 4a410091  add x10, x10, #0x10
0x03BC6EA8: 61ffff54  b.ne #0x3bc6e94
0x03BC6EAC: e00314aa  mov x0, x20
0x03BC6EB0: 183fd697  bl #0x3156b10
0x03BC6EB4: 05000014  b #0x3bc6ec8
0x03BC6EB8: 490140b9  ldr w9, [x10]
0x03BC6EBC: 2901020b  add w9, w9, w2
0x03BC6EC0: 08d1298b  add x8, x8, w9, sxtw #4
0x03BC6EC4: 00e10491  add x0, x8, #0x138
0x03BC6EC8: 000440f9  ldr x0, [x0, #8]
0x03BC6ECC: e10315aa  mov x1, x21
0x03BC6ED0: 2ee7d697  bl #0x3180b88
0x03BC6ED4: b3031ff8  stur x19, [x29, #-0x10]
0x03BC6ED8: e10300aa  mov x1, x0
0x03BC6EDC: 00a040a9  ldp x0, x8, [x0, #8]
0x03BC6EE0: a34300d1  sub x3, x29, #0x10
0x03BC6EE4: e20314aa  mov x2, x20
0x03BC6EE8: e40313aa  mov x4, x19
0x03BC6EEC: 00013fd6  blr x8
0x03BC6EF0: c81640f9  ldr x8, [x22, #0x28]
0x03BC6EF4: a9835ff8  ldur x9, [x29, #-8]
0x03BC6EF8: 1f0109eb  cmp x8, x9
0x03BC6EFC: 01010054  b.ne #0x3bc6f1c
0x03BC6F00: bf030091  mov sp, x29
0x03BC6F04: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03BC6F08: f65742a9  ldp x22, x21, [sp, #0x20]
0x03BC6F0C: f70b40f9  ldr x23, [sp, #0x10]
0x03BC6F10: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03BC6F14: c0035fd6  ret
0x03BC6F18: 65e7d697  bl #0x3180cac
0x03BC6F1C: 9d1ed894  bl #0x71ce990

