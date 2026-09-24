; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25997 Merger.MergeBoard.Components.ExpendableComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A9BD84 | public int get_Uses() { }
; bytes=8 sha256=9bb31e50c9e4b1e6d3afbc308de8dce185c4ece3c405e5fc1e3b97b52d26c6a0 status=arm64_complete_bound indexed_start=True
0x06A9BD84: 000040b9  ldr w0, [x0]
0x06A9BD88: c0035fd6  ret

; RVA 0x6A9BD8C | public void set_Uses(int value) { }
; bytes=8 sha256=41db1d28e3bf3479aa3a49646ee0e016ae0de9b295533fb5d61e0bd1a5751bde status=arm64_complete_bound indexed_start=True
0x06A9BD8C: 010000b9  str w1, [x0]
0x06A9BD90: c0035fd6  ret

; RVA 0x6A9BD94 | public int get_MaxUses() { }
; bytes=8 sha256=c40709113e97cec9c72bfbb7a6f1892a5b54d7906ca60d6c400c2e268577b883 status=arm64_complete_bound indexed_start=True
0x06A9BD94: 000440b9  ldr w0, [x0, #4]
0x06A9BD98: c0035fd6  ret

; RVA 0x6A9BD9C | public void set_MaxUses(int value) { }
; bytes=8 sha256=f54c46fefcd0a3e901200e617c5502b21e0b3e0b280a7fb3bd27a3f31621fc08 status=arm64_complete_bound indexed_start=True
0x06A9BD9C: 010400b9  str w1, [x0, #4]
0x06A9BDA0: c0035fd6  ret

; RVA 0x6A9BDA4 | public int get_NumItemsToSpawn() { }
; bytes=8 sha256=2f3b6f6686fd51e88030785bd4646403cb57ac71a5cbf077e500a85bdf0afab3 status=arm64_complete_bound indexed_start=True
0x06A9BDA4: 000840b9  ldr w0, [x0, #8]
0x06A9BDA8: c0035fd6  ret

; RVA 0x6A9BDAC | public void set_NumItemsToSpawn(int value) { }
; bytes=8 sha256=7fffd60dad9e0c0cfbc80048d686fb13fc5d2edac9e8e4b9e040a64fe96070b5 status=arm64_complete_bound indexed_start=True
0x06A9BDAC: 010800b9  str w1, [x0, #8]
0x06A9BDB0: c0035fd6  ret

; RVA 0x6A9BDB4 | public bool get_RequireAllItemsToSpawn() { }
; bytes=8 sha256=0dd5407b24a1cf968af76e3a3964c33cbd032c0dc58b691802e13c92e8aa81e5 status=arm64_complete_bound indexed_start=True
0x06A9BDB4: 00304039  ldrb w0, [x0, #0xc]
0x06A9BDB8: c0035fd6  ret

; RVA 0x6A9BDBC | public void set_RequireAllItemsToSpawn(bool value) { }
; bytes=12 sha256=62c01a30bac57bc99a30e2d3d36d0cf3051ccd5ace6ebb9c78a556bc1c1ff163 status=arm64_complete_bound indexed_start=True
0x06A9BDBC: 28000012  and w8, w1, #1
0x06A9BDC0: 08300039  strb w8, [x0, #0xc]
0x06A9BDC4: c0035fd6  ret

; RVA 0x6A9BDC8 | public bool get_SpawnOnEachInteraction() { }
; bytes=8 sha256=c5aa9c3c88eb64cb1398d40b568b8ffbd98b7aaf6a89685b4c35f4e500fb6d34 status=arm64_complete_bound indexed_start=True
0x06A9BDC8: 00344039  ldrb w0, [x0, #0xd]
0x06A9BDCC: c0035fd6  ret

; RVA 0x6A9BDD0 | public void set_SpawnOnEachInteraction(bool value) { }
; bytes=12 sha256=35f3b84c62c6aedabfa3a65a26130b74ea19b79a2214ff2b697b2593e94bcc90 status=arm64_complete_bound indexed_start=True
0x06A9BDD0: 28000012  and w8, w1, #1
0x06A9BDD4: 08340039  strb w8, [x0, #0xd]
0x06A9BDD8: c0035fd6  ret

; RVA 0x6A9BDDC | public bool get_IsTransformationByReason() { }
; bytes=8 sha256=0c5214c1eee09da941249d0f84c60cca10a018a2026c778cb3e5603ffd401c2d status=arm64_complete_bound indexed_start=True
0x06A9BDDC: 00384039  ldrb w0, [x0, #0xe]
0x06A9BDE0: c0035fd6  ret

; RVA 0x6A9BDE4 | public void set_IsTransformationByReason(bool value) { }
; bytes=12 sha256=fd1dc769a3609210492311163bec3a1c39ef15c6e6177c9260c1a26f8732c19c status=arm64_complete_bound indexed_start=True
0x06A9BDE4: 28000012  and w8, w1, #1
0x06A9BDE8: 08380039  strb w8, [x0, #0xe]
0x06A9BDEC: c0035fd6  ret

; RVA 0x6A9BDF0 | public List<WeightedItemSpawnable> get_Transforms() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A9BDF0: 000840f9  ldr x0, [x0, #0x10]
0x06A9BDF4: c0035fd6  ret

; RVA 0x6A9BDF8 | public void set_Transforms(List<WeightedItemSpawnable> value) { }
; bytes=8 sha256=c77a55be54d44b230ecde25773e24c151d3b4b67fed951f6354d853be95e37ce status=arm64_complete_bound indexed_start=True
0x06A9BDF8: 010c01f8  str x1, [x0, #0x10]!
0x06A9BDFC: f2921b17  b #0x31809c4

; RVA 0x6A9BE00 | public List<EmptiableWeightedItemSpawnable> get_SpawnOnExpendedItems() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06A9BE00: 000c40f9  ldr x0, [x0, #0x18]
0x06A9BE04: c0035fd6  ret

; RVA 0x6A9BE08 | public void set_SpawnOnExpendedItems(List<EmptiableWeightedItemSpawnable> value) { }
; bytes=8 sha256=7a3b340aad52c522b86d975bb3d83d6436de5af0ff4915df8ba79105f61bfd3a status=arm64_complete_bound indexed_start=True
0x06A9BE08: 018c01f8  str x1, [x0, #0x18]!
0x06A9BE0C: ee921b17  b #0x31809c4

; RVA 0x6A9BE10 | public bool get_SpawnParticles() { }
; bytes=8 sha256=143b3c7bd83b0aed91598bc840f9d6c3eed331434f835849cdbe01fd7801fad5 status=arm64_complete_bound indexed_start=True
0x06A9BE10: 00804039  ldrb w0, [x0, #0x20]
0x06A9BE14: c0035fd6  ret

; RVA 0x6A9BE18 | public void set_SpawnParticles(bool value) { }
; bytes=12 sha256=cb035ed5867369c7e909c72176ed236910c661408e75a418c417b7be426c41d6 status=arm64_complete_bound indexed_start=True
0x06A9BE18: 28000012  and w8, w1, #1
0x06A9BE1C: 08800039  strb w8, [x0, #0x20]
0x06A9BE20: c0035fd6  ret

; RVA 0x6A9BE24 | public SpawnParticleType get_SpawnParticleType() { }
; bytes=8 sha256=a2e28d6b3f73d0b0251bc7d259573fb064536ce8240cdf9c1eb3c614e9c5fd54 status=arm64_complete_bound indexed_start=True
0x06A9BE24: 002440b9  ldr w0, [x0, #0x24]
0x06A9BE28: c0035fd6  ret

; RVA 0x6A9BE2C | public void set_SpawnParticleType(SpawnParticleType value) { }
; bytes=8 sha256=789d7b57c17b823d5e5cd288cb3fa3ae4d22145bd1e8a59998e7d459d1ce427b status=arm64_complete_bound indexed_start=True
0x06A9BE2C: 012400b9  str w1, [x0, #0x24]
0x06A9BE30: c0035fd6  ret

; RVA 0x6A9BE34 | public ProducerTimerConfig get_ProducerTimer() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06A9BE34: 001440f9  ldr x0, [x0, #0x28]
0x06A9BE38: c0035fd6  ret

; RVA 0x6A9BE3C | public void set_ProducerTimer(ProducerTimerConfig value) { }
; bytes=8 sha256=ce5277d6a16d813aff205fedafc712387debf4b5c5aafe7d8963c747b2a3b3f7 status=arm64_complete_bound indexed_start=True
0x06A9BE3C: 018c02f8  str x1, [x0, #0x28]!
0x06A9BE40: e1921b17  b #0x31809c4

; RVA 0x6A972F4 | public bool get_HasTimer() { }
; bytes=16 sha256=ae78d5f4467fdfb8b6d1a1ded11f2d005fc21d30052f4046ff7dff36fd765bc4 status=arm64_complete_bound indexed_start=True
0x06A972F4: 081440f9  ldr x8, [x0, #0x28]
0x06A972F8: 1f0100f1  cmp x8, #0
0x06A972FC: e0079f1a  cset w0, ne
0x06A97300: c0035fd6  ret

