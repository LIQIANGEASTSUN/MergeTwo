/* Ghidra 12.1.2 native pseudocode; RVA 0x679FCE0; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.AnalyzeToolsInInventory; status ok */


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

long * MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__AnalyzeToolsInInventory
                 (long param_1,undefined *param_2,long **param_3,long param_4,long *param_5,
                 long *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined8 *puVar24;
  ulong *puVar25;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  long *plVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  uint uVar23;
  undefined8 uVar31;
  undefined8 uVar32;
  long *plVar33;
  long *plVar34;
  long lVar36;
  long **pplVar37;
  uint *puVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  int *piVar43;
  ulong uVar44;
  undefined *puVar45;
  uint *puVar46;
  long **pplVar47;
  uint *puVar48;
  long *unaff_x25;
  long *plVar49;
  undefined *unaff_x26;
  undefined *puVar50;
  undefined *puVar51;
  long lVar52;
  undefined *puVar53;
  ulong unaff_x28;
  undefined *unaff_x29;
  undefined *puVar54;
  float fVar55;
  undefined8 unaff_d8;
  undefined1 auVar56 [12];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long *plStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined *puStack_218;
  long *plStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  uint *puStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  uint *puStack_198;
  undefined8 uStack_190;
  long *plStack_180;
  uint *puStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  uint auStack_144 [3];
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long **pplStack_f8;
  uint uStack_e4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  long **pplStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long **pplStack_90;
  long lStack_88;
  undefined *puStack_78;
  long *plStack_68;
  long lVar35;
  
  puVar45 = PTR_DAT_077bf888;
  pplVar47 = (long **)0x7e28000;
  pplVar37 = param_3;
  lVar39 = param_4;
  if ((bRam0000000007e28dd4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810a08);
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_07810a10);
    func_0x03280a18(PTR_DAT_07810a18);
    func_0x03280a18(PTR_DAT_07810a20);
    func_0x03280a18(PTR_DAT_07810a28);
    func_0x03280a18(PTR_DAT_0777c258);
    func_0x03280a18(PTR_DAT_07780070);
    func_0x03280a18(PTR_DAT_07780078);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777a750);
    func_0x03280a18(PTR_DAT_0777ffc8);
    func_0x03280a18(PTR_DAT_0777c2d8);
    func_0x03280a18(PTR_DAT_07810a30);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_077bf888);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28dd4 = 1;
  }
  plVar26 = *(long **)puVar45;
  plStack_68 = (long *)0x0;
  if ((int)plVar26[0x1c] == 0) {
    func_0x03280b8c();
    plVar26 = *(long **)puVar45;
  }
  puVar54 = PTR_DAT_07810a28;
  puVar50 = PTR_DAT_07810a10;
  lVar52 = *(long *)plVar26[0x17];
  if (lVar52 != 0) {
    if (0 < (int)*(ulong *)(lVar52 + 0x18)) {
      unaff_x28 = 0;
      uVar40 = *(ulong *)(lVar52 + 0x18) & 0xffffffff;
      puStack_78 = param_2;
      do {
        if (uVar40 <= unaff_x28) goto LAB_068a03c8;
        unaff_x26 = puVar50;
        unaff_x29 = puVar54;
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_068a03c4;
        uVar23 = *(uint *)(lVar52 + unaff_x28 * 4 + 0x20);
        puVar45 = (undefined *)(ulong)uVar23;
        lVar39 = *(long *)puVar54;
        pplVar37 = &plStack_68;
        plVar26 = (long *)func_0x04f63934(*(long *)(param_1 + 0x80),puVar45);
        plVar27 = unaff_x25;
        if (((ulong)plVar26 & 1) != 0) {
          if (*(long *)(param_1 + 0xd0) == 0) goto LAB_068a03c4;
          pplVar37 = *(long ***)puVar50;
          unaff_d8 = func_0x03ce26ec(0,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x38),puVar45);
          pplVar47 = *(long ***)(param_1 + 0x50);
          if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar27 = (long *)func_0x0624cb20(puVar45,0);
          if (pplVar47 == (long **)0x0) goto LAB_068a03c4;
          plVar26 = *pplVar47;
          uVar40 = (ulong)*(ushort *)((long)plVar26 + 0x12e);
          if (uVar40 != 0) {
            piVar43 = (int *)(plVar26[0x16] + 8);
            do {
              if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07773688) {
                plVar26 = plVar26 + (long)(*piVar43 + 1) * 2 + 0x27;
                goto LAB_0689ff3c;
              }
              uVar40 = uVar40 - 1;
              piVar43 = piVar43 + 4;
            } while (uVar40 != 0);
          }
          plVar26 = (long *)func_0x03256b10(pplVar47,*(long *)PTR_DAT_07773688,1);
LAB_0689ff3c:
          pplVar37 = (long **)plVar26[1];
          lVar28 = (*(code *)*plVar26)(pplVar47,plVar27);
          unaff_x25 = plVar27;
          if ((lVar28 == 0) || (param_4 == 0)) goto LAB_068a03c4;
          uVar20 = *(uint *)(lVar28 + 0x20);
          pplVar47 = (long **)(ulong)uVar20;
          lVar39 = *(long *)PTR_DAT_07810a20;
          pplVar37 = pplVar47;
          plVar26 = (long *)func_0x04f5ce74(param_4,puVar45);
          if (((ulong)plVar26 & 1) == 0) {
            iVar19 = func_0x04f5b400(param_4,puVar45,*(undefined8 *)PTR_DAT_07780070);
            pplVar37 = (long **)(ulong)(iVar19 + uVar20);
            lVar39 = *(long *)PTR_DAT_07780078;
            plVar26 = (long *)func_0x04f5b488(param_4,puVar45);
          }
          if (0.0 < (float)unaff_d8) {
            pplVar47 = *(long ***)(param_1 + 200);
            if (pplVar47 == (long **)0x0) goto LAB_068a03c4;
            plVar26 = *pplVar47;
            uVar40 = (ulong)*(ushort *)((long)plVar26 + 0x12e);
            if (uVar40 != 0) {
              piVar43 = (int *)(plVar26[0x16] + 8);
              do {
                if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777a750) {
                  plVar26 = plVar26 + (long)(*piVar43 + 0x54) * 2 + 0x27;
                  goto LAB_068a0014;
                }
                uVar40 = uVar40 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar40 != 0);
            }
            plVar26 = (long *)func_0x03256b10(pplVar47,*(long *)PTR_DAT_0777a750,0x54);
LAB_068a0014:
            uVar40 = (*(code *)*plVar26)(pplVar47,plVar26[1]);
            if ((uVar40 & 1) == 0) {
              pplVar37 = (long **)0x0;
              plVar26 = (long *)func_0x06378c74(unaff_d8,puVar45,*(undefined8 *)(param_1 + 0x48));
              if (plVar26 == (long *)0x0) goto LAB_068a03c4;
              lVar28 = *plVar26;
              pplVar47 = *(long ***)(param_1 + 0x40);
              uVar40 = (ulong)*(ushort *)(lVar28 + 0x12e);
              if (uVar40 != 0) {
                piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar29 = (undefined8 *)(lVar28 + (long)*piVar43 * 0x10 + 0x138);
                    goto LAB_068a00b0;
                  }
                  uVar40 = uVar40 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar40 != 0);
              }
              pplVar37 = (long **)0x0;
              puVar29 = (undefined8 *)func_0x03256b10(plVar26);
LAB_068a00b0:
              plVar27 = (long *)(*(code *)*puVar29)(plVar26,puVar29[1]);
              unaff_x25 = plVar26;
              if (pplVar47 == (long **)0x0) goto LAB_068a03c4;
              plVar26 = *pplVar47;
              uVar40 = (ulong)*(ushort *)((long)plVar26 + 0x12e);
              if (uVar40 != 0) {
                piVar43 = (int *)(plVar26[0x16] + 8);
                do {
                  if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777a498) {
                    plVar26 = plVar26 + (long)(*piVar43 + 0x19) * 2 + 0x27;
                    goto LAB_068a011c;
                  }
                  uVar40 = uVar40 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar40 != 0);
              }
              plVar26 = (long *)func_0x03256b10(pplVar47,*(long *)PTR_DAT_0777a498,0x19);
