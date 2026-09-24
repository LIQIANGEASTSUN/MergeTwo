/* Ghidra 12.1.2 native pseudocode; RVA 0x67A059C; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.UpdateChainsAfterToolGeneration; status ok */


/* WARNING: Possible PIC construction at 0x068a0bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a0c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3fe7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3ff00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e4011c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e401f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3ff68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e3ff20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a1184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a1384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a13ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a13d8: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x068a0ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068a0c90: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x072853dc) */
/* WARNING: Removing unreachable block (ram,0x068a13dc) */
/* WARNING: Removing unreachable block (ram,0x068a13e4) */
/* WARNING: Removing unreachable block (ram,0x068a13fc) */
/* WARNING: Removing unreachable block (ram,0x068a1404) */
/* WARNING: Removing unreachable block (ram,0x068a1438) */
/* WARNING: Removing unreachable block (ram,0x068a1440) */
/* WARNING: Removing unreachable block (ram,0x068a1468) */
/* WARNING: Removing unreachable block (ram,0x068a144c) */
/* WARNING: Removing unreachable block (ram,0x068a1458) */
/* WARNING: Removing unreachable block (ram,0x068a1478) */
/* WARNING: Removing unreachable block (ram,0x068a14dc) */
/* WARNING: Removing unreachable block (ram,0x03ea4d6c) */
/* WARNING: Removing unreachable block (ram,0x03ea4d84) */
/* WARNING: Removing unreachable block (ram,0x03ea4d94) */
/* WARNING: Removing unreachable block (ram,0x03ea5104) */
/* WARNING: Removing unreachable block (ram,0x03ea5128) */
/* WARNING: Removing unreachable block (ram,0x03ea513c) */
/* WARNING: Removing unreachable block (ram,0x03ea5144) */
/* WARNING: Removing unreachable block (ram,0x03ea515c) */
/* WARNING: Removing unreachable block (ram,0x03ea5178) */
/* WARNING: Removing unreachable block (ram,0x03ea517c) */
/* WARNING: Removing unreachable block (ram,0x03ea51bc) */
/* WARNING: Removing unreachable block (ram,0x03ea5204) */
/* WARNING: Removing unreachable block (ram,0x03ea5218) */
/* WARNING: Removing unreachable block (ram,0x03ea5224) */
/* WARNING: Removing unreachable block (ram,0x03ea52d0) */
/* WARNING: Removing unreachable block (ram,0x03ea52e0) */
/* WARNING: Removing unreachable block (ram,0x03ea5248) */
/* WARNING: Removing unreachable block (ram,0x03ea5260) */
/* WARNING: Removing unreachable block (ram,0x03ea5264) */
/* WARNING: Removing unreachable block (ram,0x03ea52a8) */
/* WARNING: Removing unreachable block (ram,0x03ea52fc) */
/* WARNING: Removing unreachable block (ram,0x03ea5300) */
/* WARNING: Removing unreachable block (ram,0x03ea531c) */
/* WARNING: Removing unreachable block (ram,0x03ea532c) */
/* WARNING: Removing unreachable block (ram,0x03ea541c) */
/* WARNING: Removing unreachable block (ram,0x03ea5444) */
/* WARNING: Removing unreachable block (ram,0x03ea5464) */
/* WARNING: Removing unreachable block (ram,0x03ea5470) */
/* WARNING: Removing unreachable block (ram,0x03ea547c) */
/* WARNING: Removing unreachable block (ram,0x03ea5480) */
/* WARNING: Removing unreachable block (ram,0x03ea552c) */
/* WARNING: Removing unreachable block (ram,0x03ea5558) */
/* WARNING: Removing unreachable block (ram,0x03ea5578) */
/* WARNING: Removing unreachable block (ram,0x03ea5584) */
/* WARNING: Removing unreachable block (ram,0x03ea5590) */
/* WARNING: Removing unreachable block (ram,0x03ea5594) */
/* WARNING: Removing unreachable block (ram,0x03ea5640) */
/* WARNING: Removing unreachable block (ram,0x03ea566c) */
/* WARNING: Removing unreachable block (ram,0x03ea568c) */
/* WARNING: Removing unreachable block (ram,0x03ea5698) */
/* WARNING: Removing unreachable block (ram,0x03ea56a4) */
/* WARNING: Removing unreachable block (ram,0x03ea56a8) */
/* WARNING: Removing unreachable block (ram,0x03ea5758) */
/* WARNING: Removing unreachable block (ram,0x03ea5784) */
/* WARNING: Removing unreachable block (ram,0x03ea57a4) */
/* WARNING: Removing unreachable block (ram,0x03ea57b0) */
/* WARNING: Removing unreachable block (ram,0x03ea57bc) */
/* WARNING: Removing unreachable block (ram,0x03ea57c0) */
/* WARNING: Removing unreachable block (ram,0x03ea5870) */
/* WARNING: Removing unreachable block (ram,0x03ea5888) */
/* WARNING: Removing unreachable block (ram,0x03ea5898) */
/* WARNING: Removing unreachable block (ram,0x03ea5a08) */
/* WARNING: Removing unreachable block (ram,0x03ea5a28) */
/* WARNING: Removing unreachable block (ram,0x03ea5a3c) */
/* WARNING: Removing unreachable block (ram,0x03ea5a44) */
/* WARNING: Removing unreachable block (ram,0x03ea5a5c) */
/* WARNING: Removing unreachable block (ram,0x03ea5a78) */
/* WARNING: Removing unreachable block (ram,0x03ea5a7c) */
/* WARNING: Removing unreachable block (ram,0x03ea5aa4) */
/* WARNING: Removing unreachable block (ram,0x03ea5abc) */
/* WARNING: Removing unreachable block (ram,0x03ea5ac0) */
/* WARNING: Removing unreachable block (ram,0x03ea5ae8) */
/* WARNING: Removing unreachable block (ram,0x03ea5af4) */
/* WARNING: Removing unreachable block (ram,0x03ea5af8) */
/* WARNING: Removing unreachable block (ram,0x03ea5b0c) */
/* WARNING: Removing unreachable block (ram,0x03ea5b18) */
/* WARNING: Removing unreachable block (ram,0x03ea5b1c) */
/* WARNING: Removing unreachable block (ram,0x03ea5a4c) */
/* WARNING: Removing unreachable block (ram,0x03ea57dc) */
/* WARNING: Removing unreachable block (ram,0x03ea56c4) */
/* WARNING: Removing unreachable block (ram,0x03ea55ac) */
/* WARNING: Removing unreachable block (ram,0x03ea5498) */
/* WARNING: Removing unreachable block (ram,0x03ea52c0) */
/* WARNING: Removing unreachable block (ram,0x03ea51a4) */
/* WARNING: Removing unreachable block (ram,0x072852e4) */
/* WARNING: Removing unreachable block (ram,0x07285304) */
/* WARNING: Removing unreachable block (ram,0x07285354) */
/* WARNING: Removing unreachable block (ram,0x07285508) */
/* WARNING: Removing unreachable block (ram,0x0728550c) */
/* WARNING: Removing unreachable block (ram,0x07285510) */
/* WARNING: Removing unreachable block (ram,0x07285518) */
/* WARNING: Removing unreachable block (ram,0x07285528) */
/* WARNING: Removing unreachable block (ram,0x0728554c) */
/* WARNING: Removing unreachable block (ram,0x07285558) */
/* WARNING: Removing unreachable block (ram,0x0728555c) */
/* WARNING: Removing unreachable block (ram,0x07285574) */
/* WARNING: Removing unreachable block (ram,0x0728557c) */
/* WARNING: Removing unreachable block (ram,0x072855a4) */
/* WARNING: Removing unreachable block (ram,0x07285588) */
/* WARNING: Removing unreachable block (ram,0x07285594) */
/* WARNING: Removing unreachable block (ram,0x072855b0) */
/* WARNING: Removing unreachable block (ram,0x072855bc) */
/* WARNING: Removing unreachable block (ram,0x072855c0) */
/* WARNING: Removing unreachable block (ram,0x072855c8) */
/* WARNING: Removing unreachable block (ram,0x072855d4) */
/* WARNING: Removing unreachable block (ram,0x07285604) */
/* WARNING: Removing unreachable block (ram,0x07285654) */
/* WARNING: Removing unreachable block (ram,0x07285664) */
/* WARNING: Removing unreachable block (ram,0x07285670) */
/* WARNING: Removing unreachable block (ram,0x07285770) */
/* WARNING: Removing unreachable block (ram,0x07285774) */
/* WARNING: Removing unreachable block (ram,0x07285780) */
/* WARNING: Removing unreachable block (ram,0x07285794) */
/* WARNING: Removing unreachable block (ram,0x072857ac) */
/* WARNING: Removing unreachable block (ram,0x072857c4) */
/* WARNING: Removing unreachable block (ram,0x072857c8) */
/* WARNING: Removing unreachable block (ram,0x072857d0) */
/* WARNING: Removing unreachable block (ram,0x072857e4) */
/* WARNING: Removing unreachable block (ram,0x072857f4) */
/* WARNING: Removing unreachable block (ram,0x07285678) */
/* WARNING: Removing unreachable block (ram,0x072856fc) */
/* WARNING: Removing unreachable block (ram,0x07285714) */
/* WARNING: Removing unreachable block (ram,0x07285808) */
/* WARNING: Removing unreachable block (ram,0x07285728) */
/* WARNING: Removing unreachable block (ram,0x07285730) */
/* WARNING: Removing unreachable block (ram,0x07285744) */
/* WARNING: Removing unreachable block (ram,0x0728580c) */
/* WARNING: Removing unreachable block (ram,0x07285810) */
/* WARNING: Removing unreachable block (ram,0x0728583c) */
/* WARNING: Removing unreachable block (ram,0x07285868) */
/* WARNING: Removing unreachable block (ram,0x072858e8) */
/* WARNING: Removing unreachable block (ram,0x07285828) */
/* WARNING: Removing unreachable block (ram,0x0728574c) */
/* WARNING: Removing unreachable block (ram,0x07285534) */
/* WARNING: Removing unreachable block (ram,0x07285474) */
/* WARNING: Removing unreachable block (ram,0x0728548c) */
/* WARNING: Removing unreachable block (ram,0x07285494) */
/* WARNING: Removing unreachable block (ram,0x072854dc) */
/* WARNING: Removing unreachable block (ram,0x072854a0) */
/* WARNING: Removing unreachable block (ram,0x072854ac) */
/* WARNING: Removing unreachable block (ram,0x072854e8) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Removing unreachable block (ram,0x072854f4) */
/* WARNING: Removing unreachable block (ram,0x072854f8) */
/* WARNING: Removing unreachable block (ram,0x07285358) */
/* WARNING: Removing unreachable block (ram,0x07285380) */
/* WARNING: Removing unreachable block (ram,0x07285388) */
/* WARNING: Removing unreachable block (ram,0x0727dc78) */
/* WARNING: Removing unreachable block (ram,0x0727dc80) */
/* WARNING: Removing unreachable block (ram,0x0727dcb0) */
/* WARNING: Removing unreachable block (ram,0x0727dcd0) */
/* WARNING: Removing unreachable block (ram,0x0727dce4) */
/* WARNING: Removing unreachable block (ram,0x0727dc7c) */
/* WARNING: Removing unreachable block (ram,0x03ea514c) */
/* WARNING: Removing unreachable block (ram,0x068a13b0) */
/* WARNING: Removing unreachable block (ram,0x068a13b8) */
/* WARNING: Removing unreachable block (ram,0x068a1388) */
/* WARNING: Removing unreachable block (ram,0x068a150c) */
/* WARNING: Removing unreachable block (ram,0x068a138c) */
/* WARNING: Removing unreachable block (ram,0x068a1188) */
/* WARNING: Removing unreachable block (ram,0x03e3ff24) */
/* WARNING: Removing unreachable block (ram,0x03e3ff6c) */
/* WARNING: Removing unreachable block (ram,0x03e3ff04) */
/* WARNING: Removing unreachable block (ram,0x03e3ff28) */
/* WARNING: Removing unreachable block (ram,0x03e3ff44) */
/* WARNING: Removing unreachable block (ram,0x03e3ff70) */
/* WARNING: Removing unreachable block (ram,0x03e3ff88) */
/* WARNING: Removing unreachable block (ram,0x03e3ffa8) */
/* WARNING: Removing unreachable block (ram,0x03e401c0) */
/* WARNING: Removing unreachable block (ram,0x03e401c8) */
/* WARNING: Removing unreachable block (ram,0x03e3ff54) */
/* WARNING: Removing unreachable block (ram,0x03e3ff08) */
/* WARNING: Removing unreachable block (ram,0x03e3ffbc) */
/* WARNING: Removing unreachable block (ram,0x03e3ffc0) */
/* WARNING: Removing unreachable block (ram,0x03e3ffc8) */
/* WARNING: Removing unreachable block (ram,0x03e3ffd0) */
/* WARNING: Removing unreachable block (ram,0x03e3ffe8) */
/* WARNING: Removing unreachable block (ram,0x03e3fff0) */
/* WARNING: Removing unreachable block (ram,0x03e40018) */
/* WARNING: Removing unreachable block (ram,0x03e3fffc) */
/* WARNING: Removing unreachable block (ram,0x03e40008) */
/* WARNING: Removing unreachable block (ram,0x03e40028) */
/* WARNING: Removing unreachable block (ram,0x03e40038) */
/* WARNING: Removing unreachable block (ram,0x03e4004c) */
/* WARNING: Removing unreachable block (ram,0x03e40050) */
/* WARNING: Removing unreachable block (ram,0x03e40058) */
/* WARNING: Removing unreachable block (ram,0x03e4005c) */
/* WARNING: Removing unreachable block (ram,0x03e4006c) */
/* WARNING: Removing unreachable block (ram,0x03e40070) */
/* WARNING: Removing unreachable block (ram,0x03e40120) */
/* WARNING: Removing unreachable block (ram,0x03e4016c) */
/* WARNING: Removing unreachable block (ram,0x03e401f8) */
/* WARNING: Removing unreachable block (ram,0x03e40200) */
/* WARNING: Removing unreachable block (ram,0x03e40228) */
/* WARNING: Removing unreachable block (ram,0x03e40230) */
/* WARNING: Removing unreachable block (ram,0x03e40254) */
/* WARNING: Removing unreachable block (ram,0x03e4023c) */
/* WARNING: Removing unreachable block (ram,0x03e40248) */
/* WARNING: Removing unreachable block (ram,0x03e40264) */
/* WARNING: Removing unreachable block (ram,0x03e40178) */
/* WARNING: Removing unreachable block (ram,0x03e40190) */
/* WARNING: Removing unreachable block (ram,0x03e40198) */
/* WARNING: Removing unreachable block (ram,0x03e401d0) */
/* WARNING: Removing unreachable block (ram,0x03e401a4) */
/* WARNING: Removing unreachable block (ram,0x03e401b0) */
/* WARNING: Removing unreachable block (ram,0x03e401dc) */
/* WARNING: Removing unreachable block (ram,0x03e4007c) */
/* WARNING: Removing unreachable block (ram,0x03e4008c) */
/* WARNING: Removing unreachable block (ram,0x03e40090) */
/* WARNING: Removing unreachable block (ram,0x03e40098) */
/* WARNING: Removing unreachable block (ram,0x03e4009c) */
/* WARNING: Removing unreachable block (ram,0x03e400ac) */
/* WARNING: Removing unreachable block (ram,0x03e400b0) */
/* WARNING: Removing unreachable block (ram,0x03e400f0) */
/* WARNING: Removing unreachable block (ram,0x03e400f4) */
/* WARNING: Removing unreachable block (ram,0x03e4010c) */
/* WARNING: Removing unreachable block (ram,0x03e40110) */
/* WARNING: Removing unreachable block (ram,0x03e3fe80) */
/* WARNING: Removing unreachable block (ram,0x03e3fe84) */
/* WARNING: Removing unreachable block (ram,0x03e3fea4) */
/* WARNING: Removing unreachable block (ram,0x03e3fea8) */
/* WARNING: Removing unreachable block (ram,0x03e3fec0) */
/* WARNING: Removing unreachable block (ram,0x03e3fedc) */
/* WARNING: Removing unreachable block (ram,0x03e3ff0c) */
/* WARNING: Removing unreachable block (ram,0x03e3feec) */
/* WARNING: Removing unreachable block (ram,0x068a0c78) */
/* WARNING: Removing unreachable block (ram,0x068a0c94) */
/* WARNING: Removing unreachable block (ram,0x068a0c98) */
/* WARNING: Removing unreachable block (ram,0x03e3fcac) */
/* WARNING: Removing unreachable block (ram,0x03e3fccc) */
/* WARNING: Removing unreachable block (ram,0x03e3fce0) */
/* WARNING: Removing unreachable block (ram,0x03e3fce8) */
/* WARNING: Removing unreachable block (ram,0x03e3fd88) */
/* WARNING: Removing unreachable block (ram,0x03e3fdc8) */
/* WARNING: Removing unreachable block (ram,0x03e3fe48) */
/* WARNING: Removing unreachable block (ram,0x03e3fe50) */
/* WARNING: Removing unreachable block (ram,0x03e402a8) */
/* WARNING: Removing unreachable block (ram,0x03e402cc) */
/* WARNING: Removing unreachable block (ram,0x03e402e0) */
/* WARNING: Removing unreachable block (ram,0x03e402e8) */
/* WARNING: Removing unreachable block (ram,0x03e40388) */
/* WARNING: Removing unreachable block (ram,0x03e403ac) */
/* WARNING: Removing unreachable block (ram,0x03e403c0) */
/* WARNING: Removing unreachable block (ram,0x03e403c8) */
/* WARNING: Removing unreachable block (ram,0x03e40468) */
/* WARNING: Removing unreachable block (ram,0x03e4048c) */
/* WARNING: Removing unreachable block (ram,0x03e404a0) */
/* WARNING: Removing unreachable block (ram,0x03e404a8) */
/* WARNING: Removing unreachable block (ram,0x03e40548) */
/* WARNING: Removing unreachable block (ram,0x03e4056c) */
/* WARNING: Removing unreachable block (ram,0x03e40580) */
/* WARNING: Removing unreachable block (ram,0x03e40588) */
/* WARNING: Removing unreachable block (ram,0x03e40628) */
/* WARNING: Removing unreachable block (ram,0x03e4064c) */
/* WARNING: Removing unreachable block (ram,0x03e40660) */
/* WARNING: Removing unreachable block (ram,0x03e40668) */
/* WARNING: Removing unreachable block (ram,0x03e40708) */
/* WARNING: Removing unreachable block (ram,0x03e4072c) */
/* WARNING: Removing unreachable block (ram,0x03e40740) */
/* WARNING: Removing unreachable block (ram,0x03e40748) */
/* WARNING: Removing unreachable block (ram,0x03e407e8) */
/* WARNING: Removing unreachable block (ram,0x03e4080c) */
/* WARNING: Removing unreachable block (ram,0x03e40820) */
/* WARNING: Removing unreachable block (ram,0x03e40828) */
/* WARNING: Removing unreachable block (ram,0x03e408c8) */
/* WARNING: Removing unreachable block (ram,0x03e408fc) */
/* WARNING: Removing unreachable block (ram,0x03e40934) */
/* WARNING: Removing unreachable block (ram,0x03e409f0) */
/* WARNING: Removing unreachable block (ram,0x03e40a14) */
/* WARNING: Removing unreachable block (ram,0x03e40a28) */
/* WARNING: Removing unreachable block (ram,0x03e40a30) */
/* WARNING: Removing unreachable block (ram,0x03e40ad0) */
/* WARNING: Removing unreachable block (ram,0x03e40af4) */
/* WARNING: Removing unreachable block (ram,0x03e40b08) */
/* WARNING: Removing unreachable block (ram,0x03e40b10) */
/* WARNING: Removing unreachable block (ram,0x03e40bb0) */
/* WARNING: Removing unreachable block (ram,0x03e40bd8) */
/* WARNING: Removing unreachable block (ram,0x03e40c1c) */
/* WARNING: Removing unreachable block (ram,0x03e40c24) */
/* WARNING: Removing unreachable block (ram,0x03e40c50) */
/* WARNING: Removing unreachable block (ram,0x03e40d10) */
/* WARNING: Removing unreachable block (ram,0x03e40d34) */
/* WARNING: Removing unreachable block (ram,0x03e40d48) */
/* WARNING: Removing unreachable block (ram,0x03e40d50) */
/* WARNING: Removing unreachable block (ram,0x03e40df0) */
/* WARNING: Removing unreachable block (ram,0x03e40e18) */
/* WARNING: Removing unreachable block (ram,0x03e40e5c) */
/* WARNING: Removing unreachable block (ram,0x03e40e64) */
/* WARNING: Removing unreachable block (ram,0x03e40e90) */
/* WARNING: Removing unreachable block (ram,0x03e40f50) */
/* WARNING: Removing unreachable block (ram,0x03e40f84) */
/* WARNING: Removing unreachable block (ram,0x03e40fa4) */
/* WARNING: Removing unreachable block (ram,0x03e40fac) */
/* WARNING: Removing unreachable block (ram,0x03e40fc0) */
/* WARNING: Removing unreachable block (ram,0x03e40fcc) */
/* WARNING: Removing unreachable block (ram,0x03e40fd8) */
/* WARNING: Removing unreachable block (ram,0x03e40fdc) */
/* WARNING: Removing unreachable block (ram,0x03e40fe4) */
/* WARNING: Removing unreachable block (ram,0x03e40fe8) */
/* WARNING: Removing unreachable block (ram,0x03e40ff8) */
/* WARNING: Removing unreachable block (ram,0x03e40ffc) */
/* WARNING: Removing unreachable block (ram,0x03e40eb8) */
/* WARNING: Removing unreachable block (ram,0x03e40ee0) */
/* WARNING: Removing unreachable block (ram,0x03e40ee8) */
/* WARNING: Removing unreachable block (ram,0x03e40f0c) */
/* WARNING: Removing unreachable block (ram,0x03e40ef4) */
/* WARNING: Removing unreachable block (ram,0x03e40f00) */
/* WARNING: Removing unreachable block (ram,0x03e40f1c) */
/* WARNING: Removing unreachable block (ram,0x03e40d58) */
/* WARNING: Removing unreachable block (ram,0x03e40d80) */
/* WARNING: Removing unreachable block (ram,0x03e40d88) */
/* WARNING: Removing unreachable block (ram,0x03e40dac) */
/* WARNING: Removing unreachable block (ram,0x03e40d94) */
/* WARNING: Removing unreachable block (ram,0x03e40da0) */
/* WARNING: Removing unreachable block (ram,0x03e40dbc) */
/* WARNING: Removing unreachable block (ram,0x03e40c78) */
/* WARNING: Removing unreachable block (ram,0x03e40ca0) */
/* WARNING: Removing unreachable block (ram,0x03e40ca8) */
/* WARNING: Removing unreachable block (ram,0x03e40ccc) */
/* WARNING: Removing unreachable block (ram,0x03e40cb4) */
/* WARNING: Removing unreachable block (ram,0x03e40cc0) */
/* WARNING: Removing unreachable block (ram,0x03e40cdc) */
/* WARNING: Removing unreachable block (ram,0x03e40b18) */
/* WARNING: Removing unreachable block (ram,0x03e40b40) */
/* WARNING: Removing unreachable block (ram,0x03e40b48) */
/* WARNING: Removing unreachable block (ram,0x03e40b6c) */
/* WARNING: Removing unreachable block (ram,0x03e40b54) */
/* WARNING: Removing unreachable block (ram,0x03e40b60) */
/* WARNING: Removing unreachable block (ram,0x03e40b7c) */
/* WARNING: Removing unreachable block (ram,0x03e40a38) */
/* WARNING: Removing unreachable block (ram,0x03e40a60) */
/* WARNING: Removing unreachable block (ram,0x03e40a68) */
/* WARNING: Removing unreachable block (ram,0x03e40a8c) */
/* WARNING: Removing unreachable block (ram,0x03e40a74) */
/* WARNING: Removing unreachable block (ram,0x03e40a80) */
/* WARNING: Removing unreachable block (ram,0x03e40a9c) */
/* WARNING: Removing unreachable block (ram,0x03e40950) */
/* WARNING: Removing unreachable block (ram,0x03e40980) */
/* WARNING: Removing unreachable block (ram,0x03e40988) */
/* WARNING: Removing unreachable block (ram,0x03e409ac) */
/* WARNING: Removing unreachable block (ram,0x03e40994) */
/* WARNING: Removing unreachable block (ram,0x03e409a0) */
/* WARNING: Removing unreachable block (ram,0x03e409bc) */
/* WARNING: Removing unreachable block (ram,0x03e40830) */
/* WARNING: Removing unreachable block (ram,0x03e40858) */
/* WARNING: Removing unreachable block (ram,0x03e40860) */
/* WARNING: Removing unreachable block (ram,0x03e40884) */
/* WARNING: Removing unreachable block (ram,0x03e4086c) */
/* WARNING: Removing unreachable block (ram,0x03e40878) */
/* WARNING: Removing unreachable block (ram,0x03e40894) */
/* WARNING: Removing unreachable block (ram,0x03e40750) */
/* WARNING: Removing unreachable block (ram,0x03e40778) */
/* WARNING: Removing unreachable block (ram,0x03e40780) */
/* WARNING: Removing unreachable block (ram,0x03e407a4) */
/* WARNING: Removing unreachable block (ram,0x03e4078c) */
/* WARNING: Removing unreachable block (ram,0x03e40798) */
/* WARNING: Removing unreachable block (ram,0x03e407b4) */
/* WARNING: Removing unreachable block (ram,0x03e40670) */
/* WARNING: Removing unreachable block (ram,0x03e40698) */
/* WARNING: Removing unreachable block (ram,0x03e406a0) */
/* WARNING: Removing unreachable block (ram,0x03e406c4) */
/* WARNING: Removing unreachable block (ram,0x03e406ac) */
/* WARNING: Removing unreachable block (ram,0x03e406b8) */
/* WARNING: Removing unreachable block (ram,0x03e406d4) */
/* WARNING: Removing unreachable block (ram,0x03e40590) */
/* WARNING: Removing unreachable block (ram,0x03e405b8) */
/* WARNING: Removing unreachable block (ram,0x03e405c0) */
/* WARNING: Removing unreachable block (ram,0x03e405e4) */
/* WARNING: Removing unreachable block (ram,0x03e405cc) */
/* WARNING: Removing unreachable block (ram,0x03e405d8) */
/* WARNING: Removing unreachable block (ram,0x03e405f4) */
/* WARNING: Removing unreachable block (ram,0x03e404b0) */
/* WARNING: Removing unreachable block (ram,0x03e404d8) */
/* WARNING: Removing unreachable block (ram,0x03e404e0) */
/* WARNING: Removing unreachable block (ram,0x03e40504) */
/* WARNING: Removing unreachable block (ram,0x03e404ec) */
/* WARNING: Removing unreachable block (ram,0x03e404f8) */
/* WARNING: Removing unreachable block (ram,0x03e40514) */
/* WARNING: Removing unreachable block (ram,0x03e403d0) */
/* WARNING: Removing unreachable block (ram,0x03e403f8) */
/* WARNING: Removing unreachable block (ram,0x03e40400) */
/* WARNING: Removing unreachable block (ram,0x03e40424) */
/* WARNING: Removing unreachable block (ram,0x03e4040c) */
/* WARNING: Removing unreachable block (ram,0x03e40418) */
/* WARNING: Removing unreachable block (ram,0x03e40434) */
/* WARNING: Removing unreachable block (ram,0x03e402f0) */
/* WARNING: Removing unreachable block (ram,0x03e40318) */
/* WARNING: Removing unreachable block (ram,0x03e40320) */
/* WARNING: Removing unreachable block (ram,0x03e40344) */
/* WARNING: Removing unreachable block (ram,0x03e4032c) */
/* WARNING: Removing unreachable block (ram,0x03e40338) */
/* WARNING: Removing unreachable block (ram,0x03e40354) */
/* WARNING: Removing unreachable block (ram,0x03e3fe70) */
/* WARNING: Removing unreachable block (ram,0x03e3fcf0) */
/* WARNING: Removing unreachable block (ram,0x03e3fd18) */
/* WARNING: Removing unreachable block (ram,0x03e3fd20) */
/* WARNING: Removing unreachable block (ram,0x03e3fd44) */
/* WARNING: Removing unreachable block (ram,0x03e3fd2c) */
/* WARNING: Removing unreachable block (ram,0x03e3fd38) */
/* WARNING: Removing unreachable block (ram,0x03e3fd54) */
/* WARNING: Removing unreachable block (ram,0x068a0bf0) */
/* WARNING: Removing unreachable block (ram,0x068a0ffc) */

long * MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__UpdateChainsAfterToolGeneration
                 (long param_1,long *param_2,uint *param_3,long *param_4,long *param_5,long *param_6
                 )

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  undefined8 uVar29;
  long lVar30;
  long *plVar31;
  ulong uVar32;
  uint *puVar33;
  long *plVar34;
  float fVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined *puStack_128;
  long *plStack_120;
  long lStack_118;
  undefined8 uStack_108;
  uint uStack_54;
  
  uVar32 = (ulong)param_3 & 0xffffffff;
  if ((bRam0000000007e28dd6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078109c8);
    func_0x03280a18(PTR_DAT_07810a18);
    func_0x03280a18(PTR_DAT_07810a20);
    func_0x03280a18(PTR_DAT_07810a60);
    func_0x03280a18(PTR_DAT_0777c258);
    func_0x03280a18(PTR_DAT_07780070);
    func_0x03280a18(PTR_DAT_07780078);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777ffc8);
    func_0x03280a18(PTR_DAT_0777c2d8);
    func_0x03280a18(PTR_DAT_07810a30);
    func_0x03280a18(PTR_DAT_0777e508);
    bRam0000000007e28dd6 = 1;
  }
  uStack_54 = 0;
  plVar34 = (long *)0x7e28000;
  if (param_2 != (long *)0x0) {
    lVar23 = *param_2;
    plVar34 = *(long **)(param_1 + 0x40);
    uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar26 != 0) {
      piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_07779820) {
          puVar17 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_068a06e8;
        }
        uVar26 = uVar26 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar26 != 0);
    }
    param_3 = (uint *)0x0;
    puVar17 = (undefined8 *)func_0x03256b10(param_2);
