/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628BA04; bound 764 bytes; MergeEngine.ECS.Systems.PersistenceSystem.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x0638bba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638bc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638bc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638bcb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638bcd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638c660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638c720: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0638bea8: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0638c724) */
/* WARNING: Removing unreachable block (ram,0x0638c72c) */
/* WARNING: Removing unreachable block (ram,0x0638c730) */
/* WARNING: Removing unreachable block (ram,0x0638c74c) */
/* WARNING: Removing unreachable block (ram,0x0638c754) */
/* WARNING: Removing unreachable block (ram,0x0638c77c) */
/* WARNING: Removing unreachable block (ram,0x0638c760) */
/* WARNING: Removing unreachable block (ram,0x0638c76c) */
/* WARNING: Removing unreachable block (ram,0x0638c78c) */
/* WARNING: Removing unreachable block (ram,0x0638c664) */
/* WARNING: Removing unreachable block (ram,0x0638c67c) */
/* WARNING: Removing unreachable block (ram,0x0638c680) */
/* WARNING: Removing unreachable block (ram,0x0638c6e4) */
/* WARNING: Removing unreachable block (ram,0x0638bcdc) */
/* WARNING: Removing unreachable block (ram,0x0638bcb8) */
/* WARNING: Removing unreachable block (ram,0x0638bc94) */
/* WARNING: Removing unreachable block (ram,0x0638beac) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Removing unreachable block (ram,0x0638c4e4) */

long * MergeEngine_ECS_Systems_PersistenceSystem__InitializeSystem(long param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x1;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  undefined *puVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  undefined1 *puVar30;
  undefined *unaff_x23;
  long lVar31;
  undefined *unaff_x24;
  undefined *puVar32;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *unaff_x29;
  undefined *puVar33;
  undefined *puVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  code *apcStack_d0 [2];
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long lStack_48;
  code **ppcVar6;
  
  puVar34 = PTR_DAT_077e75f0;
  puVar27 = (undefined8 *)PTR_DAT_0774e558;
  plVar28 = (long *)0x7e25000;
  if ((bRam0000000007e2550e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e75f8);
    func_0x03280a18(PTR_DAT_077e7600);
    func_0x03280a18(PTR_DAT_077e7608);
    func_0x03280a18(PTR_DAT_077e7610);
    func_0x03280a18(PTR_DAT_077e75f0);
    func_0x03280a18(PTR_DAT_077e7618);
    func_0x03280a18(PTR_DAT_077c1cc8);
    func_0x03280a18(PTR_DAT_0777d140);
    func_0x03280a18(PTR_DAT_0777b120);
    func_0x03280a18(PTR_DAT_07750d28);
    func_0x03280a18(PTR_DAT_0774e558);
    func_0x03280a18(PTR_DAT_077e7620);
    func_0x03280a18(PTR_DAT_077e7628);
    func_0x03280a18(PTR_DAT_077e7630);
    bRam0000000007e2550e = 1;
  }
  plVar25 = *(long **)puVar34;
  if (*(int *)(*puVar27 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = func_0x057a51c4(plVar25,0);
  puVar34 = PTR_DAT_077e7630;
  if (lVar13 != 0) {
    uVar14 = func_0x057b1478(lVar13,0);
    lVar13 = *(long *)puVar34;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar34;
    }
    lVar26 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar26 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c(lVar13);
        lVar13 = *(long *)puVar34;
      }
      uVar14 = **(undefined8 **)(lVar13 + 0xb8);
      lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777b120);
      func_0x05355fbc(lVar13,uVar14,*(undefined8 *)PTR_DAT_077e7620,0);
      plVar28 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 8);
      *plVar28 = lVar13;
      goto code_r0x032809c4;
    }
    plVar25 = (long *)func_0x03d872a8(uVar14,lVar26,*(undefined8 *)PTR_DAT_0777d140);
    lVar13 = *(long *)puVar34;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c(lVar13);
      lVar13 = *(long *)puVar34;
    }
    unaff_x25 = PTR_DAT_077e7618;
    unaff_x24 = PTR_DAT_077c1cc8;
    puVar27 = *(undefined8 **)(*(long *)(lVar13 + 0xb8) + 0x10);
    if (puVar27 == (undefined8 *)0x0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c(lVar13);
        lVar13 = *(long *)puVar34;
      }
      uVar14 = **(undefined8 **)(lVar13 + 0xb8);
      lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750d28);
      func_0x053569b8(lVar13,uVar14,*(undefined8 *)PTR_DAT_077e7628,0);
      plVar28 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x10);
      *plVar28 = lVar13;
      goto code_r0x032809c4;
    }
    uVar14 = func_0x03d50a94(plVar25,puVar27,*(undefined8 *)PTR_DAT_077e7618);
    lVar13 = func_0x03d5f778(uVar14,*(undefined8 *)unaff_x24);
    unaff_x23 = puVar34;
    if (param_1 != 0) {
      plVar28 = (long *)(param_1 + 0x80);
      *plVar28 = lVar13;
      goto code_r0x032809c4;
    }
  }
  auVar37._8_8_ = 0x7e25000;
  auVar37._0_8_ = unaff_x23;
  lVar13 = func_0x03280cac();
  ppcVar6 = (code **)&puStack_60;
  puStack_60 = &SUB_0638bd00;
  puStack_58 = puVar27;
  plStack_50 = plVar25;
  lStack_48 = param_1;
  if ((bRam0000000007e25510 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7638);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0774e4d8);
    func_0x03280a18(PTR_DAT_0777aca0);
    func_0x03280a18(PTR_DAT_0777ac28);
    func_0x03280a18(PTR_DAT_0777ac30);
    func_0x03280a18(PTR_DAT_077e7640);
    func_0x03280a18(PTR_DAT_077e7648);
    bRam0000000007e25510 = 1;
  }
  plVar25 = (long *)func_0x0638b80c(lVar13);
  if (((ulong)plVar25 & 1) == 0) {
    return plVar25;
  }
  plVar25 = *(long **)(lVar13 + 0x40);
  puVar16 = puVar27;
  if (plVar25 != (long *)0x0) {
    lVar26 = *plVar25;
    uVar21 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777aca0) {
          puVar15 = (undefined8 *)(lVar26 + (long)(*piVar22 + 10) * 0x10 + 0x138);
          goto code_r0x0638bdec;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777aca0,10);
