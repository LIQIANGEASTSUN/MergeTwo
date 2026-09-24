/* Ghidra 12.1.2 native pseudocode; RVA 0x46543B4; MergeEngine.Util.TwoDArray<T>.CreateArray; status ok */


ulong MergeEngine_Util_TwoDArray_T___CreateArray(long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_c8;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = func_0x0325681c();
  }
  uVar7 = func_0x03280afc(lVar6,uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  uVar8 = func_0x032809c4((undefined8 *)(param_1 + 0x18));
  if (0 < *(int *)(param_1 + 0x14)) {
    uVar14 = 0;
    lVar6 = 0x20;
    do {
      plVar15 = *(long **)(param_1 + 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      lVar9 = func_0x03280afc(lVar9,uVar2);
      if (plVar15 == (long *)0x0) {
        func_0x03280cac();
LAB_047544a8:
        func_0x03280cb4();
LAB_047544ac:
        uVar7 = func_0x03280cd0();
        auVar16 = func_0x03280b7c(uVar7,0);
        lVar6 = *(long *)(auVar16._0_8_ + 0x18);
        if (lVar6 == 0) {
LAB_04754504:
          func_0x03280cac();
        }
        else if (auVar16._12_4_ < *(uint *)(lVar6 + 0x18)) {
          lVar6 = *(long *)(lVar6 + (auVar16._8_8_ >> 0x20) * 8 + 0x20);
          if (lVar6 == 0) goto LAB_04754504;
          if (auVar16._8_4_ < *(uint *)(lVar6 + 0x18)) {
            return *(ulong *)(lVar6 + ((auVar16._8_8_ << 0x20) >> 0x1d) + 0x20);
          }
        }
        auVar16 = func_0x03280cb4();
        lVar9 = auVar16._8_8_;
        lVar6 = auVar16._0_8_;
        uVar8 = param_3;
        if ((bRam0000000007e196db & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ece0);
          func_0x03280a18(PTR_DAT_0777ece8);
          func_0x03280a18(PTR_DAT_0777ecf0);
          bRam0000000007e196db = 1;
        }
        lVar10 = *(long *)(lVar6 + 0x18);
        if (lVar10 == 0) {
LAB_0475465c:
          func_0x03280cac();
        }
        else if (auVar16._12_4_ < *(uint *)(lVar10 + 0x18)) {
          lVar10 = *(long *)(lVar10 + (lVar9 >> 0x20) * 8 + 0x20);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) <= auVar16._8_4_) goto LAB_04754660;
            puVar11 = (ulong *)(lVar10 + ((lVar9 << 0x20) >> 0x1d) + 0x20);
            *puVar11 = param_3;
            func_0x032809c4(puVar11,param_3);
            lVar10 = *(long *)(lVar6 + 0x20);
            if (lVar10 != 0) {
              if (param_3 != 0) {
                func_0x040d028c(lVar10,lVar9,*(undefined8 *)PTR_DAT_0777ecf0);
                return 1;
              }
              uVar8 = *(ulong *)PTR_DAT_0777ece8;
              uVar14 = func_0x040cefa0(lVar10,lVar9);
              if ((uVar14 & 1) != 0) {
                return 0;
              }
              lVar6 = *(long *)(lVar6 + 0x20);
              if (lVar6 != 0) {
                lVar10 = *(long *)(lVar6 + 0x10);
                lVar13 = *(long *)PTR_DAT_0777ece0;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar3 = *(uint *)(lVar6 + 0x18);
                  if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                    *(long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = lVar9;
                    return 1;
                  }
                  func_0x040cec28(lVar6,lVar9,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                                 );
                  return 1;
                }
              }
            }
          }
          goto LAB_0475465c;
        }
LAB_04754660:
        auVar16 = func_0x03280cb4();
        puVar5 = PTR_DAT_0777ecd0;
        puVar4 = PTR_DAT_0777ecc8;
        lVar6 = auVar16._0_8_;
        if ((bRam0000000007e196dc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777ece0);
          func_0x03280a18(PTR_DAT_0777ecd0);
          func_0x03280a18(PTR_DAT_0777ecc8);
          bRam0000000007e196dc = 1;
        }
        lStack_c8 = 0;
        uVar14 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x040ce3d4(uVar14,*(undefined8 *)puVar5);
        puVar4 = PTR_DAT_0777ece0;
        lVar9 = 0x30;
        if ((uVar8 & 1) == 0) {
          lVar9 = 0x28;
        }
        lVar9 = *(long *)(lVar6 + lVar9);
        if (lVar9 == 0) goto LAB_047547f0;
        if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
          return uVar14;
        }
        uVar8 = 0;
        uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        goto LAB_04754720;
      }
      if ((lVar9 != 0) &&
         (lVar10 = func_0x03280b90(lVar9,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
      goto LAB_047544ac;
      if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_047544a8;
      *(long *)((long)plVar15 + lVar6) = lVar9;
      uVar8 = func_0x032809c4((long *)((long)plVar15 + lVar6),lVar9);
      uVar14 = uVar14 + 1;
      lVar6 = lVar6 + 8;
    } while ((long)uVar14 < (long)*(int *)(param_1 + 0x14));
  }
  return uVar8;
LAB_04754720:
  if (uVar12 <= uVar8) {
    func_0x03280cb4();
LAB_047547f0:
    auVar16 = func_0x03280cac();
    if (-1 < auVar16._8_4_) {
      uVar8 = 0;
      if ((-1 < auVar16._8_8_) && (auVar16._8_4_ < *(int *)(auVar16._0_8_ + 0x10))) {
        uVar8 = (ulong)(auVar16._12_4_ < *(int *)(auVar16._0_8_ + 0x14));
      }
      return uVar8;
    }
    return 0;
  }
  piVar1 = (int *)(lVar9 + 0x20 + uVar8 * 8);
  func_0x069fdc94(&lStack_c8,*piVar1 + auVar16._8_4_,piVar1[1] + auVar16._12_4_,0);
  if ((((-1 < (int)lStack_c8) && (-1 < lStack_c8)) && ((int)lStack_c8 < *(int *)(lVar6 + 0x10))) &&
     ((int)((ulong)lStack_c8 >> 0x20) < *(int *)(lVar6 + 0x14))) {
    if (uVar14 == 0) goto LAB_047547f0;
    lVar10 = *(long *)(uVar14 + 0x10);
    lVar13 = *(long *)puVar4;
    *(int *)(uVar14 + 0x1c) = *(int *)(uVar14 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_047547f0;
    uVar3 = *(uint *)(uVar14 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(uVar14 + 0x18) = uVar3 + 1;
      *(long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = lStack_c8;
    }
    else {
      func_0x040cec28(uVar14,lStack_c8,
                      *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
  uVar8 = uVar8 + 1;
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar8) {
    return uVar14;
  }
  goto LAB_04754720;
}

