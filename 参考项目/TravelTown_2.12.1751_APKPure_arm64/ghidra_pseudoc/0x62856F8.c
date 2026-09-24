/* Ghidra 12.1.2 native pseudocode; RVA 0x62856F8; MergeEngine.ECS.Systems.InventorySystem.SortAndCreateNotificationList; status ok */

/* WARNING: Possible PIC construction at 0x063858dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04144590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x07285398: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x03ea56d8) */
/* WARNING: Removing unreachable block (ram,0x03ea571c) */
/* WARNING: Removing unreachable block (ram,0x03ea5720) */
/* WARNING: Removing unreachable block (ram,0x03ea55c0) */
/* WARNING: Removing unreachable block (ram,0x03ea5604) */
/* WARNING: Removing unreachable block (ram,0x03ea5608) */
/* WARNING: Removing unreachable block (ram,0x03ea54ac) */
/* WARNING: Removing unreachable block (ram,0x03ea54f0) */
/* WARNING: Removing unreachable block (ram,0x03ea54f4) */
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
/* WARNING: Removing unreachable block (ram,0x06385ca0) */
/* WARNING: Removing unreachable block (ram,0x06385ce0) */
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
/* WARNING: Removing unreachable block (ram,0x04144594) */
/* WARNING: Removing unreachable block (ram,0x063858e0) */
/* WARNING: Removing unreachable block (ram,0x063858e4) */
/* WARNING: Removing unreachable block (ram,0x063858fc) */
/* WARNING: Removing unreachable block (ram,0x06385928) */
/* WARNING: Removing unreachable block (ram,0x06385910) */
/* WARNING: Removing unreachable block (ram,0x03ea57f0) */
/* WARNING: Removing unreachable block (ram,0x03ea5834) */
/* WARNING: Removing unreachable block (ram,0x03ea5838) */
/* WARNING: Removing unreachable block (ram,0x07286a90) */

long * MergeEngine_ECS_Systems_InventorySystem__SortAndCreateNotificationList
                 (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                 ulong param_6)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long *plVar23;
  long *plVar24;
  long *extraout_x1;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  long *plVar34;
  ulong uVar35;
  long unaff_x29;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined8 auStack_130 [2];
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long lStack_98;
  code *pcStack_90;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  puVar22 = PTR_DAT_077cc918;
  puVar19 = PTR_DAT_077cc910;
  puVar8 = (undefined8 *)auStack_70;
  if ((bRam0000000007e254db & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077d9fb8);
    func_0x03280a18(PTR_DAT_077d9fe8);
    func_0x03280a18(PTR_DAT_077e7118);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_077628d8);
    func_0x03280a18(PTR_DAT_07750da0);
    func_0x03280a18(PTR_DAT_077628e8);
    bRam0000000007e254db = 1;
  }
  plVar17 = (long *)func_0x03280ca0(*(undefined8 *)puVar19);
  func_0x04143c38(plVar17,*(undefined8 *)puVar22);
  puVar7 = PTR_DAT_077e7118;
  puVar6 = PTR_DAT_077d9fe8;
  puVar22 = PTR_DAT_0777e4a8;
  puVar19 = PTR_DAT_07750da0;
  lVar25 = *(long *)(param_1 + 0x40);
  if (lVar25 == 0) {
    return plVar17;
  }
  uVar35 = 0;
  uVar31 = 0;
  uVar32 = 0;
  while (lVar25 != 0) {
    unaff_x29 = *(long *)(lVar25 + 0x28);
    if (unaff_x29 == 0) {
      return plVar17;
    }
    if (unaff_x29 == 0) break;
    param_3 = *(ulong *)puVar19;
    uStack_68 = 0;
    func_0x0437b6e0(&uStack_68,*(undefined4 *)(unaff_x29 + 0x18));
    if ((char)uStack_68 == '\0') {
      return plVar17;
    }
    if (uStack_68._4_4_ <= (int)uVar35) {
      return plVar17;
    }
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar18 == 0)) break;
    param_3 = *(ulong *)puVar6;
    lVar18 = func_0x0414419c(lVar18,uVar32);
    uVar11 = (uint)uVar32;
    if (lVar18 != 0) {
      if (uVar11 == (uint)uVar31) {
        uVar31 = (ulong)((uint)uVar31 + 1);
        goto LAB_06385940;
      }
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (uVar35 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x28), uVar35 == 0)) break;
      param_3 = func_0x0414419c(uVar35,uVar32,*(undefined8 *)puVar6);
      param_4 = *(ulong *)puVar7;
      func_0x041441f0(uVar35,uVar31);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar18 == 0)) break;
      param_4 = *(ulong *)puVar7;
      param_3 = 0;
      func_0x041441f0(lVar18,uVar32);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar18 == 0)) break;
      puVar19 = (undefined *)func_0x0414419c(lVar18,uVar31,*(undefined8 *)puVar6);
      uVar36 = 0x63858e0;
      uVar35 = param_1;
      param_5 = uVar31;
      param_6 = uVar32;
      goto SUB_06385d7c;
    }
