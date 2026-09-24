/* Ghidra 12.1.2 native pseudocode; RVA 0x6799370; MergeEngine.ECS.Systems.Items.UndoSystem.DisposeSystem; status ok */


/* WARNING: Possible PIC construction at 0x068994c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06899510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06899698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689971c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068998c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06899720) */
/* WARNING: Removing unreachable block (ram,0x06899728) */
/* WARNING: Removing unreachable block (ram,0x0689973c) */
/* WARNING: Removing unreachable block (ram,0x06899744) */
/* WARNING: Removing unreachable block (ram,0x0689976c) */
/* WARNING: Removing unreachable block (ram,0x06899750) */
/* WARNING: Removing unreachable block (ram,0x0689975c) */
/* WARNING: Removing unreachable block (ram,0x0689977c) */
/* WARNING: Removing unreachable block (ram,0x0689978c) */
/* WARNING: Removing unreachable block (ram,0x0689969c) */
/* WARNING: Removing unreachable block (ram,0x068996a4) */
/* WARNING: Removing unreachable block (ram,0x068996b8) */
/* WARNING: Removing unreachable block (ram,0x068996c0) */
/* WARNING: Removing unreachable block (ram,0x068996e8) */
/* WARNING: Removing unreachable block (ram,0x068996cc) */
/* WARNING: Removing unreachable block (ram,0x068996d8) */
/* WARNING: Removing unreachable block (ram,0x068996f8) */
/* WARNING: Removing unreachable block (ram,0x06899708) */
/* WARNING: Removing unreachable block (ram,0x06899514) */
/* WARNING: Removing unreachable block (ram,0x06899538) */
/* WARNING: Removing unreachable block (ram,0x06899574) */
/* WARNING: Removing unreachable block (ram,0x068994c8) */
/* WARNING: Removing unreachable block (ram,0x068994ec) */
/* WARNING: Removing unreachable block (ram,0x068998cc) */
/* WARNING: Removing unreachable block (ram,0x068998d4) */
/* WARNING: Removing unreachable block (ram,0x068998f0) */

undefined8 * MergeEngine_ECS_Systems_Items_UndoSystem__DisposeSystem(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 auVar22 [16];
  long alStack_100 [20];
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR_DAT_078107c8;
  puVar21 = PTR_DAT_078107c0;
  if ((bRam0000000007e28da4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078107c0);
    func_0x03280a18(PTR_DAT_077ccef8);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_078107f8);
    func_0x03280a18(PTR_DAT_077f1660);
    func_0x03280a18(PTR_DAT_07780508);
    func_0x03280a18(PTR_DAT_07810800);
    func_0x03280a18(PTR_DAT_07810808);
    func_0x03280a18(PTR_DAT_078107e0);
    func_0x03280a18(PTR_DAT_078107e8);
    func_0x03280a18(PTR_DAT_078107f0);
    func_0x03280a18(PTR_DAT_078107c8);
    bRam0000000007e28da4 = 1;
  }
  lVar17 = *(long *)(param_1 + 0x28);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar21);
  func_0x054221d4(uVar9,param_1,*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_078107f0;
  puVar1 = PTR_DAT_0774e758;
  lStack_48 = param_1;
  if (lVar17 != 0) {
    func_0x03ea6208(lVar17,uVar9,*(undefined8 *)PTR_DAT_07810800);
    lVar17 = *(long *)(param_1 + 0x28);
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x056ed730(uVar9,param_1,*(undefined8 *)puVar2,0);
    puVar21 = puVar1;
    unaff_x23 = puVar2;
    if (lVar17 != 0) {
      lVar12 = *(long *)PTR_DAT_077f1660;
      puStack_60 = (undefined *)0x68994c8;
      plVar13 = *(long **)(lVar12 + 0x38);
      uStack_58 = uVar9;
      lStack_50 = lVar17;
      if (plVar13 == (long *)0x0) {
        func_0x03256878(lVar12);
        plVar13 = *(long **)(lVar12 + 0x38);
      }
      lVar12 = *plVar13;
      alStack_100[0x12] = (long)puStack_60;
      puStack_60 = puVar1;
      puVar14 = *(undefined8 **)(lVar12 + 0x38);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_0774e558);
        puVar14 = *(undefined8 **)(lVar12 + 0x38);
        if (puVar14 == (undefined8 *)0x0) {
          func_0x03256878(lVar12);
          puVar14 = *(undefined8 **)(lVar12 + 0x38);
        }
      }
      uVar20 = *puVar14;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar20 = func_0x057a51c4(uVar20,0);
      puStack_60 = (undefined *)alStack_100[0x12];
      alStack_100[0x12] = 0;
      alStack_100[0x13] = 0;
      func_0x072a6c4c(alStack_100 + 0x12,uVar20,0,0);
      puVar14 = (undefined8 *)func_0x07286e40(lVar17,alStack_100[0x12],alStack_100[0x13],uVar9,1);
      return puVar14;
    }
  }
  auVar22 = func_0x03280cac();
  puVar14 = auVar22._0_8_;
  plVar8 = alStack_100 + 0x12;
  alStack_100[0x12] = 0x68995a0;
  plVar13 = (long *)0x7e28000;
  puStack_60 = puVar21;
  uStack_58 = uVar9;
  lStack_50 = 0;
  if ((bRam0000000007e28da5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810810);
    func_0x03280a18(PTR_DAT_077c15d0);
    func_0x03280a18(PTR_DAT_07810818);
    func_0x03280a18(PTR_DAT_07810820);
    bRam0000000007e28da5 = 1;
  }
  puVar10 = (undefined8 *)0x0;
  if (auVar22._8_8_ != 0) {
    puVar10 = puVar14 + 9;
    *puVar10 = *(undefined8 *)(auVar22._8_8_ + 0x10);
    func_0x032809c4(puVar10);
    puVar1 = PTR_DAT_07810810;
    plVar13 = (long *)*puVar10;
    if (plVar13 != (long *)0x0) {
      lVar17 = *plVar13;
      puVar18 = (undefined8 *)puVar14[0xb];
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07810810) {
            puVar10 = (undefined8 *)(lVar17 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_06899674;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07810810,4);
LAB_06899674:
      uVar9 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      puVar10 = (undefined8 *)0x0;
      puVar21 = puVar1;
      if (puVar18 != (undefined8 *)0x0) {
        lVar17 = *(long *)PTR_DAT_077c15d0;
        uVar20 = 0x689969c;
        puVar11 = puVar14;
        puVar14 = puVar18;
        goto SUB_043219ac;
      }
    }
  }
  puVar11 = (undefined8 *)func_0x03280cac();
  if ((bRam0000000007e28da6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810810);
    bRam0000000007e28da6 = 1;
  }
  plVar19 = (long *)puVar11[9];
  if (plVar19 != (long *)0x0) {
    lVar17 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07810810) {
          puVar18 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0689983c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar18 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_07810810,0);