LAB_068a011c:
              pplVar37 = (long **)plVar26[1];
              uVar21 = (*(code *)*plVar26)(pplVar47,plVar27);
              unaff_x25 = plVar27;
              if (*(long *)(param_1 + 0x88) == 0) goto LAB_068a03c4;
              pplVar37 = *(long ***)PTR_DAT_0777c258;
              uVar20 = func_0x04f2ba70(*(long *)(param_1 + 0x88),uVar21);
            }
            else {
              pplVar37 = *(long ***)(param_1 + 0x88);
              lVar39 = 0;
              uVar20 = func_0x06379000(unaff_d8,puVar45);
            }
            pplVar47 = (long **)(ulong)uVar20;
            unaff_x25 = plVar27;
            if (param_3 == (long **)0x0) goto LAB_068a03c4;
            lVar39 = *(long *)PTR_DAT_07810a20;
            pplVar37 = pplVar47;
            uVar40 = func_0x04f5ce74(param_3,puVar45);
            if ((uVar40 & 1) == 0) {
              iVar19 = func_0x04f5b400(param_3,puVar45,*(undefined8 *)PTR_DAT_07780070);
              pplVar37 = (long **)(ulong)(iVar19 + uVar20);
              lVar39 = *(long *)PTR_DAT_07780078;
              func_0x04f5b488(param_3,puVar45);
            }
            if (param_2 == (undefined *)0x0) goto LAB_068a03c4;
            pplVar37 = *(long ***)PTR_DAT_0777c2d8;
            uVar40 = func_0x0411ca30(param_2,puVar45);
            if ((uVar40 & 1) == 0) {
              lVar28 = *(long *)(param_2 + 0x10);
              lVar42 = *(long *)PTR_DAT_0777ffc8;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar28 == 0) goto LAB_068a03c4;
              uVar20 = *(uint *)(param_2 + 0x18);
              if (uVar20 < *(uint *)(lVar28 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar20 + 1;
                *(uint *)(lVar28 + (long)(int)uVar20 * 4 + 0x20) = uVar23;
              }
              else {
                pplVar37 = *(long ***)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x70);
                func_0x0411c6b8(param_2,puVar45);
              }
            }
            unaff_x25 = plStack_68;
            if (plStack_68 == (long *)0x0) goto LAB_068a03c4;
            lVar28 = *plStack_68;
            pplVar47 = *(long ***)(param_1 + 0x88);
            uVar40 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar40 != 0) {
              piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777c248) {
                  puVar29 = (undefined8 *)(lVar28 + (long)*piVar43 * 0x10 + 0x138);
                  goto LAB_068a0284;
                }
                uVar40 = uVar40 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar40 != 0);
            }
            pplVar37 = (long **)0x0;
            puVar29 = (undefined8 *)func_0x03256b10(plStack_68);
LAB_068a0284:
            lVar28 = (*(code *)*puVar29)(unaff_x25,puVar29[1]);
            param_2 = puVar54;
            if ((lVar28 == 0) || (pplVar47 == (long **)0x0)) goto LAB_068a03c4;
            uVar22 = func_0x04f2ba70(pplVar47,*(undefined4 *)(lVar28 + 0x18),
                                     *(undefined8 *)PTR_DAT_0777c258);
            puVar17 = PTR_DAT_07780070;
            pplVar47 = (long **)(ulong)uVar22;
            iVar19 = func_0x04f5b400(param_3,puVar45,*(undefined8 *)PTR_DAT_07780070);
            pplVar37 = *(long ***)puVar17;
            uVar20 = 0;
            if (uVar22 != 0) {
              uVar20 = iVar19 / (int)uVar22;
            }
            plVar30 = (long *)func_0x04f5b400(param_3,uVar23);
            plVar27 = (long *)((ulong)plVar30 & 0xffffffff);
            plVar26 = plVar30;
            if (0 < (int)uVar20) {
              pplVar37 = (long **)(ulong)uVar20;
              lVar39 = *(long *)PTR_DAT_07810a20;
              plVar26 = (long *)func_0x04f5ce74(param_4,uVar23);
              if (((ulong)plVar26 & 1) == 0) {
                iVar19 = func_0x04f5b400(param_4,uVar23,*(undefined8 *)PTR_DAT_07780070);
                pplVar37 = (long **)(ulong)(iVar19 + uVar20);
                lVar39 = *(long *)PTR_DAT_07780078;
                plVar26 = (long *)func_0x04f5b488(param_4,puVar45);
              }
            }
            param_2 = puStack_78;
            iVar19 = 0;
            if (uVar22 != 0) {
              iVar19 = (int)plVar30 / (int)uVar22;
            }
            if ((int)plVar30 == iVar19 * uVar22) {
              func_0x0411dd18(puStack_78,puVar45,*(undefined8 *)PTR_DAT_07810a30);
              pplVar37 = *(long ***)PTR_DAT_07810a18;
              plVar26 = (long *)func_0x04f5c844(param_3,puVar45);
            }
          }
        }
        uVar40 = (ulong)*(uint *)(lVar52 + 0x18);
        unaff_x28 = unaff_x28 + 1;
        unaff_x25 = plVar27;
      } while ((long)unaff_x28 < (long)(int)*(uint *)(lVar52 + 0x18));
    }
    return plVar26;
  }
