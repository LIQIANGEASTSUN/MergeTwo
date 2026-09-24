; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11216 Framework.Core.MVVM.View.ViewBase<TViewModel>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4931D30 | Framework.Core.MVVM.View.ViewBase<object>$$get_ViewModel
; native signature: Il2CppObject* Framework_Core_MVVM_View_ViewBase_object___get_ViewModel (Framework_Core_MVVM_View_ViewBase_TViewModel__o* __this, const MethodInfo_4931D30* method);
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x04931D30: 001440f9  ldr x0, [x0, #0x28]
0x04931D34: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4931D38 | Framework.Core.MVVM.View.ViewBase<object>$$OnDestroy
; native signature: void Framework_Core_MVVM_View_ViewBase_object___OnDestroy (Framework_Core_MVVM_View_ViewBase_TViewModel__o* __this, const MethodInfo_4931D38* method);
; bytes=68 sha256=ed12994d92c998d8d37a9c950d4aaa7c5c3c42f9f31ce90f0169b95ba1fb0b8e status=arm64_complete_bound indexed_start=True
0x04931D38: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x04931D3C: e00100b4  cbz x0, #0x4931d78
0x04931D40: e1031faa  mov x1, xzr
0x04931D44: f30300aa  mov x19, x0
0x04931D48: 8fbc9694  bl #0x6ee0f84
0x04931D4C: 601640f9  ldr x0, [x19, #0x28]
0x04931D50: 000100b4  cbz x0, #0x4931d70
0x04931D54: e1031faa  mov x1, xzr
0x04931D58: 50047e94  bl #0x68b2e98
0x04931D5C: 601640f9  ldr x0, [x19, #0x28]
0x04931D60: 800000b4  cbz x0, #0x4931d70
0x04931D64: e1031faa  mov x1, xzr
0x04931D68: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x04931D6C: f4668014  b #0x694b93c
0x04931D70: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x04931D74: c0035fd6  ret
0x04931D78: cd3ba197  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4931D7C | Framework.Core.MVVM.View.ViewBase<object>$$.ctor
; native signature: void Framework_Core_MVVM_View_ViewBase_object____ctor (Framework_Core_MVVM_View_ViewBase_TViewModel__o* __this, const MethodInfo_4931D7C* method);
; bytes=8 sha256=08c16085ab4ed31b82fd02f52f4c6808f6366bc14126130f155ea6087d8a12c8 status=arm64_complete_bound indexed_start=True
0x04931D7C: e1031faa  mov x1, xzr
0x04931D80: 90c37d14  b #0x68a2bc0

