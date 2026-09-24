/* Ghidra 12.1.2 native pseudocode; RVA 0x6286B48; MergeEngine.ECS.Systems.InventorySystem.RemoveInventoryItem; status ok */

/* WARNING: Possible PIC construction at 0x06386e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06382078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x063822a0: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x063828cc: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x063822a4) */
/* WARNING: Removing unreachable block (ram,0x06386e64) */
/* WARNING: Removing unreachable block (ram,0x06386e84) */
/* WARNING: Removing unreachable block (ram,0x06386e6c) */
/* WARNING: Removing unreachable block (ram,0x06381ce4) */
/* WARNING: Removing unreachable block (ram,0x06381cfc) */
/* WARNING: Removing unreachable block (ram,0x06381d40) */
/* WARNING: Removing unreachable block (ram,0x06381d88) */
/* WARNING: Removing unreachable block (ram,0x06381d9c) */
/* WARNING: Removing unreachable block (ram,0x06381da0) */
/* WARNING: Removing unreachable block (ram,0x0556c434) */
/* WARNING: Removing unreachable block (ram,0x0556c474) */
/* WARNING: Removing unreachable block (ram,0x0556c494) */
/* WARNING: Removing unreachable block (ram,0x0556c4a0) */
/* WARNING: Removing unreachable block (ram,0x0556c4a4) */
/* WARNING: Removing unreachable block (ram,0x0556c4b0) */
/* WARNING: Removing unreachable block (ram,0x0556c4c4) */
/* WARNING: Removing unreachable block (ram,0x0556c4d0) */
/* WARNING: Removing unreachable block (ram,0x0556c4d8) */
/* WARNING: Removing unreachable block (ram,0x0556c4e4) */
/* WARNING: Removing unreachable block (ram,0x0556c4ec) */
/* WARNING: Removing unreachable block (ram,0x0556c4f8) */
/* WARNING: Removing unreachable block (ram,0x0556c548) */
/* WARNING: Removing unreachable block (ram,0x0556c500) */
/* WARNING: Removing unreachable block (ram,0x0556c518) */
/* WARNING: Removing unreachable block (ram,0x0556c520) */
/* WARNING: Removing unreachable block (ram,0x0556c560) */
/* WARNING: Removing unreachable block (ram,0x0556c52c) */
/* WARNING: Removing unreachable block (ram,0x0556c538) */
/* WARNING: Removing unreachable block (ram,0x0556c570) */
/* WARNING: Removing unreachable block (ram,0x06381d48) */
/* WARNING: Removing unreachable block (ram,0x06381de8) */
/* WARNING: Removing unreachable block (ram,0x06381d78) */
/* WARNING: Removing unreachable block (ram,0x06381e90) */
/* WARNING: Removing unreachable block (ram,0x06381edc) */
/* WARNING: Removing unreachable block (ram,0x06381f8c) */
/* WARNING: Removing unreachable block (ram,0x06382000) */
/* WARNING: Removing unreachable block (ram,0x0638200c) */
/* WARNING: Removing unreachable block (ram,0x072cdd3c) */
/* WARNING: Removing unreachable block (ram,0x0638201c) */
/* WARNING: Removing unreachable block (ram,0x0638207c) */
/* WARNING: Removing unreachable block (ram,0x06382090) */
/* WARNING: Removing unreachable block (ram,0x063820ac) */
/* WARNING: Removing unreachable block (ram,0x063820b4) */
/* WARNING: Removing unreachable block (ram,0x063820dc) */
/* WARNING: Removing unreachable block (ram,0x063820c0) */
/* WARNING: Removing unreachable block (ram,0x063820cc) */
/* WARNING: Removing unreachable block (ram,0x063820e8) */
/* WARNING: Removing unreachable block (ram,0x06382104) */
/* WARNING: Removing unreachable block (ram,0x06382124) */
/* WARNING: Removing unreachable block (ram,0x06382134) */
/* WARNING: Removing unreachable block (ram,0x0638213c) */
/* WARNING: Removing unreachable block (ram,0x06382164) */
/* WARNING: Removing unreachable block (ram,0x06382148) */
/* WARNING: Removing unreachable block (ram,0x06382154) */
/* WARNING: Removing unreachable block (ram,0x06382170) */
/* WARNING: Removing unreachable block (ram,0x063822c0) */
/* WARNING: Removing unreachable block (ram,0x06382180) */
/* WARNING: Removing unreachable block (ram,0x06382190) */
/* WARNING: Removing unreachable block (ram,0x06382198) */
/* WARNING: Removing unreachable block (ram,0x063821c0) */
/* WARNING: Removing unreachable block (ram,0x063821a4) */
/* WARNING: Removing unreachable block (ram,0x063821b0) */
/* WARNING: Removing unreachable block (ram,0x063821cc) */
/* WARNING: Removing unreachable block (ram,0x063821e0) */
/* WARNING: Removing unreachable block (ram,0x063821f4) */
/* WARNING: Removing unreachable block (ram,0x063821fc) */
/* WARNING: Removing unreachable block (ram,0x06382224) */
/* WARNING: Removing unreachable block (ram,0x06382208) */
/* WARNING: Removing unreachable block (ram,0x06382214) */
/* WARNING: Removing unreachable block (ram,0x06382230) */
/* WARNING: Removing unreachable block (ram,0x06382244) */
/* WARNING: Removing unreachable block (ram,0x0638233c) */
/* WARNING: Removing unreachable block (ram,0x06382260) */
/* WARNING: Removing unreachable block (ram,0x06382340) */
/* WARNING: Removing unreachable block (ram,0x06382344) */
/* WARNING: Removing unreachable block (ram,0x06382348) */
/* WARNING: Removing unreachable block (ram,0x0638234c) */
/* WARNING: Removing unreachable block (ram,0x06382350) */
/* WARNING: Removing unreachable block (ram,0x06382354) */
/* WARNING: Removing unreachable block (ram,0x0638237c) */
/* WARNING: Removing unreachable block (ram,0x06382394) */
/* WARNING: Removing unreachable block (ram,0x063823a4) */
/* WARNING: Removing unreachable block (ram,0x063823a8) */
/* WARNING: Removing unreachable block (ram,0x063823b8) */
/* WARNING: Removing unreachable block (ram,0x063823c0) */
/* WARNING: Removing unreachable block (ram,0x063823e8) */
/* WARNING: Removing unreachable block (ram,0x063823cc) */
/* WARNING: Removing unreachable block (ram,0x063823d8) */
/* WARNING: Removing unreachable block (ram,0x063823f4) */
/* WARNING: Removing unreachable block (ram,0x06382400) */
/* WARNING: Removing unreachable block (ram,0x06382404) */
/* WARNING: Removing unreachable block (ram,0x0638240c) */
/* WARNING: Removing unreachable block (ram,0x06382384) */
/* WARNING: Removing unreachable block (ram,0x063822c4) */
/* WARNING: Removing unreachable block (ram,0x063822c8) */
/* WARNING: Removing unreachable block (ram,0x063822d8) */
/* WARNING: Removing unreachable block (ram,0x063822e0) */
/* WARNING: Removing unreachable block (ram,0x06382308) */
/* WARNING: Removing unreachable block (ram,0x063822ec) */
/* WARNING: Removing unreachable block (ram,0x063822f8) */
/* WARNING: Removing unreachable block (ram,0x06382314) */
/* WARNING: Removing unreachable block (ram,0x06382320) */
/* WARNING: Removing unreachable block (ram,0x06382324) */
/* WARNING: Removing unreachable block (ram,0x06382278) */
/* WARNING: Removing unreachable block (ram,0x063822a8) */
/* WARNING: Removing unreachable block (ram,0x06382288) */
/* WARNING: Removing unreachable block (ram,0x06382020) */
/* WARNING: Removing unreachable block (ram,0x06382028) */
/* WARNING: Removing unreachable block (ram,0x06382034) */
/* WARNING: Removing unreachable block (ram,0x063828d0) */
/* WARNING: Removing unreachable block (ram,0x0638261c) */
/* WARNING: Removing unreachable block (ram,0x06382634) */
/* WARNING: Removing unreachable block (ram,0x06382678) */
/* WARNING: Removing unreachable block (ram,0x06382680) */
/* WARNING: Removing unreachable block (ram,0x06382698) */
/* WARNING: Removing unreachable block (ram,0x063826a0) */
/* WARNING: Removing unreachable block (ram,0x063826c8) */
/* WARNING: Removing unreachable block (ram,0x063826ac) */
/* WARNING: Removing unreachable block (ram,0x063826b8) */
/* WARNING: Removing unreachable block (ram,0x063826d8) */
/* WARNING: Removing unreachable block (ram,0x063826e8) */
/* WARNING: Removing unreachable block (ram,0x063826f4) */
/* WARNING: Removing unreachable block (ram,0x063826fc) */
/* WARNING: Removing unreachable block (ram,0x0638270c) */
/* WARNING: Removing unreachable block (ram,0x06382714) */
/* WARNING: Removing unreachable block (ram,0x0638273c) */
/* WARNING: Removing unreachable block (ram,0x06382720) */
/* WARNING: Removing unreachable block (ram,0x0638272c) */
/* WARNING: Removing unreachable block (ram,0x0638274c) */
/* WARNING: Removing unreachable block (ram,0x0638275c) */
/* WARNING: Removing unreachable block (ram,0x06382824) */
/* WARNING: Removing unreachable block (ram,0x0638282c) */
/* WARNING: Removing unreachable block (ram,0x06382768) */
/* WARNING: Removing unreachable block (ram,0x0638276c) */
/* WARNING: Removing unreachable block (ram,0x06382774) */
/* WARNING: Removing unreachable block (ram,0x06382784) */
/* WARNING: Removing unreachable block (ram,0x0638278c) */
/* WARNING: Removing unreachable block (ram,0x063827b4) */
/* WARNING: Removing unreachable block (ram,0x06382798) */
/* WARNING: Removing unreachable block (ram,0x063827a4) */
/* WARNING: Removing unreachable block (ram,0x063827c4) */
/* WARNING: Removing unreachable block (ram,0x063827d4) */
/* WARNING: Removing unreachable block (ram,0x063827dc) */
/* WARNING: Removing unreachable block (ram,0x063827e4) */
/* WARNING: Removing unreachable block (ram,0x063827f4) */
/* WARNING: Removing unreachable block (ram,0x063827fc) */
/* WARNING: Removing unreachable block (ram,0x06382830) */
/* WARNING: Removing unreachable block (ram,0x06382808) */
/* WARNING: Removing unreachable block (ram,0x06382814) */
/* WARNING: Removing unreachable block (ram,0x06382840) */
/* WARNING: Removing unreachable block (ram,0x06382850) */
/* WARNING: Removing unreachable block (ram,0x06382864) */
/* WARNING: Removing unreachable block (ram,0x06382874) */
/* WARNING: Removing unreachable block (ram,0x063828c0) */
/* WARNING: Removing unreachable block (ram,0x06382418) */
/* WARNING: Removing unreachable block (ram,0x06382434) */
/* WARNING: Removing unreachable block (ram,0x0638246c) */
/* WARNING: Removing unreachable block (ram,0x06382474) */
/* WARNING: Removing unreachable block (ram,0x06382490) */
/* WARNING: Removing unreachable block (ram,0x06382498) */
/* WARNING: Removing unreachable block (ram,0x063824c0) */
/* WARNING: Removing unreachable block (ram,0x063824a4) */
/* WARNING: Removing unreachable block (ram,0x063824b0) */
/* WARNING: Removing unreachable block (ram,0x063824d0) */
/* WARNING: Removing unreachable block (ram,0x063824e0) */
/* WARNING: Removing unreachable block (ram,0x063824e8) */
/* WARNING: Removing unreachable block (ram,0x06382538) */
/* WARNING: Removing unreachable block (ram,0x063824f0) */
/* WARNING: Removing unreachable block (ram,0x063824f8) */
/* WARNING: Removing unreachable block (ram,0x06382508) */
/* WARNING: Removing unreachable block (ram,0x06382510) */
/* WARNING: Removing unreachable block (ram,0x06382540) */
/* WARNING: Removing unreachable block (ram,0x0638251c) */
/* WARNING: Removing unreachable block (ram,0x06382528) */
/* WARNING: Removing unreachable block (ram,0x06382550) */
/* WARNING: Removing unreachable block (ram,0x06382560) */
/* WARNING: Removing unreachable block (ram,0x0638256c) */
/* WARNING: Removing unreachable block (ram,0x06382574) */
/* WARNING: Removing unreachable block (ram,0x06382584) */
/* WARNING: Removing unreachable block (ram,0x0638258c) */
/* WARNING: Removing unreachable block (ram,0x063825b4) */
/* WARNING: Removing unreachable block (ram,0x06382598) */
/* WARNING: Removing unreachable block (ram,0x063825a4) */
/* WARNING: Removing unreachable block (ram,0x063825c4) */
/* WARNING: Removing unreachable block (ram,0x063825d4) */
/* WARNING: Removing unreachable block (ram,0x06382604) */
/* WARNING: Removing unreachable block (ram,0x063825dc) */
/* WARNING: Removing unreachable block (ram,0x06382618) */
/* WARNING: Removing unreachable block (ram,0x063825e4) */
/* WARNING: Removing unreachable block (ram,0x0432164c) */
/* WARNING: Removing unreachable block (ram,0x043216c0) */
/* WARNING: Removing unreachable block (ram,0x04321678) */
/* WARNING: Removing unreachable block (ram,0x043216a0) */
/* WARNING: Removing unreachable block (ram,0x04d0e040) */
/* WARNING: Removing unreachable block (ram,0x04d0e050) */
/* WARNING: Removing unreachable block (ram,0x04d0e064) */
/* WARNING: Removing unreachable block (ram,0x04d0e080) */
/* WARNING: Removing unreachable block (ram,0x04d0e06c) */
/* WARNING: Removing unreachable block (ram,0x04321694) */
/* WARNING: Removing unreachable block (ram,0x063828a0) */
/* WARNING: Removing unreachable block (ram,0x06382858) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

long * MergeEngine_ECS_Systems_InventorySystem__RemoveInventoryItem(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long lVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  long lVar23;
  undefined8 ******ppppppuVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  undefined8 *******unaff_x19;
  undefined *puVar30;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar31;
  long *unaff_x22;
  long *plVar32;
  undefined8 *******unaff_x23;
  long *plVar33;
  undefined *puVar34;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  long alStack_1c0 [6];
  long alStack_190 [32];
  undefined8 *******pppppppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000007e254e2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077e7238);
    func_0x03280a18(PTR_DAT_077d9fb8);
    func_0x03280a18(PTR_DAT_077e7118);
    func_0x03280a18(PTR_DAT_077e7240);
    bRam0000000007e254e2 = 1;
  }
  if ((param_2 != 0) && (plVar32 = *(long **)(param_1 + 0x60), plVar32 != (long *)0x0)) {
    lVar26 = *plVar32;
    uVar31 = *(undefined8 *)(param_2 + 0x10);
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar13 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x14) * 0x10 + 0x138);
          goto LAB_06386c3c;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar32,*(long *)PTR_DAT_0777a498,0x14);
LAB_06386c3c:
    plVar32 = (long *)(*(code *)*puVar13)(plVar32,param_2,puVar13[1]);
    plVar33 = *(long **)(param_1 + 0x10);
    if (plVar33 != (long *)0x0) {
      lVar26 = *plVar33;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0777e5c0) {
            puVar13 = (undefined8 *)(lVar26 + (long)(*piVar28 + 6) * 0x10 + 0x138);
            goto LAB_06386cb0;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar33,*(long *)PTR_DAT_0777e5c0,6);
LAB_06386cb0:
      (*(code *)*puVar13)(plVar33,uVar31,puVar13[1]);
      if (*(int *)(param_2 + 0x2c) == 1) {
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar26 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
joined_r0x06386cf0:
          if (lVar26 != 0) {
            func_0x041441f0(lVar26,*(undefined4 *)(param_2 + 0x28),0,*(undefined8 *)PTR_DAT_077e7118
                           );
            goto LAB_06386d0c;
          }
        }
      }
      else if (*(int *)(param_2 + 0x2c) == 0) {
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar26 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
          goto joined_r0x06386cf0;
        }
      }
      else {
LAB_06386d0c:
        if (((*(long *)(param_1 + 0x40) != 0) &&
            (lVar26 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar26 != 0)) &&
           (*(long *)(param_1 + 0x50) != 0)) {
          uVar5 = *(undefined4 *)(lVar26 + 0x18);
          uVar9 = func_0x067675f0(*(long *)(param_1 + 0x50),0);
          uVar10 = MergeEngine_ECS_Systems_InventorySystem__NumFreeSlots(param_1);
          if (plVar32 != (long *)0x0) {
            lVar26 = *plVar32;
            plVar33 = *(long **)(param_1 + 0x28);
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_07779820) {
                  puVar13 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_06386d9c;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar13 = (undefined8 *)func_0x03256b10(plVar32,*(long *)PTR_DAT_07779820,0);
LAB_06386d9c:
            uVar12 = (*(code *)*puVar13)(plVar32,puVar13[1]);
            uVar3 = *(undefined4 *)(param_2 + 0x28);
            uVar4 = *(undefined4 *)(param_2 + 0x2c);
            uVar14 = func_0x063828dc(param_1);
            uVar31 = MergeEngine_ECS_Systems_InventorySystem__GetStackSizeIfStacking
                               (uVar14,plVar32,uVar31);
            lVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7238);
            uStack_70 = 0;
            uStack_80 = CONCAT44(uStack_80._4_4_,(int)uVar14);
            uStack_78 = uVar31;
            func_0x060f4024(lVar26,uVar12,0,uVar3,uVar5,uVar10,uVar9,uVar4);
            if (plVar33 != (long *)0x0) {
              lVar20 = *(long *)PTR_DAT_077e7240;
              lVar23 = *(long *)(lVar20 + 0x38);
              if (lVar23 == 0) {
                func_0x03256878(lVar20);
                lVar23 = *(long *)(lVar20 + 0x38);
              }
              lVar20 = *(long *)(lVar23 + 8);
              plVar32 = plVar33;
              if ((*(long *)(lVar20 + 0x38) == 0) &&
                 (plVar32 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar20 + 0x38) == 0
                 )) {
                plVar32 = (long *)func_0x03256878(lVar20);
              }
              if ((char)plVar33[10] != '\0') {
                return plVar32;
              }
              uVar31 = **(undefined8 **)(lVar20 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar31 = func_0x057a51c4(uVar31,0);
              lVar23 = 1;
              pppppppuVar18 = (undefined8 *******)0x0;
              lVar20 = func_0x072869d0(plVar33,uVar31,0,1,0);
              if (lVar20 == 0) {
                auVar36 = func_0x03280cac();
                uVar31 = auVar36._8_8_;
                unaff_x22 = auVar36._0_8_;
                uStack_78 = 0x3ea51c0;
                lVar26 = tpidr_el0;
                lStack_88 = *(long *)(lVar26 + 0x28);
                puVar13 = *(undefined8 **)(lVar23 + 0x38);
                plVar32 = unaff_x22;
                pppppppuVar19 = pppppppuVar18;
                pppppppuStack_90 = pppppppuVar18;
                uStack_80 = unaff_x29;
                uStack_70 = unaff_x26;
                if (puVar13 == (undefined8 *)0x0) {
                  plVar32 = (long *)func_0x03280a18(PTR_DAT_0774e558);
                  puVar13 = *(undefined8 **)(lVar23 + 0x38);
                  if (puVar13 == (undefined8 *)0x0) {
                    plVar32 = (long *)func_0x03256878(lVar23);
                    puVar13 = *(undefined8 **)(lVar23 + 0x38);
                  }
                }
                unaff_x23 = (undefined8 *******)(ulong)*(uint *)(puVar13[1] + 0xfc);
                lVar15 = -((long)unaff_x23 + 0xfU & 0x1fffffff0);
                unaff_x24 = (undefined *)((long)&pppppppuStack_90 + lVar15);
                if ((char)unaff_x22[10] == '\0') {
                  unaff_x25 = *puVar13;
                  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                    func_0x03280b8c();
                  }
                  uVar12 = func_0x057a51c4(unaff_x25,0);
                  lVar20 = func_0x072869d0(unaff_x22,uVar12,uVar31,1,0);
                  unaff_x20 = *(long *)(lVar23 + 0x38);
                  pppppppuVar2 = pppppppuVar18;
                  if (-1 < *(int *)(*(long *)(unaff_x20 + 8) + 0x28)) {
                    pppppppuVar2 = &pppppppuStack_90;
                  }
                  pppppppuVar19 = unaff_x23;
                  func_0x072ce970(unaff_x24,pppppppuVar2);
                  lVar26 = func_0x03280b94(*(undefined8 *)(unaff_x20 + 8),unaff_x24);
                  if (lVar20 != 0) {
                    unaff_x30 = 0x3ea52d0;
                    register0x00000008 = (BADSPACEBASE *)unaff_x24;
                    unaff_x19 = pppppppuVar18;
                    unaff_x21 = lVar20;
                    goto SUB_072852e4;
                  }
                  func_0x03280cac();
                  uVar31 = 0;
                }
                else {
                  unaff_x20 = lVar23;
                  if (*(long *)(lVar26 + 0x28) == lStack_88) {
                    return plVar32;
                  }
                }
                auVar36 = func_0x072ce990();
                lVar26 = auVar36._8_8_;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xe0) = 0x3ea5304;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xe8) = uVar31;
                *(long *)((long)alStack_190 + lVar15 + 0xf0) = unaff_x20;
                *(undefined8 ********)((long)alStack_190 + lVar15 + 0xf8) = pppppppuVar18;
                ppppppuVar24 = pppppppuVar19[7];
                if (ppppppuVar24 == (undefined8 ******)0x0) {
                  func_0x03256878(pppppppuVar19);
                  ppppppuVar24 = pppppppuVar19[7];
                }
                pppppuVar21 = ppppppuVar24[1];
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xc0) =
                     *(undefined8 *)((long)alStack_190 + lVar15 + 0xe0);
                *(undefined **)((long)alStack_190 + lVar15 + 0xd0) = unaff_x24;
                *(undefined8 ********)((long)alStack_190 + lVar15 + 0xd8) = unaff_x23;
                *(long **)((long)alStack_190 + lVar15 + 0xe0) = unaff_x22;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xe8) =
                     *(undefined8 *)((long)alStack_190 + lVar15 + 0xe8);
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xf0) =
                     *(undefined8 *)((long)alStack_190 + lVar15 + 0xf0);
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xf8) =
                     *(undefined8 *)((long)alStack_190 + lVar15 + 0xf8);
                ppppuVar25 = pppppuVar21[7];
                lVar20 = lVar26;
                pppppuVar22 = pppppuVar21;
                if (ppppuVar25 == (undefined8 ****)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  ppppuVar25 = pppppuVar21[7];
                  if (ppppuVar25 == (undefined8 ****)0x0) {
                    func_0x03256878(pppppuVar21);
                    ppppuVar25 = pppppuVar21[7];
                  }
                }
                if ((*(byte *)((long)*ppppuVar25 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar23 = func_0x03280ca0();
                func_0x04053df4(lVar23,pppppuVar21[7][1]);
                if (lVar23 != 0) {
                  plVar32 = (long *)(lVar23 + 0x10);
                  *plVar32 = lVar26;
                  goto SUB_032809c4;
                }
                auVar35 = func_0x03280cac();
                *(undefined8 *)((long)alStack_190 + lVar15 + 0x80) = 0x3ea5530;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0x90) = 0;
                *(undefined8 ********)((long)alStack_190 + lVar15 + 0x98) = unaff_x23;
                *(long *)((long)alStack_190 + lVar15 + 0xa0) = lVar26;
                *(undefined8 ******)((long)alStack_190 + lVar15 + 0xa8) = pppppuVar21;
                *(long *)((long)alStack_190 + lVar15 + 0xb0) = auVar36._0_8_;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0xb8) = 0;
                ppppuVar25 = pppppuVar22[7];
                lVar26 = lVar20;
                pppppuVar21 = pppppuVar22;
                if (ppppuVar25 == (undefined8 ****)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  ppppuVar25 = pppppuVar22[7];
                  if (ppppuVar25 == (undefined8 ****)0x0) {
                    func_0x03256878(pppppuVar22);
                    ppppuVar25 = pppppuVar22[7];
                  }
                }
                if ((*(byte *)((long)*ppppuVar25 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar23 = func_0x03280ca0();
                func_0x0404e308(lVar23,pppppuVar22[7][1]);
                if (lVar23 != 0) {
                  plVar32 = (long *)(lVar23 + 0x10);
                  *plVar32 = lVar20;
                  goto SUB_032809c4;
                }
                auVar36 = func_0x03280cac();
                *(undefined8 *)((long)alStack_190 + lVar15 + 0x40) = 0x3ea5644;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0x50) = 0;
                *(undefined8 ********)((long)alStack_190 + lVar15 + 0x58) = unaff_x23;
                *(long *)((long)alStack_190 + lVar15 + 0x60) = lVar20;
                *(undefined8 ******)((long)alStack_190 + lVar15 + 0x68) = pppppuVar22;
                *(long *)((long)alStack_190 + lVar15 + 0x70) = auVar35._0_8_;
                *(long *)((long)alStack_190 + lVar15 + 0x78) = auVar35._8_8_;
                ppppuVar25 = pppppuVar21[7];
                lVar20 = lVar26;
                pppppuVar22 = pppppuVar21;
                if (ppppuVar25 == (undefined8 ****)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  ppppuVar25 = pppppuVar21[7];
                  if (ppppuVar25 == (undefined8 ****)0x0) {
                    func_0x03256878(pppppuVar21);
                    ppppuVar25 = pppppuVar21[7];
                  }
                }
                if ((*(byte *)((long)*ppppuVar25 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar23 = func_0x03280ca0();
                (*(code *)*pppppuVar21[7][1])();
                if (lVar23 != 0) {
                  plVar32 = (long *)(lVar23 + 0x10);
                  *plVar32 = lVar26;
                  goto SUB_032809c4;
                }
                auVar35 = func_0x03280cac();
                *(undefined8 *)((long)alStack_190 + lVar15) = 0x3ea575c;
                *(undefined8 *)((long)alStack_190 + lVar15 + 0x10) = 0;
                *(undefined8 ********)((long)alStack_190 + lVar15 + 0x18) = unaff_x23;
                *(long *)((long)alStack_190 + lVar15 + 0x20) = lVar26;
                *(undefined8 ******)((long)alStack_190 + lVar15 + 0x28) = pppppuVar21;
                *(long *)((long)alStack_190 + lVar15 + 0x30) = auVar36._0_8_;
                *(long *)((long)alStack_190 + lVar15 + 0x38) = auVar36._8_8_;
                ppppuVar25 = pppppuVar22[7];
                if (ppppuVar25 == (undefined8 ****)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  ppppuVar25 = pppppuVar22[7];
                  if (ppppuVar25 == (undefined8 ****)0x0) {
                    func_0x03256878(pppppuVar22);
                    ppppuVar25 = pppppuVar22[7];
                  }
                }
                if ((*(byte *)((long)*ppppuVar25 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar26 = func_0x03280ca0();
                (*(code *)*pppppuVar22[7][1])();
                if (lVar26 != 0) {
                  plVar32 = (long *)(lVar26 + 0x10);
                  *plVar32 = lVar20;
                  goto SUB_032809c4;
                }
                auVar36 = func_0x03280cac();
                lVar26 = auVar36._8_8_;
                plVar32 = auVar36._0_8_;
                *(undefined8 *)((long)alStack_1c0 + lVar15 + 0x10) = 0x3ea5874;
                *(long *)((long)alStack_1c0 + lVar15 + 0x20) = auVar35._0_8_;
                *(long *)((long)alStack_1c0 + lVar15 + 0x28) = auVar35._8_8_;
                plVar33 = *(long **)(lVar26 + 0x38);
                if (plVar33 == (long *)0x0) {
                  func_0x03256878(lVar26);
                  plVar33 = *(long **)(lVar26 + 0x38);
                }
                lVar26 = *plVar33;
                *(undefined8 *)((long)alStack_1c0 + lVar15) =
                     *(undefined8 *)((long)alStack_1c0 + lVar15 + 0x10);
                *(undefined8 ********)((long)alStack_1c0 + lVar15 + 8) = unaff_x23;
                *(long *)((long)alStack_1c0 + lVar15 + 0x10) = lVar20;
                *(undefined8 ******)((long)alStack_1c0 + lVar15 + 0x18) = pppppuVar22;
                *(undefined8 *)((long)alStack_1c0 + lVar15 + 0x20) =
                     *(undefined8 *)((long)alStack_1c0 + lVar15 + 0x20);
                *(undefined8 *)((long)alStack_1c0 + lVar15 + 0x28) =
                     *(undefined8 *)((long)alStack_1c0 + lVar15 + 0x28);
                plVar33 = plVar32;
                if ((*(long *)(lVar26 + 0x38) == 0) &&
                   (plVar33 = (long *)func_0x03280a18(PTR_DAT_0774e558),
                   *(long *)(lVar26 + 0x38) == 0)) {
                  plVar33 = (long *)func_0x03256878(lVar26);
                }
                puVar34 = PTR_DAT_0774e558;
                if ((char)plVar32[10] != '\0') {
                  return plVar33;
                }
                uVar31 = **(undefined8 **)(lVar26 + 0x38);
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar31 = func_0x057a51c4(uVar31,0);
                lVar20 = func_0x072869d0(plVar32,uVar31,0,0,0);
                if (lVar20 == 0) {
                  return (long *)0x0;
                }
                uVar31 = **(undefined8 **)(lVar26 + 0x38);
                if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar31 = func_0x057a51c4(uVar31,0);
                lVar23 = func_0x057c1ad4(uVar31,0);
                lVar29 = *(long *)(*(long *)(lVar26 + 0x38) + 8);
                if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
                  lVar29 = func_0x0325681c(lVar29);
                }
                if (lVar23 == 0) {
LAB_03ea5b18:
                  lVar26 = 0;
                }
                else {
                  lVar26 = func_0x03280b90(lVar23,lVar29);
                  if (lVar26 == 0) {
                    func_0x03281048(lVar23,lVar29);
                    goto LAB_03ea5b18;
                  }
                }
                unaff_x20 = *(long *)((long)alStack_1c0 + lVar15 + 0x20);
                unaff_x19 = *(undefined8 ********)((long)alStack_1c0 + lVar15 + 0x28);
                unaff_x22 = *(long **)((long)alStack_1c0 + lVar15 + 0x10);
                unaff_x21 = *(long *)((long)alStack_1c0 + lVar15 + 0x18);
                unaff_x30 = *(undefined8 *)((long)alStack_1c0 + lVar15);
                unaff_x23 = *(undefined8 ********)((long)alStack_1c0 + lVar15 + 8);
                unaff_x24 = (undefined *)0x0;
                register0x00000008 = (BADSPACEBASE *)((long)alStack_190 + lVar15);
              }
SUB_072852e4:
              lVar23 = 0;
              puVar8 = (undefined1 *)((long)register0x00000008 + -0x30);
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
              *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
              *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
              *(undefined8 ********)((long)register0x00000008 + -8) = unaff_x19;
              if ((bRam0000000007e3419a & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785dee8);
                func_0x03280a18(PTR_DAT_0785def0);
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0785def8);
                func_0x03280a18(PTR_DAT_07751038);
                func_0x03280a18(PTR_DAT_07779590);
                bRam0000000007e3419a = 1;
              }
              puVar34 = PTR_DAT_07779590;
              if (lVar26 != 0) {
                uVar31 = func_0x057dadc4(lVar26,0);
                puVar30 = *(undefined **)(lVar20 + 0x20);
                if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)puVar34);
                }
                uVar11 = func_0x0727e0ec(uVar31,puVar30);
                plVar32 = (long *)(ulong)(uVar11 & 1);
                uVar31 = 0x728539c;
                goto SUB_0727dc78;
              }
              func_0x03280cac();
              func_0x03280cac();
              lVar26 = 0;
              while( true ) {
                func_0x03280ca4(lVar26);
                auVar37 = func_0x03280cac();
                uVar31 = auVar37._0_8_;
                if (auVar37._8_4_ != 1) break;
                plVar32 = (long *)func_0x072ce910(uVar31);
                lVar26 = *plVar32;
                func_0x072ce920();
                uVar27 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar13 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar28 * 0x10 + 0x138)
                      ;
                      goto LAB_072854e8;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                lVar23 = 0;
                puVar13 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
                plVar32 = (long *)(*(code *)*puVar13)(0x7e34000,puVar13[1]);
                if (lVar26 == 0) {
                  return plVar32;
                }
              }
              uVar27 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
                    puVar13 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_072855b0;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              lVar23 = 0;
              puVar13 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
              (*(code *)*puVar13)(0x7e34000,puVar13[1]);
              func_0x03365958(uVar31);
              func_0x03280ca4(0);
              auVar36 = func_0x02f09514();
              puVar34 = PTR_DAT_0785dec8;
              lVar15 = auVar36._8_8_;
              lVar20 = auVar36._0_8_;
              *(undefined8 *)((long)register0x00000008 + -0x70) = 0x72855d4;
              *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x25;
              *(undefined **)((long)register0x00000008 + -0x60) = unaff_x24;
              *(undefined8 ********)((long)register0x00000008 + -0x58) = unaff_x23;
              *(long **)((long)register0x00000008 + -0x50) = unaff_x22;
              *(undefined8 *)((long)register0x00000008 + -0x48) = uVar31;
              *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x38) = 0x7e34000;
              plVar33 = (long *)0x7e34000;
              if ((bRam0000000007e3419b & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785dec8);
                func_0x03280a18(PTR_DAT_0785df00);
                func_0x03280a18(PTR_DAT_0785ded0);
                func_0x03280a18(PTR_DAT_0785ded8);
                func_0x03280a18(PTR_DAT_0774e5a0);
                func_0x03280a18(PTR_DAT_0785df08);
                bRam0000000007e3419b = 1;
              }
              plVar32 = (long *)func_0x03e0c264(lVar15,*(undefined8 *)puVar34);
              puVar16 = PTR_DAT_0785df00;
              puVar30 = PTR_DAT_0785ded8;
              if (((ulong)plVar32 & 1) == 0) {
LAB_07285770:
                if (lVar15 != 0) {
                  if (0 < *(int *)(lVar15 + 0x18)) {
                    plVar33 = (long *)0x0;
                    do {
                      puVar17 = (undefined *)func_0x0414419c(lVar15,plVar33,*(undefined8 *)puVar30);
                      unaff_x24 = puVar30;
                      if (*(long *)(lVar20 + 0x10) == 0) goto LAB_07285808;
                      plVar32 = (long *)func_0x041447fc(*(long *)(lVar20 + 0x10),puVar17,
                                                        *(undefined8 *)puVar16);
                      puVar34 = puVar17;
                      if (((ulong)plVar32 & 1) != 0) {
                        if ((puVar17 == (undefined *)0x0) ||
                           (lVar26 = *(long *)(puVar17 + 0x18), lVar26 == 0)) goto LAB_07285808;
                        plVar32 = (long *)(**(code **)(lVar26 + 0x18))
                                                    (*(undefined8 *)(lVar26 + 0x40),lVar23,
                                                     *(undefined8 *)(lVar26 + 0x28));
                      }
                      uVar11 = (int)plVar33 + 1;
                      plVar33 = (long *)(ulong)uVar11;
                    } while ((int)uVar11 < *(int *)(lVar15 + 0x18));
                  }
                  return plVar32;
                }
LAB_07285808:
                func_0x03280cac();
                plVar32 = plVar33;
                puVar16 = puVar34;
LAB_0728580c:
                func_0x03280cb4();
              }
              else {
                if (*(int *)(lVar20 + 0x30) != 2) {
                  if (*(int *)(lVar20 + 0x30) != 1) goto LAB_07285770;
                  uVar31 = func_0x03280a2c(PTR_DAT_0774e5a0);
                  lVar15 = func_0x03280afc(uVar31,1);
                  func_0x02f0b18c(lVar23);
                  uVar31 = func_0x057dadc4(lVar23,0);
                  func_0x02f0b18c(lVar15);
                  func_0x02f176b4(lVar15,uVar31);
                  func_0x02f0965c(lVar15,0,uVar31);
                  uVar31 = func_0x03280a2c(PTR_DAT_0785df08);
                  lVar23 = func_0x0727df38(uVar31,lVar15);
                  uVar31 = func_0x03280a2c(PTR_DAT_0785df10);
                  func_0x03280b7c(lVar23,uVar31);
                }
                plVar32 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
                if ((lVar23 == 0) ||
                   (puVar16 = (undefined *)func_0x057dadc4(lVar23,0), plVar33 = plVar32,
                   plVar32 == (long *)0x0)) goto LAB_07285808;
                if ((puVar16 == (undefined *)0x0) ||
                   (lVar26 = func_0x03280b90(puVar16,*(undefined8 *)(*plVar32 + 0x40)), lVar26 != 0)
                   ) {
                  if ((int)plVar32[3] != 0) {
                    plVar32 = plVar32 + 4;
                    *plVar32 = (long)puVar16;
                    goto SUB_032809c4;
                  }
                  goto LAB_0728580c;
                }
              }
              uVar31 = func_0x03280cd0();
              auVar36 = func_0x03280b7c(uVar31,0);
              *(undefined8 *)((long)register0x00000008 + -0x80) = 0x728581c;
              lVar26 = *(long *)(auVar36._0_8_ + 0x18);
              if (lVar26 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar32 = (long *)(**(code **)(lVar26 + 0x18))
                                            (*(undefined8 *)(lVar26 + 0x40),auVar36._8_8_,
                                             *(undefined8 *)(lVar26 + 0x28));
                return plVar32;
              }
              lVar26 = func_0x03280cac();
              puVar30 = PTR_DAT_0785df18;
              puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
              *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x7285840;
              *(undefined **)((long)register0x00000008 + -0xb0) = unaff_x24;
              *(undefined **)((long)register0x00000008 + -0xa8) = puVar16;
              *(long **)((long)register0x00000008 + -0xa0) = plVar32;
              *(long *)((long)register0x00000008 + -0x98) = lVar20;
              *(long *)((long)register0x00000008 + -0x90) = lVar15;
              *(long *)((long)register0x00000008 + -0x88) = lVar23;
              lVar20 = 0x7e34000;
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
              plVar32 = (long *)(ulong)*(byte *)(lVar26 + 0x34);
              uVar31 = 0x72858f0;
SUB_0727dc78:
              if (((ulong)plVar32 & 1) != 0) {
                return plVar32;
              }
              *(undefined8 *)(puVar8 + -0x10) = uVar31;
              *(undefined **)(puVar8 + -8) = puVar30;
              uVar31 = func_0x03280a2c(PTR_DAT_0785dbe8);
              puVar34 = PTR_DAT_0777c990;
              *(undefined8 *)(puVar8 + -0x30) = 0x727dc94;
              *(long *)(puVar8 + -0x28) = lVar20;
              *(long *)(puVar8 + -0x20) = lVar26;
              *(undefined **)(puVar8 + -0x18) = puVar30;
              if ((bRam0000000007e34146 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777c990);
                bRam0000000007e34146 = 1;
              }
              plVar32 = (long *)func_0x03280ca0(*(undefined8 *)puVar34);
              func_0x072c77f8(plVar32,uVar31,0);
              return plVar32;
            }
          }
        }
      }
    }
  }
  auVar36 = func_0x03280cac();
  plVar32 = (long *)(auVar36._0_8_ + 0xe8);
  *plVar32 = auVar36._8_8_;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar32 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar32 >> 0xc & 0x3f);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  return plVar32;
}

