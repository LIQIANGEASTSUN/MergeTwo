; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25947 Merger.MergeBoard.Data.TickResultArgs.ExpendFromTransformTimeLimitResult
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9A464 | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9A464: 000840f9  ldr x0, [x0, #0x10]
0x06A9A468: c0035fd6  ret

; RVA 0x6A9A46C | public void set_Entity(Entity value) { }
; bytes=8 sha256=48779a4c83a136fcaa89df27ff3ce0d2c14cd76d6da13803e1a760bf4774d185 status=arm64_complete_bound indexed_start=True
0x06A9A46C: 010c01f8  str x1, [x0, #0x10]!
0x06A9A470: 55991b17  b #0x31809c4

; RVA 0x6A9A474 | public int get_Position() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A9A474: 001840b9  ldr w0, [x0, #0x18]
0x06A9A478: c0035fd6  ret

; RVA 0x6A9A47C | public void set_Position(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A9A47C: 011800b9  str w1, [x0, #0x18]
0x06A9A480: c0035fd6  ret

; RVA 0x6A9A484 | public string get_Reason() { }
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x06A9A484: 001040f9  ldr x0, [x0, #0x20]
0x06A9A488: c0035fd6  ret

; RVA 0x6A9A48C | public void set_Reason(string value) { }
; bytes=8 sha256=5604a4d5d64d82747966f20beee0eaeb8cb4c7a9216ba5bed54b9c3c99cd37a7 status=arm64_complete_bound indexed_start=True
0x06A9A48C: 010c02f8  str x1, [x0, #0x20]!
0x06A9A490: 4d991b17  b #0x31809c4

; RVA 0x6A9A494 | public bool get_SpawnParticles() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x06A9A494: 00a04039  ldrb w0, [x0, #0x28]
0x06A9A498: c0035fd6  ret

; RVA 0x6A9A49C | public void set_SpawnParticles(bool value) { }
; bytes=12 sha256=43c2f4e1e6978384929aa893c7dbe539967ae11cb60a8af67ffd5877069acd5c status=arm64_complete_bound indexed_start=True
0x06A9A49C: 28000012  and w8, w1, #1
0x06A9A4A0: 08a00039  strb w8, [x0, #0x28]
0x06A9A4A4: c0035fd6  ret

; RVA 0x6A9A4A8 | public SpawnParticleType get_ParticleType() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x06A9A4A8: 002c40b9  ldr w0, [x0, #0x2c]
0x06A9A4AC: c0035fd6  ret

; RVA 0x6A9A4B0 | public void set_ParticleType(SpawnParticleType value) { }
; bytes=8 sha256=be1cd3cf68b6845c50a7cdebc045928c7285382f2a3f88b683a811f7839cb645 status=arm64_complete_bound indexed_start=True
0x06A9A4B0: 012c00b9  str w1, [x0, #0x2c]
0x06A9A4B4: c0035fd6  ret

; RVA 0x6A9A4B8 | public void .ctor() { }
; bytes=8 sha256=81cbfa89dc6991d52c9abce5fe62cbec42865f073192d53b7759a28d7f198378 status=arm64_complete_bound indexed_start=True
0x06A9A4B8: e1031faa  mov x1, xzr
0x06A9A4BC: 5000b117  b #0x56da5fc

