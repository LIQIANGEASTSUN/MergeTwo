; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 9492 Merger.Game.Signal.Combinations.SplitCheckPopupOpenedSignal
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x676E4F0 | public string get_BeforeSplitItemId() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x0676E4F0: 000840f9  ldr x0, [x0, #0x10]
0x0676E4F4: c0035fd6  ret

; RVA 0x676E4F8 | public void set_BeforeSplitItemId(string value) { }
; bytes=8 sha256=e7db2102c1fa9874f0f7509189349bd200f010f7e9146707a3c410811dbc0322 status=arm64_complete_bound indexed_start=True
0x0676E4F8: 010c01f8  str x1, [x0, #0x10]!
0x0676E4FC: 32492817  b #0x31809c4

; RVA 0x676E500 | public string get_AfterSplitFirstItemId() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x0676E500: 000c40f9  ldr x0, [x0, #0x18]
0x0676E504: c0035fd6  ret

; RVA 0x676E508 | public void set_AfterSplitFirstItemId(string value) { }
; bytes=8 sha256=3c366c75ce1ed8ada3861a1df59b19582fc375a11d3dae3c28a5a8dd3164ddbe status=arm64_complete_bound indexed_start=True
0x0676E508: 018c01f8  str x1, [x0, #0x18]!
0x0676E50C: 2e492817  b #0x31809c4

; RVA 0x676E510 | public string get_AfterSplitSecondItemId() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x0676E510: 001040f9  ldr x0, [x0, #0x20]
0x0676E514: c0035fd6  ret

; RVA 0x676E518 | public void set_AfterSplitSecondItemId(string value) { }
; bytes=8 sha256=18c0d370ac29ce272fca29aba3f2b384fcefe7b1d6cb7e91127901e7247307f7 status=arm64_complete_bound indexed_start=True
0x0676E518: 010c02f8  str x1, [x0, #0x20]!
0x0676E51C: 2a492817  b #0x31809c4

; RVA 0x676E520 | public void .ctor(string beforeSplitItemId, string afterSplitFirstItemId, string afterSplitSecondItemId) { }
; bytes=96 sha256=5332e83ef42e552a7490a4d09852153918915d0bfa4ce3358ca322e32a378d0d status=arm64_complete_bound indexed_start=True
0x0676E520: fe0f1df8  str x30, [sp, #-0x30]!
0x0676E524: f65701a9  stp x22, x21, [sp, #0x10]
0x0676E528: f44f02a9  stp x20, x19, [sp, #0x20]
0x0676E52C: f50301aa  mov x21, x1
0x0676E530: e1031faa  mov x1, xzr
0x0676E534: f30303aa  mov x19, x3
0x0676E538: f40302aa  mov x20, x2
0x0676E53C: f60300aa  mov x22, x0
0x0676E540: 2fb0bd97  bl #0x56da5fc
0x0676E544: e00316aa  mov x0, x22
0x0676E548: 150c01f8  str x21, [x0, #0x10]!
0x0676E54C: e10315aa  mov x1, x21
0x0676E550: 1d492897  bl #0x31809c4
0x0676E554: e00316aa  mov x0, x22
0x0676E558: 148c01f8  str x20, [x0, #0x18]!
0x0676E55C: e10314aa  mov x1, x20
0x0676E560: 19492897  bl #0x31809c4
0x0676E564: d30e02f8  str x19, [x22, #0x20]!
0x0676E568: e00316aa  mov x0, x22
0x0676E56C: e10313aa  mov x1, x19
0x0676E570: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0676E574: f65741a9  ldp x22, x21, [sp, #0x10]
0x0676E578: fe0743f8  ldr x30, [sp], #0x30
0x0676E57C: 12492817  b #0x31809c4