code_r0x0638bdec:
    uVar21 = (*(code *)*puVar15)(plVar25,puVar15[1]);
    if ((uVar21 & 1) == 0) {
      if (*(long *)(lVar13 + 0x70) != 0) {
        uVar14 = func_0x04fe2a5c(*(long *)(lVar13 + 0x70),*(undefined8 *)PTR_DAT_077e7638);
        uVar14 = func_0x03d5ffd0(uVar14,*(undefined8 *)PTR_DAT_0774ea58);
        auVar36._8_8_ = uVar14;
        auVar36._0_8_ = lVar13;
        puVar34 = &UNK_0638beac;
        goto code_r0x0638c210;
      }
    }
    else {
      plVar23 = *(long **)(lVar13 + 0x28);
      puVar16 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e4d8);
      func_0x057ced78(puVar16,*(undefined8 *)PTR_DAT_077e7640,0);
      plVar25 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ac28);
      func_0x069c9034(plVar25,*(undefined8 *)PTR_DAT_077e7648,puVar16,0);
      lVar13 = 0;
      if (plVar23 != (long *)0x0) {
        lVar13 = *(long *)PTR_DAT_0777ac30;
        puVar5 = &stack0xffffffffffffffc0;
        lVar26 = lStack_48;
        plVar28 = plStack_50;
        puVar27 = puStack_58;
        puVar34 = puStack_60;
code_r0x03ea4d6c:
        puVar30 = auVar37._0_8_;
        *(undefined **)(puVar5 + -0x20) = puVar34;
        *(undefined8 **)(puVar5 + -0x18) = puVar27;
        *(long **)(puVar5 + -0x10) = plVar28;
        *(long *)(puVar5 + -8) = lVar26;
        lVar26 = *(long *)(lVar13 + 0x38);
        if (lVar26 == 0) {
          func_0x03256878(lVar13);
          lVar26 = *(long *)(lVar13 + 0x38);
        }
        lVar13 = *(long *)(lVar26 + 8);
        *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x20);
        *(long *)(puVar5 + -0x20) = auVar37._8_8_;
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        plVar28 = plVar23;
        if ((*(long *)(lVar13 + 0x38) == 0) &&
           (plVar28 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar13 + 0x38) == 0)) {
          plVar28 = (long *)func_0x03256878(lVar13);
        }
        if ((char)plVar23[10] != '\0') {
          return plVar28;
        }
        uVar14 = **(undefined8 **)(lVar13 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar10 = func_0x057a51c4(uVar14,0);
        lVar13 = 1;
        puVar19 = (undefined1 *)0x0;
        lVar26 = func_0x072869d0(plVar23,uVar10,0,1,0);
        if (lVar26 == 0) {
          auVar37 = func_0x03280cac();
          uVar10 = auVar37._8_8_;
          plVar28 = auVar37._0_8_;
          *(undefined **)(puVar5 + -0x80) = unaff_x29;
          *(undefined **)(puVar5 + -0x78) = &UNK_03ea51c0;
          *(undefined **)(puVar5 + -0x70) = unaff_x26;
          *(undefined **)(puVar5 + -0x68) = unaff_x25;
          *(undefined **)(puVar5 + -0x60) = unaff_x24;
          *(undefined1 **)(puVar5 + -0x58) = puVar30;
          *(undefined8 *)(puVar5 + -0x50) = uVar14;
          *(long **)(puVar5 + -0x48) = plVar23;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(long **)(puVar5 + -0x38) = plVar25;
          lVar26 = tpidr_el0;
          *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(lVar26 + 0x28);
          *(undefined1 **)(puVar5 + -0x90) = puVar19;
          puVar27 = *(undefined8 **)(lVar13 + 0x38);
          plVar25 = plVar28;
          puVar4 = puVar19;
          if (puVar27 == (undefined8 *)0x0) {
            plVar25 = (long *)func_0x03280a18(PTR_DAT_0774e558);
            puVar27 = *(undefined8 **)(lVar13 + 0x38);
            if (puVar27 == (undefined8 *)0x0) {
              plVar25 = (long *)func_0x03256878(lVar13);
              puVar27 = *(undefined8 **)(lVar13 + 0x38);
            }
          }
          puVar30 = (undefined1 *)(ulong)*(uint *)(puVar27[1] + 0xfc);
          unaff_x24 = puVar5 + (-0x90 - ((ulong)(puVar30 + 0xf) & 0x1fffffff0));
          if ((char)plVar28[10] == '\0') {
            unaff_x25 = (undefined *)*puVar27;
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar14 = func_0x057a51c4(unaff_x25,0);
            lVar26 = func_0x072869d0(plVar28,uVar14,uVar10,1,0);
            lVar13 = *(long *)(lVar13 + 0x38);
            puVar2 = puVar19;
            if (-1 < *(int *)(*(long *)(lVar13 + 8) + 0x28)) {
              puVar2 = puVar5 + -0x90;
            }
            puVar4 = puVar30;
            func_0x072ce970(unaff_x24,puVar2);
            plVar25 = (long *)func_0x03280b94(*(undefined8 *)(lVar13 + 8),unaff_x24);
            if (lVar26 != 0) {
              puVar34 = &UNK_03ea52d0;
              puVar4 = unaff_x24;
              lVar20 = lVar26;
              goto code_r0x072852e4;
            }
            func_0x03280cac();
            uVar10 = 0;
          }
          else if (*(long *)(lVar26 + 0x28) == *(long *)(puVar5 + -0x88)) {
            return plVar25;
          }
          auVar37 = func_0x072ce990();
          lVar26 = auVar37._8_8_;
          *(undefined **)(unaff_x24 + -0x20) = &SUB_03ea5304;
          *(undefined8 *)(unaff_x24 + -0x18) = uVar10;
          *(long *)(unaff_x24 + -0x10) = lVar13;
          *(undefined1 **)(unaff_x24 + -8) = puVar19;
          lVar13 = *(long *)(puVar4 + 0x38);
          if (lVar13 == 0) {
            func_0x03256878(puVar4);
            lVar13 = *(long *)(puVar4 + 0x38);
          }
          lVar31 = *(long *)(lVar13 + 8);
          *(undefined8 *)(unaff_x24 + -0x40) = *(undefined8 *)(unaff_x24 + -0x20);
          *(undefined **)(unaff_x24 + -0x30) = unaff_x24;
          *(undefined1 **)(unaff_x24 + -0x28) = puVar30;
          *(long **)(unaff_x24 + -0x20) = plVar28;
          *(undefined8 *)(unaff_x24 + -0x18) = *(undefined8 *)(unaff_x24 + -0x18);
          *(undefined8 *)(unaff_x24 + -0x10) = *(undefined8 *)(unaff_x24 + -0x10);
          *(undefined8 *)(unaff_x24 + -8) = *(undefined8 *)(unaff_x24 + -8);
          plVar28 = *(long **)(lVar31 + 0x38);
          lVar13 = lVar26;
          lVar20 = lVar31;
          if (plVar28 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_07750ac8);
            func_0x03280a18(PTR_DAT_0774e558);
            plVar28 = *(long **)(lVar31 + 0x38);
            if (plVar28 == (long *)0x0) {
              func_0x03256878(lVar31);
              plVar28 = *(long **)(lVar31 + 0x38);
            }
          }
          if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar11 = func_0x03280ca0();
          func_0x04053df4(lVar11,*(undefined8 *)(*(long *)(lVar31 + 0x38) + 8));
          if (lVar11 != 0) {
            plVar28 = (long *)(lVar11 + 0x10);
            *plVar28 = lVar26;
            goto code_r0x032809c4;
          }
          auVar36 = func_0x03280cac();
          *(undefined **)(unaff_x24 + -0x80) = &UNK_03ea5530;
          *(undefined8 *)(unaff_x24 + -0x70) = 0;
          *(undefined1 **)(unaff_x24 + -0x68) = puVar30;
          *(long *)(unaff_x24 + -0x60) = lVar26;
          *(long *)(unaff_x24 + -0x58) = lVar31;
          *(long *)(unaff_x24 + -0x50) = auVar37._0_8_;
          *(undefined8 *)(unaff_x24 + -0x48) = 0;
          plVar28 = *(long **)(lVar20 + 0x38);
          lVar26 = lVar13;
          lVar31 = lVar20;
          if (plVar28 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_07750ac8);
            func_0x03280a18(PTR_DAT_0774e558);
            plVar28 = *(long **)(lVar20 + 0x38);
            if (plVar28 == (long *)0x0) {
              func_0x03256878(lVar20);
              plVar28 = *(long **)(lVar20 + 0x38);
            }
          }
          if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar11 = func_0x03280ca0();
          func_0x0404e308(lVar11,*(undefined8 *)(*(long *)(lVar20 + 0x38) + 8));
          if (lVar11 != 0) {
            plVar28 = (long *)(lVar11 + 0x10);
            *plVar28 = lVar13;
            goto code_r0x032809c4;
          }
          auVar37 = func_0x03280cac();
          *(undefined **)(unaff_x24 + -0xc0) = &UNK_03ea5644;
          *(undefined8 *)(unaff_x24 + -0xb0) = 0;
          *(undefined1 **)(unaff_x24 + -0xa8) = puVar30;
          *(long *)(unaff_x24 + -0xa0) = lVar13;
          *(long *)(unaff_x24 + -0x98) = lVar20;
          *(undefined1 (*) [16])(unaff_x24 + -0x90) = auVar36;
          plVar28 = *(long **)(lVar31 + 0x38);
          lVar13 = lVar26;
          lVar20 = lVar31;
          if (plVar28 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_07750ac8);
            func_0x03280a18(PTR_DAT_0774e558);
            plVar28 = *(long **)(lVar31 + 0x38);
            if (plVar28 == (long *)0x0) {
              func_0x03256878(lVar31);
              plVar28 = *(long **)(lVar31 + 0x38);
            }
          }
          if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar11 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x38) + 8))();
          if (lVar11 != 0) {
            plVar28 = (long *)(lVar11 + 0x10);
            *plVar28 = lVar26;
            goto code_r0x032809c4;
          }
          auVar36 = func_0x03280cac();
          *(undefined **)(unaff_x24 + -0x100) = &UNK_03ea575c;
          *(undefined8 *)(unaff_x24 + -0xf0) = 0;
          *(undefined1 **)(unaff_x24 + -0xe8) = puVar30;
          *(long *)(unaff_x24 + -0xe0) = lVar26;
          *(long *)(unaff_x24 + -0xd8) = lVar31;
          *(undefined1 (*) [16])(unaff_x24 + -0xd0) = auVar37;
          plVar28 = *(long **)(lVar20 + 0x38);
          if (plVar28 == (long *)0x0) {
            func_0x03280a18(PTR_DAT_07750ac8);
            func_0x03280a18(PTR_DAT_0774e558);
            plVar28 = *(long **)(lVar20 + 0x38);
            if (plVar28 == (long *)0x0) {
              func_0x03256878(lVar20);
              plVar28 = *(long **)(lVar20 + 0x38);
            }
          }
          if ((*(byte *)(*plVar28 + 0x135) & 1) == 0) {
            func_0x0325681c();
          }
          lVar26 = func_0x03280ca0();
          (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x38) + 8))();
          if (lVar26 != 0) {
            plVar28 = (long *)(lVar26 + 0x10);
            *plVar28 = lVar13;
            goto code_r0x032809c4;
          }
          auVar37 = func_0x03280cac();
          lVar26 = auVar37._8_8_;
          plVar28 = auVar37._0_8_;
          *(undefined **)(unaff_x24 + -0x120) = &UNK_03ea5874;
          *(undefined1 (*) [16])(unaff_x24 + -0x110) = auVar36;
          plVar25 = *(long **)(lVar26 + 0x38);
          if (plVar25 == (long *)0x0) {
            func_0x03256878(lVar26);
            plVar25 = *(long **)(lVar26 + 0x38);
          }
          lVar31 = *plVar25;
          *(undefined8 *)(unaff_x24 + -0x130) = *(undefined8 *)(unaff_x24 + -0x120);
          *(undefined1 **)(unaff_x24 + -0x128) = puVar30;
          *(long *)(unaff_x24 + -0x120) = lVar13;
          *(long *)(unaff_x24 + -0x118) = lVar20;
          *(undefined8 *)(unaff_x24 + -0x110) = *(undefined8 *)(unaff_x24 + -0x110);
          *(undefined8 *)(unaff_x24 + -0x108) = *(undefined8 *)(unaff_x24 + -0x108);
          plVar25 = plVar28;
          if ((*(long *)(lVar31 + 0x38) == 0) &&
             (plVar25 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar31 + 0x38) == 0)) {
            plVar25 = (long *)func_0x03256878(lVar31);
          }
          puVar34 = PTR_DAT_0774e558;
          if ((char)plVar28[10] != '\0') {
            return plVar25;
          }
          uVar14 = **(undefined8 **)(lVar31 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar14 = func_0x057a51c4(uVar14,0);
          lVar26 = func_0x072869d0(plVar28,uVar14,0,0,0);
          if (lVar26 == 0) {
            return (long *)0x0;
          }
          uVar14 = **(undefined8 **)(lVar31 + 0x38);
          if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar14 = func_0x057a51c4(uVar14,0);
          lVar13 = func_0x057c1ad4(uVar14,0);
          lVar20 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = func_0x0325681c(lVar20);
          }
          if (lVar13 == 0) {
code_r0x03ea5b18:
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = (long *)func_0x03280b90(lVar13,lVar20);
            if (plVar25 == (long *)0x0) {
              func_0x03281048(lVar13,lVar20);
              goto code_r0x03ea5b18;
            }
          }
          lVar13 = *(long *)(unaff_x24 + -0x110);
          puVar19 = *(undefined1 **)(unaff_x24 + -0x108);
          plVar28 = *(long **)(unaff_x24 + -0x120);
          lVar20 = *(long *)(unaff_x24 + -0x118);
          puVar4 = unaff_x24 + -0x100;
          puVar34 = *(undefined **)(unaff_x24 + -0x130);
          puVar30 = *(undefined1 **)(unaff_x24 + -0x128);
          unaff_x24 = (undefined *)0x0;
        }
        else {
          lVar13 = *(long *)(puVar5 + -0x10);
          puVar19 = *(undefined1 **)(puVar5 + -8);
          plVar28 = *(long **)(puVar5 + -0x20);
          puVar34 = *(undefined **)(puVar5 + -0x30);
          puVar4 = puVar5;
          lVar20 = *(long *)(puVar5 + -0x18);
        }
