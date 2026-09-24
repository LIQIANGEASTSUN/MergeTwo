; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11221 Framework.Core.MVVM.Model.ModelBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x694BF18 | private void Zenject.IInitializable.Initialize() { }
; bytes=16 sha256=deebe64130abf08a5d8041d7fad35041ffd2c550474433bdc87e7542709f9701 status=arm64_complete_bound indexed_start=True
0x0694BF18: 080040f9  ldr x8, [x0]
0x0694BF1C: 022541f9  ldr x2, [x8, #0x248]
0x0694BF20: 012941f9  ldr x1, [x8, #0x250]
0x0694BF24: 40001fd6  br x2

; RVA 0x694BF28 | private void System.IDisposable.Dispose() { }
; bytes=40 sha256=3410078e12b6a7469a0cefd325b6ddb88b214ba0811a9001f5bea3dcf8c066dc status=arm64_complete_bound indexed_start=True
0x0694BF28: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x0694BF2C: 080040f9  ldr x8, [x0]
0x0694BF30: f30300aa  mov x19, x0
0x0694BF34: 092d41f9  ldr x9, [x8, #0x258]
0x0694BF38: 013141f9  ldr x1, [x8, #0x260]
0x0694BF3C: 20013fd6  blr x9
0x0694BF40: e00313aa  mov x0, x19
0x0694BF44: e1031faa  mov x1, xzr
0x0694BF48: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x0694BF4C: d39bfd17  b #0x68b2e98

; RVA 0x694BF50 | protected virtual void InitializeModel() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0694BF50: c0035fd6  ret

; RVA 0x694BF54 | protected virtual void DisposeModel() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x0694BF54: c0035fd6  ret

; RVA 0x694BF58 | public void .ctor() { }
; bytes=8 sha256=9c37d4a0cdae97f185146c93711e718ce9227684d999010b46f89ce58c591330 status=arm64_complete_bound indexed_start=True
0x0694BF58: e1031faa  mov x1, xzr
0x0694BF5C: e89bfd17  b #0x68b2efc

