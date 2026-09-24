/* Ghidra 12.1.2 native pseudocode; RVA 0x6A32924; Merger.MergeBoard.ViewModel.MergeBoardViewModel.CanCombineItems; status ok */


bool Merger_MergeBoard_ViewModel_MergeBoardViewModel__CanCombineItems
               (long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x1;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  
  plVar4 = param_3;
  if ((bRam0000000007e2a4a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f410);
    bRam0000000007e2a4a6 = 1;
  }
  puVar2 = PTR_DAT_0782f410;
  lVar10 = *(long *)(param_1 + 0x70);
  if (lVar10 == 0) {
LAB_06b32a5c:
    func_0x03280cac();
    puVar2 = PTR_DAT_0782f418;
    if ((bRam0000000007e2a4a7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782f418);
      bRam0000000007e2a4a7 = 1;
    }
    lVar10 = func_0x03280b90(extraout_x1,*(undefined8 *)puVar2);
    if (lVar10 == 0) {
      lVar5 = 0;
      *plVar4 = 0;
    }
    else {
      *plVar4 = lVar10;
      lVar5 = lVar10;
    }
    func_0x032809c4(plVar4,lVar5);
    return lVar10 != 0;
  }
  uVar1 = *(uint *)(lVar10 + 0x18);
  bVar9 = 0 < (int)uVar1;
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      if (uVar1 <= uVar11) {
        func_0x03280cb4();
        goto LAB_06b32a5c;
      }
      plVar8 = *(long **)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_06b32a5c;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06b329f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar2,0);
LAB_06b329f0:
      plVar4 = param_3;
      uVar6 = (*(code *)*puVar3)(plVar8,param_2,param_3,puVar3[1]);
      if ((uVar6 & 1) != 0) {
        *param_4 = plVar8;
        goto LAB_06b32a38;
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      uVar11 = uVar11 + 1;
      bVar9 = (int)uVar11 < (int)uVar1;
    } while ((int)uVar11 < (int)uVar1);
  }
  plVar8 = (long *)0x0;
  *param_4 = 0;
LAB_06b32a38:
  func_0x032809c4(param_4,plVar8);
  return bVar9;
}

