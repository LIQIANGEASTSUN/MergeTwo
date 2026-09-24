/* Ghidra 12.1.2 native pseudocode; RVA 0x679C4FC; MergeEngine.ECS.Systems.Items.Producers.SpawnerSystem.TrySpawn; status ok */

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

long * MergeEngine_ECS_Systems_Items_Producers_SpawnerSystem__TrySpawn
                 (long param_1,long param_2,long param_3,undefined *param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  long unaff_x19;
  undefined *puVar25;
  long unaff_x20;
  long lVar26;
  long unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 uVar27;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plVar28;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  code *unaff_x30;
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar30._8_8_ = unaff_x20;
  auVar30._0_8_ = unaff_x19;
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = param_1;
  lVar15 = param_3;
  if ((bRam0000000007e28dbf & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_0777bfa0);
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_07810970);
    func_0x03280a18(PTR_DAT_07807e58);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_07810978);
    func_0x03280a18(PTR_DAT_0777ecb8);
    func_0x03280a18(PTR_DAT_07810980);
    bRam0000000007e28dbf = 1;
  }
  puVar25 = PTR_DAT_077d7588;
  puVar14 = (undefined *)0x7e28000;
  puVar11 = unaff_x23;
  puVar19 = unaff_x24;
  if (param_2 == 0) {
LAB_0689c7e4:
    unaff_x30 = MergeEngine_ECS_Systems_Items_Producers_SpawnerSystem__TryForceSpawn;
    auVar31 = func_0x03280cac();
    puVar6 = &stack0xffffffffffffffc0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = puVar14;
    unaff_x23 = puVar11;
    unaff_x24 = puVar19;
code_r0x0689c7e8:
    lVar26 = auVar31._8_8_;
    lVar21 = auVar31._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x30);
    *(code **)(puVar6 + -0x30) = unaff_x30;
    *(undefined **)(puVar6 + -0x20) = unaff_x22;
    *(long *)(puVar6 + -0x18) = unaff_x21;
    *(long *)(puVar6 + -0x10) = unaff_x20;
    *(long *)(puVar6 + -8) = unaff_x19;
    unaff_x21 = 0x7e28000;
    if ((bRam0000000007e28dbe & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c288);
      func_0x03280a18(PTR_DAT_077e6760);
      func_0x03280a18(PTR_DAT_077d75b8);
      func_0x03280a18(PTR_DAT_0777c290);
      bRam0000000007e28dbe = 1;
    }
    puVar14 = PTR_DAT_077e6760;
    if (lVar26 != 0) {
      unaff_x21 = func_0x03ced81c(lVar26,*(undefined8 *)PTR_DAT_077d75b8);
      puVar14 = (undefined *)func_0x03ced81c(lVar26,*(undefined8 *)puVar14);
      if (*(long *)(lVar21 + 0x90) != 0) {
        iVar9 = func_0x067675f0(*(long *)(lVar21 + 0x90),0);
        unaff_x22 = puVar14;
        if (iVar9 == 0) {
          if ((puVar14 != (undefined *)0x0) && (puVar14[0x30] = 0, unaff_x21 != 0)) {
            plVar13 = *(long **)(lVar21 + 0x28);
            unaff_x21 = *(long *)(unaff_x21 + 0x30);
            uVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
            lVar15 = 6;
            param_4 = (undefined *)0x0;
            func_0x0686aa28(uVar23,unaff_x21,6,0,0,0,0);
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar23;
            auVar31 = auVar32 << 0x40;
            if (plVar13 != (long *)0x0) {
              lVar15 = *(long *)PTR_DAT_0777c290;
              uVar17 = *(undefined8 *)(puVar6 + -0x20);
              *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x30);
              *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
              *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
              *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
              lVar21 = *(long *)(lVar15 + 0x38);
              if (lVar21 == 0) {
                func_0x03256878(lVar15);
                lVar21 = *(long *)(lVar15 + 0x38);
              }
              lVar15 = *(long *)(lVar21 + 8);
              *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x20);
              *(undefined8 *)(puVar6 + -0x20) = uVar17;
              *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
              *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
              *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
              plVar28 = plVar13;
              if ((*(long *)(lVar15 + 0x38) == 0) &&
                 (plVar28 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar15 + 0x38) == 0
                 )) {
                plVar28 = (long *)func_0x03256878(lVar15);
              }
              if ((char)plVar13[10] != '\0') {
                return plVar28;
              }
              uVar17 = **(undefined8 **)(lVar15 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar27 = func_0x057a51c4(uVar17,0);
              lVar15 = 1;
              puVar11 = (undefined1 *)0x0;
              lVar21 = func_0x072869d0(plVar13,uVar27,0,1,0);
              if (lVar21 == 0) {
                auVar31 = func_0x03280cac();
                uVar27 = auVar31._8_8_;
                plVar28 = auVar31._0_8_;
                *(undefined8 *)(puVar6 + -0x80) = unaff_x29;
                *(undefined8 *)(puVar6 + -0x78) = 0x3ea51c0;
                *(undefined8 *)(puVar6 + -0x70) = unaff_x26;
                *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
                *(undefined **)(puVar6 + -0x60) = unaff_x24;
                *(undefined1 **)(puVar6 + -0x58) = unaff_x23;
                *(undefined8 *)(puVar6 + -0x50) = uVar17;
                *(long **)(puVar6 + -0x48) = plVar13;
                *(undefined8 *)(puVar6 + -0x40) = 0;
                *(ulong *)(puVar6 + -0x38) = uVar23;
                lVar21 = tpidr_el0;
                *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(lVar21 + 0x28);
                *(undefined1 **)(puVar6 + -0x90) = puVar11;
                puVar18 = *(undefined8 **)(lVar15 + 0x38);
                plVar13 = plVar28;
                puVar20 = puVar11;
                if (puVar18 == (undefined8 *)0x0) {
                  plVar13 = (long *)func_0x03280a18(PTR_DAT_0774e558);
                  puVar18 = *(undefined8 **)(lVar15 + 0x38);
                  if (puVar18 == (undefined8 *)0x0) {
                    plVar13 = (long *)func_0x03256878(lVar15);
                    puVar18 = *(undefined8 **)(lVar15 + 0x38);
                  }
                }
                unaff_x23 = (undefined1 *)(ulong)*(uint *)(puVar18[1] + 0xfc);
                unaff_x24 = puVar6 + (-0x90 - ((ulong)(unaff_x23 + 0xf) & 0x1fffffff0));
                if ((char)plVar28[10] == '\0') {
                  unaff_x25 = *puVar18;
                  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                    func_0x03280b8c();
                  }
                  uVar17 = func_0x057a51c4(unaff_x25,0);
                  lVar21 = func_0x072869d0(plVar28,uVar17,uVar27,1,0);
                  lVar15 = *(long *)(lVar15 + 0x38);
                  puVar2 = puVar11;
                  if (-1 < *(int *)(*(long *)(lVar15 + 8) + 0x28)) {
                    puVar2 = puVar6 + -0x90;
                  }
                  puVar20 = unaff_x23;
                  func_0x072ce970(unaff_x24,puVar2);
                  uVar23 = func_0x03280b94(*(undefined8 *)(lVar15 + 8),unaff_x24);
                  if (lVar21 != 0) {
                    uVar17 = 0x3ea52d0;
                    puVar6 = unaff_x24;
                    lVar26 = lVar21;
                    goto SUB_072852e4;
                  }
                  func_0x03280cac();
                  uVar27 = 0;
                }
                else if (*(long *)(lVar21 + 0x28) == *(long *)(puVar6 + -0x88)) {
                  return plVar13;
                }
                auVar31 = func_0x072ce990();
                lVar21 = auVar31._8_8_;
                *(undefined8 *)(unaff_x24 + -0x20) = 0x3ea5304;
                *(undefined8 *)(unaff_x24 + -0x18) = uVar27;
                *(long *)(unaff_x24 + -0x10) = lVar15;
                *(undefined1 **)(unaff_x24 + -8) = puVar11;
                lVar15 = *(long *)(puVar20 + 0x38);
                if (lVar15 == 0) {
                  func_0x03256878(puVar20);
                  lVar15 = *(long *)(puVar20 + 0x38);
                }
                lVar16 = *(long *)(lVar15 + 8);
                *(undefined8 *)(unaff_x24 + -0x40) = *(undefined8 *)(unaff_x24 + -0x20);
                *(undefined **)(unaff_x24 + -0x30) = unaff_x24;
                *(undefined1 **)(unaff_x24 + -0x28) = unaff_x23;
                *(long **)(unaff_x24 + -0x20) = plVar28;
                *(undefined8 *)(unaff_x24 + -0x18) = *(undefined8 *)(unaff_x24 + -0x18);
                *(undefined8 *)(unaff_x24 + -0x10) = *(undefined8 *)(unaff_x24 + -0x10);
                *(undefined8 *)(unaff_x24 + -8) = *(undefined8 *)(unaff_x24 + -8);
                plVar13 = *(long **)(lVar16 + 0x38);
                lVar15 = lVar21;
                lVar26 = lVar16;
                if (plVar13 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar13 = *(long **)(lVar16 + 0x38);
                  if (plVar13 == (long *)0x0) {
                    func_0x03256878(lVar16);
                    plVar13 = *(long **)(lVar16 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar22 = func_0x03280ca0();
                func_0x04053df4(lVar22,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 8));
                if (lVar22 != 0) {
                  plVar13 = (long *)(lVar22 + 0x10);
                  *plVar13 = lVar21;
                  goto SUB_032809c4;
                }
                auVar30 = func_0x03280cac();
                *(undefined8 *)(unaff_x24 + -0x80) = 0x3ea5530;
                *(undefined8 *)(unaff_x24 + -0x70) = 0;
                *(undefined1 **)(unaff_x24 + -0x68) = unaff_x23;
                *(long *)(unaff_x24 + -0x60) = lVar21;
                *(long *)(unaff_x24 + -0x58) = lVar16;
                *(long *)(unaff_x24 + -0x50) = auVar31._0_8_;
                *(undefined8 *)(unaff_x24 + -0x48) = 0;
                plVar13 = *(long **)(lVar26 + 0x38);
                lVar21 = lVar15;
                lVar16 = lVar26;
                if (plVar13 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar13 = *(long **)(lVar26 + 0x38);
                  if (plVar13 == (long *)0x0) {
                    func_0x03256878(lVar26);
                    plVar13 = *(long **)(lVar26 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar22 = func_0x03280ca0();
                func_0x0404e308(lVar22,*(undefined8 *)(*(long *)(lVar26 + 0x38) + 8));
                if (lVar22 != 0) {
                  plVar13 = (long *)(lVar22 + 0x10);
                  *plVar13 = lVar15;
                  goto SUB_032809c4;
                }
                auVar31 = func_0x03280cac();
                *(undefined8 *)(unaff_x24 + -0xc0) = 0x3ea5644;
                *(undefined8 *)(unaff_x24 + -0xb0) = 0;
                *(undefined1 **)(unaff_x24 + -0xa8) = unaff_x23;
                *(long *)(unaff_x24 + -0xa0) = lVar15;
                *(long *)(unaff_x24 + -0x98) = lVar26;
                *(undefined1 (*) [16])(unaff_x24 + -0x90) = auVar30;
                plVar13 = *(long **)(lVar16 + 0x38);
                lVar15 = lVar21;
                lVar26 = lVar16;
                if (plVar13 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar13 = *(long **)(lVar16 + 0x38);
                  if (plVar13 == (long *)0x0) {
                    func_0x03256878(lVar16);
                    plVar13 = *(long **)(lVar16 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar22 = func_0x03280ca0();
                (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x38) + 8))();
                if (lVar22 != 0) {
                  plVar13 = (long *)(lVar22 + 0x10);
                  *plVar13 = lVar21;
                  goto SUB_032809c4;
                }
                auVar30 = func_0x03280cac();
                *(undefined8 *)(unaff_x24 + -0x100) = 0x3ea575c;
                *(undefined8 *)(unaff_x24 + -0xf0) = 0;
                *(undefined1 **)(unaff_x24 + -0xe8) = unaff_x23;
                *(long *)(unaff_x24 + -0xe0) = lVar21;
                *(long *)(unaff_x24 + -0xd8) = lVar16;
                *(undefined1 (*) [16])(unaff_x24 + -0xd0) = auVar31;
                plVar13 = *(long **)(lVar26 + 0x38);
                if (plVar13 == (long *)0x0) {
                  func_0x03280a18(PTR_DAT_07750ac8);
                  func_0x03280a18(PTR_DAT_0774e558);
                  plVar13 = *(long **)(lVar26 + 0x38);
                  if (plVar13 == (long *)0x0) {
                    func_0x03256878(lVar26);
                    plVar13 = *(long **)(lVar26 + 0x38);
                  }
                }
                if ((*(byte *)(*plVar13 + 0x135) & 1) == 0) {
                  func_0x0325681c();
                }
                lVar21 = func_0x03280ca0();
                (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x38) + 8))();
                if (lVar21 != 0) {
                  plVar13 = (long *)(lVar21 + 0x10);
                  *plVar13 = lVar15;
                  goto SUB_032809c4;
                }
                auVar31 = func_0x03280cac();
                lVar21 = auVar31._8_8_;
                plVar13 = auVar31._0_8_;
                *(undefined8 *)(unaff_x24 + -0x120) = 0x3ea5874;
                *(undefined1 (*) [16])(unaff_x24 + -0x110) = auVar30;
                plVar28 = *(long **)(lVar21 + 0x38);
                if (plVar28 == (long *)0x0) {
                  func_0x03256878(lVar21);
                  plVar28 = *(long **)(lVar21 + 0x38);
                }
                lVar16 = *plVar28;
                *(undefined8 *)(unaff_x24 + -0x130) = *(undefined8 *)(unaff_x24 + -0x120);
                *(undefined1 **)(unaff_x24 + -0x128) = unaff_x23;
                *(long *)(unaff_x24 + -0x120) = lVar15;
                *(long *)(unaff_x24 + -0x118) = lVar26;
                *(undefined8 *)(unaff_x24 + -0x110) = *(undefined8 *)(unaff_x24 + -0x110);
                *(undefined8 *)(unaff_x24 + -0x108) = *(undefined8 *)(unaff_x24 + -0x108);
                plVar28 = plVar13;
                if ((*(long *)(lVar16 + 0x38) == 0) &&
                   (plVar28 = (long *)func_0x03280a18(PTR_DAT_0774e558),
                   *(long *)(lVar16 + 0x38) == 0)) {
                  plVar28 = (long *)func_0x03256878(lVar16);
                }
                puVar14 = PTR_DAT_0774e558;
                if ((char)plVar13[10] != '\0') {
                  return plVar28;
                }
                uVar17 = **(undefined8 **)(lVar16 + 0x38);
                if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar17 = func_0x057a51c4(uVar17,0);
                lVar21 = func_0x072869d0(plVar13,uVar17,0,0,0);
                if (lVar21 == 0) {
                  return (long *)0x0;
                }
                uVar17 = **(undefined8 **)(lVar16 + 0x38);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                uVar17 = func_0x057a51c4(uVar17,0);
                lVar15 = func_0x057c1ad4(uVar17,0);
                lVar26 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
                if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                  lVar26 = func_0x0325681c(lVar26);
                }
                if (lVar15 == 0) {
LAB_03ea5b18:
                  uVar23 = 0;
                }
                else {
                  uVar23 = func_0x03280b90(lVar15,lVar26);
                  if (uVar23 == 0) {
                    func_0x03281048(lVar15,lVar26);
                    goto LAB_03ea5b18;
                  }
                }
                lVar15 = *(long *)(unaff_x24 + -0x110);
                puVar11 = *(undefined1 **)(unaff_x24 + -0x108);
                plVar28 = *(long **)(unaff_x24 + -0x120);
                lVar26 = *(long *)(unaff_x24 + -0x118);
                puVar6 = unaff_x24 + -0x100;
                uVar17 = *(undefined8 *)(unaff_x24 + -0x130);
                unaff_x23 = *(undefined1 **)(unaff_x24 + -0x128);
                unaff_x24 = (undefined *)0x0;
              }
              else {
                lVar15 = *(long *)(puVar6 + -0x10);
                puVar11 = *(undefined1 **)(puVar6 + -8);
                plVar28 = *(long **)(puVar6 + -0x20);
                uVar17 = *(undefined8 *)(puVar6 + -0x30);
                lVar26 = *(long *)(puVar6 + -0x18);
              }
SUB_072852e4:
              lVar16 = 0;
              puVar7 = puVar6 + -0x30;
              *(undefined8 *)(puVar6 + -0x30) = uVar17;
              *(long **)(puVar6 + -0x20) = plVar28;
              *(long *)(puVar6 + -0x18) = lVar26;
              *(long *)(puVar6 + -0x10) = lVar15;
              *(undefined1 **)(puVar6 + -8) = puVar11;
              if ((bRam0000000007e3419a & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785dee8);
                func_0x03280a18(PTR_DAT_0785def0);
                func_0x03280a18(PTR_DAT_0774e8c8);
                func_0x03280a18(PTR_DAT_0785def8);
                func_0x03280a18(PTR_DAT_07751038);
                func_0x03280a18(PTR_DAT_07779590);
                bRam0000000007e3419a = 1;
              }
              puVar14 = PTR_DAT_07779590;
              if (uVar23 != 0) {
                uVar17 = func_0x057dadc4(uVar23,0);
                puVar25 = *(undefined **)(lVar21 + 0x20);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  func_0x03280b8c(*(long *)puVar14);
                }
                uVar10 = func_0x0727e0ec(uVar17,puVar25);
                plVar13 = (long *)(ulong)(uVar10 & 1);
                uVar17 = 0x728539c;
                goto SUB_0727dc78;
              }
              func_0x03280cac();
              func_0x03280cac();
              lVar15 = 0;
              while( true ) {
                func_0x03280ca4(lVar15);
                auVar29 = func_0x03280cac();
                uVar17 = auVar29._0_8_;
                if (auVar29._8_4_ != 1) break;
                plVar13 = (long *)func_0x072ce910(uVar17);
                lVar15 = *plVar13;
                func_0x072ce920();
                uVar23 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
                if (uVar23 != 0) {
                  piVar24 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar18 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar24 * 0x10 + 0x138)
                      ;
                      goto LAB_072854e8;
                    }
                    uVar23 = uVar23 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar23 != 0);
                }
                lVar16 = 0;
                puVar18 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
                plVar13 = (long *)(*(code *)*puVar18)(0x7e34000,puVar18[1]);
                if (lVar15 == 0) {
                  return plVar13;
                }
              }
              uVar23 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
                    puVar18 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_072855b0;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              lVar16 = 0;
              puVar18 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
              (*(code *)*puVar18)(0x7e34000,puVar18[1]);
              func_0x03365958(uVar17);
              func_0x03280ca4(0);
              auVar31 = func_0x02f09514();
              puVar14 = PTR_DAT_0785dec8;
              lVar21 = auVar31._8_8_;
              lVar15 = auVar31._0_8_;
              *(undefined8 *)(puVar6 + -0x70) = 0x72855d4;
              *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
              *(undefined **)(puVar6 + -0x60) = unaff_x24;
              *(undefined1 **)(puVar6 + -0x58) = unaff_x23;
              *(long **)(puVar6 + -0x50) = plVar28;
              *(undefined8 *)(puVar6 + -0x48) = uVar17;
              *(undefined8 *)(puVar6 + -0x40) = 0;
              *(undefined8 *)(puVar6 + -0x38) = 0x7e34000;
              plVar28 = (long *)0x7e34000;
              if ((bRam0000000007e3419b & 1) == 0) {
                func_0x03280a18(PTR_DAT_0785dec8);
                func_0x03280a18(PTR_DAT_0785df00);
                func_0x03280a18(PTR_DAT_0785ded0);
                func_0x03280a18(PTR_DAT_0785ded8);
                func_0x03280a18(PTR_DAT_0774e5a0);
                func_0x03280a18(PTR_DAT_0785df08);
                bRam0000000007e3419b = 1;
              }
              plVar13 = (long *)func_0x03e0c264(lVar21,*(undefined8 *)puVar14);
              puVar19 = PTR_DAT_0785df00;
              puVar25 = PTR_DAT_0785ded8;
              if (((ulong)plVar13 & 1) == 0) {
LAB_07285770:
                if (lVar21 != 0) {
                  if (0 < *(int *)(lVar21 + 0x18)) {
                    plVar28 = (long *)0x0;
                    do {
                      puVar12 = (undefined *)func_0x0414419c(lVar21,plVar28,*(undefined8 *)puVar25);
                      unaff_x24 = puVar25;
                      if (*(long *)(lVar15 + 0x10) == 0) goto LAB_07285808;
                      plVar13 = (long *)func_0x041447fc(*(long *)(lVar15 + 0x10),puVar12,
                                                        *(undefined8 *)puVar19);
                      puVar14 = puVar12;
                      if (((ulong)plVar13 & 1) != 0) {
                        if ((puVar12 == (undefined *)0x0) ||
                           (lVar26 = *(long *)(puVar12 + 0x18), lVar26 == 0)) goto LAB_07285808;
                        plVar13 = (long *)(**(code **)(lVar26 + 0x18))
                                                    (*(undefined8 *)(lVar26 + 0x40),lVar16,
                                                     *(undefined8 *)(lVar26 + 0x28));
                      }
                      uVar10 = (int)plVar28 + 1;
                      plVar28 = (long *)(ulong)uVar10;
                    } while ((int)uVar10 < *(int *)(lVar21 + 0x18));
                  }
                  return plVar13;
                }
LAB_07285808:
                func_0x03280cac();
                plVar13 = plVar28;
                puVar19 = puVar14;
LAB_0728580c:
                func_0x03280cb4();
              }
              else {
                if (*(int *)(lVar15 + 0x30) != 2) {
                  if (*(int *)(lVar15 + 0x30) != 1) goto LAB_07285770;
                  uVar17 = func_0x03280a2c(PTR_DAT_0774e5a0);
                  lVar21 = func_0x03280afc(uVar17,1);
                  func_0x02f0b18c(lVar16);
                  uVar17 = func_0x057dadc4(lVar16,0);
                  func_0x02f0b18c(lVar21);
                  func_0x02f176b4(lVar21,uVar17);
                  func_0x02f0965c(lVar21,0,uVar17);
                  uVar17 = func_0x03280a2c(PTR_DAT_0785df08);
                  lVar16 = func_0x0727df38(uVar17,lVar21);
                  uVar17 = func_0x03280a2c(PTR_DAT_0785df10);
                  func_0x03280b7c(lVar16,uVar17);
                }
                plVar13 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
                if ((lVar16 == 0) ||
                   (puVar19 = (undefined *)func_0x057dadc4(lVar16,0), plVar28 = plVar13,
                   plVar13 == (long *)0x0)) goto LAB_07285808;
                if ((puVar19 == (undefined *)0x0) ||
                   (lVar26 = func_0x03280b90(puVar19,*(undefined8 *)(*plVar13 + 0x40)), lVar26 != 0)
                   ) {
                  if ((int)plVar13[3] != 0) {
                    plVar13 = plVar13 + 4;
                    *plVar13 = (long)puVar19;
SUB_032809c4:
                    if (iRam00000000080486b8 != 0) {
                      puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    return plVar13;
                  }
                  goto LAB_0728580c;
                }
              }
              uVar17 = func_0x03280cd0();
              auVar31 = func_0x03280b7c(uVar17,0);
              *(undefined8 *)(puVar6 + -0x80) = 0x728581c;
              lVar26 = *(long *)(auVar31._0_8_ + 0x18);
              if (lVar26 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar13 = (long *)(**(code **)(lVar26 + 0x18))
                                            (*(undefined8 *)(lVar26 + 0x40),auVar31._8_8_,
                                             *(undefined8 *)(lVar26 + 0x28));
                return plVar13;
              }
              uVar23 = func_0x03280cac();
              puVar25 = PTR_DAT_0785df18;
              puVar7 = puVar6 + -0xc0;
              *(undefined8 *)(puVar6 + -0xc0) = 0x7285840;
              *(undefined **)(puVar6 + -0xb0) = unaff_x24;
              *(undefined **)(puVar6 + -0xa8) = puVar19;
              *(long **)(puVar6 + -0xa0) = plVar13;
              *(long *)(puVar6 + -0x98) = lVar15;
              *(long *)(puVar6 + -0x90) = lVar21;
              *(long *)(puVar6 + -0x88) = lVar16;
              lVar21 = 0x7e34000;
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
              plVar13 = (long *)(ulong)*(byte *)(uVar23 + 0x34);
              uVar17 = 0x72858f0;
SUB_0727dc78:
              if (((ulong)plVar13 & 1) == 0) {
                *(undefined8 *)(puVar7 + -0x10) = uVar17;
                *(undefined **)(puVar7 + -8) = puVar25;
                uVar17 = func_0x03280a2c(PTR_DAT_0785dbe8);
                puVar14 = PTR_DAT_0777c990;
                *(undefined8 *)(puVar7 + -0x30) = 0x727dc94;
                *(long *)(puVar7 + -0x28) = lVar21;
                *(ulong *)(puVar7 + -0x20) = uVar23;
                *(undefined **)(puVar7 + -0x18) = puVar25;
                if ((bRam0000000007e34146 & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777c990);
                  bRam0000000007e34146 = 1;
                }
                plVar13 = (long *)func_0x03280ca0(*(undefined8 *)puVar14);
                func_0x072c77f8(plVar13,uVar17,0);
                return plVar13;
              }
              return plVar13;
            }
          }
        }
        else if ((unaff_x21 != 0) && (*(long *)(lVar21 + 0x90) != 0)) {
          lVar15 = MergeEngine_ECS_Systems_Board_BoardSystem__GetClosestAvailablePositionTo
                             (*(long *)(lVar21 + 0x90),*(undefined8 *)(unaff_x21 + 0x30),0,0);
          auVar30._8_8_ = *(undefined8 *)(puVar6 + -0x10);
          auVar30._0_8_ = *(undefined8 *)(puVar6 + -8);
          unaff_x22 = *(undefined **)(puVar6 + -0x20);
          unaff_x21 = *(long *)(puVar6 + -0x18);
          param_4 = (undefined *)0x1;
          unaff_x30 = *(code **)(puVar6 + -0x30);
          register0x00000008 = (BADSPACEBASE *)puVar6;
          goto LAB_0689c938;
        }
      }
    }
    unaff_x30 = (code *)0x689c938;
    auVar32 = func_0x03280cac();
    auVar30 = auVar31;
    auVar31 = auVar32;
  }
  else {
    puVar11 = (undefined1 *)func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d75b8);
    puVar12 = (undefined *)func_0x03ced81c(param_2,*(undefined8 *)puVar25);
    puVar14 = puVar25;
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_0689c7e4;
    plVar13 = (long *)func_0x067675f0(*(long *)(param_1 + 0x90),0);
    puVar14 = puVar12;
    if (((int)plVar13 == 0) ||
       (plVar13 = (long *)func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bfa0),
       plVar13 != (long *)0x0)) {
      if (param_3 != 0) {
        *(undefined1 *)(param_3 + 0x30) = 0;
        return plVar13;
      }
      goto LAB_0689c7e4;
    }
    puVar6 = (undefined1 *)register0x00000008;
    if (*(char *)(param_2 + 0x88) != '\0') goto code_r0x0689c7e8;
    if (puVar11 == (undefined1 *)0x0) goto LAB_0689c7e4;
    param_3 = *(long *)(param_1 + 0x90);
    puVar11 = *(undefined1 **)(puVar11 + 0x30);
    puVar19 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07807e58);
    param_4 = (undefined *)0x0;
    lVar15 = *(long *)PTR_DAT_07810980;
    func_0x05352a74(puVar19,param_1);
    if (param_3 == 0) goto LAB_0689c7e4;
    lVar15 = 1;
    param_4 = puVar19;
    lVar21 = MergeEngine_ECS_Systems_Board_BoardSystem__GetAdjascentPositions
                       (param_3,puVar11,1,puVar19,0);
    if ((puVar12 == (undefined *)0x0) || (param_3 = lVar21, lVar21 == 0)) goto LAB_0689c7e4;
    bVar3 = puVar12[0x72];
    puVar11 = (undefined1 *)(ulong)bVar3;
    if (*(int *)(lVar21 + 0x18) < 1) {
      bVar8 = 0;
    }
    else {
      puVar14 = *(undefined **)(param_1 + 0xa8);
      lVar26 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98);
      if ((lVar26 == 0) || (puVar14 == (undefined *)0x0)) goto LAB_0689c7e4;
      bVar8 = func_0x06889564(puVar14,*(undefined8 *)(lVar26 + 0x30));
      bVar8 = ~bVar8 & 1;
    }
    if ((bVar8 & (bVar3 ^ 1)) == 0) {
      plVar13 = (long *)func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e6760);
      if (plVar13 != (long *)0x0) {
        *(undefined1 *)(plVar13 + 6) = 0;
        return plVar13;
      }
      goto LAB_0689c7e4;
    }
    plVar13 = *(long **)(param_1 + 0x40);
    puVar14 = (undefined *)0x0;
    if (plVar13 == (long *)0x0) goto LAB_0689c7e4;
    lVar15 = *plVar13;
    uVar23 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar18 = (undefined8 *)(lVar15 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0689c788;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077800d0,0);
