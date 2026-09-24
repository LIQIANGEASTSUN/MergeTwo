/* Ghidra 12.1.2 native pseudocode; RVA 0x6690F38; Merger.Game.Views.BoardView.RecalculateCellSizes; status ok */


/* WARNING: Possible PIC construction at 0x04754890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04754a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04754afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067911d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679177c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067917a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067917c8: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x06791d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06791fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06792000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06792388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067923e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06792534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679255c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679275c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06792760) */
/* WARNING: Removing unreachable block (ram,0x06792764) */
/* WARNING: Removing unreachable block (ram,0x06792778) */
/* WARNING: Removing unreachable block (ram,0x06792780) */
/* WARNING: Removing unreachable block (ram,0x0679279c) */
/* WARNING: Removing unreachable block (ram,0x067927a4) */
/* WARNING: Removing unreachable block (ram,0x067927cc) */
/* WARNING: Removing unreachable block (ram,0x067927b0) */
/* WARNING: Removing unreachable block (ram,0x067927bc) */
/* WARNING: Removing unreachable block (ram,0x067927d8) */
/* WARNING: Removing unreachable block (ram,0x06792874) */
/* WARNING: Removing unreachable block (ram,0x067927e8) */
/* WARNING: Removing unreachable block (ram,0x06792864) */
/* WARNING: Removing unreachable block (ram,0x06792808) */
/* WARNING: Removing unreachable block (ram,0x06792848) */
/* WARNING: Removing unreachable block (ram,0x0679284c) */
/* WARNING: Removing unreachable block (ram,0x069aa69c) */
/* WARNING: Removing unreachable block (ram,0x069aa6bc) */
/* WARNING: Removing unreachable block (ram,0x069aa6d0) */
/* WARNING: Removing unreachable block (ram,0x069aa6dc) */
/* WARNING: Removing unreachable block (ram,0x069aa6e0) */
/* WARNING: Removing unreachable block (ram,0x069aa6f4) */
/* WARNING: Removing unreachable block (ram,0x069aa71c) */
/* WARNING: Removing unreachable block (ram,0x069aa730) */
/* WARNING: Removing unreachable block (ram,0x06792560) */
/* WARNING: Removing unreachable block (ram,0x067925e4) */
/* WARNING: Removing unreachable block (ram,0x06792568) */
/* WARNING: Removing unreachable block (ram,0x0679259c) */
/* WARNING: Removing unreachable block (ram,0x067925b4) */
/* WARNING: Removing unreachable block (ram,0x067925bc) */
/* WARNING: Removing unreachable block (ram,0x067925f4) */
/* WARNING: Removing unreachable block (ram,0x067925c8) */
/* WARNING: Removing unreachable block (ram,0x067925d4) */
/* WARNING: Removing unreachable block (ram,0x06792600) */
/* WARNING: Removing unreachable block (ram,0x06792610) */
/* WARNING: Removing unreachable block (ram,0x06792660) */
/* WARNING: Removing unreachable block (ram,0x06792678) */
/* WARNING: Removing unreachable block (ram,0x06792680) */
/* WARNING: Removing unreachable block (ram,0x067926a8) */
/* WARNING: Removing unreachable block (ram,0x0679268c) */
/* WARNING: Removing unreachable block (ram,0x06792698) */
/* WARNING: Removing unreachable block (ram,0x067926b4) */
/* WARNING: Removing unreachable block (ram,0x06792538) */
/* WARNING: Removing unreachable block (ram,0x067926d0) */
/* WARNING: Removing unreachable block (ram,0x067926fc) */
/* WARNING: Removing unreachable block (ram,0x0679274c) */
/* WARNING: Removing unreachable block (ram,0x0679253c) */
/* WARNING: Removing unreachable block (ram,0x0679238c) */
/* WARNING: Removing unreachable block (ram,0x0679239c) */
/* WARNING: Removing unreachable block (ram,0x067923a0) */
/* WARNING: Removing unreachable block (ram,0x067923e8) */
/* WARNING: Removing unreachable block (ram,0x0679241c) */
/* WARNING: Removing unreachable block (ram,0x06792450) */
/* WARNING: Removing unreachable block (ram,0x069add3c) */
/* WARNING: Removing unreachable block (ram,0x069add5c) */
/* WARNING: Removing unreachable block (ram,0x069add70) */
/* WARNING: Removing unreachable block (ram,0x069add7c) */
/* WARNING: Removing unreachable block (ram,0x069add94) */
/* WARNING: Removing unreachable block (ram,0x069addd0) */
/* WARNING: Removing unreachable block (ram,0x069addfc) */
/* WARNING: Removing unreachable block (ram,0x069ade1c) */
/* WARNING: Removing unreachable block (ram,0x069ade30) */
/* WARNING: Removing unreachable block (ram,0x069ade3c) */
/* WARNING: Removing unreachable block (ram,0x069ade54) */
/* WARNING: Removing unreachable block (ram,0x069adeb4) */
/* WARNING: Removing unreachable block (ram,0x069ade5c) */
/* WARNING: Removing unreachable block (ram,0x069adeb8) */
/* WARNING: Removing unreachable block (ram,0x069aded0) */
/* WARNING: Removing unreachable block (ram,0x069adee4) */
/* WARNING: Removing unreachable block (ram,0x069adef8) */
/* WARNING: Removing unreachable block (ram,0x069adf60) */
/* WARNING: Removing unreachable block (ram,0x069adf0c) */
/* WARNING: Removing unreachable block (ram,0x069adf1c) */
/* WARNING: Removing unreachable block (ram,0x069adf30) */
/* WARNING: Removing unreachable block (ram,0x069adf6c) */
/* WARNING: Removing unreachable block (ram,0x07261ecc) */
/* WARNING: Removing unreachable block (ram,0x06fe10d4) */
/* WARNING: Removing unreachable block (ram,0x06fdb424) */
/* WARNING: Removing unreachable block (ram,0x06fdb444) */
/* WARNING: Removing unreachable block (ram,0x06fdb458) */
/* WARNING: Removing unreachable block (ram,0x06fdb464) */
/* WARNING: Removing unreachable block (ram,0x06fdb468) */
/* WARNING: Removing unreachable block (ram,0x069adf34) */
/* WARNING: Removing unreachable block (ram,0x06fe9b48) */
/* WARNING: Removing unreachable block (ram,0x06fe9b78) */
/* WARNING: Removing unreachable block (ram,0x06fe9b9c) */
/* WARNING: Removing unreachable block (ram,0x06fe9bb0) */
/* WARNING: Removing unreachable block (ram,0x069ade80) */
/* WARNING: Removing unreachable block (ram,0x069ade9c) */
/* WARNING: Removing unreachable block (ram,0x069adda4) */
/* WARNING: Removing unreachable block (ram,0x069addc0) */
/* WARNING: Removing unreachable block (ram,0x067923b4) */
/* WARNING: Removing unreachable block (ram,0x067923bc) */
/* WARNING: Removing unreachable block (ram,0x067923c8) */
/* WARNING: Removing unreachable block (ram,0x06792004) */
/* WARNING: Removing unreachable block (ram,0x0679200c) */
/* WARNING: Removing unreachable block (ram,0x072cde44) */
/* WARNING: Removing unreachable block (ram,0x06792024) */
/* WARNING: Removing unreachable block (ram,0x06792040) */
/* WARNING: Removing unreachable block (ram,0x06791fbc) */
/* WARNING: Removing unreachable block (ram,0x06791fec) */
/* WARNING: Removing unreachable block (ram,0x06791f78) */
/* WARNING: Removing unreachable block (ram,0x06791f94) */
/* WARNING: Removing unreachable block (ram,0x06791f34) */
/* WARNING: Removing unreachable block (ram,0x06791f58) */
/* WARNING: Removing unreachable block (ram,0x06791ee8) */
/* WARNING: Removing unreachable block (ram,0x06791f0c) */
/* WARNING: Removing unreachable block (ram,0x06791e9c) */
/* WARNING: Removing unreachable block (ram,0x06791ec0) */
/* WARNING: Removing unreachable block (ram,0x06791e34) */
/* WARNING: Removing unreachable block (ram,0x06791e48) */
/* WARNING: Removing unreachable block (ram,0x06791e50) */
/* WARNING: Removing unreachable block (ram,0x06791e7c) */
/* WARNING: Removing unreachable block (ram,0x06791dd0) */
/* WARNING: Removing unreachable block (ram,0x06791df8) */
/* WARNING: Removing unreachable block (ram,0x06791d90) */
/* WARNING: Removing unreachable block (ram,0x06791da8) */
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
/* WARNING: Removing unreachable block (ram,0x067917cc) */
/* WARNING: Removing unreachable block (ram,0x06791800) */
/* WARNING: Removing unreachable block (ram,0x067917a4) */
/* WARNING: Removing unreachable block (ram,0x06791780) */
/* WARNING: Removing unreachable block (ram,0x0679171c) */
/* WARNING: Removing unreachable block (ram,0x06791768) */
/* WARNING: Removing unreachable block (ram,0x0679141c) */
/* WARNING: Removing unreachable block (ram,0x067911d4) */
/* WARNING: Removing unreachable block (ram,0x067911f8) */
/* WARNING: Removing unreachable block (ram,0x04754b00) */
/* WARNING: Removing unreachable block (ram,0x04754b20) */
/* WARNING: Removing unreachable block (ram,0x04754b48) */
/* WARNING: Removing unreachable block (ram,0x04754b80) */
/* WARNING: Removing unreachable block (ram,0x04754b98) */
/* WARNING: Removing unreachable block (ram,0x04754b9c) */
/* WARNING: Removing unreachable block (ram,0x04754bac) */
/* WARNING: Removing unreachable block (ram,0x04754c10) */
/* WARNING: Removing unreachable block (ram,0x04754c30) */
/* WARNING: Removing unreachable block (ram,0x04754c48) */
/* WARNING: Removing unreachable block (ram,0x04754c4c) */
/* WARNING: Removing unreachable block (ram,0x04754d64) */
/* WARNING: Removing unreachable block (ram,0x04754c5c) */
/* WARNING: Removing unreachable block (ram,0x04754ca0) */
/* WARNING: Removing unreachable block (ram,0x04754cb4) */
/* WARNING: Removing unreachable block (ram,0x04754cc0) */
/* WARNING: Removing unreachable block (ram,0x04754ccc) */
/* WARNING: Removing unreachable block (ram,0x04754cd0) */
/* WARNING: Removing unreachable block (ram,0x04754cd8) */
/* WARNING: Removing unreachable block (ram,0x04754cdc) */
/* WARNING: Removing unreachable block (ram,0x04754cec) */
/* WARNING: Removing unreachable block (ram,0x04754cf0) */
/* WARNING: Removing unreachable block (ram,0x04754d1c) */
/* WARNING: Removing unreachable block (ram,0x04754d24) */
/* WARNING: Removing unreachable block (ram,0x04754d38) */
/* WARNING: Removing unreachable block (ram,0x04754d4c) */
/* WARNING: Removing unreachable block (ram,0x04754d50) */
/* WARNING: Removing unreachable block (ram,0x04754c74) */
/* WARNING: Removing unreachable block (ram,0x04754c88) */
/* WARNING: Removing unreachable block (ram,0x04754c8c) */
/* WARNING: Removing unreachable block (ram,0x04754c20) */
/* WARNING: Removing unreachable block (ram,0x04754bbc) */
/* WARNING: Removing unreachable block (ram,0x04754bd0) */
/* WARNING: Removing unreachable block (ram,0x04754bd4) */
/* WARNING: Removing unreachable block (ram,0x04754be4) */
/* WARNING: Removing unreachable block (ram,0x04754a78) */
/* WARNING: Removing unreachable block (ram,0x04754a84) */
/* WARNING: Removing unreachable block (ram,0x04754a88) */
/* WARNING: Removing unreachable block (ram,0x04754ab0) */
/* WARNING: Removing unreachable block (ram,0x04754abc) */
/* WARNING: Removing unreachable block (ram,0x04754ae0) */
/* WARNING: Removing unreachable block (ram,0x04754aec) */
/* WARNING: Removing unreachable block (ram,0x04754894) */
/* WARNING: Removing unreachable block (ram,0x047548ac) */
/* WARNING: Removing unreachable block (ram,0x047548b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f058) */
/* WARNING: Removing unreachable block (ram,0x03e0f078) */
/* WARNING: Removing unreachable block (ram,0x03e0f098) */
/* WARNING: Removing unreachable block (ram,0x03e0f0a0) */
/* WARNING: Removing unreachable block (ram,0x03e0f0a4) */
/* WARNING: Removing unreachable block (ram,0x03e0f0b4) */
/* WARNING: Removing unreachable block (ram,0x03e0f0c0) */
/* WARNING: Removing unreachable block (ram,0x03e0f0cc) */
/* WARNING: Removing unreachable block (ram,0x03e0f0d4) */
/* WARNING: Removing unreachable block (ram,0x03e0f0fc) */
/* WARNING: Removing unreachable block (ram,0x03e0f0e0) */
/* WARNING: Removing unreachable block (ram,0x03e0f0ec) */
/* WARNING: Removing unreachable block (ram,0x03e0f108) */
/* WARNING: Removing unreachable block (ram,0x03e0f11c) */
/* WARNING: Removing unreachable block (ram,0x03e0f124) */
/* WARNING: Removing unreachable block (ram,0x03e0f134) */
/* WARNING: Removing unreachable block (ram,0x03e0f13c) */
/* WARNING: Removing unreachable block (ram,0x03e0f164) */
/* WARNING: Removing unreachable block (ram,0x03e0f148) */
/* WARNING: Removing unreachable block (ram,0x03e0f154) */
/* WARNING: Removing unreachable block (ram,0x03e0f170) */
/* WARNING: Removing unreachable block (ram,0x03e0f20c) */
/* WARNING: Removing unreachable block (ram,0x03e0f180) */
/* WARNING: Removing unreachable block (ram,0x03e0f190) */
/* WARNING: Removing unreachable block (ram,0x03e0f19c) */
/* WARNING: Removing unreachable block (ram,0x03e0f1a8) */
/* WARNING: Removing unreachable block (ram,0x03e0f1b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f1d8) */
/* WARNING: Removing unreachable block (ram,0x03e0f1bc) */
/* WARNING: Removing unreachable block (ram,0x03e0f1c8) */
/* WARNING: Removing unreachable block (ram,0x03e0f1e4) */
/* WARNING: Removing unreachable block (ram,0x03e0f28c) */
/* WARNING: Removing unreachable block (ram,0x03e0f290) */
/* WARNING: Removing unreachable block (ram,0x03e0f294) */
/* WARNING: Removing unreachable block (ram,0x03e0f298) */
/* WARNING: Removing unreachable block (ram,0x03e0f2b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f2d0) */
/* WARNING: Removing unreachable block (ram,0x03e0f2dc) */
/* WARNING: Removing unreachable block (ram,0x03e0f2e0) */
/* WARNING: Removing unreachable block (ram,0x03e0f2f8) */
/* WARNING: Removing unreachable block (ram,0x03e0f300) */
/* WARNING: Removing unreachable block (ram,0x03e0f328) */
/* WARNING: Removing unreachable block (ram,0x03e0f30c) */
/* WARNING: Removing unreachable block (ram,0x03e0f318) */
/* WARNING: Removing unreachable block (ram,0x03e0f334) */
/* WARNING: Removing unreachable block (ram,0x03e0f340) */
/* WARNING: Removing unreachable block (ram,0x03e0f344) */
/* WARNING: Removing unreachable block (ram,0x03e0f34c) */
/* WARNING: Removing unreachable block (ram,0x03e0f37c) */
/* WARNING: Removing unreachable block (ram,0x03e0f39c) */
/* WARNING: Removing unreachable block (ram,0x03e0f3a4) */
/* WARNING: Removing unreachable block (ram,0x03e0f3a8) */
/* WARNING: Removing unreachable block (ram,0x03e0f3b8) */
/* WARNING: Removing unreachable block (ram,0x03e0f3c4) */
/* WARNING: Removing unreachable block (ram,0x03e0f3d0) */
/* WARNING: Removing unreachable block (ram,0x03e0f3d8) */
/* WARNING: Removing unreachable block (ram,0x03e0f400) */
/* WARNING: Removing unreachable block (ram,0x03e0f3e4) */
/* WARNING: Removing unreachable block (ram,0x03e0f3f0) */
/* WARNING: Removing unreachable block (ram,0x03e0f40c) */
/* WARNING: Removing unreachable block (ram,0x03e0f420) */
/* WARNING: Removing unreachable block (ram,0x03e0f42c) */
/* WARNING: Removing unreachable block (ram,0x03e0f43c) */
/* WARNING: Removing unreachable block (ram,0x03e0f444) */
/* WARNING: Removing unreachable block (ram,0x03e0f46c) */
/* WARNING: Removing unreachable block (ram,0x03e0f450) */
/* WARNING: Removing unreachable block (ram,0x03e0f45c) */
/* WARNING: Removing unreachable block (ram,0x03e0f478) */
/* WARNING: Removing unreachable block (ram,0x03e0f520) */
/* WARNING: Removing unreachable block (ram,0x03e0f488) */
/* WARNING: Removing unreachable block (ram,0x03e0f498) */
/* WARNING: Removing unreachable block (ram,0x03e0f4a4) */
/* WARNING: Removing unreachable block (ram,0x03e0f4b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f4b8) */
/* WARNING: Removing unreachable block (ram,0x03e0f4e0) */
/* WARNING: Removing unreachable block (ram,0x03e0f4c4) */
/* WARNING: Removing unreachable block (ram,0x03e0f4d0) */
/* WARNING: Removing unreachable block (ram,0x03e0f4ec) */
/* WARNING: Removing unreachable block (ram,0x03e0f5a4) */
/* WARNING: Removing unreachable block (ram,0x03e0f5a8) */
/* WARNING: Removing unreachable block (ram,0x03e0f5ac) */
/* WARNING: Removing unreachable block (ram,0x03e0f5b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f5c8) */
/* WARNING: Removing unreachable block (ram,0x03e0f5e8) */
/* WARNING: Removing unreachable block (ram,0x03e0f5f4) */
/* WARNING: Removing unreachable block (ram,0x03e0f5f8) */
/* WARNING: Removing unreachable block (ram,0x03e0f610) */
/* WARNING: Removing unreachable block (ram,0x03e0f618) */
/* WARNING: Removing unreachable block (ram,0x03e0f640) */
/* WARNING: Removing unreachable block (ram,0x03e0f624) */
/* WARNING: Removing unreachable block (ram,0x03e0f630) */
/* WARNING: Removing unreachable block (ram,0x03e0f64c) */
/* WARNING: Removing unreachable block (ram,0x03e0f658) */
/* WARNING: Removing unreachable block (ram,0x03e0f65c) */
/* WARNING: Removing unreachable block (ram,0x03e0f664) */
/* WARNING: Removing unreachable block (ram,0x03e0f6b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f6d0) */
/* WARNING: Removing unreachable block (ram,0x03e0f6dc) */
/* WARNING: Removing unreachable block (ram,0x03e0f724) */
/* WARNING: Removing unreachable block (ram,0x03e0f730) */
/* WARNING: Removing unreachable block (ram,0x03e0f73c) */
/* WARNING: Removing unreachable block (ram,0x03e0f748) */
/* WARNING: Removing unreachable block (ram,0x03e0f750) */
/* WARNING: Removing unreachable block (ram,0x03e0f778) */
/* WARNING: Removing unreachable block (ram,0x03e0f75c) */
/* WARNING: Removing unreachable block (ram,0x03e0f768) */
/* WARNING: Removing unreachable block (ram,0x03e0f784) */
/* WARNING: Removing unreachable block (ram,0x03e0f798) */
/* WARNING: Removing unreachable block (ram,0x03e0f7a0) */
/* WARNING: Removing unreachable block (ram,0x03e0f7b0) */
/* WARNING: Removing unreachable block (ram,0x03e0f7b8) */
/* WARNING: Removing unreachable block (ram,0x03e0f7e0) */
/* WARNING: Removing unreachable block (ram,0x03e0f7c4) */
/* WARNING: Removing unreachable block (ram,0x03e0f7d0) */
/* WARNING: Removing unreachable block (ram,0x03e0f7ec) */
/* WARNING: Removing unreachable block (ram,0x03e0f8d8) */
/* WARNING: Removing unreachable block (ram,0x03e0f7fc) */
/* WARNING: Removing unreachable block (ram,0x03e0f80c) */
/* WARNING: Removing unreachable block (ram,0x03e0f818) */
/* WARNING: Removing unreachable block (ram,0x03e0f824) */
/* WARNING: Removing unreachable block (ram,0x03e0f82c) */
/* WARNING: Removing unreachable block (ram,0x03e0f854) */
/* WARNING: Removing unreachable block (ram,0x03e0f838) */
/* WARNING: Removing unreachable block (ram,0x03e0f844) */
/* WARNING: Removing unreachable block (ram,0x03e0f860) */
/* WARNING: Removing unreachable block (ram,0x03e0f978) */
/* WARNING: Removing unreachable block (ram,0x03e0f97c) */
/* WARNING: Removing unreachable block (ram,0x03e0f980) */
/* WARNING: Removing unreachable block (ram,0x03e0f984) */
/* WARNING: Removing unreachable block (ram,0x03e0f98c) */
/* WARNING: Removing unreachable block (ram,0x03e0f9a0) */
/* WARNING: Removing unreachable block (ram,0x03e0f9c0) */
/* WARNING: Removing unreachable block (ram,0x03e0f9cc) */
/* WARNING: Removing unreachable block (ram,0x03e0f9d0) */
/* WARNING: Removing unreachable block (ram,0x03e0f9e8) */
/* WARNING: Removing unreachable block (ram,0x03e0f9f0) */
/* WARNING: Removing unreachable block (ram,0x03e0fa18) */
/* WARNING: Removing unreachable block (ram,0x03e0f9fc) */
/* WARNING: Removing unreachable block (ram,0x03e0fa08) */
/* WARNING: Removing unreachable block (ram,0x03e0fa24) */
/* WARNING: Removing unreachable block (ram,0x03e0fa30) */
/* WARNING: Removing unreachable block (ram,0x03e0fa34) */
/* WARNING: Removing unreachable block (ram,0x03e0fa3c) */
/* WARNING: Removing unreachable block (ram,0x03e0fa8c) */
/* WARNING: Removing unreachable block (ram,0x03e0faac) */
/* WARNING: Removing unreachable block (ram,0x03e0fab8) */
/* WARNING: Removing unreachable block (ram,0x03e0fb00) */
/* WARNING: Removing unreachable block (ram,0x03e0fb0c) */
/* WARNING: Removing unreachable block (ram,0x03e0fb18) */
/* WARNING: Removing unreachable block (ram,0x03e0fb24) */
/* WARNING: Removing unreachable block (ram,0x03e0fb2c) */
/* WARNING: Removing unreachable block (ram,0x03e0fb54) */
/* WARNING: Removing unreachable block (ram,0x03e0fb38) */
/* WARNING: Removing unreachable block (ram,0x03e0fb44) */
/* WARNING: Removing unreachable block (ram,0x03e0fb60) */
/* WARNING: Removing unreachable block (ram,0x03e0fb78) */
/* WARNING: Removing unreachable block (ram,0x03e0fb88) */
/* WARNING: Removing unreachable block (ram,0x03e0fb98) */
/* WARNING: Removing unreachable block (ram,0x03e0fba0) */
/* WARNING: Removing unreachable block (ram,0x03e0fbc8) */
/* WARNING: Removing unreachable block (ram,0x03e0fbac) */
/* WARNING: Removing unreachable block (ram,0x03e0fbb8) */
/* WARNING: Removing unreachable block (ram,0x03e0fbd4) */
/* WARNING: Removing unreachable block (ram,0x03e0fccc) */
/* WARNING: Removing unreachable block (ram,0x03e0fbe4) */
/* WARNING: Removing unreachable block (ram,0x03e0fbf4) */
/* WARNING: Removing unreachable block (ram,0x03e0fc00) */
/* WARNING: Removing unreachable block (ram,0x03e0fc0c) */
/* WARNING: Removing unreachable block (ram,0x03e0fc14) */
/* WARNING: Removing unreachable block (ram,0x03e0fc3c) */
/* WARNING: Removing unreachable block (ram,0x03e0fc20) */
/* WARNING: Removing unreachable block (ram,0x03e0fc2c) */
/* WARNING: Removing unreachable block (ram,0x03e0fc48) */
/* WARNING: Removing unreachable block (ram,0x03e0fd6c) */
/* WARNING: Removing unreachable block (ram,0x03e0fd70) */
/* WARNING: Removing unreachable block (ram,0x03e0fd74) */
/* WARNING: Removing unreachable block (ram,0x03e0fd78) */
/* WARNING: Removing unreachable block (ram,0x03e0fd80) */
/* WARNING: Removing unreachable block (ram,0x03e0fd94) */
/* WARNING: Removing unreachable block (ram,0x03e0fdb4) */
/* WARNING: Removing unreachable block (ram,0x03e0fdc0) */
/* WARNING: Removing unreachable block (ram,0x03e0fdc4) */
/* WARNING: Removing unreachable block (ram,0x03e0fddc) */
/* WARNING: Removing unreachable block (ram,0x03e0fde4) */
/* WARNING: Removing unreachable block (ram,0x03e0fe0c) */
/* WARNING: Removing unreachable block (ram,0x03e0fdf0) */
/* WARNING: Removing unreachable block (ram,0x03e0fdfc) */
/* WARNING: Removing unreachable block (ram,0x03e0fe18) */
/* WARNING: Removing unreachable block (ram,0x03e0fe24) */
/* WARNING: Removing unreachable block (ram,0x03e0fe28) */
/* WARNING: Removing unreachable block (ram,0x03e0fe30) */
/* WARNING: Removing unreachable block (ram,0x03e0feb0) */
/* WARNING: Removing unreachable block (ram,0x03e0fe54) */
/* WARNING: Removing unreachable block (ram,0x03e0febc) */
/* WARNING: Removing unreachable block (ram,0x03e0fe58) */
/* WARNING: Removing unreachable block (ram,0x03e0fe68) */
/* WARNING: Removing unreachable block (ram,0x03e0fe74) */
/* WARNING: Removing unreachable block (ram,0x03e0fe80) */
/* WARNING: Removing unreachable block (ram,0x03e0fe88) */
/* WARNING: Removing unreachable block (ram,0x03e0fec4) */
/* WARNING: Removing unreachable block (ram,0x03e0fe94) */
/* WARNING: Removing unreachable block (ram,0x03e0fea0) */
/* WARNING: Removing unreachable block (ram,0x03e0fed0) */
/* WARNING: Removing unreachable block (ram,0x03e0fee4) */
/* WARNING: Removing unreachable block (ram,0x03e0fda0) */
/* WARNING: Removing unreachable block (ram,0x03e0fcd0) */
/* WARNING: Removing unreachable block (ram,0x03e0fcd4) */
/* WARNING: Removing unreachable block (ram,0x03e0fcec) */
/* WARNING: Removing unreachable block (ram,0x03e0fcf4) */
/* WARNING: Removing unreachable block (ram,0x03e0fd1c) */
/* WARNING: Removing unreachable block (ram,0x03e0fd00) */
/* WARNING: Removing unreachable block (ram,0x03e0fd0c) */
/* WARNING: Removing unreachable block (ram,0x03e0fd28) */
/* WARNING: Removing unreachable block (ram,0x03e0fd34) */
/* WARNING: Removing unreachable block (ram,0x03e0fd38) */
/* WARNING: Removing unreachable block (ram,0x03e0fd4c) */
/* WARNING: Removing unreachable block (ram,0x03e0fc88) */
/* WARNING: Removing unreachable block (ram,0x03e0fc9c) */
/* WARNING: Removing unreachable block (ram,0x03e0fca0) */
/* WARNING: Removing unreachable block (ram,0x03e0f9ac) */
/* WARNING: Removing unreachable block (ram,0x03e0f8dc) */
/* WARNING: Removing unreachable block (ram,0x03e0f8e0) */
/* WARNING: Removing unreachable block (ram,0x03e0f8f8) */
/* WARNING: Removing unreachable block (ram,0x03e0f900) */
/* WARNING: Removing unreachable block (ram,0x03e0f928) */
/* WARNING: Removing unreachable block (ram,0x03e0f90c) */
/* WARNING: Removing unreachable block (ram,0x03e0f918) */
/* WARNING: Removing unreachable block (ram,0x03e0f934) */
/* WARNING: Removing unreachable block (ram,0x03e0f940) */
/* WARNING: Removing unreachable block (ram,0x03e0f944) */
/* WARNING: Removing unreachable block (ram,0x03e0f954) */
/* WARNING: Removing unreachable block (ram,0x03e0f8a0) */
/* WARNING: Removing unreachable block (ram,0x03e0f8b4) */
/* WARNING: Removing unreachable block (ram,0x03e0f8b8) */
/* WARNING: Removing unreachable block (ram,0x03e0f5d4) */
/* WARNING: Removing unreachable block (ram,0x03e0f524) */
/* WARNING: Removing unreachable block (ram,0x03e0f528) */
/* WARNING: Removing unreachable block (ram,0x03e0f540) */
/* WARNING: Removing unreachable block (ram,0x03e0f548) */
/* WARNING: Removing unreachable block (ram,0x03e0f570) */
/* WARNING: Removing unreachable block (ram,0x03e0f554) */
/* WARNING: Removing unreachable block (ram,0x03e0f560) */
/* WARNING: Removing unreachable block (ram,0x03e0f57c) */
/* WARNING: Removing unreachable block (ram,0x03e0f588) */
/* WARNING: Removing unreachable block (ram,0x03e0f58c) */
/* WARNING: Removing unreachable block (ram,0x03e0f500) */
/* WARNING: Removing unreachable block (ram,0x03e0f2bc) */
/* WARNING: Removing unreachable block (ram,0x03e0f210) */
/* WARNING: Removing unreachable block (ram,0x03e0f214) */
/* WARNING: Removing unreachable block (ram,0x03e0f22c) */
/* WARNING: Removing unreachable block (ram,0x03e0f234) */
/* WARNING: Removing unreachable block (ram,0x03e0f25c) */
/* WARNING: Removing unreachable block (ram,0x03e0f240) */
/* WARNING: Removing unreachable block (ram,0x03e0f24c) */
/* WARNING: Removing unreachable block (ram,0x03e0f268) */
/* WARNING: Removing unreachable block (ram,0x03e0f274) */
/* WARNING: Removing unreachable block (ram,0x03e0f278) */
/* WARNING: Removing unreachable block (ram,0x03e0f1f8) */
/* WARNING: Removing unreachable block (ram,0x069aa744) */
/* WARNING: Removing unreachable block (ram,0x069aa748) */
/* WARNING: Removing unreachable block (ram,0x069aa7d8) */
/* WARNING: Removing unreachable block (ram,0x069aa7e0) */
/* WARNING: Removing unreachable block (ram,0x069aa76c) */
/* WARNING: Removing unreachable block (ram,0x069aa778) */
/* WARNING: Removing unreachable block (ram,0x069aa78c) */
/* WARNING: Removing unreachable block (ram,0x069aa7fc) */
/* WARNING: Removing unreachable block (ram,0x069aa7a4) */
/* WARNING: Removing unreachable block (ram,0x069aa80c) */
/* WARNING: Removing unreachable block (ram,0x069aa7bc) */
/* WARNING: Removing unreachable block (ram,0x06fe0ba0) */
/* WARNING: Removing unreachable block (ram,0x06fe0c14) */
/* WARNING: Removing unreachable block (ram,0x06fe0bac) */
/* WARNING: Removing unreachable block (ram,0x06fe0bc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bd4) */
/* WARNING: Removing unreachable block (ram,0x06fe0c48) */
/* WARNING: Removing unreachable block (ram,0x06fe0c78) */
/* WARNING: Removing unreachable block (ram,0x06fe0cac) */
/* WARNING: Removing unreachable block (ram,0x06fe0cc0) */
/* WARNING: Removing unreachable block (ram,0x06fe0be0) */
/* WARNING: Removing unreachable block (ram,0x06fe0bec) */
/* WARNING: Removing unreachable block (ram,0x06fe0c00) */
/* WARNING: Removing unreachable block (ram,0x07285548) */

