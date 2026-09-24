/* Ghidra 12.1.2 native pseudocode; RVA 0x678BEE8; MergeEngine.ECS.Systems.Items.CollectSystem.CreateSlidingIcon; status ok */


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
/* WARNING: Removing unreachable block (ram,0x03ea57f0) */
/* WARNING: Removing unreachable block (ram,0x03ea5834) */
/* WARNING: Removing unreachable block (ram,0x03ea5838) */
/* WARNING: Removing unreachable block (ram,0x07286a90) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

long * MergeEngine_ECS_Systems_Items_CollectSystem__CreateSlidingIcon
                 (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ****ppppuVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 *******unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined *puVar27;
  long *unaff_x22;
  undefined8 *******unaff_x23;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  long alStack_1c0 [6];
  long alStack_190 [29];
  undefined *puStack_a8;
  long alStack_a0 [2];
  undefined8 *******pppppppuStack_90;
  long lStack_88;
  
  if ((bRam0000000007e28d45 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_0777cff0);
    func_0x03280a18(PTR_DAT_0777cff8);
    func_0x03280a18(PTR_DAT_077cfbb0);
    func_0x03280a18(PTR_DAT_077cfbb8);
    func_0x03280a18(PTR_DAT_077cfbc0);
    func_0x03280a18(PTR_DAT_0777d008);
    bRam0000000007e28d45 = 1;
  }
  puVar29 = PTR_DAT_077d7588;
  puVar27 = (undefined *)0x7e28000;
  if (param_4 != 0) {
    lVar10 = func_0x03ced81c(param_4,*(undefined8 *)PTR_DAT_077d75b8);
    puVar11 = (undefined *)func_0x03ced81c(param_4,*(undefined8 *)puVar29);
    plVar23 = *(long **)(param_3 + 0x58);
    puVar27 = puVar29;
    if (((plVar23 != (long *)0x0) &&
        (plVar23 = (long *)(**(code **)(*plVar23 + 0x208))
                                     (plVar23,*(undefined8 *)(*plVar23 + 0x210)),
        puVar29 = PTR_DAT_0777d008, puVar27 = puVar11, lVar10 != 0)) && (plVar23 != (long *)0x0)) {
      lVar24 = *plVar23;
      uVar28 = *(undefined8 *)(lVar10 + 0x30);
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077cc678) {
            puVar12 = (undefined8 *)(lVar24 + (long)(*piVar26 + 0x20) * 0x10 + 0x138);
            goto LAB_0688c048;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_077cc678,0x20);
LAB_0688c048:
      uVar30 = (*(code *)*puVar12)(plVar23,uVar28,0,puVar12[1]);
      lVar10 = func_0x03280afc(*(undefined8 *)puVar29,1);
      puVar29 = PTR_DAT_0777cff8;
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0688c16c;
        *(undefined4 *)(lVar10 + 0x20) = uVar30;
        *(undefined4 *)(lVar10 + 0x24) = param_2;
        puVar16 = PTR_DAT_0777cff0;
        uVar28 = func_0x03280ca0(*(undefined8 *)puVar29);
        func_0x041d8678(uVar28,lVar10,*(undefined8 *)puVar16);
        puVar29 = PTR_DAT_077cfbc0;
        if (puVar11 != (undefined *)0x0) {
          puVar27 = *(undefined **)(puVar11 + 0x110);
          uVar30 = *(undefined4 *)(param_4 + 0x2c);
          uVar3 = *(undefined4 *)(param_4 + 0x30);
          uVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cfbb8);
          lStack_88 = 0;
          pppppppuStack_90 = (undefined8 *******)((ulong)pppppppuStack_90 & 0xffffffffffffff00);
          func_0x0677d440(0,0x3f800000,uVar13,uVar30,uVar28,puVar27,1,1,uVar3,0);
          plVar23 = *(long **)(param_3 + 0x28);
          param_4 = func_0x03280ca0(*(undefined8 *)puVar29);
          func_0x0686cadc(param_4,uVar13,0);
          param_3 = 0;
          if (plVar23 != (long *)0x0) {
            lVar10 = *(long *)PTR_DAT_077cfbb0;
            lVar24 = *(long *)(lVar10 + 0x38);
            if (lVar24 == 0) {
              func_0x03256878(lVar10);
              lVar24 = *(long *)(lVar10 + 0x38);
            }
            lVar10 = *(long *)(lVar24 + 8);
            plVar9 = plVar23;
            if ((*(long *)(lVar10 + 0x38) == 0) &&
               (plVar9 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar10 + 0x38) == 0))
            {
              plVar9 = (long *)func_0x03256878(lVar10);
            }
            if ((char)plVar23[10] != '\0') {
              return plVar9;
            }
            uVar28 = **(undefined8 **)(lVar10 + 0x38);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar28 = func_0x057a51c4(uVar28,0);
            lVar24 = 1;
            pppppppuVar17 = (undefined8 *******)0x0;
            lVar10 = func_0x072869d0(plVar23,uVar28,0,1,0);
            if (lVar10 == 0) {
              auVar32 = func_0x03280cac();
              uVar28 = auVar32._8_8_;
              unaff_x22 = auVar32._0_8_;
              lVar10 = tpidr_el0;
              lStack_88 = *(long *)(lVar10 + 0x28);
              puVar12 = *(undefined8 **)(lVar24 + 0x38);
              plVar23 = unaff_x22;
              pppppppuVar18 = pppppppuVar17;
              pppppppuStack_90 = pppppppuVar17;
              if (puVar12 == (undefined8 *)0x0) {
                plVar23 = (long *)func_0x03280a18(PTR_DAT_0774e558);
                puVar12 = *(undefined8 **)(lVar24 + 0x38);
                if (puVar12 == (undefined8 *)0x0) {
                  plVar23 = (long *)func_0x03256878(lVar24);
                  puVar12 = *(undefined8 **)(lVar24 + 0x38);
                }
              }
              unaff_x23 = (undefined8 *******)(ulong)*(uint *)(puVar12[1] + 0xfc);
              lVar14 = -((long)unaff_x23 + 0xfU & 0x1fffffff0);
              unaff_x24 = (undefined *)((long)&pppppppuStack_90 + lVar14);
              if ((char)unaff_x22[10] == '\0') {
                unaff_x25 = *puVar12;
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar13 = func_0x057a51c4(unaff_x25,0);
                lVar10 = func_0x072869d0(unaff_x22,uVar13,uVar28,1,0);
                unaff_x20 = *(long *)(lVar24 + 0x38);
                pppppppuVar2 = pppppppuVar17;
                if (-1 < *(int *)(*(long *)(unaff_x20 + 8) + 0x28)) {
                  pppppppuVar2 = &pppppppuStack_90;
                }
                pppppppuVar18 = unaff_x23;
                func_0x072ce970(unaff_x24,pppppppuVar2);
                param_4 = func_0x03280b94(*(undefined8 *)(unaff_x20 + 8),unaff_x24);
                if (lVar10 != 0) {
                  unaff_x30 = 0x3ea52d0;
                  register0x00000008 = (BADSPACEBASE *)unaff_x24;
                  unaff_x19 = pppppppuVar17;
                  unaff_x21 = lVar10;
                  goto SUB_072852e4;
                }
                func_0x03280cac();
                uVar28 = 0;
              }
              else {
                unaff_x20 = lVar24;
                if (*(long *)(lVar10 + 0x28) == lStack_88) {
                  return plVar23;
                }
              }
              auVar32 = func_0x072ce990();
              lVar10 = auVar32._8_8_;
              *(undefined8 *)((long)alStack_190 + lVar14 + 0xe0) = 0x3ea5304;
              *(undefined8 *)((long)&puStack_a8 + lVar14) = uVar28;
              *(long *)((long)alStack_a0 + lVar14) = unaff_x20;
              *(undefined8 ********)((long)alStack_a0 + lVar14 + 8) = pppppppuVar17;
              ppppppuVar21 = pppppppuVar18[7];
              if (ppppppuVar21 == (undefined8 ******)0x0) {
                func_0x03256878(pppppppuVar18);
                ppppppuVar21 = pppppppuVar18[7];
              }
              pppppuVar19 = ppppppuVar21[1];
              uVar28 = *(undefined8 *)((long)alStack_a0 + lVar14);
              uVar13 = *(undefined8 *)((long)alStack_a0 + lVar14 + 8);
              uVar4 = *(undefined8 *)((long)&puStack_a8 + lVar14);
              *(undefined8 *)((long)alStack_190 + lVar14 + 0xc0) =
                   *(undefined8 *)((long)alStack_190 + lVar14 + 0xe0);
              *(undefined **)((long)alStack_190 + lVar14 + 0xd0) = unaff_x24;
              *(undefined8 ********)((long)alStack_190 + lVar14 + 0xd8) = unaff_x23;
              *(long **)((long)alStack_190 + lVar14 + 0xe0) = unaff_x22;
              *(undefined8 *)((long)&puStack_a8 + lVar14) = uVar4;
              *(undefined8 *)((long)alStack_a0 + lVar14) = uVar28;
              *(undefined8 *)((long)alStack_a0 + lVar14 + 8) = uVar13;
              ppppuVar22 = pppppuVar19[7];
              lVar24 = lVar10;
              pppppuVar20 = pppppuVar19;
              if (ppppuVar22 == (undefined8 ****)0x0) {
                func_0x03280a18(PTR_DAT_07750ac8);
                func_0x03280a18(PTR_DAT_0774e558);
                ppppuVar22 = pppppuVar19[7];
                if (ppppuVar22 == (undefined8 ****)0x0) {
                  func_0x03256878(pppppuVar19);
                  ppppuVar22 = pppppuVar19[7];
                }
              }
              if ((*(byte *)((long)*ppppuVar22 + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar15 = func_0x03280ca0();
              func_0x04053df4(lVar15,pppppuVar19[7][1]);
              if (lVar15 != 0) {
                plVar23 = (long *)(lVar15 + 0x10);
                *plVar23 = lVar10;
                goto SUB_032809c4;
              }
              auVar31 = func_0x03280cac();
              *(undefined8 *)((long)alStack_190 + lVar14 + 0x80) = 0x3ea5530;
              *(undefined8 *)((long)alStack_190 + lVar14 + 0x90) = 0;
              *(undefined8 ********)((long)alStack_190 + lVar14 + 0x98) = unaff_x23;
              *(long *)((long)alStack_190 + lVar14 + 0xa0) = lVar10;
              *(undefined8 ******)((long)alStack_190 + lVar14 + 0xa8) = pppppuVar19;
              *(long *)((long)alStack_190 + lVar14 + 0xb0) = auVar32._0_8_;
              *(undefined8 *)((long)alStack_190 + lVar14 + 0xb8) = 0;
              ppppuVar22 = pppppuVar20[7];
              lVar10 = lVar24;
              pppppuVar19 = pppppuVar20;
              if (ppppuVar22 == (undefined8 ****)0x0) {
                func_0x03280a18(PTR_DAT_07750ac8);
                func_0x03280a18(PTR_DAT_0774e558);
                ppppuVar22 = pppppuVar20[7];
                if (ppppuVar22 == (undefined8 ****)0x0) {
                  func_0x03256878(pppppuVar20);
                  ppppuVar22 = pppppuVar20[7];
                }
              }
              if ((*(byte *)((long)*ppppuVar22 + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar15 = func_0x03280ca0();
              func_0x0404e308(lVar15,pppppuVar20[7][1]);
              if (lVar15 != 0) {
                plVar23 = (long *)(lVar15 + 0x10);
                *plVar23 = lVar24;
                goto SUB_032809c4;
              }
              auVar32 = func_0x03280cac();
              *(undefined8 *)((long)alStack_190 + lVar14 + 0x40) = 0x3ea5644;
              *(undefined8 *)((long)alStack_190 + lVar14 + 0x50) = 0;
              *(undefined8 ********)((long)alStack_190 + lVar14 + 0x58) = unaff_x23;
              *(long *)((long)alStack_190 + lVar14 + 0x60) = lVar24;
              *(undefined8 ******)((long)alStack_190 + lVar14 + 0x68) = pppppuVar20;
              *(long *)((long)alStack_190 + lVar14 + 0x70) = auVar31._0_8_;
              *(long *)((long)alStack_190 + lVar14 + 0x78) = auVar31._8_8_;
              ppppuVar22 = pppppuVar19[7];
              lVar24 = lVar10;
              pppppuVar20 = pppppuVar19;
              if (ppppuVar22 == (undefined8 ****)0x0) {
                func_0x03280a18(PTR_DAT_07750ac8);
                func_0x03280a18(PTR_DAT_0774e558);
                ppppuVar22 = pppppuVar19[7];
                if (ppppuVar22 == (undefined8 ****)0x0) {
                  func_0x03256878(pppppuVar19);
                  ppppuVar22 = pppppuVar19[7];
                }
              }
              if ((*(byte *)((long)*ppppuVar22 + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar15 = func_0x03280ca0();
              (*(code *)*pppppuVar19[7][1])();
              if (lVar15 != 0) {
                plVar23 = (long *)(lVar15 + 0x10);
                *plVar23 = lVar10;
                goto SUB_032809c4;
              }
              auVar31 = func_0x03280cac();
              *(undefined8 *)((long)alStack_190 + lVar14) = 0x3ea575c;
              *(undefined8 *)((long)alStack_190 + lVar14 + 0x10) = 0;
              *(undefined8 ********)((long)alStack_190 + lVar14 + 0x18) = unaff_x23;
              *(long *)((long)alStack_190 + lVar14 + 0x20) = lVar10;
              *(undefined8 ******)((long)alStack_190 + lVar14 + 0x28) = pppppuVar19;
              *(long *)((long)alStack_190 + lVar14 + 0x30) = auVar32._0_8_;
              *(long *)((long)alStack_190 + lVar14 + 0x38) = auVar32._8_8_;
              ppppuVar22 = pppppuVar20[7];
              if (ppppuVar22 == (undefined8 ****)0x0) {
                func_0x03280a18(PTR_DAT_07750ac8);
                func_0x03280a18(PTR_DAT_0774e558);
                ppppuVar22 = pppppuVar20[7];
                if (ppppuVar22 == (undefined8 ****)0x0) {
                  func_0x03256878(pppppuVar20);
                  ppppuVar22 = pppppuVar20[7];
                }
              }
              if ((*(byte *)((long)*ppppuVar22 + 0x135) & 1) == 0) {
                func_0x0325681c();
              }
              lVar10 = func_0x03280ca0();
              (*(code *)*pppppuVar20[7][1])();
              if (lVar10 != 0) {
                plVar23 = (long *)(lVar10 + 0x10);
                *plVar23 = lVar24;
                goto SUB_032809c4;
              }
              auVar32 = func_0x03280cac();
              lVar10 = auVar32._8_8_;
              plVar23 = auVar32._0_8_;
              *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x10) = 0x3ea5874;
              *(long *)((long)alStack_1c0 + lVar14 + 0x20) = auVar31._0_8_;
              *(long *)((long)alStack_1c0 + lVar14 + 0x28) = auVar31._8_8_;
              plVar9 = *(long **)(lVar10 + 0x38);
              if (plVar9 == (long *)0x0) {
                func_0x03256878(lVar10);
                plVar9 = *(long **)(lVar10 + 0x38);
              }
              lVar15 = *plVar9;
              *(undefined8 *)((long)alStack_1c0 + lVar14) =
                   *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x10);
              *(undefined8 ********)((long)alStack_1c0 + lVar14 + 8) = unaff_x23;
              *(long *)((long)alStack_1c0 + lVar14 + 0x10) = lVar24;
              *(undefined8 ******)((long)alStack_1c0 + lVar14 + 0x18) = pppppuVar20;
              *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x20) =
                   *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x20);
              *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x28) =
                   *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x28);
              plVar9 = plVar23;
              if ((*(long *)(lVar15 + 0x38) == 0) &&
                 (plVar9 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar15 + 0x38) == 0)
                 ) {
                plVar9 = (long *)func_0x03256878(lVar15);
              }
              puVar29 = PTR_DAT_0774e558;
              if ((char)plVar23[10] != '\0') {
                return plVar9;
              }
              uVar28 = **(undefined8 **)(lVar15 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar28 = func_0x057a51c4(uVar28,0);
              lVar10 = func_0x072869d0(plVar23,uVar28,0,0,0);
              if (lVar10 == 0) {
                return (long *)0x0;
              }
              uVar28 = **(undefined8 **)(lVar15 + 0x38);
              if (*(int *)(*(long *)puVar29 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar28 = func_0x057a51c4(uVar28,0);
              lVar24 = func_0x057c1ad4(uVar28,0);
              lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 8);
              if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = func_0x0325681c(lVar15);
              }
              if (lVar24 == 0) {
LAB_03ea5b18:
                param_4 = 0;
              }
              else {
                param_4 = func_0x03280b90(lVar24,lVar15);
                if (param_4 == 0) {
                  func_0x03281048(lVar24,lVar15);
                  goto LAB_03ea5b18;
                }
              }
              unaff_x20 = *(long *)((long)alStack_1c0 + lVar14 + 0x20);
              unaff_x19 = *(undefined8 ********)((long)alStack_1c0 + lVar14 + 0x28);
              unaff_x22 = *(long **)((long)alStack_1c0 + lVar14 + 0x10);
              unaff_x21 = *(long *)((long)alStack_1c0 + lVar14 + 0x18);
              unaff_x30 = *(undefined8 *)((long)alStack_1c0 + lVar14);
              unaff_x23 = *(undefined8 ********)((long)alStack_1c0 + lVar14 + 8);
              unaff_x24 = (undefined *)0x0;
              register0x00000008 = (BADSPACEBASE *)((long)alStack_190 + lVar14);
            }
SUB_072852e4:
            lVar24 = 0;
            puVar7 = (undefined1 *)((long)register0x00000008 + -0x30);
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
            puVar29 = PTR_DAT_07779590;
            if (param_4 != 0) {
              uVar28 = func_0x057dadc4(param_4,0);
              puVar27 = *(undefined **)(lVar10 + 0x20);
              if (*(int *)(*(long *)puVar29 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)puVar29);
              }
              uVar8 = func_0x0727e0ec(uVar28,puVar27);
              plVar23 = (long *)(ulong)(uVar8 & 1);
              uVar28 = 0x728539c;
              goto SUB_0727dc78;
            }
            func_0x03280cac();
            func_0x03280cac();
            lVar10 = 0;
            while( true ) {
              func_0x03280ca4(lVar10);
              auVar33 = func_0x03280cac();
              uVar28 = auVar33._0_8_;
              if (auVar33._8_4_ != 1) break;
              plVar23 = (long *)func_0x072ce910(uVar28);
              lVar10 = *plVar23;
              func_0x072ce920();
              uVar25 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
              if (uVar25 != 0) {
                piVar26 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
                    puVar12 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_072854e8;
                  }
                  uVar25 = uVar25 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar25 != 0);
              }
              lVar24 = 0;
              puVar12 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
              plVar23 = (long *)(*(code *)*puVar12)(0x7e34000,puVar12[1]);
              if (lVar10 == 0) {
                return plVar23;
              }
            }
            uVar25 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
            if (uVar25 != 0) {
              piVar26 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
                  puVar12 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_072855b0;
                }
                uVar25 = uVar25 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar25 != 0);
            }
            lVar24 = 0;
            puVar12 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
            (*(code *)*puVar12)(0x7e34000,puVar12[1]);
            func_0x03365958(uVar28);
            func_0x03280ca4(0);
            auVar32 = func_0x02f09514();
            puVar29 = PTR_DAT_0785dec8;
            lVar14 = auVar32._8_8_;
            lVar10 = auVar32._0_8_;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0x72855d4;
            *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x25;
            *(undefined **)((long)register0x00000008 + -0x60) = unaff_x24;
            *(undefined8 ********)((long)register0x00000008 + -0x58) = unaff_x23;
            *(long **)((long)register0x00000008 + -0x50) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x48) = uVar28;
            *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x38) = 0x7e34000;
            plVar9 = (long *)0x7e34000;
            if ((bRam0000000007e3419b & 1) == 0) {
              func_0x03280a18(PTR_DAT_0785dec8);
              func_0x03280a18(PTR_DAT_0785df00);
              func_0x03280a18(PTR_DAT_0785ded0);
              func_0x03280a18(PTR_DAT_0785ded8);
              func_0x03280a18(PTR_DAT_0774e5a0);
              func_0x03280a18(PTR_DAT_0785df08);
              bRam0000000007e3419b = 1;
            }
            plVar23 = (long *)func_0x03e0c264(lVar14,*(undefined8 *)puVar29);
            puVar11 = PTR_DAT_0785df00;
            puVar27 = PTR_DAT_0785ded8;
            if (((ulong)plVar23 & 1) == 0) {
LAB_07285770:
              if (lVar14 != 0) {
                if (0 < *(int *)(lVar14 + 0x18)) {
                  plVar9 = (long *)0x0;
                  do {
                    puVar16 = (undefined *)func_0x0414419c(lVar14,plVar9,*(undefined8 *)puVar27);
                    unaff_x24 = puVar27;
                    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_07285808;
                    plVar23 = (long *)func_0x041447fc(*(long *)(lVar10 + 0x10),puVar16,
                                                      *(undefined8 *)puVar11);
                    puVar29 = puVar16;
                    if (((ulong)plVar23 & 1) != 0) {
                      if ((puVar16 == (undefined *)0x0) ||
                         (lVar15 = *(long *)(puVar16 + 0x18), lVar15 == 0)) goto LAB_07285808;
                      plVar23 = (long *)(**(code **)(lVar15 + 0x18))
                                                  (*(undefined8 *)(lVar15 + 0x40),lVar24,
                                                   *(undefined8 *)(lVar15 + 0x28));
                    }
                    uVar8 = (int)plVar9 + 1;
                    plVar9 = (long *)(ulong)uVar8;
                  } while ((int)uVar8 < *(int *)(lVar14 + 0x18));
                }
                return plVar23;
              }
LAB_07285808:
              func_0x03280cac();
              plVar23 = plVar9;
              puVar11 = puVar29;
LAB_0728580c:
              func_0x03280cb4();
            }
            else {
              if (*(int *)(lVar10 + 0x30) != 2) {
                if (*(int *)(lVar10 + 0x30) != 1) goto LAB_07285770;
                uVar28 = func_0x03280a2c(PTR_DAT_0774e5a0);
                lVar14 = func_0x03280afc(uVar28,1);
                func_0x02f0b18c(lVar24);
                uVar28 = func_0x057dadc4(lVar24,0);
                func_0x02f0b18c(lVar14);
                func_0x02f176b4(lVar14,uVar28);
                func_0x02f0965c(lVar14,0,uVar28);
                uVar28 = func_0x03280a2c(PTR_DAT_0785df08);
                lVar24 = func_0x0727df38(uVar28,lVar14);
                uVar28 = func_0x03280a2c(PTR_DAT_0785df10);
                func_0x03280b7c(lVar24,uVar28);
              }
              plVar23 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
              if ((lVar24 == 0) ||
                 (puVar11 = (undefined *)func_0x057dadc4(lVar24,0), plVar9 = plVar23,
                 plVar23 == (long *)0x0)) goto LAB_07285808;
              if ((puVar11 == (undefined *)0x0) ||
                 (lVar15 = func_0x03280b90(puVar11,*(undefined8 *)(*plVar23 + 0x40)), lVar15 != 0))
              {
                if ((int)plVar23[3] != 0) {
                  plVar23 = plVar23 + 4;
                  *plVar23 = (long)puVar11;
SUB_032809c4:
                  if (iRam00000000080486b8 != 0) {
                    puVar1 = (ulong *)(((ulong)plVar23 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar6) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar23 >> 0xc & 0x3f);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  return plVar23;
                }
                goto LAB_0728580c;
              }
            }
            uVar28 = func_0x03280cd0();
            auVar32 = func_0x03280b7c(uVar28,0);
            *(undefined8 *)((long)register0x00000008 + -0x80) = 0x728581c;
            lVar15 = *(long *)(auVar32._0_8_ + 0x18);
            if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar23 = (long *)(**(code **)(lVar15 + 0x18))
                                          (*(undefined8 *)(lVar15 + 0x40),auVar32._8_8_,
                                           *(undefined8 *)(lVar15 + 0x28));
              return plVar23;
            }
            param_4 = func_0x03280cac();
            puVar27 = PTR_DAT_0785df18;
            puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x7285840;
            *(undefined **)((long)register0x00000008 + -0xb0) = unaff_x24;
            *(undefined **)((long)register0x00000008 + -0xa8) = puVar11;
            *(long **)((long)register0x00000008 + -0xa0) = plVar23;
            *(long *)((long)register0x00000008 + -0x98) = lVar10;
            *(long *)((long)register0x00000008 + -0x90) = lVar14;
            *(long *)((long)register0x00000008 + -0x88) = lVar24;
            lVar10 = 0x7e34000;
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
            plVar23 = (long *)(ulong)*(byte *)(param_4 + 0x34);
            uVar28 = 0x72858f0;
SUB_0727dc78:
            if (((ulong)plVar23 & 1) == 0) {
              *(undefined8 *)(puVar7 + -0x10) = uVar28;
              *(undefined **)(puVar7 + -8) = puVar27;
              uVar28 = func_0x03280a2c(PTR_DAT_0785dbe8);
              puVar29 = PTR_DAT_0777c990;
              *(undefined8 *)(puVar7 + -0x30) = 0x727dc94;
              *(long *)(puVar7 + -0x28) = lVar10;
              *(long *)(puVar7 + -0x20) = param_4;
              *(undefined **)(puVar7 + -0x18) = puVar27;
              if ((bRam0000000007e34146 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777c990);
                bRam0000000007e34146 = 1;
              }
              plVar23 = (long *)func_0x03280ca0(*(undefined8 *)puVar29);
              func_0x072c77f8(plVar23,uVar28,0);
              return plVar23;
            }
            return plVar23;
          }
        }
      }
    }
  }
  func_0x03280cac();
LAB_0688c16c:
  plVar23 = (long *)func_0x03280cb4();
  puVar29 = PTR_DAT_07810350;
  alStack_190[0x1c] = 0x688c170;
  if ((bRam0000000007e28d47 & 1) == 0) {
    puStack_a8 = puVar27;
    alStack_a0[0] = param_4;
    alStack_a0[1] = param_3;
    func_0x03280a18(PTR_DAT_07810350);
    bRam0000000007e28d47 = 1;
  }
  uVar28 = *(undefined8 *)puVar29;
  return plVar23;
}