LAB_06385940:
    lVar25 = *(long *)(param_1 + 0x40);
    uVar1 = uVar11;
    if (lVar25 != 0) {
      uVar1 = uVar11 + 1;
    }
    uVar35 = (ulong)uVar1;
    uVar32 = (ulong)(uVar11 + 1);
    if (lVar25 == 0) {
      return plVar17;
    }
  }
  auVar38 = func_0x03280cac();
  lVar18 = auVar38._8_8_;
  pcStack_90 = MergeEngine_ECS_Systems_InventorySystem__SetEntityEnterAnimation;
  uStack_88 = uVar31;
  plStack_80 = plVar17;
  uStack_78 = param_1;
  if ((bRam0000000007e254da & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_077e7230);
    bRam0000000007e254da = 1;
  }
  uVar31 = param_3;
  if ((lVar18 != 0) &&
     (lVar20 = func_0x03d20d84(lVar18,*(undefined8 *)PTR_DAT_0777e5a0), lVar20 != 0)) {
    *(undefined2 *)(lVar20 + 0x71) = 0x101;
    lVar21 = *(long *)(auVar38._0_8_ + 0x120);
    if (lVar21 != 0) {
      lVar26 = *(long *)(lVar21 + 0x10);
      lVar28 = *(long *)PTR_DAT_077e7230;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar26 != 0) {
        uVar11 = *(uint *)(lVar21 + 0x18);
        if (uVar11 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar11 + 1;
          plVar17 = (long *)(lVar26 + (long)(int)uVar11 * 8 + 0x20);
          *plVar17 = lVar20;
          goto SUB_032809c4;
        }
        pcStack_a0 = pcStack_90;
        uVar1 = *(uint *)(lVar21 + 0x18);
        uVar11 = uVar1 + 1;
        lVar25 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0)
                                                        + 0x70) + 0x20) + 0xc0) + 0x78);
        pcStack_90 = (code *)uVar32;
        func_0x04144aa0(lVar21,(ulong)uVar11);
        lVar18 = *(long *)(lVar21 + 0x10);
        *(uint *)(lVar21 + 0x18) = uVar11;
        if (lVar18 == 0) {
          func_0x03280cac();
        }
        else if (uVar1 < *(uint *)(lVar18 + 0x18)) {
          plVar17 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
          *plVar17 = lVar20;
          goto SUB_032809c4;
        }
        auVar37 = func_0x03280cb4();
        lVar26 = auVar37._8_8_;
        lVar18 = auVar37._0_8_;
        puStack_d0 = (undefined *)0x41444d8;
        lVar28 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x58);
        puStack_c0 = (undefined *)(long)(int)uVar1;
        uStack_b8 = (ulong)uVar11;
        uStack_b0 = lVar21;
        lStack_a8 = lVar20;
        func_0x03ec2768(lVar26,0x14);
        lVar20 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        if (lVar26 == 0) {
LAB_0414454c:
          lVar21 = 0;
        }
        else {
          lVar21 = func_0x03280b90(lVar26,lVar20);
          if (lVar21 == 0) {
            func_0x03281048(lVar26,lVar20);
            goto LAB_0414454c;
          }
        }
        lVar20 = *(long *)(lVar18 + 0x10);
        lVar27 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar20 != 0) {
          uVar11 = *(uint *)(lVar18 + 0x18);
          if (*(uint *)(lVar20 + 0x18) <= uVar11) {
            func_0x0414446c(lVar18,lVar21,
                            *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
LAB_041445ac:
            return (long *)(ulong)(*(int *)(lVar18 + 0x18) - 1);
          }
          *(uint *)(lVar18 + 0x18) = uVar11 + 1;
          plVar17 = (long *)(lVar20 + (long)(int)uVar11 * 8 + 0x20);
          *plVar17 = lVar21;
          goto SUB_032809c4;
        }
        auVar39 = func_0x03280cac();
        uVar36 = auVar39._0_8_;
        if (auVar39._8_4_ == 1) {
          puVar12 = (undefined8 *)func_0x072ce910(uVar36);
          uVar36 = func_0x03280a2c(PTR_DAT_077542c0);
          uVar31 = func_0x032810d8(uVar36,*(undefined8 *)*puVar12);
          if ((uVar31 & 1) != 0) {
            func_0x072ce920();
            uVar36 = *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x68);
            lVar25 = func_0x03280a2c(PTR_DAT_0774e558);
            if (*(int *)(lVar25 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar36 = func_0x057a51c4(uVar36,0);
            func_0x057b7b18(lVar26,uVar36,0);
            goto LAB_041445ac;
          }
          puVar13 = (undefined8 *)func_0x072ce930(8);
          *puVar13 = *puVar12;
          lVar28 = 0;
          uVar36 = func_0x072ce940(puVar13,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28);
          func_0x072ce920();
        }
        func_0x03365958(uVar36);
        auVar38 = func_0x02f09514();
        plVar24 = auVar38._8_8_;
        plVar23 = auVar38._0_8_;
        uVar11 = *(uint *)(plVar23 + 3);
        lVar20 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x90);
        uVar31 = (ulong)uVar11;
        uStack_110 = 0x4144678;
        puStack_108 = puVar6;
        puStack_100 = puVar19;
        plVar34 = (long *)0x7e18000;
        plVar17 = plVar24;
        uStack_f8 = uVar35;
        lStack_f0 = uVar36;
        lStack_e8 = lVar25;
        if ((bRam0000000007e18233 & 1) == 0) {
          lStack_e0 = lVar26;
          puStack_d8 = (undefined *)lVar18;
          func_0x03280a18(PTR_DAT_0774e8c8);
          func_0x03280a18(PTR_DAT_0774e8e0);
          auVar37._8_8_ = lStack_e0;
          auVar37._0_8_ = puStack_d8;
          bRam0000000007e18233 = 1;
        }
        lStack_e0 = auVar37._8_8_;
        puStack_d8 = auVar37._0_8_;
        if (plVar24 == (long *)0x0) {
          func_0x057a867c(6,0);
          auVar37._8_8_ = lStack_e0;
          auVar37._0_8_ = puStack_d8;
        }
        lStack_e0 = auVar37._8_8_;
        puStack_d8 = auVar37._0_8_;
        if (*(uint *)(plVar23 + 3) < uVar11) {
          func_0x057b8434(0);
          auVar37._8_8_ = lStack_e0;
          auVar37._0_8_ = puStack_d8;
        }
        lStack_e0 = auVar37._8_8_;
        puStack_d8 = auVar37._0_8_;
        lVar25 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
          auVar37._8_8_ = lStack_e0;
          auVar37._0_8_ = puStack_d8;
        }
        lStack_e0 = auVar37._8_8_;
        puStack_d8 = auVar37._0_8_;
        plVar14 = (long *)func_0x03280b90(plVar24,lVar25);
        if (plVar14 == (long *)0x0) {
          if ((int)uVar11 < (int)plVar23[3]) {
            if (plVar24 == (long *)0x0) {
              func_0x03280cac();
            }
            else {
              lVar25 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x20);
              if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                lVar25 = func_0x0325681c(lVar25);
              }
              lVar18 = *plVar24;
              uVar32 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar32 != 0) {
                piVar29 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar25) {
                    puVar12 = (undefined8 *)(lVar18 + (long)*piVar29 * 0x10 + 0x138);
                    goto LAB_04145868;
                  }
                  uVar32 = uVar32 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar32 != 0);
              }
              plVar17 = (long *)0x0;
              puVar12 = (undefined8 *)func_0x03256b10(plVar24);
