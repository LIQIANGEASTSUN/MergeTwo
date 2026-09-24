/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9B560; Merger.MergeBoard.Controller.BoardController.TickSystems; status ok */

/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b838) */
/* WARNING: Removing unreachable block (ram,0x06b9b888) */
/* WARNING: Removing unreachable block (ram,0x06b9b890) */
/* WARNING: Removing unreachable block (ram,0x06b9b8a8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b8d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8bc) */
/* WARNING: Removing unreachable block (ram,0x06b9b8c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b8e8) */
/* WARNING: Removing unreachable block (ram,0x06b9b904) */
/* WARNING: Removing unreachable block (ram,0x06b9b928) */
/* WARNING: Removing unreachable block (ram,0x06b9b930) */
/* WARNING: Removing unreachable block (ram,0x06b9b958) */
/* WARNING: Removing unreachable block (ram,0x06b9b93c) */
/* WARNING: Removing unreachable block (ram,0x06b9b948) */
/* WARNING: Removing unreachable block (ram,0x06b9b968) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b75c) */
/* WARNING: Removing unreachable block (ram,0x06b9b788) */
/* WARNING: Removing unreachable block (ram,0x06b9b794) */
/* WARNING: Removing unreachable block (ram,0x06b9b7b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba5c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */

void Merger_MergeBoard_Controller_BoardController__TickSystems(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong unaff_x22;
  long *plVar13;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x30;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    uVar10 = 0x7e2a000;
    if ((bRam0000000007e2a83d & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c07b8);
      bRam0000000007e2a83d = 1;
    }
    if ((char)param_1[8] != '\0') {
      return;
    }
    plVar13 = (long *)param_1[3];
    if (plVar13 == (long *)0x0) break;
    lVar7 = *plVar13;
    lVar11 = param_1[7];
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c07b8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b9b60c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
    uVar6 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    uVar10 = 0;
    if (lVar11 == 0) break;
    uVar10 = func_0x06015720(lVar11,param_2,uVar6,0);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if ((bRam0000000007e2a83f & 1) == 0) {
      func_0x03280a18(PTR_DAT_07832798);
      bRam0000000007e2a83f = 1;
    }
    puVar2 = PTR_DAT_07832798;
    lVar7 = param_1[5];
    plVar13 = param_1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((int)uVar1 < 1) {
        return;
      }
      unaff_x22 = 0;
      while (uVar12 = (uint)unaff_x22, unaff_x23 = puVar2, uVar12 < uVar1) {
        plVar13 = *(long **)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
        if (plVar13 == (long *)0x0) goto LAB_06b9bb48;
        lVar11 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b9bb14;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar2,0);
LAB_06b9bb14:
        (*(code *)*puVar5)(plVar13,uVar10,puVar5[1]);
        uVar1 = *(uint *)(lVar7 + 0x18);
        unaff_x22 = (ulong)(uVar12 + 1);
        if ((int)uVar1 <= (int)(uVar12 + 1)) {
          return;
        }
      }
      func_0x03280cb4();
    }
LAB_06b9bb48:
    param_1 = (long *)func_0x03280cac();
    puVar2 = PTR_DAT_07779710;
    puVar4 = (undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x6b9bb4c;
    *(long *)((long)register0x00000008 + -0x48) = lVar7;
    *(long **)((long)register0x00000008 + -0x40) = plVar13;
    *(undefined8 *)((long)register0x00000008 + -0x38) = uVar10;
    if ((bRam0000000007e2a83e & 1) == 0) {
      func_0x03280a18(PTR_DAT_078327a0);
      func_0x03280a18(PTR_DAT_07779710);
      bRam0000000007e2a83e = 1;
    }
    param_2 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x060157bc(param_2,0);
    if (param_2 == 0) {
      func_0x03280cac();
      return;
    }
    func_0x03ec31a8(extraout_d0,param_2,*(undefined8 *)PTR_DAT_078327a0);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_d8 = *puVar4;
  }
  func_0x03280cac();
  puVar3 = PTR_DAT_07832768;
  puVar2 = PTR_DAT_07779710;
  *(code **)((long)register0x00000008 + -0x70) =
       Merger_MergeBoard_Controller_BoardController__ExtractItemFromFeedingCombination;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x50) = plVar13;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar10;
  *(long *)((long)register0x00000008 + -0x40) = param_2;
  *(long **)((long)register0x00000008 + -0x38) = param_1;
  if ((bRam0000000007e2a83a & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832768);
    func_0x03280a18(PTR_DAT_07832770);
    func_0x03280a18(PTR_DAT_07779710);
    bRam0000000007e2a83a = 1;
  }
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x060157bc(uVar10,0);
  func_0x03280ca0(*(undefined8 *)puVar3);
  return;
}

