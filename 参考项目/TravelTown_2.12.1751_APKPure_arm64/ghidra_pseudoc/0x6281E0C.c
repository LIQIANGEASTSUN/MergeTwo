/* Ghidra 12.1.2 native pseudocode; RVA 0x6281E0C; MergeEngine.ECS.Systems.InventorySystem.OnLevelUp; status ok */

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
/* WARNING: Removing unreachable block (ram,0x063828d0) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

long * MergeEngine_ECS_Systems_InventorySystem__OnLevelUp(long param_1)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined *puVar15;
  byte extraout_w1;
  bool bVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  long unaff_x19;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 unaff_x20;
  long lVar24;
  long *plVar25;
  undefined8 unaff_x21;
  long lVar26;
  undefined8 unaff_x22;
  undefined *puVar27;
  undefined8 unaff_x23;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 unaff_x24;
  undefined *puVar30;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  if ((bRam0000000007e254c4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7048);
    bRam0000000007e254c4 = 1;
  }
  plVar9 = (long *)func_0x06380b60(param_1);
  if (((ulong)plVar9 & 1) == 0) {
    return plVar9;
  }
  lVar18 = *(long *)(param_1 + 0x110);
  if (lVar18 == 0) {
    unaff_x30 = 0x6381e90;
    lVar24 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x20 = 0x7e25000;
  }
  else {
    iVar7 = *(int *)(lVar18 + 0x18);
    *(undefined4 *)(lVar18 + 0x18) = 0;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    lVar24 = param_1;
    if (0 < iVar7) {
      func_0x057b9c7c(*(undefined8 *)(lVar18 + 0x10),0,iVar7,0);
    }
  }
  plVar9 = (long *)PTR_DAT_077e7070;
  puVar29 = PTR_DAT_077e7068;
  puVar27 = PTR_DAT_077e7060;
  puVar23 = PTR_DAT_077e7058;
  puVar28 = PTR_DAT_077e7050;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long *)((long)register0x00000008 + -8) = unaff_x19;
  if ((bRam0000000007e254ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7078);
    func_0x03280a18(PTR_DAT_077e7060);
    func_0x03280a18(PTR_DAT_077e7050);
    func_0x03280a18(PTR_DAT_077e7080);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077c20b0);
    func_0x03280a18(PTR_DAT_077c20b8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077e7058);
    func_0x03280a18(PTR_DAT_077e7068);
    func_0x03280a18(PTR_DAT_077db450);
    func_0x03280a18(PTR_DAT_077e7088);
    func_0x03280a18(PTR_DAT_077e7070);
    bRam0000000007e254ed = 1;
  }
  uVar22 = *(undefined8 *)(lVar24 + 0xd8);
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar28);
  func_0x05355fbc(uVar10,lVar24,*(undefined8 *)puVar23,0);
  uVar10 = func_0x03d872a8(uVar22,uVar10,*(undefined8 *)puVar27);
  uVar22 = func_0x03280ca0(*(undefined8 *)puVar28);
  func_0x05355fbc(uVar22,lVar24,*(undefined8 *)puVar29,0);
  plVar11 = (long *)func_0x03d872a8(uVar10,uVar22,*(undefined8 *)puVar27);
  lVar18 = *plVar9;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c(lVar18);
    lVar18 = *plVar9;
  }
  puVar23 = PTR_DAT_077e7078;
  lVar26 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x38);
  if (lVar26 != 0) {
    plVar12 = (long *)func_0x03d50a94(plVar11,lVar26,*(undefined8 *)PTR_DAT_077e7078);
    puVar29 = puVar23;
    puVar30 = puVar28;
    puVar15 = unaff_x26;
    if (plVar12 == (long *)0x0) {
LAB_0638234c:
      func_0x03280cac();
      puVar23 = puVar29;
      puVar28 = puVar30;
      unaff_x26 = puVar15;
    }
    else {
      lVar18 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077c20b0) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_063820e8;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077c20b0,0);
LAB_063820e8:
      plVar9 = (long *)PTR_DAT_0774e8c8;
      plVar11 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar3 = PTR_DAT_077db450;
      puVar30 = PTR_DAT_077c20b8;
      puVar15 = PTR_DAT_07779820;
      puVar29 = PTR_DAT_0774e8e0;
      if (plVar11 != (long *)0x0) {
        do {
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar29) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_06382170;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar29,0);
LAB_06382170:
          plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
          if (((ulong)plVar12 & 1) == 0) {
            lVar24 = 0;
            goto LAB_063822c4;
          }
          lVar18 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar30) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_063821cc;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar30,0);
LAB_063821cc:
          plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
          if (plVar12 == (long *)0x0) {
LAB_06382344:
            func_0x03280cac();
LAB_06382348:
            func_0x03280cac();
            goto LAB_0638234c;
          }
          lVar18 = *plVar12;
          puVar27 = *(undefined **)(lVar24 + 0x108);
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar15) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_06382230;
              }
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar15,0);
LAB_06382230:
          uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (puVar27 == (undefined *)0x0) goto LAB_06382348;
          func_0x06389848(puVar27,uVar10);
          func_0x063899b8(lVar24,plVar12);
          lVar18 = *(long *)(lVar24 + 0x110);
          if (lVar18 == 0) {
            func_0x03280cac();
LAB_06382340:
            func_0x03280cac();
            goto LAB_06382344;
          }
          lVar26 = *(long *)(lVar18 + 0x10);
          lVar20 = *(long *)puVar3;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar26 == 0) goto LAB_06382340;
          uVar8 = *(uint *)(lVar18 + 0x18);
          if (uVar8 < *(uint *)(lVar26 + 0x18)) goto code_r0x06382288;
          func_0x0414446c(lVar18,plVar12,
                          *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        } while( true );
      }
    }
    puVar15 = unaff_x26;
    puVar30 = puVar28;
    puVar29 = puVar23;
    func_0x03280cac();
    while( true ) {
      auVar31 = func_0x03280ca4(lVar24);
      plVar12 = auVar31._0_8_;
      if (auVar31._8_4_ != 1) break;
      plVar12 = (long *)func_0x072ce910();
      lVar24 = *plVar12;
      plVar12 = (long *)func_0x072ce920();
LAB_063822c4:
      if (plVar11 != (long *)0x0) {
        lVar18 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *plVar9) {
              puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_06382314;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar11,*plVar9,0);
LAB_06382314:
        plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
      }
      if (lVar24 == 0) {
        return plVar12;
      }
    }
    plVar25 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar18 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *plVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_063823f4;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar11,*plVar9,0);
LAB_063823f4:
      (*(code *)*puVar13)(plVar11,puVar13[1]);
    }
    func_0x03365958(plVar12);
    func_0x03280ca4(0);
    uVar10 = 0x6382418;
    plVar14 = (long *)func_0x02f09514();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x50);
    do {
      *(undefined8 *)(puVar5 + -0x30) = uVar10;
      *(undefined **)(puVar5 + -0x20) = puVar27;
      *(long **)(puVar5 + -0x18) = plVar12;
      *(long **)(puVar5 + -0x10) = plVar25;
      *(long **)(puVar5 + -8) = plVar11;
      if ((bRam0000000007e254c7 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077726c0);
        func_0x03280a18(PTR_DAT_0777efc0);
        func_0x03280a18(PTR_DAT_07774290);
        func_0x03280a18(PTR_DAT_077728f8);
        bRam0000000007e254c7 = 1;
      }
      puVar28 = PTR_DAT_077726c0;
      plVar11 = (long *)plVar14[0x10];
      if (plVar11 != (long *)0x0) {
        lVar18 = *plVar11;
        plVar25 = (long *)plVar14[0x1f];
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077726c0) {
              puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 3) * 0x10 + 0x138);
              goto LAB_063824d0;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077726c0,3);
LAB_063824d0:
        lVar18 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        plVar12 = plVar25;
        puVar27 = puVar28;
        if (lVar18 != 0) {
          plVar11 = plVar25;
          if (*(int *)(lVar18 + 0x20) == 0) {
LAB_0638256c:
            plVar12 = (long *)plVar14[0x10];
            if (plVar12 != (long *)0x0) {
              lVar18 = *plVar12;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar28) {
                    puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 5) * 0x10 + 0x138);
                    goto LAB_063825c4;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar28,5);
LAB_063825c4:
              lVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (lVar18 != 0) {
                if (*(int *)(lVar18 + 0x20) != 0) goto LAB_063825dc;
                iVar7 = func_0x063828dc(plVar14);
                bVar16 = 0 < iVar7;
joined_r0x063825e0:
                if (plVar25 != (long *)0x0) {
                  lVar18 = *(long *)PTR_DAT_077728f8;
                  puVar4 = puVar5 + -0x20;
                  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x30);
                  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
                  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
                  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
                  plVar9 = (long *)func_0x03ea6a1c(*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                    0x20));
                  if (plVar9 == (long *)0x0) {
                    uVar10 = 0x43216c4;
                    plVar25 = (long *)func_0x03280cac();
                    *(byte *)(plVar25 + 4) = extraout_w1 & 1;
                  }
                  else {
                    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                               (plVar9,(char)plVar25[4],bVar16,
                                                *(undefined8 *)(*plVar9 + 0x1c0));
                    if (((ulong)plVar9 & 1) != 0) {
                      return plVar9;
                    }
                    *(bool *)(plVar25 + 4) = bVar16;
                    lVar18 = *(long *)(puVar5 + -8);
                    uVar10 = *(undefined8 *)(puVar5 + -0x20);
                    puVar4 = puVar5;
                  }
                  *(undefined8 *)(puVar4 + -0x10) = uVar10;
                  *(long *)(puVar4 + -8) = lVar18;
                  lVar18 = plVar25[2];
                  plVar9 = plVar25;
                  if (lVar18 != 0) {
                    plVar9 = (long *)(**(code **)(lVar18 + 0x18))
                                               (*(undefined8 *)(lVar18 + 0x40),(char)plVar25[4],
                                                *(undefined8 *)(lVar18 + 0x28));
                  }
                  lVar18 = plVar25[3];
                  if (lVar18 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d0e07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    plVar9 = (long *)(**(code **)(lVar18 + 0x18))
                                               (*(undefined8 *)(lVar18 + 0x40),
                                                *(undefined8 *)(lVar18 + 0x28));
                    return plVar9;
                  }
                  return plVar9;
                }
              }
            }
          }
          else {
            plVar12 = (long *)plVar14[0x10];
            if (plVar12 != (long *)0x0) {
              lVar18 = *plVar12;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar28) {
                    puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 3) * 0x10 + 0x138);
                    goto LAB_06382550;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar28,3);
LAB_06382550:
              lVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if (lVar18 != 0) {
                if (*(int *)(lVar18 + 0x20) == 2) goto LAB_0638256c;
LAB_063825dc:
                bVar16 = false;
                goto joined_r0x063825e0;
              }
            }
          }
        }
      }
      lVar18 = func_0x03280cac();
      *(undefined8 *)(puVar5 + -0x50) = 0x638261c;
      *(long **)(puVar5 + -0x48) = plVar12;
      *(long **)(puVar5 + -0x40) = plVar11;
      *(long **)(puVar5 + -0x38) = plVar14;
      if ((bRam0000000007e254c5 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077726c0);
        func_0x03280a18(PTR_DAT_0777efc0);
        func_0x03280a18(PTR_DAT_07774290);
        func_0x03280a18(PTR_DAT_077e7090);
        func_0x03280a18(PTR_DAT_077e7098);
        bRam0000000007e254c5 = 1;
      }
      puVar28 = PTR_DAT_077726c0;
      plVar25 = *(long **)(lVar18 + 0x80);
      if (plVar25 != (long *)0x0) {
        lVar24 = *plVar25;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar19 != 0) {
          piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077726c0) {
              puVar13 = (undefined8 *)(lVar24 + (long)(*piVar21 + 3) * 0x10 + 0x138);
              goto LAB_063826d8;
            }
            uVar19 = uVar19 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_077726c0,3);
LAB_063826d8:
        lVar24 = (*(code *)*puVar13)(plVar25,puVar13[1]);
        plVar12 = (long *)puVar28;
        if (lVar24 != 0) {
          if (*(int *)(lVar24 + 0x20) == 1) {
LAB_06382768:
            *(undefined1 *)(lVar18 + 0x100) = 0;
LAB_0638276c:
            plVar25 = *(long **)(lVar18 + 0x80);
            if (plVar25 != (long *)0x0) {
              lVar24 = *plVar25;
              uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar28) {
                    puVar13 = (undefined8 *)(lVar24 + (long)(*piVar21 + 3) * 0x10 + 0x138);
                    goto LAB_063827c4;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar28,3);
LAB_063827c4:
              plVar11 = (long *)(*(code *)*puVar13)(plVar25,puVar13[1]);
              if (plVar11 != (long *)0x0) {
                if ((int)plVar11[4] != 0) {
                  return plVar11;
                }
                plVar25 = *(long **)(lVar18 + 0x80);
                if (plVar25 != (long *)0x0) {
                  lVar24 = *plVar25;
                  uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)puVar28) {
                        puVar13 = (undefined8 *)(lVar24 + (long)(*piVar21 + 5) * 0x10 + 0x138);
                        goto LAB_06382840;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar28,5);
LAB_06382840:
                  plVar11 = (long *)(*(code *)*puVar13)(plVar25,puVar13[1]);
                  if (plVar11 != (long *)0x0) {
                    if ((int)plVar11[4] != 0) {
                      return plVar11;
                    }
                    plVar11 = (long *)func_0x063828dc(lVar18);
                    if ((int)plVar11 < 1) {
                      return plVar11;
                    }
                    *(undefined1 *)(lVar18 + 0x100) = 1;
                    plVar11 = *(long **)(lVar18 + 0x28);
                    lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7090);
                    func_0x0686c2f0(lVar18,0);
                    plVar25 = (long *)0x0;
                    if (plVar11 != (long *)0x0) goto code_r0x063828a0;
                  }
                }
              }
            }
          }
          else {
            plVar25 = *(long **)(lVar18 + 0x80);
            if (plVar25 != (long *)0x0) {
              lVar24 = *plVar25;
              uVar19 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar28) {
                    puVar13 = (undefined8 *)(lVar24 + (long)(*piVar21 + 5) * 0x10 + 0x138);
                    goto LAB_0638274c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar28,5);
LAB_0638274c:
              plVar11 = (long *)(*(code *)*puVar13)(plVar25,puVar13[1]);
              if (plVar11 != (long *)0x0) {
                if ((int)plVar11[4] == 1) goto LAB_06382768;
                if (*(char *)(lVar18 + 0x100) != '\0') {
                  return plVar11;
                }
                goto LAB_0638276c;
              }
            }
          }
        }
      }
      plVar14 = (long *)func_0x03280cac();
      *(undefined8 *)(puVar5 + -0x60) = 0x63828c4;
      *(long *)(puVar5 + -0x58) = lVar18;
      uVar10 = 0x63828d0;
      puVar5 = puVar5 + -0x60;
      plVar11 = plVar14;
    } while( true );
  }
  if (*(int *)(lVar18 + 0xe0) == 0) {
    func_0x03280b8c(lVar18);
    lVar18 = *plVar9;
  }
  uVar10 = **(undefined8 **)(lVar18 + 0xb8);
  lVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7080);
  func_0x053569b8(lVar18,uVar10,*(undefined8 *)PTR_DAT_077e7088,0);
  plVar9 = (long *)(*(long *)(*plVar9 + 0xb8) + 0x38);
  *plVar9 = lVar18;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar16) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar9;
code_r0x06382288:
  *(uint *)(lVar18 + 0x18) = uVar8 + 1;
  plVar9 = (long *)(lVar26 + (long)(int)uVar8 * 8 + 0x20);
  *plVar9 = (long)plVar12;
  goto SUB_032809c4;
code_r0x063828a0:
  lVar24 = *(long *)PTR_DAT_077e7098;
  *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
  *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  lVar26 = *(long *)(lVar24 + 0x38);
  if (lVar26 == 0) {
    func_0x03256878(lVar24);
    lVar26 = *(long *)(lVar24 + 0x38);
  }
  lVar24 = *(long *)(lVar26 + 8);
  *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x50);
  *(undefined **)(puVar5 + -0x50) = puVar27;
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
  *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  plVar12 = plVar11;
  if ((*(long *)(lVar24 + 0x38) == 0) &&
     (plVar12 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar24 + 0x38) == 0)) {
    plVar12 = (long *)func_0x03256878(lVar24);
  }
  if ((char)plVar11[10] != '\0') {
    return plVar12;
  }
  uVar10 = **(undefined8 **)(lVar24 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar22 = func_0x057a51c4(uVar10,0);
  lVar24 = 1;
  plVar12 = (long *)0x0;
  lVar26 = func_0x072869d0(plVar11,uVar22,0,1,0);
  if (lVar26 == 0) {
    auVar33 = func_0x03280cac();
    uVar22 = auVar33._8_8_;
    plVar25 = auVar33._0_8_;
    *(undefined8 *)(puVar5 + -0xb0) = unaff_x29;
    *(undefined8 *)(puVar5 + -0xa8) = 0x3ea51c0;
    *(undefined **)(puVar5 + -0xa0) = puVar15;
    *(undefined **)(puVar5 + -0x98) = puVar30;
    *(undefined **)(puVar5 + -0x90) = puVar29;
    *(long **)(puVar5 + -0x88) = plVar9;
    *(undefined8 *)(puVar5 + -0x80) = uVar10;
    *(long **)(puVar5 + -0x78) = plVar11;
    *(undefined8 *)(puVar5 + -0x70) = 0;
    *(long *)(puVar5 + -0x68) = lVar18;
    lVar18 = tpidr_el0;
    *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(lVar18 + 0x28);
    *(long **)(puVar5 + -0xc0) = plVar12;
    puVar13 = *(undefined8 **)(lVar24 + 0x38);
    plVar11 = plVar25;
    plVar14 = plVar12;
    if (puVar13 == (undefined8 *)0x0) {
      plVar11 = (long *)func_0x03280a18(PTR_DAT_0774e558);
      puVar13 = *(undefined8 **)(lVar24 + 0x38);
      if (puVar13 == (undefined8 *)0x0) {
        plVar11 = (long *)func_0x03256878(lVar24);
        puVar13 = *(undefined8 **)(lVar24 + 0x38);
      }
    }
    plVar9 = (long *)(ulong)*(uint *)(puVar13[1] + 0xfc);
    puVar29 = puVar5 + (-0xc0 - ((ulong)((long)plVar9 + 0xfU) & 0x1fffffff0));
    if ((char)plVar25[10] == '\0') {
      puVar30 = (undefined *)*puVar13;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar10 = func_0x057a51c4(puVar30,0);
      lVar26 = func_0x072869d0(plVar25,uVar10,uVar22,1,0);
      lVar24 = *(long *)(lVar24 + 0x38);
      plVar11 = plVar12;
      if (-1 < *(int *)(*(long *)(lVar24 + 8) + 0x28)) {
        plVar11 = (long *)(puVar5 + -0xc0);
      }
      plVar14 = plVar9;
      func_0x072ce970(puVar29,plVar11);
      lVar18 = func_0x03280b94(*(undefined8 *)(lVar24 + 8),puVar29);
      if (lVar26 != 0) {
        uVar10 = 0x3ea52d0;
        puVar4 = puVar29;
        lVar20 = lVar26;
        goto SUB_072852e4;
      }
      func_0x03280cac();
      uVar22 = 0;
    }
    else if (*(long *)(lVar18 + 0x28) == *(long *)(puVar5 + -0xb8)) {
      return plVar11;
    }
    auVar33 = func_0x072ce990();
    lVar18 = auVar33._8_8_;
    *(undefined8 *)(puVar29 + -0x20) = 0x3ea5304;
    *(undefined8 *)(puVar29 + -0x18) = uVar22;
    *(long *)(puVar29 + -0x10) = lVar24;
    *(long **)(puVar29 + -8) = plVar12;
    lVar24 = plVar14[7];
    if (lVar24 == 0) {
      func_0x03256878(plVar14);
      lVar24 = plVar14[7];
    }
    lVar20 = *(long *)(lVar24 + 8);
    *(undefined8 *)(puVar29 + -0x40) = *(undefined8 *)(puVar29 + -0x20);
    *(undefined **)(puVar29 + -0x30) = puVar29;
    *(long **)(puVar29 + -0x28) = plVar9;
    *(long **)(puVar29 + -0x20) = plVar25;
    *(undefined8 *)(puVar29 + -0x18) = *(undefined8 *)(puVar29 + -0x18);
    *(undefined8 *)(puVar29 + -0x10) = *(undefined8 *)(puVar29 + -0x10);
    *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
    plVar11 = *(long **)(lVar20 + 0x38);
    lVar24 = lVar18;
    lVar26 = lVar20;
    if (plVar11 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar11 = *(long **)(lVar20 + 0x38);
      if (plVar11 == (long *)0x0) {
        func_0x03256878(lVar20);
        plVar11 = *(long **)(lVar20 + 0x38);
      }
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x04053df4(lVar17,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 8));
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0x10);
      *plVar9 = lVar18;
      goto SUB_032809c4;
    }
    auVar32 = func_0x03280cac();
    *(undefined8 *)(puVar29 + -0x80) = 0x3ea5530;
    *(undefined8 *)(puVar29 + -0x70) = 0;
    *(long **)(puVar29 + -0x68) = plVar9;
    *(long *)(puVar29 + -0x60) = lVar18;
    *(long *)(puVar29 + -0x58) = lVar20;
    *(long *)(puVar29 + -0x50) = auVar33._0_8_;
    *(undefined8 *)(puVar29 + -0x48) = 0;
    plVar11 = *(long **)(lVar26 + 0x38);
    lVar18 = lVar24;
    lVar20 = lVar26;
    if (plVar11 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar11 = *(long **)(lVar26 + 0x38);
      if (plVar11 == (long *)0x0) {
        func_0x03256878(lVar26);
        plVar11 = *(long **)(lVar26 + 0x38);
      }
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x0404e308(lVar17,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 8));
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0x10);
      *plVar9 = lVar24;
      goto SUB_032809c4;
    }
    auVar33 = func_0x03280cac();
    *(undefined8 *)(puVar29 + -0xc0) = 0x3ea5644;
    *(undefined8 *)(puVar29 + -0xb0) = 0;
    *(long **)(puVar29 + -0xa8) = plVar9;
    *(long *)(puVar29 + -0xa0) = lVar24;
    *(long *)(puVar29 + -0x98) = lVar26;
    *(undefined1 (*) [16])(puVar29 + -0x90) = auVar32;
    plVar11 = *(long **)(lVar20 + 0x38);
    lVar24 = lVar18;
    lVar26 = lVar20;
    if (plVar11 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar11 = *(long **)(lVar20 + 0x38);
      if (plVar11 == (long *)0x0) {
        func_0x03256878(lVar20);
        plVar11 = *(long **)(lVar20 + 0x38);
      }
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))();
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0x10);
      *plVar9 = lVar18;
      goto SUB_032809c4;
    }
    auVar32 = func_0x03280cac();
    *(undefined8 *)(puVar29 + -0x100) = 0x3ea575c;
    *(undefined8 *)(puVar29 + -0xf0) = 0;
    *(long **)(puVar29 + -0xe8) = plVar9;
    *(long *)(puVar29 + -0xe0) = lVar18;
    *(long *)(puVar29 + -0xd8) = lVar20;
    *(undefined1 (*) [16])(puVar29 + -0xd0) = auVar33;
    plVar11 = *(long **)(lVar26 + 0x38);
    if (plVar11 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar11 = *(long **)(lVar26 + 0x38);
      if (plVar11 == (long *)0x0) {
        func_0x03256878(lVar26);
        plVar11 = *(long **)(lVar26 + 0x38);
      }
    }
    if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x38) + 8))();
    if (lVar18 != 0) {
      plVar9 = (long *)(lVar18 + 0x10);
      *plVar9 = lVar24;
      goto SUB_032809c4;
    }
    auVar33 = func_0x03280cac();
    lVar18 = auVar33._8_8_;
    plVar11 = auVar33._0_8_;
    *(undefined8 *)(puVar29 + -0x120) = 0x3ea5874;
    *(undefined1 (*) [16])(puVar29 + -0x110) = auVar32;
    plVar12 = *(long **)(lVar18 + 0x38);
    if (plVar12 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar12 = *(long **)(lVar18 + 0x38);
    }
    lVar18 = *plVar12;
    *(undefined8 *)(puVar29 + -0x130) = *(undefined8 *)(puVar29 + -0x120);
    *(long **)(puVar29 + -0x128) = plVar9;
    *(long *)(puVar29 + -0x120) = lVar24;
    *(long *)(puVar29 + -0x118) = lVar26;
    *(undefined8 *)(puVar29 + -0x110) = *(undefined8 *)(puVar29 + -0x110);
    *(undefined8 *)(puVar29 + -0x108) = *(undefined8 *)(puVar29 + -0x108);
    plVar9 = plVar11;
    if ((*(long *)(lVar18 + 0x38) == 0) &&
       (plVar9 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar18 + 0x38) == 0)) {
      plVar9 = (long *)func_0x03256878(lVar18);
    }
    puVar28 = PTR_DAT_0774e558;
    if ((char)plVar11[10] != '\0') {
      return plVar9;
    }
    uVar10 = **(undefined8 **)(lVar18 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x057a51c4(uVar10,0);
    lVar26 = func_0x072869d0(plVar11,uVar10,0,0,0);
    if (lVar26 == 0) {
      return (long *)0x0;
    }
    uVar10 = **(undefined8 **)(lVar18 + 0x38);
    if (*(int *)(*(long *)puVar28 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar10 = func_0x057a51c4(uVar10,0);
    lVar24 = func_0x057c1ad4(uVar10,0);
    lVar20 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    if (lVar24 == 0) {
LAB_03ea5b18:
      lVar18 = 0;
    }
    else {
      lVar18 = func_0x03280b90(lVar24,lVar20);
      if (lVar18 == 0) {
        func_0x03281048(lVar24,lVar20);
        goto LAB_03ea5b18;
      }
    }
    lVar24 = *(long *)(puVar29 + -0x110);
    plVar12 = *(long **)(puVar29 + -0x108);
    plVar25 = *(long **)(puVar29 + -0x120);
    lVar20 = *(long *)(puVar29 + -0x118);
    puVar4 = puVar29 + -0x100;
    uVar10 = *(undefined8 *)(puVar29 + -0x130);
    plVar9 = *(long **)(puVar29 + -0x128);
    puVar29 = (undefined *)0x0;
  }
  else {
    lVar24 = *(long *)(puVar5 + -0x40);
    plVar12 = *(long **)(puVar5 + -0x38);
    plVar25 = *(long **)(puVar5 + -0x50);
    uVar10 = *(undefined8 *)(puVar5 + -0x60);
    puVar4 = puVar5 + -0x30;
    lVar20 = *(long *)(puVar5 + -0x48);
  }
SUB_072852e4:
  lVar17 = 0;
  puVar6 = puVar4 + -0x30;
  *(undefined8 *)(puVar4 + -0x30) = uVar10;
  *(long **)(puVar4 + -0x20) = plVar25;
  *(long *)(puVar4 + -0x18) = lVar20;
  *(long *)(puVar4 + -0x10) = lVar24;
  *(long **)(puVar4 + -8) = plVar12;
  if ((bRam0000000007e3419a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dee8);
    func_0x03280a18(PTR_DAT_0785def0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0785def8);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07779590);
    bRam0000000007e3419a = 1;
  }
  puVar28 = PTR_DAT_07779590;
  if (lVar18 != 0) {
    uVar10 = func_0x057dadc4(lVar18,0);
    puVar23 = *(undefined **)(lVar26 + 0x20);
    if (*(int *)(*(long *)puVar28 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar28);
    }
    uVar8 = func_0x0727e0ec(uVar10,puVar23);
    plVar9 = (long *)(ulong)(uVar8 & 1);
    uVar10 = 0x728539c;
    goto SUB_0727dc78;
  }
  func_0x03280cac();
  func_0x03280cac();
  lVar18 = 0;
  while( true ) {
    func_0x03280ca4(lVar18);
    auVar31 = func_0x03280cac();
    uVar10 = auVar31._0_8_;
    if (auVar31._8_4_ != 1) break;
    plVar11 = (long *)func_0x072ce910(uVar10);
    lVar18 = *plVar11;
    func_0x072ce920();
    uVar19 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_072854e8;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    lVar17 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
    plVar11 = (long *)(*(code *)*puVar13)(0x7e34000,puVar13[1]);
    if (lVar18 == 0) {
      return plVar11;
    }
  }
  uVar19 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
        puVar13 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_072855b0;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  lVar17 = 0;
  puVar13 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
  (*(code *)*puVar13)(0x7e34000,puVar13[1]);
  func_0x03365958(uVar10);
  func_0x03280ca4(0);
  auVar33 = func_0x02f09514();
  puVar28 = PTR_DAT_0785dec8;
  lVar26 = auVar33._8_8_;
  lVar24 = auVar33._0_8_;
  *(undefined8 *)(puVar4 + -0x70) = 0x72855d4;
  *(undefined **)(puVar4 + -0x68) = puVar30;
  *(undefined **)(puVar4 + -0x60) = puVar29;
  *(long **)(puVar4 + -0x58) = plVar9;
  *(long **)(puVar4 + -0x50) = plVar25;
  *(undefined8 *)(puVar4 + -0x48) = uVar10;
  *(undefined8 *)(puVar4 + -0x40) = 0;
  *(undefined8 *)(puVar4 + -0x38) = 0x7e34000;
  plVar11 = (long *)0x7e34000;
  if ((bRam0000000007e3419b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dec8);
    func_0x03280a18(PTR_DAT_0785df00);
    func_0x03280a18(PTR_DAT_0785ded0);
    func_0x03280a18(PTR_DAT_0785ded8);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785df08);
    bRam0000000007e3419b = 1;
  }
  plVar9 = (long *)func_0x03e0c264(lVar26,*(undefined8 *)puVar28);
  puVar27 = PTR_DAT_0785df00;
  puVar23 = PTR_DAT_0785ded8;
  if (((ulong)plVar9 & 1) == 0) {
LAB_07285770:
    if (lVar26 != 0) {
      if (0 < *(int *)(lVar26 + 0x18)) {
        plVar11 = (long *)0x0;
        do {
          puVar15 = (undefined *)func_0x0414419c(lVar26,plVar11,*(undefined8 *)puVar23);
          puVar29 = puVar23;
          if (*(long *)(lVar24 + 0x10) == 0) goto LAB_07285808;
          plVar9 = (long *)func_0x041447fc(*(long *)(lVar24 + 0x10),puVar15,*(undefined8 *)puVar27);
          puVar28 = puVar15;
          if (((ulong)plVar9 & 1) != 0) {
            if ((puVar15 == (undefined *)0x0) || (lVar18 = *(long *)(puVar15 + 0x18), lVar18 == 0))
            goto LAB_07285808;
            plVar9 = (long *)(**(code **)(lVar18 + 0x18))
                                       (*(undefined8 *)(lVar18 + 0x40),lVar17,
                                        *(undefined8 *)(lVar18 + 0x28));
          }
          uVar8 = (int)plVar11 + 1;
          plVar11 = (long *)(ulong)uVar8;
        } while ((int)uVar8 < *(int *)(lVar26 + 0x18));
      }
      return plVar9;
    }
LAB_07285808:
    func_0x03280cac();
    plVar9 = plVar11;
    puVar27 = puVar28;
LAB_0728580c:
    func_0x03280cb4();
  }
  else {
    if (*(int *)(lVar24 + 0x30) != 2) {
      if (*(int *)(lVar24 + 0x30) != 1) goto LAB_07285770;
      uVar10 = func_0x03280a2c(PTR_DAT_0774e5a0);
      lVar26 = func_0x03280afc(uVar10,1);
      func_0x02f0b18c(lVar17);
      uVar10 = func_0x057dadc4(lVar17,0);
      func_0x02f0b18c(lVar26);
      func_0x02f176b4(lVar26,uVar10);
      func_0x02f0965c(lVar26,0,uVar10);
      uVar10 = func_0x03280a2c(PTR_DAT_0785df08);
      lVar17 = func_0x0727df38(uVar10,lVar26);
      uVar10 = func_0x03280a2c(PTR_DAT_0785df10);
      func_0x03280b7c(lVar17,uVar10);
    }
    plVar9 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if ((lVar17 == 0) ||
       (puVar27 = (undefined *)func_0x057dadc4(lVar17,0), plVar11 = plVar9, plVar9 == (long *)0x0))
    goto LAB_07285808;
    if ((puVar27 == (undefined *)0x0) ||
       (lVar18 = func_0x03280b90(puVar27,*(undefined8 *)(*plVar9 + 0x40)), lVar18 != 0)) {
      if ((int)plVar9[3] != 0) {
        plVar9 = plVar9 + 4;
        *plVar9 = (long)puVar27;
        goto SUB_032809c4;
      }
      goto LAB_0728580c;
    }
  }
  uVar10 = func_0x03280cd0();
  auVar33 = func_0x03280b7c(uVar10,0);
  *(undefined8 *)(puVar4 + -0x80) = 0x728581c;
  lVar18 = *(long *)(auVar33._0_8_ + 0x18);
  if (lVar18 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar9 = (long *)(**(code **)(lVar18 + 0x18))
                               (*(undefined8 *)(lVar18 + 0x40),auVar33._8_8_,
                                *(undefined8 *)(lVar18 + 0x28));
    return plVar9;
  }
  lVar18 = func_0x03280cac();
  puVar23 = PTR_DAT_0785df18;
  puVar6 = puVar4 + -0xc0;
  *(undefined8 *)(puVar4 + -0xc0) = 0x7285840;
  *(undefined **)(puVar4 + -0xb0) = puVar29;
  *(undefined **)(puVar4 + -0xa8) = puVar27;
  *(long **)(puVar4 + -0xa0) = plVar9;
  *(long *)(puVar4 + -0x98) = lVar24;
  *(long *)(puVar4 + -0x90) = lVar26;
  *(long *)(puVar4 + -0x88) = lVar17;
  lVar26 = 0x7e34000;
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
  plVar9 = (long *)(ulong)*(byte *)(lVar18 + 0x34);
  uVar10 = 0x72858f0;
SUB_0727dc78:
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  *(undefined8 *)(puVar6 + -0x10) = uVar10;
  *(undefined **)(puVar6 + -8) = puVar23;
  uVar10 = func_0x03280a2c(PTR_DAT_0785dbe8);
  puVar28 = PTR_DAT_0777c990;
  *(undefined8 *)(puVar6 + -0x30) = 0x727dc94;
  *(long *)(puVar6 + -0x28) = lVar26;
  *(long *)(puVar6 + -0x20) = lVar18;
  *(undefined **)(puVar6 + -0x18) = puVar23;
  if ((bRam0000000007e34146 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c990);
    bRam0000000007e34146 = 1;
  }
  plVar9 = (long *)func_0x03280ca0(*(undefined8 *)puVar28);
  func_0x072c77f8(plVar9,uVar10,0);
  return plVar9;
}