LAB_04145868:
              plVar34 = (long *)(*(code *)*puVar12)(plVar24,puVar12[1]);
              puVar19 = PTR_DAT_0774e8e0;
              if (plVar34 != (long *)0x0) {
                do {
                  lVar25 = *plVar34;
                  uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar32 != 0) {
                    piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)puVar19) {
                        puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
                        goto LAB_041458d0;
                      }
                      uVar32 = uVar32 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar32 != 0);
                  }
                  plVar17 = (long *)0x0;
                  puVar12 = (undefined8 *)func_0x03256b10(plVar34);
LAB_041458d0:
                  plVar15 = (long *)(*(code *)*puVar12)(plVar34,puVar12[1]);
                  if (((ulong)plVar15 & 1) == 0) {
                    uVar31 = 0;
                    iVar10 = 5;
                    if (plVar34 == (long *)0x0) goto LAB_041459e8;
                    goto LAB_04145988;
                  }
                  lVar25 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x148);
                  if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                    lVar25 = func_0x0325681c(lVar25);
                  }
                  lVar18 = *plVar34;
                  uVar32 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar32 != 0) {
                    piVar29 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar25) {
                        puVar12 = (undefined8 *)(lVar18 + (long)*piVar29 * 0x10 + 0x138);
                        goto LAB_04145948;
                      }
                      uVar32 = uVar32 - 1;
                      piVar29 = piVar29 + 4;
                    } while (uVar32 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x03256b10(plVar34,lVar25,0);
LAB_04145948:
                  plVar17 = (long *)(*(code *)*puVar12)(plVar34,puVar12[1]);
                  func_0x04145380(plVar23,uVar31,plVar17,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x160));
                  uVar31 = (ulong)((int)uVar31 + 1);
                } while( true );
              }
            }
            func_0x03280cac();
            do {
              auVar39 = func_0x03280ca4(uVar31);
              if (auVar39._8_4_ != 1) {
                if (plVar34 == (long *)0x0) goto LAB_04145ae0;
                lVar25 = *plVar34;
                uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar31 == 0) goto LAB_04145ab8;
                piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                goto LAB_04145aa0;
              }
              puVar16 = (ulong *)func_0x072ce910(auVar39._0_8_);
              uVar31 = *puVar16;
              plVar15 = (long *)func_0x072ce920();
              iVar10 = 0;
              if (plVar34 != (long *)0x0) {
LAB_04145988:
                lVar25 = *plVar34;
                uVar32 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar32 != 0) {
                  piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
                      goto LAB_041459dc;
                    }
                    uVar32 = uVar32 - 1;
                    piVar29 = piVar29 + 4;
                  } while (uVar32 != 0);
                }
                plVar17 = (long *)0x0;
                puVar12 = (undefined8 *)func_0x03256b10(plVar34);
