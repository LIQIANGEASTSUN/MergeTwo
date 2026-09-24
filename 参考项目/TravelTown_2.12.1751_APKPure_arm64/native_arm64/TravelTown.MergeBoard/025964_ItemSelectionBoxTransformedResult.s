; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25964 Merger.MergeBoard.Data.TickResultArgs.ItemSelectionBoxTransformedResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A994 | public IMergeItem get_FromMergeItem() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A994: 000840f9  ldr x0, [x0, #0x10]
0x06A9A998: c0035fd6  ret

; RVA 0x6A9A99C | public void set_FromMergeItem(IMergeItem value) { }
; bytes=8 sha256=6959b7275ca23ce63a3c021e26f17b1598bc6391dbecd5c3c35a5051dba1c136 status=arm64_complete_bound indexed_start=True
0x06A9A99C: 010c01f8  str x1, [x0, #0x10]!
0x06A9A9A0: 09981b17  b #0x31809c4

; RVA 0x6A9A9A4 | public IMergeItem get_ToMergeItem() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9A9A4: 000c40f9  ldr x0, [x0, #0x18]
0x06A9A9A8: c0035fd6  ret

; RVA 0x6A9A9AC | public void set_ToMergeItem(IMergeItem value) { }
; bytes=8 sha256=08b7cc2a5d427ab1de297d2d46c06ebdb8ed625885e4f103da9745d786e2f495 status=arm64_complete_bound indexed_start=True
0x06A9A9AC: 018c01f8  str x1, [x0, #0x18]!
0x06A9A9B0: 05981b17  b #0x31809c4

; RVA 0x6A9A9B4 | public Entity get_NewItem() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A9B4: 001040f9  ldr x0, [x0, #0x20]
0x06A9A9B8: c0035fd6  ret

; RVA 0x6A9A9BC | public void set_NewItem(Entity value) { }
; bytes=8 sha256=bab84d881156865417a6f0f147cdc220dda4a293517860d7549b3b46ff01c3b5 status=arm64_complete_bound indexed_start=True
0x06A9A9BC: 010c02f8  str x1, [x0, #0x20]!
0x06A9A9C0: 01981b17  b #0x31809c4

; RVA 0x6A9A9C4 | public Entity get_RemovedItem() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9A9C4: 001440f9  ldr x0, [x0, #0x28]
0x06A9A9C8: c0035fd6  ret

; RVA 0x6A9A9CC | public void set_RemovedItem(Entity value) { }
; bytes=8 sha256=75716b8ed1f3f2e2640ac77d3926dac129f86aa2e3d5f0f11187637699075a86 status=arm64_complete_bound indexed_start=True
0x06A9A9CC: 018c02f8  str x1, [x0, #0x28]!
0x06A9A9D0: fd971b17  b #0x31809c4

; RVA 0x6A9A9D4 | public void .ctor() { }
; bytes=8 sha256=f331a1d00c51f80b552fc8024891861aa573d246e1256f3b911ef59054c318fc status=arm64_complete_bound indexed_start=True
0x06A9A9D4: e1031faa  mov x1, xzr
0x06A9A9D8: 09ffb017  b #0x56da5fc

