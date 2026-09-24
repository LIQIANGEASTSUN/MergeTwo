/* Ghidra 12.1.2 native pseudocode; RVA 0x678459C; MergeEngine.ECS.Systems.Board.SplitSystem.GetSplitterAndTarget; status ok */


/* WARNING: Possible PIC construction at 0x06884624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06884654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0688467c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06884c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b1dd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06884e50: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x06884f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06884f3c) */
/* WARNING: Removing unreachable block (ram,0x06884f40) */
/* WARNING: Removing unreachable block (ram,0x06884f44) */
/* WARNING: Removing unreachable block (ram,0x06884f60) */
/* WARNING: Removing unreachable block (ram,0x06884f68) */
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
/* WARNING: Removing unreachable block (ram,0x06884e54) */
/* WARNING: Removing unreachable block (ram,0x06884eb0) */
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
/* WARNING: Removing unreachable block (ram,0x06b1dd74) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x06884c9c) */
/* WARNING: Removing unreachable block (ram,0x06884cb8) */
/* WARNING: Removing unreachable block (ram,0x06884680) */
/* WARNING: Removing unreachable block (ram,0x06884658) */
/* WARNING: Removing unreachable block (ram,0x06884628) */
/* WARNING: Removing unreachable block (ram,0x06884694) */
/* WARNING: Removing unreachable block (ram,0x06885184) */
/* WARNING: Removing unreachable block (ram,0x0688518c) */
/* WARNING: Removing unreachable block (ram,0x068851a8) */

long * MergeEngine_ECS_Systems_Board_SplitSystem__GetSplitterAndTarget
                 (undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                 undefined1 *param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar12;
  long lVar13;
  uint uVar11;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  long *plVar25;
  long *plVar26;
  undefined *puVar27;
  long *plVar28;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar29;
  undefined *unaff_x27;
  undefined *puVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  puVar6 = &stack0xffffffffffffffc0;
  plVar16 = param_3;
  plVar28 = param_4;
  if ((bRam0000000007e28d0e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810130);
    bRam0000000007e28d0e = 1;
  }
  puVar17 = PTR_DAT_07810130;
  if ((param_2 == (long *)0x0) ||
     (lVar12 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_07810130), unaff_x25 = puVar17,
     param_3 == (long *)0x0)) {
    uVar31 = 0x68846b4;
    auVar32 = func_0x03280cac();
    puVar17 = (undefined *)0x7e28000;
SUB_068846b4:
    lVar13 = auVar32._8_8_;
    lVar12 = auVar32._0_8_;
    *(undefined8 *)(puVar6 + -0x30) = uVar31;
    *(long **)(puVar6 + -0x28) = param_4;
    *(long **)(puVar6 + -0x20) = param_2;
    *(long **)(puVar6 + -0x18) = param_5;
    *(long **)(puVar6 + -0x10) = param_3;
    *(undefined1 **)(puVar6 + -8) = param_6;
    plVar20 = plVar16;
    plVar26 = plVar28;
    if ((bRam0000000007e28d10 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e71a8);
      func_0x03280a18(PTR_DAT_077e6dd0);
      func_0x03280a18(PTR_DAT_077e64f8);
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_0777e548);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_07779820);
      bRam0000000007e28d10 = 1;
      plVar20 = plVar16;
      plVar26 = plVar28;
    }
    plVar28 = (long *)0x7e28000;
    if (lVar13 != 0) {
      lVar14 = func_0x03ced81c(lVar13,*(undefined8 *)PTR_DAT_077e6dd0);
      plVar28 = (long *)PTR_DAT_077e71a8;
      if ((lVar14 == 0) ||
         (lVar14 = func_0x03ced81c(lVar13,*(undefined8 *)PTR_DAT_077e71a8), lVar14 == 0)) {
LAB_0688477c:
        puVar27 = PTR_DAT_0777a498;
        plVar28 = *(long **)(lVar12 + 0x40);
        if (plVar28 != (long *)0x0) {
          lVar14 = *plVar28;
          uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar22 != 0) {
            piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar15 = (undefined8 *)(lVar14 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
                goto LAB_068847dc;
              }
              uVar22 = uVar22 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 != 0);
          }
          puVar15 = (undefined8 *)func_0x03256b10(plVar28,*(long *)PTR_DAT_0777a498,0x14);
LAB_068847dc:
          plVar20 = (long *)puVar15[1];
          plVar16 = (long *)(*(code *)*puVar15)(plVar28,lVar13);
          param_2 = *(long **)(lVar12 + 0x40);
          param_4 = (long *)puVar27;
          if (param_2 != (long *)0x0) {
            lVar14 = *param_2;
            uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar22 != 0) {
              piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar27) {
                  puVar15 = (undefined8 *)(lVar14 + (long)(*piVar24 + 0x13) * 0x10 + 0x138);
                  goto LAB_06884848;
                }
                uVar22 = uVar22 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 != 0);
            }
            puVar15 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar27,0x13);
