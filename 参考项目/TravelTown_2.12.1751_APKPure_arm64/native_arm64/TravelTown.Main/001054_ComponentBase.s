; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1054 MergeEngine.ECS.Components.Items.ComponentBase
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FBFCC | public Entity get_Entity() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x068FBFCC: 000840f9  ldr x0, [x0, #0x10]
0x068FBFD0: c0035fd6  ret

; RVA 0x68FBFD4 | protected void set_Entity(Entity value) { }
; bytes=8 sha256=aa81621a66bc9c303e3768812364c00781be878fe30c32f5d6e46f516375075f status=arm64_complete_bound indexed_start=True
0x068FBFD4: 010c01f8  str x1, [x0, #0x10]!
0x068FBFD8: 7b122217  b #0x31809c4

; RVA 0x68FBFDC | protected IJsonService get_JsonSerializer() { }
; bytes=8 sha256=bd237e5d99f6462770946dd64c9d5273577f92aeb78154ba485fef49e0d73851 status=arm64_complete_bound indexed_start=True
0x068FBFDC: 000c40f9  ldr x0, [x0, #0x18]
0x068FBFE0: c0035fd6  ret

; RVA 0x68FBFE4 | public void set_JsonSerializer(IJsonService value) { }
; bytes=8 sha256=d45fce88cbb78a6b8be7b9bf3c74073d23a8d8d6a447a055716e15b3fff5462a status=arm64_complete_bound indexed_start=True
0x068FBFE4: 018c01f8  str x1, [x0, #0x18]!
0x068FBFE8: 77122217  b #0x31809c4

; RVA 0x68F7118 | public void .ctor(Entity entity) { }
; bytes=48 sha256=35e7238753b0162b588af253a9ced5dd0e2f555b9642b7c6fbcb0401dbe83947 status=arm64_complete_bound indexed_start=True
0x068F7118: fe0f1ef8  str x30, [sp, #-0x20]!
0x068F711C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F7120: f30301aa  mov x19, x1
0x068F7124: e1031faa  mov x1, xzr
0x068F7128: f40300aa  mov x20, x0
0x068F712C: 348db797  bl #0x56da5fc
0x068F7130: 930e01f8  str x19, [x20, #0x10]!
0x068F7134: e00314aa  mov x0, x20
0x068F7138: e10313aa  mov x1, x19
0x068F713C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F7140: fe0742f8  ldr x30, [sp], #0x20
0x068F7144: 20262217  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BED81C | MergeEngine.ECS.Components.Items.ComponentBase$$GetComponent<object>
; native signature: Il2CppObject* MergeEngine_ECS_Components_Items_ComponentBase__GetComponent_object_ (MergeEngine_ECS_Components_Items_ComponentBase_o* __this, const MethodInfo_3BED81C* method);
; bytes=64 sha256=db9fabcde9b9cab76245b4a4c6de6ee8013b83de2eda16b16375281978a193f3 status=arm64_complete_bound indexed_start=True
0x03BED81C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03BED820: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BED824: 281c40f9  ldr x8, [x1, #0x38]
0x03BED828: f30301aa  mov x19, x1
0x03BED82C: f40300aa  mov x20, x0
0x03BED830: 680000b5  cbnz x8, #0x3bed83c
0x03BED834: e00313aa  mov x0, x19
0x03BED838: 10a4d597  bl #0x3156878
0x03BED83C: 800a40f9  ldr x0, [x20, #0x10]
0x03BED840: c00000b4  cbz x0, #0x3bed858
0x03BED844: 681e40f9  ldr x8, [x19, #0x38]
0x03BED848: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BED84C: 010140f9  ldr x1, [x8]
0x03BED850: fe0742f8  ldr x30, [sp], #0x20
0x03BED854: 4ccd0014  b #0x3c20d84
0x03BED858: 154dd697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BED85C | MergeEngine.ECS.Components.Items.ComponentBase$$GetComponents<object>
; native signature: System_Collections_ObjectModel_ReadOnlyCollection_TComponent__o* MergeEngine_ECS_Components_Items_ComponentBase__GetComponents_object_ (MergeEngine_ECS_Components_Items_ComponentBase_o* __this, const MethodInfo_3BED85C* method);
; bytes=64 sha256=51341f466cf2c48949e1c4b08136ea8273585907b4a5d558643519a908d6fa23 status=arm64_complete_bound indexed_start=True
0x03BED85C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03BED860: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BED864: 281c40f9  ldr x8, [x1, #0x38]
0x03BED868: f30301aa  mov x19, x1
0x03BED86C: f40300aa  mov x20, x0
0x03BED870: 680000b5  cbnz x8, #0x3bed87c
0x03BED874: e00313aa  mov x0, x19
0x03BED878: 00a4d597  bl #0x3156878
0x03BED87C: 800a40f9  ldr x0, [x20, #0x10]
0x03BED880: c00000b4  cbz x0, #0x3bed898
0x03BED884: 681e40f9  ldr x8, [x19, #0x38]
0x03BED888: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BED88C: 010140f9  ldr x1, [x8]
0x03BED890: fe0742f8  ldr x30, [sp], #0x20
0x03BED894: 82cd0014  b #0x3c20e9c
0x03BED898: 054dd697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3BED89C | MergeEngine.ECS.Components.Items.ComponentBase$$GetComponents<__Il2CppFullySharedGenericType>
; native signature: System_Collections_ObjectModel_ReadOnlyCollection_TComponent__o* MergeEngine_ECS_Components_Items_ComponentBase__GetComponents___Il2CppFullySharedGenericType_ (MergeEngine_ECS_Components_Items_ComponentBase_o* __this, const MethodInfo_3BED89C* method);
; bytes=68 sha256=c43cd042cf4d24035c85550581dd7b3592b4abb3598b5fb9abcaeff6cf602296 status=arm64_complete_bound indexed_start=True
0x03BED89C: fe0f1ef8  str x30, [sp, #-0x20]!
0x03BED8A0: f44f01a9  stp x20, x19, [sp, #0x10]
0x03BED8A4: 281c40f9  ldr x8, [x1, #0x38]
0x03BED8A8: f30301aa  mov x19, x1
0x03BED8AC: f40300aa  mov x20, x0
0x03BED8B0: 680000b5  cbnz x8, #0x3bed8bc
0x03BED8B4: e00313aa  mov x0, x19
0x03BED8B8: f0a3d597  bl #0x3156878
0x03BED8BC: 800a40f9  ldr x0, [x20, #0x10]
0x03BED8C0: e00000b4  cbz x0, #0x3bed8dc
0x03BED8C4: 681e40f9  ldr x8, [x19, #0x38]
0x03BED8C8: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03BED8CC: 010140f9  ldr x1, [x8]
0x03BED8D0: 220040f9  ldr x2, [x1]
0x03BED8D4: fe0742f8  ldr x30, [sp], #0x20
0x03BED8D8: 40001fd6  br x2
0x03BED8DC: f44cd697  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D5F30C | MergeEngine.ECS.Components.Items.ComponentBase<BoardItemPosition>$$get_Capability
; native signature: MergeEngine_Data_BoardItemPosition_o MergeEngine_ECS_Components_Items_ComponentBase_BoardItemPosition___get_Capability (MergeEngine_ECS_Components_Items_ComponentBase_TCapability__o* __this, const MethodInfo_4D5F30C* method);
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x04D5F30C: 001040f9  ldr x0, [x0, #0x20]
0x04D5F310: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D5F350 | MergeEngine.ECS.Components.Items.ComponentBase<object>$$get_Capability
; native signature: Il2CppObject* MergeEngine_ECS_Components_Items_ComponentBase_object___get_Capability (MergeEngine_ECS_Components_Items_ComponentBase_TCapability__o* __this, const MethodInfo_4D5F350* method);
; bytes=8 sha256=f289023bfc90be5c90aa1a98a40c5b356af639e69af0399f5914b2202364955c status=arm64_complete_bound indexed_start=True
0x04D5F350: 001040f9  ldr x0, [x0, #0x20]
0x04D5F354: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D5F3A0 | MergeEngine.ECS.Components.Items.ComponentBase<__Il2CppFullySharedGenericType>$$get_Capability
; native signature: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o MergeEngine_ECS_Components_Items_ComponentBase___Il2CppFullySharedGenericType___get_Capability (MergeEngine_ECS_Components_Items_ComponentBase_TCapability__o* __this, const MethodInfo_4D5F3A0* method);
; bytes=152 sha256=355e043e6f03477a8951f10ed76b8c4b46f8434047d089cf74ad5e5e62de756a status=arm64_complete_bound indexed_start=True
0x04D5F3A0: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04D5F3A4: f65701a9  stp x22, x21, [sp, #0x10]
0x04D5F3A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04D5F3AC: fd030091  mov x29, sp
0x04D5F3B0: ff4300d1  sub sp, sp, #0x10
0x04D5F3B4: 56d03bd5  mrs x22, tpidr_el0
0x04D5F3B8: c81640f9  ldr x8, [x22, #0x28]
0x04D5F3BC: f30301aa  mov x19, x1
0x04D5F3C0: a8831ff8  stur x8, [x29, #-8]
0x04D5F3C4: 481040f9  ldr x8, [x2, #0x20]
0x04D5F3C8: 086140f9  ldr x8, [x8, #0xc0]
0x04D5F3CC: 082540a9  ldp x8, x9, [x8]
0x04D5F3D0: 34fd40b9  ldr w20, [x9, #0xfc]
0x04D5F3D4: e9030091  mov x9, sp
0x04D5F3D8: 8a3e0091  add x10, x20, #0xf
0x04D5F3DC: 4a717c92  and x10, x10, #0x1fffffff0
0x04D5F3E0: 35010acb  sub x21, x9, x10
0x04D5F3E4: bf020091  mov sp, x21
0x04D5F3E8: 014140f9  ldr x1, [x8, #0x80]
0x04D5F3EC: 93859097  bl #0x3180a38
0x04D5F3F0: e10300aa  mov x1, x0
0x04D5F3F4: e00315aa  mov x0, x21
0x04D5F3F8: e20314aa  mov x2, x20
0x04D5F3FC: 5dbd9194  bl #0x71ce970
0x04D5F400: e00313aa  mov x0, x19
0x04D5F404: e10315aa  mov x1, x21
0x04D5F408: e20314aa  mov x2, x20
0x04D5F40C: 59bd9194  bl #0x71ce970
0x04D5F410: c81640f9  ldr x8, [x22, #0x28]
0x04D5F414: a9835ff8  ldur x9, [x29, #-8]
0x04D5F418: 1f0109eb  cmp x8, x9
0x04D5F41C: c1000054  b.ne #0x4d5f434
0x04D5F420: bf030091  mov sp, x29
0x04D5F424: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04D5F428: f65741a9  ldp x22, x21, [sp, #0x10]
0x04D5F42C: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04D5F430: c0035fd6  ret
0x04D5F434: 57bd9194  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D5F314 | MergeEngine.ECS.Components.Items.ComponentBase<BoardItemPosition>$$.ctor
; native signature: void MergeEngine_ECS_Components_Items_ComponentBase_BoardItemPosition____ctor (MergeEngine_ECS_Components_Items_ComponentBase_TCapability__o* __this, MergeEngine_Data_BoardItemPosition_o capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_4D5F314* method);
; bytes=60 sha256=a6449ffb5e9c278f4eeabccdf8266b17d2a2608c6905eb8edd7f79f3b02ca5cc status=arm64_complete_bound indexed_start=True
0x04D5F314: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04D5F318: f44f01a9  stp x20, x19, [sp, #0x10]
0x04D5F31C: f30302aa  mov x19, x2
0x04D5F320: f40301aa  mov x20, x1
0x04D5F324: e10302aa  mov x1, x2
0x04D5F328: e2031faa  mov x2, xzr
0x04D5F32C: f50300aa  mov x21, x0
0x04D5F330: 7a5f6e94  bl #0x68f7118
0x04D5F334: b30e01f8  str x19, [x21, #0x10]!
0x04D5F338: b40a00f9  str x20, [x21, #0x10]
0x04D5F33C: e10313aa  mov x1, x19
0x04D5F340: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04D5F344: e00315aa  mov x0, x21
0x04D5F348: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04D5F34C: 9e859017  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D5F358 | MergeEngine.ECS.Components.Items.ComponentBase<object>$$.ctor
; native signature: void MergeEngine_ECS_Components_Items_ComponentBase_object____ctor (MergeEngine_ECS_Components_Items_ComponentBase_TCapability__o* __this, Il2CppObject* capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_4D5F358* method);
; bytes=72 sha256=186aef6a5c8564d3c7acd4bd9070e853623ce13abdc196854c1c5f5776ebd364 status=arm64_complete_bound indexed_start=True
0x04D5F358: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04D5F35C: f44f01a9  stp x20, x19, [sp, #0x10]
0x04D5F360: f30302aa  mov x19, x2
0x04D5F364: f40301aa  mov x20, x1
0x04D5F368: e10302aa  mov x1, x2
0x04D5F36C: e2031faa  mov x2, xzr
0x04D5F370: f50300aa  mov x21, x0
0x04D5F374: 695f6e94  bl #0x68f7118
0x04D5F378: e00315aa  mov x0, x21
0x04D5F37C: 140c02f8  str x20, [x0, #0x20]!
0x04D5F380: e10314aa  mov x1, x20
0x04D5F384: 90859097  bl #0x31809c4
0x04D5F388: b30e01f8  str x19, [x21, #0x10]!
0x04D5F38C: e10313aa  mov x1, x19
0x04D5F390: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04D5F394: e00315aa  mov x0, x21
0x04D5F398: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04D5F39C: 8a859017  b #0x31809c4

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D5F438 | MergeEngine.ECS.Components.Items.ComponentBase<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_ECS_Components_Items_ComponentBase___Il2CppFullySharedGenericType____ctor (MergeEngine_ECS_Components_Items_ComponentBase_TCapability__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o capability, MergeEngine_ECS_Entity_o* entity, const MethodInfo_4D5F438* method);
; bytes=248 sha256=ea8659dc76e9a719c50843d1dbd2b1fc2ba6bec29de0141e325986df53de3884 status=arm64_complete_bound indexed_start=True
0x04D5F438: fd7bbba9  stp x29, x30, [sp, #-0x50]!
0x04D5F43C: f90b00f9  str x25, [sp, #0x10]
0x04D5F440: f85f02a9  stp x24, x23, [sp, #0x20]
0x04D5F444: f65703a9  stp x22, x21, [sp, #0x30]
0x04D5F448: f44f04a9  stp x20, x19, [sp, #0x40]
0x04D5F44C: fd030091  mov x29, sp
0x04D5F450: ff4300d1  sub sp, sp, #0x10
0x04D5F454: 59d03bd5  mrs x25, tpidr_el0
0x04D5F458: 281740f9  ldr x8, [x25, #0x28]
0x04D5F45C: f30302aa  mov x19, x2
0x04D5F460: f40300aa  mov x20, x0
0x04D5F464: f50303aa  mov x21, x3
0x04D5F468: a8831ff8  stur x8, [x29, #-8]
0x04D5F46C: a1031ff8  stur x1, [x29, #-0x10]
0x04D5F470: 681040f9  ldr x8, [x3, #0x20]
0x04D5F474: f60301aa  mov x22, x1
0x04D5F478: 086140f9  ldr x8, [x8, #0xc0]
0x04D5F47C: 080540f9  ldr x8, [x8, #8]
0x04D5F480: 17fd40b9  ldr w23, [x8, #0xfc]
0x04D5F484: e8030091  mov x8, sp
0x04D5F488: e93e0091  add x9, x23, #0xf
0x04D5F48C: 29717c92  and x9, x9, #0x1fffffff0
0x04D5F490: 180109cb  sub x24, x8, x9
0x04D5F494: 1f030091  mov sp, x24
0x04D5F498: e10302aa  mov x1, x2
0x04D5F49C: e2031faa  mov x2, xzr
0x04D5F4A0: 1e5f6e94  bl #0x68f7118
0x04D5F4A4: b51240f9  ldr x21, [x21, #0x20]
0x04D5F4A8: e00318aa  mov x0, x24
0x04D5F4AC: e20317aa  mov x2, x23
0x04D5F4B0: a86240f9  ldr x8, [x21, #0xc0]
0x04D5F4B4: 080540f9  ldr x8, [x8, #8]
0x04D5F4B8: 082940b9  ldr w8, [x8, #0x28]
0x04D5F4BC: 1f010071  cmp w8, #0
0x04D5F4C0: a84300d1  sub x8, x29, #0x10
0x04D5F4C4: c1b2889a  csel x1, x22, x8, lt
0x04D5F4C8: 2abd9194  bl #0x71ce970
0x04D5F4CC: a86240f9  ldr x8, [x21, #0xc0]
0x04D5F4D0: e00314aa  mov x0, x20
0x04D5F4D4: e20318aa  mov x2, x24
0x04D5F4D8: e303172a  mov w3, w23
0x04D5F4DC: 080140f9  ldr x8, [x8]
0x04D5F4E0: 014140f9  ldr x1, [x8, #0x80]
0x04D5F4E4: 56859097  bl #0x3180a3c
0x04D5F4E8: 140200b4  cbz x20, #0x4d5f528
0x04D5F4EC: 930e01f8  str x19, [x20, #0x10]!
0x04D5F4F0: e00314aa  mov x0, x20
0x04D5F4F4: e10313aa  mov x1, x19
0x04D5F4F8: 33859097  bl #0x31809c4
0x04D5F4FC: 281740f9  ldr x8, [x25, #0x28]
0x04D5F500: a9835ff8  ldur x9, [x29, #-8]
0x04D5F504: 1f0109eb  cmp x8, x9
0x04D5F508: 21010054  b.ne #0x4d5f52c
0x04D5F50C: bf030091  mov sp, x29
0x04D5F510: f44f44a9  ldp x20, x19, [sp, #0x40]
0x04D5F514: f65743a9  ldp x22, x21, [sp, #0x30]
0x04D5F518: f85f42a9  ldp x24, x23, [sp, #0x20]
0x04D5F51C: f90b40f9  ldr x25, [sp, #0x10]
0x04D5F520: fd7bc5a8  ldp x29, x30, [sp], #0x50
0x04D5F524: c0035fd6  ret
0x04D5F528: e1859097  bl #0x3180cac
0x04D5F52C: 19bd9194  bl #0x71ce990

