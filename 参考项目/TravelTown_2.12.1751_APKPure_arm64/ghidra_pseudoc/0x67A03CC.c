/* Ghidra 12.1.2 native pseudocode; RVA 0x67A03CC; MergeEngine.ECS.Systems.Items.ImmidateToolsSystem.ImmediateToolCollectSystem.GenerateSingleTool; status ok */


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

long * MergeEngine_ECS_Systems_Items_ImmidateToolsSystem_ImmediateToolCollectSystem__GenerateSingleTool
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
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
  undefined *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 *puVar25;
  ulong *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long *plVar30;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  long *plVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int *piVar42;
  long *plVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  uint *puVar47;
  long *plVar48;
  undefined *puVar49;
  undefined *puVar50;
  float fVar51;
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined *puStack_198;
  long *plStack_190;
  long lStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long *plStack_148;
  long *plStack_140;
  uint *puStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  uint *puStack_118;
  undefined8 uStack_110;
  long *plStack_100;
  uint *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  uint auStack_c4 [3];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  uint uStack_64;
  
  puVar18 = PTR_DAT_07810a50;
  puVar49 = PTR_DAT_07810a48;
  puVar50 = PTR_DAT_07810a40;
  puVar17 = PTR_DAT_07810a38;
  plVar30 = param_5;
  plVar43 = param_6;
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
  uStack_64 = 0;
  uVar27 = func_0x04d04a08(param_1,param_4,*(undefined8 *)puVar17);
  uVar27 = func_0x04d04970(param_1,param_2,uVar27,*(undefined8 *)puVar50);
  plVar38 = *(long **)puVar49;
  func_0x04d048bc(param_1,uVar27,param_6);
  puVar37 = *(uint **)puVar18;
  uVar28 = func_0x04d04ac4(param_1,uVar27);
  if (*(long *)(param_1 + 0x80) != 0) {
    param_6 = (long *)(uVar28 & 0xffffffff);
    puVar37 = *(uint **)PTR_DAT_07810720;
    uVar29 = func_0x04f61e04(*(long *)(param_1 + 0x80),param_6);
    if (param_5 != (long *)0x0) {
      puVar37 = &uStack_64;
      plVar38 = *(long **)PTR_DAT_077d4228;
      func_0x04f5ce0c(param_5,param_6);
      puVar19 = PTR_DAT_07810a58;
      uVar27 = uVar29;
      if (param_4 != 0) {
        uVar21 = func_0x0411ca30(param_4,param_6,*(undefined8 *)PTR_DAT_0777c2d8);
        plVar30 = (long *)func_0x04d04de8(param_1,param_3,uVar29,uVar21 & 1,uStack_64,
                                          *(undefined8 *)puVar19);
        return plVar30;
      }
    }
  }
  auVar53 = func_0x03280cac();
  plVar32 = auVar53._8_8_;
  lVar44 = auVar53._0_8_;
  auStack_c4[1] = 0x68a059c;
  auStack_c4[2] = 0;
  puStack_b8 = puVar50;
  puStack_b0 = puVar49;
  puStack_a8 = puVar18;
  puVar46 = (uint *)((ulong)puVar37 & 0xffffffff);
  uStack_a0 = uVar27;
  plStack_98 = param_6;
  plStack_90 = param_5;
  lStack_88 = param_4;
  lStack_80 = param_1;
  uStack_78 = param_3;
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
  auStack_c4[0] = 0;
  plVar48 = (long *)0x7e28000;
  if (plVar32 != (long *)0x0) {
    lVar39 = *plVar32;
    plVar48 = *(long **)(lVar44 + 0x40);
    uVar28 = (ulong)*(ushort *)(lVar39 + 0x12e);
    if (uVar28 != 0) {
      piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
      do {
        if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_07779820) {
          puVar31 = (undefined8 *)(lVar39 + (long)*piVar42 * 0x10 + 0x138);
          goto LAB_068a06e8;
        }
        uVar28 = uVar28 - 1;
        piVar42 = piVar42 + 4;
      } while (uVar28 != 0);
    }
    puVar37 = (uint *)0x0;
    puVar31 = (undefined8 *)func_0x03256b10(plVar32);
LAB_068a06e8:
    uVar27 = (*(code *)*puVar31)(plVar32,puVar31[1]);
    auVar4._8_8_ = uVar27;
    auVar4._0_8_ = lVar44;
    if (plVar48 != (long *)0x0) {
      lVar39 = *plVar48;
      uVar28 = (ulong)*(ushort *)(lVar39 + 0x12e);
      if (uVar28 != 0) {
        piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
        do {
          if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar31 = (undefined8 *)(lVar39 + (long)(*piVar42 + 4) * 0x10 + 0x138);
            goto LAB_068a0754;
          }
          uVar28 = uVar28 - 1;
          piVar42 = piVar42 + 4;
        } while (uVar28 != 0);
      }
      puVar31 = (undefined8 *)func_0x03256b10(plVar48,*(long *)PTR_DAT_0777a498,4);
