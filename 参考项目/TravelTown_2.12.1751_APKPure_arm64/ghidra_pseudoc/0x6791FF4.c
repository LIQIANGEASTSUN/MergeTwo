/* Ghidra 12.1.2 native pseudocode; RVA 0x6791FF4; MergeEngine.ECS.Systems.Items.TimeCycleSystem.ProcessComponent; status ok */


/* WARNING: Possible PIC construction at 0x06892684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689318c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06892f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06893bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06893d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06893940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06892e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06893588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06892e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06892554: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x06892558) */
/* WARNING: Removing unreachable block (ram,0x06892e6c) */
/* WARNING: Removing unreachable block (ram,0x06892e84) */
/* WARNING: Removing unreachable block (ram,0x06892e94) */
/* WARNING: Removing unreachable block (ram,0x06892e9c) */
/* WARNING: Removing unreachable block (ram,0x06892ec4) */
/* WARNING: Removing unreachable block (ram,0x06892ea8) */
/* WARNING: Removing unreachable block (ram,0x06892eb4) */
/* WARNING: Removing unreachable block (ram,0x06892ed4) */
/* WARNING: Removing unreachable block (ram,0x06892ee8) */
/* WARNING: Removing unreachable block (ram,0x06892ef0) */
/* WARNING: Removing unreachable block (ram,0x06892f00) */
/* WARNING: Removing unreachable block (ram,0x06892f08) */
/* WARNING: Removing unreachable block (ram,0x06893194) */
/* WARNING: Removing unreachable block (ram,0x06892f14) */
/* WARNING: Removing unreachable block (ram,0x06892f20) */
/* WARNING: Removing unreachable block (ram,0x068931a4) */
/* WARNING: Removing unreachable block (ram,0x068931bc) */
/* WARNING: Removing unreachable block (ram,0x068931c4) */
/* WARNING: Removing unreachable block (ram,0x068931e4) */
/* WARNING: Removing unreachable block (ram,0x068931ec) */
/* WARNING: Removing unreachable block (ram,0x06893210) */
/* WARNING: Removing unreachable block (ram,0x068931f8) */
/* WARNING: Removing unreachable block (ram,0x06893204) */
/* WARNING: Removing unreachable block (ram,0x06893220) */
/* WARNING: Removing unreachable block (ram,0x06893240) */
/* WARNING: Removing unreachable block (ram,0x0689325c) */
/* WARNING: Removing unreachable block (ram,0x06893264) */
/* WARNING: Removing unreachable block (ram,0x0689328c) */
/* WARNING: Removing unreachable block (ram,0x06893270) */
/* WARNING: Removing unreachable block (ram,0x0689327c) */
/* WARNING: Removing unreachable block (ram,0x06893298) */
/* WARNING: Removing unreachable block (ram,0x0689358c) */
/* WARNING: Removing unreachable block (ram,0x0689359c) */
/* WARNING: Removing unreachable block (ram,0x068935a4) */
/* WARNING: Removing unreachable block (ram,0x068935cc) */
/* WARNING: Removing unreachable block (ram,0x068935b0) */
/* WARNING: Removing unreachable block (ram,0x068935bc) */
/* WARNING: Removing unreachable block (ram,0x068935d8) */
/* WARNING: Removing unreachable block (ram,0x068935f4) */
/* WARNING: Removing unreachable block (ram,0x06893614) */
/* WARNING: Removing unreachable block (ram,0x0689361c) */
/* WARNING: Removing unreachable block (ram,0x06893644) */
/* WARNING: Removing unreachable block (ram,0x06893628) */
/* WARNING: Removing unreachable block (ram,0x06893634) */
/* WARNING: Removing unreachable block (ram,0x06893654) */
/* WARNING: Removing unreachable block (ram,0x06893678) */
/* WARNING: Removing unreachable block (ram,0x06893680) */
/* WARNING: Removing unreachable block (ram,0x068936a8) */
/* WARNING: Removing unreachable block (ram,0x0689368c) */
/* WARNING: Removing unreachable block (ram,0x06893698) */
/* WARNING: Removing unreachable block (ram,0x068936b4) */
/* WARNING: Removing unreachable block (ram,0x068936c4) */
/* WARNING: Removing unreachable block (ram,0x068936ec) */
/* WARNING: Removing unreachable block (ram,0x068936f4) */
/* WARNING: Removing unreachable block (ram,0x0689371c) */
/* WARNING: Removing unreachable block (ram,0x06893700) */
/* WARNING: Removing unreachable block (ram,0x0689370c) */
/* WARNING: Removing unreachable block (ram,0x06893728) */
/* WARNING: Removing unreachable block (ram,0x0689374c) */
/* WARNING: Removing unreachable block (ram,0x068932b8) */
/* WARNING: Removing unreachable block (ram,0x068932d8) */
/* WARNING: Removing unreachable block (ram,0x068932e0) */
/* WARNING: Removing unreachable block (ram,0x06893304) */
/* WARNING: Removing unreachable block (ram,0x068932ec) */
/* WARNING: Removing unreachable block (ram,0x068932f8) */
/* WARNING: Removing unreachable block (ram,0x06893314) */
/* WARNING: Removing unreachable block (ram,0x06893338) */
/* WARNING: Removing unreachable block (ram,0x06893358) */
/* WARNING: Removing unreachable block (ram,0x06893360) */
/* WARNING: Removing unreachable block (ram,0x06893384) */
/* WARNING: Removing unreachable block (ram,0x0689336c) */
/* WARNING: Removing unreachable block (ram,0x06893378) */
/* WARNING: Removing unreachable block (ram,0x06893394) */
/* WARNING: Removing unreachable block (ram,0x068933b4) */
/* WARNING: Removing unreachable block (ram,0x068933bc) */
/* WARNING: Removing unreachable block (ram,0x068933d8) */
/* WARNING: Removing unreachable block (ram,0x068933e0) */
/* WARNING: Removing unreachable block (ram,0x06893408) */
/* WARNING: Removing unreachable block (ram,0x068933ec) */
/* WARNING: Removing unreachable block (ram,0x068933f8) */
/* WARNING: Removing unreachable block (ram,0x06893418) */
/* WARNING: Removing unreachable block (ram,0x06893430) */
/* WARNING: Removing unreachable block (ram,0x068934b0) */
/* WARNING: Removing unreachable block (ram,0x06893458) */
/* WARNING: Removing unreachable block (ram,0x06893480) */
/* WARNING: Removing unreachable block (ram,0x06893488) */
/* WARNING: Removing unreachable block (ram,0x068934c4) */
/* WARNING: Removing unreachable block (ram,0x06893494) */
/* WARNING: Removing unreachable block (ram,0x068934a0) */
/* WARNING: Removing unreachable block (ram,0x068934d4) */
/* WARNING: Removing unreachable block (ram,0x06893518) */
/* WARNING: Removing unreachable block (ram,0x068934e4) */
/* WARNING: Removing unreachable block (ram,0x06893524) */
/* WARNING: Removing unreachable block (ram,0x06893574) */
/* WARNING: Removing unreachable block (ram,0x06893944) */
/* WARNING: Removing unreachable block (ram,0x06893bb8) */
/* WARNING: Removing unreachable block (ram,0x06893bbc) */
/* WARNING: Removing unreachable block (ram,0x06893bc4) */
/* WARNING: Removing unreachable block (ram,0x06893c44) */
/* WARNING: Removing unreachable block (ram,0x06893bec) */
/* WARNING: Removing unreachable block (ram,0x06893c14) */
/* WARNING: Removing unreachable block (ram,0x06893c1c) */
/* WARNING: Removing unreachable block (ram,0x06893c5c) */
/* WARNING: Removing unreachable block (ram,0x06893c28) */
/* WARNING: Removing unreachable block (ram,0x06893c34) */
/* WARNING: Removing unreachable block (ram,0x06893c6c) */
/* WARNING: Removing unreachable block (ram,0x06893cb0) */
/* WARNING: Removing unreachable block (ram,0x06893c7c) */
/* WARNING: Removing unreachable block (ram,0x06893cbc) */
/* WARNING: Removing unreachable block (ram,0x06893d0c) */
/* WARNING: Removing unreachable block (ram,0x06892f7c) */
/* WARNING: Removing unreachable block (ram,0x06892f8c) */
/* WARNING: Removing unreachable block (ram,0x06892f94) */
/* WARNING: Removing unreachable block (ram,0x06892fbc) */
/* WARNING: Removing unreachable block (ram,0x06892fa0) */
/* WARNING: Removing unreachable block (ram,0x06892fac) */
/* WARNING: Removing unreachable block (ram,0x06892fcc) */
/* WARNING: Removing unreachable block (ram,0x06892fec) */
/* WARNING: Removing unreachable block (ram,0x06892ff4) */
/* WARNING: Removing unreachable block (ram,0x0689301c) */
/* WARNING: Removing unreachable block (ram,0x06893000) */
/* WARNING: Removing unreachable block (ram,0x0689300c) */
/* WARNING: Removing unreachable block (ram,0x0689302c) */
/* WARNING: Removing unreachable block (ram,0x06893190) */
/* WARNING: Removing unreachable block (ram,0x06893760) */
/* WARNING: Removing unreachable block (ram,0x06892688) */
/* WARNING: Removing unreachable block (ram,0x06892698) */
/* WARNING: Removing unreachable block (ram,0x068926a0) */
/* WARNING: Removing unreachable block (ram,0x068926c8) */
/* WARNING: Removing unreachable block (ram,0x068926ac) */
/* WARNING: Removing unreachable block (ram,0x068926b8) */
/* WARNING: Removing unreachable block (ram,0x068926d8) */
/* WARNING: Removing unreachable block (ram,0x068926f8) */
/* WARNING: Removing unreachable block (ram,0x06892700) */
/* WARNING: Removing unreachable block (ram,0x06892728) */
/* WARNING: Removing unreachable block (ram,0x0689270c) */
/* WARNING: Removing unreachable block (ram,0x06892718) */
/* WARNING: Removing unreachable block (ram,0x06892738) */
/* WARNING: Removing unreachable block (ram,0x06892748) */
/* WARNING: Removing unreachable block (ram,0x03ea57f0) */
/* WARNING: Removing unreachable block (ram,0x03ea5834) */
/* WARNING: Removing unreachable block (ram,0x03ea5838) */
/* WARNING: Removing unreachable block (ram,0x07286a90) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

long * MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessComponent
                 (long *param_1,long *param_2,undefined1 *param_3,long *param_4,undefined1 *param_5,
                 long *param_6)

{
  ulong *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int iVar12;
  uint uVar13;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  undefined1 *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long lVar29;
  long *plVar30;
  long lVar31;
  int *piVar32;
  undefined8 unaff_x19;
  undefined *puVar33;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar34;
  long lVar35;
  long *plVar36;
  undefined1 *unaff_x22;
  long *unaff_x23;
  undefined *puVar37;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar38;
  undefined8 unaff_x30;
  double dVar39;
  double dVar40;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  undefined8 unaff_d8;
  double unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  
  puVar6 = &stack0xffffffffffffffe0;
  if (param_1[9] == 0) {
    unaff_x30 = 0x689202c;
    plVar23 = (long *)func_0x03280cac();
    param_2 = extraout_x1;
    dVar40 = extraout_d0;
  }
  else {
    dVar40 = (double)func_0x064a84bc(param_1[9],0);
    puVar6 = (undefined1 *)register0x00000008;
    plVar23 = param_1;
    param_1 = unaff_x20;
  }
  puVar7 = puVar6 + -0x30;
  puVar5 = puVar6 + -0x30;
  *(undefined8 *)(puVar6 + -0x30) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x20) = unaff_x30;
  *(undefined8 *)(puVar6 + -0x18) = unaff_x21;
  *(long **)(puVar6 + -0x10) = param_1;
  *(undefined8 *)(puVar6 + -8) = unaff_x19;
  uVar34 = 0x7e28000;
  if ((bRam0000000007e28d71 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e65e8);
    func_0x03280a18(PTR_DAT_0777a600);
    bRam0000000007e28d71 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar38 = 0x68921fc;
    plVar21 = (long *)func_0x03280cac();
    plVar18 = extraout_x1_00;
    dVar39 = extraout_d0_00;
SUB_068921fc:
    puVar6 = puVar7 + -0xb0;
    puVar25 = puVar7 + -0xb0;
    *(double *)(puVar7 + -0x50) = unaff_d9;
    *(double *)(puVar7 + -0x48) = dVar40;
    *(undefined8 *)(puVar7 + -0x40) = uVar38;
    *(undefined **)(puVar7 + -0x30) = unaff_x24;
    *(long **)(puVar7 + -0x28) = unaff_x23;
    *(undefined1 **)(puVar7 + -0x20) = unaff_x22;
    *(ulong *)(puVar7 + -0x18) = uVar34;
    *(long **)(puVar7 + -0x10) = plVar23;
    *(long **)(puVar7 + -8) = param_2;
    plVar36 = (long *)0x7e28000;
    if ((bRam0000000007e28d73 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777a600);
      bRam0000000007e28d73 = 1;
    }
    puVar37 = PTR_DAT_0777a600;
    *(undefined8 *)(puVar7 + -0x60) = 0;
    *(undefined8 *)(puVar7 + -0x78) = 0;
    *(undefined8 *)(puVar7 + -0x80) = 0;
    *(undefined8 *)(puVar7 + -0x68) = 0;
    *(undefined8 *)(puVar7 + -0x70) = 0;
    if (plVar18 != (long *)0x0) {
      lVar31 = *plVar18;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a600) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 4) * 0x10 + 0x138);
            goto LAB_068922b4;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777a600,4);
LAB_068922b4:
      dVar40 = (double)(*(code *)*puVar22)(plVar18,puVar22[1]);
      lVar35 = *plVar18;
      lVar31 = *(long *)puVar37;
      uVar2 = *(ushort *)(lVar35 + 0x12e);
      uVar34 = (ulong)uVar2;
      plVar23 = plVar21;
      param_2 = plVar18;
      if (dVar40 <= dVar39) {
        if (uVar2 != 0) {
          piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar31) {
              puVar22 = (undefined8 *)(lVar35 + (long)(*piVar32 + 4) * 0x10 + 0x138);
              goto LAB_068923ac;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(plVar18,lVar31,4);
LAB_068923ac:
        unaff_d9 = (double)(*(code *)*puVar22)(plVar18,puVar22[1]);
        lVar31 = *plVar18;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 5) * 0x10 + 0x138);
              goto LAB_0689246c;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar37,5);
LAB_0689246c:
        dVar40 = dVar39 - unaff_d9;
        (*(code *)*puVar22)(0,plVar18,puVar22[1]);
        lVar31 = *plVar18;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xd) * 0x10 + 0x138);
              goto LAB_06892538;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar37,0xd);
LAB_06892538:
        param_3 = (undefined1 *)puVar22[1];
        (*(code *)*puVar22)(plVar18,0);
        uVar38 = 0x6892558;
        dVar39 = dVar40;
        goto SUB_06892768;
      }
      if (uVar2 != 0) {
        piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar31) {
            puVar22 = (undefined8 *)(lVar35 + (long)(*piVar32 + 7) * 0x10 + 0x138);
            goto LAB_0689234c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar18,lVar31,7);
LAB_0689234c:
      (*(code *)*puVar22)(0,plVar18,puVar22[1]);
      lVar31 = *plVar18;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xf) * 0x10 + 0x138);
            goto LAB_0689240c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar37,0xf);
LAB_0689240c:
      uVar34 = (*(code *)*puVar22)(plVar18,puVar22[1]);
      lVar31 = *plVar18;
      plVar36 = (long *)(uVar34 & 0xffffffff);
      auVar42._8_8_ = plVar36;
      auVar42._0_8_ = plVar21;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 10) * 0x10 + 0x138);
            goto LAB_068924d0;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar37,10);
LAB_068924d0:
      iVar11 = (*(code *)*puVar22)(plVar18,puVar22[1]);
      lVar31 = *plVar18;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      unaff_x22 = (undefined1 *)((ulong)(0 < iVar11) << 1);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x10) * 0x10 + 0x138);
            goto LAB_0689256c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar37,0x10);
LAB_0689256c:
      (*(code *)*puVar22)(plVar18,unaff_x22,puVar22[1]);
      param_3 = (undefined1 *)0x0;
      func_0x060d57ac(puVar7 + -0x80,plVar18);
      lVar31 = *plVar18;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xf) * 0x10 + 0x138);
            goto LAB_068925dc;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      param_3 = (undefined1 *)0xf;
      puVar22 = (undefined8 *)func_0x03256b10(plVar18);
LAB_068925dc:
      uVar34 = (*(code *)*puVar22)(plVar18,puVar22[1]);
      unaff_x23 = (long *)plVar21[0xd];
      unaff_x24 = puVar37;
      if (unaff_x23 != (long *)0x0) goto code_r0x068925f0;
    }
    uVar38 = 0x6892768;
    plVar23 = (long *)func_0x03280cac();
    puVar6 = puVar7 + -0xb0;
    param_2 = extraout_x1_01;
    puVar37 = unaff_x24;
    dVar40 = extraout_d0_01;
SUB_06892768:
    do {
      puVar7 = puVar6 + -400;
      puVar9 = puVar6 + -400;
      puVar8 = puVar6 + -400;
      puVar25 = puVar6 + -400;
      *(double *)(puVar6 + -0x70) = unaff_d9;
      *(double *)(puVar6 + -0x68) = dVar39;
      *(undefined8 *)(puVar6 + -0x60) = unaff_x29;
      *(undefined8 *)(puVar6 + -0x50) = uVar38;
      *(long **)(puVar6 + -0x48) = unaff_x27;
      *(long **)(puVar6 + -0x40) = unaff_x26;
      *(undefined8 *)(puVar6 + -0x38) = unaff_x25;
      *(undefined **)(puVar6 + -0x30) = puVar37;
      *(long **)(puVar6 + -0x28) = unaff_x23;
      *(undefined1 **)(puVar6 + -0x20) = unaff_x22;
      *(long **)(puVar6 + -0x18) = plVar36;
      *(long **)(puVar6 + -0x10) = plVar21;
      *(long **)(puVar6 + -8) = plVar18;
      plVar36 = (long *)0x7e28000;
      if ((bRam0000000007e28d74 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810570);
        func_0x03280a18(PTR_DAT_0777e5a8);
        func_0x03280a18(PTR_DAT_07810578);
        func_0x03280a18(PTR_DAT_07810580);
        func_0x03280a18(PTR_DAT_0777e498);
        func_0x03280a18(PTR_DAT_07809778);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_0777e4a0);
        func_0x03280a18(PTR_DAT_0777a600);
        func_0x03280a18(PTR_DAT_077512a8);
        func_0x03280a18(PTR_DAT_07751420);
        func_0x03280a18(PTR_DAT_07810588);
        func_0x03280a18(PTR_DAT_07778fa0);
        bRam0000000007e28d74 = 1;
      }
      unaff_x24 = PTR_DAT_0777a600;
      *(undefined8 *)(puVar6 + -0xb0) = 0;
      *(undefined8 *)(puVar6 + -0xe0) = 0;
      *(undefined8 *)(puVar6 + -0x110) = 0;
      *(undefined8 *)(puVar6 + -0x140) = 0;
      *(undefined8 *)(puVar6 + -200) = 0;
      *(undefined8 *)(puVar6 + -0xd0) = 0;
      *(undefined8 *)(puVar6 + -0xb8) = 0;
      *(undefined8 *)(puVar6 + -0xc0) = 0;
      *(undefined8 *)(puVar6 + -0xf8) = 0;
      *(undefined8 *)(puVar6 + -0x100) = 0;
      *(undefined8 *)(puVar6 + -0xe8) = 0;
      *(undefined8 *)(puVar6 + -0xf0) = 0;
      *(undefined8 *)(puVar6 + -0x128) = 0;
      *(undefined8 *)(puVar6 + -0x130) = 0;
      *(undefined8 *)(puVar6 + -0x118) = 0;
      *(undefined8 *)(puVar6 + -0x120) = 0;
      *(undefined8 *)(puVar6 + -0x158) = 0;
      *(undefined8 *)(puVar6 + -0x160) = 0;
      *(undefined8 *)(puVar6 + -0x148) = 0;
      *(undefined8 *)(puVar6 + -0x150) = 0;
      if (param_2 == (long *)0x0) {
LAB_06893784:
        unaff_x24 = puVar37;
        puVar25 = param_5;
        uVar38 = 0x6893788;
        auVar42 = func_0x03280cac();
SUB_06893788:
        plVar21 = auVar42._0_8_;
        puVar5 = puVar8 + -0x120;
        puVar9 = puVar8 + -0x120;
        *(undefined8 *)(puVar8 + -0x60) = unaff_x29;
        *(undefined8 *)(puVar8 + -0x58) = uVar38;
        *(undefined **)(puVar8 + -0x50) = unaff_x28;
        *(long **)(puVar8 + -0x48) = unaff_x27;
        *(long **)(puVar8 + -0x40) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x38) = unaff_x25;
        *(undefined **)(puVar8 + -0x30) = unaff_x24;
        *(long **)(puVar8 + -0x28) = unaff_x23;
        *(undefined1 **)(puVar8 + -0x20) = unaff_x22;
        *(long **)(puVar8 + -0x18) = plVar36;
        *(long **)(puVar8 + -0x10) = plVar23;
        *(long **)(puVar8 + -8) = param_2;
        unaff_x25 = 0x7e28000;
        unaff_x23 = (long *)((ulong)param_3 & 0xffffffff);
        unaff_x24 = (undefined *)(auVar42._8_8_ & 0xffffffff);
        plVar23 = plVar21;
        plVar30 = param_4;
        param_5 = puVar25;
        plVar18 = param_6;
        if ((bRam0000000007e28d77 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07810590);
          func_0x03280a18(PTR_DAT_07810598);
          func_0x03280a18(PTR_DAT_0777e5a8);
          func_0x03280a18(PTR_DAT_07810578);
          func_0x03280a18(PTR_DAT_07810580);
          func_0x03280a18(PTR_DAT_077e6600);
          func_0x03280a18(PTR_DAT_0777e498);
          func_0x03280a18(PTR_DAT_07809778);
          func_0x03280a18(PTR_DAT_0777e4a0);
          func_0x03280a18(PTR_DAT_077512a8);
          func_0x03280a18(PTR_DAT_07751420);
          func_0x03280a18(PTR_DAT_078105a0);
          func_0x03280a18(PTR_DAT_078105a8);
          plVar23 = (long *)func_0x03280a18(PTR_DAT_07778fa0);
          bRam0000000007e28d77 = 1;
        }
        *(undefined8 *)(puVar8 + -0xa0) = 0;
        *(undefined8 *)(puVar8 + -0xd0) = 0;
        *(undefined8 *)(puVar8 + -0x100) = 0;
        *(undefined8 *)(puVar8 + -0xb8) = 0;
        *(undefined8 *)(puVar8 + -0xc0) = 0;
        *(undefined8 *)(puVar8 + -0xa8) = 0;
        *(undefined8 *)(puVar8 + -0xb0) = 0;
        *(undefined8 *)(puVar8 + -0xe8) = 0;
        *(undefined8 *)(puVar8 + -0xf0) = 0;
        *(undefined8 *)(puVar8 + -0xd8) = 0;
        *(undefined8 *)(puVar8 + -0xe0) = 0;
        *(undefined8 *)(puVar8 + -0x118) = 0;
        *(undefined8 *)(puVar8 + -0x120) = 0;
        *(undefined8 *)(puVar8 + -0x108) = 0;
        *(undefined8 *)(puVar8 + -0x110) = 0;
        unaff_x22 = puVar25;
        if (auVar42._8_4_ < 2) {
          if (((uint)param_3 & 0xfffffffe) != 2) {
            return plVar23;
          }
          plVar36 = (long *)plVar21[5];
          plVar24 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810598);
          func_0x0688cf40(plVar24,0);
          plVar21 = (long *)0x0;
          plVar23 = plVar24;
          if (plVar36 != (long *)0x0) {
            lVar31 = *(long *)PTR_DAT_078105a8;
            uVar38 = 0x6893944;
            plVar21 = plVar36;
            param_4 = plVar24;
            goto SUB_03ea4d6c;
          }
        }
        else {
          if ((1 < auVar42._8_4_ - 2) || (1 < (uint)param_3)) {
            return plVar23;
          }
          plVar23 = param_4;
          if (param_6 != (long *)0x0) {
            lVar31 = *param_6;
            lVar35 = *(long *)PTR_DAT_0777e5a8;
            uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar34 != 0) {
              piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)(lVar35 + 0x20)) {
                  lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar35 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_06893958;
                }
                uVar34 = uVar34 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar34 != 0);
            }
            lVar31 = func_0x03256b10(param_6);
LAB_06893958:
            lVar31 = func_0x03280b88(*(undefined8 *)(lVar31 + 8),lVar35);
            unaff_x23 = (long *)(**(code **)(lVar31 + 8))(param_6,lVar31);
            lVar31 = *param_6;
            lVar35 = *(long *)PTR_DAT_07810578;
            uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar34 != 0) {
              piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)(lVar35 + 0x20)) {
                  lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar35 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_068939d4;
                }
                uVar34 = uVar34 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar34 != 0);
            }
            lVar31 = func_0x03256b10(param_6);
LAB_068939d4:
            lVar31 = func_0x03280b88(*(undefined8 *)(lVar31 + 8),lVar35);
            unaff_x24 = (undefined *)(**(code **)(lVar31 + 8))(param_6,lVar31);
            if (unaff_x24 == (undefined *)0x0) {
              lVar31 = *param_6;
              lVar35 = *(long *)PTR_DAT_07810580;
              uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
              if (uVar34 != 0) {
                piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar32 + -2) == *(long *)(lVar35 + 0x20)) {
                    lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar35 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_06893a54;
                  }
                  uVar34 = uVar34 - 1;
                  piVar32 = piVar32 + 4;
                } while (uVar34 != 0);
              }
              lVar31 = func_0x03256b10(param_6);
LAB_06893a54:
              lVar31 = func_0x03280b88(*(undefined8 *)(lVar31 + 8),lVar35);
              unaff_x24 = (undefined *)(**(code **)(lVar31 + 8))(param_6,lVar31);
            }
            lVar31 = *param_6;
            lVar35 = plVar21[0xb];
            unaff_x26 = *(long **)PTR_DAT_077e6600;
            uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
            if (uVar34 != 0) {
              piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == unaff_x26[4]) {
                  lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(unaff_x26 + 10)) * 0x10
                           + 0x138;
                  goto LAB_06893ad4;
                }
                uVar34 = uVar34 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar34 != 0);
            }
            lVar31 = func_0x03256b10(param_6);
LAB_06893ad4:
            lVar31 = func_0x03280b88(*(undefined8 *)(lVar31 + 8),unaff_x26);
            uVar38 = (**(code **)(lVar31 + 8))(param_6,lVar31);
            unaff_x25 = 0;
            if (lVar35 != 0) {
              unaff_x25 = MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetSkipCooldownPrice
                                    (lVar35,uVar38,unaff_x24);
              unaff_x28 = PTR_DAT_0777e498;
              lVar31 = *param_6;
              uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
              if (uVar34 != 0) {
                piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777e498) {
                    puVar22 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
                    goto LAB_06893b5c;
                  }
                  uVar34 = uVar34 - 1;
                  piVar32 = piVar32 + 4;
                } while (uVar34 != 0);
              }
              puVar22 = (undefined8 *)func_0x03256b10(param_6,*(long *)PTR_DAT_0777e498,0);
LAB_06893b5c:
              uVar38 = (*(code *)*puVar22)(param_6,puVar22[1]);
              uVar34 = func_0x064a73dc(plVar21,uVar38,0);
              if ((uVar34 & 1) == 0) {
                plVar36 = (long *)plVar21[5];
                plVar24 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810598);
                func_0x0688cf40(plVar24,1);
                unaff_x26 = plVar36;
                unaff_x27 = plVar24;
                if (plVar36 != (long *)0x0) {
                  lVar31 = *(long *)PTR_DAT_078105a8;
                  uVar38 = 0x6893bb8;
                  puVar5 = puVar8 + -0x120;
                  goto SUB_03ea4d6c;
                }
              }
              else {
                lVar31 = *param_6;
                uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
                if (uVar34 != 0) {
                  piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == *(long *)unaff_x28) {
                      puVar22 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
                      goto LAB_06893d70;
                    }
                    uVar34 = uVar34 - 1;
                    piVar32 = piVar32 + 4;
                  } while (uVar34 != 0);
                }
                puVar22 = (undefined8 *)func_0x03256b10(param_6,*(long *)unaff_x28,0);
LAB_06893d70:
                uVar38 = (*(code *)*puVar22)(param_6,puVar22[1]);
                puVar25 = (undefined1 *)func_0x06389f5c(uVar38,0);
                lVar31 = *param_6;
                unaff_x23 = (long *)plVar21[0xc];
                uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
                if (uVar34 != 0) {
                  piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == *(long *)unaff_x28) {
                      puVar22 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
                      goto LAB_06893dd8;
                    }
                    uVar34 = uVar34 - 1;
                    piVar32 = piVar32 + 4;
                  } while (uVar34 != 0);
                }
                puVar22 = (undefined8 *)func_0x03256b10(param_6,*(long *)unaff_x28,0);
LAB_06893dd8:
                plVar36 = (long *)(*(code *)*puVar22)(param_6,puVar22[1]);
                if (unaff_x23 != (long *)0x0) {
                  lVar31 = *unaff_x23;
                  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
                  unaff_x24 = *(undefined **)PTR_DAT_07778fa0;
                  if (uVar34 != 0) {
                    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777e4a0) {
                        puVar22 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
                        goto LAB_06893e4c;
                      }
                      uVar34 = uVar34 - 1;
                      piVar32 = piVar32 + 4;
                    } while (uVar34 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)PTR_DAT_0777e4a0,0);
LAB_06893e4c:
                  plVar18 = (long *)puVar22[1];
                  plVar30 = plVar36;
                  param_5 = puVar25;
                  uVar38 = (*(code *)*puVar22)(unaff_x23,unaff_x24,param_4);
                  param_6 = plVar36;
                  if (plVar21[8] != 0) {
                    plVar23 = (long *)func_0x068b94a0(plVar21[8],uVar38,0,0);
                    return plVar23;
                  }
                }
              }
            }
          }
        }
        uVar38 = 0x6893ea8;
        func_0x03280cac();
        param_2 = extraout_x1_02;
        plVar36 = param_6;
        unaff_x22 = puVar25;
        dVar39 = dVar40;
SUB_06893ea8:
        *(undefined8 *)(puVar9 + -0x20) = uVar38;
        *(long **)(puVar9 + -0x10) = plVar23;
        *(long **)(puVar9 + -8) = plVar21;
        if ((bRam0000000007e28d75 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777a600);
          bRam0000000007e28d75 = 1;
        }
        puVar37 = PTR_DAT_0777a600;
        if (param_2 != (long *)0x0) {
          lVar31 = *param_2;
          uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar34 == 0) goto LAB_06893f10;
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          goto LAB_06893ef8;
        }
        uVar38 = 0x6893fbc;
        plVar23 = (long *)func_0x03280cac();
        puVar6 = puVar9 + -0x20;
        param_2 = extraout_x1_03;
        plVar21 = (long *)0x0;
        plVar24 = (long *)0x7e28000;
        dVar40 = extraout_d0_02;
      }
      else {
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a600) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xc) * 0x10 + 0x138);
              goto LAB_068928c4;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777a600,0xc);
LAB_068928c4:
        iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
              goto LAB_06892920;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,0);
LAB_06892920:
        iVar12 = (*(code *)*puVar22)(param_2,puVar22[1]);
        lVar31 = *param_2;
        iVar14 = 0;
        if (iVar12 != 0) {
          iVar14 = iVar11 / iVar12;
        }
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 9) * 0x10 + 0x138);
              goto LAB_06892980;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,9);
LAB_06892980:
        (*(code *)*puVar22)(param_2,iVar14,puVar22[1]);
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 8) * 0x10 + 0x138);
              goto LAB_068929e0;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,8);
LAB_068929e0:
        uVar13 = (*(code *)*puVar22)(param_2,puVar22[1]);
        lVar31 = *param_2;
        uVar34 = (ulong)uVar13;
        uVar20 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar20 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 2) * 0x10 + 0x138);
              goto LAB_06892a40;
            }
            uVar20 = uVar20 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar20 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,2);
LAB_06892a40:
        iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
        if (iVar11 <= (int)uVar13) {
          lVar31 = *param_2;
          uVar20 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar20 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
                puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 3) * 0x10 + 0x138);
                goto LAB_06892aa4;
              }
              uVar20 = uVar20 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar20 != 0);
          }
          puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,3);
LAB_06892aa4:
          iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
          if (0 < iVar11) goto code_r0x06892ab8;
        }
        func_0x060d57ac(puVar6 + -0xd0,param_2,0);
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xf) * 0x10 + 0x138);
              goto LAB_06892b58;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,0xf);
LAB_06892b58:
        uVar34 = (*(code *)*puVar22)(param_2,puVar22[1]);
        lVar31 = *param_2;
        plVar36 = (long *)(uVar34 & 0xffffffff);
        auVar42._8_8_ = plVar36;
        auVar42._0_8_ = plVar23;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 6) * 0x10 + 0x138);
              goto LAB_06892bb8;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,6);
LAB_06892bb8:
        dVar39 = (double)(*(code *)*puVar22)(param_2,puVar22[1]);
        lVar35 = *param_2;
        lVar31 = *(long *)unaff_x24;
        uVar2 = *(ushort *)(lVar35 + 0x12e);
        uVar34 = (ulong)uVar2;
        if (dVar40 < dVar39) {
          if (uVar2 != 0) {
            piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar31) {
                puVar22 = (undefined8 *)(lVar35 + (long)(*piVar32 + 10) * 0x10 + 0x138);
                goto LAB_06892c50;
              }
              uVar34 = uVar34 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar34 != 0);
          }
          puVar22 = (undefined8 *)func_0x03256b10(param_2,lVar31,10);
LAB_06892c50:
          iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
          lVar31 = *param_2;
          uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
          uVar13 = 1;
          if (0 < iVar11) {
            uVar13 = 2;
          }
          unaff_x22 = (undefined1 *)(ulong)uVar13;
          if (uVar34 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
                puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x10) * 0x10 + 0x138);
                goto LAB_06892d18;
              }
              uVar34 = uVar34 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar34 != 0);
          }
          puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,0x10);
LAB_06892d18:
          param_3 = (undefined1 *)puVar22[1];
          (*(code *)*puVar22)(param_2,unaff_x22);
          lVar31 = *param_2;
          uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar34 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
                puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xf) * 0x10 + 0x138);
                goto LAB_06892dd8;
              }
              uVar34 = uVar34 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar34 != 0);
          }
          param_3 = (undefined1 *)0xf;
          puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_06892dd8:
          uVar34 = (*(code *)*puVar22)(param_2,puVar22[1]);
          unaff_x23 = (long *)plVar23[0xd];
          puVar37 = unaff_x24;
          if (unaff_x23 == (long *)0x0) goto LAB_06893784;
          lVar31 = *unaff_x23;
          param_3 = (undefined1 *)(uVar34 & 0xffffffff);
          uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar34 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x14) * 0x10 + 0x138);
                goto LAB_06892f40;
              }
              uVar34 = uVar34 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar34 != 0);
          }
          puVar22 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)PTR_DAT_0777a498,0x14);
LAB_06892f40:
          param_4 = (long *)(*(code *)*puVar22)(unaff_x23,param_2,puVar22[1]);
          *(undefined8 *)(puVar6 + -0x188) = *(undefined8 *)(puVar6 + -200);
          *(undefined8 *)(puVar6 + -400) = *(undefined8 *)(puVar6 + -0xd0);
          *(undefined8 *)(puVar6 + -0x178) = *(undefined8 *)(puVar6 + -0xb8);
          *(undefined8 *)(puVar6 + -0x180) = *(undefined8 *)(puVar6 + -0xc0);
          *(undefined8 *)(puVar6 + -0x170) = *(undefined8 *)(puVar6 + -0xb0);
          uVar38 = 0x6892f7c;
          puVar8 = puVar6 + -400;
          param_6 = param_2;
          unaff_x22 = param_3;
          goto SUB_06893788;
        }
        if (uVar2 != 0) {
          piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar31) {
              puVar22 = (undefined8 *)(lVar35 + (long)(*piVar32 + 6) * 0x10 + 0x138);
              plVar30 = param_4;
              plVar18 = param_6;
              goto LAB_06892cb8;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,lVar31,6);
        plVar30 = param_4;
        plVar18 = param_6;
LAB_06892cb8:
        unaff_d9 = (double)(*(code *)*puVar22)(param_2,puVar22[1]);
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 7) * 0x10 + 0x138);
              goto LAB_06892d78;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,7);
LAB_06892d78:
        (*(code *)*puVar22)(0,param_2,puVar22[1]);
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 10) * 0x10 + 0x138);
              goto LAB_06892e48;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,10);
LAB_06892e48:
        dVar40 = dVar40 - unaff_d9;
        iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
        dVar39 = dVar40;
        if (iVar11 == 0) {
          uVar38 = 0x6892e6c;
          plVar21 = param_2;
          goto SUB_06893ea8;
        }
        unaff_x22 = (undefined1 *)0x0;
        uVar38 = 0x6892e84;
        puVar6 = puVar6 + -400;
        plVar21 = param_2;
        plVar24 = plVar23;
      }
      *(double *)(puVar6 + -0x40) = unaff_d9;
      *(double *)(puVar6 + -0x38) = dVar39;
      *(undefined8 *)(puVar6 + -0x30) = uVar38;
      *(long **)(puVar6 + -0x28) = unaff_x23;
      *(undefined1 **)(puVar6 + -0x20) = unaff_x22;
      *(long **)(puVar6 + -0x18) = plVar36;
      *(long **)(puVar6 + -0x10) = plVar24;
      *(long **)(puVar6 + -8) = plVar21;
      param_4 = plVar30;
      param_6 = plVar18;
      if ((bRam0000000007e28d76 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a600);
        func_0x03280a18(PTR_DAT_0774ee08);
        bRam0000000007e28d76 = 1;
        param_4 = plVar30;
        param_6 = plVar18;
      }
      puVar37 = PTR_DAT_0777a600;
      if (param_2 == (long *)0x0) {
        plVar21 = (long *)func_0x03280cac();
        puVar37 = PTR_DAT_078105b0;
        *(undefined8 *)(puVar6 + -0x60) = 0x689456c;
        *(undefined8 *)(puVar6 + -0x58) = 0x7e28000;
        *(long **)(puVar6 + -0x50) = plVar23;
        *(undefined8 *)(puVar6 + -0x48) = 0;
        if ((bRam0000000007e28d78 & 1) == 0) {
          func_0x03280a18(PTR_DAT_078105b0);
          bRam0000000007e28d78 = 1;
        }
        uVar38 = *(undefined8 *)puVar37;
        return plVar21;
      }
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a600) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 1) * 0x10 + 0x138);
            goto LAB_06894060;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777a600,1);
LAB_06894060:
      iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
      if (iVar11 == 0) {
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
              puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 10) * 0x10 + 0x138);
              goto LAB_06894540;
            }
            uVar34 = uVar34 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar34 != 0);
        }
        puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,10);
LAB_06894540:
        plVar21 = (long *)(*(code *)*puVar22)(param_2,puVar22[1]);
        if (0 < (int)plVar21) {
          return plVar21;
        }
      }
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 10) * 0x10 + 0x138);
            goto LAB_06894100;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,10);
LAB_06894100:
      iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_0689415c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,0);
LAB_0689415c:
      iVar14 = (*(code *)*puVar22)(param_2,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xb) * 0x10 + 0x138);
            goto LAB_068941bc;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,0xb);
LAB_068941bc:
      (*(code *)*puVar22)(param_2,iVar14 + iVar11,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 10) * 0x10 + 0x138);
            goto LAB_0689421c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,10);
LAB_0689421c:
      puVar33 = PTR_DAT_0774ee08;
      uVar15 = (*(code *)*puVar22)(param_2,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xe) * 0x10 + 0x138);
            goto LAB_06894284;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,0xe);
LAB_06894284:
      uVar16 = (*(code *)*puVar22)(param_2,puVar22[1]);
      if (*(int *)(*(long *)puVar33 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar33);
      }
      uVar15 = func_0x05797580(uVar15,uVar16,0);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xb) * 0x10 + 0x138);
            goto LAB_0689430c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,0xb);
LAB_0689430c:
      param_3 = (undefined1 *)puVar22[1];
      (*(code *)*puVar22)(param_2,uVar15);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 1) * 0x10 + 0x138);
            goto LAB_0689436c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      param_3 = (undefined1 *)0x1;
      puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_0689436c:
      iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 7) * 0x10 + 0x138);
            goto LAB_068943cc;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      param_3 = (undefined1 *)0x7;
      puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_068943cc:
      (*(code *)*puVar22)((double)iVar11,param_2,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 10) * 0x10 + 0x138);
            goto LAB_0689442c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      param_3 = (undefined1 *)0xa;
      puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_0689442c:
      iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
      lVar31 = *param_2;
      uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
      if (uVar34 != 0) {
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
            puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xe) * 0x10 + 0x138);
            goto LAB_0689448c;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      param_3 = (undefined1 *)0xe;
      puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_0689448c:
      iVar14 = (*(code *)*puVar22)(param_2,puVar22[1]);
      if (iVar14 <= iVar11) {
        lVar31 = *param_2;
        uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar34 == 0) goto LAB_068944f0;
        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
        goto LAB_068944d8;
      }
      plVar21 = *(long **)(puVar6 + -0x10);
      plVar18 = *(long **)(puVar6 + -8);
      unaff_x22 = *(undefined1 **)(puVar6 + -0x20);
      plVar36 = *(long **)(puVar6 + -0x18);
      uVar38 = *(undefined8 *)(puVar6 + -0x30);
      unaff_x23 = *(long **)(puVar6 + -0x28);
      unaff_d9 = *(double *)(puVar6 + -0x40);
      puVar37 = unaff_x24;
      dVar39 = *(double *)(puVar6 + -0x38);
    } while( true );
  }
  lVar31 = *param_2;
  lVar35 = *(long *)PTR_DAT_077e65e8;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  param_3 = (undefined1 *)(ulong)*(ushort *)(lVar35 + 0x50);
  if (uVar34 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)(lVar35 + 0x20)) {
        lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar35 + 0x50)) * 0x10 + 0x138;
        goto LAB_068920d0;
      }
      uVar34 = uVar34 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar34 != 0);
  }
  lVar31 = func_0x03256b10(param_2);
LAB_068920d0:
  lVar31 = func_0x03280b88(*(undefined8 *)(lVar31 + 8),lVar35);
  plVar21 = (long *)(**(code **)(lVar31 + 8))(param_2,lVar31);
  puVar37 = PTR_DAT_0777a600;
  if ((plVar21 != (long *)0x0) && ((char)plVar21[0xf] != '\0')) {
    return plVar21;
  }
  lVar31 = *param_2;
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a600) {
        puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x16) * 0x10 + 0x138);
        goto LAB_06892160;
      }
      uVar34 = uVar34 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar34 != 0);
  }
  param_3 = (undefined1 *)0x16;
  puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_06892160:
  uVar34 = (*(code *)*puVar22)(param_2,puVar22[1]);
  if ((uVar34 & 1) != 0) {
    lVar31 = *param_2;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
          puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x17) * 0x10 + 0x138);
          goto LAB_068921dc;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,0x17);
LAB_068921dc:
                    /* WARNING: Could not recover jumptable at 0x068921f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar23 = (long *)(*(code *)*puVar22)(param_2,0,puVar22[1]);
    return plVar23;
  }
  *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
  *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x20);
  *(undefined1 **)(puVar6 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  if ((bRam0000000007e28d72 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a600);
    bRam0000000007e28d72 = 1;
  }
  puVar37 = PTR_DAT_0777a600;
  if (param_2 != (long *)0x0) {
    lVar31 = *param_2;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a600) {
          puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x13) * 0x10 + 0x138);
          goto LAB_06891b90;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    param_3 = (undefined1 *)0x13;
    puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_06891b90:
    uVar20 = (*(code *)*puVar22)(param_2,puVar22[1]);
    lVar35 = *param_2;
    lVar31 = *(long *)puVar37;
    uVar2 = *(ushort *)(lVar35 + 0x12e);
    uVar34 = (ulong)uVar2;
    if ((uVar20 & 1) != 0) {
      if (uVar2 != 0) {
        piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar31) {
            puVar22 = (undefined8 *)(lVar35 + (long)(*piVar32 + 0xb) * 0x10 + 0x138);
            goto LAB_06891c24;
          }
          uVar34 = uVar34 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar34 != 0);
      }
      puVar22 = (undefined8 *)func_0x03256b10(param_2,lVar31,0xb);
LAB_06891c24:
                    /* WARNING: Could not recover jumptable at 0x06891c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar23 = (long *)(*(code *)*puVar22)(param_2,0,puVar22[1]);
      return plVar23;
    }
    if (uVar2 != 0) {
      piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar31) {
          puVar22 = (undefined8 *)(lVar35 + (long)(*piVar32 + 10) * 0x10 + 0x138);
          goto LAB_06891c54;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    param_3 = (undefined1 *)0xa;
    puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_06891c54:
    iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
    lVar31 = *param_2;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
          puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xe) * 0x10 + 0x138);
          goto LAB_06891cb4;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    param_3 = (undefined1 *)0xe;
    puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_06891cb4:
    plVar21 = (long *)(*(code *)*puVar22)(param_2,puVar22[1]);
    if ((int)plVar21 <= iVar11) {
      return plVar21;
    }
    lVar31 = *param_2;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
          puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 4) * 0x10 + 0x138);
          goto LAB_06891d2c;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    param_3 = (undefined1 *)0x4;
    puVar22 = (undefined8 *)func_0x03256b10(param_2);
LAB_06891d2c:
    dVar39 = (double)(*(code *)*puVar22)(param_2,puVar22[1]);
    if (dVar39 <= 0.0) {
      plVar21 = *(long **)(puVar6 + -0x10);
      plVar18 = *(long **)(puVar6 + -8);
      unaff_x22 = *(undefined1 **)(puVar6 + -0x20);
      plVar36 = *(long **)(puVar6 + -0x18);
      uVar38 = *(undefined8 *)(puVar6 + -0x28);
      dVar39 = *(double *)(puVar6 + -0x30);
      puVar37 = unaff_x24;
      goto SUB_06892768;
    }
    unaff_x22 = *(undefined1 **)(puVar6 + -0x20);
    uVar34 = *(ulong *)(puVar6 + -0x18);
    uVar38 = *(undefined8 *)(puVar6 + -0x28);
    puVar7 = puVar6;
    plVar21 = plVar23;
    plVar18 = param_2;
    param_2 = *(long **)(puVar6 + -8);
    plVar23 = *(long **)(puVar6 + -0x10);
    dVar39 = dVar40;
    dVar40 = *(double *)(puVar6 + -0x30);
    goto SUB_068921fc;
  }
  auVar42 = func_0x03280cac();
  *(undefined8 *)(puVar6 + -0x50) = 0x6891d7c;
  *(undefined8 *)(puVar6 + -0x48) = 0x7e28000;
  *(long **)(puVar6 + -0x40) = plVar23;
  *(undefined8 *)(puVar6 + -0x38) = 0;
  if ((bRam0000000007e28d6f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_0776fa18);
    func_0x03280a18(PTR_DAT_0776fa20);
    func_0x03280a18(PTR_DAT_07810548);
    bRam0000000007e28d6f = 1;
  }
  lVar31 = *(long *)(auVar42._0_8_ + 0x10);
  if (lVar31 == 0) {
LAB_06891eac:
    plVar23 = (long *)func_0x03280cac();
    *(undefined8 *)(puVar6 + -0x60) = 0x6891eb0;
    if (plVar23[5] != 0) {
      *(undefined1 *)(plVar23[5] + 0x78) = 0;
      return plVar23;
    }
    func_0x03280cac();
    return (long *)0x12;
  }
  plVar23 = *(long **)(lVar31 + 0x20);
  if (plVar23 != (long *)0x0) {
    lVar31 = *plVar23;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0776f248) {
          puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 4) * 0x10 + 0x138);
          goto LAB_06891e38;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0776f248,4);
LAB_06891e38:
    (*(code *)*puVar22)(plVar23,auVar42._8_8_,puVar22[1]);
  }
  puVar37 = PTR_DAT_07810548;
  lVar31 = *(long *)(auVar42._0_8_ + 0x18);
  if (lVar31 == 0) goto LAB_06891eac;
  plVar36 = *(long **)(lVar31 + 0x28);
  plVar24 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0776fa18);
  func_0x06a1e324(0,plVar24,*(undefined8 *)puVar37,0,0x387e,0);
  if (plVar36 == (long *)0x0) goto LAB_06891eac;
  param_4 = *(long **)(puVar6 + -0x40);
  plVar21 = *(long **)(puVar6 + -0x38);
  lVar31 = *(long *)PTR_DAT_0776fa20;
  uVar38 = *(undefined8 *)(puVar6 + -0x50);
  param_6 = *(long **)(puVar6 + -0x48);
SUB_03ea4d6c:
  *(undefined8 *)(puVar5 + -0x20) = uVar38;
  *(long **)(puVar5 + -0x18) = param_6;
  *(long **)(puVar5 + -0x10) = param_4;
  *(long **)(puVar5 + -8) = plVar21;
  lVar35 = *(long *)(lVar31 + 0x38);
  if (lVar35 == 0) {
    func_0x03256878(lVar31);
    lVar35 = *(long *)(lVar31 + 0x38);
  }
  lVar31 = *(long *)(lVar35 + 8);
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined1 **)(puVar5 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  plVar23 = plVar36;
  if ((*(long *)(lVar31 + 0x38) == 0) &&
     (plVar23 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar31 + 0x38) == 0)) {
    plVar23 = (long *)func_0x03256878(lVar31);
  }
  if ((char)plVar36[10] != '\0') {
    return plVar23;
  }
  uVar38 = **(undefined8 **)(lVar31 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar17 = func_0x057a51c4(uVar38,0);
  lVar31 = 1;
  plVar23 = (long *)0x0;
  lVar35 = func_0x072869d0(plVar36,uVar17,0,1,0);
  if (lVar35 == 0) {
    auVar42 = func_0x03280cac();
    uVar17 = auVar42._8_8_;
    plVar21 = auVar42._0_8_;
    *(undefined8 *)(puVar5 + -0x80) = unaff_x29;
    *(undefined8 *)(puVar5 + -0x78) = 0x3ea51c0;
    *(long **)(puVar5 + -0x70) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x68) = unaff_x25;
    *(undefined **)(puVar5 + -0x60) = unaff_x24;
    *(long **)(puVar5 + -0x58) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x50) = uVar38;
    *(long **)(puVar5 + -0x48) = plVar36;
    *(undefined8 *)(puVar5 + -0x40) = 0;
    *(long **)(puVar5 + -0x38) = plVar24;
    lVar35 = tpidr_el0;
    *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(lVar35 + 0x28);
    *(long **)(puVar5 + -0x90) = plVar23;
    puVar22 = *(undefined8 **)(lVar31 + 0x38);
    plVar18 = plVar21;
    plVar36 = plVar23;
    if (puVar22 == (undefined8 *)0x0) {
      plVar18 = (long *)func_0x03280a18(PTR_DAT_0774e558);
      puVar22 = *(undefined8 **)(lVar31 + 0x38);
      if (puVar22 == (undefined8 *)0x0) {
        plVar18 = (long *)func_0x03256878(lVar31);
        puVar22 = *(undefined8 **)(lVar31 + 0x38);
      }
    }
    unaff_x23 = (long *)(ulong)*(uint *)(puVar22[1] + 0xfc);
    unaff_x24 = puVar5 + (-0x90 - ((ulong)((long)unaff_x23 + 0xfU) & 0x1fffffff0));
    if ((char)plVar21[10] == '\0') {
      unaff_x25 = *puVar22;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar38 = func_0x057a51c4(unaff_x25,0);
      lVar35 = func_0x072869d0(plVar21,uVar38,uVar17,1,0);
      lVar31 = *(long *)(lVar31 + 0x38);
      plVar18 = plVar23;
      if (-1 < *(int *)(*(long *)(lVar31 + 8) + 0x28)) {
        plVar18 = (long *)(puVar5 + -0x90);
      }
      plVar36 = unaff_x23;
      func_0x072ce970(unaff_x24,plVar18);
      plVar24 = (long *)func_0x03280b94(*(undefined8 *)(lVar31 + 8),unaff_x24);
      if (lVar35 != 0) {
        uVar38 = 0x3ea52d0;
        puVar6 = unaff_x24;
        lVar27 = lVar35;
        goto SUB_072852e4;
      }
      func_0x03280cac();
      uVar17 = 0;
    }
    else if (*(long *)(lVar35 + 0x28) == *(long *)(puVar5 + -0x88)) {
      return plVar18;
    }
    auVar42 = func_0x072ce990();
    lVar35 = auVar42._8_8_;
    *(undefined8 *)(unaff_x24 + -0x20) = 0x3ea5304;
    *(undefined8 *)(unaff_x24 + -0x18) = uVar17;
    *(long *)(unaff_x24 + -0x10) = lVar31;
    *(long **)(unaff_x24 + -8) = plVar23;
    lVar31 = plVar36[7];
    if (lVar31 == 0) {
      func_0x03256878(plVar36);
      lVar31 = plVar36[7];
    }
    lVar29 = *(long *)(lVar31 + 8);
    *(undefined8 *)(unaff_x24 + -0x40) = *(undefined8 *)(unaff_x24 + -0x20);
    *(undefined **)(unaff_x24 + -0x30) = unaff_x24;
    *(long **)(unaff_x24 + -0x28) = unaff_x23;
    *(long **)(unaff_x24 + -0x20) = plVar21;
    *(undefined8 *)(unaff_x24 + -0x18) = *(undefined8 *)(unaff_x24 + -0x18);
    *(undefined8 *)(unaff_x24 + -0x10) = *(undefined8 *)(unaff_x24 + -0x10);
    *(undefined8 *)(unaff_x24 + -8) = *(undefined8 *)(unaff_x24 + -8);
    plVar23 = *(long **)(lVar29 + 0x38);
    lVar31 = lVar35;
    lVar27 = lVar29;
    if (plVar23 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar23 = *(long **)(lVar29 + 0x38);
      if (plVar23 == (long *)0x0) {
        func_0x03256878(lVar29);
        plVar23 = *(long **)(lVar29 + 0x38);
      }
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x04053df4(lVar19,*(undefined8 *)(*(long *)(lVar29 + 0x38) + 8));
    if (lVar19 != 0) {
      plVar23 = (long *)(lVar19 + 0x10);
      *plVar23 = lVar35;
      goto SUB_032809c4;
    }
    auVar41 = func_0x03280cac();
    *(undefined8 *)(unaff_x24 + -0x80) = 0x3ea5530;
    *(undefined8 *)(unaff_x24 + -0x70) = 0;
    *(long **)(unaff_x24 + -0x68) = unaff_x23;
    *(long *)(unaff_x24 + -0x60) = lVar35;
    *(long *)(unaff_x24 + -0x58) = lVar29;
    *(long *)(unaff_x24 + -0x50) = auVar42._0_8_;
    *(undefined8 *)(unaff_x24 + -0x48) = 0;
    plVar23 = *(long **)(lVar27 + 0x38);
    lVar35 = lVar31;
    lVar29 = lVar27;
    if (plVar23 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar23 = *(long **)(lVar27 + 0x38);
      if (plVar23 == (long *)0x0) {
        func_0x03256878(lVar27);
        plVar23 = *(long **)(lVar27 + 0x38);
      }
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    func_0x0404e308(lVar19,*(undefined8 *)(*(long *)(lVar27 + 0x38) + 8));
    if (lVar19 != 0) {
      plVar23 = (long *)(lVar19 + 0x10);
      *plVar23 = lVar31;
      goto SUB_032809c4;
    }
    auVar42 = func_0x03280cac();
    *(undefined8 *)(unaff_x24 + -0xc0) = 0x3ea5644;
    *(undefined8 *)(unaff_x24 + -0xb0) = 0;
    *(long **)(unaff_x24 + -0xa8) = unaff_x23;
    *(long *)(unaff_x24 + -0xa0) = lVar31;
    *(long *)(unaff_x24 + -0x98) = lVar27;
    *(undefined1 (*) [16])(unaff_x24 + -0x90) = auVar41;
    plVar23 = *(long **)(lVar29 + 0x38);
    lVar31 = lVar35;
    lVar27 = lVar29;
    if (plVar23 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar23 = *(long **)(lVar29 + 0x38);
      if (plVar23 == (long *)0x0) {
        func_0x03256878(lVar29);
        plVar23 = *(long **)(lVar29 + 0x38);
      }
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar19 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x38) + 8))();
    if (lVar19 != 0) {
      plVar23 = (long *)(lVar19 + 0x10);
      *plVar23 = lVar35;
      goto SUB_032809c4;
    }
    auVar41 = func_0x03280cac();
    *(undefined8 *)(unaff_x24 + -0x100) = 0x3ea575c;
    *(undefined8 *)(unaff_x24 + -0xf0) = 0;
    *(long **)(unaff_x24 + -0xe8) = unaff_x23;
    *(long *)(unaff_x24 + -0xe0) = lVar35;
    *(long *)(unaff_x24 + -0xd8) = lVar29;
    *(undefined1 (*) [16])(unaff_x24 + -0xd0) = auVar42;
    plVar23 = *(long **)(lVar27 + 0x38);
    if (plVar23 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar23 = *(long **)(lVar27 + 0x38);
      if (plVar23 == (long *)0x0) {
        func_0x03256878(lVar27);
        plVar23 = *(long **)(lVar27 + 0x38);
      }
    }
    if ((*(byte *)(*plVar23 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar35 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x38) + 8))();
    if (lVar35 != 0) {
      plVar23 = (long *)(lVar35 + 0x10);
      *plVar23 = lVar31;
      goto SUB_032809c4;
    }
    auVar42 = func_0x03280cac();
    lVar35 = auVar42._8_8_;
    plVar23 = auVar42._0_8_;
    *(undefined8 *)(unaff_x24 + -0x120) = 0x3ea5874;
    *(undefined1 (*) [16])(unaff_x24 + -0x110) = auVar41;
    plVar21 = *(long **)(lVar35 + 0x38);
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar35);
      plVar21 = *(long **)(lVar35 + 0x38);
    }
    lVar29 = *plVar21;
    *(undefined8 *)(unaff_x24 + -0x130) = *(undefined8 *)(unaff_x24 + -0x120);
    *(long **)(unaff_x24 + -0x128) = unaff_x23;
    *(long *)(unaff_x24 + -0x120) = lVar31;
    *(long *)(unaff_x24 + -0x118) = lVar27;
    *(undefined8 *)(unaff_x24 + -0x110) = *(undefined8 *)(unaff_x24 + -0x110);
    *(undefined8 *)(unaff_x24 + -0x108) = *(undefined8 *)(unaff_x24 + -0x108);
    plVar21 = plVar23;
    if ((*(long *)(lVar29 + 0x38) == 0) &&
       (plVar21 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar29 + 0x38) == 0)) {
      plVar21 = (long *)func_0x03256878(lVar29);
    }
    puVar37 = PTR_DAT_0774e558;
    if ((char)plVar23[10] != '\0') {
      return plVar21;
    }
    uVar38 = **(undefined8 **)(lVar29 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar38 = func_0x057a51c4(uVar38,0);
    lVar35 = func_0x072869d0(plVar23,uVar38,0,0,0);
    if (lVar35 == 0) {
      return (long *)0x0;
    }
    uVar38 = **(undefined8 **)(lVar29 + 0x38);
    if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar38 = func_0x057a51c4(uVar38,0);
    lVar31 = func_0x057c1ad4(uVar38,0);
    lVar27 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
    if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
      lVar27 = func_0x0325681c(lVar27);
    }
    if (lVar31 == 0) {
LAB_03ea5b18:
      plVar24 = (long *)0x0;
    }
    else {
      plVar24 = (long *)func_0x03280b90(lVar31,lVar27);
      if (plVar24 == (long *)0x0) {
        func_0x03281048(lVar31,lVar27);
        goto LAB_03ea5b18;
      }
    }
    lVar31 = *(long *)(unaff_x24 + -0x110);
    plVar23 = *(long **)(unaff_x24 + -0x108);
    plVar21 = *(long **)(unaff_x24 + -0x120);
    lVar27 = *(long *)(unaff_x24 + -0x118);
    puVar6 = unaff_x24 + -0x100;
    uVar38 = *(undefined8 *)(unaff_x24 + -0x130);
    unaff_x23 = *(long **)(unaff_x24 + -0x128);
    unaff_x24 = (undefined *)0x0;
  }
  else {
    lVar31 = *(long *)(puVar5 + -0x10);
    plVar23 = *(long **)(puVar5 + -8);
    plVar21 = *(long **)(puVar5 + -0x20);
    uVar38 = *(undefined8 *)(puVar5 + -0x30);
    puVar6 = puVar5;
    lVar27 = *(long *)(puVar5 + -0x18);
  }
SUB_072852e4:
  lVar29 = 0;
  puVar10 = puVar6 + -0x30;
  *(undefined8 *)(puVar6 + -0x30) = uVar38;
  *(long **)(puVar6 + -0x20) = plVar21;
  *(long *)(puVar6 + -0x18) = lVar27;
  *(long *)(puVar6 + -0x10) = lVar31;
  *(long **)(puVar6 + -8) = plVar23;
  if ((bRam0000000007e3419a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dee8);
    func_0x03280a18(PTR_DAT_0785def0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0785def8);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07779590);
    bRam0000000007e3419a = 1;
  }
  puVar37 = PTR_DAT_07779590;
  if (plVar24 != (long *)0x0) {
    uVar38 = func_0x057dadc4(plVar24,0);
    puVar33 = *(undefined **)(lVar35 + 0x20);
    if (*(int *)(*(long *)puVar37 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar37);
    }
    uVar13 = func_0x0727e0ec(uVar38,puVar33);
    plVar23 = (long *)(ulong)(uVar13 & 1);
    uVar38 = 0x728539c;
    goto SUB_0727dc78;
  }
  func_0x03280cac();
  func_0x03280cac();
  lVar31 = 0;
  while( true ) {
    func_0x03280ca4(lVar31);
    auVar43 = func_0x03280cac();
    uVar38 = auVar43._0_8_;
    if (auVar43._8_4_ != 1) break;
    plVar23 = (long *)func_0x072ce910(uVar38);
    lVar31 = *plVar23;
    func_0x072ce920();
    uVar34 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar22 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_072854e8;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    lVar29 = 0;
    puVar22 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
    plVar23 = (long *)(*(code *)*puVar22)(0x7e34000,puVar22[1]);
    if (lVar31 == 0) {
      return plVar23;
    }
  }
  uVar34 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
  if (uVar34 != 0) {
    piVar32 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0774e8c8) {
        puVar22 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_072855b0;
      }
      uVar34 = uVar34 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar34 != 0);
  }
  lVar29 = 0;
  puVar22 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
  (*(code *)*puVar22)(0x7e34000,puVar22[1]);
  func_0x03365958(uVar38);
  func_0x03280ca4(0);
  auVar42 = func_0x02f09514();
  puVar37 = PTR_DAT_0785dec8;
  lVar35 = auVar42._8_8_;
  lVar31 = auVar42._0_8_;
  *(undefined8 *)(puVar6 + -0x70) = 0x72855d4;
  *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
  *(undefined **)(puVar6 + -0x60) = unaff_x24;
  *(long **)(puVar6 + -0x58) = unaff_x23;
  *(long **)(puVar6 + -0x50) = plVar21;
  *(undefined8 *)(puVar6 + -0x48) = uVar38;
  *(undefined8 *)(puVar6 + -0x40) = 0;
  *(undefined8 *)(puVar6 + -0x38) = 0x7e34000;
  plVar21 = (long *)0x7e34000;
  if ((bRam0000000007e3419b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dec8);
    func_0x03280a18(PTR_DAT_0785df00);
    func_0x03280a18(PTR_DAT_0785ded0);
    func_0x03280a18(PTR_DAT_0785ded8);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785df08);
    bRam0000000007e3419b = 1;
  }
  plVar23 = (long *)func_0x03e0c264(lVar35,*(undefined8 *)puVar37);
  puVar26 = PTR_DAT_0785df00;
  puVar33 = PTR_DAT_0785ded8;
  if (((ulong)plVar23 & 1) == 0) {
LAB_07285770:
    if (lVar35 != 0) {
      if (0 < *(int *)(lVar35 + 0x18)) {
        plVar21 = (long *)0x0;
        do {
          puVar28 = (undefined *)func_0x0414419c(lVar35,plVar21,*(undefined8 *)puVar33);
          unaff_x24 = puVar33;
          if (*(long *)(lVar31 + 0x10) == 0) goto LAB_07285808;
          plVar23 = (long *)func_0x041447fc(*(long *)(lVar31 + 0x10),puVar28,*(undefined8 *)puVar26)
          ;
          puVar37 = puVar28;
          if (((ulong)plVar23 & 1) != 0) {
            if ((puVar28 == (undefined *)0x0) || (lVar27 = *(long *)(puVar28 + 0x18), lVar27 == 0))
            goto LAB_07285808;
            plVar23 = (long *)(**(code **)(lVar27 + 0x18))
                                        (*(undefined8 *)(lVar27 + 0x40),lVar29,
                                         *(undefined8 *)(lVar27 + 0x28));
          }
          uVar13 = (int)plVar21 + 1;
          plVar21 = (long *)(ulong)uVar13;
        } while ((int)uVar13 < *(int *)(lVar35 + 0x18));
      }
      return plVar23;
    }
LAB_07285808:
    func_0x03280cac();
    plVar23 = plVar21;
    puVar26 = puVar37;
LAB_0728580c:
    func_0x03280cb4();
  }
  else {
    if (*(int *)(lVar31 + 0x30) != 2) {
      if (*(int *)(lVar31 + 0x30) != 1) goto LAB_07285770;
      uVar38 = func_0x03280a2c(PTR_DAT_0774e5a0);
      lVar35 = func_0x03280afc(uVar38,1);
      func_0x02f0b18c(lVar29);
      uVar38 = func_0x057dadc4(lVar29,0);
      func_0x02f0b18c(lVar35);
      func_0x02f176b4(lVar35,uVar38);
      func_0x02f0965c(lVar35,0,uVar38);
      uVar38 = func_0x03280a2c(PTR_DAT_0785df08);
      lVar29 = func_0x0727df38(uVar38,lVar35);
      uVar38 = func_0x03280a2c(PTR_DAT_0785df10);
      func_0x03280b7c(lVar29,uVar38);
    }
    plVar23 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if ((lVar29 == 0) ||
       (puVar26 = (undefined *)func_0x057dadc4(lVar29,0), plVar21 = plVar23, plVar23 == (long *)0x0)
       ) goto LAB_07285808;
    if ((puVar26 == (undefined *)0x0) ||
       (lVar27 = func_0x03280b90(puVar26,*(undefined8 *)(*plVar23 + 0x40)), lVar27 != 0)) {
      if ((int)plVar23[3] != 0) {
        plVar23 = plVar23 + 4;
        *plVar23 = (long)puVar26;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)plVar23 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar23 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return plVar23;
      }
      goto LAB_0728580c;
    }
  }
  uVar38 = func_0x03280cd0();
  auVar42 = func_0x03280b7c(uVar38,0);
  *(undefined8 *)(puVar6 + -0x80) = 0x728581c;
  lVar27 = *(long *)(auVar42._0_8_ + 0x18);
  if (lVar27 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar23 = (long *)(**(code **)(lVar27 + 0x18))
                                (*(undefined8 *)(lVar27 + 0x40),auVar42._8_8_,
                                 *(undefined8 *)(lVar27 + 0x28));
    return plVar23;
  }
  plVar24 = (long *)func_0x03280cac();
  puVar33 = PTR_DAT_0785df18;
  puVar10 = puVar6 + -0xc0;
  *(undefined8 *)(puVar6 + -0xc0) = 0x7285840;
  *(undefined **)(puVar6 + -0xb0) = unaff_x24;
  *(undefined **)(puVar6 + -0xa8) = puVar26;
  *(long **)(puVar6 + -0xa0) = plVar23;
  *(long *)(puVar6 + -0x98) = lVar31;
  *(long *)(puVar6 + -0x90) = lVar35;
  *(long *)(puVar6 + -0x88) = lVar29;
  lVar35 = 0x7e34000;
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
  plVar23 = (long *)(ulong)*(byte *)((long)plVar24 + 0x34);
  uVar38 = 0x72858f0;
SUB_0727dc78:
  if (((ulong)plVar23 & 1) != 0) {
    return plVar23;
  }
  *(undefined8 *)(puVar10 + -0x10) = uVar38;
  *(undefined **)(puVar10 + -8) = puVar33;
  uVar38 = func_0x03280a2c(PTR_DAT_0785dbe8);
  puVar37 = PTR_DAT_0777c990;
  *(undefined8 *)(puVar10 + -0x30) = 0x727dc94;
  *(long *)(puVar10 + -0x28) = lVar35;
  *(long **)(puVar10 + -0x20) = plVar24;
  *(undefined **)(puVar10 + -0x18) = puVar33;
  if ((bRam0000000007e34146 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c990);
    bRam0000000007e34146 = 1;
  }
  plVar23 = (long *)func_0x03280ca0(*(undefined8 *)puVar37);
  func_0x072c77f8(plVar23,uVar38,0);
  return plVar23;
code_r0x068925f0:
  lVar31 = *unaff_x23;
  param_3 = (undefined1 *)(uVar34 & 0xffffffff);
  uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar34 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x14) * 0x10 + 0x138);
        goto LAB_0689264c;
      }
      uVar34 = uVar34 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar34 != 0);
  }
  puVar22 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)PTR_DAT_0777a498,0x14);
LAB_0689264c:
  param_4 = (long *)(*(code *)*puVar22)(unaff_x23,plVar18,puVar22[1]);
  *(undefined8 *)(puVar7 + -0xa8) = *(undefined8 *)(puVar7 + -0x78);
  *(undefined8 *)(puVar7 + -0xb0) = *(undefined8 *)(puVar7 + -0x80);
  *(undefined8 *)(puVar7 + -0x98) = *(undefined8 *)(puVar7 + -0x68);
  *(undefined8 *)(puVar7 + -0xa0) = *(undefined8 *)(puVar7 + -0x70);
  *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0x60);
  uVar38 = 0x6892688;
  puVar8 = puVar7 + -0xb0;
  param_6 = plVar18;
  unaff_x22 = param_3;
  dVar40 = dVar39;
  goto SUB_06893788;
code_r0x06892ab8:
  lVar31 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
        puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 3) * 0x10 + 0x138);
        goto LAB_06893050;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,3);
LAB_06893050:
  iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
  lVar31 = *param_2;
  unaff_d9 = (double)iVar11;
  uVar20 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
        puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 5) * 0x10 + 0x138);
        goto LAB_068930b0;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,5);
LAB_068930b0:
  (*(code *)*puVar22)(unaff_d9,param_2,puVar22[1]);
  lVar31 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
        puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xd) * 0x10 + 0x138);
        goto LAB_06893110;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,0xd);
LAB_06893110:
  (*(code *)*puVar22)(param_2,0,puVar22[1]);
  lVar31 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar31 + 0x12e);
  if (uVar20 != 0) {
    piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)unaff_x24) {
        puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0xb) * 0x10 + 0x138);
        goto LAB_06893170;
      }
      uVar20 = uVar20 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar20 != 0);
  }
  puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)unaff_x24,0xb);
LAB_06893170:
  param_3 = (undefined1 *)puVar22[1];
  (*(code *)*puVar22)(param_2,0);
  uVar38 = 0x6893190;
  plVar21 = plVar23;
  plVar18 = param_2;
  dVar39 = dVar40;
  goto SUB_068921fc;
  while( true ) {
    uVar34 = uVar34 - 1;
    piVar32 = piVar32 + 4;
    if (uVar34 == 0) break;
LAB_06893ef8:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777a600) {
      puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 3) * 0x10 + 0x138);
      goto LAB_06893f30;
    }
  }
LAB_06893f10:
  puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777a600,3);
LAB_06893f30:
  iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
  if (iVar11 == 0) {
    lVar31 = *param_2;
    uVar34 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar34 != 0) {
      piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
          puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_06893f98;
        }
        uVar34 = uVar34 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar34 != 0);
    }
    puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,1);
LAB_06893f98:
    iVar11 = (*(code *)*puVar22)(param_2,puVar22[1]);
    plVar23 = (long *)(ulong)(iVar11 == 0);
  }
  else {
    plVar23 = (long *)0x0;
  }
  return plVar23;
  while( true ) {
    uVar34 = uVar34 - 1;
    piVar32 = piVar32 + 4;
    if (uVar34 == 0) break;
LAB_068944d8:
    if (*(long *)(piVar32 + -2) == *(long *)puVar37) {
      puVar22 = (undefined8 *)(lVar31 + (long)(*piVar32 + 0x10) * 0x10 + 0x138);
      goto LAB_06894510;
    }
  }
LAB_068944f0:
  puVar22 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar37,0x10);
LAB_06894510:
                    /* WARNING: Could not recover jumptable at 0x0689452c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar23 = (long *)(*(code *)*puVar22)(param_2,3,puVar22[1]);
  return plVar23;
}