LAB_041459dc:
                plVar15 = (long *)(*(code *)*puVar12)(plVar34,puVar12[1]);
              }
LAB_041459e8:
            } while (uVar31 != 0);
            if (iVar10 == 5) goto LAB_04145a10;
            if (iVar10 != 0) {
              return plVar15;
            }
          }
          plVar15 = (long *)func_0x041462cc(plVar23,plVar24,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x40));
        }
        else {
          lVar25 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
          if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = func_0x0325681c(lVar25);
          }
          lVar18 = *plVar14;
          uVar31 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar31 != 0) {
            piVar29 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar25) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_04145728;
              }
              uVar31 = uVar31 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar31 != 0);
          }
          puVar12 = (undefined8 *)func_0x03256b10(plVar14,lVar25,0);
LAB_04145728:
          plVar15 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
          iVar10 = (int)plVar15;
          if (0 < iVar10) {
            func_0x04144aa0(plVar23,(int)plVar23[3] + iVar10,
                            *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x78));
            iVar5 = (int)plVar23[3] - uVar11;
            if (iVar5 != 0 && (int)uVar11 <= (int)plVar23[3]) {
              func_0x057b9f30(plVar23[2],uVar11,plVar23[2],iVar10 + uVar11,iVar5,0);
            }
            if (plVar23 == plVar14) {
              func_0x057b9f30(plVar23[2],0,plVar23[2],uVar11,uVar11,0);
              plVar15 = (long *)func_0x057b9f30(plVar23[2],iVar10 + uVar11,plVar23[2],uVar11 << 1,
                                                (int)plVar23[3] - uVar11,0);
            }
            else {
              lVar18 = plVar23[2];
              lVar25 = *(long *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                lVar25 = func_0x0325681c(lVar25);
              }
              lVar20 = *plVar14;
              uVar31 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar31 != 0) {
                piVar29 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar25) {
                    puVar12 = (undefined8 *)(lVar20 + (long)(*piVar29 + 5) * 0x10 + 0x138);
                    goto LAB_04145838;
                  }
                  uVar31 = uVar31 - 1;
                  piVar29 = piVar29 + 4;
                } while (uVar31 != 0);
              }
              puVar12 = (undefined8 *)func_0x03256b10(plVar14,lVar25,5);