LAB_068a0754:
      puVar37 = (uint *)puVar31[1];
      plVar32 = (long *)(*(code *)*puVar31)(plVar48,uVar27);
      auVar6._8_8_ = plVar32;
      auVar6._0_8_ = lVar44;
      auVar5._8_8_ = plVar32;
      auVar5._0_8_ = lVar44;
      auVar53 = auVar4;
      if (*(long *)(lVar44 + 0x78) != 0) {
        puVar37 = auStack_c4;
        plVar33 = (long *)func_0x04fb7738(*(long *)(lVar44 + 0x78),plVar32,puVar37,
                                          *(undefined8 *)PTR_DAT_07810a60);
        puVar18 = PTR_DAT_0777c258;
        if (((ulong)plVar33 & 1) == 0) {
          return plVar33;
        }
        auVar53 = auVar5;
        if (*(long *)(lVar44 + 0x88) != 0) {
          puVar37 = *(uint **)PTR_DAT_0777c258;
          uVar21 = func_0x04f2ba70(*(long *)(lVar44 + 0x88),puVar46);
          plVar48 = (long *)puVar18;
          auVar53 = auVar6;
          if (plVar32 != (long *)0x0) {
            lVar39 = *plVar32;
            lVar44 = *(long *)(lVar44 + 0x88);
            auVar8._8_8_ = plVar32;
            auVar8._0_8_ = lVar44;
            auVar7._8_8_ = plVar32;
            auVar7._0_8_ = lVar44;
            auVar53._8_8_ = plVar32;
            auVar53._0_8_ = lVar44;
            puVar46 = (uint *)(ulong)uVar21;
            uVar28 = (ulong)*(ushort *)(lVar39 + 0x12e);
            if (uVar28 != 0) {
              piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
              do {
                if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_0777c248) {
                  puVar31 = (undefined8 *)(lVar39 + (long)*piVar42 * 0x10 + 0x138);
                  goto LAB_068a080c;
                }
                uVar28 = uVar28 - 1;
                piVar42 = piVar42 + 4;
              } while (uVar28 != 0);
            }
            puVar37 = (uint *)0x0;
            puVar31 = (undefined8 *)func_0x03256b10(plVar32);
LAB_068a080c:
            lVar39 = (*(code *)*puVar31)(plVar32,puVar31[1]);
            if ((lVar39 != 0) && (auVar53 = auVar7, lVar44 != 0)) {
              puVar37 = *(uint **)puVar18;
              uVar22 = func_0x04f2ba70(lVar44,*(undefined4 *)(lVar39 + 0x18));
              puVar18 = PTR_DAT_07810a20;
              auVar53 = auVar8;
              if (*plVar30 != 0) {
                uVar45 = CONCAT44(0,uVar22);
                puVar37 = puVar46;
                uVar28 = func_0x04f5ce74(*plVar30,auStack_c4[0],puVar46,
                                         *(undefined8 *)PTR_DAT_07810a20);
                puVar49 = puVar18;
                if ((uVar28 & 1) == 0) {
                  plVar32 = (long *)*plVar30;
                  auVar53._8_8_ = plVar32;
                  auVar53._0_8_ = uVar45;
                  if (plVar32 == (long *)0x0) goto LAB_068a09f4;
                  plVar48 = (long *)(ulong)auStack_c4[0];
                  iVar23 = func_0x04f5b400(plVar32,plVar48,*(undefined8 *)PTR_DAT_07780070);
                  puVar37 = (uint *)(ulong)(iVar23 + uVar21);
                  func_0x04f5b488(plVar32,plVar48,puVar37,*(undefined8 *)PTR_DAT_07780078);
                }
                puVar19 = PTR_DAT_07780070;
                auVar53._8_8_ = plVar32;
                auVar53._0_8_ = uVar45;
                if (*plVar30 != 0) {
                  puVar37 = *(uint **)PTR_DAT_07780070;
                  uVar24 = func_0x04f5b400(*plVar30,auStack_c4[0]);
                  uVar21 = 0;
                  if (uVar22 != 0) {
                    uVar21 = (int)uVar24 / (int)uVar22;
                  }
                  puVar47 = (uint *)(ulong)uVar21;
                  auVar13._8_4_ = uVar21;
                  auVar13._0_8_ = uVar45;
                  auVar13._12_4_ = 0;
                  auVar12._8_4_ = uVar21;
                  auVar12._0_8_ = uVar45;
                  auVar12._12_4_ = 0;
                  auVar11._8_4_ = uVar21;
                  auVar11._0_8_ = uVar45;
                  auVar11._12_4_ = 0;
                  auVar10._8_4_ = uVar21;
                  auVar10._0_8_ = uVar45;
                  auVar10._12_4_ = 0;
                  auVar9._8_4_ = uVar21;
                  auVar9._0_8_ = uVar45;
                  auVar9._12_4_ = 0;
                  auVar53._8_4_ = uVar21;
                  auVar53._12_4_ = 0;
                  puVar46 = (uint *)(ulong)uVar24;
                  puVar50 = puVar19;
                  if (0 < (int)uVar21) {
                    if (*plVar43 == 0) goto LAB_068a09f4;
                    uVar28 = func_0x04f5ce74(*plVar43,auStack_c4[0],puVar47,*(undefined8 *)puVar18);
                    puVar37 = puVar47;
                    if ((uVar28 & 1) == 0) {
                      plVar43 = (long *)*plVar43;
                      auVar53 = auVar9;
                      if (plVar43 == (long *)0x0) goto LAB_068a09f4;
                      plVar48 = (long *)(ulong)auStack_c4[0];
                      iVar23 = func_0x04f5b400(plVar43,plVar48,*(undefined8 *)puVar19);
                      puVar37 = (uint *)(ulong)(iVar23 + uVar21);
                      func_0x04f5b488(plVar43,plVar48,puVar37,*(undefined8 *)PTR_DAT_07780078);
                    }
                  }
                  auVar53 = auVar10;
                  if (*plVar38 != 0) {
                    if ((int)(uVar24 - uVar21 * uVar22) < 1) {
                      puVar37 = *(uint **)PTR_DAT_07810a30;
                      func_0x0411dd18(*plVar38,auStack_c4[0]);
                      auVar53 = auVar13;
                      if (*plVar30 != 0) {
                        plVar30 = (long *)func_0x04f5c844(*plVar30,auStack_c4[0],
                                                          *(undefined8 *)PTR_DAT_07810a18);
                        return plVar30;
                      }
                    }
                    else {
                      puVar37 = *(uint **)PTR_DAT_0777c2d8;
                      plVar32 = (long *)func_0x0411ca30();
                      if (((ulong)plVar32 & 1) != 0) {
                        return plVar32;
                      }
                      plVar32 = (long *)*plVar38;
                      auVar53 = auVar11;
                      if (plVar32 != (long *)0x0) {
                        lVar44 = plVar32[2];
                        lVar39 = *(long *)PTR_DAT_0777ffc8;
                        *(int *)((long)plVar32 + 0x1c) = *(int *)((long)plVar32 + 0x1c) + 1;
                        auVar53 = auVar12;
                        if (lVar44 != 0) {
                          uVar21 = *(uint *)(plVar32 + 3);
                          if (uVar21 < *(uint *)(lVar44 + 0x18)) {
                            *(uint *)(plVar32 + 3) = uVar21 + 1;
                            *(uint *)(lVar44 + (long)(int)uVar21 * 4 + 0x20) = auStack_c4[0];
                            return plVar32;
                          }
                          plVar30 = (long *)func_0x0411c6b8(plVar32,auStack_c4[0],
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar39 + 0x20) +
                                                                       0xc0) + 0x70));
                          return plVar30;
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
  plVar32 = auVar53._8_8_;
  auVar54 = func_0x03280cac();
  lVar39 = auVar54._8_8_;
  lVar44 = auVar54._0_8_;
  uStack_110 = 0x68a09f8;
  puStack_f8 = puVar46;
  plStack_e8 = plVar43;
  plStack_e0 = plVar30;
  plStack_d8 = plVar38;
  if ((bRam0000000007e28dda & 1) == 0) {
    plStack_100 = plVar32;
    uStack_f0 = auVar53._0_8_;
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_07810a68);
    func_0x03280a18(PTR_DAT_0776b160);
    auVar53._8_8_ = plStack_100;
    auVar53._0_8_ = uStack_f0;
    bRam0000000007e28dda = 1;
  }
  plStack_100 = auVar53._8_8_;
  uStack_f0 = auVar53._0_8_;
  plVar30 = (long *)0x7e28000;
  if (lVar39 == 0) {
LAB_068a0cc0:
    plStack_100 = auVar53._8_8_;
    uStack_f0 = auVar53._0_8_;
    auVar53 = func_0x03280cac();
    puVar19 = PTR_DAT_07810a78;
    puVar18 = PTR_DAT_07810a70;
    lVar44 = auVar53._0_8_;
    uStack_170 = 0x7e28000;
    uStack_168 = 0x68a0cc4;
    puStack_160 = puVar17;
    puStack_158 = puVar50;
    puStack_150 = puVar49;
    plStack_148 = plVar48;
    plStack_140 = plVar32;
    puStack_138 = puVar46;
    plStack_130 = plVar30;
    puStack_118 = puVar37;
    if ((bRam0000000007e28dd9 & 1) == 0) {
      lStack_128 = auVar54._8_8_;
      lStack_120 = auVar54._0_8_;
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
      auVar54._8_8_ = lStack_128;
      auVar54._0_8_ = lStack_120;
      bRam0000000007e28dd9 = 1;
    }
    lStack_128 = auVar54._8_8_;
    lStack_120 = auVar54._0_8_;
    plStack_1a0 = (long *)0x0;
    puStack_198 = (undefined *)0x0;
    plStack_190 = (long *)0x0;
    uStack_178 = (ulong)(uint)uStack_178;
    plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar18);
    func_0x040ab20c(plVar30,*(undefined8 *)puVar19);
    puVar19 = PTR_DAT_07810a88;
    puVar18 = PTR_DAT_07810a80;
    puVar49 = PTR_DAT_07810a60;
    puVar50 = PTR_DAT_077db278;
    puVar17 = PTR_DAT_0777a498;
    if (auVar53._8_8_ != 0) {
      func_0x04145068(&plStack_1b8,auVar53._8_8_,*(undefined8 *)PTR_DAT_077db290);
      puStack_198 = (undefined *)uStack_1b0;
      plStack_1a0 = plStack_1b8;
      plStack_190 = plStack_1a8;
      while( true ) {
        uVar28 = func_0x051159b4(&plStack_1a0,*(undefined8 *)puVar50);
        plVar43 = plStack_190;
        if ((uVar28 & 1) == 0) {
          func_0x051159b0(&plStack_1a0,*(undefined8 *)PTR_DAT_077db270);
          return plVar30;
        }
        if (plStack_190 == (long *)0x0) break;
        lVar39 = *plStack_190;
        plVar38 = *(long **)(lVar44 + 0x40);
        uVar28 = (ulong)*(ushort *)(lVar39 + 0x12e);
        if (uVar28 != 0) {
          piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          do {
            if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_07779820) {
              puVar31 = (undefined8 *)(lVar39 + (long)*piVar42 * 0x10 + 0x138);
              goto LAB_068a0eb4;
            }
            uVar28 = uVar28 - 1;
            piVar42 = piVar42 + 4;
          } while (uVar28 != 0);
        }
        puVar31 = (undefined8 *)func_0x03256b10(plStack_190,*(long *)PTR_DAT_07779820,0);
LAB_068a0eb4:
        uVar27 = (*(code *)*puVar31)(plVar43,puVar31[1]);
        if (plVar38 == (long *)0x0) goto LAB_068a11e8;
        lVar39 = *plVar38;
        uVar28 = (ulong)*(ushort *)(lVar39 + 0x12e);
        if (uVar28 != 0) {
          piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          do {
            if (*(long *)(piVar42 + -2) == *(long *)puVar17) {
              puVar31 = (undefined8 *)(lVar39 + (long)(*piVar42 + 4) * 0x10 + 0x138);
              goto LAB_068a0f18;
            }
            uVar28 = uVar28 - 1;
            piVar42 = piVar42 + 4;
          } while (uVar28 != 0);
        }
        puVar31 = (undefined8 *)func_0x03256b10(plVar38,*(long *)puVar17,4);
LAB_068a0f18:
        uVar27 = (*(code *)*puVar31)(plVar38,uVar27,puVar31[1]);
        if (*(long *)(lVar44 + 0x78) == 0) {
          func_0x03280cac(0,uVar27);
          break;
        }
        uVar28 = func_0x04fb7738(*(long *)(lVar44 + 0x78),uVar27,(long)&uStack_178 + 4,
                                 *(undefined8 *)puVar49);
        if ((uVar28 & 1) == 0) {
          plStack_1b8 = (long *)0x0;
          uStack_1b0 = 0;
          func_0x048cbf28(&plStack_1b8,plVar43,0,*(undefined8 *)puVar19);
          if (plVar30 == (long *)0x0) goto LAB_068a11ec;
          lVar39 = plVar30[2];
          lVar34 = *(long *)puVar18;
          *(int *)((long)plVar30 + 0x1c) = *(int *)((long)plVar30 + 0x1c) + 1;
          if (lVar39 == 0) goto LAB_068a11f0;
          uVar21 = *(uint *)(plVar30 + 3);
          if (uVar21 < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + (long)(int)uVar21 * 0x10;
            *(uint *)(plVar30 + 3) = uVar21 + 1;
            plVar30 = (long *)(lVar39 + 0x20);
            *plVar30 = (long)plStack_1b8;
            *(undefined8 *)(lVar39 + 0x28) = uStack_1b0;
            goto SUB_032809c4;
          }
          func_0x040aba8c(plVar30,plStack_1b8,uStack_1b0,
                          *(undefined8 *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
        }
        else {
          func_0x06378a30(plVar43,*(undefined8 *)(lVar44 + 0x40),0);
          if (*(long *)(lVar44 + 0xd0) == 0) goto LAB_068a11fc;
          func_0x069f7880(*(long *)(lVar44 + 0xd0),uStack_178._4_4_,0);
          if (*(long *)(lVar44 + 0xd0) == 0) goto LAB_068a11f8;
          fVar51 = (float)func_0x069f793c(*(long *)(lVar44 + 0xd0),uStack_178._4_4_,0);
          if (100.0 <= fVar51) {
            uVar20 = uStack_178._4_4_;
            uVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
            func_0x06b21870(uVar27,uVar20,1,0,0);
            plVar38 = *(long **)(lVar44 + 0x50);
            uVar28 = uStack_178 >> 0x20;
            if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar29 = func_0x0624cb20(uVar28,0);
            if (plVar38 == (long *)0x0) goto LAB_068a1208;
            lVar39 = *plVar38;
            uVar28 = (ulong)*(ushort *)(lVar39 + 0x12e);
            if (uVar28 != 0) {
              piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
              do {
                if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_07773688) {
                  puVar31 = (undefined8 *)(lVar39 + (long)(*piVar42 + 3) * 0x10 + 0x138);
                  goto LAB_068a10d0;
                }
                uVar28 = uVar28 - 1;
                piVar42 = piVar42 + 4;
              } while (uVar28 != 0);
            }
            puVar31 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_07773688,3);
LAB_068a10d0:
            (*(code *)*puVar31)(plVar38,uVar29,1,0,0x14,0,1,puVar31[1]);
            if (*(long *)(lVar44 + 0xd0) != 0) {
              lVar39 = *(long *)(*(long *)(lVar44 + 0xd0) + 0x38);
              if (lVar39 != 0) {
                func_0x04f654ac(fVar51 + -100.0,lVar39,uStack_178._4_4_,
                                *(undefined8 *)PTR_DAT_077d9ff0);
                goto LAB_068a1124;
              }
              goto LAB_068a1204;
            }
            goto LAB_068a120c;
          }
          uVar27 = 0;
LAB_068a1124:
          plStack_1b8 = (long *)0x0;
          uStack_1b0 = 0;
          func_0x048cbf28(&plStack_1b8,plVar43,uVar27,*(undefined8 *)puVar19);
          if (plVar30 == (long *)0x0) goto LAB_068a1200;
          lVar39 = plVar30[2];
          lVar34 = *(long *)puVar18;
          *(int *)((long)plVar30 + 0x1c) = *(int *)((long)plVar30 + 0x1c) + 1;
          if (lVar39 == 0) goto LAB_068a11f4;
          uVar21 = *(uint *)(plVar30 + 3);
          if (uVar21 < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + (long)(int)uVar21 * 0x10;
            *(uint *)(plVar30 + 3) = uVar21 + 1;
            plVar30 = (long *)(lVar39 + 0x20);
            *plVar30 = (long)plStack_1b8;
            *(undefined8 *)(lVar39 + 0x28) = uStack_1b0;
            goto SUB_032809c4;
          }
          func_0x040aba8c(plVar30,plStack_1b8,uStack_1b0,
                          *(undefined8 *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70));
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
    auVar52 = func_0x03280cac();
    if (auVar52._8_4_ == 1) {
      plVar43 = (long *)func_0x072ce910(auVar52._0_8_);
      lVar44 = *plVar43;
      func_0x072ce920();
      func_0x051159b0(&plStack_1a0,*(undefined8 *)PTR_DAT_077db270);
      if (lVar44 == 0) {
        return plVar30;
      }
      func_0x03280ca4(lVar44);
    }
    func_0x051159b0(&plStack_1a0,*(undefined8 *)PTR_DAT_077db270);
    func_0x03365958(auVar52._0_8_);
    func_0x03280ca4(0);
    func_0x02f09514();
    puVar17 = PTR_DAT_07810a90;
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
    plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar17);
    return plVar30;
  }
  lVar34 = func_0x03ced81c(lVar39,*(undefined8 *)PTR_DAT_0777bf98);
  auVar15._8_8_ = plStack_100;
  auVar15._0_8_ = uStack_f0;
  auVar53._8_8_ = plStack_100;
  auVar53._0_8_ = uStack_f0;
  if ((lVar34 == 0) ||
     (plVar30 = *(long **)(lVar44 + 0xa0), auVar53 = auVar15, plVar30 == (long *)0x0))
  goto LAB_068a0cc0;
  lVar40 = *plVar30;
  uVar27 = *(undefined8 *)(lVar34 + 0x30);
  uVar28 = (ulong)*(ushort *)(lVar40 + 0x12e);
  if (uVar28 != 0) {
    piVar42 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
    do {
      if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar31 = (undefined8 *)(lVar40 + (long)(*piVar42 + 9) * 0x10 + 0x138);
        goto LAB_068a0b14;
      }
      uVar28 = uVar28 - 1;
      piVar42 = piVar42 + 4;
    } while (uVar28 != 0);
  }
  puVar31 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0777a498,9);
LAB_068a0b14:
  plVar43 = (long *)(*(code *)*puVar31)(plVar30,uVar27,puVar31[1]);
  auVar53._8_8_ = plStack_100;
  auVar53._0_8_ = uStack_f0;
  puVar46 = *(uint **)(lVar44 + 0xb0);
  if (puVar46 == (uint *)0x0) goto LAB_068a0cc0;
  lVar34 = *(long *)puVar46;
  uVar27 = *(undefined8 *)(lVar39 + 0x10);
  auVar54._8_8_ = uVar27;
  auVar54._0_8_ = lVar44;
  uVar28 = (ulong)*(ushort *)(lVar34 + 0x12e);
  plVar32 = *(long **)PTR_DAT_0776b160;
  if (uVar28 != 0) {
    piVar42 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
    do {
      if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar31 = (undefined8 *)(lVar34 + (long)*piVar42 * 0x10 + 0x138);
        goto LAB_068a0b94;
      }
      uVar28 = uVar28 - 1;
      piVar42 = piVar42 + 4;
    } while (uVar28 != 0);
  }
  puVar31 = (undefined8 *)func_0x03256b10(puVar46,*(long *)PTR_DAT_0777e4a0,0);
LAB_068a0b94:
  lVar39 = (*(code *)*puVar31)(puVar46,plVar32,plVar43,uVar27,0,puVar31[1]);
  puVar19 = PTR_DAT_077cc918;
  puVar18 = PTR_DAT_077cc910;
  auVar53._8_8_ = plStack_100;
  auVar53._0_8_ = uStack_f0;
  plVar30 = plVar43;
  if (lVar39 == 0) goto LAB_068a0cc0;
  plVar30 = (long *)(lVar39 + 0x20);
  if (*plVar30 == 0) {
    lVar44 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
    func_0x06a30df4(lVar44,0);
    *plVar30 = lVar44;
    goto SUB_032809c4;
  }
  plVar30 = (long *)(*plVar30 + 0x40);
  *plVar30 = (long)puVar37;
  func_0x032809c4(plVar30,puVar37);
  puVar37 = *(uint **)(lVar44 + 0xb8);
  lVar44 = func_0x03280ca0(*(undefined8 *)puVar18);
  auVar14._8_8_ = lVar39;
  auVar14._0_8_ = lVar44;
  auVar54._8_8_ = lVar39;
  auVar54._0_8_ = lVar44;
  func_0x04143c38(lVar44,*(undefined8 *)puVar19);
  auVar16._8_8_ = plStack_100;
  auVar16._0_8_ = uStack_f0;
  auVar53._8_8_ = plStack_100;
  auVar53._0_8_ = uStack_f0;
  plVar30 = (long *)puVar18;
  puVar46 = (uint *)puVar19;
  if (lVar44 == 0) goto LAB_068a0cc0;
  lVar34 = *(long *)(lVar44 + 0x10);
  lVar40 = *(long *)PTR_DAT_0777e4a8;
  *(int *)(lVar44 + 0x1c) = *(int *)(lVar44 + 0x1c) + 1;
  auVar54 = auVar14;
  auVar53 = auVar16;
  if (lVar34 == 0) goto LAB_068a0cc0;
  uVar21 = *(uint *)(lVar44 + 0x18);
  if (uVar21 < *(uint *)(lVar34 + 0x18)) {
    *(uint *)(lVar44 + 0x18) = uVar21 + 1;
    plVar30 = (long *)(lVar34 + (long)(int)uVar21 * 8 + 0x20);
    *plVar30 = lVar39;
    goto SUB_032809c4;
  }
  plStack_140 = (long *)0x68a0c94;
  plStack_130 = (long *)puVar18;
  uVar22 = *(uint *)(lVar44 + 0x18);
  uVar21 = uVar22 + 1;
  lVar34 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar40 + 0x20) + 0xc0) + 0x70
                                                  ) + 0x20) + 0xc0) + 0x78);
  lStack_128 = lVar39;
  lStack_120 = lVar44;
  puStack_118 = puVar37;
  func_0x04144aa0(lVar44,(ulong)uVar21);
  lVar40 = *(long *)(lVar44 + 0x10);
  *(uint *)(lVar44 + 0x18) = uVar21;
  if (lVar40 == 0) {
    func_0x03280cac();
  }
  else if (uVar22 < *(uint *)(lVar40 + 0x18)) {
    plVar30 = (long *)(lVar40 + (long)(int)uVar22 * 8 + 0x20);
    *plVar30 = lVar39;
    goto SUB_032809c4;
  }
  auVar53 = func_0x03280cb4();
  lVar35 = auVar53._8_8_;
  lVar40 = auVar53._0_8_;
  uStack_170 = 0x41444d8;
  lVar36 = *(long *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x58);
  puStack_160 = (undefined *)(long)(int)uVar22;
  puStack_158 = (undefined *)(ulong)uVar21;
  puStack_150 = (undefined *)lVar44;
  plStack_148 = (long *)lVar39;
  func_0x03ec2768(lVar35,0x14);
  lVar44 = *(long *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar44 + 0x135) & 1) == 0) {
    lVar44 = func_0x0325681c(lVar44);
  }
  if (lVar35 == 0) {
LAB_0414454c:
    lVar39 = 0;
  }
  else {
    lVar39 = func_0x03280b90(lVar35,lVar44);
    if (lVar39 == 0) {
      func_0x03281048(lVar35,lVar44);
      goto LAB_0414454c;
    }
  }
  lVar44 = *(long *)(lVar40 + 0x10);
  lVar41 = *(long *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x80);
  *(int *)(lVar40 + 0x1c) = *(int *)(lVar40 + 0x1c) + 1;
  if (lVar44 != 0) {
    uVar21 = *(uint *)(lVar40 + 0x18);
    if (uVar21 < *(uint *)(lVar44 + 0x18)) {
      *(uint *)(lVar40 + 0x18) = uVar21 + 1;
      plVar30 = (long *)(lVar44 + (long)(int)uVar21 * 8 + 0x20);
      *plVar30 = lVar39;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar26 = (ulong *)(((ulong)plVar30 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar26,0x10);
          if (bVar2) {
            *puVar26 = *puVar26 | 1L << ((ulong)plVar30 >> 0xc & 0x3f);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return plVar30;
    }
    func_0x0414446c(lVar40,lVar39,*(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70)
                   );
LAB_041445ac:
    return (long *)(ulong)(*(int *)(lVar40 + 0x18) - 1);
  }
  auVar52 = func_0x03280cac();
  uVar27 = auVar52._0_8_;
  if (auVar52._8_4_ == 1) {
    puVar31 = (undefined8 *)func_0x072ce910(uVar27);
    uVar27 = func_0x03280a2c(PTR_DAT_077542c0);
    uVar28 = func_0x032810d8(uVar27,*(undefined8 *)*puVar31);
    if ((uVar28 & 1) != 0) {
      func_0x072ce920();
      uVar27 = *(undefined8 *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x68);
      lVar44 = func_0x03280a2c(PTR_DAT_0774e558);
      if (*(int *)(lVar44 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar27 = func_0x057a51c4(uVar27,0);
      func_0x057b7b18(lVar35,uVar27,0);
      goto LAB_041445ac;
    }
    puVar25 = (undefined8 *)func_0x072ce930(8);
    *puVar25 = *puVar31;
    lVar36 = 0;
    uVar27 = func_0x072ce940(puVar25,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
    func_0x072ce920();
  }
  func_0x03365958(uVar27);
  auVar53 = func_0x02f09514();
  plVar33 = auVar53._8_8_;
  plVar43 = auVar53._0_8_;
  uVar21 = *(uint *)(plVar43 + 3);
  lVar44 = *(long *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0x90);
  uVar28 = (ulong)uVar21;
  uStack_1b0 = 0x4144678;
  puStack_198 = puVar19;
  plVar38 = (long *)0x7e18000;
  plVar30 = plVar33;
  plStack_1a8 = plVar48;
  plStack_1a0 = plVar32;
  plStack_190 = (long *)uVar27;
  lStack_188 = lVar34;
  uStack_178 = lVar40;
  if ((bRam0000000007e18233 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e18233 = 1;
  }
  if (plVar33 == (long *)0x0) {
    func_0x057a867c(6,0);
  }
  if (*(uint *)(plVar43 + 3) < uVar21) {
    func_0x057b8434(0);
  }
  lVar39 = *(long *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
    lVar39 = func_0x0325681c(lVar39);
  }
  plVar32 = (long *)func_0x03280b90(plVar33,lVar39);
  if (plVar32 == (long *)0x0) {
    if ((int)uVar21 < (int)plVar43[3]) {
      if (plVar33 == (long *)0x0) {
        func_0x03280cac();
      }
      else {
        lVar39 = *(long *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x20);
        if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
          lVar39 = func_0x0325681c(lVar39);
        }
        lVar34 = *plVar33;
        uVar45 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar45 != 0) {
          piVar42 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar42 + -2) == lVar39) {
              puVar31 = (undefined8 *)(lVar34 + (long)*piVar42 * 0x10 + 0x138);
              goto LAB_04145868;
            }
            uVar45 = uVar45 - 1;
            piVar42 = piVar42 + 4;
          } while (uVar45 != 0);
        }
        plVar30 = (long *)0x0;
        puVar31 = (undefined8 *)func_0x03256b10(plVar33);
LAB_04145868:
        plVar38 = (long *)(*(code *)*puVar31)(plVar33,puVar31[1]);
        puVar17 = PTR_DAT_0774e8e0;
        if (plVar38 != (long *)0x0) {
          do {
            lVar39 = *plVar38;
            uVar45 = (ulong)*(ushort *)(lVar39 + 0x12e);
            if (uVar45 != 0) {
              piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
              do {
                if (*(long *)(piVar42 + -2) == *(long *)puVar17) {
                  puVar31 = (undefined8 *)(lVar39 + (long)*piVar42 * 0x10 + 0x138);
                  goto LAB_041458d0;
                }
                uVar45 = uVar45 - 1;
                piVar42 = piVar42 + 4;
              } while (uVar45 != 0);
            }
            plVar30 = (long *)0x0;
            puVar31 = (undefined8 *)func_0x03256b10(plVar38);
LAB_041458d0:
            plVar48 = (long *)(*(code *)*puVar31)(plVar38,puVar31[1]);
            if (((ulong)plVar48 & 1) == 0) {
              uVar28 = 0;
              iVar23 = 5;
              if (plVar38 == (long *)0x0) goto LAB_041459e8;
              goto LAB_04145988;
            }
            lVar39 = *(long *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
              lVar39 = func_0x0325681c(lVar39);
            }
            lVar34 = *plVar38;
            uVar45 = (ulong)*(ushort *)(lVar34 + 0x12e);
            if (uVar45 != 0) {
              piVar42 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
              do {
                if (*(long *)(piVar42 + -2) == lVar39) {
                  puVar31 = (undefined8 *)(lVar34 + (long)*piVar42 * 0x10 + 0x138);
                  goto LAB_04145948;
                }
                uVar45 = uVar45 - 1;
                piVar42 = piVar42 + 4;
              } while (uVar45 != 0);
            }
            puVar31 = (undefined8 *)func_0x03256b10(plVar38,lVar39,0);
LAB_04145948:
            plVar30 = (long *)(*(code *)*puVar31)(plVar38,puVar31[1]);
            func_0x04145380(plVar43,uVar28,plVar30,
                            *(undefined8 *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x160));
            uVar28 = (ulong)((int)uVar28 + 1);
          } while( true );
        }
      }
      func_0x03280cac();
      do {
        auVar52 = func_0x03280ca4(uVar28);
        if (auVar52._8_4_ != 1) {
          if (plVar38 == (long *)0x0) goto LAB_04145ae0;
          lVar44 = *plVar38;
          uVar28 = (ulong)*(ushort *)(lVar44 + 0x12e);
          if (uVar28 == 0) goto LAB_04145ab8;
          piVar42 = (int *)(*(long *)(lVar44 + 0xb0) + 8);
          goto LAB_04145aa0;
        }
        puVar26 = (ulong *)func_0x072ce910(auVar52._0_8_);
        uVar28 = *puVar26;
        plVar48 = (long *)func_0x072ce920();
        iVar23 = 0;
        if (plVar38 != (long *)0x0) {
LAB_04145988:
          lVar39 = *plVar38;
          uVar45 = (ulong)*(ushort *)(lVar39 + 0x12e);
          if (uVar45 != 0) {
            piVar42 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
            do {
              if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar31 = (undefined8 *)(lVar39 + (long)*piVar42 * 0x10 + 0x138);
                goto LAB_041459dc;
              }
              uVar45 = uVar45 - 1;
              piVar42 = piVar42 + 4;
            } while (uVar45 != 0);
          }
          plVar30 = (long *)0x0;
          puVar31 = (undefined8 *)func_0x03256b10(plVar38);
LAB_041459dc:
          plVar48 = (long *)(*(code *)*puVar31)(plVar38,puVar31[1]);
        }
LAB_041459e8:
      } while (uVar28 != 0);
      if (iVar23 == 5) goto LAB_04145a10;
      if (iVar23 != 0) {
        return plVar48;
      }
    }
    plVar48 = (long *)func_0x041462cc(plVar43,plVar33,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar39 = *(long *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
      lVar39 = func_0x0325681c(lVar39);
    }
    lVar34 = *plVar32;
    uVar28 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar28 != 0) {
      piVar42 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar42 + -2) == lVar39) {
          puVar31 = (undefined8 *)(lVar34 + (long)*piVar42 * 0x10 + 0x138);
          goto LAB_04145728;
        }
        uVar28 = uVar28 - 1;
        piVar42 = piVar42 + 4;
      } while (uVar28 != 0);
    }
    puVar31 = (undefined8 *)func_0x03256b10(plVar32,lVar39,0);
