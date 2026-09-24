/* Ghidra 12.1.2 native pseudocode; RVA 0x6280FB0; MergeEngine.ECS.Systems.InventorySystem.IsItemInInventory; status ok */

/* WARNING: Possible PIC construction at 0x06381090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06381230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06381470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0638148c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x063814a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x063814f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06381718: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x063818c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06381c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06381ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea52cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x063828cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06382078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x063822a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x063828d0) */
/* WARNING: Removing unreachable block (ram,0x06381cd0) */
/* WARNING: Removing unreachable block (ram,0x06381c50) */
/* WARNING: Removing unreachable block (ram,0x06381c60) */
/* WARNING: Removing unreachable block (ram,0x06381c78) */
/* WARNING: Removing unreachable block (ram,0x06381c80) */
/* WARNING: Removing unreachable block (ram,0x06381ca8) */
/* WARNING: Removing unreachable block (ram,0x06381c8c) */
/* WARNING: Removing unreachable block (ram,0x06381c98) */
/* WARNING: Removing unreachable block (ram,0x06381cb8) */
/* WARNING: Removing unreachable block (ram,0x06381ce0) */
/* WARNING: Removing unreachable block (ram,0x06381cfc) */
/* WARNING: Removing unreachable block (ram,0x06381d40) */
/* WARNING: Removing unreachable block (ram,0x06381d88) */
/* WARNING: Removing unreachable block (ram,0x06381d9c) */
/* WARNING: Removing unreachable block (ram,0x06381da0) */
/* WARNING: Removing unreachable block (ram,0x0556c434) */
/* WARNING: Removing unreachable block (ram,0x0556c474) */
/* WARNING: Removing unreachable block (ram,0x0556c494) */
/* WARNING: Removing unreachable block (ram,0x0556c4a0) */
/* WARNING: Removing unreachable block (ram,0x0556c4a4) */
/* WARNING: Removing unreachable block (ram,0x0556c4b0) */
/* WARNING: Removing unreachable block (ram,0x0556c4c4) */
/* WARNING: Removing unreachable block (ram,0x0556c4d0) */
/* WARNING: Removing unreachable block (ram,0x0556c4d8) */
/* WARNING: Removing unreachable block (ram,0x0556c4e4) */
/* WARNING: Removing unreachable block (ram,0x0556c4ec) */
/* WARNING: Removing unreachable block (ram,0x0556c4f8) */
/* WARNING: Removing unreachable block (ram,0x0556c548) */
/* WARNING: Removing unreachable block (ram,0x0556c500) */
/* WARNING: Removing unreachable block (ram,0x0556c518) */
/* WARNING: Removing unreachable block (ram,0x0556c520) */
/* WARNING: Removing unreachable block (ram,0x0556c560) */
/* WARNING: Removing unreachable block (ram,0x0556c52c) */
/* WARNING: Removing unreachable block (ram,0x0556c538) */
/* WARNING: Removing unreachable block (ram,0x0556c570) */
/* WARNING: Removing unreachable block (ram,0x06381d48) */
/* WARNING: Removing unreachable block (ram,0x06381de8) */
/* WARNING: Removing unreachable block (ram,0x06381d78) */
/* WARNING: Removing unreachable block (ram,0x06381e90) */
/* WARNING: Removing unreachable block (ram,0x06381edc) */
/* WARNING: Removing unreachable block (ram,0x06381f8c) */
/* WARNING: Removing unreachable block (ram,0x06382000) */
/* WARNING: Removing unreachable block (ram,0x0638200c) */
/* WARNING: Removing unreachable block (ram,0x072cdd3c) */
/* WARNING: Removing unreachable block (ram,0x0638201c) */
/* WARNING: Removing unreachable block (ram,0x0638207c) */
/* WARNING: Removing unreachable block (ram,0x06382090) */
/* WARNING: Removing unreachable block (ram,0x063820ac) */
/* WARNING: Removing unreachable block (ram,0x063820b4) */
/* WARNING: Removing unreachable block (ram,0x063820dc) */
/* WARNING: Removing unreachable block (ram,0x063820c0) */
/* WARNING: Removing unreachable block (ram,0x063820cc) */
/* WARNING: Removing unreachable block (ram,0x063820e8) */
/* WARNING: Removing unreachable block (ram,0x06382104) */
/* WARNING: Removing unreachable block (ram,0x06382020) */
/* WARNING: Removing unreachable block (ram,0x06382028) */
/* WARNING: Removing unreachable block (ram,0x06382034) */
/* WARNING: Removing unreachable block (ram,0x06381cc8) */
/* WARNING: Removing unreachable block (ram,0x063818c4) */
/* WARNING: Removing unreachable block (ram,0x063818e8) */
/* WARNING: Removing unreachable block (ram,0x0638192c) */
/* WARNING: Removing unreachable block (ram,0x0638194c) */
/* WARNING: Removing unreachable block (ram,0x06381974) */
/* WARNING: Removing unreachable block (ram,0x0638197c) */
/* WARNING: Removing unreachable block (ram,0x063819a4) */
/* WARNING: Removing unreachable block (ram,0x06381988) */
/* WARNING: Removing unreachable block (ram,0x06381994) */
/* WARNING: Removing unreachable block (ram,0x063819b4) */
/* WARNING: Removing unreachable block (ram,0x063819e8) */
/* WARNING: Removing unreachable block (ram,0x06381a08) */
/* WARNING: Removing unreachable block (ram,0x06381a28) */
/* WARNING: Removing unreachable block (ram,0x06381a30) */
/* WARNING: Removing unreachable block (ram,0x06381a58) */
/* WARNING: Removing unreachable block (ram,0x06381a3c) */
/* WARNING: Removing unreachable block (ram,0x06381a48) */
/* WARNING: Removing unreachable block (ram,0x06381a68) */
/* WARNING: Removing unreachable block (ram,0x06381a9c) */
/* WARNING: Removing unreachable block (ram,0x06381ae8) */
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
/* WARNING: Removing unreachable block (ram,0x0638171c) */
/* WARNING: Removing unreachable block (ram,0x06381740) */
/* WARNING: Removing unreachable block (ram,0x063814f8) */
/* WARNING: Removing unreachable block (ram,0x0638151c) */
/* WARNING: Removing unreachable block (ram,0x06381560) */
/* WARNING: Removing unreachable block (ram,0x06381580) */
/* WARNING: Removing unreachable block (ram,0x063815a8) */
/* WARNING: Removing unreachable block (ram,0x063815b0) */
/* WARNING: Removing unreachable block (ram,0x063815d8) */
/* WARNING: Removing unreachable block (ram,0x063815bc) */
/* WARNING: Removing unreachable block (ram,0x063815c8) */
/* WARNING: Removing unreachable block (ram,0x063815e8) */
/* WARNING: Removing unreachable block (ram,0x0638161c) */
/* WARNING: Removing unreachable block (ram,0x0638163c) */
/* WARNING: Removing unreachable block (ram,0x0638165c) */
/* WARNING: Removing unreachable block (ram,0x06381664) */
/* WARNING: Removing unreachable block (ram,0x0638168c) */
/* WARNING: Removing unreachable block (ram,0x06381670) */
/* WARNING: Removing unreachable block (ram,0x0638167c) */
/* WARNING: Removing unreachable block (ram,0x0638169c) */
/* WARNING: Removing unreachable block (ram,0x063816d0) */
/* WARNING: Removing unreachable block (ram,0x063814ac) */
/* WARNING: Removing unreachable block (ram,0x063814d0) */
/* WARNING: Removing unreachable block (ram,0x06381490) */
/* WARNING: Removing unreachable block (ram,0x06381474) */
/* WARNING: Removing unreachable block (ram,0x06381234) */
/* WARNING: Removing unreachable block (ram,0x06381094) */
/* WARNING: Removing unreachable block (ram,0x06381098) */
/* WARNING: Removing unreachable block (ram,0x063822a4) */
/* WARNING: Removing unreachable block (ram,0x06382124) */
/* WARNING: Removing unreachable block (ram,0x06382134) */
/* WARNING: Removing unreachable block (ram,0x0638213c) */
/* WARNING: Removing unreachable block (ram,0x06382164) */
/* WARNING: Removing unreachable block (ram,0x06382148) */
/* WARNING: Removing unreachable block (ram,0x06382154) */
/* WARNING: Removing unreachable block (ram,0x06382170) */
/* WARNING: Removing unreachable block (ram,0x063822c0) */
/* WARNING: Removing unreachable block (ram,0x06382180) */
/* WARNING: Removing unreachable block (ram,0x06382190) */
/* WARNING: Removing unreachable block (ram,0x06382198) */
/* WARNING: Removing unreachable block (ram,0x063821c0) */
/* WARNING: Removing unreachable block (ram,0x063821a4) */
/* WARNING: Removing unreachable block (ram,0x063821b0) */
/* WARNING: Removing unreachable block (ram,0x063821cc) */
/* WARNING: Removing unreachable block (ram,0x063821e0) */
/* WARNING: Removing unreachable block (ram,0x063821f4) */
/* WARNING: Removing unreachable block (ram,0x063821fc) */
/* WARNING: Removing unreachable block (ram,0x06382224) */
/* WARNING: Removing unreachable block (ram,0x06382208) */
/* WARNING: Removing unreachable block (ram,0x06382214) */
/* WARNING: Removing unreachable block (ram,0x06382230) */
/* WARNING: Removing unreachable block (ram,0x06382244) */
/* WARNING: Removing unreachable block (ram,0x0638233c) */
/* WARNING: Removing unreachable block (ram,0x06382260) */
/* WARNING: Removing unreachable block (ram,0x06382340) */
/* WARNING: Removing unreachable block (ram,0x06382344) */
/* WARNING: Removing unreachable block (ram,0x06382348) */
/* WARNING: Removing unreachable block (ram,0x0638234c) */
/* WARNING: Removing unreachable block (ram,0x06382350) */
/* WARNING: Removing unreachable block (ram,0x06382354) */
/* WARNING: Removing unreachable block (ram,0x0638237c) */
/* WARNING: Removing unreachable block (ram,0x06382394) */
/* WARNING: Removing unreachable block (ram,0x063823a4) */
/* WARNING: Removing unreachable block (ram,0x063823a8) */
/* WARNING: Removing unreachable block (ram,0x063823b8) */
/* WARNING: Removing unreachable block (ram,0x063823c0) */
/* WARNING: Removing unreachable block (ram,0x063823e8) */
/* WARNING: Removing unreachable block (ram,0x063823cc) */
/* WARNING: Removing unreachable block (ram,0x063823d8) */
/* WARNING: Removing unreachable block (ram,0x063823f4) */
/* WARNING: Removing unreachable block (ram,0x06382400) */
/* WARNING: Removing unreachable block (ram,0x06382404) */
/* WARNING: Removing unreachable block (ram,0x0638240c) */
/* WARNING: Removing unreachable block (ram,0x06382418) */
/* WARNING: Removing unreachable block (ram,0x06382434) */
/* WARNING: Removing unreachable block (ram,0x0638246c) */
/* WARNING: Removing unreachable block (ram,0x06382474) */
/* WARNING: Removing unreachable block (ram,0x06382490) */
/* WARNING: Removing unreachable block (ram,0x06382498) */
/* WARNING: Removing unreachable block (ram,0x063824c0) */
/* WARNING: Removing unreachable block (ram,0x063824a4) */
/* WARNING: Removing unreachable block (ram,0x063824b0) */
/* WARNING: Removing unreachable block (ram,0x063824d0) */
/* WARNING: Removing unreachable block (ram,0x063824e0) */
/* WARNING: Removing unreachable block (ram,0x063824e8) */
/* WARNING: Removing unreachable block (ram,0x06382538) */
/* WARNING: Removing unreachable block (ram,0x063824f0) */
/* WARNING: Removing unreachable block (ram,0x063824f8) */
/* WARNING: Removing unreachable block (ram,0x06382508) */
/* WARNING: Removing unreachable block (ram,0x06382510) */
/* WARNING: Removing unreachable block (ram,0x06382540) */
/* WARNING: Removing unreachable block (ram,0x0638251c) */
/* WARNING: Removing unreachable block (ram,0x06382528) */
/* WARNING: Removing unreachable block (ram,0x06382550) */
/* WARNING: Removing unreachable block (ram,0x06382560) */
/* WARNING: Removing unreachable block (ram,0x0638256c) */
/* WARNING: Removing unreachable block (ram,0x06382574) */
/* WARNING: Removing unreachable block (ram,0x06382584) */
/* WARNING: Removing unreachable block (ram,0x0638258c) */
/* WARNING: Removing unreachable block (ram,0x063825b4) */
/* WARNING: Removing unreachable block (ram,0x06382598) */
/* WARNING: Removing unreachable block (ram,0x063825a4) */
/* WARNING: Removing unreachable block (ram,0x063825c4) */
/* WARNING: Removing unreachable block (ram,0x063825d4) */
/* WARNING: Removing unreachable block (ram,0x06382604) */
/* WARNING: Removing unreachable block (ram,0x063825dc) */
/* WARNING: Removing unreachable block (ram,0x06382618) */
/* WARNING: Removing unreachable block (ram,0x0638261c) */
/* WARNING: Removing unreachable block (ram,0x06382634) */
/* WARNING: Removing unreachable block (ram,0x06382678) */
/* WARNING: Removing unreachable block (ram,0x06382680) */
/* WARNING: Removing unreachable block (ram,0x06382698) */
/* WARNING: Removing unreachable block (ram,0x063826a0) */
/* WARNING: Removing unreachable block (ram,0x063826c8) */
/* WARNING: Removing unreachable block (ram,0x063826ac) */
/* WARNING: Removing unreachable block (ram,0x063826b8) */
/* WARNING: Removing unreachable block (ram,0x063826d8) */
/* WARNING: Removing unreachable block (ram,0x063826e8) */
/* WARNING: Removing unreachable block (ram,0x063826f4) */
/* WARNING: Removing unreachable block (ram,0x063826fc) */
/* WARNING: Removing unreachable block (ram,0x0638270c) */
/* WARNING: Removing unreachable block (ram,0x06382714) */
/* WARNING: Removing unreachable block (ram,0x0638273c) */
/* WARNING: Removing unreachable block (ram,0x06382720) */
/* WARNING: Removing unreachable block (ram,0x0638272c) */
/* WARNING: Removing unreachable block (ram,0x0638274c) */
/* WARNING: Removing unreachable block (ram,0x0638275c) */
/* WARNING: Removing unreachable block (ram,0x06382824) */
/* WARNING: Removing unreachable block (ram,0x0638282c) */
/* WARNING: Removing unreachable block (ram,0x06382768) */
/* WARNING: Removing unreachable block (ram,0x0638276c) */
/* WARNING: Removing unreachable block (ram,0x06382774) */
/* WARNING: Removing unreachable block (ram,0x06382784) */
/* WARNING: Removing unreachable block (ram,0x0638278c) */
/* WARNING: Removing unreachable block (ram,0x063827b4) */
/* WARNING: Removing unreachable block (ram,0x06382798) */
/* WARNING: Removing unreachable block (ram,0x063827a4) */
/* WARNING: Removing unreachable block (ram,0x063827c4) */
/* WARNING: Removing unreachable block (ram,0x063827d4) */
/* WARNING: Removing unreachable block (ram,0x063827dc) */
/* WARNING: Removing unreachable block (ram,0x063827e4) */
/* WARNING: Removing unreachable block (ram,0x063827f4) */
/* WARNING: Removing unreachable block (ram,0x063827fc) */
/* WARNING: Removing unreachable block (ram,0x06382830) */
/* WARNING: Removing unreachable block (ram,0x06382808) */
/* WARNING: Removing unreachable block (ram,0x06382814) */
/* WARNING: Removing unreachable block (ram,0x06382840) */
/* WARNING: Removing unreachable block (ram,0x06382850) */
/* WARNING: Removing unreachable block (ram,0x06382864) */
/* WARNING: Removing unreachable block (ram,0x06382874) */
/* WARNING: Removing unreachable block (ram,0x063828c0) */
/* WARNING: Removing unreachable block (ram,0x063828a0) */
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
/* WARNING: Removing unreachable block (ram,0x03ea5304) */
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
/* WARNING: Removing unreachable block (ram,0x06382858) */
/* WARNING: Removing unreachable block (ram,0x063825e4) */
/* WARNING: Removing unreachable block (ram,0x0432164c) */
/* WARNING: Removing unreachable block (ram,0x043216c0) */
/* WARNING: Removing unreachable block (ram,0x04321678) */
/* WARNING: Removing unreachable block (ram,0x043216a0) */
/* WARNING: Removing unreachable block (ram,0x04d0e040) */
/* WARNING: Removing unreachable block (ram,0x04d0e050) */
/* WARNING: Removing unreachable block (ram,0x04d0e064) */
/* WARNING: Removing unreachable block (ram,0x04d0e080) */
/* WARNING: Removing unreachable block (ram,0x04d0e06c) */
/* WARNING: Removing unreachable block (ram,0x04321694) */
/* WARNING: Removing unreachable block (ram,0x06382384) */
/* WARNING: Removing unreachable block (ram,0x063822c4) */
/* WARNING: Removing unreachable block (ram,0x063822c8) */
/* WARNING: Removing unreachable block (ram,0x063822d8) */
/* WARNING: Removing unreachable block (ram,0x063822e0) */
/* WARNING: Removing unreachable block (ram,0x06382308) */
/* WARNING: Removing unreachable block (ram,0x063822ec) */
/* WARNING: Removing unreachable block (ram,0x063822f8) */
/* WARNING: Removing unreachable block (ram,0x06382314) */
/* WARNING: Removing unreachable block (ram,0x06382320) */
/* WARNING: Removing unreachable block (ram,0x06382324) */
/* WARNING: Removing unreachable block (ram,0x06382278) */
/* WARNING: Removing unreachable block (ram,0x063822a8) */
/* WARNING: Removing unreachable block (ram,0x06382288) */

