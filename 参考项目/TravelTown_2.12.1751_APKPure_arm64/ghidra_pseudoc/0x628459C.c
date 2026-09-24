/* Ghidra 12.1.2 native pseudocode; RVA 0x628459C; MergeEngine.ECS.Systems.InventorySystem.TryInsert; status ok */

/* WARNING: Possible PIC construction at 0x06384728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06384b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385654: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x063858dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06384fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06384fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06385104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638517c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06384c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06385108) */
/* WARNING: Removing unreachable block (ram,0x0638524c) */
/* WARNING: Removing unreachable block (ram,0x06385254) */
/* WARNING: Removing unreachable block (ram,0x06385260) */
/* WARNING: Removing unreachable block (ram,0x06384fcc) */
/* WARNING: Removing unreachable block (ram,0x06384fe8) */
/* WARNING: Removing unreachable block (ram,0x06385000) */
/* WARNING: Removing unreachable block (ram,0x0638502c) */
/* WARNING: Removing unreachable block (ram,0x06385010) */
/* WARNING: Removing unreachable block (ram,0x06385044) */
/* WARNING: Removing unreachable block (ram,0x06385048) */
/* WARNING: Removing unreachable block (ram,0x06385ca0) */
/* WARNING: Removing unreachable block (ram,0x06385ce0) */
/* WARNING: Removing unreachable block (ram,0x063858e0) */
/* WARNING: Removing unreachable block (ram,0x063858e4) */
/* WARNING: Removing unreachable block (ram,0x063858fc) */
/* WARNING: Removing unreachable block (ram,0x06385928) */
/* WARNING: Removing unreachable block (ram,0x06385910) */
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
/* WARNING: Removing unreachable block (ram,0x06385658) */
/* WARNING: Removing unreachable block (ram,0x06385698) */
/* WARNING: Removing unreachable block (ram,0x06384b94) */
/* WARNING: Removing unreachable block (ram,0x06384c1c) */
/* WARNING: Removing unreachable block (ram,0x06384cac) */
/* WARNING: Removing unreachable block (ram,0x06384c28) */
/* WARNING: Removing unreachable block (ram,0x06384c2c) */
/* WARNING: Removing unreachable block (ram,0x06384c68) */
/* WARNING: Removing unreachable block (ram,0x06384b9c) */
/* WARNING: Removing unreachable block (ram,0x06384bb0) */
/* WARNING: Removing unreachable block (ram,0x06384bd0) */
/* WARNING: Removing unreachable block (ram,0x06384bec) */
/* WARNING: Removing unreachable block (ram,0x06384bf4) */
/* WARNING: Removing unreachable block (ram,0x06384c88) */
/* WARNING: Removing unreachable block (ram,0x06384c00) */
/* WARNING: Removing unreachable block (ram,0x06384c0c) */
/* WARNING: Removing unreachable block (ram,0x06384c94) */
/* WARNING: Removing unreachable block (ram,0x06384cc0) */
/* WARNING: Removing unreachable block (ram,0x06384cc8) */
/* WARNING: Removing unreachable block (ram,0x06384cfc) */
/* WARNING: Removing unreachable block (ram,0x06384d14) */
/* WARNING: Removing unreachable block (ram,0x06384d1c) */
/* WARNING: Removing unreachable block (ram,0x06384d44) */
/* WARNING: Removing unreachable block (ram,0x06384d28) */
/* WARNING: Removing unreachable block (ram,0x06384d34) */
/* WARNING: Removing unreachable block (ram,0x06384d54) */
/* WARNING: Removing unreachable block (ram,0x06384d6c) */
/* WARNING: Removing unreachable block (ram,0x06384d94) */
/* WARNING: Removing unreachable block (ram,0x06384d9c) */
/* WARNING: Removing unreachable block (ram,0x06384dc4) */
/* WARNING: Removing unreachable block (ram,0x06384da8) */
/* WARNING: Removing unreachable block (ram,0x06384db4) */
/* WARNING: Removing unreachable block (ram,0x06384dd0) */
/* WARNING: Removing unreachable block (ram,0x06384df0) */
/* WARNING: Removing unreachable block (ram,0x06384ed4) */
/* WARNING: Removing unreachable block (ram,0x06384ed8) */
/* WARNING: Removing unreachable block (ram,0x06384ef4) */
/* WARNING: Removing unreachable block (ram,0x06384efc) */
/* WARNING: Removing unreachable block (ram,0x06385064) */
/* WARNING: Removing unreachable block (ram,0x06384f08) */
/* WARNING: Removing unreachable block (ram,0x06384f14) */
/* WARNING: Removing unreachable block (ram,0x06385070) */
/* WARNING: Removing unreachable block (ram,0x063850c0) */
/* WARNING: Removing unreachable block (ram,0x063850e0) */
/* WARNING: Removing unreachable block (ram,0x0638510c) */
/* WARNING: Removing unreachable block (ram,0x06385124) */
/* WARNING: Removing unreachable block (ram,0x0638513c) */
/* WARNING: Removing unreachable block (ram,0x06385168) */
/* WARNING: Removing unreachable block (ram,0x0638514c) */
/* WARNING: Removing unreachable block (ram,0x06385180) */
/* WARNING: Removing unreachable block (ram,0x06385184) */
/* WARNING: Removing unreachable block (ram,0x0638519c) */
/* WARNING: Removing unreachable block (ram,0x063851b4) */
/* WARNING: Removing unreachable block (ram,0x063851c0) */
/* WARNING: Removing unreachable block (ram,0x063851d8) */
/* WARNING: Removing unreachable block (ram,0x063851e0) */
/* WARNING: Removing unreachable block (ram,0x06385208) */
/* WARNING: Removing unreachable block (ram,0x063851ec) */
/* WARNING: Removing unreachable block (ram,0x063851f8) */
/* WARNING: Removing unreachable block (ram,0x06385218) */
/* WARNING: Removing unreachable block (ram,0x063850f0) */
/* WARNING: Removing unreachable block (ram,0x06384e58) */
/* WARNING: Removing unreachable block (ram,0x06384e84) */
/* WARNING: Removing unreachable block (ram,0x06384ea4) */
/* WARNING: Removing unreachable block (ram,0x06384eac) */
/* WARNING: Removing unreachable block (ram,0x06384f24) */
/* WARNING: Removing unreachable block (ram,0x06384eb8) */
/* WARNING: Removing unreachable block (ram,0x06384ec4) */
/* WARNING: Removing unreachable block (ram,0x06384f34) */
/* WARNING: Removing unreachable block (ram,0x06384f84) */
/* WARNING: Removing unreachable block (ram,0x06384fa4) */
/* WARNING: Removing unreachable block (ram,0x06384fd0) */
/* WARNING: Removing unreachable block (ram,0x06384fb4) */
/* WARNING: Removing unreachable block (ram,0x06384ca8) */
/* WARNING: Removing unreachable block (ram,0x0638472c) */
/* WARNING: Removing unreachable block (ram,0x06384c80) */
/* WARNING: Removing unreachable block (ram,0x06385264) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

long * MergeEngine_ECS_Systems_InventorySystem__TryInsert
                 (long param_1,undefined8 *******param_2,undefined8 ****param_3,ulong param_4,
                 undefined8 ****param_5,undefined8 ****param_6)

{
  undefined8 *******pppppppuVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  int iVar17;
  undefined8 ******ppppppuVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  ulong *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar18;
  undefined8 uVar29;
  long lVar30;
  ulong uVar31;
  undefined *puVar32;
  undefined *puVar33;
  long *extraout_x1;
  undefined8 *******pppppppuVar34;
  undefined8 *******pppppppuVar35;
  undefined8 ****ppppuVar36;
  undefined8 *****pppppuVar37;
  undefined8 ****ppppuVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  int *piVar43;
  undefined8 *******unaff_x19;
  ulong uVar44;
  undefined8 *****pppppuVar45;
  long unaff_x20;
  long *plVar46;
  undefined *puVar47;
  undefined8 ******unaff_x21;
  undefined8 ******ppppppuVar48;
  long *plVar49;
  undefined8 ****ppppuVar50;
  long *unaff_x22;
  undefined8 ****ppppuVar51;
  long *plVar52;
  undefined8 *******unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  ulong uVar53;
  long lVar54;
  undefined8 unaff_x28;
  undefined *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [12];
  undefined8 uStack_1f0;
  char acStack_1e8 [8];
  ulong uStack_1e0;
  char acStack_1d8 [8];
  long lStack_1d0;
  char acStack_1c8 [8];
  char acStack_1c0 [16];
  char acStack_1b0 [8];
  char acStack_1a8 [8];
  long lStack_1a0;
  char acStack_198 [8];
  char acStack_190 [8];
  char acStack_188 [8];
  char acStack_180 [16];
  char acStack_170 [8];
  char acStack_168 [8];
  long lStack_160;
  char acStack_158 [8];
  char acStack_150 [8];
  char acStack_148 [8];
  char acStack_140 [16];
  char acStack_130 [8];
  char acStack_128 [8];
  long lStack_120;
  char acStack_118 [8];
  char acStack_110 [8];
  char acStack_108 [8];
  char acStack_100 [16];
  char acStack_f0 [8];
  char acStack_e8 [8];
  ulong uStack_e0;
  char acStack_d8 [8];
  long lStack_d0;
  char acStack_c8 [8];
  undefined8 *******pppppppuStack_c0;
  long lStack_b8;
  
  auVar56._8_8_ = param_2;
  auVar56._0_8_ = param_1;
  if ((bRam0000000007e254d5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_0777e500);
    func_0x03280a18(PTR_DAT_077e71a0);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_077e71a8);
    func_0x03280a18(PTR_DAT_077e6dd0);
    func_0x03280a18(PTR_DAT_0777aaa8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_077cda50);
    func_0x03280a18(PTR_DAT_0777c290);
    bRam0000000007e254d5 = 1;
  }
  ppppppuVar48 = (undefined8 ******)0x7e25000;
  plVar49 = unaff_x22;
  if (param_2 == (undefined8 *******)0x0) {
LAB_063849e8:
    unaff_x22 = plVar49;
    unaff_x21 = ppppppuVar48;
    unaff_x20 = param_1;
    unaff_x19 = param_2;
    unaff_x30 = 0x63849ec;
    auVar56 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  }
  else {
    lVar26 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e6dd0);
    ppppppuVar48 = (undefined8 ******)PTR_DAT_077e71a8;
    plVar52 = unaff_x22;
    if ((lVar26 != 0) &&
       (lVar26 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e71a8), lVar26 != 0)) {
      lVar26 = func_0x03ced81c(param_2,*ppppppuVar48);
      if (lVar26 != 0) {
        if (*(char *)(lVar26 + 0x30) == '\0') goto LAB_063846b8;
        plVar46 = *(long **)(param_1 + 0x28);
        ppppppuVar48 = param_2[6];
        param_2 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
        param_3 = (undefined8 ****)0x13;
        goto LAB_063846f8;
      }
      goto LAB_063849e8;
    }
LAB_063846b8:
    puVar47 = PTR_DAT_0777e638;
    lVar26 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638);
    if ((lVar26 != 0) && (*(char *)(lVar26 + 0x32) != '\0')) {
      plVar46 = *(long **)(param_1 + 0x28);
      ppppppuVar48 = param_2[6];
      param_2 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
      param_3 = (undefined8 ****)0x2e;
LAB_063846f8:
      param_4 = 0;
      param_5 = (undefined8 ****)0x0;
      param_6 = (undefined8 ****)0x0;
      func_0x0686aa28(param_2,ppppppuVar48);
      param_1 = 0;
      plVar49 = plVar52;
      if (plVar46 == (long *)0x0) goto LAB_063849e8;
      lVar26 = *(long *)PTR_DAT_0777c290;
      lVar39 = *(long *)(lVar26 + 0x38);
      if (lVar39 == 0) {
        func_0x03256878(lVar26);
        lVar39 = *(long *)(lVar26 + 0x38);
      }
      lVar26 = *(long *)(lVar39 + 8);
      plVar49 = plVar46;
      if ((*(long *)(lVar26 + 0x38) == 0) &&
         (plVar49 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar26 + 0x38) == 0)) {
        plVar49 = (long *)func_0x03256878(lVar26);
      }
      if ((char)plVar46[10] != '\0') {
        return plVar49;
      }
      uVar28 = **(undefined8 **)(lVar26 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar28 = func_0x057a51c4(uVar28,0);
      plVar49 = (long *)0x1;
      pppppppuVar34 = (undefined8 *******)0x0;
      ppppppuVar19 = (undefined8 ******)func_0x072869d0(plVar46,uVar28,0,1,0);
      if (ppppppuVar19 == (undefined8 ******)0x0) {
        auVar56 = func_0x03280cac();
        uVar28 = auVar56._8_8_;
        plVar52 = auVar56._0_8_;
        lVar26 = tpidr_el0;
        lStack_b8 = *(long *)(lVar26 + 0x28);
        puVar25 = (ulong *)plVar49[7];
        plVar20 = plVar52;
        pppppppuVar35 = pppppppuVar34;
        pppppppuStack_c0 = pppppppuVar34;
        if (puVar25 == (ulong *)0x0) {
          plVar20 = (long *)func_0x03280a18(PTR_DAT_0774e558);
          puVar25 = (ulong *)plVar49[7];
          if (puVar25 == (ulong *)0x0) {
            plVar20 = (long *)func_0x03256878(plVar49);
            puVar25 = (ulong *)plVar49[7];
          }
        }
        unaff_x23 = (undefined8 *******)(ulong)*(uint *)(puVar25[1] + 0xfc);
        lVar39 = -((long)unaff_x23 + 0xfU & 0x1fffffff0);
        pcVar16 = (char *)((long)&pppppppuStack_c0 + lVar39);
        if ((char)plVar52[10] == '\0') {
          unaff_x25 = *puVar25;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar55 = func_0x057a51c4(unaff_x25,0);
          ppppppuVar19 = (undefined8 ******)func_0x072869d0(plVar52,uVar55,uVar28,1,0);
          plVar46 = (long *)plVar49[7];
          pppppppuVar1 = pppppppuVar34;
          if (-1 < *(int *)(plVar46[1] + 0x28)) {
            pppppppuVar1 = &pppppppuStack_c0;
          }
          pppppppuVar35 = unaff_x23;
          func_0x072ce970(pcVar16,pppppppuVar1);
          param_2 = (undefined8 *******)func_0x03280b94(plVar46[1],pcVar16);
          if (ppppppuVar19 != (undefined8 ******)0x0) {
            uVar28 = 0x3ea52d0;
            ppppppuVar48 = ppppppuVar19;
            unaff_x24 = pcVar16;
            goto SUB_072852e4;
          }
          func_0x03280cac();
          uVar28 = 0;
        }
        else {
          plVar46 = plVar49;
          if (*(long *)(lVar26 + 0x28) == lStack_b8) {
            return plVar20;
          }
        }
        auVar56 = func_0x072ce990();
        lVar26 = auVar56._8_8_;
        pcVar8 = acStack_1c0 + lVar39 + 0xe0;
        pcVar8[0] = '\x04';
        pcVar8[1] = 'S';
        pcVar8[2] = -0x16;
        pcVar8[3] = '\x03';
        pcVar8[4] = '\0';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        *(undefined8 *)(acStack_1c0 + lVar39 + 0xe8) = uVar28;
        *(long **)(acStack_1c0 + lVar39 + 0xf0) = plVar46;
        *(undefined8 ********)(acStack_1c0 + lVar39 + 0xf8) = pppppppuVar34;
        ppppppuVar48 = pppppppuVar35[7];
        if (ppppppuVar48 == (undefined8 ******)0x0) {
          func_0x03256878(pppppppuVar35);
          ppppppuVar48 = pppppppuVar35[7];
        }
        pppppuVar37 = ppppppuVar48[1];
        *(undefined8 *)(acStack_1c0 + lVar39 + 0xc0) = *(undefined8 *)(acStack_1c0 + lVar39 + 0xe0);
        *(char **)(acStack_1c0 + lVar39 + 0xd0) = pcVar16;
        *(undefined8 ********)(acStack_1c0 + lVar39 + 0xd8) = unaff_x23;
        *(long **)(acStack_1c0 + lVar39 + 0xe0) = plVar52;
        *(undefined8 *)(acStack_1c0 + lVar39 + 0xe8) = *(undefined8 *)(acStack_1c0 + lVar39 + 0xe8);
        *(undefined8 *)(acStack_1c0 + lVar39 + 0xf0) = *(undefined8 *)(acStack_1c0 + lVar39 + 0xf0);
        *(undefined8 *)(acStack_1c0 + lVar39 + 0xf8) = *(undefined8 *)(acStack_1c0 + lVar39 + 0xf8);
        ppppuVar38 = pppppuVar37[7];
        lVar30 = lVar26;
        pppppuVar45 = pppppuVar37;
        if (ppppuVar38 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar38 = pppppuVar37[7];
          if (ppppuVar38 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar37);
            ppppuVar38 = pppppuVar37[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar38 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar54 = func_0x03280ca0();
        func_0x04053df4(lVar54,pppppuVar37[7][1]);
        if (lVar54 != 0) {
          plVar49 = (long *)(lVar54 + 0x10);
          *plVar49 = lVar26;
          goto SUB_032809c4;
        }
        auVar57 = func_0x03280cac();
        pcVar9 = acStack_1c0 + lVar39 + 0x80;
        pcVar9[0] = '0';
        pcVar9[1] = 'U';
        pcVar9[2] = -0x16;
        pcVar9[3] = '\x03';
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar16 = acStack_1c0 + lVar39 + 0x90;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        *(undefined8 ********)(acStack_1c0 + lVar39 + 0x98) = unaff_x23;
        *(long *)(acStack_1c0 + lVar39 + 0xa0) = lVar26;
        *(undefined8 ******)(acStack_1c0 + lVar39 + 0xa8) = pppppuVar37;
        *(long *)(acStack_1c0 + lVar39 + 0xb0) = auVar56._0_8_;
        pcVar16 = acStack_1c0 + lVar39 + 0xb8;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        ppppuVar38 = pppppuVar45[7];
        lVar26 = lVar30;
        pppppuVar37 = pppppuVar45;
        if (ppppuVar38 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar38 = pppppuVar45[7];
          if (ppppuVar38 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar45);
            ppppuVar38 = pppppuVar45[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar38 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar54 = func_0x03280ca0();
        func_0x0404e308(lVar54,pppppuVar45[7][1]);
        if (lVar54 != 0) {
          plVar49 = (long *)(lVar54 + 0x10);
          *plVar49 = lVar30;
          goto SUB_032809c4;
        }
        auVar56 = func_0x03280cac();
        pcVar10 = acStack_1c0 + lVar39 + 0x40;
        pcVar10[0] = 'D';
        pcVar10[1] = 'V';
        pcVar10[2] = -0x16;
        pcVar10[3] = '\x03';
        pcVar10[4] = '\0';
        pcVar10[5] = '\0';
        pcVar10[6] = '\0';
        pcVar10[7] = '\0';
        pcVar16 = acStack_1c0 + lVar39 + 0x50;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        *(undefined8 ********)(acStack_1c0 + lVar39 + 0x58) = unaff_x23;
        *(long *)(acStack_1c0 + lVar39 + 0x60) = lVar30;
        *(undefined8 ******)(acStack_1c0 + lVar39 + 0x68) = pppppuVar45;
        *(long *)(acStack_1c0 + lVar39 + 0x70) = auVar57._0_8_;
        *(long *)(acStack_1c0 + lVar39 + 0x78) = auVar57._8_8_;
        ppppuVar38 = pppppuVar37[7];
        lVar30 = lVar26;
        pppppuVar45 = pppppuVar37;
        if (ppppuVar38 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar38 = pppppuVar37[7];
          if (ppppuVar38 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar37);
            ppppuVar38 = pppppuVar37[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar38 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar54 = func_0x03280ca0();
        (*(code *)*pppppuVar37[7][1])();
        if (lVar54 != 0) {
          plVar49 = (long *)(lVar54 + 0x10);
          *plVar49 = lVar26;
          goto SUB_032809c4;
        }
        auVar57 = func_0x03280cac();
        pcVar11 = acStack_1e8 + lVar39 + 0x28;
        pcVar11[0] = '\\';
        pcVar11[1] = 'W';
        pcVar11[2] = -0x16;
        pcVar11[3] = '\x03';
        pcVar11[4] = '\0';
        pcVar11[5] = '\0';
        pcVar11[6] = '\0';
        pcVar11[7] = '\0';
        pcVar16 = acStack_1c0 + lVar39 + 0x10;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        *(undefined8 ********)(acStack_1c0 + lVar39 + 0x18) = unaff_x23;
        *(long *)(acStack_1c0 + lVar39 + 0x20) = lVar26;
        *(undefined8 ******)(acStack_1c0 + lVar39 + 0x28) = pppppuVar37;
        *(long *)(acStack_1c0 + lVar39 + 0x30) = auVar56._0_8_;
        *(long *)(acStack_1c0 + lVar39 + 0x38) = auVar56._8_8_;
        ppppuVar38 = pppppuVar45[7];
        if (ppppuVar38 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar38 = pppppuVar45[7];
          if (ppppuVar38 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar45);
            ppppuVar38 = pppppuVar45[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar38 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar26 = func_0x03280ca0();
        (*(code *)*pppppuVar45[7][1])();
        if (lVar26 != 0) {
          plVar49 = (long *)(lVar26 + 0x10);
          *plVar49 = lVar30;
          goto SUB_032809c4;
        }
        auVar56 = func_0x03280cac();
        lVar26 = auVar56._8_8_;
        plVar49 = auVar56._0_8_;
        pcVar12 = acStack_1e8 + lVar39 + 8;
        pcVar12[0] = 't';
        pcVar12[1] = 'X';
        pcVar12[2] = -0x16;
        pcVar12[3] = '\x03';
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = '\0';
        pcVar12[7] = '\0';
        *(long *)(acStack_1e8 + lVar39 + 0x18) = auVar57._0_8_;
        *(long *)(acStack_1e8 + lVar39 + 0x20) = auVar57._8_8_;
        plVar52 = *(long **)(lVar26 + 0x38);
        if (plVar52 == (long *)0x0) {
          func_0x03256878(lVar26);
          plVar52 = *(long **)(lVar26 + 0x38);
        }
        lVar26 = *plVar52;
        uVar28 = *(undefined8 *)(acStack_1e8 + lVar39 + 0x18);
        uVar55 = *(undefined8 *)(acStack_1e8 + lVar39 + 0x20);
        *(undefined8 *)((long)&uStack_1f0 + lVar39) = *(undefined8 *)(acStack_1e8 + lVar39 + 8);
        *(undefined8 ********)(acStack_1e8 + lVar39) = unaff_x23;
        *(long *)(acStack_1e8 + lVar39 + 8) = lVar30;
        *(undefined8 ******)(acStack_1e8 + lVar39 + 0x10) = pppppuVar45;
        *(undefined8 *)(acStack_1e8 + lVar39 + 0x18) = uVar28;
        *(undefined8 *)(acStack_1e8 + lVar39 + 0x20) = uVar55;
        plVar52 = plVar49;
        if ((*(long *)(lVar26 + 0x38) == 0) &&
           (plVar52 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar26 + 0x38) == 0)) {
          plVar52 = (long *)func_0x03256878(lVar26);
        }
        puVar47 = PTR_DAT_0774e558;
        if ((char)plVar49[10] != '\0') {
          return plVar52;
        }
        uVar28 = **(undefined8 **)(lVar26 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar28 = func_0x057a51c4(uVar28,0);
        ppppppuVar19 = (undefined8 ******)func_0x072869d0(plVar49,uVar28,0,0,0);
        if (ppppppuVar19 == (undefined8 ******)0x0) {
          return (long *)0x0;
        }
        uVar28 = **(undefined8 **)(lVar26 + 0x38);
        if (*(int *)(*(long *)puVar47 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar28 = func_0x057a51c4(uVar28,0);
        lVar30 = func_0x057c1ad4(uVar28,0);
        lVar26 = *(long *)(*(long *)(lVar26 + 0x38) + 8);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x0325681c(lVar26);
        }
        if (lVar30 == 0) {
LAB_03ea5b18:
          param_2 = (undefined8 *******)0x0;
        }
        else {
          param_2 = (undefined8 *******)func_0x03280b90(lVar30,lVar26);
          if (param_2 == (undefined8 *******)0x0) {
            func_0x03281048(lVar30,lVar26);
            goto LAB_03ea5b18;
          }
        }
        plVar46 = *(long **)(acStack_1e8 + lVar39 + 0x18);
        pppppppuVar34 = *(undefined8 ********)(acStack_1e8 + lVar39 + 0x20);
        plVar52 = *(long **)(acStack_1e8 + lVar39 + 8);
        ppppppuVar48 = *(undefined8 *******)(acStack_1e8 + lVar39 + 0x10);
        pcVar16 = acStack_1e8 + lVar39 + 0x28;
        uVar28 = *(undefined8 *)((long)&uStack_1f0 + lVar39);
        unaff_x23 = *(undefined8 ********)(acStack_1e8 + lVar39);
        unaff_x24 = (undefined *)0x0;
      }
      else {
        pcVar16 = &stack0xffffffffffffffd0;
        uVar28 = 0x638472c;
        pppppppuVar34 = param_2;
      }
SUB_072852e4:
      lVar26 = 0;
      puVar15 = pcVar16 + -0x30;
      *(undefined8 *)(pcVar16 + -0x30) = uVar28;
      *(long **)(pcVar16 + -0x20) = plVar52;
      *(undefined8 *******)(pcVar16 + -0x18) = ppppppuVar48;
      *(long **)(pcVar16 + -0x10) = plVar46;
      *(undefined8 ********)(pcVar16 + -8) = pppppppuVar34;
      if ((bRam0000000007e3419a & 1) == 0) {
        func_0x03280a18(PTR_DAT_0785dee8);
        func_0x03280a18(PTR_DAT_0785def0);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_0785def8);
        func_0x03280a18(PTR_DAT_07751038);
        func_0x03280a18(PTR_DAT_07779590);
        bRam0000000007e3419a = 1;
      }
      puVar47 = PTR_DAT_07779590;
      if (param_2 != (undefined8 *******)0x0) {
        uVar28 = func_0x057dadc4(param_2,0);
        pppppuVar45 = ppppppuVar19[4];
        if (*(int *)(*(long *)puVar47 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar47);
        }
        uVar18 = func_0x0727e0ec(uVar28,pppppuVar45);
        plVar49 = (long *)(ulong)(uVar18 & 1);
        uVar28 = 0x728539c;
        goto SUB_0727dc78;
      }
      func_0x03280cac();
      func_0x03280cac();
      lVar39 = 0;
      while( true ) {
        func_0x03280ca4(lVar39);
        auVar59 = func_0x03280cac();
        uVar28 = auVar59._0_8_;
        if (auVar59._8_4_ != 1) break;
        plVar49 = (long *)func_0x072ce910(uVar28);
        lVar39 = *plVar49;
        func_0x072ce920();
        uVar42 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
        if (uVar42 != 0) {
          piVar43 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar27 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar43 * 0x10 + 0x138);
              goto LAB_072854e8;
            }
            uVar42 = uVar42 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar42 != 0);
        }
        lVar26 = 0;
        puVar27 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
        plVar49 = (long *)(*(code *)*puVar27)(0x7e34000,puVar27[1]);
        if (lVar39 == 0) {
          return plVar49;
        }
      }
      uVar42 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
      if (uVar42 != 0) {
        piVar43 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
        do {
          if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar27 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar43 * 0x10 + 0x138);
            goto LAB_072855b0;
          }
          uVar42 = uVar42 - 1;
          piVar43 = piVar43 + 4;
        } while (uVar42 != 0);
      }
      lVar26 = 0;
      puVar27 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
      (*(code *)*puVar27)(0x7e34000,puVar27[1]);
      func_0x03365958(uVar28);
      func_0x03280ca4(0);
      auVar56 = func_0x02f09514();
      puVar47 = PTR_DAT_0785dec8;
      lVar30 = auVar56._8_8_;
      lVar39 = auVar56._0_8_;
      *(undefined8 *)(pcVar16 + -0x70) = 0x72855d4;
      *(ulong *)(pcVar16 + -0x68) = unaff_x25;
      *(undefined **)(pcVar16 + -0x60) = unaff_x24;
      *(undefined8 ********)(pcVar16 + -0x58) = unaff_x23;
      *(long **)(pcVar16 + -0x50) = plVar52;
      *(undefined8 *)(pcVar16 + -0x48) = uVar28;
      *(undefined8 *)(pcVar16 + -0x40) = 0;
      *(undefined8 *)(pcVar16 + -0x38) = 0x7e34000;
      plVar52 = (long *)0x7e34000;
      if ((bRam0000000007e3419b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0785dec8);
        func_0x03280a18(PTR_DAT_0785df00);
        func_0x03280a18(PTR_DAT_0785ded0);
        func_0x03280a18(PTR_DAT_0785ded8);
        func_0x03280a18(PTR_DAT_0774e5a0);
        func_0x03280a18(PTR_DAT_0785df08);
        bRam0000000007e3419b = 1;
      }
      plVar49 = (long *)func_0x03e0c264(lVar30,*(undefined8 *)puVar47);
      puVar7 = PTR_DAT_0785df00;
      puVar32 = PTR_DAT_0785ded8;
      if (((ulong)plVar49 & 1) == 0) {
LAB_07285770:
        if (lVar30 != 0) {
          if (0 < *(int *)(lVar30 + 0x18)) {
            plVar52 = (long *)0x0;
            do {
              puVar33 = (undefined *)func_0x0414419c(lVar30,plVar52,*(undefined8 *)puVar32);
              unaff_x24 = puVar32;
              if (*(long *)(lVar39 + 0x10) == 0) goto LAB_07285808;
              plVar49 = (long *)func_0x041447fc(*(long *)(lVar39 + 0x10),puVar33,
                                                *(undefined8 *)puVar7);
              puVar47 = puVar33;
              if (((ulong)plVar49 & 1) != 0) {
                if ((puVar33 == (undefined *)0x0) ||
                   (lVar54 = *(long *)(puVar33 + 0x18), lVar54 == 0)) goto LAB_07285808;
                plVar49 = (long *)(**(code **)(lVar54 + 0x18))
                                            (*(undefined8 *)(lVar54 + 0x40),lVar26,
                                             *(undefined8 *)(lVar54 + 0x28));
              }
              uVar18 = (int)plVar52 + 1;
              plVar52 = (long *)(ulong)uVar18;
            } while ((int)uVar18 < *(int *)(lVar30 + 0x18));
          }
          return plVar49;
        }
LAB_07285808:
        func_0x03280cac();
        plVar49 = plVar52;
        puVar32 = puVar47;
LAB_0728580c:
        func_0x03280cb4();
      }
      else {
        if (*(int *)(lVar39 + 0x30) != 2) {
          if (*(int *)(lVar39 + 0x30) != 1) goto LAB_07285770;
          uVar28 = func_0x03280a2c(PTR_DAT_0774e5a0);
          lVar30 = func_0x03280afc(uVar28,1);
          func_0x02f0b18c(lVar26);
          uVar28 = func_0x057dadc4(lVar26,0);
          func_0x02f0b18c(lVar30);
          func_0x02f176b4(lVar30,uVar28);
          func_0x02f0965c(lVar30,0,uVar28);
          uVar28 = func_0x03280a2c(PTR_DAT_0785df08);
          lVar26 = func_0x0727df38(uVar28,lVar30);
          uVar28 = func_0x03280a2c(PTR_DAT_0785df10);
          func_0x03280b7c(lVar26,uVar28);
        }
        plVar49 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
        if ((lVar26 == 0) ||
           (puVar32 = (undefined *)func_0x057dadc4(lVar26,0), plVar52 = plVar49,
           plVar49 == (long *)0x0)) goto LAB_07285808;
        if ((puVar32 == (undefined *)0x0) ||
           (lVar54 = func_0x03280b90(puVar32,*(undefined8 *)(*plVar49 + 0x40)), lVar54 != 0)) {
          if ((int)plVar49[3] != 0) {
            plVar49 = plVar49 + 4;
            *plVar49 = (long)puVar32;
            goto SUB_032809c4;
          }
          goto LAB_0728580c;
        }
      }
      uVar28 = func_0x03280cd0();
      auVar56 = func_0x03280b7c(uVar28,0);
      *(undefined8 *)(pcVar16 + -0x80) = 0x728581c;
      lVar54 = *(long *)(auVar56._0_8_ + 0x18);
      if (lVar54 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar49 = (long *)(**(code **)(lVar54 + 0x18))
                                    (*(undefined8 *)(lVar54 + 0x40),auVar56._8_8_,
                                     *(undefined8 *)(lVar54 + 0x28));
        return plVar49;
      }
      param_2 = (undefined8 *******)func_0x03280cac();
      pppppuVar45 = (undefined8 *****)PTR_DAT_0785df18;
      puVar15 = pcVar16 + -0xc0;
      *(undefined8 *)(pcVar16 + -0xc0) = 0x7285840;
      *(undefined **)(pcVar16 + -0xb0) = unaff_x24;
      *(undefined **)(pcVar16 + -0xa8) = puVar32;
      *(long **)(pcVar16 + -0xa0) = plVar49;
      *(long *)(pcVar16 + -0x98) = lVar39;
      *(long *)(pcVar16 + -0x90) = lVar30;
      *(long *)(pcVar16 + -0x88) = lVar26;
      ppppppuVar19 = (undefined8 ******)0x7e34000;
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
      plVar49 = (long *)(ulong)*(byte *)((long)param_2 + 0x34);
      uVar28 = 0x72858f0;
SUB_0727dc78:
      if (((ulong)plVar49 & 1) != 0) {
        return plVar49;
      }
      *(undefined8 *)(puVar15 + -0x10) = uVar28;
      *(undefined8 ******)(puVar15 + -8) = pppppuVar45;
      uVar28 = func_0x03280a2c(PTR_DAT_0785dbe8);
      puVar47 = PTR_DAT_0777c990;
      *(undefined8 *)(puVar15 + -0x30) = 0x727dc94;
      *(undefined8 *******)(puVar15 + -0x28) = ppppppuVar19;
      *(undefined8 ********)(puVar15 + -0x20) = param_2;
      *(undefined8 ******)(puVar15 + -0x18) = pppppuVar45;
      if ((bRam0000000007e34146 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777c990);
        bRam0000000007e34146 = 1;
      }
      plVar49 = (long *)func_0x03280ca0(*(undefined8 *)puVar47);
      func_0x072c77f8(plVar49,uVar28,0);
      return plVar49;
    }
    if (*(char *)(param_1 + 0xd0) != '\0') {
      return (long *)0x0;
    }
    plVar52 = (long *)func_0x03ced81c(param_2,*(undefined8 *)puVar47);
    ppppppuVar48 = *(undefined8 *******)(param_1 + 0x60);
    if (ppppppuVar48 == (undefined8 ******)0x0) goto LAB_063849e8;
    pppppuVar45 = *ppppppuVar48;
    uVar42 = (ulong)*(ushort *)((long)pppppuVar45 + 0x12e);
    if (uVar42 != 0) {
      ppppuVar38 = pppppuVar45[0x16] + 1;
      do {
        if (ppppuVar38[-1] == *(undefined8 ****)PTR_DAT_0777a498) {
          pppppuVar45 = pppppuVar45 + (long)(*(int *)ppppuVar38 + 0x17) * 2 + 0x27;
          goto LAB_063847bc;
        }
        uVar42 = uVar42 - 1;
        ppppuVar38 = ppppuVar38 + 2;
      } while (uVar42 != 0);
    }
    pppppuVar45 = (undefined8 *****)
                  func_0x03256b10(ppppppuVar48,*(undefined8 ****)PTR_DAT_0777a498,0x17);
LAB_063847bc:
    param_3 = pppppuVar45[1];
    ppppppuVar19 = (undefined8 ******)(*(code *)*pppppuVar45)(ppppppuVar48,param_2);
    plVar49 = plVar52;
    if (plVar52 == (long *)0x0) goto LAB_063849e8;
    uVar42 = func_0x069fd714(plVar52,0);
    ppppppuVar48 = ppppppuVar19;
    if ((uVar42 & 1) != 0) {
LAB_06384850:
      if (ppppppuVar19 != (undefined8 ******)0x0) {
        pppppuVar45 = *ppppppuVar19;
        uVar42 = (ulong)*(ushort *)((long)pppppuVar45 + 0x12e);
        if (uVar42 != 0) {
          ppppuVar38 = pppppuVar45[0x16] + 1;
          do {
            if (ppppuVar38[-1] == *(undefined8 ****)PTR_DAT_0777c248) {
              pppppuVar45 = pppppuVar45 + (long)(*(int *)ppppuVar38 + 0x15) * 2 + 0x27;
              goto LAB_063848fc;
            }
            uVar42 = uVar42 - 1;
            ppppuVar38 = ppppuVar38 + 2;
          } while (uVar42 != 0);
        }
        param_3 = (undefined8 ****)0x15;
        pppppuVar45 = (undefined8 *****)func_0x03256b10(ppppppuVar19);
LAB_063848fc:
        uVar42 = (*(code *)*pppppuVar45)(ppppppuVar19,pppppuVar45[1]);
        if ((uVar42 & 1) == 0) {
          return (long *)0x0;
        }
        plVar52 = *(long **)(param_1 + 0xa0);
        ppppppuVar48 = (undefined8 ******)0x0;
        if (plVar52 != (long *)0x0) {
          lVar26 = *plVar52;
          uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar42 != 0) {
            piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777aaa8) {
                puVar27 = (undefined8 *)(lVar26 + (long)(*piVar43 + 0xc) * 0x10 + 0x138);
                goto LAB_0638499c;
              }
              uVar42 = uVar42 - 1;
              piVar43 = piVar43 + 4;
            } while (uVar42 != 0);
          }
          puVar27 = (undefined8 *)func_0x03256b10(plVar52,*(long *)PTR_DAT_0777aaa8,0xc);
LAB_0638499c:
          uVar42 = (*(code *)*puVar27)(plVar52,param_2,puVar27[1]);
          plVar46 = *(long **)(param_1 + 0x28);
          ppppppuVar48 = param_2[6];
          plVar52 = (long *)(uVar42 & 0xffffffff);
          param_2 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
          if ((uVar42 & 1) == 0) {
            param_3 = (undefined8 ****)0xf;
          }
          else {
            param_3 = (undefined8 ****)0x11;
          }
          goto LAB_063846f8;
        }
      }
      goto LAB_063849e8;
    }
    if (ppppppuVar19 == (undefined8 ******)0x0) goto LAB_063849e8;
    pppppuVar45 = *ppppppuVar19;
    uVar42 = (ulong)*(ushort *)((long)pppppuVar45 + 0x12e);
    if (uVar42 != 0) {
      ppppuVar38 = pppppuVar45[0x16] + 1;
      do {
        if (ppppuVar38[-1] == *(undefined8 ****)PTR_DAT_0777c248) {
          pppppuVar45 = pppppuVar45 + (long)(*(int *)ppppuVar38 + 0x15) * 2 + 0x27;
          goto LAB_06384840;
        }
        uVar42 = uVar42 - 1;
        ppppuVar38 = ppppuVar38 + 2;
      } while (uVar42 != 0);
    }
    param_3 = (undefined8 ****)0x15;
    pppppuVar45 = (undefined8 *****)func_0x03256b10(ppppppuVar19);
LAB_06384840:
    uVar42 = (*(code *)*pppppuVar45)(ppppppuVar19,pppppuVar45[1]);
    if ((uVar42 & 1) != 0) goto LAB_06384850;
    lVar26 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e500);
    if (lVar26 != 0) {
      if (*(long *)(lVar26 + 0x30) == 0) goto LAB_063849e8;
      if (0 < *(int *)(*(long *)(lVar26 + 0x30) + 0x18)) {
        plVar46 = *(long **)(param_1 + 0x28);
        ppppppuVar48 = param_2[6];
        param_2 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
        param_3 = (undefined8 ****)0x14;
        goto LAB_063846f8;
      }
    }
    lVar26 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e71a0);
    if (lVar26 != 0) {
      return (long *)0x0;
    }
  }
  lVar26 = auVar56._0_8_;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined8 ********)((long)register0x00000008 + -0x28) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *******)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined8 ********)((long)register0x00000008 + -8) = unaff_x19;
  if ((bRam0000000007e254d6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_077db820);
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_077e71b0);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077db838);
    func_0x03280a18(PTR_DAT_0777a988);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_077e71d0);
    func_0x03280a18(PTR_DAT_077e71d8);
    func_0x03280a18(PTR_DAT_077e71e0);
    func_0x03280a18(PTR_DAT_0777c290);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077e71e8);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e254d6 = 1;
  }
  plVar49 = *(long **)(lVar26 + 0x60);
  if (plVar49 == (long *)0x0) {
    uVar55 = 0x6385288;
    auVar57 = func_0x03280cac();
    uVar28 = 0;
  }
  else {
    lVar39 = *plVar49;
    uVar42 = (ulong)*(ushort *)(lVar39 + 0x12e);
    if (uVar42 != 0) {
      piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
      do {
        if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar27 = (undefined8 *)(lVar39 + (long)(*piVar43 + 0x14) * 0x10 + 0x138);
          goto LAB_06384b74;
        }
        uVar42 = uVar42 - 1;
        piVar43 = piVar43 + 4;
      } while (uVar42 != 0);
    }
    puVar27 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777a498,0x14);
LAB_06384b74:
    param_3 = (undefined8 ****)puVar27[1];
    uVar28 = (*(code *)*puVar27)(plVar49,auVar56._8_8_);
    auVar57._8_8_ = uVar28;
    auVar57._0_8_ = lVar26;
    uVar55 = 0x6384b94;
  }
  uVar29 = auVar57._8_8_;
  lVar39 = auVar57._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar55;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar28;
  *(long *)((long)register0x00000008 + -0x90) = auVar56._8_8_;
  *(long *)((long)register0x00000008 + -0x88) = lVar26;
  if ((bRam0000000007e254d8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e71f0);
    func_0x03280a18(PTR_DAT_077e71f8);
    func_0x03280a18(PTR_DAT_077e7200);
    func_0x03280a18(PTR_DAT_077e7208);
    bRam0000000007e254d8 = 1;
  }
  uVar42 = func_0x06380b60(lVar39);
  if ((((uVar42 & 1) == 0) || (*(long *)(lVar39 + 0xf0) == 0)) ||
     (iVar17 = func_0x04545968(*(long *)(lVar39 + 0xf0),*(undefined8 *)PTR_DAT_077e7208),
     iVar17 == 0)) {
    return (long *)0x0;
  }
  if (*(long *)(lVar39 + 0xe0) != 0) {
    param_3 = *(undefined8 *****)PTR_DAT_077e71f0;
    uVar42 = func_0x04fe2f70(*(long *)(lVar39 + 0xe0),uVar29);
    if ((uVar42 & 1) != 0) {
      if (*(long *)(lVar39 + 0xe0) == 0) goto LAB_06385378;
      param_3 = *(undefined8 *****)PTR_DAT_077e71f8;
      uVar29 = func_0x04fe2cfc(*(long *)(lVar39 + 0xe0),uVar29);
    }
    if (*(long *)(lVar39 + 0xf0) != 0) {
      uVar18 = func_0x04545a88(*(long *)(lVar39 + 0xf0),uVar29,*(undefined8 *)PTR_DAT_077e7200);
      return (long *)(ulong)(uVar18 & 1);
    }
  }
LAB_06385378:
  auVar56 = func_0x03280cac();
  uVar28 = auVar56._8_8_;
  lVar26 = auVar56._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x638537c;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x7e25000;
  *(long *)((long)register0x00000008 + -0xb0) = lVar39;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar29;
  if ((bRam0000000007e254d7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e71f0);
    func_0x03280a18(PTR_DAT_077e71f8);
    func_0x03280a18(PTR_DAT_077e7210);
    bRam0000000007e254d7 = 1;
  }
  if (*(long *)(lVar26 + 0xe0) != 0) {
    param_3 = *(undefined8 *****)PTR_DAT_077e71f0;
    uVar42 = func_0x04fe2f70(*(long *)(lVar26 + 0xe0),uVar28);
    if ((uVar42 & 1) != 0) {
      if (*(long *)(lVar26 + 0xe0) == 0) goto LAB_06385428;
      param_3 = *(undefined8 *****)PTR_DAT_077e71f8;
      uVar28 = func_0x04fe2cfc(*(long *)(lVar26 + 0xe0),uVar28);
    }
    lVar39 = *(long *)(lVar26 + 0xf0);
    if (lVar39 != 0) {
      lVar26 = *(long *)PTR_DAT_077e7210;
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      plVar49 = *(long **)(lVar39 + 0x10);
      if (plVar49 == (long *)0x0) {
        func_0x03280cac();
        return (long *)0x1;
      }
      lVar26 = **(long **)(*(long *)(lVar26 + 0x20) + 0xc0);
      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x0325681c(lVar26);
      }
      lVar39 = *plVar49;
      uVar42 = (ulong)*(ushort *)(lVar39 + 0x12e);
      if (uVar42 != 0) {
        piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
        do {
          if (*(long *)(piVar43 + -2) == lVar26) {
            puVar27 = (undefined8 *)(lVar39 + (long)(*piVar43 + 2) * 0x10 + 0x138);
            goto LAB_04545cd0;
          }
          uVar42 = uVar42 - 1;
          piVar43 = piVar43 + 4;
        } while (uVar42 != 0);
      }
      puVar27 = (undefined8 *)func_0x03256b10(plVar49,lVar26,2);
LAB_04545cd0:
                    /* WARNING: Could not recover jumptable at 0x04545ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar49 = (long *)(*(code *)*puVar27)(plVar49,uVar28,puVar27[1]);
      return plVar49;
    }
  }
LAB_06385428:
  auVar56 = func_0x03280cac();
  plVar49 = auVar56._8_8_;
  lVar39 = auVar56._0_8_;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x140);
  *(undefined **)((long)register0x00000008 + -0x120) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x638542c;
  *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x100) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0xf8) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0xf0) = unaff_x24;
  *(undefined8 ********)((long)register0x00000008 + -0xe8) = unaff_x23;
  *(long **)((long)register0x00000008 + -0xe0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x7e25000;
  *(long *)((long)register0x00000008 + -0xd0) = lVar26;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar28;
  puVar47 = (undefined *)0x7e25000;
  uVar44 = param_4 & 0xffffffff;
  uVar53 = (ulong)param_3 & 0xffffffff;
  ppppuVar36 = param_3;
  uVar42 = param_4;
  ppppuVar38 = param_5;
  ppppuVar50 = param_6;
  if ((bRam0000000007e254dd & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7168);
    func_0x03280a18(PTR_DAT_077e7170);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077e7218);
    func_0x03280a18(PTR_DAT_077d9fb8);
    func_0x03280a18(PTR_DAT_077e7220);
    func_0x03280a18(PTR_DAT_077e7228);
    func_0x03280a18(PTR_DAT_077e7070);
    bRam0000000007e254dd = 1;
  }
  puVar32 = PTR_DAT_077e7070;
  *(int *)((long)register0x00000008 + -0x124) = (int)param_3;
  if ((int)param_4 == 0) {
    if (((*(long *)(lVar39 + 0x40) != 0) &&
        (lVar26 = *(long *)(*(long *)(lVar39 + 0x40) + 0x28), lVar26 != 0)) &&
       (*(long *)(lVar39 + 0x50) != 0)) {
      uVar18 = *(uint *)(lVar26 + 0x18);
      uVar31 = func_0x067675f0(*(long *)(lVar39 + 0x50),0);
      uVar53 = MergeEngine_ECS_Systems_InventorySystem__NumFreeSlots(lVar39);
LAB_063855c8:
      puVar32 = PTR_DAT_077e7218;
      unaff_x26 = uVar31 & 0xffffffff;
      unaff_x25 = (ulong)uVar18;
      uVar53 = uVar53 & 0xffffffff;
      if (plVar49 != (long *)0x0) {
        lVar26 = *plVar49;
        uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar42 != 0) {
          piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07779820) {
              puVar27 = (undefined8 *)(lVar26 + (long)*piVar43 * 0x10 + 0x138);
              goto LAB_06385630;
            }
            uVar42 = uVar42 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar42 != 0);
        }
        puVar27 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_07779820,0);
LAB_06385630:
        (*(code *)*puVar27)(plVar49,puVar27[1]);
        MergeEngine_ECS_Systems_InventorySystem__NumNewProducerSlots(lVar39);
        uVar28 = 0x6385658;
        ppppuVar38 = param_5;
        goto SUB_06385f08;
      }
    }
  }
  else if (*(long *)(lVar39 + 0x48) != 0) {
    lVar26 = *(long *)(*(long *)(lVar39 + 0x48) + 0x30);
    unaff_x26 = 0;
    if (lVar26 != 0) {
      uVar18 = *(uint *)(lVar26 + 0x18);
      lVar30 = *(long *)PTR_DAT_077e7070;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar30 = *(long *)puVar32;
      }
      unaff_x29 = PTR_DAT_077e7168;
      lVar54 = *(long *)(*(long *)(lVar30 + 0xb8) + 0x20);
      if (lVar54 == 0) {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar30 = *(long *)puVar32;
        }
        uVar28 = **(undefined8 **)(lVar30 + 0xb8);
        lVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7170);
        func_0x05355fbc(lVar26,uVar28,*(undefined8 *)PTR_DAT_077e7228,0);
        plVar49 = (long *)(*(long *)(*(long *)puVar32 + 0xb8) + 0x20);
        *plVar49 = lVar26;
        goto SUB_032809c4;
      }
      ppppuVar36 = *(undefined8 *****)PTR_DAT_077e7168;
      uVar31 = func_0x03d3bb0c(lVar26,lVar54);
      uVar53 = MergeEngine_ECS_Systems_InventorySystem__NumFreeProducerSlots(lVar39);
      puVar47 = puVar32;
      goto LAB_063855c8;
    }
  }
  plVar49 = (long *)func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0x63856d0;
  lVar26 = plVar49[8];
  if (lVar26 != 0) {
    if (*(char *)(lVar26 + 0x30) == '\0') {
      *(undefined1 *)(lVar26 + 0x30) = 1;
    }
    return plVar49;
  }
  lVar26 = func_0x03280cac();
  puVar7 = PTR_DAT_077cc918;
  puVar32 = PTR_DAT_077cc910;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x1c0);
  *(undefined **)((long)register0x00000008 + -0x1b0) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0x63856f8;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x198) = uVar53;
  *(ulong *)((long)register0x00000008 + -400) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x188) = unaff_x25;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x180) = auVar56;
  *(undefined8 *****)((long)register0x00000008 + -0x170) = param_6;
  *(undefined8 *****)((long)register0x00000008 + -0x168) = param_5;
  *(undefined **)((long)register0x00000008 + -0x160) = puVar47;
  *(ulong *)((long)register0x00000008 + -0x158) = uVar44;
  param_6 = ppppuVar50;
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
    param_6 = ppppuVar50;
  }
  plVar52 = (long *)func_0x03280ca0(*(undefined8 *)puVar32);
  func_0x04143c38(plVar52,*(undefined8 *)puVar7);
  puVar33 = PTR_DAT_077e7118;
  puVar7 = PTR_DAT_077d9fe8;
  puVar32 = PTR_DAT_0777e4a8;
  puVar47 = PTR_DAT_07750da0;
  lVar39 = *(long *)(lVar26 + 0x40);
  if (lVar39 == 0) {
    return plVar52;
  }
  uVar53 = 0;
  ppppuVar50 = (undefined8 ****)0x0;
  ppppuVar51 = (undefined8 ****)0x0;
  while (lVar39 != 0) {
    unaff_x29 = *(undefined **)(lVar39 + 0x28);
    if (unaff_x29 == (undefined *)0x0) {
      return plVar52;
    }
    if (unaff_x29 == (undefined *)0x0) break;
    uVar2 = *(undefined4 *)(unaff_x29 + 0x18);
    ppppuVar36 = *(undefined8 *****)puVar47;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
    func_0x0437b6e0((undefined1 *)((long)register0x00000008 + -0x1b8),uVar2);
    if (*(char *)((long)register0x00000008 + -0x1b8) == '\0') {
      return plVar52;
    }
    if (*(int *)((long)register0x00000008 + -0x1b4) <= (int)uVar53) {
      return plVar52;
    }
    if ((*(long *)(lVar26 + 0x40) == 0) ||
       (lVar30 = *(long *)(*(long *)(lVar26 + 0x40) + 0x28), lVar30 == 0)) break;
    ppppuVar36 = *(undefined8 *****)puVar7;
    lVar30 = func_0x0414419c(lVar30,ppppuVar51);
    uVar18 = (uint)ppppuVar51;
    if (lVar30 != 0) {
      if (uVar18 == (uint)ppppuVar50) {
        ppppuVar50 = (undefined8 ****)(ulong)((uint)ppppuVar50 + 1);
        goto LAB_06385940;
      }
      if ((*(long *)(lVar26 + 0x40) == 0) ||
         (uVar53 = *(ulong *)(*(long *)(lVar26 + 0x40) + 0x28), uVar53 == 0)) break;
      ppppuVar36 = (undefined8 ****)func_0x0414419c(uVar53,ppppuVar51,*(undefined8 *)puVar7);
      uVar42 = *(ulong *)puVar33;
      func_0x041441f0(uVar53,ppppuVar50);
      if ((*(long *)(lVar26 + 0x40) == 0) ||
         (lVar30 = *(long *)(*(long *)(lVar26 + 0x40) + 0x28), lVar30 == 0)) break;
      uVar42 = *(ulong *)puVar33;
      ppppuVar36 = (undefined8 ****)0x0;
      func_0x041441f0(lVar30,ppppuVar51);
      if ((*(long *)(lVar26 + 0x40) == 0) ||
         (lVar30 = *(long *)(*(long *)(lVar26 + 0x40) + 0x28), lVar30 == 0)) break;
      uVar28 = func_0x0414419c(lVar30,ppppuVar50,*(undefined8 *)puVar7);
      auVar58._8_8_ = uVar28;
      auVar58._0_8_ = lVar26;
      uVar28 = 0x63858e0;
      ppppuVar38 = ppppuVar50;
      param_6 = ppppuVar51;
      goto SUB_06385d7c;
    }
LAB_06385940:
    lVar39 = *(long *)(lVar26 + 0x40);
    uVar3 = uVar18;
    if (lVar39 != 0) {
      uVar3 = uVar18 + 1;
    }
    uVar53 = (ulong)uVar3;
    ppppuVar51 = (undefined8 ****)(ulong)(uVar18 + 1);
    if (lVar39 == 0) {
      return plVar52;
    }
  }
  auVar56 = func_0x03280cac();
  lVar30 = auVar56._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x6385988;
  *(undefined8 *****)((long)register0x00000008 + -0x1d8) = ppppuVar50;
  *(long **)((long)register0x00000008 + -0x1d0) = plVar52;
  *(long *)((long)register0x00000008 + -0x1c8) = lVar26;
  ppppuVar50 = ppppuVar36;
  if ((bRam0000000007e254da & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5a0);
    func_0x03280a18(PTR_DAT_077e7230);
    bRam0000000007e254da = 1;
    ppppuVar50 = ppppuVar36;
  }
  if ((lVar30 != 0) &&
     (lVar26 = func_0x03d20d84(lVar30,*(undefined8 *)PTR_DAT_0777e5a0), lVar26 != 0)) {
    *(undefined2 *)(lVar26 + 0x71) = 0x101;
    lVar54 = *(long *)(auVar56._0_8_ + 0x120);
    if (lVar54 != 0) {
      lVar40 = *(long *)(lVar54 + 0x10);
      lVar21 = *(long *)PTR_DAT_077e7230;
      *(int *)(lVar54 + 0x1c) = *(int *)(lVar54 + 0x1c) + 1;
      if (lVar40 != 0) {
        uVar18 = *(uint *)(lVar54 + 0x18);
        if (uVar18 < *(uint *)(lVar40 + 0x18)) {
          *(uint *)(lVar54 + 0x18) = uVar18 + 1;
          plVar49 = (long *)(lVar40 + (long)(int)uVar18 * 8 + 0x20);
          *plVar49 = lVar26;
        }
        else {
          lVar39 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)((long)register0x00000008 + -0x1f0) =
               *(undefined8 *)((long)register0x00000008 + -0x1e0);
          *(undefined8 *****)((long)register0x00000008 + -0x1e0) = ppppuVar51;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) =
               *(undefined8 *)((long)register0x00000008 + -0x1d8);
          *(undefined8 *)((long)register0x00000008 + -0x1d0) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          *(undefined8 *)((long)register0x00000008 + -0x1c8) =
               *(undefined8 *)((long)register0x00000008 + -0x1c8);
          uVar3 = *(uint *)(lVar54 + 0x18);
          uVar18 = uVar3 + 1;
          lVar39 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x78);
          func_0x04144aa0(lVar54,(ulong)uVar18);
          lVar30 = *(long *)(lVar54 + 0x10);
          *(uint *)(lVar54 + 0x18) = uVar18;
          if (lVar30 == 0) {
            func_0x03280cac();
          }
          else if (uVar3 < *(uint *)(lVar30 + 0x18)) {
            plVar49 = (long *)(lVar30 + (long)(int)uVar3 * 8 + 0x20);
            *plVar49 = lVar26;
            goto SUB_032809c4;
          }
          auVar56 = func_0x03280cb4();
          lVar40 = auVar56._8_8_;
          lVar30 = auVar56._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x220) = 0x41444d8;
          *(long *)((long)register0x00000008 + -0x210) = (long)(int)uVar3;
          *(ulong *)((long)register0x00000008 + -0x208) = (ulong)uVar18;
          *(long *)((long)register0x00000008 + -0x200) = lVar54;
          *(long *)((long)register0x00000008 + -0x1f8) = lVar26;
          lVar54 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x58);
          func_0x03ec2768(lVar40,0x14);
          lVar26 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
            lVar26 = func_0x0325681c(lVar26);
          }
          if (lVar40 == 0) {
LAB_0414454c:
            lVar21 = 0;
          }
          else {
            lVar21 = func_0x03280b90(lVar40,lVar26);
            if (lVar21 == 0) {
              func_0x03281048(lVar40,lVar26);
              goto LAB_0414454c;
            }
          }
          lVar26 = *(long *)(lVar30 + 0x10);
          lVar41 = *(long *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x80);
          *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
          if (lVar26 == 0) {
            auVar59 = func_0x03280cac();
            uVar28 = auVar59._0_8_;
            if (auVar59._8_4_ == 1) {
              puVar27 = (undefined8 *)func_0x072ce910(uVar28);
              uVar28 = func_0x03280a2c(PTR_DAT_077542c0);
              uVar42 = func_0x032810d8(uVar28,*(undefined8 *)*puVar27);
              if ((uVar42 & 1) != 0) {
                func_0x072ce920();
                uVar28 = *(undefined8 *)(*(long *)(*(long *)(lVar39 + 0x20) + 0xc0) + 0x68);
                lVar26 = func_0x03280a2c(PTR_DAT_0774e558);
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar28 = func_0x057a51c4(uVar28,0);
                func_0x057b7b18(lVar40,uVar28,0);
                goto LAB_041445ac;
              }
              puVar22 = (undefined8 *)func_0x072ce930(8);
              *puVar22 = *puVar27;
              lVar54 = 0;
              uVar28 = func_0x072ce940(puVar22,&
                                               PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28
                                      );
              func_0x072ce920();
            }
            func_0x03365958(uVar28);
            auVar56 = func_0x02f09514();
            plVar20 = auVar56._8_8_;
            plVar52 = auVar56._0_8_;
            uVar18 = *(uint *)(plVar52 + 3);
            lVar26 = *(long *)(*(long *)(*(long *)(lVar54 + 0x20) + 0xc0) + 0x90);
            uVar42 = (ulong)uVar18;
            *(undefined8 *)((long)register0x00000008 + -0x260) = 0x4144678;
            *(undefined **)((long)register0x00000008 + -600) = puVar7;
            *(undefined **)((long)register0x00000008 + -0x250) = puVar47;
            *(ulong *)((long)register0x00000008 + -0x248) = uVar53;
            *(undefined8 *)((long)register0x00000008 + -0x240) = uVar28;
            *(long *)((long)register0x00000008 + -0x238) = lVar39;
            *(long *)((long)register0x00000008 + -0x230) = lVar40;
            *(long *)((long)register0x00000008 + -0x228) = lVar30;
            plVar46 = (long *)0x7e18000;
            plVar49 = plVar20;
            if ((bRam0000000007e18233 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e8c8);
              func_0x03280a18(PTR_DAT_0774e8e0);
              bRam0000000007e18233 = 1;
            }
            if (plVar20 == (long *)0x0) {
              func_0x057a867c(6,0);
            }
            if (*(uint *)(plVar52 + 3) < uVar18) {
              func_0x057b8434(0);
            }
            lVar39 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x28);
            if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
              lVar39 = func_0x0325681c(lVar39);
            }
            plVar23 = (long *)func_0x03280b90(plVar20,lVar39);
            if (plVar23 == (long *)0x0) {
              if ((int)uVar18 < (int)plVar52[3]) {
                if (plVar20 == (long *)0x0) {
                  func_0x03280cac();
                }
                else {
                  lVar39 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x20);
                  if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
                    lVar39 = func_0x0325681c(lVar39);
                  }
                  lVar30 = *plVar20;
                  uVar53 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar53 != 0) {
                    piVar43 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar43 + -2) == lVar39) {
                        puVar27 = (undefined8 *)(lVar30 + (long)*piVar43 * 0x10 + 0x138);
                        goto LAB_04145868;
                      }
                      uVar53 = uVar53 - 1;
                      piVar43 = piVar43 + 4;
                    } while (uVar53 != 0);
                  }
                  plVar49 = (long *)0x0;
                  puVar27 = (undefined8 *)func_0x03256b10(plVar20);
LAB_04145868:
                  plVar46 = (long *)(*(code *)*puVar27)(plVar20,puVar27[1]);
                  puVar47 = PTR_DAT_0774e8e0;
                  if (plVar46 != (long *)0x0) {
                    do {
                      lVar39 = *plVar46;
                      uVar53 = (ulong)*(ushort *)(lVar39 + 0x12e);
                      if (uVar53 != 0) {
                        piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar43 + -2) == *(long *)puVar47) {
                            puVar27 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
                            goto LAB_041458d0;
                          }
                          uVar53 = uVar53 - 1;
                          piVar43 = piVar43 + 4;
                        } while (uVar53 != 0);
                      }
                      plVar49 = (long *)0x0;
                      puVar27 = (undefined8 *)func_0x03256b10(plVar46);
LAB_041458d0:
                      plVar24 = (long *)(*(code *)*puVar27)(plVar46,puVar27[1]);
                      if (((ulong)plVar24 & 1) == 0) {
                        uVar42 = 0;
                        iVar17 = 5;
                        if (plVar46 == (long *)0x0) goto LAB_041459e8;
                        goto LAB_04145988;
                      }
                      lVar39 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x148);
                      if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
                        lVar39 = func_0x0325681c(lVar39);
                      }
                      lVar30 = *plVar46;
                      uVar53 = (ulong)*(ushort *)(lVar30 + 0x12e);
                      if (uVar53 != 0) {
                        piVar43 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar43 + -2) == lVar39) {
                            puVar27 = (undefined8 *)(lVar30 + (long)*piVar43 * 0x10 + 0x138);
                            goto LAB_04145948;
                          }
                          uVar53 = uVar53 - 1;
                          piVar43 = piVar43 + 4;
                        } while (uVar53 != 0);
                      }
                      puVar27 = (undefined8 *)func_0x03256b10(plVar46,lVar39,0);
LAB_04145948:
                      plVar49 = (long *)(*(code *)*puVar27)(plVar46,puVar27[1]);
                      func_0x04145380(plVar52,uVar42,plVar49,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x160));
                      uVar42 = (ulong)((int)uVar42 + 1);
                    } while( true );
                  }
                }
                func_0x03280cac();
                do {
                  auVar59 = func_0x03280ca4(uVar42);
                  if (auVar59._8_4_ != 1) {
                    if (plVar46 == (long *)0x0) goto LAB_04145ae0;
                    lVar39 = *plVar46;
                    uVar42 = (ulong)*(ushort *)(lVar39 + 0x12e);
                    if (uVar42 == 0) goto LAB_04145ab8;
                    piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
                    goto LAB_04145aa0;
                  }
                  puVar25 = (ulong *)func_0x072ce910(auVar59._0_8_);
                  uVar42 = *puVar25;
                  plVar24 = (long *)func_0x072ce920();
                  iVar17 = 0;
                  if (plVar46 != (long *)0x0) {
LAB_04145988:
                    lVar39 = *plVar46;
                    uVar53 = (ulong)*(ushort *)(lVar39 + 0x12e);
                    if (uVar53 != 0) {
                      piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0774e8c8) {
                          puVar27 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
                          goto LAB_041459dc;
                        }
                        uVar53 = uVar53 - 1;
                        piVar43 = piVar43 + 4;
                      } while (uVar53 != 0);
                    }
                    plVar49 = (long *)0x0;
                    puVar27 = (undefined8 *)func_0x03256b10(plVar46);
LAB_041459dc:
                    plVar24 = (long *)(*(code *)*puVar27)(plVar46,puVar27[1]);
                  }
LAB_041459e8:
                } while (uVar42 != 0);
                if (iVar17 == 5) goto LAB_04145a10;
                if (iVar17 != 0) {
                  return plVar24;
                }
              }
              plVar24 = (long *)func_0x041462cc(plVar52,plVar20,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x40)
                                               );
            }
            else {
              lVar39 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x28);
              if ((*(byte *)(lVar39 + 0x135) & 1) == 0) {
                lVar39 = func_0x0325681c(lVar39);
              }
              lVar30 = *plVar23;
              uVar42 = (ulong)*(ushort *)(lVar30 + 0x12e);
              if (uVar42 != 0) {
                piVar43 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar43 + -2) == lVar39) {
                    puVar27 = (undefined8 *)(lVar30 + (long)*piVar43 * 0x10 + 0x138);
                    goto LAB_04145728;
                  }
                  uVar42 = uVar42 - 1;
                  piVar43 = piVar43 + 4;
                } while (uVar42 != 0);
              }
              puVar27 = (undefined8 *)func_0x03256b10(plVar23,lVar39,0);
LAB_04145728:
              plVar24 = (long *)(*(code *)*puVar27)(plVar23,puVar27[1]);
              iVar17 = (int)plVar24;
              if (0 < iVar17) {
                func_0x04144aa0(plVar52,(int)plVar52[3] + iVar17,
                                *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x78));
                iVar6 = (int)plVar52[3] - uVar18;
                if (iVar6 != 0 && (int)uVar18 <= (int)plVar52[3]) {
                  func_0x057b9f30(plVar52[2],uVar18,plVar52[2],iVar17 + uVar18,iVar6,0);
                }
                if (plVar52 == plVar23) {
                  func_0x057b9f30(plVar52[2],0,plVar52[2],uVar18,uVar18,0);
                  plVar24 = (long *)func_0x057b9f30(plVar52[2],iVar17 + uVar18,plVar52[2],
                                                    uVar18 << 1,(int)plVar52[3] - uVar18,0);
                }
                else {
                  lVar39 = plVar52[2];
                  lVar26 = *(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x28);
                  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                    lVar26 = func_0x0325681c(lVar26);
                  }
                  lVar30 = *plVar23;
                  uVar42 = (ulong)*(ushort *)(lVar30 + 0x12e);
                  if (uVar42 != 0) {
                    piVar43 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar43 + -2) == lVar26) {
                        puVar27 = (undefined8 *)(lVar30 + (long)(*piVar43 + 5) * 0x10 + 0x138);
                        goto LAB_04145838;
                      }
                      uVar42 = uVar42 - 1;
                      piVar43 = piVar43 + 4;
                    } while (uVar42 != 0);
                  }
                  puVar27 = (undefined8 *)func_0x03256b10(plVar23,lVar26,5);
LAB_04145838:
                  plVar24 = (long *)(*(code *)*puVar27)(plVar23,lVar39,uVar18,puVar27[1]);
                }
                *(int *)(plVar52 + 3) = (int)plVar52[3] + iVar17;
              }
            }
LAB_04145a10:
            *(int *)((long)plVar52 + 0x1c) = *(int *)((long)plVar52 + 0x1c) + 1;
            return plVar24;
          }
          uVar18 = *(uint *)(lVar30 + 0x18);
          if (*(uint *)(lVar26 + 0x18) <= uVar18) {
            func_0x0414446c(lVar30,lVar21,
                            *(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70));
LAB_041445ac:
            return (long *)(ulong)(*(int *)(lVar30 + 0x18) - 1);
          }
          *(uint *)(lVar30 + 0x18) = uVar18 + 1;
          plVar49 = (long *)(lVar26 + (long)(int)uVar18 * 8 + 0x20);
          *plVar49 = lVar21;
        }
        goto SUB_032809c4;
      }
    }
  }
  auVar57 = func_0x03280cac();
  plVar49 = auVar57._8_8_;
  lVar26 = auVar57._0_8_;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x260);
  *(undefined **)((long)register0x00000008 + -0x240) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x238) = 0x6385a60;
  *(long *)((long)register0x00000008 + -0x230) = lVar39;
  *(undefined **)((long)register0x00000008 + -0x228) = puVar32;
  *(undefined **)((long)register0x00000008 + -0x220) = puVar33;
  *(undefined **)((long)register0x00000008 + -0x218) = puVar7;
  *(undefined **)((long)register0x00000008 + -0x210) = puVar47;
  *(ulong *)((long)register0x00000008 + -0x208) = uVar53;
  *(undefined8 *****)((long)register0x00000008 + -0x200) = ppppuVar51;
  *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0x7e25000;
  *(long *)((long)register0x00000008 + -0x1f0) = lVar30;
  *(long *)((long)register0x00000008 + -0x1e8) = auVar56._0_8_;
  plVar52 = (long *)0x7e25000;
  uVar44 = uVar42 & 0xffffffff;
  uVar2 = SUB84(ppppuVar50,0);
  if ((bRam0000000007e254de & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7168);
    func_0x03280a18(PTR_DAT_077e7170);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077e7238);
    func_0x03280a18(PTR_DAT_077d9fb8);
    func_0x03280a18(PTR_DAT_077e7240);
    func_0x03280a18(PTR_DAT_077e7248);
    func_0x03280a18(PTR_DAT_077e7070);
    bRam0000000007e254de = 1;
  }
  puVar47 = PTR_DAT_077e7070;
  *(undefined4 *)((long)register0x00000008 + -0x244) = uVar2;
  if ((int)uVar42 == 0) {
    if (((*(long *)(lVar26 + 0x40) != 0) && (*(long *)(*(long *)(lVar26 + 0x40) + 0x28) != 0)) &&
       (*(long *)(lVar26 + 0x50) != 0)) {
      func_0x067675f0(*(long *)(lVar26 + 0x50),0);
      MergeEngine_ECS_Systems_InventorySystem__NumFreeSlots(lVar26);
      goto LAB_06385bfc;
    }
  }
  else if ((*(long *)(lVar26 + 0x48) != 0) &&
          (lVar39 = *(long *)(*(long *)(lVar26 + 0x48) + 0x30), lVar39 != 0)) {
    lVar30 = *(long *)PTR_DAT_077e7070;
    if (*(int *)(lVar30 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar30 = *(long *)puVar47;
    }
    lVar54 = *(long *)(*(long *)(lVar30 + 0xb8) + 0x28);
    if (lVar54 == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar30 = *(long *)puVar47;
      }
      uVar28 = **(undefined8 **)(lVar30 + 0xb8);
      lVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7170);
      func_0x05355fbc(lVar26,uVar28,*(undefined8 *)PTR_DAT_077e7248,0);
      plVar49 = (long *)(*(long *)(*(long *)puVar47 + 0xb8) + 0x28);
      *plVar49 = lVar26;
      goto SUB_032809c4;
    }
    ppppuVar50 = *(undefined8 *****)PTR_DAT_077e7168;
    func_0x03d3bb0c(lVar39,lVar54);
    MergeEngine_ECS_Systems_InventorySystem__NumFreeProducerSlots(lVar26);
    plVar52 = (long *)puVar47;
LAB_06385bfc:
    if (*(long *)(lVar26 + 0x118) != 0) {
      ppppuVar50 = (undefined8 ****)0x0;
      func_0x069f80fc(*(long *)(lVar26 + 0x118),plVar49);
      puVar32 = PTR_DAT_077e7238;
      if (plVar49 != (long *)0x0) {
        lVar39 = *plVar49;
        uVar42 = (ulong)*(ushort *)(lVar39 + 0x12e);
        if (uVar42 != 0) {
          piVar43 = (int *)(*(long *)(lVar39 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_07779820) {
              puVar27 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
              goto LAB_06385c78;
            }
            uVar42 = uVar42 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar42 != 0);
        }
        puVar27 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_07779820,0);
LAB_06385c78:
        (*(code *)*puVar27)(plVar49,puVar27[1]);
        MergeEngine_ECS_Systems_InventorySystem__NumNewProducerSlots(lVar26);
        uVar28 = 0x6385ca0;
        goto SUB_06385f08;
      }
    }
  }
  auVar56 = func_0x03280cac();
  plVar49 = auVar56._8_8_;
  lVar26 = auVar56._0_8_;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x280);
  *(undefined8 *)((long)register0x00000008 + -0x280) = 0x6385d18;
  *(long **)((long)register0x00000008 + -0x270) = plVar52;
  *(ulong *)((long)register0x00000008 + -0x268) = uVar44;
  if (*(long *)(lVar26 + 0xc0) != 0) {
    plVar52 = (long *)func_0x06888e70(*(long *)(lVar26 + 0xc0),0);
    if (((ulong)plVar52 & 1) == 0) {
      return plVar52;
    }
    plVar52 = plVar49;
    if ((plVar49 != (long *)0x0) && (*(long *)(lVar26 + 0xb8) != 0)) {
      ppppuVar50 = (undefined8 ****)0x0;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SelectItem
                (*(long *)(lVar26 + 0xb8),plVar49[6]);
      lVar39 = *(long *)(lVar26 + 0xc0);
      if (lVar39 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x280) =
             *(undefined8 *)((long)register0x00000008 + -0x280);
        *(undefined8 *)((long)register0x00000008 + -0x270) =
             *(undefined8 *)((long)register0x00000008 + -0x270);
        *(undefined8 *)((long)register0x00000008 + -0x268) =
             *(undefined8 *)((long)register0x00000008 + -0x268);
        if ((bRam0000000007e28d2f & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774f158,0);
          bRam0000000007e28d2f = 1;
        }
        plVar49 = (long *)(lVar39 + 0x58);
        plVar52 = (long *)func_0x055f7aac(*plVar49,0);
        if (((ulong)plVar52 & 1) != 0) {
          return plVar52;
        }
        *plVar49 = *(long *)PTR_DAT_0774f158;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar25 = (ulong *)(((ulong)plVar49 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar25,0x10);
            if (bVar5) {
              *puVar25 = *puVar25 | 1L << ((ulong)plVar49 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return plVar49;
      }
    }
  }
  uVar28 = 0x6385d7c;
  auVar58 = func_0x03280cac();
SUB_06385d7c:
  puVar32 = auVar58._8_8_;
  uVar44 = auVar58._0_8_;
  puVar13 = puVar14 + -0x30;
  *(undefined8 *)(puVar14 + -0x30) = uVar28;
  *(undefined8 *****)(puVar14 + -0x20) = param_6;
  *(undefined8 *****)(puVar14 + -0x18) = ppppuVar38;
  *(long **)(puVar14 + -0x10) = plVar52;
  *(long *)(puVar14 + -8) = lVar26;
  ppppuVar38 = (undefined8 ****)((ulong)ppppuVar50 & 0xffffffff);
  param_6 = ppppuVar50;
  if ((bRam0000000007e254dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e254dc = 1;
  }
  if ((puVar32 != (undefined *)0x0) &&
     (puVar47 = (undefined *)func_0x03d20d84(puVar32,*(undefined8 *)PTR_DAT_0777a928),
     puVar47 != (undefined *)0x0)) {
    *(int *)(puVar47 + 0x28) = (int)ppppuVar50;
    plVar49 = *(long **)(uVar44 + 0x60);
    ppppuVar38 = (undefined8 ****)0x0;
    puVar32 = puVar47;
    if (plVar49 != (long *)0x0) {
      lVar26 = *plVar49;
      uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar42 != 0) {
        piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar27 = (undefined8 *)(lVar26 + (long)(*piVar43 + 0x14) * 0x10 + 0x138);
            goto LAB_06385e5c;
          }
          uVar42 = uVar42 - 1;
          piVar43 = piVar43 + 4;
        } while (uVar42 != 0);
      }
      puVar27 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777a498,0x14);
LAB_06385e5c:
      param_6 = (undefined8 ****)puVar27[1];
      uVar28 = (*(code *)*puVar27)(plVar49,puVar47);
      plVar49 = *(long **)(uVar44 + 0x88);
      ppppuVar38 = (undefined8 ****)0x0;
      if (plVar49 != (long *)0x0) {
        lVar26 = *plVar49;
        uVar55 = *(undefined8 *)(puVar47 + 0x10);
        uVar42 = (ulong)*(ushort *)(lVar26 + 0x12e);
        uVar29 = *(undefined8 *)PTR_DAT_07778fa0;
        if (uVar42 != 0) {
          piVar43 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0777e4a0) {
              puVar27 = (undefined8 *)(lVar26 + (long)*piVar43 * 0x10 + 0x138);
              goto LAB_06385edc;
            }
            uVar42 = uVar42 - 1;
            piVar43 = piVar43 + 4;
          } while (uVar42 != 0);
        }
        puVar27 = (undefined8 *)func_0x03256b10(plVar49,*(long *)PTR_DAT_0777e4a0,0);
LAB_06385edc:
                    /* WARNING: Could not recover jumptable at 0x06385f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar49 = (long *)(*(code *)*puVar27)(plVar49,uVar29,uVar28,uVar55,0,puVar27[1]);
        return plVar49;
      }
    }
  }
  uVar28 = 0x6385f08;
  func_0x03280cac();
  plVar49 = extraout_x1;
SUB_06385f08:
  *(undefined8 *)(puVar13 + -0x20) = uVar28;
  *(undefined8 *****)(puVar13 + -0x18) = ppppuVar38;
  *(undefined **)(puVar13 + -0x10) = puVar32;
  *(ulong *)(puVar13 + -8) = uVar44;
  if ((bRam0000000007e254df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a948);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e254df = 1;
  }
  uVar42 = func_0x06b1d910(plVar49,0);
  if (((((uVar42 & 1) == 0) && (uVar42 = func_0x06b1d9c4(plVar49,0), (uVar42 & 1) == 0)) ||
      (param_6 == (undefined8 ****)0x0)) ||
     (lVar26 = func_0x03d20d84(param_6,*(undefined8 *)PTR_DAT_0777a948), lVar26 == 0)) {
    plVar49 = (long *)0x0;
    *(undefined8 *)(puVar13 + -0x28) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar26 + 0x28);
    *(undefined8 *)(puVar13 + -0x28) = 0;
    func_0x0437b6e0(puVar13 + -0x28,uVar2,*(undefined8 *)PTR_DAT_07750da0);
    plVar49 = *(long **)(puVar13 + -0x28);
  }
  return plVar49;
  while( true ) {
    uVar42 = uVar42 - 1;
    piVar43 = piVar43 + 4;
    if (uVar42 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar43 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar27 = (undefined8 *)(lVar39 + (long)*piVar43 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar49 = (long *)0x0;
  puVar27 = (undefined8 *)func_0x03256b10(plVar46);
LAB_04145ad4:
  (*(code *)*puVar27)(plVar46,puVar27[1]);
LAB_04145ae0:
  func_0x03365958(auVar59._0_8_);
  func_0x03280ca4(0);
  auVar56 = func_0x02f09514();
  lVar39 = auVar56._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x280) = 0x4145af8;
  *(long *)((long)register0x00000008 + -0x270) = lVar26;
  *(long **)((long)register0x00000008 + -0x268) = plVar52;
  uVar18 = func_0x03f898d4(*(undefined8 *)(lVar39 + 0x10),auVar56._8_8_,0,
                           *(undefined4 *)(lVar39 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar49[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar18) {
    func_0x04145da4(lVar39,uVar18);
  }
  return (long *)(ulong)(~uVar18 >> 0x1f);
}

