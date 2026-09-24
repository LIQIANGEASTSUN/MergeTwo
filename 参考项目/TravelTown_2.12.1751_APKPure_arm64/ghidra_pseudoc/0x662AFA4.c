/* Ghidra 12.1.2 native pseudocode; RVA 0x662AFA4; Merger.Game.ViewModel.InventoryItemsViewModel.TryRemoveItem; status ok */


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
/* WARNING: Possible PIC construction at 0x06955388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069553cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a4b49c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x069553d0) */
/* WARNING: Removing unreachable block (ram,0x069553f8) */
/* WARNING: Removing unreachable block (ram,0x069553fc) */
/* WARNING: Removing unreachable block (ram,0x0695538c) */
/* WARNING: Removing unreachable block (ram,0x0695542c) */
/* WARNING: Removing unreachable block (ram,0x069553a4) */
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
/* WARNING: Removing unreachable block (ram,0x06a4b4a0) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

long * Merger_Game_ViewModel_InventoryItemsViewModel__TryRemoveItem(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 *****pppppuVar21;
  long lVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ****ppppuVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  undefined8 *******unaff_x19;
  undefined *puVar29;
  long unaff_x20;
  long *plVar30;
  undefined8 *****pppppuVar31;
  long unaff_x21;
  undefined8 uVar32;
  long *unaff_x22;
  undefined8 *******unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long alStack_1c0 [6];
  long alStack_190 [16];
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 ******ppppppuStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [16];
  undefined *apuStack_d0 [3];
  long lStack_b8;
  undefined8 ******appppppuStack_b0 [2];
  undefined8 *******pppppppuStack_90;
  long lStack_88;
  
  puVar19 = PTR_DAT_07806990;
  if ((bRam0000000007e27e32 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806998);
    func_0x03280a18(PTR_DAT_07806990);
    bRam0000000007e27e32 = 1;
  }
  plVar30 = *(long **)(param_1 + 0x20);
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar19);
  puVar19 = (undefined *)0x0;
  func_0x060f4108(lVar11,param_2,0,0);
  if (plVar30 != (long *)0x0) {
    lVar20 = *(long *)PTR_DAT_07806998;
    lVar22 = *(long *)(lVar20 + 0x38);
    if (lVar22 == 0) {
      func_0x03256878(lVar20);
      lVar22 = *(long *)(lVar20 + 0x38);
    }
    lVar20 = *(long *)(lVar22 + 8);
    plVar9 = plVar30;
    if ((*(long *)(lVar20 + 0x38) == 0) &&
       (plVar9 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar20 + 0x38) == 0)) {
      plVar9 = (long *)func_0x03256878(lVar20);
    }
    if ((char)plVar30[10] != '\0') {
      return plVar9;
    }
    uVar32 = **(undefined8 **)(lVar20 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar32 = func_0x057a51c4(uVar32,0);
    lVar22 = 1;
    pppppppuVar17 = (undefined8 *******)0x0;
    lVar20 = func_0x072869d0(plVar30,uVar32,0,1,0);
    if (lVar20 == 0) {
      auVar34 = func_0x03280cac();
      uVar32 = auVar34._8_8_;
      unaff_x22 = auVar34._0_8_;
      lVar11 = tpidr_el0;
      lStack_88 = *(long *)(lVar11 + 0x28);
      puVar13 = *(undefined8 **)(lVar22 + 0x38);
      plVar30 = unaff_x22;
      pppppppuVar18 = pppppppuVar17;
      pppppppuStack_90 = pppppppuVar17;
      if (puVar13 == (undefined8 *)0x0) {
        plVar30 = (long *)func_0x03280a18(PTR_DAT_0774e558);
        puVar13 = *(undefined8 **)(lVar22 + 0x38);
        if (puVar13 == (undefined8 *)0x0) {
          plVar30 = (long *)func_0x03256878(lVar22);
          puVar13 = *(undefined8 **)(lVar22 + 0x38);
        }
      }
      unaff_x23 = (undefined8 *******)(ulong)*(uint *)(puVar13[1] + 0xfc);
      lVar14 = -((long)unaff_x23 + 0xfU & 0x1fffffff0);
      unaff_x24 = (undefined *)((long)&pppppppuStack_90 + lVar14);
      if ((char)unaff_x22[10] == '\0') {
        unaff_x25 = *puVar13;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar10 = func_0x057a51c4(unaff_x25,0);
        lVar20 = func_0x072869d0(unaff_x22,uVar10,uVar32,1,0);
        unaff_x20 = *(long *)(lVar22 + 0x38);
        pppppppuVar2 = pppppppuVar17;
        if (-1 < *(int *)(*(long *)(unaff_x20 + 8) + 0x28)) {
          pppppppuVar2 = &pppppppuStack_90;
        }
        pppppppuVar18 = unaff_x23;
        func_0x072ce970(unaff_x24,pppppppuVar2);
        lVar11 = func_0x03280b94(*(undefined8 *)(unaff_x20 + 8),unaff_x24);
        if (lVar20 != 0) {
          unaff_x30 = 0x3ea52d0;
          register0x00000008 = (BADSPACEBASE *)unaff_x24;
          unaff_x19 = pppppppuVar17;
          unaff_x21 = lVar20;
          goto SUB_072852e4;
        }
        func_0x03280cac();
        uVar32 = 0;
      }
      else {
        unaff_x20 = lVar22;
        if (*(long *)(lVar11 + 0x28) == lStack_88) {
          return plVar30;
        }
      }
      auVar34 = func_0x072ce990();
      lVar11 = auVar34._8_8_;
      *(undefined8 *)((long)appppppuStack_b0 + lVar14) = 0x3ea5304;
      *(undefined8 *)((long)appppppuStack_b0 + lVar14 + 8) = uVar32;
      *(long *)(&stack0xffffffffffffff60 + lVar14) = unaff_x20;
      *(undefined8 ********)(&stack0xffffffffffffff68 + lVar14) = pppppppuVar17;
      ppppppuVar23 = pppppppuVar18[7];
      if (ppppppuVar23 == (undefined8 ******)0x0) {
        func_0x03256878(pppppppuVar18);
        ppppppuVar23 = pppppppuVar18[7];
      }
      pppppuVar21 = ppppppuVar23[1];
      uVar32 = *(undefined8 *)(&stack0xffffffffffffff60 + lVar14);
      uVar10 = *(undefined8 *)(&stack0xffffffffffffff68 + lVar14);
      uVar12 = *(undefined8 *)((long)appppppuStack_b0 + lVar14 + 8);
      *(undefined8 *)((long)apuStack_d0 + lVar14) = *(undefined8 *)((long)appppppuStack_b0 + lVar14)
      ;
      *(undefined **)((long)apuStack_d0 + lVar14 + 0x10) = unaff_x24;
      *(undefined8 ********)((long)&lStack_b8 + lVar14) = unaff_x23;
      *(long **)((long)appppppuStack_b0 + lVar14) = unaff_x22;
      *(undefined8 *)((long)appppppuStack_b0 + lVar14 + 8) = uVar12;
      *(undefined8 *)(&stack0xffffffffffffff60 + lVar14) = uVar32;
      *(undefined8 *)(&stack0xffffffffffffff68 + lVar14) = uVar10;
      ppppuVar24 = pppppuVar21[7];
      lVar20 = lVar11;
      pppppuVar31 = pppppuVar21;
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
      lVar22 = func_0x03280ca0();
      func_0x04053df4(lVar22,pppppuVar21[7][1]);
      if (lVar22 != 0) {
        plVar30 = (long *)(lVar22 + 0x10);
        *plVar30 = lVar11;
        goto SUB_032809c4;
      }
      auVar33 = func_0x03280cac();
      *(undefined8 *)(&stack0xfffffffffffffef0 + lVar14) = 0x3ea5530;
      *(undefined8 *)((long)&stack0xffffffffffffff00 + lVar14) = 0;
      *(undefined8 ********)((long)&plStack_f8 + lVar14) = unaff_x23;
      *(long *)((long)&ppppppuStack_f0 + lVar14) = lVar11;
      *(undefined8 ******)(auStack_e0 + lVar14 + -8) = pppppuVar21;
      *(long *)(auStack_e0 + lVar14) = auVar34._0_8_;
      *(undefined8 *)(auStack_e0 + lVar14 + 8) = 0;
      ppppuVar24 = pppppuVar31[7];
      lVar11 = lVar20;
      pppppuVar21 = pppppuVar31;
      if (ppppuVar24 == (undefined8 ****)0x0) {
        func_0x03280a18(PTR_DAT_07750ac8);
        func_0x03280a18(PTR_DAT_0774e558);
        ppppuVar24 = pppppuVar31[7];
        if (ppppuVar24 == (undefined8 ****)0x0) {
          func_0x03256878(pppppuVar31);
          ppppuVar24 = pppppuVar31[7];
        }
      }
      if ((*(byte *)((long)*ppppuVar24 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar22 = func_0x03280ca0();
      func_0x0404e308(lVar22,pppppuVar31[7][1]);
      if (lVar22 != 0) {
        plVar30 = (long *)(lVar22 + 0x10);
        *plVar30 = lVar20;
        goto SUB_032809c4;
      }
      auVar34 = func_0x03280cac();
      *(undefined8 *)((long)alStack_190 + lVar14 + 0x40) = 0x3ea5644;
      *(undefined8 *)((long)alStack_190 + lVar14 + 0x50) = 0;
      *(undefined8 ********)((long)alStack_190 + lVar14 + 0x58) = unaff_x23;
      *(long *)((long)alStack_190 + lVar14 + 0x60) = lVar20;
      *(undefined8 ******)((long)alStack_190 + lVar14 + 0x68) = pppppuVar31;
      *(long *)((long)alStack_190 + lVar14 + 0x70) = auVar33._0_8_;
      *(long *)((long)alStack_190 + lVar14 + 0x78) = auVar33._8_8_;
      ppppuVar24 = pppppuVar21[7];
      lVar20 = lVar11;
      pppppuVar31 = pppppuVar21;
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
      lVar22 = func_0x03280ca0();
      (*(code *)*pppppuVar21[7][1])();
      if (lVar22 != 0) {
        plVar30 = (long *)(lVar22 + 0x10);
        *plVar30 = lVar11;
        goto SUB_032809c4;
      }
      auVar33 = func_0x03280cac();
      *(undefined8 *)((long)alStack_190 + lVar14) = 0x3ea575c;
      *(undefined8 *)((long)alStack_190 + lVar14 + 0x10) = 0;
      *(undefined8 ********)((long)alStack_190 + lVar14 + 0x18) = unaff_x23;
      *(long *)((long)alStack_190 + lVar14 + 0x20) = lVar11;
      *(undefined8 ******)((long)alStack_190 + lVar14 + 0x28) = pppppuVar21;
      *(long *)((long)alStack_190 + lVar14 + 0x30) = auVar34._0_8_;
      *(long *)((long)alStack_190 + lVar14 + 0x38) = auVar34._8_8_;
      ppppuVar24 = pppppuVar31[7];
      if (ppppuVar24 == (undefined8 ****)0x0) {
        func_0x03280a18(PTR_DAT_07750ac8);
        func_0x03280a18(PTR_DAT_0774e558);
        ppppuVar24 = pppppuVar31[7];
        if (ppppuVar24 == (undefined8 ****)0x0) {
          func_0x03256878(pppppuVar31);
          ppppuVar24 = pppppuVar31[7];
        }
      }
      if ((*(byte *)((long)*ppppuVar24 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      (*(code *)*pppppuVar31[7][1])();
      if (lVar11 != 0) {
        plVar30 = (long *)(lVar11 + 0x10);
        *plVar30 = lVar20;
        goto SUB_032809c4;
      }
      auVar34 = func_0x03280cac();
      lVar11 = auVar34._8_8_;
      plVar30 = auVar34._0_8_;
      *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x10) = 0x3ea5874;
      *(long *)((long)alStack_1c0 + lVar14 + 0x20) = auVar33._0_8_;
      *(long *)((long)alStack_1c0 + lVar14 + 0x28) = auVar33._8_8_;
      plVar9 = *(long **)(lVar11 + 0x38);
      if (plVar9 == (long *)0x0) {
        func_0x03256878(lVar11);
        plVar9 = *(long **)(lVar11 + 0x38);
      }
      lVar11 = *plVar9;
      *(undefined8 *)((long)alStack_1c0 + lVar14) =
           *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x10);
      *(undefined8 ********)((long)alStack_1c0 + lVar14 + 8) = unaff_x23;
      *(long *)((long)alStack_1c0 + lVar14 + 0x10) = lVar20;
      *(undefined8 ******)((long)alStack_1c0 + lVar14 + 0x18) = pppppuVar31;
      *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x20) =
           *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x20);
      *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x28) =
           *(undefined8 *)((long)alStack_1c0 + lVar14 + 0x28);
      plVar9 = plVar30;
      if ((*(long *)(lVar11 + 0x38) == 0) &&
         (plVar9 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar11 + 0x38) == 0)) {
        plVar9 = (long *)func_0x03256878(lVar11);
      }
      puVar19 = PTR_DAT_0774e558;
      if ((char)plVar30[10] != '\0') {
        return plVar9;
      }
      uVar32 = **(undefined8 **)(lVar11 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar32 = func_0x057a51c4(uVar32,0);
      lVar20 = func_0x072869d0(plVar30,uVar32,0,0,0);
      if (lVar20 == 0) {
        return (long *)0x0;
      }
      uVar32 = **(undefined8 **)(lVar11 + 0x38);
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar32 = func_0x057a51c4(uVar32,0);
      lVar22 = func_0x057c1ad4(uVar32,0);
      lVar28 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        lVar28 = func_0x0325681c(lVar28);
      }
      if (lVar22 == 0) {
LAB_03ea5b18:
        lVar11 = 0;
      }
      else {
        lVar11 = func_0x03280b90(lVar22,lVar28);
        if (lVar11 == 0) {
          func_0x03281048(lVar22,lVar28);
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
    lVar22 = 0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
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
    puVar19 = PTR_DAT_07779590;
    if (lVar11 != 0) {
      uVar32 = func_0x057dadc4(lVar11,0);
      puVar29 = *(undefined **)(lVar20 + 0x20);
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar19);
      }
      uVar8 = func_0x0727e0ec(uVar32,puVar29);
      plVar30 = (long *)(ulong)(uVar8 & 1);
      uVar32 = 0x728539c;
      goto SUB_0727dc78;
    }
    func_0x03280cac();
    func_0x03280cac();
    lVar11 = 0;
    while( true ) {
      func_0x03280ca4(lVar11);
      auVar35 = func_0x03280cac();
      uVar32 = auVar35._0_8_;
      if (auVar35._8_4_ != 1) break;
      plVar30 = (long *)func_0x072ce910(uVar32);
      lVar11 = *plVar30;
      func_0x072ce920();
      uVar26 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar13 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_072854e8;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      lVar22 = 0;
      puVar13 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
      plVar30 = (long *)(*(code *)*puVar13)(0x7e34000,puVar13[1]);
      if (lVar11 == 0) {
        return plVar30;
      }
    }
    uVar26 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar13 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_072855b0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    lVar22 = 0;
    puVar13 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
    (*(code *)*puVar13)(0x7e34000,puVar13[1]);
    func_0x03365958(uVar32);
    func_0x03280ca4(0);
    auVar34 = func_0x02f09514();
    puVar19 = PTR_DAT_0785dec8;
    lVar14 = auVar34._8_8_;
    lVar20 = auVar34._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x72855d4;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x24;
    *(undefined8 ********)((long)register0x00000008 + -0x58) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar32;
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
    plVar30 = (long *)func_0x03e0c264(lVar14,*(undefined8 *)puVar19);
    puVar15 = PTR_DAT_0785df00;
    puVar29 = PTR_DAT_0785ded8;
    if (((ulong)plVar30 & 1) == 0) {
LAB_07285770:
      if (lVar14 != 0) {
        if (0 < *(int *)(lVar14 + 0x18)) {
          plVar9 = (long *)0x0;
          do {
            puVar16 = (undefined *)func_0x0414419c(lVar14,plVar9,*(undefined8 *)puVar29);
            unaff_x24 = puVar29;
            if (*(long *)(lVar20 + 0x10) == 0) goto LAB_07285808;
            plVar30 = (long *)func_0x041447fc(*(long *)(lVar20 + 0x10),puVar16,
                                              *(undefined8 *)puVar15);
            puVar19 = puVar16;
            if (((ulong)plVar30 & 1) != 0) {
              if ((puVar16 == (undefined *)0x0) || (lVar11 = *(long *)(puVar16 + 0x18), lVar11 == 0)
                 ) goto LAB_07285808;
              plVar30 = (long *)(**(code **)(lVar11 + 0x18))
                                          (*(undefined8 *)(lVar11 + 0x40),lVar22,
                                           *(undefined8 *)(lVar11 + 0x28));
            }
            uVar8 = (int)plVar9 + 1;
            plVar9 = (long *)(ulong)uVar8;
          } while ((int)uVar8 < *(int *)(lVar14 + 0x18));
        }
        return plVar30;
      }
LAB_07285808:
      func_0x03280cac();
      plVar30 = plVar9;
      puVar15 = puVar19;
LAB_0728580c:
      func_0x03280cb4();
    }
    else {
      if (*(int *)(lVar20 + 0x30) != 2) {
        if (*(int *)(lVar20 + 0x30) != 1) goto LAB_07285770;
        uVar32 = func_0x03280a2c(PTR_DAT_0774e5a0);
        lVar14 = func_0x03280afc(uVar32,1);
        func_0x02f0b18c(lVar22);
        uVar32 = func_0x057dadc4(lVar22,0);
        func_0x02f0b18c(lVar14);
        func_0x02f176b4(lVar14,uVar32);
        func_0x02f0965c(lVar14,0,uVar32);
        uVar32 = func_0x03280a2c(PTR_DAT_0785df08);
        lVar22 = func_0x0727df38(uVar32,lVar14);
        uVar32 = func_0x03280a2c(PTR_DAT_0785df10);
        func_0x03280b7c(lVar22,uVar32);
      }
      plVar30 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
      if ((lVar22 == 0) ||
         (puVar15 = (undefined *)func_0x057dadc4(lVar22,0), plVar9 = plVar30, plVar30 == (long *)0x0
         )) goto LAB_07285808;
      if ((puVar15 == (undefined *)0x0) ||
         (lVar11 = func_0x03280b90(puVar15,*(undefined8 *)(*plVar30 + 0x40)), lVar11 != 0)) {
        if ((int)plVar30[3] != 0) {
          plVar30 = plVar30 + 4;
          *plVar30 = (long)puVar15;
          goto SUB_032809c4;
        }
        goto LAB_0728580c;
      }
    }
    uVar32 = func_0x03280cd0();
    auVar34 = func_0x03280b7c(uVar32,0);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x728581c;
    lVar11 = *(long *)(auVar34._0_8_ + 0x18);
    if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar30 = (long *)(**(code **)(lVar11 + 0x18))
                                  (*(undefined8 *)(lVar11 + 0x40),auVar34._8_8_,
                                   *(undefined8 *)(lVar11 + 0x28));
      return plVar30;
    }
    lVar11 = func_0x03280cac();
    puVar29 = PTR_DAT_0785df18;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x7285840;
    *(undefined **)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar15;
    *(long **)((long)register0x00000008 + -0xa0) = plVar30;
    *(long *)((long)register0x00000008 + -0x98) = lVar20;
    *(long *)((long)register0x00000008 + -0x90) = lVar14;
    *(long *)((long)register0x00000008 + -0x88) = lVar22;
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
    plVar30 = (long *)(ulong)*(byte *)(lVar11 + 0x34);
    uVar32 = 0x72858f0;
SUB_0727dc78:
    if (((ulong)plVar30 & 1) != 0) {
      return plVar30;
    }
    *(undefined8 *)(puVar5 + -0x10) = uVar32;
    *(undefined **)(puVar5 + -8) = puVar29;
    uVar32 = func_0x03280a2c(PTR_DAT_0785dbe8);
    puVar19 = PTR_DAT_0777c990;
    *(undefined8 *)(puVar5 + -0x30) = 0x727dc94;
    *(long *)(puVar5 + -0x28) = lVar20;
    *(long *)(puVar5 + -0x20) = lVar11;
    *(undefined **)(puVar5 + -0x18) = puVar29;
    if ((bRam0000000007e34146 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c990);
      bRam0000000007e34146 = 1;
    }
    plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar19);
    func_0x072c77f8(plVar30,uVar32,0);
    return plVar30;
  }
  auVar34 = func_0x03280cac();
  if ((bRam0000000007e27e33 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e27e33 = 1;
  }
  plVar30 = *(long **)(auVar34._0_8_ + 0xd0);
  if (plVar30 != (long *)0x0) {
    lVar11 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 6) * 0x10 + 0x138);
          goto LAB_0672b0c8;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07806898,6);
LAB_0672b0c8:
                    /* WARNING: Could not recover jumptable at 0x0672b0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar13)(plVar30,auVar34._8_8_ & 0xffffffff,0,puVar13[1]);
    return plVar30;
  }
  auVar34 = func_0x03280cac();
  uVar32 = 0x7e27000;
  if ((bRam0000000007e27e34 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e27e34 = 1;
  }
  plVar30 = *(long **)(auVar34._0_8_ + 0xd0);
  if (plVar30 != (long *)0x0) {
    lVar11 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 7) * 0x10 + 0x138);
          goto LAB_0672b178;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07806898,7);
LAB_0672b178:
                    /* WARNING: Could not recover jumptable at 0x0672b190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar13)(plVar30,auVar34._8_8_ & 0xffffffff,0,puVar13[1]);
    return plVar30;
  }
  lVar11 = func_0x03280cac();
  appppppuStack_b0[0] =
       (undefined8 ******)Merger_Game_ViewModel_InventoryItemsViewModel__TryBuyInventorySlot;
  pppppppuStack_90 = (undefined8 *******)0x7e27000;
  lStack_88 = 0x7e27000;
  if ((bRam0000000007e27e35 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0774e4d8);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_07806898);
    func_0x03280a18(PTR_DAT_07771ec0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07800c90);
    func_0x03280a18(PTR_DAT_078069a0);
    func_0x03280a18(PTR_DAT_078069a8);
    func_0x03280a18(PTR_DAT_078069b0);
    func_0x03280a18(PTR_DAT_0776fb48);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e27e35 = 1;
  }
  puVar29 = PTR_DAT_07806898;
  plVar30 = *(long **)(lVar11 + 0xd0);
  uVar10 = 0;
  apuStack_d0[0] = (undefined *)0x7e27000;
  if (plVar30 == (long *)0x0) {
LAB_0672b700:
    func_0x03280cac();
  }
  else {
    lVar20 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
          puVar13 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_0672b2b8;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar19 = (undefined *)0x0;
    puVar13 = (undefined8 *)func_0x03256b10(plVar30);
LAB_0672b2b8:
    uVar6 = (*(code *)*puVar13)(plVar30,puVar13[1]);
    puVar15 = PTR_DAT_07771f40;
    plVar30 = *(long **)(lVar11 + 0xd0);
    uVar10 = 0;
    if (plVar30 == (long *)0x0) goto LAB_0672b700;
    lVar20 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar29) {
          puVar13 = (undefined8 *)(lVar20 + (long)(*piVar27 + 4) * 0x10 + 0x138);
          goto LAB_0672b328;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar29,4);
LAB_0672b328:
    uVar26 = (*(code *)*puVar13)(plVar30,puVar13[1]);
    puVar16 = (undefined *)(uVar26 & 0xffffffff);
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar15);
    puVar19 = puVar16;
    func_0x06b21870(uVar10,uVar6,puVar16,0,0);
    plVar30 = *(long **)(lVar11 + 0xd0);
    uVar32 = 0;
    apuStack_d0[0] = puVar16;
    if (plVar30 == (long *)0x0) goto LAB_0672b700;
    lVar20 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar29) {
          puVar13 = (undefined8 *)(lVar20 + (long)(*piVar27 + 2) * 0x10 + 0x138);
          goto LAB_0672b3b4;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar29,2);
LAB_0672b3b4:
    iVar7 = (*(code *)*puVar13)(plVar30,puVar13[1]);
    lVar20 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar29) {
          puVar13 = (undefined8 *)(lVar20 + (long)(*piVar27 + 6) * 0x10 + 0x138);
          goto LAB_0672b414;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar29,6);
LAB_0672b414:
    puVar19 = PTR_DAT_078069a0;
    puVar29 = PTR_DAT_0774e758;
    plVar30 = (long *)(*(code *)*puVar13)(plVar30,iVar7 + -1,0,puVar13[1]);
    uVar32 = 0;
    if (plVar30 != (long *)0x0) {
      lVar20 = *plVar30;
      uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
            puVar13 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_0672b494;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07779820,0);
LAB_0672b494:
      uVar32 = (*(code *)*puVar13)(plVar30,puVar13[1]);
    }
    puVar15 = *(undefined **)(lVar11 + 0xd0);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar29);
    func_0x056ed730(uVar12,lVar11,*(undefined8 *)puVar19,0);
    puVar19 = puVar15;
    uVar26 = func_0x067266a8(lVar11,uVar10,puVar15,uVar32,uVar12);
    if ((uVar26 & 1) != 0) {
      uVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e4d8);
      func_0x057ced5c(uVar32,0);
      if (*(int *)(*(long *)PTR_DAT_0776fb48 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      pppppppuVar17 = pppppppuStack_90;
      puVar19 = PTR_DAT_0776f8e0;
      ppppppuVar23 = pppppppuStack_90;
      pppppppuStack_90 = (undefined8 *******)appppppuStack_b0[0];
      if ((bRam0000000007e2945c & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776f248,0);
        func_0x03280a18(PTR_DAT_0776f8e0);
        bRam0000000007e2945c = 1;
      }
      plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar19);
      func_0x05ac10bc(plVar30,0);
      if (plVar30 != (long *)0x0) {
        lVar11 = *plVar30;
        uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 4) * 0x10 + 0x138);
              goto LAB_06955084;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f248,4);
LAB_06955084:
        (*(code *)*puVar13)(plVar30,uVar32,puVar13[1]);
        return plVar30;
      }
      func_0x03280cac();
      puVar29 = PTR_DAT_0776fb48;
      appppppuStack_b0[0] = (undefined8 ******)0x69550a8;
      if ((bRam0000000007e2945d & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776f248);
        func_0x03280a18(PTR_DAT_07771ec0);
        func_0x03280a18(PTR_DAT_0776fb48);
        bRam0000000007e2945d = 1;
      }
      lVar11 = *(long *)puVar29;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar29;
      }
      plVar30 = (long *)**(undefined8 **)(lVar11 + 0xb8);
      if (plVar30 == (long *)0x0) {
LAB_06955224:
        auVar34 = func_0x03280cac();
        plVar9 = auVar34._8_8_;
        plVar30 = auVar34._0_8_;
        apuStack_d0[0] = (undefined *)0x6955228;
        apuStack_d0[1] = puVar19;
        apuStack_d0[2] = puVar29;
        lStack_b8 = 0;
        if ((bRam0000000007e2945e & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776f248);
          bRam0000000007e2945e = 1;
        }
        if (plVar9 != (long *)0x0) {
          lVar11 = *plVar9;
          uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 10) * 0x10 + 0x138);
                goto LAB_069552b4;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0776f248,10);
LAB_069552b4:
          iVar7 = (*(code *)*puVar13)(plVar9,puVar13[1]);
          if (iVar7 == 2) {
            if (plVar30 != (long *)0x0) {
              (**(code **)(*plVar30 + 0x278))(plVar30,plVar9,*(undefined8 *)(*plVar30 + 0x280));
              return (long *)0x1;
            }
            func_0x03280cac();
            puVar19 = PTR_DAT_07817470;
            ppppppuStack_f0 = pppppppuVar17;
            uStack_e8 = 0x7e29000;
            auStack_e0 = auVar34;
            if ((bRam0000000007e2945f & 1) == 0) {
              func_0x03280a18(PTR_DAT_07771708);
              func_0x03280a18(PTR_DAT_0777da58);
              func_0x03280a18(PTR_DAT_0776f8e0);
              func_0x03280a18(PTR_DAT_07817478);
              func_0x03280a18(PTR_DAT_07817470);
              bRam0000000007e2945f = 1;
            }
            plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar19);
            return plVar30;
          }
        }
        return (long *)0x0;
      }
      lVar11 = *plVar30;
      uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 10) * 0x10 + 0x138);
            goto LAB_06955168;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f248,10);
LAB_06955168:
      iVar7 = (*(code *)*puVar13)(plVar30,puVar13[1]);
      if (iVar7 != 0) {
        lVar11 = *(long *)puVar29;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar11 = *(long *)puVar29;
        }
        plVar30 = (long *)**(undefined8 **)(lVar11 + 0xb8);
        if (plVar30 == (long *)0x0) goto LAB_06955224;
        lVar11 = *plVar30;
        uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07771ec0) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_069551f0;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07771ec0,1);
LAB_069551f0:
        (*(code *)*puVar13)(plVar30,puVar13[1]);
      }
      lVar11 = *(long *)puVar29;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar29;
      }
      return (long *)**(undefined8 **)(lVar11 + 0xb8);
    }
    plVar30 = *(long **)(lVar11 + 0xd8);
    uVar32 = 0;
    apuStack_d0[0] = puVar15;
    if (plVar30 == (long *)0x0) goto LAB_0672b700;
    lVar20 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07800c90) {
          puVar13 = (undefined8 *)(lVar20 + (long)(*piVar27 + 3) * 0x10 + 0x138);
          goto LAB_0672b590;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07800c90,3);
LAB_0672b590:
    plVar30 = (long *)(*(code *)*puVar13)(plVar30,uVar10,puVar13[1]);
    uVar32 = func_0x03280ca0(*(undefined8 *)puVar29);
    puVar19 = *(undefined **)PTR_DAT_078069a8;
    func_0x056ed730(uVar32,lVar11,puVar19,0);
    puVar29 = PTR_DAT_07771ec0;
    uVar10 = 0;
    if (plVar30 == (long *)0x0) goto LAB_0672b700;
    lVar20 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07771ec0) {
          puVar13 = (undefined8 *)(lVar20 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_0672b624;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07771ec0,0);
LAB_0672b624:
    plVar30 = (long *)(*(code *)*puVar13)(plVar30,uVar32,puVar13[1]);
    uVar32 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
    puVar19 = *(undefined **)PTR_DAT_078069b0;
    func_0x054221d4(uVar32,lVar11,puVar19,0);
    uVar10 = 0;
    apuStack_d0[0] = puVar29;
    if (plVar30 == (long *)0x0) goto LAB_0672b700;
    lVar11 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          goto LAB_0672b6c4;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f248,1);
LAB_0672b6c4:
    puVar19 = (undefined *)puVar13[1];
    lVar11 = (*(code *)*puVar13)(plVar30,uVar32);
    if (lVar11 == 0) {
      return (long *)0x0;
    }
    uVar10 = *(undefined8 *)puVar29;
    plVar30 = (long *)func_0x03280b90(lVar11,uVar10);
    if (plVar30 != (long *)0x0) {
      return plVar30;
    }
  }
  auVar34 = func_0x03281048(lVar11,uVar10);
  auStack_e0._0_8_ = Merger_Game_ViewModel_InventoryItemsViewModel__GetItemAsset;
  uVar26 = (ulong)puVar19 & 0xffffffff;
  pppppuVar31 = (undefined8 *****)(auVar34._8_8_ & 0xffffffff);
  apuStack_d0[1] = (undefined *)uVar32;
  apuStack_d0[2] = (undefined *)uVar10;
  lStack_b8 = lVar11;
  if ((bRam0000000007e27e36 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e27e36 = 1;
  }
  plVar30 = *(long **)(auVar34._0_8_ + 0xd0);
  if (plVar30 != (long *)0x0) {
    lVar11 = *plVar30;
    uVar25 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar27 + 8) * 0x10 + 0x138);
          goto LAB_0672b7a8;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07806898,8);
LAB_0672b7a8:
                    /* WARNING: Could not recover jumptable at 0x0672b7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar13)(plVar30,pppppuVar31,uVar26,puVar13[1]);
    return plVar30;
  }
  lVar11 = func_0x03280cac();
  puVar29 = PTR_DAT_07828a38;
  puVar19 = PTR_DAT_07828a30;
  uStack_100 = 0x7e27000;
  plStack_f8 = plVar30;
  ppppppuStack_f0 = (undefined8 ******)pppppuVar31;
  uStack_e8 = uVar26;
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  lVar20 = func_0x03280ca0(*(undefined8 *)puVar19);
  func_0x053bfe40(lVar20,*(undefined8 *)puVar29);
  plVar30 = (long *)(lVar11 + 0x60);
  *plVar30 = lVar20;
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
  return plVar30;
}

