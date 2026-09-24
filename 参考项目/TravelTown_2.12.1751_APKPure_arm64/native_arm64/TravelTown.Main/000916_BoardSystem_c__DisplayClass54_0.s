; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 916 .BoardSystem.<>c__DisplayClass54_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6669E4C | public void .ctor() { }
; bytes=8 sha256=7b92d06e9ae555f15368c2dd626f7bdaa80a33151f25212415811ce093dc3d3b status=arm64_complete_bound indexed_start=True
0x06669E4C: e1031faa  mov x1, xzr
0x06669E50: ebc1c117  b #0x56da5fc

; RVA 0x666BD04 | internal int <GetClosestAvailablePositionTo>b__0(BoardItemPosition item1, BoardItemPosition item2) { }
; bytes=216 sha256=72515d3215c733138aac596a0de9f662c53bcf0e628cd4d81d7256ec13ddc43e status=arm64_complete_bound indexed_start=True
0x0666BD04: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0666BD08: f65701a9  stp x22, x21, [sp, #0x10]
0x0666BD0C: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666BD10: f6b500b0  adrp x22, #0x7d28000
0x0666BD14: c8aa4339  ldrb w8, [x22, #0xea]
0x0666BD18: f40302aa  mov x20, x2
0x0666BD1C: f50301aa  mov x21, x1
0x0666BD20: f30300aa  mov x19, x0
0x0666BD24: 28010037  tbnz w8, #0, #0x666bd48
0x0666BD28: e0840090  adrp x0, #0x7707000
0x0666BD2C: 00a847f9  ldr x0, [x0, #0xf50]
0x0666BD30: 3a532c97  bl #0x3180a18
0x0666BD34: e0840090  adrp x0, #0x7707000
0x0666BD38: 00c047f9  ldr x0, [x0, #0xf80]
0x0666BD3C: 37532c97  bl #0x3180a18
0x0666BD40: 28008052  movz w8, #0x1
0x0666BD44: c8aa0339  strb w8, [x22, #0xea]
0x0666BD48: 680a40f9  ldr x8, [x19, #0x10]
0x0666BD4C: 680400b4  cbz x8, #0x666bdd8
0x0666BD50: 084540f9  ldr x8, [x8, #0x88]
0x0666BD54: 280400b4  cbz x8, #0x666bdd8
0x0666BD58: 002540f9  ldr x0, [x8, #0x48]
0x0666BD5C: e00300b4  cbz x0, #0x666bdd8
0x0666BD60: f6840090  adrp x22, #0x7707000
0x0666BD64: d6aa47f9  ldr x22, [x22, #0xf50]
0x0666BD68: e10315aa  mov x1, x21
0x0666BD6C: c20240f9  ldr x2, [x22]
0x0666BD70: b7bd9d97  bl #0x4ddb44c
0x0666BD74: 200300b4  cbz x0, #0x666bdd8
0x0666BD78: f7840090  adrp x23, #0x7707000
0x0666BD7C: f7c247f9  ldr x23, [x23, #0xf80]
0x0666BD80: 610e40f9  ldr x1, [x19, #0x18]
0x0666BD84: e20240f9  ldr x2, [x23]
0x0666BD88: 37b09d97  bl #0x4dd7e64
0x0666BD8C: 680a40f9  ldr x8, [x19, #0x10]
0x0666BD90: 480200b4  cbz x8, #0x666bdd8
0x0666BD94: 084540f9  ldr x8, [x8, #0x88]
0x0666BD98: 080200b4  cbz x8, #0x666bdd8
0x0666BD9C: f503002a  mov w21, w0
0x0666BDA0: 002540f9  ldr x0, [x8, #0x48]
0x0666BDA4: a00100b4  cbz x0, #0x666bdd8
0x0666BDA8: c20240f9  ldr x2, [x22]
0x0666BDAC: e10314aa  mov x1, x20
0x0666BDB0: a7bd9d97  bl #0x4ddb44c
0x0666BDB4: 200100b4  cbz x0, #0x666bdd8
0x0666BDB8: 610e40f9  ldr x1, [x19, #0x18]
0x0666BDBC: e20240f9  ldr x2, [x23]
0x0666BDC0: 29b09d97  bl #0x4dd7e64
0x0666BDC4: a002004b  sub w0, w21, w0
0x0666BDC8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666BDCC: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666BDD0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x0666BDD4: c0035fd6  ret
0x0666BDD8: b5532c97  bl #0x3180cac

; RVA 0x666BDDC | internal bool <GetClosestAvailablePositionTo>b__1(BoardItemPosition position) { }
; bytes=100 sha256=6d681415ef11d596346e508bfc5f1a7da71ebd7d810fc85e2aa90bb7e4972a12 status=arm64_complete_bound indexed_start=True
0x0666BDDC: fe0f1df8  str x30, [sp, #-0x30]!
0x0666BDE0: f65701a9  stp x22, x21, [sp, #0x10]
0x0666BDE4: f44f02a9  stp x20, x19, [sp, #0x20]
0x0666BDE8: f6b500b0  adrp x22, #0x7d28000
0x0666BDEC: f5840090  adrp x21, #0x7707000
0x0666BDF0: c8ae4339  ldrb w8, [x22, #0xeb]
0x0666BDF4: b5c647f9  ldr x21, [x21, #0xf88]
0x0666BDF8: f30301aa  mov x19, x1
0x0666BDFC: f40300aa  mov x20, x0
0x0666BE00: c8000037  tbnz w8, #0, #0x666be18
0x0666BE04: e0840090  adrp x0, #0x7707000
0x0666BE08: 00c447f9  ldr x0, [x0, #0xf88]
0x0666BE0C: 03532c97  bl #0x3180a18
0x0666BE10: 28008052  movz w8, #0x1
0x0666BE14: c8ae0339  strb w8, [x22, #0xeb]
0x0666BE18: 801240f9  ldr x0, [x20, #0x20]
0x0666BE1C: a20240f9  ldr x2, [x21]
0x0666BE20: e10313aa  mov x1, x19
0x0666BE24: 6b2e5797  bl #0x3c377d0
0x0666BE28: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0666BE2C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0666BE30: e803202a  mvn w8, w0
0x0666BE34: 00010012  and w0, w8, #1
0x0666BE38: fe0743f8  ldr x30, [sp], #0x30
0x0666BE3C: c0035fd6  ret

