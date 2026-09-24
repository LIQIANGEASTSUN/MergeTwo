/* Ghidra 12.1.2 native pseudocode; RVA 0x67089A0; Merger.Game.Views.Inventory.InventoryItemsView.TryRemoveItem; status ok */


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
/* WARNING: Possible PIC construction at 0x068081e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06808220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06f537c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06808224) */
/* WARNING: Removing unreachable block (ram,0x0680822c) */
/* WARNING: Removing unreachable block (ram,0x06808240) */
/* WARNING: Removing unreachable block (ram,0x06808254) */
/* WARNING: Removing unreachable block (ram,0x068081e4) */
/* WARNING: Removing unreachable block (ram,0x06808218) */
/* WARNING: Removing unreachable block (ram,0x06a4b4a0) */
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
/* WARNING: Removing unreachable block (ram,0x06f537c8) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

long * Merger_Game_Views_Inventory_InventoryItemsView__TryRemoveItem
                 (undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar11;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  undefined8 unaff_x19;
  ulong uVar28;
  undefined *puVar29;
  long *plVar30;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar31;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = param_1;
  do {
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    uVar31 = 0x7e28000;
    uVar28 = auVar33._8_8_ & 0xffffffff;
    if ((bRam0000000007e287b0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780c520);
      bRam0000000007e287b0 = 1;
    }
    puVar21 = PTR_DAT_07806990;
    lVar17 = *(long *)(auVar33._0_8_ + 0x28);
    if (lVar17 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x30) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if ((bRam0000000007e27e32 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07806998,uVar28,0);
        func_0x03280a18(PTR_DAT_07806990);
        bRam0000000007e27e32 = 1;
      }
      plVar30 = *(long **)(lVar17 + 0x20);
      lVar17 = func_0x03280ca0(*(undefined8 *)puVar21);
      puVar21 = (undefined *)0x0;
      func_0x060f4108(lVar17,uVar28,0,0);
      if (plVar30 == (long *)0x0) {
        auVar33 = func_0x03280cac();
        *(code **)((long)register0x00000008 + -0x50) =
             Merger_Game_ViewModel_InventoryItemsViewModel__GetItem;
        *(long *)((long)register0x00000008 + -0x48) = lVar17;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(ulong *)((long)register0x00000008 + -0x38) = uVar28;
        uVar28 = auVar33._8_8_ & 0xffffffff;
        if ((bRam0000000007e27e33 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07806898);
          bRam0000000007e27e33 = 1;
        }
        plVar30 = *(long **)(auVar33._0_8_ + 0xd0);
        if (plVar30 != (long *)0x0) {
          lVar17 = *plVar30;
          uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar26 == 0) goto LAB_0672b0a8;
          piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          break;
        }
        auVar33 = func_0x03280cac();
        *(code **)((long)register0x00000008 + -0x70) =
             Merger_Game_ViewModel_InventoryItemsViewModel__GetItemUUID;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0x7e27000;
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        *(ulong *)((long)register0x00000008 + -0x58) = uVar28;
        uVar31 = 0x7e27000;
        uVar28 = auVar33._8_8_ & 0xffffffff;
        if ((bRam0000000007e27e34 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07806898);
          bRam0000000007e27e34 = 1;
        }
        plVar30 = *(long **)(auVar33._0_8_ + 0xd0);
        if (plVar30 != (long *)0x0) {
          lVar17 = *plVar30;
          uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar26 == 0) goto LAB_0672b158;
          piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_0672b140;
        }
        lVar17 = func_0x03280cac();
        *(code **)((long)register0x00000008 + -0xb0) =
             Merger_Game_ViewModel_InventoryItemsViewModel__TryBuyInventorySlot;
        *(undefined **)((long)register0x00000008 + -0xa0) = unaff_x24;
        *(undefined **)((long)register0x00000008 + -0x98) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0x7e27000;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x7e27000;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(ulong *)((long)register0x00000008 + -0x78) = uVar28;
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
        puVar19 = PTR_DAT_07806898;
        plVar30 = *(long **)(lVar17 + 0xd0);
        uVar13 = 0;
        puVar29 = (undefined *)0x7e27000;
        if (plVar30 == (long *)0x0) goto LAB_0672b700;
        lVar22 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar28 == 0) goto LAB_0672b29c;
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_0672b284;
      }
      lVar22 = *(long *)PTR_DAT_07806998;
      uVar31 = *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar25 = *(long *)(lVar22 + 0x38);
      if (lVar25 == 0) {
        func_0x03256878(lVar22);
        lVar25 = *(long *)(lVar22 + 0x38);
      }
      lVar22 = *(long *)(lVar25 + 8);
      *(undefined8 *)((long)register0x00000008 + -0x30) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      plVar12 = plVar30;
      if ((*(long *)(lVar22 + 0x38) == 0) &&
         (plVar12 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar22 + 0x38) == 0)) {
        plVar12 = (long *)func_0x03256878(lVar22);
      }
      if ((char)plVar30[10] != '\0') {
        return plVar12;
      }
      uVar31 = **(undefined8 **)(lVar22 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar13 = func_0x057a51c4(uVar31,0);
      lVar22 = 1;
      puVar21 = (undefined *)0x0;
      lVar25 = func_0x072869d0(plVar30,uVar13,0,1,0);
      if (lVar25 == 0) {
        auVar33 = func_0x03280cac();
        uVar13 = auVar33._8_8_;
        plVar12 = auVar33._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3ea51c0;
        *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x25;
        *(undefined **)((long)register0x00000008 + -0x60) = unaff_x24;
        *(undefined **)((long)register0x00000008 + -0x58) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar31;
        *(long **)((long)register0x00000008 + -0x48) = plVar30;
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(long *)((long)register0x00000008 + -0x38) = lVar17;
        lVar17 = tpidr_el0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar17 + 0x28);
        *(undefined **)((long)register0x00000008 + -0x90) = puVar21;
        puVar18 = *(undefined8 **)(lVar22 + 0x38);
        plVar30 = plVar12;
        puVar19 = puVar21;
        if (puVar18 == (undefined8 *)0x0) {
          plVar30 = (long *)func_0x03280a18(PTR_DAT_0774e558);
          puVar18 = *(undefined8 **)(lVar22 + 0x38);
          if (puVar18 == (undefined8 *)0x0) {
            plVar30 = (long *)func_0x03256878(lVar22);
            puVar18 = *(undefined8 **)(lVar22 + 0x38);
          }
        }
        unaff_x23 = (undefined *)(ulong)*(uint *)(puVar18[1] + 0xfc);
        unaff_x24 = (undefined *)
                    ((long)register0x00000008 + (-0x90 - ((ulong)(unaff_x23 + 0xf) & 0x1fffffff0)));
        if ((char)plVar12[10] == '\0') {
          unaff_x25 = *puVar18;
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar31 = func_0x057a51c4(unaff_x25,0);
          lVar25 = func_0x072869d0(plVar12,uVar31,uVar13,1,0);
          lVar22 = *(long *)(lVar22 + 0x38);
          puVar29 = puVar21;
          if (-1 < *(int *)(*(long *)(lVar22 + 8) + 0x28)) {
            puVar29 = (undefined *)((long)register0x00000008 + -0x90);
          }
          puVar19 = unaff_x23;
          func_0x072ce970(unaff_x24,puVar29);
          lVar17 = func_0x03280b94(*(undefined8 *)(lVar22 + 8),unaff_x24);
          if (lVar25 != 0) {
            uVar31 = 0x3ea52d0;
            puVar6 = unaff_x24;
            lVar24 = lVar25;
            goto SUB_072852e4;
          }
          func_0x03280cac();
          uVar13 = 0;
        }
        else if (*(long *)(lVar17 + 0x28) == *(long *)((long)register0x00000008 + -0x88)) {
          return plVar30;
        }
        auVar33 = func_0x072ce990();
        lVar17 = auVar33._8_8_;
        *(undefined8 *)(unaff_x24 + -0x20) = 0x3ea5304;
        *(undefined8 *)(unaff_x24 + -0x18) = uVar13;
        *(long *)(unaff_x24 + -0x10) = lVar22;
        *(undefined **)(unaff_x24 + -8) = puVar21;
        lVar22 = *(long *)(puVar19 + 0x38);
        if (lVar22 == 0) {
          func_0x03256878(puVar19);
          lVar22 = *(long *)(puVar19 + 0x38);
        }
        lVar24 = *(long *)(lVar22 + 8);
        *(undefined8 *)(unaff_x24 + -0x40) = *(undefined8 *)(unaff_x24 + -0x20);
        *(undefined **)(unaff_x24 + -0x30) = unaff_x24;
        *(undefined **)(unaff_x24 + -0x28) = unaff_x23;
        *(long **)(unaff_x24 + -0x20) = plVar12;
        *(undefined8 *)(unaff_x24 + -0x18) = *(undefined8 *)(unaff_x24 + -0x18);
        *(undefined8 *)(unaff_x24 + -0x10) = *(undefined8 *)(unaff_x24 + -0x10);
        *(undefined8 *)(unaff_x24 + -8) = *(undefined8 *)(unaff_x24 + -8);
        plVar30 = *(long **)(lVar24 + 0x38);
        lVar22 = lVar17;
        lVar25 = lVar24;
        if (plVar30 == (long *)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          plVar30 = *(long **)(lVar24 + 0x38);
          if (plVar30 == (long *)0x0) {
            func_0x03256878(lVar24);
            plVar30 = *(long **)(lVar24 + 0x38);
          }
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar23 = func_0x03280ca0();
        func_0x04053df4(lVar23,*(undefined8 *)(*(long *)(lVar24 + 0x38) + 8));
        if (lVar23 != 0) {
          plVar30 = (long *)(lVar23 + 0x10);
          *plVar30 = lVar17;
          goto SUB_032809c4;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(unaff_x24 + -0x80) = 0x3ea5530;
        *(undefined8 *)(unaff_x24 + -0x70) = 0;
        *(undefined **)(unaff_x24 + -0x68) = unaff_x23;
        *(long *)(unaff_x24 + -0x60) = lVar17;
        *(long *)(unaff_x24 + -0x58) = lVar24;
        *(long *)(unaff_x24 + -0x50) = auVar33._0_8_;
        *(undefined8 *)(unaff_x24 + -0x48) = 0;
        plVar30 = *(long **)(lVar25 + 0x38);
        lVar17 = lVar22;
        lVar24 = lVar25;
        if (plVar30 == (long *)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          plVar30 = *(long **)(lVar25 + 0x38);
          if (plVar30 == (long *)0x0) {
            func_0x03256878(lVar25);
            plVar30 = *(long **)(lVar25 + 0x38);
          }
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar23 = func_0x03280ca0();
        func_0x0404e308(lVar23,*(undefined8 *)(*(long *)(lVar25 + 0x38) + 8));
        if (lVar23 != 0) {
          plVar30 = (long *)(lVar23 + 0x10);
          *plVar30 = lVar22;
          goto SUB_032809c4;
        }
        auVar33 = func_0x03280cac();
        *(undefined8 *)(unaff_x24 + -0xc0) = 0x3ea5644;
        *(undefined8 *)(unaff_x24 + -0xb0) = 0;
        *(undefined **)(unaff_x24 + -0xa8) = unaff_x23;
        *(long *)(unaff_x24 + -0xa0) = lVar22;
        *(long *)(unaff_x24 + -0x98) = lVar25;
        *(undefined1 (*) [16])(unaff_x24 + -0x90) = auVar32;
        plVar30 = *(long **)(lVar24 + 0x38);
        lVar22 = lVar17;
        lVar25 = lVar24;
        if (plVar30 == (long *)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          plVar30 = *(long **)(lVar24 + 0x38);
          if (plVar30 == (long *)0x0) {
            func_0x03256878(lVar24);
            plVar30 = *(long **)(lVar24 + 0x38);
          }
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar23 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x38) + 8))();
        if (lVar23 != 0) {
          plVar30 = (long *)(lVar23 + 0x10);
          *plVar30 = lVar17;
          goto SUB_032809c4;
        }
        auVar32 = func_0x03280cac();
        *(undefined8 *)(unaff_x24 + -0x100) = 0x3ea575c;
        *(undefined8 *)(unaff_x24 + -0xf0) = 0;
        *(undefined **)(unaff_x24 + -0xe8) = unaff_x23;
        *(long *)(unaff_x24 + -0xe0) = lVar17;
        *(long *)(unaff_x24 + -0xd8) = lVar24;
        *(undefined1 (*) [16])(unaff_x24 + -0xd0) = auVar33;
        plVar30 = *(long **)(lVar25 + 0x38);
        if (plVar30 == (long *)0x0) {
          func_0x03280a18(PTR_DAT_07750ac8);
          func_0x03280a18(PTR_DAT_0774e558);
          plVar30 = *(long **)(lVar25 + 0x38);
          if (plVar30 == (long *)0x0) {
            func_0x03256878(lVar25);
            plVar30 = *(long **)(lVar25 + 0x38);
          }
        }
        if ((*(byte *)(*plVar30 + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar17 = func_0x03280ca0();
        (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 8))();
        if (lVar17 != 0) {
          plVar30 = (long *)(lVar17 + 0x10);
          *plVar30 = lVar22;
          goto SUB_032809c4;
        }
        auVar33 = func_0x03280cac();
        lVar17 = auVar33._8_8_;
        plVar30 = auVar33._0_8_;
        *(undefined8 *)(unaff_x24 + -0x120) = 0x3ea5874;
        *(undefined1 (*) [16])(unaff_x24 + -0x110) = auVar32;
        plVar12 = *(long **)(lVar17 + 0x38);
        if (plVar12 == (long *)0x0) {
          func_0x03256878(lVar17);
          plVar12 = *(long **)(lVar17 + 0x38);
        }
        lVar17 = *plVar12;
        *(undefined8 *)(unaff_x24 + -0x130) = *(undefined8 *)(unaff_x24 + -0x120);
        *(undefined **)(unaff_x24 + -0x128) = unaff_x23;
        *(long *)(unaff_x24 + -0x120) = lVar22;
        *(long *)(unaff_x24 + -0x118) = lVar25;
        *(undefined8 *)(unaff_x24 + -0x110) = *(undefined8 *)(unaff_x24 + -0x110);
        *(undefined8 *)(unaff_x24 + -0x108) = *(undefined8 *)(unaff_x24 + -0x108);
        plVar12 = plVar30;
        if ((*(long *)(lVar17 + 0x38) == 0) &&
           (plVar12 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar17 + 0x38) == 0)) {
          plVar12 = (long *)func_0x03256878(lVar17);
        }
        puVar21 = PTR_DAT_0774e558;
        if ((char)plVar30[10] != '\0') {
          return plVar12;
        }
        uVar31 = **(undefined8 **)(lVar17 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar31 = func_0x057a51c4(uVar31,0);
        lVar25 = func_0x072869d0(plVar30,uVar31,0,0,0);
        if (lVar25 == 0) {
          return (long *)0x0;
        }
        uVar31 = **(undefined8 **)(lVar17 + 0x38);
        if (*(int *)(*(long *)puVar21 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar31 = func_0x057a51c4(uVar31,0);
        lVar22 = func_0x057c1ad4(uVar31,0);
        lVar24 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = func_0x0325681c(lVar24);
        }
        if (lVar22 == 0) {
LAB_03ea5b18:
          lVar17 = 0;
        }
        else {
          lVar17 = func_0x03280b90(lVar22,lVar24);
          if (lVar17 == 0) {
            func_0x03281048(lVar22,lVar24);
            goto LAB_03ea5b18;
          }
        }
        lVar22 = *(long *)(unaff_x24 + -0x110);
        puVar21 = *(undefined **)(unaff_x24 + -0x108);
        plVar12 = *(long **)(unaff_x24 + -0x120);
        lVar24 = *(long *)(unaff_x24 + -0x118);
        puVar6 = unaff_x24 + -0x100;
        uVar31 = *(undefined8 *)(unaff_x24 + -0x130);
        unaff_x23 = *(undefined **)(unaff_x24 + -0x128);
        unaff_x24 = (undefined *)0x0;
      }
      else {
        lVar22 = *(long *)((long)register0x00000008 + -0x10);
        puVar21 = *(undefined **)((long)register0x00000008 + -8);
        plVar12 = *(long **)((long)register0x00000008 + -0x20);
        uVar31 = *(undefined8 *)((long)register0x00000008 + -0x30);
        puVar6 = (undefined1 *)register0x00000008;
        lVar24 = *(long *)((long)register0x00000008 + -0x18);
      }
SUB_072852e4:
      lVar23 = 0;
      puVar7 = puVar6 + -0x30;
      *(undefined8 *)(puVar6 + -0x30) = uVar31;
      *(long **)(puVar6 + -0x20) = plVar12;
      *(long *)(puVar6 + -0x18) = lVar24;
      *(long *)(puVar6 + -0x10) = lVar22;
      *(undefined **)(puVar6 + -8) = puVar21;
      if ((bRam0000000007e3419a & 1) == 0) {
        func_0x03280a18(PTR_DAT_0785dee8);
        func_0x03280a18(PTR_DAT_0785def0);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_0785def8);
        func_0x03280a18(PTR_DAT_07751038);
        func_0x03280a18(PTR_DAT_07779590);
        bRam0000000007e3419a = 1;
      }
      puVar21 = PTR_DAT_07779590;
      if (lVar17 == 0) {
        func_0x03280cac();
        func_0x03280cac();
        lVar17 = 0;
        while( true ) {
          func_0x03280ca4(lVar17);
          auVar34 = func_0x03280cac();
          uVar31 = auVar34._0_8_;
          if (auVar34._8_4_ != 1) break;
          plVar30 = (long *)func_0x072ce910(uVar31);
          lVar17 = *plVar30;
          func_0x072ce920();
          uVar28 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
          if (uVar28 != 0) {
            piVar27 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar18 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_072854e8;
              }
              uVar28 = uVar28 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar28 != 0);
          }
          lVar23 = 0;
          puVar18 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
          plVar30 = (long *)(*(code *)*puVar18)(0x7e34000,puVar18[1]);
          if (lVar17 == 0) {
            return plVar30;
          }
        }
        uVar28 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
        if (uVar28 == 0) {
LAB_07285594:
          lVar23 = 0;
          puVar18 = (undefined8 *)func_0x03256b10(0x7e34000);
        }
        else {
          piVar27 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
          while (*(long *)(piVar27 + -2) != *(long *)PTR_DAT_0774e8c8) {
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
            if (uVar28 == 0) goto LAB_07285594;
          }
          puVar18 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar27 * 0x10 + 0x138);
        }
        (*(code *)*puVar18)(0x7e34000,puVar18[1]);
        func_0x03365958(uVar31);
        func_0x03280ca4(0);
        auVar33 = func_0x02f09514();
        puVar21 = PTR_DAT_0785dec8;
        lVar25 = auVar33._8_8_;
        lVar22 = auVar33._0_8_;
        *(undefined8 *)(puVar6 + -0x70) = 0x72855d4;
        *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
        *(undefined **)(puVar6 + -0x60) = unaff_x24;
        *(undefined **)(puVar6 + -0x58) = unaff_x23;
        *(long **)(puVar6 + -0x50) = plVar12;
        *(undefined8 *)(puVar6 + -0x48) = uVar31;
        *(undefined8 *)(puVar6 + -0x40) = 0;
        *(undefined8 *)(puVar6 + -0x38) = 0x7e34000;
        plVar12 = (long *)0x7e34000;
        if ((bRam0000000007e3419b & 1) == 0) {
          func_0x03280a18(PTR_DAT_0785dec8);
          func_0x03280a18(PTR_DAT_0785df00);
          func_0x03280a18(PTR_DAT_0785ded0);
          func_0x03280a18(PTR_DAT_0785ded8);
          func_0x03280a18(PTR_DAT_0774e5a0);
          func_0x03280a18(PTR_DAT_0785df08);
          bRam0000000007e3419b = 1;
        }
        plVar30 = (long *)func_0x03e0c264(lVar25,*(undefined8 *)puVar21);
        puVar29 = PTR_DAT_0785df00;
        puVar19 = PTR_DAT_0785ded8;
        if (((ulong)plVar30 & 1) == 0) {
LAB_07285770:
          if (lVar25 != 0) {
            if (*(int *)(lVar25 + 0x18) < 1) {
              return plVar30;
            }
            plVar12 = (long *)0x0;
            while( true ) {
              puVar20 = (undefined *)func_0x0414419c(lVar25,plVar12,*(undefined8 *)puVar19);
              unaff_x24 = puVar19;
              if (*(long *)(lVar22 + 0x10) == 0) break;
              plVar30 = (long *)func_0x041447fc(*(long *)(lVar22 + 0x10),puVar20,
                                                *(undefined8 *)puVar29);
              puVar21 = puVar20;
              if (((ulong)plVar30 & 1) != 0) {
                if ((puVar20 == (undefined *)0x0) ||
                   (lVar17 = *(long *)(puVar20 + 0x18), lVar17 == 0)) break;
                plVar30 = (long *)(**(code **)(lVar17 + 0x18))
                                            (*(undefined8 *)(lVar17 + 0x40),lVar23,
                                             *(undefined8 *)(lVar17 + 0x28));
              }
              uVar11 = (int)plVar12 + 1;
              plVar12 = (long *)(ulong)uVar11;
              if (*(int *)(lVar25 + 0x18) <= (int)uVar11) {
                return plVar30;
              }
            }
          }
LAB_07285808:
          func_0x03280cac();
          plVar30 = plVar12;
          puVar19 = puVar21;
LAB_0728580c:
          func_0x03280cb4();
        }
        else {
          if (*(int *)(lVar22 + 0x30) != 2) {
            if (*(int *)(lVar22 + 0x30) != 1) goto LAB_07285770;
            uVar31 = func_0x03280a2c(PTR_DAT_0774e5a0);
            lVar25 = func_0x03280afc(uVar31,1);
            func_0x02f0b18c(lVar23);
            uVar31 = func_0x057dadc4(lVar23,0);
            func_0x02f0b18c(lVar25);
            func_0x02f176b4(lVar25,uVar31);
            func_0x02f0965c(lVar25,0,uVar31);
            uVar31 = func_0x03280a2c(PTR_DAT_0785df08);
            lVar23 = func_0x0727df38(uVar31,lVar25);
            uVar31 = func_0x03280a2c(PTR_DAT_0785df10);
            func_0x03280b7c(lVar23,uVar31);
          }
          plVar30 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
          if ((lVar23 == 0) ||
             (puVar19 = (undefined *)func_0x057dadc4(lVar23,0), plVar12 = plVar30,
             plVar30 == (long *)0x0)) goto LAB_07285808;
          if ((puVar19 == (undefined *)0x0) ||
             (lVar17 = func_0x03280b90(puVar19,*(undefined8 *)(*plVar30 + 0x40)), lVar17 != 0)) {
            if ((int)plVar30[3] != 0) {
              plVar30 = plVar30 + 4;
              *plVar30 = (long)puVar19;
              goto SUB_032809c4;
            }
            goto LAB_0728580c;
          }
        }
        uVar31 = func_0x03280cd0();
        auVar33 = func_0x03280b7c(uVar31,0);
        *(undefined8 *)(puVar6 + -0x80) = 0x728581c;
        lVar17 = *(long *)(auVar33._0_8_ + 0x18);
        if (lVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar30 = (long *)(**(code **)(lVar17 + 0x18))
                                      (*(undefined8 *)(lVar17 + 0x40),auVar33._8_8_,
                                       *(undefined8 *)(lVar17 + 0x28));
          return plVar30;
        }
        lVar17 = func_0x03280cac();
        puVar29 = PTR_DAT_0785df18;
        puVar7 = puVar6 + -0xc0;
        *(undefined8 *)(puVar6 + -0xc0) = 0x7285840;
        *(undefined **)(puVar6 + -0xb0) = unaff_x24;
        *(undefined **)(puVar6 + -0xa8) = puVar19;
        *(long **)(puVar6 + -0xa0) = plVar30;
        *(long *)(puVar6 + -0x98) = lVar22;
        *(long *)(puVar6 + -0x90) = lVar25;
        *(long *)(puVar6 + -0x88) = lVar23;
        lVar25 = 0x7e34000;
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
        plVar30 = (long *)(ulong)*(byte *)(lVar17 + 0x34);
        uVar31 = 0x72858f0;
      }
      else {
        uVar31 = func_0x057dadc4(lVar17,0);
        puVar29 = *(undefined **)(lVar25 + 0x20);
        if (*(int *)(*(long *)puVar21 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar21);
        }
        uVar11 = func_0x0727e0ec(uVar31,puVar29);
        plVar30 = (long *)(ulong)(uVar11 & 1);
        uVar31 = 0x728539c;
      }
      if (((ulong)plVar30 & 1) == 0) {
        *(undefined8 *)(puVar7 + -0x10) = uVar31;
        *(undefined **)(puVar7 + -8) = puVar29;
        uVar31 = func_0x03280a2c(PTR_DAT_0785dbe8);
        puVar21 = PTR_DAT_0777c990;
        *(undefined8 *)(puVar7 + -0x30) = 0x727dc94;
        *(long *)(puVar7 + -0x28) = lVar25;
        *(long *)(puVar7 + -0x20) = lVar17;
        *(undefined **)(puVar7 + -0x18) = puVar29;
        if ((bRam0000000007e34146 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c990);
          bRam0000000007e34146 = 1;
        }
        plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar21);
        func_0x072c77f8(plVar30,uVar31,0);
        return plVar30;
      }
      return plVar30;
    }
    lVar17 = func_0x03280cac();
    *(code **)((long)register0x00000008 + -0x30) =
         Merger_Game_Views_Inventory_InventoryItemsView__InventoryStateUpdated;
    *(ulong *)((long)register0x00000008 + -0x28) = uVar28;
    Merger_Game_Views_Inventory_InventoryItemsView__ClearInventory();
    Merger_Game_Views_Inventory_InventoryItemsView__RepopulateInventory(lVar17);
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0x7e28000;
    *(long *)((long)register0x00000008 + -0x30) = auVar33._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    lVar22 = 0x7e28000;
    if ((bRam0000000007e287ab & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      func_0x03280a18(PTR_DAT_0780c5e8);
      func_0x03280a18(PTR_DAT_0780c5b0);
      func_0x03280a18(PTR_DAT_0780c520);
      bRam0000000007e287ab = 1;
    }
    if (*(long *)(lVar17 + 0x28) != 0) {
      iVar10 = func_0x0672ac88(*(long *)(lVar17 + 0x28),0);
      if (*(long *)(lVar17 + 0x28) != 0) {
        plVar30 = (long *)func_0x0672add0(*(long *)(lVar17 + 0x28),0);
        if ((int)plVar30 <= iVar10) {
          return plVar30;
        }
        lVar22 = *(long *)(lVar17 + 0x28);
        uVar31 = *(undefined8 *)(lVar17 + 0x50);
        uVar13 = func_0x069aaf28(lVar17,0);
        if ((lVar22 != 0) && (lVar25 = func_0x06a4bc78(lVar22,uVar31,uVar13,0,0), lVar25 != 0)) {
          lVar22 = func_0x03dc9518(lVar25,*(undefined8 *)PTR_DAT_0780c5e8);
          plVar30 = (long *)(lVar17 + 0x68);
          *plVar30 = lVar22;
          goto SUB_032809c4;
        }
      }
    }
    auVar33 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x680827c;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar31;
    *(long *)((long)register0x00000008 + -0x50) = lVar22;
    *(long *)((long)register0x00000008 + -0x48) = lVar17;
    if ((bRam0000000007e28847 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      bRam0000000007e28847 = 1;
    }
    puVar21 = PTR_DAT_0774e758;
    plVar12 = (long *)(auVar33._0_8_ + 0x40);
    plVar30 = (long *)*plVar12;
    while( true ) {
      uVar28 = 0;
      plVar16 = (long *)func_0x057ddb20(plVar30,auVar33._8_8_);
      if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)puVar21)) break;
      plVar16 = (long *)func_0x032dd140(plVar12,plVar16,plVar30);
      bVar8 = plVar30 == plVar16;
      plVar30 = plVar16;
      if (bVar8) {
        return plVar16;
      }
    }
    auVar32 = func_0x03281048(plVar16);
    puVar19 = PTR_DAT_0774e4e0;
    lVar17 = auVar32._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x6808318;
    *(undefined **)((long)register0x00000008 + -0x98) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x90) = puVar21;
    *(long **)((long)register0x00000008 + -0x88) = plVar30;
    *(long **)((long)register0x00000008 + -0x80) = plVar12;
    *(long *)((long)register0x00000008 + -0x78) = auVar33._8_8_;
    *(int *)((long)register0x00000008 + -0xa4) = auVar32._8_4_;
    uVar28 = uVar28 & 0xffffffff;
    uVar26 = auVar32._8_8_ & 0xffffffff;
    if ((bRam0000000007e28849 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_07771f40);
      bRam0000000007e28849 = 1;
    }
    uVar31 = *(undefined8 *)(lVar17 + 0x30);
    if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar15 = func_0x06fdeb74(uVar31,0,0);
    if ((uVar15 & 1) == 0) {
      uVar31 = *(undefined8 *)(lVar17 + 0x28);
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar30 = (long *)func_0x06fe04ec(uVar31,0,0);
      if (((ulong)plVar30 & 1) != 0) {
        return plVar30;
      }
      lVar22 = *(long *)(lVar17 + 0x28);
      lVar17 = func_0x067ba288(uVar26,uVar28,0,0,0);
      if (lVar22 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined1 *)(lVar22 + 0x7cb) = 1;
        func_0x069c307c(lVar22,lVar17,0);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        if (lVar17 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(lVar17 + 0x10);
        }
        func_0x06f52188(lVar22,lVar17,0,uVar9);
        plVar30 = (long *)(lVar22 + 0xd8);
        *plVar30 = lVar17;
        goto SUB_032809c4;
      }
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x30);
      uVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
      func_0x06b21870(uVar31,uVar28,uVar26,0,0);
      uVar13 = func_0x05793b4c((undefined1 *)((long)register0x00000008 + -0xa4),0);
      if (lVar17 != 0) {
        plVar30 = (long *)func_0x067ae8b8(lVar17,uVar31,uVar13,0);
        return plVar30;
      }
    }
    auVar33 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x6808468;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(ulong *)((long)register0x00000008 + -0xc0) = uVar26;
    *(ulong *)((long)register0x00000008 + -0xb8) = uVar28;
    if ((bRam0000000007e28848 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      bRam0000000007e28848 = 1;
    }
    puVar21 = PTR_DAT_0774e758;
    plVar12 = (long *)(auVar33._0_8_ + 0x40);
    plVar30 = (long *)*plVar12;
    while( true ) {
      unaff_x19 = 0;
      plVar16 = (long *)func_0x057ddd18(plVar30,auVar33._8_8_);
      if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)puVar21)) break;
      plVar16 = (long *)func_0x032dd140(plVar12,plVar16,plVar30);
      bVar8 = plVar30 == plVar16;
      plVar30 = plVar16;
      if (bVar8) {
        return plVar16;
      }
    }
    lVar17 = func_0x03281048(plVar16);
    *(code **)((long)register0x00000008 + -0x120) =
         Merger_Game_Views_Inventory_InventoryItemsView__BuyInventorySlotButtonClicked;
    *(undefined **)((long)register0x00000008 + -0x110) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x108) = puVar19;
    *(undefined **)((long)register0x00000008 + -0x100) = puVar21;
    *(long **)((long)register0x00000008 + -0xf8) = plVar30;
    *(long **)((long)register0x00000008 + -0xf0) = plVar12;
    *(long *)((long)register0x00000008 + -0xe8) = auVar33._8_8_;
    uVar31 = 0x7e28000;
    if ((bRam0000000007e287ae & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776f240);
      func_0x03280a18(PTR_DAT_0774e758);
      func_0x03280a18(PTR_DAT_0776f248);
      func_0x03280a18(PTR_DAT_07771ec0);
      func_0x03280a18(PTR_DAT_0780c5f0);
      func_0x03280a18(PTR_DAT_0780c5f8);
      func_0x03280a18(PTR_DAT_0780c600);
      func_0x03280a18(PTR_DAT_0780c520);
      bRam0000000007e287ae = 1;
    }
    unaff_x23 = puVar19;
    if ((*(long *)(lVar17 + 0x68) != 0) &&
       (lVar22 = *(long *)(*(long *)(lVar17 + 0x68) + 0x38), lVar22 != 0)) {
      unaff_x19 = 0;
      func_0x069b9fc4(lVar22,0);
      if ((*(long *)(lVar17 + 0x68) != 0) &&
         (lVar22 = *(long *)(*(long *)(lVar17 + 0x68) + 0x38), lVar22 != 0)) {
        unaff_x19 = 0;
        func_0x069bb350(lVar22,1);
        puVar29 = PTR_DAT_0780c5f0;
        puVar19 = PTR_DAT_0774e758;
        if (*(long *)(lVar17 + 0x28) != 0) {
          plVar12 = (long *)Merger_Game_ViewModel_InventoryItemsViewModel__TryBuyInventorySlot
                                      (*(long *)(lVar17 + 0x28),0);
          plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar19);
          unaff_x19 = *(undefined8 *)puVar29;
          func_0x056ed730(plVar30,lVar17,unaff_x19,0);
          puVar20 = PTR_DAT_0780c5f8;
          puVar29 = PTR_DAT_0776f240;
          uVar31 = 0;
          puVar21 = puVar19;
          if (plVar12 != (long *)0x0) {
            lVar22 = *plVar12;
            uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar28 != 0) {
              piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07771ec0) {
                  puVar18 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_06808670;
                }
                uVar28 = uVar28 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar28 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07771ec0,0);
LAB_06808670:
            plVar12 = (long *)(*(code *)*puVar18)(plVar12,plVar30,puVar18[1]);
            plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar29);
            unaff_x19 = *(undefined8 *)puVar20;
            func_0x054221d4(plVar30,lVar17,unaff_x19,0);
            puVar5 = PTR_DAT_0780c600;
            puVar4 = PTR_DAT_0776f248;
            uVar31 = 0;
            unaff_x23 = puVar20;
            unaff_x24 = puVar29;
            if (plVar12 != (long *)0x0) {
              lVar22 = *plVar12;
              uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar28 != 0) {
                piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
                    puVar18 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                    goto LAB_06808708;
                  }
                  uVar28 = uVar28 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar28 != 0);
              }
              puVar18 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0776f248,1);
LAB_06808708:
              plVar12 = (long *)(*(code *)*puVar18)(plVar12,plVar30,puVar18[1]);
              plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar19);
              unaff_x19 = *(undefined8 *)puVar5;
              func_0x056ed730(plVar30,lVar17,unaff_x19,0);
              uVar31 = 0;
              unaff_x23 = puVar4;
              unaff_x24 = puVar5;
              if (plVar12 != (long *)0x0) {
                lVar22 = *plVar12;
                lVar17 = *(long *)puVar4;
                uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar28 == 0) goto LAB_06808770;
                piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                goto LAB_06808758;
              }
            }
          }
        }
      }
    }
    auVar33 = func_0x03280cac();
    unaff_x20 = auVar33._8_8_;
    unaff_x21 = auVar33._0_8_;
    *(code **)((long)register0x00000008 + -0x160) =
         Merger_Game_Views_Inventory_InventoryItemsView__InfoRequested;
    *(undefined **)((long)register0x00000008 + -0x150) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x148) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x140) = puVar21;
    *(long **)((long)register0x00000008 + -0x138) = plVar30;
    *(undefined8 *)((long)register0x00000008 + -0x130) = uVar31;
    *(long *)((long)register0x00000008 + -0x128) = lVar17;
    unaff_x22 = 0x7e28000;
    if ((bRam0000000007e287af & 1) == 0) {
      func_0x03280a18(PTR_DAT_0776fc60);
      func_0x03280a18(PTR_DAT_077d0330);
      func_0x03280a18(PTR_DAT_07780690);
      func_0x03280a18(PTR_DAT_0777d360);
      func_0x03280a18(PTR_DAT_0780c520);
      func_0x03280a18(PTR_DAT_0780c608);
      bRam0000000007e287af = 1;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar17 = *unaff_x20;
      uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar28 != 0) {
        piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07780690) {
            puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 4) * 0x10 + 0x138);
            goto LAB_06808888;
          }
          uVar28 = uVar28 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar28 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)PTR_DAT_07780690,4);
LAB_06808888:
      plVar30 = (long *)(*(code *)*puVar18)(unaff_x20,puVar18[1]);
      if (plVar30 != (long *)0x0) {
        lVar17 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar28 != 0) {
          piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_077d0330) {
              puVar18 = (undefined8 *)(lVar17 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_068088f0;
            }
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar28 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_077d0330,0);
LAB_068088f0:
        plVar30 = (long *)(*(code *)*puVar18)(plVar30,puVar18[1]);
        if ((int)plVar30 != 6) {
          return plVar30;
        }
      }
      puVar19 = PTR_DAT_0780c608;
      unaff_x24 = PTR_DAT_0777d360;
      puVar21 = PTR_DAT_0776fc60;
      lVar22 = *(long *)(unaff_x21 + 0x28);
      lVar17 = *(long *)PTR_DAT_0776fc60;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar17 = *(long *)puVar21;
      }
      unaff_x22 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x30);
      unaff_x23 = (undefined *)func_0x03280ca0(*(undefined8 *)unaff_x24);
      func_0x067e1a74(unaff_x23,unaff_x20,*(undefined8 *)puVar19,unaff_x19,0,0);
      unaff_x21 = 0;
      if (lVar22 != 0) goto code_r0x06808964;
    }
    unaff_x30 = Merger_Game_Views_Inventory_InventoryItemsView__TryRemoveItem;
    auVar33 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
  } while( true );
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
      puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 6) * 0x10 + 0x138);
      goto LAB_0672b0c8;
    }
  }
LAB_0672b0a8:
  puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07806898,6);
LAB_0672b0c8:
                    /* WARNING: Could not recover jumptable at 0x0672b0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar30 = (long *)(*(code *)*puVar18)(plVar30,uVar28,0,puVar18[1]);
  return plVar30;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
LAB_0672b140:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
      puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 7) * 0x10 + 0x138);
      goto LAB_0672b178;
    }
  }
LAB_0672b158:
  puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07806898,7);
LAB_0672b178:
                    /* WARNING: Could not recover jumptable at 0x0672b190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar30 = (long *)(*(code *)*puVar18)(plVar30,uVar28,0,puVar18[1]);
  return plVar30;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar27 = piVar27 + 4;
    if (uVar28 == 0) break;
LAB_06808758:
    if (*(long *)(piVar27 + -2) == lVar17) {
      puVar18 = (undefined8 *)(lVar22 + (long)(*piVar27 + 3) * 0x10 + 0x138);
      goto LAB_06808790;
    }
  }
LAB_06808770:
  puVar18 = (undefined8 *)func_0x03256b10(plVar12,lVar17,3);
LAB_06808790:
                    /* WARNING: Could not recover jumptable at 0x068087ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar30 = (long *)(*(code *)*puVar18)(plVar12,plVar30,puVar18[1]);
  return plVar30;
code_r0x06808964:
  *(undefined8 *)((long)register0x00000008 + -0x150) =
       *(undefined8 *)((long)register0x00000008 + -0x160);
  *(undefined8 *)((long)register0x00000008 + -0x140) =
       *(undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)((long)register0x00000008 + -0x138);
  *(undefined8 *)((long)register0x00000008 + -0x130) =
       *(undefined8 *)((long)register0x00000008 + -0x130);
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)((long)register0x00000008 + -0x128);
  if ((bRam0000000007e29c46 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f8d8,unaff_x22,unaff_x23,0);
    bRam0000000007e29c46 = 1;
  }
  plVar30 = *(long **)(lVar22 + 0x38);
  if (plVar30 != (long *)0x0) {
    lVar17 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f8d8) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 9) * 0x10 + 0x138);
          goto LAB_06a4b008;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f8d8,9);
LAB_06a4b008:
                    /* WARNING: Could not recover jumptable at 0x06a4b024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar18)(plVar30,unaff_x22,unaff_x23,puVar18[1]);
    return plVar30;
  }
  lVar17 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x170) = 0x6a4b02c;
  *(undefined8 *)((long)register0x00000008 + -0x160) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x158) = unaff_x23;
  if ((bRam0000000007e29c47 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f8d8);
    bRam0000000007e29c47 = 1;
  }
  plVar30 = *(long **)(lVar17 + 0x38);
  if (plVar30 != (long *)0x0) {
    lVar17 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f8d8) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 10) * 0x10 + 0x138);
          goto LAB_06a4b0b8;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f8d8,10);
LAB_06a4b0b8:
                    /* WARNING: Could not recover jumptable at 0x06a4b0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar18)(plVar30,puVar18[1]);
    return plVar30;
  }
  auVar33 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -400) = 0x6a4b0d0;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x180) = 0x7e29000;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
  if ((bRam0000000007e29c48 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f8d8);
    bRam0000000007e29c48 = 1;
  }
  plVar30 = *(long **)(auVar33._0_8_ + 0x38);
  if (plVar30 != (long *)0x0) {
    lVar17 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f8d8) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 0x10) * 0x10 + 0x138);
          goto LAB_06a4b160;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f8d8,0x10);
LAB_06a4b160:
                    /* WARNING: Could not recover jumptable at 0x06a4b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar18)(plVar30,auVar33._8_8_,puVar18[1]);
    return plVar30;
  }
  lVar17 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0x6a4b17c;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
  *(long *)((long)register0x00000008 + -0x198) = auVar33._8_8_;
  if ((bRam0000000007e29c49 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f8d8);
    bRam0000000007e29c49 = 1;
  }
  plVar30 = *(long **)(lVar17 + 0x38);
  if (plVar30 != (long *)0x0) {
    lVar17 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f8d8) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 0x11) * 0x10 + 0x138);
          goto LAB_06a4b208;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f8d8,0x11);
LAB_06a4b208:
                    /* WARNING: Could not recover jumptable at 0x06a4b21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar18)(plVar30,1,puVar18[1]);
    return plVar30;
  }
  lVar17 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x6a4b224;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x7e29000;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
  if ((bRam0000000007e29c4a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f8d8);
    bRam0000000007e29c4a = 1;
  }
  plVar30 = *(long **)(lVar17 + 0x38);
  if (plVar30 != (long *)0x0) {
    lVar17 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f8d8) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 0x11) * 0x10 + 0x138);
          goto LAB_06a4b2b0;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f8d8,0x11);
LAB_06a4b2b0:
                    /* WARNING: Could not recover jumptable at 0x06a4b2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar18)(plVar30,0,puVar18[1]);
    return plVar30;
  }
  auVar33 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x6a4b2cc;
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0x7e29000;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x7e29000;
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
  uVar28 = auVar33._8_8_ & 0xffffffff;
  if ((bRam0000000007e29c4b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ceb0);
    bRam0000000007e29c4b = 1;
  }
  plVar30 = *(long **)(auVar33._0_8_ + 0x30);
  if (plVar30 != (long *)0x0) {
    lVar17 = *plVar30;
    uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0777ceb0) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 2) * 0x10 + 0x138);
          goto LAB_06a4b35c;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0777ceb0,2);
LAB_06a4b35c:
                    /* WARNING: Could not recover jumptable at 0x06a4b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar30 = (long *)(*(code *)*puVar18)(plVar30,uVar28,puVar18[1]);
    return plVar30;
  }
  auVar33 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x6a4b378;
  *(undefined8 *)((long)register0x00000008 + -0x208) = 0x7e29000;
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
  *(ulong *)((long)register0x00000008 + -0x1f8) = uVar28;
  if ((bRam0000000007e29c4c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ceb0);
    bRam0000000007e29c4c = 1;
  }
  plVar30 = *(long **)(auVar33._0_8_ + 0x30);
  if (plVar30 == (long *)0x0) {
    plVar30 = (long *)func_0x03280cac();
    return plVar30;
  }
  lVar17 = *plVar30;
  uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar28 != 0) {
    piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0777ceb0) {
        puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 1) * 0x10 + 0x138);
        goto LAB_06a4b408;
      }
      uVar28 = uVar28 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar28 != 0);
  }
  puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0777ceb0,1);
LAB_06a4b408:
                    /* WARNING: Could not recover jumptable at 0x06a4b41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar30 = (long *)(*(code *)*puVar18)(plVar30,auVar33._8_8_ & 0xffffffff,puVar18[1]);
  return plVar30;
  while( true ) {
    uVar28 = uVar28 - 1;
    piVar27 = piVar27 + 4;
    if (uVar28 == 0) break;
LAB_0672b284:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
      puVar18 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_0672b2b8;
    }
  }
LAB_0672b29c:
  puVar21 = (undefined *)0x0;
  puVar18 = (undefined8 *)func_0x03256b10(plVar30);
LAB_0672b2b8:
  uVar9 = (*(code *)*puVar18)(plVar30,puVar18[1]);
  puVar20 = PTR_DAT_07771f40;
  plVar30 = *(long **)(lVar17 + 0xd0);
  uVar13 = 0;
  if (plVar30 != (long *)0x0) {
    lVar22 = *plVar30;
    uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar28 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)puVar19) {
          puVar18 = (undefined8 *)(lVar22 + (long)(*piVar27 + 4) * 0x10 + 0x138);
          goto LAB_0672b328;
        }
        uVar28 = uVar28 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar28 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar19,4);
LAB_0672b328:
    uVar28 = (*(code *)*puVar18)(plVar30,puVar18[1]);
    puVar29 = (undefined *)(uVar28 & 0xffffffff);
    uVar13 = func_0x03280ca0(*(undefined8 *)puVar20);
    puVar21 = puVar29;
    func_0x06b21870(uVar13,uVar9,puVar29,0,0);
    plVar30 = *(long **)(lVar17 + 0xd0);
    uVar31 = 0;
    if (plVar30 != (long *)0x0) {
      lVar22 = *plVar30;
      uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar28 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar19) {
            puVar18 = (undefined8 *)(lVar22 + (long)(*piVar27 + 2) * 0x10 + 0x138);
            goto LAB_0672b3b4;
          }
          uVar28 = uVar28 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar28 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar19,2);
LAB_0672b3b4:
      iVar10 = (*(code *)*puVar18)(plVar30,puVar18[1]);
      lVar22 = *plVar30;
      uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar28 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar19) {
            puVar18 = (undefined8 *)(lVar22 + (long)(*piVar27 + 6) * 0x10 + 0x138);
            goto LAB_0672b414;
          }
          uVar28 = uVar28 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar28 != 0);
      }
      puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)puVar19,6);
LAB_0672b414:
      puVar21 = PTR_DAT_078069a0;
      puVar19 = PTR_DAT_0774e758;
      plVar30 = (long *)(*(code *)*puVar18)(plVar30,iVar10 + -1,0,puVar18[1]);
      uVar31 = 0;
      if (plVar30 != (long *)0x0) {
        lVar22 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar28 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
              puVar18 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_0672b494;
            }
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar28 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07779820,0);
LAB_0672b494:
        uVar31 = (*(code *)*puVar18)(plVar30,puVar18[1]);
      }
      puVar29 = *(undefined **)(lVar17 + 0xd0);
      uVar14 = func_0x03280ca0(*(undefined8 *)puVar19);
      func_0x056ed730(uVar14,lVar17,*(undefined8 *)puVar21,0);
      puVar21 = puVar29;
      uVar28 = func_0x067266a8(lVar17,uVar13,puVar29,uVar31,uVar14);
      if ((uVar28 & 1) != 0) {
        uVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e4d8);
        func_0x057ced5c(uVar31,0);
        if (*(int *)(*(long *)PTR_DAT_0776fb48 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        puVar21 = PTR_DAT_0776f8e0;
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x90);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        if ((bRam0000000007e2945c & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776f248,0);
          func_0x03280a18(PTR_DAT_0776f8e0);
          bRam0000000007e2945c = 1;
        }
        plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar21);
        func_0x05ac10bc(plVar30,0);
        if (plVar30 != (long *)0x0) {
          lVar17 = *plVar30;
          uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar28 != 0) {
            piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 4) * 0x10 + 0x138);
                goto LAB_06955084;
              }
              uVar28 = uVar28 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar28 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f248,4);
LAB_06955084:
          (*(code *)*puVar18)(plVar30,uVar31,puVar18[1]);
          return plVar30;
        }
        func_0x03280cac();
        puVar19 = PTR_DAT_0776fb48;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x69550a8;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar31;
        if ((bRam0000000007e2945d & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776f248);
          func_0x03280a18(PTR_DAT_07771ec0);
          func_0x03280a18(PTR_DAT_0776fb48);
          bRam0000000007e2945d = 1;
        }
        lVar17 = *(long *)puVar19;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar17 = *(long *)puVar19;
        }
        plVar30 = (long *)**(undefined8 **)(lVar17 + 0xb8);
        if (plVar30 == (long *)0x0) {
LAB_06955224:
          auVar33 = func_0x03280cac();
          plVar12 = auVar33._8_8_;
          plVar30 = auVar33._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x6955228;
          *(undefined **)((long)register0x00000008 + -200) = puVar21;
          *(undefined **)((long)register0x00000008 + -0xc0) = puVar19;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
          if ((bRam0000000007e2945e & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f248);
            bRam0000000007e2945e = 1;
          }
          if (plVar12 != (long *)0x0) {
            lVar17 = *plVar12;
            uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar28 != 0) {
              piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
                  puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 10) * 0x10 + 0x138);
                  goto LAB_069552b4;
                }
                uVar28 = uVar28 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar28 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0776f248,10);
LAB_069552b4:
            iVar10 = (*(code *)*puVar18)(plVar12,puVar18[1]);
            if (iVar10 == 2) {
              if (plVar30 != (long *)0x0) {
                (**(code **)(*plVar30 + 0x278))(plVar30,plVar12,*(undefined8 *)(*plVar30 + 0x280));
                return (long *)0x1;
              }
              func_0x03280cac();
              puVar21 = PTR_DAT_07817470;
              *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x108) = 0x6955300;
              *(undefined8 *)((long)register0x00000008 + -0x100) = uVar14;
              *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar2;
              *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar13;
              *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x7e29000;
              *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
              *(long **)((long)register0x00000008 + -0xd8) = plVar12;
              if ((bRam0000000007e2945f & 1) == 0) {
                func_0x03280a18(PTR_DAT_07771708);
                func_0x03280a18(PTR_DAT_0777da58);
                func_0x03280a18(PTR_DAT_0776f8e0);
                func_0x03280a18(PTR_DAT_07817478);
                func_0x03280a18(PTR_DAT_07817470);
                bRam0000000007e2945f = 1;
              }
              plVar30 = (long *)func_0x03280ca0(*(undefined8 *)puVar21);
              return plVar30;
            }
          }
          return (long *)0x0;
        }
        lVar17 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar28 != 0) {
          piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
              puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 10) * 0x10 + 0x138);
              goto LAB_06955168;
            }
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar28 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f248,10);
LAB_06955168:
        iVar10 = (*(code *)*puVar18)(plVar30,puVar18[1]);
        if (iVar10 != 0) {
          lVar17 = *(long *)puVar19;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar17 = *(long *)puVar19;
          }
          plVar30 = (long *)**(undefined8 **)(lVar17 + 0xb8);
          if (plVar30 == (long *)0x0) goto LAB_06955224;
          lVar17 = *plVar30;
          uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar28 != 0) {
            piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07771ec0) {
                puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_069551f0;
              }
              uVar28 = uVar28 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar28 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07771ec0,1);
LAB_069551f0:
          (*(code *)*puVar18)(plVar30,puVar18[1]);
        }
        lVar17 = *(long *)puVar19;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar17 = *(long *)puVar19;
        }
        return (long *)**(undefined8 **)(lVar17 + 0xb8);
      }
      plVar30 = *(long **)(lVar17 + 0xd8);
      uVar31 = 0;
      if (plVar30 != (long *)0x0) {
        lVar22 = *plVar30;
        uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar28 != 0) {
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07800c90) {
              puVar18 = (undefined8 *)(lVar22 + (long)(*piVar27 + 3) * 0x10 + 0x138);
              goto LAB_0672b590;
            }
            uVar28 = uVar28 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar28 != 0);
        }
        puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07800c90,3);
LAB_0672b590:
        plVar30 = (long *)(*(code *)*puVar18)(plVar30,uVar13,puVar18[1]);
        uVar31 = func_0x03280ca0(*(undefined8 *)puVar19);
        puVar21 = *(undefined **)PTR_DAT_078069a8;
        func_0x056ed730(uVar31,lVar17,puVar21,0);
        puVar19 = PTR_DAT_07771ec0;
        uVar13 = 0;
        if (plVar30 != (long *)0x0) {
          lVar22 = *plVar30;
          uVar28 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar28 != 0) {
            piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07771ec0) {
                puVar18 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_0672b624;
              }
              uVar28 = uVar28 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar28 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07771ec0,0);
LAB_0672b624:
          plVar30 = (long *)(*(code *)*puVar18)(plVar30,uVar31,puVar18[1]);
          uVar31 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
          puVar21 = *(undefined **)PTR_DAT_078069b0;
          func_0x054221d4(uVar31,lVar17,puVar21,0);
          uVar13 = 0;
          puVar29 = puVar19;
          if (plVar30 != (long *)0x0) {
            lVar17 = *plVar30;
            uVar28 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar28 != 0) {
              piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0776f248) {
                  puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                  goto LAB_0672b6c4;
                }
                uVar28 = uVar28 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar28 != 0);
            }
            puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_0776f248,1);
LAB_0672b6c4:
            puVar21 = (undefined *)puVar18[1];
            lVar17 = (*(code *)*puVar18)(plVar30,uVar31);
            if (lVar17 == 0) {
              return (long *)0x0;
            }
            uVar13 = *(undefined8 *)puVar19;
            plVar30 = (long *)func_0x03280b90(lVar17,uVar13);
            if (plVar30 != (long *)0x0) {
              return plVar30;
            }
            goto LAB_0672b704;
          }
        }
      }
    }
  }
LAB_0672b700:
  func_0x03280cac();
LAB_0672b704:
  auVar33 = func_0x03281048(lVar17,uVar13);
  *(code **)((long)register0x00000008 + -0xe0) =
       Merger_Game_ViewModel_InventoryItemsViewModel__GetItemAsset;
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar29;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar13;
  *(long *)((long)register0x00000008 + -0xb8) = lVar17;
  uVar28 = auVar33._8_8_ & 0xffffffff;
  if ((bRam0000000007e27e36 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e27e36 = 1;
  }
  plVar30 = *(long **)(auVar33._0_8_ + 0xd0);
  if (plVar30 == (long *)0x0) {
    lVar17 = func_0x03280cac();
    puVar29 = PTR_DAT_07828a38;
    puVar19 = PTR_DAT_07828a30;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x672b7cc;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x7e27000;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(ulong *)((long)register0x00000008 + -0xf0) = uVar28;
    *(ulong *)((long)register0x00000008 + -0xe8) = (ulong)puVar21 & 0xffffffff;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    lVar22 = func_0x03280ca0(*(undefined8 *)puVar19);
    func_0x053bfe40(lVar22,*(undefined8 *)puVar29);
    plVar30 = (long *)(lVar17 + 0x60);
    *plVar30 = lVar22;
SUB_032809c4:
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)plVar30 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar30 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return plVar30;
  }
  lVar17 = *plVar30;
  uVar26 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07806898) {
        puVar18 = (undefined8 *)(lVar17 + (long)(*piVar27 + 8) * 0x10 + 0x138);
        goto LAB_0672b7a8;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar18 = (undefined8 *)func_0x03256b10(plVar30,*(long *)PTR_DAT_07806898,8);
LAB_0672b7a8:
                    /* WARNING: Could not recover jumptable at 0x0672b7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar30 = (long *)(*(code *)*puVar18)(plVar30,uVar28,(ulong)puVar21 & 0xffffffff,puVar18[1]);
  return plVar30;
}