LAB_04145728:
    plVar48 = (long *)(*(code *)*puVar31)(plVar32,puVar31[1]);
    iVar23 = (int)plVar48;
    if (0 < iVar23) {
      func_0x04144aa0(plVar43,(int)plVar43[3] + iVar23,
                      *(undefined8 *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x78));
      iVar3 = (int)plVar43[3] - uVar21;
      if (iVar3 != 0 && (int)uVar21 <= (int)plVar43[3]) {
        func_0x057b9f30(plVar43[2],uVar21,plVar43[2],iVar23 + uVar21,iVar3,0);
      }
      if (plVar43 == plVar32) {
        func_0x057b9f30(plVar43[2],0,plVar43[2],uVar21,uVar21,0);
        plVar48 = (long *)func_0x057b9f30(plVar43[2],iVar23 + uVar21,plVar43[2],uVar21 << 1,
                                          (int)plVar43[3] - uVar21,0);
      }
      else {
        lVar39 = plVar43[2];
        lVar44 = *(long *)(*(long *)(*(long *)(lVar44 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar44 + 0x135) & 1) == 0) {
          lVar44 = func_0x0325681c(lVar44);
        }
        lVar34 = *plVar32;
        uVar28 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar28 != 0) {
          piVar42 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar42 + -2) == lVar44) {
              puVar31 = (undefined8 *)(lVar34 + (long)(*piVar42 + 5) * 0x10 + 0x138);
              goto LAB_04145838;
            }
            uVar28 = uVar28 - 1;
            piVar42 = piVar42 + 4;
          } while (uVar28 != 0);
        }
        puVar31 = (undefined8 *)func_0x03256b10(plVar32,lVar44,5);