ulong * Merger_Game_Views_BoardView__RecalculateCellSizes
                  (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong *puVar29;
  long lVar30;
  long lVar31;
  byte *pbVar32;
  int *piVar33;
  undefined8 *puVar34;
  long *plVar35;
  long *plVar36;
  undefined8 unaff_x19;
  undefined *puVar37;
  long *plVar38;
  undefined8 unaff_x20;
  undefined8 uVar39;
  ulong uVar40;
  undefined8 uVar41;
  undefined8 unaff_x21;
  undefined *puVar42;
  undefined *unaff_x22;
  ulong unaff_x23;
  code **ppcVar43;
  undefined *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar44;
  code *pcVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [12];
  ulong auStack_300 [84];
  code *pcStack_60;
  
  puVar42 = PTR_DAT_07772cf0;
  if ((bRam0000000007e282bb & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809120);
    func_0x03280a18(PTR_DAT_07809240);
    func_0x03280a18(PTR_DAT_07809248);
    func_0x03280a18(PTR_DAT_07772cf0);
    func_0x03280a18(PTR_DAT_07809250);
    bRam0000000007e282bb = 1;
  }
  uVar39 = *(undefined8 *)(param_5 + 0x110);
  if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x07247690(uVar39,0);
  puVar42 = unaff_x22;
  if (*(long *)(param_5 + 0x78) != 0) {
    func_0x06fe9490(*(long *)(param_5 + 0x78),0);
    puVar37 = PTR_DAT_07809248;
    fVar46 = param_3 / (float)*(int *)(param_5 + 0x174);
    fVar47 = param_4 / (float)*(int *)(param_5 + 0x178);
    if (fVar47 <= fVar46) {
      fVar46 = fVar47;
    }
    if ((*(long *)(param_5 + 0x78) == 0) ||
       (lVar18 = func_0x03cec8b4(*(long *)(param_5 + 0x78),*(undefined8 *)PTR_DAT_07809248),
       lVar18 == 0)) goto LAB_067910d4;
    func_0x07243dfc(fVar46,fVar46,lVar18,0);
    if (*(long *)(param_5 + 0x78) == 0) goto LAB_067910d4;
    func_0x06fe9490(*(long *)(param_5 + 0x78),0);
    param_3 = param_3 / (float)*(int *)(param_5 + 0x174);
    param_4 = param_4 / (float)*(int *)(param_5 + 0x178);
    if (param_4 <= param_3) {
      param_3 = param_4;
    }
    *(float *)(param_5 + 0x17c) = param_3;
    if ((*(long *)(param_5 + 0x80) == 0) ||
       (lVar18 = func_0x03cec8b4(*(long *)(param_5 + 0x80),*(undefined8 *)puVar37),
       puVar22 = PTR_DAT_07809240, puVar37 = PTR_DAT_07809120, lVar18 == 0)) goto LAB_067910d4;
    func_0x07243dfc(*(undefined4 *)(param_5 + 0x17c),*(undefined4 *)(param_5 + 0x17c),lVar18,0);
    uVar40 = *(ulong *)(param_5 + 0x130);
    uVar19 = func_0x03280ca0(*(undefined8 *)puVar37);
    func_0x054221d4(uVar19,param_5,*(undefined8 *)puVar22,0);
    puVar42 = puVar22;
    if (uVar40 == 0) goto LAB_067910d4;
    lVar18 = *(long *)PTR_DAT_07809250;
LAB_0475482c:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    lVar30 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar30 + 0x135) & 1) == 0) {
      lVar30 = func_0x0325681c(lVar30);
    }
    lVar30 = func_0x03280ca0(lVar30);
    func_0x0403f7a0(lVar30,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x48));
    if (lVar30 == 0) {
      lVar30 = func_0x03280cac();
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0x47548f8;
      *(ulong *)((long)register0x00000008 + -0x48) = uVar40;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(long *)((long)register0x00000008 + -0x38) = lVar18;
      if ((bRam0000000007e196dd & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777ecf8);
        bRam0000000007e196dd = 1;
      }
      puVar42 = PTR_DAT_0777ecf8;
      if (*(long *)(lVar30 + 0x10) == 0) {
        plVar38 = *(long **)(lVar30 + 0x20);
        if (plVar38 != (long *)0x0) {
          lVar18 = *plVar38;
          uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar40 != 0) {
            piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0777ecf8) {
                puVar17 = (undefined8 *)(lVar18 + (long)*piVar33 * 0x10 + 0x138);
                goto LAB_04754990;
              }
              uVar40 = uVar40 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar40 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0777ecf8,0);
LAB_04754990:
          iVar11 = (*(code *)*puVar17)(plVar38,puVar17[1]);
          if (iVar11 == 2) {
            return (ulong *)0x0;
          }
          plVar38 = *(long **)(lVar30 + 0x20);
          if (plVar38 == (long *)0x0) {
            puVar16 = (ulong *)func_0x03280cac();
            *(undefined8 *)((long)register0x00000008 + -0x80) = 0x4754a30;
            *(ulong *)((long)register0x00000008 + -0x70) = uVar19;
            *(undefined **)((long)register0x00000008 + -0x68) = puVar42;
            *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
            *(long *)((long)register0x00000008 + -0x58) = lVar30;
            if ((bRam0000000007e196de & 1) != 0) {
              return puVar16;
            }
            func_0x03280a18(PTR_DAT_0777ade8);
            bRam0000000007e196de = 1;
            return puVar16;
          }
          lVar31 = *plVar38;
          lVar18 = *(long *)puVar42;
          uVar40 = (ulong)*(ushort *)(lVar31 + 0x12e);
          if (uVar40 != 0) {
            piVar33 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == lVar18) {
                puVar17 = (undefined8 *)(lVar31 + (long)*piVar33 * 0x10 + 0x138);
                goto LAB_04754a00;
              }
              uVar40 = uVar40 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar40 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar38,lVar18,0);
