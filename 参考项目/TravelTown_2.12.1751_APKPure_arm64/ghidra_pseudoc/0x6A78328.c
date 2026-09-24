/* Ghidra 12.1.2 native pseudocode; RVA 0x6A78328; Merger.MergeBoard.Systems.TimeLockSystem.HasOtherUnlockInProgress; status ok */

/* WARNING: Possible PIC construction at 0x06b78728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7872c) */

ulong Merger_MergeBoard_Systems_TimeLockSystem__HasOtherUnlockInProgress
                (undefined8 param_1,double *param_2,undefined8 *param_3,double *param_4,long param_5
                ,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double *pdVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  double *pdVar14;
  undefined1 *extraout_x1;
  undefined1 *puVar15;
  double *extraout_x1_00;
  double *extraout_x1_01;
  undefined8 *puVar16;
  double *pdVar17;
  double *pdVar18;
  bool bVar19;
  double dVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined8 unaff_x24;
  float extraout_s0;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  puVar1 = PTR_DAT_078316e0;
  lVar23 = 0x7e2a000;
  puVar21 = (undefined8 *)((ulong)param_4 & 0xffffffff);
  puVar16 = param_3;
  pdVar17 = param_4;
  if ((bRam0000000007e2a716 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078316e8);
    func_0x03280a18(PTR_DAT_078316f0);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078316f8);
    func_0x03280a18(PTR_DAT_07831700);
    func_0x03280a18(PTR_DAT_07831708);
    func_0x03280a18(PTR_DAT_07831710);
    func_0x03280a18(PTR_DAT_078316e0);
    bRam0000000007e2a716 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar10 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x057da5fc(lVar10,0);
  puVar7 = PTR_DAT_07831710;
  puVar6 = PTR_DAT_07831708;
  puVar5 = PTR_DAT_07831700;
  puVar4 = PTR_DAT_078316f8;
  puVar3 = PTR_DAT_078316e8;
  puVar2 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  if (lVar10 != 0) {
    *(double *)(lVar10 + 0x10) = (double)param_3;
    func_0x032809c4((double *)(lVar10 + 0x10),param_3);
    *(int *)(lVar10 + 0x18) = (int)param_4;
    dStack_b8 = param_2[1];
    dStack_c0 = *param_2;
    dStack_a8 = param_2[3];
    dStack_b0 = param_2[2];
    uVar11 = func_0x03d19e64(*(undefined8 *)puVar3);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x06015d08(uVar12,0,*(undefined8 *)puVar1,0);
    dStack_78 = dStack_b8;
    dStack_80 = dStack_c0;
    dStack_68 = dStack_a8;
    dStack_70 = dStack_b0;
    func_0x03e64e24(&uStack_a0,&dStack_80,uVar11,uVar12,*(undefined8 *)puVar6);
    uVar11 = func_0x04488114(&uStack_a0,*(undefined8 *)puVar5);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x0534f7f4(uVar12,lVar10,*(undefined8 *)puVar7,0);
    uVar9 = func_0x03d2a0c0(uVar11,uVar12,*(undefined8 *)PTR_DAT_078316f0);
    return (ulong)(uVar9 & 1);
  }
  uVar11 = 0x6b78508;
  func_0x03280cac();
  lVar10 = 0;
  pdVar8 = &dStack_c0;
  puVar15 = extraout_x1;
  while( true ) {
    puVar1 = PTR_DAT_07831718;
    *(undefined8 *)((long)pdVar8 + -0x30) = uVar11;
    *(long *)((long)pdVar8 + -0x28) = lVar23;
    *(long *)((long)pdVar8 + -0x20) = lVar10;
    *(undefined8 **)((long)pdVar8 + -0x18) = param_3;
    *(undefined8 **)((long)pdVar8 + -0x10) = puVar21;
    *(double **)((long)pdVar8 + -8) = param_2;
    pdVar18 = pdVar17;
    lVar23 = param_5;
    lVar10 = param_6;
    if ((bRam0000000007e2a717 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831720);
      func_0x03280a18(PTR_DAT_07831728);
      func_0x03280a18(PTR_DAT_07831730);
      func_0x03280a18(PTR_DAT_07831738);
      func_0x03280a18(PTR_DAT_07831718);
      bRam0000000007e2a717 = 1;
      lVar23 = param_5;
      lVar10 = param_6;
    }
    *(undefined1 *)(pdVar17 + 3) = 1;
    dVar20 = pdVar17[4];
    dVar27 = pdVar17[1];
    dVar26 = *pdVar17;
    dVar25 = pdVar17[3];
    dVar24 = pdVar17[2];
    puVar21 = *(undefined8 **)puVar1;
    *(double *)((long)pdVar8 + -0x70) = dVar20;
    *(double *)((long)pdVar8 + -0x88) = dVar27;
    *(double *)((long)pdVar8 + -0x90) = dVar26;
    *(double *)((long)pdVar8 + -0x78) = dVar25;
    *(double *)((long)pdVar8 + -0x80) = dVar24;
    *(double *)((long)pdVar8 + -0x58) = dVar27;
    *(double *)((long)pdVar8 + -0x60) = dVar26;
    *(double *)((long)pdVar8 + -0x48) = dVar25;
    *(double *)((long)pdVar8 + -0x50) = dVar24;
    *(double *)((long)pdVar8 + -0x40) = dVar20;
    func_0x03ec8a38((undefined1 *)((long)pdVar8 + -0x60),puVar16);
    puVar2 = PTR_DAT_07831730;
    puVar22 = puVar15;
    pdVar14 = pdVar17;
    if (puVar16 != (undefined8 *)0x0) {
      uVar13 = func_0x03d1c090(puVar16,*(undefined8 *)PTR_DAT_07831720);
      if ((uVar13 & 1) == 0) {
        puVar21 = *(undefined8 **)PTR_DAT_07831728;
        func_0x03d1df48(puVar16,0);
      }
      puVar22 = *(undefined1 **)(puVar15 + 0x10);
      pdVar14 = (double *)func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x06b9a6f8(pdVar14,0);
      if (pdVar14 != (double *)0x0) {
        pdVar14[2] = (double)puVar16;
        func_0x032809c4(pdVar14 + 2,puVar16);
        if (puVar22 != (undefined1 *)0x0) {
          uVar13 = func_0x03ec33e4(puVar22,pdVar14,*(undefined8 *)PTR_DAT_07831738);
          return uVar13;
        }
      }
    }
    pdVar17 = pdVar18;
    auVar29 = func_0x03280cac();
    param_3 = auVar29._8_8_;
    uVar13 = auVar29._0_8_;
    puVar15 = (undefined1 *)((long)pdVar8 + -0xf0);
    *(code **)((long)pdVar8 + -0xd0) =
         Merger_MergeBoard_Systems_TimeLockSystem__ProcessInteractionLockGroup;
    *(undefined8 *)((long)pdVar8 + -0xc0) = unaff_x24;
    *(undefined8 *)((long)pdVar8 + -0xb8) = 0x7e2a000;
    *(undefined **)((long)pdVar8 + -0xb0) = puVar1;
    *(double **)((long)pdVar8 + -0xa8) = pdVar14;
    *(undefined1 **)((long)pdVar8 + -0xa0) = puVar22;
    *(undefined8 **)((long)pdVar8 + -0x98) = puVar16;
    unaff_x24 = 0x7e2a000;
    puVar16 = puVar21;
    param_5 = lVar23;
    param_6 = lVar10;
    if ((bRam0000000007e2a712 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07831740);
      uVar13 = func_0x03280a18(PTR_DAT_07831748);
      bRam0000000007e2a712 = 1;
    }
    if (*(int *)((long)pdVar17 + 0x14) != 1) {
      return uVar13;
    }
    uVar13 = func_0x06b9c624(pdVar17,0);
    if ((uVar13 & 1) == 0) {
      return uVar13;
    }
    if (*(char *)(pdVar17 + 3) != '\0') {
      return uVar13;
    }
    if ((*(uint *)(lVar23 + 0x20) & (*(uint *)((long)pdVar17 + 0x1c) ^ 0xffffffff)) != 0) {
      *pdVar17 = 0.0;
      *(undefined1 *)(pdVar17 + 3) = 0;
      return uVar13;
    }
    if (lVar10 == 0) {
      func_0x03280cac();
      *(code **)((long)pdVar8 + -0x110) =
           Merger_MergeBoard_Systems_TimeLockSystem__UpdateCanBeUnlockedFlag;
      *(undefined8 **)((long)pdVar8 + -0x108) = param_3;
      *(undefined8 **)((long)pdVar8 + -0x100) = puVar21;
      *(double **)((long)pdVar8 + -0xf8) = pdVar17;
      if ((bRam0000000007e2a713 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07831748);
        bRam0000000007e2a713 = 1;
      }
      if (puVar16 == (undefined8 *)0x0) {
        uVar13 = func_0x03280cac();
        if ((*(char *)(extraout_x1_01 + 3) != '\0') &&
           (dVar20 = *extraout_x1_01, *extraout_x1_01 = dVar20 - (double)extraout_s0,
           dVar20 - (double)extraout_s0 <= 0.0)) {
          *extraout_x1_01 = 0.0;
          *(undefined1 *)(extraout_x1_01 + 3) = 0;
        }
        return uVar13;
      }
      uVar13 = func_0x053bbf78(puVar16,*(undefined4 *)((long)extraout_x1_00 + 0x14),
                               *(undefined8 *)PTR_DAT_07831748);
      if (((uVar13 & 1) == 0) && (*(char *)(extraout_x1_00 + 3) == '\0')) {
        bVar19 = 0.0 < *extraout_x1_00;
      }
      else {
        bVar19 = false;
      }
      *(bool *)((long)extraout_x1_00 + 0x19) = bVar19;
      return uVar13;
    }
    uVar13 = func_0x053bbf78(lVar10,*(undefined4 *)((long)pdVar17 + 0x14),
                             *(undefined8 *)PTR_DAT_07831748);
    if ((uVar13 & 1) != 0) {
      return uVar13;
    }
    if (*pdVar17 <= 0.0) break;
    func_0x053bca88(lVar10,*(undefined4 *)((long)pdVar17 + 0x14),*(undefined8 *)PTR_DAT_07831740);
    uVar11 = *param_3;
    uVar28 = param_3[3];
    uVar12 = param_3[2];
    *(undefined8 *)((long)pdVar8 + -0xe8) = param_3[1];
    *(undefined8 *)((long)pdVar8 + -0xf0) = uVar11;
    *(undefined8 *)((long)pdVar8 + -0xd8) = uVar28;
    *(undefined8 *)((long)pdVar8 + -0xe0) = uVar12;
    uVar11 = 0x6b7872c;
    pdVar8 = (double *)((long)pdVar8 + -0xf0);
    puVar16 = puVar21;
    param_2 = pdVar17;
  }
  return uVar13;
}

