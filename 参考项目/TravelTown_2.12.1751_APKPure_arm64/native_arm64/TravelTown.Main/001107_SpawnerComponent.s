; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1107 MergeEngine.ECS.Components.Items.Producers.SpawnerComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6900474 | public bool get_Anywhere() { }
; bytes=8 sha256=87dcbe320c60fbb0ec9755802900c459ba1319bf67e25398856f8e5cd63de6b6 status=arm64_complete_bound indexed_start=True
0x06900474: 00204239  ldrb w0, [x0, #0x88]
0x06900478: c0035fd6  ret

; RVA 0x690047C | public void .ctor(SpawnCapability capability, Entity entity) { }
; bytes=116 sha256=77017b6437c87dc357dfdcd58759deddc83597ed4065d3455b70dd2f9f88abb9 status=arm64_complete_bound indexed_start=True
0x0690047C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06900480: f65701a9  stp x22, x21, [sp, #0x10]
0x06900484: f44f02a9  stp x20, x19, [sp, #0x20]
0x06900488: 56a100b0  adrp x22, #0x7d29000
0x0690048C: 377100d0  adrp x23, #0x7726000
0x06900490: c8a26339  ldrb w8, [x22, #0x8e8]
0x06900494: f72e44f9  ldr x23, [x23, #0x858]
0x06900498: f50302aa  mov x21, x2
0x0690049C: f40301aa  mov x20, x1
0x069004A0: f30300aa  mov x19, x0
0x069004A4: c8000037  tbnz w8, #0, #0x69004bc
0x069004A8: 207100d0  adrp x0, #0x7726000
0x069004AC: 002c44f9  ldr x0, [x0, #0x858]
0x069004B0: 5a012297  bl #0x3180a18
0x069004B4: 28008052  movz w8, #0x1
0x069004B8: c8a22339  strb w8, [x22, #0x8e8]
0x069004BC: e30240f9  ldr x3, [x23]
0x069004C0: e00313aa  mov x0, x19
0x069004C4: e10314aa  mov x1, x20
0x069004C8: e20315aa  mov x2, x21
0x069004CC: 1d4daa97  bl #0x5393940
0x069004D0: f40000b4  cbz x20, #0x69004ec
0x069004D4: 88024239  ldrb w8, [x20, #0x80]
0x069004D8: f65741a9  ldp x22, x21, [sp, #0x10]
0x069004DC: 68220239  strb w8, [x19, #0x88]
0x069004E0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x069004E4: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x069004E8: c0035fd6  ret
0x069004EC: f0012297  bl #0x3180cac