LAB_06884848:
            plVar20 = (long *)puVar15[1];
            iVar10 = (*(code *)*puVar15)(param_2,plVar16);
            if (iVar10 < 1) {
LAB_068848ec:
              uVar11 = 0;
              goto LAB_068848f0;
            }
            plVar28 = plVar16;
            if (plVar16 != (long *)0x0) {
              lVar14 = *plVar16;
              uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar22 != 0) {
                piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e548) {
                    puVar15 = (undefined8 *)(lVar14 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
                    goto LAB_068848bc;
                  }
                  uVar22 = uVar22 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 != 0);
              }
              plVar20 = (long *)0x14;
              puVar15 = (undefined8 *)func_0x03256b10(plVar16);
LAB_068848bc:
              uVar22 = (*(code *)*puVar15)(plVar16,puVar15[1]);
              if ((uVar22 & 1) != 0) {
                uVar11 = 1;
                goto LAB_068848f0;
              }
              lVar14 = func_0x03ced85c(lVar13,*(undefined8 *)PTR_DAT_077e64f8);
              if (lVar14 != 0) goto LAB_068848ec;
              lVar14 = *plVar16;
              plVar25 = *(long **)(lVar12 + 0x40);
              auVar32._8_8_ = lVar13;
              auVar32._0_8_ = plVar25;
              uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar22 != 0) {
                piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar15 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0688495c;
                  }
                  uVar22 = uVar22 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 != 0);
              }
              plVar20 = (long *)0x0;
              puVar15 = (undefined8 *)func_0x03256b10(plVar16);
LAB_0688495c:
              uVar31 = (*(code *)*puVar15)(plVar16,puVar15[1]);
              auVar4._8_8_ = uVar31;
              auVar4._0_8_ = plVar25;
              if (plVar25 != (long *)0x0) {
                lVar12 = *plVar25;
                uVar22 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar22 != 0) {
                  piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)puVar27) {
                      puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                      goto LAB_068849c0;
                    }
                    uVar22 = uVar22 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar27,4);