LAB_04145838:
              plVar15 = (long *)(*(code *)*puVar12)(plVar14,lVar18,uVar11,puVar12[1]);
            }
            *(int *)(plVar23 + 3) = (int)plVar23[3] + iVar10;
          }
        }
LAB_04145a10:
        *(int *)((long)plVar23 + 0x1c) = *(int *)((long)plVar23 + 0x1c) + 1;
        return plVar15;
      }
    }
  }
  auVar37 = func_0x03280cac();
  plVar23 = auVar37._8_8_;
  lVar20 = auVar37._0_8_;
  puVar9 = &uStack_110;
  lStack_e8 = 0x6385a60;
  puStack_d8 = puVar22;
  puStack_d0 = puVar7;
  puStack_c8 = puVar6;
  puStack_c0 = puVar19;
  lStack_a8 = 0x7e25000;
  plVar17 = (long *)0x7e25000;
  param_1 = param_4 & 0xffffffff;
  uVar2 = (undefined4)uVar31;
  lStack_f0 = unaff_x29;
  lStack_e0 = lVar25;
  uStack_b8 = uVar35;
  uStack_b0 = uVar32;
  if ((bRam0000000007e254de & 1) == 0) {
    pcStack_a0 = (code *)lVar18;
    lStack_98 = auVar38._0_8_;
    func_0x03280a18(PTR_DAT_077e7168);
    func_0x03280a18(PTR_DAT_077e7170);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077e7238);
    func_0x03280a18(PTR_DAT_077d9fb8);
    func_0x03280a18(PTR_DAT_077e7240);
    func_0x03280a18(PTR_DAT_077e7248);
    func_0x03280a18(PTR_DAT_077e7070);
    auVar38._8_8_ = pcStack_a0;
    auVar38._0_8_ = lStack_98;
    bRam0000000007e254de = 1;
  }
  puVar19 = PTR_DAT_077e7070;
  pcStack_a0 = auVar38._8_8_;
  lStack_98 = auVar38._0_8_;
  uStack_f8 = CONCAT44(uVar2,(undefined4)uStack_f8);
  if ((int)param_4 == 0) {
    if (((*(long *)(lVar20 + 0x40) != 0) && (*(long *)(*(long *)(lVar20 + 0x40) + 0x28) != 0)) &&
       (*(long *)(lVar20 + 0x50) != 0)) {
      func_0x067675f0(*(long *)(lVar20 + 0x50),0);
      MergeEngine_ECS_Systems_InventorySystem__NumFreeSlots(lVar20);
      goto LAB_06385bfc;
    }
  }
  else if ((*(long *)(lVar20 + 0x48) != 0) &&
          (lVar25 = *(long *)(*(long *)(lVar20 + 0x48) + 0x30), lVar25 != 0)) {
    lVar18 = *(long *)PTR_DAT_077e7070;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c();
      auVar38._8_8_ = pcStack_a0;
      auVar38._0_8_ = lStack_98;
      lVar18 = *(long *)puVar19;
    }
    pcStack_a0 = auVar38._8_8_;
    lStack_98 = auVar38._0_8_;
    lVar21 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x28);
    if (lVar21 == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c();
        auVar38._8_8_ = pcStack_a0;
        auVar38._0_8_ = lStack_98;
        lVar18 = *(long *)puVar19;
      }
      pcStack_a0 = auVar38._8_8_;
      lStack_98 = auVar38._0_8_;
      uVar36 = **(undefined8 **)(lVar18 + 0xb8);
      lVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7170);
      func_0x05355fbc(lVar25,uVar36,*(undefined8 *)PTR_DAT_077e7248,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar19 + 0xb8) + 0x28);
      *plVar17 = lVar25;
      goto SUB_032809c4;
    }
    uVar31 = *(ulong *)PTR_DAT_077e7168;
    func_0x03d3bb0c(lVar25,lVar21);
    MergeEngine_ECS_Systems_InventorySystem__NumFreeProducerSlots(lVar20);
    plVar17 = (long *)puVar19;