code_r0x072852e4:
        lVar31 = 0;
        puVar7 = puVar4 + -0x30;
        *(undefined **)(puVar4 + -0x30) = puVar34;
        *(long **)(puVar4 + -0x20) = plVar28;
        *(long *)(puVar4 + -0x18) = lVar20;
        *(long *)(puVar4 + -0x10) = lVar13;
        *(undefined1 **)(puVar4 + -8) = puVar19;
        if ((bRam0000000007e3419a & 1) == 0) {
          func_0x03280a18(PTR_DAT_0785dee8);
          func_0x03280a18(PTR_DAT_0785def0);
          func_0x03280a18(PTR_DAT_0774e8c8);
          func_0x03280a18(PTR_DAT_0785def8);
          func_0x03280a18(PTR_DAT_07751038);
          func_0x03280a18(PTR_DAT_07779590);
          bRam0000000007e3419a = 1;
        }
        puVar34 = PTR_DAT_07779590;
        if (plVar25 != (long *)0x0) {
          uVar14 = func_0x057dadc4(plVar25,0);
          puVar24 = *(undefined **)(lVar26 + 0x20);
          if (*(int *)(*(long *)puVar34 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar34);
          }
          uVar9 = func_0x0727e0ec(uVar14,puVar24);
          plVar28 = (long *)(ulong)(uVar9 & 1);
          puVar34 = &UNK_0728539c;
          goto code_r0x0727dc78;
        }
        func_0x03280cac();
        func_0x03280cac();
        lVar13 = 0;
        while( true ) {
          func_0x03280ca4(lVar13);
          auVar35 = func_0x03280cac();
          uVar14 = auVar35._0_8_;
          if (auVar35._8_4_ != 1) break;
          plVar25 = (long *)func_0x072ce910(uVar14);
          lVar13 = *plVar25;
          func_0x072ce920();
          uVar21 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar27 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar22 * 0x10 + 0x138);
                goto code_r0x072854e8;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          lVar31 = 0;
          puVar27 = (undefined8 *)func_0x03256b10(0x7e34000);