LAB_0689c788:
    uVar17 = (*(code *)*puVar18)(plVar13,puVar18[1]);
    func_0x03e13b44(lVar21,uVar17,*(undefined8 *)PTR_DAT_07810978);
    lVar15 = func_0x03d3f874(lVar21,*(undefined8 *)PTR_DAT_07810970);
    param_4 = (undefined *)0x0;
  }
LAB_0689c938:
  plVar13 = auVar31._8_8_;
  lVar21 = auVar31._0_8_;
  *(code **)((long)register0x00000008 + -0x60) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = auVar30._8_8_;
  *(long *)((long)register0x00000008 + -8) = auVar30._0_8_;
  lVar26 = 0x7e28000;
  if ((bRam0000000007e28dc0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_078108e0);
    func_0x03280a18(PTR_DAT_07810388);
    func_0x03280a18(PTR_DAT_07810730);
    func_0x03280a18(PTR_DAT_07810988);
    bRam0000000007e28dc0 = 1;
  }
  puVar25 = PTR_DAT_07810388;
  puVar14 = PTR_DAT_077e6760;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  if (plVar13 != (long *)0x0) {
    lVar16 = func_0x03ced81c(plVar13,*(undefined8 *)PTR_DAT_077d75b8);
    uVar17 = func_0x03ced81c(plVar13,*(undefined8 *)puVar14);
    lVar26 = func_0x03280ca0(*(undefined8 *)puVar25);
    func_0x060d39e0(lVar26,0);
    puVar14 = PTR_DAT_078108e0;
    plVar28 = *(long **)(lVar21 + 0xb0);
    if (plVar28 != (long *)0x0) {
      lVar22 = *plVar28;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_078108e0) {
            puVar18 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_0689ca84;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_078108e0,0);
LAB_0689ca84:
      puVar25 = PTR_DAT_07810988;
      uVar23 = (*(code *)*puVar18)(plVar28,lVar16,(undefined1 *)((long)register0x00000008 + -0x58),
                                   (undefined1 *)((long)register0x00000008 + -0x68),puVar18[1]);
      if ((uVar23 & 1) != 0) {
        if (((ulong)param_4 & 1) == 0) {
          *(long *)((long)register0x00000008 + -0x58) = lVar15;
        }
        else {
          lVar15 = *(long *)((long)register0x00000008 + -0x58);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = *(undefined8 *)puVar25;
      func_0x046330d4(lVar21,lVar15,plVar13,uVar17,lVar26,1,0,
                      *(undefined8 *)((long)register0x00000008 + -0x68));
      if (*(long *)((long)register0x00000008 + -0x68) != 0) {
        if ((*(long *)(lVar21 + 0x90) == 0) ||
           (lVar15 = MergeEngine_ECS_Systems_Board_BoardSystem__GetItem
                               (*(long *)(lVar21 + 0x90),
                                *(undefined8 *)((long)register0x00000008 + -0x58),0), lVar15 == 0))
        goto LAB_0689cbcc;
        plVar13 = *(long **)(lVar21 + 0xb0);
        uVar17 = func_0x03ced81c(lVar15,*(undefined8 *)PTR_DAT_077d7588);
        if ((lVar16 == 0) || (plVar13 == (long *)0x0)) goto LAB_0689cbcc;
        lVar15 = *plVar13;
        uVar27 = *(undefined8 *)(lVar16 + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar14) {
              puVar18 = (undefined8 *)(lVar15 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_0689cb78;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar14,1);
LAB_0689cb78:
        (*(code *)*puVar18)(plVar13,uVar17,uVar27,puVar18[1]);
      }
      if ((lVar26 != 0) && (*(long *)(lVar21 + 0xa0) != 0)) {
        plVar13 = (long *)func_0x03e4062c(*(long *)(lVar21 + 0xa0),*(undefined8 *)(lVar26 + 0x10),
                                          *(undefined8 *)PTR_DAT_07810730);
        return plVar13;
      }
    }
  }
LAB_0689cbcc:
  auVar31 = func_0x03280cac();
  uVar17 = auVar31._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x689cbd0;
  *(long **)((long)register0x00000008 + -0x88) = plVar13;
  *(long *)((long)register0x00000008 + -0x80) = lVar26;
  *(long *)((long)register0x00000008 + -0x78) = lVar21;
  if ((bRam0000000007e28dc1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    bRam0000000007e28dc1 = 1;
  }
  plVar28 = *(long **)(auVar31._0_8_ + 0x90);
  plVar13 = (long *)0x7e28000;
  if ((plVar28 != (long *)0x0) &&
     (plVar28 = (long *)(**(code **)(*plVar28 + 0x208))(plVar28,*(undefined8 *)(*plVar28 + 0x210)),
     plVar28 != (long *)0x0)) {
    lVar15 = *plVar28;
    uVar23 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077cc678) {
          puVar18 = (undefined8 *)(lVar15 + (long)(*piVar24 + 0x18) * 0x10 + 0x138);
          goto LAB_0689cc78;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_077cc678,0x18);
LAB_0689cc78:
    uVar23 = (*(code *)*puVar18)(plVar28,uVar17,puVar18[1]);
    if ((uVar23 & 1) != 0) {
      return (long *)0x0;
    }
    lVar15 = *(long *)(auVar31._0_8_ + 0x90);
    plVar13 = plVar28;
    if (lVar15 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      lVar15 = *(long *)(lVar15 + 0x88);
      if (lVar15 == 0) {
        func_0x03280cac(0,uVar17,0);
        *(code **)((long)register0x00000008 + -0x90) =
             MergeEngine_ECS_Systems_Board_BoardSystem__IsUnlockedItemOnBoard;
        lVar15 = MergeEngine_ECS_Systems_Board_BoardSystem__GetUnlockedItemById();
        return (long *)(ulong)(lVar15 != 0);
      }
      lVar15 = func_0x06a02444(lVar15,uVar17,0);
      return (long *)(ulong)(lVar15 == 0);
    }
  }
  plVar28 = (long *)func_0x03280cac();
  puVar14 = PTR_DAT_07810990;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x689ccbc;
  *(long **)((long)register0x00000008 + -0xa8) = plVar13;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xa0) = auVar31;
  if ((bRam0000000007e28dc2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810990);
    bRam0000000007e28dc2 = 1;
  }
  uVar17 = *(undefined8 *)puVar14;
  return plVar28;
}