LAB_06385bfc:
    auVar38._8_8_ = pcStack_a0;
    auVar38._0_8_ = lStack_98;
    if (*(long *)(lVar20 + 0x118) != 0) {
      uVar31 = 0;
      func_0x069f80fc(*(long *)(lVar20 + 0x118),plVar23);
      puVar19 = PTR_DAT_077e7238;
      auVar38._8_8_ = pcStack_a0;
      auVar38._0_8_ = lStack_98;
      if (plVar23 != (long *)0x0) {
        lVar25 = *plVar23;
        uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar31 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_07779820) {
              puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_06385c78;
            }
            uVar31 = uVar31 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar31 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_07779820,0);
LAB_06385c78:
        (*(code *)*puVar12)(plVar23,puVar12[1]);
        MergeEngine_ECS_Systems_InventorySystem__NumNewProducerSlots(lVar20);
        uVar36 = 0x6385ca0;
        goto SUB_06385f08;
      }
    }
  }
  pcStack_a0 = auVar38._8_8_;
  lStack_98 = auVar38._0_8_;
  auVar38 = func_0x03280cac();
  plVar23 = auVar38._8_8_;
  uVar35 = auVar38._0_8_;
  puVar8 = auStack_130;
  auStack_130[0] = 0x6385d18;
  plStack_120 = plVar17;
  plStack_118 = (long *)param_1;
  if (*(long *)(uVar35 + 0xc0) != 0) {
    plVar17 = (long *)func_0x06888e70(*(long *)(uVar35 + 0xc0),0);
    if (((ulong)plVar17 & 1) == 0) {
      return plVar17;
    }
    plVar17 = plVar23;
    if ((plVar23 != (long *)0x0) && (*(long *)(uVar35 + 0xb8) != 0)) {
      uVar31 = 0;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SelectItem
                (*(long *)(uVar35 + 0xb8),plVar23[6]);
      lVar25 = *(long *)(uVar35 + 0xc0);
      if (lVar25 != 0) {
        if ((bRam0000000007e28d2f & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774f158,0);
          bRam0000000007e28d2f = 1;
        }
        plVar17 = (long *)(lVar25 + 0x58);
        plVar23 = (long *)func_0x055f7aac(*plVar17,0);
        if (((ulong)plVar23 & 1) != 0) {
          return plVar23;
        }
        *plVar17 = *(long *)PTR_DAT_0774f158;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar16 = (ulong *)(((ulong)plVar17 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar4) {
              *puVar16 = *puVar16 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return plVar17;
      }
    }
  }
  uVar36 = 0x6385d7c;
  auVar38 = func_0x03280cac();
  puVar19 = auVar38._8_8_;
  param_1 = auVar38._0_8_;
SUB_06385d7c:
  puVar9 = (undefined8 *)((long)puVar8 + -0x30);
  *(undefined8 *)((long)puVar8 + -0x30) = uVar36;
  *(ulong *)((long)puVar8 + -0x20) = param_6;
  *(ulong *)((long)puVar8 + -0x18) = param_5;
  *(long **)((long)puVar8 + -0x10) = plVar17;
  *(ulong *)((long)puVar8 + -8) = uVar35;
  param_5 = uVar31 & 0xffffffff;
  param_6 = uVar31;
  if ((bRam0000000007e254dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e254dc = 1;
  }
  if ((puVar19 != (undefined *)0x0) &&
     (puVar22 = (undefined *)func_0x03d20d84(puVar19,*(undefined8 *)PTR_DAT_0777a928),
     puVar22 != (undefined *)0x0)) {
    *(int *)(puVar22 + 0x28) = (int)uVar31;
    plVar17 = *(long **)(param_1 + 0x60);
    param_5 = 0;
    puVar19 = puVar22;
    if (plVar17 != (long *)0x0) {
      lVar25 = *plVar17;
      uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar31 != 0) {
        piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar12 = (undefined8 *)(lVar25 + (long)(*piVar29 + 0x14) * 0x10 + 0x138);
            goto LAB_06385e5c;
          }
          uVar31 = uVar31 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar31 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,0x14);
LAB_06385e5c:
      param_6 = puVar12[1];
      uVar36 = (*(code *)*puVar12)(plVar17,puVar22);
      plVar17 = *(long **)(param_1 + 0x88);
      param_5 = 0;
      if (plVar17 != (long *)0x0) {
        lVar25 = *plVar17;
        uVar30 = *(undefined8 *)(puVar22 + 0x10);
        uVar31 = (ulong)*(ushort *)(lVar25 + 0x12e);
        uVar33 = *(undefined8 *)PTR_DAT_07778fa0;
        if (uVar31 != 0) {
          piVar29 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0777e4a0) {
              puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
              goto LAB_06385edc;
            }
            uVar31 = uVar31 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar31 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777e4a0,0);
LAB_06385edc:
                    /* WARNING: Could not recover jumptable at 0x06385f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar17 = (long *)(*(code *)*puVar12)(plVar17,uVar33,uVar36,uVar30,0,puVar12[1]);
        return plVar17;
      }
    }
  }
  uVar36 = 0x6385f08;
  func_0x03280cac();
  plVar23 = extraout_x1;
SUB_06385f08:
  *(undefined8 *)((long)puVar9 + -0x20) = uVar36;
  *(ulong *)((long)puVar9 + -0x18) = param_5;
  *(undefined **)((long)puVar9 + -0x10) = puVar19;
  *(ulong *)((long)puVar9 + -8) = param_1;
  if ((bRam0000000007e254df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a948);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e254df = 1;
  }
  uVar31 = func_0x06b1d910(plVar23,0);
  if (((((uVar31 & 1) == 0) && (uVar31 = func_0x06b1d9c4(plVar23,0), (uVar31 & 1) == 0)) ||
      (param_6 == 0)) ||
     (lVar25 = func_0x03d20d84(param_6,*(undefined8 *)PTR_DAT_0777a948), lVar25 == 0)) {
    plVar17 = (long *)0x0;
    *(undefined8 *)((long)puVar9 + -0x28) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar25 + 0x28);
    *(undefined8 *)((long)puVar9 + -0x28) = 0;
    func_0x0437b6e0((undefined1 *)((long)puVar9 + -0x28),uVar2,*(undefined8 *)PTR_DAT_07750da0);
    plVar17 = *(long **)((long)puVar9 + -0x28);
  }
  return plVar17;
  while( true ) {
    uVar31 = uVar31 - 1;
    piVar29 = piVar29 + 4;
    if (uVar31 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar12 = (undefined8 *)(lVar25 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar17 = (long *)0x0;
  puVar12 = (undefined8 *)func_0x03256b10(plVar34);
LAB_04145ad4:
  (*(code *)*puVar12)(plVar34,puVar12[1]);
LAB_04145ae0:
  func_0x03365958(auVar39._0_8_);
  func_0x03280ca4(0);
  auVar38 = func_0x02f09514();
  lVar25 = auVar38._0_8_;
  auStack_130[0] = 0x4145af8;
  plStack_120 = (long *)lVar20;
  plStack_118 = plVar23;
  uVar11 = func_0x03f898d4(*(undefined8 *)(lVar25 + 0x10),auVar38._8_8_,0,
                           *(undefined4 *)(lVar25 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar17[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar11) {
    func_0x04145da4(lVar25,uVar11);
  }
  return (long *)(ulong)(~uVar11 >> 0x1f);
}