LAB_068a03c4:
  puVar54 = unaff_x29;
  puVar50 = unaff_x26;
  func_0x03280cac();
LAB_068a03c8:
  auVar58 = func_0x03280cb4();
  puVar18 = PTR_DAT_07810a50;
  puVar51 = PTR_DAT_07810a48;
  puVar53 = PTR_DAT_07810a40;
  puVar17 = PTR_DAT_07810a38;
  lVar28 = auVar58._0_8_;
  uStack_d8 = 0x68a03cc;
  plVar26 = param_5;
  plVar27 = param_6;
  puStack_e0 = puVar54;
  uStack_d0 = unaff_x28;
  lStack_c8 = lVar52;
  puStack_c0 = puVar50;
  plStack_b8 = unaff_x25;
  pplStack_b0 = pplVar47;
  puStack_a8 = puVar45;
  lStack_a0 = param_1;
  puStack_98 = param_2;
  pplStack_90 = param_3;
  lStack_88 = param_4;
  if ((bRam0000000007e28dd5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810a48);
    func_0x03280a18(PTR_DAT_07810a40);
    func_0x03280a18(PTR_DAT_07810a38);
    func_0x03280a18(PTR_DAT_07810a58);
    func_0x03280a18(PTR_DAT_07810a50);
    func_0x03280a18(PTR_DAT_07810a08);
    func_0x03280a18(PTR_DAT_077d4228);
    func_0x03280a18(PTR_DAT_07810720);
    func_0x03280a18(PTR_DAT_0777c2d8);
    bRam0000000007e28dd5 = 1;
  }
  uStack_e4 = 0;
  uVar31 = func_0x04d04a08(lVar28,lVar39,*(undefined8 *)puVar17);
  uVar31 = func_0x04d04970(lVar28,auVar58._8_8_,uVar31,*(undefined8 *)puVar53);
  plVar30 = *(long **)puVar51;
  func_0x04d048bc(lVar28,uVar31,param_6);
  puVar38 = *(uint **)puVar18;
  uVar40 = func_0x04d04ac4(lVar28,uVar31);
  if (*(long *)(lVar28 + 0x80) != 0) {
    param_6 = (long *)(uVar40 & 0xffffffff);
    puVar38 = *(uint **)PTR_DAT_07810720;
    uVar32 = func_0x04f61e04(*(long *)(lVar28 + 0x80),param_6);
    if (param_5 != (long *)0x0) {
      puVar38 = &uStack_e4;
      plVar30 = *(long **)PTR_DAT_077d4228;
      func_0x04f5ce0c(param_5,param_6);
      puVar45 = PTR_DAT_07810a58;
      uVar31 = uVar32;
      if (lVar39 != 0) {
        uVar23 = func_0x0411ca30(lVar39,param_6,*(undefined8 *)PTR_DAT_0777c2d8);
        plVar26 = (long *)func_0x04d04de8(lVar28,pplVar37,uVar32,uVar23 & 1,uStack_e4,
                                          *(undefined8 *)puVar45);
        return plVar26;
      }
    }
  }
  auVar58 = func_0x03280cac();
  plVar33 = auVar58._8_8_;
  lVar52 = auVar58._0_8_;
  auStack_144[1] = 0x68a059c;
  auStack_144[2] = 0;
  puStack_138 = puVar53;
  puStack_130 = puVar51;
  puStack_128 = puVar18;
  puVar46 = (uint *)((ulong)puVar38 & 0xffffffff);
  uStack_120 = uVar31;
  plStack_118 = param_6;
  plStack_110 = param_5;
  lStack_108 = lVar39;
  lStack_100 = lVar28;
  pplStack_f8 = pplVar37;
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
  auStack_144[0] = 0;
  plVar49 = (long *)0x7e28000;
  if (plVar33 != (long *)0x0) {
    lVar39 = *plVar33;
    plVar49 = *(long **)(lVar52 + 0x40);
    uVar40 = (ulong)*(ushort *)(lVar39 + 0x12e);
    if (uVar40 != 0) {
      piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
      do {
        if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07779820) {
          puVar29 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
          goto LAB_068a06e8;
        }
        uVar40 = uVar40 - 1;
        piVar43 = piVar43 + 4;
      } while (uVar40 != 0);
    }
    puVar38 = (uint *)0x0;
    puVar29 = (undefined8 *)func_0x03256b10(plVar33);
LAB_068a06e8:
    uVar31 = (*(code *)*puVar29)(plVar33,puVar29[1]);
    auVar4._8_8_ = uVar31;
    auVar4._0_8_ = lVar52;
    if (plVar49 != (long *)0x0) {
      lVar39 = *plVar49;
      uVar40 = (ulong)*(ushort *)(lVar39 + 0x12e);
      if (uVar40 != 0) {
        piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
        do {
          if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar29 = (undefined8 *)(lVar39 + (long)(*piVar43 + 4) * 0x10 + 0x138);
            goto LAB_068a0754;
          }
          uVar40 = uVar40 - 1;
          piVar43 = piVar43 + 4;
        } while (uVar40 != 0);
      }
      puVar29 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777a498,4);