code_r0x072854e8:
          plVar25 = (long *)(*(code *)*puVar27)(0x7e34000,puVar27[1]);
          if (lVar13 == 0) {
            return plVar25;
          }
        }
        uVar21 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar27 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar22 * 0x10 + 0x138);
              goto code_r0x072855b0;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        lVar31 = 0;
        puVar27 = (undefined8 *)func_0x03256b10(0x7e34000);
code_r0x072855b0:
        (*(code *)*puVar27)(0x7e34000,puVar27[1]);
        func_0x03365958(uVar14);
        func_0x03280ca4(0);
        auVar37 = func_0x02f09514();
        puVar34 = PTR_DAT_0785dec8;
        lVar26 = auVar37._8_8_;
        lVar13 = auVar37._0_8_;
        *(undefined **)(puVar4 + -0x70) = &UNK_072855d4;
        *(undefined **)(puVar4 + -0x68) = unaff_x25;
        *(undefined **)(puVar4 + -0x60) = unaff_x24;
        *(undefined1 **)(puVar4 + -0x58) = puVar30;
        *(long **)(puVar4 + -0x50) = plVar28;
        *(undefined8 *)(puVar4 + -0x48) = uVar14;
        *(undefined8 *)(puVar4 + -0x40) = 0;
        *(undefined8 *)(puVar4 + -0x38) = 0x7e34000;
        plVar25 = (long *)0x7e34000;
        if ((bRam0000000007e3419b & 1) == 0) {
          func_0x03280a18(PTR_DAT_0785dec8);
          func_0x03280a18(PTR_DAT_0785df00);
          func_0x03280a18(PTR_DAT_0785ded0);
          func_0x03280a18(PTR_DAT_0785ded8);
          func_0x03280a18(PTR_DAT_0774e5a0);
          func_0x03280a18(PTR_DAT_0785df08);
          bRam0000000007e3419b = 1;
        }
        plVar28 = (long *)func_0x03e0c264(lVar26,*(undefined8 *)puVar34);
        puVar17 = PTR_DAT_0785df00;
        puVar24 = PTR_DAT_0785ded8;
        if (((ulong)plVar28 & 1) == 0) {
code_r0x07285770:
          if (lVar26 != 0) {
            if (0 < *(int *)(lVar26 + 0x18)) {
              plVar25 = (long *)0x0;
              do {
                puVar18 = (undefined *)func_0x0414419c(lVar26,plVar25,*(undefined8 *)puVar24);
                unaff_x24 = puVar24;
                if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x07285808;
                plVar28 = (long *)func_0x041447fc(*(long *)(lVar13 + 0x10),puVar18,
                                                  *(undefined8 *)puVar17);
                puVar34 = puVar18;
                if (((ulong)plVar28 & 1) != 0) {
                  if ((puVar18 == (undefined *)0x0) ||
                     (lVar20 = *(long *)(puVar18 + 0x18), lVar20 == 0)) goto code_r0x07285808;
                  plVar28 = (long *)(**(code **)(lVar20 + 0x18))
                                              (*(undefined8 *)(lVar20 + 0x40),lVar31,
                                               *(undefined8 *)(lVar20 + 0x28));
                }
                uVar9 = (int)plVar25 + 1;
                plVar25 = (long *)(ulong)uVar9;
              } while ((int)uVar9 < *(int *)(lVar26 + 0x18));
            }
            return plVar28;
          }
code_r0x07285808:
          func_0x03280cac();
          plVar28 = plVar25;
          puVar17 = puVar34;
code_r0x0728580c:
          func_0x03280cb4();
        }
        else {
          if (*(int *)(lVar13 + 0x30) != 2) {
            if (*(int *)(lVar13 + 0x30) != 1) goto code_r0x07285770;
            uVar14 = func_0x03280a2c(PTR_DAT_0774e5a0);
            lVar26 = func_0x03280afc(uVar14,1);
            func_0x02f0b18c(lVar31);
            uVar14 = func_0x057dadc4(lVar31,0);
            func_0x02f0b18c(lVar26);
            func_0x02f176b4(lVar26,uVar14);
            func_0x02f0965c(lVar26,0,uVar14);
            uVar14 = func_0x03280a2c(PTR_DAT_0785df08);
            lVar31 = func_0x0727df38(uVar14,lVar26);
            uVar14 = func_0x03280a2c(PTR_DAT_0785df10);
            func_0x03280b7c(lVar31,uVar14);
          }
          plVar28 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
          if ((lVar31 == 0) ||
             (puVar17 = (undefined *)func_0x057dadc4(lVar31,0), plVar25 = plVar28,
             plVar28 == (long *)0x0)) goto code_r0x07285808;
          if ((puVar17 == (undefined *)0x0) ||
             (lVar20 = func_0x03280b90(puVar17,*(undefined8 *)(*plVar28 + 0x40)), lVar20 != 0)) {
            if ((int)plVar28[3] != 0) {
              plVar28 = plVar28 + 4;
              *plVar28 = (long)puVar17;
code_r0x032809c4:
              if (iRam00000000080486b8 != 0) {
                puVar1 = (ulong *)(((ulong)plVar28 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                do {
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar8) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar28 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              return plVar28;
            }
            goto code_r0x0728580c;
          }
        }
        uVar14 = func_0x03280cd0();
        auVar37 = func_0x03280b7c(uVar14,0);
        *(undefined **)(puVar4 + -0x80) = &UNK_0728581c;
        lVar20 = *(long *)(auVar37._0_8_ + 0x18);
        if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar28 = (long *)(**(code **)(lVar20 + 0x18))
                                      (*(undefined8 *)(lVar20 + 0x40),auVar37._8_8_,
                                       *(undefined8 *)(lVar20 + 0x28));
          return plVar28;
        }
        plVar25 = (long *)func_0x03280cac();
        puVar24 = PTR_DAT_0785df18;
        puVar7 = puVar4 + -0xc0;
        *(undefined **)(puVar4 + -0xc0) = &UNK_07285840;
        *(undefined **)(puVar4 + -0xb0) = unaff_x24;
        *(undefined **)(puVar4 + -0xa8) = puVar17;
        *(long **)(puVar4 + -0xa0) = plVar28;
        *(long *)(puVar4 + -0x98) = lVar13;
        *(long *)(puVar4 + -0x90) = lVar26;
        *(long *)(puVar4 + -0x88) = lVar31;
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
        plVar28 = (long *)(ulong)*(byte *)((long)plVar25 + 0x34);
        puVar34 = &UNK_072858f0;
code_r0x0727dc78:
        if (((ulong)plVar28 & 1) != 0) {
          return plVar28;
        }
        *(undefined **)(puVar7 + -0x10) = puVar34;
        *(undefined **)(puVar7 + -8) = puVar24;
        uVar14 = func_0x03280a2c(PTR_DAT_0785dbe8);
        puVar34 = PTR_DAT_0777c990;
        *(undefined **)(puVar7 + -0x30) = &UNK_0727dc94;
        *(long *)(puVar7 + -0x28) = lVar26;
        *(long **)(puVar7 + -0x20) = plVar25;
        *(undefined **)(puVar7 + -0x18) = puVar24;
        if ((bRam0000000007e34146 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c990);
          bRam0000000007e34146 = 1;
        }
        plVar28 = (long *)func_0x03280ca0(*(undefined8 *)puVar34);
        func_0x072c77f8(plVar28,uVar14,0);
        return plVar28;
      }
    }
  }
  lVar26 = func_0x03280cac();
  puVar27 = (undefined8 *)PTR_DAT_077e7650;
  pcStack_a0 = MergeEngine_ECS_Systems_PersistenceSystem__CreateSerializationCache;
  uStack_80 = 0x7e25000;
  plVar23 = (long *)0x7e25000;
  puStack_98 = unaff_x25;
  puStack_90 = unaff_x24;
  puStack_88 = unaff_x23;
  puStack_78 = puVar16;
  plStack_70 = plVar25;
  lStack_68 = lVar13;
  if ((bRam0000000007e25518 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07752c80);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077e7658);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077e7660);
    func_0x03280a18(PTR_DAT_077e7650);
    bRam0000000007e25518 = 1;
  }
  lVar13 = func_0x03eb6ac8(lVar26,*puVar27);
  plVar29 = (long *)PTR_DAT_0774e8c8;
  puVar24 = unaff_x23;
  puVar18 = unaff_x24;
  puVar17 = unaff_x25;
  if (lVar13 == 0) {
LAB_0638c0ec:
    plVar29 = plVar28;
    func_0x03280cac();
    unaff_x23 = puVar24;
    unaff_x24 = puVar18;
    unaff_x25 = puVar17;
  }
  else {
    plVar23 = (long *)func_0x04545bc8(lVar13,*(undefined8 *)PTR_DAT_077e7660);
    puVar18 = PTR_DAT_077e7658;
    puVar17 = PTR_DAT_07752c80;
    puVar24 = PTR_DAT_0774e8e0;
    if (plVar23 != (long *)0x0) {
LAB_0638bf88:
      lVar13 = *plVar23;
      uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar24) {
            puVar16 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_0638bfd4;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar24,0);
LAB_0638bfd4:
      plVar28 = (long *)(*(code *)*puVar16)(plVar23,puVar16[1]);
      if (((ulong)plVar28 & 1) == 0) {
        lVar26 = 0;
        goto LAB_0638c06c;
      }
      lVar13 = *plVar23;
      uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar18) {
            puVar27 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_0638c030;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar27 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar18,0);
