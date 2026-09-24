/* Ghidra 12.1.2 native pseudocode; RVA 0x46542AC; MergeEngine.Util.TwoDArray<T>.FillEmptyPositions; status ok */


ulong MergeEngine_Util_TwoDArray_T___FillEmptyPositions(ulong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lStack_108;
  undefined8 uStack_38;
  
  uVar6 = param_1;
  if ((bRam0000000007e196da & 1) == 0) {
    uVar6 = func_0x03280a18(PTR_DAT_0777ece0);
    bRam0000000007e196da = 1;
  }
  puVar4 = PTR_DAT_0777ece0;
  iVar10 = *(int *)(param_1 + 0x14);
  if (0 < iVar10) {
    iVar13 = *(int *)(param_1 + 0x10);
    uVar15 = 0;
    do {
      if (0 < iVar13) {
        iVar10 = 0;
        do {
          lVar16 = *(long *)(param_1 + 0x20);
          uStack_38 = 0;
          uVar12 = uVar15;
          uVar6 = func_0x069fdc94(&uStack_38,iVar10,uVar15,0);
          if (lVar16 == 0) {
LAB_047543b0:
            auVar18 = func_0x03280cac();
            lVar16 = auVar18._0_8_;
            uVar2 = *(undefined4 *)(lVar16 + 0x14);
            lVar11 = *(long *)(*(long *)(*(long *)(auVar18._8_8_ + 0x20) + 0xc0) + 0x18);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = func_0x0325681c();
            }
            uVar7 = func_0x03280afc(lVar11,uVar2);
            *(undefined8 *)(lVar16 + 0x18) = uVar7;
            uVar6 = func_0x032809c4((undefined8 *)(lVar16 + 0x18));
            if (*(int *)(lVar16 + 0x14) < 1) {
              return uVar6;
            }
            uVar6 = 0;
            lVar11 = 0x20;
            goto LAB_04754418;
          }
          lVar11 = *(long *)(lVar16 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_047543b0;
          uVar3 = *(uint *)(lVar16 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = uStack_38;
          }
          else {
            uVar6 = func_0x040cec28(lVar16,uStack_38,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          iVar13 = *(int *)(param_1 + 0x10);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar13);
        iVar10 = *(int *)(param_1 + 0x14);
      }
      uVar3 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar3;
    } while ((int)uVar3 < iVar10);
  }
  return uVar6;
LAB_04754418:
  plVar17 = *(long **)(lVar16 + 0x18);
  uVar2 = *(undefined4 *)(lVar16 + 0x10);
  lVar14 = *(long *)(*(long *)(*(long *)(auVar18._8_8_ + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = func_0x0325681c();
  }
  lVar14 = func_0x03280afc(lVar14,uVar2);
  if (plVar17 == (long *)0x0) {
    func_0x03280cac();
LAB_047544a8:
    func_0x03280cb4();
LAB_047544ac:
    uVar7 = func_0x03280cd0();
    auVar18 = func_0x03280b7c(uVar7,0);
    lVar16 = *(long *)(auVar18._0_8_ + 0x18);
    if (lVar16 == 0) {
LAB_04754504:
      func_0x03280cac();
    }
    else if (auVar18._12_4_ < *(uint *)(lVar16 + 0x18)) {
      lVar16 = *(long *)(lVar16 + (auVar18._8_8_ >> 0x20) * 8 + 0x20);
      if (lVar16 == 0) goto LAB_04754504;
      if (auVar18._8_4_ < *(uint *)(lVar16 + 0x18)) {
        return *(ulong *)(lVar16 + ((auVar18._8_8_ << 0x20) >> 0x1d) + 0x20);
      }
    }
    auVar18 = func_0x03280cb4();
    lVar11 = auVar18._8_8_;
    lVar16 = auVar18._0_8_;
    uVar6 = uVar12;
    if ((bRam0000000007e196db & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ece0);
      func_0x03280a18(PTR_DAT_0777ece8);
      func_0x03280a18(PTR_DAT_0777ecf0);
      bRam0000000007e196db = 1;
    }
    lVar14 = *(long *)(lVar16 + 0x18);
    if (lVar14 == 0) {
LAB_0475465c:
      func_0x03280cac();
    }
    else if (auVar18._12_4_ < *(uint *)(lVar14 + 0x18)) {
      lVar14 = *(long *)(lVar14 + (lVar11 >> 0x20) * 8 + 0x20);
      if (lVar14 != 0) {
        if (*(uint *)(lVar14 + 0x18) <= auVar18._8_4_) goto LAB_04754660;
        puVar9 = (ulong *)(lVar14 + ((lVar11 << 0x20) >> 0x1d) + 0x20);
        *puVar9 = uVar12;
        func_0x032809c4(puVar9,uVar12);
        lVar14 = *(long *)(lVar16 + 0x20);
        if (lVar14 != 0) {
          if (uVar12 != 0) {
            func_0x040d028c(lVar14,lVar11,*(undefined8 *)PTR_DAT_0777ecf0);
            return 1;
          }
          uVar6 = *(ulong *)PTR_DAT_0777ece8;
          uVar15 = func_0x040cefa0(lVar14,lVar11);
          if ((uVar15 & 1) != 0) {
            return 0;
          }
          lVar16 = *(long *)(lVar16 + 0x20);
          if (lVar16 != 0) {
            lVar14 = *(long *)(lVar16 + 0x10);
            lVar8 = *(long *)PTR_DAT_0777ece0;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar3 = *(uint *)(lVar16 + 0x18);
              if (uVar3 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar3 + 1;
                *(long *)(lVar14 + (long)(int)uVar3 * 8 + 0x20) = lVar11;
                return 1;
              }
              func_0x040cec28(lVar16,lVar11,
                              *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              return 1;
            }
          }
        }
      }
      goto LAB_0475465c;
    }
LAB_04754660:
    auVar18 = func_0x03280cb4();
    puVar5 = PTR_DAT_0777ecd0;
    puVar4 = PTR_DAT_0777ecc8;
    lVar16 = auVar18._0_8_;
    if ((bRam0000000007e196dc & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777ece0);
      func_0x03280a18(PTR_DAT_0777ecd0);
      func_0x03280a18(PTR_DAT_0777ecc8);
      bRam0000000007e196dc = 1;
    }
    lStack_108 = 0;
    uVar15 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x040ce3d4(uVar15,*(undefined8 *)puVar5);
    puVar4 = PTR_DAT_0777ece0;
    lVar11 = 0x30;
    if ((uVar6 & 1) == 0) {
      lVar11 = 0x28;
    }
    lVar11 = *(long *)(lVar16 + lVar11);
    if (lVar11 == 0) goto LAB_047547f0;
    if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
      return uVar15;
    }
    uVar6 = 0;
    uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    goto LAB_04754720;
  }
  if ((lVar14 != 0) &&
     (lVar8 = func_0x03280b90(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0))
  goto LAB_047544ac;
  if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_047544a8;
  *(long *)((long)plVar17 + lVar11) = lVar14;
  uVar15 = func_0x032809c4((long *)((long)plVar17 + lVar11),lVar14);
  uVar6 = uVar6 + 1;
  lVar11 = lVar11 + 8;
  if ((long)*(int *)(lVar16 + 0x14) <= (long)uVar6) {
    return uVar15;
  }
  goto LAB_04754418;
LAB_04754720:
  if (uVar12 <= uVar6) {
    func_0x03280cb4();
LAB_047547f0:
    auVar18 = func_0x03280cac();
    if (-1 < auVar18._8_4_) {
      uVar6 = 0;
      if ((-1 < auVar18._8_8_) && (auVar18._8_4_ < *(int *)(auVar18._0_8_ + 0x10))) {
        uVar6 = (ulong)(auVar18._12_4_ < *(int *)(auVar18._0_8_ + 0x14));
      }
      return uVar6;
    }
    return 0;
  }
  piVar1 = (int *)(lVar11 + 0x20 + uVar6 * 8);
  func_0x069fdc94(&lStack_108,*piVar1 + auVar18._8_4_,piVar1[1] + auVar18._12_4_,0);
  if ((((-1 < (int)lStack_108) && (-1 < lStack_108)) && ((int)lStack_108 < *(int *)(lVar16 + 0x10)))
     && ((int)((ulong)lStack_108 >> 0x20) < *(int *)(lVar16 + 0x14))) {
    if (uVar15 == 0) goto LAB_047547f0;
    lVar14 = *(long *)(uVar15 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(uVar15 + 0x1c) = *(int *)(uVar15 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_047547f0;
    uVar3 = *(uint *)(uVar15 + 0x18);
    if (uVar3 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(uVar15 + 0x18) = uVar3 + 1;
      *(long *)(lVar14 + (long)(int)uVar3 * 8 + 0x20) = lStack_108;
    }
    else {
      func_0x040cec28(uVar15,lStack_108,
                      *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
  uVar6 = uVar6 + 1;
  if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar6) {
    return uVar15;
  }
  goto LAB_04754720;
}

