; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 10924 Framework.Core.Services.Backend.Repositories.RepositoryBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6922374 | protected virtual string get_UserId() { }
; bytes=188 sha256=c5f2a915129dbaceb0662f9f250091d6868dd8240d873f1d2761666fa8432c3e status=arm64_complete_bound indexed_start=True
0x06922374: fe0f1ef8  str x30, [sp, #-0x20]!
0x06922378: f44f01a9  stp x20, x19, [sp, #0x10]
0x0692237C: 34a000f0  adrp x20, #0x7d29000
0x06922380: 881a6a39  ldrb w8, [x20, #0xa86]
0x06922384: f30300aa  mov x19, x0
0x06922388: 28010037  tbnz w8, #0, #0x69223ac
0x0692238C: e06c00f0  adrp x0, #0x76c1000
0x06922390: 001447f9  ldr x0, [x0, #0xe28]
0x06922394: a1792197  bl #0x3180a18
0x06922398: c06a0090  adrp x0, #0x767a000
0x0692239C: 002443f9  ldr x0, [x0, #0x648]
0x069223A0: 9e792197  bl #0x3180a18
0x069223A4: 28008052  movz w8, #0x1
0x069223A8: 881a2a39  strb w8, [x20, #0xa86]
0x069223AC: 731a40f9  ldr x19, [x19, #0x30]
0x069223B0: f30300b4  cbz x19, #0x692242c
0x069223B4: ca6a0090  adrp x10, #0x767a000
0x069223B8: 680240f9  ldr x8, [x19]
0x069223BC: 4a2543f9  ldr x10, [x10, #0x648]
0x069223C0: 095d4279  ldrh w9, [x8, #0x12e]
0x069223C4: 410140f9  ldr x1, [x10]
0x069223C8: 290100b4  cbz x9, #0x69223ec
0x069223CC: 0a5940f9  ldr x10, [x8, #0xb0]
0x069223D0: 4a210091  add x10, x10, #8
0x069223D4: 4b815ff8  ldur x11, [x10, #-8]
0x069223D8: 7f0101eb  cmp x11, x1
0x069223DC: 00010054  b.eq #0x69223fc
0x069223E0: 290500f1  subs x9, x9, #1
0x069223E4: 4a410091  add x10, x10, #0x10
0x069223E8: 61ffff54  b.ne #0x69223d4
0x069223EC: 22008052  movz w2, #0x1
0x069223F0: e00313aa  mov x0, x19
0x069223F4: c7d12097  bl #0x3156b10
0x069223F8: 05000014  b #0x692240c
0x069223FC: 490140b9  ldr w9, [x10]
0x06922400: 29050011  add w9, w9, #1
0x06922404: 08d1298b  add x8, x8, w9, sxtw #4
0x06922408: 00e10491  add x0, x8, #0x138
0x0692240C: 080440a9  ldp x8, x1, [x0]
0x06922410: e00313aa  mov x0, x19
0x06922414: 00013fd6  blr x8
0x06922418: a00000b4  cbz x0, #0x692242c
0x0692241C: 001040f9  ldr x0, [x0, #0x20]
0x06922420: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06922424: fe0742f8  ldr x30, [sp], #0x20
0x06922428: c0035fd6  ret
0x0692242C: 207a2197  bl #0x3180cac

; RVA 0x6922430 | protected IHttpRequestService get_HttpRequestService() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x06922430: 000c40f9  ldr x0, [x0, #0x18]
0x06922434: c0035fd6  ret

; RVA 0x6922438 | protected IJsonService get_JsonService() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x06922438: 001c40f9  ldr x0, [x0, #0x38]
0x0692243C: c0035fd6  ret

; RVA 0x6922440 | protected SignalBus get_SignalBus() { }
; bytes=8 sha256=62c64bd585db7a91917843362bb75aa8dd20b002bce4874891b0b3ec8fd242b9 status=arm64_complete_bound indexed_start=True
0x06922440: 002440f9  ldr x0, [x0, #0x48]
0x06922444: c0035fd6  ret

; RVA 0x6922448 | protected virtual IHttpRequestFactory get_RequestFactory() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x06922448: 001440f9  ldr x0, [x0, #0x28]
0x0692244C: c0035fd6  ret

; RVA 0x6922450 | protected virtual bool get_ForceDeserializationOnMainThread() { }
; bytes=8 sha256=2b59db05426e0f313d72b30f3398c65721de2562a59dc46ceeba224f98d0b876 status=arm64_complete_bound indexed_start=True
0x06922450: e0031f2a  mov w0, wzr
0x06922454: c0035fd6  ret

; RVA 0x6922458 | private void Zenject.IInitializable.Initialize() { }
; bytes=12 sha256=22520225507721c4d8f40bfd9041ab48f9ed6c117b07a8420ccb059381d8349f status=arm64_complete_bound indexed_start=True
0x06922458: 080040f9  ldr x8, [x0]
0x0692245C: 02855ba9  ldp x2, x1, [x8, #0x1b8]
0x06922460: 40001fd6  br x2

; RVA 0x6922464 | protected virtual void InitializeRepository() { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x06922464: c0035fd6  ret

; RVA 0x6922468 | protected IPromise<HttpResponse> MakeGetRequest(string path, bool userAuthorizationHeader = True, string version = "v1", Dictionary<string, string> additionalHeaders, bool disableCache = False, RetryStrategy retryStrategy) { }
; bytes=392 sha256=9aee6c1c01bc25a2ff8eb7e47a853303da361628b387b559bb2a2b326a0d6989 status=arm64_complete_bound indexed_start=True
0x06922468: fe0f1bf8  str x30, [sp, #-0x50]!
0x0692246C: fa6701a9  stp x26, x25, [sp, #0x10]
0x06922470: f85f02a9  stp x24, x23, [sp, #0x20]
0x06922474: f65703a9  stp x22, x21, [sp, #0x30]
0x06922478: f44f04a9  stp x20, x19, [sp, #0x40]
0x0692247C: 3aa000f0  adrp x26, #0x7d29000
0x06922480: 481f6a39  ldrb w8, [x26, #0xa87]
0x06922484: f30306aa  mov x19, x6
0x06922488: f703052a  mov w23, w5
0x0692248C: f50304aa  mov x21, x4
0x06922490: f60303aa  mov x22, x3
0x06922494: f903022a  mov w25, w2
0x06922498: f80301aa  mov x24, x1
0x0692249C: f40300aa  mov x20, x0
0x069224A0: 28010037  tbnz w8, #0, #0x69224c4
0x069224A4: 207000b0  adrp x0, #0x7727000
0x069224A8: 002842f9  ldr x0, [x0, #0x450]
0x069224AC: 5b792197  bl #0x3180a18
0x069224B0: c06a00b0  adrp x0, #0x767b000
0x069224B4: 001c41f9  ldr x0, [x0, #0x238]
0x069224B8: 58792197  bl #0x3180a18
0x069224BC: 28008052  movz w8, #0x1
0x069224C0: 481f2a39  strb w8, [x26, #0xa87]
0x069224C4: 22030012  and w2, w25, #1
0x069224C8: e5020012  and w5, w23, #1
0x069224CC: e00314aa  mov x0, x20
0x069224D0: e10318aa  mov x1, x24
0x069224D4: e30316aa  mov x3, x22
0x069224D8: e40315aa  mov x4, x21
0x069224DC: e60313aa  mov x6, x19
0x069224E0: ff0700f9  str xzr, [sp, #8]
0x069224E4: 43000094  bl #0x69225f0
0x069224E8: 952e40f9  ldr x21, [x20, #0x58]
0x069224EC: 150800b4  cbz x21, #0x69225ec
0x069224F0: 2a7000b0  adrp x10, #0x7727000
0x069224F4: a80240f9  ldr x8, [x21]
0x069224F8: 4a2942f9  ldr x10, [x10, #0x450]
0x069224FC: f30300aa  mov x19, x0
0x06922500: 095d4279  ldrh w9, [x8, #0x12e]
0x06922504: 410140f9  ldr x1, [x10]
0x06922508: 290100b4  cbz x9, #0x692252c
0x0692250C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06922510: 4a210091  add x10, x10, #8
0x06922514: 4b815ff8  ldur x11, [x10, #-8]
0x06922518: 7f0101eb  cmp x11, x1
0x0692251C: 00010054  b.eq #0x692253c
0x06922520: 290500f1  subs x9, x9, #1
0x06922524: 4a410091  add x10, x10, #0x10
0x06922528: 61ffff54  b.ne #0x6922514
0x0692252C: e00315aa  mov x0, x21
0x06922530: e2031f2a  mov w2, wzr
0x06922534: 77d12097  bl #0x3156b10
0x06922538: 04000014  b #0x6922548
0x0692253C: 490180b9  ldrsw x9, [x10]
0x06922540: 0811098b  add x8, x8, x9, lsl #4
0x06922544: 00e10491  add x0, x8, #0x138
0x06922548: 080c40a9  ldp x8, x3, [x0]
0x0692254C: e2230091  add x2, sp, #8
0x06922550: e00315aa  mov x0, x21
0x06922554: e10313aa  mov x1, x19
0x06922558: 00013fd6  blr x8
0x0692255C: 60000036  tbz w0, #0, #0x6922568
0x06922560: e00740f9  ldr x0, [sp, #8]
0x06922564: 1c000014  b #0x69225d4
0x06922568: 940e40f9  ldr x20, [x20, #0x18]
0x0692256C: 140400b4  cbz x20, #0x69225ec
0x06922570: ca6a00b0  adrp x10, #0x767b000
0x06922574: 880240f9  ldr x8, [x20]
0x06922578: 4a1d41f9  ldr x10, [x10, #0x238]
0x0692257C: 095d4279  ldrh w9, [x8, #0x12e]
0x06922580: 410140f9  ldr x1, [x10]
0x06922584: 290100b4  cbz x9, #0x69225a8
0x06922588: 0a5940f9  ldr x10, [x8, #0xb0]
0x0692258C: 4a210091  add x10, x10, #8
0x06922590: 4b815ff8  ldur x11, [x10, #-8]
0x06922594: 7f0101eb  cmp x11, x1
0x06922598: 00010054  b.eq #0x69225b8
0x0692259C: 290500f1  subs x9, x9, #1
0x069225A0: 4a410091  add x10, x10, #0x10
0x069225A4: 61ffff54  b.ne #0x6922590
0x069225A8: e00314aa  mov x0, x20
0x069225AC: e2031f2a  mov w2, wzr
0x069225B0: 58d12097  bl #0x3156b10
0x069225B4: 04000014  b #0x69225c4
0x069225B8: 490180b9  ldrsw x9, [x10]
0x069225BC: 0811098b  add x8, x8, x9, lsl #4
0x069225C0: 00e10491  add x0, x8, #0x138
0x069225C4: 080840a9  ldp x8, x2, [x0]
0x069225C8: e00314aa  mov x0, x20
0x069225CC: e10313aa  mov x1, x19
0x069225D0: 00013fd6  blr x8
0x069225D4: f44f44a9  ldp x20, x19, [sp, #0x40]
0x069225D8: f65743a9  ldp x22, x21, [sp, #0x30]
0x069225DC: f85f42a9  ldp x24, x23, [sp, #0x20]
0x069225E0: fa6741a9  ldp x26, x25, [sp, #0x10]
0x069225E4: fe0745f8  ldr x30, [sp], #0x50
0x069225E8: c0035fd6  ret
0x069225EC: b0792197  bl #0x3180cac

; RVA 0x69225F0 | protected HttpRequest CreateGetRequest(string path, bool userAuthorizationHeader = True, string version = "v1", Dictionary<string, string> additionalHeaders, bool disableCache = False, RetryStrategy retryStrategy) { }
; bytes=484 sha256=584f28bb4ad50d2ebb2c64501d5d155c8a862c240448ab3e4922c6300d7cd40f status=arm64_complete_bound indexed_start=True
0x069225F0: ff8301d1  sub sp, sp, #0x60
0x069225F4: fe6f01a9  stp x30, x27, [sp, #0x10]
0x069225F8: fa6702a9  stp x26, x25, [sp, #0x20]
0x069225FC: f85f03a9  stp x24, x23, [sp, #0x30]
0x06922600: f65704a9  stp x22, x21, [sp, #0x40]
0x06922604: f44f05a9  stp x20, x19, [sp, #0x50]
0x06922608: 3aa000f0  adrp x26, #0x7d29000
0x0692260C: 48236a39  ldrb w8, [x26, #0xa88]
0x06922610: f30306aa  mov x19, x6
0x06922614: f803052a  mov w24, w5
0x06922618: f60304aa  mov x22, x4
0x0692261C: f50303aa  mov x21, x3
0x06922620: f903022a  mov w25, w2
0x06922624: f70301aa  mov x23, x1
0x06922628: f40300aa  mov x20, x0
0x0692262C: 88010037  tbnz w8, #0, #0x692265c
0x06922630: c06a00b0  adrp x0, #0x767b000
0x06922634: 001841f9  ldr x0, [x0, #0x230]
0x06922638: f8782197  bl #0x3180a18
0x0692263C: 606f00f0  adrp x0, #0x7711000
0x06922640: 009443f9  ldr x0, [x0, #0x728]
0x06922644: f5782197  bl #0x3180a18
0x06922648: a06a00f0  adrp x0, #0x7679000
0x0692264C: 007c44f9  ldr x0, [x0, #0x8f8]
0x06922650: f2782197  bl #0x3180a18
0x06922654: 28008052  movz w8, #0x1
0x06922658: 48232a39  strb w8, [x26, #0xa88]
0x0692265C: 9a2240f9  ldr x26, [x20, #0x40]
0x06922660: 9a0b00b4  cbz x26, #0x69227d0
0x06922664: ca6a00b0  adrp x10, #0x767b000
0x06922668: 480340f9  ldr x8, [x26]
0x0692266C: 4a1941f9  ldr x10, [x10, #0x230]
0x06922670: bb6a00f0  adrp x27, #0x7679000
0x06922674: 095d4279  ldrh w9, [x8, #0x12e]
0x06922678: 410140f9  ldr x1, [x10]
0x0692267C: 7b7f44f9  ldr x27, [x27, #0x8f8]
0x06922680: 290100b4  cbz x9, #0x69226a4
0x06922684: 0a5940f9  ldr x10, [x8, #0xb0]
0x06922688: 4a210091  add x10, x10, #8
0x0692268C: 4b815ff8  ldur x11, [x10, #-8]
0x06922690: 7f0101eb  cmp x11, x1
0x06922694: 00010054  b.eq #0x69226b4
0x06922698: 290500f1  subs x9, x9, #1
0x0692269C: 4a410091  add x10, x10, #0x10
0x069226A0: 61ffff54  b.ne #0x692268c
0x069226A4: e0031aaa  mov x0, x26
0x069226A8: e2031f2a  mov w2, wzr
0x069226AC: 19d12097  bl #0x3156b10
0x069226B0: 04000014  b #0x69226c0
0x069226B4: 490180b9  ldrsw x9, [x10]
0x069226B8: 0811098b  add x8, x8, x9, lsl #4
0x069226BC: 00e10491  add x0, x8, #0x138
0x069226C0: 080840a9  ldp x8, x2, [x0]
0x069226C4: e0031aaa  mov x0, x26
0x069226C8: e10316aa  mov x1, x22
0x069226CC: 00013fd6  blr x8
0x069226D0: 680340f9  ldr x8, [x27]
0x069226D4: fa0300aa  mov x26, x0
0x069226D8: e00308aa  mov x0, x8
0x069226DC: 71792197  bl #0x3180ca0
0x069226E0: 22030012  and w2, w25, #1
0x069226E4: 05030012  and w5, w24, #1
0x069226E8: 43008052  movz w3, #0x2
0x069226EC: e10317aa  mov x1, x23
0x069226F0: e4031aaa  mov x4, x26
0x069226F4: e6031f2a  mov w6, wzr
0x069226F8: e7031faa  mov x7, xzr
0x069226FC: f60300aa  mov x22, x0
0x06922700: 35000094  bl #0x69227d4
0x06922704: 760600b4  cbz x22, #0x69227d0
0x06922708: e00316aa  mov x0, x22
0x0692270C: 158c01f8  str x21, [x0, #0x18]!
0x06922710: e10315aa  mov x1, x21
0x06922714: ac782197  bl #0x31809c4
0x06922718: e00316aa  mov x0, x22
0x0692271C: 130c03f8  str x19, [x0, #0x30]!
0x06922720: e10313aa  mov x1, x19
0x06922724: a8782197  bl #0x31809c4
0x06922728: e00314aa  mov x0, x20
0x0692272C: e10316aa  mov x1, x22
0x06922730: e20313aa  mov x2, x19
0x06922734: 80000094  bl #0x6922934
0x06922738: 880240f9  ldr x8, [x20]
0x0692273C: e00314aa  mov x0, x20
0x06922740: 098559a9  ldp x9, x1, [x8, #0x198]
0x06922744: 20013fd6  blr x9
0x06922748: 400400b4  cbz x0, #0x69227d0
0x0692274C: 6a6f00f0  adrp x10, #0x7711000
0x06922750: 080040f9  ldr x8, [x0]
0x06922754: 4a9543f9  ldr x10, [x10, #0x728]
0x06922758: f30300aa  mov x19, x0
0x0692275C: 095d4279  ldrh w9, [x8, #0x12e]
0x06922760: 410140f9  ldr x1, [x10]
0x06922764: 290100b4  cbz x9, #0x6922788
0x06922768: 0a5940f9  ldr x10, [x8, #0xb0]
0x0692276C: 4a210091  add x10, x10, #8
0x06922770: 4b815ff8  ldur x11, [x10, #-8]
0x06922774: 7f0101eb  cmp x11, x1
0x06922778: 00010054  b.eq #0x6922798
0x0692277C: 290500f1  subs x9, x9, #1
0x06922780: 4a410091  add x10, x10, #0x10
0x06922784: 61ffff54  b.ne #0x6922770
0x06922788: 82008052  movz w2, #0x4
0x0692278C: e00313aa  mov x0, x19
0x06922790: e0d02097  bl #0x3156b10
0x06922794: 05000014  b #0x69227a8
0x06922798: 490140b9  ldr w9, [x10]
0x0692279C: 29110011  add w9, w9, #4
0x069227A0: 08d1298b  add x8, x8, w9, sxtw #4
0x069227A4: 00e10491  add x0, x8, #0x138
0x069227A8: 030840a9  ldp x3, x2, [x0]
0x069227AC: e00313aa  mov x0, x19
0x069227B0: e10316aa  mov x1, x22
0x069227B4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x069227B8: f65744a9  ldp x22, x21, [sp, #0x40]
0x069227BC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x069227C0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x069227C4: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x069227C8: ff830191  add sp, sp, #0x60
0x069227CC: 60001fd6  br x3
0x069227D0: 37792197  bl #0x3180cac

; RVA 0x6922934 | private void TryAddRetryStrategy(RequestData requestData, RetryStrategy retryStrategy) { }
; bytes=344 sha256=5d78f13d26c08673ce297ab8edef0e2e7445aaed6b8378715205a6d43e09a663 status=arm64_complete_bound indexed_start=True
0x06922934: ff0301d1  sub sp, sp, #0x40
0x06922938: fe0b00f9  str x30, [sp, #0x10]
0x0692293C: f65702a9  stp x22, x21, [sp, #0x20]
0x06922940: f44f03a9  stp x20, x19, [sp, #0x30]
0x06922944: 36a000f0  adrp x22, #0x7d29000
0x06922948: c8266a39  ldrb w8, [x22, #0xa89]
0x0692294C: f40302aa  mov x20, x2
0x06922950: f30301aa  mov x19, x1
0x06922954: f50300aa  mov x21, x0
0x06922958: 28010037  tbnz w8, #0, #0x692297c
0x0692295C: a06d0090  adrp x0, #0x76d6000
0x06922960: 00fc46f9  ldr x0, [x0, #0xdf8]
0x06922964: 2d782197  bl #0x3180a18
0x06922968: 406e0090  adrp x0, #0x76ea000
0x0692296C: 00ac40f9  ldr x0, [x0, #0x158]
0x06922970: 2a782197  bl #0x3180a18
0x06922974: 28008052  movz w8, #0x1
0x06922978: c8262a39  strb w8, [x22, #0xa89]
0x0692297C: d40000b4  cbz x20, #0x6922994
0x06922980: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06922984: f65742a9  ldp x22, x21, [sp, #0x20]
0x06922988: fe0b40f9  ldr x30, [sp, #0x10]
0x0692298C: ff030191  add sp, sp, #0x40
0x06922990: c0035fd6  ret
0x06922994: b42a40f9  ldr x20, [x21, #0x50]
0x06922998: 340500b4  cbz x20, #0x6922a3c
0x0692299C: aa6d0090  adrp x10, #0x76d6000
0x069229A0: 880240f9  ldr x8, [x20]
0x069229A4: 4afd46f9  ldr x10, [x10, #0xdf8]
0x069229A8: 095d4279  ldrh w9, [x8, #0x12e]
0x069229AC: 410140f9  ldr x1, [x10]
0x069229B0: 290100b4  cbz x9, #0x69229d4
0x069229B4: 0a5940f9  ldr x10, [x8, #0xb0]
0x069229B8: 4a210091  add x10, x10, #8
0x069229BC: 4b815ff8  ldur x11, [x10, #-8]
0x069229C0: 7f0101eb  cmp x11, x1
0x069229C4: 00010054  b.eq #0x69229e4
0x069229C8: 290500f1  subs x9, x9, #1
0x069229CC: 4a410091  add x10, x10, #0x10
0x069229D0: 61ffff54  b.ne #0x69229bc
0x069229D4: 22008052  movz w2, #0x1
0x069229D8: e00314aa  mov x0, x20
0x069229DC: 4dd02097  bl #0x3156b10
0x069229E0: 05000014  b #0x69229f4
0x069229E4: 490140b9  ldr w9, [x10]
0x069229E8: 29050011  add w9, w9, #1
0x069229EC: 08d1298b  add x8, x8, w9, sxtw #4
0x069229F0: 00e10491  add x0, x8, #0x138
0x069229F4: 080440a9  ldp x8, x1, [x0]
0x069229F8: e00314aa  mov x0, x20
0x069229FC: 00013fd6  blr x8
0x06922A00: e00100b4  cbz x0, #0x6922a3c
0x06922A04: e1031faa  mov x1, xzr
0x06922A08: 30460094  bl #0x69342c8
0x06922A0C: 800100b4  cbz x0, #0x6922a3c
0x06922A10: 0004c03d  ldr q0, [x0, #0x10]
0x06922A14: 486e0090  adrp x8, #0x76ea000
0x06922A18: e003803d  str q0, [sp]
0x06922A1C: 08ad40f9  ldr x8, [x8, #0x158]
0x06922A20: 000140f9  ldr x0, [x8]
0x06922A24: 9f782197  bl #0x3180ca0
0x06922A28: e1031faa  mov x1, xzr
0x06922A2C: f40300aa  mov x20, x0
0x06922A30: f3deb697  bl #0x56da5fc
0x06922A34: e003c03d  ldr q0, [sp]
0x06922A38: 0a000014  b #0x6922a60
0x06922A3C: 486e0090  adrp x8, #0x76ea000
0x06922A40: 08ad40f9  ldr x8, [x8, #0x158]
0x06922A44: 000140f9  ldr x0, [x8]
0x06922A48: 96782197  bl #0x3180ca0
0x06922A4C: e1031faa  mov x1, xzr
0x06922A50: f40300aa  mov x20, x0
0x06922A54: eadeb697  bl #0x56da5fc
0x06922A58: e86cfdb0  adrp x8, #0x16bf000
0x06922A5C: 00d9c03d  ldr q0, [x8, #0x360]
0x06922A60: 8006803d  str q0, [x20, #0x10]
0x06922A64: 330100b4  cbz x19, #0x6922a88
0x06922A68: 740e03f8  str x20, [x19, #0x30]!
0x06922A6C: e00313aa  mov x0, x19
0x06922A70: e10314aa  mov x1, x20
0x06922A74: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06922A78: f65742a9  ldp x22, x21, [sp, #0x20]
0x06922A7C: fe0b40f9  ldr x30, [sp, #0x10]
0x06922A80: ff030191  add sp, sp, #0x40
0x06922A84: d0772117  b #0x31809c4
0x06922A88: 89782197  bl #0x3180cac

; RVA 0x6922A8C | protected void MakeWebsocketRequestWithoutReply(string topic, string action, object payload, int timeout = 30, int retryCount = 0) { }
; bytes=220 sha256=568e694e054b5c101ae3b2ad1948072d887fe09c0c863da3c0b9ef2cdd9417cc status=arm64_complete_bound indexed_start=True
0x06922A8C: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06922A90: f85f01a9  stp x24, x23, [sp, #0x10]
0x06922A94: f65702a9  stp x22, x21, [sp, #0x20]
0x06922A98: f44f03a9  stp x20, x19, [sp, #0x30]
0x06922A9C: 39a000f0  adrp x25, #0x7d29000
0x06922AA0: 282b6a39  ldrb w8, [x25, #0xa8a]
0x06922AA4: f303052a  mov w19, w5
0x06922AA8: f403042a  mov w20, w4
0x06922AAC: f50303aa  mov x21, x3
0x06922AB0: f60302aa  mov x22, x2
0x06922AB4: f70301aa  mov x23, x1
0x06922AB8: f80300aa  mov x24, x0
0x06922ABC: c8000037  tbnz w8, #0, #0x6922ad4
0x06922AC0: 207000b0  adrp x0, #0x7727000
0x06922AC4: 002c42f9  ldr x0, [x0, #0x458]
0x06922AC8: d4772197  bl #0x3180a18
0x06922ACC: 28008052  movz w8, #0x1
0x06922AD0: 282b2a39  strb w8, [x25, #0xa8a]
0x06922AD4: 181340f9  ldr x24, [x24, #0x20]
0x06922AD8: 780400b4  cbz x24, #0x6922b64
0x06922ADC: 2a7000b0  adrp x10, #0x7727000
0x06922AE0: 080340f9  ldr x8, [x24]
0x06922AE4: 4a2d42f9  ldr x10, [x10, #0x458]
0x06922AE8: 095d4279  ldrh w9, [x8, #0x12e]
0x06922AEC: 410140f9  ldr x1, [x10]
0x06922AF0: 290100b4  cbz x9, #0x6922b14
0x06922AF4: 0a5940f9  ldr x10, [x8, #0xb0]
0x06922AF8: 4a210091  add x10, x10, #8
0x06922AFC: 4b815ff8  ldur x11, [x10, #-8]
0x06922B00: 7f0101eb  cmp x11, x1
0x06922B04: 00010054  b.eq #0x6922b24
0x06922B08: 290500f1  subs x9, x9, #1
0x06922B0C: 4a410091  add x10, x10, #0x10
0x06922B10: 61ffff54  b.ne #0x6922afc
0x06922B14: 22008052  movz w2, #0x1
0x06922B18: e00318aa  mov x0, x24
0x06922B1C: fdcf2097  bl #0x3156b10
0x06922B20: 05000014  b #0x6922b34
0x06922B24: 490140b9  ldr w9, [x10]
0x06922B28: 29050011  add w9, w9, #1
0x06922B2C: 08d1298b  add x8, x8, w9, sxtw #4
0x06922B30: 00e10491  add x0, x8, #0x138
0x06922B34: 071840a9  ldp x7, x6, [x0]
0x06922B38: e00318aa  mov x0, x24
0x06922B3C: e10317aa  mov x1, x23
0x06922B40: e20316aa  mov x2, x22
0x06922B44: e30315aa  mov x3, x21
0x06922B48: e403142a  mov w4, w20
0x06922B4C: e503132a  mov w5, w19
0x06922B50: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06922B54: f65742a9  ldp x22, x21, [sp, #0x20]
0x06922B58: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06922B5C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06922B60: e0001fd6  br x7
0x06922B64: 52782197  bl #0x3180cac

; RVA 0x691DA00 | protected void .ctor() { }
; bytes=8 sha256=1ca0b0a87a485b3ca0486456116393e9d30203bef104693feaab5df07ae31969 status=arm64_complete_bound indexed_start=True
0x0691DA00: e1031faa  mov x1, xzr
0x0691DA04: fef2b617  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D736D4 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakePostRequest<object>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakePostRequest_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, bool useUnityWebRequest, const MethodInfo_3D736D4* method);
; bytes=176 sha256=95a20ed2bb6a72796cb63897e58a9aeb0f3512ef03522d9a146a81f54fd2ea86 status=arm64_complete_bound indexed_start=True
0x03D736D4: ff0302d1  sub sp, sp, #0x80
0x03D736D8: fe1300f9  str x30, [sp, #0x20]
0x03D736DC: fc6f03a9  stp x28, x27, [sp, #0x30]
0x03D736E0: fa6704a9  stp x26, x25, [sp, #0x40]
0x03D736E4: f85f05a9  stp x24, x23, [sp, #0x50]
0x03D736E8: f65706a9  stp x22, x21, [sp, #0x60]
0x03D736EC: f44f07a9  stp x20, x19, [sp, #0x70]
0x03D736F0: fb4740f9  ldr x27, [sp, #0x88]
0x03D736F4: fc034239  ldrb w28, [sp, #0x80]
0x03D736F8: f60307aa  mov x22, x7
0x03D736FC: f30306aa  mov x19, x6
0x03D73700: 681f40f9  ldr x8, [x27, #0x38]
0x03D73704: f50305aa  mov x21, x5
0x03D73708: f40304aa  mov x20, x4
0x03D7370C: f903032a  mov w25, w3
0x03D73710: f70302aa  mov x23, x2
0x03D73714: f80301aa  mov x24, x1
0x03D73718: fa0300aa  mov x26, x0
0x03D7371C: 880000b5  cbnz x8, #0x3d7372c
0x03D73720: e0031baa  mov x0, x27
0x03D73724: 558ccf97  bl #0x3156878
0x03D73728: 681f40f9  ldr x8, [x27, #0x38]
0x03D7372C: 080540f9  ldr x8, [x8, #8]
0x03D73730: 23030012  and w3, w25, #1
0x03D73734: e0031aaa  mov x0, x26
0x03D73738: e10318aa  mov x1, x24
0x03D7373C: ff2301a9  stp xzr, x8, [sp, #0x10]
0x03D73740: 88030012  and w8, w28, #1
0x03D73744: e20317aa  mov x2, x23
0x03D73748: e4031f2a  mov w4, wzr
0x03D7374C: e50315aa  mov x5, x21
0x03D73750: e60314aa  mov x6, x20
0x03D73754: e70313aa  mov x7, x19
0x03D73758: e8230039  strb w8, [sp, #8]
0x03D7375C: f60300f9  str x22, [sp]
0x03D73760: c7000094  bl #0x3d73a7c
0x03D73764: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03D73768: f65746a9  ldp x22, x21, [sp, #0x60]
0x03D7376C: f85f45a9  ldp x24, x23, [sp, #0x50]
0x03D73770: fa6744a9  ldp x26, x25, [sp, #0x40]
0x03D73774: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x03D73778: fe1340f9  ldr x30, [sp, #0x20]
0x03D7377C: ff030291  add sp, sp, #0x80
0x03D73780: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73784 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakePostRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakePostRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, bool useUnityWebRequest, const MethodInfo_3D73784* method);
; bytes=304 sha256=85108818006d0337ccdddc21c6e5ca165fc5b3c12d06ead319bc186f869109de status=arm64_complete_bound indexed_start=True
0x03D73784: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D73788: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D7378C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D73790: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D73794: f65704a9  stp x22, x21, [sp, #0x40]
0x03D73798: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D7379C: fd030091  mov x29, sp
0x03D737A0: ff4302d1  sub sp, sp, #0x90
0x03D737A4: a78317f8  stur x7, [x29, #-0x88]
0x03D737A8: 5cd03bd5  mrs x28, tpidr_el0
0x03D737AC: 881740f9  ldr x8, [x28, #0x28]
0x03D737B0: bb3740f9  ldr x27, [x29, #0x68]
0x03D737B4: f50306aa  mov x21, x6
0x03D737B8: f70305aa  mov x23, x5
0x03D737BC: a8831ff8  stur x8, [x29, #-8]
0x03D737C0: a00b38a9  stp x0, x2, [x29, #-0x80]
0x03D737C4: 741f40f9  ldr x20, [x27, #0x38]
0x03D737C8: f60304aa  mov x22, x4
0x03D737CC: f903032a  mov w25, w3
0x03D737D0: fa0302aa  mov x26, x2
0x03D737D4: f80301aa  mov x24, x1
0x03D737D8: 940000b5  cbnz x20, #0x3d737e8
0x03D737DC: e0031baa  mov x0, x27
0x03D737E0: 268ccf97  bl #0x3156878
0x03D737E4: 741f40f9  ldr x20, [x27, #0x38]
0x03D737E8: 880240f9  ldr x8, [x20]
0x03D737EC: b3834139  ldrb w19, [x29, #0x60]
0x03D737F0: e9030091  mov x9, sp
0x03D737F4: 02fd40b9  ldr w2, [x8, #0xfc]
0x03D737F8: 4a3c0091  add x10, x2, #0xf
0x03D737FC: 4a717c92  and x10, x10, #0x1fffffff0
0x03D73800: 3b010acb  sub x27, x9, x10
0x03D73804: 7f030091  mov sp, x27
0x03D73808: 082940b9  ldr w8, [x8, #0x28]
0x03D7380C: e0031baa  mov x0, x27
0x03D73810: 1f010071  cmp w8, #0
0x03D73814: a8e301d1  sub x8, x29, #0x78
0x03D73818: 41b3889a  csel x1, x26, x8, lt
0x03D7381C: 556cd194  bl #0x71ce970
0x03D73820: 880640a9  ldp x8, x1, [x20]
0x03D73824: 082940b9  ldr w8, [x8, #0x28]
0x03D73828: 200040f9  ldr x0, [x1]
0x03D7382C: 4800f837  tbnz w8, #0x1f, #0x3d73834
0x03D73830: 7b0340f9  ldr x27, [x27]
0x03D73834: ac8b77a9  ldp x12, x2, [x29, #-0x88]
0x03D73838: 28030012  and w8, w25, #1
0x03D7383C: 69020012  and w9, w19, #1
0x03D73840: aa3300d1  sub x10, x29, #0xc
0x03D73844: ab4300d1  sub x11, x29, #0x10
0x03D73848: b5333ca9  stp x21, x12, [x29, #-0x40]
0x03D7384C: ac5300d1  sub x12, x29, #0x14
0x03D73850: bf031fb8  stur wzr, [x29, #-0x10]
0x03D73854: b86f39a9  stp x24, x27, [x29, #-0x70]
0x03D73858: b75b3ba9  stp x23, x22, [x29, #-0x50]
0x03D7385C: a8431f38  sturb w8, [x29, #-0xc]
0x03D73860: a9c31e38  sturb w9, [x29, #-0x14]
0x03D73864: aa2f3aa9  stp x10, x11, [x29, #-0x60]
0x03D73868: ac7f3da9  stp x12, xzr, [x29, #-0x30]
0x03D7386C: 280840f9  ldr x8, [x1, #0x10]
0x03D73870: a3c301d1  sub x3, x29, #0x70
0x03D73874: a48300d1  sub x4, x29, #0x20
0x03D73878: 00013fd6  blr x8
0x03D7387C: a0035ef8  ldur x0, [x29, #-0x20]
0x03D73880: 881740f9  ldr x8, [x28, #0x28]
0x03D73884: a9835ff8  ldur x9, [x29, #-8]
0x03D73888: 1f0109eb  cmp x8, x9
0x03D7388C: 21010054  b.ne #0x3d738b0
0x03D73890: bf030091  mov sp, x29
0x03D73894: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D73898: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D7389C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D738A0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D738A4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D738A8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D738AC: c0035fd6  ret
0x03D738B0: 386cd194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D734FC | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakePatchRequest<object>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakePatchRequest_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, Framework_Core_Services_Backend_Http_Interfaces_IHttpErrorHandler_o* httpErrorHandler, const MethodInfo_3D734FC* method);
; bytes=168 sha256=79dc5a8e4d6b98093f22b5de4945e48bb54219a4e1ef64adcf8af3d0ac5fcf70 status=arm64_complete_bound indexed_start=True
0x03D734FC: ff0302d1  sub sp, sp, #0x80
0x03D73500: fe1300f9  str x30, [sp, #0x20]
0x03D73504: fc6f03a9  stp x28, x27, [sp, #0x30]
0x03D73508: fa6704a9  stp x26, x25, [sp, #0x40]
0x03D7350C: f85f05a9  stp x24, x23, [sp, #0x50]
0x03D73510: f65706a9  stp x22, x21, [sp, #0x60]
0x03D73514: f44f07a9  stp x20, x19, [sp, #0x70]
0x03D73518: fc6f48a9  ldp x28, x27, [sp, #0x80]
0x03D7351C: f60307aa  mov x22, x7
0x03D73520: f30306aa  mov x19, x6
0x03D73524: f40305aa  mov x20, x5
0x03D73528: 681f40f9  ldr x8, [x27, #0x38]
0x03D7352C: f50304aa  mov x21, x4
0x03D73530: fa03032a  mov w26, w3
0x03D73534: f70302aa  mov x23, x2
0x03D73538: f80301aa  mov x24, x1
0x03D7353C: f90300aa  mov x25, x0
0x03D73540: 880000b5  cbnz x8, #0x3d73550
0x03D73544: e0031baa  mov x0, x27
0x03D73548: cc8ccf97  bl #0x3156878
0x03D7354C: 681f40f9  ldr x8, [x27, #0x38]
0x03D73550: 080540f9  ldr x8, [x8, #8]
0x03D73554: 43030012  and w3, w26, #1
0x03D73558: 64008052  movz w4, #0x3
0x03D7355C: e00319aa  mov x0, x25
0x03D73560: e10318aa  mov x1, x24
0x03D73564: e20317aa  mov x2, x23
0x03D73568: e50314aa  mov x5, x20
0x03D7356C: e60315aa  mov x6, x21
0x03D73570: e70313aa  mov x7, x19
0x03D73574: fc2301a9  stp x28, x8, [sp, #0x10]
0x03D73578: ff230039  strb wzr, [sp, #8]
0x03D7357C: f60300f9  str x22, [sp]
0x03D73580: 3f010094  bl #0x3d73a7c
0x03D73584: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03D73588: f65746a9  ldp x22, x21, [sp, #0x60]
0x03D7358C: f85f45a9  ldp x24, x23, [sp, #0x50]
0x03D73590: fa6744a9  ldp x26, x25, [sp, #0x40]
0x03D73594: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x03D73598: fe1340f9  ldr x30, [sp, #0x20]
0x03D7359C: ff030291  add sp, sp, #0x80
0x03D735A0: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D735A4 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakePatchRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakePatchRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, Framework_Core_Services_Backend_Http_Interfaces_IHttpErrorHandler_o* httpErrorHandler, const MethodInfo_3D735A4* method);
; bytes=304 sha256=bceeaf8cbea0e59ee9800863abf3ba2e3297e3cc11aabc1ccbd58eb52c8d23b9 status=arm64_complete_bound indexed_start=True
0x03D735A4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D735A8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D735AC: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D735B0: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D735B4: f65704a9  stp x22, x21, [sp, #0x40]
0x03D735B8: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D735BC: fd030091  mov x29, sp
0x03D735C0: ff4302d1  sub sp, sp, #0x90
0x03D735C4: a78317f8  stur x7, [x29, #-0x88]
0x03D735C8: 5cd03bd5  mrs x28, tpidr_el0
0x03D735CC: 881740f9  ldr x8, [x28, #0x28]
0x03D735D0: bb3740f9  ldr x27, [x29, #0x68]
0x03D735D4: f50306aa  mov x21, x6
0x03D735D8: f70305aa  mov x23, x5
0x03D735DC: a8831ff8  stur x8, [x29, #-8]
0x03D735E0: a00b38a9  stp x0, x2, [x29, #-0x80]
0x03D735E4: 741f40f9  ldr x20, [x27, #0x38]
0x03D735E8: f60304aa  mov x22, x4
0x03D735EC: f903032a  mov w25, w3
0x03D735F0: fa0302aa  mov x26, x2
0x03D735F4: f80301aa  mov x24, x1
0x03D735F8: 940000b5  cbnz x20, #0x3d73608
0x03D735FC: e0031baa  mov x0, x27
0x03D73600: 9e8ccf97  bl #0x3156878
0x03D73604: 741f40f9  ldr x20, [x27, #0x38]
0x03D73608: 880240f9  ldr x8, [x20]
0x03D7360C: b33340f9  ldr x19, [x29, #0x60]
0x03D73610: e9030091  mov x9, sp
0x03D73614: 02fd40b9  ldr w2, [x8, #0xfc]
0x03D73618: 4a3c0091  add x10, x2, #0xf
0x03D7361C: 4a717c92  and x10, x10, #0x1fffffff0
0x03D73620: 3b010acb  sub x27, x9, x10
0x03D73624: 7f030091  mov sp, x27
0x03D73628: 082940b9  ldr w8, [x8, #0x28]
0x03D7362C: e0031baa  mov x0, x27
0x03D73630: 1f010071  cmp w8, #0
0x03D73634: a8e301d1  sub x8, x29, #0x78
0x03D73638: 41b3889a  csel x1, x26, x8, lt
0x03D7363C: cd6cd194  bl #0x71ce970
0x03D73640: 880640a9  ldp x8, x1, [x20]
0x03D73644: 082940b9  ldr w8, [x8, #0x28]
0x03D73648: 200040f9  ldr x0, [x1]
0x03D7364C: 4800f837  tbnz w8, #0x1f, #0x3d73654
0x03D73650: 7b0340f9  ldr x27, [x27]
0x03D73654: ac8b77a9  ldp x12, x2, [x29, #-0x88]
0x03D73658: 28030012  and w8, w25, #1
0x03D7365C: 69008052  movz w9, #0x3
0x03D73660: aa3300d1  sub x10, x29, #0xc
0x03D73664: ab4300d1  sub x11, x29, #0x10
0x03D73668: b5333ca9  stp x21, x12, [x29, #-0x40]
0x03D7366C: ac5300d1  sub x12, x29, #0x14
0x03D73670: bfc31e38  sturb wzr, [x29, #-0x14]
0x03D73674: b86f39a9  stp x24, x27, [x29, #-0x70]
0x03D73678: b75b3ba9  stp x23, x22, [x29, #-0x50]
0x03D7367C: a8431f38  sturb w8, [x29, #-0xc]
0x03D73680: a9031fb8  stur w9, [x29, #-0x10]
0x03D73684: aa2f3aa9  stp x10, x11, [x29, #-0x60]
0x03D73688: ac4f3da9  stp x12, x19, [x29, #-0x30]
0x03D7368C: 280840f9  ldr x8, [x1, #0x10]
0x03D73690: a3c301d1  sub x3, x29, #0x70
0x03D73694: a48300d1  sub x4, x29, #0x20
0x03D73698: 00013fd6  blr x8
0x03D7369C: a0035ef8  ldur x0, [x29, #-0x20]
0x03D736A0: 881740f9  ldr x8, [x28, #0x28]
0x03D736A4: a9835ff8  ldur x9, [x29, #-8]
0x03D736A8: 1f0109eb  cmp x8, x9
0x03D736AC: 21010054  b.ne #0x3d736d0
0x03D736B0: bf030091  mov sp, x29
0x03D736B4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D736B8: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D736BC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D736C0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D736C4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D736C8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D736CC: c0035fd6  ret
0x03D736D0: b06cd194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D733D0 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakeDeleteRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakeDeleteRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, bool disableCache, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, const MethodInfo_3D733D0* method);
; bytes=300 sha256=335fbfe37b8189291e3e9dfde6d4a9c1ab96f98b72f109ed6d342792785791cc status=arm64_complete_bound indexed_start=True
0x03D733D0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D733D4: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D733D8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D733DC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D733E0: f65704a9  stp x22, x21, [sp, #0x40]
0x03D733E4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D733E8: fd030091  mov x29, sp
0x03D733EC: ff0302d1  sub sp, sp, #0x80
0x03D733F0: 5bd03bd5  mrs x27, tpidr_el0
0x03D733F4: 681740f9  ldr x8, [x27, #0x28]
0x03D733F8: ba3340f9  ldr x26, [x29, #0x60]
0x03D733FC: f40307aa  mov x20, x7
0x03D73400: f60305aa  mov x22, x5
0x03D73404: a8831ff8  stur x8, [x29, #-8]
0x03D73408: a28318f8  stur x2, [x29, #-0x78]
0x03D7340C: 5c1f40f9  ldr x28, [x26, #0x38]
0x03D73410: f50304aa  mov x21, x4
0x03D73414: f803032a  mov w24, w3
0x03D73418: f90302aa  mov x25, x2
0x03D7341C: f70301aa  mov x23, x1
0x03D73420: f30300aa  mov x19, x0
0x03D73424: 9c0000b5  cbnz x28, #0x3d73434
0x03D73428: e0031aaa  mov x0, x26
0x03D7342C: 138dcf97  bl #0x3156878
0x03D73430: 5c1f40f9  ldr x28, [x26, #0x38]
0x03D73434: 880340f9  ldr x8, [x28]
0x03D73438: e9030091  mov x9, sp
0x03D7343C: 02fd40b9  ldr w2, [x8, #0xfc]
0x03D73440: 4a3c0091  add x10, x2, #0xf
0x03D73444: 4a717c92  and x10, x10, #0x1fffffff0
0x03D73448: 3a010acb  sub x26, x9, x10
0x03D7344C: 5f030091  mov sp, x26
0x03D73450: 082940b9  ldr w8, [x8, #0x28]
0x03D73454: e0031aaa  mov x0, x26
0x03D73458: 1f010071  cmp w8, #0
0x03D7345C: a8e301d1  sub x8, x29, #0x78
0x03D73460: 21b3889a  csel x1, x25, x8, lt
0x03D73464: 436dd194  bl #0x71ce970
0x03D73468: 880740a9  ldp x8, x1, [x28]
0x03D7346C: 082940b9  ldr w8, [x8, #0x28]
0x03D73470: 200040f9  ldr x0, [x1]
0x03D73474: 4800f837  tbnz w8, #0x1f, #0x3d7347c
0x03D73478: 5a0340f9  ldr x26, [x26]
0x03D7347C: 08030012  and w8, w24, #1
0x03D73480: 89008052  movz w9, #0x4
0x03D73484: aa3300d1  sub x10, x29, #0xc
0x03D73488: ab4300d1  sub x11, x29, #0x10
0x03D7348C: ac5300d1  sub x12, x29, #0x14
0x03D73490: bfc31e38  sturb wzr, [x29, #-0x14]
0x03D73494: b76b39a9  stp x23, x26, [x29, #-0x70]
0x03D73498: b6573ba9  stp x22, x21, [x29, #-0x50]
0x03D7349C: b47f3ca9  stp x20, xzr, [x29, #-0x40]
0x03D734A0: a8431f38  sturb w8, [x29, #-0xc]
0x03D734A4: a9031fb8  stur w9, [x29, #-0x10]
0x03D734A8: aa2f3aa9  stp x10, x11, [x29, #-0x60]
0x03D734AC: ac7f3da9  stp x12, xzr, [x29, #-0x30]
0x03D734B0: 280840f9  ldr x8, [x1, #0x10]
0x03D734B4: a3c301d1  sub x3, x29, #0x70
0x03D734B8: a48300d1  sub x4, x29, #0x20
0x03D734BC: e20313aa  mov x2, x19
0x03D734C0: 00013fd6  blr x8
0x03D734C4: a0035ef8  ldur x0, [x29, #-0x20]
0x03D734C8: 681740f9  ldr x8, [x27, #0x28]
0x03D734CC: a9835ff8  ldur x9, [x29, #-8]
0x03D734D0: 1f0109eb  cmp x8, x9
0x03D734D4: 21010054  b.ne #0x3d734f8
0x03D734D8: bf030091  mov sp, x29
0x03D734DC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D734E0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D734E4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D734E8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D734EC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D734F0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D734F4: c0035fd6  ret
0x03D734F8: 266dd194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D738B4 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakePutRequest<object>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakePutRequest_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, const MethodInfo_3D738B4* method);
; bytes=156 sha256=6b1c48c712c0ba4f74662c8c79e0c0ac519d1348c7c6023fa8d323b2a48c320c status=arm64_complete_bound indexed_start=True
0x03D738B4: ffc301d1  sub sp, sp, #0x70
0x03D738B8: fe1300f9  str x30, [sp, #0x20]
0x03D738BC: fa6703a9  stp x26, x25, [sp, #0x30]
0x03D738C0: f85f04a9  stp x24, x23, [sp, #0x40]
0x03D738C4: f65705a9  stp x22, x21, [sp, #0x50]
0x03D738C8: f44f06a9  stp x20, x19, [sp, #0x60]
0x03D738CC: e81c40f9  ldr x8, [x7, #0x38]
0x03D738D0: f30306aa  mov x19, x6
0x03D738D4: f40305aa  mov x20, x5
0x03D738D8: f50304aa  mov x21, x4
0x03D738DC: f903032a  mov w25, w3
0x03D738E0: f60302aa  mov x22, x2
0x03D738E4: f70301aa  mov x23, x1
0x03D738E8: f80300aa  mov x24, x0
0x03D738EC: a80000b5  cbnz x8, #0x3d73900
0x03D738F0: e00307aa  mov x0, x7
0x03D738F4: fa0307aa  mov x26, x7
0x03D738F8: e08bcf97  bl #0x3156878
0x03D738FC: 481f40f9  ldr x8, [x26, #0x38]
0x03D73900: 080540f9  ldr x8, [x8, #8]
0x03D73904: 23030012  and w3, w25, #1
0x03D73908: 24008052  movz w4, #0x1
0x03D7390C: e00318aa  mov x0, x24
0x03D73910: e10317aa  mov x1, x23
0x03D73914: e20316aa  mov x2, x22
0x03D73918: e50314aa  mov x5, x20
0x03D7391C: e60315aa  mov x6, x21
0x03D73920: e70313aa  mov x7, x19
0x03D73924: ff2301a9  stp xzr, x8, [sp, #0x10]
0x03D73928: ff230039  strb wzr, [sp, #8]
0x03D7392C: ff0300f9  str xzr, [sp]
0x03D73930: 53000094  bl #0x3d73a7c
0x03D73934: f44f46a9  ldp x20, x19, [sp, #0x60]
0x03D73938: f65745a9  ldp x22, x21, [sp, #0x50]
0x03D7393C: f85f44a9  ldp x24, x23, [sp, #0x40]
0x03D73940: fa6743a9  ldp x26, x25, [sp, #0x30]
0x03D73944: fe1340f9  ldr x30, [sp, #0x20]
0x03D73948: ffc30191  add sp, sp, #0x70
0x03D7394C: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73950 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakePutRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakePutRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, bool userAuthorizationHeader, System_String_o* version, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, const MethodInfo_3D73950* method);
; bytes=300 sha256=b25c38340be057f1a76a6950b1d23c3f2205edb9af7c04a24da20f4844feaa26 status=arm64_complete_bound indexed_start=True
0x03D73950: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D73954: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D73958: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D7395C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D73960: f65704a9  stp x22, x21, [sp, #0x40]
0x03D73964: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D73968: fd030091  mov x29, sp
0x03D7396C: ff0302d1  sub sp, sp, #0x80
0x03D73970: 5bd03bd5  mrs x27, tpidr_el0
0x03D73974: 681740f9  ldr x8, [x27, #0x28]
0x03D73978: f40306aa  mov x20, x6
0x03D7397C: f60305aa  mov x22, x5
0x03D73980: f50304aa  mov x21, x4
0x03D73984: a8831ff8  stur x8, [x29, #-8]
0x03D73988: a28318f8  stur x2, [x29, #-0x78]
0x03D7398C: fc1c40f9  ldr x28, [x7, #0x38]
0x03D73990: f803032a  mov w24, w3
0x03D73994: fa0302aa  mov x26, x2
0x03D73998: f70301aa  mov x23, x1
0x03D7399C: f30300aa  mov x19, x0
0x03D739A0: bc0000b5  cbnz x28, #0x3d739b4
0x03D739A4: e00307aa  mov x0, x7
0x03D739A8: f90307aa  mov x25, x7
0x03D739AC: b38bcf97  bl #0x3156878
0x03D739B0: 3c1f40f9  ldr x28, [x25, #0x38]
0x03D739B4: 880340f9  ldr x8, [x28]
0x03D739B8: e9030091  mov x9, sp
0x03D739BC: 02fd40b9  ldr w2, [x8, #0xfc]
0x03D739C0: 4a3c0091  add x10, x2, #0xf
0x03D739C4: 4a717c92  and x10, x10, #0x1fffffff0
0x03D739C8: 39010acb  sub x25, x9, x10
0x03D739CC: 3f030091  mov sp, x25
0x03D739D0: 082940b9  ldr w8, [x8, #0x28]
0x03D739D4: e00319aa  mov x0, x25
0x03D739D8: 1f010071  cmp w8, #0
0x03D739DC: a8e301d1  sub x8, x29, #0x78
0x03D739E0: 41b3889a  csel x1, x26, x8, lt
0x03D739E4: e36bd194  bl #0x71ce970
0x03D739E8: 880740a9  ldp x8, x1, [x28]
0x03D739EC: 082940b9  ldr w8, [x8, #0x28]
0x03D739F0: 200040f9  ldr x0, [x1]
0x03D739F4: 4800f837  tbnz w8, #0x1f, #0x3d739fc
0x03D739F8: 390340f9  ldr x25, [x25]
0x03D739FC: 08030012  and w8, w24, #1
0x03D73A00: 29008052  movz w9, #0x1
0x03D73A04: aa3300d1  sub x10, x29, #0xc
0x03D73A08: ab4300d1  sub x11, x29, #0x10
0x03D73A0C: ac5300d1  sub x12, x29, #0x14
0x03D73A10: bfc31e38  sturb wzr, [x29, #-0x14]
0x03D73A14: b76739a9  stp x23, x25, [x29, #-0x70]
0x03D73A18: b6573ba9  stp x22, x21, [x29, #-0x50]
0x03D73A1C: b47f3ca9  stp x20, xzr, [x29, #-0x40]
0x03D73A20: a8431f38  sturb w8, [x29, #-0xc]
0x03D73A24: a9031fb8  stur w9, [x29, #-0x10]
0x03D73A28: aa2f3aa9  stp x10, x11, [x29, #-0x60]
0x03D73A2C: ac7f3da9  stp x12, xzr, [x29, #-0x30]
0x03D73A30: 280840f9  ldr x8, [x1, #0x10]
0x03D73A34: a3c301d1  sub x3, x29, #0x70
0x03D73A38: a48300d1  sub x4, x29, #0x20
0x03D73A3C: e20313aa  mov x2, x19
0x03D73A40: 00013fd6  blr x8
0x03D73A44: a0035ef8  ldur x0, [x29, #-0x20]
0x03D73A48: 681740f9  ldr x8, [x27, #0x28]
0x03D73A4C: a9835ff8  ldur x9, [x29, #-8]
0x03D73A50: 1f0109eb  cmp x8, x9
0x03D73A54: 21010054  b.ne #0x3d73a78
0x03D73A58: bf030091  mov sp, x29
0x03D73A5C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D73A60: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D73A64: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D73A68: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D73A6C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D73A70: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D73A74: c0035fd6  ret
0x03D73A78: c66bd194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D71224 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObject<object>
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObject_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, Framework_Core_Services_Backend_Http_Data_HttpResponse_o* response, strange_extensions_promise_api_IPromise_T__o* promise, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, bool reportParsingMetric, const MethodInfo_3D71224* method);
; bytes=184 sha256=b13e508dc13a43b256a7156930b4e07ee407d8e9982f6847417a56f05ff46023 status=arm64_complete_bound indexed_start=True
0x03D71224: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x03D71228: f85f01a9  stp x24, x23, [sp, #0x10]
0x03D7122C: f65702a9  stp x22, x21, [sp, #0x20]
0x03D71230: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D71234: a81c40f9  ldr x8, [x5, #0x38]
0x03D71238: f60305aa  mov x22, x5
0x03D7123C: f503042a  mov w21, w4
0x03D71240: f30303aa  mov x19, x3
0x03D71244: f40302aa  mov x20, x2
0x03D71248: f80301aa  mov x24, x1
0x03D7124C: f70300aa  mov x23, x0
0x03D71250: 080100b5  cbnz x8, #0x3d71270
0x03D71254: 40c801d0  adrp x0, #0x767b000
0x03D71258: 000441f9  ldr x0, [x0, #0x208]
0x03D7125C: ef3dd097  bl #0x3180a18
0x03D71260: c81e40f9  ldr x8, [x22, #0x38]
0x03D71264: 680000b5  cbnz x8, #0x3d71270
0x03D71268: e00316aa  mov x0, x22
0x03D7126C: 8395cf97  bl #0x3156878
0x03D71270: 580300b4  cbz x24, #0x3d712d8
0x03D71274: 081f40f9  ldr x8, [x24, #0x38]
0x03D71278: 080300b4  cbz x8, #0x3d712d8
0x03D7127C: 010940f9  ldr x1, [x8, #0x10]
0x03D71280: 48c801d0  adrp x8, #0x767b000
0x03D71284: 191340f9  ldr x25, [x24, #0x20]
0x03D71288: 080541f9  ldr x8, [x8, #0x208]
0x03D7128C: e2031faa  mov x2, xzr
0x03D71290: 000140f9  ldr x0, [x8]
0x03D71294: 43e55d94  bl #0x54ea7a0
0x03D71298: 081f40f9  ldr x8, [x24, #0x38]
0x03D7129C: e80100b4  cbz x8, #0x3d712d8
0x03D712A0: c91e40f9  ldr x9, [x22, #0x38]
0x03D712A4: e60300aa  mov x6, x0
0x03D712A8: 030940f9  ldr x3, [x8, #0x10]
0x03D712AC: a4020012  and w4, w21, #1
0x03D712B0: 270940f9  ldr x7, [x9, #0x10]
0x03D712B4: e00317aa  mov x0, x23
0x03D712B8: e20314aa  mov x2, x20
0x03D712BC: e50313aa  mov x5, x19
0x03D712C0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D712C4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03D712C8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03D712CC: e10319aa  mov x1, x25
0x03D712D0: fe67c4a8  ldp x30, x25, [sp], #0x40
0x03D712D4: 68000014  b #0x3d71474
0x03D712D8: 753ed097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D713B8 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObject<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObject___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, Framework_Core_Services_Backend_Http_Data_HttpResponse_o* response, strange_extensions_promise_api_IPromise_T__o* promise, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, bool reportParsingMetric, const MethodInfo_3D713B8* method);
; bytes=188 sha256=bd8247069f4bd0850969d4e141c35062eb571aa66d8efbc7c2fd54585a774c00 status=arm64_complete_bound indexed_start=True
0x03D713B8: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x03D713BC: f85f01a9  stp x24, x23, [sp, #0x10]
0x03D713C0: f65702a9  stp x22, x21, [sp, #0x20]
0x03D713C4: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D713C8: a81c40f9  ldr x8, [x5, #0x38]
0x03D713CC: f60305aa  mov x22, x5
0x03D713D0: f503042a  mov w21, w4
0x03D713D4: f30303aa  mov x19, x3
0x03D713D8: f40302aa  mov x20, x2
0x03D713DC: f80301aa  mov x24, x1
0x03D713E0: f70300aa  mov x23, x0
0x03D713E4: 080100b5  cbnz x8, #0x3d71404
0x03D713E8: 40c801d0  adrp x0, #0x767b000
0x03D713EC: 000441f9  ldr x0, [x0, #0x208]
0x03D713F0: 8a3dd097  bl #0x3180a18
0x03D713F4: c81e40f9  ldr x8, [x22, #0x38]
0x03D713F8: 680000b5  cbnz x8, #0x3d71404
0x03D713FC: e00316aa  mov x0, x22
0x03D71400: 1e95cf97  bl #0x3156878
0x03D71404: 780300b4  cbz x24, #0x3d71470
0x03D71408: 081f40f9  ldr x8, [x24, #0x38]
0x03D7140C: 280300b4  cbz x8, #0x3d71470
0x03D71410: 010940f9  ldr x1, [x8, #0x10]
0x03D71414: 48c801d0  adrp x8, #0x767b000
0x03D71418: 191340f9  ldr x25, [x24, #0x20]
0x03D7141C: 080541f9  ldr x8, [x8, #0x208]
0x03D71420: e2031faa  mov x2, xzr
0x03D71424: 000140f9  ldr x0, [x8]
0x03D71428: dee45d94  bl #0x54ea7a0
0x03D7142C: 081f40f9  ldr x8, [x24, #0x38]
0x03D71430: 080200b4  cbz x8, #0x3d71470
0x03D71434: c91e40f9  ldr x9, [x22, #0x38]
0x03D71438: e60300aa  mov x6, x0
0x03D7143C: 030940f9  ldr x3, [x8, #0x10]
0x03D71440: a4020012  and w4, w21, #1
0x03D71444: 270940f9  ldr x7, [x9, #0x10]
0x03D71448: e00317aa  mov x0, x23
0x03D7144C: e20314aa  mov x2, x20
0x03D71450: e50313aa  mov x5, x19
0x03D71454: e80040f9  ldr x8, [x7]
0x03D71458: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D7145C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03D71460: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03D71464: e10319aa  mov x1, x25
0x03D71468: fe67c4a8  ldp x30, x25, [sp], #0x40
0x03D7146C: 00011fd6  br x8
0x03D71470: 0f3ed097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7114C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObject<object>
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObject_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, Framework_Core_Services_Backend_Data_BackendMessageNotification_o* messageNotification, strange_extensions_promise_api_IPromise_T__o* promise, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, bool reportParsingMetric, const MethodInfo_3D7114C* method);
; bytes=216 sha256=7d5bc06b3f5d79e15ad7dca0987d1531a5bc5add1d5b7481851bb1c1d30c4fb2 status=arm64_complete_bound indexed_start=True
0x03D7114C: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x03D71150: f85f01a9  stp x24, x23, [sp, #0x10]
0x03D71154: f65702a9  stp x22, x21, [sp, #0x20]
0x03D71158: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D7115C: a81c40f9  ldr x8, [x5, #0x38]
0x03D71160: f60305aa  mov x22, x5
0x03D71164: f503042a  mov w21, w4
0x03D71168: f30303aa  mov x19, x3
0x03D7116C: f40302aa  mov x20, x2
0x03D71170: f80301aa  mov x24, x1
0x03D71174: f70300aa  mov x23, x0
0x03D71178: 680100b5  cbnz x8, #0x3d711a4
0x03D7117C: 40c801d0  adrp x0, #0x767b000
0x03D71180: 00fc40f9  ldr x0, [x0, #0x1f8]
0x03D71184: 253ed097  bl #0x3180a18
0x03D71188: 40c801d0  adrp x0, #0x767b000
0x03D7118C: 000041f9  ldr x0, [x0, #0x200]
0x03D71190: 223ed097  bl #0x3180a18
0x03D71194: c81e40f9  ldr x8, [x22, #0x38]
0x03D71198: 680000b5  cbnz x8, #0x3d711a4
0x03D7119C: e00316aa  mov x0, x22
0x03D711A0: b695cf97  bl #0x3156878
0x03D711A4: f80300b4  cbz x24, #0x3d71220
0x03D711A8: 001340f9  ldr x0, [x24, #0x20]
0x03D711AC: a00300b4  cbz x0, #0x3d71220
0x03D711B0: 080040f9  ldr x8, [x0]
0x03D711B4: 098556a9  ldp x9, x1, [x8, #0x168]
0x03D711B8: 20013fd6  blr x9
0x03D711BC: 48c801d0  adrp x8, #0x767b000
0x03D711C0: 030741a9  ldp x3, x1, [x24, #0x10]
0x03D711C4: 08fd40f9  ldr x8, [x8, #0x1f8]
0x03D711C8: 49c801d0  adrp x9, #0x767b000
0x03D711CC: 290141f9  ldr x9, [x9, #0x200]
0x03D711D0: f90300aa  mov x25, x0
0x03D711D4: 080140f9  ldr x8, [x8]
0x03D711D8: e4031faa  mov x4, xzr
0x03D711DC: 220140f9  ldr x2, [x9]
0x03D711E0: e00308aa  mov x0, x8
0x03D711E4: 3a1a5e94  bl #0x54f7acc
0x03D711E8: c81e40f9  ldr x8, [x22, #0x38]
0x03D711EC: 030f40f9  ldr x3, [x24, #0x18]
0x03D711F0: a4020012  and w4, w21, #1
0x03D711F4: e60300aa  mov x6, x0
0x03D711F8: 070940f9  ldr x7, [x8, #0x10]
0x03D711FC: e00317aa  mov x0, x23
0x03D71200: e20314aa  mov x2, x20
0x03D71204: e50313aa  mov x5, x19
0x03D71208: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D7120C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03D71210: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03D71214: e10319aa  mov x1, x25
0x03D71218: fe67c4a8  ldp x30, x25, [sp], #0x40
0x03D7121C: 96000014  b #0x3d71474
0x03D71220: a33ed097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D712DC | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObject<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObject___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, Framework_Core_Services_Backend_Data_BackendMessageNotification_o* messageNotification, strange_extensions_promise_api_IPromise_T__o* promise, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, bool reportParsingMetric, const MethodInfo_3D712DC* method);
; bytes=220 sha256=e825a1ba03f3e3e4cee5192acced4f79691c850a964138c7f86a57cfd363d647 status=arm64_complete_bound indexed_start=True
0x03D712DC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x03D712E0: f85f01a9  stp x24, x23, [sp, #0x10]
0x03D712E4: f65702a9  stp x22, x21, [sp, #0x20]
0x03D712E8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D712EC: a81c40f9  ldr x8, [x5, #0x38]
0x03D712F0: f60305aa  mov x22, x5
0x03D712F4: f503042a  mov w21, w4
0x03D712F8: f30303aa  mov x19, x3
0x03D712FC: f40302aa  mov x20, x2
0x03D71300: f80301aa  mov x24, x1
0x03D71304: f70300aa  mov x23, x0
0x03D71308: 680100b5  cbnz x8, #0x3d71334
0x03D7130C: 40c801d0  adrp x0, #0x767b000
0x03D71310: 00fc40f9  ldr x0, [x0, #0x1f8]
0x03D71314: c13dd097  bl #0x3180a18
0x03D71318: 40c801d0  adrp x0, #0x767b000
0x03D7131C: 000041f9  ldr x0, [x0, #0x200]
0x03D71320: be3dd097  bl #0x3180a18
0x03D71324: c81e40f9  ldr x8, [x22, #0x38]
0x03D71328: 680000b5  cbnz x8, #0x3d71334
0x03D7132C: e00316aa  mov x0, x22
0x03D71330: 5295cf97  bl #0x3156878
0x03D71334: 180400b4  cbz x24, #0x3d713b4
0x03D71338: 001340f9  ldr x0, [x24, #0x20]
0x03D7133C: c00300b4  cbz x0, #0x3d713b4
0x03D71340: 080040f9  ldr x8, [x0]
0x03D71344: 098556a9  ldp x9, x1, [x8, #0x168]
0x03D71348: 20013fd6  blr x9
0x03D7134C: 48c801d0  adrp x8, #0x767b000
0x03D71350: 030741a9  ldp x3, x1, [x24, #0x10]
0x03D71354: 08fd40f9  ldr x8, [x8, #0x1f8]
0x03D71358: 49c801d0  adrp x9, #0x767b000
0x03D7135C: 290141f9  ldr x9, [x9, #0x200]
0x03D71360: f90300aa  mov x25, x0
0x03D71364: 080140f9  ldr x8, [x8]
0x03D71368: e4031faa  mov x4, xzr
0x03D7136C: 220140f9  ldr x2, [x9]
0x03D71370: e00308aa  mov x0, x8
0x03D71374: d6195e94  bl #0x54f7acc
0x03D71378: c81e40f9  ldr x8, [x22, #0x38]
0x03D7137C: 030f40f9  ldr x3, [x24, #0x18]
0x03D71380: a4020012  and w4, w21, #1
0x03D71384: e60300aa  mov x6, x0
0x03D71388: 070940f9  ldr x7, [x8, #0x10]
0x03D7138C: e00317aa  mov x0, x23
0x03D71390: e20314aa  mov x2, x20
0x03D71394: e50313aa  mov x5, x19
0x03D71398: e80040f9  ldr x8, [x7]
0x03D7139C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D713A0: f65742a9  ldp x22, x21, [sp, #0x20]
0x03D713A4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03D713A8: e10319aa  mov x1, x25
0x03D713AC: fe67c4a8  ldp x30, x25, [sp], #0x40
0x03D713B0: 00011fd6  br x8
0x03D713B4: 3e3ed097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D708F4 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObject<object>
; native signature: Il2CppObject* Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObject_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, Framework_Core_Services_Backend_Http_Data_HttpResponse_o* response, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, const MethodInfo_3D708F4* method);
; bytes=924 sha256=44d011754ba6b88bb25a1d53a07cd592fcc1a812d961d3f3bba4aba8530ec4bd status=arm64_complete_bound indexed_start=True
0x03D708F4: ff8301d1  sub sp, sp, #0x60
0x03D708F8: fe1300f9  str x30, [sp, #0x20]
0x03D708FC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D70900: f65704a9  stp x22, x21, [sp, #0x40]
0x03D70904: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D70908: 681c40f9  ldr x8, [x3, #0x38]
0x03D7090C: f30303aa  mov x19, x3
0x03D70910: f50302aa  mov x21, x2
0x03D70914: f40301aa  mov x20, x1
0x03D70918: f60300aa  mov x22, x0
0x03D7091C: 080100b5  cbnz x8, #0x3d7093c
0x03D70920: e0c601d0  adrp x0, #0x764e000
0x03D70924: 00ac42f9  ldr x0, [x0, #0x558]
0x03D70928: 3c40d097  bl #0x3180a18
0x03D7092C: 681e40f9  ldr x8, [x19, #0x38]
0x03D70930: 680000b5  cbnz x8, #0x3d7093c
0x03D70934: e00313aa  mov x0, x19
0x03D70938: d097cf97  bl #0x3156878
0x03D7093C: ff1700f9  str xzr, [sp, #0x28]
0x03D70940: 740b00b4  cbz x20, #0x3d70aac
0x03D70944: d61e40f9  ldr x22, [x22, #0x38]
0x03D70948: 560b00b4  cbz x22, #0x3d70ab0
0x03D7094C: 691e40f9  ldr x9, [x19, #0x38]
0x03D70950: c80240f9  ldr x8, [x22]
0x03D70954: 971240f9  ldr x23, [x20, #0x20]
0x03D70958: 380540f9  ldr x24, [x9, #8]
0x03D7095C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D70960: 011340f9  ldr x1, [x24, #0x20]
0x03D70964: 02a34079  ldrh w2, [x24, #0x50]
0x03D70968: 290100b4  cbz x9, #0x3d7098c
0x03D7096C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D70970: 4a210091  add x10, x10, #8
0x03D70974: 4b815ff8  ldur x11, [x10, #-8]
0x03D70978: 7f0101eb  cmp x11, x1
0x03D7097C: e0000054  b.eq #0x3d70998
0x03D70980: 290500f1  subs x9, x9, #1
0x03D70984: 4a410091  add x10, x10, #0x10
0x03D70988: 61ffff54  b.ne #0x3d70974
0x03D7098C: e00316aa  mov x0, x22
0x03D70990: 6098cf97  bl #0x3156b10
0x03D70994: 05000014  b #0x3d709a8
0x03D70998: 490140b9  ldr w9, [x10]
0x03D7099C: 2901020b  add w9, w9, w2
0x03D709A0: 08d1298b  add x8, x8, w9, sxtw #4
0x03D709A4: 00e10491  add x0, x8, #0x138
0x03D709A8: 000440f9  ldr x0, [x0, #8]
0x03D709AC: e10318aa  mov x1, x24
0x03D709B0: 7640d097  bl #0x3180b88
0x03D709B4: 080440f9  ldr x8, [x0, #8]
0x03D709B8: e20300aa  mov x2, x0
0x03D709BC: e00316aa  mov x0, x22
0x03D709C0: e10317aa  mov x1, x23
0x03D709C4: 00013fd6  blr x8
0x03D709C8: f60300aa  mov x22, x0
0x03D709CC: 350600b4  cbz x21, #0x3d70a90
0x03D709D0: e8c601d0  adrp x8, #0x764e000
0x03D709D4: 08ad42f9  ldr x8, [x8, #0x558]
0x03D709D8: 000140f9  ldr x0, [x8]
0x03D709DC: 681e40f9  ldr x8, [x19, #0x38]
0x03D709E0: 09e040b9  ldr w9, [x0, #0xe0]
0x03D709E4: 170d40f9  ldr x23, [x8, #0x18]
0x03D709E8: 49000035  cbnz w9, #0x3d709f0
0x03D709EC: 6840d097  bl #0x3180b8c
0x03D709F0: e00317aa  mov x0, x23
0x03D709F4: e1031faa  mov x1, xzr
0x03D709F8: f3d16494  bl #0x56a51c4
0x03D709FC: c00500b4  cbz x0, #0x3d70ab4
0x03D70A00: 080040f9  ldr x8, [x0]
0x03D70A04: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x03D70A08: 20013fd6  blr x9
0x03D70A0C: 681e40f9  ldr x8, [x19, #0x38]
0x03D70A10: f70300aa  mov x23, x0
0x03D70A14: 010940f9  ldr x1, [x8, #0x10]
0x03D70A18: 28d44439  ldrb w8, [x1, #0x135]
0x03D70A1C: 88000037  tbnz w8, #0, #0x3d70a2c
0x03D70A20: e00301aa  mov x0, x1
0x03D70A24: 7e97cf97  bl #0x315681c
0x03D70A28: e10300aa  mov x1, x0
0x03D70A2C: a80240f9  ldr x8, [x21]
0x03D70A30: 095d4279  ldrh w9, [x8, #0x12e]
0x03D70A34: 290100b4  cbz x9, #0x3d70a58
0x03D70A38: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D70A3C: 4a210091  add x10, x10, #8
0x03D70A40: 4b815ff8  ldur x11, [x10, #-8]
0x03D70A44: 7f0101eb  cmp x11, x1
0x03D70A48: 00010054  b.eq #0x3d70a68
0x03D70A4C: 290500f1  subs x9, x9, #1
0x03D70A50: 4a410091  add x10, x10, #0x10
0x03D70A54: 61ffff54  b.ne #0x3d70a40
0x03D70A58: e00315aa  mov x0, x21
0x03D70A5C: e2031f2a  mov w2, wzr
0x03D70A60: 2c98cf97  bl #0x3156b10
0x03D70A64: 04000014  b #0x3d70a74
0x03D70A68: 490180b9  ldrsw x9, [x10]
0x03D70A6C: 0811098b  add x8, x8, x9, lsl #4
0x03D70A70: 00e10491  add x0, x8, #0x138
0x03D70A74: 081040a9  ldp x8, x4, [x0]
0x03D70A78: e3a30091  add x3, sp, #0x28
0x03D70A7C: e00315aa  mov x0, x21
0x03D70A80: e10316aa  mov x1, x22
0x03D70A84: e20317aa  mov x2, x23
0x03D70A88: 00013fd6  blr x8
0x03D70A8C: 60010036  tbz w0, #0, #0x3d70ab8
0x03D70A90: e00316aa  mov x0, x22
0x03D70A94: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D70A98: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D70A9C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D70AA0: fe1340f9  ldr x30, [sp, #0x20]
0x03D70AA4: ff830191  add sp, sp, #0x60
0x03D70AA8: c0035fd6  ret
0x03D70AAC: 8040d097  bl #0x3180cac
0x03D70AB0: 7f40d097  bl #0x3180cac
0x03D70AB4: 7e40d097  bl #0x3180cac
0x03D70AB8: f51740f9  ldr x21, [sp, #0x28]
0x03D70ABC: 941240f9  ldr x20, [x20, #0x20]
0x03D70AC0: 40c801f0  adrp x0, #0x767b000
0x03D70AC4: 00ec40f9  ldr x0, [x0, #0x1d8]
0x03D70AC8: d93fd097  bl #0x3180a2c
0x03D70ACC: e10300aa  mov x1, x0
0x03D70AD0: e00315aa  mov x0, x21
0x03D70AD4: e20314aa  mov x2, x20
0x03D70AD8: e3031faa  mov x3, xzr
0x03D70ADC: 971a5e94  bl #0x54f7538
0x03D70AE0: f40300aa  mov x20, x0
0x03D70AE4: 40c801b0  adrp x0, #0x7679000
0x03D70AE8: 007844f9  ldr x0, [x0, #0x8f0]
0x03D70AEC: d03fd097  bl #0x3180a2c
0x03D70AF0: 08008092  movn x8, #0
0x03D70AF4: e9018052  movz w9, #0xf
0x03D70AF8: e0a300a9  stp x0, x8, [sp, #8]
0x03D70AFC: e91b00b9  str w9, [sp, #0x18]
0x03D70B00: e0230091  add x0, sp, #8
0x03D70B04: e1031faa  mov x1, xzr
0x03D70B08: f7726594  bl #0x56cd6e4
0x03D70B0C: f50300aa  mov x21, x0
0x03D70B10: e0c701b0  adrp x0, #0x766d000
0x03D70B14: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D70B18: c53fd097  bl #0x3180a2c
0x03D70B1C: 08e040b9  ldr w8, [x0, #0xe0]
0x03D70B20: 48000035  cbnz w8, #0x3d70b28
0x03D70B24: 1a40d097  bl #0x3180b8c
0x03D70B28: 40c801f0  adrp x0, #0x767b000
0x03D70B2C: 00f040f9  ldr x0, [x0, #0x1e0]
0x03D70B30: bf3fd097  bl #0x3180a2c
0x03D70B34: f60300aa  mov x22, x0
0x03D70B38: 40c801f0  adrp x0, #0x767b000
0x03D70B3C: 00f440f9  ldr x0, [x0, #0x1e8]
0x03D70B40: bb3fd097  bl #0x3180a2c
0x03D70B44: e40300aa  mov x4, x0
0x03D70B48: e00314aa  mov x0, x20
0x03D70B4C: e10315aa  mov x1, x21
0x03D70B50: e2031faa  mov x2, xzr
0x03D70B54: e30316aa  mov x3, x22
0x03D70B58: e5031faa  mov x5, xzr
0x03D70B5C: e6031faa  mov x6, xzr
0x03D70B60: 35ee5b94  bl #0x546c434
0x03D70B64: f41740f9  ldr x20, [sp, #0x28]
0x03D70B68: 40c801f0  adrp x0, #0x767b000
0x03D70B6C: 00f840f9  ldr x0, [x0, #0x1f0]
0x03D70B70: af3fd097  bl #0x3180a2c
0x03D70B74: 4b40d097  bl #0x3180ca0
0x03D70B78: f50300aa  mov x21, x0
0x03D70B7C: e10314aa  mov x1, x20
0x03D70B80: e2031faa  mov x2, xzr
0x03D70B84: 4cf7ae94  bl #0x692e8b4
0x03D70B88: e00315aa  mov x0, x21
0x03D70B8C: e10313aa  mov x1, x19
0x03D70B90: fb3fd097  bl #0x3180b7c
0x03D70B94: 0a000014  b #0x3d70bbc
0x03D70B98: 09000014  b #0x3d70bbc
0x03D70B9C: 08000014  b #0x3d70bbc
0x03D70BA0: 07000014  b #0x3d70bbc
0x03D70BA4: 06000014  b #0x3d70bbc
0x03D70BA8: 05000014  b #0x3d70bbc
0x03D70BAC: 04000014  b #0x3d70bbc
0x03D70BB0: 03000014  b #0x3d70bbc
0x03D70BB4: 02000014  b #0x3d70bbc
0x03D70BB8: 01000014  b #0x3d70bbc
0x03D70BBC: f30300aa  mov x19, x0
0x03D70BC0: 3f040071  cmp w1, #1
0x03D70BC4: 01060054  b.ne #0x3d70c84
0x03D70BC8: e00313aa  mov x0, x19
0x03D70BCC: 5177d194  bl #0x71ce910
0x03D70BD0: f30300aa  mov x19, x0
0x03D70BD4: e0c601d0  adrp x0, #0x764e000
0x03D70BD8: 006c42f9  ldr x0, [x0, #0x4d8]
0x03D70BDC: 943fd097  bl #0x3180a2c
0x03D70BE0: 680240f9  ldr x8, [x19]
0x03D70BE4: 010140f9  ldr x1, [x8]
0x03D70BE8: 3c41d097  bl #0x31810d8
0x03D70BEC: 80030036  tbz w0, #0, #0x3d70c5c
0x03D70BF0: 730240f9  ldr x19, [x19]
0x03D70BF4: 4b77d194  bl #0x71ce920
0x03D70BF8: 40c801b0  adrp x0, #0x7679000
0x03D70BFC: 007844f9  ldr x0, [x0, #0x8f0]
0x03D70C00: 8b3fd097  bl #0x3180a2c
0x03D70C04: 08008092  movn x8, #0
0x03D70C08: e9018052  movz w9, #0xf
0x03D70C0C: e0a300a9  stp x0, x8, [sp, #8]
0x03D70C10: e0230091  add x0, sp, #8
0x03D70C14: e1031faa  mov x1, xzr
0x03D70C18: e91b00b9  str w9, [sp, #0x18]
0x03D70C1C: b2726594  bl #0x56cd6e4
0x03D70C20: f40300aa  mov x20, x0
0x03D70C24: e0c701b0  adrp x0, #0x766d000
0x03D70C28: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D70C2C: 803fd097  bl #0x3180a2c
0x03D70C30: 08e040b9  ldr w8, [x0, #0xe0]
0x03D70C34: 48000035  cbnz w8, #0x3d70c3c
0x03D70C38: d53fd097  bl #0x3180b8c
0x03D70C3C: e00313aa  mov x0, x19
0x03D70C40: e10314aa  mov x1, x20
0x03D70C44: e2031faa  mov x2, xzr
0x03D70C48: e3031faa  mov x3, xzr
0x03D70C4C: e4031faa  mov x4, xzr
0x03D70C50: 56ee5b94  bl #0x546c5a8
0x03D70C54: f6031faa  mov x22, xzr
0x03D70C58: 8effff17  b #0x3d70a90
0x03D70C5C: 00018052  movz w0, #0x8
0x03D70C60: 3477d194  bl #0x71ce930
0x03D70C64: 680240f9  ldr x8, [x19]
0x03D70C68: 080000f9  str x8, [x0]
0x03D70C6C: 21a30190  adrp x1, #0x71d4000
0x03D70C70: 21a03491  add x1, x1, #0xd28
0x03D70C74: e2031faa  mov x2, xzr
0x03D70C78: 3277d194  bl #0x71ce940
0x03D70C7C: f30300aa  mov x19, x0
0x03D70C80: 2877d194  bl #0x71ce920
0x03D70C84: e00313aa  mov x0, x19
0x03D70C88: 34d3d397  bl #0x3265958
0x03D70C8C: 2262c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D70C90 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObject<__Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObject___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, Framework_Core_Services_Backend_Http_Data_HttpResponse_o* response, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, const MethodInfo_3D70C90* method);
; bytes=1212 sha256=e93f3f90888876cd6f85c29065737d7b9af4026cac600157d1ca4c9ffe5553fd status=arm64_complete_bound indexed_start=True
0x03D70C90: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D70C94: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D70C98: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D70C9C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D70CA0: f65704a9  stp x22, x21, [sp, #0x40]
0x03D70CA4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D70CA8: fd030091  mov x29, sp
0x03D70CAC: ff8301d1  sub sp, sp, #0x60
0x03D70CB0: 48d03bd5  mrs x8, tpidr_el0
0x03D70CB4: a3a33aa9  stp x3, x8, [x29, #-0x58]
0x03D70CB8: 081540f9  ldr x8, [x8, #0x28]
0x03D70CBC: f70304aa  mov x23, x4
0x03D70CC0: f90302aa  mov x25, x2
0x03D70CC4: f80301aa  mov x24, x1
0x03D70CC8: a8831ff8  stur x8, [x29, #-8]
0x03D70CCC: 931c40f9  ldr x19, [x4, #0x38]
0x03D70CD0: fb0300aa  mov x27, x0
0x03D70CD4: 330100b5  cbnz x19, #0x3d70cf8
0x03D70CD8: e0c601d0  adrp x0, #0x764e000
0x03D70CDC: 00ac42f9  ldr x0, [x0, #0x558]
0x03D70CE0: 4e3fd097  bl #0x3180a18
0x03D70CE4: f31e40f9  ldr x19, [x23, #0x38]
0x03D70CE8: 930000b5  cbnz x19, #0x3d70cf8
0x03D70CEC: e00317aa  mov x0, x23
0x03D70CF0: e296cf97  bl #0x3156878
0x03D70CF4: f31e40f9  ldr x19, [x23, #0x38]
0x03D70CF8: 680240f9  ldr x8, [x19]
0x03D70CFC: 14fd40b9  ldr w20, [x8, #0xfc]
0x03D70D00: e8030091  mov x8, sp
0x03D70D04: 893e0091  add x9, x20, #0xf
0x03D70D08: 3a717c92  and x26, x9, #0x1fffffff0
0x03D70D0C: 15011acb  sub x21, x8, x26
0x03D70D10: bf020091  mov sp, x21
0x03D70D14: e8030091  mov x8, sp
0x03D70D18: 16011acb  sub x22, x8, x26
0x03D70D1C: df020091  mov sp, x22
0x03D70D20: e00316aa  mov x0, x22
0x03D70D24: e1031f2a  mov w1, wzr
0x03D70D28: e20314aa  mov x2, x20
0x03D70D2C: 1d77d194  bl #0x71ce9a0
0x03D70D30: e8030091  mov x8, sp
0x03D70D34: 1a011acb  sub x26, x8, x26
0x03D70D38: 5f030091  mov sp, x26
0x03D70D3C: e0031aaa  mov x0, x26
0x03D70D40: e1031f2a  mov w1, wzr
0x03D70D44: e20314aa  mov x2, x20
0x03D70D48: 1677d194  bl #0x71ce9a0
0x03D70D4C: e00316aa  mov x0, x22
0x03D70D50: e1031f2a  mov w1, wzr
0x03D70D54: e20314aa  mov x2, x20
0x03D70D58: bf031df8  stur xzr, [x29, #-0x30]
0x03D70D5C: 1177d194  bl #0x71ce9a0
0x03D70D60: 781000b4  cbz x24, #0x3d70f6c
0x03D70D64: 7b1f40f9  ldr x27, [x27, #0x38]
0x03D70D68: 5b1000b4  cbz x27, #0x3d70f70
0x03D70D6C: 7c0640f9  ldr x28, [x19, #8]
0x03D70D70: 680340f9  ldr x8, [x27]
0x03D70D74: 131340f9  ldr x19, [x24, #0x20]
0x03D70D78: 811340f9  ldr x1, [x28, #0x20]
0x03D70D7C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D70D80: 82a34079  ldrh w2, [x28, #0x50]
0x03D70D84: 290100b4  cbz x9, #0x3d70da8
0x03D70D88: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D70D8C: 4a210091  add x10, x10, #8
0x03D70D90: 4b815ff8  ldur x11, [x10, #-8]
0x03D70D94: 7f0101eb  cmp x11, x1
0x03D70D98: e0000054  b.eq #0x3d70db4
0x03D70D9C: 290500f1  subs x9, x9, #1
0x03D70DA0: 4a410091  add x10, x10, #0x10
0x03D70DA4: 61ffff54  b.ne #0x3d70d90
0x03D70DA8: e0031baa  mov x0, x27
0x03D70DAC: 5997cf97  bl #0x3156b10
0x03D70DB0: 05000014  b #0x3d70dc4
0x03D70DB4: 490140b9  ldr w9, [x10]
0x03D70DB8: 2901020b  add w9, w9, w2
0x03D70DBC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D70DC0: 00e10491  add x0, x8, #0x138
0x03D70DC4: 000440f9  ldr x0, [x0, #8]
0x03D70DC8: e1031caa  mov x1, x28
0x03D70DCC: 6f3fd097  bl #0x3180b88
0x03D70DD0: e10300aa  mov x1, x0
0x03D70DD4: b3d73da9  stp x19, x21, [x29, #-0x28]
0x03D70DD8: 20a040a9  ldp x0, x8, [x1, #8]
0x03D70DDC: a3a300d1  sub x3, x29, #0x28
0x03D70DE0: e2031baa  mov x2, x27
0x03D70DE4: e40315aa  mov x4, x21
0x03D70DE8: 00013fd6  blr x8
0x03D70DEC: e0031aaa  mov x0, x26
0x03D70DF0: e10315aa  mov x1, x21
0x03D70DF4: e20314aa  mov x2, x20
0x03D70DF8: de76d194  bl #0x71ce970
0x03D70DFC: f90700b4  cbz x25, #0x3d70ef8
0x03D70E00: e00315aa  mov x0, x21
0x03D70E04: e1031aaa  mov x1, x26
0x03D70E08: e20314aa  mov x2, x20
0x03D70E0C: d976d194  bl #0x71ce970
0x03D70E10: e8c601d0  adrp x8, #0x764e000
0x03D70E14: 08ad42f9  ldr x8, [x8, #0x558]
0x03D70E18: 000140f9  ldr x0, [x8]
0x03D70E1C: e81e40f9  ldr x8, [x23, #0x38]
0x03D70E20: 09e040b9  ldr w9, [x0, #0xe0]
0x03D70E24: 1b0d40f9  ldr x27, [x8, #0x18]
0x03D70E28: 49000035  cbnz w9, #0x3d70e30
0x03D70E2C: 583fd097  bl #0x3180b8c
0x03D70E30: e0031baa  mov x0, x27
0x03D70E34: e1031faa  mov x1, xzr
0x03D70E38: e3d06494  bl #0x56a51c4
0x03D70E3C: c00900b4  cbz x0, #0x3d70f74
0x03D70E40: 080040f9  ldr x8, [x0]
0x03D70E44: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x03D70E48: 20013fd6  blr x9
0x03D70E4C: e81e40f9  ldr x8, [x23, #0x38]
0x03D70E50: fb0300aa  mov x27, x0
0x03D70E54: 010940f9  ldr x1, [x8, #0x10]
0x03D70E58: 29d44439  ldrb w9, [x1, #0x135]
0x03D70E5C: a9000037  tbnz w9, #0, #0x3d70e70
0x03D70E60: e00301aa  mov x0, x1
0x03D70E64: 6e96cf97  bl #0x315681c
0x03D70E68: e10300aa  mov x1, x0
0x03D70E6C: e81e40f9  ldr x8, [x23, #0x38]
0x03D70E70: 080140f9  ldr x8, [x8]
0x03D70E74: f30315aa  mov x19, x21
0x03D70E78: 082940b9  ldr w8, [x8, #0x28]
0x03D70E7C: 4800f837  tbnz w8, #0x1f, #0x3d70e84
0x03D70E80: b30240f9  ldr x19, [x21]
0x03D70E84: 280340f9  ldr x8, [x25]
0x03D70E88: 095d4279  ldrh w9, [x8, #0x12e]
0x03D70E8C: 290100b4  cbz x9, #0x3d70eb0
0x03D70E90: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D70E94: 4a210091  add x10, x10, #8
0x03D70E98: 4b815ff8  ldur x11, [x10, #-8]
0x03D70E9C: 7f0101eb  cmp x11, x1
0x03D70EA0: 00010054  b.eq #0x3d70ec0
0x03D70EA4: 290500f1  subs x9, x9, #1
0x03D70EA8: 4a410091  add x10, x10, #0x10
0x03D70EAC: 61ffff54  b.ne #0x3d70e98
0x03D70EB0: e00319aa  mov x0, x25
0x03D70EB4: e2031f2a  mov w2, wzr
0x03D70EB8: 1697cf97  bl #0x3156b10
0x03D70EBC: 04000014  b #0x3d70ecc
0x03D70EC0: 490180b9  ldrsw x9, [x10]
0x03D70EC4: 0811098b  add x8, x8, x9, lsl #4
0x03D70EC8: 00e10491  add x0, x8, #0x138
0x03D70ECC: a8c300d1  sub x8, x29, #0x30
0x03D70ED0: b3ef3da9  stp x19, x27, [x29, #-0x28]
0x03D70ED4: a8831ef8  stur x8, [x29, #-0x18]
0x03D70ED8: 010440f9  ldr x1, [x0, #8]
0x03D70EDC: 20a040a9  ldp x0, x8, [x1, #8]
0x03D70EE0: a3a300d1  sub x3, x29, #0x28
0x03D70EE4: a43300d1  sub x4, x29, #0xc
0x03D70EE8: e20319aa  mov x2, x25
0x03D70EEC: 00013fd6  blr x8
0x03D70EF0: a8435f38  ldurb w8, [x29, #-0xc]
0x03D70EF4: 28040034  cbz w8, #0x3d70f78
0x03D70EF8: e00315aa  mov x0, x21
0x03D70EFC: e1031aaa  mov x1, x26
0x03D70F00: e20314aa  mov x2, x20
0x03D70F04: 9b76d194  bl #0x71ce970
0x03D70F08: e00316aa  mov x0, x22
0x03D70F0C: e10315aa  mov x1, x21
0x03D70F10: e20314aa  mov x2, x20
0x03D70F14: 9776d194  bl #0x71ce970
0x03D70F18: e00315aa  mov x0, x21
0x03D70F1C: e10316aa  mov x1, x22
0x03D70F20: e20314aa  mov x2, x20
0x03D70F24: 9376d194  bl #0x71ce970
0x03D70F28: a0835af8  ldur x0, [x29, #-0x58]
0x03D70F2C: e10315aa  mov x1, x21
0x03D70F30: e20314aa  mov x2, x20
0x03D70F34: 8f76d194  bl #0x71ce970
0x03D70F38: a8035bf8  ldur x8, [x29, #-0x50]
0x03D70F3C: 081540f9  ldr x8, [x8, #0x28]
0x03D70F40: a9835ff8  ldur x9, [x29, #-8]
0x03D70F44: 1f0109eb  cmp x8, x9
0x03D70F48: 61080054  b.ne #0x3d71054
0x03D70F4C: bf030091  mov sp, x29
0x03D70F50: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D70F54: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D70F58: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D70F5C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D70F60: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D70F64: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D70F68: c0035fd6  ret
0x03D70F6C: 503fd097  bl #0x3180cac
0x03D70F70: 4f3fd097  bl #0x3180cac
0x03D70F74: 4e3fd097  bl #0x3180cac
0x03D70F78: b9035df8  ldur x25, [x29, #-0x30]
0x03D70F7C: 181340f9  ldr x24, [x24, #0x20]
0x03D70F80: 40c801f0  adrp x0, #0x767b000
0x03D70F84: 00ec40f9  ldr x0, [x0, #0x1d8]
0x03D70F88: a93ed097  bl #0x3180a2c
0x03D70F8C: e10300aa  mov x1, x0
0x03D70F90: e00319aa  mov x0, x25
0x03D70F94: e20318aa  mov x2, x24
0x03D70F98: e3031faa  mov x3, xzr
0x03D70F9C: 67195e94  bl #0x54f7538
0x03D70FA0: f80300aa  mov x24, x0
0x03D70FA4: 40c801b0  adrp x0, #0x7679000
0x03D70FA8: 007844f9  ldr x0, [x0, #0x8f0]
0x03D70FAC: a03ed097  bl #0x3180a2c
0x03D70FB0: 08008092  movn x8, #0
0x03D70FB4: e9018052  movz w9, #0xf
0x03D70FB8: a0a33da9  stp x0, x8, [x29, #-0x28]
0x03D70FBC: a9831eb8  stur w9, [x29, #-0x18]
0x03D70FC0: a0a300d1  sub x0, x29, #0x28
0x03D70FC4: e1031faa  mov x1, xzr
0x03D70FC8: c7716594  bl #0x56cd6e4
0x03D70FCC: f90300aa  mov x25, x0
0x03D70FD0: e0c701b0  adrp x0, #0x766d000
0x03D70FD4: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D70FD8: 953ed097  bl #0x3180a2c
0x03D70FDC: 08e040b9  ldr w8, [x0, #0xe0]
0x03D70FE0: 48000035  cbnz w8, #0x3d70fe8
0x03D70FE4: ea3ed097  bl #0x3180b8c
0x03D70FE8: 40c801f0  adrp x0, #0x767b000
0x03D70FEC: 00f040f9  ldr x0, [x0, #0x1e0]
0x03D70FF0: 8f3ed097  bl #0x3180a2c
0x03D70FF4: fa0300aa  mov x26, x0
0x03D70FF8: 40c801f0  adrp x0, #0x767b000
0x03D70FFC: 00f440f9  ldr x0, [x0, #0x1e8]
0x03D71000: 8b3ed097  bl #0x3180a2c
0x03D71004: e40300aa  mov x4, x0
0x03D71008: e00318aa  mov x0, x24
0x03D7100C: e10319aa  mov x1, x25
0x03D71010: e2031faa  mov x2, xzr
0x03D71014: e3031aaa  mov x3, x26
0x03D71018: e5031faa  mov x5, xzr
0x03D7101C: e6031faa  mov x6, xzr
0x03D71020: 05ed5b94  bl #0x546c434
0x03D71024: b8035df8  ldur x24, [x29, #-0x30]
0x03D71028: 40c801d0  adrp x0, #0x767b000
0x03D7102C: 00f840f9  ldr x0, [x0, #0x1f0]
0x03D71030: 7f3ed097  bl #0x3180a2c
0x03D71034: 1b3fd097  bl #0x3180ca0
0x03D71038: f90300aa  mov x25, x0
0x03D7103C: e10318aa  mov x1, x24
0x03D71040: e2031faa  mov x2, xzr
0x03D71044: 1cf6ae94  bl #0x692e8b4
0x03D71048: e00319aa  mov x0, x25
0x03D7104C: e10317aa  mov x1, x23
0x03D71050: cb3ed097  bl #0x3180b7c
0x03D71054: 4f76d194  bl #0x71ce990
0x03D71058: 09000014  b #0x3d7107c
0x03D7105C: 08000014  b #0x3d7107c
0x03D71060: 07000014  b #0x3d7107c
0x03D71064: 06000014  b #0x3d7107c
0x03D71068: 05000014  b #0x3d7107c
0x03D7106C: 04000014  b #0x3d7107c
0x03D71070: 03000014  b #0x3d7107c
0x03D71074: 02000014  b #0x3d7107c
0x03D71078: 01000014  b #0x3d7107c
0x03D7107C: f70300aa  mov x23, x0
0x03D71080: 3f040071  cmp w1, #1
0x03D71084: e1050054  b.ne #0x3d71140
0x03D71088: e00317aa  mov x0, x23
0x03D7108C: 2176d194  bl #0x71ce910
0x03D71090: f70300aa  mov x23, x0
0x03D71094: e0c601b0  adrp x0, #0x764e000
0x03D71098: 006c42f9  ldr x0, [x0, #0x4d8]
0x03D7109C: 643ed097  bl #0x3180a2c
0x03D710A0: e80240f9  ldr x8, [x23]
0x03D710A4: 010140f9  ldr x1, [x8]
0x03D710A8: 0c40d097  bl #0x31810d8
0x03D710AC: 60030036  tbz w0, #0, #0x3d71118
0x03D710B0: f70240f9  ldr x23, [x23]
0x03D710B4: 1b76d194  bl #0x71ce920
0x03D710B8: 40c80190  adrp x0, #0x7679000
0x03D710BC: 007844f9  ldr x0, [x0, #0x8f0]
0x03D710C0: 5b3ed097  bl #0x3180a2c
0x03D710C4: 08008092  movn x8, #0
0x03D710C8: e9018052  movz w9, #0xf
0x03D710CC: a0a33ba9  stp x0, x8, [x29, #-0x48]
0x03D710D0: a02301d1  sub x0, x29, #0x48
0x03D710D4: e1031faa  mov x1, xzr
0x03D710D8: a9831cb8  stur w9, [x29, #-0x38]
0x03D710DC: 82716594  bl #0x56cd6e4
0x03D710E0: f80300aa  mov x24, x0
0x03D710E4: e0c70190  adrp x0, #0x766d000
0x03D710E8: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D710EC: 503ed097  bl #0x3180a2c
0x03D710F0: 08e040b9  ldr w8, [x0, #0xe0]
0x03D710F4: 48000035  cbnz w8, #0x3d710fc
0x03D710F8: a53ed097  bl #0x3180b8c
0x03D710FC: e00317aa  mov x0, x23
0x03D71100: e10318aa  mov x1, x24
0x03D71104: e2031faa  mov x2, xzr
0x03D71108: e3031faa  mov x3, xzr
0x03D7110C: e4031faa  mov x4, xzr
0x03D71110: 26ed5b94  bl #0x546c5a8
0x03D71114: 81ffff17  b #0x3d70f18
0x03D71118: 00018052  movz w0, #0x8
0x03D7111C: 0576d194  bl #0x71ce930
0x03D71120: e80240f9  ldr x8, [x23]
0x03D71124: 080000f9  str x8, [x0]
0x03D71128: 01a301f0  adrp x1, #0x71d4000
0x03D7112C: 21a03491  add x1, x1, #0xd28
0x03D71130: e2031faa  mov x2, xzr
0x03D71134: 0376d194  bl #0x71ce940
0x03D71138: f70300aa  mov x23, x0
0x03D7113C: f975d194  bl #0x71ce920
0x03D71140: e00317aa  mov x0, x23
0x03D71144: 05d2d397  bl #0x3265958
0x03D71148: f360c297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D71474 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObjectInternal<object>
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObjectInternal_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* data, strange_extensions_promise_api_IPromise_T__o* promise, System_String_o* requestUniqueId, bool reportParsingMetric, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, System_String_o* customLogData, const MethodInfo_3D71474* method);
; bytes=2104 sha256=6b8b093208e311446eccaf3754a340383f3211233db885db4fc2e7c15cd357f8 status=arm64_complete_bound indexed_start=True
0x03D71474: ff0302d1  sub sp, sp, #0x80
0x03D71478: fd7b02a9  stp x29, x30, [sp, #0x20]
0x03D7147C: fc6f03a9  stp x28, x27, [sp, #0x30]
0x03D71480: fa6704a9  stp x26, x25, [sp, #0x40]
0x03D71484: f85f05a9  stp x24, x23, [sp, #0x50]
0x03D71488: f65706a9  stp x22, x21, [sp, #0x60]
0x03D7148C: f44f07a9  stp x20, x19, [sp, #0x70]
0x03D71490: e81c40f9  ldr x8, [x7, #0x38]
0x03D71494: f60307aa  mov x22, x7
0x03D71498: f50306aa  mov x21, x6
0x03D7149C: fa0305aa  mov x26, x5
0x03D714A0: f903042a  mov w25, w4
0x03D714A4: fb0303aa  mov x27, x3
0x03D714A8: f30302aa  mov x19, x2
0x03D714AC: f40301aa  mov x20, x1
0x03D714B0: f80300aa  mov x24, x0
0x03D714B4: 080300b5  cbnz x8, #0x3d71514
0x03D714B8: e0c701d0  adrp x0, #0x766f000
0x03D714BC: 002041f9  ldr x0, [x0, #0x240]
0x03D714C0: 563dd097  bl #0x3180a18
0x03D714C4: e0c701d0  adrp x0, #0x766f000
0x03D714C8: 002441f9  ldr x0, [x0, #0x248]
0x03D714CC: 533dd097  bl #0x3180a18
0x03D714D0: 40c801d0  adrp x0, #0x767b000
0x03D714D4: 000841f9  ldr x0, [x0, #0x210]
0x03D714D8: 503dd097  bl #0x3180a18
0x03D714DC: 40c801d0  adrp x0, #0x767b000
0x03D714E0: 000c41f9  ldr x0, [x0, #0x218]
0x03D714E4: 4d3dd097  bl #0x3180a18
0x03D714E8: 40c801d0  adrp x0, #0x767b000
0x03D714EC: 001041f9  ldr x0, [x0, #0x220]
0x03D714F0: 4a3dd097  bl #0x3180a18
0x03D714F4: 40c801d0  adrp x0, #0x767b000
0x03D714F8: 001441f9  ldr x0, [x0, #0x228]
0x03D714FC: 473dd097  bl #0x3180a18
0x03D71500: c81e40f9  ldr x8, [x22, #0x38]
0x03D71504: 880000b5  cbnz x8, #0x3d71514
0x03D71508: e00316aa  mov x0, x22
0x03D7150C: db94cf97  bl #0x3156878
0x03D71510: c81e40f9  ldr x8, [x22, #0x38]
0x03D71514: 000140f9  ldr x0, [x8]
0x03D71518: 08d44439  ldrb w8, [x0, #0x135]
0x03D7151C: 48000037  tbnz w8, #0, #0x3d71524
0x03D71520: bf94cf97  bl #0x315681c
0x03D71524: df3dd097  bl #0x3180ca0
0x03D71528: c81e40f9  ldr x8, [x22, #0x38]
0x03D7152C: f70300aa  mov x23, x0
0x03D71530: 010540f9  ldr x1, [x8, #8]
0x03D71534: bd8e0794  bl #0x3f55028
0x03D71538: f73900b4  cbz x23, #0x3d71c74
0x03D7153C: e00317aa  mov x0, x23
0x03D71540: 188c01f8  str x24, [x0, #0x18]!
0x03D71544: e10318aa  mov x1, x24
0x03D71548: 3c030012  and w28, w25, #1
0x03D7154C: 1e3dd097  bl #0x31809c4
0x03D71550: f90317aa  mov x25, x23
0x03D71554: 3b0f02f8  str x27, [x25, #0x20]!
0x03D71558: e00319aa  mov x0, x25
0x03D7155C: e1031baa  mov x1, x27
0x03D71560: 193dd097  bl #0x31809c4
0x03D71564: e00317aa  mov x0, x23
0x03D71568: fca20039  strb w28, [x23, #0x28]
0x03D7156C: 1a0c03f8  str x26, [x0, #0x30]!
0x03D71570: e1031aaa  mov x1, x26
0x03D71574: 143dd097  bl #0x31809c4
0x03D71578: fa0317aa  mov x26, x23
0x03D7157C: 548f03f8  str x20, [x26, #0x38]!
0x03D71580: e0031aaa  mov x0, x26
0x03D71584: e10314aa  mov x1, x20
0x03D71588: 0f3dd097  bl #0x31809c4
0x03D7158C: f40317aa  mov x20, x23
0x03D71590: 930e04f8  str x19, [x20, #0x40]!
0x03D71594: e00314aa  mov x0, x20
0x03D71598: e10313aa  mov x1, x19
0x03D7159C: 0a3dd097  bl #0x31809c4
0x03D715A0: f30317aa  mov x19, x23
0x03D715A4: 758e04f8  str x21, [x19, #0x48]!
0x03D715A8: e00313aa  mov x0, x19
0x03D715AC: e10315aa  mov x1, x21
0x03D715B0: 053dd097  bl #0x31809c4
0x03D715B4: 48c801d0  adrp x8, #0x767b000
0x03D715B8: 081541f9  ldr x8, [x8, #0x228]
0x03D715BC: 000140f9  ldr x0, [x8]
0x03D715C0: 08e040b9  ldr w8, [x0, #0xe0]
0x03D715C4: 48000035  cbnz w8, #0x3d715cc
0x03D715C8: 713dd097  bl #0x3180b8c
0x03D715CC: e0031faa  mov x0, xzr
0x03D715D0: 68438194  bl #0x5dc2370
0x03D715D4: f50317aa  mov x21, x23
0x03D715D8: a00e01f8  str x0, [x21, #0x10]!
0x03D715DC: e10300aa  mov x1, x0
0x03D715E0: e00315aa  mov x0, x21
0x03D715E4: f83cd097  bl #0x31809c4
0x03D715E8: 1b1f40f9  ldr x27, [x24, #0x38]
0x03D715EC: fb1e00b4  cbz x27, #0x3d719c8
0x03D715F0: 4ac801d0  adrp x10, #0x767b000
0x03D715F4: 680340f9  ldr x8, [x27]
0x03D715F8: 4a0941f9  ldr x10, [x10, #0x210]
0x03D715FC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71600: 410140f9  ldr x1, [x10]
0x03D71604: 290100b4  cbz x9, #0x3d71628
0x03D71608: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7160C: 4a210091  add x10, x10, #8
0x03D71610: 4b815ff8  ldur x11, [x10, #-8]
0x03D71614: 7f0101eb  cmp x11, x1
0x03D71618: 00010054  b.eq #0x3d71638
0x03D7161C: 290500f1  subs x9, x9, #1
0x03D71620: 4a410091  add x10, x10, #0x10
0x03D71624: 61ffff54  b.ne #0x3d71610
0x03D71628: 42008052  movz w2, #0x2
0x03D7162C: e0031baa  mov x0, x27
0x03D71630: 3895cf97  bl #0x3156b10
0x03D71634: 05000014  b #0x3d71648
0x03D71638: 490140b9  ldr w9, [x10]
0x03D7163C: 29090011  add w9, w9, #2
0x03D71640: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71644: 00e10491  add x0, x8, #0x138
0x03D71648: 080440a9  ldp x8, x1, [x0]
0x03D7164C: e0031baa  mov x0, x27
0x03D71650: 00013fd6  blr x8
0x03D71654: c0000036  tbz w0, #0, #0x3d7166c
0x03D71658: 080340f9  ldr x8, [x24]
0x03D7165C: 09855aa9  ldp x9, x1, [x8, #0x1a8]
0x03D71660: e00318aa  mov x0, x24
0x03D71664: 20013fd6  blr x9
0x03D71668: c0020036  tbz w0, #0, #0x3d716c0
0x03D7166C: 1b1f40f9  ldr x27, [x24, #0x38]
0x03D71670: fb1a00b4  cbz x27, #0x3d719cc
0x03D71674: c91e40f9  ldr x9, [x22, #0x38]
0x03D71678: 680340f9  ldr x8, [x27]
0x03D7167C: 5a0340f9  ldr x26, [x26]
0x03D71680: 3c2540f9  ldr x28, [x9, #0x48]
0x03D71684: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71688: 811340f9  ldr x1, [x28, #0x20]
0x03D7168C: 82a34079  ldrh w2, [x28, #0x50]
0x03D71690: 290100b4  cbz x9, #0x3d716b4
0x03D71694: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71698: 4a210091  add x10, x10, #8
0x03D7169C: 4b815ff8  ldur x11, [x10, #-8]
0x03D716A0: 7f0101eb  cmp x11, x1
0x03D716A4: 80030054  b.eq #0x3d71714
0x03D716A8: 290500f1  subs x9, x9, #1
0x03D716AC: 4a410091  add x10, x10, #0x10
0x03D716B0: 61ffff54  b.ne #0x3d7169c
0x03D716B4: e0031baa  mov x0, x27
0x03D716B8: 1695cf97  bl #0x3156b10
0x03D716BC: 1a000014  b #0x3d71724
0x03D716C0: 181f40f9  ldr x24, [x24, #0x38]
0x03D716C4: d81800b4  cbz x24, #0x3d719dc
0x03D716C8: c91e40f9  ldr x9, [x22, #0x38]
0x03D716CC: 080340f9  ldr x8, [x24]
0x03D716D0: 590340f9  ldr x25, [x26]
0x03D716D4: 3b1140f9  ldr x27, [x9, #0x20]
0x03D716D8: 095d4279  ldrh w9, [x8, #0x12e]
0x03D716DC: 611340f9  ldr x1, [x27, #0x20]
0x03D716E0: 62a34079  ldrh w2, [x27, #0x50]
0x03D716E4: 290100b4  cbz x9, #0x3d71708
0x03D716E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D716EC: 4a210091  add x10, x10, #8
0x03D716F0: 4b815ff8  ldur x11, [x10, #-8]
0x03D716F4: 7f0101eb  cmp x11, x1
0x03D716F8: 00070054  b.eq #0x3d717d8
0x03D716FC: 290500f1  subs x9, x9, #1
0x03D71700: 4a410091  add x10, x10, #0x10
0x03D71704: 61ffff54  b.ne #0x3d716f0
0x03D71708: e00318aa  mov x0, x24
0x03D7170C: 0195cf97  bl #0x3156b10
0x03D71710: 36000014  b #0x3d717e8
0x03D71714: 490140b9  ldr w9, [x10]
0x03D71718: 2901020b  add w9, w9, w2
0x03D7171C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71720: 00e10491  add x0, x8, #0x138
0x03D71724: 000440f9  ldr x0, [x0, #8]
0x03D71728: e1031caa  mov x1, x28
0x03D7172C: 173dd097  bl #0x3180b88
0x03D71730: 080440f9  ldr x8, [x0, #8]
0x03D71734: e20300aa  mov x2, x0
0x03D71738: e0031baa  mov x0, x27
0x03D7173C: e1031aaa  mov x1, x26
0x03D71740: 00013fd6  blr x8
0x03D71744: fa0300aa  mov x26, x0
0x03D71748: a00240f9  ldr x0, [x21]
0x03D7174C: 201400b4  cbz x0, #0x3d719d0
0x03D71750: e1031faa  mov x1, xzr
0x03D71754: ec438194  bl #0x5dc2704
0x03D71758: a00240f9  ldr x0, [x21]
0x03D7175C: c01300b4  cbz x0, #0x3d719d4
0x03D71760: 182740f9  ldr x24, [x24, #0x48]
0x03D71764: 390340f9  ldr x25, [x25]
0x03D71768: e1031faa  mov x1, xzr
0x03D7176C: 90438194  bl #0x5dc25ac
0x03D71770: 48c801d0  adrp x8, #0x767b000
0x03D71774: fda24039  ldrb w29, [x23, #0x28]
0x03D71778: 080d41f9  ldr x8, [x8, #0x218]
0x03D7177C: fc0300aa  mov x28, x0
0x03D71780: 000140f9  ldr x0, [x8]
0x03D71784: 473dd097  bl #0x3180ca0
0x03D71788: fb0300aa  mov x27, x0
0x03D7178C: bf030071  cmp w29, #0
0x03D71790: e2079f1a  cset w2, ne
0x03D71794: 8003229e  scvtf s0, x28
0x03D71798: e10319aa  mov x1, x25
0x03D7179C: e3031faa  mov x3, xzr
0x03D717A0: fcb2ae94  bl #0x691e390
0x03D717A4: b81100b4  cbz x24, #0x3d719d8
0x03D717A8: 48c801d0  adrp x8, #0x767b000
0x03D717AC: 081141f9  ldr x8, [x8, #0x220]
0x03D717B0: 020140f9  ldr x2, [x8]
0x03D717B4: e00318aa  mov x0, x24
0x03D717B8: e1031baa  mov x1, x27
0x03D717BC: 6ccd0094  bl #0x3da4d6c
0x03D717C0: c81e40f9  ldr x8, [x22, #0x38]
0x03D717C4: 022d40f9  ldr x2, [x8, #0x58]
0x03D717C8: e00317aa  mov x0, x23
0x03D717CC: e1031aaa  mov x1, x26
0x03D717D0: 578e0794  bl #0x3f5512c
0x03D717D4: 75000014  b #0x3d719a8
0x03D717D8: 490140b9  ldr w9, [x10]
0x03D717DC: 2901020b  add w9, w9, w2
0x03D717E0: 08d1298b  add x8, x8, w9, sxtw #4
0x03D717E4: 00e10491  add x0, x8, #0x138
0x03D717E8: 000440f9  ldr x0, [x0, #8]
0x03D717EC: e1031baa  mov x1, x27
0x03D717F0: e63cd097  bl #0x3180b88
0x03D717F4: 080440f9  ldr x8, [x0, #8]
0x03D717F8: e30300aa  mov x3, x0
0x03D717FC: e00318aa  mov x0, x24
0x03D71800: e10319aa  mov x1, x25
0x03D71804: e2031faa  mov x2, xzr
0x03D71808: 00013fd6  blr x8
0x03D7180C: c81e40f9  ldr x8, [x22, #0x38]
0x03D71810: f80300aa  mov x24, x0
0x03D71814: 001940f9  ldr x0, [x8, #0x30]
0x03D71818: 08d44439  ldrb w8, [x0, #0x135]
0x03D7181C: 48000037  tbnz w8, #0, #0x3d71824
0x03D71820: ff93cf97  bl #0x315681c
0x03D71824: 1f3dd097  bl #0x3180ca0
0x03D71828: c81e40f9  ldr x8, [x22, #0x38]
0x03D7182C: f90300aa  mov x25, x0
0x03D71830: 021540f9  ldr x2, [x8, #0x28]
0x03D71834: 031d40f9  ldr x3, [x8, #0x38]
0x03D71838: e10317aa  mov x1, x23
0x03D7183C: 66c25694  bl #0x53221d4
0x03D71840: 180d00b4  cbz x24, #0x3d719e0
0x03D71844: c81e40f9  ldr x8, [x22, #0x38]
0x03D71848: 010d40f9  ldr x1, [x8, #0x18]
0x03D7184C: 28d44439  ldrb w8, [x1, #0x135]
0x03D71850: 88000037  tbnz w8, #0, #0x3d71860
0x03D71854: e00301aa  mov x0, x1
0x03D71858: f193cf97  bl #0x315681c
0x03D7185C: e10300aa  mov x1, x0
0x03D71860: 080340f9  ldr x8, [x24]
0x03D71864: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71868: 290100b4  cbz x9, #0x3d7188c
0x03D7186C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71870: 4a210091  add x10, x10, #8
0x03D71874: 4b815ff8  ldur x11, [x10, #-8]
0x03D71878: 7f0101eb  cmp x11, x1
0x03D7187C: 00010054  b.eq #0x3d7189c
0x03D71880: 290500f1  subs x9, x9, #1
0x03D71884: 4a410091  add x10, x10, #0x10
0x03D71888: 61ffff54  b.ne #0x3d71874
0x03D7188C: e00318aa  mov x0, x24
0x03D71890: e2031f2a  mov w2, wzr
0x03D71894: 9f94cf97  bl #0x3156b10
0x03D71898: 04000014  b #0x3d718a8
0x03D7189C: 490180b9  ldrsw x9, [x10]
0x03D718A0: 0811098b  add x8, x8, x9, lsl #4
0x03D718A4: 00e10491  add x0, x8, #0x138
0x03D718A8: 080840a9  ldp x8, x2, [x0]
0x03D718AC: e00318aa  mov x0, x24
0x03D718B0: e10319aa  mov x1, x25
0x03D718B4: 00013fd6  blr x8
0x03D718B8: e8c701d0  adrp x8, #0x766f000
0x03D718BC: 980240f9  ldr x24, [x20]
0x03D718C0: 082141f9  ldr x8, [x8, #0x240]
0x03D718C4: f60300aa  mov x22, x0
0x03D718C8: 000140f9  ldr x0, [x8]
0x03D718CC: f53cd097  bl #0x3180ca0
0x03D718D0: b80800b4  cbz x24, #0x3d719e4
0x03D718D4: f9c701d0  adrp x25, #0x766f000
0x03D718D8: 080340f9  ldr x8, [x24]
0x03D718DC: 392741f9  ldr x25, [x25, #0x248]
0x03D718E0: f70300aa  mov x23, x0
0x03D718E4: 095d4279  ldrh w9, [x8, #0x12e]
0x03D718E8: 210340f9  ldr x1, [x25]
0x03D718EC: 290100b4  cbz x9, #0x3d71910
0x03D718F0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D718F4: 4a210091  add x10, x10, #8
0x03D718F8: 4b815ff8  ldur x11, [x10, #-8]
0x03D718FC: 7f0101eb  cmp x11, x1
0x03D71900: 00010054  b.eq #0x3d71920
0x03D71904: 290500f1  subs x9, x9, #1
0x03D71908: 4a410091  add x10, x10, #0x10
0x03D7190C: 61ffff54  b.ne #0x3d718f8
0x03D71910: 82008052  movz w2, #0x4
0x03D71914: e00318aa  mov x0, x24
0x03D71918: 7e94cf97  bl #0x3156b10
0x03D7191C: 05000014  b #0x3d71930
0x03D71920: 490140b9  ldr w9, [x10]
0x03D71924: 29110011  add w9, w9, #4
0x03D71928: 08d1298b  add x8, x8, w9, sxtw #4
0x03D7192C: 00e10491  add x0, x8, #0x138
0x03D71930: 020440f9  ldr x2, [x0, #8]
0x03D71934: e00317aa  mov x0, x23
0x03D71938: e10318aa  mov x1, x24
0x03D7193C: e3031faa  mov x3, xzr
0x03D71940: 25c25694  bl #0x53221d4
0x03D71944: 360500b4  cbz x22, #0x3d719e8
0x03D71948: c80240f9  ldr x8, [x22]
0x03D7194C: 210340f9  ldr x1, [x25]
0x03D71950: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71954: 290100b4  cbz x9, #0x3d71978
0x03D71958: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7195C: 4a210091  add x10, x10, #8
0x03D71960: 4b815ff8  ldur x11, [x10, #-8]
0x03D71964: 7f0101eb  cmp x11, x1
0x03D71968: 00010054  b.eq #0x3d71988
0x03D7196C: 290500f1  subs x9, x9, #1
0x03D71970: 4a410091  add x10, x10, #0x10
0x03D71974: 61ffff54  b.ne #0x3d71960
0x03D71978: 22008052  movz w2, #0x1
0x03D7197C: e00316aa  mov x0, x22
0x03D71980: 6494cf97  bl #0x3156b10
0x03D71984: 05000014  b #0x3d71998
0x03D71988: 490140b9  ldr w9, [x10]
0x03D7198C: 29050011  add w9, w9, #1
0x03D71990: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71994: 00e10491  add x0, x8, #0x138
0x03D71998: 080840a9  ldp x8, x2, [x0]
0x03D7199C: e00316aa  mov x0, x22
0x03D719A0: e10317aa  mov x1, x23
0x03D719A4: 00013fd6  blr x8
0x03D719A8: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03D719AC: f65746a9  ldp x22, x21, [sp, #0x60]
0x03D719B0: f85f45a9  ldp x24, x23, [sp, #0x50]
0x03D719B4: fa6744a9  ldp x26, x25, [sp, #0x40]
0x03D719B8: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x03D719BC: fd7b42a9  ldp x29, x30, [sp, #0x20]
0x03D719C0: ff030291  add sp, sp, #0x80
0x03D719C4: c0035fd6  ret
0x03D719C8: b93cd097  bl #0x3180cac
0x03D719CC: b83cd097  bl #0x3180cac
0x03D719D0: b73cd097  bl #0x3180cac
0x03D719D4: b63cd097  bl #0x3180cac
0x03D719D8: b53cd097  bl #0x3180cac
0x03D719DC: b43cd097  bl #0x3180cac
0x03D719E0: b33cd097  bl #0x3180cac
0x03D719E4: b23cd097  bl #0x3180cac
0x03D719E8: b13cd097  bl #0x3180cac
0x03D719EC: 0f000014  b #0x3d71a28
0x03D719F0: 0e000014  b #0x3d71a28
0x03D719F4: 0d000014  b #0x3d71a28
0x03D719F8: 0c000014  b #0x3d71a28
0x03D719FC: 0b000014  b #0x3d71a28
0x03D71A00: 0a000014  b #0x3d71a28
0x03D71A04: 09000014  b #0x3d71a28
0x03D71A08: 08000014  b #0x3d71a28
0x03D71A0C: 07000014  b #0x3d71a28
0x03D71A10: 06000014  b #0x3d71a28
0x03D71A14: 05000014  b #0x3d71a28
0x03D71A18: 04000014  b #0x3d71a28
0x03D71A1C: 03000014  b #0x3d71a28
0x03D71A20: 02000014  b #0x3d71a28
0x03D71A24: 01000014  b #0x3d71a28
0x03D71A28: f60300aa  mov x22, x0
0x03D71A2C: 3f040071  cmp w1, #1
0x03D71A30: 81130054  b.ne #0x3d71ca0
0x03D71A34: e00316aa  mov x0, x22
0x03D71A38: b673d194  bl #0x71ce910
0x03D71A3C: f60300aa  mov x22, x0
0x03D71A40: 40c801b0  adrp x0, #0x767a000
0x03D71A44: 00a841f9  ldr x0, [x0, #0x350]
0x03D71A48: f93bd097  bl #0x3180a2c
0x03D71A4C: c80240f9  ldr x8, [x22]
0x03D71A50: 010140f9  ldr x1, [x8]
0x03D71A54: a13dd097  bl #0x31810d8
0x03D71A58: 80030036  tbz w0, #0, #0x3d71ac8
0x03D71A5C: d60240f9  ldr x22, [x22]
0x03D71A60: b073d194  bl #0x71ce920
0x03D71A64: a00240f9  ldr x0, [x21]
0x03D71A68: 601000b4  cbz x0, #0x3d71c74
0x03D71A6C: e1031faa  mov x1, xzr
0x03D71A70: 25438194  bl #0x5dc2704
0x03D71A74: 940240f9  ldr x20, [x20]
0x03D71A78: f40f00b4  cbz x20, #0x3d71c74
0x03D71A7C: e0c701d0  adrp x0, #0x766f000
0x03D71A80: 002441f9  ldr x0, [x0, #0x248]
0x03D71A84: ea3bd097  bl #0x3180a2c
0x03D71A88: 880240f9  ldr x8, [x20]
0x03D71A8C: e10300aa  mov x1, x0
0x03D71A90: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71A94: 290100b4  cbz x9, #0x3d71ab8
0x03D71A98: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71A9C: 4a210091  add x10, x10, #8
0x03D71AA0: 4b815ff8  ldur x11, [x10, #-8]
0x03D71AA4: 7f0101eb  cmp x11, x1
0x03D71AA8: 40050054  b.eq #0x3d71b50
0x03D71AAC: 290500f1  subs x9, x9, #1
0x03D71AB0: 4a410091  add x10, x10, #0x10
0x03D71AB4: 61ffff54  b.ne #0x3d71aa0
0x03D71AB8: 82008052  movz w2, #0x4
0x03D71ABC: e00314aa  mov x0, x20
0x03D71AC0: 1494cf97  bl #0x3156b10
0x03D71AC4: 27000014  b #0x3d71b60
0x03D71AC8: e0c601b0  adrp x0, #0x764e000
0x03D71ACC: 006c42f9  ldr x0, [x0, #0x4d8]
0x03D71AD0: d73bd097  bl #0x3180a2c
0x03D71AD4: c80240f9  ldr x8, [x22]
0x03D71AD8: 010140f9  ldr x1, [x8]
0x03D71ADC: 7f3dd097  bl #0x31810d8
0x03D71AE0: c00c0036  tbz w0, #0, #0x3d71c78
0x03D71AE4: d30240f9  ldr x19, [x22]
0x03D71AE8: 8e73d194  bl #0x71ce920
0x03D71AEC: a00240f9  ldr x0, [x21]
0x03D71AF0: 200c00b4  cbz x0, #0x3d71c74
0x03D71AF4: e1031faa  mov x1, xzr
0x03D71AF8: 03438194  bl #0x5dc2704
0x03D71AFC: 940240f9  ldr x20, [x20]
0x03D71B00: b40b00b4  cbz x20, #0x3d71c74
0x03D71B04: e0c701d0  adrp x0, #0x766f000
0x03D71B08: 002441f9  ldr x0, [x0, #0x248]
0x03D71B0C: c83bd097  bl #0x3180a2c
0x03D71B10: 880240f9  ldr x8, [x20]
0x03D71B14: e10300aa  mov x1, x0
0x03D71B18: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71B1C: 290100b4  cbz x9, #0x3d71b40
0x03D71B20: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71B24: 4a210091  add x10, x10, #8
0x03D71B28: 4b815ff8  ldur x11, [x10, #-8]
0x03D71B2C: 7f0101eb  cmp x11, x1
0x03D71B30: 20060054  b.eq #0x3d71bf4
0x03D71B34: 290500f1  subs x9, x9, #1
0x03D71B38: 4a410091  add x10, x10, #0x10
0x03D71B3C: 61ffff54  b.ne #0x3d71b28
0x03D71B40: 82008052  movz w2, #0x4
0x03D71B44: e00314aa  mov x0, x20
0x03D71B48: f293cf97  bl #0x3156b10
0x03D71B4C: 2e000014  b #0x3d71c04
0x03D71B50: 490140b9  ldr w9, [x10]
0x03D71B54: 29110011  add w9, w9, #4
0x03D71B58: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71B5C: 00e10491  add x0, x8, #0x138
0x03D71B60: 080840a9  ldp x8, x2, [x0]
0x03D71B64: e00314aa  mov x0, x20
0x03D71B68: e10316aa  mov x1, x22
0x03D71B6C: 00013fd6  blr x8
0x03D71B70: e0c70190  adrp x0, #0x766d000
0x03D71B74: 730240f9  ldr x19, [x19]
0x03D71B78: 009841f9  ldr x0, [x0, #0x330]
0x03D71B7C: ac3bd097  bl #0x3180a2c
0x03D71B80: e10316aa  mov x1, x22
0x03D71B84: e20313aa  mov x2, x19
0x03D71B88: e3031faa  mov x3, xzr
0x03D71B8C: d4185e94  bl #0x54f7edc
0x03D71B90: f30300aa  mov x19, x0
0x03D71B94: 40c80190  adrp x0, #0x7679000
0x03D71B98: 007844f9  ldr x0, [x0, #0x8f0]
0x03D71B9C: a43bd097  bl #0x3180a2c
0x03D71BA0: 08008092  movn x8, #0
0x03D71BA4: c9098052  movz w9, #0x4e
0x03D71BA8: e0a300a9  stp x0, x8, [sp, #8]
0x03D71BAC: e0230091  add x0, sp, #8
0x03D71BB0: e1031faa  mov x1, xzr
0x03D71BB4: e91b00b9  str w9, [sp, #0x18]
0x03D71BB8: cb6e6594  bl #0x56cd6e4
0x03D71BBC: f40300aa  mov x20, x0
0x03D71BC0: e0c70190  adrp x0, #0x766d000
0x03D71BC4: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D71BC8: 993bd097  bl #0x3180a2c
0x03D71BCC: 08e040b9  ldr w8, [x0, #0xe0]
0x03D71BD0: 48000035  cbnz w8, #0x3d71bd8
0x03D71BD4: ee3bd097  bl #0x3180b8c
0x03D71BD8: e00313aa  mov x0, x19
0x03D71BDC: e10314aa  mov x1, x20
0x03D71BE0: e2031faa  mov x2, xzr
0x03D71BE4: e3031faa  mov x3, xzr
0x03D71BE8: e4031faa  mov x4, xzr
0x03D71BEC: c5ea5b94  bl #0x546c700
0x03D71BF0: 6effff17  b #0x3d719a8
0x03D71BF4: 490140b9  ldr w9, [x10]
0x03D71BF8: 29110011  add w9, w9, #4
0x03D71BFC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71C00: 00e10491  add x0, x8, #0x138
0x03D71C04: 080840a9  ldp x8, x2, [x0]
0x03D71C08: e00314aa  mov x0, x20
0x03D71C0C: e10313aa  mov x1, x19
0x03D71C10: 00013fd6  blr x8
0x03D71C14: 40c80190  adrp x0, #0x7679000
0x03D71C18: 007844f9  ldr x0, [x0, #0x8f0]
0x03D71C1C: 843bd097  bl #0x3180a2c
0x03D71C20: 08008092  movn x8, #0
0x03D71C24: e9018052  movz w9, #0xf
0x03D71C28: e0a300a9  stp x0, x8, [sp, #8]
0x03D71C2C: e0230091  add x0, sp, #8
0x03D71C30: e1031faa  mov x1, xzr
0x03D71C34: e91b00b9  str w9, [sp, #0x18]
0x03D71C38: ab6e6594  bl #0x56cd6e4
0x03D71C3C: f40300aa  mov x20, x0
0x03D71C40: e0c70190  adrp x0, #0x766d000
0x03D71C44: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D71C48: 793bd097  bl #0x3180a2c
0x03D71C4C: 08e040b9  ldr w8, [x0, #0xe0]
0x03D71C50: 48000035  cbnz w8, #0x3d71c58
0x03D71C54: ce3bd097  bl #0x3180b8c
0x03D71C58: e00313aa  mov x0, x19
0x03D71C5C: e10314aa  mov x1, x20
0x03D71C60: e2031faa  mov x2, xzr
0x03D71C64: e3031faa  mov x3, xzr
0x03D71C68: e4031faa  mov x4, xzr
0x03D71C6C: 4fea5b94  bl #0x546c5a8
0x03D71C70: 4effff17  b #0x3d719a8
0x03D71C74: 0e3cd097  bl #0x3180cac
0x03D71C78: 00018052  movz w0, #0x8
0x03D71C7C: 2d73d194  bl #0x71ce930
0x03D71C80: c80240f9  ldr x8, [x22]
0x03D71C84: 080000f9  str x8, [x0]
0x03D71C88: 01a301f0  adrp x1, #0x71d4000
0x03D71C8C: 21a03491  add x1, x1, #0xd28
0x03D71C90: e2031faa  mov x2, xzr
0x03D71C94: 2b73d194  bl #0x71ce940
0x03D71C98: f60300aa  mov x22, x0
0x03D71C9C: 2173d194  bl #0x71ce920
0x03D71CA0: e00316aa  mov x0, x22
0x03D71CA4: 2dcfd397  bl #0x3265958
0x03D71CA8: 1b5ec297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D71CAC | Framework.Core.Services.Backend.Repositories.RepositoryBase$$ConvertToObjectInternal<__Il2CppFullySharedGenericType>
; native signature: void Framework_Core_Services_Backend_Repositories_RepositoryBase__ConvertToObjectInternal___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* data, strange_extensions_promise_api_IPromise_T__o* promise, System_String_o* requestUniqueId, bool reportParsingMetric, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, System_String_o* customLogData, const MethodInfo_3D71CAC* method);
; bytes=2316 sha256=ce146f1ba525485ff63f46f0ade5e9487c333f870436fb76cb0421f8ed23dd71 status=arm64_complete_bound indexed_start=True
0x03D71CAC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D71CB0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D71CB4: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D71CB8: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D71CBC: f65704a9  stp x22, x21, [sp, #0x40]
0x03D71CC0: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D71CC4: fd030091  mov x29, sp
0x03D71CC8: ff8301d1  sub sp, sp, #0x60
0x03D71CCC: 48d03bd5  mrs x8, tpidr_el0
0x03D71CD0: a8031bf8  stur x8, [x29, #-0x50]
0x03D71CD4: 081540f9  ldr x8, [x8, #0x28]
0x03D71CD8: f80307aa  mov x24, x7
0x03D71CDC: f50306aa  mov x21, x6
0x03D71CE0: f70305aa  mov x23, x5
0x03D71CE4: a8831ff8  stur x8, [x29, #-8]
0x03D71CE8: f41c40f9  ldr x20, [x7, #0x38]
0x03D71CEC: f303042a  mov w19, w4
0x03D71CF0: fb0303aa  mov x27, x3
0x03D71CF4: f60302aa  mov x22, x2
0x03D71CF8: f90301aa  mov x25, x1
0x03D71CFC: fa0300aa  mov x26, x0
0x03D71D00: 140300b5  cbnz x20, #0x3d71d60
0x03D71D04: e0c701d0  adrp x0, #0x766f000
0x03D71D08: 002041f9  ldr x0, [x0, #0x240]
0x03D71D0C: 433bd097  bl #0x3180a18
0x03D71D10: e0c701d0  adrp x0, #0x766f000
0x03D71D14: 002441f9  ldr x0, [x0, #0x248]
0x03D71D18: 403bd097  bl #0x3180a18
0x03D71D1C: 40c801d0  adrp x0, #0x767b000
0x03D71D20: 000841f9  ldr x0, [x0, #0x210]
0x03D71D24: 3d3bd097  bl #0x3180a18
0x03D71D28: 40c801d0  adrp x0, #0x767b000
0x03D71D2C: 000c41f9  ldr x0, [x0, #0x218]
0x03D71D30: 3a3bd097  bl #0x3180a18
0x03D71D34: 40c801d0  adrp x0, #0x767b000
0x03D71D38: 001041f9  ldr x0, [x0, #0x220]
0x03D71D3C: 373bd097  bl #0x3180a18
0x03D71D40: 40c801d0  adrp x0, #0x767b000
0x03D71D44: 001441f9  ldr x0, [x0, #0x228]
0x03D71D48: 343bd097  bl #0x3180a18
0x03D71D4C: 141f40f9  ldr x20, [x24, #0x38]
0x03D71D50: 940000b5  cbnz x20, #0x3d71d60
0x03D71D54: e00318aa  mov x0, x24
0x03D71D58: c892cf97  bl #0x3156878
0x03D71D5C: 141f40f9  ldr x20, [x24, #0x38]
0x03D71D60: 882a40f9  ldr x8, [x20, #0x50]
0x03D71D64: 02fd40b9  ldr w2, [x8, #0xfc]
0x03D71D68: e8030091  mov x8, sp
0x03D71D6C: 493c0091  add x9, x2, #0xf
0x03D71D70: 29717c92  and x9, x9, #0x1fffffff0
0x03D71D74: 1c0109cb  sub x28, x8, x9
0x03D71D78: 9f030091  mov sp, x28
0x03D71D7C: e8030091  mov x8, sp
0x03D71D80: 080109cb  sub x8, x8, x9
0x03D71D84: a8831af8  stur x8, [x29, #-0x58]
0x03D71D88: 1f010091  mov sp, x8
0x03D71D8C: e8030091  mov x8, sp
0x03D71D90: 000109cb  sub x0, x8, x9
0x03D71D94: 1f000091  mov sp, x0
0x03D71D98: e1031f2a  mov w1, wzr
0x03D71D9C: a0831bf8  stur x0, [x29, #-0x48]
0x03D71DA0: a2633ca9  stp x2, x24, [x29, #-0x40]
0x03D71DA4: ff72d194  bl #0x71ce9a0
0x03D71DA8: 800240f9  ldr x0, [x20]
0x03D71DAC: 08d44439  ldrb w8, [x0, #0x135]
0x03D71DB0: 48000037  tbnz w8, #0, #0x3d71db8
0x03D71DB4: 9a92cf97  bl #0x315681c
0x03D71DB8: ba3bd097  bl #0x3180ca0
0x03D71DBC: a8835cf8  ldur x8, [x29, #-0x38]
0x03D71DC0: f40300aa  mov x20, x0
0x03D71DC4: 081d40f9  ldr x8, [x8, #0x38]
0x03D71DC8: 010540f9  ldr x1, [x8, #8]
0x03D71DCC: 280040f9  ldr x8, [x1]
0x03D71DD0: 00013fd6  blr x8
0x03D71DD4: 743d00b4  cbz x20, #0x3d72580
0x03D71DD8: e00314aa  mov x0, x20
0x03D71DDC: 1a8c01f8  str x26, [x0, #0x18]!
0x03D71DE0: e1031aaa  mov x1, x26
0x03D71DE4: 78020012  and w24, w19, #1
0x03D71DE8: f73ad097  bl #0x31809c4
0x03D71DEC: f30314aa  mov x19, x20
0x03D71DF0: 7b0e02f8  str x27, [x19, #0x20]!
0x03D71DF4: e00313aa  mov x0, x19
0x03D71DF8: e1031baa  mov x1, x27
0x03D71DFC: f23ad097  bl #0x31809c4
0x03D71E00: e00314aa  mov x0, x20
0x03D71E04: 98a20039  strb w24, [x20, #0x28]
0x03D71E08: 170c03f8  str x23, [x0, #0x30]!
0x03D71E0C: e10317aa  mov x1, x23
0x03D71E10: ed3ad097  bl #0x31809c4
0x03D71E14: f70314aa  mov x23, x20
0x03D71E18: f98e03f8  str x25, [x23, #0x38]!
0x03D71E1C: e00317aa  mov x0, x23
0x03D71E20: e10319aa  mov x1, x25
0x03D71E24: e83ad097  bl #0x31809c4
0x03D71E28: f90314aa  mov x25, x20
0x03D71E2C: 360f04f8  str x22, [x25, #0x40]!
0x03D71E30: e00319aa  mov x0, x25
0x03D71E34: e10316aa  mov x1, x22
0x03D71E38: e33ad097  bl #0x31809c4
0x03D71E3C: fb0314aa  mov x27, x20
0x03D71E40: 758f04f8  str x21, [x27, #0x48]!
0x03D71E44: e0031baa  mov x0, x27
0x03D71E48: e10315aa  mov x1, x21
0x03D71E4C: de3ad097  bl #0x31809c4
0x03D71E50: 48c801d0  adrp x8, #0x767b000
0x03D71E54: 081541f9  ldr x8, [x8, #0x228]
0x03D71E58: 000140f9  ldr x0, [x8]
0x03D71E5C: 08e040b9  ldr w8, [x0, #0xe0]
0x03D71E60: 48000035  cbnz w8, #0x3d71e68
0x03D71E64: 4a3bd097  bl #0x3180b8c
0x03D71E68: e0031faa  mov x0, xzr
0x03D71E6C: 41418194  bl #0x5dc2370
0x03D71E70: f50314aa  mov x21, x20
0x03D71E74: a00e01f8  str x0, [x21, #0x10]!
0x03D71E78: e10300aa  mov x1, x0
0x03D71E7C: e00315aa  mov x0, x21
0x03D71E80: d13ad097  bl #0x31809c4
0x03D71E84: 561f40f9  ldr x22, [x26, #0x38]
0x03D71E88: 162200b4  cbz x22, #0x3d722c8
0x03D71E8C: 4ac801d0  adrp x10, #0x767b000
0x03D71E90: c80240f9  ldr x8, [x22]
0x03D71E94: 4a0941f9  ldr x10, [x10, #0x210]
0x03D71E98: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71E9C: 410140f9  ldr x1, [x10]
0x03D71EA0: 290100b4  cbz x9, #0x3d71ec4
0x03D71EA4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71EA8: 4a210091  add x10, x10, #8
0x03D71EAC: 4b815ff8  ldur x11, [x10, #-8]
0x03D71EB0: 7f0101eb  cmp x11, x1
0x03D71EB4: 00010054  b.eq #0x3d71ed4
0x03D71EB8: 290500f1  subs x9, x9, #1
0x03D71EBC: 4a410091  add x10, x10, #0x10
0x03D71EC0: 61ffff54  b.ne #0x3d71eac
0x03D71EC4: 42008052  movz w2, #0x2
0x03D71EC8: e00316aa  mov x0, x22
0x03D71ECC: 1193cf97  bl #0x3156b10
0x03D71ED0: 05000014  b #0x3d71ee4
0x03D71ED4: 490140b9  ldr w9, [x10]
0x03D71ED8: 29090011  add w9, w9, #2
0x03D71EDC: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71EE0: 00e10491  add x0, x8, #0x138
0x03D71EE4: 080440a9  ldp x8, x1, [x0]
0x03D71EE8: e00316aa  mov x0, x22
0x03D71EEC: 00013fd6  blr x8
0x03D71EF0: c0000036  tbz w0, #0, #0x3d71f08
0x03D71EF4: 480340f9  ldr x8, [x26]
0x03D71EF8: 09855aa9  ldp x9, x1, [x8, #0x1a8]
0x03D71EFC: e0031aaa  mov x0, x26
0x03D71F00: 20013fd6  blr x9
0x03D71F04: 00030036  tbz w0, #0, #0x3d71f64
0x03D71F08: 561f40f9  ldr x22, [x26, #0x38]
0x03D71F0C: f80319aa  mov x24, x25
0x03D71F10: 161e00b4  cbz x22, #0x3d722d0
0x03D71F14: a8835cf8  ldur x8, [x29, #-0x38]
0x03D71F18: f70240f9  ldr x23, [x23]
0x03D71F1C: 091d40f9  ldr x9, [x8, #0x38]
0x03D71F20: c80240f9  ldr x8, [x22]
0x03D71F24: 392540f9  ldr x25, [x9, #0x48]
0x03D71F28: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71F2C: 211340f9  ldr x1, [x25, #0x20]
0x03D71F30: 22a34079  ldrh w2, [x25, #0x50]
0x03D71F34: 290100b4  cbz x9, #0x3d71f58
0x03D71F38: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71F3C: 4a210091  add x10, x10, #8
0x03D71F40: 4b815ff8  ldur x11, [x10, #-8]
0x03D71F44: 7f0101eb  cmp x11, x1
0x03D71F48: a0030054  b.eq #0x3d71fbc
0x03D71F4C: 290500f1  subs x9, x9, #1
0x03D71F50: 4a410091  add x10, x10, #0x10
0x03D71F54: 61ffff54  b.ne #0x3d71f40
0x03D71F58: e00316aa  mov x0, x22
0x03D71F5C: ed92cf97  bl #0x3156b10
0x03D71F60: 1b000014  b #0x3d71fcc
0x03D71F64: 531f40f9  ldr x19, [x26, #0x38]
0x03D71F68: d31b00b4  cbz x19, #0x3d722e0
0x03D71F6C: ba835cf8  ldur x26, [x29, #-0x38]
0x03D71F70: 680240f9  ldr x8, [x19]
0x03D71F74: f60240f9  ldr x22, [x23]
0x03D71F78: 491f40f9  ldr x9, [x26, #0x38]
0x03D71F7C: 381140f9  ldr x24, [x9, #0x20]
0x03D71F80: 095d4279  ldrh w9, [x8, #0x12e]
0x03D71F84: 011340f9  ldr x1, [x24, #0x20]
0x03D71F88: 02a34079  ldrh w2, [x24, #0x50]
0x03D71F8C: 290100b4  cbz x9, #0x3d71fb0
0x03D71F90: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D71F94: 4a210091  add x10, x10, #8
0x03D71F98: 4b815ff8  ldur x11, [x10, #-8]
0x03D71F9C: 7f0101eb  cmp x11, x1
0x03D71FA0: 00090054  b.eq #0x3d720c0
0x03D71FA4: 290500f1  subs x9, x9, #1
0x03D71FA8: 4a410091  add x10, x10, #0x10
0x03D71FAC: 61ffff54  b.ne #0x3d71f98
0x03D71FB0: e00313aa  mov x0, x19
0x03D71FB4: d792cf97  bl #0x3156b10
0x03D71FB8: 46000014  b #0x3d720d0
0x03D71FBC: 490140b9  ldr w9, [x10]
0x03D71FC0: 2901020b  add w9, w9, w2
0x03D71FC4: 08d1298b  add x8, x8, w9, sxtw #4
0x03D71FC8: 00e10491  add x0, x8, #0x138
0x03D71FCC: 000440f9  ldr x0, [x0, #8]
0x03D71FD0: e10319aa  mov x1, x25
0x03D71FD4: ed3ad097  bl #0x3180b88
0x03D71FD8: e10300aa  mov x1, x0
0x03D71FDC: b7f33ea9  stp x23, x28, [x29, #-0x18]
0x03D71FE0: 20a040a9  ldp x0, x8, [x1, #8]
0x03D71FE4: a36300d1  sub x3, x29, #0x18
0x03D71FE8: e20316aa  mov x2, x22
0x03D71FEC: e4031caa  mov x4, x28
0x03D71FF0: 00013fd6  blr x8
0x03D71FF4: a08b7ba9  ldp x0, x2, [x29, #-0x48]
0x03D71FF8: e1031caa  mov x1, x28
0x03D71FFC: 5d72d194  bl #0x71ce970
0x03D72000: a00240f9  ldr x0, [x21]
0x03D72004: 801600b4  cbz x0, #0x3d722d4
0x03D72008: e1031faa  mov x1, xzr
0x03D7200C: be418194  bl #0x5dc2704
0x03D72010: bc835cf8  ldur x28, [x29, #-0x38]
0x03D72014: a00240f9  ldr x0, [x21]
0x03D72018: 001600b4  cbz x0, #0x3d722d8
0x03D7201C: 562740f9  ldr x22, [x26, #0x48]
0x03D72020: 730240f9  ldr x19, [x19]
0x03D72024: e1031faa  mov x1, xzr
0x03D72028: 61418194  bl #0x5dc25ac
0x03D7202C: 48c801b0  adrp x8, #0x767b000
0x03D72030: 9aa24039  ldrb w26, [x20, #0x28]
0x03D72034: 080d41f9  ldr x8, [x8, #0x218]
0x03D72038: f90300aa  mov x25, x0
0x03D7203C: 000140f9  ldr x0, [x8]
0x03D72040: 183bd097  bl #0x3180ca0
0x03D72044: f70300aa  mov x23, x0
0x03D72048: 5f030071  cmp w26, #0
0x03D7204C: e2079f1a  cset w2, ne
0x03D72050: 2003229e  scvtf s0, x25
0x03D72054: e10313aa  mov x1, x19
0x03D72058: e3031faa  mov x3, xzr
0x03D7205C: cdb0ae94  bl #0x691e390
0x03D72060: f61300b4  cbz x22, #0x3d722dc
0x03D72064: 48c801b0  adrp x8, #0x767b000
0x03D72068: 081141f9  ldr x8, [x8, #0x220]
0x03D7206C: 020140f9  ldr x2, [x8]
0x03D72070: e00316aa  mov x0, x22
0x03D72074: e10317aa  mov x1, x23
0x03D72078: 3dcb0094  bl #0x3da4d6c
0x03D7207C: b3835af8  ldur x19, [x29, #-0x58]
0x03D72080: a18b7ba9  ldp x1, x2, [x29, #-0x48]
0x03D72084: e00313aa  mov x0, x19
0x03D72088: 3a72d194  bl #0x71ce970
0x03D7208C: 881f40f9  ldr x8, [x28, #0x38]
0x03D72090: 090545a9  ldp x9, x1, [x8, #0x50]
0x03D72094: 282940b9  ldr w8, [x9, #0x28]
0x03D72098: 200040f9  ldr x0, [x1]
0x03D7209C: 4800f837  tbnz w8, #0x1f, #0x3d720a4
0x03D720A0: 730240f9  ldr x19, [x19]
0x03D720A4: b3831ef8  stur x19, [x29, #-0x18]
0x03D720A8: 280840f9  ldr x8, [x1, #0x10]
0x03D720AC: a36300d1  sub x3, x29, #0x18
0x03D720B0: e20314aa  mov x2, x20
0x03D720B4: e40313aa  mov x4, x19
0x03D720B8: 00013fd6  blr x8
0x03D720BC: 76000014  b #0x3d72294
0x03D720C0: 490140b9  ldr w9, [x10]
0x03D720C4: 2901020b  add w9, w9, w2
0x03D720C8: 08d1298b  add x8, x8, w9, sxtw #4
0x03D720CC: 00e10491  add x0, x8, #0x138
0x03D720D0: 000440f9  ldr x0, [x0, #8]
0x03D720D4: e10318aa  mov x1, x24
0x03D720D8: ac3ad097  bl #0x3180b88
0x03D720DC: 080440f9  ldr x8, [x0, #8]
0x03D720E0: e30300aa  mov x3, x0
0x03D720E4: e00313aa  mov x0, x19
0x03D720E8: e10316aa  mov x1, x22
0x03D720EC: e2031faa  mov x2, xzr
0x03D720F0: 00013fd6  blr x8
0x03D720F4: 481f40f9  ldr x8, [x26, #0x38]
0x03D720F8: f30300aa  mov x19, x0
0x03D720FC: 001940f9  ldr x0, [x8, #0x30]
0x03D72100: 08d44439  ldrb w8, [x0, #0x135]
0x03D72104: 48000037  tbnz w8, #0, #0x3d7210c
0x03D72108: c591cf97  bl #0x315681c
0x03D7210C: e53ad097  bl #0x3180ca0
0x03D72110: 481f40f9  ldr x8, [x26, #0x38]
0x03D72114: f60300aa  mov x22, x0
0x03D72118: 031d40f9  ldr x3, [x8, #0x38]
0x03D7211C: 021540f9  ldr x2, [x8, #0x28]
0x03D72120: 690040f9  ldr x9, [x3]
0x03D72124: e10314aa  mov x1, x20
0x03D72128: 20013fd6  blr x9
0x03D7212C: f30d00b4  cbz x19, #0x3d722e8
0x03D72130: 481f40f9  ldr x8, [x26, #0x38]
0x03D72134: 010d40f9  ldr x1, [x8, #0x18]
0x03D72138: 28d44439  ldrb w8, [x1, #0x135]
0x03D7213C: 88000037  tbnz w8, #0, #0x3d7214c
0x03D72140: e00301aa  mov x0, x1
0x03D72144: b691cf97  bl #0x315681c
0x03D72148: e10300aa  mov x1, x0
0x03D7214C: 680240f9  ldr x8, [x19]
0x03D72150: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72154: 290100b4  cbz x9, #0x3d72178
0x03D72158: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7215C: 4a210091  add x10, x10, #8
0x03D72160: 4b815ff8  ldur x11, [x10, #-8]
0x03D72164: 7f0101eb  cmp x11, x1
0x03D72168: 00010054  b.eq #0x3d72188
0x03D7216C: 290500f1  subs x9, x9, #1
0x03D72170: 4a410091  add x10, x10, #0x10
0x03D72174: 61ffff54  b.ne #0x3d72160
0x03D72178: e00313aa  mov x0, x19
0x03D7217C: e2031f2a  mov w2, wzr
0x03D72180: 6492cf97  bl #0x3156b10
0x03D72184: 04000014  b #0x3d72194
0x03D72188: 490180b9  ldrsw x9, [x10]
0x03D7218C: 0811098b  add x8, x8, x9, lsl #4
0x03D72190: 00e10491  add x0, x8, #0x138
0x03D72194: 080840a9  ldp x8, x2, [x0]
0x03D72198: e00313aa  mov x0, x19
0x03D7219C: e10316aa  mov x1, x22
0x03D721A0: 00013fd6  blr x8
0x03D721A4: e8c701b0  adrp x8, #0x766f000
0x03D721A8: 360340f9  ldr x22, [x25]
0x03D721AC: 082141f9  ldr x8, [x8, #0x240]
0x03D721B0: f30300aa  mov x19, x0
0x03D721B4: 000140f9  ldr x0, [x8]
0x03D721B8: ba3ad097  bl #0x3180ca0
0x03D721BC: 960900b4  cbz x22, #0x3d722ec
0x03D721C0: f7c701b0  adrp x23, #0x766f000
0x03D721C4: c80240f9  ldr x8, [x22]
0x03D721C8: f72641f9  ldr x23, [x23, #0x248]
0x03D721CC: f40300aa  mov x20, x0
0x03D721D0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D721D4: e10240f9  ldr x1, [x23]
0x03D721D8: 290100b4  cbz x9, #0x3d721fc
0x03D721DC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D721E0: 4a210091  add x10, x10, #8
0x03D721E4: 4b815ff8  ldur x11, [x10, #-8]
0x03D721E8: 7f0101eb  cmp x11, x1
0x03D721EC: 00010054  b.eq #0x3d7220c
0x03D721F0: 290500f1  subs x9, x9, #1
0x03D721F4: 4a410091  add x10, x10, #0x10
0x03D721F8: 61ffff54  b.ne #0x3d721e4
0x03D721FC: 82008052  movz w2, #0x4
0x03D72200: e00316aa  mov x0, x22
0x03D72204: 4392cf97  bl #0x3156b10
0x03D72208: 05000014  b #0x3d7221c
0x03D7220C: 490140b9  ldr w9, [x10]
0x03D72210: 29110011  add w9, w9, #4
0x03D72214: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72218: 00e10491  add x0, x8, #0x138
0x03D7221C: 020440f9  ldr x2, [x0, #8]
0x03D72220: e00314aa  mov x0, x20
0x03D72224: e10316aa  mov x1, x22
0x03D72228: e3031faa  mov x3, xzr
0x03D7222C: eabf5694  bl #0x53221d4
0x03D72230: 130600b4  cbz x19, #0x3d722f0
0x03D72234: 680240f9  ldr x8, [x19]
0x03D72238: e10240f9  ldr x1, [x23]
0x03D7223C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72240: 290100b4  cbz x9, #0x3d72264
0x03D72244: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72248: 4a210091  add x10, x10, #8
0x03D7224C: 4b815ff8  ldur x11, [x10, #-8]
0x03D72250: 7f0101eb  cmp x11, x1
0x03D72254: 00010054  b.eq #0x3d72274
0x03D72258: 290500f1  subs x9, x9, #1
0x03D7225C: 4a410091  add x10, x10, #0x10
0x03D72260: 61ffff54  b.ne #0x3d7224c
0x03D72264: 22008052  movz w2, #0x1
0x03D72268: e00313aa  mov x0, x19
0x03D7226C: 2992cf97  bl #0x3156b10
0x03D72270: 05000014  b #0x3d72284
0x03D72274: 490140b9  ldr w9, [x10]
0x03D72278: 29050011  add w9, w9, #1
0x03D7227C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72280: 00e10491  add x0, x8, #0x138
0x03D72284: 080840a9  ldp x8, x2, [x0]
0x03D72288: e00313aa  mov x0, x19
0x03D7228C: e10314aa  mov x1, x20
0x03D72290: 00013fd6  blr x8
0x03D72294: a8035bf8  ldur x8, [x29, #-0x50]
0x03D72298: 081540f9  ldr x8, [x8, #0x28]
0x03D7229C: a9835ff8  ldur x9, [x29, #-8]
0x03D722A0: 1f0109eb  cmp x8, x9
0x03D722A4: 81020054  b.ne #0x3d722f4
0x03D722A8: bf030091  mov sp, x29
0x03D722AC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D722B0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D722B4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D722B8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D722BC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D722C0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D722C4: c0035fd6  ret
0x03D722C8: f80319aa  mov x24, x25
0x03D722CC: 783ad097  bl #0x3180cac
0x03D722D0: 773ad097  bl #0x3180cac
0x03D722D4: 763ad097  bl #0x3180cac
0x03D722D8: 753ad097  bl #0x3180cac
0x03D722DC: 743ad097  bl #0x3180cac
0x03D722E0: f80319aa  mov x24, x25
0x03D722E4: 723ad097  bl #0x3180cac
0x03D722E8: 713ad097  bl #0x3180cac
0x03D722EC: 703ad097  bl #0x3180cac
0x03D722F0: 6f3ad097  bl #0x3180cac
0x03D722F4: a771d194  bl #0x71ce990
0x03D722F8: 0f000014  b #0x3d72334
0x03D722FC: 0b000014  b #0x3d72328
0x03D72300: 0a000014  b #0x3d72328
0x03D72304: 09000014  b #0x3d72328
0x03D72308: 08000014  b #0x3d72328
0x03D7230C: 0a000014  b #0x3d72334
0x03D72310: 09000014  b #0x3d72334
0x03D72314: 08000014  b #0x3d72334
0x03D72318: 04000014  b #0x3d72328
0x03D7231C: 06000014  b #0x3d72334
0x03D72320: 02000014  b #0x3d72328
0x03D72324: 04000014  b #0x3d72334
0x03D72328: f80319aa  mov x24, x25
0x03D7232C: 02000014  b #0x3d72334
0x03D72330: 01000014  b #0x3d72334
0x03D72334: f30300aa  mov x19, x0
0x03D72338: 3f040071  cmp w1, #1
0x03D7233C: 81130054  b.ne #0x3d725ac
0x03D72340: e00313aa  mov x0, x19
0x03D72344: 7371d194  bl #0x71ce910
0x03D72348: f30300aa  mov x19, x0
0x03D7234C: 40c80190  adrp x0, #0x767a000
0x03D72350: 00a841f9  ldr x0, [x0, #0x350]
0x03D72354: b639d097  bl #0x3180a2c
0x03D72358: 680240f9  ldr x8, [x19]
0x03D7235C: 010140f9  ldr x1, [x8]
0x03D72360: 5e3bd097  bl #0x31810d8
0x03D72364: 80030036  tbz w0, #0, #0x3d723d4
0x03D72368: 730240f9  ldr x19, [x19]
0x03D7236C: 6d71d194  bl #0x71ce920
0x03D72370: a00240f9  ldr x0, [x21]
0x03D72374: 601000b4  cbz x0, #0x3d72580
0x03D72378: e1031faa  mov x1, xzr
0x03D7237C: e2408194  bl #0x5dc2704
0x03D72380: 140340f9  ldr x20, [x24]
0x03D72384: f40f00b4  cbz x20, #0x3d72580
0x03D72388: e0c701b0  adrp x0, #0x766f000
0x03D7238C: 002441f9  ldr x0, [x0, #0x248]
0x03D72390: a739d097  bl #0x3180a2c
0x03D72394: 880240f9  ldr x8, [x20]
0x03D72398: e10300aa  mov x1, x0
0x03D7239C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D723A0: 290100b4  cbz x9, #0x3d723c4
0x03D723A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D723A8: 4a210091  add x10, x10, #8
0x03D723AC: 4b815ff8  ldur x11, [x10, #-8]
0x03D723B0: 7f0101eb  cmp x11, x1
0x03D723B4: 40050054  b.eq #0x3d7245c
0x03D723B8: 290500f1  subs x9, x9, #1
0x03D723BC: 4a410091  add x10, x10, #0x10
0x03D723C0: 61ffff54  b.ne #0x3d723ac
0x03D723C4: 82008052  movz w2, #0x4
0x03D723C8: e00314aa  mov x0, x20
0x03D723CC: d191cf97  bl #0x3156b10
0x03D723D0: 27000014  b #0x3d7246c
0x03D723D4: e0c60190  adrp x0, #0x764e000
0x03D723D8: 006c42f9  ldr x0, [x0, #0x4d8]
0x03D723DC: 9439d097  bl #0x3180a2c
0x03D723E0: 680240f9  ldr x8, [x19]
0x03D723E4: 010140f9  ldr x1, [x8]
0x03D723E8: 3c3bd097  bl #0x31810d8
0x03D723EC: c00c0036  tbz w0, #0, #0x3d72584
0x03D723F0: 730240f9  ldr x19, [x19]
0x03D723F4: 4b71d194  bl #0x71ce920
0x03D723F8: a00240f9  ldr x0, [x21]
0x03D723FC: 200c00b4  cbz x0, #0x3d72580
0x03D72400: e1031faa  mov x1, xzr
0x03D72404: c0408194  bl #0x5dc2704
0x03D72408: 140340f9  ldr x20, [x24]
0x03D7240C: b40b00b4  cbz x20, #0x3d72580
0x03D72410: e0c701b0  adrp x0, #0x766f000
0x03D72414: 002441f9  ldr x0, [x0, #0x248]
0x03D72418: 8539d097  bl #0x3180a2c
0x03D7241C: 880240f9  ldr x8, [x20]
0x03D72420: e10300aa  mov x1, x0
0x03D72424: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72428: 290100b4  cbz x9, #0x3d7244c
0x03D7242C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72430: 4a210091  add x10, x10, #8
0x03D72434: 4b815ff8  ldur x11, [x10, #-8]
0x03D72438: 7f0101eb  cmp x11, x1
0x03D7243C: 20060054  b.eq #0x3d72500
0x03D72440: 290500f1  subs x9, x9, #1
0x03D72444: 4a410091  add x10, x10, #0x10
0x03D72448: 61ffff54  b.ne #0x3d72434
0x03D7244C: 82008052  movz w2, #0x4
0x03D72450: e00314aa  mov x0, x20
0x03D72454: af91cf97  bl #0x3156b10
0x03D72458: 2e000014  b #0x3d72510
0x03D7245C: 490140b9  ldr w9, [x10]
0x03D72460: 29110011  add w9, w9, #4
0x03D72464: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72468: 00e10491  add x0, x8, #0x138
0x03D7246C: 080840a9  ldp x8, x2, [x0]
0x03D72470: e00314aa  mov x0, x20
0x03D72474: e10313aa  mov x1, x19
0x03D72478: 00013fd6  blr x8
0x03D7247C: c0c701f0  adrp x0, #0x766d000
0x03D72480: 740340f9  ldr x20, [x27]
0x03D72484: 009841f9  ldr x0, [x0, #0x330]
0x03D72488: 6939d097  bl #0x3180a2c
0x03D7248C: e10313aa  mov x1, x19
0x03D72490: e20314aa  mov x2, x20
0x03D72494: e3031faa  mov x3, xzr
0x03D72498: 91165e94  bl #0x54f7edc
0x03D7249C: f30300aa  mov x19, x0
0x03D724A0: 20c801f0  adrp x0, #0x7679000
0x03D724A4: 007844f9  ldr x0, [x0, #0x8f0]
0x03D724A8: 6139d097  bl #0x3180a2c
0x03D724AC: 08008092  movn x8, #0
0x03D724B0: c9098052  movz w9, #0x4e
0x03D724B4: a0233da9  stp x0, x8, [x29, #-0x30]
0x03D724B8: a0c300d1  sub x0, x29, #0x30
0x03D724BC: e1031faa  mov x1, xzr
0x03D724C0: a9031eb8  stur w9, [x29, #-0x20]
0x03D724C4: 886c6594  bl #0x56cd6e4
0x03D724C8: f40300aa  mov x20, x0
0x03D724CC: c0c701f0  adrp x0, #0x766d000
0x03D724D0: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D724D4: 5639d097  bl #0x3180a2c
0x03D724D8: 08e040b9  ldr w8, [x0, #0xe0]
0x03D724DC: 48000035  cbnz w8, #0x3d724e4
0x03D724E0: ab39d097  bl #0x3180b8c
0x03D724E4: e00313aa  mov x0, x19
0x03D724E8: e10314aa  mov x1, x20
0x03D724EC: e2031faa  mov x2, xzr
0x03D724F0: e3031faa  mov x3, xzr
0x03D724F4: e4031faa  mov x4, xzr
0x03D724F8: 82e85b94  bl #0x546c700
0x03D724FC: 66ffff17  b #0x3d72294
0x03D72500: 490140b9  ldr w9, [x10]
0x03D72504: 29110011  add w9, w9, #4
0x03D72508: 08d1298b  add x8, x8, w9, sxtw #4
0x03D7250C: 00e10491  add x0, x8, #0x138
0x03D72510: 080840a9  ldp x8, x2, [x0]
0x03D72514: e00314aa  mov x0, x20
0x03D72518: e10313aa  mov x1, x19
0x03D7251C: 00013fd6  blr x8
0x03D72520: 20c801f0  adrp x0, #0x7679000
0x03D72524: 007844f9  ldr x0, [x0, #0x8f0]
0x03D72528: 4139d097  bl #0x3180a2c
0x03D7252C: 08008092  movn x8, #0
0x03D72530: e9018052  movz w9, #0xf
0x03D72534: a0233da9  stp x0, x8, [x29, #-0x30]
0x03D72538: a0c300d1  sub x0, x29, #0x30
0x03D7253C: e1031faa  mov x1, xzr
0x03D72540: a9031eb8  stur w9, [x29, #-0x20]
0x03D72544: 686c6594  bl #0x56cd6e4
0x03D72548: f40300aa  mov x20, x0
0x03D7254C: c0c701f0  adrp x0, #0x766d000
0x03D72550: 006c46f9  ldr x0, [x0, #0xcd8]
0x03D72554: 3639d097  bl #0x3180a2c
0x03D72558: 08e040b9  ldr w8, [x0, #0xe0]
0x03D7255C: 48000035  cbnz w8, #0x3d72564
0x03D72560: 8b39d097  bl #0x3180b8c
0x03D72564: e00313aa  mov x0, x19
0x03D72568: e10314aa  mov x1, x20
0x03D7256C: e2031faa  mov x2, xzr
0x03D72570: e3031faa  mov x3, xzr
0x03D72574: e4031faa  mov x4, xzr
0x03D72578: 0ce85b94  bl #0x546c5a8
0x03D7257C: 46ffff17  b #0x3d72294
0x03D72580: cb39d097  bl #0x3180cac
0x03D72584: 00018052  movz w0, #0x8
0x03D72588: ea70d194  bl #0x71ce930
0x03D7258C: 680240f9  ldr x8, [x19]
0x03D72590: 080000f9  str x8, [x0]
0x03D72594: 01a301d0  adrp x1, #0x71d4000
0x03D72598: 21a03491  add x1, x1, #0xd28
0x03D7259C: e2031faa  mov x2, xzr
0x03D725A0: e870d194  bl #0x71ce940
0x03D725A4: f30300aa  mov x19, x0
0x03D725A8: de70d194  bl #0x71ce920
0x03D725AC: e00313aa  mov x0, x19
0x03D725B0: eaccd397  bl #0x3265958
0x03D725B4: d85bc297  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73A7C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakeRequest<object>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakeRequest_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, bool userAuthorizationHeader, int32_t requestType, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, System_String_o* version, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, bool useUnityWebRequest, Framework_Core_Services_Backend_Http_Interfaces_IHttpErrorHandler_o* httpErrorHandler, const MethodInfo_3D73A7C* method);
; bytes=316 sha256=3dc4498894ff5c2b2941f34c0e321ecd3598ecaf66633d0785120b82144bfb65 status=arm64_complete_bound indexed_start=True
0x03D73A7C: ff4302d1  sub sp, sp, #0x90
0x03D73A80: fd7b03a9  stp x29, x30, [sp, #0x30]
0x03D73A84: fc6f04a9  stp x28, x27, [sp, #0x40]
0x03D73A88: fa6705a9  stp x26, x25, [sp, #0x50]
0x03D73A8C: f85f06a9  stp x24, x23, [sp, #0x60]
0x03D73A90: f65707a9  stp x22, x21, [sp, #0x70]
0x03D73A94: f44f08a9  stp x20, x19, [sp, #0x80]
0x03D73A98: fd6f4aa9  ldp x29, x27, [sp, #0xa0]
0x03D73A9C: f3634239  ldrb w19, [sp, #0x98]
0x03D73AA0: fc4b40f9  ldr x28, [sp, #0x90]
0x03D73AA4: f40306aa  mov x20, x6
0x03D73AA8: 681f40f9  ldr x8, [x27, #0x38]
0x03D73AAC: f50305aa  mov x21, x5
0x03D73AB0: f603042a  mov w22, w4
0x03D73AB4: fa03032a  mov w26, w3
0x03D73AB8: f80302aa  mov x24, x2
0x03D73ABC: f90301aa  mov x25, x1
0x03D73AC0: f70300aa  mov x23, x0
0x03D73AC4: 880100b5  cbnz x8, #0x3d73af4
0x03D73AC8: 40c80190  adrp x0, #0x767b000
0x03D73ACC: 001c41f9  ldr x0, [x0, #0x238]
0x03D73AD0: e71700f9  str x7, [sp, #0x28]
0x03D73AD4: d133d097  bl #0x3180a18
0x03D73AD8: e71740f9  ldr x7, [sp, #0x28]
0x03D73ADC: 681f40f9  ldr x8, [x27, #0x38]
0x03D73AE0: a80000b5  cbnz x8, #0x3d73af4
0x03D73AE4: e0031baa  mov x0, x27
0x03D73AE8: 648bcf97  bl #0x3156878
0x03D73AEC: e71740f9  ldr x7, [sp, #0x28]
0x03D73AF0: 681f40f9  ldr x8, [x27, #0x38]
0x03D73AF4: 080540f9  ldr x8, [x8, #8]
0x03D73AF8: 43030012  and w3, w26, #1
0x03D73AFC: e00317aa  mov x0, x23
0x03D73B00: e10319aa  mov x1, x25
0x03D73B04: fd2301a9  stp x29, x8, [sp, #0x10]
0x03D73B08: 68020012  and w8, w19, #1
0x03D73B0C: e20318aa  mov x2, x24
0x03D73B10: e403162a  mov w4, w22
0x03D73B14: e50315aa  mov x5, x21
0x03D73B18: e60314aa  mov x6, x20
0x03D73B1C: e8230039  strb w8, [sp, #8]
0x03D73B20: fc0300f9  str x28, [sp]
0x03D73B24: a5faff97  bl #0x3d725b8
0x03D73B28: f40e40f9  ldr x20, [x23, #0x18]
0x03D73B2C: 540400b4  cbz x20, #0x3d73bb4
0x03D73B30: 4ac80190  adrp x10, #0x767b000
0x03D73B34: 880240f9  ldr x8, [x20]
0x03D73B38: 4a1d41f9  ldr x10, [x10, #0x238]
0x03D73B3C: f30300aa  mov x19, x0
0x03D73B40: 095d4279  ldrh w9, [x8, #0x12e]
0x03D73B44: 410140f9  ldr x1, [x10]
0x03D73B48: 290100b4  cbz x9, #0x3d73b6c
0x03D73B4C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D73B50: 4a210091  add x10, x10, #8
0x03D73B54: 4b815ff8  ldur x11, [x10, #-8]
0x03D73B58: 7f0101eb  cmp x11, x1
0x03D73B5C: 00010054  b.eq #0x3d73b7c
0x03D73B60: 290500f1  subs x9, x9, #1
0x03D73B64: 4a410091  add x10, x10, #0x10
0x03D73B68: 61ffff54  b.ne #0x3d73b54
0x03D73B6C: e00314aa  mov x0, x20
0x03D73B70: e2031f2a  mov w2, wzr
0x03D73B74: e78bcf97  bl #0x3156b10
0x03D73B78: 04000014  b #0x3d73b88
0x03D73B7C: 490180b9  ldrsw x9, [x10]
0x03D73B80: 0811098b  add x8, x8, x9, lsl #4
0x03D73B84: 00e10491  add x0, x8, #0x138
0x03D73B88: 030840a9  ldp x3, x2, [x0]
0x03D73B8C: e00314aa  mov x0, x20
0x03D73B90: e10313aa  mov x1, x19
0x03D73B94: f44f48a9  ldp x20, x19, [sp, #0x80]
0x03D73B98: f65747a9  ldp x22, x21, [sp, #0x70]
0x03D73B9C: f85f46a9  ldp x24, x23, [sp, #0x60]
0x03D73BA0: fa6745a9  ldp x26, x25, [sp, #0x50]
0x03D73BA4: fc6f44a9  ldp x28, x27, [sp, #0x40]
0x03D73BA8: fd7b43a9  ldp x29, x30, [sp, #0x30]
0x03D73BAC: ff430291  add sp, sp, #0x90
0x03D73BB0: 60001fd6  br x3
0x03D73BB4: 3e34d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73BB8 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakeRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_HttpResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakeRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, bool userAuthorizationHeader, int32_t requestType, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, System_String_o* version, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, bool useUnityWebRequest, Framework_Core_Services_Backend_Http_Interfaces_IHttpErrorHandler_o* httpErrorHandler, const MethodInfo_3D73BB8* method);
; bytes=460 sha256=ab1fa1205f6ceff5d74ed7e61fa1bc12bf9877bdb775de9b82c56abaf6eede12 status=arm64_complete_bound indexed_start=True
0x03D73BB8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D73BBC: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D73BC0: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D73BC4: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D73BC8: f65704a9  stp x22, x21, [sp, #0x40]
0x03D73BCC: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D73BD0: fd030091  mov x29, sp
0x03D73BD4: ff8302d1  sub sp, sp, #0xa0
0x03D73BD8: a69f37a9  stp x6, x7, [x29, #-0x88]
0x03D73BDC: 48d03bd5  mrs x8, tpidr_el0
0x03D73BE0: a89736a9  stp x8, x5, [x29, #-0x98]
0x03D73BE4: 081540f9  ldr x8, [x8, #0x28]
0x03D73BE8: bb3f40f9  ldr x27, [x29, #0x78]
0x03D73BEC: f803042a  mov w24, w4
0x03D73BF0: f903032a  mov w25, w3
0x03D73BF4: a8831ff8  stur x8, [x29, #-8]
0x03D73BF8: a28318f8  stur x2, [x29, #-0x78]
0x03D73BFC: 751f40f9  ldr x21, [x27, #0x38]
0x03D73C00: fa0302aa  mov x26, x2
0x03D73C04: f70301aa  mov x23, x1
0x03D73C08: f30300aa  mov x19, x0
0x03D73C0C: 350100b5  cbnz x21, #0x3d73c30
0x03D73C10: 40c80190  adrp x0, #0x767b000
0x03D73C14: 001c41f9  ldr x0, [x0, #0x238]
0x03D73C18: 8033d097  bl #0x3180a18
0x03D73C1C: 751f40f9  ldr x21, [x27, #0x38]
0x03D73C20: 950000b5  cbnz x21, #0x3d73c30
0x03D73C24: e0031baa  mov x0, x27
0x03D73C28: 148bcf97  bl #0x3156878
0x03D73C2C: 751f40f9  ldr x21, [x27, #0x38]
0x03D73C30: a80240f9  ldr x8, [x21]
0x03D73C34: bc3b40f9  ldr x28, [x29, #0x70]
0x03D73C38: b6a34139  ldrb w22, [x29, #0x68]
0x03D73C3C: b43340f9  ldr x20, [x29, #0x60]
0x03D73C40: 02fd40b9  ldr w2, [x8, #0xfc]
0x03D73C44: e9030091  mov x9, sp
0x03D73C48: 4a3c0091  add x10, x2, #0xf
0x03D73C4C: 4a717c92  and x10, x10, #0x1fffffff0
0x03D73C50: 3b010acb  sub x27, x9, x10
0x03D73C54: 7f030091  mov sp, x27
0x03D73C58: 082940b9  ldr w8, [x8, #0x28]
0x03D73C5C: e0031baa  mov x0, x27
0x03D73C60: 1f010071  cmp w8, #0
0x03D73C64: a8e301d1  sub x8, x29, #0x78
0x03D73C68: 41b3889a  csel x1, x26, x8, lt
0x03D73C6C: 416bd194  bl #0x71ce970
0x03D73C70: a80640a9  ldp x8, x1, [x21]
0x03D73C74: 082940b9  ldr w8, [x8, #0x28]
0x03D73C78: 200040f9  ldr x0, [x1]
0x03D73C7C: 4800f837  tbnz w8, #0x1f, #0x3d73c84
0x03D73C80: 7b0340f9  ldr x27, [x27]
0x03D73C84: ad0357f8  ldur x13, [x29, #-0x90]
0x03D73C88: ac8357f8  ldur x12, [x29, #-0x88]
0x03D73C8C: 28030012  and w8, w25, #1
0x03D73C90: c9020012  and w9, w22, #1
0x03D73C94: aa3300d1  sub x10, x29, #0xc
0x03D73C98: ad333ba9  stp x13, x12, [x29, #-0x50]
0x03D73C9C: ac0358f8  ldur x12, [x29, #-0x80]
0x03D73CA0: ab4300d1  sub x11, x29, #0x10
0x03D73CA4: b8031fb8  stur w24, [x29, #-0x10]
0x03D73CA8: b76f39a9  stp x23, x27, [x29, #-0x70]
0x03D73CAC: ac533ca9  stp x12, x20, [x29, #-0x40]
0x03D73CB0: ac5300d1  sub x12, x29, #0x14
0x03D73CB4: a8431f38  sturb w8, [x29, #-0xc]
0x03D73CB8: a9c31e38  sturb w9, [x29, #-0x14]
0x03D73CBC: aa2f3aa9  stp x10, x11, [x29, #-0x60]
0x03D73CC0: ac733da9  stp x12, x28, [x29, #-0x30]
0x03D73CC4: 280840f9  ldr x8, [x1, #0x10]
0x03D73CC8: a3c301d1  sub x3, x29, #0x70
0x03D73CCC: a48300d1  sub x4, x29, #0x20
0x03D73CD0: e20313aa  mov x2, x19
0x03D73CD4: 00013fd6  blr x8
0x03D73CD8: 730e40f9  ldr x19, [x19, #0x18]
0x03D73CDC: 130500b4  cbz x19, #0x3d73d7c
0x03D73CE0: 4ac80190  adrp x10, #0x767b000
0x03D73CE4: 680240f9  ldr x8, [x19]
0x03D73CE8: b4035ef8  ldur x20, [x29, #-0x20]
0x03D73CEC: 4a1d41f9  ldr x10, [x10, #0x238]
0x03D73CF0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D73CF4: 410140f9  ldr x1, [x10]
0x03D73CF8: 290100b4  cbz x9, #0x3d73d1c
0x03D73CFC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D73D00: 4a210091  add x10, x10, #8
0x03D73D04: 4b815ff8  ldur x11, [x10, #-8]
0x03D73D08: 7f0101eb  cmp x11, x1
0x03D73D0C: 00010054  b.eq #0x3d73d2c
0x03D73D10: 290500f1  subs x9, x9, #1
0x03D73D14: 4a410091  add x10, x10, #0x10
0x03D73D18: 61ffff54  b.ne #0x3d73d04
0x03D73D1C: e00313aa  mov x0, x19
0x03D73D20: e2031f2a  mov w2, wzr
0x03D73D24: 7b8bcf97  bl #0x3156b10
0x03D73D28: 04000014  b #0x3d73d38
0x03D73D2C: 490180b9  ldrsw x9, [x10]
0x03D73D30: 0811098b  add x8, x8, x9, lsl #4
0x03D73D34: 00e10491  add x0, x8, #0x138
0x03D73D38: 080840a9  ldp x8, x2, [x0]
0x03D73D3C: e00313aa  mov x0, x19
0x03D73D40: e10314aa  mov x1, x20
0x03D73D44: 00013fd6  blr x8
0x03D73D48: a88356f8  ldur x8, [x29, #-0x98]
0x03D73D4C: 081540f9  ldr x8, [x8, #0x28]
0x03D73D50: a9835ff8  ldur x9, [x29, #-8]
0x03D73D54: 1f0109eb  cmp x8, x9
0x03D73D58: 41010054  b.ne #0x3d73d80
0x03D73D5C: bf030091  mov sp, x29
0x03D73D60: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D73D64: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D73D68: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D73D6C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D73D70: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D73D74: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D73D78: c0035fd6  ret
0x03D73D7C: cc33d097  bl #0x3180cac
0x03D73D80: 046bd194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D725B8 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$CreateRequest<object>
; native signature: Framework_Core_Services_Backend_Http_Data_HttpRequest_o* Framework_Core_Services_Backend_Repositories_RepositoryBase__CreateRequest_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, bool userAuthorizationHeader, int32_t requestType, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, System_String_o* version, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, bool useUnityWebRequest, Framework_Core_Services_Backend_Http_Interfaces_IHttpErrorHandler_o* httpErrorHandler, const MethodInfo_3D725B8* method);
; bytes=548 sha256=f5bbec9620a251de0942e0a3b08ebcfed2056c7ae6faf809d5e6010b8c004dad status=arm64_complete_bound indexed_start=True
0x03D725B8: ff0302d1  sub sp, sp, #0x80
0x03D725BC: fd7b02a9  stp x29, x30, [sp, #0x20]
0x03D725C0: fc6f03a9  stp x28, x27, [sp, #0x30]
0x03D725C4: fa6704a9  stp x26, x25, [sp, #0x40]
0x03D725C8: f85f05a9  stp x24, x23, [sp, #0x50]
0x03D725CC: f65706a9  stp x22, x21, [sp, #0x60]
0x03D725D0: f44f07a9  stp x20, x19, [sp, #0x70]
0x03D725D4: fb5349a9  ldp x27, x20, [sp, #0x90]
0x03D725D8: fa234239  ldrb w26, [sp, #0x88]
0x03D725DC: f74340f9  ldr x23, [sp, #0x80]
0x03D725E0: f50307aa  mov x21, x7
0x03D725E4: 881e40f9  ldr x8, [x20, #0x38]
0x03D725E8: f90306aa  mov x25, x6
0x03D725EC: f80305aa  mov x24, x5
0x03D725F0: fd03032a  mov w29, w3
0x03D725F4: fc0301aa  mov x28, x1
0x03D725F8: f60300aa  mov x22, x0
0x03D725FC: e41f00b9  str w4, [sp, #0x1c]
0x03D72600: e20b00f9  str x2, [sp, #0x10]
0x03D72604: 680100b5  cbnz x8, #0x3d72630
0x03D72608: 40c801b0  adrp x0, #0x767b000
0x03D7260C: 001841f9  ldr x0, [x0, #0x230]
0x03D72610: 0239d097  bl #0x3180a18
0x03D72614: 20c801f0  adrp x0, #0x7679000
0x03D72618: 007c44f9  ldr x0, [x0, #0x8f8]
0x03D7261C: ff38d097  bl #0x3180a18
0x03D72620: 881e40f9  ldr x8, [x20, #0x38]
0x03D72624: 680000b5  cbnz x8, #0x3d72630
0x03D72628: e00314aa  mov x0, x20
0x03D7262C: 9390cf97  bl #0x3156878
0x03D72630: d32240f9  ldr x19, [x22, #0x40]
0x03D72634: 330d00b4  cbz x19, #0x3d727d8
0x03D72638: 4ac801b0  adrp x10, #0x767b000
0x03D7263C: 680240f9  ldr x8, [x19]
0x03D72640: 4a1941f9  ldr x10, [x10, #0x230]
0x03D72644: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72648: 410140f9  ldr x1, [x10]
0x03D7264C: 290100b4  cbz x9, #0x3d72670
0x03D72650: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72654: 4a210091  add x10, x10, #8
0x03D72658: 4b815ff8  ldur x11, [x10, #-8]
0x03D7265C: 7f0101eb  cmp x11, x1
0x03D72660: 00010054  b.eq #0x3d72680
0x03D72664: 290500f1  subs x9, x9, #1
0x03D72668: 4a410091  add x10, x10, #0x10
0x03D7266C: 61ffff54  b.ne #0x3d72658
0x03D72670: e00313aa  mov x0, x19
0x03D72674: e2031f2a  mov w2, wzr
0x03D72678: 2691cf97  bl #0x3156b10
0x03D7267C: 04000014  b #0x3d7268c
0x03D72680: 490180b9  ldrsw x9, [x10]
0x03D72684: 0811098b  add x8, x8, x9, lsl #4
0x03D72688: 00e10491  add x0, x8, #0x138
0x03D7268C: 080840a9  ldp x8, x2, [x0]
0x03D72690: e00313aa  mov x0, x19
0x03D72694: e10318aa  mov x1, x24
0x03D72698: 00013fd6  blr x8
0x03D7269C: 28c801f0  adrp x8, #0x7679000
0x03D726A0: 087d44f9  ldr x8, [x8, #0x8f8]
0x03D726A4: f30300aa  mov x19, x0
0x03D726A8: 080140f9  ldr x8, [x8]
0x03D726AC: e00308aa  mov x0, x8
0x03D726B0: 7c39d097  bl #0x3180ca0
0x03D726B4: e31f40b9  ldr w3, [sp, #0x1c]
0x03D726B8: a2030012  and w2, w29, #1
0x03D726BC: 46030012  and w6, w26, #1
0x03D726C0: e1031caa  mov x1, x28
0x03D726C4: e40313aa  mov x4, x19
0x03D726C8: e5031f2a  mov w5, wzr
0x03D726CC: e7031baa  mov x7, x27
0x03D726D0: f80300aa  mov x24, x0
0x03D726D4: ff0300f9  str xzr, [sp]
0x03D726D8: 3fc0ae94  bl #0x69227d4
0x03D726DC: f80700b4  cbz x24, #0x3d727d8
0x03D726E0: e00318aa  mov x0, x24
0x03D726E4: 198c01f8  str x25, [x0, #0x18]!
0x03D726E8: e10319aa  mov x1, x25
0x03D726EC: b638d097  bl #0x31809c4
0x03D726F0: e00318aa  mov x0, x24
0x03D726F4: 150c03f8  str x21, [x0, #0x30]!
0x03D726F8: e10315aa  mov x1, x21
0x03D726FC: b238d097  bl #0x31809c4
0x03D72700: b70000b4  cbz x23, #0x3d72714
0x03D72704: e00318aa  mov x0, x24
0x03D72708: 170c04f8  str x23, [x0, #0x40]!
0x03D7270C: e10317aa  mov x1, x23
0x03D72710: ad38d097  bl #0x31809c4
0x03D72714: e00316aa  mov x0, x22
0x03D72718: e10318aa  mov x1, x24
0x03D7271C: e20315aa  mov x2, x21
0x03D72720: e3031faa  mov x3, xzr
0x03D72724: 84c0ae94  bl #0x6922934
0x03D72728: c80240f9  ldr x8, [x22]
0x03D7272C: e00316aa  mov x0, x22
0x03D72730: 098559a9  ldp x9, x1, [x8, #0x198]
0x03D72734: 20013fd6  blr x9
0x03D72738: 000500b4  cbz x0, #0x3d727d8
0x03D7273C: 891e40f9  ldr x9, [x20, #0x38]
0x03D72740: 080040f9  ldr x8, [x0]
0x03D72744: f50300aa  mov x21, x0
0x03D72748: 330540f9  ldr x19, [x9, #8]
0x03D7274C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72750: 611240f9  ldr x1, [x19, #0x20]
0x03D72754: 62a24079  ldrh w2, [x19, #0x50]
0x03D72758: 290100b4  cbz x9, #0x3d7277c
0x03D7275C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72760: 4a210091  add x10, x10, #8
0x03D72764: 4b815ff8  ldur x11, [x10, #-8]
0x03D72768: 7f0101eb  cmp x11, x1
0x03D7276C: e0000054  b.eq #0x3d72788
0x03D72770: 290500f1  subs x9, x9, #1
0x03D72774: 4a410091  add x10, x10, #0x10
0x03D72778: 61ffff54  b.ne #0x3d72764
0x03D7277C: e00315aa  mov x0, x21
0x03D72780: e490cf97  bl #0x3156b10
0x03D72784: 05000014  b #0x3d72798
0x03D72788: 490140b9  ldr w9, [x10]
0x03D7278C: 2901020b  add w9, w9, w2
0x03D72790: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72794: 00e10491  add x0, x8, #0x138
0x03D72798: 000440f9  ldr x0, [x0, #8]
0x03D7279C: e10313aa  mov x1, x19
0x03D727A0: fa38d097  bl #0x3180b88
0x03D727A4: e30300aa  mov x3, x0
0x03D727A8: 040440f9  ldr x4, [x0, #8]
0x03D727AC: e00315aa  mov x0, x21
0x03D727B0: e10b40f9  ldr x1, [sp, #0x10]
0x03D727B4: e20318aa  mov x2, x24
0x03D727B8: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03D727BC: f65746a9  ldp x22, x21, [sp, #0x60]
0x03D727C0: f85f45a9  ldp x24, x23, [sp, #0x50]
0x03D727C4: fa6744a9  ldp x26, x25, [sp, #0x40]
0x03D727C8: fc6f43a9  ldp x28, x27, [sp, #0x30]
0x03D727CC: fd7b42a9  ldp x29, x30, [sp, #0x20]
0x03D727D0: ff030291  add sp, sp, #0x80
0x03D727D4: 80001fd6  br x4
0x03D727D8: 3539d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D727DC | Framework.Core.Services.Backend.Repositories.RepositoryBase$$CreateRequest<__Il2CppFullySharedGenericType>
; native signature: Framework_Core_Services_Backend_Http_Data_HttpRequest_o* Framework_Core_Services_Backend_Repositories_RepositoryBase__CreateRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, bool userAuthorizationHeader, int32_t requestType, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, System_String_o* version, Framework_Core_Services_Backend_RetryStrategy_o* retryStrategy, Framework_Core_Services_Backend_Http_Interfaces_ISuccessStrategy_o* successStrategy, bool useUnityWebRequest, Framework_Core_Services_Backend_Http_Interfaces_IHttpErrorHandler_o* httpErrorHandler, const MethodInfo_3D727DC* method);
; bytes=700 sha256=2eae58a0d2d4759473e11af9a9680b9cea1a5dda583f0fe32d7622ca6a1ee835 status=arm64_complete_bound indexed_start=True
0x03D727DC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D727E0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D727E4: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D727E8: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D727EC: f65704a9  stp x22, x21, [sp, #0x40]
0x03D727F0: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D727F4: fd030091  mov x29, sp
0x03D727F8: ff4301d1  sub sp, sp, #0x50
0x03D727FC: a4431db8  stur w4, [x29, #-0x2c]
0x03D72800: a3431cb8  stur w3, [x29, #-0x3c]
0x03D72804: a1831cf8  stur x1, [x29, #-0x38]
0x03D72808: 48d03bd5  mrs x8, tpidr_el0
0x03D7280C: a8031bf8  stur x8, [x29, #-0x50]
0x03D72810: 081540f9  ldr x8, [x8, #0x28]
0x03D72814: b53f40f9  ldr x21, [x29, #0x78]
0x03D72818: f60307aa  mov x22, x7
0x03D7281C: fa0306aa  mov x26, x6
0x03D72820: a8831ff8  stur x8, [x29, #-8]
0x03D72824: a2831df8  stur x2, [x29, #-0x28]
0x03D72828: a81e40f9  ldr x8, [x21, #0x38]
0x03D7282C: f90305aa  mov x25, x5
0x03D72830: f70300aa  mov x23, x0
0x03D72834: a2831bf8  stur x2, [x29, #-0x48]
0x03D72838: 880100b5  cbnz x8, #0x3d72868
0x03D7283C: 40c801b0  adrp x0, #0x767b000
0x03D72840: 001841f9  ldr x0, [x0, #0x230]
0x03D72844: 7538d097  bl #0x3180a18
0x03D72848: 20c801f0  adrp x0, #0x7679000
0x03D7284C: 007c44f9  ldr x0, [x0, #0x8f8]
0x03D72850: 7238d097  bl #0x3180a18
0x03D72854: a81e40f9  ldr x8, [x21, #0x38]
0x03D72858: 880000b5  cbnz x8, #0x3d72868
0x03D7285C: e00315aa  mov x0, x21
0x03D72860: 0690cf97  bl #0x3156878
0x03D72864: a81e40f9  ldr x8, [x21, #0x38]
0x03D72868: 080140f9  ldr x8, [x8]
0x03D7286C: 18fd40b9  ldr w24, [x8, #0xfc]
0x03D72870: e8030091  mov x8, sp
0x03D72874: 093f0091  add x9, x24, #0xf
0x03D72878: 29717c92  and x9, x9, #0x1fffffff0
0x03D7287C: 130109cb  sub x19, x8, x9
0x03D72880: 7f020091  mov sp, x19
0x03D72884: fb2240f9  ldr x27, [x23, #0x40]
0x03D72888: 5b1000b4  cbz x27, #0x3d72a90
0x03D7288C: 4ac801b0  adrp x10, #0x767b000
0x03D72890: 680340f9  ldr x8, [x27]
0x03D72894: 4a1941f9  ldr x10, [x10, #0x230]
0x03D72898: bc3b40f9  ldr x28, [x29, #0x70]
0x03D7289C: b4a34139  ldrb w20, [x29, #0x68]
0x03D728A0: 095d4279  ldrh w9, [x8, #0x12e]
0x03D728A4: 410140f9  ldr x1, [x10]
0x03D728A8: 290100b4  cbz x9, #0x3d728cc
0x03D728AC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D728B0: 4a210091  add x10, x10, #8
0x03D728B4: 4b815ff8  ldur x11, [x10, #-8]
0x03D728B8: 7f0101eb  cmp x11, x1
0x03D728BC: 00010054  b.eq #0x3d728dc
0x03D728C0: 290500f1  subs x9, x9, #1
0x03D728C4: 4a410091  add x10, x10, #0x10
0x03D728C8: 61ffff54  b.ne #0x3d728b4
0x03D728CC: e0031baa  mov x0, x27
0x03D728D0: e2031f2a  mov w2, wzr
0x03D728D4: 8f90cf97  bl #0x3156b10
0x03D728D8: 04000014  b #0x3d728e8
0x03D728DC: 490180b9  ldrsw x9, [x10]
0x03D728E0: 0811098b  add x8, x8, x9, lsl #4
0x03D728E4: 00e10491  add x0, x8, #0x138
0x03D728E8: 080840a9  ldp x8, x2, [x0]
0x03D728EC: e0031baa  mov x0, x27
0x03D728F0: e10319aa  mov x1, x25
0x03D728F4: 00013fd6  blr x8
0x03D728F8: 28c801f0  adrp x8, #0x7679000
0x03D728FC: 087d44f9  ldr x8, [x8, #0x8f8]
0x03D72900: fb0300aa  mov x27, x0
0x03D72904: 080140f9  ldr x8, [x8]
0x03D72908: e00308aa  mov x0, x8
0x03D7290C: e538d097  bl #0x3180ca0
0x03D72910: a8435cb8  ldur w8, [x29, #-0x3c]
0x03D72914: f90300aa  mov x25, x0
0x03D72918: 86020012  and w6, w20, #1
0x03D7291C: 02010012  and w2, w8, #1
0x03D72920: ff0f1ff8  str xzr, [sp, #-0x10]!
0x03D72924: a1835cf8  ldur x1, [x29, #-0x38]
0x03D72928: a3435db8  ldur w3, [x29, #-0x2c]
0x03D7292C: e4031baa  mov x4, x27
0x03D72930: e5031f2a  mov w5, wzr
0x03D72934: e7031caa  mov x7, x28
0x03D72938: a7bfae94  bl #0x69227d4
0x03D7293C: ff430091  add sp, sp, #0x10
0x03D72940: 990a00b4  cbz x25, #0x3d72a90
0x03D72944: bb3340f9  ldr x27, [x29, #0x60]
0x03D72948: e00319aa  mov x0, x25
0x03D7294C: 1a8c01f8  str x26, [x0, #0x18]!
0x03D72950: e1031aaa  mov x1, x26
0x03D72954: 1c38d097  bl #0x31809c4
0x03D72958: e00319aa  mov x0, x25
0x03D7295C: 160c03f8  str x22, [x0, #0x30]!
0x03D72960: e10316aa  mov x1, x22
0x03D72964: 1838d097  bl #0x31809c4
0x03D72968: bb0000b4  cbz x27, #0x3d7297c
0x03D7296C: e00319aa  mov x0, x25
0x03D72970: 1b0c04f8  str x27, [x0, #0x40]!
0x03D72974: e1031baa  mov x1, x27
0x03D72978: 1338d097  bl #0x31809c4
0x03D7297C: e00317aa  mov x0, x23
0x03D72980: e10319aa  mov x1, x25
0x03D72984: e20316aa  mov x2, x22
0x03D72988: e3031faa  mov x3, xzr
0x03D7298C: eabfae94  bl #0x6922934
0x03D72990: e80240f9  ldr x8, [x23]
0x03D72994: e00317aa  mov x0, x23
0x03D72998: 098559a9  ldp x9, x1, [x8, #0x198]
0x03D7299C: 20013fd6  blr x9
0x03D729A0: b41e40f9  ldr x20, [x21, #0x38]
0x03D729A4: a9835bf8  ldur x9, [x29, #-0x48]
0x03D729A8: f60300aa  mov x22, x0
0x03D729AC: e00313aa  mov x0, x19
0x03D729B0: 880240f9  ldr x8, [x20]
0x03D729B4: e20318aa  mov x2, x24
0x03D729B8: 082940b9  ldr w8, [x8, #0x28]
0x03D729BC: 1f010071  cmp w8, #0
0x03D729C0: a8a300d1  sub x8, x29, #0x28
0x03D729C4: 21b1889a  csel x1, x9, x8, lt
0x03D729C8: ea6fd194  bl #0x71ce970
0x03D729CC: 360600b4  cbz x22, #0x3d72a90
0x03D729D0: 885240a9  ldp x8, x20, [x20]
0x03D729D4: 082940b9  ldr w8, [x8, #0x28]
0x03D729D8: 4800f837  tbnz w8, #0x1f, #0x3d729e0
0x03D729DC: 730240f9  ldr x19, [x19]
0x03D729E0: c80240f9  ldr x8, [x22]
0x03D729E4: 811240f9  ldr x1, [x20, #0x20]
0x03D729E8: 82a24079  ldrh w2, [x20, #0x50]
0x03D729EC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D729F0: 290100b4  cbz x9, #0x3d72a14
0x03D729F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D729F8: 4a210091  add x10, x10, #8
0x03D729FC: 4b815ff8  ldur x11, [x10, #-8]
0x03D72A00: 7f0101eb  cmp x11, x1
0x03D72A04: e0000054  b.eq #0x3d72a20
0x03D72A08: 290500f1  subs x9, x9, #1
0x03D72A0C: 4a410091  add x10, x10, #0x10
0x03D72A10: 61ffff54  b.ne #0x3d729fc
0x03D72A14: e00316aa  mov x0, x22
0x03D72A18: 3e90cf97  bl #0x3156b10
0x03D72A1C: 05000014  b #0x3d72a30
0x03D72A20: 490140b9  ldr w9, [x10]
0x03D72A24: 2901020b  add w9, w9, w2
0x03D72A28: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72A2C: 00e10491  add x0, x8, #0x138
0x03D72A30: 000440f9  ldr x0, [x0, #8]
0x03D72A34: e10314aa  mov x1, x20
0x03D72A38: 5438d097  bl #0x3180b88
0x03D72A3C: b3673ea9  stp x19, x25, [x29, #-0x20]
0x03D72A40: e10300aa  mov x1, x0
0x03D72A44: 00a040a9  ldp x0, x8, [x0, #8]
0x03D72A48: a38300d1  sub x3, x29, #0x20
0x03D72A4C: a44300d1  sub x4, x29, #0x10
0x03D72A50: e20316aa  mov x2, x22
0x03D72A54: 00013fd6  blr x8
0x03D72A58: a8035bf8  ldur x8, [x29, #-0x50]
0x03D72A5C: a0035ff8  ldur x0, [x29, #-0x10]
0x03D72A60: 081540f9  ldr x8, [x8, #0x28]
0x03D72A64: a9835ff8  ldur x9, [x29, #-8]
0x03D72A68: 1f0109eb  cmp x8, x9
0x03D72A6C: 41010054  b.ne #0x3d72a94
0x03D72A70: bf030091  mov sp, x29
0x03D72A74: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D72A78: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D72A7C: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D72A80: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D72A84: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D72A88: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D72A8C: c0035fd6  ret
0x03D72A90: 8738d097  bl #0x3180cac
0x03D72A94: bf6fd194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73D84 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakeWebsocketRequest<object>
; native signature: strange_extensions_promise_api_IPromise_T__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakeWebsocketRequest_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* topic, System_String_o* action, Il2CppObject* payload, int32_t timeout, int32_t retryCount, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, const MethodInfo_3D73D84* method);
; bytes=240 sha256=f2ff449334a6df5e2498d60a30a897c8e43d64700993454948c5d8e506d867e1 status=arm64_complete_bound indexed_start=True
0x03D73D84: fe0f1bf8  str x30, [sp, #-0x50]!
0x03D73D88: fa6701a9  stp x26, x25, [sp, #0x10]
0x03D73D8C: f85f02a9  stp x24, x23, [sp, #0x20]
0x03D73D90: f65703a9  stp x22, x21, [sp, #0x30]
0x03D73D94: f44f04a9  stp x20, x19, [sp, #0x40]
0x03D73D98: e81c40f9  ldr x8, [x7, #0x38]
0x03D73D9C: fa0307aa  mov x26, x7
0x03D73DA0: f30306aa  mov x19, x6
0x03D73DA4: f403052a  mov w20, w5
0x03D73DA8: f503042a  mov w21, w4
0x03D73DAC: f60303aa  mov x22, x3
0x03D73DB0: f70302aa  mov x23, x2
0x03D73DB4: f80301aa  mov x24, x1
0x03D73DB8: f90300aa  mov x25, x0
0x03D73DBC: 680000b5  cbnz x8, #0x3d73dc8
0x03D73DC0: e0031aaa  mov x0, x26
0x03D73DC4: ad8acf97  bl #0x3156878
0x03D73DC8: 391340f9  ldr x25, [x25, #0x20]
0x03D73DCC: 390500b4  cbz x25, #0x3d73e70
0x03D73DD0: 491f40f9  ldr x9, [x26, #0x38]
0x03D73DD4: 280340f9  ldr x8, [x25]
0x03D73DD8: 3a0540f9  ldr x26, [x9, #8]
0x03D73DDC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D73DE0: 411340f9  ldr x1, [x26, #0x20]
0x03D73DE4: 42a34079  ldrh w2, [x26, #0x50]
0x03D73DE8: 290100b4  cbz x9, #0x3d73e0c
0x03D73DEC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D73DF0: 4a210091  add x10, x10, #8
0x03D73DF4: 4b815ff8  ldur x11, [x10, #-8]
0x03D73DF8: 7f0101eb  cmp x11, x1
0x03D73DFC: e0000054  b.eq #0x3d73e18
0x03D73E00: 290500f1  subs x9, x9, #1
0x03D73E04: 4a410091  add x10, x10, #0x10
0x03D73E08: 61ffff54  b.ne #0x3d73df4
0x03D73E0C: e00319aa  mov x0, x25
0x03D73E10: 408bcf97  bl #0x3156b10
0x03D73E14: 05000014  b #0x3d73e28
0x03D73E18: 490140b9  ldr w9, [x10]
0x03D73E1C: 2901020b  add w9, w9, w2
0x03D73E20: 08d1298b  add x8, x8, w9, sxtw #4
0x03D73E24: 00e10491  add x0, x8, #0x138
0x03D73E28: 000440f9  ldr x0, [x0, #8]
0x03D73E2C: e1031aaa  mov x1, x26
0x03D73E30: 5633d097  bl #0x3180b88
0x03D73E34: e70300aa  mov x7, x0
0x03D73E38: 080440f9  ldr x8, [x0, #8]
0x03D73E3C: e00319aa  mov x0, x25
0x03D73E40: e10318aa  mov x1, x24
0x03D73E44: e20317aa  mov x2, x23
0x03D73E48: e30316aa  mov x3, x22
0x03D73E4C: e403152a  mov w4, w21
0x03D73E50: e503142a  mov w5, w20
0x03D73E54: e60313aa  mov x6, x19
0x03D73E58: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03D73E5C: f65743a9  ldp x22, x21, [sp, #0x30]
0x03D73E60: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03D73E64: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03D73E68: fe0745f8  ldr x30, [sp], #0x50
0x03D73E6C: 00011fd6  br x8
0x03D73E70: 8f33d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73E74 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$MakeWebsocketRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_T__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__MakeWebsocketRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* topic, System_String_o* action, Il2CppObject* payload, int32_t timeout, int32_t retryCount, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_T__o* validator, const MethodInfo_3D73E74* method);
; bytes=240 sha256=8d1e84d0d382c2482416f13ae0519aa8ba250f379366ade91c6e9f90dd3b1392 status=arm64_complete_bound indexed_start=True
0x03D73E74: fe0f1bf8  str x30, [sp, #-0x50]!
0x03D73E78: fa6701a9  stp x26, x25, [sp, #0x10]
0x03D73E7C: f85f02a9  stp x24, x23, [sp, #0x20]
0x03D73E80: f65703a9  stp x22, x21, [sp, #0x30]
0x03D73E84: f44f04a9  stp x20, x19, [sp, #0x40]
0x03D73E88: e81c40f9  ldr x8, [x7, #0x38]
0x03D73E8C: fa0307aa  mov x26, x7
0x03D73E90: f30306aa  mov x19, x6
0x03D73E94: f403052a  mov w20, w5
0x03D73E98: f503042a  mov w21, w4
0x03D73E9C: f60303aa  mov x22, x3
0x03D73EA0: f70302aa  mov x23, x2
0x03D73EA4: f80301aa  mov x24, x1
0x03D73EA8: f90300aa  mov x25, x0
0x03D73EAC: 680000b5  cbnz x8, #0x3d73eb8
0x03D73EB0: e0031aaa  mov x0, x26
0x03D73EB4: 718acf97  bl #0x3156878
0x03D73EB8: 391340f9  ldr x25, [x25, #0x20]
0x03D73EBC: 390500b4  cbz x25, #0x3d73f60
0x03D73EC0: 491f40f9  ldr x9, [x26, #0x38]
0x03D73EC4: 280340f9  ldr x8, [x25]
0x03D73EC8: 3a0540f9  ldr x26, [x9, #8]
0x03D73ECC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D73ED0: 411340f9  ldr x1, [x26, #0x20]
0x03D73ED4: 42a34079  ldrh w2, [x26, #0x50]
0x03D73ED8: 290100b4  cbz x9, #0x3d73efc
0x03D73EDC: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D73EE0: 4a210091  add x10, x10, #8
0x03D73EE4: 4b815ff8  ldur x11, [x10, #-8]
0x03D73EE8: 7f0101eb  cmp x11, x1
0x03D73EEC: e0000054  b.eq #0x3d73f08
0x03D73EF0: 290500f1  subs x9, x9, #1
0x03D73EF4: 4a410091  add x10, x10, #0x10
0x03D73EF8: 61ffff54  b.ne #0x3d73ee4
0x03D73EFC: e00319aa  mov x0, x25
0x03D73F00: 048bcf97  bl #0x3156b10
0x03D73F04: 05000014  b #0x3d73f18
0x03D73F08: 490140b9  ldr w9, [x10]
0x03D73F0C: 2901020b  add w9, w9, w2
0x03D73F10: 08d1298b  add x8, x8, w9, sxtw #4
0x03D73F14: 00e10491  add x0, x8, #0x138
0x03D73F18: 000440f9  ldr x0, [x0, #8]
0x03D73F1C: e1031aaa  mov x1, x26
0x03D73F20: 1a33d097  bl #0x3180b88
0x03D73F24: e70300aa  mov x7, x0
0x03D73F28: 080440f9  ldr x8, [x0, #8]
0x03D73F2C: e00319aa  mov x0, x25
0x03D73F30: e10318aa  mov x1, x24
0x03D73F34: e20317aa  mov x2, x23
0x03D73F38: e30316aa  mov x3, x22
0x03D73F3C: e403152a  mov w4, w21
0x03D73F40: e503142a  mov w5, w20
0x03D73F44: e60313aa  mov x6, x19
0x03D73F48: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03D73F4C: f65743a9  ldp x22, x21, [sp, #0x30]
0x03D73F50: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03D73F54: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03D73F58: fe0745f8  ldr x30, [sp], #0x50
0x03D73F5C: 00011fd6  br x8
0x03D73F60: 5333d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7535C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$WebsocketRequest<object, object>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__WebsocketRequest_object__object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* topic, System_String_o* action, Il2CppObject* payload, int32_t timeout, int32_t retryCount, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, const MethodInfo_3D7535C* method);
; bytes=624 sha256=c0a6338d063d667d7ecab824037ee0b6013152e316ac2a1851e1a274f014fa1d status=arm64_complete_bound indexed_start=True
0x03D7535C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D75360: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D75364: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D75368: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D7536C: f65704a9  stp x22, x21, [sp, #0x40]
0x03D75370: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D75374: e81c40f9  ldr x8, [x7, #0x38]
0x03D75378: f30307aa  mov x19, x7
0x03D7537C: f60306aa  mov x22, x6
0x03D75380: f703052a  mov w23, w5
0x03D75384: f803042a  mov w24, w4
0x03D75388: f90303aa  mov x25, x3
0x03D7538C: fa0302aa  mov x26, x2
0x03D75390: fb0301aa  mov x27, x1
0x03D75394: fc0300aa  mov x28, x0
0x03D75398: 880100b5  cbnz x8, #0x3d753c8
0x03D7539C: c0c701d0  adrp x0, #0x766f000
0x03D753A0: 002041f9  ldr x0, [x0, #0x240]
0x03D753A4: 9d2dd097  bl #0x3180a18
0x03D753A8: c0c701d0  adrp x0, #0x766f000
0x03D753AC: 002441f9  ldr x0, [x0, #0x248]
0x03D753B0: 9a2dd097  bl #0x3180a18
0x03D753B4: 681e40f9  ldr x8, [x19, #0x38]
0x03D753B8: 880000b5  cbnz x8, #0x3d753c8
0x03D753BC: e00313aa  mov x0, x19
0x03D753C0: 2e85cf97  bl #0x3156878
0x03D753C4: 681e40f9  ldr x8, [x19, #0x38]
0x03D753C8: 000140f9  ldr x0, [x8]
0x03D753CC: 08d44439  ldrb w8, [x0, #0x135]
0x03D753D0: 48000037  tbnz w8, #0, #0x3d753d8
0x03D753D4: 1285cf97  bl #0x315681c
0x03D753D8: 322ed097  bl #0x3180ca0
0x03D753DC: 681e40f9  ldr x8, [x19, #0x38]
0x03D753E0: f50300aa  mov x21, x0
0x03D753E4: 010540f9  ldr x1, [x8, #8]
0x03D753E8: 1b8b0794  bl #0x3f58054
0x03D753EC: 681e40f9  ldr x8, [x19, #0x38]
0x03D753F0: 000940f9  ldr x0, [x8, #0x10]
0x03D753F4: 08d44439  ldrb w8, [x0, #0x135]
0x03D753F8: 48000037  tbnz w8, #0, #0x3d75400
0x03D753FC: 0885cf97  bl #0x315681c
0x03D75400: 282ed097  bl #0x3180ca0
0x03D75404: 681e40f9  ldr x8, [x19, #0x38]
0x03D75408: fd0300aa  mov x29, x0
0x03D7540C: 010d40f9  ldr x1, [x8, #0x18]
0x03D75410: 0fe61794  bl #0x436ec4c
0x03D75414: b50d00b4  cbz x21, #0x3d755c8
0x03D75418: f40315aa  mov x20, x21
0x03D7541C: 9d0e01f8  str x29, [x20, #0x10]!
0x03D75420: e00314aa  mov x0, x20
0x03D75424: e1031daa  mov x1, x29
0x03D75428: 672dd097  bl #0x31809c4
0x03D7542C: 681e40f9  ldr x8, [x19, #0x38]
0x03D75430: e0031caa  mov x0, x28
0x03D75434: e1031baa  mov x1, x27
0x03D75438: e2031aaa  mov x2, x26
0x03D7543C: 071940f9  ldr x7, [x8, #0x30]
0x03D75440: e30319aa  mov x3, x25
0x03D75444: e403182a  mov w4, w24
0x03D75448: e503172a  mov w5, w23
0x03D7544C: e60316aa  mov x6, x22
0x03D75450: 4dfaff97  bl #0x3d73d84
0x03D75454: 681e40f9  ldr x8, [x19, #0x38]
0x03D75458: f60300aa  mov x22, x0
0x03D7545C: 082540f9  ldr x8, [x8, #0x48]
0x03D75460: 09d54439  ldrb w9, [x8, #0x135]
0x03D75464: 89000037  tbnz w9, #0, #0x3d75474
0x03D75468: e00308aa  mov x0, x8
0x03D7546C: ec84cf97  bl #0x315681c
0x03D75470: e80300aa  mov x8, x0
0x03D75474: e00308aa  mov x0, x8
0x03D75478: 0a2ed097  bl #0x3180ca0
0x03D7547C: 681e40f9  ldr x8, [x19, #0x38]
0x03D75480: e10315aa  mov x1, x21
0x03D75484: f70300aa  mov x23, x0
0x03D75488: 022140f9  ldr x2, [x8, #0x40]
0x03D7548C: 032940f9  ldr x3, [x8, #0x50]
0x03D75490: 51b35694  bl #0x53221d4
0x03D75494: b60900b4  cbz x22, #0x3d755c8
0x03D75498: 681e40f9  ldr x8, [x19, #0x38]
0x03D7549C: 011d40f9  ldr x1, [x8, #0x38]
0x03D754A0: 28d44439  ldrb w8, [x1, #0x135]
0x03D754A4: 88000037  tbnz w8, #0, #0x3d754b4
0x03D754A8: e00301aa  mov x0, x1
0x03D754AC: dc84cf97  bl #0x315681c
0x03D754B0: e10300aa  mov x1, x0
0x03D754B4: c80240f9  ldr x8, [x22]
0x03D754B8: 095d4279  ldrh w9, [x8, #0x12e]
0x03D754BC: 290100b4  cbz x9, #0x3d754e0
0x03D754C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D754C4: 4a210091  add x10, x10, #8
0x03D754C8: 4b815ff8  ldur x11, [x10, #-8]
0x03D754CC: 7f0101eb  cmp x11, x1
0x03D754D0: 00010054  b.eq #0x3d754f0
0x03D754D4: 290500f1  subs x9, x9, #1
0x03D754D8: 4a410091  add x10, x10, #0x10
0x03D754DC: 61ffff54  b.ne #0x3d754c8
0x03D754E0: e00316aa  mov x0, x22
0x03D754E4: e2031f2a  mov w2, wzr
0x03D754E8: 8a85cf97  bl #0x3156b10
0x03D754EC: 04000014  b #0x3d754fc
0x03D754F0: 490180b9  ldrsw x9, [x10]
0x03D754F4: 0811098b  add x8, x8, x9, lsl #4
0x03D754F8: 00e10491  add x0, x8, #0x138
0x03D754FC: 080840a9  ldp x8, x2, [x0]
0x03D75500: e00316aa  mov x0, x22
0x03D75504: e10317aa  mov x1, x23
0x03D75508: 00013fd6  blr x8
0x03D7550C: c8c701d0  adrp x8, #0x766f000
0x03D75510: 082141f9  ldr x8, [x8, #0x240]
0x03D75514: f60300aa  mov x22, x0
0x03D75518: 080140f9  ldr x8, [x8]
0x03D7551C: e00308aa  mov x0, x8
0x03D75520: e02dd097  bl #0x3180ca0
0x03D75524: 681e40f9  ldr x8, [x19, #0x38]
0x03D75528: e10315aa  mov x1, x21
0x03D7552C: e3031faa  mov x3, xzr
0x03D75530: f30300aa  mov x19, x0
0x03D75534: 023140f9  ldr x2, [x8, #0x60]
0x03D75538: 27b35694  bl #0x53221d4
0x03D7553C: 760400b4  cbz x22, #0x3d755c8
0x03D75540: cac701d0  adrp x10, #0x766f000
0x03D75544: c80240f9  ldr x8, [x22]
0x03D75548: 4a2541f9  ldr x10, [x10, #0x248]
0x03D7554C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D75550: 410140f9  ldr x1, [x10]
0x03D75554: 290100b4  cbz x9, #0x3d75578
0x03D75558: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7555C: 4a210091  add x10, x10, #8
0x03D75560: 4b815ff8  ldur x11, [x10, #-8]
0x03D75564: 7f0101eb  cmp x11, x1
0x03D75568: 00010054  b.eq #0x3d75588
0x03D7556C: 290500f1  subs x9, x9, #1
0x03D75570: 4a410091  add x10, x10, #0x10
0x03D75574: 61ffff54  b.ne #0x3d75560
0x03D75578: 22008052  movz w2, #0x1
0x03D7557C: e00316aa  mov x0, x22
0x03D75580: 6485cf97  bl #0x3156b10
0x03D75584: 05000014  b #0x3d75598
0x03D75588: 490140b9  ldr w9, [x10]
0x03D7558C: 29050011  add w9, w9, #1
0x03D75590: 08d1298b  add x8, x8, w9, sxtw #4
0x03D75594: 00e10491  add x0, x8, #0x138
0x03D75598: 080840a9  ldp x8, x2, [x0]
0x03D7559C: e00316aa  mov x0, x22
0x03D755A0: e10313aa  mov x1, x19
0x03D755A4: 00013fd6  blr x8
0x03D755A8: 800240f9  ldr x0, [x20]
0x03D755AC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D755B0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D755B4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D755B8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D755BC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D755C0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D755C4: c0035fd6  ret
0x03D755C8: b92dd097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D755CC | Framework.Core.Services.Backend.Repositories.RepositoryBase$$WebsocketRequest<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__WebsocketRequest___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* topic, System_String_o* action, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, int32_t timeout, int32_t retryCount, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, const MethodInfo_3D755CC* method);
; bytes=764 sha256=5acfb26d801eee7de9c30da56536f5b9acd29e772ed6561a2896139128753374 status=arm64_complete_bound indexed_start=True
0x03D755CC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D755D0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D755D4: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D755D8: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D755DC: f65704a9  stp x22, x21, [sp, #0x40]
0x03D755E0: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D755E4: fd030091  mov x29, sp
0x03D755E8: ffc300d1  sub sp, sp, #0x30
0x03D755EC: a6831ef8  stur x6, [x29, #-0x18]
0x03D755F0: a4173c29  stp w4, w5, [x29, #-0x20]
0x03D755F4: 48d03bd5  mrs x8, tpidr_el0
0x03D755F8: a8831df8  stur x8, [x29, #-0x28]
0x03D755FC: 081540f9  ldr x8, [x8, #0x28]
0x03D75600: f30307aa  mov x19, x7
0x03D75604: fc0303aa  mov x28, x3
0x03D75608: f90302aa  mov x25, x2
0x03D7560C: a8831ff8  stur x8, [x29, #-8]
0x03D75610: a3031ff8  stur x3, [x29, #-0x10]
0x03D75614: e81c40f9  ldr x8, [x7, #0x38]
0x03D75618: fa0301aa  mov x26, x1
0x03D7561C: fb0300aa  mov x27, x0
0x03D75620: 880100b5  cbnz x8, #0x3d75650
0x03D75624: c0c701d0  adrp x0, #0x766f000
0x03D75628: 002041f9  ldr x0, [x0, #0x240]
0x03D7562C: fb2cd097  bl #0x3180a18
0x03D75630: c0c701d0  adrp x0, #0x766f000
0x03D75634: 002441f9  ldr x0, [x0, #0x248]
0x03D75638: f82cd097  bl #0x3180a18
0x03D7563C: 681e40f9  ldr x8, [x19, #0x38]
0x03D75640: 880000b5  cbnz x8, #0x3d75650
0x03D75644: e00313aa  mov x0, x19
0x03D75648: 8c84cf97  bl #0x3156878
0x03D7564C: 681e40f9  ldr x8, [x19, #0x38]
0x03D75650: 091140f9  ldr x9, [x8, #0x20]
0x03D75654: 36fd40b9  ldr w22, [x9, #0xfc]
0x03D75658: e9030091  mov x9, sp
0x03D7565C: ca3e0091  add x10, x22, #0xf
0x03D75660: 4a717c92  and x10, x10, #0x1fffffff0
0x03D75664: 37010acb  sub x23, x9, x10
0x03D75668: ff020091  mov sp, x23
0x03D7566C: 000140f9  ldr x0, [x8]
0x03D75670: 08d44439  ldrb w8, [x0, #0x135]
0x03D75674: 48000037  tbnz w8, #0, #0x3d7567c
0x03D75678: 6984cf97  bl #0x315681c
0x03D7567C: 892dd097  bl #0x3180ca0
0x03D75680: 681e40f9  ldr x8, [x19, #0x38]
0x03D75684: f50300aa  mov x21, x0
0x03D75688: 010540f9  ldr x1, [x8, #8]
0x03D7568C: 280040f9  ldr x8, [x1]
0x03D75690: 00013fd6  blr x8
0x03D75694: 681e40f9  ldr x8, [x19, #0x38]
0x03D75698: 000940f9  ldr x0, [x8, #0x10]
0x03D7569C: 08d44439  ldrb w8, [x0, #0x135]
0x03D756A0: 48000037  tbnz w8, #0, #0x3d756a8
0x03D756A4: 5e84cf97  bl #0x315681c
0x03D756A8: 7e2dd097  bl #0x3180ca0
0x03D756AC: 681e40f9  ldr x8, [x19, #0x38]
0x03D756B0: f80300aa  mov x24, x0
0x03D756B4: 010d40f9  ldr x1, [x8, #0x18]
0x03D756B8: 280040f9  ldr x8, [x1]
0x03D756BC: 00013fd6  blr x8
0x03D756C0: 151000b4  cbz x21, #0x3d758c0
0x03D756C4: f40315aa  mov x20, x21
0x03D756C8: 980e01f8  str x24, [x20, #0x10]!
0x03D756CC: e00314aa  mov x0, x20
0x03D756D0: e10318aa  mov x1, x24
0x03D756D4: bc2cd097  bl #0x31809c4
0x03D756D8: 781e40f9  ldr x24, [x19, #0x38]
0x03D756DC: e00317aa  mov x0, x23
0x03D756E0: e20316aa  mov x2, x22
0x03D756E4: 081340f9  ldr x8, [x24, #0x20]
0x03D756E8: 082940b9  ldr w8, [x8, #0x28]
0x03D756EC: 1f010071  cmp w8, #0
0x03D756F0: a84300d1  sub x8, x29, #0x10
0x03D756F4: 81b3889a  csel x1, x28, x8, lt
0x03D756F8: 9e64d194  bl #0x71ce970
0x03D756FC: 001340f9  ldr x0, [x24, #0x20]
0x03D75700: e10317aa  mov x1, x23
0x03D75704: 242dd097  bl #0x3180b94
0x03D75708: 681e40f9  ldr x8, [x19, #0x38]
0x03D7570C: a4177c29  ldp w4, w5, [x29, #-0x20]
0x03D75710: a6835ef8  ldur x6, [x29, #-0x18]
0x03D75714: e30300aa  mov x3, x0
0x03D75718: 071940f9  ldr x7, [x8, #0x30]
0x03D7571C: e0031baa  mov x0, x27
0x03D75720: e1031aaa  mov x1, x26
0x03D75724: e20319aa  mov x2, x25
0x03D75728: e80040f9  ldr x8, [x7]
0x03D7572C: 00013fd6  blr x8
0x03D75730: 681e40f9  ldr x8, [x19, #0x38]
0x03D75734: f60300aa  mov x22, x0
0x03D75738: 082540f9  ldr x8, [x8, #0x48]
0x03D7573C: 09d54439  ldrb w9, [x8, #0x135]
0x03D75740: 89000037  tbnz w9, #0, #0x3d75750
0x03D75744: e00308aa  mov x0, x8
0x03D75748: 3584cf97  bl #0x315681c
0x03D7574C: e80300aa  mov x8, x0
0x03D75750: e00308aa  mov x0, x8
0x03D75754: 532dd097  bl #0x3180ca0
0x03D75758: 681e40f9  ldr x8, [x19, #0x38]
0x03D7575C: e10315aa  mov x1, x21
0x03D75760: f70300aa  mov x23, x0
0x03D75764: 032940f9  ldr x3, [x8, #0x50]
0x03D75768: 022140f9  ldr x2, [x8, #0x40]
0x03D7576C: 690040f9  ldr x9, [x3]
0x03D75770: 20013fd6  blr x9
0x03D75774: 760a00b4  cbz x22, #0x3d758c0
0x03D75778: 681e40f9  ldr x8, [x19, #0x38]
0x03D7577C: 011d40f9  ldr x1, [x8, #0x38]
0x03D75780: 28d44439  ldrb w8, [x1, #0x135]
0x03D75784: 88000037  tbnz w8, #0, #0x3d75794
0x03D75788: e00301aa  mov x0, x1
0x03D7578C: 2484cf97  bl #0x315681c
0x03D75790: e10300aa  mov x1, x0
0x03D75794: c80240f9  ldr x8, [x22]
0x03D75798: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7579C: 290100b4  cbz x9, #0x3d757c0
0x03D757A0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D757A4: 4a210091  add x10, x10, #8
0x03D757A8: 4b815ff8  ldur x11, [x10, #-8]
0x03D757AC: 7f0101eb  cmp x11, x1
0x03D757B0: 00010054  b.eq #0x3d757d0
0x03D757B4: 290500f1  subs x9, x9, #1
0x03D757B8: 4a410091  add x10, x10, #0x10
0x03D757BC: 61ffff54  b.ne #0x3d757a8
0x03D757C0: e00316aa  mov x0, x22
0x03D757C4: e2031f2a  mov w2, wzr
0x03D757C8: d284cf97  bl #0x3156b10
0x03D757CC: 04000014  b #0x3d757dc
0x03D757D0: 490180b9  ldrsw x9, [x10]
0x03D757D4: 0811098b  add x8, x8, x9, lsl #4
0x03D757D8: 00e10491  add x0, x8, #0x138
0x03D757DC: 080840a9  ldp x8, x2, [x0]
0x03D757E0: e00316aa  mov x0, x22
0x03D757E4: e10317aa  mov x1, x23
0x03D757E8: 00013fd6  blr x8
0x03D757EC: c8c701d0  adrp x8, #0x766f000
0x03D757F0: 082141f9  ldr x8, [x8, #0x240]
0x03D757F4: f60300aa  mov x22, x0
0x03D757F8: 080140f9  ldr x8, [x8]
0x03D757FC: e00308aa  mov x0, x8
0x03D75800: 282dd097  bl #0x3180ca0
0x03D75804: 681e40f9  ldr x8, [x19, #0x38]
0x03D75808: e10315aa  mov x1, x21
0x03D7580C: e3031faa  mov x3, xzr
0x03D75810: f30300aa  mov x19, x0
0x03D75814: 023140f9  ldr x2, [x8, #0x60]
0x03D75818: 6fb25694  bl #0x53221d4
0x03D7581C: 360500b4  cbz x22, #0x3d758c0
0x03D75820: cac701d0  adrp x10, #0x766f000
0x03D75824: c80240f9  ldr x8, [x22]
0x03D75828: 4a2541f9  ldr x10, [x10, #0x248]
0x03D7582C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D75830: 410140f9  ldr x1, [x10]
0x03D75834: 290100b4  cbz x9, #0x3d75858
0x03D75838: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7583C: 4a210091  add x10, x10, #8
0x03D75840: 4b815ff8  ldur x11, [x10, #-8]
0x03D75844: 7f0101eb  cmp x11, x1
0x03D75848: 00010054  b.eq #0x3d75868
0x03D7584C: 290500f1  subs x9, x9, #1
0x03D75850: 4a410091  add x10, x10, #0x10
0x03D75854: 61ffff54  b.ne #0x3d75840
0x03D75858: 22008052  movz w2, #0x1
0x03D7585C: e00316aa  mov x0, x22
0x03D75860: ac84cf97  bl #0x3156b10
0x03D75864: 05000014  b #0x3d75878
0x03D75868: 490140b9  ldr w9, [x10]
0x03D7586C: 29050011  add w9, w9, #1
0x03D75870: 08d1298b  add x8, x8, w9, sxtw #4
0x03D75874: 00e10491  add x0, x8, #0x138
0x03D75878: 080840a9  ldp x8, x2, [x0]
0x03D7587C: e00316aa  mov x0, x22
0x03D75880: e10313aa  mov x1, x19
0x03D75884: 00013fd6  blr x8
0x03D75888: a8835df8  ldur x8, [x29, #-0x28]
0x03D7588C: 800240f9  ldr x0, [x20]
0x03D75890: 081540f9  ldr x8, [x8, #0x28]
0x03D75894: a9835ff8  ldur x9, [x29, #-8]
0x03D75898: 1f0109eb  cmp x8, x9
0x03D7589C: 41010054  b.ne #0x3d758c4
0x03D758A0: bf030091  mov sp, x29
0x03D758A4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D758A8: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D758AC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D758B0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D758B4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D758B8: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D758BC: c0035fd6  ret
0x03D758C0: fb2cd097  bl #0x3180cac
0x03D758C4: 3364d194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D750C0 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$WebsocketRequest<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__WebsocketRequest___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* topic, System_String_o* action, int32_t timeout, int32_t retryCount, const MethodInfo_3D750C0* method);
; bytes=668 sha256=2b8a055835ea39a18d91da36fb622a5a1f04413a4bf640bbb0c5575e071ecd57 status=arm64_complete_bound indexed_start=True
0x03D750C0: ff8301d1  sub sp, sp, #0x60
0x03D750C4: fe6f01a9  stp x30, x27, [sp, #0x10]
0x03D750C8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D750CC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D750D0: f65704a9  stp x22, x21, [sp, #0x40]
0x03D750D4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D750D8: a81c40f9  ldr x8, [x5, #0x38]
0x03D750DC: f30305aa  mov x19, x5
0x03D750E0: f603042a  mov w22, w4
0x03D750E4: fa03032a  mov w26, w3
0x03D750E8: f70302aa  mov x23, x2
0x03D750EC: f80301aa  mov x24, x1
0x03D750F0: f90300aa  mov x25, x0
0x03D750F4: e80100b5  cbnz x8, #0x3d75130
0x03D750F8: c0c701d0  adrp x0, #0x766f000
0x03D750FC: 002041f9  ldr x0, [x0, #0x240]
0x03D75100: 462ed097  bl #0x3180a18
0x03D75104: c0c701d0  adrp x0, #0x766f000
0x03D75108: 002441f9  ldr x0, [x0, #0x248]
0x03D7510C: 432ed097  bl #0x3180a18
0x03D75110: c0c601b0  adrp x0, #0x764e000
0x03D75114: 005843f9  ldr x0, [x0, #0x6b0]
0x03D75118: 402ed097  bl #0x3180a18
0x03D7511C: 681e40f9  ldr x8, [x19, #0x38]
0x03D75120: 880000b5  cbnz x8, #0x3d75130
0x03D75124: e00313aa  mov x0, x19
0x03D75128: d485cf97  bl #0x3156878
0x03D7512C: 681e40f9  ldr x8, [x19, #0x38]
0x03D75130: 000140f9  ldr x0, [x8]
0x03D75134: 08d44439  ldrb w8, [x0, #0x135]
0x03D75138: 48000037  tbnz w8, #0, #0x3d75140
0x03D7513C: b885cf97  bl #0x315681c
0x03D75140: d82ed097  bl #0x3180ca0
0x03D75144: 681e40f9  ldr x8, [x19, #0x38]
0x03D75148: f50300aa  mov x21, x0
0x03D7514C: 010540f9  ldr x1, [x8, #8]
0x03D75150: 280040f9  ldr x8, [x1]
0x03D75154: 00013fd6  blr x8
0x03D75158: 681e40f9  ldr x8, [x19, #0x38]
0x03D7515C: 000940f9  ldr x0, [x8, #0x10]
0x03D75160: 08d44439  ldrb w8, [x0, #0x135]
0x03D75164: 48000037  tbnz w8, #0, #0x3d7516c
0x03D75168: ad85cf97  bl #0x315681c
0x03D7516C: cd2ed097  bl #0x3180ca0
0x03D75170: 681e40f9  ldr x8, [x19, #0x38]
0x03D75174: fb0300aa  mov x27, x0
0x03D75178: 010d40f9  ldr x1, [x8, #0x18]
0x03D7517C: 280040f9  ldr x8, [x1]
0x03D75180: 00013fd6  blr x8
0x03D75184: b50e00b4  cbz x21, #0x3d75358
0x03D75188: f40315aa  mov x20, x21
0x03D7518C: 9b0e01f8  str x27, [x20, #0x10]!
0x03D75190: e00314aa  mov x0, x20
0x03D75194: e1031baa  mov x1, x27
0x03D75198: 0b2ed097  bl #0x31809c4
0x03D7519C: c8c601b0  adrp x8, #0x764e000
0x03D751A0: 085943f9  ldr x8, [x8, #0x6b0]
0x03D751A4: e1330091  add x1, sp, #0xc
0x03D751A8: fa0f00b9  str w26, [sp, #0xc]
0x03D751AC: 000140f9  ldr x0, [x8]
0x03D751B0: 792ed097  bl #0x3180b94
0x03D751B4: 681e40f9  ldr x8, [x19, #0x38]
0x03D751B8: e30300aa  mov x3, x0
0x03D751BC: e00319aa  mov x0, x25
0x03D751C0: e10318aa  mov x1, x24
0x03D751C4: 071140f9  ldr x7, [x8, #0x20]
0x03D751C8: e20317aa  mov x2, x23
0x03D751CC: e403162a  mov w4, w22
0x03D751D0: e5031f2a  mov w5, wzr
0x03D751D4: e80040f9  ldr x8, [x7]
0x03D751D8: e6031faa  mov x6, xzr
0x03D751DC: 00013fd6  blr x8
0x03D751E0: 681e40f9  ldr x8, [x19, #0x38]
0x03D751E4: f60300aa  mov x22, x0
0x03D751E8: 082140f9  ldr x8, [x8, #0x40]
0x03D751EC: 09d54439  ldrb w9, [x8, #0x135]
0x03D751F0: 89000037  tbnz w9, #0, #0x3d75200
0x03D751F4: e00308aa  mov x0, x8
0x03D751F8: 8985cf97  bl #0x315681c
0x03D751FC: e80300aa  mov x8, x0
0x03D75200: e00308aa  mov x0, x8
0x03D75204: a72ed097  bl #0x3180ca0
0x03D75208: 681e40f9  ldr x8, [x19, #0x38]
0x03D7520C: e10315aa  mov x1, x21
0x03D75210: f70300aa  mov x23, x0
0x03D75214: 032540f9  ldr x3, [x8, #0x48]
0x03D75218: 021d40f9  ldr x2, [x8, #0x38]
0x03D7521C: 690040f9  ldr x9, [x3]
0x03D75220: 20013fd6  blr x9
0x03D75224: b60900b4  cbz x22, #0x3d75358
0x03D75228: 681e40f9  ldr x8, [x19, #0x38]
0x03D7522C: 011940f9  ldr x1, [x8, #0x30]
0x03D75230: 28d44439  ldrb w8, [x1, #0x135]
0x03D75234: 88000037  tbnz w8, #0, #0x3d75244
0x03D75238: e00301aa  mov x0, x1
0x03D7523C: 7885cf97  bl #0x315681c
0x03D75240: e10300aa  mov x1, x0
0x03D75244: c80240f9  ldr x8, [x22]
0x03D75248: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7524C: 290100b4  cbz x9, #0x3d75270
0x03D75250: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D75254: 4a210091  add x10, x10, #8
0x03D75258: 4b815ff8  ldur x11, [x10, #-8]
0x03D7525C: 7f0101eb  cmp x11, x1
0x03D75260: 00010054  b.eq #0x3d75280
0x03D75264: 290500f1  subs x9, x9, #1
0x03D75268: 4a410091  add x10, x10, #0x10
0x03D7526C: 61ffff54  b.ne #0x3d75258
0x03D75270: e00316aa  mov x0, x22
0x03D75274: e2031f2a  mov w2, wzr
0x03D75278: 2686cf97  bl #0x3156b10
0x03D7527C: 04000014  b #0x3d7528c
0x03D75280: 490180b9  ldrsw x9, [x10]
0x03D75284: 0811098b  add x8, x8, x9, lsl #4
0x03D75288: 00e10491  add x0, x8, #0x138
0x03D7528C: 080840a9  ldp x8, x2, [x0]
0x03D75290: e00316aa  mov x0, x22
0x03D75294: e10317aa  mov x1, x23
0x03D75298: 00013fd6  blr x8
0x03D7529C: c8c701d0  adrp x8, #0x766f000
0x03D752A0: 082141f9  ldr x8, [x8, #0x240]
0x03D752A4: f60300aa  mov x22, x0
0x03D752A8: 080140f9  ldr x8, [x8]
0x03D752AC: e00308aa  mov x0, x8
0x03D752B0: 7c2ed097  bl #0x3180ca0
0x03D752B4: 681e40f9  ldr x8, [x19, #0x38]
0x03D752B8: e10315aa  mov x1, x21
0x03D752BC: e3031faa  mov x3, xzr
0x03D752C0: f30300aa  mov x19, x0
0x03D752C4: 022d40f9  ldr x2, [x8, #0x58]
0x03D752C8: c3b35694  bl #0x53221d4
0x03D752CC: 760400b4  cbz x22, #0x3d75358
0x03D752D0: cac701d0  adrp x10, #0x766f000
0x03D752D4: c80240f9  ldr x8, [x22]
0x03D752D8: 4a2541f9  ldr x10, [x10, #0x248]
0x03D752DC: 095d4279  ldrh w9, [x8, #0x12e]
0x03D752E0: 410140f9  ldr x1, [x10]
0x03D752E4: 290100b4  cbz x9, #0x3d75308
0x03D752E8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D752EC: 4a210091  add x10, x10, #8
0x03D752F0: 4b815ff8  ldur x11, [x10, #-8]
0x03D752F4: 7f0101eb  cmp x11, x1
0x03D752F8: 00010054  b.eq #0x3d75318
0x03D752FC: 290500f1  subs x9, x9, #1
0x03D75300: 4a410091  add x10, x10, #0x10
0x03D75304: 61ffff54  b.ne #0x3d752f0
0x03D75308: 22008052  movz w2, #0x1
0x03D7530C: e00316aa  mov x0, x22
0x03D75310: 0086cf97  bl #0x3156b10
0x03D75314: 05000014  b #0x3d75328
0x03D75318: 490140b9  ldr w9, [x10]
0x03D7531C: 29050011  add w9, w9, #1
0x03D75320: 08d1298b  add x8, x8, w9, sxtw #4
0x03D75324: 00e10491  add x0, x8, #0x138
0x03D75328: 080840a9  ldp x8, x2, [x0]
0x03D7532C: e00316aa  mov x0, x22
0x03D75330: e10313aa  mov x1, x19
0x03D75334: 00013fd6  blr x8
0x03D75338: 800240f9  ldr x0, [x20]
0x03D7533C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D75340: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D75344: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D75348: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D7534C: fe6f41a9  ldp x30, x27, [sp, #0x10]
0x03D75350: ff830191  add sp, sp, #0x60
0x03D75354: c0035fd6  ret
0x03D75358: 552ed097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7428C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Post<object, object>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Post_object__object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, const MethodInfo_3D7428C* method);
; bytes=660 sha256=2ac9e3e5597a0eb0edf921f139ab20651fa9c7edb1ffe6dd54fcea8271b11402 status=arm64_complete_bound indexed_start=True
0x03D7428C: ff4301d1  sub sp, sp, #0x50
0x03D74290: fe6701a9  stp x30, x25, [sp, #0x10]
0x03D74294: f85f02a9  stp x24, x23, [sp, #0x20]
0x03D74298: f65703a9  stp x22, x21, [sp, #0x30]
0x03D7429C: f44f04a9  stp x20, x19, [sp, #0x40]
0x03D742A0: 881c40f9  ldr x8, [x4, #0x38]
0x03D742A4: f30304aa  mov x19, x4
0x03D742A8: f40303aa  mov x20, x3
0x03D742AC: f60302aa  mov x22, x2
0x03D742B0: f70301aa  mov x23, x1
0x03D742B4: f80300aa  mov x24, x0
0x03D742B8: a80200b5  cbnz x8, #0x3d7430c
0x03D742BC: 20c801f0  adrp x0, #0x767b000
0x03D742C0: 00b040f9  ldr x0, [x0, #0x160]
0x03D742C4: d531d097  bl #0x3180a18
0x03D742C8: c0c701f0  adrp x0, #0x766f000
0x03D742CC: 002041f9  ldr x0, [x0, #0x240]
0x03D742D0: d231d097  bl #0x3180a18
0x03D742D4: c0c701f0  adrp x0, #0x766f000
0x03D742D8: 002441f9  ldr x0, [x0, #0x248]
0x03D742DC: cf31d097  bl #0x3180a18
0x03D742E0: 20c801f0  adrp x0, #0x767b000
0x03D742E4: 00b440f9  ldr x0, [x0, #0x168]
0x03D742E8: cc31d097  bl #0x3180a18
0x03D742EC: 00c701b0  adrp x0, #0x7655000
0x03D742F0: 001840f9  ldr x0, [x0, #0x30]
0x03D742F4: c931d097  bl #0x3180a18
0x03D742F8: 681e40f9  ldr x8, [x19, #0x38]
0x03D742FC: 880000b5  cbnz x8, #0x3d7430c
0x03D74300: e00313aa  mov x0, x19
0x03D74304: 5d89cf97  bl #0x3156878
0x03D74308: 681e40f9  ldr x8, [x19, #0x38]
0x03D7430C: 000140f9  ldr x0, [x8]
0x03D74310: 08d44439  ldrb w8, [x0, #0x135]
0x03D74314: 48000037  tbnz w8, #0, #0x3d7431c
0x03D74318: 4189cf97  bl #0x315681c
0x03D7431C: 6132d097  bl #0x3180ca0
0x03D74320: 681e40f9  ldr x8, [x19, #0x38]
0x03D74324: f50300aa  mov x21, x0
0x03D74328: 010540f9  ldr x1, [x8, #8]
0x03D7432C: 9b583694  bl #0x4b0a598
0x03D74330: 750f00b4  cbz x21, #0x3d7451c
0x03D74334: e00315aa  mov x0, x21
0x03D74338: 180c01f8  str x24, [x0, #0x10]!
0x03D7433C: e10318aa  mov x1, x24
0x03D74340: a131d097  bl #0x31809c4
0x03D74344: e00315aa  mov x0, x21
0x03D74348: 140c02f8  str x20, [x0, #0x20]!
0x03D7434C: e10314aa  mov x1, x20
0x03D74350: 9d31d097  bl #0x31809c4
0x03D74354: 681e40f9  ldr x8, [x19, #0x38]
0x03D74358: 000d40f9  ldr x0, [x8, #0x18]
0x03D7435C: 08d44439  ldrb w8, [x0, #0x135]
0x03D74360: 48000037  tbnz w8, #0, #0x3d74368
0x03D74364: 2e89cf97  bl #0x315681c
0x03D74368: 4e32d097  bl #0x3180ca0
0x03D7436C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74370: f90300aa  mov x25, x0
0x03D74374: 011140f9  ldr x1, [x8, #0x20]
0x03D74378: 35ea1794  bl #0x436ec4c
0x03D7437C: f40315aa  mov x20, x21
0x03D74380: 998e01f8  str x25, [x20, #0x18]!
0x03D74384: e00314aa  mov x0, x20
0x03D74388: e10319aa  mov x1, x25
0x03D7438C: 8e31d097  bl #0x31809c4
0x03D74390: 09c701b0  adrp x9, #0x7655000
0x03D74394: 681e40f9  ldr x8, [x19, #0x38]
0x03D74398: 291940f9  ldr x9, [x9, #0x30]
0x03D7439C: 23008052  movz w3, #0x1
0x03D743A0: e00318aa  mov x0, x24
0x03D743A4: 081940f9  ldr x8, [x8, #0x30]
0x03D743A8: 240140f9  ldr x4, [x9]
0x03D743AC: e10317aa  mov x1, x23
0x03D743B0: e20316aa  mov x2, x22
0x03D743B4: e5031faa  mov x5, xzr
0x03D743B8: e6031faa  mov x6, xzr
0x03D743BC: e7031faa  mov x7, xzr
0x03D743C0: e80700f9  str x8, [sp, #8]
0x03D743C4: ff030039  strb wzr, [sp]
0x03D743C8: c3fcff97  bl #0x3d736d4
0x03D743CC: 28c801f0  adrp x8, #0x767b000
0x03D743D0: 08b140f9  ldr x8, [x8, #0x160]
0x03D743D4: f60300aa  mov x22, x0
0x03D743D8: 080140f9  ldr x8, [x8]
0x03D743DC: e00308aa  mov x0, x8
0x03D743E0: 3032d097  bl #0x3180ca0
0x03D743E4: 681e40f9  ldr x8, [x19, #0x38]
0x03D743E8: e10315aa  mov x1, x21
0x03D743EC: e3031faa  mov x3, xzr
0x03D743F0: f70300aa  mov x23, x0
0x03D743F4: 021d40f9  ldr x2, [x8, #0x38]
0x03D743F8: 77b75694  bl #0x53221d4
0x03D743FC: 160900b4  cbz x22, #0x3d7451c
0x03D74400: 2ac801f0  adrp x10, #0x767b000
0x03D74404: c80240f9  ldr x8, [x22]
0x03D74408: 4ab540f9  ldr x10, [x10, #0x168]
0x03D7440C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74410: 410140f9  ldr x1, [x10]
0x03D74414: 290100b4  cbz x9, #0x3d74438
0x03D74418: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7441C: 4a210091  add x10, x10, #8
0x03D74420: 4b815ff8  ldur x11, [x10, #-8]
0x03D74424: 7f0101eb  cmp x11, x1
0x03D74428: 00010054  b.eq #0x3d74448
0x03D7442C: 290500f1  subs x9, x9, #1
0x03D74430: 4a410091  add x10, x10, #0x10
0x03D74434: 61ffff54  b.ne #0x3d74420
0x03D74438: e00316aa  mov x0, x22
0x03D7443C: e2031f2a  mov w2, wzr
0x03D74440: b489cf97  bl #0x3156b10
0x03D74444: 04000014  b #0x3d74454
0x03D74448: 490180b9  ldrsw x9, [x10]
0x03D7444C: 0811098b  add x8, x8, x9, lsl #4
0x03D74450: 00e10491  add x0, x8, #0x138
0x03D74454: 080840a9  ldp x8, x2, [x0]
0x03D74458: e00316aa  mov x0, x22
0x03D7445C: e10317aa  mov x1, x23
0x03D74460: 00013fd6  blr x8
0x03D74464: c8c701f0  adrp x8, #0x766f000
0x03D74468: 082141f9  ldr x8, [x8, #0x240]
0x03D7446C: f60300aa  mov x22, x0
0x03D74470: 080140f9  ldr x8, [x8]
0x03D74474: e00308aa  mov x0, x8
0x03D74478: 0a32d097  bl #0x3180ca0
0x03D7447C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74480: e10315aa  mov x1, x21
0x03D74484: e3031faa  mov x3, xzr
0x03D74488: f30300aa  mov x19, x0
0x03D7448C: 022140f9  ldr x2, [x8, #0x40]
0x03D74490: 51b75694  bl #0x53221d4
0x03D74494: 560400b4  cbz x22, #0x3d7451c
0x03D74498: cac701f0  adrp x10, #0x766f000
0x03D7449C: c80240f9  ldr x8, [x22]
0x03D744A0: 4a2541f9  ldr x10, [x10, #0x248]
0x03D744A4: 095d4279  ldrh w9, [x8, #0x12e]
0x03D744A8: 410140f9  ldr x1, [x10]
0x03D744AC: 290100b4  cbz x9, #0x3d744d0
0x03D744B0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D744B4: 4a210091  add x10, x10, #8
0x03D744B8: 4b815ff8  ldur x11, [x10, #-8]
0x03D744BC: 7f0101eb  cmp x11, x1
0x03D744C0: 00010054  b.eq #0x3d744e0
0x03D744C4: 290500f1  subs x9, x9, #1
0x03D744C8: 4a410091  add x10, x10, #0x10
0x03D744CC: 61ffff54  b.ne #0x3d744b8
0x03D744D0: 22008052  movz w2, #0x1
0x03D744D4: e00316aa  mov x0, x22
0x03D744D8: 8e89cf97  bl #0x3156b10
0x03D744DC: 05000014  b #0x3d744f0
0x03D744E0: 490140b9  ldr w9, [x10]
0x03D744E4: 29050011  add w9, w9, #1
0x03D744E8: 08d1298b  add x8, x8, w9, sxtw #4
0x03D744EC: 00e10491  add x0, x8, #0x138
0x03D744F0: 080840a9  ldp x8, x2, [x0]
0x03D744F4: e00316aa  mov x0, x22
0x03D744F8: e10313aa  mov x1, x19
0x03D744FC: 00013fd6  blr x8
0x03D74500: 800240f9  ldr x0, [x20]
0x03D74504: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03D74508: f65743a9  ldp x22, x21, [sp, #0x30]
0x03D7450C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03D74510: fe6741a9  ldp x30, x25, [sp, #0x10]
0x03D74514: ff430191  add sp, sp, #0x50
0x03D74518: c0035fd6  ret
0x03D7451C: e431d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D74520 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Post<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Post___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, const MethodInfo_3D74520* method);
; bytes=812 sha256=41173f64b63ea115e593ebed8d431005bb7bd7747f5d8581f7986c06280e6b70 status=arm64_complete_bound indexed_start=True
0x03D74520: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D74524: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D74528: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D7452C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D74530: f65704a9  stp x22, x21, [sp, #0x40]
0x03D74534: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D74538: fd030091  mov x29, sp
0x03D7453C: ff8301d1  sub sp, sp, #0x60
0x03D74540: 5cd03bd5  mrs x28, tpidr_el0
0x03D74544: 881740f9  ldr x8, [x28, #0x28]
0x03D74548: f30304aa  mov x19, x4
0x03D7454C: f40303aa  mov x20, x3
0x03D74550: f80302aa  mov x24, x2
0x03D74554: a8831ff8  stur x8, [x29, #-8]
0x03D74558: a2031af8  stur x2, [x29, #-0x60]
0x03D7455C: 881c40f9  ldr x8, [x4, #0x38]
0x03D74560: f70301aa  mov x23, x1
0x03D74564: f60300aa  mov x22, x0
0x03D74568: a80200b5  cbnz x8, #0x3d745bc
0x03D7456C: 20c801f0  adrp x0, #0x767b000
0x03D74570: 00b040f9  ldr x0, [x0, #0x160]
0x03D74574: 2931d097  bl #0x3180a18
0x03D74578: c0c701f0  adrp x0, #0x766f000
0x03D7457C: 002041f9  ldr x0, [x0, #0x240]
0x03D74580: 2631d097  bl #0x3180a18
0x03D74584: c0c701f0  adrp x0, #0x766f000
0x03D74588: 002441f9  ldr x0, [x0, #0x248]
0x03D7458C: 2331d097  bl #0x3180a18
0x03D74590: 20c801f0  adrp x0, #0x767b000
0x03D74594: 00b440f9  ldr x0, [x0, #0x168]
0x03D74598: 2031d097  bl #0x3180a18
0x03D7459C: 00c701b0  adrp x0, #0x7655000
0x03D745A0: 001840f9  ldr x0, [x0, #0x30]
0x03D745A4: 1d31d097  bl #0x3180a18
0x03D745A8: 681e40f9  ldr x8, [x19, #0x38]
0x03D745AC: 880000b5  cbnz x8, #0x3d745bc
0x03D745B0: e00313aa  mov x0, x19
0x03D745B4: b188cf97  bl #0x3156878
0x03D745B8: 681e40f9  ldr x8, [x19, #0x38]
0x03D745BC: 091540f9  ldr x9, [x8, #0x28]
0x03D745C0: 3afd40b9  ldr w26, [x9, #0xfc]
0x03D745C4: e9030091  mov x9, sp
0x03D745C8: 4a3f0091  add x10, x26, #0xf
0x03D745CC: 4a717c92  and x10, x10, #0x1fffffff0
0x03D745D0: 39010acb  sub x25, x9, x10
0x03D745D4: 3f030091  mov sp, x25
0x03D745D8: 000140f9  ldr x0, [x8]
0x03D745DC: 08d44439  ldrb w8, [x0, #0x135]
0x03D745E0: 48000037  tbnz w8, #0, #0x3d745e8
0x03D745E4: 8e88cf97  bl #0x315681c
0x03D745E8: ae31d097  bl #0x3180ca0
0x03D745EC: 681e40f9  ldr x8, [x19, #0x38]
0x03D745F0: f50300aa  mov x21, x0
0x03D745F4: 010540f9  ldr x1, [x8, #8]
0x03D745F8: 280040f9  ldr x8, [x1]
0x03D745FC: 00013fd6  blr x8
0x03D74600: 351200b4  cbz x21, #0x3d74844
0x03D74604: e00315aa  mov x0, x21
0x03D74608: 160c01f8  str x22, [x0, #0x10]!
0x03D7460C: e10316aa  mov x1, x22
0x03D74610: ed30d097  bl #0x31809c4
0x03D74614: e00315aa  mov x0, x21
0x03D74618: 140c02f8  str x20, [x0, #0x20]!
0x03D7461C: e10314aa  mov x1, x20
0x03D74620: e930d097  bl #0x31809c4
0x03D74624: 681e40f9  ldr x8, [x19, #0x38]
0x03D74628: 000d40f9  ldr x0, [x8, #0x18]
0x03D7462C: 08d44439  ldrb w8, [x0, #0x135]
0x03D74630: 48000037  tbnz w8, #0, #0x3d74638
0x03D74634: 7a88cf97  bl #0x315681c
0x03D74638: 9a31d097  bl #0x3180ca0
0x03D7463C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74640: fb0300aa  mov x27, x0
0x03D74644: 011140f9  ldr x1, [x8, #0x20]
0x03D74648: 280040f9  ldr x8, [x1]
0x03D7464C: 00013fd6  blr x8
0x03D74650: f40315aa  mov x20, x21
0x03D74654: 9b8e01f8  str x27, [x20, #0x18]!
0x03D74658: e00314aa  mov x0, x20
0x03D7465C: e1031baa  mov x1, x27
0x03D74660: d930d097  bl #0x31809c4
0x03D74664: 7b1e40f9  ldr x27, [x19, #0x38]
0x03D74668: e00319aa  mov x0, x25
0x03D7466C: e2031aaa  mov x2, x26
0x03D74670: 681740f9  ldr x8, [x27, #0x28]
0x03D74674: 082940b9  ldr w8, [x8, #0x28]
0x03D74678: 1f010071  cmp w8, #0
0x03D7467C: a88301d1  sub x8, x29, #0x60
0x03D74680: 01b3889a  csel x1, x24, x8, lt
0x03D74684: bb68d194  bl #0x71ce970
0x03D74688: 688742a9  ldp x8, x1, [x27, #0x28]
0x03D7468C: 082940b9  ldr w8, [x8, #0x28]
0x03D74690: 200040f9  ldr x0, [x1]
0x03D74694: 4800f837  tbnz w8, #0x1f, #0x3d7469c
0x03D74698: 390340f9  ldr x25, [x25]
0x03D7469C: 08c701b0  adrp x8, #0x7655000
0x03D746A0: 081940f9  ldr x8, [x8, #0x30]
0x03D746A4: 29008052  movz w9, #0x1
0x03D746A8: aa3300d1  sub x10, x29, #0xc
0x03D746AC: ab4300d1  sub x11, x29, #0x10
0x03D746B0: 080140f9  ldr x8, [x8]
0x03D746B4: bf031f38  sturb wzr, [x29, #-0x10]
0x03D746B8: b7e73aa9  stp x23, x25, [x29, #-0x58]
0x03D746BC: bfff3ca9  stp xzr, xzr, [x29, #-0x38]
0x03D746C0: a9431f38  sturb w9, [x29, #-0xc]
0x03D746C4: aaa33ba9  stp x10, x8, [x29, #-0x48]
0x03D746C8: bfaf3da9  stp xzr, x11, [x29, #-0x28]
0x03D746CC: 280840f9  ldr x8, [x1, #0x10]
0x03D746D0: a36301d1  sub x3, x29, #0x58
0x03D746D4: a46300d1  sub x4, x29, #0x18
0x03D746D8: e20316aa  mov x2, x22
0x03D746DC: 00013fd6  blr x8
0x03D746E0: 28c801f0  adrp x8, #0x767b000
0x03D746E4: b6835ef8  ldur x22, [x29, #-0x18]
0x03D746E8: 08b140f9  ldr x8, [x8, #0x160]
0x03D746EC: 000140f9  ldr x0, [x8]
0x03D746F0: 6c31d097  bl #0x3180ca0
0x03D746F4: 681e40f9  ldr x8, [x19, #0x38]
0x03D746F8: e10315aa  mov x1, x21
0x03D746FC: e3031faa  mov x3, xzr
0x03D74700: f70300aa  mov x23, x0
0x03D74704: 021d40f9  ldr x2, [x8, #0x38]
0x03D74708: b3b65694  bl #0x53221d4
0x03D7470C: d60900b4  cbz x22, #0x3d74844
0x03D74710: 2ac801f0  adrp x10, #0x767b000
0x03D74714: c80240f9  ldr x8, [x22]
0x03D74718: 4ab540f9  ldr x10, [x10, #0x168]
0x03D7471C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74720: 410140f9  ldr x1, [x10]
0x03D74724: 290100b4  cbz x9, #0x3d74748
0x03D74728: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7472C: 4a210091  add x10, x10, #8
0x03D74730: 4b815ff8  ldur x11, [x10, #-8]
0x03D74734: 7f0101eb  cmp x11, x1
0x03D74738: 00010054  b.eq #0x3d74758
0x03D7473C: 290500f1  subs x9, x9, #1
0x03D74740: 4a410091  add x10, x10, #0x10
0x03D74744: 61ffff54  b.ne #0x3d74730
0x03D74748: e00316aa  mov x0, x22
0x03D7474C: e2031f2a  mov w2, wzr
0x03D74750: f088cf97  bl #0x3156b10
0x03D74754: 04000014  b #0x3d74764
0x03D74758: 490180b9  ldrsw x9, [x10]
0x03D7475C: 0811098b  add x8, x8, x9, lsl #4
0x03D74760: 00e10491  add x0, x8, #0x138
0x03D74764: 080840a9  ldp x8, x2, [x0]
0x03D74768: e00316aa  mov x0, x22
0x03D7476C: e10317aa  mov x1, x23
0x03D74770: 00013fd6  blr x8
0x03D74774: c8c701f0  adrp x8, #0x766f000
0x03D74778: 082141f9  ldr x8, [x8, #0x240]
0x03D7477C: f60300aa  mov x22, x0
0x03D74780: 080140f9  ldr x8, [x8]
0x03D74784: e00308aa  mov x0, x8
0x03D74788: 4631d097  bl #0x3180ca0
0x03D7478C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74790: e10315aa  mov x1, x21
0x03D74794: e3031faa  mov x3, xzr
0x03D74798: f30300aa  mov x19, x0
0x03D7479C: 022140f9  ldr x2, [x8, #0x40]
0x03D747A0: 8db65694  bl #0x53221d4
0x03D747A4: 160500b4  cbz x22, #0x3d74844
0x03D747A8: cac701f0  adrp x10, #0x766f000
0x03D747AC: c80240f9  ldr x8, [x22]
0x03D747B0: 4a2541f9  ldr x10, [x10, #0x248]
0x03D747B4: 095d4279  ldrh w9, [x8, #0x12e]
0x03D747B8: 410140f9  ldr x1, [x10]
0x03D747BC: 290100b4  cbz x9, #0x3d747e0
0x03D747C0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D747C4: 4a210091  add x10, x10, #8
0x03D747C8: 4b815ff8  ldur x11, [x10, #-8]
0x03D747CC: 7f0101eb  cmp x11, x1
0x03D747D0: 00010054  b.eq #0x3d747f0
0x03D747D4: 290500f1  subs x9, x9, #1
0x03D747D8: 4a410091  add x10, x10, #0x10
0x03D747DC: 61ffff54  b.ne #0x3d747c8
0x03D747E0: 22008052  movz w2, #0x1
0x03D747E4: e00316aa  mov x0, x22
0x03D747E8: ca88cf97  bl #0x3156b10
0x03D747EC: 05000014  b #0x3d74800
0x03D747F0: 490140b9  ldr w9, [x10]
0x03D747F4: 29050011  add w9, w9, #1
0x03D747F8: 08d1298b  add x8, x8, w9, sxtw #4
0x03D747FC: 00e10491  add x0, x8, #0x138
0x03D74800: 080840a9  ldp x8, x2, [x0]
0x03D74804: e00316aa  mov x0, x22
0x03D74808: e10313aa  mov x1, x19
0x03D7480C: 00013fd6  blr x8
0x03D74810: 800240f9  ldr x0, [x20]
0x03D74814: 881740f9  ldr x8, [x28, #0x28]
0x03D74818: a9835ff8  ldur x9, [x29, #-8]
0x03D7481C: 1f0109eb  cmp x8, x9
0x03D74820: 41010054  b.ne #0x3d74848
0x03D74824: bf030091  mov sp, x29
0x03D74828: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D7482C: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D74830: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D74834: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D74838: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D7483C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D74840: c0035fd6  ret
0x03D74844: 1a31d097  bl #0x3180cac
0x03D74848: 5268d194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D72A98 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Delete<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Delete___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, const MethodInfo_3D72A98* method);
; bytes=772 sha256=8c5d41c9bea0ee590092f392d65ae3ae794616ee21272941cbc8d2795f673f5a status=arm64_complete_bound indexed_start=True
0x03D72A98: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D72A9C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D72AA0: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D72AA4: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D72AA8: f65704a9  stp x22, x21, [sp, #0x40]
0x03D72AAC: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D72AB0: fd030091  mov x29, sp
0x03D72AB4: ff8301d1  sub sp, sp, #0x60
0x03D72AB8: 5cd03bd5  mrs x28, tpidr_el0
0x03D72ABC: 881740f9  ldr x8, [x28, #0x28]
0x03D72AC0: f30303aa  mov x19, x3
0x03D72AC4: f80302aa  mov x24, x2
0x03D72AC8: f70301aa  mov x23, x1
0x03D72ACC: a8831ff8  stur x8, [x29, #-8]
0x03D72AD0: a2831af8  stur x2, [x29, #-0x58]
0x03D72AD4: 681c40f9  ldr x8, [x3, #0x38]
0x03D72AD8: f60300aa  mov x22, x0
0x03D72ADC: 080300b5  cbnz x8, #0x3d72b3c
0x03D72AE0: 40c801b0  adrp x0, #0x767b000
0x03D72AE4: 00b040f9  ldr x0, [x0, #0x160]
0x03D72AE8: cc37d097  bl #0x3180a18
0x03D72AEC: e0c701b0  adrp x0, #0x766f000
0x03D72AF0: 002041f9  ldr x0, [x0, #0x240]
0x03D72AF4: c937d097  bl #0x3180a18
0x03D72AF8: e0c701b0  adrp x0, #0x766f000
0x03D72AFC: 002441f9  ldr x0, [x0, #0x248]
0x03D72B00: c637d097  bl #0x3180a18
0x03D72B04: 40c801b0  adrp x0, #0x767b000
0x03D72B08: 00b440f9  ldr x0, [x0, #0x168]
0x03D72B0C: c337d097  bl #0x3180a18
0x03D72B10: e0c701b0  adrp x0, #0x766f000
0x03D72B14: 007044f9  ldr x0, [x0, #0x8e0]
0x03D72B18: c037d097  bl #0x3180a18
0x03D72B1C: 00c701f0  adrp x0, #0x7655000
0x03D72B20: 001840f9  ldr x0, [x0, #0x30]
0x03D72B24: bd37d097  bl #0x3180a18
0x03D72B28: 681e40f9  ldr x8, [x19, #0x38]
0x03D72B2C: 880000b5  cbnz x8, #0x3d72b3c
0x03D72B30: e00313aa  mov x0, x19
0x03D72B34: 518fcf97  bl #0x3156878
0x03D72B38: 681e40f9  ldr x8, [x19, #0x38]
0x03D72B3C: 090940f9  ldr x9, [x8, #0x10]
0x03D72B40: 3afd40b9  ldr w26, [x9, #0xfc]
0x03D72B44: e9030091  mov x9, sp
0x03D72B48: 4a3f0091  add x10, x26, #0xf
0x03D72B4C: 4a717c92  and x10, x10, #0x1fffffff0
0x03D72B50: 39010acb  sub x25, x9, x10
0x03D72B54: 3f030091  mov sp, x25
0x03D72B58: 000140f9  ldr x0, [x8]
0x03D72B5C: 08d44439  ldrb w8, [x0, #0x135]
0x03D72B60: 48000037  tbnz w8, #0, #0x3d72b68
0x03D72B64: 2e8fcf97  bl #0x315681c
0x03D72B68: 4e38d097  bl #0x3180ca0
0x03D72B6C: 681e40f9  ldr x8, [x19, #0x38]
0x03D72B70: f50300aa  mov x21, x0
0x03D72B74: 010540f9  ldr x1, [x8, #8]
0x03D72B78: 280040f9  ldr x8, [x1]
0x03D72B7C: 00013fd6  blr x8
0x03D72B80: e8c701b0  adrp x8, #0x766f000
0x03D72B84: 087144f9  ldr x8, [x8, #0x8e0]
0x03D72B88: 000140f9  ldr x0, [x8]
0x03D72B8C: 4538d097  bl #0x3180ca0
0x03D72B90: e1031faa  mov x1, xzr
0x03D72B94: fb0300aa  mov x27, x0
0x03D72B98: 49397194  bl #0x59c10bc
0x03D72B9C: d50f00b4  cbz x21, #0x3d72d94
0x03D72BA0: f40315aa  mov x20, x21
0x03D72BA4: 9b0e01f8  str x27, [x20, #0x10]!
0x03D72BA8: e00314aa  mov x0, x20
0x03D72BAC: e1031baa  mov x1, x27
0x03D72BB0: 8537d097  bl #0x31809c4
0x03D72BB4: 7b1e40f9  ldr x27, [x19, #0x38]
0x03D72BB8: e00319aa  mov x0, x25
0x03D72BBC: e2031aaa  mov x2, x26
0x03D72BC0: 680b40f9  ldr x8, [x27, #0x10]
0x03D72BC4: 082940b9  ldr w8, [x8, #0x28]
0x03D72BC8: 1f010071  cmp w8, #0
0x03D72BCC: a86301d1  sub x8, x29, #0x58
0x03D72BD0: 01b3889a  csel x1, x24, x8, lt
0x03D72BD4: 676fd194  bl #0x71ce970
0x03D72BD8: 680741a9  ldp x8, x1, [x27, #0x10]
0x03D72BDC: 082940b9  ldr w8, [x8, #0x28]
0x03D72BE0: 200040f9  ldr x0, [x1]
0x03D72BE4: 4800f837  tbnz w8, #0x1f, #0x3d72bec
0x03D72BE8: 390340f9  ldr x25, [x25]
0x03D72BEC: 08c701f0  adrp x8, #0x7655000
0x03D72BF0: 081940f9  ldr x8, [x8, #0x30]
0x03D72BF4: 29008052  movz w9, #0x1
0x03D72BF8: aa3300d1  sub x10, x29, #0xc
0x03D72BFC: ab4300d1  sub x11, x29, #0x10
0x03D72C00: 080140f9  ldr x8, [x8]
0x03D72C04: bf031f38  sturb wzr, [x29, #-0x10]
0x03D72C08: b7673ba9  stp x23, x25, [x29, #-0x50]
0x03D72C0C: a9431f38  sturb w9, [x29, #-0xc]
0x03D72C10: bf2f3da9  stp xzr, x11, [x29, #-0x30]
0x03D72C14: aa233ca9  stp x10, x8, [x29, #-0x40]
0x03D72C18: bf031ef8  stur xzr, [x29, #-0x20]
0x03D72C1C: 280840f9  ldr x8, [x1, #0x10]
0x03D72C20: a34301d1  sub x3, x29, #0x50
0x03D72C24: a46300d1  sub x4, x29, #0x18
0x03D72C28: e20316aa  mov x2, x22
0x03D72C2C: 00013fd6  blr x8
0x03D72C30: 48c801b0  adrp x8, #0x767b000
0x03D72C34: b6835ef8  ldur x22, [x29, #-0x18]
0x03D72C38: 08b140f9  ldr x8, [x8, #0x160]
0x03D72C3C: 000140f9  ldr x0, [x8]
0x03D72C40: 1838d097  bl #0x3180ca0
0x03D72C44: 681e40f9  ldr x8, [x19, #0x38]
0x03D72C48: e10315aa  mov x1, x21
0x03D72C4C: e3031faa  mov x3, xzr
0x03D72C50: f70300aa  mov x23, x0
0x03D72C54: 021140f9  ldr x2, [x8, #0x20]
0x03D72C58: 5fbd5694  bl #0x53221d4
0x03D72C5C: d60900b4  cbz x22, #0x3d72d94
0x03D72C60: 4ac801b0  adrp x10, #0x767b000
0x03D72C64: c80240f9  ldr x8, [x22]
0x03D72C68: 4ab540f9  ldr x10, [x10, #0x168]
0x03D72C6C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72C70: 410140f9  ldr x1, [x10]
0x03D72C74: 290100b4  cbz x9, #0x3d72c98
0x03D72C78: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72C7C: 4a210091  add x10, x10, #8
0x03D72C80: 4b815ff8  ldur x11, [x10, #-8]
0x03D72C84: 7f0101eb  cmp x11, x1
0x03D72C88: 00010054  b.eq #0x3d72ca8
0x03D72C8C: 290500f1  subs x9, x9, #1
0x03D72C90: 4a410091  add x10, x10, #0x10
0x03D72C94: 61ffff54  b.ne #0x3d72c80
0x03D72C98: e00316aa  mov x0, x22
0x03D72C9C: e2031f2a  mov w2, wzr
0x03D72CA0: 9c8fcf97  bl #0x3156b10
0x03D72CA4: 04000014  b #0x3d72cb4
0x03D72CA8: 490180b9  ldrsw x9, [x10]
0x03D72CAC: 0811098b  add x8, x8, x9, lsl #4
0x03D72CB0: 00e10491  add x0, x8, #0x138
0x03D72CB4: 080840a9  ldp x8, x2, [x0]
0x03D72CB8: e00316aa  mov x0, x22
0x03D72CBC: e10317aa  mov x1, x23
0x03D72CC0: 00013fd6  blr x8
0x03D72CC4: e8c701b0  adrp x8, #0x766f000
0x03D72CC8: 082141f9  ldr x8, [x8, #0x240]
0x03D72CCC: f60300aa  mov x22, x0
0x03D72CD0: 080140f9  ldr x8, [x8]
0x03D72CD4: e00308aa  mov x0, x8
0x03D72CD8: f237d097  bl #0x3180ca0
0x03D72CDC: 681e40f9  ldr x8, [x19, #0x38]
0x03D72CE0: e10315aa  mov x1, x21
0x03D72CE4: e3031faa  mov x3, xzr
0x03D72CE8: f30300aa  mov x19, x0
0x03D72CEC: 021540f9  ldr x2, [x8, #0x28]
0x03D72CF0: 39bd5694  bl #0x53221d4
0x03D72CF4: 160500b4  cbz x22, #0x3d72d94
0x03D72CF8: eac701b0  adrp x10, #0x766f000
0x03D72CFC: c80240f9  ldr x8, [x22]
0x03D72D00: 4a2541f9  ldr x10, [x10, #0x248]
0x03D72D04: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72D08: 410140f9  ldr x1, [x10]
0x03D72D0C: 290100b4  cbz x9, #0x3d72d30
0x03D72D10: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72D14: 4a210091  add x10, x10, #8
0x03D72D18: 4b815ff8  ldur x11, [x10, #-8]
0x03D72D1C: 7f0101eb  cmp x11, x1
0x03D72D20: 00010054  b.eq #0x3d72d40
0x03D72D24: 290500f1  subs x9, x9, #1
0x03D72D28: 4a410091  add x10, x10, #0x10
0x03D72D2C: 61ffff54  b.ne #0x3d72d18
0x03D72D30: 22008052  movz w2, #0x1
0x03D72D34: e00316aa  mov x0, x22
0x03D72D38: 768fcf97  bl #0x3156b10
0x03D72D3C: 05000014  b #0x3d72d50
0x03D72D40: 490140b9  ldr w9, [x10]
0x03D72D44: 29050011  add w9, w9, #1
0x03D72D48: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72D4C: 00e10491  add x0, x8, #0x138
0x03D72D50: 080840a9  ldp x8, x2, [x0]
0x03D72D54: e00316aa  mov x0, x22
0x03D72D58: e10313aa  mov x1, x19
0x03D72D5C: 00013fd6  blr x8
0x03D72D60: 800240f9  ldr x0, [x20]
0x03D72D64: 881740f9  ldr x8, [x28, #0x28]
0x03D72D68: a9835ff8  ldur x9, [x29, #-8]
0x03D72D6C: 1f0109eb  cmp x8, x9
0x03D72D70: 41010054  b.ne #0x3d72d98
0x03D72D74: bf030091  mov sp, x29
0x03D72D78: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D72D7C: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D72D80: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D72D84: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D72D88: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D72D8C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D72D90: c0035fd6  ret
0x03D72D94: c637d097  bl #0x3180cac
0x03D72D98: fe6ed194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D72D9C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Get<object>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Get_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, bool reportParsingMetric, const MethodInfo_3D72D9C* method);
; bytes=660 sha256=e10dd6881793e5a01129b42f7e325c81250f6d9dabe604f882f9f890fb6968e9 status=arm64_complete_bound indexed_start=True
0x03D72D9C: fe0f1bf8  str x30, [sp, #-0x50]!
0x03D72DA0: fa6701a9  stp x26, x25, [sp, #0x10]
0x03D72DA4: f85f02a9  stp x24, x23, [sp, #0x20]
0x03D72DA8: f65703a9  stp x22, x21, [sp, #0x30]
0x03D72DAC: f44f04a9  stp x20, x19, [sp, #0x40]
0x03D72DB0: a81c40f9  ldr x8, [x5, #0x38]
0x03D72DB4: f30305aa  mov x19, x5
0x03D72DB8: f903042a  mov w25, w4
0x03D72DBC: f60303aa  mov x22, x3
0x03D72DC0: f40302aa  mov x20, x2
0x03D72DC4: f70301aa  mov x23, x1
0x03D72DC8: f80300aa  mov x24, x0
0x03D72DCC: a80200b5  cbnz x8, #0x3d72e20
0x03D72DD0: 40c801b0  adrp x0, #0x767b000
0x03D72DD4: 00b040f9  ldr x0, [x0, #0x160]
0x03D72DD8: 1037d097  bl #0x3180a18
0x03D72DDC: e0c701b0  adrp x0, #0x766f000
0x03D72DE0: 002041f9  ldr x0, [x0, #0x240]
0x03D72DE4: 0d37d097  bl #0x3180a18
0x03D72DE8: e0c701b0  adrp x0, #0x766f000
0x03D72DEC: 002441f9  ldr x0, [x0, #0x248]
0x03D72DF0: 0a37d097  bl #0x3180a18
0x03D72DF4: 40c801b0  adrp x0, #0x767b000
0x03D72DF8: 00b440f9  ldr x0, [x0, #0x168]
0x03D72DFC: 0737d097  bl #0x3180a18
0x03D72E00: 00c701f0  adrp x0, #0x7655000
0x03D72E04: 001840f9  ldr x0, [x0, #0x30]
0x03D72E08: 0437d097  bl #0x3180a18
0x03D72E0C: 681e40f9  ldr x8, [x19, #0x38]
0x03D72E10: 880000b5  cbnz x8, #0x3d72e20
0x03D72E14: e00313aa  mov x0, x19
0x03D72E18: 988ecf97  bl #0x3156878
0x03D72E1C: 681e40f9  ldr x8, [x19, #0x38]
0x03D72E20: 000140f9  ldr x0, [x8]
0x03D72E24: 08d44439  ldrb w8, [x0, #0x135]
0x03D72E28: 48000037  tbnz w8, #0, #0x3d72e30
0x03D72E2C: 7c8ecf97  bl #0x315681c
0x03D72E30: 9c37d097  bl #0x3180ca0
0x03D72E34: 681e40f9  ldr x8, [x19, #0x38]
0x03D72E38: f50300aa  mov x21, x0
0x03D72E3C: 010540f9  ldr x1, [x8, #8]
0x03D72E40: 8d613694  bl #0x4b0b474
0x03D72E44: 550f00b4  cbz x21, #0x3d7302c
0x03D72E48: e00315aa  mov x0, x21
0x03D72E4C: 180c01f8  str x24, [x0, #0x10]!
0x03D72E50: e10318aa  mov x1, x24
0x03D72E54: 3a030012  and w26, w25, #1
0x03D72E58: db36d097  bl #0x31809c4
0x03D72E5C: f90315aa  mov x25, x21
0x03D72E60: 340f02f8  str x20, [x25, #0x20]!
0x03D72E64: e00319aa  mov x0, x25
0x03D72E68: e10314aa  mov x1, x20
0x03D72E6C: d636d097  bl #0x31809c4
0x03D72E70: 3a230039  strb w26, [x25, #8]
0x03D72E74: 681e40f9  ldr x8, [x19, #0x38]
0x03D72E78: 000d40f9  ldr x0, [x8, #0x18]
0x03D72E7C: 08d44439  ldrb w8, [x0, #0x135]
0x03D72E80: 48000037  tbnz w8, #0, #0x3d72e88
0x03D72E84: 668ecf97  bl #0x315681c
0x03D72E88: 8637d097  bl #0x3180ca0
0x03D72E8C: 681e40f9  ldr x8, [x19, #0x38]
0x03D72E90: f90300aa  mov x25, x0
0x03D72E94: 011140f9  ldr x1, [x8, #0x20]
0x03D72E98: 6def1794  bl #0x436ec4c
0x03D72E9C: f40315aa  mov x20, x21
0x03D72EA0: 998e01f8  str x25, [x20, #0x18]!
0x03D72EA4: e00314aa  mov x0, x20
0x03D72EA8: e10319aa  mov x1, x25
0x03D72EAC: c636d097  bl #0x31809c4
0x03D72EB0: 08c701f0  adrp x8, #0x7655000
0x03D72EB4: 081940f9  ldr x8, [x8, #0x30]
0x03D72EB8: 22008052  movz w2, #0x1
0x03D72EBC: e00318aa  mov x0, x24
0x03D72EC0: e10317aa  mov x1, x23
0x03D72EC4: 030140f9  ldr x3, [x8]
0x03D72EC8: e40316aa  mov x4, x22
0x03D72ECC: e5031f2a  mov w5, wzr
0x03D72ED0: e6031faa  mov x6, xzr
0x03D72ED4: e7031faa  mov x7, xzr
0x03D72ED8: 64bdae94  bl #0x6922468
0x03D72EDC: 48c801b0  adrp x8, #0x767b000
0x03D72EE0: 08b140f9  ldr x8, [x8, #0x160]
0x03D72EE4: f60300aa  mov x22, x0
0x03D72EE8: 080140f9  ldr x8, [x8]
0x03D72EEC: e00308aa  mov x0, x8
0x03D72EF0: 6c37d097  bl #0x3180ca0
0x03D72EF4: 681e40f9  ldr x8, [x19, #0x38]
0x03D72EF8: e10315aa  mov x1, x21
0x03D72EFC: e3031faa  mov x3, xzr
0x03D72F00: f70300aa  mov x23, x0
0x03D72F04: 021540f9  ldr x2, [x8, #0x28]
0x03D72F08: b3bc5694  bl #0x53221d4
0x03D72F0C: 160900b4  cbz x22, #0x3d7302c
0x03D72F10: 4ac801b0  adrp x10, #0x767b000
0x03D72F14: c80240f9  ldr x8, [x22]
0x03D72F18: 4ab540f9  ldr x10, [x10, #0x168]
0x03D72F1C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72F20: 410140f9  ldr x1, [x10]
0x03D72F24: 290100b4  cbz x9, #0x3d72f48
0x03D72F28: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72F2C: 4a210091  add x10, x10, #8
0x03D72F30: 4b815ff8  ldur x11, [x10, #-8]
0x03D72F34: 7f0101eb  cmp x11, x1
0x03D72F38: 00010054  b.eq #0x3d72f58
0x03D72F3C: 290500f1  subs x9, x9, #1
0x03D72F40: 4a410091  add x10, x10, #0x10
0x03D72F44: 61ffff54  b.ne #0x3d72f30
0x03D72F48: e00316aa  mov x0, x22
0x03D72F4C: e2031f2a  mov w2, wzr
0x03D72F50: f08ecf97  bl #0x3156b10
0x03D72F54: 04000014  b #0x3d72f64
0x03D72F58: 490180b9  ldrsw x9, [x10]
0x03D72F5C: 0811098b  add x8, x8, x9, lsl #4
0x03D72F60: 00e10491  add x0, x8, #0x138
0x03D72F64: 080840a9  ldp x8, x2, [x0]
0x03D72F68: e00316aa  mov x0, x22
0x03D72F6C: e10317aa  mov x1, x23
0x03D72F70: 00013fd6  blr x8
0x03D72F74: e8c701b0  adrp x8, #0x766f000
0x03D72F78: 082141f9  ldr x8, [x8, #0x240]
0x03D72F7C: f60300aa  mov x22, x0
0x03D72F80: 080140f9  ldr x8, [x8]
0x03D72F84: e00308aa  mov x0, x8
0x03D72F88: 4637d097  bl #0x3180ca0
0x03D72F8C: 681e40f9  ldr x8, [x19, #0x38]
0x03D72F90: e10315aa  mov x1, x21
0x03D72F94: e3031faa  mov x3, xzr
0x03D72F98: f30300aa  mov x19, x0
0x03D72F9C: 021940f9  ldr x2, [x8, #0x30]
0x03D72FA0: 8dbc5694  bl #0x53221d4
0x03D72FA4: 560400b4  cbz x22, #0x3d7302c
0x03D72FA8: eac701b0  adrp x10, #0x766f000
0x03D72FAC: c80240f9  ldr x8, [x22]
0x03D72FB0: 4a2541f9  ldr x10, [x10, #0x248]
0x03D72FB4: 095d4279  ldrh w9, [x8, #0x12e]
0x03D72FB8: 410140f9  ldr x1, [x10]
0x03D72FBC: 290100b4  cbz x9, #0x3d72fe0
0x03D72FC0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D72FC4: 4a210091  add x10, x10, #8
0x03D72FC8: 4b815ff8  ldur x11, [x10, #-8]
0x03D72FCC: 7f0101eb  cmp x11, x1
0x03D72FD0: 00010054  b.eq #0x3d72ff0
0x03D72FD4: 290500f1  subs x9, x9, #1
0x03D72FD8: 4a410091  add x10, x10, #0x10
0x03D72FDC: 61ffff54  b.ne #0x3d72fc8
0x03D72FE0: 22008052  movz w2, #0x1
0x03D72FE4: e00316aa  mov x0, x22
0x03D72FE8: ca8ecf97  bl #0x3156b10
0x03D72FEC: 05000014  b #0x3d73000
0x03D72FF0: 490140b9  ldr w9, [x10]
0x03D72FF4: 29050011  add w9, w9, #1
0x03D72FF8: 08d1298b  add x8, x8, w9, sxtw #4
0x03D72FFC: 00e10491  add x0, x8, #0x138
0x03D73000: 080840a9  ldp x8, x2, [x0]
0x03D73004: e00316aa  mov x0, x22
0x03D73008: e10313aa  mov x1, x19
0x03D7300C: 00013fd6  blr x8
0x03D73010: 800240f9  ldr x0, [x20]
0x03D73014: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03D73018: f65743a9  ldp x22, x21, [sp, #0x30]
0x03D7301C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03D73020: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03D73024: fe0745f8  ldr x30, [sp], #0x50
0x03D73028: c0035fd6  ret
0x03D7302C: 2037d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73030 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Get<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Get___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, System_Collections_Generic_Dictionary_string__string__o* additionalHeaders, bool reportParsingMetric, const MethodInfo_3D73030* method);
; bytes=668 sha256=d6220383a41f40329b1f63c0dde76ac17a29d1c6b9f80e617a9d2b28e9fca20c status=arm64_complete_bound indexed_start=True
0x03D73030: fe0f1bf8  str x30, [sp, #-0x50]!
0x03D73034: fa6701a9  stp x26, x25, [sp, #0x10]
0x03D73038: f85f02a9  stp x24, x23, [sp, #0x20]
0x03D7303C: f65703a9  stp x22, x21, [sp, #0x30]
0x03D73040: f44f04a9  stp x20, x19, [sp, #0x40]
0x03D73044: a81c40f9  ldr x8, [x5, #0x38]
0x03D73048: f30305aa  mov x19, x5
0x03D7304C: f903042a  mov w25, w4
0x03D73050: f60303aa  mov x22, x3
0x03D73054: f40302aa  mov x20, x2
0x03D73058: f70301aa  mov x23, x1
0x03D7305C: f80300aa  mov x24, x0
0x03D73060: a80200b5  cbnz x8, #0x3d730b4
0x03D73064: 40c80190  adrp x0, #0x767b000
0x03D73068: 00b040f9  ldr x0, [x0, #0x160]
0x03D7306C: 6b36d097  bl #0x3180a18
0x03D73070: e0c70190  adrp x0, #0x766f000
0x03D73074: 002041f9  ldr x0, [x0, #0x240]
0x03D73078: 6836d097  bl #0x3180a18
0x03D7307C: e0c70190  adrp x0, #0x766f000
0x03D73080: 002441f9  ldr x0, [x0, #0x248]
0x03D73084: 6536d097  bl #0x3180a18
0x03D73088: 40c80190  adrp x0, #0x767b000
0x03D7308C: 00b440f9  ldr x0, [x0, #0x168]
0x03D73090: 6236d097  bl #0x3180a18
0x03D73094: 00c701d0  adrp x0, #0x7655000
0x03D73098: 001840f9  ldr x0, [x0, #0x30]
0x03D7309C: 5f36d097  bl #0x3180a18
0x03D730A0: 681e40f9  ldr x8, [x19, #0x38]
0x03D730A4: 880000b5  cbnz x8, #0x3d730b4
0x03D730A8: e00313aa  mov x0, x19
0x03D730AC: f38dcf97  bl #0x3156878
0x03D730B0: 681e40f9  ldr x8, [x19, #0x38]
0x03D730B4: 000140f9  ldr x0, [x8]
0x03D730B8: 08d44439  ldrb w8, [x0, #0x135]
0x03D730BC: 48000037  tbnz w8, #0, #0x3d730c4
0x03D730C0: d78dcf97  bl #0x315681c
0x03D730C4: f736d097  bl #0x3180ca0
0x03D730C8: 681e40f9  ldr x8, [x19, #0x38]
0x03D730CC: f50300aa  mov x21, x0
0x03D730D0: 010540f9  ldr x1, [x8, #8]
0x03D730D4: 280040f9  ldr x8, [x1]
0x03D730D8: 00013fd6  blr x8
0x03D730DC: 750f00b4  cbz x21, #0x3d732c8
0x03D730E0: e00315aa  mov x0, x21
0x03D730E4: 180c01f8  str x24, [x0, #0x10]!
0x03D730E8: e10318aa  mov x1, x24
0x03D730EC: 3a030012  and w26, w25, #1
0x03D730F0: 3536d097  bl #0x31809c4
0x03D730F4: f90315aa  mov x25, x21
0x03D730F8: 340f02f8  str x20, [x25, #0x20]!
0x03D730FC: e00319aa  mov x0, x25
0x03D73100: e10314aa  mov x1, x20
0x03D73104: 3036d097  bl #0x31809c4
0x03D73108: 3a230039  strb w26, [x25, #8]
0x03D7310C: 681e40f9  ldr x8, [x19, #0x38]
0x03D73110: 000d40f9  ldr x0, [x8, #0x18]
0x03D73114: 08d44439  ldrb w8, [x0, #0x135]
0x03D73118: 48000037  tbnz w8, #0, #0x3d73120
0x03D7311C: c08dcf97  bl #0x315681c
0x03D73120: e036d097  bl #0x3180ca0
0x03D73124: 681e40f9  ldr x8, [x19, #0x38]
0x03D73128: f90300aa  mov x25, x0
0x03D7312C: 011140f9  ldr x1, [x8, #0x20]
0x03D73130: 280040f9  ldr x8, [x1]
0x03D73134: 00013fd6  blr x8
0x03D73138: f40315aa  mov x20, x21
0x03D7313C: 998e01f8  str x25, [x20, #0x18]!
0x03D73140: e00314aa  mov x0, x20
0x03D73144: e10319aa  mov x1, x25
0x03D73148: 1f36d097  bl #0x31809c4
0x03D7314C: 08c701d0  adrp x8, #0x7655000
0x03D73150: 081940f9  ldr x8, [x8, #0x30]
0x03D73154: 22008052  movz w2, #0x1
0x03D73158: e00318aa  mov x0, x24
0x03D7315C: e10317aa  mov x1, x23
0x03D73160: 030140f9  ldr x3, [x8]
0x03D73164: e40316aa  mov x4, x22
0x03D73168: e5031f2a  mov w5, wzr
0x03D7316C: e6031faa  mov x6, xzr
0x03D73170: e7031faa  mov x7, xzr
0x03D73174: bdbcae94  bl #0x6922468
0x03D73178: 48c80190  adrp x8, #0x767b000
0x03D7317C: 08b140f9  ldr x8, [x8, #0x160]
0x03D73180: f60300aa  mov x22, x0
0x03D73184: 080140f9  ldr x8, [x8]
0x03D73188: e00308aa  mov x0, x8
0x03D7318C: c536d097  bl #0x3180ca0
0x03D73190: 681e40f9  ldr x8, [x19, #0x38]
0x03D73194: e10315aa  mov x1, x21
0x03D73198: e3031faa  mov x3, xzr
0x03D7319C: f70300aa  mov x23, x0
0x03D731A0: 021540f9  ldr x2, [x8, #0x28]
0x03D731A4: 0cbc5694  bl #0x53221d4
0x03D731A8: 160900b4  cbz x22, #0x3d732c8
0x03D731AC: 4ac80190  adrp x10, #0x767b000
0x03D731B0: c80240f9  ldr x8, [x22]
0x03D731B4: 4ab540f9  ldr x10, [x10, #0x168]
0x03D731B8: 095d4279  ldrh w9, [x8, #0x12e]
0x03D731BC: 410140f9  ldr x1, [x10]
0x03D731C0: 290100b4  cbz x9, #0x3d731e4
0x03D731C4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D731C8: 4a210091  add x10, x10, #8
0x03D731CC: 4b815ff8  ldur x11, [x10, #-8]
0x03D731D0: 7f0101eb  cmp x11, x1
0x03D731D4: 00010054  b.eq #0x3d731f4
0x03D731D8: 290500f1  subs x9, x9, #1
0x03D731DC: 4a410091  add x10, x10, #0x10
0x03D731E0: 61ffff54  b.ne #0x3d731cc
0x03D731E4: e00316aa  mov x0, x22
0x03D731E8: e2031f2a  mov w2, wzr
0x03D731EC: 498ecf97  bl #0x3156b10
0x03D731F0: 04000014  b #0x3d73200
0x03D731F4: 490180b9  ldrsw x9, [x10]
0x03D731F8: 0811098b  add x8, x8, x9, lsl #4
0x03D731FC: 00e10491  add x0, x8, #0x138
0x03D73200: 080840a9  ldp x8, x2, [x0]
0x03D73204: e00316aa  mov x0, x22
0x03D73208: e10317aa  mov x1, x23
0x03D7320C: 00013fd6  blr x8
0x03D73210: e8c70190  adrp x8, #0x766f000
0x03D73214: 082141f9  ldr x8, [x8, #0x240]
0x03D73218: f60300aa  mov x22, x0
0x03D7321C: 080140f9  ldr x8, [x8]
0x03D73220: e00308aa  mov x0, x8
0x03D73224: 9f36d097  bl #0x3180ca0
0x03D73228: 681e40f9  ldr x8, [x19, #0x38]
0x03D7322C: e10315aa  mov x1, x21
0x03D73230: e3031faa  mov x3, xzr
0x03D73234: f30300aa  mov x19, x0
0x03D73238: 021940f9  ldr x2, [x8, #0x30]
0x03D7323C: e6bb5694  bl #0x53221d4
0x03D73240: 560400b4  cbz x22, #0x3d732c8
0x03D73244: eac70190  adrp x10, #0x766f000
0x03D73248: c80240f9  ldr x8, [x22]
0x03D7324C: 4a2541f9  ldr x10, [x10, #0x248]
0x03D73250: 095d4279  ldrh w9, [x8, #0x12e]
0x03D73254: 410140f9  ldr x1, [x10]
0x03D73258: 290100b4  cbz x9, #0x3d7327c
0x03D7325C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D73260: 4a210091  add x10, x10, #8
0x03D73264: 4b815ff8  ldur x11, [x10, #-8]
0x03D73268: 7f0101eb  cmp x11, x1
0x03D7326C: 00010054  b.eq #0x3d7328c
0x03D73270: 290500f1  subs x9, x9, #1
0x03D73274: 4a410091  add x10, x10, #0x10
0x03D73278: 61ffff54  b.ne #0x3d73264
0x03D7327C: 22008052  movz w2, #0x1
0x03D73280: e00316aa  mov x0, x22
0x03D73284: 238ecf97  bl #0x3156b10
0x03D73288: 05000014  b #0x3d7329c
0x03D7328C: 490140b9  ldr w9, [x10]
0x03D73290: 29050011  add w9, w9, #1
0x03D73294: 08d1298b  add x8, x8, w9, sxtw #4
0x03D73298: 00e10491  add x0, x8, #0x138
0x03D7329C: 080840a9  ldp x8, x2, [x0]
0x03D732A0: e00316aa  mov x0, x22
0x03D732A4: e10313aa  mov x1, x19
0x03D732A8: 00013fd6  blr x8
0x03D732AC: 800240f9  ldr x0, [x20]
0x03D732B0: f44f44a9  ldp x20, x19, [sp, #0x40]
0x03D732B4: f65743a9  ldp x22, x21, [sp, #0x30]
0x03D732B8: f85f42a9  ldp x24, x23, [sp, #0x20]
0x03D732BC: fa6741a9  ldp x26, x25, [sp, #0x10]
0x03D732C0: fe0745f8  ldr x30, [sp], #0x50
0x03D732C4: c0035fd6  ret
0x03D732C8: 7936d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D73F64 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Patch<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Patch___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, const MethodInfo_3D73F64* method);
; bytes=808 sha256=ad09a01699be6963ee528c303107f695426097260bccb37c6eda482f4646d4bb status=arm64_complete_bound indexed_start=True
0x03D73F64: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D73F68: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D73F6C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D73F70: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D73F74: f65704a9  stp x22, x21, [sp, #0x40]
0x03D73F78: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D73F7C: fd030091  mov x29, sp
0x03D73F80: ff8301d1  sub sp, sp, #0x60
0x03D73F84: 5cd03bd5  mrs x28, tpidr_el0
0x03D73F88: 881740f9  ldr x8, [x28, #0x28]
0x03D73F8C: f30304aa  mov x19, x4
0x03D73F90: f40303aa  mov x20, x3
0x03D73F94: f80302aa  mov x24, x2
0x03D73F98: a8831ff8  stur x8, [x29, #-8]
0x03D73F9C: a2031af8  stur x2, [x29, #-0x60]
0x03D73FA0: 881c40f9  ldr x8, [x4, #0x38]
0x03D73FA4: f70301aa  mov x23, x1
0x03D73FA8: f60300aa  mov x22, x0
0x03D73FAC: a80200b5  cbnz x8, #0x3d74000
0x03D73FB0: 40c80190  adrp x0, #0x767b000
0x03D73FB4: 00b040f9  ldr x0, [x0, #0x160]
0x03D73FB8: 9832d097  bl #0x3180a18
0x03D73FBC: e0c70190  adrp x0, #0x766f000
0x03D73FC0: 002041f9  ldr x0, [x0, #0x240]
0x03D73FC4: 9532d097  bl #0x3180a18
0x03D73FC8: e0c70190  adrp x0, #0x766f000
0x03D73FCC: 002441f9  ldr x0, [x0, #0x248]
0x03D73FD0: 9232d097  bl #0x3180a18
0x03D73FD4: 40c80190  adrp x0, #0x767b000
0x03D73FD8: 00b440f9  ldr x0, [x0, #0x168]
0x03D73FDC: 8f32d097  bl #0x3180a18
0x03D73FE0: 00c701d0  adrp x0, #0x7655000
0x03D73FE4: 001840f9  ldr x0, [x0, #0x30]
0x03D73FE8: 8c32d097  bl #0x3180a18
0x03D73FEC: 681e40f9  ldr x8, [x19, #0x38]
0x03D73FF0: 880000b5  cbnz x8, #0x3d74000
0x03D73FF4: e00313aa  mov x0, x19
0x03D73FF8: 208acf97  bl #0x3156878
0x03D73FFC: 681e40f9  ldr x8, [x19, #0x38]
0x03D74000: 091540f9  ldr x9, [x8, #0x28]
0x03D74004: 3afd40b9  ldr w26, [x9, #0xfc]
0x03D74008: e9030091  mov x9, sp
0x03D7400C: 4a3f0091  add x10, x26, #0xf
0x03D74010: 4a717c92  and x10, x10, #0x1fffffff0
0x03D74014: 39010acb  sub x25, x9, x10
0x03D74018: 3f030091  mov sp, x25
0x03D7401C: 000140f9  ldr x0, [x8]
0x03D74020: 08d44439  ldrb w8, [x0, #0x135]
0x03D74024: 48000037  tbnz w8, #0, #0x3d7402c
0x03D74028: fd89cf97  bl #0x315681c
0x03D7402C: 1d33d097  bl #0x3180ca0
0x03D74030: 681e40f9  ldr x8, [x19, #0x38]
0x03D74034: f50300aa  mov x21, x0
0x03D74038: 010540f9  ldr x1, [x8, #8]
0x03D7403C: 280040f9  ldr x8, [x1]
0x03D74040: 00013fd6  blr x8
0x03D74044: 151200b4  cbz x21, #0x3d74284
0x03D74048: e00315aa  mov x0, x21
0x03D7404C: 160c01f8  str x22, [x0, #0x10]!
0x03D74050: e10316aa  mov x1, x22
0x03D74054: 5c32d097  bl #0x31809c4
0x03D74058: e00315aa  mov x0, x21
0x03D7405C: 140c02f8  str x20, [x0, #0x20]!
0x03D74060: e10314aa  mov x1, x20
0x03D74064: 5832d097  bl #0x31809c4
0x03D74068: 681e40f9  ldr x8, [x19, #0x38]
0x03D7406C: 000d40f9  ldr x0, [x8, #0x18]
0x03D74070: 08d44439  ldrb w8, [x0, #0x135]
0x03D74074: 48000037  tbnz w8, #0, #0x3d7407c
0x03D74078: e989cf97  bl #0x315681c
0x03D7407C: 0933d097  bl #0x3180ca0
0x03D74080: 681e40f9  ldr x8, [x19, #0x38]
0x03D74084: fb0300aa  mov x27, x0
0x03D74088: 011140f9  ldr x1, [x8, #0x20]
0x03D7408C: 280040f9  ldr x8, [x1]
0x03D74090: 00013fd6  blr x8
0x03D74094: f40315aa  mov x20, x21
0x03D74098: 9b8e01f8  str x27, [x20, #0x18]!
0x03D7409C: e00314aa  mov x0, x20
0x03D740A0: e1031baa  mov x1, x27
0x03D740A4: 4832d097  bl #0x31809c4
0x03D740A8: 7b1e40f9  ldr x27, [x19, #0x38]
0x03D740AC: e00319aa  mov x0, x25
0x03D740B0: e2031aaa  mov x2, x26
0x03D740B4: 681740f9  ldr x8, [x27, #0x28]
0x03D740B8: 082940b9  ldr w8, [x8, #0x28]
0x03D740BC: 1f010071  cmp w8, #0
0x03D740C0: a88301d1  sub x8, x29, #0x60
0x03D740C4: 01b3889a  csel x1, x24, x8, lt
0x03D740C8: 2a6ad194  bl #0x71ce970
0x03D740CC: 688742a9  ldp x8, x1, [x27, #0x28]
0x03D740D0: 082940b9  ldr w8, [x8, #0x28]
0x03D740D4: 200040f9  ldr x0, [x1]
0x03D740D8: 4800f837  tbnz w8, #0x1f, #0x3d740e0
0x03D740DC: 390340f9  ldr x25, [x25]
0x03D740E0: 08c701b0  adrp x8, #0x7655000
0x03D740E4: 081940f9  ldr x8, [x8, #0x30]
0x03D740E8: 29008052  movz w9, #0x1
0x03D740EC: aa3300d1  sub x10, x29, #0xc
0x03D740F0: 00e4006f  movi v0.2d, #0000000000000000
0x03D740F4: 080140f9  ldr x8, [x8]
0x03D740F8: b7e73aa9  stp x23, x25, [x29, #-0x58]
0x03D740FC: a9431f38  sturb w9, [x29, #-0xc]
0x03D74100: a0839c3c  stur q0, [x29, #-0x38]
0x03D74104: aaa33ba9  stp x10, x8, [x29, #-0x48]
0x03D74108: a0839d3c  stur q0, [x29, #-0x28]
0x03D7410C: 280840f9  ldr x8, [x1, #0x10]
0x03D74110: a36301d1  sub x3, x29, #0x58
0x03D74114: a46300d1  sub x4, x29, #0x18
0x03D74118: e20316aa  mov x2, x22
0x03D7411C: 00013fd6  blr x8
0x03D74120: 28c801f0  adrp x8, #0x767b000
0x03D74124: b6835ef8  ldur x22, [x29, #-0x18]
0x03D74128: 08b140f9  ldr x8, [x8, #0x160]
0x03D7412C: 000140f9  ldr x0, [x8]
0x03D74130: dc32d097  bl #0x3180ca0
0x03D74134: 681e40f9  ldr x8, [x19, #0x38]
0x03D74138: e10315aa  mov x1, x21
0x03D7413C: e3031faa  mov x3, xzr
0x03D74140: f70300aa  mov x23, x0
0x03D74144: 021d40f9  ldr x2, [x8, #0x38]
0x03D74148: 23b85694  bl #0x53221d4
0x03D7414C: d60900b4  cbz x22, #0x3d74284
0x03D74150: 2ac801f0  adrp x10, #0x767b000
0x03D74154: c80240f9  ldr x8, [x22]
0x03D74158: 4ab540f9  ldr x10, [x10, #0x168]
0x03D7415C: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74160: 410140f9  ldr x1, [x10]
0x03D74164: 290100b4  cbz x9, #0x3d74188
0x03D74168: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D7416C: 4a210091  add x10, x10, #8
0x03D74170: 4b815ff8  ldur x11, [x10, #-8]
0x03D74174: 7f0101eb  cmp x11, x1
0x03D74178: 00010054  b.eq #0x3d74198
0x03D7417C: 290500f1  subs x9, x9, #1
0x03D74180: 4a410091  add x10, x10, #0x10
0x03D74184: 61ffff54  b.ne #0x3d74170
0x03D74188: e00316aa  mov x0, x22
0x03D7418C: e2031f2a  mov w2, wzr
0x03D74190: 608acf97  bl #0x3156b10
0x03D74194: 04000014  b #0x3d741a4
0x03D74198: 490180b9  ldrsw x9, [x10]
0x03D7419C: 0811098b  add x8, x8, x9, lsl #4
0x03D741A0: 00e10491  add x0, x8, #0x138
0x03D741A4: 080840a9  ldp x8, x2, [x0]
0x03D741A8: e00316aa  mov x0, x22
0x03D741AC: e10317aa  mov x1, x23
0x03D741B0: 00013fd6  blr x8
0x03D741B4: c8c701f0  adrp x8, #0x766f000
0x03D741B8: 082141f9  ldr x8, [x8, #0x240]
0x03D741BC: f60300aa  mov x22, x0
0x03D741C0: 080140f9  ldr x8, [x8]
0x03D741C4: e00308aa  mov x0, x8
0x03D741C8: b632d097  bl #0x3180ca0
0x03D741CC: 681e40f9  ldr x8, [x19, #0x38]
0x03D741D0: e10315aa  mov x1, x21
0x03D741D4: e3031faa  mov x3, xzr
0x03D741D8: f30300aa  mov x19, x0
0x03D741DC: 022140f9  ldr x2, [x8, #0x40]
0x03D741E0: fdb75694  bl #0x53221d4
0x03D741E4: 160500b4  cbz x22, #0x3d74284
0x03D741E8: cac701f0  adrp x10, #0x766f000
0x03D741EC: c80240f9  ldr x8, [x22]
0x03D741F0: 4a2541f9  ldr x10, [x10, #0x248]
0x03D741F4: 095d4279  ldrh w9, [x8, #0x12e]
0x03D741F8: 410140f9  ldr x1, [x10]
0x03D741FC: 290100b4  cbz x9, #0x3d74220
0x03D74200: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D74204: 4a210091  add x10, x10, #8
0x03D74208: 4b815ff8  ldur x11, [x10, #-8]
0x03D7420C: 7f0101eb  cmp x11, x1
0x03D74210: 00010054  b.eq #0x3d74230
0x03D74214: 290500f1  subs x9, x9, #1
0x03D74218: 4a410091  add x10, x10, #0x10
0x03D7421C: 61ffff54  b.ne #0x3d74208
0x03D74220: 22008052  movz w2, #0x1
0x03D74224: e00316aa  mov x0, x22
0x03D74228: 3a8acf97  bl #0x3156b10
0x03D7422C: 05000014  b #0x3d74240
0x03D74230: 490140b9  ldr w9, [x10]
0x03D74234: 29050011  add w9, w9, #1
0x03D74238: 08d1298b  add x8, x8, w9, sxtw #4
0x03D7423C: 00e10491  add x0, x8, #0x138
0x03D74240: 080840a9  ldp x8, x2, [x0]
0x03D74244: e00316aa  mov x0, x22
0x03D74248: e10313aa  mov x1, x19
0x03D7424C: 00013fd6  blr x8
0x03D74250: 800240f9  ldr x0, [x20]
0x03D74254: 881740f9  ldr x8, [x28, #0x28]
0x03D74258: a9835ff8  ldur x9, [x29, #-8]
0x03D7425C: 1f0109eb  cmp x8, x9
0x03D74260: 41010054  b.ne #0x3d74288
0x03D74264: bf030091  mov sp, x29
0x03D74268: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D7426C: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D74270: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D74274: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D74278: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D7427C: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D74280: c0035fd6  ret
0x03D74284: 8a32d097  bl #0x3180cac
0x03D74288: c269d194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D74DA0 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Put<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_TResponse__o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Put___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, Framework_Core_Services_Backend_Http_Interfaces_Validations_IResponseValidator_TResponse__o* validator, const MethodInfo_3D74DA0* method);
; bytes=800 sha256=66e4f38df2d62f3872e7f3674aed4d93df1789b093b594788554a29d525d3654 status=arm64_complete_bound indexed_start=True
0x03D74DA0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D74DA4: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D74DA8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D74DAC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D74DB0: f65704a9  stp x22, x21, [sp, #0x40]
0x03D74DB4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D74DB8: fd030091  mov x29, sp
0x03D74DBC: ff4301d1  sub sp, sp, #0x50
0x03D74DC0: 5cd03bd5  mrs x28, tpidr_el0
0x03D74DC4: 881740f9  ldr x8, [x28, #0x28]
0x03D74DC8: f30304aa  mov x19, x4
0x03D74DCC: f40303aa  mov x20, x3
0x03D74DD0: f80302aa  mov x24, x2
0x03D74DD4: a8831ff8  stur x8, [x29, #-8]
0x03D74DD8: a2031bf8  stur x2, [x29, #-0x50]
0x03D74DDC: 881c40f9  ldr x8, [x4, #0x38]
0x03D74DE0: f70301aa  mov x23, x1
0x03D74DE4: f60300aa  mov x22, x0
0x03D74DE8: a80200b5  cbnz x8, #0x3d74e3c
0x03D74DEC: 20c801f0  adrp x0, #0x767b000
0x03D74DF0: 00b040f9  ldr x0, [x0, #0x160]
0x03D74DF4: 092fd097  bl #0x3180a18
0x03D74DF8: c0c701f0  adrp x0, #0x766f000
0x03D74DFC: 002041f9  ldr x0, [x0, #0x240]
0x03D74E00: 062fd097  bl #0x3180a18
0x03D74E04: c0c701f0  adrp x0, #0x766f000
0x03D74E08: 002441f9  ldr x0, [x0, #0x248]
0x03D74E0C: 032fd097  bl #0x3180a18
0x03D74E10: 20c801f0  adrp x0, #0x767b000
0x03D74E14: 00b440f9  ldr x0, [x0, #0x168]
0x03D74E18: 002fd097  bl #0x3180a18
0x03D74E1C: 00c701b0  adrp x0, #0x7655000
0x03D74E20: 001840f9  ldr x0, [x0, #0x30]
0x03D74E24: fd2ed097  bl #0x3180a18
0x03D74E28: 681e40f9  ldr x8, [x19, #0x38]
0x03D74E2C: 880000b5  cbnz x8, #0x3d74e3c
0x03D74E30: e00313aa  mov x0, x19
0x03D74E34: 9186cf97  bl #0x3156878
0x03D74E38: 681e40f9  ldr x8, [x19, #0x38]
0x03D74E3C: 091540f9  ldr x9, [x8, #0x28]
0x03D74E40: 3afd40b9  ldr w26, [x9, #0xfc]
0x03D74E44: e9030091  mov x9, sp
0x03D74E48: 4a3f0091  add x10, x26, #0xf
0x03D74E4C: 4a717c92  and x10, x10, #0x1fffffff0
0x03D74E50: 39010acb  sub x25, x9, x10
0x03D74E54: 3f030091  mov sp, x25
0x03D74E58: 000140f9  ldr x0, [x8]
0x03D74E5C: 08d44439  ldrb w8, [x0, #0x135]
0x03D74E60: 48000037  tbnz w8, #0, #0x3d74e68
0x03D74E64: 6e86cf97  bl #0x315681c
0x03D74E68: 8e2fd097  bl #0x3180ca0
0x03D74E6C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74E70: f50300aa  mov x21, x0
0x03D74E74: 010540f9  ldr x1, [x8, #8]
0x03D74E78: 280040f9  ldr x8, [x1]
0x03D74E7C: 00013fd6  blr x8
0x03D74E80: d51100b4  cbz x21, #0x3d750b8
0x03D74E84: e00315aa  mov x0, x21
0x03D74E88: 160c01f8  str x22, [x0, #0x10]!
0x03D74E8C: e10316aa  mov x1, x22
0x03D74E90: cd2ed097  bl #0x31809c4
0x03D74E94: e00315aa  mov x0, x21
0x03D74E98: 140c02f8  str x20, [x0, #0x20]!
0x03D74E9C: e10314aa  mov x1, x20
0x03D74EA0: c92ed097  bl #0x31809c4
0x03D74EA4: 681e40f9  ldr x8, [x19, #0x38]
0x03D74EA8: 000d40f9  ldr x0, [x8, #0x18]
0x03D74EAC: 08d44439  ldrb w8, [x0, #0x135]
0x03D74EB0: 48000037  tbnz w8, #0, #0x3d74eb8
0x03D74EB4: 5a86cf97  bl #0x315681c
0x03D74EB8: 7a2fd097  bl #0x3180ca0
0x03D74EBC: 681e40f9  ldr x8, [x19, #0x38]
0x03D74EC0: fb0300aa  mov x27, x0
0x03D74EC4: 011140f9  ldr x1, [x8, #0x20]
0x03D74EC8: 280040f9  ldr x8, [x1]
0x03D74ECC: 00013fd6  blr x8
0x03D74ED0: f40315aa  mov x20, x21
0x03D74ED4: 9b8e01f8  str x27, [x20, #0x18]!
0x03D74ED8: e00314aa  mov x0, x20
0x03D74EDC: e1031baa  mov x1, x27
0x03D74EE0: b92ed097  bl #0x31809c4
0x03D74EE4: 7b1e40f9  ldr x27, [x19, #0x38]
0x03D74EE8: e00319aa  mov x0, x25
0x03D74EEC: e2031aaa  mov x2, x26
0x03D74EF0: 681740f9  ldr x8, [x27, #0x28]
0x03D74EF4: 082940b9  ldr w8, [x8, #0x28]
0x03D74EF8: 1f010071  cmp w8, #0
0x03D74EFC: a84301d1  sub x8, x29, #0x50
0x03D74F00: 01b3889a  csel x1, x24, x8, lt
0x03D74F04: 9b66d194  bl #0x71ce970
0x03D74F08: 688742a9  ldp x8, x1, [x27, #0x28]
0x03D74F0C: 082940b9  ldr w8, [x8, #0x28]
0x03D74F10: 200040f9  ldr x0, [x1]
0x03D74F14: 4800f837  tbnz w8, #0x1f, #0x3d74f1c
0x03D74F18: 390340f9  ldr x25, [x25]
0x03D74F1C: 08c701b0  adrp x8, #0x7655000
0x03D74F20: 081940f9  ldr x8, [x8, #0x30]
0x03D74F24: 29008052  movz w9, #0x1
0x03D74F28: aa3300d1  sub x10, x29, #0xc
0x03D74F2C: b7e73ba9  stp x23, x25, [x29, #-0x48]
0x03D74F30: 080140f9  ldr x8, [x8]
0x03D74F34: a9431f38  sturb w9, [x29, #-0xc]
0x03D74F38: bfff3da9  stp xzr, xzr, [x29, #-0x28]
0x03D74F3C: a32301d1  sub x3, x29, #0x48
0x03D74F40: aaa33ca9  stp x10, x8, [x29, #-0x38]
0x03D74F44: 280840f9  ldr x8, [x1, #0x10]
0x03D74F48: a46300d1  sub x4, x29, #0x18
0x03D74F4C: e20316aa  mov x2, x22
0x03D74F50: 00013fd6  blr x8
0x03D74F54: 28c801f0  adrp x8, #0x767b000
0x03D74F58: b6835ef8  ldur x22, [x29, #-0x18]
0x03D74F5C: 08b140f9  ldr x8, [x8, #0x160]
0x03D74F60: 000140f9  ldr x0, [x8]
0x03D74F64: 4f2fd097  bl #0x3180ca0
0x03D74F68: 681e40f9  ldr x8, [x19, #0x38]
0x03D74F6C: e10315aa  mov x1, x21
0x03D74F70: e3031faa  mov x3, xzr
0x03D74F74: f70300aa  mov x23, x0
0x03D74F78: 021d40f9  ldr x2, [x8, #0x38]
0x03D74F7C: 96b45694  bl #0x53221d4
0x03D74F80: d60900b4  cbz x22, #0x3d750b8
0x03D74F84: 2ac801f0  adrp x10, #0x767b000
0x03D74F88: c80240f9  ldr x8, [x22]
0x03D74F8C: 4ab540f9  ldr x10, [x10, #0x168]
0x03D74F90: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74F94: 410140f9  ldr x1, [x10]
0x03D74F98: 290100b4  cbz x9, #0x3d74fbc
0x03D74F9C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D74FA0: 4a210091  add x10, x10, #8
0x03D74FA4: 4b815ff8  ldur x11, [x10, #-8]
0x03D74FA8: 7f0101eb  cmp x11, x1
0x03D74FAC: 00010054  b.eq #0x3d74fcc
0x03D74FB0: 290500f1  subs x9, x9, #1
0x03D74FB4: 4a410091  add x10, x10, #0x10
0x03D74FB8: 61ffff54  b.ne #0x3d74fa4
0x03D74FBC: e00316aa  mov x0, x22
0x03D74FC0: e2031f2a  mov w2, wzr
0x03D74FC4: d386cf97  bl #0x3156b10
0x03D74FC8: 04000014  b #0x3d74fd8
0x03D74FCC: 490180b9  ldrsw x9, [x10]
0x03D74FD0: 0811098b  add x8, x8, x9, lsl #4
0x03D74FD4: 00e10491  add x0, x8, #0x138
0x03D74FD8: 080840a9  ldp x8, x2, [x0]
0x03D74FDC: e00316aa  mov x0, x22
0x03D74FE0: e10317aa  mov x1, x23
0x03D74FE4: 00013fd6  blr x8
0x03D74FE8: c8c701f0  adrp x8, #0x766f000
0x03D74FEC: 082141f9  ldr x8, [x8, #0x240]
0x03D74FF0: f60300aa  mov x22, x0
0x03D74FF4: 080140f9  ldr x8, [x8]
0x03D74FF8: e00308aa  mov x0, x8
0x03D74FFC: 292fd097  bl #0x3180ca0
0x03D75000: 681e40f9  ldr x8, [x19, #0x38]
0x03D75004: e10315aa  mov x1, x21
0x03D75008: e3031faa  mov x3, xzr
0x03D7500C: f30300aa  mov x19, x0
0x03D75010: 022140f9  ldr x2, [x8, #0x40]
0x03D75014: 70b45694  bl #0x53221d4
0x03D75018: 160500b4  cbz x22, #0x3d750b8
0x03D7501C: cac701d0  adrp x10, #0x766f000
0x03D75020: c80240f9  ldr x8, [x22]
0x03D75024: 4a2541f9  ldr x10, [x10, #0x248]
0x03D75028: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7502C: 410140f9  ldr x1, [x10]
0x03D75030: 290100b4  cbz x9, #0x3d75054
0x03D75034: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D75038: 4a210091  add x10, x10, #8
0x03D7503C: 4b815ff8  ldur x11, [x10, #-8]
0x03D75040: 7f0101eb  cmp x11, x1
0x03D75044: 00010054  b.eq #0x3d75064
0x03D75048: 290500f1  subs x9, x9, #1
0x03D7504C: 4a410091  add x10, x10, #0x10
0x03D75050: 61ffff54  b.ne #0x3d7503c
0x03D75054: 22008052  movz w2, #0x1
0x03D75058: e00316aa  mov x0, x22
0x03D7505C: ad86cf97  bl #0x3156b10
0x03D75060: 05000014  b #0x3d75074
0x03D75064: 490140b9  ldr w9, [x10]
0x03D75068: 29050011  add w9, w9, #1
0x03D7506C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D75070: 00e10491  add x0, x8, #0x138
0x03D75074: 080840a9  ldp x8, x2, [x0]
0x03D75078: e00316aa  mov x0, x22
0x03D7507C: e10313aa  mov x1, x19
0x03D75080: 00013fd6  blr x8
0x03D75084: 800240f9  ldr x0, [x20]
0x03D75088: 881740f9  ldr x8, [x28, #0x28]
0x03D7508C: a9835ff8  ldur x9, [x29, #-8]
0x03D75090: 1f0109eb  cmp x8, x9
0x03D75094: 41010054  b.ne #0x3d750bc
0x03D75098: bf030091  mov sp, x29
0x03D7509C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D750A0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D750A4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D750A8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D750AC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D750B0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D750B4: c0035fd6  ret
0x03D750B8: fd2ed097  bl #0x3180cac
0x03D750BC: 3566d194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7484C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Put<object>
; native signature: strange_extensions_promise_api_IPromise_o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Put_object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Il2CppObject* payload, const MethodInfo_3D7484C* method);
; bytes=604 sha256=3b3566dd99499839209421f568f7ea3fd6ded5f5dc7ff4f29275d8b68f4e2217 status=arm64_complete_bound indexed_start=True
0x03D7484C: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x03D74850: f85f01a9  stp x24, x23, [sp, #0x10]
0x03D74854: f65702a9  stp x22, x21, [sp, #0x20]
0x03D74858: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D7485C: 681c40f9  ldr x8, [x3, #0x38]
0x03D74860: f30303aa  mov x19, x3
0x03D74864: f60302aa  mov x22, x2
0x03D74868: f70301aa  mov x23, x1
0x03D7486C: f80300aa  mov x24, x0
0x03D74870: 080300b5  cbnz x8, #0x3d748d0
0x03D74874: 20c801f0  adrp x0, #0x767b000
0x03D74878: 00b040f9  ldr x0, [x0, #0x160]
0x03D7487C: 6730d097  bl #0x3180a18
0x03D74880: c0c701f0  adrp x0, #0x766f000
0x03D74884: 002041f9  ldr x0, [x0, #0x240]
0x03D74888: 6430d097  bl #0x3180a18
0x03D7488C: c0c701f0  adrp x0, #0x766f000
0x03D74890: 002441f9  ldr x0, [x0, #0x248]
0x03D74894: 6130d097  bl #0x3180a18
0x03D74898: 20c801f0  adrp x0, #0x767b000
0x03D7489C: 00b440f9  ldr x0, [x0, #0x168]
0x03D748A0: 5e30d097  bl #0x3180a18
0x03D748A4: c0c701f0  adrp x0, #0x766f000
0x03D748A8: 007044f9  ldr x0, [x0, #0x8e0]
0x03D748AC: 5b30d097  bl #0x3180a18
0x03D748B0: 00c701b0  adrp x0, #0x7655000
0x03D748B4: 001840f9  ldr x0, [x0, #0x30]
0x03D748B8: 5830d097  bl #0x3180a18
0x03D748BC: 681e40f9  ldr x8, [x19, #0x38]
0x03D748C0: 880000b5  cbnz x8, #0x3d748d0
0x03D748C4: e00313aa  mov x0, x19
0x03D748C8: ec87cf97  bl #0x3156878
0x03D748CC: 681e40f9  ldr x8, [x19, #0x38]
0x03D748D0: 000140f9  ldr x0, [x8]
0x03D748D4: 08d44439  ldrb w8, [x0, #0x135]
0x03D748D8: 48000037  tbnz w8, #0, #0x3d748e0
0x03D748DC: d087cf97  bl #0x315681c
0x03D748E0: f030d097  bl #0x3180ca0
0x03D748E4: 681e40f9  ldr x8, [x19, #0x38]
0x03D748E8: f50300aa  mov x21, x0
0x03D748EC: 010540f9  ldr x1, [x8, #8]
0x03D748F0: 525c3694  bl #0x4b0ba38
0x03D748F4: c8c701f0  adrp x8, #0x766f000
0x03D748F8: 087144f9  ldr x8, [x8, #0x8e0]
0x03D748FC: 000140f9  ldr x0, [x8]
0x03D74900: e830d097  bl #0x3180ca0
0x03D74904: e1031faa  mov x1, xzr
0x03D74908: f90300aa  mov x25, x0
0x03D7490C: ec317194  bl #0x59c10bc
0x03D74910: b50c00b4  cbz x21, #0x3d74aa4
0x03D74914: f40315aa  mov x20, x21
0x03D74918: 990e01f8  str x25, [x20, #0x10]!
0x03D7491C: e00314aa  mov x0, x20
0x03D74920: e10319aa  mov x1, x25
0x03D74924: 2830d097  bl #0x31809c4
0x03D74928: 09c701b0  adrp x9, #0x7655000
0x03D7492C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74930: 291940f9  ldr x9, [x9, #0x30]
0x03D74934: 23008052  movz w3, #0x1
0x03D74938: e00318aa  mov x0, x24
0x03D7493C: 070d40f9  ldr x7, [x8, #0x18]
0x03D74940: 240140f9  ldr x4, [x9]
0x03D74944: e10317aa  mov x1, x23
0x03D74948: e20316aa  mov x2, x22
0x03D7494C: e5031faa  mov x5, xzr
0x03D74950: e6031faa  mov x6, xzr
0x03D74954: d8fbff97  bl #0x3d738b4
0x03D74958: 28c801f0  adrp x8, #0x767b000
0x03D7495C: 08b140f9  ldr x8, [x8, #0x160]
0x03D74960: f60300aa  mov x22, x0
0x03D74964: 080140f9  ldr x8, [x8]
0x03D74968: e00308aa  mov x0, x8
0x03D7496C: cd30d097  bl #0x3180ca0
0x03D74970: 681e40f9  ldr x8, [x19, #0x38]
0x03D74974: e10315aa  mov x1, x21
0x03D74978: e3031faa  mov x3, xzr
0x03D7497C: f70300aa  mov x23, x0
0x03D74980: 021140f9  ldr x2, [x8, #0x20]
0x03D74984: 14b65694  bl #0x53221d4
0x03D74988: f60800b4  cbz x22, #0x3d74aa4
0x03D7498C: 2ac801f0  adrp x10, #0x767b000
0x03D74990: c80240f9  ldr x8, [x22]
0x03D74994: 4ab540f9  ldr x10, [x10, #0x168]
0x03D74998: 095d4279  ldrh w9, [x8, #0x12e]
0x03D7499C: 410140f9  ldr x1, [x10]
0x03D749A0: 290100b4  cbz x9, #0x3d749c4
0x03D749A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D749A8: 4a210091  add x10, x10, #8
0x03D749AC: 4b815ff8  ldur x11, [x10, #-8]
0x03D749B0: 7f0101eb  cmp x11, x1
0x03D749B4: 00010054  b.eq #0x3d749d4
0x03D749B8: 290500f1  subs x9, x9, #1
0x03D749BC: 4a410091  add x10, x10, #0x10
0x03D749C0: 61ffff54  b.ne #0x3d749ac
0x03D749C4: e00316aa  mov x0, x22
0x03D749C8: e2031f2a  mov w2, wzr
0x03D749CC: 5188cf97  bl #0x3156b10
0x03D749D0: 04000014  b #0x3d749e0
0x03D749D4: 490180b9  ldrsw x9, [x10]
0x03D749D8: 0811098b  add x8, x8, x9, lsl #4
0x03D749DC: 00e10491  add x0, x8, #0x138
0x03D749E0: 080840a9  ldp x8, x2, [x0]
0x03D749E4: e00316aa  mov x0, x22
0x03D749E8: e10317aa  mov x1, x23
0x03D749EC: 00013fd6  blr x8
0x03D749F0: c8c701f0  adrp x8, #0x766f000
0x03D749F4: 082141f9  ldr x8, [x8, #0x240]
0x03D749F8: f60300aa  mov x22, x0
0x03D749FC: 080140f9  ldr x8, [x8]
0x03D74A00: e00308aa  mov x0, x8
0x03D74A04: a730d097  bl #0x3180ca0
0x03D74A08: 681e40f9  ldr x8, [x19, #0x38]
0x03D74A0C: e10315aa  mov x1, x21
0x03D74A10: e3031faa  mov x3, xzr
0x03D74A14: f30300aa  mov x19, x0
0x03D74A18: 021540f9  ldr x2, [x8, #0x28]
0x03D74A1C: eeb55694  bl #0x53221d4
0x03D74A20: 360400b4  cbz x22, #0x3d74aa4
0x03D74A24: cac701f0  adrp x10, #0x766f000
0x03D74A28: c80240f9  ldr x8, [x22]
0x03D74A2C: 4a2541f9  ldr x10, [x10, #0x248]
0x03D74A30: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74A34: 410140f9  ldr x1, [x10]
0x03D74A38: 290100b4  cbz x9, #0x3d74a5c
0x03D74A3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D74A40: 4a210091  add x10, x10, #8
0x03D74A44: 4b815ff8  ldur x11, [x10, #-8]
0x03D74A48: 7f0101eb  cmp x11, x1
0x03D74A4C: 00010054  b.eq #0x3d74a6c
0x03D74A50: 290500f1  subs x9, x9, #1
0x03D74A54: 4a410091  add x10, x10, #0x10
0x03D74A58: 61ffff54  b.ne #0x3d74a44
0x03D74A5C: 22008052  movz w2, #0x1
0x03D74A60: e00316aa  mov x0, x22
0x03D74A64: 2b88cf97  bl #0x3156b10
0x03D74A68: 05000014  b #0x3d74a7c
0x03D74A6C: 490140b9  ldr w9, [x10]
0x03D74A70: 29050011  add w9, w9, #1
0x03D74A74: 08d1298b  add x8, x8, w9, sxtw #4
0x03D74A78: 00e10491  add x0, x8, #0x138
0x03D74A7C: 080840a9  ldp x8, x2, [x0]
0x03D74A80: e00316aa  mov x0, x22
0x03D74A84: e10313aa  mov x1, x19
0x03D74A88: 00013fd6  blr x8
0x03D74A8C: 800240f9  ldr x0, [x20]
0x03D74A90: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D74A94: f65742a9  ldp x22, x21, [sp, #0x20]
0x03D74A98: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03D74A9C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x03D74AA0: c0035fd6  ret
0x03D74AA4: 8230d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D74AA8 | Framework.Core.Services.Backend.Repositories.RepositoryBase$$Put<__Il2CppFullySharedGenericType>
; native signature: strange_extensions_promise_api_IPromise_o* Framework_Core_Services_Backend_Repositories_RepositoryBase__Put___Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, System_String_o* path, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o payload, const MethodInfo_3D74AA8* method);
; bytes=760 sha256=6859485a0413ffe500311adb65a0e395438fed558e22de1d5fce8b2c907fa610 status=arm64_complete_bound indexed_start=True
0x03D74AA8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03D74AAC: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03D74AB0: fa6702a9  stp x26, x25, [sp, #0x20]
0x03D74AB4: f85f03a9  stp x24, x23, [sp, #0x30]
0x03D74AB8: f65704a9  stp x22, x21, [sp, #0x40]
0x03D74ABC: f44f05a9  stp x20, x19, [sp, #0x50]
0x03D74AC0: fd030091  mov x29, sp
0x03D74AC4: ff4301d1  sub sp, sp, #0x50
0x03D74AC8: 5cd03bd5  mrs x28, tpidr_el0
0x03D74ACC: 881740f9  ldr x8, [x28, #0x28]
0x03D74AD0: f30303aa  mov x19, x3
0x03D74AD4: f80302aa  mov x24, x2
0x03D74AD8: f70301aa  mov x23, x1
0x03D74ADC: a8831ff8  stur x8, [x29, #-8]
0x03D74AE0: a2031bf8  stur x2, [x29, #-0x50]
0x03D74AE4: 681c40f9  ldr x8, [x3, #0x38]
0x03D74AE8: f60300aa  mov x22, x0
0x03D74AEC: 080300b5  cbnz x8, #0x3d74b4c
0x03D74AF0: 20c801f0  adrp x0, #0x767b000
0x03D74AF4: 00b040f9  ldr x0, [x0, #0x160]
0x03D74AF8: c82fd097  bl #0x3180a18
0x03D74AFC: c0c701f0  adrp x0, #0x766f000
0x03D74B00: 002041f9  ldr x0, [x0, #0x240]
0x03D74B04: c52fd097  bl #0x3180a18
0x03D74B08: c0c701f0  adrp x0, #0x766f000
0x03D74B0C: 002441f9  ldr x0, [x0, #0x248]
0x03D74B10: c22fd097  bl #0x3180a18
0x03D74B14: 20c801f0  adrp x0, #0x767b000
0x03D74B18: 00b440f9  ldr x0, [x0, #0x168]
0x03D74B1C: bf2fd097  bl #0x3180a18
0x03D74B20: c0c701f0  adrp x0, #0x766f000
0x03D74B24: 007044f9  ldr x0, [x0, #0x8e0]
0x03D74B28: bc2fd097  bl #0x3180a18
0x03D74B2C: 00c701b0  adrp x0, #0x7655000
0x03D74B30: 001840f9  ldr x0, [x0, #0x30]
0x03D74B34: b92fd097  bl #0x3180a18
0x03D74B38: 681e40f9  ldr x8, [x19, #0x38]
0x03D74B3C: 880000b5  cbnz x8, #0x3d74b4c
0x03D74B40: e00313aa  mov x0, x19
0x03D74B44: 4d87cf97  bl #0x3156878
0x03D74B48: 681e40f9  ldr x8, [x19, #0x38]
0x03D74B4C: 090940f9  ldr x9, [x8, #0x10]
0x03D74B50: 3afd40b9  ldr w26, [x9, #0xfc]
0x03D74B54: e9030091  mov x9, sp
0x03D74B58: 4a3f0091  add x10, x26, #0xf
0x03D74B5C: 4a717c92  and x10, x10, #0x1fffffff0
0x03D74B60: 39010acb  sub x25, x9, x10
0x03D74B64: 3f030091  mov sp, x25
0x03D74B68: 000140f9  ldr x0, [x8]
0x03D74B6C: 08d44439  ldrb w8, [x0, #0x135]
0x03D74B70: 48000037  tbnz w8, #0, #0x3d74b78
0x03D74B74: 2a87cf97  bl #0x315681c
0x03D74B78: 4a30d097  bl #0x3180ca0
0x03D74B7C: 681e40f9  ldr x8, [x19, #0x38]
0x03D74B80: f50300aa  mov x21, x0
0x03D74B84: 010540f9  ldr x1, [x8, #8]
0x03D74B88: 280040f9  ldr x8, [x1]
0x03D74B8C: 00013fd6  blr x8
0x03D74B90: c8c701f0  adrp x8, #0x766f000
0x03D74B94: 087144f9  ldr x8, [x8, #0x8e0]
0x03D74B98: 000140f9  ldr x0, [x8]
0x03D74B9C: 4130d097  bl #0x3180ca0
0x03D74BA0: e1031faa  mov x1, xzr
0x03D74BA4: fb0300aa  mov x27, x0
0x03D74BA8: 45317194  bl #0x59c10bc
0x03D74BAC: 750f00b4  cbz x21, #0x3d74d98
0x03D74BB0: f40315aa  mov x20, x21
0x03D74BB4: 9b0e01f8  str x27, [x20, #0x10]!
0x03D74BB8: e00314aa  mov x0, x20
0x03D74BBC: e1031baa  mov x1, x27
0x03D74BC0: 812fd097  bl #0x31809c4
0x03D74BC4: 7b1e40f9  ldr x27, [x19, #0x38]
0x03D74BC8: e00319aa  mov x0, x25
0x03D74BCC: e2031aaa  mov x2, x26
0x03D74BD0: 680b40f9  ldr x8, [x27, #0x10]
0x03D74BD4: 082940b9  ldr w8, [x8, #0x28]
0x03D74BD8: 1f010071  cmp w8, #0
0x03D74BDC: a84301d1  sub x8, x29, #0x50
0x03D74BE0: 01b3889a  csel x1, x24, x8, lt
0x03D74BE4: 6367d194  bl #0x71ce970
0x03D74BE8: 680741a9  ldp x8, x1, [x27, #0x10]
0x03D74BEC: 082940b9  ldr w8, [x8, #0x28]
0x03D74BF0: 200040f9  ldr x0, [x1]
0x03D74BF4: 4800f837  tbnz w8, #0x1f, #0x3d74bfc
0x03D74BF8: 390340f9  ldr x25, [x25]
0x03D74BFC: 08c701b0  adrp x8, #0x7655000
0x03D74C00: 081940f9  ldr x8, [x8, #0x30]
0x03D74C04: 29008052  movz w9, #0x1
0x03D74C08: aa3300d1  sub x10, x29, #0xc
0x03D74C0C: b7e73ba9  stp x23, x25, [x29, #-0x48]
0x03D74C10: 080140f9  ldr x8, [x8]
0x03D74C14: a9431f38  sturb w9, [x29, #-0xc]
0x03D74C18: bfff3da9  stp xzr, xzr, [x29, #-0x28]
0x03D74C1C: a32301d1  sub x3, x29, #0x48
0x03D74C20: aaa33ca9  stp x10, x8, [x29, #-0x38]
0x03D74C24: 280840f9  ldr x8, [x1, #0x10]
0x03D74C28: a46300d1  sub x4, x29, #0x18
0x03D74C2C: e20316aa  mov x2, x22
0x03D74C30: 00013fd6  blr x8
0x03D74C34: 28c801f0  adrp x8, #0x767b000
0x03D74C38: b6835ef8  ldur x22, [x29, #-0x18]
0x03D74C3C: 08b140f9  ldr x8, [x8, #0x160]
0x03D74C40: 000140f9  ldr x0, [x8]
0x03D74C44: 1730d097  bl #0x3180ca0
0x03D74C48: 681e40f9  ldr x8, [x19, #0x38]
0x03D74C4C: e10315aa  mov x1, x21
0x03D74C50: e3031faa  mov x3, xzr
0x03D74C54: f70300aa  mov x23, x0
0x03D74C58: 021140f9  ldr x2, [x8, #0x20]
0x03D74C5C: 5eb55694  bl #0x53221d4
0x03D74C60: d60900b4  cbz x22, #0x3d74d98
0x03D74C64: 2ac801f0  adrp x10, #0x767b000
0x03D74C68: c80240f9  ldr x8, [x22]
0x03D74C6C: 4ab540f9  ldr x10, [x10, #0x168]
0x03D74C70: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74C74: 410140f9  ldr x1, [x10]
0x03D74C78: 290100b4  cbz x9, #0x3d74c9c
0x03D74C7C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D74C80: 4a210091  add x10, x10, #8
0x03D74C84: 4b815ff8  ldur x11, [x10, #-8]
0x03D74C88: 7f0101eb  cmp x11, x1
0x03D74C8C: 00010054  b.eq #0x3d74cac
0x03D74C90: 290500f1  subs x9, x9, #1
0x03D74C94: 4a410091  add x10, x10, #0x10
0x03D74C98: 61ffff54  b.ne #0x3d74c84
0x03D74C9C: e00316aa  mov x0, x22
0x03D74CA0: e2031f2a  mov w2, wzr
0x03D74CA4: 9b87cf97  bl #0x3156b10
0x03D74CA8: 04000014  b #0x3d74cb8
0x03D74CAC: 490180b9  ldrsw x9, [x10]
0x03D74CB0: 0811098b  add x8, x8, x9, lsl #4
0x03D74CB4: 00e10491  add x0, x8, #0x138
0x03D74CB8: 080840a9  ldp x8, x2, [x0]
0x03D74CBC: e00316aa  mov x0, x22
0x03D74CC0: e10317aa  mov x1, x23
0x03D74CC4: 00013fd6  blr x8
0x03D74CC8: c8c701f0  adrp x8, #0x766f000
0x03D74CCC: 082141f9  ldr x8, [x8, #0x240]
0x03D74CD0: f60300aa  mov x22, x0
0x03D74CD4: 080140f9  ldr x8, [x8]
0x03D74CD8: e00308aa  mov x0, x8
0x03D74CDC: f12fd097  bl #0x3180ca0
0x03D74CE0: 681e40f9  ldr x8, [x19, #0x38]
0x03D74CE4: e10315aa  mov x1, x21
0x03D74CE8: e3031faa  mov x3, xzr
0x03D74CEC: f30300aa  mov x19, x0
0x03D74CF0: 021540f9  ldr x2, [x8, #0x28]
0x03D74CF4: 38b55694  bl #0x53221d4
0x03D74CF8: 160500b4  cbz x22, #0x3d74d98
0x03D74CFC: cac701f0  adrp x10, #0x766f000
0x03D74D00: c80240f9  ldr x8, [x22]
0x03D74D04: 4a2541f9  ldr x10, [x10, #0x248]
0x03D74D08: 095d4279  ldrh w9, [x8, #0x12e]
0x03D74D0C: 410140f9  ldr x1, [x10]
0x03D74D10: 290100b4  cbz x9, #0x3d74d34
0x03D74D14: 0a5940f9  ldr x10, [x8, #0xb0]
0x03D74D18: 4a210091  add x10, x10, #8
0x03D74D1C: 4b815ff8  ldur x11, [x10, #-8]
0x03D74D20: 7f0101eb  cmp x11, x1
0x03D74D24: 00010054  b.eq #0x3d74d44
0x03D74D28: 290500f1  subs x9, x9, #1
0x03D74D2C: 4a410091  add x10, x10, #0x10
0x03D74D30: 61ffff54  b.ne #0x3d74d1c
0x03D74D34: 22008052  movz w2, #0x1
0x03D74D38: e00316aa  mov x0, x22
0x03D74D3C: 7587cf97  bl #0x3156b10
0x03D74D40: 05000014  b #0x3d74d54
0x03D74D44: 490140b9  ldr w9, [x10]
0x03D74D48: 29050011  add w9, w9, #1
0x03D74D4C: 08d1298b  add x8, x8, w9, sxtw #4
0x03D74D50: 00e10491  add x0, x8, #0x138
0x03D74D54: 080840a9  ldp x8, x2, [x0]
0x03D74D58: e00316aa  mov x0, x22
0x03D74D5C: e10313aa  mov x1, x19
0x03D74D60: 00013fd6  blr x8
0x03D74D64: 800240f9  ldr x0, [x20]
0x03D74D68: 881740f9  ldr x8, [x28, #0x28]
0x03D74D6C: a9835ff8  ldur x9, [x29, #-8]
0x03D74D70: 1f0109eb  cmp x8, x9
0x03D74D74: 41010054  b.ne #0x3d74d9c
0x03D74D78: bf030091  mov sp, x29
0x03D74D7C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03D74D80: f65744a9  ldp x22, x21, [sp, #0x40]
0x03D74D84: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03D74D88: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03D74D8C: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03D74D90: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03D74D94: c0035fd6  ret
0x03D74D98: c52fd097  bl #0x3180cac
0x03D74D9C: fd66d194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D732CC | Framework.Core.Services.Backend.Repositories.RepositoryBase$$InstantiateValidator<object, object>
; native signature: Il2CppObject* Framework_Core_Services_Backend_Repositories_RepositoryBase__InstantiateValidator_object__object_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, const MethodInfo_3D732CC* method);
; bytes=64 sha256=029c6ed21f4edf97536106d4d63740a80a8dad0cc28e91e29dd18af65bc3db50 status=arm64_complete_bound indexed_start=True
0x03D732CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x03D732D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03D732D4: 281c40f9  ldr x8, [x1, #0x38]
0x03D732D8: f30301aa  mov x19, x1
0x03D732DC: f40300aa  mov x20, x0
0x03D732E0: 680000b5  cbnz x8, #0x3d732ec
0x03D732E4: e00313aa  mov x0, x19
0x03D732E8: 648dcf97  bl #0x3156878
0x03D732EC: 800a40f9  ldr x0, [x20, #0x10]
0x03D732F0: c00000b4  cbz x0, #0x3d73308
0x03D732F4: 681e40f9  ldr x8, [x19, #0x38]
0x03D732F8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03D732FC: 010140f9  ldr x1, [x8]
0x03D73300: fe0742f8  ldr x30, [sp], #0x20
0x03D73304: 6a46fa17  b #0x3c04cac
0x03D73308: 6936d097  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3D7330C | Framework.Core.Services.Backend.Repositories.RepositoryBase$$InstantiateValidator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Framework_Core_Services_Backend_Repositories_RepositoryBase__InstantiateValidator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Framework_Core_Services_Backend_Repositories_RepositoryBase_o* __this, const MethodInfo_3D7330C* method);
; bytes=196 sha256=6fe54b0f0f7f415a6ed5aa1f15c7d89a5ce4449ef14460b4f7c0f6fa4f106240 status=arm64_complete_bound indexed_start=True
0x03D7330C: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03D73310: f70b00f9  str x23, [sp, #0x10]
0x03D73314: f65702a9  stp x22, x21, [sp, #0x20]
0x03D73318: f44f03a9  stp x20, x19, [sp, #0x30]
0x03D7331C: fd030091  mov x29, sp
0x03D73320: ff4300d1  sub sp, sp, #0x10
0x03D73324: 57d03bd5  mrs x23, tpidr_el0
0x03D73328: e81640f9  ldr x8, [x23, #0x28]
0x03D7332C: f30301aa  mov x19, x1
0x03D73330: f50300aa  mov x21, x0
0x03D73334: a8831ff8  stur x8, [x29, #-8]
0x03D73338: 481c40f9  ldr x8, [x2, #0x38]
0x03D7333C: a80000b5  cbnz x8, #0x3d73350
0x03D73340: e00302aa  mov x0, x2
0x03D73344: f40302aa  mov x20, x2
0x03D73348: 4c8dcf97  bl #0x3156878
0x03D7334C: 881e40f9  ldr x8, [x20, #0x38]
0x03D73350: 090540f9  ldr x9, [x8, #8]
0x03D73354: 34fd40b9  ldr w20, [x9, #0xfc]
0x03D73358: e9030091  mov x9, sp
0x03D7335C: 8a3e0091  add x10, x20, #0xf
0x03D73360: 4a717c92  and x10, x10, #0x1fffffff0
0x03D73364: 36010acb  sub x22, x9, x10
0x03D73368: df020091  mov sp, x22
0x03D7336C: a20a40f9  ldr x2, [x21, #0x10]
0x03D73370: c20200b4  cbz x2, #0x3d733c8
0x03D73374: 010140f9  ldr x1, [x8]
0x03D73378: a34300d1  sub x3, x29, #0x10
0x03D7337C: e40316aa  mov x4, x22
0x03D73380: 200040f9  ldr x0, [x1]
0x03D73384: b6031ff8  stur x22, [x29, #-0x10]
0x03D73388: 280840f9  ldr x8, [x1, #0x10]
0x03D7338C: 00013fd6  blr x8
0x03D73390: e00313aa  mov x0, x19
0x03D73394: e10316aa  mov x1, x22
0x03D73398: e20314aa  mov x2, x20
0x03D7339C: 756dd194  bl #0x71ce970
0x03D733A0: e81640f9  ldr x8, [x23, #0x28]
0x03D733A4: a9835ff8  ldur x9, [x29, #-8]
0x03D733A8: 1f0109eb  cmp x8, x9
0x03D733AC: 01010054  b.ne #0x3d733cc
0x03D733B0: bf030091  mov sp, x29
0x03D733B4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03D733B8: f65742a9  ldp x22, x21, [sp, #0x20]
0x03D733BC: f70b40f9  ldr x23, [sp, #0x10]
0x03D733C0: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03D733C4: c0035fd6  ret
0x03D733C8: 3936d097  bl #0x3180cac
0x03D733CC: 716dd194  bl #0x71ce990

