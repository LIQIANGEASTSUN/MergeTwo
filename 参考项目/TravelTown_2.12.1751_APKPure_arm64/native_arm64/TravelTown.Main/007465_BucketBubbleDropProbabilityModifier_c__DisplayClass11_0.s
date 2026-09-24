; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7465 .BucketBubbleDropProbabilityModifier.<>c__DisplayClass11_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657E590 | public void .ctor() { }
; bytes=8 sha256=9f43ea23be37fa3d2bd203a27c0dc44a6942b63f622e84c42fa2057cda216679 status=arm64_complete_bound indexed_start=True
0x0657E590: e1031faa  mov x1, xzr
0x0657E594: 1a70c517  b #0x56da5fc

; RVA 0x657FA14 | internal bool <TryModifyProbability>b__0(Bucket b) { }
; bytes=56 sha256=edea5a49cc851157713f752bc10032bdb64a7d853c36afa626a497cd5eab28e6 status=arm64_complete_bound indexed_start=True
0x0657FA14: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657FA18: 810100b4  cbz x1, #0x657fa48
0x0657FA1C: 081040b9  ldr w8, [x0, #0x10]
0x0657FA20: 291040b9  ldr w9, [x1, #0x10]
0x0657FA24: 3f01086b  cmp w9, w8
0x0657FA28: 6d000054  b.le #0x657fa34
0x0657FA2C: e0031f2a  mov w0, wzr
0x0657FA30: 04000014  b #0x657fa40
0x0657FA34: 291440b9  ldr w9, [x1, #0x14]
0x0657FA38: 3f01086b  cmp w9, w8
0x0657FA3C: e0b79f1a  cset w0, ge
0x0657FA40: fe0741f8  ldr x30, [sp], #0x10
0x0657FA44: c0035fd6  ret
0x0657FA48: 99043097  bl #0x3180cac

