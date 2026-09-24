/* Ghidra 12.1.2 native pseudocode; RVA 0x670A48C; Merger.Game.Views.Inventory.InventoryProducerView.TryRemoveItem; status ok */


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
/* WARNING: Possible PIC construction at 0x03e28ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0728545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea52cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea54a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea55bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea56d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03ea57ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a4b49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068095b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0680a6f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068095b8) */
/* WARNING: Removing unreachable block (ram,0x068095dc) */
/* WARNING: Removing unreachable block (ram,0x06a4b4a0) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
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
/* WARNING: Removing unreachable block (ram,0x0680a6f4) */
/* WARNING: Removing unreachable block (ram,0x04cec2b0) */
/* WARNING: Removing unreachable block (ram,0x05369e18) */
/* WARNING: Removing unreachable block (ram,0x04a31d7c) */
/* WARNING: Removing unreachable block (ram,0x069a2bc0) */
/* WARNING: Removing unreachable block (ram,0x07285548) */
/* WARNING: Type propagation algorithm not settling */

long * Merger_Game_Views_Inventory_InventoryProducerView__TryRemoveItem(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  long *plVar9;
  code **ppcVar10;
  long **pplVar11;
  code **ppcVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  code *pcVar26;
  undefined *puVar27;
  undefined *puVar28;
  long *plVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  int *piVar37;
  long *plVar38;
  undefined8 unaff_x19;
  undefined *puVar39;
  long *plVar40;
  long *plVar41;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar42;
  undefined8 unaff_x22;
  undefined8 *puVar43;
  long *unaff_x23;
  undefined *puVar44;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  code *unaff_x30;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [12];
  long alStack_2f0 [44];
  ulong uStack_180;
  undefined *apuStack_168 [2];
  long lStack_158;
  undefined1 auStack_150 [16];
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [8];
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
  long alStack_100 [2];
  undefined1 auStack_f0 [8];
  long *aplStack_e8 [2];
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined8 *******pppppppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  code *pcStack_80;
  code *pcVar55;
  long *plStack_38;
  undefined8 *******pppppppuVar29;
  
  auVar52._8_8_ = unaff_x19;
  auVar52._0_8_ = unaff_x20;
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000007e287c5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780c660);
    bRam0000000007e287c5 = 1;
  }
  puVar44 = PTR_DAT_07806990;
  lVar25 = *(long *)(param_1 + 0x28);
  if (lVar25 == 0) {
    auVar52 = func_0x03280cac();
    lVar25 = auVar52._8_8_;
    pcVar55 = Merger_Game_Views_Inventory_InventoryProducerView__ItemRetrievedFromInventory;
    plStack_38 = (long *)0x7e28000;
    plVar41 = auVar52._0_8_;
    if ((bRam0000000007e287c6 & 1) == 0) {
      plVar41 = (long *)func_0x03280a18(PTR_DAT_0780c6e8);
      bRam0000000007e287c6 = 1;
    }
    if (lVar25 != 0) {
      if (*(int *)(lVar25 + 0x1c) != 1) {
        return plVar41;
      }
      lVar33 = auVar52._0_8_[0xb];
      if ((lVar33 != 0) &&
         (plVar41 = (long *)func_0x0414419c(lVar33,*(undefined4 *)(lVar25 + 0x24),
                                            *(undefined8 *)PTR_DAT_0780c6e8), plVar41 != (long *)0x0
         )) {
        plVar16 = plVar41;
        if ((bRam0000000007e287bc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0780c640);
          plVar16 = (long *)func_0x03280a18(PTR_DAT_0780c648);
          bRam0000000007e287bc = 1;
        }
        if (*(char *)((long)plVar41 + 0xb4) == '\0') {
          return plVar16;
        }
        lVar25 = func_0x068093a4(plVar41);
        if (lVar25 != 0) {
          func_0x06f9274c(lVar25,*(undefined8 *)PTR_DAT_0780c648,0);
          *(undefined1 *)((long)plVar41 + 0xb4) = 0;
          if ((plVar41[0xf] != 0) && (lVar25 = func_0x06fdbed0(plVar41[0xf],0), lVar25 != 0)) {
            ppcVar12 = (code **)&stack0xffffffffffffffe0;
            goto SUB_06fdf26c;
          }
        }
        param_2 = func_0x03280cac();
        puVar44 = PTR_DAT_0780c650;
        puVar21 = (undefined8 *)PTR_DAT_0774e758;
        pcStack_80 = Merger_Game_Views_Inventory_InventoryProducerSlotView__Awake;
        if ((bRam0000000007e287bd & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774e758);
          func_0x03280a18(PTR_DAT_0780c650);
          func_0x03280a18(PTR_DAT_0780c658);
          bRam0000000007e287bd = 1;
        }
        plVar41 = *(long **)(param_2 + 0x68);
        auVar51._8_8_ = param_2;
        auVar51._0_8_ = plVar41;
        plStack_38 = (long *)func_0x03280ca0(*puVar21);
        func_0x056ed730(plStack_38,param_2,*(undefined8 *)puVar44,0);
        puVar44 = PTR_DAT_0780c658;
        if (plVar41 == (long *)0x0) {
          lVar25 = func_0x03280cac();
          lVar25 = *(long *)(lVar25 + 0x70);
          if (lVar25 == 0) {
            plVar41 = (long *)func_0x03280cac();
            lVar25 = plVar41[0xb];
            if (lVar25 == 0) {
              return plVar41;
            }
                    /* WARNING: Could not recover jumptable at 0x06809634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar41 = (long *)(**(code **)(lVar25 + 0x18))
                                        (*(undefined8 *)(lVar25 + 0x40),plVar41[0x13],
                                         *(undefined8 *)(lVar25 + 0x28));
            return plVar41;
          }
          ppcVar12 = &pcStack_80;
          pcVar55 = Merger_Game_Views_Inventory_InventoryProducerSlotView__ActivateNewBanner;
          param_1 = 0;
SUB_06fdf26c:
          *(code **)((long)ppcVar12 + -0x20) = pcVar55;
          *(long **)((long)ppcVar12 + -0x18) = plStack_38;
          *(long *)((long)ppcVar12 + -0x10) = param_1;
          *(ulong *)((long)ppcVar12 + -8) = param_2;
          if (pcRam0000000007e2fbf0 == (code *)0x0) {
            pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
          }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar41 = (long *)(*pcRam0000000007e2fbf0)(lVar25,1);
          return plVar41;
        }
        if ((bRam0000000007e295b6 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0776a610,plStack_38,0);
          bRam0000000007e295b6 = 1;
        }
        lVar25 = plVar41[0x25];
        if (lVar25 == 0) {
LAB_069bab24:
          auVar52 = func_0x03280cac();
          lStack_c0 = 0x69bab28;
          pppppppuStack_b8 = (undefined8 *******)0x7e29000;
          plStack_b0 = plVar41;
          plStack_a8 = plStack_38;
          if ((bRam0000000007e295b7 & 1) == 0) {
            func_0x03280a18(PTR_DAT_077eba08);
            bRam0000000007e295b7 = 1;
          }
          auVar8._8_8_ = plStack_a8;
          auVar8._0_8_ = plStack_b0;
          lVar25 = *(long *)(auVar52._0_8_ + 0x128);
          auVar53._8_8_ = auVar52._8_8_;
          auVar53._0_8_ = lVar25;
          if (lVar25 != 0) {
            plVar41 = *(long **)PTR_DAT_077eba08;
            pplVar11 = (long **)&stack0xffffffffffffff60;
            lVar25 = lStack_c0;
            goto SUB_04145af8;
          }
          auVar51 = func_0x03280cac();
          plStack_38 = auVar51._8_8_;
          aplStack_e8[1] = (long *)0x69bab80;
          uStack_d8 = 0x7e29000;
          auStack_d0 = auVar52;
          if ((bRam0000000007e295b8 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776a610);
            bRam0000000007e295b8 = 1;
          }
          lVar25 = *(long *)(auVar51._0_8_ + 0x130);
          if (lVar25 != 0) {
            lVar33 = *(long *)(lVar25 + 0x10);
            lVar34 = *(long *)PTR_DAT_0776a610;
            *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
            if (lVar33 != 0) {
              uVar15 = *(uint *)(lVar25 + 0x18);
              if (uVar15 < *(uint *)(lVar33 + 0x18)) {
                *(uint *)(lVar25 + 0x18) = uVar15 + 1;
                puVar19 = (ulong *)(lVar33 + (long)(int)uVar15 * 8 + 0x20);
                *puVar19 = (ulong)plStack_38;
                goto SUB_032809c4;
              }
              lVar33 = *(long *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70);
              ppcVar10 = (code **)&lStack_c0;
              plVar41 = (long *)uStack_d8;
              plVar16 = aplStack_e8[1];
              auVar51 = auStack_d0;
              goto SUB_0414446c;
            }
          }
          auVar52 = func_0x03280cac();
          alStack_100[0] = 0x69bac2c;
          alStack_100[1] = 0x7e29000;
          _auStack_f0 = auVar51;
          if ((bRam0000000007e295b9 & 1) == 0) {
            func_0x03280a18(PTR_DAT_077eba08);
            bRam0000000007e295b9 = 1;
          }
          lVar25 = *(long *)(auVar52._0_8_ + 0x130);
          auVar53._8_8_ = auVar52._8_8_;
          auVar53._0_8_ = lVar25;
          if (lVar25 != 0) {
            plVar41 = *(long **)PTR_DAT_077eba08;
            pplVar11 = aplStack_e8 + 1;
            lVar25 = alStack_100[0];
            auVar8 = _auStack_f0;
            goto SUB_04145af8;
          }
          auVar51 = func_0x03280cac();
          plStack_38 = auVar51._8_8_;
          uStack_120 = 0x69bac84;
          plStack_118 = (long *)0x7e29000;
          auStack_110 = auVar52;
          if ((bRam0000000007e295ba & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776a610);
            bRam0000000007e295ba = 1;
          }
          lVar25 = *(long *)(auVar51._0_8_ + 0x138);
          if (lVar25 != 0) {
            lVar33 = *(long *)(lVar25 + 0x10);
            lVar34 = *(long *)PTR_DAT_0776a610;
            *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
            if (lVar33 != 0) {
              uVar15 = *(uint *)(lVar25 + 0x18);
              if (uVar15 < *(uint *)(lVar33 + 0x18)) {
                *(uint *)(lVar25 + 0x18) = uVar15 + 1;
                puVar19 = (ulong *)(lVar33 + (long)(int)uVar15 * 8 + 0x20);
                *puVar19 = (ulong)plStack_38;
                goto SUB_032809c4;
              }
              lVar33 = *(long *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70);
              ppcVar10 = (code **)alStack_100;
              plVar41 = plStack_118;
              plVar16 = (long *)uStack_120;
              auVar51 = auStack_110;
              goto SUB_0414446c;
            }
          }
          auVar52 = func_0x03280cac();
          lStack_140 = 0x69bad30;
          lStack_138 = 0x7e29000;
          _auStack_130 = auVar51;
          if ((bRam0000000007e295bb & 1) == 0) {
            func_0x03280a18(PTR_DAT_077eba08);
            bRam0000000007e295bb = 1;
          }
          lVar25 = *(long *)(auVar52._0_8_ + 0x138);
          auVar53._8_8_ = auVar52._8_8_;
          auVar53._0_8_ = lVar25;
          if (lVar25 == 0) {
            lVar25 = func_0x03280cac();
            puVar39 = PTR_DAT_0774e4e0;
            uStack_180 = 0x69bad88;
            apuStack_168[0] = puVar44;
            apuStack_168[1] = (undefined *)puVar21;
            lStack_158 = 0x7e29000;
            auStack_150 = auVar52;
            if ((bRam0000000007e295bc & 1) == 0) {
              func_0x03280a18(PTR_DAT_078243f0);
              func_0x03280a18(PTR_DAT_07817630);
              func_0x03280a18(PTR_DAT_07784358);
              func_0x03280a18(PTR_DAT_07784360);
              func_0x03280a18(PTR_DAT_0774e4e0);
              func_0x03280a18(PTR_DAT_078243f8);
              bRam0000000007e295bc = 1;
            }
            uVar42 = *(undefined8 *)(lVar25 + 0x170);
            if (*(int *)(*(long *)puVar39 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar20 = func_0x06fdeb74(uVar42,0,0);
            if ((((uVar20 & 1) != 0) || (*(char *)(lVar25 + 0x192) != '\0')) ||
               (*(char *)(lVar25 + 400) != '\0')) {
              if (cRam0000000007e162b5 == '\0') {
                func_0x03280a18(PTR_DAT_0774ee08);
                cRam0000000007e162b5 = '\x01';
              }
              fVar45 = *(float *)(lVar25 + 0x154);
              fVar46 = *(float *)(lVar25 + 0x158);
              plVar41 = *(long **)PTR_DAT_0774ee08;
              if ((int)plVar41[0x1c] == 0) {
                plVar41 = (long *)func_0x03280b8c();
              }
              if (50.0 < SQRT(fVar45 * fVar45 + fVar46 * fVar46)) {
                return plVar41;
              }
            }
            puVar43 = (undefined8 *)PTR_DAT_078243f8;
            puVar22 = (undefined8 *)PTR_DAT_078243f0;
            plVar41 = (long *)PTR_DAT_07817630;
            puVar44 = PTR_DAT_07784360;
            lVar33 = *(long *)(lVar25 + 0x128);
            plVar16 = (long *)0x7e29000;
            if (lVar33 != 0) {
              iVar14 = 0;
              do {
                if (*(int *)(lVar33 + 0x18) <= iVar14) goto LAB_069baf14;
                lVar33 = func_0x0414419c(lVar33,iVar14,*(undefined8 *)puVar44);
                puVar21 = puVar43;
                plVar16 = plVar41;
                unaff_x24 = puVar22;
                if (lVar33 != 0) {
                  if (lVar33 == 0) break;
                  (**(code **)(lVar33 + 0x18))
                            (*(undefined8 *)(lVar33 + 0x40),*(undefined8 *)(lVar33 + 0x28));
                }
                lVar33 = *(long *)(lVar25 + 0x128);
                iVar14 = iVar14 + 1;
              } while (lVar33 != 0);
            }
            puVar22 = unaff_x24;
            puVar43 = puVar21;
            plVar41 = plVar16;
            func_0x03280cac();
LAB_069baf14:
            lVar33 = func_0x03280ca0(*puVar22);
            func_0x054221d4(lVar33,lVar25,*puVar43,0);
            if (*(int *)(*plVar41 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            if ((bRam0000000007e29498 & 1) == 0) {
              func_0x03280a18(PTR_DAT_07817630,0);
              func_0x03280a18(PTR_DAT_078176a8);
              func_0x03280a18(PTR_DAT_078176b0);
              bRam0000000007e29498 = 1;
            }
            puVar39 = PTR_DAT_078176b0;
            puVar44 = PTR_DAT_07817630;
            uVar20 = 0;
            while( true ) {
              plVar41 = *(long **)puVar44;
              if ((int)plVar41[0x1c] == 0) {
                func_0x03280b8c();
                plVar41 = *(long **)puVar44;
              }
              lVar25 = *(long *)plVar41[0x17];
              if (lVar25 == 0) break;
              if (*(int *)(lVar25 + 0x18) <= (int)uVar20) {
                return plVar41;
              }
              if ((int)plVar41[0x1c] == 0) {
                func_0x03280b8c();
                lVar25 = **(long **)(*(long *)puVar44 + 0xb8);
                if (lVar25 == 0) break;
              }
              uVar42 = func_0x0414419c(lVar25,uVar20,*(undefined8 *)puVar39);
              if (lVar33 == 0) break;
              (**(code **)(lVar33 + 0x18))
                        (*(undefined8 *)(lVar33 + 0x40),uVar42,*(undefined8 *)(lVar33 + 0x28));
              uVar20 = (ulong)((int)uVar20 + 1);
            }
            plVar41 = (long *)func_0x03280cac();
            puVar44 = PTR_DAT_0774e4e0;
            uStack_180 = uVar20;
            if ((bRam0000000007e2fb28 & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e4e0,0);
              bRam0000000007e2fb28 = 1;
            }
            if (*(int *)(*(long *)puVar44 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            return plVar41;
          }
          plVar41 = *(long **)PTR_DAT_077eba08;
          pplVar11 = (long **)&uStack_120;
          lVar25 = lStack_140;
          auVar8 = _auStack_130;
SUB_04145af8:
          lVar33 = auVar53._0_8_;
          pplVar11[0xfffffffffffffffc] = (long *)lVar25;
          *(undefined1 (*) [16])(pplVar11 + 0xfffffffffffffffe) = auVar8;
          uVar15 = func_0x03f898d4(*(undefined8 *)(lVar33 + 0x10),auVar53._8_8_,0,
                                   *(undefined4 *)(lVar33 + 0x18),
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(*(long *)(plVar41[4] + 0xc0) +
                                                                  0xd0) + 0x20) + 0xc0) + 0x158));
          if (-1 < (int)uVar15) {
            func_0x04145da4(lVar33,uVar15);
          }
          return (long *)(ulong)(~uVar15 >> 0x1f);
        }
        lVar33 = *(long *)(lVar25 + 0x10);
        lVar34 = *(long *)PTR_DAT_0776a610;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar33 == 0) goto LAB_069bab24;
        uVar15 = *(uint *)(lVar25 + 0x18);
        if (uVar15 < *(uint *)(lVar33 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar15 + 1;
          puVar19 = (ulong *)(lVar33 + (long)(int)uVar15 * 8 + 0x20);
          *puVar19 = (ulong)plStack_38;
          goto SUB_032809c4;
        }
        lVar33 = *(long *)(*(long *)(*(long *)(lVar34 + 0x20) + 0xc0) + 0x70);
        ppcVar10 = &pcStack_80;
        plVar41 = plStack_38;
        plVar16 = (long *)0x68095b8;
SUB_0414446c:
        *(long **)((long)ppcVar10 + -0x30) = plVar16;
        *(undefined8 **)((long)ppcVar10 + -0x20) = puVar21;
        *(long **)((long)ppcVar10 + -0x18) = plVar41;
        *(long *)((long)ppcVar10 + -0x10) = auVar51._0_8_;
        *(long *)((long)ppcVar10 + -8) = auVar51._8_8_;
        uVar4 = *(uint *)(lVar25 + 0x18);
        uVar15 = uVar4 + 1;
        lVar33 = *(long *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x78);
        func_0x04144aa0(lVar25,(ulong)uVar15);
        lVar34 = *(long *)(lVar25 + 0x10);
        *(uint *)(lVar25 + 0x18) = uVar15;
        if (lVar34 == 0) {
          func_0x03280cac();
        }
        else if (uVar4 < *(uint *)(lVar34 + 0x18)) {
          puVar19 = (ulong *)(lVar34 + (long)(int)uVar4 * 8 + 0x20);
          *puVar19 = (ulong)plStack_38;
          goto SUB_032809c4;
        }
        auVar52 = func_0x03280cb4();
        lVar18 = auVar52._8_8_;
        lVar34 = auVar52._0_8_;
        *(undefined8 *)((long)ppcVar10 + -0x60) = 0x41444d8;
        *(long *)((long)ppcVar10 + -0x50) = (long)(int)uVar4;
        *(ulong *)((long)ppcVar10 + -0x48) = (ulong)uVar15;
        *(long *)((long)ppcVar10 + -0x40) = lVar25;
        *(long **)((long)ppcVar10 + -0x38) = plStack_38;
        lVar32 = *(long *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x58);
        func_0x03ec2768(lVar18,0x14);
        lVar25 = *(long *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = func_0x0325681c(lVar25);
        }
        if (lVar18 == 0) {
LAB_0414454c:
          uVar20 = 0;
        }
        else {
          uVar20 = func_0x03280b90(lVar18,lVar25);
          if (uVar20 == 0) {
            func_0x03281048(lVar18,lVar25);
            goto LAB_0414454c;
          }
        }
        lVar25 = *(long *)(lVar34 + 0x10);
        lVar35 = *(long *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar34 + 0x1c) = *(int *)(lVar34 + 0x1c) + 1;
        if (lVar25 == 0) {
          auVar54 = func_0x03280cac();
          uVar42 = auVar54._0_8_;
          if (auVar54._8_4_ == 1) {
            puVar21 = (undefined8 *)func_0x072ce910(uVar42);
            uVar42 = func_0x03280a2c(PTR_DAT_077542c0);
            uVar20 = func_0x032810d8(uVar42,*(undefined8 *)*puVar21);
            if ((uVar20 & 1) != 0) {
              func_0x072ce920();
              uVar42 = *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x68);
              lVar25 = func_0x03280a2c(PTR_DAT_0774e558);
              if (*(int *)(lVar25 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              uVar42 = func_0x057a51c4(uVar42,0);
              func_0x057b7b18(lVar18,uVar42,0);
              goto LAB_041445ac;
            }
            puVar22 = (undefined8 *)func_0x072ce930(8);
            *puVar22 = *puVar21;
            lVar32 = 0;
            uVar42 = func_0x072ce940(puVar22,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__072d4d28
                                    );
            func_0x072ce920();
          }
          func_0x03365958(uVar42);
          auVar52 = func_0x02f09514();
          plVar40 = auVar52._8_8_;
          plVar16 = auVar52._0_8_;
          uVar15 = *(uint *)(plVar16 + 3);
          lVar25 = *(long *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x90);
          auVar8._8_8_ = plVar16;
          auVar8._0_8_ = lVar25;
          uVar20 = (ulong)uVar15;
          pplVar11 = (long **)((long)ppcVar10 + -0xa0);
          *(undefined8 *)((long)ppcVar10 + -0xa0) = 0x4144678;
          *(undefined8 *)((long)ppcVar10 + -0x98) = unaff_x25;
          *(undefined8 **)((long)ppcVar10 + -0x90) = unaff_x24;
          *(undefined **)((long)ppcVar10 + -0x88) = puVar44;
          *(undefined8 *)((long)ppcVar10 + -0x80) = uVar42;
          *(long *)((long)ppcVar10 + -0x78) = lVar33;
          *(long *)((long)ppcVar10 + -0x70) = lVar18;
          *(long *)((long)ppcVar10 + -0x68) = lVar34;
          plVar31 = (long *)0x7e18000;
          plVar41 = plVar40;
          if ((bRam0000000007e18233 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0774e8c8);
            func_0x03280a18(PTR_DAT_0774e8e0);
            bRam0000000007e18233 = 1;
          }
          if (plVar40 == (long *)0x0) {
            func_0x057a867c(6,0);
          }
          if (*(uint *)(plVar16 + 3) < uVar15) {
            func_0x057b8434(0);
          }
          lVar33 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x28);
          if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
            lVar33 = func_0x0325681c(lVar33);
          }
          plVar23 = (long *)func_0x03280b90(plVar40,lVar33);
          if (plVar23 == (long *)0x0) {
            if ((int)uVar15 < (int)plVar16[3]) {
              if (plVar40 == (long *)0x0) {
                func_0x03280cac();
              }
              else {
                lVar33 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x20);
                if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                  lVar33 = func_0x0325681c(lVar33);
                }
                lVar34 = *plVar40;
                uVar36 = (ulong)*(ushort *)(lVar34 + 0x12e);
                if (uVar36 != 0) {
                  piVar37 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar37 + -2) == lVar33) {
                      puVar21 = (undefined8 *)(lVar34 + (long)*piVar37 * 0x10 + 0x138);
                      goto LAB_04145868;
                    }
                    uVar36 = uVar36 - 1;
                    piVar37 = piVar37 + 4;
                  } while (uVar36 != 0);
                }
                plVar41 = (long *)0x0;
                puVar21 = (undefined8 *)func_0x03256b10(plVar40);
LAB_04145868:
                plVar31 = (long *)(*(code *)*puVar21)(plVar40,puVar21[1]);
                puVar44 = PTR_DAT_0774e8e0;
                if (plVar31 != (long *)0x0) {
                  do {
                    lVar33 = *plVar31;
                    uVar36 = (ulong)*(ushort *)(lVar33 + 0x12e);
                    if (uVar36 != 0) {
                      piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar37 + -2) == *(long *)puVar44) {
                          puVar21 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
                          goto LAB_041458d0;
                        }
                        uVar36 = uVar36 - 1;
                        piVar37 = piVar37 + 4;
                      } while (uVar36 != 0);
                    }
                    plVar41 = (long *)0x0;
                    puVar21 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041458d0:
                    plVar24 = (long *)(*(code *)*puVar21)(plVar31,puVar21[1]);
                    if (((ulong)plVar24 & 1) == 0) {
                      uVar20 = 0;
                      iVar14 = 5;
                      if (plVar31 == (long *)0x0) goto LAB_041459e8;
                      goto LAB_04145988;
                    }
                    lVar33 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x148);
                    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                      lVar33 = func_0x0325681c(lVar33);
                    }
                    lVar34 = *plVar31;
                    uVar36 = (ulong)*(ushort *)(lVar34 + 0x12e);
                    if (uVar36 != 0) {
                      piVar37 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar37 + -2) == lVar33) {
                          puVar21 = (undefined8 *)(lVar34 + (long)*piVar37 * 0x10 + 0x138);
                          goto LAB_04145948;
                        }
                        uVar36 = uVar36 - 1;
                        piVar37 = piVar37 + 4;
                      } while (uVar36 != 0);
                    }
                    puVar21 = (undefined8 *)func_0x03256b10(plVar31,lVar33,0);
LAB_04145948:
                    plVar41 = (long *)(*(code *)*puVar21)(plVar31,puVar21[1]);
                    func_0x04145380(plVar16,uVar20,plVar41,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x160));
                    uVar20 = (ulong)((int)uVar20 + 1);
                  } while( true );
                }
              }
              func_0x03280cac();
              do {
                auVar54 = func_0x03280ca4(uVar20);
                if (auVar54._8_4_ != 1) {
                  if (plVar31 == (long *)0x0) goto LAB_04145ae0;
                  lVar25 = *plVar31;
                  uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
                  if (uVar20 == 0) goto LAB_04145ab8;
                  piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  goto LAB_04145aa0;
                }
                puVar19 = (ulong *)func_0x072ce910(auVar54._0_8_);
                uVar20 = *puVar19;
                plVar24 = (long *)func_0x072ce920();
                iVar14 = 0;
                if (plVar31 != (long *)0x0) {
LAB_04145988:
                  lVar33 = *plVar31;
                  uVar36 = (ulong)*(ushort *)(lVar33 + 0x12e);
                  if (uVar36 != 0) {
                    piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar37 + -2) == *(long *)PTR_DAT_0774e8c8) {
                        puVar21 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
                        goto LAB_041459dc;
                      }
                      uVar36 = uVar36 - 1;
                      piVar37 = piVar37 + 4;
                    } while (uVar36 != 0);
                  }
                  plVar41 = (long *)0x0;
                  puVar21 = (undefined8 *)func_0x03256b10(plVar31);
LAB_041459dc:
                  plVar24 = (long *)(*(code *)*puVar21)(plVar31,puVar21[1]);
                }
LAB_041459e8:
              } while (uVar20 != 0);
              if (iVar14 == 5) goto LAB_04145a10;
              if (iVar14 != 0) {
                return plVar24;
              }
            }
            plVar24 = (long *)func_0x041462cc(plVar16,plVar40,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x40));
          }
          else {
            lVar33 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x28);
            if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
              lVar33 = func_0x0325681c(lVar33);
            }
            lVar34 = *plVar23;
            uVar20 = (ulong)*(ushort *)(lVar34 + 0x12e);
            if (uVar20 != 0) {
              piVar37 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
              do {
                if (*(long *)(piVar37 + -2) == lVar33) {
                  puVar21 = (undefined8 *)(lVar34 + (long)*piVar37 * 0x10 + 0x138);
                  goto LAB_04145728;
                }
                uVar20 = uVar20 - 1;
                piVar37 = piVar37 + 4;
              } while (uVar20 != 0);
            }
            puVar21 = (undefined8 *)func_0x03256b10(plVar23,lVar33,0);
LAB_04145728:
            plVar24 = (long *)(*(code *)*puVar21)(plVar23,puVar21[1]);
            iVar14 = (int)plVar24;
            if (0 < iVar14) {
              func_0x04144aa0(plVar16,(int)plVar16[3] + iVar14,
                              *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x78));
              iVar7 = (int)plVar16[3] - uVar15;
              if (iVar7 != 0 && (int)uVar15 <= (int)plVar16[3]) {
                func_0x057b9f30(plVar16[2],uVar15,plVar16[2],iVar14 + uVar15,iVar7,0);
              }
              if (plVar16 == plVar23) {
                func_0x057b9f30(plVar16[2],0,plVar16[2],uVar15,uVar15,0);
                plVar24 = (long *)func_0x057b9f30(plVar16[2],iVar14 + uVar15,plVar16[2],uVar15 << 1,
                                                  (int)plVar16[3] - uVar15,0);
              }
              else {
                lVar33 = plVar16[2];
                lVar25 = *(long *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x28);
                if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                  lVar25 = func_0x0325681c(lVar25);
                }
                lVar34 = *plVar23;
                uVar20 = (ulong)*(ushort *)(lVar34 + 0x12e);
                if (uVar20 != 0) {
                  piVar37 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar37 + -2) == lVar25) {
                      puVar21 = (undefined8 *)(lVar34 + (long)(*piVar37 + 5) * 0x10 + 0x138);
                      goto LAB_04145838;
                    }
                    uVar20 = uVar20 - 1;
                    piVar37 = piVar37 + 4;
                  } while (uVar20 != 0);
                }
                puVar21 = (undefined8 *)func_0x03256b10(plVar23,lVar25,5);
LAB_04145838:
                plVar24 = (long *)(*(code *)*puVar21)(plVar23,lVar33,uVar15,puVar21[1]);
              }
              *(int *)(plVar16 + 3) = (int)plVar16[3] + iVar14;
            }
          }
LAB_04145a10:
          *(int *)((long)plVar16 + 0x1c) = *(int *)((long)plVar16 + 0x1c) + 1;
          return plVar24;
        }
        uVar15 = *(uint *)(lVar34 + 0x18);
        if (*(uint *)(lVar25 + 0x18) <= uVar15) {
          func_0x0414446c(lVar34,uVar20,
                          *(undefined8 *)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
LAB_041445ac:
          return (long *)(ulong)(*(int *)(lVar34 + 0x18) - 1);
        }
        *(uint *)(lVar34 + 0x18) = uVar15 + 1;
        puVar19 = (ulong *)(lVar25 + (long)(int)uVar15 * 8 + 0x20);
        *puVar19 = uVar20;
        goto SUB_032809c4;
      }
    }
    auVar51 = func_0x03280cac();
    lVar25 = auVar51._8_8_;
    pcVar55 = auVar51._0_8_;
    pcVar26 = pcVar55;
    if ((bRam0000000007e287c7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777db28);
      func_0x03280a18(PTR_DAT_0777db38);
      func_0x03280a18(PTR_DAT_0780c6e8);
      pcVar26 = (code *)func_0x03280a18(PTR_DAT_0780c660);
      bRam0000000007e287c7 = 1;
    }
    if (lVar25 != 0) {
      if (*(int *)(lVar25 + 0x14) != 1) {
        return (long *)pcVar26;
      }
      if ((*(long *)(pcVar55 + 0x58) != 0) &&
         (lVar33 = func_0x0414419c(*(long *)(pcVar55 + 0x58),*(undefined4 *)(lVar25 + 0x10),
                                   *(undefined8 *)PTR_DAT_0780c6e8), lVar33 != 0)) {
        uVar42 = func_0x069aaf28(lVar33,0);
        plVar41 = *(long **)(pcVar55 + 0x28);
        uVar3 = *(undefined4 *)(lVar25 + 0x18);
        lVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777db38);
        func_0x0686b2ac(lVar25,uVar42,uVar3,0,0,0,0);
        pcVar55 = (code *)0x0;
        if (plVar41 != (long *)0x0) {
          lVar34 = *(long *)PTR_DAT_0777db28;
          plVar16 = plVar41;
          lVar33 = lVar34;
          if (*(long *)(lVar34 + 0x38) == 0) {
            plVar16 = (long *)func_0x03256878(lVar34);
          }
          if ((char)plVar41[3] != '\0') {
            return plVar16;
          }
          plVar41 = (long *)plVar41[4];
          if (plVar41 != (long *)0x0) {
            lVar33 = *(long *)(*(long *)(lVar34 + 0x38) + 8);
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            unaff_x30 = 
            Merger_Game_Views_Inventory_InventoryProducerView__FailedToRemoveItemFromInventorySignalFired
            ;
            unaff_x21 = 0x7e28000;
            goto SUB_03ea4d6c;
          }
          auVar47 = func_0x03280cac();
          pppppppuVar29 = auVar47._8_8_;
          uVar20 = auVar47._0_8_;
          lVar25 = tpidr_el0;
          plStack_a8 = *(long **)(lVar25 + 0x28);
          plVar41 = *(long **)(lVar33 + 0x38);
          if (plVar41 == (long *)0x0) {
            pppppppuStack_b8 = pppppppuVar29;
            uVar42 = func_0x03256878(lVar33);
            auVar47._8_8_ = pppppppuStack_b8;
            auVar47._0_8_ = uVar42;
            plVar41 = *(long **)(lVar33 + 0x38);
          }
          pppppppuStack_b8 = auVar47._8_8_;
          uVar36 = (ulong)*(uint *)(*plVar41 + 0xfc);
          lVar33 = -(uVar36 + 0xf & 0x1fffffff0);
          plVar16 = (long *)((long)&lStack_c0 + lVar33);
          if (*(char *)(uVar20 + 0x18) == '\0') {
            uVar20 = *(ulong *)(uVar20 + 0x20);
            pppppppuVar2 = pppppppuVar29;
            if (-1 < *(int *)(*plVar41 + 0x28)) {
              pppppppuVar2 = &pppppppuStack_b8;
            }
            func_0x072ce970(plVar16,pppppppuVar2);
            if (uVar20 != 0) {
              puVar21 = (undefined8 *)plVar41[1];
              if (-1 < *(int *)(*plVar41 + 0x28)) {
                plVar16 = (long *)*plVar16;
              }
              uVar36 = uVar20;
              plStack_b0 = plVar16;
              uVar42 = (*(code *)puVar21[2])(*puVar21,puVar21,uVar20,&plStack_b0,plVar16);
              auVar47._8_8_ = pppppppuStack_b8;
              auVar47._0_8_ = uVar42;
              goto LAB_03cc6ce8;
            }
            func_0x03280cac();
          }
          else {
LAB_03cc6ce8:
            pppppppuStack_b8 = auVar47._8_8_;
            if (*(long **)(lVar25 + 0x28) == plStack_a8) {
              return auVar47._0_8_;
            }
          }
          auVar52 = func_0x072ce990();
          plVar31 = auVar52._0_8_;
          *(undefined8 *)((long)aplStack_e8 + lVar33 + 8U) = 0x3cc6d18;
          *(ulong *)((long)&uStack_d8 + lVar33) = uVar20;
          *(undefined8 ********)(auStack_d0 + lVar33) = pppppppuVar29;
          *(long **)(auStack_d0 + lVar33 + 8) = plVar16;
          plVar16 = plVar31;
          uVar20 = uVar36;
          if (*(long *)(uVar36 + 0x38) == 0) {
            plVar16 = (long *)func_0x03256878(uVar36);
          }
          if ((char)plVar31[3] != '\0') {
            return plVar16;
          }
          plVar16 = (long *)plVar31[2];
          if (plVar16 != (long *)0x0) {
            lVar25 = *plVar16;
            lVar33 = *(long *)(*(long *)(uVar36 + 0x38) + 8);
            uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar20 != 0) {
              piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar37 + -2) == *(long *)(lVar33 + 0x20)) {
                  lVar25 = lVar25 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar33 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03cc6db0;
                }
                uVar20 = uVar20 - 1;
                piVar37 = piVar37 + 4;
              } while (uVar20 != 0);
            }
            lVar25 = func_0x03256b10(plVar16);
LAB_03cc6db0:
            lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar33);
                    /* WARNING: Could not recover jumptable at 0x03cc6dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar41 = (long *)(**(code **)(lVar25 + 8))(plVar16,auVar52._8_8_,lVar25);
            return plVar41;
          }
          auVar48 = func_0x03280cac();
          lVar34 = auVar48._8_8_;
          plVar31 = auVar48._0_8_;
          *(undefined1 **)((long)&uStack_120 + lVar33) = &stack0xffffffffffffff60;
          *(undefined8 *)((long)&plStack_118 + lVar33) = 0x3cc6ddc;
          *(long **)(auStack_110 + lVar33) = plVar41;
          *(long *)((long)alStack_100 + lVar33) = lVar25;
          *(ulong *)((long)alStack_100 + lVar33 + 8) = uVar36;
          *(undefined8 *)(auStack_f0 + lVar33) = 0;
          *(long *)((long)aplStack_e8 + lVar33) = auVar52._8_8_;
          plVar16 = (long *)tpidr_el0;
          *(long *)((long)&plStack_128 + lVar33) = plVar16[5];
          *(long *)((long)&lStack_138 + lVar33) = lVar34;
          unaff_x23 = *(long **)(uVar20 + 0x38);
          plVar41 = plVar31;
          if (unaff_x23 == (long *)0x0) {
            plVar41 = (long *)func_0x03256878(uVar20);
            unaff_x23 = *(long **)(uVar20 + 0x38);
          }
          plVar23 = (long *)(ulong)*(uint *)(*unaff_x23 + 0xfc);
          plVar38 = (long *)((long)&lStack_140 + (lVar33 - ((long)plVar23 + 0xfU & 0x1fffffff0)));
          plVar40 = plVar23;
          plVar24 = plVar38;
          if ((char)plVar31[3] == '\0') {
            plVar40 = (long *)plVar31[2];
            auVar48._8_8_ = lVar34;
            auVar48._0_8_ = plVar40;
            if (-1 < *(int *)(*unaff_x23 + 0x28)) {
              lVar34 = (long)&lStack_138 + lVar33;
            }
            func_0x072ce970(plVar38,lVar34);
            if (plVar40 != (long *)0x0) {
              lVar25 = unaff_x23[1];
              auVar48._8_8_ = lVar25;
              if (-1 < *(int *)(*unaff_x23 + 0x28)) {
                plVar24 = (long *)*plVar38;
              }
              lVar34 = *plVar40;
              uVar20 = (ulong)*(ushort *)(lVar34 + 0x12e);
              if (uVar20 != 0) {
                piVar37 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar37 + -2) == *(long *)(lVar25 + 0x20)) {
                    lVar34 = lVar34 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar25 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03cc6ec8;
                  }
                  uVar20 = uVar20 - 1;
                  piVar37 = piVar37 + 4;
                } while (uVar20 != 0);
              }
              lVar34 = func_0x03256b10(plVar40);
LAB_03cc6ec8:
              lVar25 = func_0x03280b88(*(undefined8 *)(lVar34 + 8),lVar25);
              *(long **)(auStack_130 + lVar33) = plVar24;
              plVar41 = (long *)(**(code **)(lVar25 + 0x10))
                                          (*(undefined8 *)(lVar25 + 8),lVar25,plVar40,
                                           auStack_130 + lVar33,plVar24);
              goto LAB_03cc6ef0;
            }
            func_0x03280cac();
          }
          else {
LAB_03cc6ef0:
            plVar23 = plVar40;
            if (plVar16[5] == *(long *)((long)&plStack_128 + lVar33)) {
              return plVar41;
            }
          }
          auVar52 = func_0x072ce990();
          plVar40 = auVar52._0_8_;
          plVar38[-4] = 0x3cc6f20;
          plVar38[-3] = auVar48._8_8_;
          plVar38[-2] = auVar48._0_8_;
          plVar38[-1] = (long)plVar24;
          plVar41 = plVar40;
          plVar31 = plVar23;
          if (plVar23[7] == 0) {
            plVar41 = (long *)func_0x03256878(plVar23);
          }
          if ((char)plVar40[3] != '\0') {
            return plVar41;
          }
          plVar41 = (long *)plVar40[2];
          if (plVar41 != (long *)0x0) {
            lVar25 = *plVar41;
            lVar33 = *(long *)(plVar23[7] + 8);
            uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar20 != 0) {
              piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar37 + -2) == *(long *)(lVar33 + 0x20)) {
                  lVar25 = lVar25 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar33 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03cc6fb8;
                }
                uVar20 = uVar20 - 1;
                piVar37 = piVar37 + 4;
              } while (uVar20 != 0);
            }
            lVar25 = func_0x03256b10(plVar41);
LAB_03cc6fb8:
            lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar33);
                    /* WARNING: Could not recover jumptable at 0x03cc6fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar41 = (long *)(**(code **)(lVar25 + 8))(plVar41,auVar52._8_8_,lVar25);
            return plVar41;
          }
          auVar51 = func_0x03280cac();
          plVar24 = auVar51._0_8_;
          plVar38[-8] = 0x3cc6fe4;
          plVar38[-7] = (long)plVar23;
          plVar38[-6] = 0;
          plVar38[-5] = auVar52._8_8_;
          plVar41 = plVar24;
          plVar40 = plVar31;
          if (plVar31[7] == 0) {
            plVar41 = (long *)func_0x03256878(plVar31);
          }
          if ((char)plVar24[3] != '\0') {
            return plVar41;
          }
          plVar41 = (long *)plVar24[2];
          if (plVar41 != (long *)0x0) {
            lVar25 = *plVar41;
            lVar33 = *(long *)(plVar31[7] + 8);
            uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar20 != 0) {
              piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar37 + -2) == *(long *)(lVar33 + 0x20)) {
                  lVar25 = lVar25 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar33 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03cc707c;
                }
                uVar20 = uVar20 - 1;
                piVar37 = piVar37 + 4;
              } while (uVar20 != 0);
            }
            lVar25 = func_0x03256b10(plVar41);
LAB_03cc707c:
            lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar33);
                    /* WARNING: Could not recover jumptable at 0x03cc70a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar41 = (long *)(**(code **)(lVar25 + 8))(plVar41,auVar51._8_8_,lVar25);
            return plVar41;
          }
          auVar52 = func_0x03280cac();
          plVar23 = auVar52._0_8_;
          plVar38[-0xc] = 0x3cc70a8;
          plVar38[-0xb] = (long)plVar31;
          plVar38[-10] = 0;
          plVar38[-9] = auVar51._8_8_;
          plVar41 = plVar23;
          plVar31 = plVar40;
          if (plVar40[7] == 0) {
            plVar41 = (long *)func_0x03256878(plVar40);
          }
          if ((char)plVar23[3] != '\0') {
            return plVar41;
          }
          auVar49._8_8_ = auVar52._8_8_;
          auVar49._0_8_ = plVar23[4];
          if (plVar23[4] != 0) {
            lVar33 = plVar38[-10];
            plVar31 = (long *)plVar38[-9];
            plVar40 = *(long **)(plVar40[7] + 8);
            plVar41 = plVar38 + -8;
            uVar42 = plVar38[-0xc];
            lVar34 = plVar38[-0xb];
            goto SUB_03ea5304;
          }
          auVar51 = func_0x03280cac();
          uVar20 = auVar51._8_8_;
          plVar24 = auVar51._0_8_;
          plVar38[-0x10] = 0x3cc7104;
          plVar38[-0xf] = (long)plVar23;
          plVar38[-0xe] = (long)plVar40;
          plVar38[-0xd] = auVar52._8_8_;
          plVar41 = plVar24;
          plVar40 = plVar31;
          if (plVar31[7] == 0) {
            plVar41 = (long *)func_0x03256878(plVar31);
          }
          if ((char)plVar24[3] != '\0') {
            return plVar41;
          }
          uVar36 = plVar24[4];
          if (uVar36 == 0) {
            auVar52 = func_0x03280cac();
            plVar23 = auVar52._0_8_;
            plVar38[-0x14] = 0x3cc7160;
            plVar38[-0x13] = (long)plVar24;
            plVar38[-0x12] = (long)plVar31;
            plVar38[-0x11] = uVar20;
            plVar41 = plVar23;
            plVar31 = plVar40;
            if (plVar40[7] == 0) {
              plVar41 = (long *)func_0x03256878(plVar40);
            }
            if ((char)plVar23[3] != '\0') {
              return plVar41;
            }
            if (plVar23[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cc71b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar41 = (long *)(*(code *)**(undefined8 **)(plVar40[7] + 8))
                                          (plVar23[4],auVar52._8_8_);
              return plVar41;
            }
            auVar51 = func_0x03280cac();
            plVar24 = auVar51._0_8_;
            plVar38[-0x18] = 0x3cc71c0;
            plVar38[-0x17] = (long)plVar23;
            plVar38[-0x16] = (long)plVar40;
            plVar38[-0x15] = auVar52._8_8_;
            plVar41 = plVar24;
            plVar40 = plVar31;
            if (plVar31[7] == 0) {
              plVar41 = (long *)func_0x03256878(plVar31);
            }
            if ((char)plVar24[3] != '\0') {
              return plVar41;
            }
            if (plVar24[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cc7218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar41 = (long *)(*(code *)**(undefined8 **)plVar31[7])(plVar24[4],auVar51._8_8_);
              return plVar41;
            }
            auVar52 = func_0x03280cac();
            lVar25 = auVar52._8_8_;
            plVar23 = auVar52._0_8_;
            plVar38[-0x1c] = 0x3cc7220;
            plVar38[-0x1b] = (long)plVar24;
            plVar38[-0x1a] = (long)plVar31;
            plVar38[-0x19] = auVar51._8_8_;
            plVar41 = plVar23;
            plVar31 = plVar40;
            if (plVar40[7] == 0) {
              plVar41 = (long *)func_0x03256878(plVar40);
            }
            if ((char)plVar23[3] != '\0') {
              return plVar41;
            }
            plVar41 = (long *)plVar23[4];
            if (plVar41 == (long *)0x0) {
              auVar52 = func_0x03280cac();
              plVar30 = auVar52._8_8_;
              plVar24 = auVar52._0_8_;
              plVar38[-0x24] = (long)&uStack_120 + lVar33;
              plVar38[-0x23] = 0x3cc727c;
              plVar38[-0x22] = (long)unaff_x23;
              plVar38[-0x20] = (long)plVar16;
              plVar38[-0x1f] = (long)plVar23;
              plVar38[-0x1e] = (long)plVar40;
              plVar38[-0x1d] = lVar25;
              lVar25 = tpidr_el0;
              plVar38[-0x25] = *(long *)(lVar25 + 0x28);
              plVar38[-0x27] = (long)plVar30;
              plVar16 = (long *)plVar31[7];
              plVar41 = plVar24;
              if (plVar16 == (long *)0x0) {
                plVar41 = (long *)func_0x03256878(plVar31);
                plVar16 = (long *)plVar31[7];
              }
              plVar31 = (long *)(ulong)*(uint *)(*plVar16 + 0xfc);
              plVar23 = (long *)((long)plVar38 + (-0x140 - ((long)plVar31 + 0xfU & 0x1fffffff0)));
              plVar40 = plVar23;
              if ((char)plVar24[3] == '\0') {
                plVar24 = (long *)plVar24[4];
                plVar41 = plVar30;
                if (-1 < *(int *)(*plVar16 + 0x28)) {
                  plVar41 = plVar38 + -0x27;
                }
                func_0x072ce970(plVar23,plVar41);
                if (plVar24 == (long *)0x0) {
                  func_0x03280cac();
                  goto LAB_03cc7360;
                }
                puVar21 = (undefined8 *)plVar16[1];
                uVar42 = *puVar21;
                if (-1 < *(int *)(*plVar16 + 0x28)) {
                  plVar40 = (long *)*plVar23;
                }
                plVar38[-0x26] = (long)plVar40;
                plVar31 = plVar24;
                plVar41 = (long *)(*(code *)puVar21[2])
                                            (uVar42,puVar21,plVar24,plVar38 + -0x26,plVar40);
              }
              if (*(long *)(lVar25 + 0x28) == plVar38[-0x25]) {
                return plVar41;
              }
LAB_03cc7360:
              auVar52 = func_0x072ce990();
              plVar23[-4] = 0x3cc7364;
              plVar23[-3] = (long)plVar24;
              plVar23[-2] = (long)plVar30;
              plVar23[-1] = (long)plVar40;
              plVar41 = plVar31;
              if (plVar31[7] == 0) {
                func_0x03256878(plVar31);
              }
              plVar16 = *(long **)(auVar52._0_8_ + 0x10);
              if (plVar16 == (long *)0x0) {
                auVar51 = func_0x03280cac();
                plVar23[-8] = 0x3cc7414;
                plVar23[-7] = (long)plVar31;
                plVar23[-6] = 0;
                plVar23[-5] = auVar52._8_8_;
                plVar16 = plVar41;
                if (plVar41[7] == 0) {
                  func_0x03256878(plVar41);
                }
                plVar31 = *(long **)(auVar51._0_8_ + 0x10);
                if (plVar31 == (long *)0x0) {
                  auVar52 = func_0x03280cac();
                  plVar23[-0xc] = 0x3cc74c4;
                  plVar23[-0xb] = (long)plVar41;
                  plVar23[-10] = 0;
                  plVar23[-9] = auVar51._8_8_;
                  if (plVar16[7] == 0) {
                    func_0x03256878(plVar16);
                  }
                  lVar33 = *(long *)(auVar52._0_8_ + 0x20);
                  if (lVar33 == 0) {
                    return (long *)0x0;
                  }
                  lVar34 = *(long *)(plVar16[7] + 8);
                  plVar23[-0xc] = plVar23[-0xc];
                  plVar23[-0xb] = plVar23[-0xb];
                  plVar23[-10] = plVar23[-10];
                  plVar23[-9] = plVar23[-9];
                  lVar18 = *(long *)(lVar34 + 0x38);
                  if (lVar18 == 0) {
                    func_0x03256878(lVar34);
                    lVar18 = *(long *)(lVar34 + 0x38);
                  }
                  lVar34 = *(long *)(lVar18 + 8);
                  plVar23[-0xe] = plVar23[-0xc];
                  plVar23[-0xc] = lVar25;
                  plVar23[-0xb] = plVar23[-0xb];
                  plVar23[-10] = plVar23[-10];
                  plVar23[-9] = plVar23[-9];
                  puVar21 = *(undefined8 **)(lVar34 + 0x38);
                  if (puVar21 == (undefined8 *)0x0) {
                    func_0x03280a18(PTR_DAT_0774e558);
                    puVar21 = *(undefined8 **)(lVar34 + 0x38);
                    if (puVar21 == (undefined8 *)0x0) {
                      func_0x03256878(lVar34);
                      puVar21 = *(undefined8 **)(lVar34 + 0x38);
                    }
                  }
                  uVar42 = *puVar21;
                  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
                    func_0x03280b8c();
                  }
                  uVar42 = func_0x057a51c4(uVar42,0);
                  plVar23[-0xc] = plVar23[-0xe];
                  plVar23[-0xb] = plVar23[-0xb];
                  plVar23[-10] = plVar23[-10];
                  plVar23[-9] = plVar23[-9];
                  plVar23[-0xe] = 0;
                  plVar23[-0xd] = 0;
                  func_0x072a6c4c(plVar23 + -0xe,uVar42,0,0,0,0);
                  plVar41 = (long *)func_0x07286e40(lVar33,plVar23[-0xe],plVar23[-0xd],auVar52._8_8_
                                                    ,0);
                  return plVar41;
                }
                lVar25 = *plVar31;
                lVar33 = *(long *)(plVar41[7] + 8);
                uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar20 != 0) {
                  piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar37 + -2) == *(long *)(lVar33 + 0x20)) {
                      lVar25 = lVar25 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar33 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_03cc7498;
                    }
                    uVar20 = uVar20 - 1;
                    piVar37 = piVar37 + 4;
                  } while (uVar20 != 0);
                }
                lVar25 = func_0x03256b10(plVar31);
LAB_03cc7498:
                lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar33);
                    /* WARNING: Could not recover jumptable at 0x03cc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar41 = (long *)(**(code **)(lVar25 + 8))(plVar31,auVar51._8_8_,lVar25);
                return plVar41;
              }
              lVar25 = *plVar16;
              lVar33 = *(long *)(plVar31[7] + 8);
              uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar20 != 0) {
                piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar37 + -2) == *(long *)(lVar33 + 0x20)) {
                    lVar25 = lVar25 + (long)(int)(*piVar37 + (uint)*(ushort *)(lVar33 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03cc73e8;
                  }
                  uVar20 = uVar20 - 1;
                  piVar37 = piVar37 + 4;
                } while (uVar20 != 0);
              }
              lVar25 = func_0x03256b10(plVar16);
LAB_03cc73e8:
              lVar25 = func_0x03280b88(*(undefined8 *)(lVar25 + 8),lVar33);
                    /* WARNING: Could not recover jumptable at 0x03cc740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar41 = (long *)(**(code **)(lVar25 + 8))(plVar16,auVar52._8_8_,lVar25);
              return plVar41;
            }
            lVar33 = *(long *)(plVar40[7] + 8);
            plVar38[-0x1c] = plVar38[-0x1c];
            plVar38[-0x1b] = plVar38[-0x1b];
            plVar38[-0x1a] = plVar38[-0x1a];
            plVar38[-0x19] = plVar38[-0x19];
            lVar34 = *(long *)(lVar33 + 0x38);
            if (lVar34 == 0) {
              func_0x03256878(lVar33);
              lVar34 = *(long *)(lVar33 + 0x38);
            }
            lVar33 = *(long *)(lVar34 + 8);
            plVar38[-0x1e] = plVar38[-0x1c];
            plVar38[-0x1c] = (long)plVar16;
            plVar38[-0x1b] = plVar38[-0x1b];
            plVar38[-0x1a] = plVar38[-0x1a];
            plVar38[-0x19] = plVar38[-0x19];
            plVar16 = plVar41;
            if ((*(long *)(lVar33 + 0x38) == 0) &&
               (plVar16 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar33 + 0x38) == 0))
            {
              plVar16 = (long *)func_0x03256878(lVar33);
            }
            if ((char)plVar41[10] != '\0') {
              return plVar16;
            }
            uVar42 = **(undefined8 **)(lVar33 + 0x38);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar42 = func_0x057a51c4(uVar42,0);
            lVar34 = func_0x072869d0(plVar41,uVar42,0,0,0);
            if (lVar34 == 0) {
              return (long *)0x0;
            }
            lVar33 = plVar38[-0x1a];
            plVar31 = (long *)plVar38[-0x19];
            plVar16 = (long *)plVar38[-0x1c];
            lVar18 = plVar38[-0x1b];
            plVar41 = plVar38 + -0x18;
            uVar42 = plVar38[-0x1e];
            goto SUB_072852e4;
          }
          lVar25 = *(long *)plVar31[7];
          plVar38[-0x10] = plVar38[-0x10];
          plVar38[-0xf] = plVar38[-0xf];
          plVar38[-0xe] = plVar38[-0xe];
          plVar38[-0xd] = plVar38[-0xd];
          plVar41 = *(long **)(lVar25 + 0x38);
          if (plVar41 == (long *)0x0) {
            func_0x03256878(lVar25);
            plVar41 = *(long **)(lVar25 + 0x38);
          }
          lVar34 = *plVar41;
          auVar49._8_8_ = plVar16;
          auVar49._0_8_ = plVar38[-0xe];
          lVar25 = plVar38[-0xd];
          auVar50._8_8_ = 0;
          auVar50._0_8_ = uVar36;
          plVar9 = plVar38 + -0xc;
          uVar42 = plVar38[-0x10];
          lVar33 = plVar38[-0xf];
          goto LAB_03ea5530;
        }
      }
    }
    lVar25 = func_0x03280cac();
    puVar39 = PTR_DAT_0780c6f8;
    puVar44 = PTR_DAT_0780c6f0;
    pcStack_80 = pcVar55;
    if ((bRam0000000007e287c8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780c700);
      func_0x03280a18(PTR_DAT_0780c6f8);
      func_0x03280a18(PTR_DAT_0780c6f0);
      bRam0000000007e287c8 = 1;
    }
    *(undefined4 *)(lVar25 + 0x50) = 3;
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar44);
    func_0x04143c38(uVar20,*(undefined8 *)puVar39);
    puVar19 = (ulong *)(lVar25 + 0x58);
    *puVar19 = uVar20;
    goto SUB_032809c4;
  }
  if ((bRam0000000007e27e3c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806998,param_2,0);
    func_0x03280a18(PTR_DAT_07806990);
    bRam0000000007e27e3c = 1;
  }
  plVar41 = *(long **)(lVar25 + 0x20);
  lVar25 = func_0x03280ca0(*(undefined8 *)puVar44);
  func_0x060f4108(lVar25,param_2,1,0);
  if (plVar41 == (long *)0x0) {
    auVar52 = func_0x03280cac();
    if ((bRam0000000007e27e3d & 1) == 0) {
      func_0x03280a18(PTR_DAT_07806898);
      bRam0000000007e27e3d = 1;
    }
    plVar41 = *(long **)(auVar52._0_8_ + 0xd0);
    if (plVar41 != (long *)0x0) {
      lVar25 = *plVar41;
      uVar20 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar20 != 0) {
        piVar37 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == *(long *)PTR_DAT_07806898) {
            puVar21 = (undefined8 *)(lVar25 + (long)(*piVar37 + 6) * 0x10 + 0x138);
            goto LAB_0672bf58;
          }
          uVar20 = uVar20 - 1;
          piVar37 = piVar37 + 4;
        } while (uVar20 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar41,*(long *)PTR_DAT_07806898,6);
LAB_0672bf58:
                    /* WARNING: Could not recover jumptable at 0x0672bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar41 = (long *)(*(code *)*puVar21)(plVar41,auVar52._8_8_ & 0xffffffff,1,puVar21[1]);
      return plVar41;
    }
    lVar25 = func_0x03280cac();
    puVar39 = PTR_DAT_07828a38;
    puVar44 = PTR_DAT_07828a30;
    pcStack_80 = (code *)0x672bf78;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar44);
    func_0x053bfe40(uVar20,*(undefined8 *)puVar39);
    puVar19 = (ulong *)(lVar25 + 0x60);
    *puVar19 = uVar20;
    goto SUB_032809c4;
  }
  lVar33 = *(long *)PTR_DAT_07806998;
SUB_03ea4d6c:
  *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x10) = auVar52;
  lVar34 = *(long *)(lVar33 + 0x38);
  if (lVar34 == 0) {
    func_0x03256878(lVar33);
    lVar34 = *(long *)(lVar33 + 0x38);
  }
  lVar33 = *(long *)(lVar34 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  plVar16 = plVar41;
  if ((*(long *)(lVar33 + 0x38) == 0) &&
     (plVar16 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar33 + 0x38) == 0)) {
    plVar16 = (long *)func_0x03256878(lVar33);
  }
  if ((char)plVar41[10] != '\0') {
    return plVar16;
  }
  uVar42 = **(undefined8 **)(lVar33 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar17 = func_0x057a51c4(uVar42,0);
  lVar33 = 1;
  plVar31 = (long *)0x0;
  lVar34 = func_0x072869d0(plVar41,uVar17,0,1,0);
  if (lVar34 == 0) {
    auVar52 = func_0x03280cac();
    lVar34 = auVar52._8_8_;
    plVar16 = auVar52._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3ea51c0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar42;
    *(long **)((long)register0x00000008 + -0x48) = plVar41;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(long *)((long)register0x00000008 + -0x38) = lVar25;
    lVar25 = tpidr_el0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar25 + 0x28);
    *(long **)((long)register0x00000008 + -0x90) = plVar31;
    puVar21 = *(undefined8 **)(lVar33 + 0x38);
    plVar23 = plVar16;
    plVar40 = plVar31;
    if (puVar21 == (undefined8 *)0x0) {
      plVar23 = (long *)func_0x03280a18(PTR_DAT_0774e558);
      puVar21 = *(undefined8 **)(lVar33 + 0x38);
      if (puVar21 == (undefined8 *)0x0) {
        plVar23 = (long *)func_0x03256878(lVar33);
        puVar21 = *(undefined8 **)(lVar33 + 0x38);
      }
    }
    unaff_x23 = (long *)(ulong)*(uint *)(puVar21[1] + 0xfc);
    plVar41 = (long *)((long)register0x00000008 + (-0x90 - ((long)unaff_x23 + 0xfU & 0x1fffffff0)));
    unaff_x24 = plVar41;
    if ((char)plVar16[10] == '\0') {
      unaff_x25 = *puVar21;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar42 = func_0x057a51c4(unaff_x25,0);
      lVar34 = func_0x072869d0(plVar16,uVar42,lVar34,1,0);
      lVar33 = *(long *)(lVar33 + 0x38);
      plVar23 = plVar31;
      if (-1 < *(int *)(*(long *)(lVar33 + 8) + 0x28)) {
        plVar23 = (long *)((long)register0x00000008 + -0x90);
      }
      plVar40 = unaff_x23;
      func_0x072ce970(plVar41,plVar23);
      lVar25 = func_0x03280b94(*(undefined8 *)(lVar33 + 8),plVar41);
      if (lVar34 != 0) {
        uVar42 = 0x3ea52d0;
        lVar18 = lVar34;
        goto SUB_072852e4;
      }
      func_0x03280cac();
      lVar34 = 0;
    }
    else if (*(long *)(lVar25 + 0x28) == *(long *)((long)register0x00000008 + -0x88)) {
      return plVar23;
    }
    uVar42 = 0x3ea5304;
    auVar49 = func_0x072ce990();
SUB_03ea5304:
    uVar36 = auVar49._8_8_;
    plVar41[-4] = uVar42;
    plVar41[-3] = lVar34;
    plVar41[-2] = lVar33;
    plVar41[-1] = (long)plVar31;
    lVar25 = plVar40[7];
    if (lVar25 == 0) {
      func_0x03256878(plVar40);
      lVar25 = plVar40[7];
    }
    lVar33 = *(long *)(lVar25 + 8);
    plVar9 = plVar41 + -8;
    plVar41[-8] = plVar41[-4];
    plVar41[-6] = (long)unaff_x24;
    plVar41[-5] = (long)unaff_x23;
    plVar41[-4] = (long)plVar16;
    plVar41[-3] = plVar41[-3];
    plVar41[-2] = plVar41[-2];
    plVar41[-1] = plVar41[-1];
    plVar41 = *(long **)(lVar33 + 0x38);
    lVar25 = 0;
    uVar20 = uVar36;
    lVar34 = lVar33;
    if (plVar41 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar41 = *(long **)(lVar33 + 0x38);
      if (plVar41 == (long *)0x0) {
        func_0x03256878(lVar33);
        plVar41 = *(long **)(lVar33 + 0x38);
      }
    }
    if ((*(byte *)(*plVar41 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x04053df4(lVar18,*(undefined8 *)(*(long *)(lVar33 + 0x38) + 8));
    if (lVar18 != 0) {
      puVar19 = (ulong *)(lVar18 + 0x10);
      *puVar19 = uVar36;
      goto SUB_032809c4;
    }
    uVar42 = 0x3ea5530;
    auVar50 = func_0x03280cac();
    unaff_x24 = (undefined8 *)0x0;
LAB_03ea5530:
    *(undefined8 *)((long)plVar9 + -0x40) = uVar42;
    *(undefined8 **)((long)plVar9 + -0x30) = unaff_x24;
    *(long **)((long)plVar9 + -0x28) = unaff_x23;
    *(long *)((long)plVar9 + -0x20) = auVar49._8_8_;
    *(long *)((long)plVar9 + -0x18) = lVar33;
    *(long *)((long)plVar9 + -0x10) = auVar49._0_8_;
    *(long *)((long)plVar9 + -8) = lVar25;
    plVar41 = *(long **)(lVar34 + 0x38);
    uVar36 = uVar20;
    lVar25 = lVar34;
    if (plVar41 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar41 = *(long **)(lVar34 + 0x38);
      if (plVar41 == (long *)0x0) {
        func_0x03256878(lVar34);
        plVar41 = *(long **)(lVar34 + 0x38);
      }
    }
    if ((*(byte *)(*plVar41 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar33 = func_0x03280ca0();
    func_0x0404e308(lVar33,*(undefined8 *)(*(long *)(lVar34 + 0x38) + 8));
    if (lVar33 != 0) {
      puVar19 = (ulong *)(lVar33 + 0x10);
      *puVar19 = uVar20;
      goto SUB_032809c4;
    }
    auVar52 = func_0x03280cac();
    *(undefined8 *)((long)plVar9 + -0x80) = 0x3ea5644;
    *(undefined8 *)((long)plVar9 + -0x70) = 0;
    *(long **)((long)plVar9 + -0x68) = unaff_x23;
    *(ulong *)((long)plVar9 + -0x60) = uVar20;
    *(long *)((long)plVar9 + -0x58) = lVar34;
    *(undefined1 (*) [16])((long)plVar9 + -0x50) = auVar50;
    plVar41 = *(long **)(lVar25 + 0x38);
    uVar20 = uVar36;
    lVar33 = lVar25;
    if (plVar41 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar41 = *(long **)(lVar25 + 0x38);
      if (plVar41 == (long *)0x0) {
        func_0x03256878(lVar25);
        plVar41 = *(long **)(lVar25 + 0x38);
      }
    }
    if ((*(byte *)(*plVar41 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar34 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x38) + 8))();
    if (lVar34 != 0) {
      puVar19 = (ulong *)(lVar34 + 0x10);
      *puVar19 = uVar36;
      goto SUB_032809c4;
    }
    auVar51 = func_0x03280cac();
    *(undefined8 *)((long)plVar9 + -0xc0) = 0x3ea575c;
    *(undefined8 *)((long)plVar9 + -0xb0) = 0;
    *(long **)((long)plVar9 + -0xa8) = unaff_x23;
    *(ulong *)((long)plVar9 + -0xa0) = uVar36;
    *(long *)((long)plVar9 + -0x98) = lVar25;
    *(undefined1 (*) [16])((long)plVar9 + -0x90) = auVar52;
    plVar41 = *(long **)(lVar33 + 0x38);
    if (plVar41 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_07750ac8);
      func_0x03280a18(PTR_DAT_0774e558);
      plVar41 = *(long **)(lVar33 + 0x38);
      if (plVar41 == (long *)0x0) {
        func_0x03256878(lVar33);
        plVar41 = *(long **)(lVar33 + 0x38);
      }
    }
    if ((*(byte *)(*plVar41 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar25 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar33 + 0x38) + 8))();
    if (lVar25 != 0) {
      puVar19 = (ulong *)(lVar25 + 0x10);
      *puVar19 = uVar20;
      goto SUB_032809c4;
    }
    auVar52 = func_0x03280cac();
    lVar25 = auVar52._8_8_;
    plVar41 = auVar52._0_8_;
    *(undefined8 *)((long)plVar9 + -0xe0) = 0x3ea5874;
    *(undefined1 (*) [16])((long)plVar9 + -0xd0) = auVar51;
    plVar16 = *(long **)(lVar25 + 0x38);
    if (plVar16 == (long *)0x0) {
      func_0x03256878(lVar25);
      plVar16 = *(long **)(lVar25 + 0x38);
    }
    lVar25 = *plVar16;
    *(undefined8 *)((long)plVar9 + -0xf0) = *(undefined8 *)((long)plVar9 + -0xe0);
    *(long **)((long)plVar9 + -0xe8) = unaff_x23;
    *(ulong *)((long)plVar9 + -0xe0) = uVar20;
    *(long *)((long)plVar9 + -0xd8) = lVar33;
    *(undefined8 *)((long)plVar9 + -0xd0) = *(undefined8 *)((long)plVar9 + -0xd0);
    *(undefined8 *)((long)plVar9 + -200) = *(undefined8 *)((long)plVar9 + -200);
    plVar16 = plVar41;
    if ((*(long *)(lVar25 + 0x38) == 0) &&
       (plVar16 = (long *)func_0x03280a18(PTR_DAT_0774e558), *(long *)(lVar25 + 0x38) == 0)) {
      plVar16 = (long *)func_0x03256878(lVar25);
    }
    puVar44 = PTR_DAT_0774e558;
    if ((char)plVar41[10] != '\0') {
      return plVar16;
    }
    uVar42 = **(undefined8 **)(lVar25 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar42 = func_0x057a51c4(uVar42,0);
    lVar34 = func_0x072869d0(plVar41,uVar42,0,0,0);
    if (lVar34 == 0) {
      return (long *)0x0;
    }
    uVar42 = **(undefined8 **)(lVar25 + 0x38);
    if (*(int *)(*(long *)puVar44 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar42 = func_0x057a51c4(uVar42,0);
    lVar33 = func_0x057c1ad4(uVar42,0);
    lVar18 = *(long *)(*(long *)(lVar25 + 0x38) + 8);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    if (lVar33 == 0) {
LAB_03ea5b18:
      lVar25 = 0;
    }
    else {
      lVar25 = func_0x03280b90(lVar33,lVar18);
      if (lVar25 == 0) {
        func_0x03281048(lVar33,lVar18);
        goto LAB_03ea5b18;
      }
    }
    lVar33 = *(long *)((long)plVar9 + -0xd0);
    plVar31 = *(long **)((long)plVar9 + -200);
    plVar16 = *(long **)((long)plVar9 + -0xe0);
    lVar18 = *(long *)((long)plVar9 + -0xd8);
    plVar41 = (long *)((long)plVar9 + -0xc0);
    uVar42 = *(undefined8 *)((long)plVar9 + -0xf0);
    unaff_x23 = *(long **)((long)plVar9 + -0xe8);
    unaff_x24 = (undefined8 *)0x0;
  }
  else {
    lVar33 = *(long *)((long)register0x00000008 + -0x10);
    plVar31 = *(long **)((long)register0x00000008 + -8);
    plVar16 = *(long **)((long)register0x00000008 + -0x20);
    uVar42 = *(undefined8 *)((long)register0x00000008 + -0x30);
    plVar41 = (long *)register0x00000008;
    lVar18 = *(long *)((long)register0x00000008 + -0x18);
  }
SUB_072852e4:
  lVar32 = 0;
  puVar13 = plVar41 + -6;
  plVar41[-6] = uVar42;
  plVar41[-4] = (long)plVar16;
  plVar41[-3] = lVar18;
  plVar41[-2] = lVar33;
  plVar41[-1] = (long)plVar31;
  if ((bRam0000000007e3419a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dee8);
    func_0x03280a18(PTR_DAT_0785def0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0785def8);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07779590);
    bRam0000000007e3419a = 1;
  }
  puVar44 = PTR_DAT_07779590;
  if (lVar25 != 0) {
    uVar42 = func_0x057dadc4(lVar25,0);
    puVar39 = *(undefined **)(lVar34 + 0x20);
    if (*(int *)(*(long *)puVar44 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar44);
    }
    uVar15 = func_0x0727e0ec(uVar42,puVar39);
    plVar41 = (long *)(ulong)(uVar15 & 1);
    uVar42 = 0x728539c;
    goto SUB_0727dc78;
  }
  func_0x03280cac();
  func_0x03280cac();
  lVar25 = 0;
  while( true ) {
    func_0x03280ca4(lVar25);
    auVar54 = func_0x03280cac();
    uVar42 = auVar54._0_8_;
    if (auVar54._8_4_ != 1) break;
    plVar31 = (long *)func_0x072ce910(uVar42);
    lVar25 = *plVar31;
    func_0x072ce920();
    uVar20 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
    if (uVar20 != 0) {
      piVar37 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
      do {
        if (*(long *)(piVar37 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar21 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar37 * 0x10 + 0x138);
          goto LAB_072854e8;
        }
        uVar20 = uVar20 - 1;
        piVar37 = piVar37 + 4;
      } while (uVar20 != 0);
    }
    lVar32 = 0;
    puVar21 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072854e8:
    plVar31 = (long *)(*(code *)*puVar21)(0x7e34000,puVar21[1]);
    if (lVar25 == 0) {
      return plVar31;
    }
  }
  uVar20 = (ulong)*(ushort *)(lRam0000000007e34000 + 0x12e);
  if (uVar20 != 0) {
    piVar37 = (int *)(*(long *)(lRam0000000007e34000 + 0xb0) + 8);
    do {
      if (*(long *)(piVar37 + -2) == *(long *)PTR_DAT_0774e8c8) {
        puVar21 = (undefined8 *)(lRam0000000007e34000 + (long)*piVar37 * 0x10 + 0x138);
        goto LAB_072855b0;
      }
      uVar20 = uVar20 - 1;
      piVar37 = piVar37 + 4;
    } while (uVar20 != 0);
  }
  lVar32 = 0;
  puVar21 = (undefined8 *)func_0x03256b10(0x7e34000);
LAB_072855b0:
  (*(code *)*puVar21)(0x7e34000,puVar21[1]);
  func_0x03365958(uVar42);
  func_0x03280ca4(0);
  auVar52 = func_0x02f09514();
  puVar44 = PTR_DAT_0785dec8;
  lVar34 = auVar52._8_8_;
  lVar33 = auVar52._0_8_;
  plVar41[-0xe] = 0x72855d4;
  plVar41[-0xd] = unaff_x25;
  plVar41[-0xc] = (long)unaff_x24;
  plVar41[-0xb] = (long)unaff_x23;
  plVar41[-10] = (long)plVar16;
  plVar41[-9] = uVar42;
  plVar41[-8] = 0;
  plVar41[-7] = 0x7e34000;
  plVar16 = (long *)0x7e34000;
  if ((bRam0000000007e3419b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0785dec8);
    func_0x03280a18(PTR_DAT_0785df00);
    func_0x03280a18(PTR_DAT_0785ded0);
    func_0x03280a18(PTR_DAT_0785ded8);
    func_0x03280a18(PTR_DAT_0774e5a0);
    func_0x03280a18(PTR_DAT_0785df08);
    bRam0000000007e3419b = 1;
  }
  plVar31 = (long *)func_0x03e0c264(lVar34,*(undefined8 *)puVar44);
  puVar27 = PTR_DAT_0785df00;
  puVar39 = PTR_DAT_0785ded8;
  if (((ulong)plVar31 & 1) == 0) {
LAB_07285770:
    if (lVar34 != 0) {
      if (0 < *(int *)(lVar34 + 0x18)) {
        plVar16 = (long *)0x0;
        do {
          puVar28 = (undefined *)func_0x0414419c(lVar34,plVar16,*(undefined8 *)puVar39);
          unaff_x24 = (undefined8 *)puVar39;
          if (*(long *)(lVar33 + 0x10) == 0) goto LAB_07285808;
          plVar31 = (long *)func_0x041447fc(*(long *)(lVar33 + 0x10),puVar28,*(undefined8 *)puVar27)
          ;
          puVar44 = puVar28;
          if (((ulong)plVar31 & 1) != 0) {
            if ((puVar28 == (undefined *)0x0) || (lVar25 = *(long *)(puVar28 + 0x18), lVar25 == 0))
            goto LAB_07285808;
            plVar31 = (long *)(**(code **)(lVar25 + 0x18))
                                        (*(undefined8 *)(lVar25 + 0x40),lVar32,
                                         *(undefined8 *)(lVar25 + 0x28));
          }
          uVar15 = (int)plVar16 + 1;
          plVar16 = (long *)(ulong)uVar15;
        } while ((int)uVar15 < *(int *)(lVar34 + 0x18));
      }
      return plVar31;
    }
LAB_07285808:
    func_0x03280cac();
    plVar31 = plVar16;
    puVar27 = puVar44;
LAB_0728580c:
    func_0x03280cb4();
  }
  else {
    if (*(int *)(lVar33 + 0x30) != 2) {
      if (*(int *)(lVar33 + 0x30) != 1) goto LAB_07285770;
      uVar42 = func_0x03280a2c(PTR_DAT_0774e5a0);
      lVar34 = func_0x03280afc(uVar42,1);
      func_0x02f0b18c(lVar32);
      uVar42 = func_0x057dadc4(lVar32,0);
      func_0x02f0b18c(lVar34);
      func_0x02f176b4(lVar34,uVar42);
      func_0x02f0965c(lVar34,0,uVar42);
      uVar42 = func_0x03280a2c(PTR_DAT_0785df08);
      lVar32 = func_0x0727df38(uVar42,lVar34);
      uVar42 = func_0x03280a2c(PTR_DAT_0785df10);
      func_0x03280b7c(lVar32,uVar42);
    }
    plVar31 = (long *)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e5a0,1);
    if ((lVar32 == 0) ||
       (puVar27 = (undefined *)func_0x057dadc4(lVar32,0), plVar16 = plVar31, plVar31 == (long *)0x0)
       ) goto LAB_07285808;
    if ((puVar27 == (undefined *)0x0) ||
       (lVar25 = func_0x03280b90(puVar27,*(undefined8 *)(*plVar31 + 0x40)), lVar25 != 0)) {
      if ((int)plVar31[3] != 0) {
        puVar19 = (ulong *)(plVar31 + 4);
        *puVar19 = (ulong)puVar27;
SUB_032809c4:
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)puVar19 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar19 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        return (long *)puVar19;
      }
      goto LAB_0728580c;
    }
  }
  uVar42 = func_0x03280cd0();
  auVar52 = func_0x03280b7c(uVar42,0);
  plVar41[-0x10] = 0x728581c;
  lVar25 = *(long *)(auVar52._0_8_ + 0x18);
  if (lVar25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07285838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar41 = (long *)(**(code **)(lVar25 + 0x18))
                                (*(undefined8 *)(lVar25 + 0x40),auVar52._8_8_,
                                 *(undefined8 *)(lVar25 + 0x28));
    return plVar41;
  }
  lVar25 = func_0x03280cac();
  puVar39 = PTR_DAT_0785df18;
  puVar13 = plVar41 + -0x18;
  plVar41[-0x18] = 0x7285840;
  plVar41[-0x16] = (long)unaff_x24;
  plVar41[-0x15] = (long)puVar27;
  plVar41[-0x14] = (long)plVar31;
  plVar41[-0x13] = lVar33;
  plVar41[-0x12] = lVar34;
  plVar41[-0x11] = lVar32;
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
  plVar41 = (long *)(ulong)*(byte *)(lVar25 + 0x34);
  uVar42 = 0x72858f0;
SUB_0727dc78:
  if (((ulong)plVar41 & 1) == 0) {
    *(undefined8 *)((long)puVar13 + -0x10) = uVar42;
    *(undefined **)((long)puVar13 + -8) = puVar39;
    uVar42 = func_0x03280a2c(PTR_DAT_0785dbe8);
    puVar44 = PTR_DAT_0777c990;
    *(undefined8 *)((long)puVar13 + -0x30) = 0x727dc94;
    *(long *)((long)puVar13 + -0x28) = lVar34;
    *(long *)((long)puVar13 + -0x20) = lVar25;
    *(undefined **)((long)puVar13 + -0x18) = puVar39;
    if ((bRam0000000007e34146 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c990);
      bRam0000000007e34146 = 1;
    }
    plVar41 = (long *)func_0x03280ca0(*(undefined8 *)puVar44);
    func_0x072c77f8(plVar41,uVar42,0);
    return plVar41;
  }
  return plVar41;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar37 = piVar37 + 4;
    if (uVar20 == 0) break;
LAB_04145aa0:
    if (*(long *)(piVar37 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar25 + (long)*piVar37 * 0x10 + 0x138);
      goto LAB_04145ad4;
    }
  }
LAB_04145ab8:
  plVar41 = (long *)0x0;
  puVar21 = (undefined8 *)func_0x03256b10(plVar31);
LAB_04145ad4:
  (*(code *)*puVar21)(plVar31,puVar21[1]);
LAB_04145ae0:
  func_0x03365958(auVar54._0_8_);
  func_0x03280ca4(0);
  auVar53 = func_0x02f09514();
  lVar25 = 0x4145af8;
  goto SUB_04145af8;
}