LAB_0638c030:
      puVar27 = (undefined8 *)(*(code *)*puVar27)(plVar23,puVar27[1]);
      func_0x0638cd34(lVar26,puVar27);
      if (puVar27 != (undefined8 *)0x0) {
        if (*(long *)(lVar26 + 0x78) == 0) goto LAB_0638c0e8;
        func_0x053c1024(*(long *)(lVar26 + 0x78),puVar27[6],*(undefined8 *)puVar17);
        goto LAB_0638bf88;
      }
      func_0x03280cac();
LAB_0638c0e8:
      func_0x03280cac();
      plVar28 = plVar29;
      goto LAB_0638c0ec;
    }
  }
  puVar17 = unaff_x25;
  puVar18 = unaff_x24;
  puVar24 = unaff_x23;
  func_0x03280cac();
  while( true ) {
    auVar35 = func_0x03280ca4(lVar26);
    uStack_a8 = auVar35._0_8_;
    if (auVar35._8_4_ != 1) break;
    plVar28 = (long *)func_0x072ce910();
    lVar26 = *plVar28;
    plVar28 = (long *)func_0x072ce920();
LAB_0638c06c:
    if (plVar23 != (long *)0x0) {
      lVar13 = *plVar23;
      uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *plVar29) {
            puVar16 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_0638c0bc;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar23,*plVar29,0);
LAB_0638c0bc:
      plVar28 = (long *)(*(code *)*puVar16)(plVar23,puVar16[1]);
    }
    if (lVar26 == 0) {
      return plVar28;
    }
  }
  if (plVar23 != (long *)0x0) {
    lVar13 = *plVar23;
    uVar21 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *plVar29) {
          puVar16 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0638c18c;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar23,*plVar29,0);
