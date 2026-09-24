; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25782 .TimeDurationSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A77AC4 | private static void .cctor() { }
; bytes=104 sha256=1c99b65020a6ceb9ad489d313f287e64fa6211026d9fa8c327235273fb04b74b status=arm64_complete_bound indexed_start=True
0x06A77AC4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A77AC8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A77ACC: 939500f0  adrp x19, #0x7d2a000
0x06A77AD0: d46500d0  adrp x20, #0x7731000
0x06A77AD4: 683a5c39  ldrb w8, [x19, #0x70e]
0x06A77AD8: 942243f9  ldr x20, [x20, #0x640]
0x06A77ADC: c8000037  tbnz w8, #0, #0x6a77af4
0x06A77AE0: c06500d0  adrp x0, #0x7731000
0x06A77AE4: 002043f9  ldr x0, [x0, #0x640]
0x06A77AE8: cc231c97  bl #0x3180a18
0x06A77AEC: 28008052  movz w8, #0x1
0x06A77AF0: 683a1c39  strb w8, [x19, #0x70e]
0x06A77AF4: 800240f9  ldr x0, [x20]
0x06A77AF8: 6a241c97  bl #0x3180ca0
0x06A77AFC: e1031faa  mov x1, xzr
0x06A77B00: f30300aa  mov x19, x0
0x06A77B04: be8ab197  bl #0x56da5fc
0x06A77B08: 880240f9  ldr x8, [x20]
0x06A77B0C: e10313aa  mov x1, x19
0x06A77B10: 085d40f9  ldr x8, [x8, #0xb8]
0x06A77B14: 130100f9  str x19, [x8]
0x06A77B18: 880240f9  ldr x8, [x20]
0x06A77B1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A77B20: 005d40f9  ldr x0, [x8, #0xb8]
0x06A77B24: fe0742f8  ldr x30, [sp], #0x20
0x06A77B28: a7231c17  b #0x31809c4

; RVA 0x6A77B2C | public void .ctor() { }
; bytes=8 sha256=85424df97028a19b19015b28128a9ed5896d94cd9b27daffcb5a68f00a775343 status=arm64_complete_bound indexed_start=True
0x06A77B2C: e1031faa  mov x1, xzr
0x06A77B30: b38ab117  b #0x56da5fc

; RVA 0x6A77B34 | internal bool <Tick>b__0_0(ValueTuple<Entity, TimeDurationComponent, IdComponent, BoardTilePositionComponent> timeDuration) { }
; bytes=60 sha256=403291c276e953d04bcb3c50a80ee611b8cc1322a6be9b803907e9c0ace3db2f status=arm64_complete_bound indexed_start=True
0x06A77B34: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A77B38: 200040f9  ldr x0, [x1]
0x06A77B3C: f30301aa  mov x19, x1
0x06A77B40: e1031faa  mov x1, xzr
0x06A77B44: 683b0094  bl #0x6a868e4
0x06A77B48: e0000037  tbnz w0, #0, #0x6a77b64
0x06A77B4C: 68424039  ldrb w8, [x19, #0x10]
0x06A77B50: a8000034  cbz w8, #0x6a77b64
0x06A77B54: 600640fd  ldr d0, [x19, #8]
0x06A77B58: 0820601e  fcmp d0, #0.0
0x06A77B5C: e0d79f1a  cset w0, gt
0x06A77B60: 02000014  b #0x6a77b68
0x06A77B64: e0031f2a  mov w0, wzr
0x06A77B68: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A77B6C: c0035fd6  ret