LAB_0689983c:
    (*(code *)*puVar18)(plVar19,puVar18[1]);
  }
  uVar9 = 0x68997b4;
  plVar19 = alStack_100 + 0x12;
  while( true ) {
    plVar8 = (long *)((long)plVar19 + -0x20);
    *(undefined8 *)((long)plVar19 + -0x20) = uVar9;
    *(undefined8 **)((long)plVar19 + -0x10) = puVar10;
    *(undefined8 **)((long)plVar19 + -8) = puVar14;
    if ((bRam0000000007e28da7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c15d0);
      func_0x03280a18(PTR_DAT_07810818);
      func_0x03280a18(PTR_DAT_07810820);
      bRam0000000007e28da7 = 1;
    }
    puVar14 = puVar11 + 9;
    *puVar14 = 0;
    func_0x032809c4(puVar14,0);
    puVar18 = (undefined8 *)puVar11[0xb];
    if (puVar18 != (undefined8 *)0x0) break;
    auVar22 = func_0x03280cac();
    lVar17 = auVar22._8_8_;
    puVar18 = auVar22._0_8_;
    *(undefined8 *)((long)plVar19 + -0x40) = 0x6899910;
    *(long **)((long)plVar19 + -0x38) = plVar13;
    *(undefined8 **)((long)plVar19 + -0x30) = puVar14;
    *(undefined8 **)((long)plVar19 + -0x28) = puVar11;
    uVar9 = 0x7e28000;
    puVar14 = puVar18;
    if ((bRam0000000007e28da8 & 1) == 0) {
      puVar14 = (undefined8 *)func_0x03280a18(PTR_DAT_07810810);
      bRam0000000007e28da8 = 1;
    }
    if (puVar18[9] == 0) {
      return puVar14;
    }
    if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) || (puVar18[8] == 0)) {
LAB_068999fc:
      puVar14 = (undefined8 *)func_0x03280cac();
      puVar6 = PTR_DAT_07810840;
      puVar5 = PTR_DAT_07810838;
      puVar4 = PTR_DAT_07810830;
      puVar3 = PTR_DAT_07810828;
      puVar2 = PTR_DAT_077c15b8;
      puVar1 = PTR_DAT_077c15b0;
      *(undefined8 *)((long)plVar19 + -0x90) = 0x6899a00;
      *(undefined8 *)((long)plVar19 + -0x80) = unaff_x26;
      *(undefined8 *)((long)plVar19 + -0x78) = unaff_x25;
      *(undefined8 *)((long)plVar19 + -0x70) = unaff_x24;
      *(undefined **)((long)plVar19 + -0x68) = unaff_x23;
      *(undefined **)((long)plVar19 + -0x60) = puVar21;
      *(undefined8 *)((long)plVar19 + -0x58) = uVar9;
      *(long *)((long)plVar19 + -0x50) = lVar17;
      *(undefined8 **)((long)plVar19 + -0x48) = puVar18;
      if ((bRam0000000007e28da9 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810840);
        func_0x03280a18(PTR_DAT_077c15b8);
        func_0x03280a18(PTR_DAT_07810830);
        func_0x03280a18(PTR_DAT_077c15b0);
        func_0x03280a18(PTR_DAT_07810838);
        func_0x03280a18(PTR_DAT_07810828);
        bRam0000000007e28da9 = 1;
      }
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04321994(uVar9,0,*(undefined8 *)puVar4);
      puVar14[10] = uVar9;
      func_0x032809c4(puVar14 + 10,uVar9);
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x04321994(uVar9,0,*(undefined8 *)puVar2);
      puVar14[0xb] = uVar9;
      func_0x032809c4(puVar14 + 0xb,uVar9);
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x04321994(uVar9,0,*(undefined8 *)puVar6);
      puVar14[0xc] = uVar9;
      func_0x032809c4(puVar14 + 0xc,uVar9);
      return puVar14;
    }
    uVar20 = func_0x06760834(puVar18[8],*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x20),0);
    plVar13 = (long *)puVar18[9];
    uVar9 = 0;
    if (plVar13 == (long *)0x0) goto LAB_068999fc;
    lVar17 = *plVar13;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07810810) {
          puVar14 = (undefined8 *)(lVar17 + (long)(*piVar16 + 3) * 0x10 + 0x138);
          goto LAB_068999cc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar14 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07810810,3);