LAB_0638c18c:
    (*(code *)*puVar16)(plVar23,puVar16[1]);
  }
  func_0x03365958(uStack_a8);
  func_0x03280ca4(0);
  func_0x02f09514();
  ppcVar6 = apcStack_d0;
  apcStack_d0[0] = MergeEngine_ECS_Systems_PersistenceSystem__EntityCreated;
  uStack_c0 = 0;
  plVar25 = (long *)0x7e25000;
  plStack_b8 = plVar23;
  if ((bRam0000000007e2550f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7668);
    bRam0000000007e2550f = 1;
  }
  if (extraout_x1 != 0) {
    plVar28 = (long *)func_0x03d20d84(extraout_x1,*(undefined8 *)PTR_DAT_077e7668);
    if (plVar28 != (long *)0x0) {
      *(undefined1 *)(plVar28 + 5) = 1;
    }
    return plVar28;
  }
  puVar34 = &UNK_0638c210;
  auVar36 = func_0x03280cac();
  lVar13 = 0;
  plVar28 = plVar29;
  unaff_x23 = puVar24;
  unaff_x24 = puVar18;
  unaff_x25 = puVar17;
code_r0x0638c210:
  lVar26 = auVar36._0_8_;
  puVar5 = (undefined1 *)((long)ppcVar6 + -0xc0);
  *(undefined **)((long)ppcVar6 + -0x60) = unaff_x29;
  *(undefined **)((long)ppcVar6 + -0x58) = puVar34;
  *(undefined8 *)((long)ppcVar6 + -0x50) = unaff_x28;
  *(undefined8 *)((long)ppcVar6 + -0x48) = unaff_x27;
  *(undefined **)((long)ppcVar6 + -0x40) = unaff_x26;
  *(undefined **)((long)ppcVar6 + -0x38) = unaff_x25;
  *(undefined **)((long)ppcVar6 + -0x30) = unaff_x24;
  *(undefined **)((long)ppcVar6 + -0x28) = unaff_x23;
  *(long **)((long)ppcVar6 + -0x20) = plVar28;
  *(undefined8 **)((long)ppcVar6 + -0x18) = puVar27;
  *(long **)((long)ppcVar6 + -0x10) = plVar25;
  *(long *)((long)ppcVar6 + -8) = lVar13;
  lVar13 = 0x7e25000;
  if ((bRam0000000007e25511 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e7670);
    func_0x03280a18(PTR_DAT_077e7678);
    func_0x03280a18(PTR_DAT_07750ca0);
    func_0x03280a18(PTR_DAT_07750ca8);
    func_0x03280a18(PTR_DAT_077e7680);
    func_0x03280a18(PTR_DAT_077e7688);
    func_0x03280a18(PTR_DAT_07750cb0);
    func_0x03280a18(PTR_DAT_0777ac98);
    func_0x03280a18(PTR_DAT_0777aca0);
    func_0x03280a18(PTR_DAT_077e7690);
    func_0x03280a18(PTR_DAT_07750cc0);
    bRam0000000007e25511 = 1;
  }
  puVar33 = PTR_DAT_077e7690;
  puVar32 = PTR_DAT_077e7680;
  puVar18 = PTR_DAT_077e7670;
  puVar17 = PTR_DAT_0777aca0;
  puVar24 = PTR_DAT_0777ac98;
  puVar34 = PTR_DAT_07750ca8;
  *(undefined8 *)((long)ppcVar6 + -0x80) = 0;
  *(undefined8 *)((long)ppcVar6 + -0x78) = 0;
  *(undefined8 *)((long)ppcVar6 + -0x70) = 0;
  *(undefined8 *)((long)ppcVar6 + -0xa0) = 0;
  *(undefined8 *)((long)ppcVar6 + -0x98) = 0;
  *(undefined8 *)((long)ppcVar6 + -0x90) = 0;
  plVar23 = (long *)0x0;
  if (auVar36._8_8_ == 0) goto code_r0x0638c5a4;
  func_0x04145068((undefined1 *)((long)ppcVar6 + -0xb8),auVar36._8_8_,
                  *(undefined8 *)PTR_DAT_07750cc0);
  *(undefined8 *)((long)ppcVar6 + -0x78) = *(undefined8 *)((long)ppcVar6 + -0xb0);
  *(undefined8 *)((long)ppcVar6 + -0x80) = *(undefined8 *)((long)ppcVar6 + -0xb8);
  *(undefined8 *)((long)ppcVar6 + -0x70) = *(undefined8 *)((long)ppcVar6 + -0xa8);
  lVar20 = lVar13;
