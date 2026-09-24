/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/PlayerModel.txt
 * Cpp2IL method: System.Void GameOnRestoredFromPersistedState(Metaplay.Core.MetaDuration elapsedTime)
 * Ghidra function entry: 036649c0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03664aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03664d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036653e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0389e578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036781c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0289276c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02892fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0367e040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0367e074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0367e09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02851f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028523a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02852708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02852850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03678210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0285270c) */
/* WARNING: Removing unreachable block (ram,0x02852724) */
/* WARNING: Removing unreachable block (ram,0x02852710) */
/* WARNING: Removing unreachable block (ram,0x02852734) */
/* WARNING: Removing unreachable block (ram,0x02852764) */
/* WARNING: Removing unreachable block (ram,0x02852818) */
/* WARNING: Removing unreachable block (ram,0x02852830) */
/* WARNING: Removing unreachable block (ram,0x02852828) */
/* WARNING: Removing unreachable block (ram,0x02852840) */
/* WARNING: Removing unreachable block (ram,0x02852744) */
/* WARNING: Removing unreachable block (ram,0x028523a4) */
/* WARNING: Removing unreachable block (ram,0x028523ec) */
/* WARNING: Removing unreachable block (ram,0x02852428) */
/* WARNING: Removing unreachable block (ram,0x028524bc) */
/* WARNING: Removing unreachable block (ram,0x028523a8) */
/* WARNING: Removing unreachable block (ram,0x028524c8) */
/* WARNING: Removing unreachable block (ram,0x028523cc) */
/* WARNING: Removing unreachable block (ram,0x02851f84) */
/* WARNING: Removing unreachable block (ram,0x02851fb8) */
/* WARNING: Removing unreachable block (ram,0x02851f94) */
/* WARNING: Removing unreachable block (ram,0x0367e0a0) */
/* WARNING: Removing unreachable block (ram,0x0367e0a4) */
/* WARNING: Removing unreachable block (ram,0x0367e078) */
/* WARNING: Removing unreachable block (ram,0x0367e044) */
/* WARNING: Removing unreachable block (ram,0x0367e0c4) */
/* WARNING: Removing unreachable block (ram,0x0367e048) */
/* WARNING: Removing unreachable block (ram,0x0367e0d8) */
/* WARNING: Removing unreachable block (ram,0x0367e05c) */
/* WARNING: Removing unreachable block (ram,0x028524cc) */
/* WARNING: Removing unreachable block (ram,0x02852574) */
/* WARNING: Removing unreachable block (ram,0x02852594) */
/* WARNING: Removing unreachable block (ram,0x028525b4) */
/* WARNING: Removing unreachable block (ram,0x028525a4) */
/* WARNING: Removing unreachable block (ram,0x028525c8) */
/* WARNING: Removing unreachable block (ram,0x028525ac) */
/* WARNING: Removing unreachable block (ram,0x028525d8) */
/* WARNING: Removing unreachable block (ram,0x02852620) */
/* WARNING: Removing unreachable block (ram,0x028526d0) */
/* WARNING: Removing unreachable block (ram,0x028526e8) */
/* WARNING: Removing unreachable block (ram,0x028526e0) */
/* WARNING: Removing unreachable block (ram,0x028526f8) */
/* WARNING: Removing unreachable block (ram,0x02852600) */
/* WARNING: Removing unreachable block (ram,0x02892fd0) */
/* WARNING: Removing unreachable block (ram,0x02892770) */
/* WARNING: Removing unreachable block (ram,0x028927a0) */
/* WARNING: Removing unreachable block (ram,0x02892780) */
/* WARNING: Removing unreachable block (ram,0x036781c8) */
/* WARNING: Removing unreachable block (ram,0x036781cc) */
/* WARNING: Removing unreachable block (ram,0x03678230) */
/* WARNING: Removing unreachable block (ram,0x036781d0) */
/* WARNING: Removing unreachable block (ram,0x03664d88) */
/* WARNING: Removing unreachable block (ram,0x03664da0) */
/* WARNING: Removing unreachable block (ram,0x03664da4) */
/* WARNING: Removing unreachable block (ram,0x03664dc0) */
/* WARNING: Removing unreachable block (ram,0x03664dc8) */
/* WARNING: Removing unreachable block (ram,0x03664de4) */
/* WARNING: Removing unreachable block (ram,0x03664e00) */
/* WARNING: Removing unreachable block (ram,0x03664e1c) */
/* WARNING: Removing unreachable block (ram,0x03664e24) */
/* WARNING: Removing unreachable block (ram,0x03664e4c) */
/* WARNING: Removing unreachable block (ram,0x03664e30) */
/* WARNING: Removing unreachable block (ram,0x03664e3c) */
/* WARNING: Removing unreachable block (ram,0x03664e58) */
/* WARNING: Removing unreachable block (ram,0x03664e90) */
/* WARNING: Removing unreachable block (ram,0x03665408) */
/* WARNING: Removing unreachable block (ram,0x03664e98) */
/* WARNING: Removing unreachable block (ram,0x03664ea8) */
/* WARNING: Removing unreachable block (ram,0x03664eb0) */
/* WARNING: Removing unreachable block (ram,0x03664ed8) */
/* WARNING: Removing unreachable block (ram,0x03664ebc) */
/* WARNING: Removing unreachable block (ram,0x03664ec8) */
/* WARNING: Removing unreachable block (ram,0x03664ee4) */
/* WARNING: Removing unreachable block (ram,0x03664fa0) */
/* WARNING: Removing unreachable block (ram,0x03664fb4) */
/* WARNING: Removing unreachable block (ram,0x03664fcc) */
/* WARNING: Removing unreachable block (ram,0x03664fd4) */
/* WARNING: Removing unreachable block (ram,0x03664ffc) */
/* WARNING: Removing unreachable block (ram,0x03664fe0) */
/* WARNING: Removing unreachable block (ram,0x03664fec) */
/* WARNING: Removing unreachable block (ram,0x03665008) */
/* WARNING: Removing unreachable block (ram,0x03665014) */
/* WARNING: Removing unreachable block (ram,0x03665018) */
/* WARNING: Removing unreachable block (ram,0x03665020) */
/* WARNING: Removing unreachable block (ram,0x03665024) */
/* WARNING: Removing unreachable block (ram,0x03665030) */
/* WARNING: Removing unreachable block (ram,0x03665034) */
/* WARNING: Removing unreachable block (ram,0x03665048) */
/* WARNING: Removing unreachable block (ram,0x03665064) */
/* WARNING: Removing unreachable block (ram,0x0366506c) */
/* WARNING: Removing unreachable block (ram,0x03665094) */
/* WARNING: Removing unreachable block (ram,0x03665078) */
/* WARNING: Removing unreachable block (ram,0x03665084) */
/* WARNING: Removing unreachable block (ram,0x036650a0) */
/* WARNING: Removing unreachable block (ram,0x036650b8) */
/* WARNING: Removing unreachable block (ram,0x036650c0) */
/* WARNING: Removing unreachable block (ram,0x036650d0) */
/* WARNING: Removing unreachable block (ram,0x036650d8) */
/* WARNING: Removing unreachable block (ram,0x03665100) */
/* WARNING: Removing unreachable block (ram,0x036650e4) */
/* WARNING: Removing unreachable block (ram,0x036650f0) */
/* WARNING: Removing unreachable block (ram,0x0366510c) */
/* WARNING: Removing unreachable block (ram,0x0366521c) */
/* WARNING: Removing unreachable block (ram,0x0366511c) */
/* WARNING: Removing unreachable block (ram,0x03665124) */
/* WARNING: Removing unreachable block (ram,0x03665134) */
/* WARNING: Removing unreachable block (ram,0x0366513c) */
/* WARNING: Removing unreachable block (ram,0x03665164) */
/* WARNING: Removing unreachable block (ram,0x03665148) */
/* WARNING: Removing unreachable block (ram,0x03665154) */
/* WARNING: Removing unreachable block (ram,0x03665170) */
/* WARNING: Removing unreachable block (ram,0x0366519c) */
/* WARNING: Removing unreachable block (ram,0x036651a0) */
/* WARNING: Removing unreachable block (ram,0x036651b0) */
/* WARNING: Removing unreachable block (ram,0x036651c4) */
/* WARNING: Removing unreachable block (ram,0x036651cc) */
/* WARNING: Removing unreachable block (ram,0x036651f4) */
/* WARNING: Removing unreachable block (ram,0x036651d8) */
/* WARNING: Removing unreachable block (ram,0x036651e4) */
/* WARNING: Removing unreachable block (ram,0x03665204) */
/* WARNING: Removing unreachable block (ram,0x03664ef4) */
/* WARNING: Removing unreachable block (ram,0x0366540c) */
/* WARNING: Removing unreachable block (ram,0x03664efc) */
/* WARNING: Removing unreachable block (ram,0x03664f0c) */
/* WARNING: Removing unreachable block (ram,0x03664f14) */
/* WARNING: Removing unreachable block (ram,0x03664f3c) */
/* WARNING: Removing unreachable block (ram,0x03664f20) */
/* WARNING: Removing unreachable block (ram,0x03664f2c) */
/* WARNING: Removing unreachable block (ram,0x03664f48) */
/* WARNING: Removing unreachable block (ram,0x03664f74) */
/* WARNING: Removing unreachable block (ram,0x03664f78) */
/* WARNING: Removing unreachable block (ram,0x03665410) */
/* WARNING: Removing unreachable block (ram,0x03665414) */
/* WARNING: Removing unreachable block (ram,0x03665418) */
/* WARNING: Removing unreachable block (ram,0x0366541c) */
/* WARNING: Removing unreachable block (ram,0x03664f8c) */
/* WARNING: Removing unreachable block (ram,0x03664cd0) */
/* WARNING: Removing unreachable block (ram,0x03664cd4) */
/* WARNING: Removing unreachable block (ram,0x03664d10) */
/* WARNING: Removing unreachable block (ram,0x03664d34) */
/* WARNING: Removing unreachable block (ram,0x03664d3c) */
/* WARNING: Removing unreachable block (ram,0x03664d60) */
/* WARNING: Removing unreachable block (ram,0x03664d64) */
/* WARNING: Removing unreachable block (ram,0x03664c68) */
/* WARNING: Removing unreachable block (ram,0x03664c6c) */
/* WARNING: Removing unreachable block (ram,0x03664ca8) */
/* WARNING: Removing unreachable block (ram,0x03664c10) */
/* WARNING: Removing unreachable block (ram,0x03664c14) */
/* WARNING: Removing unreachable block (ram,0x03664c50) */
/* WARNING: Removing unreachable block (ram,0x03664bb8) */
/* WARNING: Removing unreachable block (ram,0x03664bbc) */
/* WARNING: Removing unreachable block (ram,0x03664bf8) */
/* WARNING: Removing unreachable block (ram,0x03664b60) */
/* WARNING: Removing unreachable block (ram,0x03664b64) */
/* WARNING: Removing unreachable block (ram,0x03664ba0) */
/* WARNING: Removing unreachable block (ram,0x03664b10) */
/* WARNING: Removing unreachable block (ram,0x03664b38) */
/* WARNING: Removing unreachable block (ram,0x03665420) */
/* WARNING: Removing unreachable block (ram,0x03665424) */
/* WARNING: Removing unreachable block (ram,0x03665468) */
/* WARNING: Removing unreachable block (ram,0x03665498) */
/* WARNING: Removing unreachable block (ram,0x036654e0) */
/* WARNING: Removing unreachable block (ram,0x03665474) */
/* WARNING: Removing unreachable block (ram,0x03665228) */
/* WARNING: Removing unreachable block (ram,0x03665230) */
/* WARNING: Removing unreachable block (ram,0x03665248) */
/* WARNING: Removing unreachable block (ram,0x03665250) */
/* WARNING: Removing unreachable block (ram,0x03665278) */
/* WARNING: Removing unreachable block (ram,0x0366525c) */
/* WARNING: Removing unreachable block (ram,0x03665268) */
/* WARNING: Removing unreachable block (ram,0x03665284) */
/* WARNING: Removing unreachable block (ram,0x03665290) */
/* WARNING: Removing unreachable block (ram,0x03665294) */
/* WARNING: Removing unreachable block (ram,0x0366529c) */
/* WARNING: Removing unreachable block (ram,0x036653e8) */
/* WARNING: Removing unreachable block (ram,0x036652a0) */
/* WARNING: Removing unreachable block (ram,0x036652fc) */
/* WARNING: Removing unreachable block (ram,0x03665300) */
/* WARNING: Removing unreachable block (ram,0x03665304) */
/* WARNING: Removing unreachable block (ram,0x0366532c) */
/* WARNING: Removing unreachable block (ram,0x0366533c) */
/* WARNING: Removing unreachable block (ram,0x03665344) */
/* WARNING: Removing unreachable block (ram,0x03665354) */
/* WARNING: Removing unreachable block (ram,0x03665364) */
/* WARNING: Removing unreachable block (ram,0x03665374) */
/* WARNING: Removing unreachable block (ram,0x036653a8) */
/* WARNING: Removing unreachable block (ram,0x036653d8) */
/* WARNING: Removing unreachable block (ram,0x03664b40) */
/* WARNING: Removing unreachable block (ram,0x03664af0) */
/* WARNING: Removing unreachable block (ram,0x02852854) */
/* WARNING: Removing unreachable block (ram,0x0285286c) */
/* WARNING: Removing unreachable block (ram,0x02852890) */
/* WARNING: Removing unreachable block (ram,0x02852858) */
/* WARNING: Removing unreachable block (ram,0x02852898) */
/* WARNING: Removing unreachable block (ram,0x028528c8) */
/* WARNING: Removing unreachable block (ram,0x02852998) */
/* WARNING: Removing unreachable block (ram,0x02852958) */
/* WARNING: Removing unreachable block (ram,0x02852980) */
/* WARNING: Removing unreachable block (ram,0x028529a0) */
/* WARNING: Removing unreachable block (ram,0x02852990) */
/* WARNING: Removing unreachable block (ram,0x028529b0) */
/* WARNING: Removing unreachable block (ram,0x028529d4) */
/* WARNING: Removing unreachable block (ram,0x028529c8) */
/* WARNING: Removing unreachable block (ram,0x028529d8) */
/* WARNING: Removing unreachable block (ram,0x02852abc) */
/* WARNING: Removing unreachable block (ram,0x02852ad0) */
/* WARNING: Removing unreachable block (ram,0x028529e4) */
/* WARNING: Removing unreachable block (ram,0x02852ad4) */
/* WARNING: Removing unreachable block (ram,0x02852ae8) */
/* WARNING: Removing unreachable block (ram,0x028529f4) */
/* WARNING: Removing unreachable block (ram,0x02852a1c) */
/* WARNING: Removing unreachable block (ram,0x02852a34) */
/* WARNING: Removing unreachable block (ram,0x02852a2c) */
/* WARNING: Removing unreachable block (ram,0x02852a44) */
/* WARNING: Removing unreachable block (ram,0x02852a84) */
/* WARNING: Removing unreachable block (ram,0x02852a64) */
/* WARNING: Removing unreachable block (ram,0x02852a88) */
/* WARNING: Removing unreachable block (ram,0x02852a8c) */
/* WARNING: Removing unreachable block (ram,0x02852aec) */
/* WARNING: Removing unreachable block (ram,0x02852bcc) */
/* WARNING: Removing unreachable block (ram,0x02852b90) */
/* WARNING: Removing unreachable block (ram,0x02852bb4) */
/* WARNING: Removing unreachable block (ram,0x02852bdc) */
/* WARNING: Removing unreachable block (ram,0x02852bc4) */
/* WARNING: Removing unreachable block (ram,0x02852bec) */
/* WARNING: Removing unreachable block (ram,0x02852c10) */
/* WARNING: Removing unreachable block (ram,0x02852c04) */
/* WARNING: Removing unreachable block (ram,0x02852c14) */
/* WARNING: Removing unreachable block (ram,0x02852dc8) */
/* WARNING: Removing unreachable block (ram,0x02852c1c) */
/* WARNING: Removing unreachable block (ram,0x02852dd4) */
/* WARNING: Removing unreachable block (ram,0x02852c2c) */
/* WARNING: Removing unreachable block (ram,0x02852c58) */
/* WARNING: Removing unreachable block (ram,0x02852c70) */
/* WARNING: Removing unreachable block (ram,0x02852c68) */
/* WARNING: Removing unreachable block (ram,0x02852c80) */
/* WARNING: Removing unreachable block (ram,0x02852d84) */
/* WARNING: Removing unreachable block (ram,0x02852d90) */
/* WARNING: Removing unreachable block (ram,0x02852ca8) */
/* WARNING: Removing unreachable block (ram,0x02852de0) */
/* WARNING: Removing unreachable block (ram,0x02852de4) */
/* WARNING: Removing unreachable block (ram,0x02852df0) */
/* WARNING: Removing unreachable block (ram,0x02852cb0) */
/* WARNING: Removing unreachable block (ram,0x02852df4) */
/* WARNING: Removing unreachable block (ram,0x02852df8) */
/* WARNING: Removing unreachable block (ram,0x02852e04) */
/* WARNING: Removing unreachable block (ram,0x02852cc4) */
/* WARNING: Removing unreachable block (ram,0x02852d50) */
/* WARNING: Removing unreachable block (ram,0x02852d54) */
/* WARNING: Removing unreachable block (ram,0x02852d98) */
/* WARNING: Removing unreachable block (ram,0x02852e08) */
/* WARNING: Removing unreachable block (ram,0x02852e70) */
/* WARNING: Removing unreachable block (ram,0x02852fb8) */
/* WARNING: Removing unreachable block (ram,0x02852e80) */
/* WARNING: Removing unreachable block (ram,0x02852e8c) */
/* WARNING: Removing unreachable block (ram,0x02852e94) */
/* WARNING: Removing unreachable block (ram,0x02852ea0) */
/* WARNING: Removing unreachable block (ram,0x02852ee4) */
/* WARNING: Removing unreachable block (ram,0x02852f4c) */
/* WARNING: Removing unreachable block (ram,0x02852f50) */
/* WARNING: Removing unreachable block (ram,0x02852f5c) */
/* WARNING: Removing unreachable block (ram,0x02852fb4) */
/* WARNING: Removing unreachable block (ram,0x02852f00) */
/* WARNING: Removing unreachable block (ram,0x02852ff0) */
/* WARNING: Removing unreachable block (ram,0x02853000) */
/* WARNING: Removing unreachable block (ram,0x02852f04) */
/* WARNING: Removing unreachable block (ram,0x02853004) */
/* WARNING: Removing unreachable block (ram,0x02853014) */
/* WARNING: Removing unreachable block (ram,0x02852f10) */
/* WARNING: Removing unreachable block (ram,0x02852f48) */
/* WARNING: Removing unreachable block (ram,0x02852fbc) */
/* WARNING: Removing unreachable block (ram,0x02853018) */
/* WARNING: Removing unreachable block (ram,0x0285304c) */
/* WARNING: Removing unreachable block (ram,0x02853060) */
/* WARNING: Removing unreachable block (ram,0x02853094) */
/* WARNING: Removing unreachable block (ram,0x028530a8) */
/* WARNING: Removing unreachable block (ram,0x028530ac) */
/* WARNING: Removing unreachable block (ram,0x028530b8) */
/* WARNING: Removing unreachable block (ram,0x028530bc) */
/* WARNING: Removing unreachable block (ram,0x028530d0) */
/* WARNING: Removing unreachable block (ram,0x028530d4) */
/* WARNING: Removing unreachable block (ram,0x028530e4) */
/* WARNING: Removing unreachable block (ram,0x028530e8) */
/* WARNING: Removing unreachable block (ram,0x028530fc) */
/* WARNING: Removing unreachable block (ram,0x02853104) */
/* WARNING: Removing unreachable block (ram,0x02853108) */
/* WARNING: Removing unreachable block (ram,0x0285311c) */
/* WARNING: Removing unreachable block (ram,0x02853124) */
/* WARNING: Removing unreachable block (ram,0x0285315c) */
/* WARNING: Removing unreachable block (ram,0x0285316c) */
/* WARNING: Removing unreachable block (ram,0x028531b0) */
/* WARNING: Removing unreachable block (ram,0x028531b4) */
/* WARNING: Removing unreachable block (ram,0x028531b8) */
/* WARNING: Removing unreachable block (ram,0x028531f0) */
/* WARNING: Removing unreachable block (ram,0x02853254) */
/* WARNING: Removing unreachable block (ram,0x028531f8) */
/* WARNING: Removing unreachable block (ram,0x02853244) */
/* WARNING: Removing unreachable block (ram,0x02852fcc) */
/* WARNING: Removing unreachable block (ram,0x02852da8) */
/* WARNING: Removing unreachable block (ram,0x02852a9c) */
/* WARNING: Removing unreachable block (ram,0x028528a8) */
/* WARNING: Removing unreachable block (ram,0x0389d144) */
/* WARNING: Removing unreachable block (ram,0x0389d52c) */
/* WARNING: Removing unreachable block (ram,0x0389d918) */
/* WARNING: Removing unreachable block (ram,0x0389e0d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_036649c0(long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar6;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  long *plVar23;
  undefined1 *puVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  uint uVar30;
  ulong *puVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  long *plVar36;
  undefined1 *puVar37;
  long *unaff_x22;
  undefined1 *puVar38;
  undefined8 *puVar39;
  long *unaff_x23;
  long *plVar40;
  long *unaff_x24;
  ulong uVar41;
  long *plVar42;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong uVar43;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [12];
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  long *plStack_1d8;
  long **pplStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long **pplStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  uint uStack_194;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  uint uStack_114;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000005e2d658 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9720);
    func_0x0249f8e4(&DAT_059fa9a0);
    func_0x0249f8e4(&DAT_05a42840);
    func_0x0249f8e4(&DAT_059defe8);
    func_0x0249f8e4(&DAT_059df598);
    func_0x0249f8e4(&DAT_059ca768);
    func_0x0249f8e4(&DAT_059ca9b0);
    func_0x0249f8e4(&DAT_059cbd30);
    func_0x0249f8e4(&DAT_059cbac8);
    func_0x0249f8e4(&DAT_059df6e0);
    func_0x0249f8e4(&DAT_059e2678);
    func_0x0249f8e4(&DAT_05a21ab8);
    func_0x0249f8e4(&DAT_05a21ac0);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a2aaf0);
    func_0x0249f8e4(&DAT_05a2ab18);
    func_0x0249f8e4(&DAT_05a2aba0);
    func_0x0249f8e4(&DAT_059e5f70);
    bRam0000000005e2d658 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if ((bRam0000000005e2d6d5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_05a2ab50);
    bRam0000000005e2d6d5 = 1;
  }
  plVar9 = (long *)func_0x0365f528(param_1);
  if (plVar9 == (long *)0x0) {
    return (uint *)0x0;
  }
  lVar26 = *plVar9;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 != 0) {
    piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
        puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 2) * 0x10 + 0x138);
        goto LAB_0366558c;
      }
      uVar27 = uVar27 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar27 != 0);
  }
  param_3 = (long *)0x2;
  puVar10 = (undefined8 *)func_0x024d927c(plVar9);
LAB_0366558c:
  puVar11 = (uint *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  if (puVar11 != (uint *)0x0) {
    if (*(char *)((long)puVar11 + 0x12e) == '\0') {
      return puVar11;
    }
    puVar11 = (uint *)func_0x0249f90c(param_1,*(long *)(**(long **)(*(long *)(_DAT_05a2ab50 + 0x20)
                                                                   + 0xc0) + 0x80) + 0x420);
    if (*(long *)puVar11 == 0) {
      return puVar11;
    }
    plVar9 = *(long **)(param_1 + 0x510);
    if ((bRam0000000005e2ec37 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e46b8,param_1,0);
      bRam0000000005e2ec37 = 1;
    }
    if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar16 = func_0x03645f5c(param_1,0);
    uVar16 = uVar16 & 0xffffffff;
    plVar21 = (long *)&DAT_059e5f70;
    uVar45 = 0x3664af0;
    puVar38 = auStack_90;
    uVar27 = 0x5e2d000;
SUB_0389c88c:
    *(long **)(puVar38 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar38 + -0x58) = uVar45;
    *(long **)(puVar38 + -0x50) = unaff_x28;
    *(long **)(puVar38 + -0x48) = unaff_x27;
    *(long **)(puVar38 + -0x40) = unaff_x26;
    *(long **)(puVar38 + -0x38) = unaff_x25;
    *(long **)(puVar38 + -0x30) = unaff_x24;
    *(long **)(puVar38 + -0x28) = unaff_x23;
    *(long **)(puVar38 + -0x20) = unaff_x22;
    *(ulong *)(puVar38 + -0x18) = uVar27;
    *(long **)(puVar38 + -0x10) = plVar21;
    *(long *)(puVar38 + -8) = param_1;
    if ((bRam0000000005e2ec39 & 1) == 0) {
      func_0x0249f8e4(&DAT_059c97d8);
      func_0x0249f8e4(&DAT_059c97e0);
      func_0x0249f8e4(&DAT_059c9ad8);
      func_0x0249f8e4(&DAT_059c9ad0);
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059ca8c8);
      func_0x0249f8e4(&DAT_059cbc38);
      func_0x0249f8e4(&DAT_059df6e0);
      func_0x0249f8e4(&DAT_059dfc28);
      func_0x0249f8e4(&DAT_059dfe60);
      func_0x0249f8e4(&DAT_059e0bd0);
      func_0x0249f8e4(&DAT_05a27d88);
      bRam0000000005e2ec39 = 1;
    }
    *(undefined8 *)(puVar38 + -0x70) = 0;
    plVar21 = (long *)0x5e2e000;
    if ((param_1 != 0) && (plVar17 = (long *)func_0x03659ee0(param_1,0), plVar9 != (long *)0x0)) {
      lVar26 = *plVar9;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 2) * 0x10 + 0x138);
            goto LAB_0389c9cc;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,2);
LAB_0389c9cc:
      plVar18 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      plVar21 = plVar17;
      if (plVar18 != (long *)0x0) {
        lVar26 = *plVar18;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059c97d8) {
              puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
              goto LAB_0389ca38;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c97d8,3);
LAB_0389ca38:
        (*(code *)*puVar10)(plVar18,puVar10[1]);
        unaff_x23 = plVar18;
        if (plVar17 != (long *)0x0) {
          lVar26 = *plVar17;
          unaff_x27 = (long *)&DAT_059dfe60;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
                puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 199) * 0x10 + 0x138);
                goto LAB_0389caa0;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe60,199);
LAB_0389caa0:
          plVar19 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
          if (plVar19 != (long *)0x0) {
            lVar26 = *plVar19;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059dfc28) {
                  puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                  goto LAB_0389cb0c;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfc28,1);
LAB_0389cb0c:
            plVar20 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
            unaff_x24 = plVar19;
            if (plVar20 != (long *)0x0) {
              lVar26 = *plVar20;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059ca8c8) {
                    puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_0389cb74;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              puVar10 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059ca8c8,0);
LAB_0389cb74:
              unaff_x28 = (long *)&DAT_059df6e0;
              unaff_x29 = (long *)&DAT_059cbc38;
              unaff_x26 = (long *)&DAT_059c9ad0;
              uVar45 = (*(code *)*puVar10)(plVar20,puVar10[1]);
              *(undefined8 *)(puVar38 + -0x70) = uVar45;
              *(undefined8 *)(puVar38 + -0x80) = 0;
              *(undefined1 **)(puVar38 + -0x78) = puVar38 + -0x70;
              while (plVar19 = *(long **)(puVar38 + -0x70), plVar19 != (long *)0x0) {
                lVar26 = *plVar19;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_0389cbf8;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059df6e0,0);
LAB_0389cbf8:
                uVar27 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                if ((uVar27 & 1) == 0) {
                  unaff_x24 = *(long **)(puVar38 + -0x70);
                  if (unaff_x24 == (long *)0x0) goto LAB_0389cd5c;
                  lVar26 = *unaff_x24;
                  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar27 == 0) goto LAB_0389cd34;
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  goto LAB_0389cd1c;
                }
                plVar19 = *(long **)(puVar38 + -0x70);
                if (plVar19 == (long *)0x0) goto LAB_0389e188;
                lVar26 = *plVar19;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059cbc38) {
                      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_0389cc5c;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059cbc38,0);
LAB_0389cc5c:
                uVar6 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                unaff_x25 = (long *)func_0x035203b8(param_1,uVar16,uVar6,0);
                lVar26 = *plVar18;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059c9ad0) {
                      puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                      goto LAB_0389ccd4;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c9ad0,1);
LAB_0389ccd4:
                (*(code *)*puVar10)(plVar18,uVar6,unaff_x25,puVar10[1]);
              }
              func_0x0249fb90();
LAB_0389e188:
              func_0x0249fb90();
LAB_0389e18c:
              func_0x0249fb90();
LAB_0389e190:
              func_0x0249fb90();
              unaff_x23 = plVar18;
              unaff_x24 = (long *)0x0;
            }
          }
        }
      }
    }
    goto LAB_0389e194;
  }
  auVar50 = func_0x0249fb90();
  lVar26 = auVar50._0_8_;
  uVar27 = 0x5e2d000;
  if ((bRam0000000005e2d659 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a032d0);
    func_0x0249f8e4(&DAT_05a032d8);
    func_0x0249f8e4(&DAT_05a032e0);
    func_0x0249f8e4(&DAT_05a0d1a0);
    func_0x0249f8e4(&DAT_059de988);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059cd750);
    func_0x0249f8e4(&DAT_05a98900);
    func_0x0249f8e4(&DAT_05a896e8);
    bRam0000000005e2d659 = 1;
  }
  lStack_130 = 0;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  lStack_138 = 0;
  if ((*(long *)(lVar26 + 0x220) != 0) &&
     (lVar12 = func_0x0387aff0(*(long *)(lVar26 + 0x220),0), lVar12 != 0)) {
    unaff_x24 = (long *)&DAT_05a032d8;
    unaff_x25 = (long *)&DAT_05a032e0;
    unaff_x26 = (long *)&DAT_059dfe60;
    unaff_x27 = (long *)&DAT_059cd750;
    unaff_x28 = (long *)&DAT_059de988;
    unaff_x29 = (long *)&DAT_05a98900;
    unaff_x23 = (long *)&DAT_05a896e8;
    func_0x02abdf04(lVar12,&lStack_150,_DAT_05a0d1a0);
    uStack_120 = uStack_140;
    plStack_128 = plStack_148;
    lStack_130 = lStack_150;
    lStack_150 = 0;
    plStack_148 = &lStack_130;
LAB_03665724:
    do {
      uVar27 = func_0x02a588f4(&lStack_130,_DAT_05a032d8);
      lVar12 = _DAT_05a032e0;
      if ((uVar27 & 1) == 0) {
        puVar11 = (uint *)func_0x02a588f0(&lStack_130,_DAT_05a032d0);
        return puVar11;
      }
      lVar13 = *(long *)(_DAT_05a032e0 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar14 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar14 = func_0x024d8f40();
        lVar13 = *(long *)(lVar12 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      param_3 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = func_0x024d8f40();
      }
      uVar45 = func_0x0249f90c(&lStack_130,
                               *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x054ed0d0(&uStack_114,uVar45);
      uVar7 = uStack_114;
      uVar27 = (ulong)uStack_114;
      plVar9 = (long *)func_0x0365f528(lVar26);
      if (plVar9 == (long *)0x0) {
        func_0x0249fb90();
        unaff_x22 = (long *)0x0;
LAB_0366591c:
        func_0x0249fb90();
        goto LAB_03665920;
      }
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar28 + 0x3b) * 0x10 + 0x138);
            goto LAB_03665804;
          }
          uVar16 = uVar16 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar16 != 0);
      }
      param_3 = (long *)0x3b;
      puVar10 = (undefined8 *)func_0x024d927c(plVar9);
LAB_03665804:
      unaff_x22 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (unaff_x22 == (long *)0x0) goto LAB_0366591c;
      lVar12 = *unaff_x22;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059cd750) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_03665868;
          }
          uVar16 = uVar16 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(unaff_x22,_DAT_059cd750,1);
LAB_03665868:
      param_4 = puVar10[1];
      param_3 = &lStack_138;
      uVar16 = (*(code *)*puVar10)(unaff_x22,uVar27);
    } while ((uVar16 & 1) == 0);
    if (lStack_138 == 0) {
LAB_03665920:
      func_0x0249fb90();
    }
    else {
      lVar12 = func_0x0353faac(lStack_138,0);
      if (lVar12 != 0) goto LAB_03665724;
      if (*(long *)(lVar26 + 0x220) != 0) {
        func_0x0387c29c(*(long *)(lVar26 + 0x220),uVar27,0);
        if (auVar50._8_8_ != 0) {
          uStack_114 = uVar7;
          uVar45 = func_0x0249fa6c(_DAT_059de988,&uStack_114);
          uVar45 = func_0x04414b40(_DAT_05a98900,uVar45,0);
          param_4 = 0;
          func_0x0367e6a8(auVar50._8_8_,_DAT_05a896e8,uVar45);
        }
        goto LAB_03665724;
      }
    }
    func_0x0249fb90();
  }
  auVar51 = func_0x0249fb90();
  uStack_158 = auVar51._0_8_;
  if (auVar51._8_4_ == 1) {
    plVar9 = (long *)func_0x054ed080(uStack_158);
    lVar12 = *plVar9;
    lStack_150 = lVar12;
    func_0x054ed090();
    puVar11 = (uint *)func_0x02a588f0(plStack_148,_DAT_05a032d0);
    if (lVar12 == 0) {
      return puVar11;
    }
    uStack_158 = func_0x0249fb88(lVar12);
  }
  func_0x023ea4b4(&lStack_150);
  func_0x0258f7ac(uStack_158);
  auVar50 = func_0x022bd790();
  uVar45 = auVar50._8_8_;
  lVar12 = auVar50._0_8_;
  puVar4 = auStack_1e0;
  uStack_1a0 = 0x36659b4;
  plVar9 = (long *)0x5e2d000;
  plStack_190 = unaff_x26;
  plStack_188 = unaff_x25;
  plStack_180 = unaff_x24;
  plStack_178 = unaff_x23;
  plStack_170 = unaff_x22;
  uStack_168 = uVar27;
  lStack_160 = lVar26;
  if ((bRam0000000005e2d6db & 1) == 0) {
    func_0x0249f8e4(&DAT_05a03300);
    func_0x0249f8e4(&DAT_05a03308);
    func_0x0249f8e4(&DAT_05a03310);
    func_0x0249f8e4(&DAT_05a17850);
    func_0x0249f8e4(&DAT_05a17840);
    func_0x0249f8e4(&DAT_05a17880);
    func_0x0249f8e4(&DAT_059cffe8);
    func_0x0249f8e4(&DAT_05a2a548);
    bRam0000000005e2d6db = 1;
  }
  plStack_1c0 = (long *)0x0;
  pplStack_1b8 = (long **)0x0;
  uStack_1b0 = 0;
  if (*(long *)(lVar12 + 0x220) == 0) goto LAB_03678234;
  unaff_x23 = (long *)&DAT_05a17840;
  unaff_x22 = (long *)func_0x0387b06c(*(long *)(lVar12 + 0x220),0);
  plVar9 = (long *)func_0x0249fb80(_DAT_059cffe8);
  func_0x0282ee2c(plVar9,_DAT_05a17840);
  if (unaff_x22 == (long *)0x0) goto LAB_03678234;
  unaff_x24 = (long *)&DAT_05a03308;
  unaff_x25 = (long *)&DAT_05a03310;
  unaff_x26 = (long *)&DAT_05a17850;
  unaff_x23 = (long *)&DAT_05a03300;
  param_3 = _DAT_05a2a548;
  func_0x0289471c(unaff_x22,&plStack_1d8);
  uStack_1b0 = uStack_1c8;
  pplStack_1b8 = pplStack_1d0;
  plStack_1c0 = plStack_1d8;
  plStack_1d8 = (long *)0x0;
  pplStack_1d0 = &plStack_1c0;
  uVar27 = func_0x02a5e710(&plStack_1c0,_DAT_05a03308);
  lVar26 = _DAT_05a03310;
  if ((uVar27 & 1) == 0) {
    puVar11 = (uint *)func_0x02a5ec10(&plStack_1c0,_DAT_05a03300);
    do {
      auVar49._8_8_ = plVar9;
      auVar49._0_8_ = lVar12;
      if (plVar9 != (long *)0x0) {
        if ((int)plVar9[3] < 1) {
          return puVar11;
        }
        uVar15 = 0x3678214;
        goto SUB_036783f0;
      }
LAB_03678234:
      auVar51 = func_0x0249fb90();
      uVar15 = auVar51._0_8_;
      if (auVar51._8_4_ != 1) goto LAB_03678278;
      puVar10 = (undefined8 *)func_0x054ed080();
      unaff_x22 = (long *)*puVar10;
      plStack_1d8 = unaff_x22;
      func_0x054ed090();
      puVar11 = (uint *)func_0x02a5ec10(pplStack_1d0,*unaff_x23);
    } while (unaff_x22 == (long *)0x0);
    uVar15 = func_0x0249fb88(unaff_x22);
LAB_03678278:
    func_0x02405c98(&plStack_1d8);
    func_0x0258f7ac(uVar15);
    uVar44 = 0x3678290;
    auVar49 = func_0x022bd790();
    plVar21 = auVar49._8_8_;
    auVar50._8_8_ = uVar15;
    auVar50._0_8_ = auVar49._0_8_;
  }
  else {
    lVar13 = *(long *)(_DAT_05a03310 + 0x20);
    uVar3 = *(ushort *)(lVar13 + 0x135);
    lVar14 = lVar13;
    if ((uVar3 & 1) == 0) {
      lVar14 = func_0x024d8f40();
      lVar13 = *(long *)(lVar26 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
    }
    param_3 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar13 = func_0x024d8f40();
    }
    uVar45 = func_0x0249f90c(&plStack_1c0,*(long *)(**(long **)(lVar13 + 0xc0) + 0x80) + 0x20);
    func_0x054ed0d0(&uStack_194,uVar45);
    plVar21 = (long *)(ulong)uStack_194;
    uVar44 = 0x36781c8;
    unaff_x22 = plVar21;
  }
  uStack_1e8 = auVar50._8_8_;
  uVar45 = auVar50._0_8_;
  puVar4 = auStack_210;
  uStack_200 = uVar44;
  plStack_1f8 = plVar9;
  lStack_1f0 = lVar12;
  if ((bRam0000000005e2d6d9 & 1) == 0) {
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059cd750);
    bRam0000000005e2d6d9 = 1;
  }
  uStack_208 = 0;
  plVar17 = (long *)func_0x0365f528(uVar45);
  plVar9 = (long *)0x5e2d000;
  if (plVar17 != (long *)0x0) {
    lVar26 = *plVar17;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x3b) * 0x10 + 0x138);
          goto LAB_0367833c;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    param_3 = (long *)0x3b;
    puVar10 = (undefined8 *)func_0x024d927c(plVar17);
LAB_0367833c:
    plVar18 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
    plVar9 = plVar17;
    if (plVar18 != (long *)0x0) {
      lVar26 = *plVar18;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059cd750) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_036783a8;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059cd750,1);
LAB_036783a8:
      uVar27 = (*(code *)*puVar10)(plVar18,(ulong)plVar21 & 0xffffffff,&uStack_208,puVar10[1]);
      if ((uVar27 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = func_0x033c3934(uStack_208,uVar45,0);
      }
      return (uint *)(ulong)(uVar7 & 1);
    }
  }
  uVar15 = 0x36783f0;
  auVar49 = func_0x0249fb90();
  auVar50._8_8_ = param_3;
  auVar50._0_8_ = (ulong)plVar21 & 0xffffffff;
SUB_036783f0:
  plVar21 = auVar50._8_8_;
  uVar44 = auVar49._0_8_;
  *(long **)(puVar4 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar4 + -0x58) = uVar15;
  *(long **)(puVar4 + -0x50) = unaff_x28;
  *(long **)(puVar4 + -0x48) = unaff_x27;
  *(long **)(puVar4 + -0x40) = unaff_x26;
  *(long **)(puVar4 + -0x38) = unaff_x25;
  *(long **)(puVar4 + -0x30) = unaff_x24;
  *(long **)(puVar4 + -0x28) = unaff_x23;
  *(long **)(puVar4 + -0x20) = unaff_x22;
  *(long **)(puVar4 + -0x18) = plVar9;
  *(long *)(puVar4 + -0x10) = auVar50._0_8_;
  *(undefined8 *)(puVar4 + -8) = uVar45;
  puVar38 = (undefined1 *)0x5e2d000;
  plVar9 = plVar21;
  if ((bRam0000000005e2d6da & 1) == 0) {
    func_0x0249f8e4(&DAT_05a364e0);
    func_0x0249f8e4(&DAT_05a032e8);
    func_0x0249f8e4(&DAT_05a032f0);
    func_0x0249f8e4(&DAT_05a032f8);
    func_0x0249f8e4(&DAT_059de988);
    func_0x0249f8e4(&DAT_05a17868);
    func_0x0249f8e4(&DAT_059e2940);
    func_0x0249f8e4(&DAT_05a2aba0);
    func_0x0249f8e4(&DAT_059e8cf8);
    func_0x0249f8e4(&DAT_05a7f4f8);
    func_0x0249f8e4(&DAT_05a89710);
    func_0x0249f8e4(&DAT_05a892a8);
    bRam0000000005e2d6da = 1;
  }
  *(undefined8 *)(puVar4 + -0x80) = 0;
  *(undefined8 *)(puVar4 + -0x78) = 0;
  *(undefined8 *)(puVar4 + -0x70) = 0;
  plVar17 = (long *)0x0;
  if (auVar49._8_8_ != 0) {
    unaff_x25 = (long *)&DAT_05a032f0;
    unaff_x26 = (long *)&DAT_05a032f8;
    unaff_x27 = (long *)&DAT_059e8cf8;
    unaff_x28 = (long *)&DAT_059e2940;
    unaff_x29 = (long *)&DAT_059de988;
    unaff_x24 = (long *)&DAT_05a364e0;
    func_0x028310e8(auVar49._8_8_,puVar4 + -0x98,_DAT_05a17868);
    *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x88);
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x90);
    *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x98);
    *(undefined8 *)(puVar4 + -0x98) = 0;
    *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x80;
    while( true ) {
      uVar27 = func_0x02a5d2d0(puVar4 + -0x80,_DAT_05a032f0);
      lVar26 = _DAT_05a032f8;
      if ((uVar27 & 1) == 0) {
        puVar11 = (uint *)func_0x02a5d2cc(puVar4 + -0x80,_DAT_05a032e8);
        return puVar11;
      }
      lVar14 = *(long *)(_DAT_05a032f8 + 0x20);
      uVar3 = *(ushort *)(lVar14 + 0x135);
      lVar12 = lVar14;
      if ((uVar3 & 1) == 0) {
        lVar12 = func_0x024d8f40();
        lVar14 = *(long *)(lVar26 + 0x20);
        uVar3 = *(ushort *)(lVar14 + 0x135);
      }
      uVar6 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar14 = func_0x024d8f40();
      }
      uVar45 = func_0x0249f90c(puVar4 + -0x80,
                               *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x054ed0d0(puVar4 + -100,uVar45,uVar6);
      uVar7 = *(uint *)(puVar4 + -100);
      puVar38 = (undefined1 *)(ulong)uVar7;
      plVar17 = (long *)func_0x0249fb80(_DAT_059e8cf8);
      plVar9 = (long *)0x0;
      param_4 = 0;
      func_0x03829318(plVar17,puVar38);
      if (plVar17 == (long *)0x0) break;
      param_4 = *(ulong *)(*plVar17 + 0x1a0);
      plVar9 = (long *)0x1;
      unaff_x23 = (long *)(**(code **)(*plVar17 + 0x198))(plVar17,uVar44);
      if (*(int *)(_DAT_059e2940 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      if (unaff_x23 == (long *)0x0) goto LAB_03678764;
      uVar27 = (**(code **)(*unaff_x23 + 0x138))
                         (unaff_x23,**(undefined8 **)(_DAT_059e2940 + 0xb8),
                          *(undefined8 *)(*unaff_x23 + 0x140));
      if ((uVar27 & 1) == 0) {
        puVar10 = (undefined8 *)
                  func_0x0249f90c(uVar44,*(long *)(**(long **)(*(long *)(_DAT_05a2aba0 + 0x20) +
                                                              0xc0) + 0x80) + 0x40);
        uVar15 = *puVar10;
        *(uint *)(puVar4 + -100) = uVar7;
        uVar45 = func_0x0249fa6c(_DAT_059de988,puVar4 + -100);
        uVar45 = func_0x044251ac(_DAT_05a89710,uVar45,unaff_x23,0);
        unaff_x23 = _DAT_05a364e0;
        lVar26 = _DAT_05a364e0[7];
        if (lVar26 == 0) {
          func_0x024d8f9c(_DAT_05a364e0);
          lVar26 = unaff_x23[7];
        }
        lVar26 = *(long *)(lVar26 + 0x10);
        if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x024d8f40();
        }
        if (*(int *)(lVar26 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        lVar26 = *(long *)(unaff_x23[7] + 0x10);
        if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = func_0x024d8f40();
        }
        func_0x03963ed4(uVar15,uVar45,**(undefined8 **)(lVar26 + 0xb8),0);
      }
      else if (plVar21 != (long *)0x0) {
        *(uint *)(puVar4 + -100) = uVar7;
        uVar45 = func_0x0249fa6c(_DAT_059de988,puVar4 + -100);
        uVar45 = func_0x04414b40(_DAT_05a892a8,uVar45,0);
        func_0x0367e6a8(plVar21,_DAT_05a7f4f8,uVar45,0);
      }
    }
    func_0x0249fb90();
LAB_03678764:
    func_0x0249fb90();
  }
  auVar51 = func_0x0249fb90();
  uVar45 = auVar51._0_8_;
  if (auVar51._8_4_ == 1) {
    plVar21 = (long *)func_0x054ed080(uVar45);
    lVar26 = *plVar21;
    *(long *)(puVar4 + -0x98) = lVar26;
    func_0x054ed090();
    puVar11 = (uint *)func_0x02a5d2cc(*(undefined8 *)(puVar4 + -0x90),_DAT_05a032e8);
    if (lVar26 == 0) {
      return puVar11;
    }
    uVar45 = func_0x0249fb88(lVar26);
  }
  func_0x023e884c(puVar4 + -0x98);
  func_0x0258f7ac(uVar45);
  lVar26 = func_0x022bd790();
  *(undefined8 *)(puVar4 + -0xb0) = 0x36787f8;
  *(undefined8 *)(puVar4 + -0xa8) = uVar45;
  func_0x0365ee8c();
  func_0x0365f584(lVar26);
  func_0x0365efcc(lVar26);
  plVar21 = (long *)(puVar4 + -0x280);
  *(long **)(puVar4 + -0xf0) = unaff_x29;
  *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0xb0);
  *(long **)(puVar4 + -0xd8) = unaff_x25;
  *(long **)(puVar4 + -0xd0) = unaff_x24;
  *(long **)(puVar4 + -200) = unaff_x23;
  *(undefined1 **)(puVar4 + -0xc0) = puVar38;
  *(long **)(puVar4 + -0xb8) = plVar17;
  *(undefined8 *)(puVar4 + -0xb0) = uVar44;
  *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
  uVar27 = 0x5e2d000;
  if ((bRam0000000005e2d63c & 1) == 0) {
    func_0x0249f8e4(&DAT_059d96c8);
    func_0x0249f8e4(&DAT_059def38);
    func_0x0249f8e4(&DAT_059df330);
    func_0x0249f8e4(&DAT_059e2ba0);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a28778);
    func_0x0249f8e4(&DAT_05a27fc8);
    func_0x0249f8e4(&DAT_05a28780);
    func_0x0249f8e4(&DAT_05a28788);
    func_0x0249f8e4(&DAT_05a27fd0);
    func_0x0249f8e4(&DAT_05a29a30);
    func_0x0249f8e4(&DAT_05a29a20);
    func_0x0249f8e4(&DAT_059d4038);
    func_0x0249f8e4(&DAT_059d4030);
    func_0x0249f8e4(&DAT_059e46b8);
    bRam0000000005e2d63c = 1;
  }
  *(undefined8 *)(puVar4 + -0x108) = 0;
  *(undefined8 *)(puVar4 + -0x100) = 0;
  *(undefined8 *)(puVar4 + -0x118) = 0;
  *(undefined8 *)(puVar4 + -0x110) = 0;
  *(undefined8 *)(puVar4 + -0x128) = 0;
  *(undefined8 *)(puVar4 + -0x120) = 0;
  *(undefined8 *)(puVar4 + -0x130) = 0;
  *(undefined8 *)(puVar4 + -0x1a8) = 0;
  *(undefined8 *)(puVar4 + -0x1b0) = 0;
  *(undefined8 *)(puVar4 + -0x198) = 0;
  *(undefined8 *)(puVar4 + -0x1a0) = 0;
  *(undefined8 *)(puVar4 + -0x188) = 0;
  *(undefined8 *)(puVar4 + -400) = 0;
  *(undefined8 *)(puVar4 + -0x178) = 0;
  *(undefined8 *)(puVar4 + -0x180) = 0;
  *(undefined8 *)(puVar4 + -0x168) = 0;
  *(undefined8 *)(puVar4 + -0x170) = 0;
  *(undefined8 *)(puVar4 + -0x158) = 0;
  *(undefined8 *)(puVar4 + -0x160) = 0;
  *(undefined8 *)(puVar4 + -0x148) = 0;
  *(undefined8 *)(puVar4 + -0x150) = 0;
  *(undefined8 *)(puVar4 + -0x138) = 0;
  *(undefined8 *)(puVar4 + -0x140) = 0;
  if (lVar26 != 0) {
    plVar18 = *(long **)(lVar26 + 0x558);
    uVar27 = 0;
    if (plVar18 != (long *)0x0) {
      lVar12 = *plVar18;
      unaff_x23 = (long *)&DAT_059def38;
      uVar27 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059def38) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03661350;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059def38,0);
LAB_03661350:
      puVar11 = (uint *)(*(code *)*puVar10)(plVar18,puVar10[1]);
      if (((ulong)puVar11 & 1) != 0) {
        return puVar11;
      }
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      auVar50 = func_0x0365608c(lVar26,3,0);
      *(undefined1 (*) [16])(puVar4 + -0x118) = auVar50;
      if (*(int *)(_DAT_059d4038 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      plVar9 = _DAT_05a29a30;
      puVar11 = (uint *)func_0x0288eda8(puVar4 + -0x118,puVar4 + -0x100);
      if (((ulong)puVar11 & 1) == 0) {
        return puVar11;
      }
      plVar18 = *(long **)(puVar4 + -0x100);
      uVar27 = 0;
      if (plVar18 != (long *)0x0) {
        lVar12 = *plVar18;
        plVar17 = (long *)&DAT_059df330;
        uVar27 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059df330) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar28 + 2) * 0x10 + 0x138);
              goto LAB_03661424;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059df330,2);
LAB_03661424:
        auVar50 = (*(code *)*puVar10)(plVar18,puVar10[1]);
        *(undefined1 (*) [16])(puVar4 + -0x128) = auVar50;
        if (*(int *)(_DAT_059d4030 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar9 = _DAT_05a29a20;
        puVar11 = (uint *)func_0x0288eda8(puVar4 + -0x128,puVar4 + -0x108);
        if (((ulong)puVar11 & 1) == 0) {
          return puVar11;
        }
        unaff_x24 = *(long **)(puVar4 + -0x108);
        if (unaff_x24 == (long *)0x0) {
          return puVar11;
        }
        if (*(byte *)(*unaff_x24 + 0x130) < *(byte *)(_DAT_059d96c8 + 0x130)) {
          return puVar11;
        }
        if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(_DAT_059d96c8 + 0x130) * 8 + -8
                     ) != _DAT_059d96c8) {
          return puVar11;
        }
        plVar18 = *(long **)(puVar4 + -0x100);
        uVar27 = 0;
        if (plVar18 != (long *)0x0) {
          lVar12 = *plVar18;
          uVar27 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059df330) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                goto LAB_03661520;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059df330,3);
LAB_03661520:
          (*(code *)*puVar10)(puVar4 + -0x1f8,plVar18,puVar10[1]);
          func_0x054ed0d0(puVar4 + -0x170,puVar4 + -0x1f8,0x48);
          lVar12 = *(long *)(_DAT_05a28780 + 0x20);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x024d8f40();
          }
          puVar11 = (uint *)func_0x0249f90c(puVar4 + -0x170,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80));
          lVar12 = _DAT_05a28778;
          if ((char)*puVar11 == '\0') {
            return puVar11;
          }
          lVar13 = *(long *)(_DAT_05a28778 + 0x20);
          uVar3 = *(ushort *)(lVar13 + 0x135);
          lVar14 = lVar13;
          if ((uVar3 & 1) == 0) {
            lVar13 = func_0x024d8f40(lVar13);
            uVar3 = *(ushort *)(*(long *)(lVar12 + 0x20) + 0x135);
            lVar14 = *(long *)(lVar12 + 0x20);
          }
          uVar27 = (ulong)*(uint *)(**(long **)(lVar13 + 0xc0) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar14 = func_0x024d8f40(lVar14);
          }
          uVar45 = func_0x0249f90c(puVar4 + -0x170,
                                   *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x20)
          ;
          func_0x054ed0d0(puVar4 + -0x1f8,uVar45,uVar27);
          *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -0x1d0);
          *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -0x1d8);
          *(undefined8 *)(puVar4 + -0x178) = *(undefined8 *)(puVar4 + -0x1c0);
          *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)(puVar4 + -0x1c8);
          lVar12 = *(long *)(_DAT_05a27fc8 + 0x20);
          puVar38 = puVar4 + -0x1b0;
          bVar2 = *(byte *)(lVar12 + 0x135);
          *(undefined8 *)(puVar4 + -0x1a8) = *(undefined8 *)(puVar4 + -0x1f0);
          *(undefined8 *)(puVar4 + -0x1b0) = *(undefined8 *)(puVar4 + -0x1f8);
          *(undefined8 *)(puVar4 + -0x198) = *(undefined8 *)(puVar4 + -0x1e0);
          *(undefined8 *)(puVar4 + -0x1a0) = *(undefined8 *)(puVar4 + -0x1e8);
          if ((bVar2 & 1) == 0) {
            lVar12 = func_0x024d8f40();
          }
          puVar11 = (uint *)func_0x0249f90c(puVar4 + -0x1a0,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80));
          if ((char)*puVar11 == '\0') {
            return puVar11;
          }
          plVar9 = (long *)0x0;
          if (*(long *)(puVar4 + -0x100) != 0) {
            func_0x023ebe38(puVar4 + -0x1f8,3,_DAT_059df330);
            func_0x054ed0d0(puVar4 + -0x170,puVar4 + -0x1f8,0x48);
            unaff_x25 = (long *)&DAT_05a28788;
            func_0x02886844(puVar4 + -0x170,puVar4 + -0x240,_DAT_05a28788);
            plVar9 = (long *)0x0;
            if (*(long *)(puVar4 + -0x100) != 0) {
              uVar45 = *(undefined8 *)(puVar4 + -0x238);
              func_0x023ebe38(puVar4 + -0x240,3,_DAT_059df330);
              func_0x054ed0d0(puVar4 + -0x170,puVar4 + -0x240,0x48);
              func_0x02886844(puVar4 + -0x170,puVar4 + -0x280,_DAT_05a28788);
              *(undefined8 *)(puVar4 + -0x1a8) = *(undefined8 *)(puVar4 + -0x278);
              *(undefined8 *)(puVar4 + -0x1b0) = *(undefined8 *)(puVar4 + -0x280);
              *(undefined8 *)(puVar4 + -0x198) = *(undefined8 *)(puVar4 + -0x268);
              *(undefined8 *)(puVar4 + -0x1a0) = *(undefined8 *)(puVar4 + -0x270);
              *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -600);
              *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -0x260);
              *(undefined8 *)(puVar4 + -0x178) = *(undefined8 *)(puVar4 + -0x248);
              *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)(puVar4 + -0x250);
              func_0x02886844(puVar4 + -0x1a0,puVar4 + -0xf8,_DAT_05a27fd0);
              uVar15 = *(undefined8 *)(puVar4 + -0xf8);
              if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              plVar9 = (long *)0x0;
              puVar38 = (undefined1 *)func_0x0430dcac(uVar15,uVar45);
              plVar17 = *(long **)(lVar26 + 0x558);
              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059e2c00);
              }
              uVar27 = func_0x03530158(uVar45,0);
              if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059e2be8);
              }
              uVar45 = func_0x0352ed34(puVar38,0);
              if (plVar17 != (long *)0x0) {
                param_4 = uVar27;
                func_0x0240b718(5,_DAT_059def38,plVar17,uVar27,uVar45,1,
                                *(undefined8 *)(lVar26 + 0x1e0));
                plVar9 = (long *)0x0;
                if (*(long *)(lVar26 + 0x558) != 0) {
                  puVar11 = (uint *)func_0x023ed060(6,_DAT_059def38,*(long *)(lVar26 + 0x558),
                                                    (char)unaff_x24[3],
                                                    *(undefined8 *)(lVar26 + 0x1e0));
                  return puVar11;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar8 = (uint *)func_0x0249fb90();
  *(undefined8 *)(puVar4 + -0x2a0) = 0x36617bc;
  *(ulong *)(puVar4 + -0x290) = uVar27;
  *(long *)(puVar4 + -0x288) = lVar26;
  puVar11 = puVar8;
  if ((bRam0000000005e2d63d & 1) == 0) {
    puVar11 = (uint *)func_0x0249f8e4(&DAT_059dc880);
    bRam0000000005e2d63d = 1;
  }
  if (puVar8 == (uint *)0x0) {
    lVar26 = func_0x0249fb90();
    if (lVar26 == 0) {
      *(undefined8 *)(puVar4 + -0x2b0) = 0x3661850;
      func_0x0249fb90();
      *(undefined8 *)(puVar4 + -0x2d0) = 0x3661870;
      *(undefined8 *)(puVar4 + -0x2c0) = 0x5e2d000;
      *(undefined8 *)(puVar4 + -0x2b8) = 0;
      if ((bRam0000000005e2d63e & 1) == 0) {
        func_0x0249f8e4(&DAT_059f1750);
        bRam0000000005e2d63e = 1;
      }
      uVar45 = func_0x0249fb80(_DAT_059f1750);
      func_0x045ecdec(uVar45,0);
      **(undefined8 **)(_DAT_059f1750 + 0xb8) = uVar45;
      puVar11 = *(uint **)(_DAT_059f1750 + 0xb8);
      if (iRam0000000006058428 != 0) {
        *(undefined8 *)(puVar4 + -0x2c0) = *(undefined8 *)(puVar4 + -0x2d0);
        puVar11 = (uint *)func_0x0258f520(1L << ((ulong)puVar11 >> 0xc & 0x3f),
                                          ((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
      }
      return puVar11;
    }
    lVar26 = *(long *)(lVar26 + 0x440);
    if (lVar26 == 0) {
      return (uint *)0x0;
    }
    *(undefined8 *)(puVar4 + -0x2c0) = 0x3661850;
    *(long **)(puVar4 + -0x2b8) = plVar17;
    *(undefined8 *)(puVar4 + -0x2b0) = 0x5e2d000;
    *(undefined8 *)(puVar4 + -0x2a8) = 0;
    if ((bRam0000000005e2d710 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a1b0c8,0);
      func_0x0249f8e4(&DAT_05a1b0e0);
      bRam0000000005e2d710 = 1;
    }
    lVar12 = *(long *)(lVar26 + 0x30);
    if (lVar12 != 0) {
      uVar7 = *(uint *)(lVar12 + 0x18);
      lVar14 = *(long *)(_DAT_05a1b0c8 + 0x20);
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar27 = func_0x024a067c(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 200));
      if ((uVar27 & 1) == 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
      }
      else {
        iVar5 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        if (0 < iVar5) {
          func_0x045cd698(*(undefined8 *)(lVar12 + 0x10),0,iVar5,0);
        }
      }
      *(undefined8 *)(lVar26 + 0x20) = 0;
      *(undefined8 *)(lVar26 + 0x28) = 0;
      return (uint *)(ulong)uVar7;
    }
    auVar50 = func_0x0249fb90();
    *(undefined8 *)(puVar4 + -0x2f0) = 0x367dfec;
    *(long **)(puVar4 + -0x2e8) = unaff_x23;
    *(undefined1 **)(puVar4 + -0x2e0) = puVar38;
    *(undefined8 *)(puVar4 + -0x2d8) = 0;
    *(undefined8 *)(puVar4 + -0x2d0) = 0x5e2d000;
    *(long *)(puVar4 + -0x2c8) = lVar26;
    puVar10 = (undefined8 *)0x5e2d000;
    plVar21 = plVar9;
    if ((bRam0000000005e2d712 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a19b80);
      func_0x0249f8e4(&DAT_05a21ca8);
      bRam0000000005e2d712 = 1;
    }
    *(undefined8 *)(puVar4 + -0x330) = 0x367e044;
    *(undefined1 (*) [16])(puVar4 + -0x328) = auVar50;
    *(long **)(puVar4 + -0x318) = plVar9;
    if ((bRam0000000005e2d713 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a21c88);
      bRam0000000005e2d713 = 1;
    }
    lVar26 = *(long *)(auVar50._0_8_ + 0x10);
    if (lVar26 == 0) {
      auVar49 = func_0x0249fb90();
      plVar17 = auVar49._8_8_;
      *(undefined8 *)(puVar4 + -0x360) = 0x367e134;
      *(ulong *)(puVar4 + -0x350) = param_4;
      *(undefined8 *)(puVar4 + -0x348) = 0x5e2d000;
      *(long *)(puVar4 + -0x340) = auVar50._0_8_;
      *(long **)(puVar4 + -0x338) = plVar9;
      if ((bRam0000000005e2d714 & 1) == 0) {
        func_0x0249f8e4(&DAT_05a21c98);
        bRam0000000005e2d714 = 1;
      }
      lVar26 = *(long *)(auVar49._0_8_ + 0x10);
      if (lVar26 == 0) {
        auVar50 = func_0x0249fb90();
        *(undefined8 *)(puVar4 + -0x3b0) = 0x367e19c;
        *(long **)(puVar4 + -0x3a0) = unaff_x26;
        *(long **)(puVar4 + -0x398) = unaff_x25;
        *(long **)(puVar4 + -0x390) = unaff_x24;
        *(undefined8 *)(puVar4 + -0x388) = 0x5e2d000;
        *(undefined8 *)(puVar4 + -0x380) = 0x5e2d000;
        *(undefined1 (*) [16])(puVar4 + -0x378) = auVar49;
        *(long **)(puVar4 + -0x368) = plVar21;
        puVar11 = auVar50._0_8_;
        if ((bRam0000000005e2d715 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a19b90);
          func_0x0249f8e4(&DAT_05a19b98);
          func_0x0249f8e4(&DAT_05a19ba0);
          func_0x0249f8e4(&DAT_05a30320);
          puVar11 = (uint *)func_0x0249f8e4(&DAT_059d54b8);
          bRam0000000005e2d715 = 1;
        }
        lVar26 = *(long *)(auVar50._0_8_ + 6);
        if (lVar26 != 0) {
          iVar5 = *(int *)(lVar26 + 0x18);
          if (0 < iVar5) {
            iVar35 = 0;
            do {
              func_0x0282f3c4(lVar26,iVar35,puVar4 + -0x3c0,_DAT_05a19ba0);
              uVar45 = *(undefined8 *)(puVar4 + -0x3b8);
              if (*(int *)(_DAT_059d54b8 + 0xe4) == 0) {
                func_0x0249fa64();
              }
              puVar11 = (uint *)func_0x02903704(uVar45,auVar50._8_8_,_DAT_05a30320);
              if (((ulong)puVar11 & 1) != 0) {
                puVar11 = (uint *)func_0x02832544(lVar26,iVar35,_DAT_05a19b90);
                return puVar11;
              }
              iVar35 = iVar35 + 1;
            } while (iVar5 != iVar35);
          }
          return puVar11;
        }
        auVar49 = func_0x0249fb90();
        *(undefined8 *)(puVar4 + -0x410) = 0x367e2c0;
        *(long **)(puVar4 + -0x400) = unaff_x26;
        *(long **)(puVar4 + -0x3f8) = unaff_x25;
        *(long **)(puVar4 + -0x3f0) = unaff_x24;
        *(undefined8 *)(puVar4 + -1000) = 0x5e2d000;
        *(undefined8 *)(puVar4 + -0x3e0) = 0x5e2d000;
        *(undefined8 *)(puVar4 + -0x3d8) = 0x5e2d000;
        *(undefined8 *)(puVar4 + -0x3d0) = 0;
        *(long *)(puVar4 + -0x3c8) = auVar50._8_8_;
        if ((bRam0000000005e2d716 & 1) == 0) {
          func_0x0249f8e4(&DAT_05a04338);
          func_0x0249f8e4(&DAT_05a04340);
          func_0x0249f8e4(&DAT_05a04348);
          func_0x0249f8e4(&DAT_05a19b88);
          func_0x0249f8e4(&DAT_05a30320);
          func_0x0249f8e4(&DAT_059d54b8);
          bRam0000000005e2d716 = 1;
        }
        lVar26 = *(long *)(auVar49._0_8_ + 0x18);
        *(undefined8 *)(puVar4 + -0x438) = 0;
        *(undefined8 *)(puVar4 + -0x440) = 0;
        *(undefined8 *)(puVar4 + -0x428) = 0;
        *(undefined8 *)(puVar4 + -0x430) = 0;
        if (lVar26 != 0) {
          func_0x028310e8(lVar26,puVar4 + -0x440,_DAT_05a19b88);
          *(undefined8 *)(puVar4 + -0x450) = 0;
          *(undefined1 **)(puVar4 + -0x448) = puVar4 + -0x440;
          do {
            uVar7 = func_0x02a5d2d0(puVar4 + -0x440,_DAT_05a04340);
            lVar26 = _DAT_05a04348;
            if ((uVar7 & 1) == 0) break;
            lVar14 = *(long *)(_DAT_05a04348 + 0x20);
            uVar3 = *(ushort *)(lVar14 + 0x135);
            lVar12 = lVar14;
            if ((uVar3 & 1) == 0) {
              lVar12 = func_0x024d8f40();
              lVar14 = *(long *)(lVar26 + 0x20);
              uVar3 = *(ushort *)(lVar14 + 0x135);
            }
            uVar6 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
            if ((uVar3 & 1) == 0) {
              lVar14 = func_0x024d8f40();
            }
            uVar45 = func_0x0249f90c(puVar4 + -0x440,
                                     *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) +
                                     0x60);
            func_0x054ed0d0(puVar4 + -0x420,uVar45,uVar6);
            uVar45 = *(undefined8 *)(puVar4 + -0x418);
            if (*(int *)(_DAT_059d54b8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar27 = func_0x02903704(uVar45,auVar49._8_8_,_DAT_05a30320);
          } while ((uVar27 & 1) == 0);
          func_0x02a5d2cc(puVar4 + -0x440,_DAT_05a04338);
LAB_0367e444:
          return (uint *)(ulong)(uVar7 & 1);
        }
        auVar51 = func_0x0249fb90();
        uVar45 = auVar51._0_8_;
        if (auVar51._8_4_ == 1) {
          plVar9 = (long *)func_0x054ed080(uVar45);
          lVar26 = *plVar9;
          *(long *)(puVar4 + -0x450) = lVar26;
          func_0x054ed090();
          func_0x02a5d2cc(*(undefined8 *)(puVar4 + -0x448),uRam0000000005e2d000);
          if (lVar26 == 0) {
            uVar7 = 0;
            goto LAB_0367e444;
          }
          uVar45 = func_0x0249fb88(lVar26);
        }
        func_0x0240bb94(puVar4 + -0x450);
        func_0x0258f7ac(uVar45);
        func_0x022bd790();
        *(undefined8 *)(puVar4 + -0x470) = 0x367e4cc;
        *(long *)(puVar4 + -0x460) = auVar49._0_8_;
        *(undefined8 *)(puVar4 + -0x458) = uVar45;
        if ((bRam0000000005e2d717 & 1) == 0) {
          func_0x0249f8e4(&DAT_059e29f8);
          func_0x0249f8e4(&DAT_059e4908);
          bRam0000000005e2d717 = 1;
        }
        if (*(int *)(_DAT_059e29f8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar11 = (uint *)func_0x04253b14(1,0);
        **(undefined8 **)(_DAT_059e4908 + 0xb8) = puVar11;
        return puVar11;
      }
      auVar46._8_8_ = *(undefined8 *)(puVar4 + -0x340);
      auVar46._0_8_ = lVar26;
      lVar26 = *(long *)(puVar4 + -0x338);
      plVar9 = *(long **)(puVar4 + -0x350);
      plVar18 = *(long **)(puVar4 + -0x348);
      plVar19 = (long *)(puVar4 + -0x330);
      lVar14 = *(long *)(puVar4 + -0x360);
      lVar12 = _DAT_05a21c98;
    }
    else {
      *(long **)(puVar4 + -0x370) = unaff_x29;
      *(undefined8 *)(puVar4 + -0x368) = *(undefined8 *)(puVar4 + -0x330);
      *(long **)(puVar4 + -0x360) = unaff_x27;
      *(long **)(puVar4 + -0x350) = unaff_x26;
      *(long **)(puVar4 + -0x348) = unaff_x25;
      *(long **)(puVar4 + -0x340) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x338) = 0x5e2d000;
      *(ulong *)(puVar4 + -0x330) = param_4;
      *(undefined8 *)(puVar4 + -0x328) = *(undefined8 *)(puVar4 + -0x328);
      *(undefined8 *)(puVar4 + -800) = *(undefined8 *)(puVar4 + -800);
      *(undefined8 *)(puVar4 + -0x318) = *(undefined8 *)(puVar4 + -0x318);
      unaff_x25 = (long *)tpidr_el0;
      *(long *)(puVar4 + -0x378) = unaff_x25[5];
      lVar12 = *(long *)(_DAT_05a21c88 + 0x20);
      *(long **)(puVar4 + -0x380) = plVar9;
      unaff_x26 = *(long **)(lVar12 + 0xc0);
      lVar12 = unaff_x26[0xc];
      uVar7 = *(uint *)(lVar12 + 0xfc);
      uVar16 = (ulong)uVar7;
      auVar46._8_4_ = uVar7;
      auVar46._0_8_ = lVar26;
      auVar46._12_4_ = 0;
      uVar27 = uVar16 + 0xf & 0x1fffffff0;
      puVar10 = (undefined8 *)(puVar4 + (-0x380 - uVar27));
      plVar17 = (long *)((long)puVar10 - uVar27);
      plVar19 = (long *)((long)plVar17 -
                        ((ulong)*(uint *)(unaff_x26[0xe] + 0xfc) + 0xf & 0x1fffffff0));
      func_0x054ed120(plVar19,0);
      uVar7 = *(uint *)(lVar12 + 0x28);
      unaff_x24 = plVar9;
      if (-1 < (int)uVar7) {
        unaff_x24 = (long *)(puVar4 + -0x380);
      }
      func_0x054ed0d0(puVar10,unaff_x24,uVar16);
      if ((int)uVar7 < 0) {
        func_0x054ed0d0(plVar17,unaff_x24,uVar16);
      }
      else {
        plVar17 = (long *)*puVar10;
      }
      lVar14 = 0x2851f84;
      plVar21 = plVar19;
      lVar12 = unaff_x26[0x25];
      plVar18 = plVar17;
      plVar9 = plVar19;
      unaff_x27 = (long *)(ulong)uVar7;
      unaff_x29 = (long *)(puVar4 + -0x370);
    }
    do {
      puVar39 = auVar46._0_8_;
      plVar19[-0xc] = (long)unaff_x29;
      plVar19[-0xb] = lVar14;
      plVar19[-10] = (long)unaff_x28;
      plVar19[-9] = (long)unaff_x27;
      plVar19[-8] = (long)unaff_x26;
      plVar19[-7] = (long)unaff_x25;
      plVar19[-6] = (long)unaff_x24;
      plVar19[-5] = (long)puVar10;
      plVar19[-4] = (long)plVar9;
      plVar19[-3] = (long)plVar18;
      plVar19[-2] = auVar46._8_8_;
      plVar19[-1] = lVar26;
      uVar27 = tpidr_el0;
      plVar19[-0xd] = *(long *)(uVar27 + 0x28);
      lVar26 = *(long *)(lVar12 + 0x20);
      plVar19[-0xf] = lVar12;
      plVar19[-0xe] = (long)plVar17;
      lVar13 = *(long *)(lVar26 + 0xc0);
      lVar26 = *(long *)(lVar13 + 0x60);
      uVar29 = (ulong)*(uint *)(lVar26 + 0xfc);
      uVar16 = (ulong)*(uint *)(*(long *)(lVar13 + 0x70) + 0xfc);
      uVar41 = uVar29 + 0xf & 0x1fffffff0;
      puVar31 = (ulong *)((long)plVar19 + (-0xa0 - uVar41));
      uVar43 = (long)puVar31 - uVar41;
      plVar18 = (long *)(uVar43 - uVar41);
      lVar33 = (long)plVar18 - uVar41;
      lVar14 = lVar33 - (uVar16 + 0xf & 0x1fffffff0);
      plVar19[-0x10] = lVar14;
      if (puVar39[2] == 0) {
LAB_0285223c:
        puVar39 = puVar10;
        func_0x054ed120(plVar21,0);
        puVar11 = (uint *)0x0;
LAB_02852244:
        plVar21 = plVar9;
        plVar17 = unaff_x25;
        if (*(long *)(uVar27 + 0x28) == plVar19[-0xd]) {
          return puVar11;
        }
      }
      else {
        plVar19[-0x11] = uVar27;
        uVar7 = *(uint *)(lVar26 + 0x28);
        uVar27 = (ulong)uVar7;
        plVar19[-0x13] = uVar16;
        plVar19[-0x12] = (long)plVar21;
        plVar21 = plVar17;
        if (-1 < (int)uVar7) {
          plVar21 = plVar19 + -0xe;
        }
        uVar16 = uVar29;
        func_0x054ed0d0(puVar31,plVar21);
        if ((int)uVar7 < 0) {
          uVar16 = uVar29;
          func_0x054ed0d0(uVar43,plVar21);
        }
        else {
          uVar43 = *puVar31;
        }
        puVar11 = (uint *)func_0x0286a148(uVar43,*(undefined8 *)(lVar13 + 0x138));
        uVar43 = (ulong)puVar11 & 0xffffffff;
        if (puVar39[3] == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = *(int *)(puVar39[3] + 0x18) - 1;
        }
        lVar26 = puVar39[2];
        if (lVar26 == 0) {
          lVar26 = *(long *)(plVar19[-0x11] + 0x28);
LAB_02852290:
          if (lVar26 != plVar19[-0xd]) goto LAB_028522b4;
          puVar11 = (uint *)func_0x0249fb90();
LAB_028522a0:
          lVar26 = *(long *)(uVar27 + 0x28);
        }
        else {
          uVar7 = uVar7 & (uint)puVar11;
          if (uVar7 < *(uint *)(lVar26 + 0x18)) {
            puVar31 = (ulong *)(ulong)*(uint *)(lVar26 + (long)(int)uVar7 * 4 + 0x20);
            lVar13 = *(long *)(*(long *)(plVar19[-0xf] + 0x20) + 0xc0);
            iVar5 = *(int *)(*(long *)(lVar13 + 0x60) + 0x28);
            plVar9 = plVar17;
            if (-1 < iVar5) {
              plVar9 = plVar19 + -0xe;
            }
            func_0x054ed0d0(plVar18,plVar9,uVar29);
            if (iVar5 < 0) {
              func_0x054ed0d0(lVar33,plVar9,uVar29);
            }
            else {
              lVar33 = *plVar18;
            }
            plVar21 = (long *)plVar19[-0x12];
            uVar16 = (ulong)puVar11 & 0xffffffff;
            lVar12 = lVar33;
            puVar11 = (uint *)func_0x028537bc(puVar39,puVar31,uVar16,lVar33,
                                              *(undefined8 *)(lVar13 + 0x150));
            uVar27 = plVar19[-0x11];
            uVar7 = (uint)puVar11;
            plVar9 = plVar21;
            unaff_x25 = plVar17;
            if (uVar7 == 0xffffffff) {
              uVar16 = plVar19[-0x13];
              puVar10 = puVar39;
              goto LAB_0285223c;
            }
            plVar20 = (long *)puVar39[3];
            if (plVar20 == (long *)0x0) {
              lVar26 = *(long *)(uVar27 + 0x28);
              goto LAB_02852290;
            }
            uVar29 = plVar19[-0x10];
            if (*(uint *)(plVar20 + 3) <= uVar7) goto LAB_028522a0;
            lVar13 = plVar19[-0xf];
            uVar45 = func_0x0249f90c((long)plVar20 +
                                     (ulong)*(uint *)(*plVar20 + 0x104) * (long)(int)uVar7 + 0x20,
                                     *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                        + 0x158) + 0x80) + 0xa0);
            puVar31 = (ulong *)func_0x0249f90c(uVar45,*(long *)(*(long *)(*(long *)(*(long *)(lVar13
                                                                                             + 0x20)
                                                                                   + 0xc0) + 0xb0) +
                                                               0x80) + 0x20);
            puVar39 = (undefined8 *)plVar19[-0x13];
            func_0x054ed0d0(uVar29,puVar31,puVar39);
            func_0x054ed0e0(plVar21,puVar31,puVar39);
            lVar26 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = func_0x024d8f40();
            }
            uVar16 = uVar29;
            func_0x0249f88c(lVar26,plVar21);
            puVar11 = (uint *)0x1;
            goto LAB_02852244;
          }
          lVar26 = *(long *)(plVar19[-0x11] + 0x28);
        }
        if (lVar26 == plVar19[-0xd]) {
          puVar11 = (uint *)func_0x0249fb98();
        }
      }
LAB_028522b4:
      auVar46 = func_0x054ed0f0(puVar11);
      unaff_x25 = auVar46._0_8_;
      unaff_x29 = (long *)(lVar14 + -0x60);
      *(long **)(lVar14 + -0x60) = plVar19 + -0xc;
      *(undefined8 *)(lVar14 + -0x58) = 0x28522b8;
      *(ulong *)(lVar14 + -0x50) = uVar43;
      *(long **)(lVar14 + -0x48) = plVar18;
      *(long *)(lVar14 + -0x40) = lVar33;
      *(long **)(lVar14 + -0x38) = plVar17;
      *(ulong *)(lVar14 + -0x30) = uVar29;
      *(undefined8 **)(lVar14 + -0x28) = puVar39;
      *(long **)(lVar14 + -0x20) = plVar21;
      *(long *)(lVar14 + -0x18) = lVar13;
      *(ulong *)(lVar14 + -0x10) = uVar27;
      *(ulong **)(lVar14 + -8) = puVar31;
      lVar26 = tpidr_el0;
      *(ulong *)(lVar14 + -0x80) = uVar16;
      *(long *)(lVar14 + -0x78) = lVar26;
      *(undefined8 *)(lVar14 + -0x68) = *(undefined8 *)(lVar26 + 0x28);
      lVar26 = *(long *)(lVar12 + 0x20);
      *(long *)(lVar14 + -0x88) = lVar12;
      *(long **)(lVar14 + -0x70) = auVar46._8_8_;
      lVar26 = *(long *)(lVar26 + 0xc0);
      lVar12 = *(long *)(lVar26 + 0x60);
      plVar18 = (long *)(ulong)*(uint *)(lVar12 + 0xfc);
      unaff_x24 = (long *)(ulong)*(uint *)(*(long *)(lVar26 + 0x70) + 0xfc);
      uVar27 = (ulong)((long)plVar18 + 0xf) & 0x1fffffff0;
      plVar9 = (long *)((lVar14 + -0x90) - uVar27);
      plVar17 = (long *)((long)plVar9 - uVar27);
      plVar19 = (long *)((long)plVar17 - ((ulong)((long)unaff_x24 + 0xf) & 0x1fffffff0));
      func_0x054ed120(plVar19,0,unaff_x24);
      uVar7 = *(uint *)(lVar12 + 0x28);
      puVar10 = (undefined8 *)(ulong)uVar7;
      unaff_x28 = auVar46._8_8_;
      if (-1 < (int)uVar7) {
        unaff_x28 = (long *)(lVar14 + -0x70);
      }
      func_0x054ed0d0(plVar9,unaff_x28,plVar18);
      if ((int)uVar7 < 0) {
        func_0x054ed0d0(plVar17,unaff_x28,plVar18);
      }
      else {
        plVar17 = (long *)*plVar9;
      }
      lVar14 = 0x28523a4;
      plVar21 = plVar19;
      lVar12 = *(long *)(lVar26 + 0x128);
      unaff_x26 = plVar19;
      unaff_x27 = plVar17;
    } while( true );
  }
  lVar26 = *(long *)(puVar8 + 0x88);
  if ((lVar26 == 0) || (puVar11 = (uint *)func_0x0387e780(lVar26,0xb8,0), ((ulong)puVar11 & 1) == 0)
     ) {
    return puVar11;
  }
  if (*(int *)(_DAT_059dc880 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  plVar9 = *(long **)(*(long *)(_DAT_059dc880 + 0xb8) + 0x30);
  *(undefined8 *)(puVar4 + -0x2a0) = *(undefined8 *)(puVar4 + -0x2a0);
  *(long **)(puVar4 + -0x298) = plVar17;
  *(undefined8 *)(puVar4 + -0x290) = *(undefined8 *)(puVar4 + -0x290);
  *(undefined8 *)(puVar4 + -0x288) = *(undefined8 *)(puVar4 + -0x288);
  if ((bRam0000000005e2ead3 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a2a498,plVar9,0);
    func_0x0249f8e4(&DAT_05a30260);
    func_0x0249f8e4(&DAT_059d5488);
    bRam0000000005e2ead3 = 1;
  }
  puVar11 = (uint *)func_0x0387a32c(lVar26,plVar9);
  if (((ulong)puVar11 & 1) != 0) {
    return puVar11;
  }
  if (*(int *)(_DAT_059d5488 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar6 = (undefined4)_DAT_05a30260;
  puVar11 = (uint *)func_0x02903704(plVar9,0);
  if (((ulong)puVar11 & 1) != 0) {
    return puVar11;
  }
  if (*(long **)(lVar26 + 0x110) == (long *)0x0) {
    auVar50 = func_0x0249fb90();
    *(undefined8 *)(puVar4 + -0x2c0) = 0x387a444;
    *(undefined **)(puVar4 + -0x2b8) = &DAT_05a30260;
    *(long *)(puVar4 + -0x2b0) = lVar26;
    *(long **)(puVar4 + -0x2a8) = plVar9;
    if ((bRam0000000005e2ead4 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a2a4b0);
      bRam0000000005e2ead4 = 1;
    }
    lVar26 = *(long *)(auVar50._0_8_ + 0x110);
    auVar48._8_8_ = auVar50._8_8_;
    auVar48._0_8_ = lVar26;
    if (lVar26 == 0) {
      auVar49 = func_0x0249fb90();
      plVar9 = auVar49._8_8_;
      *(undefined8 *)(puVar4 + -0x2f0) = 0x387a49c;
      *(undefined1 **)(puVar4 + -0x2e0) = puVar38;
      *(undefined8 *)(puVar4 + -0x2d8) = 0x5e2e000;
      *(undefined1 (*) [16])(puVar4 + -0x2d0) = auVar50;
      if ((bRam0000000005e2ead5 & 1) == 0) {
        func_0x0249f8e4(&DAT_059e0220);
        bRam0000000005e2ead5 = 1;
      }
      *(undefined4 *)(auVar49._0_8_ + 0x10) = uVar6;
      if (plVar9 == (long *)0x0) {
        lVar26 = func_0x0249fb90();
        return (uint *)(ulong)*(uint *)(lVar26 + 0x10);
      }
      lVar26 = *plVar9;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059e0220) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 0x88) * 0x10 + 0x138);
            goto LAB_0387a534;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0220,0x88);
LAB_0387a534:
                    /* WARNING: Could not recover jumptable at 0x0387a54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (uint *)(*(code *)*puVar10)(plVar9,3,puVar10[1]);
      return puVar11;
    }
    plVar9 = *(long **)(puVar4 + -0x2b0);
    puVar37 = puVar4 + -0x2a0;
    uVar45 = *(undefined8 *)(puVar4 + -0x2c0);
    auVar47._8_8_ = *(undefined8 *)(puVar4 + -0x2b8);
    auVar47._0_8_ = *(undefined8 *)(puVar4 + -0x2a8);
    plVar17 = _DAT_05a2a4b0;
  }
  else {
    plVar19 = *(long **)(puVar4 + -0x290);
    plVar20 = *(long **)(puVar4 + -0x288);
    lVar12 = *(long *)(puVar4 + -0x2a0);
    plVar18 = *(long **)(puVar4 + -0x298);
    plVar42 = *(long **)(lVar26 + 0x110);
    lVar26 = _DAT_05a2a498;
SUB_028926c4:
    plVar21[-10] = (long)unaff_x29;
    plVar21[-9] = lVar12;
    plVar21[-8] = (long)unaff_x26;
    plVar21[-7] = (long)unaff_x25;
    plVar21[-6] = (long)unaff_x24;
    plVar21[-5] = (long)unaff_x23;
    plVar21[-4] = (long)puVar38;
    plVar21[-3] = (long)plVar18;
    plVar21[-2] = (long)plVar19;
    plVar21[-1] = (long)plVar20;
    lVar12 = tpidr_el0;
    plVar21[-0xb] = *(long *)(lVar12 + 0x28);
    lVar26 = *(long *)(lVar26 + 0x20);
    plVar21[-0xc] = (long)plVar9;
    uVar41 = *(ulong *)(lVar26 + 0xc0);
    uVar16 = (ulong)*(uint *)(*(long *)(uVar41 + 0x60) + 0xfc);
    uVar27 = uVar16 + 0xf & 0x1fffffff0;
    puVar10 = (undefined8 *)((long)plVar21 + (-0x60 - uVar27));
    plVar17 = (long *)((long)puVar10 - uVar27);
    uVar7 = *(uint *)(*(long *)(uVar41 + 0x60) + 0x28);
    if (-1 < (int)uVar7) {
      plVar9 = plVar21 + -0xc;
    }
    func_0x054ed0d0(puVar10,plVar9,uVar16);
    if ((int)uVar7 < 0) {
      func_0x054ed0d0(plVar17,plVar9,uVar16);
      plVar18 = plVar17;
    }
    else {
      plVar18 = (long *)*puVar10;
    }
    plVar25 = *(long **)(uVar41 + 0xb0);
    plVar17[-0xc] = (long)(plVar21 + -10);
    plVar17[-0xb] = 0x2892770;
    plVar17[-10] = (long)unaff_x28;
    plVar17[-9] = (long)unaff_x27;
    plVar17[-8] = (ulong)uVar7;
    plVar17[-7] = uVar41;
    plVar17[-6] = lVar12;
    plVar17[-5] = (long)plVar9;
    plVar17[-4] = (long)puVar10;
    plVar17[-3] = (long)plVar18;
    plVar17[-2] = uVar16;
    plVar17[-1] = (long)plVar42;
    lVar26 = tpidr_el0;
    plVar17[-0x17] = lVar26;
    plVar17[-0xd] = *(long *)(lVar26 + 0x28);
    lVar12 = plVar25[4];
    plVar17[-0xe] = (long)plVar18;
    plVar9 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x60) + 0xfc);
    uVar27 = (ulong)((long)plVar9 + 0xf) & 0x1fffffff0;
    plVar21 = (long *)((long)plVar17 + (-0xc0 - uVar27));
    plVar17[-0x15] = (long)plVar21 - uVar27;
    lVar33 = ((long)plVar21 - uVar27) - uVar27;
    lVar14 = lVar33 - uVar27;
    plVar17[-0x16] = lVar14;
    lVar26 = plVar42[6];
    lVar13 = plVar42[2];
    *(undefined4 *)((long)plVar17 + -0x74) = 0;
    *(int *)(plVar42 + 6) = (int)lVar26 + 1;
    if (lVar13 == 0) {
      func_0x02895660(plVar42,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xb8));
    }
    plVar17[-0x13] = lVar33;
    plVar17[-0x12] = (long)plVar9;
    plVar17[-0x10] = (long)plVar25;
    while( true ) {
      plVar36 = (long *)plVar25[4];
      plVar34 = (long *)plVar36[0x18];
      uVar7 = *(uint *)(plVar34[0xc] + 0x28);
      plVar40 = plVar18;
      if (-1 < (int)uVar7) {
        plVar40 = plVar17 + -0xe;
      }
      plVar20 = plVar9;
      func_0x054ed0d0(plVar21,plVar40);
      if ((int)uVar7 < 0) {
        plVar19 = (long *)plVar17[-0x15];
        plVar20 = plVar9;
        func_0x054ed0d0(plVar19,plVar40);
        plVar34 = (long *)plVar36[0x18];
        plVar25 = plVar19;
      }
      else {
        plVar19 = (long *)*plVar21;
        plVar25 = (long *)(ulong)uVar7;
      }
      puVar11 = (uint *)func_0x0289a250(plVar19,plVar34[0x18]);
      lVar26 = plVar42[2];
      plVar32 = plVar21;
      if (lVar26 == 0) goto LAB_02892d3c;
      iVar5 = *(int *)(lVar26 + 0x18);
      if (iVar5 == 0) goto LAB_02892d24;
      plVar34 = *(long **)(plVar17[-0x10] + 0x20);
      *(uint *)((long)plVar17 + -0x84) = (uint)puVar11;
      lVar33 = plVar34[0x18];
      lVar13 = (long)(int)(iVar5 - 1U & (uint)puVar11);
      lVar12 = *(long *)(lVar33 + 0x60);
      plVar17[-0x14] = lVar13;
      iVar5 = *(int *)(lVar12 + 0x28);
      uVar6 = *(undefined4 *)(lVar26 + lVar13 * 4 + 0x20);
      plVar36 = plVar18;
      if (-1 < iVar5) {
        plVar36 = plVar17 + -0xe;
      }
      plVar19 = (long *)plVar17[-0x13];
      plVar9 = (long *)plVar17[-0x12];
      func_0x054ed0d0(plVar19,plVar36,plVar9);
      if (iVar5 < 0) {
        lVar26 = plVar17[-0x16];
        func_0x054ed0d0(lVar26,plVar36,plVar9);
        lVar33 = plVar34[0x18];
      }
      else {
        lVar26 = *plVar19;
      }
      plVar40 = (long *)(ulong)*(uint *)((long)plVar17 + -0x84);
      plVar20 = plVar40;
      uVar7 = func_0x02895374(plVar42,uVar6,plVar40,lVar26,*(undefined8 *)(lVar33 + 0xd8));
      uVar41 = (ulong)uVar7;
      plVar25 = plVar18;
      plVar19 = plVar9;
      unaff_x27 = plVar42;
      if (uVar7 != 0xffffffff) goto LAB_02892ce8;
      plVar25 = (long *)plVar17[-0x10];
      plVar20 = *(long **)(*(long *)(plVar25[4] + 0xc0) + 0xe0);
      puVar11 = (uint *)func_0x028955d4(plVar42,(undefined *)((long)plVar17 + -0x74));
      if (((ulong)puVar11 & 1) != 0) break;
      func_0x02895660(plVar42,*(undefined8 *)(*(long *)(plVar25[4] + 0xc0) + 0xb8));
    }
    plVar19 = (long *)plVar42[3];
    if (plVar19 == (long *)0x0) {
LAB_02892d3c:
      if (*(long *)(plVar17[-0x17] + 0x28) == plVar17[-0xd]) {
        puVar11 = (uint *)func_0x0249fb90();
      }
    }
    else {
      lVar26 = plVar42[2];
      plVar32 = (long *)plVar17[-0x14];
      unaff_x27 = plVar21;
      if (lVar26 == 0) goto LAB_02892d3c;
      uVar30 = (uint)plVar32;
      if (uVar30 < *(uint *)(lVar26 + 0x18)) {
        uVar1 = *(uint *)((long)plVar17 + -0x74);
        plVar9 = (long *)(ulong)uVar1;
        if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_02892d24;
        plVar36 = (long *)(long)(int)uVar1;
        plVar20 = (long *)(ulong)*(uint *)(lVar26 + (long)plVar32 * 4 + 0x20);
        puVar11 = (uint *)func_0x022c19dc((long)plVar19 +
                                          (ulong)*(uint *)(*plVar19 + 0x104) * (long)plVar36 + 0x20,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xe8) + 0x80));
        lVar26 = plVar42[2];
        if (lVar26 == 0) goto LAB_02892d3c;
        if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_02892d24;
        plVar19 = (long *)plVar42[3];
        *(uint *)(lVar26 + (long)plVar32 * 4 + 0x20) = uVar1;
        if (plVar19 == (long *)0x0) goto LAB_02892d3c;
        if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_02892d24;
        plVar20 = (long *)(ulong)~uVar30;
        puVar11 = (uint *)func_0x022c64b4((long)plVar19 +
                                          (ulong)*(uint *)(*plVar19 + 0x104) * (long)plVar36 + 0x20,
                                          *(long *)(*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xe8) +
                                                   0x80) + 0x20);
        plVar19 = (long *)plVar42[3];
        if (plVar19 == (long *)0x0) goto LAB_02892d3c;
        if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_02892d24;
        puVar11 = (uint *)func_0x0249f90c((long)plVar19 +
                                          (ulong)*(uint *)(*plVar19 + 0x104) * (long)plVar36 + 0x20,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xe8) + 0x80));
        if (*puVar11 != 0xffffffff) {
          plVar25 = (long *)plVar42[3];
          if (plVar25 != (long *)0x0) {
            if (uVar1 < *(uint *)(plVar25 + 3)) {
              plVar32 = (long *)plVar17[-0x10];
              plVar34 = plVar25 + 4;
              puVar11 = (uint *)func_0x0249f90c((long *)((long)plVar34 +
                                                        (ulong)*(uint *)(*plVar25 + 0x104) *
                                                        (long)plVar36),
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(plVar32[4] + 0xc0) + 0xe8) +
                                                 0x80));
              if (*puVar11 < *(uint *)(plVar25 + 3)) {
                plVar20 = plVar9;
                puVar11 = (uint *)func_0x022c64b4((long *)((long)plVar34 +
                                                          (ulong)*(uint *)(*plVar25 + 0x104) *
                                                          (long)(int)*puVar11),
                                                  *(long *)(*(long *)(*(long *)(plVar32[4] + 0xc0) +
                                                                     0xe8) + 0x80) + 0x20);
                plVar25 = plVar32;
                goto LAB_02892b48;
              }
            }
            goto LAB_02892d24;
          }
          goto LAB_02892d3c;
        }
LAB_02892b48:
        plVar19 = (long *)plVar42[3];
        if (plVar19 == (long *)0x0) goto LAB_02892d3c;
        if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_02892d24;
        plVar20 = (long *)(ulong)*(uint *)((long)plVar42 + 0x2c);
        puVar11 = (uint *)func_0x022c19dc((long)plVar19 +
                                          (ulong)*(uint *)(*plVar19 + 0x104) * (long)plVar36 + 0x20,
                                          *(long *)(*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xe8) +
                                                   0x80) + 0x60);
        plVar19 = (long *)plVar42[3];
        if (plVar19 == (long *)0x0) goto LAB_02892d3c;
        if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_02892d24;
        plVar20 = (long *)0xffffffff;
        puVar11 = (uint *)func_0x022c19dc((long)plVar19 +
                                          (ulong)*(uint *)(*plVar19 + 0x104) * (long)plVar36 + 0x20,
                                          *(long *)(*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xe8) +
                                                   0x80) + 0x40);
        uVar30 = *(uint *)((long)plVar42 + 0x2c);
        if (uVar30 == 0xffffffff) {
          *(uint *)(plVar42 + 5) = uVar1;
        }
        else {
          plVar19 = (long *)plVar42[3];
          if (plVar19 == (long *)0x0) goto LAB_02892d3c;
          if (*(uint *)(plVar19 + 3) <= uVar30) goto LAB_02892d24;
          plVar20 = (long *)(ulong)uVar1;
          puVar11 = (uint *)func_0x022c19dc((long)plVar19 +
                                            (ulong)*(uint *)(*plVar19 + 0x104) * (long)(int)uVar30 +
                                            0x20,*(long *)(*(long *)(*(long *)(plVar25[4] + 0xc0) +
                                                                    0xe8) + 0x80) + 0x40);
        }
        plVar19 = (long *)plVar42[3];
        *(uint *)((long)plVar42 + 0x2c) = uVar1;
        if (plVar19 == (long *)0x0) goto LAB_02892d3c;
        if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_02892d24;
        plVar20 = plVar40;
        puVar11 = (uint *)func_0x022c19dc((long)plVar19 +
                                          (ulong)*(uint *)(*plVar19 + 0x104) * (long)plVar36 + 0x20,
                                          *(long *)(*(long *)(*(long *)(plVar25[4] + 0xc0) + 0xe8) +
                                                   0x80) + 0x80);
        plVar34 = (long *)plVar42[3];
        if (plVar34 == (long *)0x0) goto LAB_02892d3c;
        plVar25 = *(long **)(plVar25[4] + 0xc0);
        plVar19 = plVar18;
        if (-1 < *(int *)(plVar25[0xc] + 0x28)) {
          plVar19 = plVar17 + -0xe;
        }
        plVar18 = (long *)plVar17[-0x12];
        plVar20 = plVar18;
        puVar11 = (uint *)func_0x054ed0d0(plVar21,plVar19);
        if (*(uint *)(plVar34 + 3) <= uVar1) goto LAB_02892d24;
        plVar20 = plVar21;
        func_0x0249f910((undefined *)
                        ((long)plVar34 + (ulong)*(uint *)(*plVar34 + 0x104) * (long)plVar36 + 0x20),
                        *(long *)(plVar25[0x1d] + 0x80) + 0xa0,plVar21,(ulong)plVar18 & 0xffffffff);
        *(int *)(plVar42 + 4) = (int)plVar42[4] + 1;
        plVar19 = plVar18;
LAB_02892ce8:
        puVar11 = (uint *)(ulong)(uVar7 == 0xffffffff);
        plVar18 = plVar19;
        if (*(long *)(plVar17[-0x17] + 0x28) == plVar17[-0xd]) {
          return puVar11;
        }
      }
      else {
LAB_02892d24:
        if (*(long *)(plVar17[-0x17] + 0x28) == plVar17[-0xd]) {
          puVar11 = (uint *)func_0x0249fb98();
          goto LAB_02892d3c;
        }
      }
    }
    auVar50 = func_0x054ed0f0(puVar11);
    plVar23 = auVar50._8_8_;
    plVar19 = auVar50._0_8_;
    unaff_x29 = (long *)(lVar14 + -0x60);
    *(long **)(lVar14 + -0x60) = plVar17 + -0xc;
    *(undefined8 *)(lVar14 + -0x58) = 0x2892d58;
    *(long **)(lVar14 + -0x50) = plVar42;
    *(long **)(lVar14 + -0x48) = unaff_x27;
    *(long **)(lVar14 + -0x40) = plVar9;
    *(ulong *)(lVar14 + -0x38) = uVar41;
    *(long **)(lVar14 + -0x30) = plVar40;
    *(long **)(lVar14 + -0x28) = plVar18;
    *(long **)(lVar14 + -0x20) = plVar25;
    *(long **)(lVar14 + -0x18) = plVar36;
    *(long **)(lVar14 + -0x10) = plVar34;
    *(long **)(lVar14 + -8) = plVar32;
    unaff_x26 = (long *)tpidr_el0;
    *(long *)(lVar14 + -0x68) = unaff_x26[5];
    plVar17 = plVar20;
    if ((bRam0000000005e275ed & 1) == 0) {
      func_0x0249f8e4(&DAT_059df598);
      func_0x0249f8e4(&DAT_059df6e0);
      bRam0000000005e275ed = 1;
    }
    lVar26 = *(long *)(plVar20[4] + 0xc0);
    plVar18 = (long *)(ulong)*(uint *)(*(long *)(lVar26 + 0x60) + 0xfc);
    uVar27 = (long)plVar18 + 0xfU & 0x1fffffff0;
    puVar38 = (undefined1 *)((lVar14 + -0x90) - uVar27);
    unaff_x23 = (long *)(puVar38 + -uVar27);
    plVar21 = (long *)((long)unaff_x23 - uVar27);
    *(undefined8 *)(lVar14 + -0x78) = 0;
    plVar9 = (long *)0x0;
    unaff_x28 = plVar42;
    if (plVar23 == (long *)0x0) goto LAB_02893098;
    lVar26 = *(long *)(lVar26 + 0x18);
    if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
      lVar26 = func_0x024d8f40(lVar26);
    }
    lVar12 = *plVar23;
    uVar27 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar26) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_02892e64;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    plVar17 = (long *)0x0;
    puVar10 = (undefined8 *)func_0x024d927c(plVar23);
LAB_02892e64:
    unaff_x28 = (long *)&DAT_059df6e0;
    unaff_x27 = (long *)&DAT_059df598;
    uVar45 = (*(code *)*puVar10)(plVar23,puVar10[1]);
    *(undefined8 *)(lVar14 + -0x78) = uVar45;
    *(undefined8 *)(lVar14 + -0x88) = 0;
    *(long *)(lVar14 + -0x80) = lVar14 + -0x78;
    plVar9 = *(long **)(lVar14 + -0x78);
    if (plVar9 != (long *)0x0) {
      lVar26 = *plVar9;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
            puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_02892ee0;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      plVar17 = (long *)0x0;
      puVar10 = (undefined8 *)func_0x024d927c(plVar9);
LAB_02892ee0:
      puVar11 = (uint *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (((ulong)puVar11 & 1) == 0) {
        plVar20 = (long *)0x0;
        puVar10 = (undefined8 *)(lVar14 + -0x78);
        goto LAB_02892fdc;
      }
      plVar42 = *(long **)(lVar14 + -0x78);
      plVar9 = (long *)0x0;
      if (plVar42 == (long *)0x0) goto LAB_02893084;
      lVar26 = *(long *)(*(long *)(plVar20[4] + 0xc0) + 0xf8);
      if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
        lVar26 = func_0x024d8f40(lVar26);
      }
      lVar12 = *plVar42;
      uVar27 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == lVar26) {
            lVar26 = lVar12 + (long)*piVar28 * 0x10 + 0x138;
            goto LAB_02892f64;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      lVar26 = func_0x024d927c(plVar42,lVar26,0);
LAB_02892f64:
      lVar26 = *(long *)(lVar26 + 8);
      *(undefined1 **)(lVar14 + -0x70) = puVar38;
      (**(code **)(lVar26 + 0x10))
                (*(undefined8 *)(lVar26 + 8),lVar26,plVar42,lVar14 + -0x70,puVar38);
      func_0x054ed0d0(unaff_x23,puVar38,plVar18);
      unaff_x25 = (long *)plVar20[4];
      lVar26 = unaff_x25[0x18];
      if (*(int *)(*(long *)(lVar26 + 0x60) + 0x28) < 0) {
        func_0x054ed0d0(plVar21,puVar38,plVar18);
        lVar26 = unaff_x25[0x18];
        plVar9 = plVar21;
      }
      else {
        plVar9 = (long *)*unaff_x23;
      }
      lVar26 = *(long *)(lVar26 + 0x68);
      lVar12 = 0x2892fd0;
      plVar42 = plVar19;
      unaff_x24 = plVar21;
      goto SUB_028926c4;
    }
    if (unaff_x26[5] != *(long *)(lVar14 + -0x68)) goto LAB_02893120;
    func_0x0249fb90();
LAB_02893084:
    if (unaff_x26[5] == *(long *)(lVar14 + -0x68)) {
      func_0x0249fb90();
LAB_02893098:
      if (unaff_x26[5] == *(long *)(lVar14 + -0x68)) {
        func_0x0249fb90();
        do {
          if (unaff_x26[5] != *(long *)(lVar14 + -0x68)) goto LAB_02893120;
          auVar51 = func_0x0249fb88(plVar20);
          plVar20 = auVar51._0_8_;
          if (auVar51._8_4_ != 1) {
            func_0x022bd79c(lVar14 + -0x88);
            if (unaff_x26[5] == *(long *)(lVar14 + -0x68)) {
              func_0x0258f7ac(plVar20);
            }
            goto LAB_02893120;
          }
          puVar10 = (undefined8 *)func_0x054ed080(plVar20);
          plVar20 = (long *)*puVar10;
          *(long **)(lVar14 + -0x88) = plVar20;
          puVar11 = (uint *)func_0x054ed090();
          puVar10 = *(undefined8 **)(lVar14 + -0x80);
LAB_02892fdc:
          plVar19 = (long *)*puVar10;
          if (plVar19 != (long *)0x0) {
            lVar26 = *plVar19;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *unaff_x27) {
                  puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_02893030;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            plVar17 = (long *)0x0;
            puVar10 = (undefined8 *)func_0x024d927c(plVar19);
LAB_02893030:
            puVar11 = (uint *)(*(code *)*puVar10)(plVar19,puVar10[1]);
          }
        } while (plVar20 != (long *)0x0);
        if (unaff_x26[5] == *(long *)(lVar14 + -0x68)) {
          return puVar11;
        }
      }
    }
LAB_02893120:
    func_0x054ed0f0();
    auVar47 = func_0x022bd790();
    plVar25 = auVar47._8_8_;
    plVar42 = auVar47._0_8_;
    unaff_x29 = plVar21 + -0xc;
    plVar21[-0xc] = lVar14 + -0x60;
    plVar21[-0xb] = 0x2893128;
    plVar21[-10] = (long)unaff_x28;
    plVar21[-9] = (long)unaff_x27;
    plVar21[-8] = (long)unaff_x26;
    plVar21[-7] = (long)plVar9;
    plVar21[-6] = (long)plVar21;
    plVar21[-5] = (long)unaff_x23;
    plVar21[-4] = (long)puVar38;
    plVar21[-3] = (long)plVar18;
    plVar21[-2] = (long)plVar19;
    plVar21[-1] = (long)plVar20;
    lVar26 = tpidr_el0;
    plVar21[-0xd] = *(long *)(lVar26 + 0x28);
    lVar12 = plVar17[4];
    plVar21[-0xe] = (long)plVar25;
    unaff_x28 = *(long **)(lVar12 + 0xc0);
    plVar9 = (long *)(ulong)*(uint *)(unaff_x28[0xc] + 0xfc);
    uVar27 = (ulong)((long)plVar9 + 0xf) & 0x1fffffff0;
    unaff_x26 = (long *)((long)plVar21 + (-0x80 - uVar27));
    unaff_x25 = (long *)((long)unaff_x26 - uVar27);
    unaff_x24 = (long *)((long)unaff_x25 - uVar27);
    puVar37 = (undefined1 *)((long)unaff_x24 - uVar27);
    puVar38 = puVar37;
    if (plVar42[2] == 0) {
      puVar11 = (uint *)0x0;
LAB_028932b0:
      auVar47._8_8_ = plVar18;
      auVar47._0_8_ = plVar20;
      if (*(long *)(lVar26 + 0x28) == plVar21[-0xd]) {
        return puVar11;
      }
    }
    else {
      uVar7 = *(uint *)(unaff_x28[0xc] + 0x28);
      unaff_x23 = (long *)(ulong)uVar7;
      plVar21[-0x10] = (long)plVar17;
      plVar21[-0xf] = lVar26;
      unaff_x27 = plVar25;
      if (-1 < (int)uVar7) {
        unaff_x27 = plVar21 + -0xe;
      }
      plVar17 = plVar9;
      func_0x054ed0d0(unaff_x26,unaff_x27);
      if ((int)uVar7 < 0) {
        plVar17 = plVar9;
        func_0x054ed0d0(unaff_x25,unaff_x27);
      }
      else {
        unaff_x25 = (long *)*unaff_x26;
      }
      puVar11 = (uint *)func_0x0289a250(unaff_x25,unaff_x28[0x18]);
      unaff_x25 = (long *)((ulong)puVar11 & 0xffffffff);
      if (plVar42[3] == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int *)(plVar42[3] + 0x18) - 1;
      }
      lVar26 = plVar42[2];
      if (lVar26 == 0) {
        if (*(long *)(plVar21[-0xf] + 0x28) != plVar21[-0xd]) goto LAB_02893310;
        puVar11 = (uint *)func_0x0249fb90();
      }
      else {
        uVar7 = uVar7 & (uint)puVar11;
        if (uVar7 < *(uint *)(lVar26 + 0x18)) {
          unaff_x26 = *(long **)(*(long *)(plVar21[-0x10] + 0x20) + 0xc0);
          unaff_x23 = (long *)(ulong)*(uint *)(lVar26 + (long)(int)uVar7 * 4 + 0x20);
          uVar7 = *(uint *)(unaff_x26[0xc] + 0x28);
          unaff_x27 = (long *)(ulong)uVar7;
          plVar18 = plVar25;
          if (-1 < (int)uVar7) {
            plVar18 = plVar21 + -0xe;
          }
          func_0x054ed0d0(unaff_x24,plVar18,plVar9);
          if ((int)uVar7 < 0) {
            func_0x054ed0d0(puVar37,plVar18,plVar9);
          }
          else {
            puVar38 = (undefined1 *)*unaff_x24;
          }
          plVar17 = (long *)((ulong)puVar11 & 0xffffffff);
          iVar5 = func_0x02895374(plVar42,unaff_x23,plVar17,puVar38,unaff_x26[0x1b]);
          lVar26 = plVar21[-0xf];
          puVar11 = (uint *)(ulong)(iVar5 != -1);
          plVar20 = plVar42;
          goto LAB_028932b0;
        }
      }
      if (*(long *)(plVar21[-0xf] + 0x28) == plVar21[-0xd]) {
        puVar11 = (uint *)func_0x0249fb98();
      }
    }
LAB_02893310:
    uVar45 = 0x2893314;
    auVar48 = func_0x054ed0f0(puVar11);
  }
  puVar24 = auVar48._8_8_;
  lVar26 = auVar48._0_8_;
  uVar16 = auVar47._0_8_;
  *(long **)(puVar37 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar37 + -0x58) = uVar45;
  *(long **)(puVar37 + -0x50) = unaff_x28;
  *(long **)(puVar37 + -0x48) = unaff_x27;
  *(long **)(puVar37 + -0x40) = unaff_x26;
  *(long **)(puVar37 + -0x38) = unaff_x25;
  *(long **)(puVar37 + -0x30) = unaff_x24;
  *(long **)(puVar37 + -0x28) = unaff_x23;
  *(undefined1 **)(puVar37 + -0x20) = puVar38;
  *(long *)(puVar37 + -0x18) = auVar47._8_8_;
  *(long **)(puVar37 + -0x10) = plVar9;
  *(ulong *)(puVar37 + -8) = uVar16;
  uVar27 = tpidr_el0;
  *(undefined8 *)(puVar37 + -0x68) = *(undefined8 *)(uVar27 + 0x28);
  lVar12 = plVar17[4];
  *(undefined1 **)(puVar37 + -0x70) = puVar24;
  uVar29 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x60) + 0xfc);
  uVar41 = uVar29 + 0xf & 0x1fffffff0;
  plVar21 = (long *)(puVar37 + (-0xa0 - uVar41));
  lVar13 = (long)plVar21 - uVar41;
  plVar9 = (long *)(lVar13 - uVar41);
  lVar14 = (long)plVar9 - uVar41;
  *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  if (*(long *)(lVar26 + 0x10) == 0) {
LAB_028935dc:
    puVar11 = (uint *)0x0;
LAB_02893a90:
    if (*(long *)(uVar27 + 0x28) == *(long *)(puVar37 + -0x68)) {
      return puVar11;
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0xc0);
    *(long **)(puVar37 + -0x80) = plVar17;
    *(long *)(puVar37 + -0x78) = lVar26;
    iVar5 = *(int *)(*(long *)(lVar12 + 0x60) + 0x28);
    puVar38 = puVar24;
    if (-1 < iVar5) {
      puVar38 = puVar37 + -0x70;
    }
    func_0x054ed0d0(plVar21,puVar38,uVar29);
    *(ulong *)(puVar37 + -0x88) = uVar29;
    if (iVar5 < 0) {
      func_0x054ed0d0(lVar13,puVar38,uVar29);
    }
    else {
      lVar13 = *plVar21;
    }
    puVar11 = (uint *)func_0x0289a250(lVar13,*(undefined8 *)(lVar12 + 0xc0));
    lVar26 = *(long *)(*(long *)(puVar37 + -0x78) + 0x18);
    if (lVar26 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lVar26 + 0x18);
    }
    uVar45 = *(undefined8 *)(puVar37 + -0x88);
    lVar26 = *(long *)(*(long *)(puVar37 + -0x78) + 0x10);
    uVar16 = uVar27;
    if (lVar26 == 0) goto LAB_02893aec;
    uVar30 = *(uint *)(lVar26 + 0x18);
    *(ulong *)(puVar37 + -0x90) = uVar27;
    uVar7 = iVar5 - 1U & (uint)puVar11;
    if (uVar7 < uVar30) {
      lVar13 = *(long *)(*(long *)(puVar37 + -0x80) + 0x20);
      *(long *)(puVar37 + -0xa0) = (long)(int)uVar7;
      *(ulong *)(puVar37 + -0x98) = (ulong)uVar7;
      lVar12 = *(long *)(lVar13 + 0xc0);
      uVar6 = *(undefined4 *)(lVar26 + (long)(int)uVar7 * 4 + 0x20);
      iVar5 = *(int *)(*(long *)(lVar12 + 0x60) + 0x28);
      if (-1 < iVar5) {
        puVar24 = puVar37 + -0x70;
      }
      func_0x054ed0d0(plVar9,puVar24,uVar45);
      if (iVar5 < 0) {
        func_0x054ed0d0(lVar14,puVar24,uVar45);
        lVar12 = *(long *)(lVar13 + 0xc0);
      }
      else {
        lVar14 = *plVar9;
      }
      uVar16 = *(ulong *)(puVar37 + -0x78);
      puVar11 = (uint *)func_0x02895374(uVar16,uVar6,(ulong)puVar11 & 0xffffffff,lVar14,
                                        *(undefined8 *)(lVar12 + 0xd8));
      uVar27 = *(ulong *)(puVar37 + -0x90);
      uVar7 = (uint)puVar11;
      if (uVar7 == 0xffffffff) goto LAB_028935dc;
      plVar9 = *(long **)(uVar16 + 0x18);
      if (plVar9 == (long *)0x0) goto LAB_02893ad4;
      lVar26 = *(long *)(puVar37 + -0x80);
      if (uVar7 < *(uint *)(plVar9 + 3)) {
        lVar12 = (long)(int)uVar7;
        puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                          (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(lVar26 + 0x20) +
                                                                       0xc0) + 0xe8) + 0x80) + 0x20)
        ;
        if ((int)*puVar11 < 0) {
          lVar14 = *(long *)(uVar16 + 0x10);
          if ((lVar14 == 0) || (plVar9 = *(long **)(uVar16 + 0x18), plVar9 == (long *)0x0))
          goto LAB_02893ad4;
          if ((*(uint *)(plVar9 + 3) <= uVar7) ||
             (puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(lVar26 + 0x20) +
                                                                     0xc0) + 0xe8) + 0x80)),
             *(uint *)(lVar14 + 0x18) <= (uint)*(undefined8 *)(puVar37 + -0x98))) goto LAB_02893ac0;
          *(uint *)(lVar14 + *(long *)(puVar37 + -0xa0) * 4 + 0x20) = *puVar11;
LAB_02893648:
          plVar9 = *(long **)(uVar16 + 0x18);
          if (plVar9 == (long *)0x0) goto LAB_02893ad4;
          if (uVar7 < *(uint *)(plVar9 + 3)) {
            puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                              (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
                                                         + 0xe8) + 0x80));
            if (*puVar11 == 0xffffffff) {
LAB_0289374c:
              plVar9 = *(long **)(uVar16 + 0x18);
              if (plVar9 == (long *)0x0) goto LAB_02893ad4;
              if (uVar7 < *(uint *)(plVar9 + 3)) {
                puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                  (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(lVar26 + 
                                                  0x20) + 0xc0) + 0xe8) + 0x80) + 0x60);
                plVar9 = *(long **)(uVar16 + 0x18);
                if (*puVar11 == 0xffffffff) {
                  if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                  if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_02893ac0;
                  puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                    (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 +
                                                    0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x40);
                  *(uint *)(uVar16 + 0x28) = *puVar11;
LAB_028938a0:
                  plVar9 = *(long **)(uVar16 + 0x18);
                  if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                  if (uVar7 < *(uint *)(plVar9 + 3)) {
                    puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                      (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 +
                                                      0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x40);
                    plVar9 = *(long **)(uVar16 + 0x18);
                    if (*puVar11 == 0xffffffff) {
                      if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_02893ac0;
                      puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                        (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 +
                                                        0x20,*(long *)(*(long *)(*(long *)(*(long *)
                                                  (lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x60);
                      *(uint *)(uVar16 + 0x2c) = *puVar11;
LAB_028939f4:
                      plVar9 = *(long **)(uVar16 + 0x18);
                      if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_02893ac0;
                      uVar45 = func_0x0249f90c((long)plVar9 +
                                               (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(lVar26 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0xe8) + 0x80) + 0xa0);
                      puVar11 = (uint *)func_0x054ed120(uVar45,0,*(undefined8 *)(puVar37 + -0x88));
                      plVar9 = *(long **)(uVar16 + 0x18);
                      if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                      if (*(uint *)(plVar9 + 3) <= uVar7) goto LAB_02893ac0;
                      func_0x022c19dc((long)plVar9 +
                                      (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0xe8)
                                       + 0x80),*(undefined4 *)(uVar16 + 0x24));
                      puVar11 = (uint *)0x1;
                      *(int *)(uVar16 + 0x20) = *(int *)(uVar16 + 0x20) + -1;
                      *(uint *)(uVar16 + 0x24) = uVar7;
                      goto LAB_02893a90;
                    }
                    if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                    if (uVar7 < *(uint *)(plVar9 + 3)) {
                      puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                        (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 +
                                                        0x20,*(long *)(*(long *)(*(long *)(*(long *)
                                                  (lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x40);
                      plVar21 = *(long **)(uVar16 + 0x18);
                      if (plVar21 == (long *)0x0) goto LAB_02893ad4;
                      if (uVar7 < *(uint *)(plVar21 + 3)) {
                        uVar30 = *puVar11;
                        puVar11 = (uint *)func_0x0249f90c((long)plVar21 +
                                                          (ulong)*(uint *)(*plVar21 + 0x104) *
                                                          lVar12 + 0x20,
                                                          *(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x60);
                        if (uVar30 < *(uint *)(plVar9 + 3)) {
                          puVar11 = (uint *)func_0x022c19dc((long)plVar9 +
                                                            (ulong)*(uint *)(*plVar9 + 0x104) *
                                                            (long)(int)uVar30 + 0x20,
                                                            *(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x60,
                                                  *puVar11);
                          goto LAB_028939f4;
                        }
                      }
                    }
                  }
                }
                else {
                  if (plVar9 == (long *)0x0) goto LAB_02893ad4;
                  if (uVar7 < *(uint *)(plVar9 + 3)) {
                    puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                      (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 +
                                                      0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x60);
                    plVar21 = *(long **)(uVar16 + 0x18);
                    if (plVar21 == (long *)0x0) goto LAB_02893ad4;
                    if (uVar7 < *(uint *)(plVar21 + 3)) {
                      uVar30 = *puVar11;
                      puVar11 = (uint *)func_0x0249f90c((long)plVar21 +
                                                        (ulong)*(uint *)(*plVar21 + 0x104) * lVar12
                                                        + 0x20,*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x40);
                      if (uVar30 < *(uint *)(plVar9 + 3)) {
                        puVar11 = (uint *)func_0x022c19dc((long)plVar9 +
                                                          (ulong)*(uint *)(*plVar9 + 0x104) *
                                                          (long)(int)uVar30 + 0x20,
                                                          *(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x40,
                                                  *puVar11);
                        goto LAB_028938a0;
                      }
                    }
                  }
                }
              }
            }
            else {
              plVar9 = *(long **)(uVar16 + 0x18);
              if (plVar9 == (long *)0x0) goto LAB_02893ad4;
              if (uVar7 < *(uint *)(plVar9 + 3)) {
                puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                                  (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(*(long *)(lVar26 + 0x20) +
                                                                       0xc0) + 0xe8) + 0x80));
                plVar21 = *(long **)(uVar16 + 0x18);
                if (plVar21 == (long *)0x0) goto LAB_02893ad4;
                if (uVar7 < *(uint *)(plVar21 + 3)) {
                  uVar30 = *puVar11;
                  puVar11 = (uint *)func_0x0249f90c((long)plVar21 +
                                                    (ulong)*(uint *)(*plVar21 + 0x104) * lVar12 +
                                                    0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0x20) + 0xc0) + 0xe8) + 0x80) + 0x20);
                  if (uVar30 < *(uint *)(plVar9 + 3)) {
                    puVar11 = (uint *)func_0x022c64b4((long)plVar9 +
                                                      (ulong)*(uint *)(*plVar9 + 0x104) *
                                                      (long)(int)uVar30 + 0x20,
                                                      *(long *)(*(long *)(*(long *)(*(long *)(lVar26
                                                                                             + 0x20)
                                                                                   + 0xc0) + 0xe8) +
                                                               0x80) + 0x20,*puVar11);
                    goto LAB_0289374c;
                  }
                }
              }
            }
          }
        }
        else {
          plVar9 = *(long **)(uVar16 + 0x18);
          if (plVar9 == (long *)0x0) goto LAB_02893ad4;
          if (uVar7 < *(uint *)(plVar9 + 3)) {
            puVar11 = (uint *)func_0x0249f90c((long)plVar9 +
                                              (ulong)*(uint *)(*plVar9 + 0x104) * lVar12 + 0x20,
                                              *(long *)(*(long *)(*(long *)(*(long *)(lVar26 + 0x20)
                                                                           + 0xc0) + 0xe8) + 0x80) +
                                              0x20);
            plVar21 = *(long **)(uVar16 + 0x18);
            if (plVar21 == (long *)0x0) goto LAB_02893ad4;
            if (uVar7 < *(uint *)(plVar21 + 3)) {
              uVar30 = *puVar11;
              puVar11 = (uint *)func_0x0249f90c((long)plVar21 +
                                                (ulong)*(uint *)(*plVar21 + 0x104) * lVar12 + 0x20,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)(lVar26 + 0x20) +
                                                                     0xc0) + 0xe8) + 0x80));
              if (uVar30 < *(uint *)(plVar9 + 3)) {
                puVar11 = (uint *)func_0x022c19dc((long)plVar9 +
                                                  (ulong)*(uint *)(*plVar9 + 0x104) *
                                                  (long)(int)uVar30 + 0x20,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(*(long *)(lVar26 + 0x20) +
                                                                       0xc0) + 0xe8) + 0x80),
                                                  *puVar11);
                goto LAB_02893648;
              }
            }
          }
        }
      }
LAB_02893ac0:
      lVar26 = *(long *)(uVar27 + 0x28);
    }
    else {
      lVar26 = *(long *)(*(long *)(puVar37 + -0x90) + 0x28);
      uVar27 = uVar29;
    }
    if (lVar26 == *(long *)(puVar37 + -0x68)) {
      puVar11 = (uint *)func_0x0249fb98();
LAB_02893ad4:
      lVar26 = *(long *)(uVar27 + 0x28);
      goto LAB_02893ad8;
    }
  }
  do {
    puVar11 = (uint *)func_0x054ed0f0(puVar11);
LAB_02893aec:
    lVar26 = *(long *)(uVar16 + 0x28);
LAB_02893ad8:
    if (lVar26 == *(long *)(puVar37 + -0x68)) {
      puVar11 = (uint *)func_0x0249fb90();
    }
  } while( true );
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar28 = piVar28 + 4;
    if (uVar27 == 0) break;
LAB_0389cd1c:
    if (*(long *)(piVar28 + -2) == _DAT_059df598) {
      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_0389cd50;
    }
  }
LAB_0389cd34:
  puVar10 = (undefined8 *)func_0x024d927c(unaff_x24,_DAT_059df598,0);
LAB_0389cd50:
  (*(code *)*puVar10)(unaff_x24,puVar10[1]);
LAB_0389cd5c:
  lVar26 = *plVar9;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 != 0) {
    piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
        puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
        goto LAB_0389cdb8;
      }
      uVar27 = uVar27 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar27 != 0);
  }
  puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,3);
LAB_0389cdb8:
  plVar18 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  unaff_x23 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    lVar26 = *plVar18;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059c97e0) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
          goto LAB_0389ce24;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c97e0,3);
LAB_0389ce24:
    (*(code *)*puVar10)(plVar18,puVar10[1]);
    lVar26 = *plVar17;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 199) * 0x10 + 0x138);
          goto LAB_0389ce80;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe60,199);
LAB_0389ce80:
    plVar19 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
    unaff_x23 = plVar18;
    if (plVar19 != (long *)0x0) {
      lVar26 = *plVar19;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfc28) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 2) * 0x10 + 0x138);
            goto LAB_0389ceec;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfc28,2);
LAB_0389ceec:
      plVar20 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      unaff_x24 = plVar19;
      if (plVar20 != (long *)0x0) {
        lVar26 = *plVar20;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059ca8c8) {
              puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_0389cf54;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar10 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059ca8c8,0);
LAB_0389cf54:
        plVar19 = (long *)(*(code *)*puVar10)(plVar20,puVar10[1]);
        *(long **)(puVar38 + -0x70) = plVar19;
        *(undefined8 *)(puVar38 + -0x80) = 0;
        *(undefined1 **)(puVar38 + -0x78) = puVar38 + -0x70;
        if (plVar19 != (long *)0x0) {
          unaff_x27 = (long *)&DAT_059c9ad8;
          do {
            lVar26 = *plVar19;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                  puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_0389cfc8;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059df6e0,0);
LAB_0389cfc8:
            uVar27 = (*(code *)*puVar10)(plVar19,puVar10[1]);
            if ((uVar27 & 1) == 0) goto LAB_0389d0c4;
            plVar19 = *(long **)(puVar38 + -0x70);
            if (plVar19 == (long *)0x0) goto LAB_0389e18c;
            lVar26 = *plVar19;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059cbc38) {
                  puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_0389d02c;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059cbc38,0);
LAB_0389d02c:
            uVar6 = (*(code *)*puVar10)(plVar19,puVar10[1]);
            uVar27 = func_0x0351e9bc(param_1,uVar16,uVar6,0);
            lVar26 = *plVar18;
            unaff_x25 = (long *)(uVar27 & 0xffffffff);
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059c9ad8) {
                  puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                  goto LAB_0389d0a4;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c9ad8,1);
LAB_0389d0a4:
            (*(code *)*puVar10)(plVar18,uVar6,unaff_x25,puVar10[1]);
            plVar19 = *(long **)(puVar38 + -0x70);
          } while (plVar19 != (long *)0x0);
        }
        func_0x0249fb90();
LAB_0389d0c4:
        unaff_x25 = (long *)0x7;
        plVar18 = *(long **)(puVar38 + -0x70);
        if (plVar18 != (long *)0x0) {
          lVar26 = *plVar18;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059df598) {
                puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                goto LAB_0389d12c;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059df598,0);
LAB_0389d12c:
          (*(code *)*puVar10)(plVar18,puVar10[1]);
        }
        lVar26 = *plVar9;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
              puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 4) * 0x10 + 0x138);
              goto LAB_0389d1a8;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,4);
LAB_0389d1a8:
        plVar18 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        unaff_x23 = (long *)0x0;
        unaff_x24 = (long *)&DAT_059dfe60;
        if (plVar18 != (long *)0x0) {
          lVar26 = *plVar18;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059c97d8) {
                puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                goto LAB_0389d214;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c97d8,3);
LAB_0389d214:
          (*(code *)*puVar10)(plVar18,puVar10[1]);
          lVar26 = *plVar17;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
                puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 199) * 0x10 + 0x138);
                goto LAB_0389d270;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe60,199);
LAB_0389d270:
          plVar19 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
          unaff_x23 = plVar18;
          if (plVar19 != (long *)0x0) {
            lVar26 = *plVar19;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059dfc28) {
                  puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                  goto LAB_0389d2dc;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfc28,3);
LAB_0389d2dc:
            plVar20 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
            unaff_x24 = plVar19;
            if (plVar20 != (long *)0x0) {
              lVar26 = *plVar20;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059ca8c8) {
                    puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                    goto LAB_0389d344;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              puVar10 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059ca8c8,0);
LAB_0389d344:
              plVar19 = (long *)(*(code *)*puVar10)(plVar20,puVar10[1]);
              *(long **)(puVar38 + -0x70) = plVar19;
              *(undefined8 *)(puVar38 + -0x80) = 0;
              *(undefined1 **)(puVar38 + -0x78) = puVar38 + -0x70;
              while (plVar19 != (long *)0x0) {
                lVar26 = *plVar19;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_0389d3b0;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059df6e0,0);
LAB_0389d3b0:
                uVar27 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                if ((uVar27 & 1) == 0) goto LAB_0389d4ac;
                plVar19 = *(long **)(puVar38 + -0x70);
                if (plVar19 == (long *)0x0) goto LAB_0389e190;
                lVar26 = *plVar19;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059cbc38) {
                      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_0389d414;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059cbc38,0);
LAB_0389d414:
                uVar6 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                unaff_x25 = (long *)func_0x0351eeb8(param_1,uVar16,uVar6,0);
                lVar26 = *plVar18;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059c9ad0) {
                      puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                      goto LAB_0389d48c;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c9ad0,1);
LAB_0389d48c:
                (*(code *)*puVar10)(plVar18,uVar6,unaff_x25,puVar10[1]);
                plVar19 = *(long **)(puVar38 + -0x70);
              }
              func_0x0249fb90();
LAB_0389d4ac:
              unaff_x25 = (long *)0xa;
              plVar18 = *(long **)(puVar38 + -0x70);
              if (plVar18 != (long *)0x0) {
                lVar26 = *plVar18;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059df598) {
                      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                      goto LAB_0389d514;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059df598,0);
LAB_0389d514:
                (*(code *)*puVar10)(plVar18,puVar10[1]);
              }
              lVar26 = *plVar9;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
                    puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                    goto LAB_0389d590;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,5);
LAB_0389d590:
              plVar18 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
              unaff_x23 = (long *)0x0;
              unaff_x24 = (long *)&DAT_059dfe60;
              if (plVar18 != (long *)0x0) {
                lVar26 = *plVar18;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059c97d8) {
                      puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                      goto LAB_0389d5fc;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c97d8,3);
LAB_0389d5fc:
                (*(code *)*puVar10)(plVar18,puVar10[1]);
                lVar26 = *plVar17;
                uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                if (uVar27 != 0) {
                  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
                      puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 199) * 0x10 + 0x138);
                      goto LAB_0389d658;
                    }
                    uVar27 = uVar27 - 1;
                    piVar28 = piVar28 + 4;
                  } while (uVar27 != 0);
                }
                puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe60,199);
LAB_0389d658:
                plVar19 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
                unaff_x23 = plVar18;
                if (plVar19 != (long *)0x0) {
                  lVar26 = *plVar19;
                  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                  if (uVar27 != 0) {
                    piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == _DAT_059dfc28) {
                        puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 4) * 0x10 + 0x138);
                        goto LAB_0389d6c4;
                      }
                      uVar27 = uVar27 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar27 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059dfc28,4);
LAB_0389d6c4:
                  plVar20 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
                  unaff_x24 = plVar19;
                  if (plVar20 != (long *)0x0) {
                    lVar26 = *plVar20;
                    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar27 != 0) {
                      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == _DAT_059ca8c8) {
                          puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                          goto LAB_0389d72c;
                        }
                        uVar27 = uVar27 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar27 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x024d927c(plVar20,_DAT_059ca8c8,0);
LAB_0389d72c:
                    plVar19 = (long *)(*(code *)*puVar10)(plVar20,puVar10[1]);
                    *(long **)(puVar38 + -0x70) = plVar19;
                    *(undefined8 *)(puVar38 + -0x80) = 0;
                    *(undefined1 **)(puVar38 + -0x78) = puVar38 + -0x70;
                    while (plVar19 != (long *)0x0) {
                      lVar26 = *plVar19;
                      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                      if (uVar27 != 0) {
                        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
                            puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                            goto LAB_0389d798;
                          }
                          uVar27 = uVar27 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar27 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059df6e0,0);
LAB_0389d798:
                      uVar27 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                      if ((uVar27 & 1) == 0) goto LAB_0389d898;
                      plVar19 = *(long **)(puVar38 + -0x70);
                      unaff_x24 = (long *)0x0;
                      if (plVar19 == (long *)0x0) goto LAB_0389e198;
                      lVar26 = *plVar19;
                      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                      if (uVar27 != 0) {
                        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == _DAT_059cbc38) {
                            puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                            goto LAB_0389d7fc;
                          }
                          uVar27 = uVar27 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar27 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059cbc38,0);
LAB_0389d7fc:
                      uVar6 = (*(code *)*puVar10)(plVar19,puVar10[1]);
                      unaff_x25 = (long *)func_0x0351b3e8(param_1,uVar16,uVar6,0,0);
                      lVar26 = *plVar18;
                      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                      if (uVar27 != 0) {
                        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == _DAT_059c9ad0) {
                            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
                            goto LAB_0389d878;
                          }
                          uVar27 = uVar27 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar27 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c9ad0,1);
LAB_0389d878:
                      (*(code *)*puVar10)(plVar18,uVar6,unaff_x25,puVar10[1]);
                      plVar19 = *(long **)(puVar38 + -0x70);
                    }
                    func_0x0249fb90();
LAB_0389d898:
                    unaff_x25 = *(long **)(puVar38 + -0x70);
                    if (unaff_x25 != (long *)0x0) {
                      lVar26 = *unaff_x25;
                      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                      if (uVar27 != 0) {
                        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == _DAT_059df598) {
                            puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                            goto LAB_0389d900;
                          }
                          uVar27 = uVar27 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar27 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x024d927c(unaff_x25,_DAT_059df598,0);
LAB_0389d900:
                      (*(code *)*puVar10)(unaff_x25,puVar10[1]);
                    }
                    lVar26 = *plVar9;
                    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    unaff_x27 = (long *)&DAT_059dfe60;
                    if (uVar27 != 0) {
                      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
                          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 6) * 0x10 + 0x138);
                          goto LAB_0389d97c;
                        }
                        uVar27 = uVar27 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar27 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,6);
LAB_0389d97c:
                    unaff_x24 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    lVar26 = *plVar18;
                    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar27 != 0) {
                      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == _DAT_059c97d8) {
                          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
                          goto LAB_0389d9e4;
                        }
                        uVar27 = uVar27 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar27 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059c97d8,3);
LAB_0389d9e4:
                    (*(code *)*puVar10)(plVar18,puVar10[1]);
                    lVar26 = *plVar17;
                    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                    if (uVar27 != 0) {
                      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
                          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 199) * 0x10 + 0x138);
                          goto LAB_0389da40;
                        }
                        uVar27 = uVar27 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar27 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe60,199);
LAB_0389da40:
                    plVar18 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
                    if (plVar18 != (long *)0x0) {
                      lVar26 = *plVar18;
                      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                      if (uVar27 != 0) {
                        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == _DAT_059dfc28) {
                            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                            goto LAB_0389daac;
                          }
                          uVar27 = uVar27 - 1;
                          piVar28 = piVar28 + 4;
                        } while (uVar27 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059dfc28,5);
LAB_0389daac:
                      plVar19 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
                      unaff_x23 = plVar18;
                      if (plVar19 != (long *)0x0) {
                        lVar26 = *plVar19;
                        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
                        if (uVar27 == 0) goto LAB_0389daf8;
                        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        goto LAB_0389dae0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0389e194:
  do {
    do {
      do {
        func_0x0249fb90();
        plVar17 = plVar21;
        plVar18 = unaff_x23;
LAB_0389e198:
        func_0x0249fb90();
LAB_0389e19c:
        func_0x0249fb90();
LAB_0389e1a0:
        func_0x0249fb90();
LAB_0389e1a4:
        func_0x0249fb90();
LAB_0389e1a8:
        func_0x0249fb90();
        do {
          func_0x0249fb88(plVar18);
          func_0x0249fb88(unaff_x24);
          auVar51 = func_0x0249fb88(param_1);
          unaff_x24 = auVar51._0_8_;
          if (auVar51._8_4_ != 1) {
            func_0x022bd79c(puVar38 + -0x80);
            func_0x0258f7ac(unaff_x24);
            auVar50 = func_0x022bd790();
            plVar21 = auVar50._0_8_;
            *(undefined8 *)(puVar38 + -0xb0) = 0x389e3bc;
            *(long **)(puVar38 + -0xa8) = plVar18;
            *(long **)(puVar38 + -0xa0) = plVar17;
            *(long *)(puVar38 + -0x98) = param_1;
            *(ulong *)(puVar38 + -0x90) = uVar16;
            *(long **)(puVar38 + -0x88) = plVar9;
            if ((bRam0000000005e2ec38 & 1) == 0) {
              func_0x0249f8e4(&DAT_059e0bd0);
              func_0x0249f8e4(&DAT_05a27da8);
              func_0x0249f8e4(&DAT_05a27db0);
              func_0x0249f8e4(&DAT_059e46b8);
              bRam0000000005e2ec38 = 1;
            }
            *(undefined8 *)(puVar38 + -0xc0) = 0;
            if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
              func_0x0249fa64();
            }
            uVar7 = func_0x03645f5c(auVar50._8_8_,0);
            if (plVar21 == (long *)0x0) {
              lVar26 = func_0x0249fb90();
              return *(uint **)(lVar26 + 0x10);
            }
            lVar26 = *plVar21;
            unaff_x22 = (long *)&DAT_059e0bd0;
            uVar16 = (ulong)uVar7;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            unaff_x23 = (long *)&DAT_05a27da8;
            if (uVar27 == 0) goto LAB_0389e488;
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            goto LAB_0389e470;
          }
          puVar10 = (undefined8 *)func_0x054ed080(unaff_x24);
          plVar18 = (long *)*puVar10;
          *(long **)(puVar38 + -0x80) = plVar18;
          func_0x054ed090();
          puVar10 = *(undefined8 **)(puVar38 + -0x78);
LAB_0389dc84:
          unaff_x27 = (long *)&DAT_059dfe60;
          unaff_x24 = (long *)*puVar10;
          if (unaff_x24 != (long *)0x0) {
            lVar26 = *unaff_x24;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == _DAT_059df598) {
                  puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
                  goto LAB_0389dce0;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            puVar10 = (undefined8 *)func_0x024d927c(unaff_x24,_DAT_059df598,0);
LAB_0389dce0:
            (*(code *)*puVar10)(unaff_x24,puVar10[1]);
          }
        } while (plVar18 != (long *)0x0);
        lVar26 = *plVar9;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
              puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 7) * 0x10 + 0x138);
              goto LAB_0389dd48;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,7);
LAB_0389dd48:
        plVar19 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar21 = plVar17;
        unaff_x23 = plVar18;
      } while (plVar19 == (long *)0x0);
      lVar26 = *plVar19;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059c97e0) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
            goto LAB_0389ddb4;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059c97e0,3);
LAB_0389ddb4:
      (*(code *)*puVar10)(plVar19,puVar10[1]);
      lVar26 = *plVar17;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059dfe60) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 199) * 0x10 + 0x138);
            goto LAB_0389de10;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfe60,199);
LAB_0389de10:
      plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
      unaff_x23 = plVar19;
    } while (plVar17 == (long *)0x0);
    lVar26 = *plVar17;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059dfc28) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 6) * 0x10 + 0x138);
          goto LAB_0389de7c;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(plVar17,_DAT_059dfc28,6);
LAB_0389de7c:
    plVar18 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
    plVar21 = plVar17;
  } while (plVar18 == (long *)0x0);
  lVar26 = *plVar18;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 != 0) {
    piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059ca8c8) {
        puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
        goto LAB_0389dee4;
      }
      uVar27 = uVar27 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar27 != 0);
  }
  puVar10 = (undefined8 *)func_0x024d927c(plVar18,_DAT_059ca8c8,0);
LAB_0389dee4:
  plVar21 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
  *(long **)(puVar38 + -0x70) = plVar21;
  *(undefined8 *)(puVar38 + -0x80) = 0;
  *(undefined1 **)(puVar38 + -0x78) = puVar38 + -0x70;
  if (plVar21 != (long *)0x0) {
    unaff_x25 = (long *)&DAT_059c9ad8;
    do {
      lVar26 = *plVar21;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *unaff_x28) {
            puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_0389df58;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar21,*unaff_x28,0);
LAB_0389df58:
      uVar27 = (*(code *)*puVar10)(plVar21,puVar10[1]);
      if ((uVar27 & 1) == 0) goto LAB_0389e054;
      plVar21 = *(long **)(puVar38 + -0x70);
      plVar17 = (long *)0x0;
      plVar18 = plVar19;
      if (plVar21 == (long *)0x0) goto LAB_0389e1a0;
      lVar26 = *plVar21;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *unaff_x29) {
            puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_0389dfbc;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar21,*unaff_x29,0);
LAB_0389dfbc:
      uVar6 = (*(code *)*puVar10)(plVar21,puVar10[1]);
      uVar27 = func_0x035262b8(param_1,uVar16,uVar6,0);
      lVar26 = *plVar19;
      unaff_x24 = (long *)(uVar27 & 0xffffffff);
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == _DAT_059c9ad8) {
            puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
            goto LAB_0389e034;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059c9ad8,1);
LAB_0389e034:
      (*(code *)*puVar10)(plVar19,uVar6,unaff_x24,puVar10[1]);
      plVar21 = *(long **)(puVar38 + -0x70);
      if (plVar21 == (long *)0x0) break;
    } while( true );
  }
  func_0x0249fb90();
LAB_0389e054:
  plVar21 = *(long **)(puVar38 + -0x70);
  if (plVar21 == (long *)0x0) goto LAB_0389e0c8;
  lVar26 = *plVar21;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  if (uVar27 == 0) goto LAB_0389e0a0;
  piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
  goto LAB_0389e088;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar28 = piVar28 + 4;
    if (uVar27 == 0) break;
LAB_0389dae0:
    if (*(long *)(piVar28 + -2) == _DAT_059ca8c8) {
      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_0389db14;
    }
  }
LAB_0389daf8:
  puVar10 = (undefined8 *)func_0x024d927c(plVar19,_DAT_059ca8c8,0);
LAB_0389db14:
  uVar45 = (*(code *)*puVar10)(plVar19,puVar10[1]);
  *(undefined8 *)(puVar38 + -0x70) = uVar45;
  *(undefined8 *)(puVar38 + -0x80) = 0;
  *(undefined1 **)(puVar38 + -0x78) = puVar38 + -0x70;
  do {
    plVar21 = *(long **)(puVar38 + -0x70);
    plVar18 = (long *)0x0;
    if (plVar21 == (long *)0x0) goto LAB_0389e19c;
    lVar26 = *plVar21;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059df6e0) {
          puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_0389db80;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df6e0,0);
LAB_0389db80:
    uVar27 = (*(code *)*puVar10)(plVar21,puVar10[1]);
    if ((uVar27 & 1) == 0) {
      plVar18 = (long *)0x0;
      puVar10 = (undefined8 *)(puVar38 + -0x70);
      goto LAB_0389dc84;
    }
    plVar21 = *(long **)(puVar38 + -0x70);
    plVar18 = (long *)0x0;
    if (plVar21 == (long *)0x0) goto LAB_0389e1a4;
    lVar26 = *plVar21;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059cbc38) {
          puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_0389dbe4;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059cbc38,0);
LAB_0389dbe4:
    uVar27 = (*(code *)*puVar10)(plVar21,puVar10[1]);
    plVar18 = (long *)(uVar27 & 0xffffffff);
    plVar21 = (long *)func_0x0351b3e8(param_1,uVar16,plVar18,1,0);
    if (unaff_x24 == (long *)0x0) goto LAB_0389e1a8;
    lVar26 = *unaff_x24;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059c9ad0) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
          goto LAB_0389dc64;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(unaff_x24,_DAT_059c9ad0,1);
LAB_0389dc64:
    (*(code *)*puVar10)(unaff_x24,plVar18,plVar21,puVar10[1]);
    unaff_x25 = plVar21;
  } while( true );
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar28 = piVar28 + 4;
    if (uVar27 == 0) break;
LAB_0389e470:
    if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_0389e4a4;
    }
  }
LAB_0389e488:
  puVar10 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059e0bd0,0);
LAB_0389e4a4:
  uVar45 = (*(code *)*puVar10)(plVar21,puVar10[1]);
  *(undefined8 *)(puVar38 + -0xc0) = uVar45;
  lVar26 = *(long *)(_DAT_05a27da8 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x024d8f40(lVar26);
  }
  pcVar22 = (char *)func_0x0249f90c(puVar38 + -0xc0,
                                    *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80))
  ;
  if (*pcVar22 != '\0') {
    lVar26 = *plVar21;
    uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
    unaff_x23 = (long *)&DAT_05a27db0;
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
          puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_0389e540;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar10 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059e0bd0,0);
LAB_0389e540:
    uVar45 = (*(code *)*puVar10)(plVar21,puVar10[1]);
    *(undefined8 *)(puVar38 + -0xc0) = uVar45;
    puVar11 = (uint *)func_0x02886844(puVar38 + -0xc0,puVar38 + -0xb4,_DAT_05a27db0);
    if (*(uint *)(puVar38 + -0xb4) == uVar7) {
      return puVar11;
    }
  }
  uVar45 = 0x389e57c;
  puVar38 = puVar38 + -0xc0;
  plVar9 = plVar21;
  param_1 = auVar50._8_8_;
  uVar27 = uVar16;
  goto SUB_0389c88c;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar28 = piVar28 + 4;
    if (uVar27 == 0) break;
LAB_0389e088:
    if (*(long *)(piVar28 + -2) == _DAT_059df598) {
      puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_0389e0bc;
    }
  }
LAB_0389e0a0:
  puVar10 = (undefined8 *)func_0x024d927c(plVar21,_DAT_059df598,0);
LAB_0389e0bc:
  (*(code *)*puVar10)(plVar21,puVar10[1]);
LAB_0389e0c8:
  *(undefined8 *)(puVar38 + -0x80) = 0;
  *(int *)(puVar38 + -100) = (int)uVar16;
  func_0x028866e4(puVar38 + -0x80,puVar38 + -100,_DAT_05a27d88);
  lVar26 = *plVar9;
  uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
  uVar45 = *(undefined8 *)(puVar38 + -0x80);
  if (uVar27 != 0) {
    piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
    do {
      if (*(long *)(piVar28 + -2) == _DAT_059e0bd0) {
        puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
        goto LAB_0389e154;
      }
      uVar27 = uVar27 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar27 != 0);
  }
  puVar10 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0bd0,1);
LAB_0389e154:
  puVar11 = (uint *)(*(code *)*puVar10)(plVar9,uVar45,puVar10[1]);
  return puVar11;
}