LAB_068a0754:
      puVar38 = (uint *)puVar29[1];
      plVar33 = (long *)(*(code *)*puVar29)(plVar49,uVar31);
      auVar6._8_8_ = plVar33;
      auVar6._0_8_ = lVar52;
      auVar5._8_8_ = plVar33;
      auVar5._0_8_ = lVar52;
      auVar58 = auVar4;
      if (*(long *)(lVar52 + 0x78) != 0) {
        puVar38 = auStack_144;
        plVar34 = (long *)func_0x04fb7738(*(long *)(lVar52 + 0x78),plVar33,puVar38,
                                          *(undefined8 *)PTR_DAT_07810a60);
        puVar45 = PTR_DAT_0777c258;
        if (((ulong)plVar34 & 1) == 0) {
          return plVar34;
        }
        auVar58 = auVar5;
        if (*(long *)(lVar52 + 0x88) != 0) {
          puVar38 = *(uint **)PTR_DAT_0777c258;
          uVar23 = func_0x04f2ba70(*(long *)(lVar52 + 0x88),puVar46);
          plVar49 = (long *)puVar45;
          auVar58 = auVar6;
          if (plVar33 != (long *)0x0) {
            lVar39 = *plVar33;
            lVar52 = *(long *)(lVar52 + 0x88);
            auVar8._8_8_ = plVar33;
            auVar8._0_8_ = lVar52;
            auVar7._8_8_ = plVar33;
            auVar7._0_8_ = lVar52;
            auVar58._8_8_ = plVar33;
            auVar58._0_8_ = lVar52;
            puVar46 = (uint *)(ulong)uVar23;
            uVar40 = (ulong)*(ushort *)(lVar39 + 0x12e);
            if (uVar40 != 0) {
              piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
              do {
                if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777c248) {
                  puVar29 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
                  goto LAB_068a080c;
                }
                uVar40 = uVar40 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar40 != 0);
            }
            puVar38 = (uint *)0x0;
            puVar29 = (undefined8 *)func_0x03256b10(plVar33);
LAB_068a080c:
            lVar39 = (*(code *)*puVar29)(plVar33,puVar29[1]);
            if ((lVar39 != 0) && (auVar58 = auVar7, lVar52 != 0)) {
              puVar38 = *(uint **)puVar45;
              uVar20 = func_0x04f2ba70(lVar52,*(undefined4 *)(lVar39 + 0x18));
              puVar45 = PTR_DAT_07810a20;
              auVar58 = auVar8;
              if (*plVar26 != 0) {
                uVar44 = CONCAT44(0,uVar20);
                puVar38 = puVar46;
                uVar40 = func_0x04f5ce74(*plVar26,auStack_144[0],puVar46,
                                         *(undefined8 *)PTR_DAT_07810a20);
                puVar51 = puVar45;
                if ((uVar40 & 1) == 0) {
                  plVar33 = (long *)*plVar26;
                  auVar58._8_8_ = plVar33;
                  auVar58._0_8_ = uVar44;
                  if (plVar33 == (long *)0x0) goto LAB_068a09f4;
                  plVar49 = (long *)(ulong)auStack_144[0];
                  iVar19 = func_0x04f5b400(plVar33,plVar49,*(undefined8 *)PTR_DAT_07780070);
                  puVar38 = (uint *)(ulong)(iVar19 + uVar23);
                  func_0x04f5b488(plVar33,plVar49,puVar38,*(undefined8 *)PTR_DAT_07780078);
                }
                puVar50 = PTR_DAT_07780070;
                auVar58._8_8_ = plVar33;
                auVar58._0_8_ = uVar44;
                if (*plVar26 != 0) {
                  puVar38 = *(uint **)PTR_DAT_07780070;
                  uVar22 = func_0x04f5b400(*plVar26,auStack_144[0]);
                  uVar23 = 0;
                  if (uVar20 != 0) {
                    uVar23 = (int)uVar22 / (int)uVar20;
                  }
                  puVar48 = (uint *)(ulong)uVar23;
                  auVar13._8_4_ = uVar23;
                  auVar13._0_8_ = uVar44;
                  auVar13._12_4_ = 0;
                  auVar12._8_4_ = uVar23;
                  auVar12._0_8_ = uVar44;
                  auVar12._12_4_ = 0;
                  auVar11._8_4_ = uVar23;
                  auVar11._0_8_ = uVar44;
                  auVar11._12_4_ = 0;
                  auVar10._8_4_ = uVar23;
                  auVar10._0_8_ = uVar44;
                  auVar10._12_4_ = 0;
                  auVar9._8_4_ = uVar23;
                  auVar9._0_8_ = uVar44;
                  auVar9._12_4_ = 0;
                  auVar58._8_4_ = uVar23;
                  auVar58._12_4_ = 0;
                  puVar46 = (uint *)(ulong)uVar22;
                  puVar53 = puVar50;
                  if (0 < (int)uVar23) {
                    if (*plVar27 == 0) goto LAB_068a09f4;
                    uVar40 = func_0x04f5ce74(*plVar27,auStack_144[0],puVar48,*(undefined8 *)puVar45)
                    ;
                    puVar38 = puVar48;
                    if ((uVar40 & 1) == 0) {
                      plVar27 = (long *)*plVar27;
                      auVar58 = auVar9;
                      if (plVar27 == (long *)0x0) goto LAB_068a09f4;
                      plVar49 = (long *)(ulong)auStack_144[0];
                      iVar19 = func_0x04f5b400(plVar27,plVar49,*(undefined8 *)puVar50);
                      puVar38 = (uint *)(ulong)(iVar19 + uVar23);
                      func_0x04f5b488(plVar27,plVar49,puVar38,*(undefined8 *)PTR_DAT_07780078);
                    }
                  }
                  auVar58 = auVar10;
                  if (*plVar30 != 0) {
                    if ((int)(uVar22 - uVar23 * uVar20) < 1) {
                      puVar38 = *(uint **)PTR_DAT_07810a30;
                      func_0x0411dd18(*plVar30,auStack_144[0]);
                      auVar58 = auVar13;
                      if (*plVar26 != 0) {
                        plVar26 = (long *)func_0x04f5c844(*plVar26,auStack_144[0],
                                                          *(undefined8 *)PTR_DAT_07810a18);
                        return plVar26;
                      }
                    }
                    else {
                      puVar38 = *(uint **)PTR_DAT_0777c2d8;
                      plVar33 = (long *)func_0x0411ca30();
                      if (((ulong)plVar33 & 1) != 0) {
                        return plVar33;
                      }
                      plVar33 = (long *)*plVar30;
                      auVar58 = auVar11;
                      if (plVar33 != (long *)0x0) {
                        lVar39 = plVar33[2];
                        lVar52 = *(long *)PTR_DAT_0777ffc8;
                        *(int *)((long)plVar33 + 0x1c) = *(int *)((long)plVar33 + 0x1c) + 1;
                        auVar58 = auVar12;
                        if (lVar39 != 0) {
                          uVar23 = *(uint *)(plVar33 + 3);
                          if (uVar23 < *(uint *)(lVar39 + 0x18)) {
                            *(uint *)(plVar33 + 3) = uVar23 + 1;
                            *(uint *)(lVar39 + (long)(int)uVar23 * 4 + 0x20) = auStack_144[0];
                            return plVar33;
                          }
                          plVar26 = (long *)func_0x0411c6b8(plVar33,auStack_144[0],
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar52 + 0x20) +
                                                                       0xc0) + 0x70));
                          return plVar26;
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
  plVar33 = auVar58._8_8_;
  auVar59 = func_0x03280cac();
  lVar52 = auVar59._8_8_;
  lVar39 = auVar59._0_8_;
  uStack_190 = 0x68a09f8;
  puStack_178 = puVar46;
  plStack_168 = plVar27;
  plStack_160 = plVar26;
  plStack_158 = plVar30;
  if ((bRam0000000007e28dda & 1) == 0) {
    plStack_180 = plVar33;
    uStack_170 = auVar58._0_8_;
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_07810a68);
    func_0x03280a18(PTR_DAT_0776b160);
    auVar58._8_8_ = plStack_180;
    auVar58._0_8_ = uStack_170;
    bRam0000000007e28dda = 1;
  }
  plStack_180 = auVar58._8_8_;
  uStack_170 = auVar58._0_8_;
  plVar26 = (long *)0x7e28000;
  if (lVar52 == 0) {
LAB_068a0cc0:
    plStack_180 = auVar58._8_8_;
    uStack_170 = auVar58._0_8_;
    auVar58 = func_0x03280cac();
    puVar50 = PTR_DAT_07810a78;
    puVar45 = PTR_DAT_07810a70;
    lVar39 = auVar58._0_8_;
    uStack_1f0 = 0x7e28000;
    uStack_1e8 = 0x68a0cc4;
    puStack_1e0 = puVar17;
    lStack_200 = unaff_d8;
    puStack_1d8 = puVar53;
    puStack_1d0 = puVar51;
    plStack_1c8 = plVar49;
    plStack_1c0 = plVar33;
    puStack_1b8 = puVar46;
    plStack_1b0 = plVar26;
    puStack_198 = puVar38;
    if ((bRam0000000007e28dd9 & 1) == 0) {
      lStack_1a8 = auVar59._8_8_;
      lStack_1a0 = auVar59._0_8_;
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
      auVar59._8_8_ = lStack_1a8;
      auVar59._0_8_ = lStack_1a0;
      bRam0000000007e28dd9 = 1;
    }
    lStack_1a8 = auVar59._8_8_;
    lStack_1a0 = auVar59._0_8_;
    plStack_220 = (long *)0x0;
    puStack_218 = (undefined *)0x0;
    plStack_210 = (long *)0x0;
    uStack_1f8 = (ulong)(uint)uStack_1f8;
    plVar26 = (long *)func_0x03280ca0(*(undefined8 *)puVar45);
    func_0x040ab20c(plVar26,*(undefined8 *)puVar50);
    puVar53 = PTR_DAT_07810a88;
    puVar17 = PTR_DAT_07810a80;
    puVar54 = PTR_DAT_07810a60;
    puVar50 = PTR_DAT_077db278;
    puVar45 = PTR_DAT_0777a498;
    if (auVar58._8_8_ != 0) {
      func_0x04145068(&plStack_238,auVar58._8_8_,*(undefined8 *)PTR_DAT_077db290);
      puStack_218 = (undefined *)uStack_230;
      plStack_220 = plStack_238;
      plStack_210 = plStack_228;
      while( true ) {
        uVar40 = func_0x051159b4(&plStack_220,*(undefined8 *)puVar50);
        plVar27 = plStack_210;
        if ((uVar40 & 1) == 0) {
          func_0x051159b0(&plStack_220,*(undefined8 *)PTR_DAT_077db270);
          return plVar26;
        }
        if (plStack_210 == (long *)0x0) break;
        lVar52 = *plStack_210;
        plVar30 = *(long **)(lVar39 + 0x40);
        uVar40 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar40 != 0) {
          piVar43 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07779820) {
              puVar29 = (undefined8 *)(lVar52 + (long)*piVar43 * 0x10 + 0x138);
              goto LAB_068a0eb4;
            }
            uVar40 = uVar40 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar40 != 0);
        }
        puVar29 = (undefined8 *)func_0x03256b10(plStack_210,*(long *)PTR_DAT_07779820,0);
LAB_068a0eb4:
        uVar31 = (*(code *)*puVar29)(plVar27,puVar29[1]);
        if (plVar30 == (long *)0x0) goto LAB_068a11e8;
        lVar52 = *plVar30;
        uVar40 = (ulong)*(ushort *)(lVar52 + 0x12e);
        if (uVar40 != 0) {
          piVar43 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == *(long *)puVar45) {
              puVar29 = (undefined8 *)(lVar52 + (long)(*piVar43 + 4) * 0x10 + 0x138);
              goto LAB_068a0f18;
            }
            uVar40 = uVar40 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar40 != 0);
        }
        puVar29 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar45,4);
LAB_068a0f18:
        uVar31 = (*(code *)*puVar29)(plVar30,uVar31,puVar29[1]);
        if (*(long *)(lVar39 + 0x78) == 0) {
          func_0x03280cac(0,uVar31);
          break;
        }
        uVar40 = func_0x04fb7738(*(long *)(lVar39 + 0x78),uVar31,(long)&uStack_1f8 + 4,
                                 *(undefined8 *)puVar54);
        if ((uVar40 & 1) == 0) {
          plStack_238 = (long *)0x0;
          uStack_230 = 0;
          func_0x048cbf28(&plStack_238,plVar27,0,*(undefined8 *)puVar53);
          if (plVar26 == (long *)0x0) goto LAB_068a11ec;
          lVar52 = plVar26[2];
          lVar28 = *(long *)puVar17;
          *(int *)((long)plVar26 + 0x1c) = *(int *)((long)plVar26 + 0x1c) + 1;
          if (lVar52 == 0) goto LAB_068a11f0;
          uVar23 = *(uint *)(plVar26 + 3);
          if (uVar23 < *(uint *)(lVar52 + 0x18)) {
            lVar52 = lVar52 + (long)(int)uVar23 * 0x10;
            *(uint *)(plVar26 + 3) = uVar23 + 1;
            plVar26 = (long *)(lVar52 + 0x20);
            *plVar26 = (long)plStack_238;
            *(undefined8 *)(lVar52 + 0x28) = uStack_230;
            goto SUB_032809c4;
          }
          func_0x040aba8c(plVar26,plStack_238,uStack_230,
                          *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
        }
        else {
          func_0x06378a30(plVar27,*(undefined8 *)(lVar39 + 0x40),0);
          if (*(long *)(lVar39 + 0xd0) == 0) goto LAB_068a11fc;
          func_0x069f7880(*(long *)(lVar39 + 0xd0),uStack_1f8._4_4_,0);
          if (*(long *)(lVar39 + 0xd0) == 0) goto LAB_068a11f8;
          fVar55 = (float)func_0x069f793c(*(long *)(lVar39 + 0xd0),uStack_1f8._4_4_,0);
          if (100.0 <= fVar55) {
            uVar21 = uStack_1f8._4_4_;
            uVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
            func_0x06b21870(uVar31,uVar21,1,0,0);
            plVar30 = *(long **)(lVar39 + 0x50);
            uVar40 = uStack_1f8 >> 0x20;
            if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar32 = func_0x0624cb20(uVar40,0);
            if (plVar30 == (long *)0x0) goto LAB_068a1208;
            lVar52 = *plVar30;
            uVar40 = (ulong)*(ushort *)(lVar52 + 0x12e);
            if (uVar40 != 0) {
              piVar43 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
              do {
                if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07773688) {
                  puVar29 = (undefined8 *)(lVar52 + (long)(*piVar43 + 3) * 0x10 + 0x138);
                  goto LAB_068a10d0;
                }
                uVar40 = uVar40 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar40 != 0);
            }
            puVar29 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07773688,3);
LAB_068a10d0:
            (*(code *)*puVar29)(plVar30,uVar32,1,0,0x14,0,1,puVar29[1]);
            if (*(long *)(lVar39 + 0xd0) != 0) {
              lVar52 = *(long *)(*(long *)(lVar39 + 0xd0) + 0x38);
              if (lVar52 != 0) {
                func_0x04f654ac(fVar55 + -100.0,lVar52,uStack_1f8._4_4_,
                                *(undefined8 *)PTR_DAT_077d9ff0);
                goto LAB_068a1124;
              }
              goto LAB_068a1204;
            }
            goto LAB_068a120c;
          }
          uVar31 = 0;
LAB_068a1124:
          plStack_238 = (long *)0x0;
          uStack_230 = 0;
          func_0x048cbf28(&plStack_238,plVar27,uVar31,*(undefined8 *)puVar53);
          if (plVar26 == (long *)0x0) goto LAB_068a1200;
          lVar52 = plVar26[2];
          lVar28 = *(long *)puVar17;
          *(int *)((long)plVar26 + 0x1c) = *(int *)((long)plVar26 + 0x1c) + 1;
          if (lVar52 == 0) goto LAB_068a11f4;
          uVar23 = *(uint *)(plVar26 + 3);
          if (uVar23 < *(uint *)(lVar52 + 0x18)) {
            lVar52 = lVar52 + (long)(int)uVar23 * 0x10;
            *(uint *)(plVar26 + 3) = uVar23 + 1;
            plVar26 = (long *)(lVar52 + 0x20);
            *plVar26 = (long)plStack_238;
            *(undefined8 *)(lVar52 + 0x28) = uStack_230;
            goto SUB_032809c4;
          }
          func_0x040aba8c(plVar26,plStack_238,uStack_230,
                          *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
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
    auVar56 = func_0x03280cac();
    if (auVar56._8_4_ == 1) {
      plVar27 = (long *)func_0x072ce910(auVar56._0_8_);
      lVar39 = *plVar27;
      func_0x072ce920();
      func_0x051159b0(&plStack_220,*(undefined8 *)PTR_DAT_077db270);
      if (lVar39 == 0) {
        return plVar26;
      }
      func_0x03280ca4(lVar39);
    }
    func_0x051159b0(&plStack_220,*(undefined8 *)PTR_DAT_077db270);
    func_0x03365958(auVar56._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
    puVar45 = PTR_DAT_07810a90;
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
    plVar26 = (long *)func_0x03280ca0(*(undefined8 *)puVar45);
    return plVar26;
  }
  lVar28 = func_0x03ced81c(lVar52,*(undefined8 *)PTR_DAT_0777bf98);
  auVar15._8_8_ = plStack_180;
  auVar15._0_8_ = uStack_170;
  auVar58._8_8_ = plStack_180;
  auVar58._0_8_ = uStack_170;
  if ((lVar28 == 0) ||
     (plVar26 = *(long **)(lVar39 + 0xa0), auVar58 = auVar15, plVar26 == (long *)0x0))
  goto LAB_068a0cc0;
  lVar42 = *plVar26;
  uVar31 = *(undefined8 *)(lVar28 + 0x30);
  uVar40 = (ulong)*(ushort *)(lVar42 + 0x12e);
  if (uVar40 != 0) {
    piVar43 = (int *)(*(long *)(lVar42 + 0xb0) + 8);
    do {
      if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar29 = (undefined8 *)(lVar42 + (long)(*piVar43 + 9) * 0x10 + 0x138);
        goto LAB_068a0b14;
      }
      uVar40 = uVar40 - 1;
      piVar43 = piVar43 + 4;
    } while (uVar40 != 0);
  }
  puVar29 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_0777a498,9);
LAB_068a0b14:
  plVar27 = (long *)(*(code *)*puVar29)(plVar26,uVar31,puVar29[1]);
  auVar58._8_8_ = plStack_180;
  auVar58._0_8_ = uStack_170;
  puVar46 = *(uint **)(lVar39 + 0xb0);
  if (puVar46 == (uint *)0x0) goto LAB_068a0cc0;
  lVar28 = *(long *)puVar46;
  uVar31 = *(undefined8 *)(lVar52 + 0x10);
  auVar59._8_8_ = uVar31;
  auVar59._0_8_ = lVar39;
  uVar40 = (ulong)*(ushort *)(lVar28 + 0x12e);
  plVar33 = *(long **)PTR_DAT_0776b160;
  if (uVar40 != 0) {
    piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
    do {
      if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar29 = (undefined8 *)(lVar28 + (long)*piVar43 * 0x10 + 0x138);
        goto LAB_068a0b94;
      }
      uVar40 = uVar40 - 1;
      piVar43 = piVar43 + 4;
    } while (uVar40 != 0);
  }
  puVar29 = (undefined8 *)func_0x03256b10(puVar46,*(long *)PTR_DAT_0777e4a0,0);