LAB_068a06e8:
    uVar18 = (*(code *)*puVar17)(param_2,puVar17[1]);
    if (plVar34 != (long *)0x0) {
      lVar23 = *plVar34;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 != 0) {
        piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar17 = (undefined8 *)(lVar23 + (long)(*piVar28 + 4) * 0x10 + 0x138);
            goto LAB_068a0754;
          }
          uVar26 = uVar26 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar26 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0777a498,4);
LAB_068a0754:
      param_3 = (uint *)puVar17[1];
      plVar19 = (long *)(*(code *)*puVar17)(plVar34,uVar18);
      if (*(long *)(param_1 + 0x78) != 0) {
        param_3 = &uStack_54;
        plVar20 = (long *)func_0x04fb7738(*(long *)(param_1 + 0x78),plVar19,param_3,
                                          *(undefined8 *)PTR_DAT_07810a60);
        puVar3 = PTR_DAT_0777c258;
        if (((ulong)plVar20 & 1) == 0) {
          return plVar20;
        }
        if (*(long *)(param_1 + 0x88) != 0) {
          param_3 = *(uint **)PTR_DAT_0777c258;
          uVar9 = func_0x04f2ba70(*(long *)(param_1 + 0x88),uVar32);
          plVar34 = (long *)puVar3;
          if (plVar19 != (long *)0x0) {
            lVar23 = *plVar19;
            lVar30 = *(long *)(param_1 + 0x88);
            puVar33 = (uint *)(ulong)uVar9;
            uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar32 != 0) {
              piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0777c248) {
                  puVar17 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_068a080c;
                }
                uVar32 = uVar32 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar32 != 0);
            }
            param_3 = (uint *)0x0;
            puVar17 = (undefined8 *)func_0x03256b10(plVar19);