LAB_04754a00:
          puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,puVar17[1]);
          if ((int)puVar16 == 1) {
            return puVar16;
          }
        }
        puVar16 = (ulong *)(ulong)(*(long *)(lVar30 + 0x18) != 0);
      }
      else {
        puVar16 = (ulong *)0x1;
      }
      return puVar16;
    }
    puVar16 = (ulong *)(lVar30 + 0x10);
    *puVar16 = uVar19;
    goto SUB_032809c4;
  }
LAB_067910d4:
  lVar18 = func_0x03280cac();
  plVar38 = (long *)PTR_DAT_07809258;
  ppcVar43 = &pcStack_60;
  ppcVar7 = &pcStack_60;
  pcStack_60 = Merger_Game_Views_BoardView__Awake;
  uVar39 = 0x7e28000;
  if ((bRam0000000007e282a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc988);
    func_0x03280a18(PTR_DAT_0777fab8);
    func_0x03280a18(PTR_DAT_077cc990);
    func_0x03280a18(PTR_DAT_07809260);
    func_0x03280a18(PTR_DAT_07809268);
    func_0x03280a18(PTR_DAT_07809258);
    func_0x03280a18(PTR_DAT_07809168);
    bRam0000000007e282a5 = 1;
  }
  func_0x05369b94(lVar18,*plVar38);
  puVar22 = PTR_DAT_07809268;
  puVar37 = PTR_DAT_077cc988;
  unaff_x22 = puVar42;
  if (*(long *)(lVar18 + 0x28) == 0) {
LAB_0679121c:
    pcVar45 = Merger_Game_Views_BoardView__ApplyCoreBoardAndBlockerVariants;
    lVar30 = func_0x03280cac();
    while( true ) {
      lVar31 = lVar30;
      *(code **)((long)ppcVar7 + -0x20) = pcVar45;
      *(undefined8 *)((long)ppcVar7 + -0x10) = uVar39;
      *(long *)((long)ppcVar7 + -8) = lVar18;
      uVar39 = 0x7e28000;
      if ((bRam0000000007e282a6 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07809168);
        bRam0000000007e282a6 = 1;
      }
      if (*(long *)(lVar31 + 0x28) != 0) break;
      pcVar45 = Merger_Game_Views_BoardView__OnUserProfileDefaultValuesLoaded;
      lVar30 = func_0x03280cac();
      ppcVar7 = (code **)((long)ppcVar7 + -0x20);
      lVar18 = lVar31;
    }
    puVar16 = (ulong *)func_0x0672452c(*(long *)(lVar31 + 0x28),0);
    if (((ulong)puVar16 & 1) == 0) {
      return puVar16;
    }
    Merger_Game_Views_BoardView__ApplyCoreBoardVariant(lVar31);
    *(undefined8 *)((long)ppcVar7 + -0x20) = *(undefined8 *)((long)ppcVar7 + -0x20);
    *(undefined8 *)((long)ppcVar7 + -0x10) = *(undefined8 *)((long)ppcVar7 + -0x10);
    *(undefined8 *)((long)ppcVar7 + -8) = *(undefined8 *)((long)ppcVar7 + -8);
    if ((bRam0000000007e282a8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_07809168);
      bRam0000000007e282a8 = 1;
    }
    if (*(long *)(lVar31 + 0x28) == 0) {
      puVar13 = (ulong *)func_0x03280cac();
      *(undefined8 *)((long)ppcVar7 + -0x40) = 0x6791430;
      *(long **)((long)ppcVar7 + -0x38) = plVar38;
      *(undefined8 *)((long)ppcVar7 + -0x30) = 0x7e28000;
      *(long *)((long)ppcVar7 + -0x28) = lVar31;
      puVar16 = puVar13;
      if ((bRam0000000007e282a9 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07809120);
        func_0x03280a18(PTR_DAT_07809270);
        func_0x03280a18(PTR_DAT_0774e4e0);
        puVar16 = (ulong *)func_0x03280a18(PTR_DAT_07809250);
        bRam0000000007e282a9 = 1;
      }
      if (puVar13[0x26] == 0) {
        return puVar16;
      }
      uVar40 = puVar13[0x23];
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      puVar16 = (ulong *)func_0x06fe04ec(uVar40,0,0);
      if (((ulong)puVar16 & 1) != 0) {
        return puVar16;
      }
      uVar40 = puVar13[0x26];
      uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07809120);
      uVar26 = *(ulong *)PTR_DAT_07809270;
      func_0x054221d4(uVar19,puVar13,uVar26,0);
      if (uVar40 != 0) {
        unaff_x20 = *(undefined8 *)((long)ppcVar7 + -0x30);
        unaff_x19 = *(undefined8 *)((long)ppcVar7 + -0x28);
        lVar18 = *(long *)PTR_DAT_07809250;
        register0x00000008 = (BADSPACEBASE *)((long)ppcVar7 + -0x20);
        unaff_x30 = *(undefined8 *)((long)ppcVar7 + -0x40);
        unaff_x21 = *(undefined8 *)((long)ppcVar7 + -0x38);
        goto LAB_0475482c;
      }
      auVar51 = func_0x03280cac();
      *(code **)((long)ppcVar7 + -0x70) = Merger_Game_Views_BoardView__CreatePrefabObjectPool;
      *(undefined **)((long)ppcVar7 + -0x60) = unaff_x22;
      *(ulong *)((long)ppcVar7 + -0x58) = uVar19;
      *(undefined8 *)((long)ppcVar7 + -0x50) = 0;
      *(ulong **)((long)ppcVar7 + -0x48) = puVar13;
      uVar19 = 0x7e28000;
      uVar40 = uVar26;
      if ((bRam0000000007e282ba & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c7930);
        func_0x03280a18(PTR_DAT_07809168);
        bRam0000000007e282ba = 1;
      }
      lVar18 = *(long *)(auVar51._0_8_ + 0x28);
      if (lVar18 != 0) {
        uVar39 = func_0x06724368(lVar18,0);
        uVar40 = uVar26;
        lVar30 = func_0x06a4bc78(lVar18,uVar39,uVar26,1,0);
        if ((lVar30 != 0) &&
           (puVar16 = (ulong *)func_0x03dc9518(lVar30,*(undefined8 *)PTR_DAT_077c7930),
           puVar16 != (ulong *)0x0)) {
          func_0x06955dbc(puVar16,auVar51._8_8_,0);
          return puVar16;
        }
      }
      auVar52 = func_0x03280cac();
      lVar30 = auVar52._8_8_;
      *(code **)((long)ppcVar7 + -0xc0) =
           Merger_Game_Views_BoardView__OnBoardBoardFeedingTooltipSignalReceived;
      *(undefined8 *)((long)ppcVar7 + -0xb8) = unaff_x27;
      *(undefined8 *)((long)ppcVar7 + -0xb0) = unaff_x26;
      *(ulong *)((long)ppcVar7 + -0xa8) = unaff_x25;
      *(undefined **)((long)ppcVar7 + -0xa0) = unaff_x24;
      *(ulong *)((long)ppcVar7 + -0x98) = unaff_x23;
      *(undefined8 *)((long)ppcVar7 + -0x90) = 0x7e28000;
      *(long *)((long)ppcVar7 + -0x88) = lVar18;
      *(ulong *)((long)ppcVar7 + -0x80) = uVar26;
      *(long *)((long)ppcVar7 + -0x78) = auVar51._8_8_;
      uVar39 = 0x7e28000;
      if ((bRam0000000007e282ab & 1) == 0) {
        func_0x03280a18(PTR_DAT_07772358);
        func_0x03280a18(PTR_DAT_077bdeb0);
        func_0x03280a18(PTR_DAT_07809278);
        func_0x03280a18(PTR_DAT_077bdeb8);
        func_0x03280a18(PTR_DAT_077c2998);
        func_0x03280a18(PTR_DAT_077c2990);
        func_0x03280a18(PTR_DAT_077bce38);
        func_0x03280a18(PTR_DAT_07809280);
        func_0x03280a18(PTR_DAT_07809168);
        func_0x03280a18(PTR_DAT_07809288);
        bRam0000000007e282ab = 1;
      }
      if ((lVar30 != 0) && (lVar18 = *(long *)(auVar52._0_8_ + 0x120), lVar18 != 0)) {
        uVar40 = *(ulong *)PTR_DAT_07809280;
        lVar18 = func_0x047544b8(lVar18,*(undefined8 *)(lVar30 + 0x10));
        puVar22 = PTR_DAT_07809288;
        puVar37 = PTR_DAT_077bce38;
        puVar42 = PTR_DAT_07772358;
        if (lVar18 != 0) {
          unaff_x23 = func_0x069aaf28(lVar18,0);
          lVar18 = func_0x03280ca0(*(undefined8 *)puVar37);
          func_0x06b1ba10(lVar18,0);
          uVar19 = func_0x03280ca0(*(undefined8 *)puVar42);
          uVar40 = 0;
          func_0x06a59f4c(uVar19,*(undefined8 *)puVar22);
          uVar39 = 0;
          unaff_x24 = puVar22;
          if (lVar18 != 0) {
            puVar16 = (ulong *)(lVar18 + 0x10);
            *puVar16 = uVar19;
            goto SUB_032809c4;
          }
        }
      }
      auVar53 = func_0x03280cac();
      lVar18 = auVar53._8_8_;
      puVar8 = (undefined1 *)((long)ppcVar7 + -0x140);
      *(code **)((long)ppcVar7 + -0x120) = Merger_Game_Views_BoardView__OnVerifyBoardMergeSignal;
      *(undefined8 *)((long)ppcVar7 + -0x110) = unaff_x28;
      *(undefined8 *)((long)ppcVar7 + -0x108) = unaff_x27;
      *(undefined8 *)((long)ppcVar7 + -0x100) = unaff_x26;
      *(ulong *)((long)ppcVar7 + -0xf8) = unaff_x25;
      *(undefined **)((long)ppcVar7 + -0xf0) = unaff_x24;
      *(ulong *)((long)ppcVar7 + -0xe8) = unaff_x23;
      *(ulong *)((long)ppcVar7 + -0xe0) = uVar19;
      *(undefined8 *)((long)ppcVar7 + -0xd8) = uVar39;
      *(long *)((long)ppcVar7 + -0xd0) = lVar30;
      *(long *)((long)ppcVar7 + -200) = auVar52._0_8_;
      uVar26 = 0x7e28000;
      if ((bRam0000000007e282ac & 1) == 0) {
        func_0x03280a18(PTR_DAT_0776fc60);
        func_0x03280a18(PTR_DAT_07809290);
        func_0x03280a18(PTR_DAT_07809168);
        bRam0000000007e282ac = 1;
      }
      puVar42 = PTR_DAT_0776fc60;
      if (((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) && (*(long *)(lVar18 + 0x20) != 0)) {
        uVar26 = (ulong)*(uint *)(lVar18 + 0x10);
        uVar19 = *(ulong *)(*(long *)(lVar18 + 0x18) + 0x30);
        unaff_x23 = *(ulong *)(*(long *)(lVar18 + 0x20) + 0x30);
        unaff_x24 = *(undefined **)(lVar18 + 0x28);
        unaff_x25 = *(ulong *)(lVar18 + 0x30);
        uVar39 = *(undefined8 *)(lVar18 + 0x38);
        unaff_x26 = *(undefined8 *)(lVar18 + 0x40);
        uVar20 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07809290);
        *(undefined8 *)((long)ppcVar7 + -0x138) = 0;
        *(undefined8 *)((long)ppcVar7 + -0x130) = 0;
        *(undefined8 *)((long)ppcVar7 + -0x140) = uVar39;
        uVar40 = uVar19;
        func_0x067f2458(uVar20,uVar26,uVar19,unaff_x23,unaff_x26,unaff_x24,unaff_x25,uVar39);
        lVar18 = *(long *)(auVar53._0_8_ + 0x28);
        if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        auVar53._8_8_ = 0;
        auVar53._0_8_ = uVar20;
        auVar53 = auVar53 << 0x40;
        if (lVar18 != 0) {
          uVar39 = *(undefined8 *)(*(long *)(*(long *)puVar42 + 0xb8) + 0x98);
          *(undefined8 *)((long)ppcVar7 + -0xf0) = *(undefined8 *)((long)ppcVar7 + -0x120);
          *(undefined8 *)((long)ppcVar7 + -0xe0) = *(undefined8 *)((long)ppcVar7 + -0xe0);
          *(undefined8 *)((long)ppcVar7 + -0xd8) = *(undefined8 *)((long)ppcVar7 + -0xd8);
          *(undefined8 *)((long)ppcVar7 + -0xd0) = *(undefined8 *)((long)ppcVar7 + -0xd0);
          *(undefined8 *)((long)ppcVar7 + -200) = *(undefined8 *)((long)ppcVar7 + -200);
          if ((bRam0000000007e29c46 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f8d8,uVar39,uVar20,0);
            bRam0000000007e29c46 = 1;
          }
          plVar38 = *(long **)(lVar18 + 0x38);
          if (plVar38 != (long *)0x0) {
            lVar18 = *plVar38;
            uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar40 != 0) {
              piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0776f8d8) {
                  puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 9) * 0x10 + 0x138);
                  goto LAB_06a4b008;
                }
                uVar40 = uVar40 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar40 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0776f8d8,9);
