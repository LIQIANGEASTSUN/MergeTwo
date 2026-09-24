; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33689 ContextualizedECS.Systems.SystemInfo
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F15168 | internal ISystem get_System() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x05F15168: 000840f9  ldr x0, [x0, #0x10]
0x05F1516C: c0035fd6  ret

; RVA 0x5F15170 | internal void set_System(ISystem value) { }
; bytes=8 sha256=0e8fbc4c8cb2c26e78c9d43b68a9568e637513316798e207a623a3ff12fe898c status=arm64_complete_bound indexed_start=True
0x05F15170: 010c01f8  str x1, [x0, #0x10]!
0x05F15174: 14ae4917  b #0x31809c4

; RVA 0x5F15178 | internal Type get_SystemType() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x05F15178: 000c40f9  ldr x0, [x0, #0x18]
0x05F1517C: c0035fd6  ret

; RVA 0x5F15180 | internal void set_SystemType(Type value) { }
; bytes=8 sha256=c26fabb7371e7366c18e5e93421f08db44236706851829c9e92c5034af113f9f status=arm64_complete_bound indexed_start=True
0x05F15180: 018c01f8  str x1, [x0, #0x18]!
0x05F15184: 10ae4917  b #0x31809c4

; RVA 0x5F15188 | internal Func<IList<SystemInfo>, int> get_ResolveMethod() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x05F15188: 001040f9  ldr x0, [x0, #0x20]
0x05F1518C: c0035fd6  ret

; RVA 0x5F15190 | internal void set_ResolveMethod(Func<IList<SystemInfo>, int> value) { }
; bytes=8 sha256=6290ad98d659763bbd31f0bcbe0c23cb122a5852c02a34a15e42b734f5565601 status=arm64_complete_bound indexed_start=True
0x05F15190: 010c02f8  str x1, [x0, #0x20]!
0x05F15194: 0cae4917  b #0x31809c4

; RVA 0x5F15198 | internal void .ctor(ISystem system, Type systemType) { }
; bytes=68 sha256=99600061366295e3fa415db400852ab6edf85f8c4c651147a11d5117092d0881 status=arm64_complete_bound indexed_start=True
0x05F15198: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05F1519C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F151A0: f40301aa  mov x20, x1
0x05F151A4: e1031faa  mov x1, xzr
0x05F151A8: f30302aa  mov x19, x2
0x05F151AC: f50300aa  mov x21, x0
0x05F151B0: 1315df97  bl #0x56da5fc
0x05F151B4: e00315aa  mov x0, x21
0x05F151B8: 140c01f8  str x20, [x0, #0x10]!
0x05F151BC: e10314aa  mov x1, x20
0x05F151C0: 01ae4997  bl #0x31809c4
0x05F151C4: b38e01f8  str x19, [x21, #0x18]!
0x05F151C8: e10313aa  mov x1, x19
0x05F151CC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F151D0: e00315aa  mov x0, x21
0x05F151D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F151D8: fbad4917  b #0x31809c4

