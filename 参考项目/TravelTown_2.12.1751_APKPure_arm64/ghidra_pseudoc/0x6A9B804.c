/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9B804; Merger.MergeBoard.Controller.BoardController.HandleCombinationVerification; status ok */

/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b75c) */
/* WARNING: Removing unreachable block (ram,0x06b9b788) */
/* WARNING: Removing unreachable block (ram,0x06b9b794) */
/* WARNING: Removing unreachable block (ram,0x06b9b7b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */

void Merger_MergeBoard_Controller_BoardController__HandleCombinationVerification
               (long param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  undefined *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined1 auVar20 [16];
  
  puVar5 = &stack0xffffffffffffffb0;
  puVar17 = (undefined *)(ulong)param_5;
  param_4 = param_4 & 0xffffffff;
  param_3 = param_3 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  if ((bRam0000000007e2a83c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c07b8);
    func_0x03280a18(PTR_DAT_07832788);
    func_0x03280a18(PTR_DAT_07832758);
    func_0x03280a18(PTR_DAT_07832790);
    func_0x03280a18(PTR_DAT_07832760);
    func_0x03280a18(PTR_DAT_07779710);
    bRam0000000007e2a83c = 1;
  }
  puVar2 = PTR_DAT_077c07b8;
  plVar18 = *(long **)(param_1 + 0x18);
  if (plVar18 != (long *)0x0) {
    lVar11 = *plVar18;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c07b8) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_06b9b8e8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c07b8,1);
LAB_06b9b8e8:
    uVar9 = (*(code *)*puVar8)(plVar18,puVar8[1]);
    func_0x06b98b30(uVar9,param_3);
    puVar4 = PTR_DAT_07832788;
    puVar3 = PTR_DAT_07779710;
    plVar19 = *(long **)(param_1 + 0x18);
    if (plVar19 != (long *)0x0) {
      lVar11 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_06b9b968;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar2,1);
LAB_06b9b968:
      uVar9 = (*(code *)*puVar8)(plVar19,puVar8[1]);
      func_0x06b98b30(uVar9,param_4);
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x060157bc(uVar9,0);
      func_0x03280ca0(*(undefined8 *)puVar4);
      return;
    }
  }
  uVar9 = 0x6b9ba60;
  auVar20 = func_0x03280cac();
  do {
    plVar19 = auVar20._0_8_;
    *(undefined8 *)(puVar5 + -0x30) = uVar9;
    *(undefined **)(puVar5 + -0x28) = puVar17;
    *(ulong *)(puVar5 + -0x20) = param_2;
    *(ulong *)(puVar5 + -0x18) = param_3;
    *(ulong *)(puVar5 + -0x10) = param_4;
    *(long *)(puVar5 + -8) = param_1;
    if ((bRam0000000007e2a83f & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832798);
      bRam0000000007e2a83f = 1;
    }
    puVar2 = PTR_DAT_07832798;
    lVar11 = plVar19[5];
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar1 < 1) {
        return;
      }
      param_2 = 0;
      while (uVar16 = (uint)param_2, puVar17 = puVar2, uVar16 < uVar1) {
        plVar19 = *(long **)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
        if (plVar19 == (long *)0x0) goto LAB_06b9bb48;
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06b9bb14;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar2,0);
LAB_06b9bb14:
        (*(code *)*puVar8)(plVar19,auVar20._8_8_,puVar8[1]);
        uVar1 = *(uint *)(lVar11 + 0x18);
        param_2 = (ulong)(uVar16 + 1);
        if ((int)uVar1 <= (int)(uVar16 + 1)) {
          return;
        }
      }
      func_0x03280cb4();
    }
LAB_06b9bb48:
    lVar12 = func_0x03280cac();
    puVar2 = PTR_DAT_07779710;
    puVar6 = (undefined8 *)(puVar5 + -0x60);
    *(undefined8 *)(puVar5 + -0x60) = unaff_d8;
    *(undefined8 *)(puVar5 + -0x50) = 0x6b9bb4c;
    *(long *)(puVar5 + -0x48) = lVar11;
    *(long **)(puVar5 + -0x40) = plVar19;
    *(long *)(puVar5 + -0x38) = auVar20._8_8_;
    if ((bRam0000000007e2a83e & 1) == 0) {
      func_0x03280a18(PTR_DAT_078327a0);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83e = 1;
    }
    lVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x060157bc(lVar11,0);
    if (lVar11 == 0) {
      func_0x03280cac();
      return;
    }
    func_0x03ec31a8(extraout_d0,lVar11,*(undefined8 *)PTR_DAT_078327a0);
    unaff_d8 = *(undefined8 *)(puVar5 + -0x60);
    *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x50);
    *(ulong *)(puVar5 + -0x50) = param_2;
    *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
    *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
    *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
    uVar9 = 0x7e2a000;
    if ((bRam0000000007e2a83d & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c07b8);
      bRam0000000007e2a83d = 1;
    }
    if (*(char *)(lVar12 + 0x40) != '\0') {
      return;
    }
    plVar19 = *(long **)(lVar12 + 0x18);
    if (plVar19 == (long *)0x0) {
LAB_06b9b648:
      func_0x03280cac();
      puVar3 = PTR_DAT_07832768;
      puVar2 = PTR_DAT_07779710;
      *(code **)(puVar5 + -0xa0) =
           Merger_MergeBoard_Controller_BoardController__ExtractItemFromFeedingCombination;
      *(long **)(puVar5 + -0x90) = plVar18;
      *(undefined **)(puVar5 + -0x88) = puVar17;
      *(long **)(puVar5 + -0x80) = plVar19;
      *(undefined8 *)(puVar5 + -0x78) = uVar9;
      *(long *)(puVar5 + -0x70) = lVar11;
      *(long *)(puVar5 + -0x68) = lVar12;
      if ((bRam0000000007e2a83a & 1) == 0) {
        func_0x03280a18(PTR_DAT_07832768);
        func_0x03280a18(PTR_DAT_07832770);
        func_0x03280a18(PTR_DAT_07779710);
        bRam0000000007e2a83a = 1;
      }
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x060157bc(uVar9,0);
      func_0x03280ca0(*(undefined8 *)puVar3);
      return;
    }
    lVar10 = *plVar19;
    lVar15 = *(long *)(lVar12 + 0x38);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c07b8) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b9b60c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
    uVar7 = (*(code *)*puVar8)(plVar19,puVar8[1]);
    uVar9 = 0;
    if (lVar15 == 0) goto LAB_06b9b648;
    uVar9 = func_0x06015720(lVar15,lVar11,uVar7,0);
    auVar20._8_8_ = uVar9;
    auVar20._0_8_ = lVar12;
    param_4 = *(ulong *)(puVar5 + -0x40);
    param_1 = *(long *)(puVar5 + -0x38);
    param_2 = *(ulong *)(puVar5 + -0x50);
    param_3 = *(ulong *)(puVar5 + -0x48);
    puVar5 = puVar5 + -0x30;
    uVar9 = *puVar6;
  } while( true );
}

