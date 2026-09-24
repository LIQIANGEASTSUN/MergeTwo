/* Ghidra 12.1.2 native pseudocode; RVA 0x67995A0; MergeEngine.ECS.Systems.Items.UndoSystem.SetUndo; status ok */


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
/* WARNING: Removing unreachable block (ram,0x068998cc) */
/* WARNING: Removing unreachable block (ram,0x068998d4) */
/* WARNING: Removing unreachable block (ram,0x068998f0) */

undefined8 * MergeEngine_ECS_Systems_Items_UndoSystem__SetUndo(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long alStack_c0 [18];
  
  puVar8 = &stack0xffffffffffffffd0;
  plVar18 = (long *)0x7e28000;
  if ((bRam0000000007e28da5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810810);
    func_0x03280a18(PTR_DAT_077c15d0);
    func_0x03280a18(PTR_DAT_07810818);
    func_0x03280a18(PTR_DAT_07810820);
    bRam0000000007e28da5 = 1;
  }
  puVar10 = (undefined8 *)0x0;
  if (param_2 != 0) {
    puVar10 = param_1 + 9;
    *puVar10 = *(undefined8 *)(param_2 + 0x10);
    func_0x032809c4(puVar10);
    puVar1 = PTR_DAT_07810810;
    plVar18 = (long *)*puVar10;
    if (plVar18 != (long *)0x0) {
      lVar13 = *plVar18;
      puVar16 = (undefined8 *)param_1[0xb];
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07810810) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06899674;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07810810,4);
LAB_06899674:
      uVar11 = (*(code *)*puVar10)(plVar18,puVar10[1]);
      puVar10 = (undefined8 *)0x0;
      unaff_x22 = puVar1;
      if (puVar16 != (undefined8 *)0x0) {
        lVar13 = *(long *)PTR_DAT_077c15d0;
        uVar19 = 0x689969c;
        puVar12 = param_1;
        puVar10 = puVar16;
        goto SUB_043219ac;
      }
    }
  }
  puVar12 = (undefined8 *)func_0x03280cac();
  if ((bRam0000000007e28da6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810810);
    bRam0000000007e28da6 = 1;
  }
  plVar17 = (long *)puVar12[9];
  if (plVar17 != (long *)0x0) {
    lVar13 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07810810) {
          puVar16 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0689983c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_07810810,0);
LAB_0689983c:
    (*(code *)*puVar16)(plVar17,puVar16[1]);
  }
  uVar11 = 0x68997b4;
  puVar9 = &stack0xffffffffffffffd0;
  while( true ) {
    puVar8 = puVar9 + -0x20;
    *(undefined8 *)(puVar9 + -0x20) = uVar11;
    *(undefined8 **)(puVar9 + -0x10) = puVar10;
    *(undefined8 **)(puVar9 + -8) = param_1;
    if ((bRam0000000007e28da7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c15d0);
      func_0x03280a18(PTR_DAT_07810818);
      func_0x03280a18(PTR_DAT_07810820);
      bRam0000000007e28da7 = 1;
    }
    puVar10 = puVar12 + 9;
    *puVar10 = 0;
    func_0x032809c4(puVar10,0);
    puVar16 = (undefined8 *)puVar12[0xb];
    if (puVar16 != (undefined8 *)0x0) break;
    auVar20 = func_0x03280cac();
    lVar13 = auVar20._8_8_;
    puVar16 = auVar20._0_8_;
    *(undefined8 *)(puVar9 + -0x40) = 0x6899910;
    *(long **)(puVar9 + -0x38) = plVar18;
    *(undefined8 **)(puVar9 + -0x30) = puVar10;
    *(undefined8 **)(puVar9 + -0x28) = puVar12;
    uVar11 = 0x7e28000;
    puVar10 = puVar16;
    if ((bRam0000000007e28da8 & 1) == 0) {
      puVar10 = (undefined8 *)func_0x03280a18(PTR_DAT_07810810);
      bRam0000000007e28da8 = 1;
    }
    if (puVar16[9] == 0) {
      return puVar10;
    }
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) || (puVar16[8] == 0)) {
LAB_068999fc:
      puVar10 = (undefined8 *)func_0x03280cac();
      puVar6 = PTR_DAT_07810840;
      puVar5 = PTR_DAT_07810838;
      puVar4 = PTR_DAT_07810830;
      puVar3 = PTR_DAT_07810828;
      puVar2 = PTR_DAT_077c15b8;
      puVar1 = PTR_DAT_077c15b0;
      *(undefined8 *)(puVar9 + -0x90) = 0x6899a00;
      *(undefined8 *)(puVar9 + -0x80) = unaff_x26;
      *(undefined8 *)(puVar9 + -0x78) = unaff_x25;
      *(undefined8 *)(puVar9 + -0x70) = unaff_x24;
      *(undefined8 *)(puVar9 + -0x68) = unaff_x23;
      *(undefined **)(puVar9 + -0x60) = unaff_x22;
      *(undefined8 *)(puVar9 + -0x58) = uVar11;
      *(long *)(puVar9 + -0x50) = lVar13;
      *(undefined8 **)(puVar9 + -0x48) = puVar16;
      if ((bRam0000000007e28da9 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07810840);
        func_0x03280a18(PTR_DAT_077c15b8);
        func_0x03280a18(PTR_DAT_07810830);
        func_0x03280a18(PTR_DAT_077c15b0);
        func_0x03280a18(PTR_DAT_07810838);
        func_0x03280a18(PTR_DAT_07810828);
        bRam0000000007e28da9 = 1;
      }
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04321994(uVar11,0,*(undefined8 *)puVar4);
      puVar10[10] = uVar11;
      func_0x032809c4(puVar10 + 10,uVar11);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x04321994(uVar11,0,*(undefined8 *)puVar2);
      puVar10[0xb] = uVar11;
      func_0x032809c4(puVar10 + 0xb,uVar11);
      uVar11 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x04321994(uVar11,0,*(undefined8 *)puVar6);
      puVar10[0xc] = uVar11;
      func_0x032809c4(puVar10 + 0xc,uVar11);
      return puVar10;
    }
    uVar19 = func_0x06760834(puVar16[8],*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x20),0);
    plVar18 = (long *)puVar16[9];
    uVar11 = 0;
    if (plVar18 == (long *)0x0) goto LAB_068999fc;
    lVar13 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07810810) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_068999cc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07810810,3);