LAB_068a080c:
            lVar23 = (*(code *)*puVar17)(plVar19,puVar17[1]);
            if ((lVar23 != 0) && (lVar30 != 0)) {
              param_3 = *(uint **)puVar3;
              iVar10 = func_0x04f2ba70(lVar30,*(undefined4 *)(lVar23 + 0x18));
              puVar3 = PTR_DAT_07810a20;
              if (*param_5 != 0) {
                uVar32 = func_0x04f5ce74(*param_5,uStack_54,puVar33,*(undefined8 *)PTR_DAT_07810a20)
                ;
                if ((uVar32 & 1) == 0) {
                  lVar23 = *param_5;
                  param_3 = puVar33;
                  if (lVar23 == 0) goto LAB_068a09f4;
                  plVar34 = (long *)(ulong)uStack_54;
                  iVar11 = func_0x04f5b400(lVar23,plVar34,*(undefined8 *)PTR_DAT_07780070);
                  puVar33 = (uint *)(ulong)(iVar11 + uVar9);
                  func_0x04f5b488(lVar23,plVar34,puVar33,*(undefined8 *)PTR_DAT_07780078);
                }
                puVar4 = PTR_DAT_07780070;
                param_3 = puVar33;
                if (*param_5 != 0) {
                  param_3 = *(uint **)PTR_DAT_07780070;
                  iVar11 = func_0x04f5b400(*param_5,uStack_54);
                  uVar9 = 0;
                  if (iVar10 != 0) {
                    uVar9 = iVar11 / iVar10;
                  }
                  puVar33 = (uint *)(ulong)uVar9;
                  if (0 < (int)uVar9) {
                    if (*param_6 == 0) goto LAB_068a09f4;
                    uVar32 = func_0x04f5ce74(*param_6,uStack_54,puVar33,*(undefined8 *)puVar3);
                    param_3 = puVar33;
                    if ((uVar32 & 1) == 0) {
                      lVar23 = *param_6;
                      if (lVar23 == 0) goto LAB_068a09f4;
                      plVar34 = (long *)(ulong)uStack_54;
                      iVar12 = func_0x04f5b400(lVar23,plVar34,*(undefined8 *)puVar4);
                      param_3 = (uint *)(ulong)(iVar12 + uVar9);
                      func_0x04f5b488(lVar23,plVar34,param_3,*(undefined8 *)PTR_DAT_07780078);
                    }
                  }
                  if (*param_4 != 0) {
                    if ((int)(iVar11 - uVar9 * iVar10) < 1) {
                      param_3 = *(uint **)PTR_DAT_07810a30;
                      func_0x0411dd18(*param_4,uStack_54);
                      if (*param_5 != 0) {
                        plVar34 = (long *)func_0x04f5c844(*param_5,uStack_54,
                                                          *(undefined8 *)PTR_DAT_07810a18);
                        return plVar34;
                      }
                    }
                    else {
                      param_3 = *(uint **)PTR_DAT_0777c2d8;
                      plVar19 = (long *)func_0x0411ca30();
                      if (((ulong)plVar19 & 1) != 0) {
                        return plVar19;
                      }
                      param_4 = (long *)*param_4;
                      if (param_4 != (long *)0x0) {
                        lVar23 = param_4[2];
                        lVar30 = *(long *)PTR_DAT_0777ffc8;
                        *(int *)((long)param_4 + 0x1c) = *(int *)((long)param_4 + 0x1c) + 1;
                        if (lVar23 != 0) {
                          uVar9 = *(uint *)(param_4 + 3);
                          if (uVar9 < *(uint *)(lVar23 + 0x18)) {
                            *(uint *)(param_4 + 3) = uVar9 + 1;
                            *(uint *)(lVar23 + (long)(int)uVar9 * 4 + 0x20) = uStack_54;
                            return param_4;
                          }
                          plVar34 = (long *)func_0x0411c6b8(param_4,uStack_54,
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar30 + 0x20) +
                                                                       0xc0) + 0x70));
                          return plVar34;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_068a09f4:
  auVar37 = func_0x03280cac();
  lVar23 = auVar37._8_8_;
  if ((bRam0000000007e28dda & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_07810a68);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28dda = 1;
  }
  if (((lVar23 == 0) ||
      (lVar30 = func_0x03ced81c(lVar23,*(undefined8 *)PTR_DAT_0777bf98), lVar30 == 0)) ||
     (plVar19 = *(long **)(auVar37._0_8_ + 0xa0), plVar19 == (long *)0x0)) {
LAB_068a0cc0:
    auVar37 = func_0x03280cac();
    puVar4 = PTR_DAT_07810a78;
    puVar3 = PTR_DAT_07810a70;
    lVar23 = auVar37._0_8_;
    if ((bRam0000000007e28dd9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078109c8);
      func_0x03280a18(PTR_DAT_07810a60);
      func_0x03280a18(PTR_DAT_077d9ff0);
      func_0x03280a18(PTR_DAT_077db270);
      func_0x03280a18(PTR_DAT_077db278);
      func_0x03280a18(PTR_DAT_077db280);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_07773688);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_07810a80);
      func_0x03280a18(PTR_DAT_077db290);
      func_0x03280a18(PTR_DAT_07810a78);
      func_0x03280a18(PTR_DAT_07810a70);
      func_0x03280a18(PTR_DAT_07771f40);
      func_0x03280a18(PTR_DAT_077730b8);
      func_0x03280a18(PTR_DAT_07810a88);
      bRam0000000007e28dd9 = 1;
    }
    plStack_130 = (long *)0x0;
    puStack_128 = (undefined *)0x0;
    plStack_120 = (long *)0x0;
    uStack_108 = (ulong)(uint)uStack_108;
    plVar34 = (long *)func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x040ab20c(plVar34,*(undefined8 *)puVar4);
    puVar7 = PTR_DAT_07810a88;
    puVar6 = PTR_DAT_07810a80;
    puVar5 = PTR_DAT_07810a60;
    puVar4 = PTR_DAT_077db278;
    puVar3 = PTR_DAT_0777a498;
    if (auVar37._8_8_ != 0) {
      func_0x04145068(&plStack_148,auVar37._8_8_,*(undefined8 *)PTR_DAT_077db290);
      puStack_128 = (undefined *)uStack_140;
      plStack_130 = plStack_148;
      plStack_120 = plStack_138;
      while( true ) {
        uVar32 = func_0x051159b4(&plStack_130,*(undefined8 *)puVar4);
        plVar19 = plStack_120;
        if ((uVar32 & 1) == 0) {
          func_0x051159b0(&plStack_130,*(undefined8 *)PTR_DAT_077db270);
          return plVar34;
        }
        if (plStack_120 == (long *)0x0) break;
        lVar30 = *plStack_120;
        plVar20 = *(long **)(lVar23 + 0x40);
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 != 0) {
          piVar28 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_07779820) {
              puVar17 = (undefined8 *)(lVar30 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_068a0eb4;
            }
            uVar32 = uVar32 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar32 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plStack_120,*(long *)PTR_DAT_07779820,0);
LAB_068a0eb4:
        uVar18 = (*(code *)*puVar17)(plVar19,puVar17[1]);
        if (plVar20 == (long *)0x0) goto LAB_068a11e8;
        lVar30 = *plVar20;
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 != 0) {
          piVar28 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar3) {
              puVar17 = (undefined8 *)(lVar30 + (long)(*piVar28 + 4) * 0x10 + 0x138);
              goto LAB_068a0f18;
            }
            uVar32 = uVar32 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar32 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar3,4);
LAB_068a0f18:
        uVar18 = (*(code *)*puVar17)(plVar20,uVar18,puVar17[1]);
        if (*(long *)(lVar23 + 0x78) == 0) {
          func_0x03280cac(0,uVar18);
          break;
        }
        uVar32 = func_0x04fb7738(*(long *)(lVar23 + 0x78),uVar18,(long)&uStack_108 + 4,
                                 *(undefined8 *)puVar5);
        if ((uVar32 & 1) == 0) {
          plStack_148 = (long *)0x0;
          uStack_140 = 0;
          func_0x048cbf28(&plStack_148,plVar19,0,*(undefined8 *)puVar7);
          if (plVar34 == (long *)0x0) goto LAB_068a11ec;
          lVar30 = plVar34[2];
          lVar24 = *(long *)puVar6;
          *(int *)((long)plVar34 + 0x1c) = *(int *)((long)plVar34 + 0x1c) + 1;
          if (lVar30 == 0) goto LAB_068a11f0;
          uVar9 = *(uint *)(plVar34 + 3);
          if (uVar9 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + (long)(int)uVar9 * 0x10;
            *(uint *)(plVar34 + 3) = uVar9 + 1;
            plVar19 = (long *)(lVar30 + 0x20);
            *plVar19 = (long)plStack_148;
            *(undefined8 *)(lVar30 + 0x28) = uStack_140;
            goto SUB_032809c4;
          }
          func_0x040aba8c(plVar34,plStack_148,uStack_140,
                          *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        else {
          func_0x06378a30(plVar19,*(undefined8 *)(lVar23 + 0x40),0);
          if (*(long *)(lVar23 + 0xd0) == 0) goto LAB_068a11fc;
          func_0x069f7880(*(long *)(lVar23 + 0xd0),uStack_108._4_4_,0);
          if (*(long *)(lVar23 + 0xd0) == 0) goto LAB_068a11f8;
          fVar35 = (float)func_0x069f793c(*(long *)(lVar23 + 0xd0),uStack_108._4_4_,0);
          if (100.0 <= fVar35) {
            uVar8 = uStack_108._4_4_;
            uVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
            func_0x06b21870(uVar18,uVar8,1,0,0);
            plVar20 = *(long **)(lVar23 + 0x50);
            uVar32 = uStack_108 >> 0x20;
            if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar29 = func_0x0624cb20(uVar32,0);
            if (plVar20 == (long *)0x0) goto LAB_068a1208;
            lVar30 = *plVar20;
            uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar32 != 0) {
              piVar28 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_07773688) {
                  puVar17 = (undefined8 *)(lVar30 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                  goto LAB_068a10d0;
                }
                uVar32 = uVar32 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar32 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_07773688,3);
LAB_068a10d0:
            (*(code *)*puVar17)(plVar20,uVar29,1,0,0x14,0,1,puVar17[1]);
            if (*(long *)(lVar23 + 0xd0) != 0) {
              lVar30 = *(long *)(*(long *)(lVar23 + 0xd0) + 0x38);
              if (lVar30 != 0) {
                func_0x04f654ac(fVar35 + -100.0,lVar30,uStack_108._4_4_,
                                *(undefined8 *)PTR_DAT_077d9ff0);
                goto LAB_068a1124;
              }
              goto LAB_068a1204;
            }
            goto LAB_068a120c;
          }
          uVar18 = 0;
LAB_068a1124:
          plStack_148 = (long *)0x0;
          uStack_140 = 0;
          func_0x048cbf28(&plStack_148,plVar19,uVar18,*(undefined8 *)puVar7);
          if (plVar34 == (long *)0x0) goto LAB_068a1200;
          lVar30 = plVar34[2];
          lVar24 = *(long *)puVar6;
          *(int *)((long)plVar34 + 0x1c) = *(int *)((long)plVar34 + 0x1c) + 1;
          if (lVar30 == 0) goto LAB_068a11f4;
          uVar9 = *(uint *)(plVar34 + 3);
          if (uVar9 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + (long)(int)uVar9 * 0x10;
            *(uint *)(plVar34 + 3) = uVar9 + 1;
            plVar19 = (long *)(lVar30 + 0x20);
            *plVar19 = (long)plStack_148;
            *(undefined8 *)(lVar30 + 0x28) = uStack_140;
            goto SUB_032809c4;
          }
          func_0x040aba8c(plVar34,plStack_148,uStack_140,
                          *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      func_0x03280cac();
LAB_068a11e8:
      func_0x03280cac();
LAB_068a11ec:
      func_0x03280cac();
LAB_068a11f0:
      func_0x03280cac();
LAB_068a11f4:
      func_0x03280cac();
LAB_068a11f8:
      func_0x03280cac();
LAB_068a11fc:
      func_0x03280cac();
LAB_068a1200:
      func_0x03280cac();
LAB_068a1204:
      func_0x03280cac();
LAB_068a1208:
      func_0x03280cac();
LAB_068a120c:
      func_0x03280cac();
    }
    auVar36 = func_0x03280cac();
    if (auVar36._8_4_ == 1) {
      plVar19 = (long *)func_0x072ce910(auVar36._0_8_);
      lVar23 = *plVar19;
      func_0x072ce920();
      func_0x051159b0(&plStack_130,*(undefined8 *)PTR_DAT_077db270);
      if (lVar23 == 0) {
        return plVar34;
      }
      func_0x03280ca4(lVar23);
    }
    func_0x051159b0(&plStack_130,*(undefined8 *)PTR_DAT_077db270);
    func_0x03365958(auVar36._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
    puVar3 = PTR_DAT_07810a90;
    if ((bRam0000000007e28dd8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      func_0x03280a18(PTR_DAT_077d75b8);
      func_0x03280a18(PTR_DAT_077cc678);
      func_0x03280a18(PTR_DAT_07810a98);
      func_0x03280a18(PTR_DAT_07810aa0);
      func_0x03280a18(PTR_DAT_07810aa8);
      func_0x03280a18(PTR_DAT_07810a90);
      bRam0000000007e28dd8 = 1;
    }
    plVar34 = (long *)func_0x03280ca0(*(undefined8 *)puVar3);
    return plVar34;
  }
  lVar24 = *plVar19;
  uVar18 = *(undefined8 *)(lVar30 + 0x30);
  uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar32 != 0) {
    piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar17 = (undefined8 *)(lVar24 + (long)(*piVar28 + 9) * 0x10 + 0x138);
        goto LAB_068a0b14;
      }
      uVar32 = uVar32 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar32 != 0);
  }
  puVar17 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777a498,9);
LAB_068a0b14:
  uVar18 = (*(code *)*puVar17)(plVar19,uVar18,puVar17[1]);
  plVar19 = *(long **)(auVar37._0_8_ + 0xb0);
  if (plVar19 == (long *)0x0) goto LAB_068a0cc0;
  lVar30 = *plVar19;
  uVar29 = *(undefined8 *)(lVar23 + 0x10);
  uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
  plVar20 = *(long **)PTR_DAT_0776b160;
  if (uVar32 != 0) {
    piVar28 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar17 = (undefined8 *)(lVar30 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_068a0b94;
      }
      uVar32 = uVar32 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar32 != 0);
  }
  puVar17 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e4a0,0);