code_r0x0638c338:
  do {
    uVar21 = func_0x051159b4((undefined1 *)((long)ppcVar6 + -0x80),*(undefined8 *)puVar34);
    if ((uVar21 & 1) == 0) {
      plVar28 = (long *)func_0x051159b0((undefined1 *)((long)ppcVar6 + -0x80),
                                        *(undefined8 *)PTR_DAT_07750ca0);
      return plVar28;
    }
    plVar23 = *(long **)((long)ppcVar6 + -0x70);
    lVar13 = MergeEngine_ECS_Systems_PersistenceSystem__GetPersistentKey(lVar26,plVar23);
    plVar28 = *(long **)(lVar26 + 0x40);
    if (plVar28 == (long *)0x0) goto code_r0x0638c58c;
    lVar20 = *plVar28;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar17) {
          puVar27 = (undefined8 *)(lVar20 + (long)(*piVar22 + 6) * 0x10 + 0x138);
          goto code_r0x0638c3b4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar27 = (undefined8 *)func_0x03256b10(plVar28,*(long *)puVar17,6);
code_r0x0638c3b4:
    uVar21 = (*(code *)*puVar27)(plVar28,lVar13,puVar27[1]);
    lVar20 = lVar13;
  } while ((uVar21 & 1) == 0);
  plVar28 = *(long **)(lVar26 + 0x40);
  if (plVar28 == (long *)0x0) goto code_r0x0638c594;
  lVar31 = *(long *)puVar24;
  lVar20 = *plVar28;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)(lVar31 + 0x20)) {
        lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar31 + 0x50)) * 0x10 + 0x138;
        goto code_r0x0638c424;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  lVar20 = func_0x03256b10(plVar28);
code_r0x0638c424:
  lVar20 = func_0x03280b88(*(undefined8 *)(lVar20 + 8),lVar31);
  lVar20 = (**(code **)(lVar20 + 8))(plVar28,lVar13,1,lVar20);
  if (lVar20 == 0) goto code_r0x0638c598;
  if (*(long *)(lVar20 + 0x10) == 0) goto code_r0x0638c590;
  func_0x04145068((undefined1 *)((long)ppcVar6 + -0xb8),*(long *)(lVar20 + 0x10),
                  *(undefined8 *)puVar33);
  *(undefined8 *)((long)ppcVar6 + -0x98) = *(undefined8 *)((long)ppcVar6 + -0xb0);
  *(undefined8 *)((long)ppcVar6 + -0xa0) = *(undefined8 *)((long)ppcVar6 + -0xb8);
  *(undefined8 *)((long)ppcVar6 + -0x90) = *(undefined8 *)((long)ppcVar6 + -0xa8);
  while( true ) {
    uVar21 = func_0x051159b4((undefined1 *)((long)ppcVar6 + -0xa0),*(undefined8 *)puVar32);
    if ((uVar21 & 1) == 0) goto code_r0x0638c4b8;
    if (*(long *)(lVar26 + 0x70) == 0) break;
    lVar13 = *(long *)((long)ppcVar6 + -0x90);
    lVar20 = func_0x04fe2cfc(*(long *)(lVar26 + 0x70),plVar23,*(undefined8 *)puVar18);
    if (lVar20 == 0) {
      auVar37 = func_0x03280cac();
      goto code_r0x0638c564;
    }
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),lVar13,*(undefined8 *)(lVar20 + 0x28));
  }
  auVar37 = func_0x03280cac();