LAB_068849c0:
                plVar20 = (long *)puVar15[1];
                plVar16 = (long *)(*(code *)*puVar15)(plVar25,uVar31);
                auVar32 = auVar4;
                if (plVar16 != (long *)0x0) {
                  lVar12 = *plVar16;
                  uVar22 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar22 == 0) goto LAB_06884a10;
                  piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  goto LAB_068849f8;
                }
              }
            }
          }
        }
      }
      else {
        lVar14 = func_0x03ced81c(lVar13,*plVar28);
        if (lVar14 != 0) {
          if (*(char *)(lVar14 + 0x30) == '\0') goto LAB_0688477c;
          goto LAB_068848ec;
        }
      }
    }
    auVar33 = func_0x03280cac();
    *(code **)(puVar6 + -0x60) = MergeEngine_ECS_Systems_Board_SplitSystem__TryCombineItems;
    *(long **)(puVar6 + -0x50) = param_2;
    *(long **)(puVar6 + -0x48) = plVar28;
    *(long *)(puVar6 + -0x40) = auVar32._8_8_;
    *(long *)(puVar6 + -0x38) = auVar32._0_8_;
    plVar28 = plVar26;
    uVar22 = MergeEngine_ECS_Systems_Board_SplitSystem__CanCombineItems();
    if ((uVar22 & 1) == 0) {
      uVar11 = 0;
LAB_06884abc:
      return (long *)(ulong)uVar11;
    }
    plVar16 = plVar20;
    uVar22 = MergeEngine_ECS_Systems_Board_SplitSystem__ShouldVerifySplit
                       (auVar33._0_8_,auVar33._8_8_);
    if ((uVar22 & 1) == 0) {
      plVar21 = *(long **)(puVar6 + -0x38);
      plVar25 = *(long **)(puVar6 + -0x50);
      auVar34 = *(undefined1 (*) [16])(puVar6 + -0x48);
      puVar7 = puVar6 + -0x30;
      uVar31 = *(undefined8 *)(puVar6 + -0x60);
      puVar27 = unaff_x25;
      puVar29 = unaff_x26;
      puVar30 = unaff_x27;
    }
    else {
      if (plVar26 != (long *)0x0) {
        uVar11 = 1;
        (*(code *)plVar26[3])(plVar26[8],0,1,1,plVar26[5]);
        MergeEngine_ECS_Systems_Board_SplitSystem__VerifyMerge(auVar33._0_8_,auVar33._8_8_,plVar20);
        goto LAB_06884abc;
      }
      auVar32 = func_0x03280cac();
      uVar31 = auVar32._8_8_;
      lVar12 = auVar32._0_8_;
      *(code **)(puVar6 + -0xa0) = MergeEngine_ECS_Systems_Board_SplitSystem__ShouldVerifySplit;
      *(undefined **)(puVar6 + -0x90) = puVar17;
      *(long **)(puVar6 + -0x88) = param_4;
      *(undefined8 *)(puVar6 + -0x80) = 0;
      *(undefined1 (*) [16])(puVar6 + -0x78) = auVar33;
      *(long **)(puVar6 + -0x68) = plVar20;
      plVar21 = plVar16;
      plVar26 = plVar28;
      if ((bRam0000000007e28d0c & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_0777a750);
        bRam0000000007e28d0c = 1;
        plVar26 = plVar28;
      }
      plVar28 = *(long **)(lVar12 + 0x50);
      uVar22 = 0;
      if (plVar28 != (long *)0x0) {
        lVar13 = *plVar28;
        uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar22 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a750) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0x22) * 0x10 + 0x138);
              goto LAB_06884b9c;
            }
            uVar22 = uVar22 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 != 0);
        }
        plVar21 = (long *)0x22;
        puVar15 = (undefined8 *)func_0x03256b10(plVar28);
LAB_06884b9c:
        uVar11 = (*(code *)*puVar15)(plVar28,puVar15[1]);
        puVar27 = PTR_DAT_0777a498;
        uVar22 = (ulong)uVar11;
        if ((uVar11 & 1) == 0) {
          return (long *)(ulong)(uVar11 & 1);
        }
        param_4 = *(long **)(lVar12 + 0x40);
        if (param_4 != (long *)0x0) {
          lVar13 = *param_4;
          uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
                goto LAB_06884c10;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar15 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_0777a498,0x14);