LAB_068a0b94:
  lVar23 = (*(code *)*puVar17)(plVar19,plVar20,uVar18,uVar29,0,puVar17[1]);
  puVar4 = PTR_DAT_077cc918;
  puVar3 = PTR_DAT_077cc910;
  if (lVar23 == 0) goto LAB_068a0cc0;
  plVar19 = (long *)(lVar23 + 0x20);
  if (*plVar19 == 0) {
    lVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
    func_0x06a30df4(lVar23,0);
    *plVar19 = lVar23;
    goto SUB_032809c4;
  }
  plVar19 = (long *)(*plVar19 + 0x40);
  *plVar19 = (long)param_3;
  func_0x032809c4(plVar19,param_3);
  lVar30 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04143c38(lVar30,*(undefined8 *)puVar4);
  if (lVar30 == 0) goto LAB_068a0cc0;
  lVar24 = *(long *)(lVar30 + 0x10);
  lVar27 = *(long *)PTR_DAT_0777e4a8;
  *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
  if (lVar24 == 0) goto LAB_068a0cc0;
  uVar9 = *(uint *)(lVar30 + 0x18);
  if (uVar9 < *(uint *)(lVar24 + 0x18)) {
    *(uint *)(lVar30 + 0x18) = uVar9 + 1;
    plVar19 = (long *)(lVar24 + (long)(int)uVar9 * 8 + 0x20);
    *plVar19 = lVar23;
    goto SUB_032809c4;
  }
  uVar9 = *(uint *)(lVar30 + 0x18);
  lVar24 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70
                                                  ) + 0x20) + 0xc0) + 0x78);
  func_0x04144aa0(lVar30,uVar9 + 1);
  lVar27 = *(long *)(lVar30 + 0x10);
  *(uint *)(lVar30 + 0x18) = uVar9 + 1;
  if (lVar27 == 0) {
    func_0x03280cac();
  }
  else if (uVar9 < *(uint *)(lVar27 + 0x18)) {
    plVar19 = (long *)(lVar27 + (long)(int)uVar9 * 8 + 0x20);
    *plVar19 = lVar23;
    goto SUB_032809c4;
  }
  auVar37 = func_0x03280cb4();
  lVar27 = auVar37._8_8_;
  lVar23 = auVar37._0_8_;
  lVar22 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x58);
  func_0x03ec2768(lVar27,0x14);
  lVar30 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
    lVar30 = func_0x0325681c(lVar30);
  }
  if (lVar27 == 0) {
LAB_0414454c:
    lVar13 = 0;
  }
  else {
    lVar13 = func_0x03280b90(lVar27,lVar30);
    if (lVar13 == 0) {
      func_0x03281048(lVar27,lVar30);
      goto LAB_0414454c;
    }
  }
  lVar30 = *(long *)(lVar23 + 0x10);
  lVar25 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  if (lVar30 != 0) {
    uVar9 = *(uint *)(lVar23 + 0x18);
    if (uVar9 < *(uint *)(lVar30 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar9 + 1;
      plVar19 = (long *)(lVar30 + (long)(int)uVar9 * 8 + 0x20);
      *plVar19 = lVar13;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar16 = (ulong *)(((ulong)plVar19 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar2) {
            *puVar16 = *puVar16 | 1L << ((ulong)plVar19 >> 0xc & 0x3f);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return plVar19;
    }
    func_0x0414446c(lVar23,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar23 + 0x18) - 1);
  }
  auVar36 = func_0x03280cac();
  uVar18 = auVar36._0_8_;
  if (auVar36._8_4_ == 1) {
    puVar17 = (undefined8 *)func_0x072ce910(uVar18);
    uVar18 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar32 = func_0x032810d8(uVar18,*(undefined8 *)*puVar17);
    if ((uVar32 & 1) != 0) {
      func_0x072ce920();
      uVar18 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x68);
      lVar30 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar30 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar18 = func_0x057a51c4(uVar18,0);
      func_0x057b7b18(lVar27,uVar18,0);
      goto LAB_041445ac;
    }
    puVar14 = (undefined8 *)func_0x072ce930(8);
    *puVar14 = *puVar17;
    lVar22 = 0;
    uVar18 = func_0x072ce940(puVar14,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar18);
  auVar37 = func_0x02f09514();
  plVar21 = auVar37._8_8_;
  plVar15 = auVar37._0_8_;
  uVar9 = *(uint *)(plVar15 + 3);
  lVar30 = *(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x90);
  uVar32 = (ulong)uVar9;
  uStack_140 = 0x4144678;
  puStack_128 = puVar4;
  plVar31 = (long *)0x7e18000;
  plVar19 = plVar21;
  plStack_138 = plVar34;
  plStack_130 = plVar20;
  plStack_120 = (long *)uVar18;
  lStack_118 = lVar24;
  uStack_108 = lVar23;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar21 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar15 + 3) < uVar9) {
    func_0x057b8434(0);
  }
  lVar23 = *(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = func_0x0325681c(lVar23);
  }
  plVar34 = (long *)func_0x03280b90(plVar21,lVar23);
  if (plVar34 == (long *)0x0) {
    if ((int)uVar9 < (int)plVar15[3]) {
      if (plVar21 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar23 = *(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x0325681c(lVar23);
        }
        lVar24 = *plVar21;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 != 0) {
          piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar23) {
              puVar17 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar26 = uVar26 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar26 != 0);
        }
        plVar19 = (long *)0x0;
        puVar17 = (undefined8 *)func_0x03256b10(plVar21);
LAB_04145868:
        plVar31 = (long *)(*(code *)*puVar17)(plVar21,puVar17[1]);
        puVar3 = PTR_DAT_0774e8e0;
        if (plVar31 != (long *)0x0) {
          do {
            lVar23 = *plVar31;
            uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar26 != 0) {
              piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)puVar3) {
                  puVar17 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar26 = uVar26 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar26 != 0);
            }
            plVar19 = (long *)0x0;
            puVar17 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041458d0:
            plVar20 = (long *)(*(code *)*puVar17)(plVar31,puVar17[1]);
            if (((ulong)plVar20 & 1) == 0) {
              uVar32 = 0;
              iVar10 = 5;
              if (plVar31 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar23 = *(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
              lVar23 = func_0x0325681c(lVar23);
            }
            lVar24 = *plVar31;
            uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar26 != 0) {
              piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == lVar23) {
                  puVar17 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar26 = uVar26 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar26 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar31,lVar23,0);
LAB_04145948:
            plVar19 = (long *)(*(code *)*puVar17)(plVar31,puVar17[1]);
            func_0x04145380(plVar15,uVar32,plVar19,
                            *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x160));
            uVar32 = (ulong)((int)uVar32 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar36 = func_0x03280ca4(uVar32);
        if (auVar36._8_4_ != 1) {
          if (plVar31 == (long *)0x0) goto LAB_04145ae0;
          lVar23 = *plVar31;
          uVar32 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar32 == 0) goto LAB_04145ab8;
          piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar16 = (ulong *)func_0x072ce910(auVar36._0_8_);
        uVar32 = *puVar16;
        plVar20 = (long *)func_0x072ce920();
        iVar10 = 0;
        if (plVar31 != (long *)0x0) {
LAB_04145988:
          lVar23 = *plVar31;
          uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar26 != 0) {
            piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar17 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar26 = uVar26 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar26 != 0);
          }
          plVar19 = (long *)0x0;
          puVar17 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041459dc:
          plVar20 = (long *)(*(code *)*puVar17)(plVar31,puVar17[1]);
        }
