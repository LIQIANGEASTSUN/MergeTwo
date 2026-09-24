/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2E9D4; MergeEngine.Configuration.Definitions.WeightedItem.Equals; status ok */


ulong MergeEngine_Configuration_Definitions_WeightedItem__Equals(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    plVar8 = *(long **)(param_2 + 0x18);
    if (plVar8 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      if (lVar9 == lVar10) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
        if ((lVar9 != 0) && (lVar10 != 0)) {
          if (*(int *)(lVar9 + 0x10) == *(int *)(lVar10 + 0x10)) {
            lVar1 = lVar9 + 0x14;
            lVar10 = lVar10 + 0x14;
            lVar9 = (long)*(int *)(lVar9 + 0x10) << 1;
            if (lVar1 != lVar10) {
              lVar3 = func_0x057e39f8(0,0,lVar9,0);
              uVar4 = func_0x057e3a04(lVar9,0);
              uVar5 = func_0x057e3a10(uVar4,0);
              if (7 < uVar5) {
                lVar9 = func_0x057e3a24(uVar4,8,0);
                while( true ) {
                  uVar5 = func_0x057e3a10(lVar9,0);
                  uVar6 = func_0x057e3a10(lVar3,0);
                  if (uVar5 <= uVar6) {
                    return (ulong)(*(long *)(lVar1 + lVar9) == *(long *)(lVar10 + lVar9));
                  }
                  uVar5 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar3),
                                          *(undefined8 *)(lVar10 + lVar3),0);
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
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