LAB_06884c10:
          plVar21 = (long *)puVar15[1];
          plVar20 = (long *)(*(code *)*puVar15)(param_4,uVar31);
          plVar28 = *(long **)(lVar12 + 0x40);
          uVar31 = 0;
          puVar17 = puVar27;
          if (plVar28 != (long *)0x0) {
            lVar13 = *plVar28;
            lVar12 = *(long *)puVar27;
            uVar23 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar23 == 0) goto LAB_06884c5c;
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_06884c44;
          }
        }
      }
      auVar34 = func_0x03280cac();
      puVar8 = puVar6 + -0x100;
      puVar7 = puVar6 + -0x100;
      *(code **)(puVar6 + -0xf0) = MergeEngine_ECS_Systems_Board_SplitSystem__VerifyMerge;
      *(undefined **)(puVar6 + -0xe8) = unaff_x27;
      *(undefined **)(puVar6 + -0xe0) = unaff_x26;
      *(undefined **)(puVar6 + -0xd8) = unaff_x25;
      *(undefined **)(puVar6 + -0xd0) = puVar17;
      *(long **)(puVar6 + -200) = param_4;
      *(ulong *)(puVar6 + -0xc0) = uVar22;
      *(undefined8 *)(puVar6 + -0xb8) = uVar31;
      *(long *)(puVar6 + -0xb0) = lVar12;
      *(long **)(puVar6 + -0xa8) = plVar16;
      plVar20 = plVar21;
      if ((bRam0000000007e28d0d & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1510);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_078080d8);
        func_0x03280a18(PTR_DAT_07810138);
        func_0x03280a18(PTR_DAT_078080e0);
        bRam0000000007e28d0d = 1;
      }
      puVar19 = PTR_DAT_0777a498;
      plVar25 = *(long **)(auVar34._0_8_ + 0x40);
      if (plVar25 != (long *)0x0) {
        lVar12 = *plVar25;
        uVar22 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar22 != 0) {
          piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
              goto LAB_06884dac;
            }
            uVar22 = uVar22 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777a498,0x14);
LAB_06884dac:
        plVar20 = (long *)puVar15[1];
        uVar31 = (*(code *)*puVar15)(plVar25,auVar34._8_8_);
        puVar29 = PTR_DAT_07810138;
        puVar30 = PTR_DAT_078080e0;
        puVar27 = PTR_DAT_077f1510;
        auVar33._8_8_ = uVar31;
        auVar33._0_8_ = plVar21;
        param_4 = *(long **)(auVar34._0_8_ + 0x40);
        puVar17 = puVar19;
        if (param_4 != (long *)0x0) {
          lVar13 = *param_4;
          uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
          lVar12 = *(long *)puVar19;
          if (uVar22 == 0) goto LAB_06884e10;
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_06884df8;
        }
      }
      uVar31 = 0x6884ee4;
      auVar33 = func_0x03280cac();
      puVar27 = unaff_x25;
      puVar29 = unaff_x26;
      puVar30 = unaff_x27;
    }
    do {
      auVar5._8_8_ = plVar26;
      auVar5._0_8_ = plVar20;
      lVar12 = auVar33._0_8_;
      puVar9 = puVar7 + -0x40;
      puVar8 = puVar7 + -0x40;
      *(undefined8 *)(puVar7 + -0x30) = uVar31;
      *(undefined8 *)(puVar7 + -0x28) = 0;
      *(long **)(puVar7 + -0x20) = plVar25;
      *(undefined1 (*) [16])(puVar7 + -0x18) = auVar34;
      *(long **)(puVar7 + -8) = plVar21;
      *(undefined8 *)(puVar7 + -0x40) = 0;
      *(undefined8 *)(puVar7 + -0x38) = 0;
      plVar21 = plVar20;
      uVar22 = MergeEngine_ECS_Systems_Board_SplitSystem__GetSplitterAndTarget();
      if ((uVar22 & 1) == 0) {
        return (long *)0x0;
      }
      if ((auVar33._8_8_ != 0) && (plVar20 != (long *)0x0)) {
        puVar19 = *(undefined **)(puVar7 + -0x28);
        param_6 = *(undefined1 **)(puVar7 + -0x40);
        plVar16 = *(long **)(puVar7 + -0x38);
        plVar28 = *(long **)(auVar33._8_8_ + 0x30);
        param_3 = (long *)plVar20[6];
        uVar31 = 0x6884f3c;
        goto SUB_06885154;
      }
      uVar31 = 0x6884f94;
      auVar34 = func_0x03280cac();
SUB_06884f94:
      lVar13 = auVar34._0_8_;
      param_6 = puVar8 + -0x40;
      puVar7 = puVar8 + -0x40;
      *(undefined8 *)(puVar8 + -0x30) = uVar31;
      *(long *)(puVar8 + -0x20) = auVar33._8_8_;
      *(undefined1 (*) [16])(puVar8 + -0x18) = auVar5;
      *(long *)(puVar8 + -8) = auVar33._0_8_;
      lVar12 = lVar13;
      if ((bRam0000000007e28d1a & 1) == 0) {
        lVar12 = func_0x03280a18(PTR_DAT_0777a498);
        bRam0000000007e28d1a = 1;
      }
      plVar28 = (long *)(puVar8 + -0x38);
      param_3 = (long *)(puVar8 + -0x28);
      *(undefined8 *)(puVar8 + -0x28) = 0;
      *(undefined8 *)(puVar8 + -0x40) = 0;
      *(undefined8 *)(puVar8 + -0x38) = 0;
      uVar22 = MergeEngine_ECS_Systems_Board_SplitSystem__GetSplitterAndTarget(lVar12,auVar34._8_8_)
      ;
      puVar19 = PTR_DAT_0777a498;
      lVar12 = 0;
      if ((uVar22 & 1) == 0) {
        return (long *)0x0;
      }
      plVar26 = *(long **)(lVar13 + 0x40);
      plVar25 = (long *)0x7e28000;
      if (plVar26 != (long *)0x0) {
        lVar12 = *plVar26;
        uVar23 = *(ulong *)(puVar8 + -0x28);
        uVar22 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar22 != 0) {
          piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
              goto LAB_06885060;
            }
            uVar22 = uVar22 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_0777a498,0x14);