undefined8 * MergeEngine_ECS_Systems_InventorySystem__IsItemInInventory(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined1 *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *unaff_x22;
  undefined *puVar21;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = auStack_50;
  if ((bRam0000000007e254be & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a920);
    func_0x03280a18(PTR_DAT_077e6f88);
    func_0x03280a18(PTR_DAT_077e6f90);
    func_0x03280a18(PTR_DAT_077e6f98);
    func_0x03280a18(PTR_DAT_077e6fa0);
    bRam0000000007e254be = 1;
  }
  puVar20 = PTR_DAT_077e6f90;
  puVar19 = PTR_DAT_077e6f88;
  puVar21 = PTR_DAT_0777a920;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  puVar10 = (undefined8 *)0x7e25000;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar6 != 0)) {
    func_0x04145068(&uStack_48,lVar6,*(undefined8 *)PTR_DAT_077e6fa0);
    do {
      uVar7 = func_0x051159b4(&uStack_48,*(undefined8 *)puVar20);
      uVar18 = uVar7 & 0xffffffff;
      if ((uVar7 & 1) == 0) {
        iVar17 = 7;
        func_0x051159b0(&uStack_48,*(undefined8 *)puVar19);
        goto LAB_063810b0;
      }
    } while (lStack_38 == 0);
    lVar6 = func_0x03d20d84(lStack_38,*(undefined8 *)puVar21);
    if (lVar6 != 0) {
      uVar8 = *(ulong *)(lVar6 + 0x30);
      uVar22 = 0x6381094;
      uVar7 = param_2;
      goto SUB_055ea870;
    }
    func_0x03280cac();
    puVar10 = (undefined8 *)puVar19;
    unaff_x22 = puVar20;
    unaff_x23 = puVar21;
  }
  auVar24 = func_0x03280cac();
  uVar22 = auVar24._0_8_;
  if (auVar24._8_4_ == 1) {
    plVar9 = (long *)func_0x072ce910(uVar22);
    lVar6 = *plVar9;
    func_0x072ce920();
    func_0x051159b0(&uStack_48,*puVar10);
    if (lVar6 == 0) {
      iVar17 = 0;
      uVar18 = 0;
LAB_063810b0:
      return (undefined8 *)(ulong)((uint)uVar18 & (uint)(iVar17 == 6));
    }
    uVar22 = func_0x03280ca4(lVar6);
  }
  else {
    lVar6 = 0;
  }
  func_0x051159b0(&uStack_48,*puVar10);
  if (lVar6 == 0) {
    func_0x03365958(uVar22);
  }
  func_0x03280ca4(lVar6);
  auVar25 = func_0x02f09514();
  param_2 = auVar25._8_8_;
  uVar7 = auVar25._0_8_;
  puVar3 = auStack_a0;
  uStack_80 = 0x6381150;
  puStack_78 = unaff_x23;
  puStack_70 = unaff_x22;
  puStack_68 = puVar10;
  lStack_60 = lVar6;
  uStack_58 = uVar22;
  if ((bRam0000000007e254bf & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a920);
    func_0x03280a18(PTR_DAT_077e6f88);
    func_0x03280a18(PTR_DAT_077e6f90);
    func_0x03280a18(PTR_DAT_077e6f98);
    func_0x03280a18(PTR_DAT_077e6fa0);
    bRam0000000007e254bf = 1;
  }
  puVar20 = PTR_DAT_077e6f90;
  puVar19 = PTR_DAT_077e6f88;
  puVar21 = PTR_DAT_0777a920;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  if ((*(long *)(uVar7 + 0x40) == 0) ||
     (lVar6 = *(long *)(*(long *)(uVar7 + 0x40) + 0x28), lVar6 == 0)) {
    func_0x03280cac();
  }
  else {
    func_0x04145068(&uStack_98,lVar6,*(undefined8 *)PTR_DAT_077e6fa0);
    uVar7 = 0;
    do {
      uVar18 = func_0x051159b4(&uStack_98,*(undefined8 *)puVar20);
      if ((uVar18 & 1) == 0) {
        func_0x051159b0(&uStack_98,*(undefined8 *)puVar19);
        goto LAB_0638124c;
      }
    } while (lStack_88 == 0);
    lVar6 = func_0x03d20d84(lStack_88,*(undefined8 *)puVar21);
    unaff_x22 = puVar20;
    unaff_x23 = puVar21;
    if (lVar6 != 0) {
      uVar8 = *(ulong *)(lVar6 + 0x30);
      uVar22 = 0x6381234;
      uVar18 = param_2;
SUB_055ea870:
      if (uVar8 == param_2) {
        uVar14 = 1;
      }
      else {
        uVar14 = 0;
        if ((uVar8 != 0) && (param_2 != 0)) {
          if (*(int *)(uVar8 + 0x10) == *(int *)(param_2 + 0x10)) {
            lVar6 = uVar8 + 0x14;
            lVar11 = param_2 + 0x14;
            lVar13 = (long)*(int *)(uVar8 + 0x10) << 1;
            *(undefined8 *)(puVar3 + -0x40) = uVar22;
            *(undefined8 *)(puVar3 + -0x30) = unaff_x24;
            *(undefined **)(puVar3 + -0x28) = puVar21;
            *(undefined **)(puVar3 + -0x20) = puVar20;
            *(undefined **)(puVar3 + -0x18) = puVar19;
            *(ulong *)(puVar3 + -0x10) = uVar18;
            *(ulong *)(puVar3 + -8) = uVar7;
            if (lVar6 != lVar11) {
              lVar5 = func_0x057e39f8(0,0,lVar13,0);
              uVar22 = func_0x057e3a04(lVar13,0);
              uVar18 = func_0x057e3a10(uVar22,0);
              if (7 < uVar18) {
                lVar13 = func_0x057e3a24(uVar22,8,0);
                while( true ) {
                  uVar18 = func_0x057e3a10(lVar13,0);
                  uVar7 = func_0x057e3a10(lVar5,0);
                  if (uVar18 <= uVar7) {
                    return (undefined8 *)
                           (ulong)(*(long *)(lVar6 + lVar13) == *(long *)(lVar11 + lVar13));
                  }
                  uVar18 = func_0x057f2854(*(undefined8 *)(lVar6 + lVar5),
                                           *(undefined8 *)(lVar11 + lVar5),0);
                  if ((uVar18 & 1) != 0) break;
                  lVar5 = func_0x057e3a1c(lVar5,8,0);
                }
                return (undefined8 *)0x0;
              }
              uVar18 = func_0x057e3a10(uVar22,0);
              uVar7 = func_0x057e3a10(lVar5,0);
              if (uVar7 < uVar18) {
                do {
                  bVar4 = *(char *)(lVar6 + lVar5) == *(char *)(lVar11 + lVar5);
                  puVar10 = (undefined8 *)(ulong)bVar4;
                  if (!bVar4) {
                    return puVar10;
                  }
                  lVar5 = func_0x057e3a1c(lVar5,1,0);
                  uVar18 = func_0x057e3a10(uVar22,0);
                  uVar7 = func_0x057e3a10(lVar5,0);
                } while (uVar7 < uVar18);
                return puVar10;
              }
            }
            return (undefined8 *)0x1;
          }
          uVar14 = 0;
        }
      }
      return (undefined8 *)(ulong)uVar14;
    }
  }
  auVar24 = func_0x03280cac();
  if (auVar24._8_4_ == 1) {
    plVar9 = (long *)func_0x072ce910(auVar24._0_8_);
    lVar6 = *plVar9;
    func_0x072ce920();
    func_0x051159b0(&uStack_98,*(undefined8 *)PTR_DAT_077e6f88);
    if (lVar6 == 0) {
LAB_0638124c:
      return (undefined8 *)(uVar7 & 0xffffffff);
    }
    func_0x03280ca4(lVar6);
  }
  func_0x051159b0(&uStack_98,*(undefined8 *)PTR_DAT_077e6f88);
  func_0x03365958(auVar24._0_8_);
  func_0x03280ca4(0);
  lVar6 = func_0x02f09514();
  uStack_e0 = 0x63812ec;
  if ((bRam0000000007e254c0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6fa8);
    func_0x03280a18(PTR_DAT_07772690);
    func_0x03280a18(PTR_DAT_0777fab8);
    func_0x03280a18(PTR_DAT_077e6fb0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077726a0);
    func_0x03280a18(PTR_DAT_0777fac0);
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_077e6fb8);
    func_0x03280a18(PTR_DAT_077e6fc0);
    func_0x03280a18(PTR_DAT_077e6fc8);
    func_0x03280a18(PTR_DAT_077e6fd0);
    func_0x03280a18(PTR_DAT_077e6fd8);
    func_0x03280a18(PTR_DAT_077e6fe0);
    func_0x03280a18(PTR_DAT_077e6fe8);
    func_0x03280a18(PTR_DAT_077ce5c8);
    func_0x03280a18(PTR_DAT_077e6ff0);
    func_0x03280a18(PTR_DAT_077e6ff8);
    func_0x03280a18(PTR_DAT_07780378);
    func_0x03280a18(PTR_DAT_077e7000);
    func_0x03280a18(PTR_DAT_077e7008);
    func_0x03280a18(PTR_DAT_0777e478);
    bRam0000000007e254c0 = 1;
  }
  puVar21 = PTR_DAT_07780378;
  if (*(long *)(lVar6 + 0x58) != 0) {
    func_0x0729fe1c(*(long *)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x108),0);
    uVar22 = func_0x03eb68fc(lVar6,*(undefined8 *)puVar21);
    puVar10 = (undefined8 *)(lVar6 + 0x40);
    *puVar10 = uVar22;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return puVar10;
  }
  lVar11 = func_0x03280cac();
  puVar19 = PTR_DAT_077e6fb8;
  puVar21 = PTR_DAT_077e6fb0;
  uStack_110 = 0x638176c;
  uStack_f8 = 0;
  uStack_f0 = 0x7e25000;
  puStack_108 = unaff_x23;
  puStack_100 = unaff_x22;
  lStack_e8 = lVar6;
  if ((bRam0000000007e254c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6fa8);
    func_0x03280a18(PTR_DAT_07772690);
    func_0x03280a18(PTR_DAT_0777fab8);
    func_0x03280a18(PTR_DAT_077e6fb0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07772718);
    func_0x03280a18(PTR_DAT_0777fac8);
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_077e6fb8);
    func_0x03280a18(PTR_DAT_077e6fc0);
    func_0x03280a18(PTR_DAT_077e6fc8);
    func_0x03280a18(PTR_DAT_077e6fd0);
    func_0x03280a18(PTR_DAT_077e6fd8);
    func_0x03280a18(PTR_DAT_077e6fe0);
    func_0x03280a18(PTR_DAT_077e7010);
    func_0x03280a18(PTR_DAT_077ce5e0);
    func_0x03280a18(PTR_DAT_077e7018);
    func_0x03280a18(PTR_DAT_077e7020);
    bRam0000000007e254c1 = 1;
  }
  lVar13 = *(long *)(lVar11 + 0x28);
  lVar6 = func_0x03280ca0(*(undefined8 *)puVar21);
  func_0x054221d4(lVar6,lVar11,*(undefined8 *)puVar19,0);
  puVar19 = PTR_DAT_0774e758;
  if (lVar13 != 0) {
    lVar5 = *(long *)PTR_DAT_077e7020;
    puStack_130 = (undefined *)0x63818c4;
    lVar15 = *(long *)(lVar5 + 0x38);
    lStack_128 = lVar6;
    lStack_120 = lVar13;
    lStack_118 = lVar11;
    if (lVar15 == 0) {
      func_0x03256878(lVar5);
      lVar15 = *(long *)(lVar5 + 0x38);
    }
    lVar11 = *(long *)(lVar15 + 8);
    uStack_140 = puStack_130;
    puStack_130 = puVar19;
    puVar10 = *(undefined8 **)(lVar11 + 0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_0774e558);
      puVar10 = *(undefined8 **)(lVar11 + 0x38);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x03256878(lVar11);
        puVar10 = *(undefined8 **)(lVar11 + 0x38);
      }
    }
    uVar22 = *puVar10;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar22 = func_0x057a51c4(uVar22,0);
    puStack_130 = (undefined *)uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x072a6c4c(&uStack_140,uVar22,0,0,1,0);
    puVar10 = (undefined8 *)func_0x07286e40(lVar13,uStack_140,uStack_138,lVar6,1);
    return puVar10;
  }
  uVar23 = 0x6381b10;
  lVar13 = func_0x03280cac();
  uVar22 = 0;
  puVar10 = &uStack_110;
  do {
    *(undefined8 *)((long)puVar10 + -0x30) = uVar23;
    *(undefined **)((long)puVar10 + -0x20) = puVar21;
    *(long *)((long)puVar10 + -0x18) = lVar6;
    *(undefined8 *)((long)puVar10 + -0x10) = uVar22;
    *(long *)((long)puVar10 + -8) = lVar11;
    if ((bRam0000000007e254c2 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07772080);
      func_0x03280a18(PTR_DAT_077e7028);
      bRam0000000007e254c2 = 1;
    }
    plVar9 = *(long **)(lVar13 + 0x68);
    lVar11 = lVar13;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      lVar6 = *(long *)PTR_DAT_07772080;
      puVar21 = *(undefined **)(lVar13 + 0x48);
      lVar11 = *(long *)PTR_DAT_077e7028;
      uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar13 = lVar5 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_06381bc0;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      lVar13 = func_0x03256b10(plVar9);
LAB_06381bc0:
      lVar13 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar6);
      puVar12 = (undefined8 *)(**(code **)(lVar13 + 8))(plVar9,lVar11,1,lVar13);
      if (puVar21 != (undefined *)0x0) {
        puVar21[0x28] = (byte)puVar12 & 1;
        return puVar12;
      }
    }
    lVar13 = func_0x03280cac();
    *(undefined8 *)((long)puVar10 + -0x50) = 0x6381c04;
    *(long *)((long)puVar10 + -0x40) = lVar11;
    *(long **)((long)puVar10 + -0x38) = plVar9;
    uVar22 = 0x7e25000;
    if ((bRam0000000007e254c3 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077726c0);
      func_0x03280a18(PTR_DAT_07774290);
      bRam0000000007e254c3 = 1;
    }
    func_0x064a7320(lVar13,0);
    uVar23 = 0x6381c50;
    puVar10 = (undefined8 *)((long)puVar10 + -0x50);
    lVar11 = lVar13;
  } while( true );
}

