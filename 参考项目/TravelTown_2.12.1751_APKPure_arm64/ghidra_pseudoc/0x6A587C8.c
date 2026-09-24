/* Ghidra 12.1.2 native pseudocode; RVA 0x6A587C8; Merger.MergeBoardQueue.Models.BoardQueueModel.SyncWithState; status ok */


/* WARNING: Possible PIC construction at 0x04321a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04321a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea54a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea55bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea56d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea57ec: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x04321a54) */
/* WARNING: Removing unreachable block (ram,0x04321a18) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */
/* WARNING: Removing unreachable block (ram,0x07285460) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

long * Merger_MergeBoardQueue_Models_BoardQueueModel__SyncWithState(long param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined *puVar22;
  undefined8 unaff_x20;
  long lVar23;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *puVar24;
  undefined8 unaff_x24;
  undefined *puVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e2a618 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07830338);
      func_0x03280a18(PTR_DAT_07830340);
      func_0x03280a18(PTR_DAT_0777d4c8);
      bRam0000000007e2a618 = 1;
    }
    lVar19 = *(long *)(param_1 + 0x68);
    if (lVar19 != 0) {
      iVar2 = *(int *)(lVar19 + 0x18);
      *(undefined4 *)(lVar19 + 0x18) = 0;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (0 < iVar2) {
        func_0x057b9c7c(*(undefined8 *)(lVar19 + 0x10),0,iVar2,0);
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        func_0x043217b4(*(long *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x4c),
                        *(undefined8 *)PTR_DAT_0777d4c8);
        lVar19 = *(long *)(param_1 + 0x60);
        if (lVar19 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x50);
          lVar16 = *(long *)PTR_DAT_07830340;
          *(undefined8 *)((long)register0x00000008 + -0x30) =
               *(undefined8 *)((long)register0x00000008 + -0x20);
          *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          plVar9 = (long *)func_0x039574b0(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x20));
          if (plVar9 == (long *)0x0) {
            auVar27 = func_0x03280cac();
            *(undefined8 *)((long)register0x00000008 + -0x50) = 0x4321a3c;
            *(long *)((long)register0x00000008 + -0x40) = lVar19;
            *(long *)((long)register0x00000008 + -0x38) = lVar16;
            plVar10 = (long *)(auVar27._0_8_ + 0x20);
            *plVar10 = auVar27._8_8_;
          }
          else {
            plVar10 = (long *)(lVar19 + 0x20);
            plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                       (plVar9,*plVar10,uVar15,*(undefined8 *)(*plVar9 + 0x1c0));
            if (((ulong)plVar9 & 1) != 0) {
              return plVar9;
            }
            *(undefined8 *)(lVar19 + 0x20) = uVar15;
          }
          goto SUB_032809c4;
        }
      }
    }
    lVar19 = func_0x03280cac();
    puVar25 = PTR_DAT_07830348;
    puVar24 = PTR_DAT_077726d0;
    *(code **)((long)register0x00000008 + -0x50) =
         Merger_MergeBoardQueue_Models_BoardQueueModel__SubscribeToSignals;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0x7e2a000;
    *(long *)((long)register0x00000008 + -0x28) = param_1;
    if ((bRam0000000007e2a60a & 1) == 0) {
      func_0x03280a18(PTR_DAT_077726d0);
      func_0x03280a18(PTR_DAT_07830348);
      func_0x03280a18(PTR_DAT_077e8ef8);
      bRam0000000007e2a60a = 1;
    }
    func_0x069b2e90(lVar19,0);
    lVar23 = *(long *)(lVar19 + 0x20);
    lVar16 = func_0x03280ca0(*(undefined8 *)puVar24);
    func_0x054221d4(lVar16,lVar19,*(undefined8 *)puVar25,0);
    if (lVar23 != 0) break;
    plVar9 = (long *)func_0x03280cac();
    puVar25 = PTR_DAT_07830348;
    unaff_x22 = PTR_DAT_077726d0;
    *(code **)((long)register0x00000008 + -0x80) =
         Merger_MergeBoardQueue_Models_BoardQueueModel__UnsubscribeFromSignals;
    *(undefined **)((long)register0x00000008 + -0x70) = puVar24;
    *(long *)((long)register0x00000008 + -0x68) = lVar16;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(long *)((long)register0x00000008 + -0x58) = lVar19;
    if ((bRam0000000007e2a60b & 1) == 0) {
      func_0x03280a18(PTR_DAT_077726d0);
      func_0x03280a18(PTR_DAT_07830348);
      func_0x03280a18(PTR_DAT_07830350);
      bRam0000000007e2a60b = 1;
    }
    lVar19 = plVar9[4];
    uVar15 = func_0x03280ca0(*(undefined8 *)unaff_x22);
    func_0x054221d4(uVar15,plVar9,*(undefined8 *)puVar25,0);
    if (lVar19 != 0) {
      func_0x03ea6208(lVar19,uVar15,*(undefined8 *)PTR_DAT_07830350);
      return plVar9;
    }
    auVar27 = func_0x03280cac();
    param_1 = auVar27._0_8_;
    *(code **)((long)register0x00000008 + -0xa0) =
         Merger_MergeBoardQueue_Models_BoardQueueModel__OnRewardFlyAnimationStarted;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar15;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(long **)((long)register0x00000008 + -0x88) = plVar9;
    if ((bRam0000000007e2a60c & 1) == 0) {
      func_0x03280a18(PTR_DAT_077727d0);
      bRam0000000007e2a60c = 1;
    }
    if ((auVar27._8_8_ == 0) || (plVar9 = *(long **)(auVar27._8_8_ + 0x10), plVar9 == (long *)0x0))
    {
      uVar15 = func_0x03280cac();
      *(code **)((long)register0x00000008 + -0xc0) =
           Merger_MergeBoardQueue_Models_BoardQueueModel__Peek;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(long *)((long)register0x00000008 + -0xa8) = param_1;
      if ((bRam0000000007e2a60d & 1) == 0) {
        func_0x03280a18(PTR_DAT_07830358);
        bRam0000000007e2a60d = 1;
      }
      lVar19 = func_0x06b58af0(uVar15);
      plVar9 = (long *)0x0;
      if (lVar19 != 0) {
        plVar9 = *(long **)(lVar19 + 0x28);
      }
      return plVar9;
    }
    lVar19 = *plVar9;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077727d0) {
          puVar11 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_06b58a70;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077727d0,7);
LAB_06b58a70:
    plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
    if (((uint)plVar9 | 2) != 0x36) {
      return plVar9;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x98);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  lVar19 = *(long *)PTR_DAT_077e8ef8;
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  lVar18 = *(long *)(lVar19 + 0x38);
  if (lVar18 == 0) {
    func_0x03256878(lVar19);
    lVar18 = *(long *)(lVar19 + 0x38);
  }
  lVar17 = *(long *)(lVar18 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  plVar9 = *(long **)(lVar17 + 0x38);
  lVar19 = lVar16;
  lVar18 = lVar17;
  if (plVar9 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_07750ac8);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar9 = *(long **)(lVar17 + 0x38);
    if (plVar9 == (long *)0x0) {
      func_0x03256878(lVar17);
      plVar9 = *(long **)(lVar17 + 0x38);
    }
  }
  if ((*(byte *)(*plVar9 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar8 = func_0x03280ca0();
  func_0x04053df4(lVar8,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 8));
  if (lVar8 == 0) {
    auVar27 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3ea5530;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x80) = lVar16;
    *(long *)((long)register0x00000008 + -0x78) = lVar17;
    *(long *)((long)register0x00000008 + -0x70) = lVar23;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    plVar9 = *(long **)(lVar18 + 0x38);
    lVar16 = lVar19;
    lVar23 = lVar18;
    if (plVar9 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar9 = *(long **)(lVar18 + 0x38);
      if (plVar9 == (long *)0x0) {
        func_0x03256878(lVar18);
        plVar9 = *(long **)(lVar18 + 0x38);
      }
    }
    if ((*(byte *)(*plVar9 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar17 = func_0x03280ca0();
    func_0x0404e308(lVar17,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 8));
    if (lVar17 == 0) {
      auVar26 = func_0x03280cac();
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3ea5644;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
      *(long *)((long)register0x00000008 + -0xc0) = lVar19;
      *(long *)((long)register0x00000008 + -0xb8) = lVar18;
      *(undefined1 (*) [16])((long)register0x00000008 + -0xb0) = auVar27;
      plVar9 = *(long **)(lVar23 + 0x38);
      lVar19 = lVar16;
      lVar18 = lVar23;
      if (plVar9 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_07750ac8);
        func_0x03280a18(PTR_DAT_0774e558);
        plVar9 = *(long **)(lVar23 + 0x38);
        if (plVar9 == (long *)0x0) {
          func_0x03256878(lVar23);
          plVar9 = *(long **)(lVar23 + 0x38);
        }
      }
      if ((*(byte *)(*plVar9 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar17 = func_0x03280ca0();
      (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x38) + 8))();
      if (lVar17 == 0) {
        auVar27 = func_0x03280cac();
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ea575c;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x100) = lVar16;
        *(long *)((long)register0x00000008 + -0xf8) = lVar23;
        *(undefined1 (*) [16])((long)register0x00000008 + -0xf0) = auVar26;
        plVar9 = *(long **)(lVar18 + 0x38);
        if (plVar9 == (long *)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          plVar9 = *(long **)(lVar18 + 0x38);
          if (plVar9 == (long *)0x0) {
            func_0x03256878(lVar18);
            plVar9 = *(long **)(lVar18 + 0x38);
          }
        }
        if ((*(byte *)(*plVar9 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar16 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))();
        if (lVar16 == 0) {
          auVar26 = func_0x03280cac();
          lVar16 = auVar26._8_8_;
          plVar9 = auVar26._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x140) = 0x3ea5874;
          *(undefined1 (*) [16])((long)register0x00000008 + -0x130) = auVar27;
          plVar10 = *(long **)(lVar16 + 0x38);
          if (plVar10 == (long *)0x0) {
            func_0x03256878(lVar16);
            plVar10 = *(long **)(lVar16 + 0x38);
          }
          lVar16 = *plVar10;
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x23;
          *(long *)((long)register0x00000008 + -0x140) = lVar19;
          *(long *)((long)register0x00000008 + -0x138) = lVar18;
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0x130);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x128);
          plVar10 = plVar9;
          if ((*(long *)(lVar16 + 0x38) == 0) &&
             (plVar10 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar16 + 0x38) == 0)) {
            plVar10 = (long *)func_0x03256878(lVar16);
          }
          puVar24 = PTR_DAT_0774e558;
          if ((char)plVar9[10] != '\0') {
            return plVar10;
          }
          uVar15 = **(undefined8 **)(lVar16 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar15 = func_0x057a51c4(uVar15,0);
          lVar19 = func_0x072869d0(plVar9,uVar15,0,0,0);
          if (lVar19 == 0) {
            return (long *)0x0;
          }
          uVar15 = **(undefined8 **)(lVar16 + 0x38);
          if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar15 = func_0x057a51c4(uVar15,0);
          lVar23 = func_0x057c1ad4(uVar15,0);
          lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = func_0x0325681c(lVar16);
          }
          if (lVar23 == 0) {
LAB_03ea5b18:
            lVar18 = 0;
          }
          else {
            lVar18 = func_0x03280b90(lVar23,lVar16);
            if (lVar18 == 0) {
              func_0x03281048(lVar23,lVar16);
              goto LAB_03ea5b18;
            }
          }
          uVar15 = *(undefined8 *)((long)register0x00000008 + -0x140);
          lVar16 = 0;
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x148);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x150);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0x150);
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar15;
          *(undefined8 *)((long)register0x00000008 + -0x138) =
               *(undefined8 *)((long)register0x00000008 + -0x138);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0x130);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x128);
          if ((bRam0000000007e3419a & 1) == 0) {
            func_0x03280a18(PTR_DAT_0785dee8);
            func_0x03280a18(PTR_DAT_0785def0);
            func_0x03280a18(PTR_DAT_0774e8c8);
            func_0x03280a18(PTR_DAT_0785def8);
            func_0x03280a18(PTR_DAT_07751038);
            func_0x03280a18(PTR_DAT_07779590);
            bRam0000000007e3419a = 1;
          }
          puVar24 = PTR_DAT_07779590;
          if (lVar18 == 0) {
            func_0x03280cac();
            func_0x03280cac();
            lVar19 = 0;
            while( true ) {
              func_0x03280ca4(lVar19);
              auVar28 = func_0x03280cac();
              uVar12 = auVar28._0_8_;
              if (auVar28._8_4_ != 1) break;
              plVar9 = (long *)func_0x072ce910(uVar12);
              lVar19 = *plVar9;
              func_0x072ce920();
              uVar20 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0774e8c8) {
                    puVar11 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_072854e8;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              lVar16 = 0;
              puVar11 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
              plVar9 = (long *)(*(code *)*puVar11)(0x7e34000,puVar11[1]);
              if (lVar19 == 0) {
                return plVar9;
              }
            }
            uVar20 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
            if (uVar20 == 0) {
LAB_07285594:
              lVar16 = 0;
              puVar11 = (undefined8 *)func_0x03256b10(0x7e34000);
            }
            else {
              piVar21 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
              while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_0774e8c8) {
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
                if (uVar20 == 0) goto LAB_07285594;
              }
              puVar11 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar21 * 0x10 + 0x138);
            }
            (*(code *)*puVar11)(0x7e34000,puVar11[1]);
            func_0x03365958(uVar12);
            func_0x03280ca4(0);
            auVar27 = func_0x02f09514();
            puVar24 = PTR_DAT_0785dec8;
            lVar23 = auVar27._8_8_;
            lVar19 = auVar27._0_8_;
            *(undefined8 *)((long)register0x00000008 + -400) = 0x72855d4;
            *(undefined8 *)((long)register0x00000008 + -0x188) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x178) = uVar3;
            *(undefined8 *)((long)register0x00000008 + -0x170) = uVar15;
            *(undefined8 *)((long)register0x00000008 + -0x168) = uVar12;
            *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x158) = 0x7e34000;
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
            plVar10 = (long *)func_0x03e0c264(lVar23,*(undefined8 *)puVar24);
            puVar22 = PTR_DAT_0785df00;
            puVar13 = PTR_DAT_0785ded8;
            puVar25 = (undefined *)0x0;
            if (((ulong)plVar10 & 1) == 0) {
LAB_07285770:
              if (lVar23 != 0) {
                if (*(int *)(lVar23 + 0x18) < 1) {
                  return plVar10;
                }
                plVar9 = (long *)0x0;
                while( true ) {
                  puVar14 = (undefined *)func_0x0414419c(lVar23,plVar9,*(undefined8 *)puVar13);
                  puVar25 = puVar13;
                  if (*(long *)(lVar19 + 0x10) == 0) break;
                  plVar10 = (long *)func_0x041447fc(*(long *)(lVar19 + 0x10),puVar14,
                                                    *(undefined8 *)puVar22);
                  puVar24 = puVar14;
                  if (((ulong)plVar10 & 1) != 0) {
                    if ((puVar14 == (undefined *)0x0) ||
                       (lVar18 = *(long *)(puVar14 + 0x18), lVar18 == 0)) break;
                    plVar10 = (long *)(**(code **)(lVar18 + 0x18))
                                                (*(undefined8 *)(lVar18 + 0x40),lVar16,
                                                 *(undefined8 *)(lVar18 + 0x28));
                  }
                  uVar7 = (int)plVar9 + 1;
                  plVar9 = (long *)(ulong)uVar7;
                  if (*(int *)(lVar23 + 0x18) <= (int)uVar7) {
                    return plVar10;
                  }
                }
              }
LAB_07285808:
              func_0x03280cac();
              plVar10 = plVar9;
              puVar13 = puVar24;
LAB_0728580c:
              func_0x03280cb4();
            }
            else {
              if (*(int *)(lVar19 + 0x30) != 2) {
                if (*(int *)(lVar19 + 0x30) != 1) goto LAB_07285770;
                uVar15 = func_0x03280a2c(PTR_DAT_0774e5a0);
                lVar23 = func_0x03280afc(uVar15,1);
                func_0x02f0b18c(lVar16);
                uVar15 = func_0x057dadc4(lVar16,0);
                func_0x02f0b18c(lVar23);
                func_0x02f176b4(lVar23,uVar15);
                func_0x02f0965c(lVar23,0,uVar15);
                uVar15 = func_0x03280a2c(PTR_DAT_0785df08);
                lVar16 = func_0x0727df38(uVar15,lVar23);
                uVar15 = func_0x03280a2c(PTR_DAT_0785df10);
                func_0x03280b7c(lVar16,uVar15);
              }
              plVar10 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
              if ((lVar16 == 0) ||
                 (puVar13 = (undefined *)func_0x057dadc4(lVar16,0), plVar9 = plVar10,
                 plVar10 == (long *)0x0)) goto LAB_07285808;
              if ((puVar13 == (undefined *)0x0) ||
                 (lVar18 = func_0x03280b90(puVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar18 != 0))
              {
                if ((int)plVar10[3] == 0) goto LAB_0728580c;
                plVar10 = plVar10 + 4;
                *plVar10 = (long)puVar13;
                goto SUB_032809c4;
              }
            }
            uVar15 = func_0x03280cd0();
            auVar27 = func_0x03280b7c(uVar15,0);
            *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x728581c;
            lVar18 = *(long *)(auVar27._0_8_ + 0x18);
            if (lVar18 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar9 = (long *)(**(code **)(lVar18 + 0x18))
                                         (*(undefined8 *)(lVar18 + 0x40),auVar27._8_8_,
                                          *(undefined8 *)(lVar18 + 0x28));
              return plVar9;
            }
            lVar18 = func_0x03280cac();
            puVar22 = PTR_DAT_0785df18;
            puVar6 = (undefined1 *)((long)register0x00000008 + -0x1e0);
            *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x7285840;
            *(undefined **)((long)register0x00000008 + -0x1d0) = puVar25;
            *(undefined **)((long)register0x00000008 + -0x1c8) = puVar13;
            *(long **)((long)register0x00000008 + -0x1c0) = plVar10;
            *(long *)((long)register0x00000008 + -0x1b8) = lVar19;
            *(long *)((long)register0x00000008 + -0x1b0) = lVar23;
            *(long *)((long)register0x00000008 + -0x1a8) = lVar16;
            lVar19 = 0x7e34000;
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
            uVar15 = 0x72858f0;
          }
          else {
            uVar15 = func_0x057dadc4(lVar18,0);
            puVar22 = *(undefined **)(lVar19 + 0x20);
            if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)puVar24);
            }
            uVar7 = func_0x0727e0ec(uVar15,puVar22);
            plVar9 = (long *)(ulong)(uVar7 & 1);
            uVar15 = 0x728539c;
          }
          if (((ulong)plVar9 & 1) != 0) {
            return plVar9;
          }
          *(undefined8 *)(puVar6 + -0x10) = uVar15;
          *(undefined **)(puVar6 + -8) = puVar22;
          uVar15 = func_0x03280a2c(PTR_DAT_0785dbe8);
          puVar24 = PTR_DAT_0777c990;
          *(undefined8 *)(puVar6 + -0x30) = 0x727dc94;
          *(long *)(puVar6 + -0x28) = lVar19;
          *(long *)(puVar6 + -0x20) = lVar18;
          *(undefined **)(puVar6 + -0x18) = puVar22;
          if ((bRam0000000007e34146 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777c990);
            bRam0000000007e34146 = 1;
          }
          plVar9 = (long *)func_0x03280ca0(*(undefined8 *)puVar24);
          func_0x072c77f8(plVar9,uVar15,0);
          return plVar9;
        }
        plVar10 = (long *)(lVar16 + 0x10);
        *plVar10 = lVar19;
      }
      else {
        plVar10 = (long *)(lVar17 + 0x10);
        *plVar10 = lVar16;
      }
    }
    else {
      plVar10 = (long *)(lVar17 + 0x10);
      *plVar10 = lVar19;
    }
  }
  else {
    plVar10 = (long *)(lVar8 + 0x10);
    *plVar10 = lVar16;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return plVar10;
}

