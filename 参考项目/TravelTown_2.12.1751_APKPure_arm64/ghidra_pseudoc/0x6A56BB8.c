/* Ghidra 12.1.2 native pseudocode; RVA 0x6A56BB8; Merger.MergeBoardQueue.Utils.QueuedItemsComparer.Equals; status ok */


ulong Merger_MergeBoardQueue_Utils_QueuedItemsComparer__Equals
                (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long extraout_x1;
  uint uVar11;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    func_0x03280cac();
    if ((extraout_x1 != 0) && (plVar9 = *(long **)(extraout_x1 + 0x20), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x06b56bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
      return uVar5;
    }
    uVar5 = func_0x03280cac();
    return uVar5;
  }
  lVar8 = *(long *)(param_2 + 0x20);
  lVar10 = *(long *)(param_3 + 0x20);
  if (lVar8 == lVar10) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
    if ((lVar8 != 0) && (lVar10 != 0)) {
      if (*(int *)(lVar8 + 0x10) == *(int *)(lVar10 + 0x10)) {
        lVar1 = lVar8 + 0x14;
        lVar10 = lVar10 + 0x14;
        lVar8 = (long)*(int *)(lVar8 + 0x10) << 1;
        if (lVar1 != lVar10) {
          lVar3 = func_0x057e39f8(0,0,lVar8,0);
          uVar4 = func_0x057e3a04(lVar8,0);
          uVar5 = func_0x057e3a10(uVar4,0);
          if (7 < uVar5) {
            lVar8 = func_0x057e3a24(uVar4,8,0);
            while( true ) {
              uVar5 = func_0x057e3a10(lVar8,0);
              uVar6 = func_0x057e3a10(lVar3,0);
              if (uVar5 <= uVar6) {
                return (ulong)(*(long *)(lVar1 + lVar8) == *(long *)(lVar10 + lVar8));
              }
              uVar5 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar3),*(undefined8 *)(lVar10 + lVar3)
                                      ,0);
              if ((uVar5 & 1) != 0) break;
              lVar3 = func_0x057e3a1c(lVar3,8,0);
            }
            return 0;
          }
          uVar5 = func_0x057e3a10(uVar4,0);
          uVar6 = func_0x057e3a10(lVar3,0);
          if (uVar6 < uVar5) {
            do {
              bVar2 = *(char *)(lVar1 + lVar3) == *(char *)(lVar10 + lVar3);
              uVar5 = (ulong)bVar2;
              if (!bVar2) {
                return uVar5;
              }
              lVar3 = func_0x057e3a1c(lVar3,1,0);
              uVar6 = func_0x057e3a10(uVar4,0);
              uVar7 = func_0x057e3a10(lVar3,0);
            } while (uVar7 < uVar6);
            return uVar5;
          }
        }
        return 1;
      }
      uVar11 = 0;
    }
  }
  return (ulong)uVar11;
}

