/* Ghidra 12.1.2 native pseudocode; RVA 0x6503558; MergeEngine.ECS.Systems.Player.ResourcesSystem.GetResource; status ok */


/* WARNING: Possible PIC construction at 0x064a6ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x064a7030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06605e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fba0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fba370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fba47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fba734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fba4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06606420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06606588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06606ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06606dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06606e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe4248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe4874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe4900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fe3c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06120d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06607148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0660723c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06607260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06607288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06607264) */
/* WARNING: Removing unreachable block (ram,0x06607270) */
/* WARNING: Removing unreachable block (ram,0x06607278) */
/* WARNING: Removing unreachable block (ram,0x06607240) */
/* WARNING: Removing unreachable block (ram,0x0660714c) */
/* WARNING: Removing unreachable block (ram,0x06607170) */
/* WARNING: Removing unreachable block (ram,0x064a731c) */
/* WARNING: Removing unreachable block (ram,0x06120d78) */
/* WARNING: Removing unreachable block (ram,0x06120d7c) */
/* WARNING: Removing unreachable block (ram,0x04321700) */
/* WARNING: Removing unreachable block (ram,0x0432177c) */
/* WARNING: Removing unreachable block (ram,0x04321730) */
/* WARNING: Removing unreachable block (ram,0x04321758) */
/* WARNING: Removing unreachable block (ram,0x04d0e440) */
/* WARNING: Removing unreachable block (ram,0x04d0e450) */
/* WARNING: Removing unreachable block (ram,0x04d0e464) */
/* WARNING: Removing unreachable block (ram,0x04d0e480) */
/* WARNING: Removing unreachable block (ram,0x04d0e46c) */
/* WARNING: Removing unreachable block (ram,0x04321748) */
/* WARNING: Removing unreachable block (ram,0x04fe3c58) */
/* WARNING: Removing unreachable block (ram,0x04fe4904) */
/* WARNING: Removing unreachable block (ram,0x04fe4878) */
/* WARNING: Removing unreachable block (ram,0x04fe424c) */
/* WARNING: Removing unreachable block (ram,0x04fe3f94) */
/* WARNING: Removing unreachable block (ram,0x04fe3fa4) */
/* WARNING: Removing unreachable block (ram,0x04fe3e88) */
/* WARNING: Removing unreachable block (ram,0x04fe3fa8) */
/* WARNING: Removing unreachable block (ram,0x04fe3e8c) */
/* WARNING: Removing unreachable block (ram,0x04fe3ec0) */
/* WARNING: Removing unreachable block (ram,0x04fe3ec4) */
/* WARNING: Removing unreachable block (ram,0x04fe3ed4) */
/* WARNING: Removing unreachable block (ram,0x04fe3f08) */
/* WARNING: Removing unreachable block (ram,0x04fe3f14) */
/* WARNING: Removing unreachable block (ram,0x04fe3f18) */
/* WARNING: Removing unreachable block (ram,0x04fe3f28) */
/* WARNING: Removing unreachable block (ram,0x04fe3fb8) */
/* WARNING: Removing unreachable block (ram,0x04fe3fc8) */
/* WARNING: Removing unreachable block (ram,0x04fe3fcc) */
/* WARNING: Removing unreachable block (ram,0x04fe3fd8) */
/* WARNING: Removing unreachable block (ram,0x04fe3f38) */
/* WARNING: Removing unreachable block (ram,0x04fe3f40) */
/* WARNING: Removing unreachable block (ram,0x04fe3f4c) */
/* WARNING: Removing unreachable block (ram,0x04fe3f54) */
/* WARNING: Removing unreachable block (ram,0x04fe3f64) */
/* WARNING: Removing unreachable block (ram,0x04fe4008) */
/* WARNING: Removing unreachable block (ram,0x04fe3f6c) */
/* WARNING: Removing unreachable block (ram,0x04fe3bac) */
/* WARNING: Removing unreachable block (ram,0x04fe3bc4) */
/* WARNING: Removing unreachable block (ram,0x06606e80) */
/* WARNING: Removing unreachable block (ram,0x06606e90) */
/* WARNING: Removing unreachable block (ram,0x06606e98) */
/* WARNING: Removing unreachable block (ram,0x06606ec0) */
/* WARNING: Removing unreachable block (ram,0x06606ea4) */
/* WARNING: Removing unreachable block (ram,0x06606eb0) */
/* WARNING: Removing unreachable block (ram,0x06606ed0) */
/* WARNING: Removing unreachable block (ram,0x06606ef0) */
/* WARNING: Removing unreachable block (ram,0x06606ef8) */
/* WARNING: Removing unreachable block (ram,0x06606f20) */
/* WARNING: Removing unreachable block (ram,0x06606f04) */
/* WARNING: Removing unreachable block (ram,0x06606f10) */
/* WARNING: Removing unreachable block (ram,0x06606f30) */
/* WARNING: Removing unreachable block (ram,0x06606f5c) */
/* WARNING: Removing unreachable block (ram,0x06606f64) */
/* WARNING: Removing unreachable block (ram,0x06606e00) */
/* WARNING: Removing unreachable block (ram,0x06606e14) */
/* WARNING: Removing unreachable block (ram,0x06606e1c) */
/* WARNING: Removing unreachable block (ram,0x06606e44) */
/* WARNING: Removing unreachable block (ram,0x06606e28) */
/* WARNING: Removing unreachable block (ram,0x06606e34) */
/* WARNING: Removing unreachable block (ram,0x06606e54) */
/* WARNING: Removing unreachable block (ram,0x06606e64) */
/* WARNING: Removing unreachable block (ram,0x06606ba8) */
/* WARNING: Removing unreachable block (ram,0x06606bb0) */
/* WARNING: Removing unreachable block (ram,0x06606bc0) */
/* WARNING: Removing unreachable block (ram,0x06606bd4) */
/* WARNING: Removing unreachable block (ram,0x06606bdc) */
/* WARNING: Removing unreachable block (ram,0x06606c38) */
/* WARNING: Removing unreachable block (ram,0x06606be8) */
/* WARNING: Removing unreachable block (ram,0x06606bf4) */
/* WARNING: Removing unreachable block (ram,0x06606c48) */
/* WARNING: Removing unreachable block (ram,0x06606c54) */
/* WARNING: Removing unreachable block (ram,0x06606c58) */
/* WARNING: Removing unreachable block (ram,0x06606c5c) */
/* WARNING: Removing unreachable block (ram,0x06606c6c) */
/* WARNING: Removing unreachable block (ram,0x06606c74) */
/* WARNING: Removing unreachable block (ram,0x06606cb8) */
/* WARNING: Removing unreachable block (ram,0x06606c80) */
/* WARNING: Removing unreachable block (ram,0x06606c8c) */
/* WARNING: Removing unreachable block (ram,0x06606cc8) */
/* WARNING: Removing unreachable block (ram,0x06606ce4) */
/* WARNING: Removing unreachable block (ram,0x06606cf8) */
/* WARNING: Removing unreachable block (ram,0x06606d10) */
/* WARNING: Removing unreachable block (ram,0x06606d14) */
/* WARNING: Removing unreachable block (ram,0x06606d28) */
/* WARNING: Removing unreachable block (ram,0x06606d2c) */
/* WARNING: Removing unreachable block (ram,0x06606d30) */
/* WARNING: Removing unreachable block (ram,0x06606d38) */
/* WARNING: Removing unreachable block (ram,0x06606d64) */
/* WARNING: Removing unreachable block (ram,0x06606d6c) */
/* WARNING: Removing unreachable block (ram,0x06606d94) */
/* WARNING: Removing unreachable block (ram,0x06606d78) */
/* WARNING: Removing unreachable block (ram,0x06606d84) */
/* WARNING: Removing unreachable block (ram,0x06606da4) */
/* WARNING: Removing unreachable block (ram,0x06606dc8) */
/* WARNING: Removing unreachable block (ram,0x06606dcc) */
/* WARNING: Removing unreachable block (ram,0x0660658c) */
/* WARNING: Removing unreachable block (ram,0x06606594) */
/* WARNING: Removing unreachable block (ram,0x06606600) */
/* WARNING: Removing unreachable block (ram,0x06606624) */
/* WARNING: Removing unreachable block (ram,0x06606668) */
/* WARNING: Removing unreachable block (ram,0x06606670) */
/* WARNING: Removing unreachable block (ram,0x066066d8) */
/* WARNING: Removing unreachable block (ram,0x06606688) */
/* WARNING: Removing unreachable block (ram,0x06606690) */
/* WARNING: Removing unreachable block (ram,0x066066a8) */
/* WARNING: Removing unreachable block (ram,0x066066b0) */
/* WARNING: Removing unreachable block (ram,0x066066ec) */
/* WARNING: Removing unreachable block (ram,0x066066bc) */
/* WARNING: Removing unreachable block (ram,0x066066c8) */
/* WARNING: Removing unreachable block (ram,0x066066f8) */
/* WARNING: Removing unreachable block (ram,0x06606794) */
/* WARNING: Removing unreachable block (ram,0x066067bc) */
/* WARNING: Removing unreachable block (ram,0x06606800) */
/* WARNING: Removing unreachable block (ram,0x06606810) */
/* WARNING: Removing unreachable block (ram,0x06606834) */
/* WARNING: Removing unreachable block (ram,0x06606840) */
/* WARNING: Removing unreachable block (ram,0x06606920) */
/* WARNING: Removing unreachable block (ram,0x06606928) */
/* WARNING: Removing unreachable block (ram,0x06606934) */
/* WARNING: Removing unreachable block (ram,0x06606954) */
/* WARNING: Removing unreachable block (ram,0x0660695c) */
/* WARNING: Removing unreachable block (ram,0x06606968) */
/* WARNING: Removing unreachable block (ram,0x06606978) */
/* WARNING: Removing unreachable block (ram,0x06606980) */
/* WARNING: Removing unreachable block (ram,0x066069b8) */
/* WARNING: Removing unreachable block (ram,0x06606a2c) */
/* WARNING: Removing unreachable block (ram,0x06606a30) */
/* WARNING: Removing unreachable block (ram,0x06606a48) */
/* WARNING: Removing unreachable block (ram,0x06606a50) */
/* WARNING: Removing unreachable block (ram,0x06606a78) */
/* WARNING: Removing unreachable block (ram,0x06606a5c) */
/* WARNING: Removing unreachable block (ram,0x06606a68) */
/* WARNING: Removing unreachable block (ram,0x06606a84) */
/* WARNING: Removing unreachable block (ram,0x06606c9c) */
/* WARNING: Removing unreachable block (ram,0x06606aa4) */
/* WARNING: Removing unreachable block (ram,0x06606ac0) */
/* WARNING: Removing unreachable block (ram,0x06606b20) */
/* WARNING: Removing unreachable block (ram,0x06606b28) */
/* WARNING: Removing unreachable block (ram,0x06606ad8) */
/* WARNING: Removing unreachable block (ram,0x06606af0) */
/* WARNING: Removing unreachable block (ram,0x06606af8) */
/* WARNING: Removing unreachable block (ram,0x06606b50) */
/* WARNING: Removing unreachable block (ram,0x06606b04) */
/* WARNING: Removing unreachable block (ram,0x06606b10) */
/* WARNING: Removing unreachable block (ram,0x06606b60) */
/* WARNING: Removing unreachable block (ram,0x06606c04) */
/* WARNING: Removing unreachable block (ram,0x06606c0c) */
/* WARNING: Removing unreachable block (ram,0x06606b84) */
/* WARNING: Removing unreachable block (ram,0x06606f9c) */
/* WARNING: Removing unreachable block (ram,0x06606fb8) */
/* WARNING: Removing unreachable block (ram,0x06606fd8) */
/* WARNING: Removing unreachable block (ram,0x06606fec) */
/* WARNING: Removing unreachable block (ram,0x06607064) */
/* WARNING: Removing unreachable block (ram,0x06607084) */
/* WARNING: Removing unreachable block (ram,0x066070d4) */
/* WARNING: Removing unreachable block (ram,0x066070dc) */
/* WARNING: Removing unreachable block (ram,0x066071a0) */
/* WARNING: Removing unreachable block (ram,0x066071dc) */
/* WARNING: Removing unreachable block (ram,0x06607214) */
/* WARNING: Removing unreachable block (ram,0x06607124) */
/* WARNING: Removing unreachable block (ram,0x06606ff4) */
/* WARNING: Removing unreachable block (ram,0x0660700c) */
/* WARNING: Removing unreachable block (ram,0x06607014) */
/* WARNING: Removing unreachable block (ram,0x0660703c) */
/* WARNING: Removing unreachable block (ram,0x06607020) */
/* WARNING: Removing unreachable block (ram,0x0660702c) */
/* WARNING: Removing unreachable block (ram,0x0660704c) */
/* WARNING: Removing unreachable block (ram,0x06606fac) */
/* WARNING: Removing unreachable block (ram,0x06606b98) */
/* WARNING: Removing unreachable block (ram,0x06606848) */
/* WARNING: Removing unreachable block (ram,0x06606864) */
/* WARNING: Removing unreachable block (ram,0x06606868) */
/* WARNING: Removing unreachable block (ram,0x06606870) */
/* WARNING: Removing unreachable block (ram,0x06606880) */
/* WARNING: Removing unreachable block (ram,0x06606888) */
/* WARNING: Removing unreachable block (ram,0x066068b0) */
/* WARNING: Removing unreachable block (ram,0x06606894) */
/* WARNING: Removing unreachable block (ram,0x066068a0) */
/* WARNING: Removing unreachable block (ram,0x066068c0) */
/* WARNING: Removing unreachable block (ram,0x066068d0) */
/* WARNING: Removing unreachable block (ram,0x066068dc) */
/* WARNING: Removing unreachable block (ram,0x066068fc) */
/* WARNING: Removing unreachable block (ram,0x06606908) */
/* WARNING: Removing unreachable block (ram,0x066068ec) */
/* WARNING: Removing unreachable block (ram,0x0660670c) */
/* WARNING: Removing unreachable block (ram,0x06606740) */
/* WARNING: Removing unreachable block (ram,0x06606748) */
/* WARNING: Removing unreachable block (ram,0x0660676c) */
/* WARNING: Removing unreachable block (ram,0x06606770) */
/* WARNING: Removing unreachable block (ram,0x05797408) */
/* WARNING: Removing unreachable block (ram,0x0579740c) */
/* WARNING: Removing unreachable block (ram,0x05797410) */
/* WARNING: Removing unreachable block (ram,0x05797420) */
/* WARNING: Removing unreachable block (ram,0x05797424) */
/* WARNING: Removing unreachable block (ram,0x066065dc) */
/* WARNING: Removing unreachable block (ram,0x04d0e838) */
/* WARNING: Removing unreachable block (ram,0x04d0e878) */
/* WARNING: Removing unreachable block (ram,0x04d0e87c) */
/* WARNING: Removing unreachable block (ram,0x04d0e5dc) */
/* WARNING: Removing unreachable block (ram,0x04d0e5fc) */
/* WARNING: Removing unreachable block (ram,0x04d0e624) */
/* WARNING: Removing unreachable block (ram,0x04d0e630) */
/* WARNING: Removing unreachable block (ram,0x04d0e64c) */
/* WARNING: Removing unreachable block (ram,0x04d0e634) */
/* WARNING: Removing unreachable block (ram,0x04d0e650) */
/* WARNING: Removing unreachable block (ram,0x04d0e668) */
/* WARNING: Removing unreachable block (ram,0x04d0e648) */
/* WARNING: Removing unreachable block (ram,0x04d0e67c) */
/* WARNING: Removing unreachable block (ram,0x04d0e6a8) */
/* WARNING: Removing unreachable block (ram,0x04d0e6bc) */
/* WARNING: Removing unreachable block (ram,0x04d0e6c8) */
/* WARNING: Removing unreachable block (ram,0x04d0e6e0) */
/* WARNING: Removing unreachable block (ram,0x04d0e71c) */
/* WARNING: Removing unreachable block (ram,0x04d0e744) */
/* WARNING: Removing unreachable block (ram,0x04d0e758) */
/* WARNING: Removing unreachable block (ram,0x04d0e764) */
/* WARNING: Removing unreachable block (ram,0x04d0e77c) */
/* WARNING: Removing unreachable block (ram,0x04d0e7b8) */
/* WARNING: Removing unreachable block (ram,0x04d0e78c) */
/* WARNING: Removing unreachable block (ram,0x04d0e7a8) */
/* WARNING: Removing unreachable block (ram,0x04d0e6f0) */
/* WARNING: Removing unreachable block (ram,0x04d0e70c) */
/* WARNING: Removing unreachable block (ram,0x04d0e85c) */
/* WARNING: Removing unreachable block (ram,0x06606424) */
/* WARNING: Removing unreachable block (ram,0x0660642c) */
/* WARNING: Removing unreachable block (ram,0x06606430) */
/* WARNING: Removing unreachable block (ram,0x06606444) */
/* WARNING: Removing unreachable block (ram,0x0660644c) */
/* WARNING: Removing unreachable block (ram,0x06606464) */
/* WARNING: Removing unreachable block (ram,0x06606478) */
/* WARNING: Removing unreachable block (ram,0x06606480) */
/* WARNING: Removing unreachable block (ram,0x066064a8) */
/* WARNING: Removing unreachable block (ram,0x0660648c) */
/* WARNING: Removing unreachable block (ram,0x06606498) */
/* WARNING: Removing unreachable block (ram,0x066064b4) */
/* WARNING: Removing unreachable block (ram,0x066064c4) */
/* WARNING: Removing unreachable block (ram,0x04fba738) */
/* WARNING: Removing unreachable block (ram,0x04fba480) */
/* WARNING: Removing unreachable block (ram,0x04fba490) */
/* WARNING: Removing unreachable block (ram,0x04fba374) */
/* WARNING: Removing unreachable block (ram,0x04fba494) */
/* WARNING: Removing unreachable block (ram,0x04fba378) */
/* WARNING: Removing unreachable block (ram,0x04fba3ac) */
/* WARNING: Removing unreachable block (ram,0x04fba3b0) */
/* WARNING: Removing unreachable block (ram,0x04fba3c0) */
/* WARNING: Removing unreachable block (ram,0x04fba3f4) */
/* WARNING: Removing unreachable block (ram,0x04fba400) */
/* WARNING: Removing unreachable block (ram,0x04fba404) */
/* WARNING: Removing unreachable block (ram,0x04fba414) */
/* WARNING: Removing unreachable block (ram,0x04fba4a4) */
/* WARNING: Removing unreachable block (ram,0x04fba4b4) */
/* WARNING: Removing unreachable block (ram,0x04fba4b8) */
/* WARNING: Removing unreachable block (ram,0x04fba4c4) */
/* WARNING: Removing unreachable block (ram,0x04fba424) */
/* WARNING: Removing unreachable block (ram,0x04fba42c) */
/* WARNING: Removing unreachable block (ram,0x04fba438) */
/* WARNING: Removing unreachable block (ram,0x04fba440) */
/* WARNING: Removing unreachable block (ram,0x04fba450) */
/* WARNING: Removing unreachable block (ram,0x04fba4f4) */
/* WARNING: Removing unreachable block (ram,0x04fba458) */
/* WARNING: Removing unreachable block (ram,0x04fba0ac) */
/* WARNING: Removing unreachable block (ram,0x06605e0c) */
/* WARNING: Removing unreachable block (ram,0x06605e10) */
/* WARNING: Removing unreachable block (ram,0x06605e24) */
/* WARNING: Removing unreachable block (ram,0x06605e2c) */
/* WARNING: Removing unreachable block (ram,0x06605e54) */
/* WARNING: Removing unreachable block (ram,0x06605e38) */
/* WARNING: Removing unreachable block (ram,0x06605e44) */
/* WARNING: Removing unreachable block (ram,0x06605e64) */
/* WARNING: Removing unreachable block (ram,0x06605e78) */
/* WARNING: Removing unreachable block (ram,0x06605eac) */
/* WARNING: Removing unreachable block (ram,0x06605eb4) */
/* WARNING: Removing unreachable block (ram,0x06605edc) */
/* WARNING: Removing unreachable block (ram,0x06605ec0) */
/* WARNING: Removing unreachable block (ram,0x06605ecc) */
/* WARNING: Removing unreachable block (ram,0x06605ee8) */
/* WARNING: Removing unreachable block (ram,0x06605f1c) */
/* WARNING: Removing unreachable block (ram,0x06605f3c) */
/* WARNING: Removing unreachable block (ram,0x06605f4c) */
/* WARNING: Removing unreachable block (ram,0x06605f54) */
/* WARNING: Removing unreachable block (ram,0x06605f7c) */
/* WARNING: Removing unreachable block (ram,0x06605f60) */
/* WARNING: Removing unreachable block (ram,0x06605f6c) */
/* WARNING: Removing unreachable block (ram,0x06605f88) */
/* WARNING: Removing unreachable block (ram,0x064a7034) */
/* WARNING: Removing unreachable block (ram,0x064a704c) */
/* WARNING: Removing unreachable block (ram,0x064a7050) */
/* WARNING: Removing unreachable block (ram,0x064a7078) */
/* WARNING: Removing unreachable block (ram,0x064a7088) */
/* WARNING: Removing unreachable block (ram,0x064a7090) */
/* WARNING: Removing unreachable block (ram,0x064a70b8) */
/* WARNING: Removing unreachable block (ram,0x064a709c) */
/* WARNING: Removing unreachable block (ram,0x064a70a8) */
/* WARNING: Removing unreachable block (ram,0x064a70c8) */
/* WARNING: Removing unreachable block (ram,0x064a7148) */
/* WARNING: Removing unreachable block (ram,0x064a6ffc) */
/* WARNING: Removing unreachable block (ram,0x0660728c) */
/* WARNING: Removing unreachable block (ram,0x046f0424) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x04fba65c) */
/* WARNING: Removing unreachable block (ram,0x04fba660) */
/* WARNING: Removing unreachable block (ram,0x04fba66c) */
/* WARNING: Removing unreachable block (ram,0x04fba674) */
/* WARNING: Removing unreachable block (ram,0x04fba67c) */
/* WARNING: Removing unreachable block (ram,0x04fba684) */
/* WARNING: Removing unreachable block (ram,0x04fba69c) */
/* WARNING: Removing unreachable block (ram,0x04fba6a4) */
/* WARNING: Removing unreachable block (ram,0x04fe4170) */
/* WARNING: Removing unreachable block (ram,0x04fe4174) */
/* WARNING: Removing unreachable block (ram,0x04fe4180) */
/* WARNING: Removing unreachable block (ram,0x04fe4188) */
/* WARNING: Removing unreachable block (ram,0x04fe4190) */
/* WARNING: Removing unreachable block (ram,0x04fe4198) */
/* WARNING: Removing unreachable block (ram,0x04fe41b0) */
/* WARNING: Removing unreachable block (ram,0x04fe41b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * MergeEngine_ECS_Systems_Player_ResourcesSystem__GetResource(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  uint *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint *puVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined *puVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  int *piVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  long *plVar38;
  uint *puVar39;
  undefined8 unaff_x22;
  undefined *puVar40;
  uint *unaff_x23;
  uint *puVar41;
  uint *unaff_x24;
  undefined *puVar42;
  uint *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  uint *unaff_x29;
  undefined8 uVar43;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_40 [16];
  
  puVar42 = PTR_DAT_077730b8;
  if ((bRam0000000007e27158 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e27158 = 1;
  }
  if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar19 = (long *)func_0x0624cb20(param_2,0);
  if (plVar19 == (long *)0x0) {
    func_0x03280cac();
    return (uint *)0x0;
  }
  lVar28 = *plVar19;
  uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
  if (uVar30 != 0) {
    piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07779818) {
        puVar20 = (undefined8 *)(lVar28 + (long)*piVar32 * 0x10 + 0x138);
        goto LAB_06603618;
      }
      uVar30 = uVar30 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar30 != 0);
  }
  puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_07779818,0);
LAB_06603618:
  uVar21 = (*(code *)*puVar20)(plVar19,puVar20[1]);
  uVar36 = 0x7e27000;
  if ((bRam0000000007e2715a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c3ee0);
    bRam0000000007e2715a = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar28 = func_0x06120c68(*(long *)(param_1 + 0x48),uVar21,0), lVar28 != 0)) {
    return *(uint **)(lVar28 + 0x18);
  }
  lVar28 = func_0x03280cac();
  if (*(long *)(lVar28 + 0x40) != 0) {
    puVar22 = (uint *)func_0x066013a0();
    return puVar22;
  }
  uVar43 = 0x66059e4;
  uVar23 = func_0x03280cac();
  auVar47._8_8_ = uVar21;
  auVar47._0_8_ = uVar23;
  puVar7 = auStack_40;
SUB_066059e4:
  *(undefined8 *)(puVar7 + -0x20) = uVar43;
  *(undefined8 *)(puVar7 + -0x18) = uVar36;
  *(long *)(puVar7 + -0x10) = param_1;
  *(long *)(puVar7 + -8) = auVar47._8_8_;
  if ((bRam0000000007e27139 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c47a0);
    func_0x03280a18(PTR_DAT_077fc600);
    bRam0000000007e27139 = 1;
  }
  plVar19 = *(long **)(auVar47._0_8_ + 0x48);
  if (plVar19 != (long *)0x0) {
    lVar28 = *plVar19;
    lVar37 = *(long *)PTR_DAT_077c47a0;
    uVar21 = *(undefined8 *)PTR_DAT_077fc600;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 == 0) goto LAB_06605a70;
    piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
    goto LAB_06605a58;
  }
  lVar28 = func_0x03280cac();
  puVar42 = PTR_DAT_077fc610;
  puVar22 = (uint *)PTR_DAT_077fc608;
  *(code **)(puVar7 + -0x50) =
       MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__InitializeSystem;
  *(uint **)(puVar7 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x38) = uVar36;
  *(undefined8 *)(puVar7 + -0x30) = 0x7e27000;
  *(undefined8 *)(puVar7 + -0x28) = 0;
  if ((bRam0000000007e2713a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077fc608);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077fc618);
    func_0x03280a18(PTR_DAT_077fc610);
    func_0x03280a18(PTR_DAT_077fc620);
    bRam0000000007e2713a = 1;
  }
  lVar33 = *(long *)(lVar28 + 0x28);
  uVar21 = func_0x03280ca0(*(undefined8 *)puVar22);
  plVar19 = *(long **)puVar42;
  lVar37 = 0;
  func_0x054221d4(uVar21,lVar28);
  puVar40 = PTR_DAT_077fc618;
  puVar42 = PTR_DAT_0774e758;
  if (lVar33 != 0) {
    func_0x03ea5304(lVar33,uVar21,*(undefined8 *)PTR_DAT_077fc620);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar42);
    func_0x056ed730(uVar21,lVar28,*(undefined8 *)puVar40,0);
    puVar42 = *(undefined **)(puVar7 + -0x40);
    puVar41 = *(uint **)(puVar7 + -0x48);
    puVar9 = puVar7 + -0x40;
    *(undefined8 *)(puVar7 + -0x40) = *(undefined8 *)(puVar7 + -0x50);
    *(undefined8 *)(puVar7 + -0x38) = *(undefined8 *)(puVar7 + -0x38);
    *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
    *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
    uVar36 = 0x7e26000;
    if ((bRam0000000007e26167 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07779a20,uVar21,0);
      bRam0000000007e26167 = 1;
    }
    plVar19 = *(long **)(lVar28 + 0x20);
    if (plVar19 == (long *)0x0) {
      uVar43 = 0x64a6d6c;
      auVar46 = func_0x03280cac();
      uVar23 = 0;
      goto SUB_064a6d6c;
    }
    lVar28 = *plVar19;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 == 0) goto LAB_064a6d34;
    piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
    goto LAB_064a6d1c;
  }
  auVar47 = func_0x03280cac();
  lVar35 = auVar47._8_8_;
  lVar33 = auVar47._0_8_;
  *(undefined8 *)(puVar7 + -0xb0) = unaff_d9;
  *(undefined8 *)(puVar7 + -0xa8) = unaff_d8;
  *(code **)(puVar7 + -0xa0) =
       MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__ResourceConsumedSignalReceived;
  *(undefined **)(puVar7 + -0x90) = unaff_x26;
  *(uint **)(puVar7 + -0x88) = unaff_x25;
  *(uint **)(puVar7 + -0x80) = unaff_x24;
  *(uint **)(puVar7 + -0x78) = unaff_x23;
  *(uint **)(puVar7 + -0x70) = puVar22;
  *(undefined8 *)(puVar7 + -0x68) = uVar21;
  *(undefined8 *)(puVar7 + -0x60) = 0;
  *(long *)(puVar7 + -0x58) = lVar28;
  plVar34 = (long *)0x7e27000;
  if ((bRam0000000007e2713b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777d7a8);
    func_0x03280a18(PTR_DAT_0777cfc0);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077fc628);
    func_0x03280a18(PTR_DAT_077fc630);
    bRam0000000007e2713b = 1;
  }
  puVar41 = unaff_x23;
  if (lVar35 != 0) {
    plVar34 = (long *)MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__GetResourceReplenishment
                                (lVar33,*(undefined8 *)(lVar35 + 0x10));
    unaff_x26 = PTR_DAT_0777cfc0;
    if (plVar34 == (long *)0x0) {
      return (uint *)0x0;
    }
    lVar28 = *plVar34;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777cfc0) {
          puVar20 = (undefined8 *)(lVar28 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_06605cb0;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    plVar19 = (long *)0x0;
    puVar20 = (undefined8 *)func_0x03256b10(plVar34);
LAB_06605cb0:
    plVar24 = (long *)(*(code *)*puVar20)(plVar34,puVar20[1]);
    puVar42 = PTR_DAT_07779818;
    if (plVar24 != (long *)0x0) {
      lVar28 = *plVar24;
      uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07779818) {
            puVar20 = (undefined8 *)(lVar28 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_06605d18;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      plVar19 = (long *)0x0;
      puVar20 = (undefined8 *)func_0x03256b10(plVar24);
LAB_06605d18:
      unaff_x24 = (uint *)(*(code *)*puVar20)(plVar24,puVar20[1]);
      lVar28 = *plVar34;
      uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)unaff_x26) {
            puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 2) * 0x10 + 0x138);
            goto LAB_06605d78;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      plVar19 = (long *)0x2;
      puVar20 = (undefined8 *)func_0x03256b10(plVar34);
LAB_06605d78:
      uVar30 = (*(code *)*puVar20)(plVar34,puVar20[1]);
      puVar22 = (uint *)(uVar30 & 0xffffffff);
      uVar30 = MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__GetResource
                         (lVar33,unaff_x24);
      lVar28 = *plVar34;
      puVar41 = (uint *)(uVar30 & 0xffffffff);
      uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)unaff_x26) {
            puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 3) * 0x10 + 0x138);
            goto LAB_06605de8;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      plVar19 = (long *)0x3;
      puVar20 = (undefined8 *)func_0x03256b10(plVar34);
LAB_06605de8:
      uVar21 = (*(code *)*puVar20)(plVar34,puVar20[1]);
      lVar28 = *(long *)(lVar33 + 0x60);
      unaff_x25 = (uint *)puVar42;
      if (lVar28 != 0) {
        *(undefined8 *)(puVar7 + -0xd0) = 0x6605e0c;
        *(long *)(puVar7 + -200) = lVar35;
        *(long **)(puVar7 + -0xc0) = plVar34;
        *(long *)(puVar7 + -0xb8) = lVar33;
        if ((bRam0000000007e23872 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077d0230,unaff_x24,0);
          bRam0000000007e23872 = 1;
        }
        uVar30 = *(ulong *)(lVar28 + 0x28);
        if (uVar30 == 0) {
          auVar47 = func_0x03280cac();
          puVar17 = auVar47._8_8_;
          puVar8 = puVar7 + -0x100;
          *(undefined8 *)(puVar7 + -0x100) = uVar21;
          *(undefined8 *)(puVar7 + -0xf0) = 0x6120d18;
          *(undefined8 *)(puVar7 + -0xe8) = 0x7e23000;
          *(long *)(puVar7 + -0xe0) = lVar28;
          *(uint **)(puVar7 + -0xd8) = unaff_x24;
          lVar28 = 0x7e23000;
          if ((bRam0000000007e23873 & 1) == 0) {
            func_0x03280a18(PTR_DAT_077d0230);
            func_0x03280a18(PTR_DAT_07773770);
            bRam0000000007e23873 = 1;
          }
          uVar30 = *(ulong *)(auVar47._0_8_ + 0x28);
          if (uVar30 == 0) {
            puVar22 = (uint *)func_0x03280cac();
            return puVar22;
          }
          lVar33 = *(long *)PTR_DAT_077d0230;
          uVar21 = 0x6120d78;
        }
        else {
          auVar47 = *(undefined1 (*) [16])(puVar7 + -0xc0);
          lVar33 = *(long *)PTR_DAT_077d0230;
          puVar8 = puVar7 + -0xb0;
          uVar21 = *(undefined8 *)(puVar7 + -0xd0);
          lVar28 = *(long *)(puVar7 + -200);
          puVar17 = unaff_x24;
        }
        *(undefined8 *)(puVar8 + -0x20) = uVar21;
        *(undefined1 (*) [16])(puVar8 + -0x10) = auVar47;
        puVar18 = *(uint **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x110);
        uVar12 = func_0x04fe343c();
        if ((int)uVar12 < 0) {
          func_0x057b861c(puVar17,0);
          return (uint *)0x0;
        }
        lVar33 = *(long *)(uVar30 + 0x18);
        if (lVar33 == 0) {
          func_0x03280cac();
        }
        else if (uVar12 < *(uint *)(lVar33 + 0x18)) {
          return *(uint **)(lVar33 + (ulong)uVar12 * 0x18 + 0x30);
        }
        uVar21 = 0x4fe2d68;
        auVar47 = func_0x03280cb4();
        uVar31 = 1;
        uVar29 = *(ulong *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x118);
        puVar7 = puVar8 + -0x20;
        goto SUB_04fe3800;
      }
    }
  }
  auVar47 = func_0x03280cac();
  *(code **)(puVar7 + -0xd0) =
       MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__GetResourceReplenishment;
  *(long *)(puVar7 + -200) = lVar35;
  *(long **)(puVar7 + -0xc0) = plVar34;
  *(long *)(puVar7 + -0xb8) = lVar33;
  if ((bRam0000000007e27143 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    bRam0000000007e27143 = 1;
  }
  plVar34 = *(long **)(auVar47._0_8_ + 0x50);
  if (plVar34 != (long *)0x0) {
    lVar28 = *plVar34;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 == 0) goto LAB_06606030;
    piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
    goto LAB_06606018;
  }
  auVar46 = func_0x03280cac();
  uVar21 = auVar46._8_8_;
  lVar28 = auVar46._0_8_;
  *(code **)(puVar7 + -0x100) =
       MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__UpdateResourceRefillTimeout;
  *(uint **)(puVar7 + -0xf0) = puVar22;
  *(undefined8 *)(puVar7 + -0xe8) = 0x7e27000;
  *(undefined8 *)(puVar7 + -0xe0) = 0;
  *(long *)(puVar7 + -0xd8) = auVar47._8_8_;
  uVar30 = 0x7e27000;
  plVar34 = plVar19;
  if ((bRam0000000007e2713c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07787228);
    func_0x03280a18(PTR_DAT_07787220);
    func_0x03280a18(PTR_DAT_0777cfc0);
    func_0x03280a18(PTR_DAT_07773cd8);
    bRam0000000007e2713c = 1;
  }
  uVar12 = MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__GetResource(lVar28,uVar21);
  if (plVar19 != (long *)0x0) {
    lVar33 = *plVar19;
    uVar30 = (ulong)uVar12;
    uVar31 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar31 != 0) {
      piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777cfc0) {
          puVar20 = (undefined8 *)(lVar33 + (long)(*piVar32 + 2) * 0x10 + 0x138);
          goto LAB_06606134;
        }
        uVar31 = uVar31 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar31 != 0);
    }
    plVar34 = (long *)0x2;
    puVar20 = (undefined8 *)func_0x03256b10(plVar19);
LAB_06606134:
    puVar22 = (uint *)(*(code *)*puVar20)(plVar19,puVar20[1]);
    puVar42 = PTR_DAT_07787228;
    if ((int)puVar22 <= (int)uVar12) {
      return puVar22;
    }
    if (*(long *)(lVar28 + 0x78) != 0) {
      plVar34 = *(long **)PTR_DAT_07787228;
      puVar22 = (uint *)func_0x04fb94b4(*(long *)(lVar28 + 0x78),uVar21);
      if (((ulong)puVar22 & 1) != 0) {
        return puVar22;
      }
      plVar19 = (long *)puVar42;
      if (*(long *)(lVar28 + 0x80) != 0) {
        plVar34 = *(long **)puVar42;
        puVar22 = (uint *)func_0x04fb94b4(*(long *)(lVar28 + 0x80),uVar21);
        if (((ulong)puVar22 & 1) != 0) {
          return puVar22;
        }
        plVar19 = *(long **)(lVar28 + 0x58);
        if (plVar19 != (long *)0x0) {
          lVar33 = *plVar19;
          lVar35 = *(long *)(lVar28 + 0x80);
          auVar45._8_8_ = uVar21;
          auVar45._0_8_ = lVar35;
          uVar31 = (ulong)*(ushort *)(lVar33 + 0x12e);
          if (uVar31 != 0) {
            piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07773cd8) {
                puVar20 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
                goto LAB_066061f0;
              }
              uVar31 = uVar31 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar31 != 0);
          }
          plVar34 = (long *)0x0;
          puVar20 = (undefined8 *)func_0x03256b10(plVar19);
LAB_066061f0:
          puVar22 = (uint *)(*(code *)*puVar20)(plVar19,puVar20[1]);
          lVar28 = 0;
          if (lVar35 != 0) {
            lVar28 = *(long *)(puVar7 + -0xe0);
            plVar34 = *(long **)(puVar7 + -0xd8);
            plVar19 = *(long **)(puVar7 + -0xf0);
            plVar24 = *(long **)(puVar7 + -0xe8);
            puVar10 = puVar7 + -0xd0;
            uVar21 = *(undefined8 *)(puVar7 + -0x100);
            uVar30 = 1;
            uVar31 = *(ulong *)(*(long *)(*(long *)(*(long *)PTR_DAT_07787220 + 0x20) + 0xc0) +
                               0x118);
            goto SUB_04fb9d00;
          }
        }
      }
    }
  }
  auVar47 = func_0x03280cac();
  uVar23 = auVar47._8_8_;
  param_1 = auVar47._0_8_;
  *(code **)(puVar7 + -0x130) =
       MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__ProcessServerRefillTimeout;
  *(uint **)(puVar7 + -0x128) = puVar41;
  *(ulong *)(puVar7 + -0x120) = uVar30;
  *(long **)(puVar7 + -0x118) = plVar19;
  *(long *)(puVar7 + -0x110) = lVar28;
  *(undefined8 *)(puVar7 + -0x108) = uVar21;
  if ((bRam0000000007e2713d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07787228);
    func_0x03280a18(PTR_DAT_077c47f8);
    func_0x03280a18(PTR_DAT_077fc638);
    func_0x03280a18(PTR_DAT_07787220);
    func_0x03280a18(PTR_DAT_0777cfc0);
    func_0x03280a18(PTR_DAT_07773cd8);
    func_0x03280a18(PTR_DAT_077fc640);
    bRam0000000007e2713d = 1;
  }
  puVar42 = PTR_DAT_07787228;
  puVar40 = (undefined *)0x7e27000;
  if (*(long *)(param_1 + 0x80) == 0) goto LAB_066064ec;
  puVar22 = (uint *)func_0x04fb94b4(*(long *)(param_1 + 0x80),uVar23,*(undefined8 *)PTR_DAT_07787228
                                   );
  if (((ulong)puVar22 & 1) == 0) {
    return puVar22;
  }
  puVar40 = puVar42;
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_066064ec;
  uVar30 = func_0x04fb94b4(*(long *)(param_1 + 0x78),uVar23,*(undefined8 *)puVar42);
  if ((uVar30 & 1) == 0) {
    uVar12 = MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__GetResource(param_1,uVar23)
    ;
    if (plVar34 == (long *)0x0) goto LAB_066064ec;
    lVar28 = *plVar34;
    puVar40 = (undefined *)(ulong)uVar12;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777cfc0) {
          puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 2) * 0x10 + 0x138);
          goto LAB_06606350;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_0777cfc0,2);
LAB_06606350:
    iVar13 = (*(code *)*puVar20)(plVar34,puVar20[1]);
    unaff_x23 = (uint *)PTR_DAT_07773cd8;
    if (iVar13 <= (int)uVar12) goto LAB_066063b4;
    plVar34 = *(long **)(param_1 + 0x58);
    if (plVar34 == (long *)0x0) goto LAB_066064ec;
    lVar28 = *plVar34;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07773cd8) {
          puVar20 = (undefined8 *)(lVar28 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_066063e8;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_07773cd8,0);
LAB_066063e8:
    uVar36 = (*(code *)*puVar20)(plVar34,puVar20[1]);
    puVar41 = unaff_x23;
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_066064ec;
    unaff_x22 = func_0x04fb9240(*(long *)(param_1 + 0x80),uVar23,*(undefined8 *)PTR_DAT_077fc638);
    uVar43 = 0x6606424;
    puVar7 = puVar7 + -0x130;
    goto SUB_066059e4;
  }
LAB_066063b4:
  auVar44._8_8_ = uVar23;
  auVar44._0_8_ = *(long *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x80) != 0) {
    puVar17 = *(uint **)(puVar7 + -0x110);
    lVar28 = *(long *)(puVar7 + -0x108);
    puVar20 = *(undefined8 **)(puVar7 + -0x120);
    lVar33 = *(long *)(puVar7 + -0x118);
    plVar34 = *(long **)PTR_DAT_077c47f8;
    puVar11 = puVar7 + -0x100;
    uVar21 = *(undefined8 *)(puVar7 + -0x130);
    plVar15 = *(long **)(puVar7 + -0x128);
    goto LAB_04fba764;
  }
LAB_066064ec:
  uVar21 = func_0x03280cac();
  puVar25 = PTR_DAT_077fc618;
  puVar42 = PTR_DAT_0774e758;
  puVar9 = puVar7 + -0x160;
  *(code **)(puVar7 + -0x160) =
       MergeEngine_ECS_Systems_Player_ResourceReplenishmentSystem__OnAllSystemInitialized;
  *(undefined **)(puVar7 + -0x150) = puVar40;
  *(long **)(puVar7 + -0x148) = plVar34;
  *(undefined1 (*) [16])(puVar7 + -0x140) = auVar47;
  uVar36 = 0x7e27000;
  if ((bRam0000000007e2713e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773028);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07773030);
    func_0x03280a18(PTR_DAT_077fc618);
    func_0x03280a18(PTR_DAT_077fc648);
    bRam0000000007e2713e = 1;
  }
  uVar23 = func_0x03280ca0(*(undefined8 *)puVar42);
  auVar46._8_8_ = uVar23;
  auVar46._0_8_ = uVar21;
  func_0x056ed730(uVar23,uVar21,*(undefined8 *)puVar25,0);
  uVar43 = 0x660658c;
SUB_064a6d6c:
  *(undefined8 *)(puVar9 + -0x20) = uVar43;
  *(undefined8 *)(puVar9 + -0x18) = uVar36;
  *(undefined8 *)(puVar9 + -0x10) = uVar23;
  *(undefined8 *)(puVar9 + -8) = uVar21;
  if ((bRam0000000007e26168 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779a20);
    bRam0000000007e26168 = 1;
  }
  plVar19 = *(long **)(auVar46._0_8_ + 0x20);
  if (plVar19 != (long *)0x0) {
    lVar28 = *plVar19;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07779a20) {
          puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_064a6dfc;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_07779a20,1);
LAB_064a6dfc:
                    /* WARNING: Could not recover jumptable at 0x064a6e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar22 = (uint *)(*(code *)*puVar20)(plVar19,auVar46._8_8_,puVar20[1]);
    return puVar22;
  }
  puVar17 = (uint *)func_0x03280cac();
  *(undefined8 *)(puVar9 + -0x50) = 0x64a6e18;
  *(uint **)(puVar9 + -0x48) = puVar41;
  *(undefined **)(puVar9 + -0x40) = puVar42;
  *(undefined8 *)(puVar9 + -0x38) = 0x7e26000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(long *)(puVar9 + -0x28) = auVar46._8_8_;
  puVar22 = puVar17;
  if ((bRam0000000007e26169 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d13e8);
    func_0x03280a18(PTR_DAT_077db960);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077caee8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_077f1048);
    func_0x03280a18(PTR_DAT_077d13f0);
    func_0x03280a18(PTR_DAT_077f1050);
    func_0x03280a18(PTR_DAT_077f1058);
    puVar22 = (uint *)func_0x03280a18(PTR_DAT_077f1060);
    bRam0000000007e26169 = 1;
  }
  puVar42 = PTR_DAT_077db960;
  if ((char)puVar17[0xc] != '\0') {
    return puVar22;
  }
  plVar19 = *(long **)(puVar17 + 4);
  uVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077db960);
  func_0x054221d4(uVar21,puVar17,*(undefined8 *)(*(long *)puVar17 + 0x1f0),0);
  puVar40 = PTR_DAT_0777e5c0;
  if (plVar19 != (long *)0x0) {
    lVar28 = *plVar19;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777e5c0) {
          puVar20 = (undefined8 *)(lVar28 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_064a6f40;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e5c0,0);
LAB_064a6f40:
    (*(code *)*puVar20)(plVar19,uVar21,puVar20[1]);
    plVar19 = *(long **)(puVar17 + 4);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar42);
    func_0x054221d4(uVar21,puVar17,*(undefined8 *)(*(long *)puVar17 + 0x200),0);
    puVar41 = (uint *)puVar40;
    if (plVar19 != (long *)0x0) {
      lVar37 = *plVar19;
      lVar28 = *(long *)puVar40;
      uVar30 = (ulong)*(ushort *)(lVar37 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar28) {
            puVar20 = (undefined8 *)(lVar37 + (long)(*piVar32 + 2) * 0x10 + 0x138);
            goto LAB_064a6fc8;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar19,lVar28,2);
LAB_064a6fc8:
      (*(code *)*puVar20)(plVar19,uVar21,puVar20[1]);
      uVar21 = func_0x03eb6c18(puVar17,*(undefined8 *)PTR_DAT_077f1058);
      puVar17 = puVar17 + 0xe;
      *(undefined8 *)puVar17 = uVar21;
      goto SUB_032809c4;
    }
  }
  puVar18 = (uint *)func_0x03280cac();
  *(undefined8 *)(puVar9 + -0x80) = 0x64a718c;
  *(uint **)(puVar9 + -0x78) = puVar41;
  *(undefined **)(puVar9 + -0x70) = puVar42;
  *(undefined8 *)(puVar9 + -0x68) = uVar21;
  *(undefined8 *)(puVar9 + -0x60) = 0;
  *(uint **)(puVar9 + -0x58) = puVar17;
  puVar22 = puVar18;
  if ((bRam0000000007e2616a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db960);
    puVar22 = (uint *)func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e2616a = 1;
  }
  puVar42 = PTR_DAT_077db960;
  if ((char)puVar18[0xc] == '\0') {
    return puVar22;
  }
  (**(code **)(*(long *)puVar18 + 0x1a8))(puVar18,*(undefined8 *)(*(long *)puVar18 + 0x1b0));
  plVar19 = *(long **)(puVar18 + 4);
  uVar21 = func_0x03280ca0(*(undefined8 *)puVar42);
  func_0x054221d4(uVar21,puVar18,*(undefined8 *)(*(long *)puVar18 + 0x1f0),0);
  puVar40 = PTR_DAT_0777e5c0;
  if (plVar19 != (long *)0x0) {
    lVar28 = *plVar19;
    uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_0777e5c0) {
          puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_064a7268;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e5c0,1);
LAB_064a7268:
    (*(code *)*puVar20)(plVar19,uVar21,puVar20[1]);
    plVar19 = *(long **)(puVar18 + 4);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar42);
    func_0x054221d4(uVar21,puVar18,*(undefined8 *)(*(long *)puVar18 + 0x200),0);
    if (plVar19 != (long *)0x0) {
      lVar28 = *plVar19;
      uVar30 = (ulong)*(ushort *)(lVar28 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)puVar40) {
            puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 3) * 0x10 + 0x138);
            goto LAB_064a72f0;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar40,3);
LAB_064a72f0:
      puVar22 = (uint *)(*(code *)*puVar20)(plVar19,uVar21,puVar20[1]);
      *(undefined1 *)(puVar18 + 0xc) = 0;
      return puVar22;
    }
  }
  puVar22 = (uint *)func_0x03280cac();
  return puVar22;
SUB_04fe3800:
  puVar39 = auVar47._8_8_;
  lVar37 = auVar47._0_8_;
  *(uint **)(puVar7 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar7 + -0x58) = uVar21;
  *(uint **)(puVar7 + -0x50) = unaff_x28;
  *(undefined **)(puVar7 + -0x48) = unaff_x27;
  *(undefined **)(puVar7 + -0x40) = unaff_x26;
  *(undefined **)(puVar7 + -0x38) = puVar42;
  *(uint **)(puVar7 + -0x30) = unaff_x24;
  *(uint **)(puVar7 + -0x28) = puVar41;
  *(uint **)(puVar7 + -0x20) = puVar22;
  *(long *)(puVar7 + -0x18) = lVar28;
  *(ulong *)(puVar7 + -0x10) = uVar30;
  *(uint **)(puVar7 + -8) = puVar17;
  puVar22 = puVar18;
  if (puVar39 == (uint *)0x0) {
    func_0x057a867c(5);
  }
  *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
  if (*(long *)(lVar37 + 0x10) == 0) {
    puVar22 = *(uint **)(*(long *)(*(long *)(uVar29 + 0x20) + 0xc0) + 0x10);
    func_0x04fe3720(lVar37,0);
  }
  plVar19 = *(long **)(lVar37 + 0x30);
  lVar28 = *(long *)(lVar37 + 0x18);
  unaff_x29 = puVar18;
  if (plVar19 == (long *)0x0) {
    if (puVar39 != (uint *)0x0) {
      uVar12 = (**(code **)(*(long *)puVar39 + 0x158))
                         (puVar39,*(undefined8 *)(*(long *)puVar39 + 0x160));
      goto LAB_04fe3908;
    }
  }
  else {
    lVar33 = *(long *)(*(long *)(*(long *)(uVar29 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c(lVar33);
    }
    lVar35 = *plVar19;
    uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar33) {
          puVar20 = (undefined8 *)(lVar35 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_04fe38f8;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar19,lVar33,1);
LAB_04fe38f8:
    puVar22 = (uint *)puVar20[1];
    uVar12 = (*(code *)*puVar20)(plVar19,puVar39);
LAB_04fe3908:
    lVar33 = *(long *)(lVar37 + 0x10);
    if (lVar33 != 0) {
      uVar27 = *(uint *)(lVar33 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar12;
      iVar13 = 0;
      if (uVar27 != 0) {
        iVar13 = (int)uVar12 / (int)uVar27;
      }
      uVar26 = uVar12 - iVar13 * uVar27;
      plVar34 = plVar19;
      if (uVar26 < uVar27) {
        unaff_x28 = (uint *)(lVar33 + (ulong)uVar26 * 4 + 0x20);
        uVar27 = *unaff_x28 - 1;
        puVar17 = (uint *)(ulong)uVar27;
        if (plVar19 == (long *)0x0) {
          plVar34 = (long *)func_0x039574b0(*(undefined8 *)
                                             (*(long *)(*(long *)(uVar29 + 0x20) + 0xc0) + 0x18));
          if (lVar28 != 0) {
            uVar21 = *(undefined8 *)(lVar28 + 0x18);
            uVar26 = (uint)uVar21;
            if (uVar27 < uVar26) {
              *(int *)(puVar7 + -100) = (int)uVar31;
              uVar31 = 0;
              puVar42 = (undefined *)0x18;
              do {
                uVar27 = (uint)uVar21;
                uVar26 = (uint)puVar17;
                puVar17 = (uint *)(long)(int)uVar26;
                plVar19 = plVar34;
                if (*(uint *)(lVar28 + (long)(int)uVar26 * 0x18 + 0x20) == uVar12) {
                  if (plVar34 == (long *)0x0) goto LAB_04fe3c74;
                  puVar22 = puVar39;
                  uVar30 = (**(code **)(*plVar34 + 0x1b8))
                                     (plVar34,*(undefined8 *)(lVar28 + (long)puVar17 * 0x18 + 0x28),
                                      puVar39,*(undefined8 *)(*plVar34 + 0x1c0));
                  if ((uVar30 & 1) != 0) {
                    if ((*(uint *)(puVar7 + -100) & 0xff) == 2) goto LAB_04fe3c5c;
                    if ((*(uint *)(puVar7 + -100) & 0xff) != 1) {
                      return (uint *)0x0;
                    }
                    if (*(uint *)(lVar28 + 0x18) <= uVar26) goto LAB_04fe3c70;
                    puVar17 = (uint *)(lVar28 + (long)puVar17 * 0x18 + 0x30);
                    *(uint **)puVar17 = puVar18;
                    goto SUB_032809c4;
                  }
                  uVar27 = *(uint *)(lVar28 + 0x18);
                }
                if (uVar27 <= uVar26) goto LAB_04fe3c70;
                uVar2 = *(uint *)(lVar28 + (long)puVar17 * 0x18 + 0x24);
                puVar17 = (uint *)(ulong)uVar2;
                if ((int)uVar27 <= (int)uVar31) {
                  func_0x057b8684(0);
                }
                uVar21 = *(undefined8 *)(lVar28 + 0x18);
                uVar31 = (ulong)((int)uVar31 + 1);
                uVar26 = (uint)uVar21;
              } while (uVar2 < uVar26);
            }
            goto LAB_04fe3ad4;
          }
        }
        else if (lVar28 != 0) {
          uVar21 = *(undefined8 *)(lVar28 + 0x18);
          uVar26 = (uint)uVar21;
          if (uVar27 < uVar26) {
            *(int *)(puVar7 + -100) = (int)uVar31;
            *(uint **)(puVar7 + -0x70) = puVar18;
            puVar18 = (uint *)0x0;
            uVar31 = 0x18;
            do {
              uVar27 = (uint)uVar21;
              uVar26 = (uint)puVar17;
              puVar17 = (uint *)(long)(int)uVar26;
              if (*(uint *)(lVar28 + (long)(int)uVar26 * 0x18 + 0x20) == uVar12) {
                lVar33 = *(long *)(*(long *)(*(long *)(uVar29 + 0x20) + 0xc0) + 8);
                puVar42 = *(undefined **)(lVar28 + (long)puVar17 * 0x18 + 0x28);
                if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                  lVar33 = func_0x0325681c(lVar33);
                }
                lVar35 = *plVar19;
                uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar30 != 0) {
                  piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == lVar33) {
                      puVar20 = (undefined8 *)(lVar35 + (long)*piVar32 * 0x10 + 0x138);
                      goto LAB_04fe39e0;
                    }
                    uVar30 = uVar30 - 1;
                    piVar32 = piVar32 + 4;
                  } while (uVar30 != 0);
                }
                puVar20 = (undefined8 *)func_0x03256b10(plVar19,lVar33,0);
LAB_04fe39e0:
                puVar22 = puVar39;
                uVar30 = (*(code *)*puVar20)(plVar19,puVar42,puVar39,puVar20[1]);
                if ((uVar30 & 1) != 0) {
                  if ((*(uint *)(puVar7 + -100) & 0xff) == 2) {
LAB_04fe3c5c:
                    func_0x057b8580(puVar39,0);
                    return (uint *)0x0;
                  }
                  if ((*(uint *)(puVar7 + -100) & 0xff) != 1) {
                    return (uint *)0x0;
                  }
                  if (*(uint *)(lVar28 + 0x18) <= uVar26) goto LAB_04fe3c70;
                  puVar17 = (uint *)(lVar28 + (long)puVar17 * 0x18 + 0x30);
                  *(undefined8 *)puVar17 = *(undefined8 *)(puVar7 + -0x70);
                  goto SUB_032809c4;
                }
                uVar27 = *(uint *)(lVar28 + 0x18);
              }
              if (uVar27 <= uVar26) goto LAB_04fe3c70;
              uVar2 = *(uint *)(lVar28 + (long)puVar17 * 0x18 + 0x24);
              puVar17 = (uint *)(ulong)uVar2;
              if ((int)uVar27 <= (int)puVar18) {
                func_0x057b8684(0);
              }
              uVar21 = *(undefined8 *)(lVar28 + 0x18);
              puVar18 = (uint *)(ulong)((int)puVar18 + 1);
              uVar26 = (uint)uVar21;
            } while (uVar2 < uVar26);
            puVar18 = *(uint **)(puVar7 + -0x70);
          }
LAB_04fe3ad4:
          plVar34 = plVar19;
          if (*(int *)(lVar37 + 0x28) < 1) {
            uVar27 = *(uint *)(lVar37 + 0x20);
            puVar17 = (uint *)(ulong)uVar27;
            unaff_x29 = puVar18;
            if (uVar27 == uVar26) {
              func_0x04fe402c(lVar37,*(undefined8 *)
                                      (*(long *)(*(long *)(uVar29 + 0x20) + 0xc0) + 0x1b8));
              lVar33 = *(long *)(lVar37 + 0x10);
              *(uint *)(lVar37 + 0x20) = uVar27 + 1;
              if (lVar33 == 0) goto LAB_04fe3c74;
              uVar26 = *(uint *)(lVar33 + 0x18);
              iVar13 = 0;
              if (uVar26 != 0) {
                iVar13 = (int)uVar12 / (int)uVar26;
              }
              uVar2 = uVar12 - iVar13 * uVar26;
              if (uVar26 <= uVar2) goto LAB_04fe3c70;
              lVar28 = *(long *)(lVar37 + 0x18);
              unaff_x28 = (uint *)(lVar33 + (ulong)uVar2 * 4 + 0x20);
            }
            else {
              lVar28 = *(long *)(lVar37 + 0x18);
              *(uint *)(lVar37 + 0x20) = uVar27 + 1;
            }
            if (lVar28 == 0) goto LAB_04fe3c74;
            if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_04fe3c70;
            lVar33 = (long)(int)uVar27;
          }
          else {
            *(int *)(lVar37 + 0x28) = *(int *)(lVar37 + 0x28) + -1;
            uVar27 = *(uint *)(lVar37 + 0x24);
            puVar17 = (uint *)(ulong)uVar27;
            if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_04fe3c70;
            lVar33 = (long)(int)uVar27;
            *(undefined4 *)(lVar37 + 0x24) = *(undefined4 *)(lVar28 + lVar33 * 0x18 + 0x24);
          }
          lVar28 = lVar28 + lVar33 * 0x18;
          *(uint *)(lVar28 + 0x20) = uVar12;
          *(uint *)(lVar28 + 0x24) = *unaff_x28 - 1;
          puVar17 = (uint *)(lVar28 + 0x28);
          *(uint **)puVar17 = puVar39;
          goto SUB_032809c4;
        }
      }
      else {
LAB_04fe3c70:
        func_0x03280cb4();
        plVar19 = plVar34;
        unaff_x29 = puVar18;
      }
    }
  }
LAB_04fe3c74:
  lVar37 = func_0x03280cac();
  unaff_x26 = PTR_DAT_07781380;
  *(undefined8 *)(puVar7 + -0xc0) = 0x4fe3c78;
  *(undefined **)(puVar7 + -0xb8) = unaff_x27;
  *(long *)(puVar7 + -0xb0) = lVar28;
  *(undefined **)(puVar7 + -0xa8) = puVar42;
  *(long **)(puVar7 + -0xa0) = plVar19;
  *(ulong *)(puVar7 + -0x98) = uVar31;
  *(ulong *)(puVar7 + -0x90) = uVar29;
  *(undefined1 (*) [16])(puVar7 + -0x88) = auVar47;
  *(uint **)(puVar7 + -0x78) = puVar17;
  uVar30 = 0x7e1b000;
  if ((bRam0000000007e1b902 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781610);
    func_0x03280a18(PTR_DAT_07781618);
    func_0x03280a18(PTR_DAT_07781380);
    func_0x03280a18(PTR_DAT_0774e558);
    func_0x03280a18(PTR_DAT_07781600);
    func_0x03280a18(PTR_DAT_0777e440);
    func_0x03280a18(PTR_DAT_07781608);
    func_0x03280a18(PTR_DAT_0775b648);
    bRam0000000007e1b902 = 1;
  }
  lVar28 = *(long *)unaff_x26;
  *(undefined8 *)(puVar7 + -200) = 0;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar28 = func_0x057624fc(0);
  if (lVar28 != 0) {
    func_0x04e91150(lVar28,lVar37,puVar7 + -200,*(undefined8 *)PTR_DAT_07781618);
    if (*(long *)(puVar7 + -200) == 0) {
      return (uint *)0x0;
    }
    uVar14 = func_0x056933d8(*(long *)(puVar7 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
    puVar40 = PTR_DAT_0774e558;
    if (*(long *)(puVar7 + -200) != 0) {
      uVar30 = uVar14 & 0xffffffff;
      uVar29 = func_0x056933d8(*(long *)(puVar7 + -200),*(undefined8 *)PTR_DAT_07781600,0);
      lVar28 = *(long *)puVar40;
      lVar33 = *(long *)(puVar7 + -200);
      uVar29 = uVar29 & 0xffffffff;
      plVar19 = *(long **)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 0x170);
      if (*(int *)(lVar28 + 0xe0) == 0) {
        func_0x03280b8c(lVar28);
      }
      uVar21 = func_0x057a51c4(plVar19,0);
      uVar31 = 0;
      unaff_x27 = puVar40;
      if (lVar33 != 0) {
        lVar28 = func_0x05690f88(lVar33,*(undefined8 *)PTR_DAT_0777e440,uVar21,0);
        lVar33 = *(long *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
          lVar33 = func_0x0325681c(lVar33);
        }
        if (lVar28 == 0) {
LAB_04fe3e2c:
          lVar35 = 0;
        }
        else {
          lVar35 = func_0x03280b90(lVar28,lVar33);
          if (lVar35 == 0) {
            func_0x03281048(lVar28,lVar33);
            goto LAB_04fe3e2c;
          }
        }
        puVar17 = (uint *)(lVar37 + 0x30);
        *(long *)puVar17 = lVar35;
        lVar37 = *(long *)(*(long *)(*(long *)(puVar22 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
          lVar37 = func_0x0325681c(lVar37);
        }
        if ((lVar28 != 0) && (lVar33 = func_0x03280b90(lVar28,lVar37), lVar33 == 0)) {
          func_0x03281048(lVar28,lVar37);
        }
        goto SUB_032809c4;
      }
    }
  }
  func_0x03280cac();
  func_0x057b819c(0x10,0);
  func_0x03280cac();
  auVar47 = func_0x03281048(plVar19,uVar31);
  puVar40 = PTR_DAT_07781380;
  lVar28 = auVar47._0_8_;
  *(undefined8 *)(puVar7 + -0x100) = 0x4fe402c;
  *(ulong *)(puVar7 + -0xf0) = uVar29;
  *(ulong *)(puVar7 + -0xe8) = uVar30;
  *(uint **)(puVar7 + -0xe0) = puVar22;
  *(long *)(puVar7 + -0xd8) = lVar37;
  if ((bRam0000000007e1b903 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781380);
    bRam0000000007e1b903 = 1;
  }
  uVar3 = *(undefined4 *)(lVar28 + 0x20);
  if (*(int *)(*(long *)puVar40 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x05762478(uVar3,0);
  puVar40 = PTR_DAT_07754420;
  puVar25 = (undefined *)(ulong)uVar12;
  lVar37 = *(long *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0x1c8);
  *(undefined8 *)(puVar7 + -0x120) = *(undefined8 *)(puVar7 + -0x100);
  *(undefined **)(puVar7 + -0x110) = unaff_x26;
  *(undefined **)(puVar7 + -0x108) = puVar42;
  *(long **)(puVar7 + -0x100) = plVar19;
  *(ulong *)(puVar7 + -0xf8) = uVar31;
  *(undefined8 *)(puVar7 + -0xf0) = *(undefined8 *)(puVar7 + -0xf0);
  *(undefined8 *)(puVar7 + -0xe8) = *(undefined8 *)(puVar7 + -0xe8);
  *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0xe0);
  *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar7 + -0xd8);
  puVar42 = (undefined *)0x0;
  if ((bRam0000000007e1b904 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07754420);
    bRam0000000007e1b904 = 1;
  }
  lVar33 = func_0x03280afc(*(undefined8 *)puVar40,puVar25);
  lVar37 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x1b0);
  if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
    lVar37 = func_0x0325681c(lVar37);
  }
  puVar41 = (uint *)func_0x03280afc(lVar37,puVar25);
  uVar27 = *(uint *)(lVar28 + 0x20);
  unaff_x24 = (uint *)(ulong)uVar27;
  lVar37 = 0;
  puVar17 = puVar41;
  func_0x057b9f30(*(undefined8 *)(lVar28 + 0x18),0,puVar41,0,unaff_x24,0);
  if ((int)uVar27 < 1) {
LAB_04fe423c:
    puVar17 = (uint *)(lVar28 + 0x10);
    *(long *)puVar17 = lVar33;
    goto SUB_032809c4;
  }
  if (puVar41 != (uint *)0x0) {
    uVar27 = puVar41[6];
    puVar22 = (uint *)0x0;
    while (puVar22 < (uint *)(ulong)uVar27) {
      uVar26 = puVar41[(long)puVar22 * 6 + 8];
      if (-1 < (int)uVar26) {
        if (lVar33 == 0) goto LAB_04fe4274;
        iVar13 = 0;
        if (uVar12 != 0) {
          iVar13 = (int)uVar26 / (int)uVar12;
        }
        uVar26 = uVar26 - iVar13 * uVar12;
        if (*(uint *)(lVar33 + 0x18) <= uVar26) break;
        lVar35 = lVar33 + (ulong)uVar26 * 4;
        puVar41[(long)puVar22 * 6 + 9] = *(int *)(lVar35 + 0x20) - 1;
        *(int *)(lVar35 + 0x20) = (int)puVar22 + 1;
      }
      puVar22 = (uint *)((long)puVar22 + 1);
      if (puVar22 == unaff_x24) goto LAB_04fe423c;
    }
    func_0x03280cb4();
  }
LAB_04fe4274:
  auVar47 = func_0x03280cac();
  puVar18 = auVar47._8_8_;
  lVar35 = auVar47._0_8_;
  *(uint **)(puVar7 + -0x180) = unaff_x29;
  *(undefined8 *)(puVar7 + -0x178) = 0x4fe4278;
  *(uint **)(puVar7 + -0x170) = unaff_x28;
  *(undefined **)(puVar7 + -0x168) = unaff_x27;
  *(undefined **)(puVar7 + -0x160) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x158) = 0;
  *(uint **)(puVar7 + -0x150) = unaff_x24;
  *(uint **)(puVar7 + -0x148) = puVar41;
  *(undefined8 **)(puVar7 + -0x140) = (undefined8 *)(lVar28 + 0x18);
  *(long *)(puVar7 + -0x138) = lVar33;
  *(undefined **)(puVar7 + -0x130) = puVar25;
  *(long *)(puVar7 + -0x128) = lVar28;
  *(uint **)(puVar7 + -0x188) = puVar17;
  if (puVar18 == (uint *)0x0) {
    func_0x057a867c(5);
  }
  if (*(long *)(lVar35 + 0x10) == 0) {
    return (uint *)0x0;
  }
  puVar39 = *(uint **)(lVar35 + 0x30);
  if (puVar39 == (uint *)0x0) {
    if (puVar18 != (uint *)0x0) {
      uVar12 = (**(code **)(*(long *)puVar18 + 0x158))
                         (puVar18,*(undefined8 *)(*(long *)puVar18 + 0x160));
      goto LAB_04fe4354;
    }
LAB_04fe4580:
    func_0x03280cac();
  }
  else {
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar7 + -0x188) + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    lVar33 = *(long *)puVar39;
    uVar30 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar28) {
          puVar20 = (undefined8 *)(lVar33 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_04fe4344;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(puVar39,lVar28,1);
LAB_04fe4344:
    puVar17 = (uint *)puVar20[1];
    uVar12 = (*(code *)*puVar20)(puVar39,puVar18);
LAB_04fe4354:
    lVar28 = *(long *)(lVar35 + 0x10);
    if (lVar28 == 0) goto LAB_04fe4580;
    uVar27 = *(uint *)(lVar28 + 0x18);
    uVar12 = uVar12 & 0x7fffffff;
    unaff_x27 = (undefined *)(ulong)uVar12;
    iVar13 = 0;
    if (uVar27 != 0) {
      iVar13 = (int)uVar12 / (int)uVar27;
    }
    uVar26 = uVar12 - iVar13 * uVar27;
    if (uVar26 < uVar27) {
      uVar27 = *(int *)(lVar28 + (ulong)uVar26 * 4 + 0x20) - 1;
      if ((int)uVar27 < 0) {
        return (uint *)0x0;
      }
      puVar22 = (uint *)0x0;
      puVar42 = (undefined *)0xffffffff;
      puVar25 = (undefined *)0x18;
      *(ulong *)(puVar7 + -400) = (ulong)uVar26;
      while( true ) {
        unaff_x24 = (uint *)(ulong)uVar27;
        unaff_x26 = *(undefined **)(lVar35 + 0x18);
        puVar41 = puVar22;
        if (unaff_x26 == (undefined *)0x0) break;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_04fe4584;
        unaff_x29 = (uint *)(unaff_x26 + (ulong)uVar27 * 0x18 + 0x20);
        unaff_x28 = unaff_x24;
        if (*unaff_x29 == uVar12) {
          puVar39 = *(uint **)(lVar35 + 0x30);
          if (puVar39 == (uint *)0x0) {
            plVar19 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(puVar7 + -0x188) +
                                                                   0x20) + 0xc0) + 0x18));
            puVar39 = puVar22;
            if (plVar19 == (long *)0x0) break;
            lVar37 = *(long *)(*plVar19 + 0x1c0);
            puVar17 = puVar18;
            uVar30 = (**(code **)(*plVar19 + 0x1b8))
                               (plVar19,*(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28));
          }
          else {
            if (puVar39 == (uint *)0x0) break;
            lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar7 + -0x188) + 0x20) + 0xc0) + 8);
            puVar41 = *(uint **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
            if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
              lVar28 = func_0x0325681c(lVar28);
            }
            lVar37 = *(long *)puVar39;
            uVar30 = (ulong)*(ushort *)(lVar37 + 0x12e);
            if (uVar30 != 0) {
              piVar32 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == lVar28) {
                  puVar20 = (undefined8 *)(lVar37 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_04fe4490;
                }
                uVar30 = uVar30 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar30 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(puVar39,lVar28,0);
LAB_04fe4490:
            lVar37 = puVar20[1];
            puVar17 = puVar18;
            uVar30 = (*(code *)*puVar20)(puVar39,puVar41);
            puVar22 = puVar39;
          }
          if ((uVar30 & 1) != 0) {
            puVar39 = puVar22;
            if ((int)(uint)puVar42 < 0) {
              lVar28 = *(long *)(lVar35 + 0x10);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)*(long *)(puVar7 + -400)) goto LAB_04fe4584;
              *(int *)(lVar28 + *(long *)(puVar7 + -400) * 4 + 0x20) =
                   *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
            }
            else {
              lVar28 = *(long *)(lVar35 + 0x18);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)puVar42) goto LAB_04fe4584;
              *(undefined4 *)(lVar28 + (long)puVar42 * 0x18 + 0x24) =
                   *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
            }
            *unaff_x29 = 0xffffffff;
            uVar3 = *(undefined4 *)(lVar35 + 0x24);
            *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
            *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x30) = 0;
            *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar3;
            *(uint *)(lVar35 + 0x24) = uVar27;
            *(ulong *)(lVar35 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar35 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar35 + 0x28) + 1);
            return (uint *)0x1;
          }
        }
        puVar42 = (undefined *)(ulong)uVar27;
        puVar39 = puVar22;
        uVar27 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
        if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
          return (uint *)0x0;
        }
      }
      goto LAB_04fe4580;
    }
  }
LAB_04fe4584:
  auVar47 = func_0x03280cb4();
  puVar22 = auVar47._8_8_;
  lVar33 = auVar47._0_8_;
  *(uint **)(puVar7 + -0x1f0) = unaff_x29;
  *(undefined8 *)(puVar7 + -0x1e8) = 0x4fe4588;
  *(uint **)(puVar7 + -0x1e0) = unaff_x28;
  *(undefined **)(puVar7 + -0x1d8) = unaff_x27;
  *(undefined **)(puVar7 + -0x1d0) = unaff_x26;
  *(undefined **)(puVar7 + -0x1c8) = puVar42;
  *(uint **)(puVar7 + -0x1c0) = unaff_x24;
  *(uint **)(puVar7 + -0x1b8) = puVar41;
  *(uint **)(puVar7 + -0x1b0) = puVar39;
  *(uint **)(puVar7 + -0x1a8) = puVar18;
  *(undefined **)(puVar7 + -0x1a0) = puVar25;
  *(long *)(puVar7 + -0x198) = lVar35;
  *(uint **)(puVar7 + -0x200) = puVar17;
  *(long *)(puVar7 + -0x1f8) = lVar37;
  if (puVar22 == (uint *)0x0) {
    func_0x057a867c(5);
  }
  if (*(long *)(lVar33 + 0x10) == 0) goto LAB_04fe47d0;
  puVar41 = *(uint **)(lVar33 + 0x30);
  if (puVar41 == (uint *)0x0) {
    if (puVar22 != (uint *)0x0) {
      uVar12 = (**(code **)(*(long *)puVar22 + 0x158))
                         (puVar22,*(undefined8 *)(*(long *)puVar22 + 0x160));
      goto LAB_04fe4664;
    }
LAB_04fe48a8:
    func_0x03280cac();
  }
  else {
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar7 + -0x1f8) + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    lVar35 = *(long *)puVar41;
    uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar28) {
          puVar20 = (undefined8 *)(lVar35 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_04fe4654;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(puVar41,lVar28,1);
LAB_04fe4654:
    puVar17 = (uint *)puVar20[1];
    uVar12 = (*(code *)*puVar20)(puVar41,puVar22);
LAB_04fe4664:
    lVar28 = *(long *)(lVar33 + 0x10);
    if (lVar28 == 0) goto LAB_04fe48a8;
    uVar27 = *(uint *)(lVar28 + 0x18);
    uVar12 = uVar12 & 0x7fffffff;
    unaff_x29 = (uint *)(ulong)uVar12;
    iVar13 = 0;
    if (uVar27 != 0) {
      iVar13 = (int)uVar12 / (int)uVar27;
    }
    uVar26 = uVar12 - iVar13 * uVar27;
    if (uVar26 < uVar27) {
      iVar13 = *(int *)(lVar28 + (ulong)uVar26 * 4 + 0x20);
      *(ulong *)(puVar7 + -0x208) = (ulong)uVar26;
      uVar27 = iVar13 - 1;
      if ((int)uVar27 < 0) {
LAB_04fe47d0:
        **(undefined8 **)(puVar7 + -0x200) = 0;
        return (uint *)0x0;
      }
      puVar39 = (uint *)0x0;
      unaff_x26 = (undefined *)0xffffffff;
      puVar18 = (uint *)0x18;
      while( true ) {
        puVar42 = (undefined *)(ulong)uVar27;
        unaff_x27 = *(undefined **)(lVar33 + 0x18);
        unaff_x24 = puVar39;
        if (unaff_x27 == (undefined *)0x0) break;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar27) goto LAB_04fe48ac;
        unaff_x28 = (uint *)(unaff_x27 + (ulong)uVar27 * 0x18 + 0x20);
        puVar25 = puVar42;
        if (*unaff_x28 == uVar12) {
          puVar41 = *(uint **)(lVar33 + 0x30);
          if (puVar41 == (uint *)0x0) {
            plVar19 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(puVar7 + -0x1f8) +
                                                                   0x20) + 0xc0) + 0x18));
            puVar41 = puVar39;
            if (plVar19 == (long *)0x0) break;
            lVar37 = *(long *)(*plVar19 + 0x1c0);
            puVar17 = puVar22;
            uVar30 = (**(code **)(*plVar19 + 0x1b8))
                               (plVar19,*(undefined8 *)(unaff_x27 + (long)puVar42 * 0x18 + 0x28));
          }
          else {
            if (puVar41 == (uint *)0x0) break;
            lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar7 + -0x1f8) + 0x20) + 0xc0) + 8);
            unaff_x24 = *(uint **)(unaff_x27 + (long)puVar42 * 0x18 + 0x28);
            if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
              lVar28 = func_0x0325681c(lVar28);
            }
            lVar37 = *(long *)puVar41;
            uVar30 = (ulong)*(ushort *)(lVar37 + 0x12e);
            if (uVar30 != 0) {
              piVar32 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == lVar28) {
                  puVar20 = (undefined8 *)(lVar37 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_04fe47a0;
                }
                uVar30 = uVar30 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar30 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(puVar41,lVar28,0);
LAB_04fe47a0:
            lVar37 = puVar20[1];
            puVar17 = puVar22;
            uVar30 = (*(code *)*puVar20)(puVar41,unaff_x24);
            puVar39 = puVar41;
          }
          if ((uVar30 & 1) != 0) {
            puVar41 = puVar39;
            if ((int)(uint)unaff_x26 < 0) {
              lVar28 = *(long *)(lVar33 + 0x10);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)*(long *)(puVar7 + -0x208)) goto LAB_04fe48ac;
              *(int *)(lVar28 + *(long *)(puVar7 + -0x208) * 4 + 0x20) =
                   *(int *)(unaff_x27 + (long)puVar42 * 0x18 + 0x24) + 1;
            }
            else {
              lVar28 = *(long *)(lVar33 + 0x18);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)unaff_x26) goto LAB_04fe48ac;
              *(undefined4 *)(lVar28 + (long)unaff_x26 * 0x18 + 0x24) =
                   *(undefined4 *)(unaff_x27 + (long)puVar42 * 0x18 + 0x24);
            }
            puVar17 = *(uint **)(puVar7 + -0x200);
            *(undefined8 *)puVar17 = *(undefined8 *)(unaff_x27 + (long)puVar42 * 0x18 + 0x30);
            goto SUB_032809c4;
          }
        }
        unaff_x26 = (undefined *)(ulong)uVar27;
        puVar41 = puVar39;
        uVar27 = *(uint *)(unaff_x27 + (long)puVar42 * 0x18 + 0x24);
        if ((int)*(uint *)(unaff_x27 + (long)puVar42 * 0x18 + 0x24) < 0) goto LAB_04fe47d0;
      }
      goto LAB_04fe48a8;
    }
  }
LAB_04fe48ac:
  lVar28 = func_0x03280cb4();
  *(undefined8 *)(puVar7 + -0x230) = 0x4fe48b0;
  *(uint **)(puVar7 + -0x228) = puVar18;
  *(undefined **)(puVar7 + -0x220) = puVar25;
  *(long *)(puVar7 + -0x218) = lVar33;
  puVar18 = *(uint **)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x110);
  uVar12 = func_0x04fe343c();
  uVar30 = (ulong)uVar12;
  if ((int)uVar12 < 0) {
    puVar17[0] = 0;
    puVar17[1] = 0;
    return (uint *)(ulong)(~uVar12 >> 0x1f);
  }
  lVar33 = *(long *)(lVar28 + 0x18);
  if (lVar33 == 0) {
    func_0x03280cac();
  }
  else if (uVar12 < *(uint *)(lVar33 + 0x18)) goto code_r0x04fe48ec;
  uVar21 = 0x4fe4928;
  auVar47 = func_0x03280cb4();
  uVar31 = 0;
  uVar29 = *(ulong *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x118);
  puVar7 = puVar7 + -0x230;
  goto SUB_04fe3800;
code_r0x04fe48ec:
  *(undefined8 *)puVar17 = *(undefined8 *)(lVar33 + uVar30 * 0x18 + 0x30);
  goto SUB_032809c4;
LAB_04fba764:
  plVar24 = auVar44._8_8_;
  lVar35 = auVar44._0_8_;
  *(uint **)(puVar11 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar11 + -0x58) = uVar21;
  *(uint **)(puVar11 + -0x50) = unaff_x28;
  *(undefined **)(puVar11 + -0x48) = unaff_x27;
  *(undefined **)(puVar11 + -0x40) = unaff_x26;
  *(uint **)(puVar11 + -0x38) = unaff_x25;
  *(uint **)(puVar11 + -0x30) = unaff_x24;
  *(long **)(puVar11 + -0x28) = plVar15;
  *(undefined8 **)(puVar11 + -0x20) = puVar20;
  *(long *)(puVar11 + -0x18) = lVar33;
  *(uint **)(puVar11 + -0x10) = puVar17;
  *(long *)(puVar11 + -8) = lVar28;
  *(long **)(puVar11 + -0x68) = plVar34;
  if (plVar24 == (long *)0x0) {
    func_0x057a867c(5);
  }
  if (*(long *)(lVar35 + 0x10) == 0) {
    return (uint *)0x0;
  }
  plVar38 = *(long **)(lVar35 + 0x30);
  if (plVar38 == (long *)0x0) {
    if (plVar24 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar24 + 0x158))(plVar24,*(undefined8 *)(*plVar24 + 0x160));
      goto LAB_04fba840;
    }
LAB_04fbaa6c:
    func_0x03280cac();
  }
  else {
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0x68) + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    lVar33 = *plVar38;
    uVar30 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar28) {
          puVar20 = (undefined8 *)(lVar33 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_04fba830;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar38,lVar28,1);
LAB_04fba830:
    plVar34 = (long *)puVar20[1];
    uVar12 = (*(code *)*puVar20)(plVar38,plVar24);
LAB_04fba840:
    lVar28 = *(long *)(lVar35 + 0x10);
    if (lVar28 == 0) goto LAB_04fbaa6c;
    uVar27 = *(uint *)(lVar28 + 0x18);
    uVar12 = uVar12 & 0x7fffffff;
    unaff_x27 = (undefined *)(ulong)uVar12;
    iVar13 = 0;
    if (uVar27 != 0) {
      iVar13 = (int)uVar12 / (int)uVar27;
    }
    uVar26 = uVar12 - iVar13 * uVar27;
    if (uVar26 < uVar27) {
      uVar27 = *(int *)(lVar28 + (ulong)uVar26 * 4 + 0x20) - 1;
      if ((int)uVar27 < 0) {
        return (uint *)0x0;
      }
      plVar19 = (long *)0x0;
      unaff_x29 = (uint *)0xffffffff;
      puVar17 = (uint *)0x18;
      *(ulong *)(puVar11 + -0x70) = (ulong)uVar26;
      while( true ) {
        unaff_x24 = (uint *)(ulong)uVar27;
        unaff_x26 = *(undefined **)(lVar35 + 0x18);
        plVar15 = plVar19;
        if (unaff_x26 == (undefined *)0x0) break;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_04fbaa70;
        unaff_x25 = (uint *)(unaff_x26 + (ulong)uVar27 * 0x18 + 0x20);
        unaff_x28 = unaff_x24;
        if (*unaff_x25 == uVar12) {
          plVar38 = *(long **)(lVar35 + 0x30);
          if (plVar38 == (long *)0x0) {
            plVar16 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(puVar11 + -0x68) +
                                                                   0x20) + 0xc0) + 0x18));
            plVar38 = plVar19;
            if (plVar16 == (long *)0x0) break;
            lVar37 = *(long *)(*plVar16 + 0x1c0);
            plVar34 = plVar24;
            uVar30 = (**(code **)(*plVar16 + 0x1b8))
                               (plVar16,*(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28));
          }
          else {
            if (plVar38 == (long *)0x0) break;
            lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0x68) + 0x20) + 0xc0) + 8);
            plVar15 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
            if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
              lVar28 = func_0x0325681c(lVar28);
            }
            lVar37 = *plVar38;
            uVar30 = (ulong)*(ushort *)(lVar37 + 0x12e);
            if (uVar30 != 0) {
              piVar32 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == lVar28) {
                  puVar20 = (undefined8 *)(lVar37 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_04fba97c;
                }
                uVar30 = uVar30 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar30 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(plVar38,lVar28,0);
LAB_04fba97c:
            lVar37 = puVar20[1];
            plVar34 = plVar24;
            uVar30 = (*(code *)*puVar20)(plVar38,plVar15);
            plVar19 = plVar38;
          }
          if ((uVar30 & 1) != 0) {
            plVar38 = plVar19;
            if ((int)(uint)unaff_x29 < 0) {
              lVar28 = *(long *)(lVar35 + 0x10);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)*(long *)(puVar11 + -0x70)) goto LAB_04fbaa70;
              *(int *)(lVar28 + *(long *)(puVar11 + -0x70) * 4 + 0x20) =
                   *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
            }
            else {
              lVar28 = *(long *)(lVar35 + 0x18);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)unaff_x29) goto LAB_04fbaa70;
              *(undefined4 *)(lVar28 + (long)unaff_x29 * 0x18 + 0x24) =
                   *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
            }
            *unaff_x25 = 0xffffffff;
            uVar3 = *(undefined4 *)(lVar35 + 0x24);
            *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
            *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar3;
            *(uint *)(lVar35 + 0x24) = uVar27;
            *(ulong *)(lVar35 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar35 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar35 + 0x28) + 1);
            return (uint *)0x1;
          }
        }
        unaff_x29 = (uint *)(ulong)uVar27;
        plVar38 = plVar19;
        uVar27 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
        if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
          return (uint *)0x0;
        }
      }
      goto LAB_04fbaa6c;
    }
  }
LAB_04fbaa70:
  auVar47 = func_0x03280cb4();
  plVar19 = auVar47._8_8_;
  lVar33 = auVar47._0_8_;
  *(uint **)(puVar11 + -0xd0) = unaff_x29;
  *(undefined8 *)(puVar11 + -200) = 0x4fbaa74;
  *(uint **)(puVar11 + -0xc0) = unaff_x28;
  *(undefined **)(puVar11 + -0xb8) = unaff_x27;
  *(undefined **)(puVar11 + -0xb0) = unaff_x26;
  *(uint **)(puVar11 + -0xa8) = unaff_x25;
  *(uint **)(puVar11 + -0xa0) = unaff_x24;
  *(long **)(puVar11 + -0x98) = plVar15;
  *(long **)(puVar11 + -0x90) = plVar38;
  *(long **)(puVar11 + -0x88) = plVar24;
  *(uint **)(puVar11 + -0x80) = puVar17;
  *(long *)(puVar11 + -0x78) = lVar35;
  *(long **)(puVar11 + -0xe0) = plVar34;
  *(long *)(puVar11 + -0xd8) = lVar37;
  if (plVar19 == (long *)0x0) {
    func_0x057a867c(5);
  }
  if (*(long *)(lVar33 + 0x10) == 0) goto LAB_04fbacbc;
  puVar41 = *(uint **)(lVar33 + 0x30);
  if (puVar41 == (uint *)0x0) {
    if (plVar19 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar19 + 0x158))(plVar19,*(undefined8 *)(*plVar19 + 0x160));
      goto LAB_04fbab50;
    }
LAB_04fbad90:
    func_0x03280cac();
  }
  else {
    lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0xd8) + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      lVar28 = func_0x0325681c(lVar28);
    }
    lVar35 = *(long *)puVar41;
    uVar30 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar28) {
          puVar20 = (undefined8 *)(lVar35 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_04fbab40;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(puVar41,lVar28,1);
LAB_04fbab40:
    plVar34 = (long *)puVar20[1];
    uVar12 = (*(code *)*puVar20)(puVar41,plVar19);
LAB_04fbab50:
    lVar28 = *(long *)(lVar33 + 0x10);
    if (lVar28 == 0) goto LAB_04fbad90;
    uVar27 = *(uint *)(lVar28 + 0x18);
    uVar12 = uVar12 & 0x7fffffff;
    unaff_x28 = (uint *)(ulong)uVar12;
    iVar13 = 0;
    if (uVar27 != 0) {
      iVar13 = (int)uVar12 / (int)uVar27;
    }
    uVar26 = uVar12 - iVar13 * uVar27;
    if (uVar26 < uVar27) {
      iVar13 = *(int *)(lVar28 + (ulong)uVar26 * 4 + 0x20);
      *(ulong *)(puVar11 + -0xe8) = (ulong)uVar26;
      uVar27 = iVar13 - 1;
      if ((int)uVar27 < 0) {
LAB_04fbacbc:
        **(undefined8 **)(puVar11 + -0xe0) = 0;
        return (uint *)0x0;
      }
      puVar22 = (uint *)0x0;
      unaff_x26 = (undefined *)0xffffffff;
      plVar24 = (long *)0x18;
      while( true ) {
        unaff_x25 = (uint *)(ulong)uVar27;
        unaff_x27 = *(undefined **)(lVar33 + 0x18);
        unaff_x24 = puVar22;
        if (unaff_x27 == (undefined *)0x0) break;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar27) goto LAB_04fbad94;
        unaff_x29 = (uint *)(unaff_x27 + (ulong)uVar27 * 0x18 + 0x20);
        puVar17 = unaff_x25;
        if (*unaff_x29 == uVar12) {
          puVar41 = *(uint **)(lVar33 + 0x30);
          if (puVar41 == (uint *)0x0) {
            plVar15 = (long *)func_0x039574b0(*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(puVar11 + -0xd8) +
                                                                   0x20) + 0xc0) + 0x18));
            puVar41 = puVar22;
            if (plVar15 == (long *)0x0) break;
            lVar37 = *(long *)(*plVar15 + 0x1c0);
            plVar34 = plVar19;
            uVar30 = (**(code **)(*plVar15 + 0x1b8))
                               (plVar15,*(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28));
          }
          else {
            if (puVar41 == (uint *)0x0) break;
            lVar28 = *(long *)(*(long *)(*(long *)(*(long *)(puVar11 + -0xd8) + 0x20) + 0xc0) + 8);
            unaff_x24 = *(uint **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
            if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
              lVar28 = func_0x0325681c(lVar28);
            }
            lVar37 = *(long *)puVar41;
            uVar30 = (ulong)*(ushort *)(lVar37 + 0x12e);
            if (uVar30 != 0) {
              piVar32 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == lVar28) {
                  puVar20 = (undefined8 *)(lVar37 + (long)*piVar32 * 0x10 + 0x138);
                  goto LAB_04fbac8c;
                }
                uVar30 = uVar30 - 1;
                piVar32 = piVar32 + 4;
              } while (uVar30 != 0);
            }
            puVar20 = (undefined8 *)func_0x03256b10(puVar41,lVar28,0);
LAB_04fbac8c:
            lVar37 = puVar20[1];
            plVar34 = plVar19;
            uVar30 = (*(code *)*puVar20)(puVar41,unaff_x24);
            puVar22 = puVar41;
          }
          if ((uVar30 & 1) != 0) {
            puVar41 = puVar22;
            if ((int)(uint)unaff_x26 < 0) {
              lVar28 = *(long *)(lVar33 + 0x10);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)*(long *)(puVar11 + -0xe8)) goto LAB_04fbad94;
              *(int *)(lVar28 + *(long *)(puVar11 + -0xe8) * 4 + 0x20) =
                   *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
            }
            else {
              lVar28 = *(long *)(lVar33 + 0x18);
              if (lVar28 == 0) break;
              if (*(uint *)(lVar28 + 0x18) <= (uint)unaff_x26) goto LAB_04fbad94;
              *(undefined4 *)(lVar28 + (long)unaff_x26 * 0x18 + 0x24) =
                   *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
            }
            **(undefined8 **)(puVar11 + -0xe0) =
                 *(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
            *unaff_x29 = 0xffffffff;
            uVar3 = *(undefined4 *)(lVar33 + 0x24);
            *(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28) = 0;
            *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) = uVar3;
            *(uint *)(lVar33 + 0x24) = uVar27;
            *(ulong *)(lVar33 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar33 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar33 + 0x28) + 1);
            return (uint *)0x1;
          }
        }
        unaff_x26 = (undefined *)(ulong)uVar27;
        puVar41 = puVar22;
        uVar27 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
        if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0) goto LAB_04fbacbc;
      }
      goto LAB_04fbad90;
    }
  }
LAB_04fbad94:
  lVar28 = func_0x03280cb4();
  puVar10 = puVar11 + -0x110;
  *(undefined8 *)(puVar11 + -0x110) = 0x4fbad98;
  *(uint **)(puVar11 + -0x100) = puVar17;
  *(long *)(puVar11 + -0xf8) = lVar33;
  puVar22 = *(uint **)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x110);
  uVar12 = func_0x04fb993c();
  if ((int)uVar12 < 0) {
    *plVar34 = 0;
LAB_04fbade8:
    return (uint *)(ulong)(~uVar12 >> 0x1f);
  }
  lVar33 = *(long *)(lVar28 + 0x18);
  if (lVar33 == 0) {
    func_0x03280cac();
  }
  else if (uVar12 < *(uint *)(lVar33 + 0x18)) {
    *plVar34 = *(long *)(lVar33 + (ulong)uVar12 * 0x18 + 0x30);
    goto LAB_04fbade8;
  }
  uVar21 = 0x4fbae04;
  auVar45 = func_0x03280cb4();
  uVar30 = 0;
  uVar31 = *(ulong *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x118);
SUB_04fb9d00:
  puVar18 = auVar45._8_8_;
  lVar37 = auVar45._0_8_;
  *(uint **)(puVar10 + -0x60) = unaff_x29;
  *(undefined8 *)(puVar10 + -0x58) = uVar21;
  *(uint **)(puVar10 + -0x50) = unaff_x28;
  *(undefined **)(puVar10 + -0x48) = unaff_x27;
  *(undefined **)(puVar10 + -0x40) = unaff_x26;
  *(uint **)(puVar10 + -0x38) = unaff_x25;
  *(uint **)(puVar10 + -0x30) = unaff_x24;
  *(uint **)(puVar10 + -0x28) = puVar41;
  *(long **)(puVar10 + -0x20) = plVar19;
  *(long **)(puVar10 + -0x18) = plVar24;
  *(long *)(puVar10 + -0x10) = lVar28;
  *(long **)(puVar10 + -8) = plVar34;
  puVar41 = puVar22;
  if (puVar18 == (uint *)0x0) {
    func_0x057a867c(5);
  }
  *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
  if (*(long *)(lVar37 + 0x10) == 0) {
    puVar41 = *(uint **)(*(long *)(*(long *)(uVar31 + 0x20) + 0xc0) + 0x10);
    func_0x04fb9c20(lVar37,0);
  }
  plVar19 = *(long **)(lVar37 + 0x30);
  lVar28 = *(long *)(lVar37 + 0x18);
  if (plVar19 == (long *)0x0) {
    if (puVar18 != (uint *)0x0) {
      uVar12 = (**(code **)(*(long *)puVar18 + 0x158))
                         (puVar18,*(undefined8 *)(*(long *)puVar18 + 0x160));
      goto LAB_04fb9e08;
    }
  }
  else {
    lVar33 = *(long *)(*(long *)(*(long *)(uVar31 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
      lVar33 = func_0x0325681c(lVar33);
    }
    lVar35 = *plVar19;
    uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
    if (uVar29 != 0) {
      piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar33) {
          puVar20 = (undefined8 *)(lVar35 + (long)(*piVar32 + 1) * 0x10 + 0x138);
          goto LAB_04fb9df8;
        }
        uVar29 = uVar29 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar29 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar19,lVar33,1);
LAB_04fb9df8:
    puVar41 = (uint *)puVar20[1];
    uVar12 = (*(code *)*puVar20)(plVar19,puVar18);
LAB_04fb9e08:
    lVar33 = *(long *)(lVar37 + 0x10);
    if (lVar33 != 0) {
      uVar27 = *(uint *)(lVar33 + 0x18);
      uVar12 = uVar12 & 0x7fffffff;
      unaff_x27 = (undefined *)(ulong)uVar12;
      iVar13 = 0;
      if (uVar27 != 0) {
        iVar13 = (int)uVar12 / (int)uVar27;
      }
      uVar26 = uVar12 - iVar13 * uVar27;
      plVar24 = plVar19;
      if (uVar26 < uVar27) {
        unaff_x28 = (uint *)(lVar33 + (ulong)uVar26 * 4 + 0x20);
        uVar27 = *unaff_x28 - 1;
        plVar34 = (long *)(ulong)uVar27;
        if (plVar19 == (long *)0x0) {
          plVar24 = (long *)func_0x039574b0(*(undefined8 *)
                                             (*(long *)(*(long *)(uVar31 + 0x20) + 0xc0) + 0x18));
          if (lVar28 != 0) {
            uVar21 = *(undefined8 *)(lVar28 + 0x18);
            uVar26 = (uint)uVar21;
            if (uVar27 < uVar26) {
              *(int *)(puVar10 + -100) = (int)uVar30;
              uVar30 = 0;
              unaff_x25 = (uint *)0x18;
              do {
                uVar27 = (uint)uVar21;
                uVar26 = (uint)plVar34;
                plVar34 = (long *)(long)(int)uVar26;
                plVar19 = plVar24;
                if (*(uint *)(lVar28 + (long)(int)uVar26 * 0x18 + 0x20) == uVar12) {
                  if (plVar24 == (long *)0x0) goto LAB_04fba160;
                  puVar41 = puVar18;
                  uVar29 = (**(code **)(*plVar24 + 0x1b8))
                                     (plVar24,*(undefined8 *)(lVar28 + (long)plVar34 * 0x18 + 0x28),
                                      puVar18,*(undefined8 *)(*plVar24 + 0x1c0));
                  if ((uVar29 & 1) != 0) {
                    if ((*(uint *)(puVar10 + -100) & 0xff) == 2) goto LAB_04fba148;
                    if ((*(uint *)(puVar10 + -100) & 0xff) != 1) {
                      return (uint *)0x0;
                    }
                    if (uVar26 < *(uint *)(lVar28 + 0x18)) {
                      *(uint **)(lVar28 + (long)plVar34 * 0x18 + 0x30) = puVar22;
                      return (uint *)0x1;
                    }
                    goto LAB_04fba15c;
                  }
                  uVar27 = *(uint *)(lVar28 + 0x18);
                }
                if (uVar27 <= uVar26) goto LAB_04fba15c;
                uVar2 = *(uint *)(lVar28 + (long)plVar34 * 0x18 + 0x24);
                plVar34 = (long *)(ulong)uVar2;
                if ((int)uVar27 <= (int)uVar30) {
                  func_0x057b8684(0);
                }
                uVar21 = *(undefined8 *)(lVar28 + 0x18);
                uVar30 = (ulong)((int)uVar30 + 1);
                uVar26 = (uint)uVar21;
              } while (uVar2 < uVar26);
            }
            goto LAB_04fb9fd4;
          }
        }
        else if (lVar28 != 0) {
          uVar21 = *(undefined8 *)(lVar28 + 0x18);
          uVar26 = (uint)uVar21;
          if (uVar27 < uVar26) {
            *(int *)(puVar10 + -100) = (int)uVar30;
            *(uint **)(puVar10 + -0x70) = puVar22;
            puVar22 = (uint *)0x0;
            uVar30 = 0x18;
            do {
              uVar27 = (uint)uVar21;
              uVar26 = (uint)plVar34;
              plVar34 = (long *)(long)(int)uVar26;
              if (*(uint *)(lVar28 + (long)(int)uVar26 * 0x18 + 0x20) == uVar12) {
                lVar33 = *(long *)(*(long *)(*(long *)(uVar31 + 0x20) + 0xc0) + 8);
                unaff_x25 = *(uint **)(lVar28 + (long)plVar34 * 0x18 + 0x28);
                if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                  lVar33 = func_0x0325681c(lVar33);
                }
                lVar35 = *plVar19;
                uVar29 = (ulong)*(ushort *)(lVar35 + 0x12e);
                if (uVar29 != 0) {
                  piVar32 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == lVar33) {
                      puVar20 = (undefined8 *)(lVar35 + (long)*piVar32 * 0x10 + 0x138);
                      goto LAB_04fb9ee0;
                    }
                    uVar29 = uVar29 - 1;
                    piVar32 = piVar32 + 4;
                  } while (uVar29 != 0);
                }
                puVar20 = (undefined8 *)func_0x03256b10(plVar19,lVar33,0);
LAB_04fb9ee0:
                puVar41 = puVar18;
                uVar29 = (*(code *)*puVar20)(plVar19,unaff_x25,puVar18,puVar20[1]);
                if ((uVar29 & 1) != 0) {
                  if ((*(uint *)(puVar10 + -100) & 0xff) == 2) {
LAB_04fba148:
                    func_0x057b8580(puVar18,0);
                    return (uint *)0x0;
                  }
                  if ((*(uint *)(puVar10 + -100) & 0xff) != 1) {
                    return (uint *)0x0;
                  }
                  if (uVar26 < *(uint *)(lVar28 + 0x18)) {
                    *(undefined8 *)(lVar28 + (long)plVar34 * 0x18 + 0x30) =
                         *(undefined8 *)(puVar10 + -0x70);
                    return (uint *)0x1;
                  }
                  goto LAB_04fba15c;
                }
                uVar27 = *(uint *)(lVar28 + 0x18);
              }
              if (uVar27 <= uVar26) goto LAB_04fba15c;
              uVar2 = *(uint *)(lVar28 + (long)plVar34 * 0x18 + 0x24);
              plVar34 = (long *)(ulong)uVar2;
              if ((int)uVar27 <= (int)puVar22) {
                func_0x057b8684(0);
              }
              uVar21 = *(undefined8 *)(lVar28 + 0x18);
              puVar22 = (uint *)(ulong)((int)puVar22 + 1);
              uVar26 = (uint)uVar21;
            } while (uVar2 < uVar26);
            puVar22 = *(uint **)(puVar10 + -0x70);
          }
LAB_04fb9fd4:
          plVar24 = plVar19;
          if (*(int *)(lVar37 + 0x28) < 1) {
            uVar27 = *(uint *)(lVar37 + 0x20);
            plVar34 = (long *)(ulong)uVar27;
            if (uVar27 == uVar26) {
              func_0x04fba518(lVar37,*(undefined8 *)
                                      (*(long *)(*(long *)(uVar31 + 0x20) + 0xc0) + 0x1b8));
              lVar33 = *(long *)(lVar37 + 0x10);
              *(uint *)(lVar37 + 0x20) = uVar27 + 1;
              if (lVar33 == 0) goto LAB_04fba160;
              uVar26 = *(uint *)(lVar33 + 0x18);
              iVar13 = 0;
              if (uVar26 != 0) {
                iVar13 = (int)uVar12 / (int)uVar26;
              }
              uVar2 = uVar12 - iVar13 * uVar26;
              if (uVar26 <= uVar2) goto LAB_04fba15c;
              lVar28 = *(long *)(lVar37 + 0x18);
              unaff_x28 = (uint *)(lVar33 + (ulong)uVar2 * 4 + 0x20);
            }
            else {
              lVar28 = *(long *)(lVar37 + 0x18);
              *(uint *)(lVar37 + 0x20) = uVar27 + 1;
            }
            if (lVar28 == 0) goto LAB_04fba160;
            if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_04fba15c;
            lVar33 = (long)(int)uVar27;
          }
          else {
            *(int *)(lVar37 + 0x28) = *(int *)(lVar37 + 0x28) + -1;
            uVar27 = *(uint *)(lVar37 + 0x24);
            plVar34 = (long *)(ulong)uVar27;
            if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_04fba15c;
            lVar33 = (long)(int)uVar27;
            *(undefined4 *)(lVar37 + 0x24) = *(undefined4 *)(lVar28 + lVar33 * 0x18 + 0x24);
          }
          lVar28 = lVar28 + lVar33 * 0x18;
          *(uint *)(lVar28 + 0x20) = uVar12;
          uVar12 = *unaff_x28;
          puVar17 = (uint *)(lVar28 + 0x28);
          *(uint **)puVar17 = puVar18;
          *(uint *)(lVar28 + 0x24) = uVar12 - 1;
          goto SUB_032809c4;
        }
      }
      else {
LAB_04fba15c:
        func_0x03280cb4();
        plVar19 = plVar24;
      }
    }
  }
LAB_04fba160:
  lVar37 = func_0x03280cac();
  unaff_x26 = PTR_DAT_07781380;
  *(undefined8 *)(puVar10 + -0xc0) = 0x4fba164;
  *(undefined **)(puVar10 + -0xb8) = unaff_x27;
  *(long *)(puVar10 + -0xb0) = lVar28;
  *(uint **)(puVar10 + -0xa8) = unaff_x25;
  *(long **)(puVar10 + -0xa0) = plVar19;
  *(ulong *)(puVar10 + -0x98) = uVar30;
  *(ulong *)(puVar10 + -0x90) = uVar31;
  *(undefined1 (*) [16])(puVar10 + -0x88) = auVar45;
  *(long **)(puVar10 + -0x78) = plVar34;
  uVar29 = 0x7e1b000;
  if ((bRam0000000007e1b885 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781610);
    func_0x03280a18(PTR_DAT_07781618);
    func_0x03280a18(PTR_DAT_07781380);
    func_0x03280a18(PTR_DAT_0774e558);
    func_0x03280a18(PTR_DAT_07781600);
    func_0x03280a18(PTR_DAT_0777e440);
    func_0x03280a18(PTR_DAT_07781608);
    func_0x03280a18(PTR_DAT_0775b648);
    bRam0000000007e1b885 = 1;
  }
  lVar28 = *(long *)unaff_x26;
  *(undefined8 *)(puVar10 + -200) = 0;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar28 = func_0x057624fc(0);
  if (lVar28 != 0) {
    func_0x04e91150(lVar28,lVar37,puVar10 + -200,*(undefined8 *)PTR_DAT_07781618);
    if (*(long *)(puVar10 + -200) == 0) {
      return (uint *)0x0;
    }
    uVar14 = func_0x056933d8(*(long *)(puVar10 + -200),*(undefined8 *)PTR_DAT_0775b648,0);
    puVar42 = PTR_DAT_0774e558;
    if (*(long *)(puVar10 + -200) != 0) {
      uVar29 = uVar14 & 0xffffffff;
      uVar31 = func_0x056933d8(*(long *)(puVar10 + -200),*(undefined8 *)PTR_DAT_07781600,0);
      lVar28 = *(long *)puVar42;
      lVar33 = *(long *)(puVar10 + -200);
      uVar31 = uVar31 & 0xffffffff;
      plVar19 = *(long **)(*(long *)(*(long *)(puVar41 + 8) + 0xc0) + 0x170);
      if (*(int *)(lVar28 + 0xe0) == 0) {
        func_0x03280b8c(lVar28);
      }
      uVar21 = func_0x057a51c4(plVar19,0);
      uVar30 = 0;
      unaff_x27 = puVar42;
      if (lVar33 != 0) {
        lVar28 = func_0x05690f88(lVar33,*(undefined8 *)PTR_DAT_0777e440,uVar21,0);
        lVar33 = *(long *)(*(long *)(*(long *)(puVar41 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
          lVar33 = func_0x0325681c(lVar33);
        }
        if (lVar28 == 0) {
LAB_04fba318:
          lVar35 = 0;
        }
        else {
          lVar35 = func_0x03280b90(lVar28,lVar33);
          if (lVar35 == 0) {
            func_0x03281048(lVar28,lVar33);
            goto LAB_04fba318;
          }
        }
        puVar17 = (uint *)(lVar37 + 0x30);
        *(long *)puVar17 = lVar35;
        lVar37 = *(long *)(*(long *)(*(long *)(puVar41 + 8) + 0xc0) + 8);
        if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
          lVar37 = func_0x0325681c(lVar37);
        }
        if ((lVar28 != 0) && (lVar33 = func_0x03280b90(lVar28,lVar37), lVar33 == 0)) {
          func_0x03281048(lVar28,lVar37);
        }
        goto SUB_032809c4;
      }
    }
  }
  func_0x03280cac();
  func_0x057b819c(0x10,0);
  func_0x03280cac();
  auVar47 = func_0x03281048(plVar19,uVar30);
  puVar42 = PTR_DAT_07781380;
  lVar28 = auVar47._0_8_;
  *(undefined8 *)(puVar10 + -0x100) = 0x4fba518;
  *(ulong *)(puVar10 + -0xf0) = uVar31;
  *(ulong *)(puVar10 + -0xe8) = uVar29;
  *(uint **)(puVar10 + -0xe0) = puVar41;
  *(long *)(puVar10 + -0xd8) = lVar37;
  if ((bRam0000000007e1b886 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07781380);
    bRam0000000007e1b886 = 1;
  }
  uVar3 = *(undefined4 *)(lVar28 + 0x20);
  if (*(int *)(*(long *)puVar42 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x05762478(uVar3,0);
  puVar42 = PTR_DAT_07754420;
  puVar17 = (uint *)(ulong)uVar12;
  lVar37 = *(long *)(*(long *)(*(long *)(auVar47._8_8_ + 0x20) + 0xc0) + 0x1c8);
  puVar11 = puVar10 + -0x120;
  *(undefined8 *)(puVar10 + -0x120) = *(undefined8 *)(puVar10 + -0x100);
  *(undefined **)(puVar10 + -0x110) = unaff_x26;
  *(uint **)(puVar10 + -0x108) = unaff_x25;
  *(long **)(puVar10 + -0x100) = plVar19;
  *(ulong *)(puVar10 + -0xf8) = uVar30;
  *(undefined8 *)(puVar10 + -0xf0) = *(undefined8 *)(puVar10 + -0xf0);
  *(undefined8 *)(puVar10 + -0xe8) = *(undefined8 *)(puVar10 + -0xe8);
  *(undefined8 *)(puVar10 + -0xe0) = *(undefined8 *)(puVar10 + -0xe0);
  *(undefined8 *)(puVar10 + -0xd8) = *(undefined8 *)(puVar10 + -0xd8);
  unaff_x25 = (uint *)0x0;
  if ((bRam0000000007e1b887 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07754420);
    bRam0000000007e1b887 = 1;
  }
  lVar33 = func_0x03280afc(*(undefined8 *)puVar42,puVar17);
  lVar37 = *(long *)(*(long *)(*(long *)(lVar37 + 0x20) + 0xc0) + 0x1b0);
  if ((*(byte *)(lVar37 + 0x135) & 1) == 0) {
    lVar37 = func_0x0325681c(lVar37);
  }
  plVar15 = (long *)func_0x03280afc(lVar37,puVar17);
  puVar20 = (undefined8 *)(lVar28 + 0x18);
  uVar27 = *(uint *)(lVar28 + 0x20);
  unaff_x24 = (uint *)(ulong)uVar27;
  lVar37 = 0;
  plVar34 = plVar15;
  func_0x057b9f30(*puVar20,0,plVar15,0,unaff_x24,0);
  if ((int)uVar27 < 1) goto LAB_04fba728;
  if (plVar15 != (long *)0x0) {
    uVar27 = *(uint *)(plVar15 + 3);
    puVar41 = (uint *)0x0;
    while (puVar41 < (uint *)(ulong)uVar27) {
      iVar13 = (int)plVar15[(long)puVar41 * 3 + 4];
      if (-1 < iVar13) {
        if (lVar33 == 0) goto LAB_04fba760;
        iVar4 = 0;
        if (uVar12 != 0) {
          iVar4 = iVar13 / (int)uVar12;
        }
        uVar26 = iVar13 - iVar4 * uVar12;
        if (*(uint *)(lVar33 + 0x18) <= uVar26) break;
        lVar35 = lVar33 + (ulong)uVar26 * 4;
        *(int *)((long)plVar15 + (long)puVar41 * 0x18 + 0x24) = *(int *)(lVar35 + 0x20) + -1;
        *(int *)(lVar35 + 0x20) = (int)puVar41 + 1;
      }
      puVar41 = (uint *)((long)puVar41 + 1);
      if (puVar41 == unaff_x24) goto LAB_04fba728;
    }
    func_0x03280cb4();
  }
LAB_04fba760:
  uVar21 = 0x4fba764;
  auVar44 = func_0x03280cac();
  unaff_x29 = puVar22;
  goto LAB_04fba764;
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar32 = piVar32 + 4;
    if (uVar30 == 0) break;
LAB_06605a58:
    if (*(long *)(piVar32 + -2) == *(long *)(lVar37 + 0x20)) {
      lVar28 = lVar28 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar37 + 0x50)) * 0x10 + 0x138;
      goto LAB_06605a8c;
    }
  }
LAB_06605a70:
  lVar28 = func_0x03256b10(plVar19);
LAB_06605a8c:
  lVar28 = func_0x03280b88(*(undefined8 *)(lVar28 + 8),lVar37);
                    /* WARNING: Could not recover jumptable at 0x06605ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar22 = (uint *)(**(code **)(lVar28 + 8))(_UNK_017be7ac,plVar19,uVar21,lVar28);
  return puVar22;
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar32 = piVar32 + 4;
    if (uVar30 == 0) break;
LAB_064a6d1c:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_07779a20) {
      puVar20 = (undefined8 *)(lVar28 + (long)*piVar32 * 0x10 + 0x138);
      goto LAB_064a6d50;
    }
  }
LAB_064a6d34:
  puVar20 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_07779a20,0);
LAB_064a6d50:
                    /* WARNING: Could not recover jumptable at 0x064a6d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar22 = (uint *)(*(code *)*puVar20)(plVar19,uVar21,puVar20[1]);
  return puVar22;
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar32 = piVar32 + 4;
    if (uVar30 == 0) break;
LAB_06606018:
    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_077cea48) {
      puVar20 = (undefined8 *)(lVar28 + (long)(*piVar32 + 1) * 0x10 + 0x138);
      goto LAB_06606050;
    }
  }
LAB_06606030:
  puVar20 = (undefined8 *)func_0x03256b10(plVar34,*(long *)PTR_DAT_077cea48,1);
LAB_06606050:
                    /* WARNING: Could not recover jumptable at 0x06606064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar22 = (uint *)(*(code *)*puVar20)(plVar34,auVar47._8_8_,puVar20[1]);
  return puVar22;
LAB_04fba728:
  puVar17 = (uint *)(lVar28 + 0x10);
  *(long *)puVar17 = lVar33;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar17 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar17 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return puVar17;
}

