; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33621 .ProducerExcitementService.<>c__DisplayClass27_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD7C10 | public void .ctor() { }
; bytes=8 sha256=e11a16eae80ed8450191c2b60f4c731d0a85e49af3296f153732e324bc2ac166 status=arm64_complete_bound indexed_start=True
0x06AD7C10: e1031faa  mov x1, xzr
0x06AD7C14: 7a0ab017  b #0x56da5fc

; RVA 0x6AD8984 | internal bool <ConsumeExcitementForProducer>b__1(int id) { }
; bytes=16 sha256=01678e06b2abb846d8eeebee87d18b295b1e47f1d8e129d6c936a821f99ba349 status=arm64_complete_bound indexed_start=True
0x06AD8984: 081040b9  ldr w8, [x0, #0x10]
0x06AD8988: 1f01016b  cmp w8, w1
0x06AD898C: e0c79f1a  cset w0, le
0x06AD8990: c0035fd6  ret

