; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10570 Framework.Core.Services.ServiceBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68C9784 | private void Zenject.IInitializable.Initialize() { }
; bytes=16 sha256=deebe64130abf08a5d8041d7fad35041ffd2c550474433bdc87e7542709f9701 status=arm64_complete_bound indexed_start=True
0x068C9784: 080040f9  ldr x8, [x0]
0x068C9788: 022541f9  ldr x2, [x8, #0x248]
0x068C978C: 012941f9  ldr x1, [x8, #0x250]
0x068C9790: 40001fd6  br x2

; RVA 0x68C9794 | private void System.IDisposable.Dispose() { }
; bytes=40 sha256=462a14c587d2a48db62318577c44de15b6d9134450e83758e19e34866606daa5 status=arm64_complete_bound indexed_start=True
0x068C9794: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x068C9798: 080040f9  ldr x8, [x0]
0x068C979C: f30300aa  mov x19, x0
0x068C97A0: 092d41f9  ldr x9, [x8, #0x258]
0x068C97A4: 013141f9  ldr x1, [x8, #0x260]
0x068C97A8: 20013fd6  blr x9
0x068C97AC: e00313aa  mov x0, x19
0x068C97B0: e1031faa  mov x1, xzr
0x068C97B4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x068C97B8: b8a5ff17  b #0x68b2e98

; RVA 0x68C97BC | protected virtual void InitializeService() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x068C97BC: c0035fd6  ret

; RVA 0x68C97C0 | protected virtual void DisposeService() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x068C97C0: c0035fd6  ret

; RVA 0x68C97C4 | public void .ctor() { }
; bytes=8 sha256=7c32fd00c24eb384066dd1f7c331a0a6a7aa0f16d4ec4612403c0df5644661bd status=arm64_complete_bound indexed_start=True
0x068C97C4: e1031faa  mov x1, xzr
0x068C97C8: cda5ff17  b #0x68b2efc