LAB_06885060:
        plVar21 = (long *)puVar15[1];
        lVar12 = (*(code *)*puVar15)(plVar26,uVar23);
        if (lVar12 == 0) {
          return (long *)0x0;
        }
        plVar16 = *(long **)(lVar13 + 0x40);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar23;
        auVar34 = auVar34 << 0x40;
        plVar25 = (long *)puVar19;
        if (plVar16 != (long *)0x0) {
          lVar14 = *plVar16;
          lVar13 = *(long *)puVar19;
          uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar22 == 0) goto LAB_068850b0;
          piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_06885098;
        }
      }
      plVar20 = auVar34._8_8_;
      lVar12 = func_0x03280cac(lVar12);
      puVar9 = puVar8 + -0x60;
      *(undefined8 *)(puVar8 + -0x60) = 0x68850f8;
      *(long **)(puVar8 + -0x58) = plVar20;
      *(long **)(puVar8 + -0x50) = plVar26;
      *(long *)(puVar8 + -0x48) = auVar34._0_8_;
      plVar16 = plVar21;
      if (*(long *)(lVar12 + 0x58) == 0) goto LAB_06885150;
      plVar16 = (long *)0x0;
      uVar31 = func_0x06760834();
      auVar33._8_8_ = uVar31;
      auVar33._0_8_ = lVar12;
      plVar26 = plVar21;
      if (*(long *)(lVar12 + 0x58) == 0) goto LAB_06885150;
      plVar20 = (long *)func_0x06760834(*(long *)(lVar12 + 0x58),plVar21,0);
      plVar21 = *(long **)(puVar8 + -0x48);
      plVar26 = (long *)0x0;
      uVar31 = *(undefined8 *)(puVar8 + -0x60);
      auVar34 = *(undefined1 (*) [16])(puVar8 + -0x58);
    } while( true );
  }
  lVar13 = func_0x03ced81c(param_3,*(undefined8 *)puVar17);
  if ((lVar12 == 0) || (lVar13 != 0)) {
    if ((lVar12 == 0) && (lVar13 != 0)) {
      *param_4 = lVar13;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    *param_4 = lVar12;
  }
  goto SUB_032809c4;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar24 = piVar24 + 4;
    if (uVar22 == 0) break;
LAB_06884df8:
    if (*(long *)(piVar24 + -2) == lVar12) {
      puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
      goto LAB_06884e30;
    }
  }
LAB_06884e10:
  puVar15 = (undefined8 *)func_0x03256b10(param_4,lVar12,0x14);
LAB_06884e30:
  puVar17 = (undefined *)(*(code *)*puVar15)(param_4,plVar21,puVar15[1]);
  uVar31 = 0x6884e54;
  auVar5 = auVar34;
  goto SUB_06884f94;
