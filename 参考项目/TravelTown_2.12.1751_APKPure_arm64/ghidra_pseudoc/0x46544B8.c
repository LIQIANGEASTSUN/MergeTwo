/* Ghidra 12.1.2 native pseudocode; RVA 0x46544B8; MergeEngine.Util.TwoDArray<T>.GetItem; status ok */


ulong MergeEngine_Util_TwoDArray_T___GetItem(long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_88;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
LAB_04754504:
    func_0x03280cac();
  }
  else if ((uint)((ulong)param_2 >> 0x20) < *(uint *)(lVar8 + 0x18)) {
    lVar8 = *(long *)(lVar8 + (param_2 >> 0x20) * 8 + 0x20);
    if (lVar8 == 0) goto LAB_04754504;
    if ((uint)param_2 < *(uint *)(lVar8 + 0x18)) {
      return *(ulong *)(lVar8 + ((param_2 << 0x20) >> 0x1d) + 0x20);
    }
  }
  auVar13 = func_0x03280cb4();
  lVar12 = auVar13._8_8_;
  lVar8 = auVar13._0_8_;
  uVar7 = param_3;
  if ((bRam0000000007e196db & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ece8);
    func_0x03280a18(PTR_DAT_0777ecf0);
    bRam0000000007e196db = 1;
  }
  lVar9 = *(long *)(lVar8 + 0x18);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= auVar13._12_4_) goto LAB_04754660;
    lVar9 = *(long *)(lVar9 + (lVar12 >> 0x20) * 8 + 0x20);
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= auVar13._8_4_) goto LAB_04754660;
      puVar5 = (ulong *)(lVar9 + ((lVar12 << 0x20) >> 0x1d) + 0x20);
      *puVar5 = param_3;
      func_0x032809c4(puVar5,param_3);
      lVar9 = *(long *)(lVar8 + 0x20);
      if (lVar9 != 0) {
        if (param_3 != 0) {
          func_0x040d028c(lVar9,lVar12,*(undefined8 *)PTR_DAT_0777ecf0);
          return 1;
        }
        uVar7 = *(ulong *)PTR_DAT_0777ece8;
        uVar6 = func_0x040cefa0(lVar9,lVar12);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)PTR_DAT_0777ece0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
              return 1;
            }
            func_0x040cec28(lVar8,lVar12,
                            *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            return 1;
          }
        }
      }
    }
  }
  func_0x03280cac();
LAB_04754660:
  auVar13 = func_0x03280cb4();
  puVar4 = PTR_DAT_0777ecd0;
  puVar3 = PTR_DAT_0777ecc8;
  lVar8 = auVar13._0_8_;
  if ((bRam0000000007e196dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196dc = 1;
  }
  lStack_88 = 0;
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x040ce3d4(uVar6,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_0777ece0;
  lVar12 = 0x30;
  if ((uVar7 & 1) == 0) {
    lVar12 = 0x28;
  }
  lVar12 = *(long *)(lVar8 + lVar12);
  if (lVar12 != 0) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar7 = 0;
      uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar7) {
          func_0x03280cb4();
          goto LAB_047547f0;
        }
        piVar1 = (int *)(lVar12 + 0x20 + uVar7 * 8);
        func_0x069fdc94(&lStack_88,*piVar1 + auVar13._8_4_,piVar1[1] + auVar13._12_4_,0);
        if ((((-1 < (int)lStack_88) && (-1 < lStack_88)) &&
            ((int)lStack_88 < *(int *)(lVar8 + 0x10))) &&
           ((int)((ulong)lStack_88 >> 0x20) < *(int *)(lVar8 + 0x14))) {
          if (uVar6 == 0) goto LAB_047547f0;
          lVar9 = *(long *)(uVar6 + 0x10);
          lVar11 = *(long *)puVar3;
          *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_047547f0;
          uVar2 = *(uint *)(uVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(uVar6 + 0x18) = uVar2 + 1;
            *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lStack_88;
          }
          else {
            func_0x040cec28(uVar6,lStack_88,
                            *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    return uVar6;
  }
LAB_047547f0:
  auVar13 = func_0x03280cac();
  if (-1 < auVar13._8_4_) {
    uVar7 = 0;
    if ((-1 < auVar13._8_8_) && (auVar13._8_4_ < *(int *)(auVar13._0_8_ + 0x10))) {
      uVar7 = (ulong)(auVar13._12_4_ < *(int *)(auVar13._0_8_ + 0x14));
    }
    return uVar7;
  }
  return 0;
}

