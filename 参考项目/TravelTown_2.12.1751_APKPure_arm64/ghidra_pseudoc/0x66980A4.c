/* Ghidra 12.1.2 native pseudocode; RVA 0x66980A4; Merger.Game.Views.BoardView.SlideItemInWithFlyingRewards; status ok */


/* WARNING: Possible PIC construction at 0x06798400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679851c: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x067987a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067987cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067987f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0679841c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067987d0) */
/* WARNING: Removing unreachable block (ram,0x067987a8) */
/* WARNING: Removing unreachable block (ram,0x067987ac) */
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
/* WARNING: Removing unreachable block (ram,0x072853dc) */
/* WARNING: Removing unreachable block (ram,0x06798520) */
/* WARNING: Removing unreachable block (ram,0x06798404) */
/* WARNING: Removing unreachable block (ram,0x06798420) */
/* WARNING: Removing unreachable block (ram,0x06798428) */
/* WARNING: Removing unreachable block (ram,0x06798490) */
/* WARNING: Removing unreachable block (ram,0x06798508) */
/* WARNING: Removing unreachable block (ram,0x067987f4) */
/* WARNING: Removing unreachable block (ram,0x06798940) */
/* WARNING: Removing unreachable block (ram,0x067987fc) */
/* WARNING: Removing unreachable block (ram,0x0679882c) */
/* WARNING: Removing unreachable block (ram,0x06798834) */
/* WARNING: Removing unreachable block (ram,0x0679885c) */
/* WARNING: Removing unreachable block (ram,0x06798840) */
/* WARNING: Removing unreachable block (ram,0x0679884c) */
/* WARNING: Removing unreachable block (ram,0x06798868) */
/* WARNING: Removing unreachable block (ram,0x067988d8) */
/* WARNING: Removing unreachable block (ram,0x067988e0) */
/* WARNING: Removing unreachable block (ram,0x06798908) */
/* WARNING: Removing unreachable block (ram,0x067988ec) */
/* WARNING: Removing unreachable block (ram,0x067988f8) */
/* WARNING: Removing unreachable block (ram,0x06798918) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

code * Merger_Game_Views_BoardView__SlideItemInWithFlyingRewards
                 (code *param_1,code *****param_2,long *param_3,long param_4,code *param_5)

{
  code ******ppppppcVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong *puVar18;
  code *pcVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  code ******ppppppcVar29;
  code *****pppppcVar31;
  code **ppcVar32;
  code *pcVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  int *piVar38;
  undefined *puVar39;
  ulong uVar40;
  long *plVar41;
  code **ppcVar42;
  undefined *puVar43;
  long *unaff_x23;
  code *unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  code *unaff_x29;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [12];
  long alStack_330 [55];
  long lStack_178;
  long alStack_170 [2];
  undefined1 auStack_160 [8];
  long alStack_158 [6];
  long *aplStack_128 [2];
  ulong uStack_118;
  code *pcStack_100;
  code ******ppppppcStack_f8;
  code *pcStack_f0;
  ulong uStack_e8;
  code *pcStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  long lStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plVar30;
  
  uVar40 = (ulong)param_5 & 0xffffffff;
  if ((bRam0000000007e282da & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777f5b8);
    func_0x03280a18(PTR_DAT_077cc630);
    func_0x03280a18(PTR_DAT_077cc638);
    func_0x03280a18(PTR_DAT_077cc640);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_07809600);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_077cdb78);
    func_0x03280a18(PTR_DAT_0777b380);
    func_0x03280a18(PTR_DAT_0777f5c0);
    func_0x03280a18(PTR_DAT_0777f5c8);
    func_0x03280a18(PTR_DAT_0777f5d0);
    func_0x03280a18(PTR_DAT_07780858);
    func_0x03280a18(PTR_DAT_0777b388);
    func_0x03280a18(PTR_DAT_0777b390);
    func_0x03280a18(PTR_DAT_07809568);
    func_0x03280a18(PTR_DAT_078094e8);
    func_0x03280a18(PTR_DAT_07809168);
    bRam0000000007e282da = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  pcVar25 = (code *)0x7e28000;
  lStack_98 = param_4;
  uStack_90 = uVar40;
  plStack_88 = param_3;
  if (param_3[0x26] != 0) {
    param_5 = *(code **)PTR_DAT_07809568;
    pcVar19 = (code *)func_0x047544b8(param_3[0x26],param_4);
    if (pcVar19 != (code *)0x0) {
      lVar34 = *(long *)pcVar19;
      uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar40 != 0) {
        piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_077c0858) {
            puVar20 = (undefined8 *)(lVar34 + (long)(*piVar38 + 3) * 0x10 + 0x138);
            goto LAB_06798244;
          }
          uVar40 = uVar40 - 1;
          piVar38 = piVar38 + 4;
        } while (uVar40 != 0);
      }
      param_5 = (code *)0x3;
      puVar20 = (undefined8 *)func_0x03256b10(pcVar19);
LAB_06798244:
      plVar21 = (long *)(*(code *)*puVar20)(pcVar19,puVar20[1]);
      pcVar25 = pcVar19;
      if (plVar21 != (long *)0x0) {
        lVar34 = *plVar21;
        uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar40 != 0) {
          piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_077c1d88) {
              puVar20 = (undefined8 *)(lVar34 + (long)(*piVar38 + 0x6d) * 0x10 + 0x138);
              goto LAB_067982b0;
            }
            uVar40 = uVar40 - 1;
            piVar38 = piVar38 + 4;
          } while (uVar40 != 0);
        }
        param_5 = (code *)0x6d;
        puVar20 = (undefined8 *)func_0x03256b10(plVar21);
LAB_067982b0:
        plVar22 = (long *)(*(code *)*puVar20)(plVar21,puVar20[1]);
        puVar7 = PTR_DAT_077cdb78;
        puVar28 = PTR_DAT_0777f5c8;
        puVar26 = PTR_DAT_0777f5c0;
        puVar39 = PTR_DAT_0777b390;
        puVar43 = PTR_DAT_0777b388;
        unaff_x23 = plVar21;
        if (plVar22 != (long *)0x0) {
          lVar34 = *plVar22;
          uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar40 != 0) {
            piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_07809600) {
                puVar20 = (undefined8 *)(lVar34 + (long)*piVar38 * 0x10 + 0x138);
                goto LAB_06798340;
              }
              uVar40 = uVar40 - 1;
              piVar38 = piVar38 + 4;
            } while (uVar40 != 0);
          }
          puVar20 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_07809600,0);
LAB_06798340:
          uVar23 = (*(code *)*puVar20)(plVar22,puVar20[1]);
          uVar24 = func_0x0611fc10(1,0);
          unaff_x23 = (long *)func_0x03280ca0(*(undefined8 *)puVar7);
          func_0x06b29e04(unaff_x23,uVar23,uVar24,0);
          unaff_x24 = (code *)func_0x03280ca0(*(undefined8 *)puVar28);
          func_0x04143c38(unaff_x24,*(undefined8 *)puVar26);
          unaff_x25 = func_0x03280ca0(*(undefined8 *)puVar39);
          param_5 = *(code **)puVar43;
          func_0x04728d3c(param_1,param_2,0,unaff_x25,unaff_x23);
          unaff_x26 = (code *)puVar43;
          unaff_x29 = (code *)puVar28;
          if (unaff_x24 != (code *)0x0) {
            lVar34 = *(long *)(unaff_x24 + 0x10);
            lVar37 = *(long *)PTR_DAT_0777b380;
            *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
            if (lVar34 != 0) {
              uVar11 = *(uint *)(unaff_x24 + 0x18);
              if (uVar11 < *(uint *)(lVar34 + 0x18)) {
                *(uint *)(unaff_x24 + 0x18) = uVar11 + 1;
                pcVar25 = (code *)(lVar34 + (long)(int)uVar11 * 8 + 0x20);
                *(ulong *)pcVar25 = unaff_x25;
                goto SUB_032809c4;
              }
              pcStack_b0 = (code *)0x6798420;
              uVar3 = *(uint *)(unaff_x24 + 0x18);
              uVar11 = uVar3 + 1;
              pppppcVar31 = *(code ******)
                             (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar37 + 0x20) +
                                                                     0xc0) + 0x70) + 0x20) + 0xc0) +
                             0x78);
              pcStack_a0 = pcVar19;
              func_0x04144aa0(unaff_x24,(ulong)uVar11);
              lVar34 = *(long *)(unaff_x24 + 0x10);
              *(uint *)(unaff_x24 + 0x18) = uVar11;
              if (lVar34 == 0) {
                func_0x03280cac();
              }
              else if (uVar3 < *(uint *)(lVar34 + 0x18)) {
                pcVar25 = (code *)(lVar34 + (long)(int)uVar3 * 8 + 0x20);
                *(ulong *)pcVar25 = unaff_x25;
                goto SUB_032809c4;
              }
              auVar48 = func_0x03280cb4();
              pcVar25 = auVar48._8_8_;
              lVar34 = auVar48._0_8_;
              pcStack_e0 = (code *)0x41444d8;
              ppcVar32 = pppppcVar31[4][0x18][0xb];
              plStack_d0 = (long *)(long)(int)uVar3;
              pcStack_c8 = (code *)(ulong)uVar11;
              pcStack_c0 = unaff_x24;
              pcStack_b8 = (code *)unaff_x25;
              func_0x03ec2768(pcVar25,0x14);
              ppcVar42 = pppppcVar31[4][0x18][9];
              if ((*(byte *)((long)ppcVar42 + 0x135) & 1) == 0) {
                ppcVar42 = (code **)func_0x0325681c(ppcVar42);
              }
              if (pcVar25 == (code *)0x0) {
LAB_0414454c:
                lVar37 = 0;
              }
              else {
                lVar37 = func_0x03280b90(pcVar25,ppcVar42);
                if (lVar37 == 0) {
                  func_0x03281048(pcVar25,ppcVar42);
                  goto LAB_0414454c;
                }
              }
              lVar35 = *(long *)(lVar34 + 0x10);
              ppcVar42 = pppppcVar31[4][0x18][0x10];
              *(int *)(lVar34 + 0x1c) = *(int *)(lVar34 + 0x1c) + 1;
              if (lVar35 == 0) {
                auVar49 = func_0x03280cac();
                pcVar19 = auVar49._0_8_;
                if (auVar49._8_4_ == 1) {
                  puVar20 = (undefined8 *)func_0x072ce910(pcVar19);
                  uVar23 = func_0x03280a2c(PTR_DAT_077542c0);
                  uVar40 = func_0x032810d8(uVar23,*(undefined8 *)*puVar20);
                  if ((uVar40 & 1) != 0) {
                    func_0x072ce920();
                    ppcVar42 = pppppcVar31[4][0x18][0xd];
                    lVar37 = func_0x03280a2c(PTR_DAT_0774e558);
                    if (*(int *)(lVar37 + 0xe0) == 0) {
                      func_0x03280b8c();
                    }
                    uVar23 = func_0x057a51c4(ppcVar42,0);
                    func_0x057b7b18(pcVar25,uVar23,0);
                    goto LAB_041445ac;
                  }
                  puVar16 = (undefined8 *)func_0x072ce930(8);
                  *puVar16 = *puVar20;
                  ppcVar32 = (code **)0x0;
                  pcVar19 = (code *)func_0x072ce940(puVar16,&
                                                  PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28
                                                  );
                  func_0x072ce920();
                }
                func_0x03365958(pcVar19);
                auVar47 = func_0x02f09514();
                plVar30 = auVar47._8_8_;
                plVar22 = auVar47._0_8_;
                uVar11 = *(uint *)(plVar22 + 3);
                lVar37 = *(long *)(*(long *)(ppcVar32[4] + 0xc0) + 0x90);
                uVar40 = (ulong)uVar11;
                aplStack_128[1] = (long *)0x4144678;
                plVar41 = (long *)0x7e18000;
                plVar21 = plVar30;
                uStack_118 = unaff_x25;
                pcStack_100 = pcVar19;
                ppppppcStack_f8 = (code ******)pppppcVar31;
                if ((bRam0000000007e18233 & 1) == 0) {
                  pcStack_f0 = pcVar25;
                  uStack_e8 = lVar34;
                  func_0x03280a18(PTR_DAT_0774e8c8);
                  func_0x03280a18(PTR_DAT_0774e8e0);
                  auVar48._8_8_ = pcStack_f0;
                  auVar48._0_8_ = uStack_e8;
                  bRam0000000007e18233 = 1;
                }
                pcStack_f0 = auVar48._8_8_;
                uStack_e8 = auVar48._0_8_;
                if (plVar30 == (long *)0x0) {
                  func_0x057a867c(6,0);
                  auVar48._8_8_ = pcStack_f0;
                  auVar48._0_8_ = uStack_e8;
                }
                pcStack_f0 = auVar48._8_8_;
                uStack_e8 = auVar48._0_8_;
                if (*(uint *)(plVar22 + 3) < uVar11) {
                  func_0x057b8434(0);
                  auVar48._8_8_ = pcStack_f0;
                  auVar48._0_8_ = uStack_e8;
                }
                pcStack_f0 = auVar48._8_8_;
                uStack_e8 = auVar48._0_8_;
                lVar34 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x28);
                if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                  lVar34 = func_0x0325681c(lVar34);
                  auVar48._8_8_ = pcStack_f0;
                  auVar48._0_8_ = uStack_e8;
                }
                pcStack_f0 = auVar48._8_8_;
                uStack_e8 = auVar48._0_8_;
                plVar17 = (long *)func_0x03280b90(plVar30,lVar34);
                if (plVar17 == (long *)0x0) {
                  if ((int)uVar11 < (int)plVar22[3]) {
                    if (plVar30 == (long *)0x0) {
                      func_0x03280cac();
                    }
                    else {
                      lVar34 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x20);
                      if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                        lVar34 = func_0x0325681c(lVar34);
                      }
                      lVar35 = *plVar30;
                      uVar36 = (ulong)*(ushort *)(lVar35 + 0x12e);
                      if (uVar36 != 0) {
                        piVar38 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar38 + -2) == lVar34) {
                            puVar20 = (undefined8 *)(lVar35 + (long)*piVar38 * 0x10 + 0x138);
                            goto LAB_04145868;
                          }
                          uVar36 = uVar36 - 1;
                          piVar38 = piVar38 + 4;
                        } while (uVar36 != 0);
                      }
                      plVar21 = (long *)0x0;
                      puVar20 = (undefined8 *)func_0x03256b10(plVar30);
LAB_04145868:
                      plVar41 = (long *)(*(code *)*puVar20)(plVar30,puVar20[1]);
                      puVar43 = PTR_DAT_0774e8e0;
                      if (plVar41 != (long *)0x0) {
                        do {
                          lVar34 = *plVar41;
                          uVar36 = (ulong)*(ushort *)(lVar34 + 0x12e);
                          if (uVar36 != 0) {
                            piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar38 + -2) == *(long *)puVar43) {
                                puVar20 = (undefined8 *)(lVar34 + (long)*piVar38 * 0x10 + 0x138);
                                goto LAB_041458d0;
                              }
                              uVar36 = uVar36 - 1;
                              piVar38 = piVar38 + 4;
                            } while (uVar36 != 0);
                          }
                          plVar21 = (long *)0x0;
                          puVar20 = (undefined8 *)func_0x03256b10(plVar41);
LAB_041458d0:
                          pcVar25 = (code *)(*(code *)*puVar20)(plVar41,puVar20[1]);
                          if (((ulong)pcVar25 & 1) == 0) {
                            uVar40 = 0;
                            iVar10 = 5;
                            if (plVar41 == (long *)0x0) goto LAB_041459e8;
                            goto LAB_04145988;
                          }
                          lVar34 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x148);
                          if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                            lVar34 = func_0x0325681c(lVar34);
                          }
                          lVar35 = *plVar41;
                          uVar36 = (ulong)*(ushort *)(lVar35 + 0x12e);
                          if (uVar36 != 0) {
                            piVar38 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar38 + -2) == lVar34) {
                                puVar20 = (undefined8 *)(lVar35 + (long)*piVar38 * 0x10 + 0x138);
                                goto LAB_04145948;
                              }
                              uVar36 = uVar36 - 1;
                              piVar38 = piVar38 + 4;
                            } while (uVar36 != 0);
                          }
                          puVar20 = (undefined8 *)func_0x03256b10(plVar41,lVar34,0);
LAB_04145948:
                          plVar21 = (long *)(*(code *)*puVar20)(plVar41,puVar20[1]);
                          func_0x04145380(plVar22,uVar40,plVar21,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x160));
                          uVar40 = (ulong)((int)uVar40 + 1);
                        } while( true );
                      }
                    }
                    func_0x03280cac();
                    do {
                      auVar49 = func_0x03280ca4(uVar40);
                      if (auVar49._8_4_ != 1) {
                        if (plVar41 == (long *)0x0) goto LAB_04145ae0;
                        lVar34 = *plVar41;
                        uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
                        if (uVar40 == 0) goto LAB_04145ab8;
                        piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                        goto LAB_04145aa0;
                      }
                      puVar18 = (ulong *)func_0x072ce910(auVar49._0_8_);
                      uVar40 = *puVar18;
                      pcVar25 = (code *)func_0x072ce920();
                      iVar10 = 0;
                      if (plVar41 != (long *)0x0) {
LAB_04145988:
                        lVar34 = *plVar41;
                        uVar36 = (ulong)*(ushort *)(lVar34 + 0x12e);
                        if (uVar36 != 0) {
                          piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_0774e8c8) {
                              puVar20 = (undefined8 *)(lVar34 + (long)*piVar38 * 0x10 + 0x138);
                              goto LAB_041459dc;
                            }
                            uVar36 = uVar36 - 1;
                            piVar38 = piVar38 + 4;
                          } while (uVar36 != 0);
                        }
                        plVar21 = (long *)0x0;
                        puVar20 = (undefined8 *)func_0x03256b10(plVar41);
LAB_041459dc:
                        pcVar25 = (code *)(*(code *)*puVar20)(plVar41,puVar20[1]);
                      }
LAB_041459e8:
                    } while (uVar40 != 0);
                    if (iVar10 == 5) goto LAB_04145a10;
                    if (iVar10 != 0) {
                      return pcVar25;
                    }
                  }
                  pcVar25 = (code *)func_0x041462cc(plVar22,plVar30,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) +
                                                     0x40));
                }
                else {
                  lVar34 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x28);
                  if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                    lVar34 = func_0x0325681c(lVar34);
                  }
                  lVar35 = *plVar17;
                  uVar40 = (ulong)*(ushort *)(lVar35 + 0x12e);
                  if (uVar40 != 0) {
                    piVar38 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar38 + -2) == lVar34) {
                        puVar20 = (undefined8 *)(lVar35 + (long)*piVar38 * 0x10 + 0x138);
                        goto LAB_04145728;
                      }
                      uVar40 = uVar40 - 1;
                      piVar38 = piVar38 + 4;
                    } while (uVar40 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x03256b10(plVar17,lVar34,0);
LAB_04145728:
                  pcVar25 = (code *)(*(code *)*puVar20)(plVar17,puVar20[1]);
                  iVar10 = (int)pcVar25;
                  if (0 < iVar10) {
                    func_0x04144aa0(plVar22,(int)plVar22[3] + iVar10,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x78));
                    iVar6 = (int)plVar22[3] - uVar11;
                    if (iVar6 != 0 && (int)uVar11 <= (int)plVar22[3]) {
                      func_0x057b9f30(plVar22[2],uVar11,plVar22[2],iVar10 + uVar11,iVar6,0);
                    }
                    if (plVar22 == plVar17) {
                      func_0x057b9f30(plVar22[2],0,plVar22[2],uVar11,uVar11,0);
                      pcVar25 = (code *)func_0x057b9f30(plVar22[2],iVar10 + uVar11,plVar22[2],
                                                        uVar11 << 1,(int)plVar22[3] - uVar11,0);
                    }
                    else {
                      lVar35 = plVar22[2];
                      lVar34 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x28);
                      if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                        lVar34 = func_0x0325681c(lVar34);
                      }
                      lVar37 = *plVar17;
                      uVar40 = (ulong)*(ushort *)(lVar37 + 0x12e);
                      if (uVar40 != 0) {
                        piVar38 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar38 + -2) == lVar34) {
                            puVar20 = (undefined8 *)(lVar37 + (long)(*piVar38 + 5) * 0x10 + 0x138);
                            goto LAB_04145838;
                          }
                          uVar40 = uVar40 - 1;
                          piVar38 = piVar38 + 4;
                        } while (uVar40 != 0);
                      }
                      puVar20 = (undefined8 *)func_0x03256b10(plVar17,lVar34,5);
LAB_04145838:
                      pcVar25 = (code *)(*(code *)*puVar20)(plVar17,lVar35,uVar11,puVar20[1]);
                    }
                    *(int *)(plVar22 + 3) = (int)plVar22[3] + iVar10;
                  }
                }
LAB_04145a10:
                *(int *)((long)plVar22 + 0x1c) = *(int *)((long)plVar22 + 0x1c) + 1;
                return pcVar25;
              }
              uVar11 = *(uint *)(lVar34 + 0x18);
              if (*(uint *)(lVar35 + 0x18) <= uVar11) {
                func_0x0414446c(lVar34,lVar37,*(undefined8 *)(*(long *)(ppcVar42[4] + 0xc0) + 0x70))
                ;
LAB_041445ac:
                return (code *)(ulong)(*(int *)(lVar34 + 0x18) - 1);
              }
              *(uint *)(lVar34 + 0x18) = uVar11 + 1;
              pcVar25 = (code *)(lVar35 + (long)(int)uVar11 * 8 + 0x20);
              *(long *)pcVar25 = lVar37;
              goto SUB_032809c4;
            }
          }
        }
      }
    }
  }
  auVar48 = func_0x03280cac();
  plVar21 = auVar48._8_8_;
  lVar34 = auVar48._0_8_;
  pcStack_b0 = Merger_Game_Views_BoardView__BoardItemFlyInAnimationStarted;
  pcStack_a0 = pcVar25;
  if ((bRam0000000007e282db & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809608);
    func_0x03280a18(PTR_DAT_07809610);
    func_0x03280a18(PTR_DAT_07809618);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_07809168);
    bRam0000000007e282db = 1;
  }
  puVar43 = (undefined *)0x7e28000;
  if ((*(long *)(lVar34 + 0x198) == 0) ||
     (func_0x04fe2d7c(*(long *)(lVar34 + 0x198),param_5,plVar21,*(undefined8 *)PTR_DAT_07809618),
     puVar39 = PTR_DAT_077c0858, plVar21 == (long *)0x0)) {
LAB_06798700:
    func_0x03280cac();
    puVar39 = PTR_DAT_07809620;
    pcStack_f0 = Merger_Game_Views_BoardView__SlideBoosterIn;
    pcStack_100 = param_1;
    ppppppcStack_f8 = (code ******)param_2;
    uStack_e8 = unaff_x25;
    pcStack_e0 = unaff_x24;
    plStack_d8 = unaff_x23;
    plStack_d0 = (long *)puVar43;
    pcStack_c8 = param_5;
    pcStack_c0 = (code *)lVar34;
    pcStack_b8 = (code *)plVar21;
    if ((bRam0000000007e282dc & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c0858);
      func_0x03280a18(PTR_DAT_0776bc20);
      func_0x03280a18(PTR_DAT_077804d8);
      func_0x03280a18(PTR_DAT_07809628);
      func_0x03280a18(PTR_DAT_07809620);
      bRam0000000007e282dc = 1;
    }
    pcVar25 = (code *)func_0x03280ca0(*(undefined8 *)puVar39);
    return pcVar25;
  }
  lVar37 = *plVar21;
  uVar40 = (ulong)*(ushort *)(lVar37 + 0x12e);
  if (uVar40 != 0) {
    piVar38 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
    do {
      if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar20 = (undefined8 *)(lVar37 + (long)(*piVar38 + 7) * 0x10 + 0x138);
        goto LAB_0679863c;
      }
      uVar40 = uVar40 - 1;
      piVar38 = piVar38 + 4;
    } while (uVar40 != 0);
  }
  puVar20 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_077c0858,7);
LAB_0679863c:
  puVar43 = PTR_DAT_07809610;
  (*(code *)*puVar20)(plVar21,1,puVar20[1]);
  lVar35 = *plVar21;
  lVar37 = *(long *)puVar39;
  uVar40 = (ulong)*(ushort *)(lVar35 + 0x12e);
  if (uVar40 != 0) {
    piVar38 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
    do {
      if (*(long *)(piVar38 + -2) == lVar37) {
        puVar20 = (undefined8 *)(lVar35 + (long)(*piVar38 + 5) * 0x10 + 0x138);
        goto LAB_067986a4;
      }
      uVar40 = uVar40 - 1;
      piVar38 = piVar38 + 4;
    } while (uVar40 != 0);
  }
  puVar20 = (undefined8 *)func_0x03256b10(plVar21,lVar37,5);
LAB_067986a4:
  uVar23 = (*(code *)*puVar20)(plVar21,1,puVar20[1]);
  Merger_Game_Views_BoardView__HideItem(uVar23,plVar21);
  pcVar19 = *(code **)(lVar34 + 0x28);
  param_5 = (code *)func_0x03280ca0(*(undefined8 *)puVar43);
  func_0x060d434c(param_5,plVar21,0);
  pcVar25 = pcStack_a0;
  lVar34 = 0;
  puVar43 = puVar39;
  if (pcVar19 == (code *)0x0) goto LAB_06798700;
  pcVar33 = *(code **)PTR_DAT_07809608;
  pcStack_a0 = pcStack_b0;
  pcVar12 = pcVar19;
  pcVar13 = pcVar33;
  if (*(long *)(pcVar33 + 0x38) == 0) {
    pcVar12 = (code *)func_0x03256878(pcVar33);
  }
  if (pcVar19[0x18] != (code)0x0) {
    return pcVar12;
  }
  pcVar12 = *(code **)(pcVar19 + 0x20);
  if (pcVar12 == (code *)0x0) {
    auVar47 = func_0x03280cac();
    ppppppcVar29 = auVar47._8_8_;
    uVar40 = auVar47._0_8_;
    plStack_d8 = (long *)0x3cc6c30;
    pcStack_c0 = pcVar25;
    lVar34 = tpidr_el0;
    uStack_e8 = *(ulong *)(lVar34 + 0x28);
    plVar21 = *(long **)(pcVar13 + 0x38);
    pcStack_e0 = unaff_x29;
    plStack_d0 = unaff_x23;
    pcStack_b8 = pcVar19;
    pcStack_b0 = pcVar33;
    pcStack_a8 = param_5;
    if (plVar21 == (long *)0x0) {
      ppppppcStack_f8 = ppppppcVar29;
      uVar23 = func_0x03256878(pcVar13);
      auVar47._8_8_ = ppppppcStack_f8;
      auVar47._0_8_ = uVar23;
      plVar21 = *(long **)(pcVar13 + 0x38);
    }
    ppppppcStack_f8 = auVar47._8_8_;
    uVar36 = (ulong)*(uint *)(*plVar21 + 0xfc);
    lVar37 = -(uVar36 + 0xf & 0x1fffffff0);
    pcVar25 = (code *)((long)&pcStack_100 + lVar37);
    if (*(char *)(uVar40 + 0x18) == '\0') {
      uVar40 = *(ulong *)(uVar40 + 0x20);
      ppppppcVar1 = ppppppcVar29;
      if (-1 < *(int *)(*plVar21 + 0x28)) {
        ppppppcVar1 = (code ******)&ppppppcStack_f8;
      }
      func_0x072ce970(pcVar25,ppppppcVar1);
      if (uVar40 != 0) {
        puVar20 = (undefined8 *)plVar21[1];
        if (-1 < *(int *)(*plVar21 + 0x28)) {
          pcVar25 = *(code **)pcVar25;
        }
        uVar36 = uVar40;
        pcStack_f0 = pcVar25;
        uVar23 = (*(code *)puVar20[2])(*puVar20,puVar20,uVar40,&pcStack_f0,pcVar25);
        auVar47._8_8_ = ppppppcStack_f8;
        auVar47._0_8_ = uVar23;
        goto LAB_03cc6ce8;
      }
      func_0x03280cac();
    }
    else {
LAB_03cc6ce8:
      ppppppcStack_f8 = auVar47._8_8_;
      if (*(ulong *)(lVar34 + 0x28) == uStack_e8) {
        return auVar47._0_8_;
      }
    }
    auVar48 = func_0x072ce990();
    pcVar19 = auVar48._0_8_;
    *(undefined8 *)((long)aplStack_128 + lVar37 + 8) = 0x3cc6d18;
    *(ulong *)((long)&uStack_118 + lVar37) = uVar40;
    *(code *******)(&stack0xfffffffffffffef0 + lVar37) = ppppppcVar29;
    *(code **)(&stack0xfffffffffffffef8 + lVar37) = pcVar25;
    pcVar25 = pcVar19;
    uVar40 = uVar36;
    if (*(long *)(uVar36 + 0x38) == 0) {
      pcVar25 = (code *)func_0x03256878(uVar36);
    }
    if (pcVar19[0x18] != (code)0x0) {
      return pcVar25;
    }
    plVar22 = *(long **)(pcVar19 + 0x10);
    if (plVar22 != (long *)0x0) {
      lVar34 = *plVar22;
      lVar37 = *(long *)(*(long *)(uVar36 + 0x38) + 8);
      uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar40 != 0) {
        piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar38 + -2) == *(long *)(lVar37 + 0x20)) {
            lVar34 = lVar34 + (long)(int)(*piVar38 + (uint)*(ushort *)(lVar37 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03cc6db0;
          }
          uVar40 = uVar40 - 1;
          piVar38 = piVar38 + 4;
        } while (uVar40 != 0);
      }
      lVar34 = func_0x03256b10(plVar22);
LAB_03cc6db0:
      lVar34 = func_0x03280b88(*(undefined8 *)(lVar34 + 8),lVar37);
                    /* WARNING: Could not recover jumptable at 0x03cc6dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar25 = (code *)(**(code **)(lVar34 + 8))(plVar22,auVar48._8_8_,lVar34);
      return pcVar25;
    }
    auVar44 = func_0x03280cac();
    lVar35 = auVar44._8_8_;
    pcVar12 = auVar44._0_8_;
    *(code ***)(auStack_160 + lVar37) = &pcStack_e0;
    *(undefined8 *)((long)alStack_158 + lVar37) = 0x3cc6ddc;
    *(long **)((long)alStack_158 + lVar37 + 8) = plVar21;
    *(long *)((long)alStack_158 + lVar37 + 0x18) = lVar34;
    *(ulong *)((long)alStack_158 + lVar37 + 0x20) = uVar36;
    *(undefined8 *)((long)alStack_158 + lVar37 + 0x28) = 0;
    *(long *)((long)aplStack_128 + lVar37) = auVar48._8_8_;
    pcVar25 = (code *)tpidr_el0;
    *(long *)((long)alStack_170 + lVar37 + 8) = *(long *)(pcVar25 + 0x28);
    *(long *)((long)&lStack_178 + lVar37) = lVar35;
    unaff_x23 = *(long **)(uVar40 + 0x38);
    pcVar19 = pcVar12;
    if (unaff_x23 == (long *)0x0) {
      pcVar19 = (code *)func_0x03256878(uVar40);
      unaff_x23 = *(long **)(uVar40 + 0x38);
    }
    plVar22 = (long *)(ulong)*(uint *)(*unaff_x23 + 0xfc);
    plVar30 = (long *)((long)alStack_330 + (lVar37 - ((long)plVar22 + 0xfU & 0x1fffffff0)) + 0x1b0);
    plVar21 = plVar22;
    plVar41 = plVar30;
    if (pcVar12[0x18] == (code)0x0) {
      plVar21 = *(long **)(pcVar12 + 0x10);
      auVar44._8_8_ = lVar35;
      auVar44._0_8_ = plVar21;
      if (-1 < *(int *)(*unaff_x23 + 0x28)) {
        lVar35 = (long)&lStack_178 + lVar37;
      }
      func_0x072ce970(plVar30,lVar35);
      if (plVar21 != (long *)0x0) {
        lVar34 = unaff_x23[1];
        auVar44._8_8_ = lVar34;
        if (-1 < *(int *)(*unaff_x23 + 0x28)) {
          plVar41 = (long *)*plVar30;
        }
        lVar35 = *plVar21;
        uVar40 = (ulong)*(ushort *)(lVar35 + 0x12e);
        if (uVar40 != 0) {
          piVar38 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
          do {
            if (*(long *)(piVar38 + -2) == *(long *)(lVar34 + 0x20)) {
              lVar35 = lVar35 + (long)(int)(*piVar38 + (uint)*(ushort *)(lVar34 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03cc6ec8;
            }
            uVar40 = uVar40 - 1;
            piVar38 = piVar38 + 4;
          } while (uVar40 != 0);
        }
        lVar35 = func_0x03256b10(plVar21);
LAB_03cc6ec8:
        lVar34 = func_0x03280b88(*(undefined8 *)(lVar35 + 8),lVar34);
        *(long **)((long)alStack_170 + lVar37) = plVar41;
        pcVar19 = (code *)(**(code **)(lVar34 + 0x10))
                                    (*(undefined8 *)(lVar34 + 8),lVar34,plVar21,
                                     (long)alStack_170 + lVar37,plVar41);
        goto LAB_03cc6ef0;
      }
      func_0x03280cac();
    }
    else {
LAB_03cc6ef0:
      plVar22 = plVar21;
      if (*(long *)(pcVar25 + 0x28) == *(long *)((long)alStack_170 + lVar37 + 8)) {
        return pcVar19;
      }
    }
    auVar48 = func_0x072ce990();
    pcVar12 = auVar48._0_8_;
    plVar30[-4] = 0x3cc6f20;
    plVar30[-3] = auVar44._8_8_;
    plVar30[-2] = auVar44._0_8_;
    plVar30[-1] = (long)plVar41;
    pcVar19 = pcVar12;
    plVar21 = plVar22;
    if (plVar22[7] == 0) {
      pcVar19 = (code *)func_0x03256878(plVar22);
    }
    if (pcVar12[0x18] != (code)0x0) {
      return pcVar19;
    }
    plVar41 = *(long **)(pcVar12 + 0x10);
    if (plVar41 != (long *)0x0) {
      lVar34 = *plVar41;
      lVar37 = *(long *)(plVar22[7] + 8);
      uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar40 != 0) {
        piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar38 + -2) == *(long *)(lVar37 + 0x20)) {
            lVar34 = lVar34 + (long)(int)(*piVar38 + (uint)*(ushort *)(lVar37 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03cc6fb8;
          }
          uVar40 = uVar40 - 1;
          piVar38 = piVar38 + 4;
        } while (uVar40 != 0);
      }
      lVar34 = func_0x03256b10(plVar41);
LAB_03cc6fb8:
      lVar34 = func_0x03280b88(*(undefined8 *)(lVar34 + 8),lVar37);
                    /* WARNING: Could not recover jumptable at 0x03cc6fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar25 = (code *)(**(code **)(lVar34 + 8))(plVar41,auVar48._8_8_,lVar34);
      return pcVar25;
    }
    auVar47 = func_0x03280cac();
    pcVar12 = auVar47._0_8_;
    plVar30[-8] = 0x3cc6fe4;
    plVar30[-7] = (long)plVar22;
    plVar30[-6] = 0;
    plVar30[-5] = auVar48._8_8_;
    pcVar19 = pcVar12;
    plVar22 = plVar21;
    if (plVar21[7] == 0) {
      pcVar19 = (code *)func_0x03256878(plVar21);
    }
    if (pcVar12[0x18] != (code)0x0) {
      return pcVar19;
    }
    plVar41 = *(long **)(pcVar12 + 0x10);
    if (plVar41 != (long *)0x0) {
      lVar34 = *plVar41;
      lVar37 = *(long *)(plVar21[7] + 8);
      uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar40 != 0) {
        piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar38 + -2) == *(long *)(lVar37 + 0x20)) {
            lVar34 = lVar34 + (long)(int)(*piVar38 + (uint)*(ushort *)(lVar37 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03cc707c;
          }
          uVar40 = uVar40 - 1;
          piVar38 = piVar38 + 4;
        } while (uVar40 != 0);
      }
      lVar34 = func_0x03256b10(plVar41);
LAB_03cc707c:
      lVar34 = func_0x03280b88(*(undefined8 *)(lVar34 + 8),lVar37);
                    /* WARNING: Could not recover jumptable at 0x03cc70a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar25 = (code *)(**(code **)(lVar34 + 8))(plVar41,auVar47._8_8_,lVar34);
      return pcVar25;
    }
    auVar48 = func_0x03280cac();
    pcVar12 = auVar48._0_8_;
    plVar30[-0xc] = 0x3cc70a8;
    plVar30[-0xb] = (long)plVar21;
    plVar30[-10] = 0;
    plVar30[-9] = auVar47._8_8_;
    pcVar19 = pcVar12;
    plVar21 = plVar22;
    if (plVar22[7] == 0) {
      pcVar19 = (code *)func_0x03256878(plVar22);
    }
    if (pcVar12[0x18] != (code)0x0) {
      return pcVar19;
    }
    auVar45._8_8_ = auVar48._8_8_;
    auVar45._0_8_ = *(long *)(pcVar12 + 0x20);
    if (*(long *)(pcVar12 + 0x20) != 0) {
      uVar40 = plVar30[-10];
      plVar21 = (long *)plVar30[-9];
      plVar22 = *(long **)(plVar22[7] + 8);
      pcVar19 = (code *)(plVar30 + -8);
      uVar23 = plVar30[-0xc];
      lVar34 = plVar30[-0xb];
      goto SUB_03ea5304;
    }
    auVar47 = func_0x03280cac();
    lVar34 = auVar47._8_8_;
    pcVar13 = auVar47._0_8_;
    plVar30[-0x10] = 0x3cc7104;
    plVar30[-0xf] = (long)pcVar12;
    plVar30[-0xe] = (long)plVar22;
    plVar30[-0xd] = auVar48._8_8_;
    pcVar19 = pcVar13;
    plVar22 = plVar21;
    if (plVar21[7] == 0) {
      pcVar19 = (code *)func_0x03256878(plVar21);
    }
    if (pcVar13[0x18] != (code)0x0) {
      return pcVar19;
    }
    uVar40 = *(ulong *)(pcVar13 + 0x20);
    if (uVar40 == 0) {
      auVar48 = func_0x03280cac();
      pcVar12 = auVar48._0_8_;
      plVar30[-0x14] = 0x3cc7160;
      plVar30[-0x13] = (long)pcVar13;
      plVar30[-0x12] = (long)plVar21;
      plVar30[-0x11] = lVar34;
      pcVar19 = pcVar12;
      plVar21 = plVar22;
      if (plVar22[7] == 0) {
        pcVar19 = (code *)func_0x03256878(plVar22);
      }
      if (pcVar12[0x18] != (code)0x0) {
        return pcVar19;
      }
      if (*(long *)(pcVar12 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cc71b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar25 = (code *)(*(code *)**(undefined8 **)(plVar22[7] + 8))
                                    (*(long *)(pcVar12 + 0x20),auVar48._8_8_);
        return pcVar25;
      }
      auVar47 = func_0x03280cac();
      pcVar13 = auVar47._0_8_;
      plVar30[-0x18] = 0x3cc71c0;
      plVar30[-0x17] = (long)pcVar12;
      plVar30[-0x16] = (long)plVar22;
      plVar30[-0x15] = auVar48._8_8_;
      pcVar19 = pcVar13;
      plVar22 = plVar21;
      if (plVar21[7] == 0) {
        pcVar19 = (code *)func_0x03256878(plVar21);
      }
      if (pcVar13[0x18] != (code)0x0) {
        return pcVar19;
      }
      if (*(long *)(pcVar13 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cc7218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar25 = (code *)(*(code *)**(undefined8 **)plVar21[7])
                                    (*(long *)(pcVar13 + 0x20),auVar47._8_8_);
        return pcVar25;
      }
      auVar48 = func_0x03280cac();
      param_5 = auVar48._8_8_;
      pcVar12 = auVar48._0_8_;
      plVar30[-0x1c] = 0x3cc7220;
      plVar30[-0x1b] = (long)pcVar13;
      plVar30[-0x1a] = (long)plVar21;
      plVar30[-0x19] = auVar47._8_8_;
      pcVar19 = pcVar12;
      plVar21 = plVar22;
      if (plVar22[7] == 0) {
        pcVar19 = (code *)func_0x03256878(plVar22);
      }
      if (pcVar12[0x18] != (code)0x0) {
        return pcVar19;
      }
      pcVar19 = *(code **)(pcVar12 + 0x20);
      if (pcVar19 == (code *)0x0) {
        auVar48 = func_0x03280cac();
        plVar41 = auVar48._8_8_;
        pcVar19 = auVar48._0_8_;
        plVar30[-0x24] = (long)(auStack_160 + lVar37);
        plVar30[-0x23] = 0x3cc727c;
        plVar30[-0x22] = (long)unaff_x23;
        plVar30[-0x20] = (long)pcVar25;
        plVar30[-0x1f] = (long)pcVar12;
        plVar30[-0x1e] = (long)plVar22;
        plVar30[-0x1d] = (long)param_5;
        lVar34 = tpidr_el0;
        plVar30[-0x25] = *(long *)(lVar34 + 0x28);
        plVar30[-0x27] = (long)plVar41;
        plVar22 = (long *)plVar21[7];
        pcVar25 = pcVar19;
        if (plVar22 == (long *)0x0) {
          pcVar25 = (code *)func_0x03256878(plVar21);
          plVar22 = (long *)plVar21[7];
        }
        pcVar12 = (code *)(ulong)*(uint *)(*plVar22 + 0xfc);
        plVar17 = (long *)((long)plVar30 + (-0x140 - ((ulong)(pcVar12 + 0xf) & 0x1fffffff0)));
        plVar21 = plVar17;
        if (pcVar19[0x18] == (code)0x0) {
          pcVar19 = *(code **)(pcVar19 + 0x20);
          plVar2 = plVar41;
          if (-1 < *(int *)(*plVar22 + 0x28)) {
            plVar2 = plVar30 + -0x27;
          }
          func_0x072ce970(plVar17,plVar2);
          if (pcVar19 == (code *)0x0) {
            func_0x03280cac();
            goto LAB_03cc7360;
          }
          puVar20 = (undefined8 *)plVar22[1];
          uVar23 = *puVar20;
          if (-1 < *(int *)(*plVar22 + 0x28)) {
            plVar21 = (long *)*plVar17;
          }
          plVar30[-0x26] = (long)plVar21;
          pcVar12 = pcVar19;
          pcVar25 = (code *)(*(code *)puVar20[2])(uVar23,puVar20,pcVar19,plVar30 + -0x26,plVar21);
        }
        if (*(long *)(lVar34 + 0x28) == plVar30[-0x25]) {
          return pcVar25;
        }
LAB_03cc7360:
        auVar48 = func_0x072ce990();
        plVar17[-4] = 0x3cc7364;
        plVar17[-3] = (long)pcVar19;
        plVar17[-2] = (long)plVar41;
        plVar17[-1] = (long)plVar21;
        pcVar25 = pcVar12;
        if (*(long *)(pcVar12 + 0x38) == 0) {
          func_0x03256878(pcVar12);
        }
        plVar21 = *(long **)(auVar48._0_8_ + 0x10);
        if (plVar21 == (long *)0x0) {
          auVar47 = func_0x03280cac();
          plVar17[-8] = 0x3cc7414;
          plVar17[-7] = (long)pcVar12;
          plVar17[-6] = 0;
          plVar17[-5] = auVar48._8_8_;
          pcVar19 = pcVar25;
          if (*(long *)(pcVar25 + 0x38) == 0) {
            func_0x03256878(pcVar25);
          }
          plVar21 = *(long **)(auVar47._0_8_ + 0x10);
          if (plVar21 == (long *)0x0) {
            auVar48 = func_0x03280cac();
            plVar17[-0xc] = 0x3cc74c4;
            plVar17[-0xb] = (long)pcVar25;
            plVar17[-10] = 0;
            plVar17[-9] = auVar47._8_8_;
            if (*(long *)(pcVar19 + 0x38) == 0) {
              func_0x03256878(pcVar19);
            }
            lVar37 = *(long *)(auVar48._0_8_ + 0x20);
            if (lVar37 != 0) {
              lVar35 = *(long *)(*(long *)(pcVar19 + 0x38) + 8);
              plVar17[-0xc] = plVar17[-0xc];
              plVar17[-0xb] = plVar17[-0xb];
              plVar17[-10] = plVar17[-10];
              plVar17[-9] = plVar17[-9];
              lVar27 = *(long *)(lVar35 + 0x38);
              if (lVar27 == 0) {
                func_0x03256878(lVar35);
                lVar27 = *(long *)(lVar35 + 0x38);
              }
              lVar35 = *(long *)(lVar27 + 8);
              plVar17[-0xe] = plVar17[-0xc];
              plVar17[-0xc] = lVar34;
              plVar17[-0xb] = plVar17[-0xb];
              plVar17[-10] = plVar17[-10];
              plVar17[-9] = plVar17[-9];
              puVar20 = *(undefined8 **)(lVar35 + 0x38);
              if (puVar20 == (undefined8 *)0x0) {
                func_0x03280a18(PTR_DAT_0774e558);
                puVar20 = *(undefined8 **)(lVar35 + 0x38);
                if (puVar20 == (undefined8 *)0x0) {
                  func_0x03256878(lVar35);
                  puVar20 = *(undefined8 **)(lVar35 + 0x38);
                }
              }
              uVar23 = *puVar20;
              if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar23 = func_0x057a51c4(uVar23,0);
              plVar17[-0xc] = plVar17[-0xe];
              plVar17[-0xb] = plVar17[-0xb];
              plVar17[-10] = plVar17[-10];
              plVar17[-9] = plVar17[-9];
              plVar17[-0xe] = 0;
              plVar17[-0xd] = 0;
              func_0x072a6c4c(plVar17 + -0xe,uVar23,0,0,0,0);
              pcVar25 = (code *)func_0x07286e40(lVar37,plVar17[-0xe],plVar17[-0xd],auVar48._8_8_,0);
              return pcVar25;
            }
            return (code *)0x0;
          }
          lVar34 = *plVar21;
          lVar37 = *(long *)(*(long *)(pcVar25 + 0x38) + 8);
          uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar40 != 0) {
            piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar38 + -2) == *(long *)(lVar37 + 0x20)) {
                lVar34 = lVar34 + (long)(int)(*piVar38 + (uint)*(ushort *)(lVar37 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03cc7498;
              }
              uVar40 = uVar40 - 1;
              piVar38 = piVar38 + 4;
            } while (uVar40 != 0);
          }
          lVar34 = func_0x03256b10(plVar21);
LAB_03cc7498:
          lVar34 = func_0x03280b88(*(undefined8 *)(lVar34 + 8),lVar37);
                    /* WARNING: Could not recover jumptable at 0x03cc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar25 = (code *)(**(code **)(lVar34 + 8))(plVar21,auVar47._8_8_,lVar34);
          return pcVar25;
        }
        lVar34 = *plVar21;
        lVar37 = *(long *)(*(long *)(pcVar12 + 0x38) + 8);
        uVar40 = (ulong)*(ushort *)(lVar34 + 0x12e);
        if (uVar40 != 0) {
          piVar38 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
          do {
            if (*(long *)(piVar38 + -2) == *(long *)(lVar37 + 0x20)) {
              lVar34 = lVar34 + (long)(int)(*piVar38 + (uint)*(ushort *)(lVar37 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03cc73e8;
            }
            uVar40 = uVar40 - 1;
            piVar38 = piVar38 + 4;
          } while (uVar40 != 0);
        }
        lVar34 = func_0x03256b10(plVar21);
LAB_03cc73e8:
        lVar34 = func_0x03280b88(*(undefined8 *)(lVar34 + 8),lVar37);
                    /* WARNING: Could not recover jumptable at 0x03cc740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar25 = (code *)(**(code **)(lVar34 + 8))(plVar21,auVar48._8_8_,lVar34);
        return pcVar25;
      }
      lVar34 = *(long *)(plVar22[7] + 8);
      plVar30[-0x1c] = plVar30[-0x1c];
      plVar30[-0x1b] = plVar30[-0x1b];
      plVar30[-0x1a] = plVar30[-0x1a];
      plVar30[-0x19] = plVar30[-0x19];
      lVar37 = *(long *)(lVar34 + 0x38);
      if (lVar37 == 0) {
        func_0x03256878(lVar34);
        lVar37 = *(long *)(lVar34 + 0x38);
      }
      lVar34 = *(long *)(lVar37 + 8);
      plVar30[-0x1e] = plVar30[-0x1c];
      plVar30[-0x1c] = (long)pcVar25;
      plVar30[-0x1b] = plVar30[-0x1b];
      plVar30[-0x1a] = plVar30[-0x1a];
      plVar30[-0x19] = plVar30[-0x19];
      pcVar25 = pcVar19;
      if ((*(long *)(lVar34 + 0x38) == 0) &&
         (pcVar25 = (code *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar34 + 0x38) == 0)) {
        pcVar25 = (code *)func_0x03256878(lVar34);
      }
      if (pcVar19[0x50] != (code)0x0) {
        return pcVar25;
      }
      uVar23 = **(undefined8 **)(lVar34 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar23 = func_0x057a51c4(uVar23,0);
      lVar34 = func_0x072869d0(pcVar19,uVar23,0,0,0);
      if (lVar34 == 0) {
        return (code *)0x0;
      }
      uVar40 = plVar30[-0x1a];
      plVar21 = (long *)plVar30[-0x19];
      pcVar25 = (code *)plVar30[-0x1c];
      lVar37 = plVar30[-0x1b];
      pcVar19 = (code *)(plVar30 + -0x18);
      pcVar12 = (code *)plVar30[-0x1e];
      goto SUB_072852e4;
    }
    lVar37 = *(long *)plVar21[7];
    plVar30[-0x10] = plVar30[-0x10];
    plVar30[-0xf] = plVar30[-0xf];
    plVar30[-0xe] = plVar30[-0xe];
    plVar30[-0xd] = plVar30[-0xd];
    plVar21 = *(long **)(lVar37 + 0x38);
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar37);
      plVar21 = *(long **)(lVar37 + 0x38);
    }
    lVar27 = *plVar21;
    auVar45._8_8_ = pcVar25;
    auVar45._0_8_ = plVar30[-0xe];
    lVar37 = plVar30[-0xd];
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar40;
    pcVar8 = (code *)(plVar30 + -0xc);
    uVar23 = plVar30[-0x10];
    lVar35 = plVar30[-0xf];
LAB_03ea5530:
    *(undefined8 *)(pcVar8 + -0x40) = uVar23;
    *(code **)(pcVar8 + -0x30) = unaff_x24;
    *(long **)(pcVar8 + -0x28) = unaff_x23;
    *(long *)(pcVar8 + -0x20) = auVar45._8_8_;
    *(long *)(pcVar8 + -0x18) = lVar35;
    *(long *)(pcVar8 + -0x10) = auVar45._0_8_;
    *(long *)(pcVar8 + -8) = lVar37;
    plVar21 = *(long **)(lVar27 + 0x38);
    lVar37 = lVar34;
    lVar35 = lVar27;
    if (plVar21 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar21 = *(long **)(lVar27 + 0x38);
      if (plVar21 == (long *)0x0) {
        func_0x03256878(lVar27);
        plVar21 = *(long **)(lVar27 + 0x38);
      }
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    func_0x0404e308(lVar15,*(undefined8 *)(*(long *)(lVar27 + 0x38) + 8));
    if (lVar15 != 0) {
      pcVar25 = (code *)(lVar15 + 0x10);
      *(long *)pcVar25 = lVar34;
      goto SUB_032809c4;
    }
    auVar48 = func_0x03280cac();
    *(undefined8 *)(pcVar8 + -0x80) = 0x3ea5644;
    *(undefined8 *)(pcVar8 + -0x70) = 0;
    *(long **)(pcVar8 + -0x68) = unaff_x23;
    *(long *)(pcVar8 + -0x60) = lVar34;
    *(long *)(pcVar8 + -0x58) = lVar27;
    *(undefined1 (*) [16])(pcVar8 + -0x50) = auVar46;
    plVar21 = *(long **)(lVar35 + 0x38);
    lVar34 = lVar37;
    lVar27 = lVar35;
    if (plVar21 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar21 = *(long **)(lVar35 + 0x38);
      if (plVar21 == (long *)0x0) {
        func_0x03256878(lVar35);
        plVar21 = *(long **)(lVar35 + 0x38);
      }
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar15 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar35 + 0x38) + 8))();
    if (lVar15 != 0) {
      pcVar25 = (code *)(lVar15 + 0x10);
      *(long *)pcVar25 = lVar37;
      goto SUB_032809c4;
    }
    auVar47 = func_0x03280cac();
    *(undefined8 *)(pcVar8 + -0xc0) = 0x3ea575c;
    *(undefined8 *)(pcVar8 + -0xb0) = 0;
    *(long **)(pcVar8 + -0xa8) = unaff_x23;
    *(long *)(pcVar8 + -0xa0) = lVar37;
    *(long *)(pcVar8 + -0x98) = lVar35;
    *(undefined1 (*) [16])(pcVar8 + -0x90) = auVar48;
    plVar21 = *(long **)(lVar27 + 0x38);
    if (plVar21 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar21 = *(long **)(lVar27 + 0x38);
      if (plVar21 == (long *)0x0) {
        func_0x03256878(lVar27);
        plVar21 = *(long **)(lVar27 + 0x38);
      }
    }
    if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar37 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x38) + 8))();
    if (lVar37 != 0) {
      pcVar25 = (code *)(lVar37 + 0x10);
      *(long *)pcVar25 = lVar34;
      goto SUB_032809c4;
    }
    auVar48 = func_0x03280cac();
    lVar37 = auVar48._8_8_;
    pcVar25 = auVar48._0_8_;
    *(undefined8 *)(pcVar8 + -0xe0) = 0x3ea5874;
    *(undefined1 (*) [16])(pcVar8 + -0xd0) = auVar47;
    plVar21 = *(long **)(lVar37 + 0x38);
    if (plVar21 == (long *)0x0) {
      func_0x03256878(lVar37);
      plVar21 = *(long **)(lVar37 + 0x38);
    }
    lVar37 = *plVar21;
    *(undefined8 *)(pcVar8 + -0xf0) = *(undefined8 *)(pcVar8 + -0xe0);
    *(long **)(pcVar8 + -0xe8) = unaff_x23;
    *(long *)(pcVar8 + -0xe0) = lVar34;
    *(long *)(pcVar8 + -0xd8) = lVar27;
    *(undefined8 *)(pcVar8 + -0xd0) = *(undefined8 *)(pcVar8 + -0xd0);
    *(undefined8 *)(pcVar8 + -200) = *(undefined8 *)(pcVar8 + -200);
    pcVar19 = pcVar25;
    if ((*(long *)(lVar37 + 0x38) == 0) &&
       (pcVar19 = (code *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar37 + 0x38) == 0)) {
      pcVar19 = (code *)func_0x03256878(lVar37);
    }
    puVar43 = PTR_DAT_0774e558;
    if (pcVar25[0x50] != (code)0x0) {
      return pcVar19;
    }
    uVar23 = **(undefined8 **)(lVar37 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar23 = func_0x057a51c4(uVar23,0);
    lVar34 = func_0x072869d0(pcVar25,uVar23,0,0,0);
    if (lVar34 == 0) {
      return (code *)0x0;
    }
    uVar23 = **(undefined8 **)(lVar37 + 0x38);
    if (*(int *)(*(long *)puVar43 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar23 = func_0x057a51c4(uVar23,0);
    lVar35 = func_0x057c1ad4(uVar23,0);
    lVar37 = *(long *)(*(long *)(lVar37 + 0x38) + 8);
    if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
      lVar37 = func_0x0325681c(lVar37);
    }
    if (lVar35 == 0) {
LAB_03ea5b18:
      param_5 = (code *)0x0;
    }
    else {
      param_5 = (code *)func_0x03280b90(lVar35,lVar37);
      if (param_5 == (code *)0x0) {
        func_0x03281048(lVar35,lVar37);
        goto LAB_03ea5b18;
      }
    }
    uVar40 = *(ulong *)(pcVar8 + -0xd0);
    plVar21 = *(long **)(pcVar8 + -200);
    pcVar25 = *(code **)(pcVar8 + -0xe0);
    lVar37 = *(long *)(pcVar8 + -0xd8);
    pcVar19 = pcVar8 + -0xc0;
    pcVar12 = *(code **)(pcVar8 + -0xf0);
    unaff_x23 = *(long **)(pcVar8 + -0xe8);
    unaff_x24 = (code *)0x0;
  }
  else {
    lVar34 = *(long *)(*(long *)(pcVar33 + 0x38) + 8);
    lVar37 = *(long *)(lVar34 + 0x38);
    if (lVar37 == 0) {
      func_0x03256878(lVar34);
      lVar37 = *(long *)(lVar34 + 0x38);
    }
    lVar34 = *(long *)(lVar37 + 8);
    pcStack_b0 = pcStack_a0;
    pcVar19 = pcVar12;
    pcStack_a0 = pcVar25;
    if ((*(long *)(lVar34 + 0x38) == 0) &&
       (pcVar19 = (code *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar34 + 0x38) == 0)) {
      pcVar19 = (code *)func_0x03256878(lVar34);
    }
    if (pcVar12[0x50] != (code)0x0) {
      return pcVar19;
    }
    plVar41 = (long *)**(undefined8 **)(lVar34 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar23 = func_0x057a51c4(plVar41,0);
    uVar40 = 1;
    plVar21 = (long *)0x0;
    lVar34 = func_0x072869d0(pcVar12,uVar23,0,1,0);
    if (lVar34 == 0) {
      auVar48 = func_0x03280cac();
      lVar34 = auVar48._8_8_;
      pcVar25 = auVar48._0_8_;
      ppppppcStack_f8 = (code ******)0x3ea51c0;
      pcStack_c0 = (code *)0x0;
      lVar37 = tpidr_el0;
      lVar35 = *(long *)(lVar37 + 0x28);
      puVar18 = *(ulong **)(uVar40 + 0x38);
      pcVar13 = pcVar25;
      plVar22 = plVar21;
      pcStack_100 = unaff_x29;
      pcStack_f0 = unaff_x26;
      uStack_e8 = unaff_x25;
      pcStack_e0 = unaff_x24;
      plStack_d8 = unaff_x23;
      plStack_d0 = plVar41;
      pcStack_c8 = pcVar12;
      pcStack_b8 = param_5;
      if (puVar18 == (ulong *)0x0) {
        pcVar13 = (code *)func_0x03280a18(PTR_DAT_0774e558);
        puVar18 = *(ulong **)(uVar40 + 0x38);
        if (puVar18 == (ulong *)0x0) {
          pcVar13 = (code *)func_0x03256878(uVar40);
          puVar18 = *(ulong **)(uVar40 + 0x38);
        }
      }
      unaff_x23 = (long *)(ulong)*(uint *)(puVar18[1] + 0xfc);
      pcVar19 = (code *)(&stack0xfffffffffffffef0 + -((long)unaff_x23 + 0xfU & 0x1fffffff0));
      unaff_x24 = pcVar19;
      if (pcVar25[0x50] == (code)0x0) {
        unaff_x25 = *puVar18;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar23 = func_0x057a51c4(unaff_x25,0);
        lVar34 = func_0x072869d0(pcVar25,uVar23,lVar34,1,0);
        uVar40 = *(ulong *)(uVar40 + 0x38);
        plVar41 = plVar21;
        if (-1 < *(int *)(*(long *)(uVar40 + 8) + 0x28)) {
          plVar41 = (long *)&stack0xfffffffffffffef0;
        }
        plVar22 = unaff_x23;
        func_0x072ce970(pcVar19,plVar41);
        param_5 = (code *)func_0x03280b94(*(undefined8 *)(uVar40 + 8),pcVar19);
        if (lVar34 != 0) {
          pcVar12 = (code *)0x3ea52d0;
          lVar37 = lVar34;
          goto SUB_072852e4;
        }
        func_0x03280cac();
        lVar34 = 0;
      }
      else if (*(long *)(lVar37 + 0x28) == lVar35) {
        return pcVar13;
      }
      uVar23 = 0x3ea5304;
      auVar45 = func_0x072ce990();
SUB_03ea5304:
      lVar15 = auVar45._8_8_;
      *(undefined8 *)(pcVar19 + -0x20) = uVar23;
      *(long *)(pcVar19 + -0x18) = lVar34;
      *(ulong *)(pcVar19 + -0x10) = uVar40;
      *(long **)(pcVar19 + -8) = plVar21;
      lVar34 = plVar22[7];
      if (lVar34 == 0) {
        func_0x03256878(plVar22);
        lVar34 = plVar22[7];
      }
      lVar35 = *(long *)(lVar34 + 8);
      pcVar8 = pcVar19 + -0x40;
      *(undefined8 *)(pcVar19 + -0x40) = *(undefined8 *)(pcVar19 + -0x20);
      *(code **)(pcVar19 + -0x30) = unaff_x24;
      *(long **)(pcVar19 + -0x28) = unaff_x23;
      *(code **)(pcVar19 + -0x20) = pcVar25;
      *(undefined8 *)(pcVar19 + -0x18) = *(undefined8 *)(pcVar19 + -0x18);
      *(undefined8 *)(pcVar19 + -0x10) = *(undefined8 *)(pcVar19 + -0x10);
      *(undefined8 *)(pcVar19 + -8) = *(undefined8 *)(pcVar19 + -8);
      plVar21 = *(long **)(lVar35 + 0x38);
      lVar37 = 0;
      lVar34 = lVar15;
      lVar27 = lVar35;
      if (plVar21 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_07750ac8);
        func_0x03280a18(PTR_DAT_0774e558);
        plVar21 = *(long **)(lVar35 + 0x38);
        if (plVar21 == (long *)0x0) {
          func_0x03256878(lVar35);
          plVar21 = *(long **)(lVar35 + 0x38);
        }
      }
      if ((*(byte *)(*plVar21 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar14 = func_0x03280ca0();
      func_0x04053df4(lVar14,*(undefined8 *)(*(long *)(lVar35 + 0x38) + 8));
      if (lVar14 != 0) {
        pcVar25 = (code *)(lVar14 + 0x10);
        *(long *)pcVar25 = lVar15;
        goto SUB_032809c4;
      }
      uVar23 = 0x3ea5530;
      auVar46 = func_0x03280cac();
      unaff_x24 = (code *)0x0;
      goto LAB_03ea5530;
    }
    pcVar19 = (code *)&uStack_80;
    plVar21 = plStack_88;
    uVar40 = uStack_90;
    lVar37 = lStack_98;
    pcVar25 = pcStack_a0;
    pcVar12 = pcStack_b0;
  }
SUB_072852e4:
  lVar35 = 0;
  pcVar9 = pcVar19 + -0x30;
  *(code **)(pcVar19 + -0x30) = pcVar12;
  *(code **)(pcVar19 + -0x20) = pcVar25;
  *(long *)(pcVar19 + -0x18) = lVar37;
  *(ulong *)(pcVar19 + -0x10) = uVar40;
  *(long **)(pcVar19 + -8) = plVar21;
  if ((bRam0000000007e3419a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dee8);
    func_0x03280a18(PTR_DAT_0785def0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0785def8);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07779590);
    bRam0000000007e3419a = 1;
  }
  puVar43 = PTR_DAT_07779590;
  if (param_5 != (code *)0x0) {
    uVar23 = func_0x057dadc4(param_5,0);
    puVar39 = *(undefined **)(lVar34 + 0x20);
    if (*(int *)(*(long *)puVar43 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar43);
    }
    uVar11 = func_0x0727e0ec(uVar23,puVar39);
    pcVar25 = (code *)(ulong)(uVar11 & 1);
    uVar23 = 0x728539c;
    goto SUB_0727dc78;
  }
  func_0x03280cac();
  func_0x03280cac();
  lVar34 = 0;
  while( true ) {
    func_0x03280ca4(lVar34);
    auVar49 = func_0x03280cac();
    uVar23 = auVar49._0_8_;
    if (auVar49._8_4_ != 1) break;
    plVar21 = (long *)func_0x072ce910(uVar23);
    lVar34 = *plVar21;
    func_0x072ce920();
    uVar40 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar40 != 0) {
      piVar38 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar20 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar38 * 0x10 + 0x138);
          goto LAB_072854e8;
        }
        uVar40 = uVar40 - 1;
        piVar38 = piVar38 + 4;
      } while (uVar40 != 0);
    }
    lVar35 = 0;
    puVar20 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
    pcVar12 = (code *)(*(code *)*puVar20)(0x7e34000,puVar20[1]);
    if (lVar34 == 0) {
      return pcVar12;
    }
  }
  uVar40 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
  if (uVar40 != 0) {
    piVar38 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
    do {
      if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_0774e8c8) {
        puVar20 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar38 * 0x10 + 0x138);
        goto LAB_072855b0;
      }
      uVar40 = uVar40 - 1;
      piVar38 = piVar38 + 4;
    } while (uVar40 != 0);
  }
  lVar35 = 0;
  puVar20 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
  (*(code *)*puVar20)(0x7e34000,puVar20[1]);
  func_0x03365958(uVar23);
  func_0x03280ca4(0);
  auVar48 = func_0x02f09514();
  puVar43 = PTR_DAT_0785dec8;
  lVar37 = auVar48._8_8_;
  lVar34 = auVar48._0_8_;
  *(undefined8 *)(pcVar19 + -0x70) = 0x72855d4;
  *(ulong *)(pcVar19 + -0x68) = unaff_x25;
  *(code **)(pcVar19 + -0x60) = unaff_x24;
  *(long **)(pcVar19 + -0x58) = unaff_x23;
  *(code **)(pcVar19 + -0x50) = pcVar25;
  *(undefined8 *)(pcVar19 + -0x48) = uVar23;
  *(undefined8 *)(pcVar19 + -0x40) = 0;
  *(undefined8 *)(pcVar19 + -0x38) = 0x7e34000;
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
  pcVar25 = (code *)func_0x03e0c264(lVar37,*(undefined8 *)puVar43);
  puVar26 = PTR_DAT_0785df00;
  puVar39 = PTR_DAT_0785ded8;
  if (((ulong)pcVar25 & 1) == 0) {
LAB_07285770:
    if (lVar37 != 0) {
      if (0 < *(int *)(lVar37 + 0x18)) {
        plVar21 = (long *)0x0;
        do {
          puVar28 = (undefined *)func_0x0414419c(lVar37,plVar21,*(undefined8 *)puVar39);
          unaff_x24 = (code *)puVar39;
          if (*(long *)(lVar34 + 0x10) == 0) goto LAB_07285808;
          pcVar25 = (code *)func_0x041447fc(*(long *)(lVar34 + 0x10),puVar28,*(undefined8 *)puVar26)
          ;
          puVar43 = puVar28;
          if (((ulong)pcVar25 & 1) != 0) {
            if ((puVar28 == (undefined *)0x0) || (lVar27 = *(long *)(puVar28 + 0x18), lVar27 == 0))
            goto LAB_07285808;
            pcVar25 = (code *)(**(code **)(lVar27 + 0x18))
                                        (*(undefined8 *)(lVar27 + 0x40),lVar35,
                                         *(undefined8 *)(lVar27 + 0x28));
          }
          uVar11 = (int)plVar21 + 1;
          plVar21 = (long *)(ulong)uVar11;
        } while ((int)uVar11 < *(int *)(lVar37 + 0x18));
      }
      return pcVar25;
    }
LAB_07285808:
    func_0x03280cac();
    plVar22 = plVar21;
    puVar26 = puVar43;
LAB_0728580c:
    func_0x03280cb4();
  }
  else {
    if (*(int *)(lVar34 + 0x30) != 2) {
      if (*(int *)(lVar34 + 0x30) != 1) goto LAB_07285770;
      uVar23 = func_0x03280a2c(PTR_DAT_0774e5a0);
      lVar37 = func_0x03280afc(uVar23,1);
      func_0x02f0b18c(lVar35);
      uVar23 = func_0x057dadc4(lVar35,0);
      func_0x02f0b18c(lVar37);
      func_0x02f176b4(lVar37,uVar23);
      func_0x02f0965c(lVar37,0,uVar23);
      uVar23 = func_0x03280a2c(PTR_DAT_0785df08);
      lVar35 = func_0x0727df38(uVar23,lVar37);
      uVar23 = func_0x03280a2c(PTR_DAT_0785df10);
      func_0x03280b7c(lVar35,uVar23);
    }
    plVar22 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if ((lVar35 == 0) ||
       (puVar26 = (undefined *)func_0x057dadc4(lVar35,0), plVar21 = plVar22, plVar22 == (long *)0x0)
       ) goto LAB_07285808;
    if ((puVar26 == (undefined *)0x0) ||
       (lVar27 = func_0x03280b90(puVar26,*(undefined8 *)(*plVar22 + 0x40)), lVar27 != 0)) {
      if ((int)plVar22[3] != 0) {
        pcVar25 = (code *)(plVar22 + 4);
        *(undefined **)pcVar25 = puVar26;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar18 = (ulong *)(((ulong)pcVar25 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar18,0x10);
            if (bVar5) {
              *puVar18 = *puVar18 | 1L << ((ulong)pcVar25 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return pcVar25;
      }
      goto LAB_0728580c;
    }
  }
  uVar23 = func_0x03280cd0();
  auVar48 = func_0x03280b7c(uVar23,0);
  *(undefined8 *)(pcVar19 + -0x80) = 0x728581c;
  lVar27 = *(long *)(auVar48._0_8_ + 0x18);
  if (lVar27 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar25 = (code *)(**(code **)(lVar27 + 0x18))
                                (*(undefined8 *)(lVar27 + 0x40),auVar48._8_8_,
                                 *(undefined8 *)(lVar27 + 0x28));
    return pcVar25;
  }
  param_5 = (code *)func_0x03280cac();
  puVar39 = PTR_DAT_0785df18;
  pcVar9 = pcVar19 + -0xc0;
  *(undefined8 *)(pcVar19 + -0xc0) = 0x7285840;
  *(code **)(pcVar19 + -0xb0) = unaff_x24;
  *(undefined **)(pcVar19 + -0xa8) = puVar26;
  *(long **)(pcVar19 + -0xa0) = plVar22;
  *(long *)(pcVar19 + -0x98) = lVar34;
  *(long *)(pcVar19 + -0x90) = lVar37;
  *(long *)(pcVar19 + -0x88) = lVar35;
  lVar34 = 0x7e34000;
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
  pcVar25 = (code *)(ulong)(byte)param_5[0x34];
  uVar23 = 0x72858f0;
SUB_0727dc78:
  if (((ulong)pcVar25 & 1) != 0) {
    return pcVar25;
  }
  *(undefined8 *)(pcVar9 + -0x10) = uVar23;
  *(undefined **)(pcVar9 + -8) = puVar39;
  uVar23 = func_0x03280a2c(PTR_DAT_0785dbe8);
  puVar43 = PTR_DAT_0777c990;
  *(undefined8 *)(pcVar9 + -0x30) = 0x727dc94;
  *(long *)(pcVar9 + -0x28) = lVar34;
  *(code **)(pcVar9 + -0x20) = param_5;
  *(undefined **)(pcVar9 + -0x18) = puVar39;
  if ((bRam0000000007e34146 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c990);
    bRam0000000007e34146 = 1;
  }
  pcVar25 = (code *)func_0x03280ca0(*(undefined8 *)puVar43);
  func_0x072c77f8(pcVar25,uVar23,0);
  return pcVar25;
  while( true ) {
    uVar40 = uVar40 - 1;
    piVar38 = piVar38 + 4;
    if (uVar40 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar38 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar20 = (undefined8 *)(lVar34 + (long)*piVar38 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar21 = (long *)0x0;
  puVar20 = (undefined8 *)func_0x03256b10(plVar41);
LAB_04145ad4:
  (*(code *)*puVar20)(plVar41,puVar20[1]);
LAB_04145ae0:
  func_0x03365958(auVar49._0_8_);
  func_0x03280ca4(0);
  auVar48 = func_0x02f09514();
  lVar34 = auVar48._0_8_;
  alStack_158[3] = 0x4145af8;
  alStack_158[5] = lVar37;
  aplStack_128[0] = plVar22;
  uVar11 = func_0x03f898d4(*(undefined8 *)(lVar34 + 0x10),auVar48._8_8_,0,
                           *(undefined4 *)(lVar34 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(plVar21[4] + 0xc0) + 0xd0) +
                                                0x20) + 0xc0) + 0x158));
  if (-1 < (int)uVar11) {
    func_0x04145da4(lVar34,uVar11);
  }
  return (code *)(ulong)(~uVar11 >> 0x1f);
}