LAB_06885150:
  uVar31 = 0x6885154;
  auVar32 = func_0x03280cac();
  puVar19 = auVar32._8_8_;
  auVar33._8_8_ = plVar25;
  auVar33._0_8_ = auVar32._0_8_;
SUB_06885154:
  unaff_x25 = auVar33._0_8_;
  auVar32._8_8_ = plVar16;
  auVar32._0_8_ = unaff_x25;
  puVar6 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = uVar31;
  *(undefined **)(puVar9 + -0x38) = puVar27;
  *(undefined **)(puVar9 + -0x30) = puVar17;
  *(long **)(puVar9 + -0x28) = param_4;
  *(long *)(puVar9 + -0x20) = auVar33._8_8_;
  *(long **)(puVar9 + -0x18) = plVar20;
  *(long **)(puVar9 + -0x10) = plVar26;
  *(long *)(puVar9 + -8) = lVar12;
  uVar31 = 0x6885184;
  param_5 = plVar28;
  param_2 = plVar16;
  puVar17 = puVar19;
  unaff_x26 = puVar29;
  unaff_x27 = puVar30;
  goto SUB_068846b4;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar24 = piVar24 + 4;
    if (uVar22 == 0) break;
LAB_068849f8:
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777c248) {
      puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0xb) * 0x10 + 0x138);
      goto LAB_06884a30;
    }
  }
LAB_06884a10:
  puVar15 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0777c248,0xb);
LAB_06884a30:
  uVar11 = (*(code *)*puVar15)(plVar16,puVar15[1]);
  uVar11 = uVar11 ^ 1;
LAB_068848f0:
  return (long *)(ulong)(uVar11 & 1);
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar24 = piVar24 + 4;
    if (uVar22 == 0) break;
LAB_06885098:
    if (*(long *)(piVar24 + -2) == lVar13) {
      puVar15 = (undefined8 *)(lVar14 + (long)(*piVar24 + 0x10) * 0x10 + 0x138);
      goto LAB_068850d0;
    }
  }
LAB_068850b0:
  puVar15 = (undefined8 *)func_0x03256b10(plVar16,lVar13,0x10);
LAB_068850d0:
  plVar28 = (long *)(*(code *)*puVar15)(plVar16,lVar12,puVar15[1]);
  return plVar28;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar24 = piVar24 + 4;
    if (uVar23 == 0) break;
LAB_06884c44:
    if (*(long *)(piVar24 + -2) == lVar12) {
      puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0x14) * 0x10 + 0x138);
      goto LAB_06884c7c;
    }
  }
LAB_06884c5c:
  puVar15 = (undefined8 *)func_0x03256b10(plVar28,lVar12,0x14);
LAB_06884c7c:
  uVar31 = (*(code *)*puVar15)(plVar28,plVar16,puVar15[1]);
  *(undefined8 *)(puVar6 + -0xc0) = 0x6884c9c;
  *(long **)(puVar6 + -0xb0) = plVar20;
  *(undefined8 *)(puVar6 + -0xa8) = uVar31;
  if ((bRam0000000007e2a3b0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548,0);
    bRam0000000007e2a3b0 = 1;
  }
  puVar17 = PTR_DAT_0777e548;
  puVar27 = (undefined *)0x7e2a000;
  if (plVar20 != (long *)0x0) {
    lVar12 = *plVar20;
    uVar23 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0x10) * 0x10 + 0x138);
          goto LAB_06b1da4c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777e548,0x10);
LAB_06b1da4c:
    lVar12 = (*(code *)*puVar15)(plVar20,puVar15[1]);
    puVar27 = puVar17;
    if (lVar12 != 0) {
      if (*(char *)(lVar12 + 0x10) == '\0') {
        return (long *)0x0;
      }
      lVar12 = *plVar20;
      uVar23 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar17) {
            puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 7) * 0x10 + 0x138);
            goto LAB_06b1dabc;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar17,7);
