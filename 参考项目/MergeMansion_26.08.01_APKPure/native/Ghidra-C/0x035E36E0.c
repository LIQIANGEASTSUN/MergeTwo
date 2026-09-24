/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Void RestoreInternalState(GameLogic.Config.Types.MetacoreTime restorationTime, GameLogic.Player.IPlayer player)
 * Ghidra function entry: 036e36e0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036e39ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e3b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e3dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e3e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e3fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e4070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e41b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e4420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e466c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e488c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e4a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e5240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a219c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a21d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a2214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a2250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a228c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a22c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a2304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x025a2350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0374e270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e52c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e52ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e4000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e3cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x036e3a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036e4004) */
/* WARNING: Removing unreachable block (ram,0x036e4010) */
/* WARNING: Removing unreachable block (ram,0x036e52f0) */
/* WARNING: Removing unreachable block (ram,0x036e52c8) */
/* WARNING: Removing unreachable block (ram,0x0374e274) */
/* WARNING: Removing unreachable block (ram,0x025a2354) */
/* WARNING: Removing unreachable block (ram,0x025a2308) */
/* WARNING: Removing unreachable block (ram,0x025a2314) */
/* WARNING: Removing unreachable block (ram,0x025a2318) */
/* WARNING: Removing unreachable block (ram,0x025a2324) */
/* WARNING: Removing unreachable block (ram,0x025a22cc) */
/* WARNING: Removing unreachable block (ram,0x025a22d8) */
/* WARNING: Removing unreachable block (ram,0x025a22dc) */
/* WARNING: Removing unreachable block (ram,0x025a22e8) */
/* WARNING: Removing unreachable block (ram,0x025a2290) */
/* WARNING: Removing unreachable block (ram,0x025a229c) */
/* WARNING: Removing unreachable block (ram,0x025a22a0) */
/* WARNING: Removing unreachable block (ram,0x025a22ac) */
/* WARNING: Removing unreachable block (ram,0x025a2254) */
/* WARNING: Removing unreachable block (ram,0x025a2260) */
/* WARNING: Removing unreachable block (ram,0x025a2264) */
/* WARNING: Removing unreachable block (ram,0x025a2270) */
/* WARNING: Removing unreachable block (ram,0x025a2218) */
/* WARNING: Removing unreachable block (ram,0x025a2224) */
/* WARNING: Removing unreachable block (ram,0x025a2228) */
/* WARNING: Removing unreachable block (ram,0x025a2234) */
/* WARNING: Removing unreachable block (ram,0x025a21dc) */
/* WARNING: Removing unreachable block (ram,0x025a21e8) */
/* WARNING: Removing unreachable block (ram,0x025a21ec) */
/* WARNING: Removing unreachable block (ram,0x025a21f8) */
/* WARNING: Removing unreachable block (ram,0x025a21a0) */
/* WARNING: Removing unreachable block (ram,0x025a21ac) */
/* WARNING: Removing unreachable block (ram,0x025a21b0) */
/* WARNING: Removing unreachable block (ram,0x025a21bc) */
/* WARNING: Removing unreachable block (ram,0x036e5244) */
/* WARNING: Removing unreachable block (ram,0x036e5248) */
/* WARNING: Removing unreachable block (ram,0x036e4a90) */
/* WARNING: Removing unreachable block (ram,0x036e4890) */
/* WARNING: Removing unreachable block (ram,0x036e48ac) */
/* WARNING: Removing unreachable block (ram,0x036e48b4) */
/* WARNING: Removing unreachable block (ram,0x036e48dc) */
/* WARNING: Removing unreachable block (ram,0x036e48c0) */
/* WARNING: Removing unreachable block (ram,0x036e48cc) */
/* WARNING: Removing unreachable block (ram,0x036e48ec) */
/* WARNING: Removing unreachable block (ram,0x036e48fc) */
/* WARNING: Removing unreachable block (ram,0x036e4918) */
/* WARNING: Removing unreachable block (ram,0x036e4920) */
/* WARNING: Removing unreachable block (ram,0x036e4948) */
/* WARNING: Removing unreachable block (ram,0x036e492c) */
/* WARNING: Removing unreachable block (ram,0x036e4938) */
/* WARNING: Removing unreachable block (ram,0x036e4954) */
/* WARNING: Removing unreachable block (ram,0x036e49c4) */
/* WARNING: Removing unreachable block (ram,0x036e49c8) */
/* WARNING: Removing unreachable block (ram,0x036e49d0) */
/* WARNING: Removing unreachable block (ram,0x036e49d8) */
/* WARNING: Removing unreachable block (ram,0x036e4970) */
/* WARNING: Removing unreachable block (ram,0x036e4974) */
/* WARNING: Removing unreachable block (ram,0x036e497c) */
/* WARNING: Removing unreachable block (ram,0x036e49dc) */
/* WARNING: Removing unreachable block (ram,0x036e49e8) */
/* WARNING: Removing unreachable block (ram,0x036e49f0) */
/* WARNING: Removing unreachable block (ram,0x036e4984) */
/* WARNING: Removing unreachable block (ram,0x036e4994) */
/* WARNING: Removing unreachable block (ram,0x036e499c) */
/* WARNING: Removing unreachable block (ram,0x036e49f4) */
/* WARNING: Removing unreachable block (ram,0x036e49a8) */
/* WARNING: Removing unreachable block (ram,0x036e49b4) */
/* WARNING: Removing unreachable block (ram,0x036e4a04) */
/* WARNING: Removing unreachable block (ram,0x036e4a14) */
/* WARNING: Removing unreachable block (ram,0x036e4a28) */
/* WARNING: Removing unreachable block (ram,0x036e4a30) */
/* WARNING: Removing unreachable block (ram,0x036e4a58) */
/* WARNING: Removing unreachable block (ram,0x036e4a3c) */
/* WARNING: Removing unreachable block (ram,0x036e4a48) */
/* WARNING: Removing unreachable block (ram,0x036e4a68) */
/* WARNING: Removing unreachable block (ram,0x036e4a84) */
/* WARNING: Removing unreachable block (ram,0x036e4670) */
/* WARNING: Removing unreachable block (ram,0x036e468c) */
/* WARNING: Removing unreachable block (ram,0x036e4694) */
/* WARNING: Removing unreachable block (ram,0x036e46bc) */
/* WARNING: Removing unreachable block (ram,0x036e46a0) */
/* WARNING: Removing unreachable block (ram,0x036e46ac) */
/* WARNING: Removing unreachable block (ram,0x036e46cc) */
/* WARNING: Removing unreachable block (ram,0x036e46dc) */
/* WARNING: Removing unreachable block (ram,0x036e46f8) */
/* WARNING: Removing unreachable block (ram,0x036e4700) */
/* WARNING: Removing unreachable block (ram,0x036e4728) */
/* WARNING: Removing unreachable block (ram,0x036e470c) */
/* WARNING: Removing unreachable block (ram,0x036e4718) */
/* WARNING: Removing unreachable block (ram,0x036e4734) */
/* WARNING: Removing unreachable block (ram,0x036e47c0) */
/* WARNING: Removing unreachable block (ram,0x036e47c4) */
/* WARNING: Removing unreachable block (ram,0x036e47cc) */
/* WARNING: Removing unreachable block (ram,0x036e47d4) */
/* WARNING: Removing unreachable block (ram,0x036e4750) */
/* WARNING: Removing unreachable block (ram,0x036e4754) */
/* WARNING: Removing unreachable block (ram,0x036e475c) */
/* WARNING: Removing unreachable block (ram,0x036e47d8) */
/* WARNING: Removing unreachable block (ram,0x036e47e4) */
/* WARNING: Removing unreachable block (ram,0x036e47ec) */
/* WARNING: Removing unreachable block (ram,0x036e4764) */
/* WARNING: Removing unreachable block (ram,0x036e4790) */
/* WARNING: Removing unreachable block (ram,0x036e4798) */
/* WARNING: Removing unreachable block (ram,0x036e47f0) */
/* WARNING: Removing unreachable block (ram,0x036e47a4) */
/* WARNING: Removing unreachable block (ram,0x036e47b0) */
/* WARNING: Removing unreachable block (ram,0x036e4800) */
/* WARNING: Removing unreachable block (ram,0x036e4810) */
/* WARNING: Removing unreachable block (ram,0x036e4824) */
/* WARNING: Removing unreachable block (ram,0x036e482c) */
/* WARNING: Removing unreachable block (ram,0x036e4854) */
/* WARNING: Removing unreachable block (ram,0x036e4838) */
/* WARNING: Removing unreachable block (ram,0x036e4844) */
/* WARNING: Removing unreachable block (ram,0x036e4864) */
/* WARNING: Removing unreachable block (ram,0x036e4874) */
/* WARNING: Removing unreachable block (ram,0x036e4880) */
/* WARNING: Removing unreachable block (ram,0x036e4424) */
/* WARNING: Removing unreachable block (ram,0x036e4440) */
/* WARNING: Removing unreachable block (ram,0x036e4448) */
/* WARNING: Removing unreachable block (ram,0x036e4470) */
/* WARNING: Removing unreachable block (ram,0x036e4454) */
/* WARNING: Removing unreachable block (ram,0x036e4460) */
/* WARNING: Removing unreachable block (ram,0x036e4480) */
/* WARNING: Removing unreachable block (ram,0x036e4490) */
/* WARNING: Removing unreachable block (ram,0x036e44ac) */
/* WARNING: Removing unreachable block (ram,0x036e44b4) */
/* WARNING: Removing unreachable block (ram,0x036e44dc) */
/* WARNING: Removing unreachable block (ram,0x036e44c0) */
/* WARNING: Removing unreachable block (ram,0x036e44cc) */
/* WARNING: Removing unreachable block (ram,0x036e44e8) */
/* WARNING: Removing unreachable block (ram,0x036e4574) */
/* WARNING: Removing unreachable block (ram,0x036e4578) */
/* WARNING: Removing unreachable block (ram,0x036e4580) */
/* WARNING: Removing unreachable block (ram,0x036e4588) */
/* WARNING: Removing unreachable block (ram,0x036e4504) */
/* WARNING: Removing unreachable block (ram,0x036e4508) */
/* WARNING: Removing unreachable block (ram,0x036e4510) */
/* WARNING: Removing unreachable block (ram,0x036e458c) */
/* WARNING: Removing unreachable block (ram,0x036e4598) */
/* WARNING: Removing unreachable block (ram,0x036e45a0) */
/* WARNING: Removing unreachable block (ram,0x036e4518) */
/* WARNING: Removing unreachable block (ram,0x036e4544) */
/* WARNING: Removing unreachable block (ram,0x036e454c) */
/* WARNING: Removing unreachable block (ram,0x036e45a4) */
/* WARNING: Removing unreachable block (ram,0x036e4558) */
/* WARNING: Removing unreachable block (ram,0x036e4564) */
/* WARNING: Removing unreachable block (ram,0x036e45b4) */
/* WARNING: Removing unreachable block (ram,0x036e45c4) */
/* WARNING: Removing unreachable block (ram,0x036e45d8) */
/* WARNING: Removing unreachable block (ram,0x036e45e0) */
/* WARNING: Removing unreachable block (ram,0x036e4608) */
/* WARNING: Removing unreachable block (ram,0x036e45ec) */
/* WARNING: Removing unreachable block (ram,0x036e45f8) */
/* WARNING: Removing unreachable block (ram,0x036e4618) */
/* WARNING: Removing unreachable block (ram,0x036e463c) */
/* WARNING: Removing unreachable block (ram,0x036e4644) */
/* WARNING: Removing unreachable block (ram,0x036e4654) */
/* WARNING: Removing unreachable block (ram,0x036e4660) */
/* WARNING: Removing unreachable block (ram,0x036e41bc) */
/* WARNING: Removing unreachable block (ram,0x036e41d8) */
/* WARNING: Removing unreachable block (ram,0x036e41e0) */
/* WARNING: Removing unreachable block (ram,0x036e4208) */
/* WARNING: Removing unreachable block (ram,0x036e41ec) */
/* WARNING: Removing unreachable block (ram,0x036e41f8) */
/* WARNING: Removing unreachable block (ram,0x036e4218) */
/* WARNING: Removing unreachable block (ram,0x036e4228) */
/* WARNING: Removing unreachable block (ram,0x036e4244) */
/* WARNING: Removing unreachable block (ram,0x036e424c) */
/* WARNING: Removing unreachable block (ram,0x036e4274) */
/* WARNING: Removing unreachable block (ram,0x036e4258) */
/* WARNING: Removing unreachable block (ram,0x036e4264) */
/* WARNING: Removing unreachable block (ram,0x036e4280) */
/* WARNING: Removing unreachable block (ram,0x036e42f0) */
/* WARNING: Removing unreachable block (ram,0x036e42f4) */
/* WARNING: Removing unreachable block (ram,0x036e42fc) */
/* WARNING: Removing unreachable block (ram,0x036e4304) */
/* WARNING: Removing unreachable block (ram,0x036e429c) */
/* WARNING: Removing unreachable block (ram,0x036e42a0) */
/* WARNING: Removing unreachable block (ram,0x036e42a8) */
/* WARNING: Removing unreachable block (ram,0x036e4308) */
/* WARNING: Removing unreachable block (ram,0x036e4314) */
/* WARNING: Removing unreachable block (ram,0x036e431c) */
/* WARNING: Removing unreachable block (ram,0x036e42b0) */
/* WARNING: Removing unreachable block (ram,0x036e42c0) */
/* WARNING: Removing unreachable block (ram,0x036e42c8) */
/* WARNING: Removing unreachable block (ram,0x036e4320) */
/* WARNING: Removing unreachable block (ram,0x036e42d4) */
/* WARNING: Removing unreachable block (ram,0x036e42e0) */
/* WARNING: Removing unreachable block (ram,0x036e4330) */
/* WARNING: Removing unreachable block (ram,0x036e4340) */
/* WARNING: Removing unreachable block (ram,0x036e4354) */
/* WARNING: Removing unreachable block (ram,0x036e435c) */
/* WARNING: Removing unreachable block (ram,0x036e4384) */
/* WARNING: Removing unreachable block (ram,0x036e4368) */
/* WARNING: Removing unreachable block (ram,0x036e4374) */
/* WARNING: Removing unreachable block (ram,0x036e4394) */
/* WARNING: Removing unreachable block (ram,0x036e43a4) */
/* WARNING: Removing unreachable block (ram,0x036e43c0) */
/* WARNING: Removing unreachable block (ram,0x036e43c8) */
/* WARNING: Removing unreachable block (ram,0x036e43f0) */
/* WARNING: Removing unreachable block (ram,0x036e43d4) */
/* WARNING: Removing unreachable block (ram,0x036e43e0) */
/* WARNING: Removing unreachable block (ram,0x036e4400) */
/* WARNING: Removing unreachable block (ram,0x036e4418) */
/* WARNING: Removing unreachable block (ram,0x036e3fac) */
/* WARNING: Removing unreachable block (ram,0x036e401c) */
/* WARNING: Removing unreachable block (ram,0x036e4024) */
/* WARNING: Removing unreachable block (ram,0x036e402c) */
/* WARNING: Removing unreachable block (ram,0x036e3fbc) */
/* WARNING: Removing unreachable block (ram,0x036e4030) */
/* WARNING: Removing unreachable block (ram,0x036e4064) */
/* WARNING: Removing unreachable block (ram,0x036e4070) */
/* WARNING: Removing unreachable block (ram,0x036e3ddc) */
/* WARNING: Removing unreachable block (ram,0x036e3e14) */
/* WARNING: Removing unreachable block (ram,0x036e3e1c) */
/* WARNING: Removing unreachable block (ram,0x036e3e24) */
/* WARNING: Removing unreachable block (ram,0x036e3dec) */
/* WARNING: Removing unreachable block (ram,0x036e3e34) */
/* WARNING: Removing unreachable block (ram,0x036e3e68) */
/* WARNING: Removing unreachable block (ram,0x036e3b70) */
/* WARNING: Removing unreachable block (ram,0x036e3b80) */
/* WARNING: Removing unreachable block (ram,0x036e3b88) */
/* WARNING: Removing unreachable block (ram,0x036e3bb0) */
/* WARNING: Removing unreachable block (ram,0x036e3b94) */
/* WARNING: Removing unreachable block (ram,0x036e3ba0) */
/* WARNING: Removing unreachable block (ram,0x036e3bc0) */
/* WARNING: Removing unreachable block (ram,0x036e3bd0) */
/* WARNING: Removing unreachable block (ram,0x036e3bec) */
/* WARNING: Removing unreachable block (ram,0x036e3bf4) */
/* WARNING: Removing unreachable block (ram,0x036e3c1c) */
/* WARNING: Removing unreachable block (ram,0x036e3c00) */
/* WARNING: Removing unreachable block (ram,0x036e3c0c) */
/* WARNING: Removing unreachable block (ram,0x036e3c2c) */
/* WARNING: Removing unreachable block (ram,0x036e3cdc) */
/* WARNING: Removing unreachable block (ram,0x036e3ce0) */
/* WARNING: Removing unreachable block (ram,0x036e3ce8) */
/* WARNING: Removing unreachable block (ram,0x036e3cf4) */
/* WARNING: Removing unreachable block (ram,0x036e3c48) */
/* WARNING: Removing unreachable block (ram,0x036e3c4c) */
/* WARNING: Removing unreachable block (ram,0x036e3e78) */
/* WARNING: Removing unreachable block (ram,0x036e3e88) */
/* WARNING: Removing unreachable block (ram,0x036e3e90) */
/* WARNING: Removing unreachable block (ram,0x036e3eb8) */
/* WARNING: Removing unreachable block (ram,0x036e3e9c) */
/* WARNING: Removing unreachable block (ram,0x036e3ea8) */
/* WARNING: Removing unreachable block (ram,0x036e3ec4) */
/* WARNING: Removing unreachable block (ram,0x036e3ed4) */
/* WARNING: Removing unreachable block (ram,0x036e3ef0) */
/* WARNING: Removing unreachable block (ram,0x036e3ef8) */
/* WARNING: Removing unreachable block (ram,0x036e3f20) */
/* WARNING: Removing unreachable block (ram,0x036e3f04) */
/* WARNING: Removing unreachable block (ram,0x036e3f10) */
/* WARNING: Removing unreachable block (ram,0x036e3f30) */
/* WARNING: Removing unreachable block (ram,0x036e3fe0) */
/* WARNING: Removing unreachable block (ram,0x036e3fe4) */
/* WARNING: Removing unreachable block (ram,0x036e3fec) */
/* WARNING: Removing unreachable block (ram,0x036e3ff8) */
/* WARNING: Removing unreachable block (ram,0x036e3f4c) */
/* WARNING: Removing unreachable block (ram,0x036e3f50) */
/* WARNING: Removing unreachable block (ram,0x036e4074) */
/* WARNING: Removing unreachable block (ram,0x036e4090) */
/* WARNING: Removing unreachable block (ram,0x036e4098) */
/* WARNING: Removing unreachable block (ram,0x036e40c0) */
/* WARNING: Removing unreachable block (ram,0x036e40a4) */
/* WARNING: Removing unreachable block (ram,0x036e40b0) */
/* WARNING: Removing unreachable block (ram,0x036e40d0) */
/* WARNING: Removing unreachable block (ram,0x036e40e0) */
/* WARNING: Removing unreachable block (ram,0x036e40fc) */
/* WARNING: Removing unreachable block (ram,0x036e4104) */
/* WARNING: Removing unreachable block (ram,0x036e412c) */
/* WARNING: Removing unreachable block (ram,0x036e4110) */
/* WARNING: Removing unreachable block (ram,0x036e411c) */
/* WARNING: Removing unreachable block (ram,0x036e4138) */
/* WARNING: Removing unreachable block (ram,0x036e4188) */
/* WARNING: Removing unreachable block (ram,0x036e418c) */
/* WARNING: Removing unreachable block (ram,0x036e4154) */
/* WARNING: Removing unreachable block (ram,0x036e4158) */
/* WARNING: Removing unreachable block (ram,0x036e419c) */
/* WARNING: Removing unreachable block (ram,0x036e41a8) */
/* WARNING: Removing unreachable block (ram,0x036e4160) */
/* WARNING: Removing unreachable block (ram,0x036e4194) */
/* WARNING: Removing unreachable block (ram,0x036e416c) */
/* WARNING: Removing unreachable block (ram,0x036e4180) */
/* WARNING: Removing unreachable block (ram,0x036e41ac) */
/* WARNING: Removing unreachable block (ram,0x036e41b0) */
/* WARNING: Removing unreachable block (ram,0x036e3f58) */
/* WARNING: Removing unreachable block (ram,0x036e3f9c) */
/* WARNING: Removing unreachable block (ram,0x036e3c54) */
/* WARNING: Removing unreachable block (ram,0x036e3c84) */
/* WARNING: Removing unreachable block (ram,0x036e3c8c) */
/* WARNING: Removing unreachable block (ram,0x036e3cac) */
/* WARNING: Removing unreachable block (ram,0x036e3cb4) */
/* WARNING: Removing unreachable block (ram,0x036e3d18) */
/* WARNING: Removing unreachable block (ram,0x036e3cc0) */
/* WARNING: Removing unreachable block (ram,0x036e3ccc) */
/* WARNING: Removing unreachable block (ram,0x036e3d28) */
/* WARNING: Removing unreachable block (ram,0x036e3d38) */
/* WARNING: Removing unreachable block (ram,0x036e3d4c) */
/* WARNING: Removing unreachable block (ram,0x036e3d54) */
/* WARNING: Removing unreachable block (ram,0x036e3d7c) */
/* WARNING: Removing unreachable block (ram,0x036e3d60) */
/* WARNING: Removing unreachable block (ram,0x036e3d6c) */
/* WARNING: Removing unreachable block (ram,0x036e3d8c) */
/* WARNING: Removing unreachable block (ram,0x036e3dcc) */
/* WARNING: Removing unreachable block (ram,0x036e39f0) */
/* WARNING: Removing unreachable block (ram,0x036e3d00) */
/* WARNING: Removing unreachable block (ram,0x036e3d0c) */
/* WARNING: Removing unreachable block (ram,0x036e3e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_036e36e0(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x23;
  undefined *unaff_x24;
  long *unaff_x25;
  undefined *unaff_x26;
  long *unaff_x29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_160 [2];
  long *plStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plVar5;
  
  plVar9 = (long *)&stack0xffffffffffffffa0;
  if ((bRam0000000005e2da68 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d85c0);
    func_0x0249f8e4(&DAT_059da620);
    func_0x0249f8e4(&DAT_059da668);
    func_0x0249f8e4(&DAT_059dc098);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df178);
    func_0x0249f8e4(&DAT_059df180);
    func_0x0249f8e4(&DAT_059df498);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059dfe38);
    func_0x0249f8e4(&DAT_059e0158);
    func_0x0249f8e4(&DAT_059e0720);
    func_0x0249f8e4(&DAT_059e0738);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e0980);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_059e73d8);
    func_0x0249f8e4(&DAT_059e7900);
    func_0x0249f8e4(&DAT_059e8688);
    func_0x0249f8e4(&DAT_059ea748);
    bRam0000000005e2da68 = 1;
  }
  if (param_3 != (long *)0x0) {
    lVar13 = *param_3;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059df8e8) {
          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_036e3880;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)func_0x024d927c(param_3,_DAT_059df8e8,5);
LAB_036e3880:
    uVar7 = (*(code *)*puVar6)(param_3,puVar6[1]);
    plVar14 = *(long **)(param_1 + 0x10);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x1c8))
                                  (plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x1d0));
      if (plVar14 == (long *)0x0) {
        return (long *)0x0;
      }
      lVar13 = *plVar14;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059dfbc0) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_036e3908;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfbc0,1);
LAB_036e3908:
      plVar8 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar13 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059df498) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
              goto LAB_036e3974;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar6 = (undefined8 *)func_0x024d927c(plVar8,_DAT_059df498,9);
LAB_036e3974:
        uVar16 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        unaff_x23 = (long *)(uVar16 & 0xffffffff);
        lVar13 = func_0x036d5e58(param_1);
        if ((uVar16 & 1) == 0) {
          if (lVar13 != 0) {
            if (*(long *)(lVar13 + 0x10) == 0) goto LAB_036e3a28;
            lVar13 = func_0x036d5e58(param_1);
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + 0x10);
              *plVar14 = 0;
              uVar7 = 0x36e3a28;
              goto SUB_0249f888;
            }
          }
        }
        else if (lVar13 != 0) {
          if (*(long *)(lVar13 + 0x10) == 0) {
            lVar13 = func_0x036d5e58(param_1);
            unaff_x25 = (long *)func_0x03530c84(param_2,0);
            unaff_x24 = (undefined *)func_0x0249fb80(_DAT_059dc098);
            func_0x037304b8(unaff_x24,unaff_x25,0);
            unaff_x23 = (long *)0x0;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + 0x10);
              *plVar14 = (long)unaff_x24;
              uVar7 = 0x36e39f0;
              plVar9 = (long *)&stack0xffffffffffffffa0;
              goto SUB_0249f888;
            }
          }
          else {
LAB_036e3a28:
            unaff_x23 = (long *)func_0x036d5e58(param_1);
            lVar13 = *plVar14;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == _DAT_059dfbc0) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_036e3a84;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar6 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfbc0,2);
LAB_036e3a84:
            plVar9 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
            if (plVar9 != (long *)0x0) {
              lVar13 = *plVar9;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == _DAT_059dfe38) {
                    puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                    goto LAB_036e3af0;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar6 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059dfe38,3);
LAB_036e3af0:
              uVar16 = (*(code *)*puVar6)(plVar9,puVar6[1]);
              unaff_x24 = (undefined *)(uVar16 & 0xffffffff);
              lVar13 = func_0x036d5e58(param_1);
              if ((uVar16 & 1) == 0) {
                if (lVar13 != 0) {
                  if (*(long *)(lVar13 + 0x70) == 0) goto LAB_036e3b4c;
                  unaff_x24 = (undefined *)0x0;
                  goto LAB_036e3b5c;
                }
              }
              else if (lVar13 != 0) {
                if (*(long *)(lVar13 + 0x70) == 0) {
                  unaff_x24 = (undefined *)func_0x0249fb80(_DAT_059ea748);
                  func_0x0372bd88(unaff_x24,0);
                }
                else {
LAB_036e3b4c:
                  lVar13 = func_0x036d5e58(param_1);
                  if (lVar13 == 0) goto LAB_036e4ab8;
                  unaff_x24 = *(undefined **)(lVar13 + 0x70);
                }
LAB_036e3b5c:
                if (unaff_x23 != (long *)0x0) {
                  plVar14 = unaff_x23 + 0xe;
                  *plVar14 = (long)unaff_x24;
                  uVar7 = 0x36e3b70;
                  plVar9 = (long *)&stack0xffffffffffffffa0;
                  goto SUB_0249f888;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036e4ab8:
  auVar21 = func_0x0249fb90();
  uVar7 = auVar21._8_8_;
  lVar13 = auVar21._0_8_;
  uStack_b0 = 0x36e4abc;
  if ((bRam0000000005e2da69 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0788);
    func_0x0249f8e4(&DAT_059e2be8);
    func_0x0249f8e4(&DAT_05a27ee0);
    func_0x0249f8e4(&DAT_05a28008);
    func_0x0249f8e4(&DAT_05a28010);
    func_0x0249f8e4(&DAT_05a27ee8);
    func_0x0249f8e4(&DAT_05a29c88);
    func_0x0249f8e4(&DAT_05a29cd8);
    func_0x0249f8e4(&DAT_059d4190);
    func_0x0249f8e4(&DAT_059d4170);
    bRam0000000005e2da69 = 1;
  }
  auStack_c8._0_8_ = 0;
  auStack_c8._8_8_ = 0;
  auStack_d8._0_8_ = 0;
  auStack_d8._8_8_ = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  auStack_f8._0_8_ = 0;
  auStack_f8._8_8_ = 0;
  auStack_108._0_8_ = 0;
  auStack_108._8_8_ = 0;
  plVar14 = (long *)0x5e2d000;
  auVar2 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if (param_4 != (long *)0x0) {
    lVar15 = *param_4;
    unaff_x24 = &DAT_059df8e8;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059df8e8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_036e4c00;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)func_0x024d927c(param_4,_DAT_059df8e8,5);
LAB_036e4c00:
    uVar10 = (*(code *)*puVar6)(param_4,puVar6[1]);
    auVar3._8_8_ = auStack_c8._8_8_;
    auVar3._0_8_ = auStack_c8._0_8_;
    auVar2._8_8_ = auStack_d8._8_8_;
    auVar2._0_8_ = auStack_d8._0_8_;
    plVar9 = *(long **)(lVar13 + 0x10);
    if (plVar9 != (long *)0x0) {
      plVar14 = (long *)(**(code **)(*plVar9 + 0x1c8))
                                  (plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x1d0));
      if (plVar14 == (long *)0x0) {
        return (long *)0x0;
      }
      lVar15 = *param_4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059df8e8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_036e4c88;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)func_0x024d927c(param_4,_DAT_059df8e8,5);
LAB_036e4c88:
      uVar10 = (*(code *)*puVar6)(param_4,puVar6[1]);
      uVar16 = func_0x036edd98(lVar13,uVar10,0);
      if ((uVar16 & 1) == 0) {
LAB_036e4f34:
        unaff_x23 = (long *)0x0;
      }
      else {
        uVar16 = func_0x036ee320(lVar13,param_4,0);
        if ((uVar16 & 1) != 0) goto LAB_036e4f34;
        lVar15 = *plVar14;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059dfbc0) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
              goto LAB_036e4d14;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar6 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfbc0,3);
LAB_036e4d14:
        plVar9 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
        auVar3._8_8_ = auStack_c8._8_8_;
        auVar3._0_8_ = auStack_c8._0_8_;
        auVar2._8_8_ = auStack_d8._8_8_;
        auVar2._0_8_ = auStack_d8._0_8_;
        if (plVar9 == (long *)0x0) goto LAB_036e51d0;
        lVar15 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059deb70) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_036e4d80;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar6 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059deb70,2);
LAB_036e4d80:
        lVar15 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if (lVar15 == 0) goto LAB_036e4f34;
        lVar15 = func_0x036d5e58(lVar13);
        unaff_x23 = plVar9;
        auVar2 = auStack_d8;
        auVar3 = auStack_c8;
        if (lVar15 == 0) goto LAB_036e51d0;
        if (*(long *)(lVar15 + 0x18) == 0) goto LAB_036e4f34;
        auStack_c8 = func_0x036f33dc(lVar13,param_4,uVar7,0);
        auStack_d8 = func_0x036f52d8(lVar13,uVar7,0);
        lVar15 = *(long *)(_DAT_05a28008 + 0x20);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x024d8f40();
        }
        pcVar11 = (char *)func_0x0249f90c(auStack_c8,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80));
        if (*pcVar11 == '\0') goto LAB_036e4f34;
        lVar15 = *(long *)(_DAT_05a27ee0 + 0x20);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = func_0x024d8f40();
        }
        pcVar11 = (char *)func_0x0249f90c(auStack_d8,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80));
        if (*pcVar11 == '\0') goto LAB_036e4f34;
        unaff_x25 = (long *)&DAT_05a27ee8;
        func_0x02886844(auStack_d8,&uStack_b8,_DAT_05a27ee8);
        uVar10 = uStack_b8;
        unaff_x26 = &DAT_059e2be8;
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar10 = func_0x0352ed34(uVar10,0);
        func_0x02886844(auStack_c8,&uStack_b8,_DAT_05a28010);
        uVar16 = func_0x0352ea8c(uVar10,uStack_b8,0);
        if ((uVar16 & 1) == 0) goto LAB_036e4f34;
        func_0x02886844(auStack_d8,&uStack_b8,_DAT_05a27ee8);
        uVar10 = uStack_b8;
        if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uVar10 = func_0x0352ed34(uVar10,0);
        func_0x02886844(auStack_c8,&uStack_b8,_DAT_05a28010);
        uVar10 = func_0x0352ec80(uVar10,uStack_b8,0);
        uVar10 = func_0x0352ece0(uVar10,0);
        func_0x036dcba8(lVar13,uVar10);
        func_0x036e2378(lVar13,uVar7);
        unaff_x23 = (long *)0x1;
      }
      lVar15 = *param_4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059df8e8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_036e4f88;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)func_0x024d927c(param_4,_DAT_059df8e8,5);
LAB_036e4f88:
      uVar10 = (*(code *)*puVar6)(param_4,puVar6[1]);
      uVar16 = func_0x036f619c(lVar13,uVar10,0);
      if ((uVar16 & 1) == 0) {
        return unaff_x23;
      }
      lVar15 = *plVar14;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059dfbc0) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_036e4ffc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)func_0x024d927c(plVar14,_DAT_059dfbc0,0);
LAB_036e4ffc:
      plVar9 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
      auVar2 = auStack_d8;
      auVar3 = auStack_c8;
      if (plVar9 != (long *)0x0) {
        lVar15 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059e0788) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_036e5068;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar6 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059e0788,2);
LAB_036e5068:
        lVar15 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if (lVar15 == 0) {
          return unaff_x23;
        }
        lVar15 = func_0x036d5e58(lVar13);
        plVar14 = plVar9;
        auVar2 = auStack_d8;
        auVar3 = auStack_c8;
        if (lVar15 != 0) {
          if (*(long *)(lVar15 + 0x20) == 0) {
            return unaff_x23;
          }
          auStack_f8 = func_0x036f4ad4(lVar13,param_4,uVar7,0);
          if (*(int *)(_DAT_059d4190 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar16 = func_0x0288eda8(auStack_f8,&uStack_e0,_DAT_05a29cd8);
          if ((uVar16 & 1) == 0) {
            return unaff_x23;
          }
          auStack_108 = func_0x036f56f8(lVar13,uVar7,0);
          if (*(int *)(_DAT_059d4170 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar16 = func_0x0288eda8(auStack_108,&uStack_e8,_DAT_05a29c88);
          uVar10 = uStack_e8;
          if ((uVar16 & 1) == 0) {
            return unaff_x23;
          }
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar10 = func_0x0352ed34(uVar10,0);
          uVar16 = func_0x0352ea8c(uVar10,uStack_e0,0);
          uVar10 = uStack_e8;
          if ((uVar16 & 1) == 0) {
            return unaff_x23;
          }
          if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          uVar10 = func_0x0352ed34(uVar10,0);
          uVar10 = func_0x0352ec80(uVar10,uStack_e0,0);
          uVar10 = func_0x0352ece0(uVar10,0);
          func_0x036de6a0(lVar13,uVar10);
          func_0x036e2410(lVar13,uVar7);
          return (long *)0x1;
        }
      }
    }
  }
LAB_036e51d0:
  auStack_d8 = auVar2;
  auStack_c8 = auVar3;
  auVar22 = func_0x0249fb90();
  plVar8 = auVar22._8_8_;
  uVar7 = auVar22._0_8_;
  lStack_130 = 0x36e51d4;
  plStack_128 = param_4;
  auStack_120 = auVar21;
  if ((bRam0000000005e2da6a & 1) == 0) {
    func_0x0249f8e4(&DAT_059e1478);
    bRam0000000005e2da6a = 1;
  }
  lVar13 = func_0x036d5e58(uVar7);
  if (lVar13 == 0) {
    func_0x0249fb90();
    auStack_160[0] = 0x36e5278;
    uStack_140 = 0x5e2d000;
    plStack_150 = plVar14;
    if ((bRam0000000005e2da6c & 1) == 0) {
      uStack_148 = uVar7;
      plStack_138 = plVar8;
      func_0x0249f8e4(&DAT_059effa0);
      auVar22._8_8_ = plStack_138;
      auVar22._0_8_ = uStack_148;
      bRam0000000005e2da6c = 1;
    }
    plStack_138 = auVar22._8_8_;
    uStack_148 = auVar22._0_8_;
    plVar9 = (long *)func_0x0249fb80(_DAT_059effa0);
    return plVar9;
  }
  uVar16 = *(ulong *)(lVar13 + 0x78);
  if (uVar16 == 0) {
    uVar7 = func_0x036d5e58(uVar7);
    uVar16 = func_0x0249fb80(_DAT_059e1478);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar16;
    uVar10 = 0x36e5244;
  }
  else {
    uVar7 = 0x5e2d000;
    auStack_120 = auStack_120;
    if ((bRam0000000005e2de26 & 1) == 0) {
      func_0x0249f8e4(&DAT_05a17d70,plVar8,0);
      bRam0000000005e2de26 = 1;
    }
    plVar9 = *(long **)(uVar16 + 0x10);
    if (plVar9 != (long *)0x0) {
      plVar4 = (long *)auStack_110;
      plVar12 = _DAT_05a17d70;
      plVar19 = plStack_128;
      lVar13 = lStack_130;
      auVar21 = auStack_120;
      do {
        plVar5 = plVar4 + -10;
        plVar4[-10] = (long)unaff_x29;
        plVar4[-9] = lVar13;
        plVar4[-8] = (long)unaff_x26;
        plVar4[-7] = (long)unaff_x25;
        plVar4[-6] = (long)unaff_x24;
        plVar4[-5] = (long)unaff_x23;
        plVar4[-4] = (long)plVar14;
        plVar4[-3] = (long)plVar19;
        plVar4[-2] = auVar21._0_8_;
        plVar4[-1] = auVar21._8_8_;
        unaff_x24 = (undefined *)tpidr_el0;
        plVar4[-0xb] = *(long *)(unaff_x24 + 0x28);
        lVar13 = plVar12[4];
        plVar4[-0xc] = (long)plVar8;
        uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x48) + 0xfc);
        uVar16 = uVar18 + 0xf & 0x1fffffff0;
        puVar6 = (undefined8 *)((long)plVar4 + (-0x60 - uVar16));
        plVar20 = (long *)((long)puVar6 - uVar16);
        unaff_x25 = (long *)plVar9[2];
        *(int *)((long)plVar9 + 0x1c) = *(int *)((long)plVar9 + 0x1c) + 1;
        unaff_x23 = plVar20;
        if (unaff_x25 == (long *)0x0) {
          if (*(long *)(unaff_x24 + 0x28) == plVar4[-0xb]) {
            func_0x0249fb90();
LAB_025a1f58:
            if (*(long *)(unaff_x24 + 0x28) == plVar4[-0xb]) {
              func_0x0249fb98();
            }
          }
        }
        else {
          uVar1 = *(uint *)(plVar9 + 3);
          unaff_x26 = (undefined *)(long)(int)uVar1;
          if (uVar1 < *(uint *)(unaff_x25 + 3)) {
            *(uint *)(plVar9 + 3) = uVar1 + 1;
            plVar19 = plVar8;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x48) + 0x28)) {
              plVar19 = plVar4 + -0xc;
            }
            func_0x054ed0d0(puVar6,plVar19,uVar18);
            unaff_x23 = unaff_x25 + 4;
            func_0x054ed0e0((long *)((long)unaff_x23 +
                                    (ulong)*(uint *)(*unaff_x25 + 0x104) * (long)unaff_x26),plVar19,
                            uVar18);
            lVar13 = *(long *)(*(long *)(plVar12[4] + 0xc0) + 0x48);
            if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = func_0x024d8f40();
            }
            plVar14 = plVar12;
            if (*(uint *)(unaff_x25 + 3) <= uVar1) goto LAB_025a1f58;
            plVar8 = (long *)func_0x0249f88c(lVar13,(long *)((long)unaff_x23 +
                                                            (ulong)*(uint *)(*unaff_x25 + 0x104) *
                                                            (long)unaff_x26),puVar6);
            plVar9 = plVar19;
          }
          else {
            unaff_x25 = *(long **)(lVar13 + 0xc0);
            uVar1 = *(uint *)(unaff_x25[9] + 0x28);
            unaff_x26 = (undefined *)(ulong)uVar1;
            plVar12 = plVar8;
            if (-1 < (int)uVar1) {
              plVar12 = plVar4 + -0xc;
            }
            func_0x054ed0d0(puVar6,plVar12,uVar18);
            if ((int)uVar1 < 0) {
              func_0x054ed0d0(plVar20,plVar12,uVar18);
            }
            else {
              unaff_x23 = (long *)*puVar6;
            }
            plVar8 = (long *)func_0x0282fb5c(plVar9,unaff_x23,unaff_x25[0xe]);
          }
          plVar19 = plVar9;
          plVar14 = plVar12;
          if (*(long *)(unaff_x24 + 0x28) == plVar4[-0xb]) {
            return plVar8;
          }
        }
        func_0x054ed0f0();
        plVar20[-4] = 0x25a1f70;
        plVar20[-2] = uVar18;
        plVar20[-1] = (long)puVar6;
        if ((bRam0000000005e263de & 1) == 0) {
          func_0x0249f8e4(&DAT_059e1230);
          func_0x0249f8e4(&DAT_05a18790);
          func_0x0249f8e4(&DAT_059e2c60);
          bRam0000000005e263de = 1;
        }
        if (*(int *)(_DAT_059e2c60 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        plVar9 = *(long **)(*(long *)(_DAT_059e2c60 + 0xb8) + 0x10);
        if (*(int *)(_DAT_059e1230 + 0xe4) == 0) {
          func_0x0249fa64(_DAT_059e1230);
        }
        if (plVar9 == (long *)0x0) goto LAB_025a201c;
        auVar21 = *(undefined1 (*) [16])(plVar20 + -2);
        plVar8 = (long *)**(undefined8 **)(_DAT_059e1230 + 0xb8);
        lVar13 = plVar20[-4];
        plVar4 = plVar20;
        plVar12 = _DAT_05a18790;
        unaff_x29 = plVar5;
      } while( true );
    }
    uVar10 = 0x374e204;
    auVar21 = func_0x0249fb90();
  }
  plVar9 = auStack_160;
  auStack_160[0] = uVar10;
  plStack_150 = plVar14;
  uStack_148 = uVar7;
  uStack_140 = uVar16;
  plStack_138 = plVar8;
  if ((bRam0000000005e2de27 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a17d60,auVar21._8_8_);
    func_0x0249f8e4(&DAT_059d0100);
    bRam0000000005e2de27 = 1;
  }
  lVar13 = func_0x0249fb80(_DAT_059d0100);
  func_0x0282ee2c(lVar13,_DAT_05a17d60);
  plVar14 = (long *)(auVar21._0_8_ + 0x10);
  *plVar14 = lVar13;
  uVar7 = 0x374e274;
SUB_0249f888:
  if (iRam0000000006058428 != 0) {
    *(undefined8 *)((long)plVar9 + -0x10) = uVar7;
    plVar14 = (long *)func_0x0258f520(1L << ((ulong)plVar14 >> 0xc & 0x3f),
                                      ((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
  }
  return plVar14;
LAB_025a201c:
  func_0x0249fb90();
  plVar9 = plVar20 + -0xc;
  plVar20[-0xc] = 0x25a2020;
  plVar20[-10] = (long)unaff_x24;
  plVar20[-9] = (long)unaff_x23;
  plVar20[-8] = (long)plVar14;
  plVar20[-7] = (long)plVar19;
  plVar20[-6] = (long)&DAT_059e1230;
  plVar20[-5] = 0;
  if ((bRam0000000005e263df & 1) == 0) {
    func_0x0249f8e4(&DAT_059d7530);
    func_0x0249f8e4(&DAT_059e11f8);
    func_0x0249f8e4(&DAT_059d7538);
    func_0x0249f8e4(&DAT_059baf98);
    func_0x0249f8e4(&DAT_059e1230);
    func_0x0249f8e4(&DAT_059e1238);
    func_0x0249f8e4(&DAT_059e1240);
    func_0x0249f8e4(&DAT_059e1248);
    func_0x0249f8e4(&DAT_059e1258);
    func_0x0249f8e4(&DAT_059e1250);
    func_0x0249f8e4(&DAT_059e1260);
    func_0x0249f8e4(&DAT_059e1270);
    func_0x0249f8e4(&DAT_059e1268);
    func_0x0249f8e4(&DAT_05a7b738);
    bRam0000000005e263df = 1;
  }
  uVar7 = _DAT_059baf98;
  if (*(int *)(lRam0000000005e457f0 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  func_0x045b8c2c(uVar7,0);
  func_0x0249f9d4(_DAT_059d7538,0);
  lVar13 = func_0x0249f9d4(_DAT_059d7530,8);
  if (*(int *)(_DAT_059e1238 + 0xe4) == 0) {
    func_0x0249fa64(_DAT_059e1238);
  }
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) != 0) {
      plVar14 = (long *)(lVar13 + 0x20);
      *plVar14 = **(long **)(_DAT_059e1238 + 0xb8);
      uVar7 = 0x25a21a0;
      goto SUB_0249f888;
    }
    func_0x0249fb98();
  }
  lVar13 = func_0x0249fb90();
  return *(long **)(lVar13 + 0x10);
}

