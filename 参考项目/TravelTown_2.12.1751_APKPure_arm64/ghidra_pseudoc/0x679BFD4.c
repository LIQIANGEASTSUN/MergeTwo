/* Ghidra 12.1.2 native pseudocode; RVA 0x679BFD4; MergeEngine.ECS.Systems.Items.Producers.ProduceSystem.ShouldProduceRngItem; status ok */


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

undefined1  [16]
MergeEngine_ECS_Systems_Items_Producers_ProduceSystem__ShouldProduceRngItem
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  long lVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  undefined8 *******unaff_x19;
  undefined *puVar27;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  long *plVar29;
  undefined8 *******unaff_x23;
  undefined *unaff_x24;
  long *plVar30;
  undefined8 unaff_x25;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  long alStack_1d0 [6];
  long alStack_1a0 [32];
  undefined8 *******pppppppuStack_a0;
  long lStack_98;
  undefined8 uStack_50;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x55) != '\0') {
      return ZEXT816(1);
    }
    if (*(char *)(param_2 + 0x54) != '\0') {
      return ZEXT116(0 < *(int *)(param_2 + 0x4c));
    }
    return ZEXT816(0);
  }
  auVar35 = func_0x03280cac();
  lVar12 = auVar35._0_8_;
  uStack_50 = 0x689bfec;
  if ((bRam0000000007e28db8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07810930);
    func_0x03280a18(PTR_DAT_07810938);
    bRam0000000007e28db8 = 1;
  }
  plVar30 = *(long **)(lVar12 + 0xa0);
  if (plVar30 == (long *)0x0) {
LAB_0689c138:
    auVar35._0_8_ = func_0x03280cac();
    puVar8 = PTR_DAT_07810940;
    if ((bRam0000000007e28db9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810940);
      bRam0000000007e28db9 = 1;
    }
    uVar28 = *(undefined8 *)puVar8;
    auVar35._8_8_ = 0;
    return auVar35;
  }
  lVar23 = *plVar30;
  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar11 = (undefined8 *)(lVar23 + (long)(*piVar25 + 0x13) * 0x10 + 0x138);
        goto LAB_0689c0a8;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0777a498,0x13);