LAB_06b1dabc:
      lVar12 = (*(code *)*puVar15)(plVar20,puVar15[1]);
      if (lVar12 != 0) {
        return (long *)(ulong)(*(int *)(lVar12 + 0x14) == 4);
      }
    }
  }
  plVar16 = (long *)func_0x03280cac();
  *(undefined8 *)(puVar6 + -0xe0) = 0x6b1dae8;
  *(long **)(puVar6 + -0xd8) = plVar28;
  *(undefined **)(puVar6 + -0xd0) = puVar27;
  *(long **)(puVar6 + -200) = plVar20;
  if ((bRam0000000007e2a3b1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a3b1 = 1;
  }
  puVar17 = PTR_DAT_0777e548;
  if (plVar16 != (long *)0x0) {
    lVar12 = *plVar16;
    uVar23 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0x1b) * 0x10 + 0x138);
          goto LAB_06b1db7c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0777e548,0x1b);
LAB_06b1db7c:
    plVar20 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
    plVar28 = (long *)puVar17;
    if (plVar20 != (long *)0x0) {
      lVar12 = *plVar20;
      uVar22 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar22 != 0) {
        piVar24 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar15 = (undefined8 *)(lVar12 + (long)(*piVar24 + 0xf) * 0x10 + 0x138);
            goto LAB_06b1dbe8;
          }
          uVar22 = uVar22 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_0777c248,0xf);
LAB_06b1dbe8:
      iVar10 = (*(code *)*puVar15)(plVar20,puVar15[1]);
      if (iVar10 == 8) {
        lVar13 = *plVar16;
        lVar12 = *(long *)puVar17;
        uVar22 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar22 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar12) {
              puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 0x1a) * 0x10 + 0x138);
              goto LAB_06b1dc54;
            }
            uVar22 = uVar22 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar16,lVar12,0x1a);
LAB_06b1dc54:
        lVar12 = (*(code *)*puVar15)(plVar16,puVar15[1]);
        plVar28 = (long *)(ulong)(lVar12 != 0);
      }
      else {
        plVar28 = (long *)0x0;
      }
      return plVar28;
    }
  }
  lVar12 = func_0x03280cac();
  *(undefined8 *)(puVar6 + -0x110) = 0x6b1dc78;
  *(ulong *)(puVar6 + -0x100) = uVar22;
  *(long **)(puVar6 + -0xf8) = plVar28;
  *(undefined8 *)(puVar6 + -0xf0) = 0x7e2a000;
  *(long **)(puVar6 + -0xe8) = plVar16;
  if ((bRam0000000007e2a3b2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f828);
    func_0x03280a18(PTR_DAT_0782ea90);
    bRam0000000007e2a3b2 = 1;
  }
  puVar27 = PTR_DAT_0782ea90;
  puVar17 = PTR_DAT_0774f828;
  plVar16 = *(long **)(lVar12 + 0x10);
  if (plVar16 != (long *)0x0) {
    uVar31 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
    uVar18 = *(undefined8 *)puVar17;
    *(undefined4 *)(puVar6 + -0x104) = *(undefined4 *)(lVar12 + 0x18);
    uVar18 = func_0x03280b94(uVar18,puVar6 + -0x104);
    plVar28 = (long *)func_0x055f7edc(*(undefined8 *)puVar27,uVar31,uVar18,0);
    return plVar28;
  }
  lVar13 = func_0x03280cac();
  puVar17 = PTR_DAT_0777e4f0;
  *(undefined8 *)(puVar6 + -0x130) = 0x6b1dd1c;
  *(long **)(puVar6 + -0x128) = plVar28;
  *(undefined8 *)(puVar6 + -0x120) = 0x7e2a000;
  *(long *)(puVar6 + -0x118) = lVar12;
  if ((bRam0000000007e2a3b3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4f0);
    bRam0000000007e2a3b3 = 1;
  }
  lVar12 = func_0x03280ca0(*(undefined8 *)puVar17);
  func_0x061049d8(lVar12,0);
  param_4 = (long *)(lVar13 + 0x10);
  *param_4 = lVar12;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)param_4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)param_4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_4;
}