LAB_068999cc:
    puVar14 = (undefined8 *)(*(code *)*puVar14)(plVar13,uVar20,puVar14[1]);
    if (((ulong)puVar14 & 1) == 0) {
      return puVar14;
    }
    puVar10 = *(undefined8 **)((long)plVar19 + -0x30);
    puVar14 = *(undefined8 **)((long)plVar19 + -0x28);
    uVar9 = *(undefined8 *)((long)plVar19 + -0x40);
    plVar13 = *(long **)((long)plVar19 + -0x38);
    plVar19 = (long *)((long)plVar19 + -0x20);
    puVar11 = puVar18;
  }
  uVar9 = 0;
  lVar17 = *(long *)PTR_DAT_077c15d0;
  uVar20 = 0x68998cc;
SUB_043219ac:
  *(undefined8 *)((long)plVar8 + -0x30) = uVar20;
  *(undefined **)((long)plVar8 + -0x20) = puVar21;
  *(long **)((long)plVar8 + -0x18) = plVar13;
  *(undefined8 **)((long)plVar8 + -0x10) = puVar14;
  *(undefined8 **)((long)plVar8 + -8) = puVar11;
  plVar13 = (long *)func_0x039574b0(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x20));
  if (plVar13 == (long *)0x0) {
    auVar22 = func_0x03280cac();
    puVar14 = auVar22._0_8_;
    puVar7 = (undefined8 *)((long)plVar8 + -0x50);
    *(undefined8 *)((long)plVar8 + -0x50) = 0x4321a3c;
    *(undefined8 **)((long)plVar8 + -0x40) = puVar18;
    *(long *)((long)plVar8 + -0x38) = lVar17;
    puVar14[4] = auVar22._8_8_;
    func_0x032809c4();
    uVar9 = *(undefined8 *)((long)plVar8 + -0x38);
    plVar8 = (long *)((long)plVar8 + -0x30);
    uVar20 = *puVar7;
  }
  else {
    puVar14 = (undefined8 *)
              (**(code **)(*plVar13 + 0x1b8))
                        (plVar13,puVar18[4],uVar9,*(undefined8 *)(*plVar13 + 0x1c0));
    if (((ulong)puVar14 & 1) != 0) {
      return puVar14;
    }
    puVar18[4] = uVar9;
    func_0x032809c4(puVar18 + 4,uVar9);
    uVar9 = *(undefined8 *)((long)plVar8 + -8);
    uVar20 = *(undefined8 *)((long)plVar8 + -0x30);
    puVar14 = puVar18;
  }
  *(undefined8 *)((long)plVar8 + -0x10) = uVar20;
  *(undefined8 *)((long)plVar8 + -8) = uVar9;
  lVar17 = puVar14[2];
  puVar10 = puVar14;
  if (lVar17 != 0) {
    puVar10 = (undefined8 *)
              (**(code **)(lVar17 + 0x18))
                        (*(undefined8 *)(lVar17 + 0x40),puVar14[4],*(undefined8 *)(lVar17 + 0x28));
  }
  lVar17 = puVar14[3];
  if (lVar17 == 0) {
    return puVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x04d0f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar14 = (undefined8 *)
            (**(code **)(lVar17 + 0x18))
                      (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  return puVar14;
}