LAB_068a0b94:
  lVar52 = (*(code *)*puVar29)(puVar46,plVar33,plVar27,uVar31,0,puVar29[1]);
  puVar50 = PTR_DAT_077cc918;
  puVar45 = PTR_DAT_077cc910;
  auVar58._8_8_ = plStack_180;
  auVar58._0_8_ = uStack_170;
  plVar26 = plVar27;
  if (lVar52 == 0) goto LAB_068a0cc0;
  plVar26 = (long *)(lVar52 + 0x20);
  if (*plVar26 == 0) {
    lVar39 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
    func_0x06a30df4(lVar39,0);
    *plVar26 = lVar39;
    goto SUB_032809c4;
  }
  plVar26 = (long *)(*plVar26 + 0x40);
  *plVar26 = (long)puVar38;
  func_0x032809c4(plVar26,puVar38);
  puVar38 = *(uint **)(lVar39 + 0xb8);
  lVar39 = func_0x03280ca0(*(undefined8 *)puVar45);
  auVar14._8_8_ = lVar52;
  auVar14._0_8_ = lVar39;
  auVar59._8_8_ = lVar52;
  auVar59._0_8_ = lVar39;
  func_0x04143c38(lVar39,*(undefined8 *)puVar50);
  auVar16._8_8_ = plStack_180;
  auVar16._0_8_ = uStack_170;
  auVar58._8_8_ = plStack_180;
  auVar58._0_8_ = uStack_170;
  plVar26 = (long *)puVar45;
  puVar46 = (uint *)puVar50;
  if (lVar39 == 0) goto LAB_068a0cc0;
  lVar28 = *(long *)(lVar39 + 0x10);
  lVar42 = *(long *)PTR_DAT_0777e4a8;
  *(int *)(lVar39 + 0x1c) = *(int *)(lVar39 + 0x1c) + 1;
  auVar59 = auVar14;
  auVar58 = auVar16;
  if (lVar28 == 0) goto LAB_068a0cc0;
  uVar23 = *(uint *)(lVar39 + 0x18);
  if (uVar23 < *(uint *)(lVar28 + 0x18)) {
    *(uint *)(lVar39 + 0x18) = uVar23 + 1;
    plVar26 = (long *)(lVar28 + (long)(int)uVar23 * 8 + 0x20);
    *plVar26 = lVar52;
    goto SUB_032809c4;
  }
  plStack_1c0 = (long *)0x68a0c94;
  plStack_1b0 = (long *)puVar45;
  uVar20 = *(uint *)(lVar39 + 0x18);
  uVar23 = uVar20 + 1;
  lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar42 + 0x20) + 0xc0) + 0x70
                                                  ) + 0x20) + 0xc0) + 0x78);
  lStack_1a8 = lVar52;
  lStack_1a0 = lVar39;
  puStack_198 = puVar38;
  func_0x04144aa0(lVar39,(ulong)uVar23);
  lVar42 = *(long *)(lVar39 + 0x10);
  *(uint *)(lVar39 + 0x18) = uVar23;
  if (lVar42 == 0) {
    func_0x03280cac();
  }
  else if (uVar20 < *(uint *)(lVar42 + 0x18)) {
    plVar26 = (long *)(lVar42 + (long)(int)uVar20 * 8 + 0x20);
    *plVar26 = lVar52;
    goto SUB_032809c4;
  }
  auVar57 = func_0x03280cb4();
  lVar35 = auVar57._8_8_;
  lVar42 = auVar57._0_8_;
  uStack_1f0 = 0x41444d8;
  lVar36 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x58);
  puStack_1e0 = (undefined *)(long)(int)uVar20;
  puStack_1d8 = (undefined *)(ulong)uVar23;
  puStack_1d0 = (undefined *)lVar39;
  plStack_1c8 = (long *)lVar52;
  func_0x03ec2768(lVar35,0x14);
  lVar39 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
    lVar39 = func_0x0325681c(lVar39);
  }
  if (lVar35 == 0) {
LAB_0414454c:
    lVar52 = 0;
  }
  else {
    lVar52 = func_0x03280b90(lVar35,lVar39);
    if (lVar52 == 0) {
      func_0x03281048(lVar35,lVar39);
      goto LAB_0414454c;
    }
  }
  lVar39 = *(long *)(lVar42 + 0x10);
  lVar41 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar42 + 0x1c) = *(int *)(lVar42 + 0x1c) + 1;
  if (lVar39 != 0) {
    uVar23 = *(uint *)(lVar42 + 0x18);
    if (uVar23 < *(uint *)(lVar39 + 0x18)) {
      *(uint *)(lVar42 + 0x18) = uVar23 + 1;
      plVar26 = (long *)(lVar39 + (long)(int)uVar23 * 8 + 0x20);
      *plVar26 = lVar52;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar25 = (ulong *)(((ulong)plVar26 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar2) {
            *puVar25 = *puVar25 | 1L << ((ulong)plVar26 >> 0xc & 0x3f);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return plVar26;
    }
    func_0x0414446c(lVar42,lVar52,*(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar42 + 0x18) - 1);
  }
  auVar56 = func_0x03280cac();
  uVar31 = auVar56._0_8_;
  if (auVar56._8_4_ == 1) {
    puVar29 = (undefined8 *)func_0x072ce910(uVar31);
    uVar31 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar40 = func_0x032810d8(uVar31,*(undefined8 *)*puVar29);
    if ((uVar40 & 1) != 0) {
      func_0x072ce920();
      uVar31 = *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x68);
      lVar39 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar39 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar31 = func_0x057a51c4(uVar31,0);
      func_0x057b7b18(lVar35,uVar31,0);
      goto LAB_041445ac;
    }
    puVar24 = (undefined8 *)func_0x072ce930(8);
    *puVar24 = *puVar29;
    lVar36 = 0;
    uVar31 = func_0x072ce940(puVar24,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar31);
  auVar58 = func_0x02f09514();
  plVar34 = auVar58._8_8_;
  plVar27 = auVar58._0_8_;
  uVar23 = *(uint *)(plVar27 + 3);
  lVar39 = *(long *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0x90);
  uVar40 = (ulong)uVar23;
  uStack_230 = 0x4144678;
  puStack_218 = puVar50;
  plVar30 = (long *)0x7e18000;
  plVar26 = plVar34;
  plStack_228 = plVar49;
  plStack_220 = plVar33;
  plStack_210 = (long *)uVar31;
  lStack_208 = lVar28;
  if ((bRam0000000007e18233 & 1) == 0) {
    lStack_200 = lVar35;
    uStack_1f8 = lVar42;
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    auVar57._8_8_ = lStack_200;
    auVar57._0_8_ = uStack_1f8;
    bRam0000000007e18233 = 1;
  }
  lStack_200 = auVar57._8_8_;
  uStack_1f8 = auVar57._0_8_;
  if (plVar34 == (long *)0x0) {
    func_0x057a867c(6,0);
    auVar57._8_8_ = lStack_200;
    auVar57._0_8_ = uStack_1f8;
  }
  lStack_200 = auVar57._8_8_;
  uStack_1f8 = auVar57._0_8_;
  if (*(uint *)(plVar27 + 3) < uVar23) {
    func_0x057b8434(0);
    auVar57._8_8_ = lStack_200;
    auVar57._0_8_ = uStack_1f8;
  }
  lStack_200 = auVar57._8_8_;
  uStack_1f8 = auVar57._0_8_;
  lVar52 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar52 + 0x135) & 1) == 0) {
    lVar52 = func_0x0325681c(lVar52);
    auVar57._8_8_ = lStack_200;
    auVar57._0_8_ = uStack_1f8;
  }
  lStack_200 = auVar57._8_8_;
  uStack_1f8 = auVar57._0_8_;
  plVar33 = (long *)func_0x03280b90(plVar34,lVar52);
  if (plVar33 == (long *)0x0) {
    if ((int)uVar23 < (int)plVar27[3]) {
      if (plVar34 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar52 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar52 + 0x135) & 1) == 0) {
          lVar52 = func_0x0325681c(lVar52);
        }
        lVar28 = *plVar34;
        uVar44 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar44 != 0) {
          piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == lVar52) {
              puVar29 = (undefined8 *)(lVar28 + (long)*piVar43 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar44 = uVar44 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar44 != 0);
        }
        plVar26 = (long *)0x0;
        puVar29 = (undefined8 *)func_0x03256b10(plVar34);
