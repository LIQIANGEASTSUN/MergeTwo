/* Ghidra 12.1.2 native pseudocode; RVA 0x4534164; MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>.TryReplaceWithRemoteSpawnable; status ok */

/* WARNING: Possible PIC construction at 0x04634d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04634efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046355a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046355d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0463561c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0463564c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04635fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04636144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04636298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04636484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0463653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04636620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046366a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046367b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072858ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0728598c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x072859f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0727dc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e28280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e283d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e284b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e28694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e287c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0728545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea52cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea54a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea55bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea56d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea57ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046364d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04636348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x046345e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x046364d4) */
/* WARNING: Removing unreachable block (ram,0x046364dc) */
/* WARNING: Removing unreachable block (ram,0x03ea57f0) */
/* WARNING: Removing unreachable block (ram,0x03ea5834) */
/* WARNING: Removing unreachable block (ram,0x03ea5838) */
/* WARNING: Removing unreachable block (ram,0x03ea56d8) */
/* WARNING: Removing unreachable block (ram,0x03ea571c) */
/* WARNING: Removing unreachable block (ram,0x03ea5720) */
/* WARNING: Removing unreachable block (ram,0x03ea55c0) */
/* WARNING: Removing unreachable block (ram,0x03ea5604) */
/* WARNING: Removing unreachable block (ram,0x03ea5608) */
/* WARNING: Removing unreachable block (ram,0x03ea54ac) */
/* WARNING: Removing unreachable block (ram,0x03ea54f0) */
/* WARNING: Removing unreachable block (ram,0x03ea54f4) */
/* WARNING: Removing unreachable block (ram,0x07286a90) */
/* WARNING: Removing unreachable block (ram,0x07285460) */
/* WARNING: Removing unreachable block (ram,0x03e287cc) */
/* WARNING: Removing unreachable block (ram,0x03e287dc) */
/* WARNING: Removing unreachable block (ram,0x03e28698) */
/* WARNING: Removing unreachable block (ram,0x03e284bc) */
/* WARNING: Removing unreachable block (ram,0x03e284cc) */
/* WARNING: Removing unreachable block (ram,0x03e283d4) */
/* WARNING: Removing unreachable block (ram,0x03e283e4) */
/* WARNING: Removing unreachable block (ram,0x03e28284) */
/* WARNING: Removing unreachable block (ram,0x03e28294) */
/* WARNING: Removing unreachable block (ram,0x0727dc94) */
/* WARNING: Removing unreachable block (ram,0x07285bc8) */
/* WARNING: Removing unreachable block (ram,0x07285bd0) */
/* WARNING: Removing unreachable block (ram,0x07285bf0) */
/* WARNING: Removing unreachable block (ram,0x07285c24) */
/* WARNING: Removing unreachable block (ram,0x07285c00) */
/* WARNING: Removing unreachable block (ram,0x072859f4) */
/* WARNING: Removing unreachable block (ram,0x07285a04) */
/* WARNING: Removing unreachable block (ram,0x07285990) */
/* WARNING: Removing unreachable block (ram,0x07285998) */
/* WARNING: Removing unreachable block (ram,0x072859ac) */
/* WARNING: Removing unreachable block (ram,0x072859bc) */
/* WARNING: Removing unreachable block (ram,0x07285a10) */
/* WARNING: Removing unreachable block (ram,0x072859c8) */
/* WARNING: Removing unreachable block (ram,0x072859d4) */
/* WARNING: Removing unreachable block (ram,0x0728595c) */
/* WARNING: Removing unreachable block (ram,0x07285978) */
/* WARNING: Removing unreachable block (ram,0x072858f0) */
/* WARNING: Removing unreachable block (ram,0x07285900) */
/* WARNING: Removing unreachable block (ram,0x07285914) */
/* WARNING: Removing unreachable block (ram,0x07285918) */
/* WARNING: Removing unreachable block (ram,0x07285a8c) */
/* WARNING: Removing unreachable block (ram,0x07285928) */
/* WARNING: Removing unreachable block (ram,0x07285a98) */
/* WARNING: Removing unreachable block (ram,0x07285a9c) */
/* WARNING: Removing unreachable block (ram,0x07285aa0) */
/* WARNING: Removing unreachable block (ram,0x07285abc) */
/* WARNING: Removing unreachable block (ram,0x07285adc) */
/* WARNING: Removing unreachable block (ram,0x07285ae8) */
/* WARNING: Removing unreachable block (ram,0x07285aec) */
/* WARNING: Removing unreachable block (ram,0x07285b04) */
/* WARNING: Removing unreachable block (ram,0x07285b0c) */
/* WARNING: Removing unreachable block (ram,0x07285b34) */
/* WARNING: Removing unreachable block (ram,0x07285b18) */
/* WARNING: Removing unreachable block (ram,0x07285b24) */
/* WARNING: Removing unreachable block (ram,0x07285b40) */
/* WARNING: Removing unreachable block (ram,0x07285b4c) */
/* WARNING: Removing unreachable block (ram,0x07285b50) */
/* WARNING: Removing unreachable block (ram,0x07285b58) */
/* WARNING: Removing unreachable block (ram,0x07285b80) */
/* WARNING: Removing unreachable block (ram,0x07285ba0) */
/* WARNING: Removing unreachable block (ram,0x07285c40) */
/* WARNING: Removing unreachable block (ram,0x07285c6c) */
/* WARNING: Removing unreachable block (ram,0x07285c80) */
/* WARNING: Removing unreachable block (ram,0x03e28114) */
/* WARNING: Removing unreachable block (ram,0x03e28130) */
/* WARNING: Removing unreachable block (ram,0x03e28138) */
/* WARNING: Removing unreachable block (ram,0x03e281c8) */
/* WARNING: Removing unreachable block (ram,0x03e28204) */
/* WARNING: Removing unreachable block (ram,0x03e28214) */
/* WARNING: Removing unreachable block (ram,0x03e28240) */
/* WARNING: Removing unreachable block (ram,0x03e282ac) */
/* WARNING: Removing unreachable block (ram,0x03e282b0) */
/* WARNING: Removing unreachable block (ram,0x03e282f0) */
/* WARNING: Removing unreachable block (ram,0x03e282fc) */
/* WARNING: Removing unreachable block (ram,0x03e28328) */
/* WARNING: Removing unreachable block (ram,0x03e283fc) */
/* WARNING: Removing unreachable block (ram,0x03e28400) */
/* WARNING: Removing unreachable block (ram,0x03e2843c) */
/* WARNING: Removing unreachable block (ram,0x03e2844c) */
/* WARNING: Removing unreachable block (ram,0x03e28478) */
/* WARNING: Removing unreachable block (ram,0x03e284e4) */
/* WARNING: Removing unreachable block (ram,0x03e284e8) */
/* WARNING: Removing unreachable block (ram,0x03e28510) */
/* WARNING: Removing unreachable block (ram,0x03e28518) */
/* WARNING: Removing unreachable block (ram,0x03e285b0) */
/* WARNING: Removing unreachable block (ram,0x03e285d4) */
/* WARNING: Removing unreachable block (ram,0x03e285dc) */
/* WARNING: Removing unreachable block (ram,0x03e286a8) */
/* WARNING: Removing unreachable block (ram,0x03e286e8) */
/* WARNING: Removing unreachable block (ram,0x03e286f4) */
/* WARNING: Removing unreachable block (ram,0x03e28720) */
/* WARNING: Removing unreachable block (ram,0x03e287f4) */
/* WARNING: Removing unreachable block (ram,0x03e287f8) */
/* WARNING: Removing unreachable block (ram,0x03e28814) */
/* WARNING: Removing unreachable block (ram,0x03e28834) */
/* WARNING: Removing unreachable block (ram,0x03e28840) */
/* WARNING: Removing unreachable block (ram,0x03e2885c) */
/* WARNING: Removing unreachable block (ram,0x03e28860) */
/* WARNING: Removing unreachable block (ram,0x03e28870) */
/* WARNING: Removing unreachable block (ram,0x03e2889c) */
/* WARNING: Removing unreachable block (ram,0x03e288a8) */
/* WARNING: Removing unreachable block (ram,0x03e288ac) */
/* WARNING: Removing unreachable block (ram,0x03e288c0) */
/* WARNING: Removing unreachable block (ram,0x03e288e4) */
/* WARNING: Removing unreachable block (ram,0x03e288ec) */
/* WARNING: Removing unreachable block (ram,0x03e28908) */
/* WARNING: Removing unreachable block (ram,0x03e28928) */
/* WARNING: Removing unreachable block (ram,0x03e28934) */
/* WARNING: Removing unreachable block (ram,0x03e28950) */
/* WARNING: Removing unreachable block (ram,0x03e28954) */
/* WARNING: Removing unreachable block (ram,0x03e28964) */
/* WARNING: Removing unreachable block (ram,0x03e28990) */
/* WARNING: Removing unreachable block (ram,0x03e2899c) */
/* WARNING: Removing unreachable block (ram,0x03e289a0) */
/* WARNING: Removing unreachable block (ram,0x03e289b4) */
/* WARNING: Removing unreachable block (ram,0x03e289d8) */
/* WARNING: Removing unreachable block (ram,0x03e289e0) */
/* WARNING: Removing unreachable block (ram,0x03e28a0c) */
/* WARNING: Removing unreachable block (ram,0x03e28a2c) */
/* WARNING: Removing unreachable block (ram,0x03e28a34) */
/* WARNING: Removing unreachable block (ram,0x03e28a3c) */
/* WARNING: Removing unreachable block (ram,0x03e28a68) */
/* WARNING: Removing unreachable block (ram,0x03e28a6c) */
/* WARNING: Removing unreachable block (ram,0x03e28a7c) */
/* WARNING: Removing unreachable block (ram,0x03e28a9c) */
/* WARNING: Removing unreachable block (ram,0x03e28aa8) */
/* WARNING: Removing unreachable block (ram,0x03e28ab4) */
/* WARNING: Removing unreachable block (ram,0x03e28abc) */
/* WARNING: Removing unreachable block (ram,0x03e28af8) */
/* WARNING: Removing unreachable block (ram,0x03e28afc) */
/* WARNING: Removing unreachable block (ram,0x03e28b28) */
/* WARNING: Removing unreachable block (ram,0x03e28b48) */
/* WARNING: Removing unreachable block (ram,0x03e28b50) */
/* WARNING: Removing unreachable block (ram,0x03e28b58) */
/* WARNING: Removing unreachable block (ram,0x03e28b84) */
/* WARNING: Removing unreachable block (ram,0x03e28b88) */
/* WARNING: Removing unreachable block (ram,0x03e28b98) */
/* WARNING: Removing unreachable block (ram,0x03e28bb8) */
/* WARNING: Removing unreachable block (ram,0x03e28bc4) */
/* WARNING: Removing unreachable block (ram,0x03e28bd0) */
/* WARNING: Removing unreachable block (ram,0x03e28bd8) */
/* WARNING: Removing unreachable block (ram,0x03e28c14) */
/* WARNING: Removing unreachable block (ram,0x03e28c18) */
/* WARNING: Removing unreachable block (ram,0x03e28c3c) */
/* WARNING: Removing unreachable block (ram,0x03e28c68) */
/* WARNING: Removing unreachable block (ram,0x03e28c70) */
/* WARNING: Removing unreachable block (ram,0x03e28c88) */
/* WARNING: Removing unreachable block (ram,0x03e28c8c) */
/* WARNING: Removing unreachable block (ram,0x03e28c90) */
/* WARNING: Removing unreachable block (ram,0x03e28cc0) */
/* WARNING: Removing unreachable block (ram,0x03e28cd0) */
/* WARNING: Removing unreachable block (ram,0x03e28cd4) */
/* WARNING: Removing unreachable block (ram,0x03e28cc8) */
/* WARNING: Removing unreachable block (ram,0x03e28ce4) */
/* WARNING: Removing unreachable block (ram,0x03e28cf8) */
/* WARNING: Removing unreachable block (ram,0x03e28d18) */
/* WARNING: Removing unreachable block (ram,0x03e28d1c) */
/* WARNING: Removing unreachable block (ram,0x03e28d68) */
/* WARNING: Removing unreachable block (ram,0x03e28ccc) */
/* WARNING: Removing unreachable block (ram,0x03e28d7c) */
/* WARNING: Removing unreachable block (ram,0x03e28d80) */
/* WARNING: Removing unreachable block (ram,0x03e28d90) */
/* WARNING: Removing unreachable block (ram,0x03e28dc0) */
/* WARNING: Removing unreachable block (ram,0x03e28dcc) */
/* WARNING: Removing unreachable block (ram,0x03e28de4) */
/* WARNING: Removing unreachable block (ram,0x03e28de8) */
/* WARNING: Removing unreachable block (ram,0x03e28e0c) */
/* WARNING: Removing unreachable block (ram,0x03e28e14) */
/* WARNING: Removing unreachable block (ram,0x055ea7a0) */
/* WARNING: Removing unreachable block (ram,0x055ea7c0) */
/* WARNING: Removing unreachable block (ram,0x055ea7d4) */
/* WARNING: Removing unreachable block (ram,0x055ea7d8) */
/* WARNING: Removing unreachable block (ram,0x055ea7ec) */
/* WARNING: Removing unreachable block (ram,0x055ea7e0) */
/* WARNING: Removing unreachable block (ram,0x055ea7f4) */
/* WARNING: Removing unreachable block (ram,0x055ea7fc) */
/* WARNING: Removing unreachable block (ram,0x055ea834) */
/* WARNING: Removing unreachable block (ram,0x055ea86c) */
/* WARNING: Removing unreachable block (ram,0x055f6d18) */
/* WARNING: Removing unreachable block (ram,0x055f6d50) */
/* WARNING: Removing unreachable block (ram,0x055f6d20) */
/* WARNING: Removing unreachable block (ram,0x055f6d28) */
/* WARNING: Removing unreachable block (ram,0x055f6d2c) */
/* WARNING: Removing unreachable block (ram,0x055f6d58) */
/* WARNING: Removing unreachable block (ram,0x055f6d5c) */
/* WARNING: Removing unreachable block (ram,0x055f6d3c) */
/* WARNING: Removing unreachable block (ram,0x057aa5e0) */
/* WARNING: Removing unreachable block (ram,0x057aa5f8) */
/* WARNING: Removing unreachable block (ram,0x057aa698) */
/* WARNING: Removing unreachable block (ram,0x057aa70c) */
/* WARNING: Removing unreachable block (ram,0x057aa6bc) */
/* WARNING: Removing unreachable block (ram,0x057aa6d0) */
/* WARNING: Removing unreachable block (ram,0x057aa708) */
/* WARNING: Removing unreachable block (ram,0x057aa634) */
/* WARNING: Removing unreachable block (ram,0x057aa648) */
/* WARNING: Removing unreachable block (ram,0x057aa728) */
/* WARNING: Removing unreachable block (ram,0x057f2848) */
/* WARNING: Removing unreachable block (ram,0x057aa668) */
/* WARNING: Removing unreachable block (ram,0x057aa748) */
/* WARNING: Removing unreachable block (ram,0x057aa710) */
/* WARNING: Removing unreachable block (ram,0x057aa67c) */
/* WARNING: Removing unreachable block (ram,0x055ea838) */
/* WARNING: Removing unreachable block (ram,0x055ea800) */
/* WARNING: Removing unreachable block (ram,0x055ea7e8) */
/* WARNING: Removing unreachable block (ram,0x055ea808) */
/* WARNING: Removing unreachable block (ram,0x055ea80c) */
/* WARNING: Removing unreachable block (ram,0x055ea820) */
/* WARNING: Removing unreachable block (ram,0x055ea824) */
/* WARNING: Removing unreachable block (ram,0x03e28be0) */
/* WARNING: Removing unreachable block (ram,0x03e28c00) */
/* WARNING: Removing unreachable block (ram,0x03e28ac4) */
/* WARNING: Removing unreachable block (ram,0x03e28ae4) */
/* WARNING: Removing unreachable block (ram,0x03e289c8) */
/* WARNING: Removing unreachable block (ram,0x03e288d4) */
/* WARNING: Removing unreachable block (ram,0x03e2872c) */
/* WARNING: Removing unreachable block (ram,0x03e28738) */
/* WARNING: Removing unreachable block (ram,0x03e28748) */
/* WARNING: Removing unreachable block (ram,0x03e28754) */
/* WARNING: Removing unreachable block (ram,0x03e28758) */
/* WARNING: Removing unreachable block (ram,0x03e28764) */
/* WARNING: Removing unreachable block (ram,0x03e2876c) */
/* WARNING: Removing unreachable block (ram,0x03e28794) */
/* WARNING: Removing unreachable block (ram,0x03e28778) */
/* WARNING: Removing unreachable block (ram,0x03e28784) */
/* WARNING: Removing unreachable block (ram,0x03e287a4) */
/* WARNING: Removing unreachable block (ram,0x03e285f0) */
/* WARNING: Removing unreachable block (ram,0x03e28600) */
/* WARNING: Removing unreachable block (ram,0x03e2860c) */
/* WARNING: Removing unreachable block (ram,0x03e28628) */
/* WARNING: Removing unreachable block (ram,0x03e28630) */
/* WARNING: Removing unreachable block (ram,0x03e28658) */
/* WARNING: Removing unreachable block (ram,0x03e2863c) */
/* WARNING: Removing unreachable block (ram,0x03e28648) */
/* WARNING: Removing unreachable block (ram,0x03e28668) */
/* WARNING: Removing unreachable block (ram,0x03e2851c) */
/* WARNING: Removing unreachable block (ram,0x03e2852c) */
/* WARNING: Removing unreachable block (ram,0x03e28538) */
/* WARNING: Removing unreachable block (ram,0x03e28544) */
/* WARNING: Removing unreachable block (ram,0x03e2854c) */
/* WARNING: Removing unreachable block (ram,0x03e28574) */
/* WARNING: Removing unreachable block (ram,0x03e28558) */
/* WARNING: Removing unreachable block (ram,0x03e28564) */
/* WARNING: Removing unreachable block (ram,0x03e28584) */
/* WARNING: Removing unreachable block (ram,0x03e28484) */
/* WARNING: Removing unreachable block (ram,0x03e28494) */
/* WARNING: Removing unreachable block (ram,0x03e28498) */
/* WARNING: Removing unreachable block (ram,0x03e28334) */
/* WARNING: Removing unreachable block (ram,0x03e28340) */
/* WARNING: Removing unreachable block (ram,0x03e28350) */
/* WARNING: Removing unreachable block (ram,0x03e2835c) */
/* WARNING: Removing unreachable block (ram,0x03e28360) */
/* WARNING: Removing unreachable block (ram,0x03e2836c) */
/* WARNING: Removing unreachable block (ram,0x03e28374) */
/* WARNING: Removing unreachable block (ram,0x03e2839c) */
/* WARNING: Removing unreachable block (ram,0x03e28380) */
/* WARNING: Removing unreachable block (ram,0x03e2838c) */
/* WARNING: Removing unreachable block (ram,0x03e283ac) */
/* WARNING: Removing unreachable block (ram,0x03e2824c) */
/* WARNING: Removing unreachable block (ram,0x03e2825c) */
/* WARNING: Removing unreachable block (ram,0x03e28260) */
/* WARNING: Removing unreachable block (ram,0x03e2813c) */
/* WARNING: Removing unreachable block (ram,0x03e2814c) */
/* WARNING: Removing unreachable block (ram,0x03e28158) */
/* WARNING: Removing unreachable block (ram,0x03e28164) */
/* WARNING: Removing unreachable block (ram,0x03e2816c) */
/* WARNING: Removing unreachable block (ram,0x03e28194) */
/* WARNING: Removing unreachable block (ram,0x03e28178) */
/* WARNING: Removing unreachable block (ram,0x03e28184) */
/* WARNING: Removing unreachable block (ram,0x03e281a4) */
/* WARNING: Removing unreachable block (ram,0x07285ba8) */
/* WARNING: Removing unreachable block (ram,0x07285ac8) */
/* WARNING: Removing unreachable block (ram,0x07285a08) */
/* WARNING: Removing unreachable block (ram,0x07285a14) */
/* WARNING: Removing unreachable block (ram,0x07285a2c) */
/* WARNING: Removing unreachable block (ram,0x07285a34) */
/* WARNING: Removing unreachable block (ram,0x07285a5c) */
/* WARNING: Removing unreachable block (ram,0x07285a40) */
/* WARNING: Removing unreachable block (ram,0x07285a4c) */
/* WARNING: Removing unreachable block (ram,0x07285a68) */
/* WARNING: Removing unreachable block (ram,0x07285a0c) */
/* WARNING: Removing unreachable block (ram,0x07285a74) */
/* WARNING: Removing unreachable block (ram,0x07285a90) */
/* WARNING: Removing unreachable block (ram,0x07285a78) */
/* WARNING: Removing unreachable block (ram,0x07285944) */
/* WARNING: Removing unreachable block (ram,0x0728575c) */
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x0728539c) */
/* WARNING: Removing unreachable block (ram,0x07285404) */
/* WARNING: Removing unreachable block (ram,0x07285418) */
/* WARNING: Removing unreachable block (ram,0x0728541c) */
/* WARNING: Removing unreachable block (ram,0x0728542c) */
/* WARNING: Removing unreachable block (ram,0x07285448) */
/* WARNING: Removing unreachable block (ram,0x072853a4) */
/* WARNING: Removing unreachable block (ram,0x072853ac) */
/* WARNING: Removing unreachable block (ram,0x072853cc) */
/* WARNING: Removing unreachable block (ram,0x072854bc) */
/* WARNING: Removing unreachable block (ram,0x0414446c) */
/* WARNING: Removing unreachable block (ram,0x041444d0) */
/* WARNING: Removing unreachable block (ram,0x041444a8) */
/* WARNING: Removing unreachable block (ram,0x041444d4) */
/* WARNING: Removing unreachable block (ram,0x0414451c) */
/* WARNING: Removing unreachable block (ram,0x04144528) */
/* WARNING: Removing unreachable block (ram,0x0414452c) */
/* WARNING: Removing unreachable block (ram,0x04144540) */
/* WARNING: Removing unreachable block (ram,0x0414454c) */
/* WARNING: Removing unreachable block (ram,0x04144550) */
/* WARNING: Removing unreachable block (ram,0x041445c4) */
/* WARNING: Removing unreachable block (ram,0x041445d4) */
/* WARNING: Removing unreachable block (ram,0x04144644) */
/* WARNING: Removing unreachable block (ram,0x0414466c) */
/* WARNING: Removing unreachable block (ram,0x04144678) */
/* WARNING: Removing unreachable block (ram,0x041455b4) */
/* WARNING: Removing unreachable block (ram,0x041455e0) */
/* WARNING: Removing unreachable block (ram,0x04145600) */
/* WARNING: Removing unreachable block (ram,0x04145604) */
/* WARNING: Removing unreachable block (ram,0x04145610) */
/* WARNING: Removing unreachable block (ram,0x0414561c) */
/* WARNING: Removing unreachable block (ram,0x04145624) */
/* WARNING: Removing unreachable block (ram,0x04145638) */
/* WARNING: Removing unreachable block (ram,0x04145644) */
/* WARNING: Removing unreachable block (ram,0x041456b0) */
/* WARNING: Removing unreachable block (ram,0x041456bc) */
/* WARNING: Removing unreachable block (ram,0x04145a30) */
/* WARNING: Removing unreachable block (ram,0x041456c0) */
/* WARNING: Removing unreachable block (ram,0x041456d4) */
/* WARNING: Removing unreachable block (ram,0x041456e0) */
/* WARNING: Removing unreachable block (ram,0x041456ec) */
/* WARNING: Removing unreachable block (ram,0x041456f4) */
/* WARNING: Removing unreachable block (ram,0x0414585c) */
/* WARNING: Removing unreachable block (ram,0x04145700) */
/* WARNING: Removing unreachable block (ram,0x0414570c) */
/* WARNING: Removing unreachable block (ram,0x04145868) */
/* WARNING: Removing unreachable block (ram,0x04145a34) */
/* WARNING: Removing unreachable block (ram,0x0414587c) */
/* WARNING: Removing unreachable block (ram,0x04145884) */
/* WARNING: Removing unreachable block (ram,0x04145894) */
/* WARNING: Removing unreachable block (ram,0x0414589c) */
/* WARNING: Removing unreachable block (ram,0x041458c4) */
/* WARNING: Removing unreachable block (ram,0x041458a8) */
/* WARNING: Removing unreachable block (ram,0x041458b4) */
/* WARNING: Removing unreachable block (ram,0x041458d0) */
/* WARNING: Removing unreachable block (ram,0x0414597c) */
/* WARNING: Removing unreachable block (ram,0x04145988) */
/* WARNING: Removing unreachable block (ram,0x041459a0) */
/* WARNING: Removing unreachable block (ram,0x041459a8) */
/* WARNING: Removing unreachable block (ram,0x041459d0) */
/* WARNING: Removing unreachable block (ram,0x041459b4) */
/* WARNING: Removing unreachable block (ram,0x041459c0) */
/* WARNING: Removing unreachable block (ram,0x041459dc) */
/* WARNING: Removing unreachable block (ram,0x041459e8) */
/* WARNING: Removing unreachable block (ram,0x04145a38) */
/* WARNING: Removing unreachable block (ram,0x04145a48) */
/* WARNING: Removing unreachable block (ram,0x04145a70) */
/* WARNING: Removing unreachable block (ram,0x04145a7c) */
/* WARNING: Removing unreachable block (ram,0x04145a80) */
/* WARNING: Removing unreachable block (ram,0x04145a98) */
/* WARNING: Removing unreachable block (ram,0x04145aa0) */
/* WARNING: Removing unreachable block (ram,0x04145ac8) */
/* WARNING: Removing unreachable block (ram,0x04145aac) */
/* WARNING: Removing unreachable block (ram,0x04145ab8) */
/* WARNING: Removing unreachable block (ram,0x04145ad4) */
/* WARNING: Removing unreachable block (ram,0x04145ae0) */
/* WARNING: Removing unreachable block (ram,0x04145ae4) */
/* WARNING: Removing unreachable block (ram,0x04145aec) */
/* WARNING: Removing unreachable block (ram,0x04145b34) */
/* WARNING: Removing unreachable block (ram,0x04145b40) */
/* WARNING: Removing unreachable block (ram,0x04145a54) */
/* WARNING: Removing unreachable block (ram,0x04145a6c) */
/* WARNING: Removing unreachable block (ram,0x041459ec) */
/* WARNING: Removing unreachable block (ram,0x041459f4) */
/* WARNING: Removing unreachable block (ram,0x041459f8) */
/* WARNING: Removing unreachable block (ram,0x041458e0) */
/* WARNING: Removing unreachable block (ram,0x041458f4) */
/* WARNING: Removing unreachable block (ram,0x04145900) */
/* WARNING: Removing unreachable block (ram,0x0414590c) */
/* WARNING: Removing unreachable block (ram,0x04145914) */
/* WARNING: Removing unreachable block (ram,0x0414593c) */
/* WARNING: Removing unreachable block (ram,0x04145920) */
/* WARNING: Removing unreachable block (ram,0x0414592c) */
/* WARNING: Removing unreachable block (ram,0x04145948) */
/* WARNING: Removing unreachable block (ram,0x04145650) */
/* WARNING: Removing unreachable block (ram,0x04145668) */
/* WARNING: Removing unreachable block (ram,0x04145674) */
/* WARNING: Removing unreachable block (ram,0x04145680) */
/* WARNING: Removing unreachable block (ram,0x04145688) */
/* WARNING: Removing unreachable block (ram,0x0414571c) */
/* WARNING: Removing unreachable block (ram,0x04145694) */
/* WARNING: Removing unreachable block (ram,0x041456a0) */
/* WARNING: Removing unreachable block (ram,0x04145728) */
/* WARNING: Removing unreachable block (ram,0x0414573c) */
/* WARNING: Removing unreachable block (ram,0x04145768) */
/* WARNING: Removing unreachable block (ram,0x04145780) */
/* WARNING: Removing unreachable block (ram,0x041457e8) */
/* WARNING: Removing unreachable block (ram,0x04145788) */
/* WARNING: Removing unreachable block (ram,0x041457a0) */
/* WARNING: Removing unreachable block (ram,0x041457ac) */
/* WARNING: Removing unreachable block (ram,0x041457b8) */
/* WARNING: Removing unreachable block (ram,0x041457c0) */
/* WARNING: Removing unreachable block (ram,0x04145828) */
/* WARNING: Removing unreachable block (ram,0x041457cc) */
/* WARNING: Removing unreachable block (ram,0x041457d8) */
/* WARNING: Removing unreachable block (ram,0x04145838) */
/* WARNING: Removing unreachable block (ram,0x0414584c) */
/* WARNING: Removing unreachable block (ram,0x04145a10) */
/* WARNING: Removing unreachable block (ram,0x04145a1c) */
/* WARNING: Removing unreachable block (ram,0x041445fc) */
/* WARNING: Removing unreachable block (ram,0x04144620) */
/* WARNING: Removing unreachable block (ram,0x04144624) */
/* WARNING: Removing unreachable block (ram,0x04144570) */
/* WARNING: Removing unreachable block (ram,0x04144598) */
/* WARNING: Removing unreachable block (ram,0x041445ac) */
/* WARNING: Removing unreachable block (ram,0x04144580) */
/* WARNING: Removing unreachable block (ram,0x041444b4) */
/* WARNING: Removing unreachable block (ram,0x072853dc) */
/* WARNING: Removing unreachable block (ram,0x046367bc) */
/* WARNING: Removing unreachable block (ram,0x046367c4) */
/* WARNING: Removing unreachable block (ram,0x04636884) */
/* WARNING: Removing unreachable block (ram,0x046367d0) */
/* WARNING: Removing unreachable block (ram,0x046367d8) */
/* WARNING: Removing unreachable block (ram,0x046367fc) */
/* WARNING: Removing unreachable block (ram,0x0463688c) */
/* WARNING: Removing unreachable block (ram,0x04636810) */
/* WARNING: Removing unreachable block (ram,0x046368c8) */
/* WARNING: Removing unreachable block (ram,0x046368cc) */
/* WARNING: Removing unreachable block (ram,0x046368d8) */
/* WARNING: Removing unreachable block (ram,0x04636918) */
/* WARNING: Removing unreachable block (ram,0x046368e4) */
/* WARNING: Removing unreachable block (ram,0x04636920) */
/* WARNING: Removing unreachable block (ram,0x0463692c) */
/* WARNING: Removing unreachable block (ram,0x04636944) */
/* WARNING: Removing unreachable block (ram,0x0463694c) */
/* WARNING: Removing unreachable block (ram,0x04636970) */
/* WARNING: Removing unreachable block (ram,0x04636990) */
/* WARNING: Removing unreachable block (ram,0x046369fc) */
/* WARNING: Removing unreachable block (ram,0x04636a1c) */
/* WARNING: Removing unreachable block (ram,0x04636a30) */
/* WARNING: Removing unreachable block (ram,0x04636ac4) */
/* WARNING: Removing unreachable block (ram,0x04636a34) */
/* WARNING: Removing unreachable block (ram,0x04636a4c) */
/* WARNING: Removing unreachable block (ram,0x04636a54) */
/* WARNING: Removing unreachable block (ram,0x04636a7c) */
/* WARNING: Removing unreachable block (ram,0x04636a60) */
/* WARNING: Removing unreachable block (ram,0x04636a6c) */
/* WARNING: Removing unreachable block (ram,0x04636a8c) */
/* WARNING: Removing unreachable block (ram,0x04636ab0) */
/* WARNING: Removing unreachable block (ram,0x04636ac8) */
/* WARNING: Removing unreachable block (ram,0x04636ae4) */
/* WARNING: Removing unreachable block (ram,0x04636b1c) */
/* WARNING: Removing unreachable block (ram,0x04636b20) */
/* WARNING: Removing unreachable block (ram,0x04636b38) */
/* WARNING: Removing unreachable block (ram,0x04636b40) */
/* WARNING: Removing unreachable block (ram,0x04636b68) */
/* WARNING: Removing unreachable block (ram,0x04636b4c) */
/* WARNING: Removing unreachable block (ram,0x04636b58) */
/* WARNING: Removing unreachable block (ram,0x04636b78) */
/* WARNING: Removing unreachable block (ram,0x04636b88) */
/* WARNING: Removing unreachable block (ram,0x04636b98) */
/* WARNING: Removing unreachable block (ram,0x04636ba0) */
/* WARNING: Removing unreachable block (ram,0x04636bc8) */
/* WARNING: Removing unreachable block (ram,0x04636bac) */
/* WARNING: Removing unreachable block (ram,0x04636bb8) */
/* WARNING: Removing unreachable block (ram,0x04636bd8) */
/* WARNING: Removing unreachable block (ram,0x04636c38) */
/* WARNING: Removing unreachable block (ram,0x04636bec) */
/* WARNING: Removing unreachable block (ram,0x04636c0c) */
/* WARNING: Removing unreachable block (ram,0x04636c14) */
/* WARNING: Removing unreachable block (ram,0x04636c44) */
/* WARNING: Removing unreachable block (ram,0x04636c20) */
/* WARNING: Removing unreachable block (ram,0x04636c2c) */
/* WARNING: Removing unreachable block (ram,0x04636c54) */
/* WARNING: Removing unreachable block (ram,0x04636c74) */
/* WARNING: Removing unreachable block (ram,0x04636c78) */
/* WARNING: Removing unreachable block (ram,0x04636cd4) */
/* WARNING: Removing unreachable block (ram,0x04636cb4) */
/* WARNING: Removing unreachable block (ram,0x04636a9c) */
/* WARNING: Removing unreachable block (ram,0x04636cd8) */
/* WARNING: Removing unreachable block (ram,0x04636cf4) */
/* WARNING: Removing unreachable block (ram,0x04636d2c) */
/* WARNING: Removing unreachable block (ram,0x04636d30) */
/* WARNING: Removing unreachable block (ram,0x04636d48) */
/* WARNING: Removing unreachable block (ram,0x04636d50) */
/* WARNING: Removing unreachable block (ram,0x04636d78) */
/* WARNING: Removing unreachable block (ram,0x04636d5c) */
/* WARNING: Removing unreachable block (ram,0x04636d68) */
/* WARNING: Removing unreachable block (ram,0x04636d88) */
/* WARNING: Removing unreachable block (ram,0x04636de4) */
/* WARNING: Removing unreachable block (ram,0x04636d98) */
/* WARNING: Removing unreachable block (ram,0x04636db8) */
/* WARNING: Removing unreachable block (ram,0x04636dc0) */
/* WARNING: Removing unreachable block (ram,0x04636df0) */
/* WARNING: Removing unreachable block (ram,0x04636dcc) */
/* WARNING: Removing unreachable block (ram,0x04636dd8) */
/* WARNING: Removing unreachable block (ram,0x04636e00) */
/* WARNING: Removing unreachable block (ram,0x04636e20) */
/* WARNING: Removing unreachable block (ram,0x04636e24) */
/* WARNING: Removing unreachable block (ram,0x04636e80) */
/* WARNING: Removing unreachable block (ram,0x04cec730) */
/* WARNING: Removing unreachable block (ram,0x046f0424) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x04636e60) */
/* WARNING: Removing unreachable block (ram,0x04636994) */
/* WARNING: Removing unreachable block (ram,0x046369c8) */
/* WARNING: Removing unreachable block (ram,0x046369d8) */
/* WARNING: Removing unreachable block (ram,0x046369dc) */
/* WARNING: Removing unreachable block (ram,0x046369ec) */
/* WARNING: Removing unreachable block (ram,0x046369e4) */
/* WARNING: Removing unreachable block (ram,0x046369f0) */
/* WARNING: Removing unreachable block (ram,0x0463690c) */
/* WARNING: Removing unreachable block (ram,0x04636818) */
/* WARNING: Removing unreachable block (ram,0x04636828) */
/* WARNING: Removing unreachable block (ram,0x04636830) */
/* WARNING: Removing unreachable block (ram,0x04636858) */
/* WARNING: Removing unreachable block (ram,0x0463683c) */
/* WARNING: Removing unreachable block (ram,0x04636848) */
/* WARNING: Removing unreachable block (ram,0x04636864) */
/* WARNING: Removing unreachable block (ram,0x0463687c) */
/* WARNING: Removing unreachable block (ram,0x04636890) */
/* WARNING: Removing unreachable block (ram,0x046368a4) */
/* WARNING: Removing unreachable block (ram,0x046368b0) */
/* WARNING: Removing unreachable block (ram,0x069aa5cc) */
/* WARNING: Removing unreachable block (ram,0x069aa5d0) */
/* WARNING: Removing unreachable block (ram,0x069aa644) */
/* WARNING: Removing unreachable block (ram,0x069aa650) */
/* WARNING: Removing unreachable block (ram,0x069aa690) */
/* WARNING: Removing unreachable block (ram,0x069aa65c) */
/* WARNING: Removing unreachable block (ram,0x046366ac) */
/* WARNING: Removing unreachable block (ram,0x04636624) */
/* WARNING: Removing unreachable block (ram,0x04636640) */
/* WARNING: Removing unreachable block (ram,0x04636650) */
/* WARNING: Removing unreachable block (ram,0x046366b4) */
/* WARNING: Removing unreachable block (ram,0x046366b8) */
/* WARNING: Removing unreachable block (ram,0x046366fc) */
/* WARNING: Removing unreachable block (ram,0x04636700) */
/* WARNING: Removing unreachable block (ram,0x0463671c) */
/* WARNING: Removing unreachable block (ram,0x04636720) */
/* WARNING: Removing unreachable block (ram,0x069aa540) */
/* WARNING: Removing unreachable block (ram,0x069aa574) */
/* WARNING: Removing unreachable block (ram,0x069aa5b8) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x04636660) */
/* WARNING: Removing unreachable block (ram,0x04636694) */
/* WARNING: Removing unreachable block (ram,0x04636540) */
/* WARNING: Removing unreachable block (ram,0x04636488) */
/* WARNING: Removing unreachable block (ram,0x04636490) */
/* WARNING: Removing unreachable block (ram,0x046364e4) */
/* WARNING: Removing unreachable block (ram,0x046364ec) */
/* WARNING: Removing unreachable block (ram,0x046364f4) */
/* WARNING: Removing unreachable block (ram,0x04636514) */
/* WARNING: Removing unreachable block (ram,0x04636544) */
/* WARNING: Removing unreachable block (ram,0x04636558) */
/* WARNING: Removing unreachable block (ram,0x04636524) */
/* WARNING: Removing unreachable block (ram,0x0463629c) */
/* WARNING: Removing unreachable block (ram,0x04636148) */
/* WARNING: Removing unreachable block (ram,0x04636150) */
/* WARNING: Removing unreachable block (ram,0x04636178) */
/* WARNING: Removing unreachable block (ram,0x04636180) */
/* WARNING: Removing unreachable block (ram,0x046361a8) */
/* WARNING: Removing unreachable block (ram,0x0463618c) */
/* WARNING: Removing unreachable block (ram,0x04636198) */
/* WARNING: Removing unreachable block (ram,0x046361b8) */
/* WARNING: Removing unreachable block (ram,0x046361e0) */
/* WARNING: Removing unreachable block (ram,0x046361e8) */
/* WARNING: Removing unreachable block (ram,0x0463620c) */
/* WARNING: Removing unreachable block (ram,0x046361f4) */
/* WARNING: Removing unreachable block (ram,0x04636200) */
/* WARNING: Removing unreachable block (ram,0x0463621c) */
/* WARNING: Removing unreachable block (ram,0x0463623c) */
/* WARNING: Removing unreachable block (ram,0x04636260) */
/* WARNING: Removing unreachable block (ram,0x046362a0) */
/* WARNING: Removing unreachable block (ram,0x046362c0) */
/* WARNING: Removing unreachable block (ram,0x046362d4) */
/* WARNING: Removing unreachable block (ram,0x046362e4) */
/* WARNING: Removing unreachable block (ram,0x0463634c) */
/* WARNING: Removing unreachable block (ram,0x04636354) */
/* WARNING: Removing unreachable block (ram,0x0463636c) */
/* WARNING: Removing unreachable block (ram,0x04636374) */
/* WARNING: Removing unreachable block (ram,0x0463639c) */
/* WARNING: Removing unreachable block (ram,0x04636380) */
/* WARNING: Removing unreachable block (ram,0x0463638c) */
/* WARNING: Removing unreachable block (ram,0x046363ac) */
/* WARNING: Removing unreachable block (ram,0x046363c4) */
/* WARNING: Removing unreachable block (ram,0x046363ec) */
/* WARNING: Removing unreachable block (ram,0x046363f4) */
/* WARNING: Removing unreachable block (ram,0x0463641c) */
/* WARNING: Removing unreachable block (ram,0x04636400) */
/* WARNING: Removing unreachable block (ram,0x0463640c) */
/* WARNING: Removing unreachable block (ram,0x04636428) */
/* WARNING: Removing unreachable block (ram,0x04636448) */
/* WARNING: Removing unreachable block (ram,0x04636468) */
/* WARNING: Removing unreachable block (ram,0x046364a4) */
/* WARNING: Removing unreachable block (ram,0x0463646c) */
/* WARNING: Removing unreachable block (ram,0x046364a8) */
/* WARNING: Removing unreachable block (ram,0x0463645c) */
/* WARNING: Removing unreachable block (ram,0x04636474) */
/* WARNING: Removing unreachable block (ram,0x04636460) */
/* WARNING: Removing unreachable block (ram,0x04636478) */
/* WARNING: Removing unreachable block (ram,0x046362e8) */
/* WARNING: Removing unreachable block (ram,0x046362ec) */
/* WARNING: Removing unreachable block (ram,0x04636304) */
/* WARNING: Removing unreachable block (ram,0x04636334) */
/* WARNING: Removing unreachable block (ram,0x0463627c) */
/* WARNING: Removing unreachable block (ram,0x04635fe0) */
/* WARNING: Removing unreachable block (ram,0x04635c8c) */
/* WARNING: Removing unreachable block (ram,0x04635ca0) */
/* WARNING: Removing unreachable block (ram,0x04635b8c) */
/* WARNING: Removing unreachable block (ram,0x04635b64) */
/* WARNING: Removing unreachable block (ram,0x04635b68) */
/* WARNING: Removing unreachable block (ram,0x04635b70) */
/* WARNING: Removing unreachable block (ram,0x04635620) */
/* WARNING: Removing unreachable block (ram,0x0463562c) */
/* WARNING: Removing unreachable block (ram,0x046355d4) */
/* WARNING: Removing unreachable block (ram,0x04635650) */
/* WARNING: Removing unreachable block (ram,0x04635654) */
/* WARNING: Removing unreachable block (ram,0x04635670) */
/* WARNING: Removing unreachable block (ram,0x04635680) */
/* WARNING: Removing unreachable block (ram,0x0463568c) */
/* WARNING: Removing unreachable block (ram,0x04635694) */
/* WARNING: Removing unreachable block (ram,0x046356ac) */
/* WARNING: Removing unreachable block (ram,0x046356b4) */
/* WARNING: Removing unreachable block (ram,0x046356d8) */
/* WARNING: Removing unreachable block (ram,0x046356c0) */
/* WARNING: Removing unreachable block (ram,0x046356cc) */
/* WARNING: Removing unreachable block (ram,0x046356e8) */
/* WARNING: Removing unreachable block (ram,0x04635854) */
/* WARNING: Removing unreachable block (ram,0x0463585c) */
/* WARNING: Removing unreachable block (ram,0x04635864) */
/* WARNING: Removing unreachable block (ram,0x04635708) */
/* WARNING: Removing unreachable block (ram,0x04635724) */
/* WARNING: Removing unreachable block (ram,0x04635728) */
/* WARNING: Removing unreachable block (ram,0x04635730) */
/* WARNING: Removing unreachable block (ram,0x04635734) */
/* WARNING: Removing unreachable block (ram,0x04635750) */
/* WARNING: Removing unreachable block (ram,0x04635754) */
/* WARNING: Removing unreachable block (ram,0x04635824) */
/* WARNING: Removing unreachable block (ram,0x0463576c) */
/* WARNING: Removing unreachable block (ram,0x04635780) */
/* WARNING: Removing unreachable block (ram,0x04635784) */
/* WARNING: Removing unreachable block (ram,0x0463578c) */
/* WARNING: Removing unreachable block (ram,0x04635790) */
/* WARNING: Removing unreachable block (ram,0x046357a4) */
/* WARNING: Removing unreachable block (ram,0x046357a8) */
/* WARNING: Removing unreachable block (ram,0x046357f0) */
/* WARNING: Removing unreachable block (ram,0x046357fc) */
/* WARNING: Removing unreachable block (ram,0x04635810) */
/* WARNING: Removing unreachable block (ram,0x04635814) */
/* WARNING: Removing unreachable block (ram,0x046355f0) */
/* WARNING: Removing unreachable block (ram,0x04635610) */
/* WARNING: Removing unreachable block (ram,0x046355ac) */
/* WARNING: Removing unreachable block (ram,0x046355b0) */
/* WARNING: Removing unreachable block (ram,0x046355b8) */
/* WARNING: Removing unreachable block (ram,0x04635158) */
/* WARNING: Removing unreachable block (ram,0x0463517c) */
/* WARNING: Removing unreachable block (ram,0x04635184) */
/* WARNING: Removing unreachable block (ram,0x046351ac) */
/* WARNING: Removing unreachable block (ram,0x04635190) */
/* WARNING: Removing unreachable block (ram,0x0463519c) */
/* WARNING: Removing unreachable block (ram,0x046351b8) */
/* WARNING: Removing unreachable block (ram,0x046351c8) */
/* WARNING: Removing unreachable block (ram,0x046351dc) */
/* WARNING: Removing unreachable block (ram,0x046351e4) */
/* WARNING: Removing unreachable block (ram,0x0463520c) */
/* WARNING: Removing unreachable block (ram,0x046351f0) */
/* WARNING: Removing unreachable block (ram,0x046351fc) */
/* WARNING: Removing unreachable block (ram,0x0463521c) */
/* WARNING: Removing unreachable block (ram,0x046345e8) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

ulong * MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___TryReplaceWithRemoteSpawnable
                  (long param_1,long param_2,ulong *param_3,long *param_4,ulong param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined *puVar20;
  undefined *puVar21;
  long *extraout_x1;
  ulong *puVar22;
  long lVar23;
  long *plVar24;
  byte bVar25;
  char cVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  int *piVar31;
  undefined *puVar32;
  long *plVar33;
  ulong *puVar34;
  undefined *puVar35;
  long *plVar36;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar37;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar38;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined8 auStack_c0 [2];
  undefined8 uStack_70;
  
  puVar13 = param_3;
  plVar24 = param_4;
  if ((bRam0000000007e19131 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4f8);
    bRam0000000007e19131 = 1;
  }
  plVar36 = *(long **)(param_1 + 0x48);
  if (plVar36 != (long *)0x0) {
    lVar27 = *plVar36;
    uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar11 = (undefined8 *)(lVar27 + (long)(*piVar31 + 0x14) * 0x10 + 0x138);
          goto LAB_0463420c;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar36,*(long *)PTR_DAT_0777a498,0x14);
LAB_0463420c:
    puVar13 = (ulong *)puVar11[1];
    puVar12 = (ulong *)(*(code *)*puVar11)(plVar36,param_3);
    if (param_2 == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x50);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar24 = (long *)0x0;
      puVar13 = puVar12;
      uVar7 = func_0x062b61b0(*(long *)(param_1 + 0x70),uVar7);
      plVar36 = *(long **)(param_1 + 0x78);
      if (plVar36 != (long *)0x0) {
        lVar27 = *plVar36;
        uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar30 != 0) {
          piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777e4f8) {
              puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_046342a4;
            }
            uVar30 = uVar30 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar30 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar36,*(long *)PTR_DAT_0777e4f8,0);
LAB_046342a4:
                    /* WARNING: Could not recover jumptable at 0x046342c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar13 = (ulong *)(*(code *)*puVar11)(plVar36,puVar12,uVar7,param_4,puVar11[1]);
        return puVar13;
      }
    }
  }
  auVar39 = func_0x03280cac();
  lVar27 = auVar39._8_8_;
  plVar33 = auVar39._0_8_;
  puVar4 = &uStack_70;
  uStack_70 = 0x46342cc;
  puVar12 = puVar13;
  plVar36 = plVar24;
  if ((bRam0000000007e19132 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e500);
    func_0x03280a18(PTR_DAT_0777a978);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e19132 = 1;
  }
  plVar18 = (long *)0x7e19000;
  if ((lVar27 == 0) ||
     (plVar14 = (long *)func_0x03ced81c(lVar27,*(undefined8 *)PTR_DAT_0777e500),
     puVar13 == (ulong *)0x0)) {
LAB_04634604:
    auVar39 = func_0x03280cac();
    plVar33 = auVar39._8_8_;
    plVar24 = auVar39._0_8_;
    puVar4 = auStack_c0;
    auStack_c0[0] = 0x4634608;
    puVar22 = puVar12;
    if ((bRam0000000007e19133 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0777e508);
      func_0x03280a18(PTR_DAT_0777e510);
      func_0x03280a18(PTR_DAT_0774e5d8);
      bRam0000000007e19133 = 1;
      puVar22 = puVar12;
    }
    puVar20 = PTR_DAT_0777a498;
    puVar12 = (ulong *)plVar24[9];
    puVar34 = puVar13;
    plVar19 = plVar18;
    plVar14 = unaff_x24;
    if (puVar12 != (ulong *)0x0) {
      uVar28 = *puVar12;
      uVar30 = (ulong)*(ushort *)(uVar28 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(uVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar11 = (undefined8 *)(uVar28 + (long)(*piVar31 + 0x14) * 0x10 + 0x138);
            goto LAB_046346e0;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(puVar12,*(long *)PTR_DAT_0777a498,0x14);
LAB_046346e0:
      puVar22 = (ulong *)puVar11[1];
      puVar13 = (ulong *)(*(code *)*puVar11)(puVar12,plVar33);
      puVar32 = PTR_DAT_07779820;
      puVar34 = (ulong *)puVar20;
      if (puVar13 != (ulong *)0x0) {
        uVar28 = *puVar13;
        plVar33 = (long *)plVar24[9];
        uVar30 = (ulong)*(ushort *)(uVar28 + 0x12e);
        if (uVar30 != 0) {
          piVar31 = (int *)(*(long *)(uVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_07779820) {
              puVar11 = (undefined8 *)(uVar28 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_04634750;
            }
            uVar30 = uVar30 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar30 != 0);
        }
        puVar22 = (ulong *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(puVar13);
LAB_04634750:
        uVar16 = (*(code *)*puVar11)(puVar13,puVar11[1]);
        puVar12 = puVar13;
        plVar14 = (long *)puVar32;
        if (plVar33 != (long *)0x0) {
          lVar27 = *plVar33;
          uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
          if (uVar30 != 0) {
            piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
                puVar11 = (undefined8 *)(lVar27 + (long)(*piVar31 + 4) * 0x10 + 0x138);
                goto LAB_046347b4;
              }
              uVar30 = uVar30 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar30 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar33,*(long *)puVar20,4);
LAB_046347b4:
          puVar22 = (ulong *)puVar11[1];
          plVar17 = (long *)(*(code *)*puVar11)(plVar33,uVar16);
          puVar12 = (ulong *)plVar24[9];
          if (puVar12 != (ulong *)0x0) {
            uVar28 = *puVar12;
            uVar30 = (ulong)*(ushort *)(uVar28 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(uVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
                  puVar11 = (undefined8 *)(uVar28 + (long)(*piVar31 + 0x20) * 0x10 + 0x138);
                  goto LAB_04634820;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(puVar12,*(long *)puVar20,0x20);
LAB_04634820:
            unaff_x25 = PTR_DAT_0777c248;
            puVar22 = (ulong *)puVar11[1];
            uVar30 = (*(code *)*puVar11)(puVar12,plVar17);
            if ((uVar30 & 1) == 0) {
              plVar33 = plVar17;
              if (plVar17 == (long *)0x0) goto LAB_04634b08;
              lVar27 = *plVar17;
              uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar31 + -2) == *(long *)unaff_x25) {
                    puVar11 = (undefined8 *)(lVar27 + (long)(*piVar31 + 0x11) * 0x10 + 0x138);
                    goto LAB_04634890;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              puVar22 = (ulong *)0x11;
              puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_04634890:
              plVar17 = (long *)(*(code *)*puVar11)(plVar17,puVar11[1]);
            }
            if (plVar17 == (long *)0x0) {
              return (ulong *)**(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
            }
            lVar27 = *plVar17;
            uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)unaff_x25) {
                  puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_04634908;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            puVar22 = (ulong *)0x0;
            puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_04634908:
            lVar27 = (*(code *)*puVar11)(plVar17,puVar11[1]);
            puVar20 = PTR_DAT_0777e510;
            plVar33 = plVar17;
            if (lVar27 != 0) {
              puVar12 = (ulong *)(ulong)*(uint *)(lVar27 + 0x18);
              do {
                uVar9 = (int)puVar12 - 1;
                puVar12 = (ulong *)(ulong)uVar9;
                if ((int)uVar9 < 0) {
                  return (ulong *)0x0;
                }
                lVar27 = *plVar17;
                puVar34 = (ulong *)plVar24[0x12];
                uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar30 != 0) {
                  piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar31 + -2) == *(long *)unaff_x25) {
                      puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
                      goto LAB_0463497c;
                    }
                    uVar30 = uVar30 - 1;
                    piVar31 = piVar31 + 4;
                  } while (uVar30 != 0);
                }
                puVar22 = (ulong *)0x0;
                puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_0463497c:
                lVar27 = (*(code *)*puVar11)(plVar17,puVar11[1]);
                plVar19 = plVar18;
                unaff_x26 = puVar20;
                if (lVar27 == 0) goto LAB_04634b08;
                puVar22 = *(ulong **)puVar20;
                plVar18 = (long *)func_0x0414419c(lVar27,puVar12);
                if (plVar18 == (long *)0x0) goto LAB_04634b08;
                lVar27 = *plVar18;
                uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                if (uVar30 != 0) {
                  piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar31 + -2) == *(long *)puVar32) {
                      puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
                      goto LAB_046349ec;
                    }
                    uVar30 = uVar30 - 1;
                    piVar31 = piVar31 + 4;
                  } while (uVar30 != 0);
                }
                puVar22 = (ulong *)0x0;
                puVar11 = (undefined8 *)func_0x03256b10(plVar18);
LAB_046349ec:
                uVar16 = (*(code *)*puVar11)(plVar18,puVar11[1]);
                plVar19 = plVar18;
                if (puVar34 == (ulong *)0x0) goto LAB_04634b08;
                puVar22 = (ulong *)0x0;
                uVar30 = MergeEngine_ECS_Systems_Board_BoardSystem__IsUnlockedItemOnBoard
                                   (puVar34,uVar16);
              } while ((uVar30 & 1) == 0);
              lVar27 = *plVar17;
              uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar31 + -2) == *(long *)unaff_x25) {
                    puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
                    goto LAB_04634a78;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              puVar22 = (ulong *)0x0;
              puVar11 = (undefined8 *)func_0x03256b10(plVar17);
LAB_04634a78:
              lVar27 = (*(code *)*puVar11)(plVar17,puVar11[1]);
              if (lVar27 != 0) {
                puVar22 = *(ulong **)puVar20;
                plVar18 = (long *)func_0x0414419c(lVar27,puVar12);
                if (plVar18 != (long *)0x0) {
                  lVar27 = *plVar18;
                  uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                  if (uVar30 != 0) {
                    piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar31 + -2) == *(long *)puVar32) {
                        puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
                        goto LAB_04634ae8;
                      }
                      uVar30 = uVar30 - 1;
                      piVar31 = piVar31 + 4;
                    } while (uVar30 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar32,0);
LAB_04634ae8:
                    /* WARNING: Could not recover jumptable at 0x04634b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar13 = (ulong *)(*(code *)*puVar11)(plVar18,puVar11[1]);
                  return puVar13;
                }
              }
            }
          }
        }
      }
    }
LAB_04634b08:
    uVar16 = 0x4634b0c;
    auVar39 = func_0x03280cac();
    puVar20 = unaff_x25;
  }
  else {
    uVar28 = *puVar13;
    uVar30 = (ulong)*(ushort *)(uVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(uVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a978) {
          puVar11 = (undefined8 *)(uVar28 + (long)(*piVar31 + 1) * 0x10 + 0x138);
          goto LAB_046343b4;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar12 = (ulong *)0x1;
    puVar11 = (undefined8 *)func_0x03256b10(puVar13);
LAB_046343b4:
    lVar15 = (*(code *)*puVar11)(puVar13,puVar11[1]);
    plVar18 = plVar14;
    if (plVar14 == (long *)0x0) {
      plVar36 = (long *)0x0;
      if (lVar15 != 0) goto LAB_046343d8;
      goto LAB_04634604;
    }
    plVar36 = (long *)plVar14[6];
    if (lVar15 == 0) goto LAB_04634604;
LAB_046343d8:
    puVar12 = *(ulong **)(lVar27 + 0x70);
    param_5 = 0;
    puVar22 = (ulong *)func_0x060e9bf4(lVar15,*(undefined8 *)(lVar27 + 0x60));
    puVar20 = PTR_DAT_0777a498;
    plVar18 = (long *)plVar33[9];
    if (plVar18 == (long *)0x0) goto LAB_04634604;
    lVar27 = *plVar18;
    uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar11 = (undefined8 *)(lVar27 + (long)(*piVar31 + 0x14) * 0x10 + 0x138);
          goto LAB_0463444c;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777a498,0x14);
LAB_0463444c:
    puVar12 = (ulong *)puVar11[1];
    puVar34 = (ulong *)(*(code *)*puVar11)(plVar18,puVar13);
    auVar39._8_8_ = puVar34;
    auVar39._0_8_ = plVar33;
    unaff_x25 = puVar20;
    if (puVar34 == (ulong *)0x0) goto LAB_04634604;
    uVar28 = *puVar34;
    plVar18 = (long *)plVar33[9];
    uVar30 = (ulong)*(ushort *)(uVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(uVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_07779820) {
          puVar11 = (undefined8 *)(uVar28 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_046344bc;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar12 = (ulong *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(puVar34);
LAB_046344bc:
    plVar14 = (long *)(*(code *)*puVar11)(puVar34,puVar11[1]);
    puVar13 = puVar34;
    if (plVar18 == (long *)0x0) goto LAB_04634604;
    lVar27 = *plVar18;
    uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
          puVar11 = (undefined8 *)(lVar27 + (long)(*piVar31 + 4) * 0x10 + 0x138);
          goto LAB_04634520;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar20,4);
LAB_04634520:
    puVar12 = (ulong *)puVar11[1];
    plVar19 = (long *)(*(code *)*puVar11)(plVar18,plVar14);
    unaff_x24 = plVar14;
    if (plVar33[0xe] == 0) goto LAB_04634604;
    uVar30 = func_0x062b17b4(plVar33[0xe],0);
    if ((uVar30 & 1) == 0) {
      return puVar22;
    }
    plVar18 = plVar19;
    if (plVar33[0xe] == 0) goto LAB_04634604;
    uVar30 = func_0x062b21a4(plVar33[0xe],0);
    if ((uVar30 & 1) == 0) {
      return puVar22;
    }
    if (plVar19 == (long *)0x0) goto LAB_04634604;
    lVar27 = *plVar19;
    uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar11 = (undefined8 *)(lVar27 + (long)(*piVar31 + 4) * 0x10 + 0x138);
          goto LAB_046345bc;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777c248,4);
LAB_046345bc:
    uVar30 = (*(code *)*puVar11)(plVar19,puVar11[1]);
    if ((uVar30 & 1) == 0) {
      return puVar22;
    }
    plVar36 = *(long **)(*(long *)(plVar24[4] + 0xc0) + 0x58);
    uVar16 = 0x46345e8;
    puVar12 = puVar22;
  }
  plVar18 = auVar39._8_8_;
  lVar27 = auVar39._0_8_;
  *(undefined **)((long)puVar4 + -0x60) = unaff_x29;
  *(undefined8 *)((long)puVar4 + -0x58) = uVar16;
  *(undefined **)((long)puVar4 + -0x50) = unaff_x28;
  *(undefined **)((long)puVar4 + -0x48) = unaff_x27;
  *(undefined **)((long)puVar4 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar4 + -0x38) = puVar20;
  *(long **)((long)puVar4 + -0x30) = plVar14;
  *(long **)((long)puVar4 + -0x28) = plVar19;
  *(ulong **)((long)puVar4 + -0x20) = puVar34;
  *(ulong **)((long)puVar4 + -0x18) = puVar12;
  *(long **)((long)puVar4 + -0x10) = plVar33;
  *(long **)((long)puVar4 + -8) = plVar24;
  uVar16 = 0x7e19000;
  puVar13 = puVar22;
  plVar24 = plVar36;
  if ((bRam0000000007e19134 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07774a48);
    func_0x03280a18(PTR_DAT_0777e518);
    func_0x03280a18(PTR_DAT_0777e520);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0777e528);
    func_0x03280a18(PTR_DAT_0777e530);
    func_0x03280a18(PTR_DAT_0777e538);
    func_0x03280a18(PTR_DAT_0777e540);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777e4e8);
    func_0x03280a18(PTR_DAT_0777e4f0);
    func_0x03280a18(PTR_DAT_0777e550);
    bRam0000000007e19134 = 1;
  }
  puVar32 = PTR_DAT_0777e548;
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_04634c48;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    puVar13 = (ulong *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar18);
LAB_04634c48:
    lVar15 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    unaff_x26 = puVar32;
    if (lVar15 != 0) {
      uVar16 = *(undefined8 *)(lVar15 + 0x58);
      lVar15 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar15 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = func_0x0325681c();
      }
      unaff_x27 = PTR_DAT_0777e518;
      plVar14 = *(long **)(*(long *)(lVar15 + 0xb8) + 8);
      if (plVar14 == (long *)0x0) {
        lVar27 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c();
        }
        if (*(int *)(lVar27 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar27 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c();
        }
        uVar37 = **(undefined8 **)(lVar27 + 0xb8);
        uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e538);
        func_0x053569b8(uVar16,uVar37,*(undefined8 *)(*(long *)(plVar36[4] + 0xc0) + 0x70),0);
        lVar15 = *(long *)(plVar36[4] + 0xc0);
        lVar27 = *(long *)(lVar15 + 0x68);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c();
          lVar15 = *(long *)(plVar36[4] + 0xc0);
        }
        *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 8) = uVar16;
        lVar27 = *(long *)(lVar15 + 0x68);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = func_0x0325681c();
        }
        puVar13 = (ulong *)(*(long *)(lVar27 + 0xb8) + 8);
        goto SUB_032809c4;
      }
      puVar13 = *(ulong **)PTR_DAT_0777e518;
      uVar16 = func_0x03d50a94(uVar16,plVar14);
      lVar15 = *plVar18;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar32) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar31 * 0x10 + 0x138);
            goto LAB_04634dc8;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar13 = (ulong *)0x0;
      puVar11 = (undefined8 *)func_0x03256b10(plVar18);
LAB_04634dc8:
      lVar15 = (*(code *)*puVar11)(plVar18,puVar11[1]);
      if (lVar15 != 0) {
        plVar18 = *(long **)(lVar15 + 0x50);
        lVar15 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar15 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x0325681c();
        }
        unaff_x28 = PTR_DAT_0777e528;
        unaff_x29 = PTR_DAT_0777e520;
        unaff_x27 = PTR_DAT_07774a48;
        unaff_x26 = PTR_DAT_0774ea58;
        plVar14 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x10);
        if (plVar14 == (long *)0x0) {
          lVar27 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c();
          }
          if (*(int *)(lVar27 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar27 = *(long *)(*(long *)(plVar36[4] + 0xc0) + 0x68);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c();
          }
          uVar37 = **(undefined8 **)(lVar27 + 0xb8);
          uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e540);
          func_0x053569b8(uVar16,uVar37,*(undefined8 *)(*(long *)(plVar36[4] + 0xc0) + 0x78),0);
          lVar15 = *(long *)(plVar36[4] + 0xc0);
          lVar27 = *(long *)(lVar15 + 0x68);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c();
            lVar15 = *(long *)(plVar36[4] + 0xc0);
          }
          *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x10) = uVar16;
          lVar27 = *(long *)(lVar15 + 0x68);
          if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
            lVar27 = func_0x0325681c();
          }
          puVar13 = (ulong *)(*(long *)(lVar27 + 0xb8) + 0x10);
          goto SUB_032809c4;
        }
        uVar37 = func_0x03d50a94(plVar18,plVar14,*(undefined8 *)PTR_DAT_0777e520);
        puVar13 = *(ulong **)unaff_x28;
        uVar37 = func_0x03d6049c(uVar16,uVar37);
        uVar37 = func_0x03d3c654(uVar37,*(undefined8 *)unaff_x27);
        plVar33 = (long *)func_0x03d5ffd0(uVar37,*(undefined8 *)unaff_x26);
        if ((puVar22 != (ulong *)0x0) &&
           (plVar19 = (long *)puVar22[2], plVar36 = plVar33, plVar19 != (long *)0x0)) {
          plVar33 = (long *)(**(code **)(*plVar19 + 0x1c8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
          if (*(long *)(lVar27 + 0x70) != 0) {
            plVar19 = *(long **)(lVar27 + 0x48);
            uVar30 = func_0x062b1fc8(*(long *)(lVar27 + 0x70),0);
            puVar32 = PTR_DAT_0777a498;
            uVar16 = 0;
            plVar18 = plVar33;
            if (plVar19 != (long *)0x0) {
              lVar15 = *plVar19;
              puVar13 = (ulong *)(uVar30 & 0xffffffff);
              uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 0xf) * 0x10 + 0x138);
                    goto LAB_04634fc8;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777a498,0xf);
LAB_04634fc8:
              plVar24 = (long *)puVar11[1];
              plVar14 = (long *)(*(code *)*puVar11)(plVar19,plVar33);
              if (plVar14 == (long *)0x0) {
                return (ulong *)0x0;
              }
              uVar30 = *puVar22;
              bVar25 = *(byte *)(*(long *)PTR_DAT_0777e530 + 0x130);
              unaff_x27 = puVar32;
              if ((*(byte *)(uVar30 + 0x130) < bVar25) ||
                 (*(long *)(*(long *)(uVar30 + 200) + (ulong)bVar25 * 8 + -8) !=
                  *(long *)PTR_DAT_0777e530)) {
                bVar25 = *(byte *)(*(long *)PTR_DAT_0777e550 + 0x130);
                if ((*(byte *)(uVar30 + 0x130) < bVar25) ||
                   (*(long *)(*(long *)(uVar30 + 200) + (ulong)bVar25 * 8 + -8) !=
                    *(long *)PTR_DAT_0777e550)) {
                  lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e4e8);
                  func_0x06b29aa4(lVar15,0);
                }
                else {
                  lVar15 = func_0x03280ca0();
                  func_0x06b29a84(lVar15,0);
                  uVar16 = 0;
                  if (lVar15 == 0) goto LAB_0463525c;
                  *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)((long)puVar22 + 0x24);
                  *(char *)(lVar15 + 0x28) = (char)puVar22[5];
                  *(undefined1 *)(lVar15 + 0x29) = *(undefined1 *)((long)puVar22 + 0x29);
                }
              }
              else {
                lVar15 = func_0x03280ca0();
                func_0x06b29a94(lVar15,0);
                uVar16 = 0;
                if (lVar15 == 0) goto LAB_0463525c;
                *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)((long)puVar22 + 0x24);
              }
              puVar20 = PTR_DAT_0777e4f0;
              unaff_x28 = PTR_DAT_07779820;
              lVar29 = *plVar14;
              uVar30 = (ulong)*(ushort *)(lVar29 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar11 = (undefined8 *)(lVar29 + (long)*piVar31 * 0x10 + 0x138);
                    goto LAB_04635114;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              puVar11 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07779820,0);
LAB_04635114:
              unaff_x26 = (undefined *)(*(code *)*puVar11)(plVar14,puVar11[1]);
              puVar20 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar20);
              puVar13 = (ulong *)0x0;
              func_0x06104718(puVar20,unaff_x26);
              uVar16 = 0;
              if (lVar15 != 0) {
                puVar13 = (ulong *)(lVar15 + 0x10);
                *puVar13 = (ulong)puVar20;
                goto SUB_032809c4;
              }
            }
          }
        }
      }
    }
  }
LAB_0463525c:
  auVar39 = func_0x03280cac();
  puVar32 = PTR_DAT_0777e558;
  plVar19 = auVar39._8_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x4635260;
  *(undefined **)((long)puVar4 + -0xb0) = unaff_x28;
  *(undefined **)((long)puVar4 + -0xa8) = unaff_x27;
  *(undefined **)((long)puVar4 + -0xa0) = unaff_x26;
  *(undefined **)((long)puVar4 + -0x98) = puVar20;
  *(long **)((long)puVar4 + -0x90) = plVar14;
  *(undefined8 *)((long)puVar4 + -0x88) = uVar16;
  *(long **)((long)puVar4 + -0x80) = plVar18;
  *(long **)((long)puVar4 + -0x78) = plVar36;
  *(ulong **)((long)puVar4 + -0x70) = puVar22;
  *(long *)((long)puVar4 + -0x68) = lVar27;
  puVar12 = puVar13;
  plVar33 = plVar24;
  uVar30 = param_5;
  plVar36 = param_6;
  uVar16 = param_7;
  uVar37 = param_8;
  if ((bRam0000000007e19135 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e560);
    func_0x03280a18(PTR_DAT_0777e568);
    func_0x03280a18(PTR_DAT_0777e570);
    func_0x03280a18(PTR_DAT_0777a600);
    func_0x03280a18(PTR_DAT_0777e558);
    func_0x03280a18(PTR_DAT_0777e578);
    func_0x03280a18(PTR_DAT_0777e580);
    func_0x03280a18(PTR_DAT_0774eeb0);
    func_0x03280a18(PTR_DAT_0777e588);
    bRam0000000007e19135 = 1;
  }
  bVar25 = (byte)uVar37;
  lVar27 = func_0x03280ca0(*(undefined8 *)puVar32);
  func_0x06a01f0c(lVar27,0);
  puVar20 = PTR_DAT_0777a600;
  if (plVar19 != (long *)0x0) {
    lVar15 = *plVar19;
    uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar28 != 0) {
      piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a600) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_0463538c;
        }
        uVar28 = uVar28 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar28 != 0);
    }
    puVar12 = (ulong *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar19);
LAB_0463538c:
    uVar7 = (*(code *)*puVar11)(plVar19,puVar11[1]);
    puVar32 = puVar20;
    if (lVar27 != 0) {
      *(undefined4 *)(lVar27 + 0x10) = uVar7;
      lVar15 = *plVar19;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 2) * 0x10 + 0x138);
            goto LAB_046353f0;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar20,2);
LAB_046353f0:
      uVar7 = (*(code *)*puVar11)(plVar19,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x14) = uVar7;
      lVar15 = *plVar19;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 3) * 0x10 + 0x138);
            goto LAB_04635450;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar20,3);
LAB_04635450:
      uVar7 = (*(code *)*puVar11)(plVar19,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x18) = uVar7;
      lVar15 = *plVar19;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 1) * 0x10 + 0x138);
            goto LAB_046354b0;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar20,1);
LAB_046354b0:
      uVar7 = (*(code *)*puVar11)(plVar19,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x1c) = uVar7;
      lVar15 = *plVar19;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 0x11) * 0x10 + 0x138);
            goto LAB_04635510;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar20,0x11);
LAB_04635510:
      uVar7 = (*(code *)*puVar11)(plVar19,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x20) = uVar7;
      lVar15 = *plVar19;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar20) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 8) * 0x10 + 0x138);
            goto LAB_04635570;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar20,8);
LAB_04635570:
      iVar8 = (*(code *)*puVar11)(plVar19,puVar11[1]);
      *(int *)(lVar27 + 0x24) = iVar8 + 1;
      uVar7 = func_0x06a01d24(lVar27,plVar19,0);
      puVar13 = (ulong *)(lVar27 + 0x40);
      *puVar13 = (ulong)plVar24;
      *(undefined4 *)(lVar27 + 0x28) = uVar7;
      goto SUB_032809c4;
    }
  }
  func_0x03280cac();
  puVar20 = PTR_DAT_0777e558;
  *(undefined8 *)((long)puVar4 + -0xf0) = 0x463588c;
  *(ulong **)((long)puVar4 + -0xe8) = puVar13;
  *(long **)((long)puVar4 + -0xe0) = plVar19;
  *(undefined8 *)((long)puVar4 + -0xd8) = param_8;
  *(long *)((long)puVar4 + -0xd0) = lVar27;
  *(long *)((long)puVar4 + -200) = auVar39._0_8_;
  puVar22 = puVar12;
  plVar18 = plVar33;
  if ((bRam0000000007e19136 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a600);
    func_0x03280a18(PTR_DAT_0777e558);
    bRam0000000007e19136 = 1;
  }
  lVar27 = func_0x03280ca0(*(undefined8 *)puVar20);
  func_0x06a01f0c(lVar27,0);
  puVar35 = PTR_DAT_0777a600;
  if (extraout_x1 != (long *)0x0) {
    lVar15 = *extraout_x1;
    uVar28 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar28 != 0) {
      piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777a600) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_04635944;
        }
        uVar28 = uVar28 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar28 != 0);
    }
    puVar22 = (ulong *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(extraout_x1);
LAB_04635944:
    uVar7 = (*(code *)*puVar11)(extraout_x1,puVar11[1]);
    puVar20 = puVar35;
    if (lVar27 != 0) {
      *(undefined4 *)(lVar27 + 0x10) = uVar7;
      lVar15 = *extraout_x1;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar35) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 2) * 0x10 + 0x138);
            goto LAB_046359a8;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar35,2);
LAB_046359a8:
      uVar7 = (*(code *)*puVar11)(extraout_x1,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x14) = uVar7;
      lVar15 = *extraout_x1;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar35) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 3) * 0x10 + 0x138);
            goto LAB_04635a08;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar35,3);
LAB_04635a08:
      uVar7 = (*(code *)*puVar11)(extraout_x1,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x18) = uVar7;
      lVar15 = *extraout_x1;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar35) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 1) * 0x10 + 0x138);
            goto LAB_04635a68;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar35,1);
LAB_04635a68:
      uVar7 = (*(code *)*puVar11)(extraout_x1,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x1c) = uVar7;
      lVar15 = *extraout_x1;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar35) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 0x11) * 0x10 + 0x138);
            goto LAB_04635ac8;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar35,0x11);
LAB_04635ac8:
      uVar7 = (*(code *)*puVar11)(extraout_x1,puVar11[1]);
      *(undefined4 *)(lVar27 + 0x20) = uVar7;
      lVar15 = *extraout_x1;
      uVar30 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)puVar35) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar31 + 8) * 0x10 + 0x138);
            goto LAB_04635b28;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar35,8);
LAB_04635b28:
      iVar8 = (*(code *)*puVar11)(extraout_x1,puVar11[1]);
      *(int *)(lVar27 + 0x24) = iVar8 + 1;
      uVar7 = func_0x06a01d24(lVar27,extraout_x1,0);
      puVar13 = (ulong *)(lVar27 + 0x40);
      *puVar13 = (ulong)puVar12;
      *(undefined4 *)(lVar27 + 0x28) = uVar7;
      goto SUB_032809c4;
    }
  }
  auVar39 = func_0x03280cac();
  lVar15 = auVar39._0_8_;
  *(undefined8 *)((long)puVar4 + -0x130) = 0x4635bbc;
  *(long **)((long)puVar4 + -0x128) = param_6;
  *(undefined8 *)((long)puVar4 + -0x120) = param_7;
  *(undefined **)((long)puVar4 + -0x118) = puVar20;
  *(long **)((long)puVar4 + -0x110) = plVar33;
  *(long *)((long)puVar4 + -0x108) = lVar27;
  *(ulong **)((long)puVar4 + -0x100) = puVar12;
  *(long **)((long)puVar4 + -0xf8) = extraout_x1;
  puVar35 = (undefined *)0x7e19000;
  plVar33 = plVar18;
  uVar28 = uVar30;
  if ((bRam0000000007e19137 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e590);
    func_0x03280a18(PTR_DAT_0777e598);
    func_0x03280a18(PTR_DAT_0777ab38);
    bRam0000000007e19137 = 1;
  }
  if (*(long *)(lVar15 + 0x68) != 0) {
    puVar35 = *(undefined **)(*(long *)(lVar15 + 0x68) + 0x30);
    lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e590);
    func_0x06a01f9c(lVar27,0);
    bVar6 = func_0x04632ccc(lVar15);
    puVar21 = PTR_DAT_0777e598;
    puVar13 = (ulong *)PTR_DAT_0777ab38;
    puVar20 = (undefined *)0x0;
    if (lVar27 != 0) {
      *(byte *)(lVar27 + 0x20) = bVar6 & 1;
      uVar28 = func_0x055f7aac(uVar30,0);
      if (((ulong)plVar18 & 1) == 0) {
        puVar13 = (ulong *)puVar21;
      }
      uVar1 = *puVar13;
      if ((uVar28 & 1) == 0) {
        uVar1 = uVar30;
      }
      puVar13 = (ulong *)(lVar27 + 0x18);
      *puVar13 = uVar1;
      goto SUB_032809c4;
    }
  }
  auVar40 = func_0x03280cac();
  lVar27 = auVar40._8_8_;
  plVar14 = auVar40._0_8_;
  *(undefined **)((long)puVar4 + -400) = unaff_x29;
  *(undefined8 *)((long)puVar4 + -0x188) = 0x4635cc4;
  *(undefined **)((long)puVar4 + -0x180) = puVar32;
  *(ulong *)((long)puVar4 + -0x178) = param_5;
  *(long **)((long)puVar4 + -0x170) = plVar24;
  *(long **)((long)puVar4 + -0x168) = param_6;
  *(long *)((long)puVar4 + -0x160) = lVar15;
  *(undefined **)((long)puVar4 + -0x158) = puVar20;
  *(undefined **)((long)puVar4 + -0x150) = puVar35;
  *(ulong *)((long)puVar4 + -0x148) = (ulong)plVar18 & 0xffffffff;
  *(ulong *)((long)puVar4 + -0x140) = uVar30;
  *(long *)((long)puVar4 + -0x138) = auVar39._8_8_;
  puVar13 = (ulong *)0x7e19000;
  *(ulong **)((long)puVar4 + -0x198) = puVar22;
  puVar12 = puVar22;
  plVar24 = plVar33;
  if ((bRam0000000007e19138 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_0777a920);
    func_0x03280a18(PTR_DAT_0777a958);
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777e5a8);
    func_0x03280a18(PTR_DAT_0777e5b0);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_0777e5c8);
    func_0x03280a18(PTR_DAT_0777e5d0);
    func_0x03280a18(PTR_DAT_0777c290);
    func_0x03280a18(PTR_DAT_0777e5d8);
    func_0x03280a18(PTR_DAT_0777e5e0);
    func_0x03280a18(PTR_DAT_0777e5e8);
    func_0x03280a18(PTR_DAT_0777e5f0);
    func_0x03280a18(PTR_DAT_0777e550);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_0777e600);
    bRam0000000007e19138 = 1;
  }
  puVar20 = PTR_DAT_0777e5d0;
  if (lVar27 != 0) {
    cVar2 = *(char *)(lVar27 + 0x20);
    cVar26 = *(char *)(lVar27 + 0x21);
    *(ulong *)((long)puVar4 + -0x1b8) = uVar28;
    if (cVar2 == '\0') {
      if (cVar26 != '\0') {
        cVar26 = '\x01';
        goto LAB_04635e44;
      }
      puVar12 = (ulong *)0x0;
    }
    else {
LAB_04635e44:
      puVar13 = (ulong *)(ulong)(cVar2 != '\0');
      uVar28 = (ulong)(cVar26 != '\0');
      puVar12 = (ulong *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5c8);
      *(undefined8 *)((long)puVar4 + -0x1d0) = 0;
      func_0x061117cc(puVar12,puVar13,0,0,uVar28,0,0,1);
    }
    uVar7 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
    uVar37 = *(undefined8 *)puVar20;
    *(undefined8 *)((long)puVar4 + -0x1a0) = 0;
    func_0x0437ba9c((undefined1 *)((long)puVar4 + -0x1a0),uVar7,uVar37);
    plVar24 = (long *)0x0;
    puVar22 = (ulong *)func_0x06a13bc8(puVar22,*(undefined8 *)((long)puVar4 + -0x1a0),puVar12,0,0);
    plVar18 = *(long **)(lVar27 + 0x10);
    *(long *)((long)puVar4 + -0x1b0) = lVar27;
    puVar35 = puVar20;
    if (plVar18 != (long *)0x0) {
      plVar19 = (long *)plVar14[3];
      uVar37 = (**(code **)(*plVar18 + 0x1e8))(plVar18,*(undefined8 *)(*plVar18 + 0x1f0));
      if (plVar19 != (long *)0x0) {
        lVar27 = *plVar19;
        uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar30 != 0) {
          piVar31 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0777e5b8) {
              puVar11 = (undefined8 *)(lVar27 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_04635f4c;
            }
            uVar30 = uVar30 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar30 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e5b8,0);
LAB_04635f4c:
        plVar24 = (long *)puVar11[1];
        lVar27 = (*(code *)*puVar11)(plVar19,uVar37);
        puVar12 = puVar22;
        if ((lVar27 != 0) &&
           (lVar15 = func_0x03d20d84(lVar27,*(undefined8 *)PTR_DAT_0777e5a0),
           puVar20 = PTR_DAT_0777a958, puVar12 = puVar22, lVar15 != 0)) {
          *(undefined1 *)(lVar15 + 0x6d) = 1;
          *(byte *)(lVar15 + 0x153) = bVar25 & 1;
          lVar29 = func_0x03d20d84(lVar27,*(undefined8 *)puVar20);
          puVar12 = puVar22;
          if (lVar29 != 0) {
            puVar13 = (ulong *)(lVar29 + 0x48);
            if (*puVar13 == 0) {
              uVar30 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e5f0);
              func_0x069fe0e4(uVar30,0);
              *puVar13 = uVar30;
              goto SUB_032809c4;
            }
            *(undefined8 *)(*puVar13 + 0x28) = *(undefined8 *)PTR_DAT_0777e600;
            func_0x032809c4();
            puVar12 = puVar22;
          }
          puVar20 = PTR_DAT_0777a920;
          if (plVar33 != (long *)0x0) {
            lVar29 = *plVar33;
            lVar38 = *(long *)PTR_DAT_0777e5a8;
            uVar30 = (ulong)*(ushort *)(lVar29 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)(lVar38 + 0x20)) {
                  lVar29 = lVar29 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar38 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_04636064;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            lVar29 = func_0x03256b10(plVar33);
LAB_04636064:
            lVar29 = func_0x03280b88(*(undefined8 *)(lVar29 + 8),lVar38);
            lVar29 = (**(code **)(lVar29 + 8))(plVar33,lVar29);
            uVar37 = *(undefined8 *)puVar20;
            *(long *)((long)puVar4 + -0x1a8) = lVar27;
            lVar27 = func_0x03d20d84(lVar27,uVar37);
            puVar22 = (ulong *)plVar14[5];
            if (lVar29 == 0) {
              uVar37 = 0;
              puVar34 = (ulong *)0x0;
            }
            else {
              uVar37 = *(undefined8 *)(lVar29 + 0x30);
              puVar34 = (ulong *)func_0x069fc474(lVar29,0);
            }
            puVar20 = PTR_DAT_0777e5e8;
            *(long **)((long)puVar4 + -0x1c0) = plVar36;
            if (lVar27 == 0) {
              plVar36 = (long *)0x0;
              puVar13 = (ulong *)0x0;
            }
            else {
              plVar36 = *(long **)(lVar27 + 0x30);
              puVar13 = (ulong *)func_0x069fc474(lVar27,0);
            }
            puVar35 = (undefined *)func_0x06a04fe0((undefined1 *)((long)puVar4 + -0x198),0);
            uVar28 = func_0x03280ca0(*(undefined8 *)puVar20);
            puVar12 = puVar34;
            plVar24 = plVar36;
            func_0x060f3cf8(uVar28,uVar37,puVar34,plVar36,puVar13,puVar35,0);
            if (puVar22 != (ulong *)0x0) {
              lVar27 = *(long *)PTR_DAT_0777e5e0;
              *(undefined8 *)((long)puVar4 + -0x1f0) = 0x4636148;
              *(long **)((long)puVar4 + -0x1e8) = plVar14;
              *(ulong *)((long)puVar4 + -0x1e0) = uVar28;
              *(ulong **)((long)puVar4 + -0x1d8) = puVar13;
              lVar29 = *(long *)(lVar27 + 0x38);
              if (lVar29 == 0) {
                func_0x03256878(lVar27);
                lVar29 = *(long *)(lVar27 + 0x38);
              }
              lVar27 = *(long *)(lVar29 + 8);
              *(undefined8 *)((long)puVar4 + -0x200) = *(undefined8 *)((long)puVar4 + -0x1f0);
              *(undefined **)((long)puVar4 + -0x1f0) = puVar35;
              *(undefined8 *)((long)puVar4 + -0x1e8) = *(undefined8 *)((long)puVar4 + -0x1e8);
              *(undefined8 *)((long)puVar4 + -0x1e0) = *(undefined8 *)((long)puVar4 + -0x1e0);
              *(undefined8 *)((long)puVar4 + -0x1d8) = *(undefined8 *)((long)puVar4 + -0x1d8);
              puVar13 = puVar22;
              if ((*(long *)(lVar27 + 0x38) == 0) &&
                 (puVar13 = (ulong *)func_0x03280a18(PTR_DAT_0774e558),
                 *(long *)(lVar27 + 0x38) == 0)) {
                puVar13 = (ulong *)func_0x03256878(lVar27);
              }
              if ((char)puVar22[10] != '\0') {
                return puVar13;
              }
              uVar37 = **(undefined8 **)(lVar27 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar10 = func_0x057a51c4(uVar37,0);
              lVar27 = 1;
              plVar24 = (long *)0x0;
              lVar29 = func_0x072869d0(puVar22,uVar10,0,1,0);
              if (lVar29 == 0) {
                auVar39 = func_0x03280cac();
                lVar38 = auVar39._8_8_;
                puVar13 = auVar39._0_8_;
                *(ulong **)((long)puVar4 + -0x250) = puVar34;
                *(undefined8 *)((long)puVar4 + -0x248) = 0x3ea51c0;
                *(undefined8 *)((long)puVar4 + -0x240) = uVar16;
                *(long *)((long)puVar4 + -0x238) = lVar15;
                *(long **)((long)puVar4 + -0x230) = plVar33;
                *(long **)((long)puVar4 + -0x228) = plVar36;
                *(undefined8 *)((long)puVar4 + -0x220) = uVar37;
                *(ulong **)((long)puVar4 + -0x218) = puVar22;
                *(undefined8 *)((long)puVar4 + -0x210) = 0;
                *(ulong *)((long)puVar4 + -0x208) = uVar28;
                lVar29 = tpidr_el0;
                *(undefined8 *)((long)puVar4 + -600) = *(undefined8 *)(lVar29 + 0x28);
                *(long **)((long)puVar4 + -0x260) = plVar24;
                plVar14 = *(long **)(lVar27 + 0x38);
                puVar12 = puVar13;
                plVar18 = plVar24;
                if (plVar14 == (long *)0x0) {
                  puVar12 = (ulong *)func_0x03280a18(PTR_DAT_0774e558);
                  plVar14 = *(long **)(lVar27 + 0x38);
                  if (plVar14 == (long *)0x0) {
                    puVar12 = (ulong *)func_0x03256878(lVar27);
                    plVar14 = *(long **)(lVar27 + 0x38);
                  }
                }
                plVar36 = (long *)(ulong)*(uint *)(plVar14[1] + 0xfc);
                plVar33 = (long *)((long)puVar4 +
                                  (-0x260 - ((ulong)((long)plVar36 + 0xfU) & 0x1fffffff0)));
                if ((char)puVar13[10] == '\0') {
                  lVar15 = *plVar14;
                  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                    func_0x03280b8c();
                  }
                  uVar16 = func_0x057a51c4(lVar15,0);
                  lVar29 = func_0x072869d0(puVar13,uVar16,lVar38,1,0);
                  lVar27 = *(long *)(lVar27 + 0x38);
                  plVar14 = plVar24;
                  if (-1 < *(int *)(*(long *)(lVar27 + 8) + 0x28)) {
                    plVar14 = (long *)((long)puVar4 + -0x260);
                  }
                  plVar18 = plVar36;
                  func_0x072ce970(plVar33,plVar14);
                  uVar28 = func_0x03280b94(*(undefined8 *)(lVar27 + 8),plVar33);
                  if (lVar29 != 0) {
                    uVar16 = 0x3ea52d0;
                    plVar18 = plVar33;
                    lVar38 = lVar29;
                    goto SUB_072852e4;
                  }
                  func_0x03280cac();
                  lVar38 = 0;
                }
                else if (*(long *)(lVar29 + 0x28) == *(long *)((long)puVar4 + -600)) {
                  return puVar12;
                }
                auVar39 = func_0x072ce990();
                uVar30 = auVar39._8_8_;
                plVar33[-4] = 0x3ea5304;
                plVar33[-3] = lVar38;
                plVar33[-2] = lVar27;
                plVar33[-1] = (long)plVar24;
                lVar27 = plVar18[7];
                if (lVar27 == 0) {
                  func_0x03256878(plVar18);
                  lVar27 = plVar18[7];
                }
                lVar29 = *(long *)(lVar27 + 8);
                plVar33[-8] = plVar33[-4];
                plVar33[-6] = (long)plVar33;
                plVar33[-5] = (long)plVar36;
                plVar33[-4] = (long)puVar13;
                plVar33[-3] = plVar33[-3];
                plVar33[-2] = plVar33[-2];
                plVar33[-1] = plVar33[-1];
                plVar24 = *(long **)(lVar29 + 0x38);
                uVar28 = uVar30;
                lVar27 = lVar29;
                if (plVar24 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar24 = *(long **)(lVar29 + 0x38);
                  if (plVar24 == (long *)0x0) {
                    func_0x03256878(lVar29);
                    plVar24 = *(long **)(lVar29 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar38 = func_0x03280ca0();
                func_0x04053df4(lVar38,*(undefined8 *)(*(long *)(lVar29 + 0x38) + 8));
                if (lVar38 != 0) {
                  puVar13 = (ulong *)(lVar38 + 0x10);
                  *puVar13 = uVar30;
                  goto SUB_032809c4;
                }
                auVar40 = func_0x03280cac();
                plVar33[-0x10] = 0x3ea5530;
                plVar33[-0xe] = 0;
                plVar33[-0xd] = (long)plVar36;
                plVar33[-0xc] = uVar30;
                plVar33[-0xb] = lVar29;
                plVar33[-10] = auVar39._0_8_;
                plVar33[-9] = 0;
                plVar24 = *(long **)(lVar27 + 0x38);
                uVar30 = uVar28;
                lVar29 = lVar27;
                if (plVar24 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar24 = *(long **)(lVar27 + 0x38);
                  if (plVar24 == (long *)0x0) {
                    func_0x03256878(lVar27);
                    plVar24 = *(long **)(lVar27 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar38 = func_0x03280ca0();
                func_0x0404e308(lVar38,*(undefined8 *)(*(long *)(lVar27 + 0x38) + 8));
                if (lVar38 != 0) {
                  puVar13 = (ulong *)(lVar38 + 0x10);
                  *puVar13 = uVar28;
                  goto SUB_032809c4;
                }
                auVar39 = func_0x03280cac();
                plVar33[-0x18] = 0x3ea5644;
                plVar33[-0x16] = 0;
                plVar33[-0x15] = (long)plVar36;
                plVar33[-0x14] = uVar28;
                plVar33[-0x13] = lVar27;
                *(undefined1 (*) [16])(plVar33 + -0x12) = auVar40;
                plVar24 = *(long **)(lVar29 + 0x38);
                uVar28 = uVar30;
                lVar27 = lVar29;
                if (plVar24 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar24 = *(long **)(lVar29 + 0x38);
                  if (plVar24 == (long *)0x0) {
                    func_0x03256878(lVar29);
                    plVar24 = *(long **)(lVar29 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar38 = func_0x03280ca0();
                (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 8))();
                if (lVar38 != 0) {
                  puVar13 = (ulong *)(lVar38 + 0x10);
                  *puVar13 = uVar30;
                  goto SUB_032809c4;
                }
                auVar40 = func_0x03280cac();
                plVar33[-0x20] = 0x3ea575c;
                plVar33[-0x1e] = 0;
                plVar33[-0x1d] = (long)plVar36;
                plVar33[-0x1c] = uVar30;
                plVar33[-0x1b] = lVar29;
                *(undefined1 (*) [16])(plVar33 + -0x1a) = auVar39;
                plVar24 = *(long **)(lVar27 + 0x38);
                if (plVar24 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar24 = *(long **)(lVar27 + 0x38);
                  if (plVar24 == (long *)0x0) {
                    func_0x03256878(lVar27);
                    plVar24 = *(long **)(lVar27 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar29 = func_0x03280ca0();
                (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x38) + 8))();
                if (lVar29 != 0) {
                  puVar13 = (ulong *)(lVar29 + 0x10);
                  *puVar13 = uVar28;
                  goto SUB_032809c4;
                }
                auVar39 = func_0x03280cac();
                lVar29 = auVar39._8_8_;
                puVar13 = auVar39._0_8_;
                plVar33[-0x24] = 0x3ea5874;
                *(undefined1 (*) [16])(plVar33 + -0x22) = auVar40;
                plVar24 = *(long **)(lVar29 + 0x38);
                if (plVar24 == (long *)0x0) {
                  func_0x03256878(lVar29);
                  plVar24 = *(long **)(lVar29 + 0x38);
                }
                lVar38 = *plVar24;
                plVar33[-0x26] = plVar33[-0x24];
                plVar33[-0x25] = (long)plVar36;
                plVar33[-0x24] = uVar28;
                plVar33[-0x23] = lVar27;
                plVar33[-0x22] = plVar33[-0x22];
                plVar33[-0x21] = plVar33[-0x21];
                puVar12 = puVar13;
                if ((*(long *)(lVar38 + 0x38) == 0) &&
                   (puVar12 = (ulong *)func_0x03280a18(PTR_DAT_0774e558),
                   *(long *)(lVar38 + 0x38) == 0)) {
                  puVar12 = (ulong *)func_0x03256878(lVar38);
                }
                puVar20 = PTR_DAT_0774e558;
                if ((char)puVar13[10] != '\0') {
                  return puVar12;
                }
                uVar16 = **(undefined8 **)(lVar38 + 0x38);
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar16 = func_0x057a51c4(uVar16,0);
                lVar29 = func_0x072869d0(puVar13,uVar16,0,0,0);
                if (lVar29 == 0) {
                  return (ulong *)0x0;
                }
                uVar16 = **(undefined8 **)(lVar38 + 0x38);
                if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar16 = func_0x057a51c4(uVar16,0);
                lVar27 = func_0x057c1ad4(uVar16,0);
                lVar38 = *(long *)(*(long *)(lVar38 + 0x38) + 8);
                if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
                  lVar38 = func_0x0325681c(lVar38);
                }
                if (lVar27 == 0) {
LAB_03ea5b18:
                  uVar28 = 0;
                }
                else {
                  uVar28 = func_0x03280b90(lVar27,lVar38);
                  if (uVar28 == 0) {
                    func_0x03281048(lVar27,lVar38);
                    goto LAB_03ea5b18;
                  }
                }
                lVar27 = plVar33[-0x22];
                plVar24 = (long *)plVar33[-0x21];
                puVar13 = (ulong *)plVar33[-0x24];
                lVar38 = plVar33[-0x23];
                plVar18 = plVar33 + -0x20;
                uVar16 = plVar33[-0x26];
                plVar36 = (long *)plVar33[-0x25];
                plVar33 = (long *)0x0;
              }
              else {
                lVar27 = *(long *)((long)puVar4 + -0x1e0);
                plVar24 = *(long **)((long)puVar4 + -0x1d8);
                puVar13 = *(ulong **)((long)puVar4 + -0x1f0);
                uVar16 = *(undefined8 *)((long)puVar4 + -0x200);
                plVar18 = (long *)((long)puVar4 + -0x1d0);
                lVar38 = *(long *)((long)puVar4 + -0x1e8);
              }
SUB_072852e4:
              lVar23 = 0;
              plVar5 = plVar18 + -6;
              plVar18[-6] = uVar16;
              plVar18[-4] = (long)puVar13;
              plVar18[-3] = lVar38;
              plVar18[-2] = lVar27;
              plVar18[-1] = (long)plVar24;
              if ((bRam0000000007e3419a & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785dee8);
                func_0x03280a18(PTR_DAT_0785def0);
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0785def8);
                func_0x03280a18(PTR_DAT_07751038);
                func_0x03280a18(PTR_DAT_07779590);
                bRam0000000007e3419a = 1;
              }
              puVar20 = PTR_DAT_07779590;
              if (uVar28 != 0) {
                uVar16 = func_0x057dadc4(uVar28,0);
                puVar32 = *(undefined **)(lVar29 + 0x20);
                if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)puVar20);
                }
                uVar9 = func_0x0727e0ec(uVar16,puVar32);
                puVar13 = (ulong *)(ulong)(uVar9 & 1);
                uVar16 = 0x728539c;
                goto SUB_0727dc78;
              }
              func_0x03280cac();
              func_0x03280cac();
              lVar27 = 0;
              while( true ) {
                func_0x03280ca4(lVar27);
                auVar41 = func_0x03280cac();
                lVar27 = auVar41._0_8_;
                if (auVar41._8_4_ != 1) break;
                plVar24 = (long *)func_0x072ce910(lVar27);
                lVar27 = *plVar24;
                func_0x072ce920();
                uVar30 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
                if (uVar30 != 0) {
                  piVar31 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar11 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar31 * 0x10 + 0x138)
                      ;
                      goto LAB_072854e8;
                    }
                    uVar30 = uVar30 - 1;
                    piVar31 = piVar31 + 4;
                  } while (uVar30 != 0);
                }
                lVar23 = 0;
                puVar11 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
                puVar12 = (ulong *)(*(code *)*puVar11)(0x7e34000,puVar11[1]);
                if (lVar27 == 0) {
                  return puVar12;
                }
              }
              uVar30 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0774e8c8) {
                    puVar11 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar31 * 0x10 + 0x138);
                    goto LAB_072855b0;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              lVar23 = 0;
              puVar11 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
              (*(code *)*puVar11)(0x7e34000,puVar11[1]);
              func_0x03365958(lVar27);
              func_0x03280ca4(0);
              auVar39 = func_0x02f09514();
              puVar20 = PTR_DAT_0785dec8;
              lVar38 = auVar39._8_8_;
              lVar29 = auVar39._0_8_;
              plVar18[-0xe] = 0x72855d4;
              plVar18[-0xd] = lVar15;
              plVar18[-0xc] = (long)plVar33;
              plVar18[-0xb] = (long)plVar36;
              plVar18[-10] = (long)puVar13;
              plVar18[-9] = lVar27;
              plVar18[-8] = 0;
              plVar18[-7] = 0x7e34000;
              plVar24 = (long *)0x7e34000;
              if ((bRam0000000007e3419b & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785dec8);
                func_0x03280a18(PTR_DAT_0785df00);
                func_0x03280a18(PTR_DAT_0785ded0);
                func_0x03280a18(PTR_DAT_0785ded8);
                func_0x03280a18(PTR_DAT_0774e5a0);
                func_0x03280a18(PTR_DAT_0785df08);
                bRam0000000007e3419b = 1;
              }
              puVar13 = (ulong *)func_0x03e0c264(lVar38,*(undefined8 *)puVar20);
              puVar35 = PTR_DAT_0785df00;
              puVar32 = PTR_DAT_0785ded8;
              if (((ulong)puVar13 & 1) == 0) {
LAB_07285770:
                if (lVar38 != 0) {
                  if (0 < *(int *)(lVar38 + 0x18)) {
                    plVar24 = (long *)0x0;
                    do {
                      puVar21 = (undefined *)func_0x0414419c(lVar38,plVar24,*(undefined8 *)puVar32);
                      plVar33 = (long *)puVar32;
                      if (*(long *)(lVar29 + 0x10) == 0) goto LAB_07285808;
                      puVar13 = (ulong *)func_0x041447fc(*(long *)(lVar29 + 0x10),puVar21,
                                                         *(undefined8 *)puVar35);
                      puVar20 = puVar21;
                      if (((ulong)puVar13 & 1) != 0) {
                        if ((puVar21 == (undefined *)0x0) ||
                           (lVar27 = *(long *)(puVar21 + 0x18), lVar27 == 0)) goto LAB_07285808;
                        puVar13 = (ulong *)(**(code **)(lVar27 + 0x18))
                                                     (*(undefined8 *)(lVar27 + 0x40),lVar23,
                                                      *(undefined8 *)(lVar27 + 0x28));
                      }
                      uVar9 = (int)plVar24 + 1;
                      plVar24 = (long *)(ulong)uVar9;
                    } while ((int)uVar9 < *(int *)(lVar38 + 0x18));
                  }
                  return puVar13;
                }
LAB_07285808:
                func_0x03280cac();
                plVar36 = plVar24;
                puVar35 = puVar20;
LAB_0728580c:
                func_0x03280cb4();
              }
              else {
                if (*(int *)(lVar29 + 0x30) != 2) {
                  if (*(int *)(lVar29 + 0x30) != 1) goto LAB_07285770;
                  uVar16 = func_0x03280a2c(PTR_DAT_0774e5a0);
                  lVar38 = func_0x03280afc(uVar16,1);
                  func_0x02f0b18c(lVar23);
                  uVar16 = func_0x057dadc4(lVar23,0);
                  func_0x02f0b18c(lVar38);
                  func_0x02f176b4(lVar38,uVar16);
                  func_0x02f0965c(lVar38,0,uVar16);
                  uVar16 = func_0x03280a2c(PTR_DAT_0785df08);
                  lVar23 = func_0x0727df38(uVar16,lVar38);
                  uVar16 = func_0x03280a2c(PTR_DAT_0785df10);
                  func_0x03280b7c(lVar23,uVar16);
                }
                plVar36 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
                if ((lVar23 == 0) ||
                   (puVar35 = (undefined *)func_0x057dadc4(lVar23,0), plVar24 = plVar36,
                   plVar36 == (long *)0x0)) goto LAB_07285808;
                if ((puVar35 == (undefined *)0x0) ||
                   (lVar27 = func_0x03280b90(puVar35,*(undefined8 *)(*plVar36 + 0x40)), lVar27 != 0)
                   ) {
                  if ((int)plVar36[3] != 0) {
                    puVar13 = (ulong *)(plVar36 + 4);
                    *puVar13 = (ulong)puVar35;
                    goto SUB_032809c4;
                  }
                  goto LAB_0728580c;
                }
              }
              uVar16 = func_0x03280cd0();
              auVar39 = func_0x03280b7c(uVar16,0);
              plVar18[-0x10] = 0x728581c;
              lVar27 = *(long *)(auVar39._0_8_ + 0x18);
              if (lVar27 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar13 = (ulong *)(**(code **)(lVar27 + 0x18))
                                             (*(undefined8 *)(lVar27 + 0x40),auVar39._8_8_,
                                              *(undefined8 *)(lVar27 + 0x28));
                return puVar13;
              }
              uVar28 = func_0x03280cac();
              puVar32 = PTR_DAT_0785df18;
              plVar5 = plVar18 + -0x18;
              plVar18[-0x18] = 0x7285840;
              plVar18[-0x16] = (long)plVar33;
              plVar18[-0x15] = (long)puVar35;
              plVar18[-0x14] = (long)plVar36;
              plVar18[-0x13] = lVar29;
              plVar18[-0x12] = lVar38;
              plVar18[-0x11] = lVar23;
              lVar29 = 0x7e34000;
              if ((bRam0000000007e3419c & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785df20);
                func_0x03280a18(PTR_DAT_0785dee8);
                func_0x03280a18(PTR_DAT_0785def0);
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0785df18);
                func_0x03280a18(PTR_DAT_0779c2d8);
                func_0x03280a18(PTR_DAT_0785def8);
                func_0x03280a18(PTR_DAT_0777b740);
                func_0x03280a18(PTR_DAT_0776da98);
                func_0x03280a18(PTR_DAT_0776daa0);
                bRam0000000007e3419c = 1;
              }
              puVar13 = (ulong *)(ulong)*(byte *)(uVar28 + 0x34);
              uVar16 = 0x72858f0;
SUB_0727dc78:
              if (((ulong)puVar13 & 1) == 0) {
                *(undefined8 *)((long)plVar5 + -0x10) = uVar16;
                *(undefined **)((long)plVar5 + -8) = puVar32;
                uVar16 = func_0x03280a2c(PTR_DAT_0785dbe8);
                puVar20 = PTR_DAT_0777c990;
                *(undefined8 *)((long)plVar5 + -0x30) = 0x727dc94;
                *(long *)((long)plVar5 + -0x28) = lVar29;
                *(ulong *)((long)plVar5 + -0x20) = uVar28;
                *(undefined **)((long)plVar5 + -0x18) = puVar32;
                if ((bRam0000000007e34146 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777c990);
                  bRam0000000007e34146 = 1;
                }
                puVar13 = (ulong *)func_0x03280ca0(*(undefined8 *)puVar20);
                func_0x072c77f8(puVar13,uVar16,0);
                return puVar13;
              }
              return puVar13;
            }
          }
        }
      }
    }
  }
  auVar39 = func_0x03280cac();
  *(undefined8 *)((long)puVar4 + -0x200) = 0x463657c;
  *(long **)((long)puVar4 + -0x1f8) = plVar36;
  *(undefined **)((long)puVar4 + -0x1f0) = puVar35;
  *(long **)((long)puVar4 + -0x1e8) = plVar14;
  *(ulong *)((long)puVar4 + -0x1e0) = uVar28;
  *(ulong **)((long)puVar4 + -0x1d8) = puVar13;
  puVar13 = puVar12;
  if ((bRam0000000007e19139 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c278);
    func_0x03280a18(PTR_DAT_07771708);
    func_0x03280a18(PTR_DAT_0777da58);
    func_0x03280a18(PTR_DAT_0777e608);
    bRam0000000007e19139 = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(plVar24[4] + 0xc0) + 0x98) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar27 = func_0x03280ca0();
  func_0x0404e744(lVar27,*(undefined8 *)(*(long *)(plVar24[4] + 0xc0) + 0xa0));
  if (lVar27 == 0) {
    func_0x03280cac();
    *(undefined8 *)((long)puVar4 + -0x240) = 0x4636734;
    *(long **)((long)puVar4 + -0x230) = plVar33;
    *(long *)((long)puVar4 + -0x228) = auVar39._8_8_;
    *(ulong **)((long)puVar4 + -0x220) = puVar12;
    *(ulong *)((long)puVar4 + -0x218) = auVar39._0_8_;
    *(undefined8 *)((long)puVar4 + -0x210) = 0;
    *(long **)((long)puVar4 + -0x208) = plVar24;
    if ((bRam0000000007e1913a & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e610);
      func_0x03280a18(PTR_DAT_0777e618);
      func_0x03280a18(PTR_DAT_0777e620);
      func_0x03280a18(PTR_DAT_0777e628);
      func_0x03280a18(PTR_DAT_0777e630);
      bRam0000000007e1913a = 1;
    }
    *(undefined8 *)((long)puVar4 + -600) = 0;
    *(undefined8 *)((long)puVar4 + -0x250) = 0;
    *(undefined8 *)((long)puVar4 + -0x248) = 0;
    *puVar13 = 0;
  }
  else {
    *(long *)(lVar27 + 0x10) = auVar39._8_8_;
    puVar13 = (ulong *)(lVar27 + 0x18);
    *puVar13 = auVar39._0_8_;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar12 = (ulong *)(((ulong)puVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar3) {
        *puVar12 = *puVar12 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar13;
}