LAB_06a4b008:
                    /* WARNING: Could not recover jumptable at 0x06a4b024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,uVar39,uVar20,puVar17[1]);
            return puVar16;
          }
          lVar18 = func_0x03280cac();
          *(undefined8 *)((long)ppcVar7 + -0x110) = 0x6a4b02c;
          *(undefined8 *)((long)ppcVar7 + -0x100) = uVar39;
          *(ulong *)((long)ppcVar7 + -0xf8) = uVar20;
          if ((bRam0000000007e29c47 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f8d8);
            bRam0000000007e29c47 = 1;
          }
          plVar38 = *(long **)(lVar18 + 0x38);
          if (plVar38 != (long *)0x0) {
            lVar18 = *plVar38;
            uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar40 != 0) {
              piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0776f8d8) {
                  puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 10) * 0x10 + 0x138);
                  goto LAB_06a4b0b8;
                }
                uVar40 = uVar40 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar40 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0776f8d8,10);
LAB_06a4b0b8:
                    /* WARNING: Could not recover jumptable at 0x06a4b0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,puVar17[1]);
            return puVar16;
          }
          auVar51 = func_0x03280cac();
          *(undefined8 *)((long)ppcVar7 + -0x130) = 0x6a4b0d0;
          *(undefined8 *)((long)ppcVar7 + -0x128) = 0;
          *(undefined8 *)((long)ppcVar7 + -0x120) = 0x7e29000;
          *(undefined8 *)((long)ppcVar7 + -0x118) = 0;
          if ((bRam0000000007e29c48 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f8d8);
            bRam0000000007e29c48 = 1;
          }
          plVar38 = *(long **)(auVar51._0_8_ + 0x38);
          if (plVar38 != (long *)0x0) {
            lVar18 = *plVar38;
            uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar40 != 0) {
              piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0776f8d8) {
                  puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 0x10) * 0x10 + 0x138);
                  goto LAB_06a4b160;
                }
                uVar40 = uVar40 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar40 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0776f8d8,0x10);
LAB_06a4b160:
                    /* WARNING: Could not recover jumptable at 0x06a4b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,auVar51._8_8_,puVar17[1]);
            return puVar16;
          }
          lVar18 = func_0x03280cac();
          *(undefined8 *)((long)ppcVar7 + -0x150) = 0x6a4b17c;
          *(undefined8 *)((long)ppcVar7 + -0x140) = 0;
          *(long *)((long)ppcVar7 + -0x138) = auVar51._8_8_;
          if ((bRam0000000007e29c49 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f8d8);
            bRam0000000007e29c49 = 1;
          }
          plVar38 = *(long **)(lVar18 + 0x38);
          if (plVar38 != (long *)0x0) {
            lVar18 = *plVar38;
            uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar40 != 0) {
              piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0776f8d8) {
                  puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 0x11) * 0x10 + 0x138);
                  goto LAB_06a4b208;
                }
                uVar40 = uVar40 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar40 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0776f8d8,0x11);
LAB_06a4b208:
                    /* WARNING: Could not recover jumptable at 0x06a4b21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,1,puVar17[1]);
            return puVar16;
          }
          lVar18 = func_0x03280cac();
          *(undefined8 *)((long)ppcVar7 + -0x170) = 0x6a4b224;
          *(undefined8 *)((long)ppcVar7 + -0x160) = 0x7e29000;
          *(undefined8 *)((long)ppcVar7 + -0x158) = 0;
          if ((bRam0000000007e29c4a & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f8d8);
            bRam0000000007e29c4a = 1;
          }
          plVar38 = *(long **)(lVar18 + 0x38);
          if (plVar38 != (long *)0x0) {
            lVar18 = *plVar38;
            uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar40 != 0) {
              piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0776f8d8) {
                  puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 0x11) * 0x10 + 0x138);
                  goto LAB_06a4b2b0;
                }
                uVar40 = uVar40 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar40 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0776f8d8,0x11);
LAB_06a4b2b0:
                    /* WARNING: Could not recover jumptable at 0x06a4b2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,0,puVar17[1]);
            return puVar16;
          }
          auVar51 = func_0x03280cac();
          *(undefined8 *)((long)ppcVar7 + -400) = 0x6a4b2cc;
          *(undefined8 *)((long)ppcVar7 + -0x188) = 0x7e29000;
          *(undefined8 *)((long)ppcVar7 + -0x180) = 0x7e29000;
          *(undefined8 *)((long)ppcVar7 + -0x178) = 0;
          uVar40 = auVar51._8_8_ & 0xffffffff;
          if ((bRam0000000007e29c4b & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777ceb0);
            bRam0000000007e29c4b = 1;
          }
          plVar38 = *(long **)(auVar51._0_8_ + 0x30);
          if (plVar38 != (long *)0x0) {
            lVar18 = *plVar38;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar19 != 0) {
              piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0777ceb0) {
                  puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 2) * 0x10 + 0x138);
                  goto LAB_06a4b35c;
                }
                uVar19 = uVar19 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar19 != 0);
            }
            puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0777ceb0,2);
LAB_06a4b35c:
                    /* WARNING: Could not recover jumptable at 0x06a4b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,uVar40,puVar17[1]);
            return puVar16;
          }
          auVar51 = func_0x03280cac();
          *(undefined8 *)((long)ppcVar7 + -0x1b0) = 0x6a4b378;
          *(undefined8 *)((long)ppcVar7 + -0x1a8) = 0x7e29000;
          *(undefined8 *)((long)ppcVar7 + -0x1a0) = 0;
          *(ulong *)((long)ppcVar7 + -0x198) = uVar40;
          if ((bRam0000000007e29c4c & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777ceb0);
            bRam0000000007e29c4c = 1;
          }
          plVar38 = *(long **)(auVar51._0_8_ + 0x30);
          if (plVar38 == (long *)0x0) {
            puVar16 = (ulong *)func_0x03280cac();
            return puVar16;
          }
          lVar18 = *plVar38;
          uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar40 != 0) {
            piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0777ceb0) {
                puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 1) * 0x10 + 0x138);
                goto LAB_06a4b408;
              }
              uVar40 = uVar40 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar40 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_0777ceb0,1);
LAB_06a4b408:
                    /* WARNING: Could not recover jumptable at 0x06a4b41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,auVar51._8_8_ & 0xffffffff,puVar17[1]);
          return puVar16;
        }
      }
      auVar51 = func_0x03280cac();
      lVar30 = auVar51._8_8_;
      lVar18 = auVar51._0_8_;
      *(code **)((long)ppcVar7 + -0x180) =
           Merger_Game_Views_BoardView__OnBoardFloatingTextSignalReceived;
      *(ulong *)((long)ppcVar7 + -0x178) = unaff_x25;
      *(undefined **)((long)ppcVar7 + -0x170) = unaff_x24;
      *(ulong *)((long)ppcVar7 + -0x168) = unaff_x23;
      *(ulong *)((long)ppcVar7 + -0x160) = uVar19;
      *(ulong *)((long)ppcVar7 + -0x158) = uVar26;
      *(long *)((long)ppcVar7 + -0x150) = auVar53._8_8_;
      *(long *)((long)ppcVar7 + -0x148) = auVar53._0_8_;
      uVar39 = 0x7e28000;
      if ((bRam0000000007e282ad & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777db28);
        func_0x03280a18(PTR_DAT_0777db38);
        func_0x03280a18(PTR_DAT_0774e4e0);
        func_0x03280a18(PTR_DAT_07809168);
        bRam0000000007e282ad = 1;
      }
      puVar42 = PTR_DAT_0774e4e0;
      uVar26 = 0;
      if (lVar30 == 0) {
LAB_06791a74:
        auVar51 = func_0x03280cac();
        lVar30 = auVar51._0_8_;
        *(code **)((long)ppcVar7 + -0x1b0) =
             Merger_Game_Views_BoardView__GetFloatingTextTargetTransform;
        *(ulong *)((long)ppcVar7 + -0x1a0) = uVar19;
        *(undefined8 *)((long)ppcVar7 + -0x198) = uVar39;
        *(long *)((long)ppcVar7 + -400) = lVar18;
        *(ulong *)((long)ppcVar7 + -0x188) = uVar26;
        uVar20 = 0x7e28000;
        uVar19 = auVar51._8_8_ & 0xffffffff;
        if ((bRam0000000007e282ae & 1) == 0) {
          func_0x03280a18(PTR_DAT_07809280);
          bRam0000000007e282ae = 1;
        }
        *(undefined8 *)((long)ppcVar7 + -0x1a8) = 0;
        if ((*(long *)(lVar30 + 0x100) != 0) &&
           (uVar26 = func_0x067b6518(*(long *)(lVar30 + 0x100),uVar19,
                                     (undefined1 *)((long)ppcVar7 + -0x1a8),0), (uVar26 & 1) != 0))
        {
          return *(ulong **)((long)ppcVar7 + -0x1a8);
        }
        if ((*(long *)(lVar30 + 0x120) != 0) &&
           (lVar18 = func_0x047544b8(*(long *)(lVar30 + 0x120),uVar40,
                                     *(undefined8 *)PTR_DAT_07809280), lVar18 != 0)) {
          puVar16 = (ulong *)func_0x069aaf28(lVar18,0);
          return puVar16;
        }
        auVar52 = func_0x03280cac();
        lVar18 = auVar52._8_8_;
        *(code **)((long)ppcVar7 + -0x200) =
             Merger_Game_Views_BoardView__OnBoardFloatingAccumulationItemSignalReceived;
        *(undefined8 *)((long)ppcVar7 + -0x1f0) = unaff_x26;
        *(ulong *)((long)ppcVar7 + -0x1e8) = unaff_x25;
        *(undefined **)((long)ppcVar7 + -0x1e0) = unaff_x24;
        *(ulong *)((long)ppcVar7 + -0x1d8) = unaff_x23;
        *(undefined8 *)((long)ppcVar7 + -0x1d0) = 0x7e28000;
        *(ulong *)((long)ppcVar7 + -0x1c8) = uVar19;
        *(long *)((long)ppcVar7 + -0x1c0) = lVar30;
        *(ulong *)((long)ppcVar7 + -0x1b8) = uVar40;
        uVar39 = 0x7e28000;
        if ((bRam0000000007e282af & 1) == 0) {
          func_0x03280a18(PTR_DAT_07809298);
          func_0x03280a18(PTR_DAT_078092a0);
          func_0x03280a18(PTR_DAT_07809280);
          func_0x03280a18(PTR_DAT_07809168);
          bRam0000000007e282af = 1;
        }
        if (((lVar18 != 0) && (lVar30 = *(long *)(auVar52._0_8_ + 0x120), lVar30 != 0)) &&
           (lVar30 = func_0x047544b8(lVar30,*(undefined8 *)(lVar18 + 0x10),
                                     *(undefined8 *)PTR_DAT_07809280), puVar42 = PTR_DAT_078092a0,
           lVar30 != 0)) {
          unaff_x26 = func_0x069aaf28(lVar30,0);
          puVar16 = *(ulong **)(auVar52._0_8_ + 0x28);
          uVar39 = *(undefined8 *)(lVar18 + 0x18);
          uVar20 = (ulong)*(uint *)(lVar18 + 0x20);
          unaff_x23 = (ulong)*(byte *)(lVar18 + 0x25);
          unaff_x24 = (undefined *)(ulong)*(byte *)(lVar18 + 0x26);
          unaff_x25 = (ulong)*(byte *)(lVar18 + 0x24);
          uVar26 = func_0x03280ca0(*(undefined8 *)puVar42);
          func_0x0686b1ac(uVar26,unaff_x26,uVar39,uVar20,unaff_x23,unaff_x24,unaff_x25,0);
          auVar52._8_8_ = 0;
          auVar52._0_8_ = uVar26;
          auVar52 = auVar52 << 0x40;
          if (puVar16 != (ulong *)0x0) {
            uVar39 = *(undefined8 *)((long)ppcVar7 + -0x1c0);
            uVar28 = *(undefined8 *)((long)ppcVar7 + -0x1b8);
            lVar18 = *(long *)PTR_DAT_07809298;
            uVar15 = *(undefined8 *)((long)ppcVar7 + -0x1d0);
            uVar41 = *(undefined8 *)((long)ppcVar7 + -0x1c8);
            unaff_x24 = *(undefined **)((long)ppcVar7 + -0x1e0);
            plVar21 = *(long **)((long)ppcVar7 + -0x1d8);
            unaff_x26 = *(undefined8 *)((long)ppcVar7 + -0x1f0);
            unaff_x25 = *(ulong *)((long)ppcVar7 + -0x1e8);
            puVar8 = (undefined1 *)((long)ppcVar7 + -0x1b0);
            uVar44 = *(undefined8 *)((long)ppcVar7 + -0x200);
            goto SUB_03cc6bd4;
          }
        }
        lVar18 = func_0x03280cac();
        *(undefined8 *)((long)ppcVar7 + -0x230) = 0x6791c28;
        *(ulong *)((long)ppcVar7 + -0x228) = unaff_x23;
        *(ulong *)((long)ppcVar7 + -0x220) = uVar20;
        *(undefined8 *)((long)ppcVar7 + -0x218) = uVar39;
        *(undefined1 (*) [16])((long)ppcVar7 + -0x210) = auVar52;
        if ((bRam0000000007e282b0 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776f318);
          func_0x03280a18(PTR_DAT_077726c8);
          func_0x03280a18(PTR_DAT_078092a8);
          func_0x03280a18(PTR_DAT_0774e758);
          func_0x03280a18(PTR_DAT_078092b0);
          func_0x03280a18(PTR_DAT_078092b8);
          func_0x03280a18(PTR_DAT_078092c0);
          func_0x03280a18(PTR_DAT_077726e8);
          func_0x03280a18(PTR_DAT_078092c8);
          func_0x03280a18(PTR_DAT_078092d0);
          func_0x03280a18(PTR_DAT_07772820);
          func_0x03280a18(PTR_DAT_078092d8);
          func_0x03280a18(PTR_DAT_078092e0);
          func_0x03280a18(PTR_DAT_078092e8);
          func_0x03280a18(PTR_DAT_078092f0);
          func_0x03280a18(PTR_DAT_078092f8);
          func_0x03280a18(PTR_DAT_07809300);
          func_0x03280a18(PTR_DAT_077706c0);
          func_0x03280a18(PTR_DAT_07809248);
          func_0x03280a18(PTR_DAT_0774e930);
          func_0x03280a18(PTR_DAT_0777c210);
          func_0x03280a18(PTR_DAT_07809168);
          func_0x03280a18(PTR_DAT_0774f158);
          bRam0000000007e282b0 = 1;
        }
        if (*(long *)(lVar18 + 0x78) != 0) {
          uVar39 = func_0x03cec8b4(*(long *)(lVar18 + 0x78),*(undefined8 *)PTR_DAT_07809248);
          puVar16 = (ulong *)(lVar18 + 0x158);
          *(undefined8 *)(lVar18 + 0x158) = uVar39;
          goto SUB_032809c4;
        }
        lVar30 = func_0x03280cac();
        *(code **)((long)ppcVar7 + -0x240) = Merger_Game_Views_BoardView__HideSelector;
        *(long *)((long)ppcVar7 + -0x238) = lVar18;
        if (*(long *)(lVar30 + 0xa0) != 0) {
          func_0x0681b500(*(long *)(lVar30 + 0xa0),0,0);
          if ((*(long *)(lVar30 + 0xa0) != 0) &&
             (lVar18 = func_0x06fdbe94(*(long *)(lVar30 + 0xa0),0), lVar18 != 0)) {
            uVar15 = *(undefined8 *)(lVar30 + 0x70);
            *(undefined8 *)((long)ppcVar7 + -0x250) = *(undefined8 *)((long)ppcVar7 + -0x240);
            *(undefined8 *)((long)ppcVar7 + -0x248) = uVar39;
            *(undefined8 *)((long)ppcVar7 + -0x240) = 0x7e28000;
            *(undefined8 *)((long)ppcVar7 + -0x238) = *(undefined8 *)((long)ppcVar7 + -0x238);
            if (pcRam0000000007e302d0 == (code *)0x0) {
              pcRam0000000007e302d0 = (code *)func_0x032809dc(&UNK_017ae4bb,uVar15,0);
            }
                    /* WARNING: Could not recover jumptable at 0x06feb6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*pcRam0000000007e302d0)(lVar18,uVar15,1);
            return puVar16;
          }
        }
        lVar18 = func_0x03280cac();
        puVar42 = PTR_DAT_0774e4e0;
        *(code **)((long)ppcVar7 + -0x260) = Merger_Game_Views_BoardView__InitPowerBoostBanner;
        *(undefined8 *)((long)ppcVar7 + -600) = uVar39;
        *(undefined8 *)((long)ppcVar7 + -0x250) = 0x7e28000;
        *(long *)((long)ppcVar7 + -0x248) = lVar30;
        if ((bRam0000000007e282b2 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776dcd8);
          func_0x03280a18(PTR_DAT_0774e4e0);
          func_0x03280a18(PTR_DAT_07809308);
          func_0x03280a18(PTR_DAT_07809310);
          func_0x03280a18(PTR_DAT_07809318);
          func_0x03280a18(PTR_DAT_07756328);
          func_0x03280a18(PTR_DAT_077503b8);
          bRam0000000007e282b2 = 1;
        }
        uVar39 = *(undefined8 *)(lVar18 + 0xa8);
        if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar40 = func_0x06fe04ec(uVar39,0,0);
        if ((uVar40 & 1) == 0) {
LAB_06792224:
          uVar39 = *(undefined8 *)(lVar18 + 0xa8);
          if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          puVar16 = (ulong *)func_0x06fe04ec(uVar39,0,0);
          if (((ulong)puVar16 & 1) == 0) {
            return puVar16;
          }
          uVar39 = *(undefined8 *)(lVar18 + 0xb0);
          if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          puVar16 = (ulong *)func_0x06fdeb74(uVar39,0,0);
          if (((ulong)puVar16 & 1) == 0) {
            return puVar16;
          }
          lVar30 = *(long *)(lVar18 + 0xb0);
          if (lVar30 != 0) {
            *(undefined8 *)((long)ppcVar7 + -0x260) = *(undefined8 *)((long)ppcVar7 + -0x260);
            *(undefined8 *)((long)ppcVar7 + -600) = *(undefined8 *)((long)ppcVar7 + -600);
            *(undefined8 *)((long)ppcVar7 + -0x250) = *(undefined8 *)((long)ppcVar7 + -0x250);
            *(undefined8 *)((long)ppcVar7 + -0x248) = *(undefined8 *)((long)ppcVar7 + -0x248);
            if (pcRam0000000007e2d950 == (code *)0x0) {
              pcRam0000000007e2d950 = (code *)func_0x032809dc(&UNK_0178d148);
            }
                    /* WARNING: Could not recover jumptable at 0x06f97080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar16 = (ulong *)(*pcRam0000000007e2d950)(lVar30,1);
            return puVar16;
          }
        }
        else {
          uVar39 = *(undefined8 *)(lVar18 + 0xb0);
          if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar40 = func_0x06fe04ec(uVar39,0,0);
          if ((uVar40 & 1) == 0) goto LAB_06792224;
          plVar38 = (long *)func_0x057dadc4(lVar18,0);
          if (plVar38 != (long *)0x0) {
            uVar39 = (**(code **)(*plVar38 + 0x1b8))(plVar38,*(undefined8 *)(*plVar38 + 0x1c0));
            uVar39 = func_0x055f7538(*(undefined8 *)PTR_DAT_07756328,uVar39,
                                     *(undefined8 *)PTR_DAT_07809310,0);
            if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
            }
            puVar42 = PTR_DAT_0776dcd8;
            uVar15 = *(undefined8 *)PTR_DAT_077503b8;
            uVar44 = *(undefined8 *)PTR_DAT_07809318;
            uVar28 = *(undefined8 *)PTR_DAT_07809308;
            *(undefined8 *)((long)ppcVar7 + -0x290) = *(undefined8 *)((long)ppcVar7 + -0x260);
            *(undefined8 *)((long)ppcVar7 + -0x280) = unaff_x26;
            *(ulong *)((long)ppcVar7 + -0x278) = unaff_x25;
            *(undefined **)((long)ppcVar7 + -0x270) = unaff_x24;
            *(ulong *)((long)ppcVar7 + -0x268) = unaff_x23;
            *(ulong *)((long)ppcVar7 + -0x260) = uVar20;
            *(undefined8 *)((long)ppcVar7 + -600) = *(undefined8 *)((long)ppcVar7 + -600);
            *(undefined8 *)((long)ppcVar7 + -0x250) = *(undefined8 *)((long)ppcVar7 + -0x250);
            *(undefined8 *)((long)ppcVar7 + -0x248) = *(undefined8 *)((long)ppcVar7 + -0x248);
            if ((bRam0000000007e1c84b & 1) == 0) {
              func_0x03280a18(PTR_DAT_0776dcd8);
              func_0x03280a18(PTR_DAT_07784e90);
              bRam0000000007e1c84b = 1;
            }
            if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            if (cRam0000000007e1c87b == '\0') {
              func_0x03280a18(PTR_DAT_0776dcd8);
              cRam0000000007e1c87b = '\x01';
            }
            puVar16 = *(ulong **)puVar42;
            if ((int)puVar16[0x1c] == 0) {
              func_0x03280b8c();
              puVar16 = *(ulong **)puVar42;
            }
            pbVar32 = (byte *)puVar16[0x17];
            if ((*pbVar32 & 1) != 0) {
              if ((int)puVar16[0x1c] == 0) {
                puVar16 = (ulong *)func_0x03280b8c();
                pbVar32 = *(byte **)(*(long *)puVar42 + 0xb8);
              }
              plVar38 = *(long **)(pbVar32 + 8);
              if (plVar38 != (long *)0x0) {
                lVar18 = *plVar38;
                uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar40 != 0) {
                  piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_07784e90) {
                      puVar17 = (undefined8 *)(lVar18 + (long)(*piVar33 + 4) * 0x10 + 0x138);
                      goto LAB_0556c570;
                    }
                    uVar40 = uVar40 - 1;
                    piVar33 = piVar33 + 4;
                  } while (uVar40 != 0);
                }
                puVar17 = (undefined8 *)func_0x03256b10(plVar38,*(long *)PTR_DAT_07784e90,4);
LAB_0556c570:
                    /* WARNING: Could not recover jumptable at 0x0556c5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar16 = (ulong *)(*(code *)*puVar17)(plVar38,uVar39,uVar15,0,uVar44,uVar28,0,
                                                       puVar17[1]);
                return puVar16;
              }
            }
            return puVar16;
          }
        }
        lVar30 = func_0x03280cac();
        *(undefined8 *)((long)ppcVar7 + -0x290) = 0x67922a0;
        *(ulong *)((long)ppcVar7 + -0x288) = unaff_x23;
        *(ulong *)((long)ppcVar7 + -0x280) = uVar20;
        *(undefined **)((long)ppcVar7 + -0x278) = puVar42;
        *(undefined8 *)((long)ppcVar7 + -0x270) = uVar39;
        *(long *)((long)ppcVar7 + -0x268) = lVar18;
        uVar39 = 0x7e28000;
        if ((bRam0000000007e282bc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e758);
          func_0x03280a18(PTR_DAT_07809320);
          func_0x03280a18(PTR_DAT_0777ab78);
          func_0x03280a18(PTR_DAT_07809328);
          func_0x03280a18(PTR_DAT_0774e4e0);
          func_0x03280a18(PTR_DAT_07809168);
          bRam0000000007e282bc = 1;
        }
        if (*(long *)(lVar30 + 0x28) == 0) {
LAB_0679246c:
          func_0x03280cac();
          puVar9 = (undefined1 *)((long)ppcVar7 + -0x2a0);
          *(code **)((long)ppcVar7 + -0x2a0) = Merger_Game_Views_BoardView__OnPlayStackingAnimation;
          if (extraout_x1 == 0) {
            pcVar45 = Merger_Game_Views_BoardView__PlayStackingAnimation;
            func_0x03280cac();
            uVar15 = extraout_x1_00;
          }
          else {
            uVar15 = *(undefined8 *)(extraout_x1 + 0x10);
            puVar9 = (undefined1 *)((long)ppcVar7 + -0x290);
            pcVar45 = *(code **)((long)ppcVar7 + -0x2a0);
          }
          puVar37 = PTR_DAT_07809330;
          *(code **)(puVar9 + -0x30) = pcVar45;
          *(ulong *)(puVar9 + -0x28) = unaff_x23;
          *(ulong *)(puVar9 + -0x20) = uVar20;
          *(undefined **)(puVar9 + -0x18) = puVar42;
          *(undefined8 *)(puVar9 + -0x10) = uVar39;
          *(long *)(puVar9 + -8) = lVar30;
          if ((bRam0000000007e282ed & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776e340,uVar15);
            func_0x03280a18(PTR_DAT_07772358);
            func_0x03280a18(PTR_DAT_077c0858);
            func_0x03280a18(PTR_DAT_07772368);
            func_0x03280a18(PTR_DAT_07809338);
            func_0x03280a18(PTR_DAT_07809330);
            func_0x03280a18(PTR_DAT_07809168);
            func_0x03280a18(PTR_DAT_07809340);
            bRam0000000007e282ed = 1;
          }
          puVar16 = (ulong *)func_0x03280ca0(*(undefined8 *)puVar37);
          return puVar16;
        }
        puVar16 = (ulong *)func_0x06724224(*(long *)(lVar30 + 0x28),0);
        puVar42 = PTR_DAT_0774e4e0;
        if (((ulong)puVar16 & 1) == 0) {
          return puVar16;
        }
        uVar39 = *(undefined8 *)(lVar30 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        puVar16 = (ulong *)func_0x06fe04ec(uVar39,0,0);
        if (((ulong)puVar16 & 1) != 0) {
          return puVar16;
        }
        if (*(long *)(lVar30 + 0x70) == 0) goto LAB_0679246c;
        uVar39 = func_0x03cec8b4(*(long *)(lVar30 + 0x70),*(undefined8 *)PTR_DAT_0777ab78);
        puVar16 = (ulong *)(lVar30 + 0x180);
        *(undefined8 *)(lVar30 + 0x180) = uVar39;
        goto SUB_032809c4;
      }
      uVar39 = Merger_Game_Views_BoardView__GetFloatingTextTargetTransform
                         (lVar18,*(undefined4 *)(lVar30 + 0x18),*(undefined8 *)(lVar30 + 0x10));
      if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar42);
      }
      puVar16 = (ulong *)func_0x06fdeb74(uVar39,0,0);
      if (((ulong)puVar16 & 1) == 0) {
        return puVar16;
      }
      puVar16 = *(ulong **)(lVar18 + 0x28);
      uVar19 = (ulong)*(uint *)(lVar30 + 0x18);
      unaff_x23 = *(ulong *)(lVar30 + 0x20);
      unaff_x24 = (undefined *)(ulong)*(byte *)(lVar30 + 0x28);
      unaff_x25 = (ulong)*(uint *)(lVar30 + 0x2c);
      uVar26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777db38);
      uVar40 = uVar19;
      func_0x0686b2ac(uVar26,uVar39,uVar19,unaff_x23,unaff_x24,unaff_x25,0);
      lVar18 = 0;
      if (puVar16 == (ulong *)0x0) goto LAB_06791a74;
      uVar39 = *(undefined8 *)((long)ppcVar7 + -0x150);
      uVar28 = *(undefined8 *)((long)ppcVar7 + -0x148);
      lVar18 = *(long *)PTR_DAT_0777db28;
      uVar15 = *(undefined8 *)((long)ppcVar7 + -0x160);
      uVar41 = *(undefined8 *)((long)ppcVar7 + -0x158);
      unaff_x24 = *(undefined **)((long)ppcVar7 + -0x170);
      plVar21 = *(long **)((long)ppcVar7 + -0x168);
      uVar44 = *(undefined8 *)((long)ppcVar7 + -0x180);
      unaff_x25 = *(ulong *)((long)ppcVar7 + -0x178);
SUB_03cc6bd4:
      *(undefined8 *)(puVar8 + -0x20) = uVar44;
      *(undefined8 *)(puVar8 + -0x18) = uVar41;
      *(undefined8 *)(puVar8 + -0x10) = uVar39;
      *(undefined8 *)(puVar8 + -8) = uVar28;
      puVar13 = puVar16;
      lVar30 = lVar18;
      if (*(long *)(lVar18 + 0x38) == 0) {
        puVar13 = (ulong *)func_0x03256878(lVar18);
      }
      if ((char)puVar16[3] != '\0') {
        return puVar13;
      }
      puVar13 = (ulong *)puVar16[4];
      if (puVar13 == (ulong *)0x0) {
        auVar51 = func_0x03280cac();
        puVar24 = auVar51._8_8_;
        puVar13 = auVar51._0_8_;
        *(undefined8 **)(puVar8 + -0x60) = unaff_x29;
        *(undefined8 *)(puVar8 + -0x58) = 0x3cc6c30;
        *(long **)(puVar8 + -0x50) = plVar21;
        *(undefined8 *)(puVar8 + -0x40) = uVar15;
        *(ulong **)(puVar8 + -0x38) = puVar16;
        *(long *)(puVar8 + -0x30) = lVar18;
        *(ulong *)(puVar8 + -0x28) = uVar26;
        lVar18 = tpidr_el0;
        *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(lVar18 + 0x28);
        *(undefined1 **)(puVar8 + -0x78) = puVar24;
        plVar38 = *(long **)(lVar30 + 0x38);
        puVar16 = puVar13;
        if (plVar38 == (long *)0x0) {
          puVar16 = (ulong *)func_0x03256878(lVar30);
          plVar38 = *(long **)(lVar30 + 0x38);
        }
        puVar29 = (ulong *)(ulong)*(uint *)(*plVar38 + 0xfc);
        puVar34 = (undefined8 *)(puVar8 + (-0x80 - ((long)puVar29 + 0xfU & 0x1fffffff0)));
        puVar17 = puVar34;
        if ((char)puVar13[3] == '\0') {
          puVar13 = (ulong *)puVar13[4];
          puVar1 = puVar24;
          if (-1 < *(int *)(*plVar38 + 0x28)) {
            puVar1 = puVar8 + -0x78;
          }
          func_0x072ce970(puVar34,puVar1);
          if (puVar13 != (ulong *)0x0) {
            puVar2 = (undefined8 *)plVar38[1];
            uVar39 = *puVar2;
            if (-1 < *(int *)(*plVar38 + 0x28)) {
              puVar17 = (undefined8 *)*puVar34;
            }
            *(undefined8 **)(puVar8 + -0x70) = puVar17;
            puVar29 = puVar13;
            puVar16 = (ulong *)(*(code *)puVar2[2])(uVar39,puVar2,puVar13,puVar8 + -0x70,puVar17);
            goto LAB_03cc6ce8;
          }
          func_0x03280cac();
        }
        else {
LAB_03cc6ce8:
          if (*(long *)(lVar18 + 0x28) == *(long *)(puVar8 + -0x68)) {
            return puVar16;
          }
        }
        auVar51 = func_0x072ce990();
        puVar14 = auVar51._0_8_;
        puVar34[-4] = 0x3cc6d18;
        puVar34[-3] = puVar13;
        puVar34[-2] = puVar24;
        puVar34[-1] = puVar17;
        puVar16 = puVar14;
        puVar13 = puVar29;
        if (puVar29[7] == 0) {
          puVar16 = (ulong *)func_0x03256878(puVar29);
        }
        if ((char)puVar14[3] != '\0') {
          return puVar16;
        }
        plVar21 = (long *)puVar14[2];
        if (plVar21 != (long *)0x0) {
          lVar18 = *plVar21;
          lVar30 = *(long *)(puVar29[7] + 8);
          uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar40 != 0) {
            piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)(lVar30 + 0x20)) {
                lVar18 = lVar18 + (long)(int)(*piVar33 + (uint)*(ushort *)(lVar30 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03cc6db0;
              }
              uVar40 = uVar40 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar40 != 0);
          }
          lVar18 = func_0x03256b10(plVar21);
LAB_03cc6db0:
          lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar30);
                    /* WARNING: Could not recover jumptable at 0x03cc6dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar16 = (ulong *)(**(code **)(lVar18 + 8))(plVar21,auVar51._8_8_,lVar18);
          return puVar16;
        }
        auVar48 = func_0x03280cac();
        puVar17 = auVar48._8_8_;
        puVar14 = auVar48._0_8_;
        unaff_x29 = puVar34 + -0xc;
        puVar34[-0xc] = puVar8 + -0x60;
        puVar34[-0xb] = 0x3cc6ddc;
        puVar34[-10] = plVar38;
        puVar34[-8] = lVar18;
        puVar34[-7] = puVar29;
        puVar34[-6] = 0;
        puVar34[-5] = auVar51._8_8_;
        puVar16 = (ulong *)tpidr_el0;
        puVar34[-0xd] = puVar16[5];
        puVar34[-0xf] = puVar17;
        plVar21 = (long *)puVar13[7];
        puVar29 = puVar14;
        if (plVar21 == (long *)0x0) {
          puVar29 = (ulong *)func_0x03256878(puVar13);
          plVar21 = (long *)puVar13[7];
        }
        plVar25 = (long *)(ulong)*(uint *)(*plVar21 + 0xfc);
        plVar35 = (long *)((long)puVar34 + (-0x80 - ((ulong)((long)plVar25 + 0xfU) & 0x1fffffff0)));
        plVar38 = plVar25;
        plVar36 = plVar35;
        if ((char)puVar14[3] == '\0') {
          plVar38 = (long *)puVar14[2];
          auVar48._8_8_ = puVar17;
          auVar48._0_8_ = plVar38;
          if (-1 < *(int *)(*plVar21 + 0x28)) {
            puVar17 = puVar34 + -0xf;
          }
          func_0x072ce970(plVar35,puVar17);
          if (plVar38 != (long *)0x0) {
            lVar18 = plVar21[1];
            auVar48._8_8_ = lVar18;
            if (-1 < *(int *)(*plVar21 + 0x28)) {
              plVar36 = (long *)*plVar35;
            }
            lVar30 = *plVar38;
            uVar40 = (ulong)*(ushort *)(lVar30 + 0x12e);
            if (uVar40 != 0) {
              piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar33 + -2) == *(long *)(lVar18 + 0x20)) {
                  lVar30 = lVar30 + (long)(int)(*piVar33 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03cc6ec8;
                }
                uVar40 = uVar40 - 1;
                piVar33 = piVar33 + 4;
              } while (uVar40 != 0);
            }
            lVar30 = func_0x03256b10(plVar38);
LAB_03cc6ec8:
            lVar18 = func_0x03280b88(*(undefined8 *)(lVar30 + 8),lVar18);
            puVar34[-0xe] = plVar36;
            puVar29 = (ulong *)(**(code **)(lVar18 + 0x10))
                                         (*(undefined8 *)(lVar18 + 8),lVar18,plVar38,puVar34 + -0xe,
                                          plVar36);
            goto LAB_03cc6ef0;
          }
          func_0x03280cac();
        }
        else {
LAB_03cc6ef0:
          plVar25 = plVar38;
          if (puVar16[5] == puVar34[-0xd]) {
            return puVar29;
          }
        }
        auVar51 = func_0x072ce990();
        puVar29 = auVar51._0_8_;
        plVar35[-4] = 0x3cc6f20;
        plVar35[-3] = auVar48._8_8_;
        plVar35[-2] = auVar48._0_8_;
        plVar35[-1] = (long)plVar36;
        puVar13 = puVar29;
        plVar38 = plVar25;
        if (plVar25[7] == 0) {
          puVar13 = (ulong *)func_0x03256878(plVar25);
        }
        if ((char)puVar29[3] != '\0') {
          return puVar13;
        }
        plVar36 = (long *)puVar29[2];
        if (plVar36 != (long *)0x0) {
          lVar18 = *plVar36;
          lVar30 = *(long *)(plVar25[7] + 8);
          uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar40 != 0) {
            piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)(lVar30 + 0x20)) {
                lVar18 = lVar18 + (long)(int)(*piVar33 + (uint)*(ushort *)(lVar30 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03cc6fb8;
              }
              uVar40 = uVar40 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar40 != 0);
          }
          lVar18 = func_0x03256b10(plVar36);
LAB_03cc6fb8:
          lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar30);
                    /* WARNING: Could not recover jumptable at 0x03cc6fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar16 = (ulong *)(**(code **)(lVar18 + 8))(plVar36,auVar51._8_8_,lVar18);
          return puVar16;
        }
        auVar52 = func_0x03280cac();
        lVar18 = auVar52._8_8_;
        puVar29 = auVar52._0_8_;
        ppcVar43 = (code **)(plVar35 + -8);
        plVar35[-8] = 0x3cc6fe4;
        plVar35[-7] = (long)plVar25;
        plVar35[-6] = 0;
        plVar35[-5] = auVar51._8_8_;
        puVar13 = puVar29;
        plVar25 = plVar38;
        if (plVar38[7] == 0) {
          puVar13 = (ulong *)func_0x03256878(plVar38);
        }
        if ((char)puVar29[3] != '\0') {
          return puVar13;
        }
        plVar36 = (long *)puVar29[2];
        if (plVar36 != (long *)0x0) {
          lVar30 = *plVar36;
          lVar31 = *(long *)(plVar38[7] + 8);
          uVar40 = (ulong)*(ushort *)(lVar30 + 0x12e);
          if (uVar40 != 0) {
            piVar33 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar33 + -2) == *(long *)(lVar31 + 0x20)) {
                lVar30 = lVar30 + (long)(int)(*piVar33 + (uint)*(ushort *)(lVar31 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03cc707c;
              }
              uVar40 = uVar40 - 1;
              piVar33 = piVar33 + 4;
            } while (uVar40 != 0);
          }
          lVar30 = func_0x03256b10(plVar36);
LAB_03cc707c:
          lVar30 = func_0x03280b88(*(undefined8 *)(lVar30 + 8),lVar31);
                    /* WARNING: Could not recover jumptable at 0x03cc70a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar16 = (ulong *)(**(code **)(lVar30 + 8))(plVar36,lVar18,lVar30);
          return puVar16;
        }
        uVar39 = 0x3cc70a8;
        auVar51 = func_0x03280cac();
        lVar30 = 0;
        goto SUB_03cc70a8;
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
      *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
      *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
      *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
      lVar30 = *(long *)(lVar18 + 0x38);
      if (lVar30 == 0) {
        func_0x03256878(lVar18);
        lVar30 = *(long *)(lVar18 + 0x38);
      }
      lVar18 = *(long *)(lVar30 + 8);
      *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x20);
      *(undefined8 *)(puVar8 + -0x20) = uVar15;
      *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
      *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
      puVar16 = puVar13;
      if ((*(long *)(lVar18 + 0x38) == 0) &&
         (puVar16 = (ulong *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar18 + 0x38) == 0)) {
        puVar16 = (ulong *)func_0x03256878(lVar18);
      }
      if ((char)puVar13[10] != '\0') {
        return puVar16;
      }
      uVar39 = **(undefined8 **)(lVar18 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar15 = func_0x057a51c4(uVar39,0);
      lVar18 = 1;
      plVar38 = (long *)0x0;
      lVar30 = func_0x072869d0(puVar13,uVar15,0,1,0);
      if (lVar30 != 0) {
        lVar18 = *(long *)(puVar8 + -0x10);
        plVar38 = *(long **)(puVar8 + -8);
        puVar16 = *(ulong **)(puVar8 + -0x20);
        uVar39 = *(undefined8 *)(puVar8 + -0x30);
        ppcVar43 = (code **)puVar8;
        lVar31 = *(long *)(puVar8 + -0x18);
        goto SUB_072852e4;
      }
      auVar51 = func_0x03280cac();
      uVar15 = auVar51._8_8_;
      puVar16 = auVar51._0_8_;
      *(undefined8 **)(puVar8 + -0x80) = unaff_x29;
      *(undefined8 *)(puVar8 + -0x78) = 0x3ea51c0;
      *(undefined8 *)(puVar8 + -0x70) = unaff_x26;
      *(ulong *)(puVar8 + -0x68) = unaff_x25;
      *(undefined **)(puVar8 + -0x60) = unaff_x24;
      *(long **)(puVar8 + -0x58) = plVar21;
      *(undefined8 *)(puVar8 + -0x50) = uVar39;
      *(ulong **)(puVar8 + -0x48) = puVar13;
      *(undefined8 *)(puVar8 + -0x40) = 0;
      *(ulong *)(puVar8 + -0x38) = uVar26;
      lVar30 = tpidr_el0;
      *(undefined8 *)(puVar8 + -0x88) = *(undefined8 *)(lVar30 + 0x28);
      *(long **)(puVar8 + -0x90) = plVar38;
      puVar29 = *(ulong **)(lVar18 + 0x38);
      puVar13 = puVar16;
      plVar25 = plVar38;
      if (puVar29 == (ulong *)0x0) {
        puVar13 = (ulong *)func_0x03280a18(PTR_DAT_0774e558);
        puVar29 = *(ulong **)(lVar18 + 0x38);
        if (puVar29 == (ulong *)0x0) {
          puVar13 = (ulong *)func_0x03256878(lVar18);
          puVar29 = *(ulong **)(lVar18 + 0x38);
        }
      }
      plVar21 = (long *)(ulong)*(uint *)(puVar29[1] + 0xfc);
      ppcVar43 = (code **)(puVar8 + (-0x90 - ((long)plVar21 + 0xfU & 0x1fffffff0)));
      unaff_x24 = (undefined *)ppcVar43;
      if ((char)puVar16[10] == '\0') {
        unaff_x25 = *puVar29;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar39 = func_0x057a51c4(unaff_x25,0);
        lVar30 = func_0x072869d0(puVar16,uVar39,uVar15,1,0);
        lVar18 = *(long *)(lVar18 + 0x38);
        plVar36 = plVar38;
        if (-1 < *(int *)(*(long *)(lVar18 + 8) + 0x28)) {
          plVar36 = (long *)(puVar8 + -0x90);
        }
        plVar25 = plVar21;
        func_0x072ce970(ppcVar43,plVar36);
        uVar26 = func_0x03280b94(*(undefined8 *)(lVar18 + 8),ppcVar43);
        if (lVar30 != 0) {
          uVar39 = 0x3ea52d0;
          lVar31 = lVar30;
          goto SUB_072852e4;
        }
        func_0x03280cac();
        uVar15 = 0;
      }
      else if (*(long *)(lVar30 + 0x28) == *(long *)(puVar8 + -0x88)) {
        return puVar13;
      }
      uVar39 = 0x3ea5304;
      auVar49 = func_0x072ce990();
      goto SUB_03ea5304;
    }
    uVar40 = func_0x06724488(*(long *)(lVar31 + 0x28),0);
    if ((uVar40 & 1) == 0) {
      uVar39 = *(undefined8 *)(lVar31 + 0xd0);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar40 = func_0x06fe351c(uVar39,0);
      if ((uVar40 & 1) == 0) goto LAB_0679140c;
      uVar39 = *(undefined8 *)(lVar31 + 0xd0);
    }
    else {
LAB_0679140c:
      uVar39 = *(undefined8 *)(lVar31 + 200);
    }
    puVar16 = (ulong *)(lVar31 + 0x118);
    *(undefined8 *)(lVar31 + 0x118) = uVar39;
    goto SUB_032809c4;
  }
  Merger_Game_ViewModel_BoardViewModel__RegisterView(*(long *)(lVar18 + 0x28),lVar18,0);
  lVar30 = *(long *)(lVar18 + 0x28);
  plVar38 = (long *)func_0x03280ca0(*(undefined8 *)puVar37);
  auVar51._8_8_ = plVar38;
  auVar51._0_8_ = lVar30;
  func_0x054221d4(plVar38,lVar18,*(undefined8 *)puVar22,0);
  uVar39 = 0;
  unaff_x22 = puVar22;
  if (lVar30 == 0) goto LAB_0679121c;
  plVar25 = *(long **)PTR_DAT_077cc990;
  uVar39 = 0x67911d4;
  puVar16 = (ulong *)PTR_DAT_0777fab8;
  plVar21 = (long *)PTR_DAT_07809260;
SUB_03cc70a8:
  puVar29 = auVar51._0_8_;
  *(undefined8 *)((long)ppcVar43 + -0x20) = uVar39;
  *(long **)((long)ppcVar43 + -0x18) = plVar38;
  *(long *)((long)ppcVar43 + -0x10) = lVar30;
  *(long *)((long)ppcVar43 + -8) = lVar18;
  puVar13 = puVar29;
  plVar38 = plVar25;
  if (plVar25[7] == 0) {
    puVar13 = (ulong *)func_0x03256878(plVar25);
  }
  if ((char)puVar29[3] != '\0') {
    return puVar13;
  }
  auVar49._8_8_ = auVar51._8_8_;
  auVar49._0_8_ = puVar29[4];
  if (puVar29[4] == 0) {
    auVar52 = func_0x03280cac();
    uVar40 = auVar52._8_8_;
    puVar14 = auVar52._0_8_;
    *(undefined8 *)((long)ppcVar43 + -0x40) = 0x3cc7104;
    *(ulong **)((long)ppcVar43 + -0x38) = puVar29;
    *(long **)((long)ppcVar43 + -0x30) = plVar25;
    *(long *)((long)ppcVar43 + -0x28) = auVar51._8_8_;
    puVar13 = puVar14;
    plVar25 = plVar38;
    if (plVar38[7] == 0) {
      puVar13 = (ulong *)func_0x03256878(plVar38);
    }
    if ((char)puVar14[3] != '\0') {
      return puVar13;
    }
    uVar19 = puVar14[4];
    if (uVar19 != 0) {
      lVar18 = *(long *)plVar38[7];
      *(undefined8 *)((long)ppcVar43 + -0x40) = *(undefined8 *)((long)ppcVar43 + -0x40);
      *(undefined8 *)((long)ppcVar43 + -0x38) = *(undefined8 *)((long)ppcVar43 + -0x38);
      *(undefined8 *)((long)ppcVar43 + -0x30) = *(undefined8 *)((long)ppcVar43 + -0x30);
      *(undefined8 *)((long)ppcVar43 + -0x28) = *(undefined8 *)((long)ppcVar43 + -0x28);
      plVar38 = *(long **)(lVar18 + 0x38);
      if (plVar38 == (long *)0x0) {
        func_0x03256878(lVar18);
        plVar38 = *(long **)(lVar18 + 0x38);
      }
      lVar30 = *plVar38;
      auVar49._8_8_ = puVar16;
      auVar49._0_8_ = *(undefined8 *)((long)ppcVar43 + -0x30);
      uVar15 = *(undefined8 *)((long)ppcVar43 + -0x28);
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar19;
      puVar5 = (undefined1 *)((long)ppcVar43 + -0x20);
      uVar39 = *(undefined8 *)((long)ppcVar43 + -0x40);
      lVar18 = *(long *)((long)ppcVar43 + -0x38);
      goto LAB_03ea5530;
    }
    auVar51 = func_0x03280cac();
    puVar29 = auVar51._0_8_;
    *(undefined8 *)((long)ppcVar43 + -0x60) = 0x3cc7160;
    *(ulong **)((long)ppcVar43 + -0x58) = puVar14;
    *(long **)((long)ppcVar43 + -0x50) = plVar38;
    *(ulong *)((long)ppcVar43 + -0x48) = uVar40;
    puVar13 = puVar29;
    plVar38 = plVar25;
    if (plVar25[7] == 0) {
      puVar13 = (ulong *)func_0x03256878(plVar25);
    }
    if ((char)puVar29[3] != '\0') {
      return puVar13;
    }
    if (puVar29[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cc71b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar16 = (ulong *)(*(code *)**(undefined8 **)(plVar25[7] + 8))(puVar29[4],auVar51._8_8_);
      return puVar16;
    }
    auVar52 = func_0x03280cac();
    puVar14 = auVar52._0_8_;
    *(undefined8 *)((long)ppcVar43 + -0x80) = 0x3cc71c0;
    *(ulong **)((long)ppcVar43 + -0x78) = puVar29;
    *(long **)((long)ppcVar43 + -0x70) = plVar25;
    *(long *)((long)ppcVar43 + -0x68) = auVar51._8_8_;
    puVar13 = puVar14;
    plVar25 = plVar38;
    if (plVar38[7] == 0) {
      puVar13 = (ulong *)func_0x03256878(plVar38);
    }
    if ((char)puVar14[3] != '\0') {
      return puVar13;
    }
    if (puVar14[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cc7218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar16 = (ulong *)(*(code *)**(undefined8 **)plVar38[7])(puVar14[4],auVar52._8_8_);
      return puVar16;
    }
    auVar51 = func_0x03280cac();
    uVar26 = auVar51._8_8_;
    puVar29 = auVar51._0_8_;
    *(undefined8 *)((long)ppcVar43 + -0xa0) = 0x3cc7220;
    *(ulong **)((long)ppcVar43 + -0x98) = puVar14;
    *(long **)((long)ppcVar43 + -0x90) = plVar38;
    *(long *)((long)ppcVar43 + -0x88) = auVar52._8_8_;
    puVar13 = puVar29;
    plVar38 = plVar25;
    if (plVar25[7] == 0) {
      puVar13 = (ulong *)func_0x03256878(plVar25);
    }
    if ((char)puVar29[3] != '\0') {
      return puVar13;
    }
    puVar13 = (ulong *)puVar29[4];
    if (puVar13 == (ulong *)0x0) {
      auVar51 = func_0x03280cac();
      puVar24 = auVar51._8_8_;
      puVar13 = auVar51._0_8_;
      *(undefined8 **)((long)ppcVar43 + -0xe0) = unaff_x29;
      *(undefined8 *)((long)ppcVar43 + -0xd8) = 0x3cc727c;
      *(long **)((long)ppcVar43 + -0xd0) = plVar21;
      *(ulong **)((long)ppcVar43 + -0xc0) = puVar16;
      *(ulong **)((long)ppcVar43 + -0xb8) = puVar29;
      *(long **)((long)ppcVar43 + -0xb0) = plVar25;
      *(ulong *)((long)ppcVar43 + -0xa8) = uVar26;
      lVar18 = tpidr_el0;
      *(undefined8 *)((long)ppcVar43 + -0xe8) = *(undefined8 *)(lVar18 + 0x28);
      *(undefined1 **)((long)ppcVar43 + -0xf8) = puVar24;
      plVar21 = (long *)plVar38[7];
      puVar16 = puVar13;
      if (plVar21 == (long *)0x0) {
        puVar16 = (ulong *)func_0x03256878(plVar38);
        plVar21 = (long *)plVar38[7];
      }
      puVar29 = (ulong *)(ulong)*(uint *)(*plVar21 + 0xfc);
      puVar34 = (undefined8 *)((long)ppcVar43 + (-0x100 - ((long)puVar29 + 0xfU & 0x1fffffff0)));
      puVar17 = puVar34;
      if ((char)puVar13[3] == '\0') {
        puVar13 = (ulong *)puVar13[4];
        puVar1 = puVar24;
        if (-1 < *(int *)(*plVar21 + 0x28)) {
          puVar1 = (undefined1 *)((long)ppcVar43 + -0xf8);
        }
        func_0x072ce970(puVar34,puVar1);
        if (puVar13 == (ulong *)0x0) {
          func_0x03280cac();
          goto LAB_03cc7360;
        }
        puVar2 = (undefined8 *)plVar21[1];
        uVar39 = *puVar2;
        if (-1 < *(int *)(*plVar21 + 0x28)) {
          puVar17 = (undefined8 *)*puVar34;
        }
        *(undefined8 **)((long)ppcVar43 + -0xf0) = puVar17;
        puVar29 = puVar13;
        puVar16 = (ulong *)(*(code *)puVar2[2])
                                     (uVar39,puVar2,puVar13,(undefined1 *)((long)ppcVar43 + -0xf0),
                                      puVar17);
      }
      if (*(long *)(lVar18 + 0x28) == *(long *)((long)ppcVar43 + -0xe8)) {
        return puVar16;
      }
LAB_03cc7360:
      auVar51 = func_0x072ce990();
      puVar34[-4] = 0x3cc7364;
      puVar34[-3] = puVar13;
      puVar34[-2] = puVar24;
      puVar34[-1] = puVar17;
      puVar16 = puVar29;
      if (puVar29[7] == 0) {
        func_0x03256878(puVar29);
      }
      plVar38 = *(long **)(auVar51._0_8_ + 0x10);
      if (plVar38 == (long *)0x0) {
        auVar52 = func_0x03280cac();
        puVar34[-8] = 0x3cc7414;
        puVar34[-7] = puVar29;
        puVar34[-6] = 0;
        puVar34[-5] = auVar51._8_8_;
        puVar13 = puVar16;
        if (puVar16[7] == 0) {
          func_0x03256878(puVar16);
        }
        plVar38 = *(long **)(auVar52._0_8_ + 0x10);
        if (plVar38 == (long *)0x0) {
          auVar51 = func_0x03280cac();
          puVar34[-0xc] = 0x3cc74c4;
          puVar34[-0xb] = puVar16;
          puVar34[-10] = 0;
          puVar34[-9] = auVar52._8_8_;
          if (puVar13[7] == 0) {
            func_0x03256878(puVar13);
          }
          lVar30 = *(long *)(auVar51._0_8_ + 0x20);
          if (lVar30 != 0) {
            lVar31 = *(long *)(puVar13[7] + 8);
            puVar34[-0xc] = puVar34[-0xc];
            puVar34[-0xb] = puVar34[-0xb];
            puVar34[-10] = puVar34[-10];
            puVar34[-9] = puVar34[-9];
            lVar27 = *(long *)(lVar31 + 0x38);
            if (lVar27 == 0) {
              func_0x03256878(lVar31);
              lVar27 = *(long *)(lVar31 + 0x38);
            }
            lVar31 = *(long *)(lVar27 + 8);
            puVar34[-0xe] = puVar34[-0xc];
            puVar34[-0xc] = lVar18;
            puVar34[-0xb] = puVar34[-0xb];
            puVar34[-10] = puVar34[-10];
            puVar34[-9] = puVar34[-9];
            puVar17 = *(undefined8 **)(lVar31 + 0x38);
            if (puVar17 == (undefined8 *)0x0) {
              func_0x03280a18(PTR_DAT_0774e558);
              puVar17 = *(undefined8 **)(lVar31 + 0x38);
              if (puVar17 == (undefined8 *)0x0) {
                func_0x03256878(lVar31);
                puVar17 = *(undefined8 **)(lVar31 + 0x38);
              }
            }
            uVar39 = *puVar17;
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar39 = func_0x057a51c4(uVar39,0);
            puVar34[-0xc] = puVar34[-0xe];
            puVar34[-0xb] = puVar34[-0xb];
            puVar34[-10] = puVar34[-10];
            puVar34[-9] = puVar34[-9];
            puVar34[-0xe] = 0;
            puVar34[-0xd] = 0;
            func_0x072a6c4c(puVar34 + -0xe,uVar39,0,0,0,0);
            puVar16 = (ulong *)func_0x07286e40(lVar30,puVar34[-0xe],puVar34[-0xd],auVar51._8_8_,0);
            return puVar16;
          }
          return (ulong *)0x0;
        }
        lVar18 = *plVar38;
        lVar30 = *(long *)(puVar16[7] + 8);
        uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar40 != 0) {
          piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar33 + -2) == *(long *)(lVar30 + 0x20)) {
              lVar18 = lVar18 + (long)(int)(*piVar33 + (uint)*(ushort *)(lVar30 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03cc7498;
            }
            uVar40 = uVar40 - 1;
            piVar33 = piVar33 + 4;
          } while (uVar40 != 0);
        }
        lVar18 = func_0x03256b10(plVar38);
LAB_03cc7498:
        lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar30);
                    /* WARNING: Could not recover jumptable at 0x03cc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar16 = (ulong *)(**(code **)(lVar18 + 8))(plVar38,auVar52._8_8_,lVar18);
        return puVar16;
      }
      lVar18 = *plVar38;
      lVar30 = *(long *)(puVar29[7] + 8);
      uVar40 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar40 != 0) {
        piVar33 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar33 + -2) == *(long *)(lVar30 + 0x20)) {
            lVar18 = lVar18 + (long)(int)(*piVar33 + (uint)*(ushort *)(lVar30 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03cc73e8;
          }
          uVar40 = uVar40 - 1;
          piVar33 = piVar33 + 4;
        } while (uVar40 != 0);
      }
      lVar18 = func_0x03256b10(plVar38);
LAB_03cc73e8:
      lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar30);
                    /* WARNING: Could not recover jumptable at 0x03cc740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar16 = (ulong *)(**(code **)(lVar18 + 8))(plVar38,auVar51._8_8_,lVar18);
      return puVar16;
    }
    lVar18 = *(long *)(plVar25[7] + 8);
    *(undefined8 *)((long)ppcVar43 + -0xa0) = *(undefined8 *)((long)ppcVar43 + -0xa0);
    *(undefined8 *)((long)ppcVar43 + -0x98) = *(undefined8 *)((long)ppcVar43 + -0x98);
    *(undefined8 *)((long)ppcVar43 + -0x90) = *(undefined8 *)((long)ppcVar43 + -0x90);
    *(undefined8 *)((long)ppcVar43 + -0x88) = *(undefined8 *)((long)ppcVar43 + -0x88);
    lVar30 = *(long *)(lVar18 + 0x38);
    if (lVar30 == 0) {
      func_0x03256878(lVar18);
      lVar30 = *(long *)(lVar18 + 0x38);
    }
    lVar18 = *(long *)(lVar30 + 8);
    puVar6 = (undefined8 *)((long)ppcVar43 + -0xb0);
    *(undefined8 *)((long)ppcVar43 + -0xb0) = *(undefined8 *)((long)ppcVar43 + -0xa0);
    *(ulong **)((long)ppcVar43 + -0xa0) = puVar16;
    *(undefined8 *)((long)ppcVar43 + -0x98) = *(undefined8 *)((long)ppcVar43 + -0x98);
    *(undefined8 *)((long)ppcVar43 + -0x90) = *(undefined8 *)((long)ppcVar43 + -0x90);
    *(undefined8 *)((long)ppcVar43 + -0x88) = *(undefined8 *)((long)ppcVar43 + -0x88);
    puVar16 = puVar13;
    if ((*(long *)(lVar18 + 0x38) == 0) &&
       (puVar16 = (ulong *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar18 + 0x38) == 0)) {
      puVar16 = (ulong *)func_0x03256878(lVar18);
    }
    if ((char)puVar13[10] != '\0') {
      return puVar16;
    }
    uVar39 = **(undefined8 **)(lVar18 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar39 = func_0x057a51c4(uVar39,0);
    lVar30 = func_0x072869d0(puVar13,uVar39,0,0,0);
    if (lVar30 == 0) {
      return (ulong *)0x0;
    }
    lVar18 = *(long *)((long)ppcVar43 + -0x90);
    plVar38 = *(long **)((long)ppcVar43 + -0x88);
    puVar16 = *(ulong **)((long)ppcVar43 + -0xa0);
    lVar31 = *(long *)((long)ppcVar43 + -0x98);
    ppcVar43 = (code **)((long)ppcVar43 + -0x80);
    uVar39 = *puVar6;
  }
  else {
    lVar18 = *(long *)((long)ppcVar43 + -0x10);
    plVar38 = *(long **)((long)ppcVar43 + -8);
    plVar25 = *(long **)(plVar25[7] + 8);
    uVar39 = *(undefined8 *)((long)ppcVar43 + -0x20);
    uVar15 = *(undefined8 *)((long)ppcVar43 + -0x18);
SUB_03ea5304:
    uVar19 = auVar49._8_8_;
    *(undefined8 *)((long)ppcVar43 + -0x20) = uVar39;
    *(undefined8 *)((long)ppcVar43 + -0x18) = uVar15;
    *(long *)((long)ppcVar43 + -0x10) = lVar18;
    *(long **)((long)ppcVar43 + -8) = plVar38;
    lVar18 = plVar25[7];
    if (lVar18 == 0) {
      func_0x03256878(plVar25);
      lVar18 = plVar25[7];
    }
    lVar18 = *(long *)(lVar18 + 8);
    puVar5 = (undefined1 *)((long)ppcVar43 + -0x40);
    *(undefined8 *)((long)ppcVar43 + -0x40) = *(undefined8 *)((long)ppcVar43 + -0x20);
    *(undefined **)((long)ppcVar43 + -0x30) = unaff_x24;
    *(long **)((long)ppcVar43 + -0x28) = plVar21;
    *(ulong **)((long)ppcVar43 + -0x20) = puVar16;
    *(undefined8 *)((long)ppcVar43 + -0x18) = *(undefined8 *)((long)ppcVar43 + -0x18);
    *(undefined8 *)((long)ppcVar43 + -0x10) = *(undefined8 *)((long)ppcVar43 + -0x10);
    *(undefined8 *)((long)ppcVar43 + -8) = *(undefined8 *)((long)ppcVar43 + -8);
    plVar38 = *(long **)(lVar18 + 0x38);
    uVar15 = 0;
    uVar40 = uVar19;
    lVar30 = lVar18;
    if (plVar38 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar38 = *(long **)(lVar18 + 0x38);
      if (plVar38 == (long *)0x0) {
        func_0x03256878(lVar18);
        plVar38 = *(long **)(lVar18 + 0x38);
      }
    }
    if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar31 = func_0x03280ca0();
    func_0x04053df4(lVar31,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 8));
    if (lVar31 != 0) {
      puVar16 = (ulong *)(lVar31 + 0x10);
      *puVar16 = uVar19;
      goto SUB_032809c4;
    }
    uVar39 = 0x3ea5530;
    auVar50 = func_0x03280cac();
    unaff_x24 = (undefined *)0x0;
LAB_03ea5530:
    *(undefined8 *)(puVar5 + -0x40) = uVar39;
    *(undefined **)(puVar5 + -0x30) = unaff_x24;
    *(long **)(puVar5 + -0x28) = plVar21;
    *(long *)(puVar5 + -0x20) = auVar49._8_8_;
    *(long *)(puVar5 + -0x18) = lVar18;
    *(long *)(puVar5 + -0x10) = auVar49._0_8_;
    *(undefined8 *)(puVar5 + -8) = uVar15;
    plVar38 = *(long **)(lVar30 + 0x38);
    uVar19 = uVar40;
    lVar18 = lVar30;
    if (plVar38 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar38 = *(long **)(lVar30 + 0x38);
      if (plVar38 == (long *)0x0) {
        func_0x03256878(lVar30);
        plVar38 = *(long **)(lVar30 + 0x38);
      }
    }
    if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar31 = func_0x03280ca0();
    func_0x0404e308(lVar31,*(undefined8 *)(*(long *)(lVar30 + 0x38) + 8));
    if (lVar31 != 0) {
      puVar16 = (ulong *)(lVar31 + 0x10);
      *puVar16 = uVar40;
      goto SUB_032809c4;
    }
    auVar51 = func_0x03280cac();
    *(undefined8 *)(puVar5 + -0x80) = 0x3ea5644;
    *(undefined8 *)(puVar5 + -0x70) = 0;
    *(long **)(puVar5 + -0x68) = plVar21;
    *(ulong *)(puVar5 + -0x60) = uVar40;
    *(long *)(puVar5 + -0x58) = lVar30;
    *(undefined1 (*) [16])(puVar5 + -0x50) = auVar50;
    plVar38 = *(long **)(lVar18 + 0x38);
    uVar40 = uVar19;
    lVar30 = lVar18;
    if (plVar38 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar38 = *(long **)(lVar18 + 0x38);
      if (plVar38 == (long *)0x0) {
        func_0x03256878(lVar18);
        plVar38 = *(long **)(lVar18 + 0x38);
      }
    }
    if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar31 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 8))();
    if (lVar31 != 0) {
      puVar16 = (ulong *)(lVar31 + 0x10);
      *puVar16 = uVar19;
      goto SUB_032809c4;
    }
    auVar52 = func_0x03280cac();
    *(undefined8 *)(puVar5 + -0xc0) = 0x3ea575c;
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    *(long **)(puVar5 + -0xa8) = plVar21;
    *(ulong *)(puVar5 + -0xa0) = uVar19;
    *(long *)(puVar5 + -0x98) = lVar18;
    *(undefined1 (*) [16])(puVar5 + -0x90) = auVar51;
    plVar38 = *(long **)(lVar30 + 0x38);
    if (plVar38 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar38 = *(long **)(lVar30 + 0x38);
      if (plVar38 == (long *)0x0) {
        func_0x03256878(lVar30);
        plVar38 = *(long **)(lVar30 + 0x38);
      }
    }
    if ((*(byte *)(*plVar38 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x38) + 8))();
    if (lVar18 != 0) {
      puVar16 = (ulong *)(lVar18 + 0x10);
      *puVar16 = uVar40;
      goto SUB_032809c4;
    }
    auVar51 = func_0x03280cac();
    lVar18 = auVar51._8_8_;
    puVar16 = auVar51._0_8_;
    *(undefined8 *)(puVar5 + -0xe0) = 0x3ea5874;
    *(undefined1 (*) [16])(puVar5 + -0xd0) = auVar52;
    plVar38 = *(long **)(lVar18 + 0x38);
    if (plVar38 == (long *)0x0) {
      func_0x03256878(lVar18);
      plVar38 = *(long **)(lVar18 + 0x38);
    }
    lVar18 = *plVar38;
    *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0xe0);
    *(long **)(puVar5 + -0xe8) = plVar21;
    *(ulong *)(puVar5 + -0xe0) = uVar40;
    *(long *)(puVar5 + -0xd8) = lVar30;
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xd0);
    *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -200);
    puVar13 = puVar16;
    if ((*(long *)(lVar18 + 0x38) == 0) &&
       (puVar13 = (ulong *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar18 + 0x38) == 0)) {
      puVar13 = (ulong *)func_0x03256878(lVar18);
    }
    puVar42 = PTR_DAT_0774e558;
    if ((char)puVar16[10] != '\0') {
      return puVar13;
    }
    uVar39 = **(undefined8 **)(lVar18 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar39 = func_0x057a51c4(uVar39,0);
    lVar30 = func_0x072869d0(puVar16,uVar39,0,0,0);
    if (lVar30 == 0) {
      return (ulong *)0x0;
    }
    uVar39 = **(undefined8 **)(lVar18 + 0x38);
    if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar39 = func_0x057a51c4(uVar39,0);
    lVar31 = func_0x057c1ad4(uVar39,0);
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    if (lVar31 == 0) {
LAB_03ea5b18:
      uVar26 = 0;
    }
    else {
      uVar26 = func_0x03280b90(lVar31,lVar18);
      if (uVar26 == 0) {
        func_0x03281048(lVar31,lVar18);
        goto LAB_03ea5b18;
      }
    }
    lVar18 = *(long *)(puVar5 + -0xd0);
    plVar38 = *(long **)(puVar5 + -200);
    puVar16 = *(ulong **)(puVar5 + -0xe0);
    lVar31 = *(long *)(puVar5 + -0xd8);
    ppcVar43 = (code **)(puVar5 + -0xc0);
    uVar39 = *(undefined8 *)(puVar5 + -0xf0);
    plVar21 = *(long **)(puVar5 + -0xe8);
    unaff_x24 = (undefined *)0x0;
  }
SUB_072852e4:
  lVar27 = 0;
  puVar10 = (undefined1 *)((long)ppcVar43 + -0x30);
  *(undefined8 *)((long)ppcVar43 + -0x30) = uVar39;
  *(ulong **)((long)ppcVar43 + -0x20) = puVar16;
  *(long *)((long)ppcVar43 + -0x18) = lVar31;
  *(long *)((long)ppcVar43 + -0x10) = lVar18;
  *(long **)((long)ppcVar43 + -8) = plVar38;
  if ((bRam0000000007e3419a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dee8);
    func_0x03280a18(PTR_DAT_0785def0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0785def8);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07779590);
    bRam0000000007e3419a = 1;
  }
  puVar42 = PTR_DAT_07779590;
  if (uVar26 != 0) {
    uVar39 = func_0x057dadc4(uVar26,0);
    puVar37 = *(undefined **)(lVar30 + 0x20);
    if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar42);
    }
    uVar12 = func_0x0727e0ec(uVar39,puVar37);
    puVar16 = (ulong *)(ulong)(uVar12 & 1);
    uVar39 = 0x728539c;
    goto SUB_0727dc78;
  }
  func_0x03280cac();
  func_0x03280cac();
  lVar18 = 0;
  while( true ) {
    func_0x03280ca4(lVar18);
    auVar54 = func_0x03280cac();
    uVar39 = auVar54._0_8_;
    if (auVar54._8_4_ != 1) break;
    plVar38 = (long *)func_0x072ce910(uVar39);
    lVar18 = *plVar38;
    func_0x072ce920();
    uVar40 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar40 != 0) {
      piVar33 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar17 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar33 * 0x10 + 0x138);
          goto LAB_072854e8;
        }
        uVar40 = uVar40 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar40 != 0);
    }
    lVar27 = 0;
    puVar17 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
    puVar13 = (ulong *)(*(code *)*puVar17)(0x7e34000,puVar17[1]);
    if (lVar18 == 0) {
      return puVar13;
    }
  }
  uVar40 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
  if (uVar40 != 0) {
    piVar33 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
    do {
      if (*(long *)(piVar33 + -2) == *(long *)PTR_DAT_0774e8c8) {
        puVar17 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar33 * 0x10 + 0x138);
        goto LAB_072855b0;
      }
      uVar40 = uVar40 - 1;
      piVar33 = piVar33 + 4;
    } while (uVar40 != 0);
  }
  lVar27 = 0;
  puVar17 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
  (*(code *)*puVar17)(0x7e34000,puVar17[1]);
  func_0x03365958(uVar39);
  func_0x03280ca4(0);
  auVar51 = func_0x02f09514();
  puVar42 = PTR_DAT_0785dec8;
  lVar30 = auVar51._8_8_;
  lVar18 = auVar51._0_8_;
  *(undefined8 *)((long)ppcVar43 + -0x70) = 0x72855d4;
  *(ulong *)((long)ppcVar43 + -0x68) = unaff_x25;
  *(undefined **)((long)ppcVar43 + -0x60) = unaff_x24;
  *(long **)((long)ppcVar43 + -0x58) = plVar21;
  *(ulong **)((long)ppcVar43 + -0x50) = puVar16;
  *(undefined8 *)((long)ppcVar43 + -0x48) = uVar39;
  *(undefined8 *)((long)ppcVar43 + -0x40) = 0;
  *(undefined8 *)((long)ppcVar43 + -0x38) = 0x7e34000;
  plVar38 = (long *)0x7e34000;
  if ((bRam0000000007e3419b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dec8);
    func_0x03280a18(PTR_DAT_0785df00);
    func_0x03280a18(PTR_DAT_0785ded0);
    func_0x03280a18(PTR_DAT_0785ded8);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785df08);
    bRam0000000007e3419b = 1;
  }
  puVar16 = (ulong *)func_0x03e0c264(lVar30,*(undefined8 *)puVar42);
  puVar22 = PTR_DAT_0785df00;
  puVar37 = PTR_DAT_0785ded8;
  if (((ulong)puVar16 & 1) == 0) {
LAB_07285770:
    if (lVar30 != 0) {
      if (0 < *(int *)(lVar30 + 0x18)) {
        plVar38 = (long *)0x0;
        do {
          puVar23 = (undefined *)func_0x0414419c(lVar30,plVar38,*(undefined8 *)puVar37);
          unaff_x24 = puVar37;
          if (*(long *)(lVar18 + 0x10) == 0) goto LAB_07285808;
          puVar16 = (ulong *)func_0x041447fc(*(long *)(lVar18 + 0x10),puVar23,*(undefined8 *)puVar22
                                            );
          puVar42 = puVar23;
          if (((ulong)puVar16 & 1) != 0) {
            if ((puVar23 == (undefined *)0x0) || (lVar31 = *(long *)(puVar23 + 0x18), lVar31 == 0))
            goto LAB_07285808;
            puVar16 = (ulong *)(**(code **)(lVar31 + 0x18))
                                         (*(undefined8 *)(lVar31 + 0x40),lVar27,
                                          *(undefined8 *)(lVar31 + 0x28));
          }
          uVar12 = (int)plVar38 + 1;
          plVar38 = (long *)(ulong)uVar12;
        } while ((int)uVar12 < *(int *)(lVar30 + 0x18));
      }
      return puVar16;
    }
LAB_07285808:
    func_0x03280cac();
    plVar21 = plVar38;
    puVar22 = puVar42;
LAB_0728580c:
    func_0x03280cb4();
  }
  else {
    if (*(int *)(lVar18 + 0x30) != 2) {
      if (*(int *)(lVar18 + 0x30) != 1) goto LAB_07285770;
      uVar39 = func_0x03280a2c(PTR_DAT_0774e5a0);
      lVar30 = func_0x03280afc(uVar39,1);
      func_0x02f0b18c(lVar27);
      uVar39 = func_0x057dadc4(lVar27,0);
      func_0x02f0b18c(lVar30);
      func_0x02f176b4(lVar30,uVar39);
      func_0x02f0965c(lVar30,0,uVar39);
      uVar39 = func_0x03280a2c(PTR_DAT_0785df08);
      lVar27 = func_0x0727df38(uVar39,lVar30);
      uVar39 = func_0x03280a2c(PTR_DAT_0785df10);
      func_0x03280b7c(lVar27,uVar39);
    }
    plVar21 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if ((lVar27 == 0) ||
       (puVar22 = (undefined *)func_0x057dadc4(lVar27,0), plVar38 = plVar21, plVar21 == (long *)0x0)
       ) goto LAB_07285808;
    if ((puVar22 == (undefined *)0x0) ||
       (lVar31 = func_0x03280b90(puVar22,*(undefined8 *)(*plVar21 + 0x40)), lVar31 != 0)) {
      if ((int)plVar21[3] != 0) {
        puVar16 = (ulong *)(plVar21 + 4);
        *puVar16 = (ulong)puVar22;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar13 = (ulong *)(((ulong)puVar16 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
            if (bVar4) {
              *puVar13 = *puVar13 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return puVar16;
      }
      goto LAB_0728580c;
    }
  }
  uVar39 = func_0x03280cd0();
  auVar51 = func_0x03280b7c(uVar39,0);
  *(undefined8 *)((long)ppcVar43 + -0x80) = 0x728581c;
  lVar31 = *(long *)(auVar51._0_8_ + 0x18);
  if (lVar31 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar16 = (ulong *)(**(code **)(lVar31 + 0x18))
                                 (*(undefined8 *)(lVar31 + 0x40),auVar51._8_8_,
                                  *(undefined8 *)(lVar31 + 0x28));
    return puVar16;
  }
  uVar26 = func_0x03280cac();
  puVar37 = PTR_DAT_0785df18;
  puVar10 = (undefined1 *)((long)ppcVar43 + -0xc0);
  *(undefined8 *)((long)ppcVar43 + -0xc0) = 0x7285840;
  *(undefined **)((long)ppcVar43 + -0xb0) = unaff_x24;
  *(undefined **)((long)ppcVar43 + -0xa8) = puVar22;
  *(long **)((long)ppcVar43 + -0xa0) = plVar21;
  *(long *)((long)ppcVar43 + -0x98) = lVar18;
  *(long *)((long)ppcVar43 + -0x90) = lVar30;
  *(long *)((long)ppcVar43 + -0x88) = lVar27;
  lVar30 = 0x7e34000;
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
  puVar16 = (ulong *)(ulong)*(byte *)(uVar26 + 0x34);
  uVar39 = 0x72858f0;
SUB_0727dc78:
  if (((ulong)puVar16 & 1) != 0) {
    return puVar16;
  }
  *(undefined8 *)(puVar10 + -0x10) = uVar39;
  *(undefined **)(puVar10 + -8) = puVar37;
  uVar39 = func_0x03280a2c(PTR_DAT_0785dbe8);
  puVar42 = PTR_DAT_0777c990;
  *(undefined8 *)(puVar10 + -0x30) = 0x727dc94;
  *(long *)(puVar10 + -0x28) = lVar30;
  *(ulong *)(puVar10 + -0x20) = uVar26;
  *(undefined **)(puVar10 + -0x18) = puVar37;
  if ((bRam0000000007e34146 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c990);
    bRam0000000007e34146 = 1;
  }
  puVar16 = (ulong *)func_0x03280ca0(*(undefined8 *)puVar42);
  func_0x072c77f8(puVar16,uVar39,0);
  return puVar16;
}