LAB_04145868:
        plVar30 = (long *)(*(code *)*puVar29)(plVar34,puVar29[1]);
        puVar45 = PTR_DAT_0774e8e0;
        if (plVar30 != (long *)0x0) {
          do {
            lVar52 = *plVar30;
            uVar44 = (ulong)*(ushort *)(lVar52 + 0x12e);
            if (uVar44 != 0) {
              piVar43 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
              do {
                if (*(long *)(piVar43 + -2) == *(long *)puVar45) {
                  puVar29 = (undefined8 *)(lVar52 + (long)*piVar43 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar44 = uVar44 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar44 != 0);
            }
            plVar26 = (long *)0x0;
            puVar29 = (undefined8 *)func_0x03256b10(plVar30);
LAB_041458d0:
            plVar49 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
            if (((ulong)plVar49 & 1) == 0) {
              uVar40 = 0;
              iVar19 = 5;
              if (plVar30 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar52 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar52 + 0x135) & 1) == 0) {
              lVar52 = func_0x0325681c(lVar52);
            }
            lVar28 = *plVar30;
            uVar44 = (ulong)*(ushort *)(lVar28 + 0x12e);
            if (uVar44 != 0) {
              piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar43 + -2) == lVar52) {
                  puVar29 = (undefined8 *)(lVar28 + (long)*piVar43 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar44 = uVar44 - 1;
                piVar43 = piVar43 + 4;
              } while (uVar44 != 0);
            }
            puVar29 = (undefined8 *)func_0x03256b10(plVar30,lVar52,0);
LAB_04145948:
            plVar26 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
            func_0x04145380(plVar27,uVar40,plVar26,
                            *(undefined8 *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x160));
            uVar40 = (ulong)((int)uVar40 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar56 = func_0x03280ca4(uVar40);
        if (auVar56._8_4_ != 1) {
          if (plVar30 == (long *)0x0) goto LAB_04145ae0;
          lVar39 = *plVar30;
          uVar40 = (ulong)*(ushort *)(lVar39 + 0x12e);
          if (uVar40 == 0) goto LAB_04145ab8;
          piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar25 = (ulong *)func_0x072ce910(auVar56._0_8_);
        uVar40 = *puVar25;
        plVar49 = (long *)func_0x072ce920();
        iVar19 = 0;
        if (plVar30 != (long *)0x0) {
LAB_04145988:
          lVar52 = *plVar30;
          uVar44 = (ulong)*(ushort *)(lVar52 + 0x12e);
          if (uVar44 != 0) {
            piVar43 = (int *)(*(long *)(lVar52 + 0xb0) + 8);
            do {
              if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar29 = (undefined8 *)(lVar52 + (long)*piVar43 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar44 = uVar44 - 1;
              piVar43 = piVar43 + 4;
            } while (uVar44 != 0);
          }
          plVar26 = (long *)0x0;
          puVar29 = (undefined8 *)func_0x03256b10(plVar30);
LAB_041459dc:
          plVar49 = (long *)(*(code *)*puVar29)(plVar30,puVar29[1]);
        }
LAB_041459e8:
      } while (uVar40 != 0);
      if (iVar19 == 5) goto LAB_04145a10;
      if (iVar19 != 0) {
        return plVar49;
      }
    }
    plVar49 = (long *)func_0x041462cc(plVar27,plVar34,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar52 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar52 + 0x135) & 1) == 0) {
      lVar52 = func_0x0325681c(lVar52);
    }
    lVar28 = *plVar33;
    uVar40 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar40 != 0) {
      piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar43 + -2) == lVar52) {
          puVar29 = (undefined8 *)(lVar28 + (long)*piVar43 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar40 = uVar40 - 1;
        piVar43 = piVar43 + 4;
      } while (uVar40 != 0);
    }
    puVar29 = (undefined8 *)func_0x03256b10(plVar33,lVar52,0);