LAB_04145838:
        plVar48 = (long *)(*(code *)*puVar31)(plVar32,lVar39,uVar21,puVar31[1]);
      }
      *(int *)(plVar43 + 3) = (int)plVar43[3] + iVar23;
    }
  }
LAB_04145a10:
  *(int *)((long)plVar43 + 0x1c) = *(int *)((long)plVar43 + 0x1c) + 1;
  return plVar48;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar42 = piVar42 + 4;
    if (uVar28 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar42 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar31 = (undefined8 *)(lVar44 + (long)*piVar42 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar30 = (long *)0x0;
  puVar31 = (undefined8 *)func_0x03256b10(plVar38);
LAB_04145ad4:
  (*(code *)*puVar31)(plVar38,puVar31[1]);
LAB_04145ae0:
  func_0x03365958(auVar52._0_8_);
  func_0x03280ca4(0);
  auVar53 = func_0x02f09514();
  lVar44 = auVar53._0_8_;
  plStack_1b8 = plVar43;
  uVar21 = func_0x03f898d4(*(undefined8 *)(lVar44 + 0x10),auVar53._8_8_,0,
                           *(undefined4 *)(lVar44 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar30[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar21) {
    func_0x04145da4(lVar44,uVar21);
  }
  return (long *)(ulong)(~uVar21 >> 0x1f);
}

