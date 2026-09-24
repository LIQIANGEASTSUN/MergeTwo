/* Ghidra 12.1.2 native pseudocode; RVA 0x4654664; MergeEngine.Util.TwoDArray<T>.GetAdjacentPositions; status ok */


ulong MergeEngine_Util_TwoDArray_T___GetAdjacentPositions
                (long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long lStack_48;
  
  puVar4 = PTR_DAT_0777ecd0;
  puVar3 = PTR_DAT_0777ecc8;
  if ((bRam0000000007e196dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196dc = 1;
  }
  lStack_48 = 0;
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x040ce3d4(uVar5,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_0777ece0;
  lVar9 = 0x30;
  if ((param_3 & 1) == 0) {
    lVar9 = 0x28;
  }
  lVar9 = *(long *)(param_1 + lVar9);
  if (lVar9 != 0) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar10) {
          func_0x03280cb4();
          goto LAB_047547f0;
        }
        piVar1 = (int *)(lVar9 + 0x20 + uVar10 * 8);
        func_0x069fdc94(&lStack_48,*piVar1 + (int)param_2,piVar1[1] + (int)((ulong)param_2 >> 0x20),
                        0);
        if ((((-1 < (int)lStack_48) && (-1 < lStack_48)) &&
            ((int)lStack_48 < *(int *)(param_1 + 0x10))) &&
           ((int)((ulong)lStack_48 >> 0x20) < *(int *)(param_1 + 0x14))) {
          if (uVar5 == 0) goto LAB_047547f0;
          lVar7 = *(long *)(uVar5 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_047547f0;
          uVar2 = *(uint *)(uVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(uVar5 + 0x18) = uVar2 + 1;
            *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lStack_48;
          }
          else {
            func_0x040cec28(uVar5,lStack_48,
                            *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return uVar5;
  }
LAB_047547f0:
  auVar11 = func_0x03280cac();
  if (-1 < auVar11._8_4_) {
    uVar5 = 0;
    if ((-1 < auVar11._8_8_) && (auVar11._8_4_ < *(int *)(auVar11._0_8_ + 0x10))) {
      uVar5 = (ulong)(auVar11._12_4_ < *(int *)(auVar11._0_8_ + 0x14));
    }
    return uVar5;
  }
  return 0;
}