LAB_04145728:
    plVar49 = (long *)(*(code *)*puVar29)(plVar33,puVar29[1]);
    iVar19 = (int)plVar49;
    if (0 < iVar19) {
      func_0x04144aa0(plVar27,(int)plVar27[3] + iVar19,
                      *(undefined8 *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x78));
      iVar3 = (int)plVar27[3] - uVar23;
      if (iVar3 != 0 && (int)uVar23 <= (int)plVar27[3]) {
        func_0x057b9f30(plVar27[2],uVar23,plVar27[2],iVar19 + uVar23,iVar3,0);
      }
      if (plVar27 == plVar33) {
        func_0x057b9f30(plVar27[2],0,plVar27[2],uVar23,uVar23,0);
        plVar49 = (long *)func_0x057b9f30(plVar27[2],iVar19 + uVar23,plVar27[2],uVar23 << 1,
                                          (int)plVar27[3] - uVar23,0);
      }
      else {
        lVar52 = plVar27[2];
        lVar39 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
          lVar39 = func_0x0325681c(lVar39);
        }
        lVar28 = *plVar33;
        uVar40 = (ulong)*(ushort *)(lVar28 + 0x12e);
        if (uVar40 != 0) {
          piVar43 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == lVar39) {
              puVar29 = (undefined8 *)(lVar28 + (long)(*piVar43 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar40 = uVar40 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar40 != 0);
        }
        puVar29 = (undefined8 *)func_0x03256b10(plVar33,lVar39,5);
LAB_04145838:
        plVar49 = (long *)(*(code *)*puVar29)(plVar33,lVar52,uVar23,puVar29[1]);
      }
      *(int *)(plVar27 + 3) = (int)plVar27[3] + iVar19;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar27 + 0x1c) = *(int *)((long)plVar27 + 0x1c) + 1;
  return plVar49;
  while( true ) {
    uVar40 = uVar40 - 1;
    piVar43 = piVar43 + 4;
    if (uVar40 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar29 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar26 = (long *)0x0;
  puVar29 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04145ad4:
  (*(code *)*puVar29)(plVar30,puVar29[1]);
LAB_04145ae0:
  func_0x03365958(auVar56._0_8_);
  func_0x03280ca4(0);
  auVar58 = func_0x02f09514();
  lVar39 = auVar58._0_8_;
  plStack_238 = plVar27;
  uVar23 = func_0x03f898d4(*(undefined8 *)(lVar39 + 0x10),auVar58._8_8_,0,
                           *(undefined4 *)(lVar39 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar26[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar23) {
    func_0x04145da4(lVar39,uVar23);
  }
  return (long *)(ulong)(~uVar23 >> 0x1f);
}