LAB_0689c0a8:
  puVar8 = PTR_DAT_07810930;
  uVar9 = (*(code *)*puVar11)(plVar30,param_3,puVar11[1]);
  lVar23 = *(long *)(lVar12 + 0xe0);
  if (lVar23 != 0) {
    (**(code **)(lVar23 + 0x18))
              (*(undefined8 *)(lVar23 + 0x40),param_3,*(undefined8 *)(lVar23 + 0x28));
  }
  uVar24 = *(ulong *)(lVar12 + 0x28);
  lVar12 = func_0x03280ca0(*(undefined8 *)puVar8);
  func_0x060f3c08(lVar12,param_3,uVar9,param_4,auVar35._8_8_,param_5 & 0xffffffff,0);
  if (uVar24 == 0) goto LAB_0689c138;
  lVar23 = *(long *)PTR_DAT_07810938;
  lVar20 = *(long *)(lVar23 + 0x38);
  if (lVar20 == 0) {
    func_0x03256878(lVar23);
    lVar20 = *(long *)(lVar23 + 0x38);
  }
  lVar23 = *(long *)(lVar20 + 8);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar24;
  if ((*(long *)(lVar23 + 0x38) == 0) &&
     (auVar33 = func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar23 + 0x38) == 0)) {
    auVar33 = func_0x03256878(lVar23);
  }
  if (*(char *)(uVar24 + 0x50) != '\0') {
    return auVar33;
  }
  uVar28 = **(undefined8 **)(lVar23 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar28 = func_0x057a51c4(uVar28,0);
  lVar20 = 1;
  pppppppuVar16 = (undefined8 *******)0x0;
  lVar23 = func_0x072869d0(uVar24,uVar28,0,1,0);
  if (lVar23 == 0) {
    auVar35 = func_0x03280cac();
    uVar28 = auVar35._8_8_;
    unaff_x22 = auVar35._0_8_;
    lVar12 = tpidr_el0;
    lStack_98 = *(long *)(lVar12 + 0x28);
    puVar11 = *(undefined8 **)(lVar20 + 0x38);
    pppppppuVar17 = pppppppuVar16;
    pppppppuStack_a0 = pppppppuVar16;
    if (puVar11 == (undefined8 *)0x0) {
      auVar35 = func_0x03280a18(PTR_DAT_0774e558);
      puVar11 = *(undefined8 **)(lVar20 + 0x38);
      if (puVar11 == (undefined8 *)0x0) {
        auVar35 = func_0x03256878(lVar20);
        puVar11 = *(undefined8 **)(lVar20 + 0x38);
      }
    }
    unaff_x23 = (undefined8 *******)(ulong)*(uint *)(puVar11[1] + 0xfc);
    lVar13 = -((long)unaff_x23 + 0xfU & 0x1fffffff0);
    puVar8 = (undefined *)((long)&pppppppuStack_a0 + lVar13);
    if (*(char *)(unaff_x22 + 0x50) == '\0') {
      unaff_x25 = *puVar11;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar31 = func_0x057a51c4(unaff_x25,0);
      lVar23 = func_0x072869d0(unaff_x22,uVar31,uVar28,1,0);
      unaff_x20 = *(long *)(lVar20 + 0x38);
      pppppppuVar2 = pppppppuVar16;
      if (-1 < *(int *)(*(long *)(unaff_x20 + 8) + 0x28)) {
        pppppppuVar2 = &pppppppuStack_a0;
      }
      pppppppuVar17 = unaff_x23;
      func_0x072ce970(puVar8,pppppppuVar2);
      lVar12 = func_0x03280b94(*(undefined8 *)(unaff_x20 + 8),puVar8);
      if (lVar23 != 0) {
        uStack_50 = 0x3ea52d0;
        unaff_x21 = lVar23;
        unaff_x24 = puVar8;
        goto SUB_072852e4;
      }
      func_0x03280cac();
      uVar28 = 0;
    }
    else {
      unaff_x20 = lVar20;
      if (*(long *)(lVar12 + 0x28) == lStack_98) {
        return auVar35;
      }
    }
    auVar35 = func_0x072ce990();
    puVar14 = auVar35._8_8_;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xe0) = 0x3ea5304;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xe8) = uVar28;
    *(long *)((long)alStack_1a0 + lVar13 + 0xf0) = unaff_x20;
    *(undefined8 ********)((long)alStack_1a0 + lVar13 + 0xf8) = pppppppuVar16;
    ppppppuVar21 = pppppppuVar17[7];
    if (ppppppuVar21 == (undefined8 ******)0x0) {
      func_0x03256878(pppppppuVar17);
      ppppppuVar21 = pppppppuVar17[7];
    }
    pppppuVar18 = ppppppuVar21[1];
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xc0) =
         *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xe0);
    *(undefined **)((long)alStack_1a0 + lVar13 + 0xd0) = puVar8;
    *(undefined8 ********)((long)alStack_1a0 + lVar13 + 0xd8) = unaff_x23;
    *(long *)((long)alStack_1a0 + lVar13 + 0xe0) = unaff_x22;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xe8) =
         *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xe8);
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xf0) =
         *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xf0);
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xf8) =
         *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xf8);
    ppppuVar22 = pppppuVar18[7];
    puVar8 = puVar14;
    pppppuVar19 = pppppuVar18;
    if (ppppuVar22 == (undefined8 ****)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      ppppuVar22 = pppppuVar18[7];
      if (ppppuVar22 == (undefined8 ****)0x0) {
        func_0x03256878(pppppuVar18);
        ppppuVar22 = pppppuVar18[7];
      }
    }
    if ((*(byte *)((long)*ppppuVar22 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x04053df4(lVar12,pppppuVar18[7][1]);
    if (lVar12 != 0) {
      plVar30 = (long *)(lVar12 + 0x10);
      *plVar30 = (long)puVar14;
      goto SUB_032809c4;
    }
    auVar33 = func_0x03280cac();
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0x80) = 0x3ea5530;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0x90) = 0;
    *(undefined8 ********)((long)alStack_1a0 + lVar13 + 0x98) = unaff_x23;
    *(undefined **)((long)alStack_1a0 + lVar13 + 0xa0) = puVar14;
    *(undefined8 ******)((long)alStack_1a0 + lVar13 + 0xa8) = pppppuVar18;
    *(long *)((long)alStack_1a0 + lVar13 + 0xb0) = auVar35._0_8_;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0xb8) = 0;
    ppppuVar22 = pppppuVar19[7];
    puVar27 = puVar8;
    pppppuVar18 = pppppuVar19;
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
    lVar12 = func_0x03280ca0();
    func_0x0404e308(lVar12,pppppuVar19[7][1]);
    if (lVar12 != 0) {
      plVar30 = (long *)(lVar12 + 0x10);
      *plVar30 = (long)puVar8;
      puVar14 = puVar8;
      goto SUB_032809c4;
    }
    auVar35 = func_0x03280cac();
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0x40) = 0x3ea5644;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0x50) = 0;
    *(undefined8 ********)((long)alStack_1a0 + lVar13 + 0x58) = unaff_x23;
    *(undefined **)((long)alStack_1a0 + lVar13 + 0x60) = puVar8;
    *(undefined8 ******)((long)alStack_1a0 + lVar13 + 0x68) = pppppuVar19;
    *(long *)((long)alStack_1a0 + lVar13 + 0x70) = auVar33._0_8_;
    *(long *)((long)alStack_1a0 + lVar13 + 0x78) = auVar33._8_8_;
    ppppuVar22 = pppppuVar18[7];
    puVar14 = puVar27;
    pppppuVar19 = pppppuVar18;
    if (ppppuVar22 == (undefined8 ****)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      ppppuVar22 = pppppuVar18[7];
      if (ppppuVar22 == (undefined8 ****)0x0) {
        func_0x03256878(pppppuVar18);
        ppppuVar22 = pppppuVar18[7];
      }
    }
    if ((*(byte *)((long)*ppppuVar22 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    (*(code *)*pppppuVar18[7][1])();
    if (lVar12 != 0) {
      plVar30 = (long *)(lVar12 + 0x10);
      *plVar30 = (long)puVar27;
      puVar14 = puVar27;
      goto SUB_032809c4;
    }
    auVar33 = func_0x03280cac();
    *(undefined8 *)((long)alStack_1a0 + lVar13) = 0x3ea575c;
    *(undefined8 *)((long)alStack_1a0 + lVar13 + 0x10) = 0;
    *(undefined8 ********)((long)alStack_1a0 + lVar13 + 0x18) = unaff_x23;
    *(undefined **)((long)alStack_1a0 + lVar13 + 0x20) = puVar27;
    *(undefined8 ******)((long)alStack_1a0 + lVar13 + 0x28) = pppppuVar18;
    *(long *)((long)alStack_1a0 + lVar13 + 0x30) = auVar35._0_8_;
    *(long *)((long)alStack_1a0 + lVar13 + 0x38) = auVar35._8_8_;
    ppppuVar22 = pppppuVar19[7];
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
    lVar12 = func_0x03280ca0();
    (*(code *)*pppppuVar19[7][1])();
    if (lVar12 != 0) {
      plVar30 = (long *)(lVar12 + 0x10);
      *plVar30 = (long)puVar14;
      goto SUB_032809c4;
    }
    auVar35 = func_0x03280cac();
    lVar12 = auVar35._8_8_;
    uVar24 = auVar35._0_8_;
    *(undefined8 *)((long)alStack_1d0 + lVar13 + 0x10) = 0x3ea5874;
    *(long *)((long)alStack_1d0 + lVar13 + 0x20) = auVar33._0_8_;
    *(long *)((long)alStack_1d0 + lVar13 + 0x28) = auVar33._8_8_;
    plVar30 = *(long **)(lVar12 + 0x38);
    if (plVar30 == (long *)0x0) {
      func_0x03256878(lVar12);
      plVar30 = *(long **)(lVar12 + 0x38);
    }
    lVar12 = *plVar30;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar24;
    *(undefined8 *)((long)alStack_1d0 + lVar13) = *(undefined8 *)((long)alStack_1d0 + lVar13 + 0x10)
    ;
    *(undefined8 ********)((long)alStack_1d0 + lVar13 + 8) = unaff_x23;
    *(undefined **)((long)alStack_1d0 + lVar13 + 0x10) = puVar14;
    *(undefined8 ******)((long)alStack_1d0 + lVar13 + 0x18) = pppppuVar19;
    *(undefined8 *)((long)alStack_1d0 + lVar13 + 0x20) =
         *(undefined8 *)((long)alStack_1d0 + lVar13 + 0x20);
    *(undefined8 *)((long)alStack_1d0 + lVar13 + 0x28) =
         *(undefined8 *)((long)alStack_1d0 + lVar13 + 0x28);
    if ((*(long *)(lVar12 + 0x38) == 0) &&
       (auVar34 = func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar12 + 0x38) == 0)) {
      auVar34 = func_0x03256878(lVar12);
    }
    puVar8 = PTR_DAT_0774e558;
    if (*(char *)(uVar24 + 0x50) != '\0') {
      return auVar34;
    }
    uVar28 = **(undefined8 **)(lVar12 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar28 = func_0x057a51c4(uVar28,0);
    auVar35 = func_0x072869d0(uVar24,uVar28,0,0,0);
    lVar23 = auVar35._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar35._8_8_;
    if (lVar23 == 0) {
      return auVar5 << 0x40;
    }
    uVar28 = **(undefined8 **)(lVar12 + 0x38);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar28 = func_0x057a51c4(uVar28,0);
    lVar20 = func_0x057c1ad4(uVar28,0);
    lVar26 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x0325681c(lVar26);
    }
    if (lVar20 == 0) {
LAB_03ea5b18:
      lVar12 = 0;
    }
    else {
      lVar12 = func_0x03280b90(lVar20,lVar26);
      if (lVar12 == 0) {
        func_0x03281048(lVar20,lVar26);
        goto LAB_03ea5b18;
      }
    }
    unaff_x20 = *(long *)((long)alStack_1d0 + lVar13 + 0x20);
    pppppppuVar16 = *(undefined8 ********)((long)alStack_1d0 + lVar13 + 0x28);
    unaff_x22 = *(long *)((long)alStack_1d0 + lVar13 + 0x10);
    unaff_x21 = *(long *)((long)alStack_1d0 + lVar13 + 0x18);
    puVar8 = (undefined *)((long)alStack_1a0 + lVar13);
    uStack_50 = *(undefined8 *)((long)alStack_1d0 + lVar13);
    unaff_x23 = *(undefined8 ********)((long)alStack_1d0 + lVar13 + 8);
    unaff_x24 = (undefined *)0x0;
  }
  else {
    puVar8 = &stack0xfffffffffffffff0;
    pppppppuVar16 = unaff_x19;
  }
SUB_072852e4:
  lVar20 = 0;
  puVar7 = puVar8 + -0x30;
  *(undefined8 *)(puVar8 + -0x30) = uStack_50;
  *(long *)(puVar8 + -0x20) = unaff_x22;
  *(long *)(puVar8 + -0x18) = unaff_x21;
  *(long *)(puVar8 + -0x10) = unaff_x20;
  *(undefined8 ********)(puVar8 + -8) = pppppppuVar16;
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
  if (lVar12 != 0) {
    uVar28 = func_0x057dadc4(lVar12,0);
    puVar27 = *(undefined **)(lVar23 + 0x20);
    if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar14);
    }
    uVar10 = func_0x0727e0ec(uVar28,puVar27);
    uVar24 = (ulong)(uVar10 & 1);
    uVar31 = 0x728539c;
    uVar28 = extraout_x1_00;
    goto SUB_0727dc78;
  }
  func_0x03280cac();
  func_0x03280cac();
  lVar12 = 0;
  while( true ) {
    func_0x03280ca4(lVar12);
    auVar38 = func_0x03280cac();
    uVar28 = auVar38._0_8_;
    if (auVar38._8_4_ != 1) break;
    plVar30 = (long *)func_0x072ce910(uVar28);
    lVar12 = *plVar30;
    func_0x072ce920();
    uVar24 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar11 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_072854e8;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    lVar20 = 0;
    puVar11 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
    auVar35 = (*(code *)*puVar11)(0x7e34000,puVar11[1]);
    if (lVar12 == 0) {
      return auVar35;
    }
  }
  uVar24 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
  if (uVar24 != 0) {
    piVar25 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
    do {
      if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_0774e8c8) {
        puVar11 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar25 * 0x10 + 0x138);
        goto LAB_072855b0;
      }
      uVar24 = uVar24 - 1;
      piVar25 = piVar25 + 4;
    } while (uVar24 != 0);
  }
  lVar20 = 0;
  puVar11 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
  (*(code *)*puVar11)(0x7e34000,puVar11[1]);
  func_0x03365958(uVar28);
  func_0x03280ca4(0);
  auVar35 = func_0x02f09514();
  puVar27 = PTR_DAT_0785dec8;
  lVar13 = auVar35._8_8_;
  lVar23 = auVar35._0_8_;
  *(undefined8 *)(puVar8 + -0x70) = 0x72855d4;
  *(undefined8 *)(puVar8 + -0x68) = unaff_x25;
  *(undefined **)(puVar8 + -0x60) = unaff_x24;
  *(undefined8 ********)(puVar8 + -0x58) = unaff_x23;
  *(long *)(puVar8 + -0x50) = unaff_x22;
  *(undefined8 *)(puVar8 + -0x48) = uVar28;
  *(undefined8 *)(puVar8 + -0x40) = 0;
  *(undefined8 *)(puVar8 + -0x38) = 0x7e34000;
  plVar29 = (long *)0x7e34000;
  if ((bRam0000000007e3419b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dec8);
    func_0x03280a18(PTR_DAT_0785df00);
    func_0x03280a18(PTR_DAT_0785ded0);
    func_0x03280a18(PTR_DAT_0785ded8);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785df08);
    bRam0000000007e3419b = 1;
  }
  auVar35 = func_0x03e0c264(lVar13,*(undefined8 *)puVar27);
  puVar6 = PTR_DAT_0785df00;
  puVar14 = PTR_DAT_0785ded8;
  if ((auVar35._0_8_ & 1) == 0) {
LAB_07285770:
    if (lVar13 != 0) {
      if (0 < *(int *)(lVar13 + 0x18)) {
        plVar29 = (long *)0x0;
        do {
          puVar15 = (undefined *)func_0x0414419c(lVar13,plVar29,*(undefined8 *)puVar14);
          unaff_x24 = puVar14;
          if (*(long *)(lVar23 + 0x10) == 0) goto LAB_07285808;
          auVar35 = func_0x041447fc(*(long *)(lVar23 + 0x10),puVar15,*(undefined8 *)puVar6);
          puVar27 = puVar15;
          if ((auVar35._0_8_ & 1) != 0) {
            if ((puVar15 == (undefined *)0x0) || (lVar12 = *(long *)(puVar15 + 0x18), lVar12 == 0))
            goto LAB_07285808;
            auVar35 = (**(code **)(lVar12 + 0x18))
                                (*(undefined8 *)(lVar12 + 0x40),lVar20,
                                 *(undefined8 *)(lVar12 + 0x28));
          }
          uVar10 = (int)plVar29 + 1;
          plVar29 = (long *)(ulong)uVar10;
        } while ((int)uVar10 < *(int *)(lVar13 + 0x18));
      }
      return auVar35;
    }
LAB_07285808:
    func_0x03280cac();
    plVar30 = plVar29;
    puVar14 = puVar27;
LAB_0728580c:
    func_0x03280cb4();
  }
  else {
    if (*(int *)(lVar23 + 0x30) != 2) {
      if (*(int *)(lVar23 + 0x30) != 1) goto LAB_07285770;
      uVar28 = func_0x03280a2c(PTR_DAT_0774e5a0);
      lVar13 = func_0x03280afc(uVar28,1);
      func_0x02f0b18c(lVar20);
      uVar28 = func_0x057dadc4(lVar20,0);
      func_0x02f0b18c(lVar13);
      func_0x02f176b4(lVar13,uVar28);
      func_0x02f0965c(lVar13,0,uVar28);
      uVar28 = func_0x03280a2c(PTR_DAT_0785df08);
      lVar20 = func_0x0727df38(uVar28,lVar13);
      uVar28 = func_0x03280a2c(PTR_DAT_0785df10);
      func_0x03280b7c(lVar20,uVar28);
    }
    plVar30 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if ((lVar20 == 0) ||
       (puVar14 = (undefined *)func_0x057dadc4(lVar20,0), plVar29 = plVar30, plVar30 == (long *)0x0)
       ) goto LAB_07285808;
    if ((puVar14 == (undefined *)0x0) ||
       (lVar12 = func_0x03280b90(puVar14,*(undefined8 *)(*plVar30 + 0x40)), lVar12 != 0)) {
      if ((int)plVar30[3] != 0) {
        plVar30 = plVar30 + 4;
        *plVar30 = (long)puVar14;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)plVar30 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar30 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        auVar32._8_8_ = puVar14;
        auVar32._0_8_ = plVar30;
        return auVar32;
      }
      goto LAB_0728580c;
    }
  }
  uVar28 = func_0x03280cd0();
  auVar35 = func_0x03280b7c(uVar28,0);
  *(undefined8 *)(puVar8 + -0x80) = 0x728581c;
  lVar12 = *(long *)(auVar35._0_8_ + 0x18);
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar35 = (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),auVar35._8_8_,*(undefined8 *)(lVar12 + 0x28)
                        );
    return auVar35;
  }
  auVar35 = func_0x03280cac();
  puVar27 = PTR_DAT_0785df18;
  uVar28 = auVar35._8_8_;
  lVar12 = auVar35._0_8_;
  puVar7 = puVar8 + -0xc0;
  *(undefined8 *)(puVar8 + -0xc0) = 0x7285840;
  *(undefined **)(puVar8 + -0xb0) = unaff_x24;
  *(undefined **)(puVar8 + -0xa8) = puVar14;
  *(long **)(puVar8 + -0xa0) = plVar30;
  *(long *)(puVar8 + -0x98) = lVar23;
  *(long *)(puVar8 + -0x90) = lVar13;
  *(long *)(puVar8 + -0x88) = lVar20;
  lVar23 = 0x7e34000;
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
    uVar28 = extraout_x1_01;
  }
  uVar24 = (ulong)*(byte *)(lVar12 + 0x34);
  uVar31 = 0x72858f0;
SUB_0727dc78:
  if ((uVar24 & 1) != 0) {
    auVar36._8_8_ = uVar28;
    auVar36._0_8_ = uVar24;
    return auVar36;
  }
  *(undefined8 *)(puVar7 + -0x10) = uVar31;
  *(undefined **)(puVar7 + -8) = puVar27;
  uVar28 = func_0x03280a2c(PTR_DAT_0785dbe8);
  puVar8 = PTR_DAT_0777c990;
  *(undefined8 *)(puVar7 + -0x30) = 0x727dc94;
  *(long *)(puVar7 + -0x28) = lVar23;
  *(long *)(puVar7 + -0x20) = lVar12;
  *(undefined **)(puVar7 + -0x18) = puVar27;
  if ((bRam0000000007e34146 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c990);
    bRam0000000007e34146 = 1;
  }
  auVar37._0_8_ = func_0x03280ca0(*(undefined8 *)puVar8);
  func_0x072c77f8(auVar37._0_8_,uVar28,0);
  auVar37._8_8_ = extraout_x1;
  return auVar37;
}