code_r0x0638c564:
  while( true ) {
    plVar25 = auVar37._8_8_;
    func_0x051159b0((undefined1 *)((long)ppcVar6 + -0xa0),*(undefined8 *)PTR_DAT_077e7678);
    if (lVar13 == 0) break;
    func_0x03280ca4(lVar13);
    lVar20 = lVar13;
code_r0x0638c58c:
    lVar13 = lVar20;
    func_0x03280cac();
code_r0x0638c590:
    func_0x03280cac();
code_r0x0638c594:
    func_0x03280cac();
code_r0x0638c598:
    func_0x03280cac();
    func_0x03280ca4(lVar13);
    unaff_x24 = puVar32;
    unaff_x25 = puVar18;
    unaff_x26 = puVar34;
    unaff_x29 = puVar33;
code_r0x0638c5a4:
    puVar33 = unaff_x29;
    puVar34 = unaff_x26;
    puVar18 = unaff_x25;
    puVar32 = unaff_x24;
    auVar37 = func_0x03280cac();
  }
  if (auVar37._8_4_ != 1) {
    do {
      uVar14 = auVar37._0_8_;
      if (auVar37._8_4_ == 1) {
        plVar28 = (long *)func_0x072ce910();
        lVar13 = *plVar28;
        func_0x072ce920();
        plVar28 = (long *)func_0x051159b0((undefined1 *)((long)ppcVar6 + -0x80),
                                          *(undefined8 *)PTR_DAT_07750ca0);
        if (lVar13 == 0) {
          return plVar28;
        }
        uVar14 = func_0x03280ca4(lVar13);
      }
      func_0x051159b0((undefined1 *)((long)ppcVar6 + -0x80),*(undefined8 *)PTR_DAT_07750ca0);
      func_0x03365958(uVar14);
      func_0x03280ca4(0);
      auVar37 = func_0x02f09514();
    } while( true );
  }
  puVar27 = (undefined8 *)func_0x072ce910();
  uVar14 = func_0x03280a2c(PTR_DAT_0774e4d8);
  uVar21 = func_0x032810d8(uVar14,*(undefined8 *)*puVar27);
  if ((uVar21 & 1) != 0) {
    uVar14 = *puVar27;
    func_0x072ce920();
    plVar28 = (long *)func_0x03280a2c(PTR_DAT_077e7698);
    *(undefined **)((long)ppcVar6 + -0xf0) = &UNK_0638c664;
    *(long **)((long)ppcVar6 + -0xe0) = plVar25;
    *(undefined8 *)((long)ppcVar6 + -0xd8) = uVar14;
    *(long **)((long)ppcVar6 + -0xd0) = plVar23;
    *(long *)((long)ppcVar6 + -200) = lVar26;
    if ((bRam0000000007e1cd68 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e5d8,plVar23,0);
      bRam0000000007e1cd68 = 1;
    }
    if ((plVar28 == (long *)0x0) || ((int)plVar28[2] == 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((plVar23 == (long *)0x0) || ((int)plVar23[2] == 0)) {
      if (bVar8) {
        plVar28 = (long *)**(long **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
      }
      return plVar28;
    }
    if (bVar8) {
      return plVar23;
    }
    if (plVar28 == (long *)0x0) {
      auVar36 = func_0x03280cac();
      lVar13 = auVar36._8_8_;
      lVar26 = auVar36._0_8_;
      if (lVar26 == lVar13) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
        if ((lVar26 != 0) && (lVar13 != 0)) {
          if (*(int *)(lVar26 + 0x10) == *(int *)(lVar13 + 0x10)) {
            lVar20 = lVar26 + 0x14;
            lVar13 = lVar13 + 0x14;
            lVar26 = (long)*(int *)(lVar26 + 0x10) << 1;
            *(undefined **)((long)ppcVar6 + -0x130) = &SUB_055ea870;
            *(undefined **)((long)ppcVar6 + -0x120) = puVar32;
            *(undefined1 (*) [16])((long)ppcVar6 + -0x118) = auVar37;
            *(undefined8 *)((long)ppcVar6 + -0x108) = 0x7e1c000;
            *(long **)((long)ppcVar6 + -0x100) = plVar23;
            *(undefined8 *)((long)ppcVar6 + -0xf8) = 0;
            if (lVar20 != lVar13) {
              lVar31 = func_0x057e39f8(0,0,lVar26,0);
              uVar14 = func_0x057e3a04(lVar26,0);
              uVar21 = func_0x057e3a10(uVar14,0);
              if (7 < uVar21) {
                lVar26 = func_0x057e3a24(uVar14,8,0);
                while( true ) {
                  uVar21 = func_0x057e3a10(lVar26,0);
                  uVar12 = func_0x057e3a10(lVar31,0);
                  if (uVar21 <= uVar12) {
                    return (long *)(ulong)(*(long *)(lVar20 + lVar26) == *(long *)(lVar13 + lVar26))
                    ;
                  }
                  uVar21 = func_0x057f2854(*(undefined8 *)(lVar20 + lVar31),
                                           *(undefined8 *)(lVar13 + lVar31),0);
                  if ((uVar21 & 1) != 0) break;
                  lVar31 = func_0x057e3a1c(lVar31,8,0);
                }
                return (long *)0x0;
              }
              uVar21 = func_0x057e3a10(uVar14,0);
              uVar12 = func_0x057e3a10(lVar31,0);
              if (uVar12 < uVar21) {
                do {
                  bVar8 = *(char *)(lVar20 + lVar31) == *(char *)(lVar13 + lVar31);
                  plVar28 = (long *)(ulong)bVar8;
                  if (!bVar8) {
                    return plVar28;
                  }
                  lVar31 = func_0x057e3a1c(lVar31,1,0);
                  uVar21 = func_0x057e3a10(uVar14,0);
                  uVar12 = func_0x057e3a10(lVar31,0);
                } while (uVar12 < uVar21);
                return plVar28;
              }
            }
            return (long *)0x1;
          }
          uVar9 = 0;
        }
      }
      return (long *)(ulong)uVar9;
    }
    lVar13 = plVar28[2];
    plVar25 = (long *)func_0x032bc400((int)plVar23[2] + (int)lVar13);
    func_0x055f73c0(plVar25,0,plVar28);
    func_0x055f73c0(plVar25,(int)lVar13,plVar23);
    return plVar25;
  }
  puVar16 = (undefined8 *)func_0x072ce930(8);
  *puVar16 = *puVar27;
  func_0x072ce940(puVar16,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28,0);
  lVar13 = func_0x03280a2c(PTR_DAT_0777ac30);
  plVar28 = plVar23;
  unaff_x24 = puVar32;
  unaff_x25 = puVar18;
  unaff_x26 = puVar34;
  unaff_x29 = puVar33;
  puVar34 = &UNK_0638c724;
  goto code_r0x03ea4d6c;
code_r0x0638c4b8:
  lVar20 = 0;
  func_0x051159b0((undefined1 *)((long)ppcVar6 + -0xa0),*(undefined8 *)PTR_DAT_077e7678);
  goto code_r0x0638c338;
}