LAB_068999cc:
    puVar10 = (undefined8 *)(*(code *)*puVar10)(plVar18,uVar19,puVar10[1]);
    if (((ulong)puVar10 & 1) == 0) {
      return puVar10;
    }
    puVar10 = *(undefined8 **)(puVar9 + -0x30);
    param_1 = *(undefined8 **)(puVar9 + -0x28);
    uVar11 = *(undefined8 *)(puVar9 + -0x40);
    plVar18 = *(long **)(puVar9 + -0x38);
    puVar9 = puVar9 + -0x20;
    puVar12 = puVar16;
  }
  uVar11 = 0;
  lVar13 = *(long *)PTR_DAT_077c15d0;
  uVar19 = 0x68998cc;
SUB_043219ac:
  *(undefined8 *)(puVar8 + -0x30) = uVar19;
  *(undefined **)(puVar8 + -0x20) = unaff_x22;
  *(long **)(puVar8 + -0x18) = plVar18;
  *(undefined8 **)(puVar8 + -0x10) = puVar10;
  *(undefined8 **)(puVar8 + -8) = puVar12;
  plVar18 = (long *)func_0x039574b0(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20));
  if (plVar18 == (long *)0x0) {
    auVar20 = func_0x03280cac();
    puVar10 = auVar20._0_8_;
    puVar7 = (undefined8 *)(puVar8 + -0x50);
    *(undefined8 *)(puVar8 + -0x50) = 0x4321a3c;
    *(undefined8 **)(puVar8 + -0x40) = puVar16;
    *(long *)(puVar8 + -0x38) = lVar13;
    puVar10[4] = auVar20._8_8_;
    func_0x032809c4();
    uVar11 = *(undefined8 *)(puVar8 + -0x38);
    puVar8 = puVar8 + -0x30;
    uVar19 = *puVar7;
  }
  else {
    puVar10 = (undefined8 *)
              (**(code **)(*plVar18 + 0x1b8))
                        (plVar18,puVar16[4],uVar11,*(undefined8 *)(*plVar18 + 0x1c0));
    if (((ulong)puVar10 & 1) != 0) {
      return puVar10;
    }
    puVar16[4] = uVar11;
    func_0x032809c4(puVar16 + 4,uVar11);
    uVar11 = *(undefined8 *)(puVar8 + -8);
    uVar19 = *(undefined8 *)(puVar8 + -0x30);
    puVar10 = puVar16;
  }
  *(undefined8 *)(puVar8 + -0x10) = uVar19;
  *(undefined8 *)(puVar8 + -8) = uVar11;
  lVar13 = puVar10[2];
  puVar16 = puVar10;
  if (lVar13 != 0) {
    puVar16 = (undefined8 *)
              (**(code **)(lVar13 + 0x18))
                        (*(undefined8 *)(lVar13 + 0x40),puVar10[4],*(undefined8 *)(lVar13 + 0x28));
  }
  lVar13 = puVar10[3];
  if (lVar13 == 0) {
    return puVar16;
  }
                    /* WARNING: Could not recover jumptable at 0x04d0f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar10 = (undefined8 *)
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
  return puVar10;
}