LAB_041459e8:
      } while (uVar32 != 0);
      if (iVar10 == 5) goto LAB_04145a10;
      if (iVar10 != 0) {
        return plVar20;
      }
    }
    plVar20 = (long *)func_0x041462cc(plVar15,plVar21,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar23 = *(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c(lVar23);
    }
    lVar24 = *plVar34;
    uVar32 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar32 != 0) {
      piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar23) {
          puVar17 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar32 = uVar32 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar32 != 0);
    }
    puVar17 = (undefined8 *)func_0x03256b10(plVar34,lVar23,0);
LAB_04145728:
    plVar20 = (long *)(*(code *)*puVar17)(plVar34,puVar17[1]);
    iVar10 = (int)plVar20;
    if (0 < iVar10) {
      func_0x04144aa0(plVar15,(int)plVar15[3] + iVar10,
                      *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x78));
      iVar11 = (int)plVar15[3] - uVar9;
      if (iVar11 != 0 && (int)uVar9 <= (int)plVar15[3]) {
        func_0x057b9f30(plVar15[2],uVar9,plVar15[2],iVar10 + uVar9,iVar11,0);
      }
      if (plVar15 == plVar34) {
        func_0x057b9f30(plVar15[2],0,plVar15[2],uVar9,uVar9,0);
        plVar20 = (long *)func_0x057b9f30(plVar15[2],iVar10 + uVar9,plVar15[2],uVar9 << 1,
                                          (int)plVar15[3] - uVar9,0);
      }
      else {
        lVar24 = plVar15[2];
        lVar23 = *(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = func_0x0325681c(lVar23);
        }
        lVar30 = *plVar34;
        uVar32 = (ulong)*(ushort *)(lVar30 + 0x12e);
        if (uVar32 != 0) {
          piVar28 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar23) {
              puVar17 = (undefined8 *)(lVar30 + (long)(*piVar28 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar32 = uVar32 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar32 != 0);
        }
        puVar17 = (undefined8 *)func_0x03256b10(plVar34,lVar23,5);
LAB_04145838:
        plVar20 = (long *)(*(code *)*puVar17)(plVar34,lVar24,uVar9,puVar17[1]);
      }
      *(int *)(plVar15 + 3) = (int)plVar15[3] + iVar10;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar15 + 0x1c) = *(int *)((long)plVar15 + 0x1c) + 1;
  return plVar20;
  while( true ) {
    uVar32 = uVar32 - 1;
    piVar28 = piVar28 + 4;
    if (uVar32 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar17 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar19 = (long *)0x0;
  puVar17 = (undefined8 *)func_0x03256b10(plVar31);
LAB_04145ad4:
  (*(code *)*puVar17)(plVar31,puVar17[1]);
LAB_04145ae0:
  func_0x03365958(auVar36._0_8_);
  func_0x03280ca4(0);
  auVar37 = func_0x02f09514();
  lVar23 = auVar37._0_8_;
  plStack_148 = plVar15;
  uVar9 = func_0x03f898d4(*(undefined8 *)(lVar23 + 0x10),auVar37._8_8_,0,
                          *(undefined4 *)(lVar23 + 0x18),
                          *(undefined8 *)
                           (*(long *)(*(long *)(*(long *)(*(long *)(plVar19[4] + 0xc0) + 0xd0) +
                                               0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar9) {
    func_0x04145da4(lVar23,uVar9);
  }
  return (long *)(ulong)(~uVar9 >> 0x1f);
}

