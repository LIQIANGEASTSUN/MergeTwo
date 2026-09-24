/* Ghidra 12.1.2 native pseudocode; RVA 0x678D9F4; MergeEngine.ECS.Systems.Items.ExpendableSystem.CanExpend; status ok */


/* WARNING: Possible PIC construction at 0x0688dcc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688dd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688dd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069fd0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688df18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688dfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688e068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688e1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688e1f4: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0688db58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688dbf0: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0688e1f8) */
/* WARNING: Removing unreachable block (ram,0x0688e1fc) */
/* WARNING: Removing unreachable block (ram,0x0688e208) */
/* WARNING: Removing unreachable block (ram,0x0688e210) */
/* WARNING: Removing unreachable block (ram,0x0688e218) */
/* WARNING: Removing unreachable block (ram,0x0688e23c) */
/* WARNING: Removing unreachable block (ram,0x0688e244) */
/* WARNING: Removing unreachable block (ram,0x0688e258) */
/* WARNING: Removing unreachable block (ram,0x0688e260) */
/* WARNING: Removing unreachable block (ram,0x0688e2ec) */
/* WARNING: Removing unreachable block (ram,0x0688e340) */
/* WARNING: Removing unreachable block (ram,0x0688e270) */
/* WARNING: Removing unreachable block (ram,0x0688e274) */
/* WARNING: Removing unreachable block (ram,0x0688e280) */
/* WARNING: Removing unreachable block (ram,0x0688e2bc) */
/* WARNING: Removing unreachable block (ram,0x0688e1d0) */
/* WARNING: Removing unreachable block (ram,0x0688e35c) */
/* WARNING: Removing unreachable block (ram,0x0688e1d4) */
/* WARNING: Removing unreachable block (ram,0x0688e06c) */
/* WARNING: Removing unreachable block (ram,0x0688e070) */
/* WARNING: Removing unreachable block (ram,0x0688e078) */
/* WARNING: Removing unreachable block (ram,0x0688e080) */
/* WARNING: Removing unreachable block (ram,0x0688e094) */
/* WARNING: Removing unreachable block (ram,0x0688e0a4) */
/* WARNING: Removing unreachable block (ram,0x0688e0c0) */
/* WARNING: Removing unreachable block (ram,0x0688e0cc) */
/* WARNING: Removing unreachable block (ram,0x0688e0dc) */
/* WARNING: Removing unreachable block (ram,0x0688dfc0) */
/* WARNING: Removing unreachable block (ram,0x0688e054) */
/* WARNING: Removing unreachable block (ram,0x0688df1c) */
/* WARNING: Removing unreachable block (ram,0x0688df20) */
/* WARNING: Removing unreachable block (ram,0x0688df34) */
/* WARNING: Removing unreachable block (ram,0x0688df3c) */
/* WARNING: Removing unreachable block (ram,0x0688df44) */
/* WARNING: Removing unreachable block (ram,0x0688e124) */
/* WARNING: Removing unreachable block (ram,0x0688e16c) */
/* WARNING: Removing unreachable block (ram,0x0688e1bc) */
/* WARNING: Removing unreachable block (ram,0x0688df8c) */
/* WARNING: Removing unreachable block (ram,0x0688e104) */
/* WARNING: Removing unreachable block (ram,0x0688df98) */
/* WARNING: Removing unreachable block (ram,0x069fd0f0) */
/* WARNING: Removing unreachable block (ram,0x069fd2fc) */
/* WARNING: Removing unreachable block (ram,0x0688dd84) */
/* WARNING: Removing unreachable block (ram,0x0688dd9c) */
/* WARNING: Removing unreachable block (ram,0x0688de0c) */
/* WARNING: Removing unreachable block (ram,0x0688dda4) */
/* WARNING: Removing unreachable block (ram,0x0688ddac) */
/* WARNING: Removing unreachable block (ram,0x0688ddec) */
/* WARNING: Removing unreachable block (ram,0x069fcf84) */
/* WARNING: Removing unreachable block (ram,0x069fcfa4) */
/* WARNING: Removing unreachable block (ram,0x069fcff4) */
/* WARNING: Removing unreachable block (ram,0x069fd000) */
/* WARNING: Removing unreachable block (ram,0x069fd030) */
/* WARNING: Removing unreachable block (ram,0x069fd038) */
/* WARNING: Removing unreachable block (ram,0x069fd054) */
/* WARNING: Removing unreachable block (ram,0x069fd084) */
/* WARNING: Removing unreachable block (ram,0x069fd09c) */
/* WARNING: Removing unreachable block (ram,0x069fd0a4) */
/* WARNING: Removing unreachable block (ram,0x069fd0c4) */
/* WARNING: Removing unreachable block (ram,0x069fd0f4) */
/* WARNING: Removing unreachable block (ram,0x069fd0d4) */
/* WARNING: Removing unreachable block (ram,0x069fd018) */
/* WARNING: Removing unreachable block (ram,0x069fd118) */
/* WARNING: Removing unreachable block (ram,0x069fd11c) */
/* WARNING: Removing unreachable block (ram,0x069fd144) */
/* WARNING: Removing unreachable block (ram,0x069fd1a0) */
/* WARNING: Removing unreachable block (ram,0x069fd1ac) */
/* WARNING: Removing unreachable block (ram,0x069fd1cc) */
/* WARNING: Removing unreachable block (ram,0x069fd1e0) */
/* WARNING: Removing unreachable block (ram,0x069fd1e8) */
/* WARNING: Removing unreachable block (ram,0x069fd254) */
/* WARNING: Removing unreachable block (ram,0x069fd26c) */
/* WARNING: Removing unreachable block (ram,0x069fd280) */
/* WARNING: Removing unreachable block (ram,0x069fd2b4) */
/* WARNING: Removing unreachable block (ram,0x069fd2d4) */
/* WARNING: Removing unreachable block (ram,0x069fd2e8) */
/* WARNING: Removing unreachable block (ram,0x069fd288) */
/* WARNING: Removing unreachable block (ram,0x069fd1fc) */
/* WARNING: Removing unreachable block (ram,0x069fd204) */
/* WARNING: Removing unreachable block (ram,0x069fd20c) */
/* WARNING: Removing unreachable block (ram,0x069fd01c) */
/* WARNING: Removing unreachable block (ram,0x069fd108) */
/* WARNING: Removing unreachable block (ram,0x0688dd5c) */
/* WARNING: Removing unreachable block (ram,0x0688de20) */
/* WARNING: Removing unreachable block (ram,0x0688de70) */
/* WARNING: Removing unreachable block (ram,0x0688df08) */
/* WARNING: Removing unreachable block (ram,0x0688dd60) */
/* WARNING: Removing unreachable block (ram,0x0688dcc8) */
/* WARNING: Removing unreachable block (ram,0x0688dbf4) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
MergeEngine_ECS_Systems_Items_ExpendableSystem__CanExpend
          (long param_1,undefined8 ******param_2,undefined8 *******param_3)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 ******ppppppuVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  undefined8 *****pppppuVar21;
  long lVar22;
  ulong *puVar23;
  undefined8 ****ppppuVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 *****pppppuVar27;
  long lVar28;
  undefined8 ******ppppppuVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  undefined8 *******unaff_x23;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  long alStack_210 [6];
  long alStack_1e0 [32];
  undefined8 *******pppppppuStack_e0;
  long lStack_d8;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 ******ppppppuStack_68;
  ulong uStack_60;
  undefined8 *******pppppppuStack_58;
  
  lVar31 = 0x7e28000;
  if ((bRam0000000007e28d54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c288);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077e6a18);
    func_0x03280a18(PTR_DAT_077e6a20);
    func_0x03280a18(PTR_DAT_078103b0);
    func_0x03280a18(PTR_DAT_0777c290);
    func_0x03280a18(PTR_DAT_078103b8);
    func_0x03280a18(PTR_DAT_07810358);
    bRam0000000007e28d54 = 1;
  }
  if (param_2 == (undefined8 ******)0x0) goto LAB_0688dc18;
  auVar40 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e6760);
  puVar7 = PTR_DAT_07810358;
  uVar30 = auVar40._8_8_;
  if (1 < *(int *)(param_2 + 6)) {
LAB_0688dbfc:
    auVar40._8_8_ = uVar30;
    auVar40._0_8_ = 1;
    return auVar40;
  }
  if (param_2[7] == (undefined8 *****)0x0) {
    puVar34 = (undefined *)0x0;
  }
  else {
    puVar34 = (undefined *)(ulong)(0 < *(int *)(param_2[7] + 3));
  }
  if (auVar40._0_8_ == 0) goto LAB_0688dc18;
  uVar10 = *(uint *)(param_2 + 9);
  uVar14 = (ulong)uVar10;
  param_2 = *(undefined8 *******)(auVar40._0_8_ + 0x58);
  lVar28 = *(long *)PTR_DAT_07810358;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar28 = *(long *)puVar7;
  }
  lVar31 = *(long *)(*(long *)(lVar28 + 0xb8) + 0x10);
  if (lVar31 == 0) {
    if (*(int *)(lVar28 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar28 = *(long *)puVar7;
    }
    uVar30 = **(undefined8 **)(lVar28 + 0xb8);
    puVar12 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077e6a20);
    func_0x05356664(puVar12,uVar30,*(undefined8 *)PTR_DAT_078103b8,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
    *plVar13 = (long)puVar12;
    goto SUB_032809c4;
  }
  uVar8 = func_0x03d598d0(param_2,lVar31,*(undefined8 *)PTR_DAT_077e6a18);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0688dc18;
  param_2 = (undefined8 ******)(ulong)~uVar8;
  iVar9 = func_0x067675f0(*(long *)(param_1 + 0x58),0);
  uVar30 = extraout_x1;
  if ((int)(uVar10 + (int)puVar34 + ~uVar8) <= iVar9) goto LAB_0688dbfc;
  if (param_3 != (undefined8 *******)0x0) {
    uVar25 = *(ulong *)(param_1 + 0x28);
    param_2 = param_3[6];
    param_3 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777c288);
    func_0x0686aa28(param_3,param_2,6,0,0,0,0);
    param_1 = 0;
    if (uVar25 != 0) {
      lVar28 = *(long *)PTR_DAT_0777c290;
      lStack_70 = 0x688dbf4;
      lVar22 = *(long *)(lVar28 + 0x38);
      ppppppuStack_68 = param_2;
      uStack_60 = uVar25;
      pppppppuStack_58 = param_3;
      if (lVar22 == 0) {
        func_0x03256878(lVar28);
        lVar22 = *(long *)(lVar28 + 0x38);
      }
      lVar28 = lStack_70;
      lVar22 = *(long *)(lVar22 + 8);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar25;
      lStack_70 = lVar31;
      if ((*(long *)(lVar22 + 0x38) == 0) &&
         (auVar37 = func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar22 + 0x38) == 0)) {
        auVar37 = func_0x03256878(lVar22);
      }
      if (*(char *)(uVar25 + 0x50) != '\0') {
        return auVar37;
      }
      uVar30 = **(undefined8 **)(lVar22 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar30 = func_0x057a51c4(uVar30,0);
      uVar20 = 1;
      pppppppuVar18 = (undefined8 *******)0x0;
      ppppppuVar11 = (undefined8 ******)func_0x072869d0(uVar25,uVar30,0,1,0);
      if (ppppppuVar11 == (undefined8 ******)0x0) {
        auVar40 = func_0x03280cac();
        uVar30 = auVar40._8_8_;
        lVar31 = auVar40._0_8_;
        lVar28 = tpidr_el0;
        lStack_d8 = *(long *)(lVar28 + 0x28);
        puVar23 = *(ulong **)(uVar20 + 0x38);
        pppppppuVar19 = pppppppuVar18;
        pppppppuStack_e0 = pppppppuVar18;
        if (puVar23 == (ulong *)0x0) {
          auVar40 = func_0x03280a18(PTR_DAT_0774e558);
          puVar23 = *(ulong **)(uVar20 + 0x38);
          if (puVar23 == (ulong *)0x0) {
            auVar40 = func_0x03256878(uVar20);
            puVar23 = *(ulong **)(uVar20 + 0x38);
          }
        }
        unaff_x23 = (undefined8 *******)(ulong)*(uint *)(puVar23[1] + 0xfc);
        lVar22 = -((long)unaff_x23 + 0xfU & 0x1fffffff0);
        puVar7 = (undefined *)((long)&pppppppuStack_e0 + lVar22);
        if (*(char *)(lVar31 + 0x50) == '\0') {
          uVar14 = *puVar23;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar35 = func_0x057a51c4(uVar14,0);
          ppppppuVar11 = (undefined8 ******)func_0x072869d0(lVar31,uVar35,uVar30,1,0);
          uVar20 = *(ulong *)(uVar20 + 0x38);
          pppppppuVar1 = pppppppuVar18;
          if (-1 < *(int *)(*(long *)(uVar20 + 8) + 0x28)) {
            pppppppuVar1 = &pppppppuStack_e0;
          }
          pppppppuVar19 = unaff_x23;
          func_0x072ce970(puVar7,pppppppuVar1);
          param_3 = (undefined8 *******)func_0x03280b94(*(undefined8 *)(uVar20 + 8),puVar7);
          if (ppppppuVar11 != (undefined8 ******)0x0) {
            lVar28 = 0x3ea52d0;
            ppppppuVar29 = ppppppuVar11;
            puVar34 = puVar7;
            goto SUB_072852e4;
          }
          func_0x03280cac();
          uVar30 = 0;
        }
        else if (*(long *)(lVar28 + 0x28) == lStack_d8) {
          return auVar40;
        }
        auVar40 = func_0x072ce990();
        puVar12 = auVar40._8_8_;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xe0) = 0x3ea5304;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xe8) = uVar30;
        *(ulong *)((long)alStack_1e0 + lVar22 + 0xf0) = uVar20;
        *(undefined8 ********)((long)alStack_1e0 + lVar22 + 0xf8) = pppppppuVar18;
        ppppppuVar11 = pppppppuVar19[7];
        if (ppppppuVar11 == (undefined8 ******)0x0) {
          func_0x03256878(pppppppuVar19);
          ppppppuVar11 = pppppppuVar19[7];
        }
        pppppuVar21 = ppppppuVar11[1];
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xc0) =
             *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xe0);
        *(undefined **)((long)alStack_1e0 + lVar22 + 0xd0) = puVar7;
        *(undefined8 ********)((long)alStack_1e0 + lVar22 + 0xd8) = unaff_x23;
        *(long *)((long)alStack_1e0 + lVar22 + 0xe0) = lVar31;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xe8) =
             *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xe8);
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xf0) =
             *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xf0);
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xf8) =
             *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xf8);
        ppppuVar24 = pppppuVar21[7];
        puVar7 = puVar12;
        pppppuVar27 = pppppuVar21;
        if (ppppuVar24 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar24 = pppppuVar21[7];
          if (ppppuVar24 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar21);
            ppppuVar24 = pppppuVar21[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar24 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar31 = func_0x03280ca0();
        func_0x04053df4(lVar31,pppppuVar21[7][1]);
        if (lVar31 != 0) {
          plVar13 = (long *)(lVar31 + 0x10);
          *plVar13 = (long)puVar12;
          goto SUB_032809c4;
        }
        auVar37 = func_0x03280cac();
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0x80) = 0x3ea5530;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0x90) = 0;
        *(undefined8 ********)((long)alStack_1e0 + lVar22 + 0x98) = unaff_x23;
        *(undefined **)((long)alStack_1e0 + lVar22 + 0xa0) = puVar12;
        *(undefined8 ******)((long)alStack_1e0 + lVar22 + 0xa8) = pppppuVar21;
        *(long *)((long)alStack_1e0 + lVar22 + 0xb0) = auVar40._0_8_;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0xb8) = 0;
        ppppuVar24 = pppppuVar27[7];
        puVar34 = puVar7;
        pppppuVar21 = pppppuVar27;
        if (ppppuVar24 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar24 = pppppuVar27[7];
          if (ppppuVar24 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar27);
            ppppuVar24 = pppppuVar27[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar24 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar31 = func_0x03280ca0();
        func_0x0404e308(lVar31,pppppuVar27[7][1]);
        if (lVar31 != 0) {
          plVar13 = (long *)(lVar31 + 0x10);
          *plVar13 = (long)puVar7;
          puVar12 = puVar7;
          goto SUB_032809c4;
        }
        auVar40 = func_0x03280cac();
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0x40) = 0x3ea5644;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0x50) = 0;
        *(undefined8 ********)((long)alStack_1e0 + lVar22 + 0x58) = unaff_x23;
        *(undefined **)((long)alStack_1e0 + lVar22 + 0x60) = puVar7;
        *(undefined8 ******)((long)alStack_1e0 + lVar22 + 0x68) = pppppuVar27;
        *(long *)((long)alStack_1e0 + lVar22 + 0x70) = auVar37._0_8_;
        *(long *)((long)alStack_1e0 + lVar22 + 0x78) = auVar37._8_8_;
        ppppuVar24 = pppppuVar21[7];
        puVar12 = puVar34;
        pppppuVar27 = pppppuVar21;
        if (ppppuVar24 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar24 = pppppuVar21[7];
          if (ppppuVar24 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar21);
            ppppuVar24 = pppppuVar21[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar24 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar31 = func_0x03280ca0();
        (*(code *)*pppppuVar21[7][1])();
        if (lVar31 != 0) {
          plVar13 = (long *)(lVar31 + 0x10);
          *plVar13 = (long)puVar34;
          puVar12 = puVar34;
          goto SUB_032809c4;
        }
        auVar37 = func_0x03280cac();
        *(undefined8 *)((long)alStack_1e0 + lVar22) = 0x3ea575c;
        *(undefined8 *)((long)alStack_1e0 + lVar22 + 0x10) = 0;
        *(undefined8 ********)((long)alStack_1e0 + lVar22 + 0x18) = unaff_x23;
        *(undefined **)((long)alStack_1e0 + lVar22 + 0x20) = puVar34;
        *(undefined8 ******)((long)alStack_1e0 + lVar22 + 0x28) = pppppuVar21;
        *(long *)((long)alStack_1e0 + lVar22 + 0x30) = auVar40._0_8_;
        *(long *)((long)alStack_1e0 + lVar22 + 0x38) = auVar40._8_8_;
        ppppuVar24 = pppppuVar27[7];
        if (ppppuVar24 == (undefined8 ****)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          ppppuVar24 = pppppuVar27[7];
          if (ppppuVar24 == (undefined8 ****)0x0) {
            func_0x03256878(pppppuVar27);
            ppppuVar24 = pppppuVar27[7];
          }
        }
        if ((*(byte *)((long)*ppppuVar24 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar31 = func_0x03280ca0();
        (*(code *)*pppppuVar27[7][1])();
        if (lVar31 != 0) {
          plVar13 = (long *)(lVar31 + 0x10);
          *plVar13 = (long)puVar12;
          goto SUB_032809c4;
        }
        auVar40 = func_0x03280cac();
        lVar31 = auVar40._8_8_;
        uVar25 = auVar40._0_8_;
        *(undefined8 *)((long)alStack_210 + lVar22 + 0x10) = 0x3ea5874;
        *(long *)((long)alStack_210 + lVar22 + 0x20) = auVar37._0_8_;
        *(long *)((long)alStack_210 + lVar22 + 0x28) = auVar37._8_8_;
        plVar13 = *(long **)(lVar31 + 0x38);
        if (plVar13 == (long *)0x0) {
          func_0x03256878(lVar31);
          plVar13 = *(long **)(lVar31 + 0x38);
        }
        lVar31 = *plVar13;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = uVar25;
        *(undefined8 *)((long)alStack_210 + lVar22) =
             *(undefined8 *)((long)alStack_210 + lVar22 + 0x10);
        *(undefined8 ********)((long)alStack_210 + lVar22 + 8) = unaff_x23;
        *(undefined **)((long)alStack_210 + lVar22 + 0x10) = puVar12;
        *(undefined8 ******)((long)alStack_210 + lVar22 + 0x18) = pppppuVar27;
        *(undefined8 *)((long)alStack_210 + lVar22 + 0x20) =
             *(undefined8 *)((long)alStack_210 + lVar22 + 0x20);
        *(undefined8 *)((long)alStack_210 + lVar22 + 0x28) =
             *(undefined8 *)((long)alStack_210 + lVar22 + 0x28);
        if ((*(long *)(lVar31 + 0x38) == 0) &&
           (auVar38 = func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar31 + 0x38) == 0)) {
          auVar38 = func_0x03256878(lVar31);
        }
        puVar7 = PTR_DAT_0774e558;
        if (*(char *)(uVar25 + 0x50) != '\0') {
          return auVar38;
        }
        uVar30 = **(undefined8 **)(lVar31 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar30 = func_0x057a51c4(uVar30,0);
        auVar40 = func_0x072869d0(uVar25,uVar30,0,0,0);
        ppppppuVar11 = auVar40._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar40._8_8_;
        if (ppppppuVar11 == (undefined8 ******)0x0) {
          return auVar4 << 0x40;
        }
        uVar30 = **(undefined8 **)(lVar31 + 0x38);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar30 = func_0x057a51c4(uVar30,0);
        lVar28 = func_0x057c1ad4(uVar30,0);
        lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
        if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
          lVar31 = func_0x0325681c(lVar31);
        }
        if (lVar28 == 0) {
LAB_03ea5b18:
          param_3 = (undefined8 *******)0x0;
        }
        else {
          param_3 = (undefined8 *******)func_0x03280b90(lVar28,lVar31);
          if (param_3 == (undefined8 *******)0x0) {
            func_0x03281048(lVar28,lVar31);
            goto LAB_03ea5b18;
          }
        }
        uVar20 = *(ulong *)((long)alStack_210 + lVar22 + 0x20);
        pppppppuVar18 = *(undefined8 ********)((long)alStack_210 + lVar22 + 0x28);
        lVar31 = *(long *)((long)alStack_210 + lVar22 + 0x10);
        ppppppuVar29 = *(undefined8 *******)((long)alStack_210 + lVar22 + 0x18);
        puVar7 = (undefined *)((long)alStack_1e0 + lVar22);
        lVar28 = *(undefined8 *)((long)alStack_210 + lVar22);
        unaff_x23 = *(undefined8 ********)((long)alStack_210 + lVar22 + 8);
        puVar34 = (undefined *)0x0;
      }
      else {
        puVar7 = &stack0xffffffffffffffb0;
        pppppppuVar18 = pppppppuStack_58;
        uVar20 = uStack_60;
        ppppppuVar29 = ppppppuStack_68;
        lVar31 = lStack_70;
      }
SUB_072852e4:
      lVar22 = 0;
      puVar6 = puVar7 + -0x30;
      *(long *)(puVar7 + -0x30) = lVar28;
      *(long *)(puVar7 + -0x20) = lVar31;
      *(undefined8 *******)(puVar7 + -0x18) = ppppppuVar29;
      *(ulong *)(puVar7 + -0x10) = uVar20;
      *(undefined8 ********)(puVar7 + -8) = pppppppuVar18;
      if ((bRam0000000007e3419a & 1) == 0) {
        func_0x03280a18(PTR_DAT_0785dee8);
        func_0x03280a18(PTR_DAT_0785def0);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_0785def8);
        func_0x03280a18(PTR_DAT_07751038);
        func_0x03280a18(PTR_DAT_07779590);
        bRam0000000007e3419a = 1;
      }
      puVar12 = PTR_DAT_07779590;
      if (param_3 != (undefined8 *******)0x0) {
        uVar30 = func_0x057dadc4(param_3,0);
        pppppuVar27 = ppppppuVar11[4];
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar12);
        }
        uVar10 = func_0x0727e0ec(uVar30,pppppuVar27);
        uVar14 = (ulong)(uVar10 & 1);
        uVar35 = 0x728539c;
        uVar30 = extraout_x1_01;
        goto SUB_0727dc78;
      }
      func_0x03280cac();
      func_0x03280cac();
      lVar28 = 0;
      while( true ) {
        func_0x03280ca4(lVar28);
        auVar43 = func_0x03280cac();
        uVar30 = auVar43._0_8_;
        if (auVar43._8_4_ != 1) break;
        plVar13 = (long *)func_0x072ce910(uVar30);
        lVar28 = *plVar13;
        func_0x072ce920();
        uVar25 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar15 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_072854e8;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        lVar22 = 0;
        puVar15 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
        auVar40 = (*(code *)*puVar15)(0x7e34000,puVar15[1]);
        if (lVar28 == 0) {
          return auVar40;
        }
      }
      uVar25 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar15 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_072855b0;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      lVar22 = 0;
      puVar15 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
      (*(code *)*puVar15)(0x7e34000,puVar15[1]);
      func_0x03365958(uVar30);
      func_0x03280ca4(0);
      auVar40 = func_0x02f09514();
      puVar33 = PTR_DAT_0785dec8;
      lVar16 = auVar40._8_8_;
      lVar28 = auVar40._0_8_;
      *(undefined8 *)(puVar7 + -0x70) = 0x72855d4;
      *(ulong *)(puVar7 + -0x68) = uVar14;
      *(undefined **)(puVar7 + -0x60) = puVar34;
      *(undefined8 ********)(puVar7 + -0x58) = unaff_x23;
      *(long *)(puVar7 + -0x50) = lVar31;
      *(undefined8 *)(puVar7 + -0x48) = uVar30;
      *(undefined8 *)(puVar7 + -0x40) = 0;
      *(undefined8 *)(puVar7 + -0x38) = 0x7e34000;
      plVar32 = (long *)0x7e34000;
      if ((bRam0000000007e3419b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0785dec8);
        func_0x03280a18(PTR_DAT_0785df00);
        func_0x03280a18(PTR_DAT_0785ded0);
        func_0x03280a18(PTR_DAT_0785ded8);
        func_0x03280a18(PTR_DAT_0774e5a0);
        func_0x03280a18(PTR_DAT_0785df08);
        bRam0000000007e3419b = 1;
      }
      auVar40 = func_0x03e0c264(lVar16,*(undefined8 *)puVar33);
      puVar5 = PTR_DAT_0785df00;
      puVar12 = PTR_DAT_0785ded8;
      if ((auVar40._0_8_ & 1) == 0) {
LAB_07285770:
        if (lVar16 != 0) {
          if (0 < *(int *)(lVar16 + 0x18)) {
            plVar32 = (long *)0x0;
            do {
              puVar17 = (undefined *)func_0x0414419c(lVar16,plVar32,*(undefined8 *)puVar12);
              puVar34 = puVar12;
              if (*(long *)(lVar28 + 0x10) == 0) goto LAB_07285808;
              auVar40 = func_0x041447fc(*(long *)(lVar28 + 0x10),puVar17,*(undefined8 *)puVar5);
              puVar33 = puVar17;
              if ((auVar40._0_8_ & 1) != 0) {
                if ((puVar17 == (undefined *)0x0) ||
                   (lVar31 = *(long *)(puVar17 + 0x18), lVar31 == 0)) goto LAB_07285808;
                auVar40 = (**(code **)(lVar31 + 0x18))
                                    (*(undefined8 *)(lVar31 + 0x40),lVar22,
                                     *(undefined8 *)(lVar31 + 0x28));
              }
              uVar10 = (int)plVar32 + 1;
              plVar32 = (long *)(ulong)uVar10;
            } while ((int)uVar10 < *(int *)(lVar16 + 0x18));
          }
          return auVar40;
        }
LAB_07285808:
        func_0x03280cac();
        plVar13 = plVar32;
        puVar12 = puVar33;
LAB_0728580c:
        func_0x03280cb4();
      }
      else {
        if (*(int *)(lVar28 + 0x30) != 2) {
          if (*(int *)(lVar28 + 0x30) != 1) goto LAB_07285770;
          uVar30 = func_0x03280a2c(PTR_DAT_0774e5a0);
          lVar16 = func_0x03280afc(uVar30,1);
          func_0x02f0b18c(lVar22);
          uVar30 = func_0x057dadc4(lVar22,0);
          func_0x02f0b18c(lVar16);
          func_0x02f176b4(lVar16,uVar30);
          func_0x02f0965c(lVar16,0,uVar30);
          uVar30 = func_0x03280a2c(PTR_DAT_0785df08);
          lVar22 = func_0x0727df38(uVar30,lVar16);
          uVar30 = func_0x03280a2c(PTR_DAT_0785df10);
          func_0x03280b7c(lVar22,uVar30);
        }
        plVar13 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
        if ((lVar22 == 0) ||
           (puVar12 = (undefined *)func_0x057dadc4(lVar22,0), plVar32 = plVar13,
           plVar13 == (long *)0x0)) goto LAB_07285808;
        if ((puVar12 == (undefined *)0x0) ||
           (lVar31 = func_0x03280b90(puVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar31 != 0)) {
          if ((int)plVar13[3] != 0) {
            plVar13 = plVar13 + 4;
            *plVar13 = (long)puVar12;
            goto SUB_032809c4;
          }
          goto LAB_0728580c;
        }
      }
      uVar30 = func_0x03280cd0();
      auVar40 = func_0x03280b7c(uVar30,0);
      *(undefined8 *)(puVar7 + -0x80) = 0x728581c;
      lVar31 = *(long *)(auVar40._0_8_ + 0x18);
      if (lVar31 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar40 = (**(code **)(lVar31 + 0x18))
                            (*(undefined8 *)(lVar31 + 0x40),auVar40._8_8_,
                             *(undefined8 *)(lVar31 + 0x28));
        return auVar40;
      }
      auVar40 = func_0x03280cac();
      pppppuVar27 = (undefined8 *****)PTR_DAT_0785df18;
      uVar30 = auVar40._8_8_;
      param_3 = auVar40._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(undefined8 *)(puVar7 + -0xc0) = 0x7285840;
      *(undefined **)(puVar7 + -0xb0) = puVar34;
      *(undefined **)(puVar7 + -0xa8) = puVar12;
      *(long **)(puVar7 + -0xa0) = plVar13;
      *(long *)(puVar7 + -0x98) = lVar28;
      *(long *)(puVar7 + -0x90) = lVar16;
      *(long *)(puVar7 + -0x88) = lVar22;
      ppppppuVar11 = (undefined8 ******)0x7e34000;
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
        uVar30 = extraout_x1_02;
      }
      uVar14 = (ulong)*(byte *)((long)param_3 + 0x34);
      uVar35 = 0x72858f0;
SUB_0727dc78:
      if ((uVar14 & 1) != 0) {
        auVar41._8_8_ = uVar30;
        auVar41._0_8_ = uVar14;
        return auVar41;
      }
      *(undefined8 *)(puVar6 + -0x10) = uVar35;
      *(undefined8 ******)(puVar6 + -8) = pppppuVar27;
      uVar30 = func_0x03280a2c(PTR_DAT_0785dbe8);
      puVar7 = PTR_DAT_0777c990;
      *(undefined8 *)(puVar6 + -0x30) = 0x727dc94;
      *(undefined8 *******)(puVar6 + -0x28) = ppppppuVar11;
      *(undefined8 ********)(puVar6 + -0x20) = param_3;
      *(undefined8 ******)(puVar6 + -0x18) = pppppuVar27;
      if ((bRam0000000007e34146 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777c990);
        bRam0000000007e34146 = 1;
      }
      auVar42._0_8_ = func_0x03280ca0(*(undefined8 *)puVar7);
      func_0x072c77f8(auVar42._0_8_,uVar30,0);
      auVar42._8_8_ = extraout_x1_00;
      return auVar42;
    }
  }
LAB_0688dc18:
  auVar40 = func_0x03280cac();
  puVar7 = PTR_DAT_078103c0;
  lStack_70 = lVar31;
  ppppppuStack_68 = param_2;
  uStack_60 = param_1;
  pppppppuStack_58 = param_3;
  if ((bRam0000000007e28d5a & 1) == 0) {
    func_0x03280a18(PTR_DAT_078103c0);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e28d5a = 1;
  }
  puVar12 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar7);
  func_0x06a005e4(puVar12,0);
  if ((puVar12 != (undefined *)0x0) && (puVar12[0x18] = 1, auVar40._8_8_ != 0)) {
    uStack_78 = 0;
    func_0x0437b6e0(&uStack_78,*(undefined4 *)(auVar40._8_8_ + 0x30),*(undefined8 *)PTR_DAT_07750da0
                   );
    *(undefined8 *)(puVar12 + 0x1c) = uStack_78;
    lVar31 = *(long *)(auVar40._0_8_ + 0x88);
    if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x30), lVar31 != 0)) {
      plVar13 = (long *)(lVar31 + 0x20);
      *plVar13 = (long)puVar12;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar23 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar23,0x10);
          if (bVar3) {
            *puVar23 = *puVar23 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auVar36._8_8_ = puVar12;
      auVar36._0_8_ = plVar13;
      return auVar36;
    }
  }
  func_0x03280cac();
  puVar7 = PTR_DAT_078103c8;
  if ((bRam0000000007e28d53 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_078103d0);
    func_0x03280a18(PTR_DAT_078103d8);
    func_0x03280a18(PTR_DAT_078103c8);
    bRam0000000007e28d53 = 1;
  }
  auVar39._0_8_ = func_0x03280ca0(*(undefined8 *)puVar7);
  auVar39._8_8_ = 0;
  return auVar39;
}

