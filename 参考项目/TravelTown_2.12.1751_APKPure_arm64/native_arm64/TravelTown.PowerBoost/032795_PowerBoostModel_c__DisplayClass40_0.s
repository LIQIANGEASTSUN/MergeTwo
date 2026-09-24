; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 32795 .PowerBoostModel.<>c__DisplayClass40_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD20F0 | public void .ctor() { }
; bytes=8 sha256=0bc58d1182d659785ae9cdf29b12ad6309cb74c113a98c2db02cdd2c026892f9 status=arm64_complete_bound indexed_start=True
0x06AD20F0: e1031faa  mov x1, xzr
0x06AD20F4: 4221b017  b #0x56da5fc

; RVA 0x6AD211C | internal bool <GetEnergyThreshold>b__0(BoostModeConfig boostConfig) { }
; bytes=36 sha256=285be14618e921e57d23f4e5149ad9253bb049ed7f005e80847b667b95d65c89 status=arm64_complete_bound indexed_start=True
0x06AD211C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD2120: e10000b4  cbz x1, #0x6ad213c
0x06AD2124: 281440b9  ldr w8, [x1, #0x14]
0x06AD2128: 091040b9  ldr w9, [x0, #0x10]
0x06AD212C: 1f01096b  cmp w8, w9
0x06AD2130: e0179f1a  cset w0, eq
0x06AD2134: fe0741f8  ldr x30, [sp], #0x10
0x06AD2138: c0035fd6  ret
0x06AD213C: dcba1a97  bl #0x3180cac

