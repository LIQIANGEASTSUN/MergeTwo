/* Ghidra 12.1.2 native pseudocode; RVA 0x6004828; MergeEngine.Configuration.Definitions.WeakReferences.References.MergeItemWeakReference.Equals; status ok */


bool MergeEngine_Configuration_Definitions_WeakReferences_References_MergeItemWeakReference__Equals
               (long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == (long *)0x0) {
    return false;
  }
  lVar7 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
  lVar8 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (lVar7 == lVar8) {
    return true;
  }
  if (lVar7 == 0) {
    return false;
  }
  if (lVar8 != 0) {
    if (*(int *)(lVar7 + 0x10) != *(int *)(lVar8 + 0x10)) {
      return false;
    }
    lVar1 = lVar7 + 0x14;
    lVar8 = lVar8 + 0x14;
    lVar7 = (long)*(int *)(lVar7 + 0x10) << 1;
    if (lVar1 != lVar8) {
      lVar3 = func_0x057e39f8(0,0,lVar7,0);
      uVar4 = func_0x057e3a04(lVar7,0);
      uVar5 = func_0x057e3a10(uVar4,0);
      if (7 < uVar5) {
        lVar7 = func_0x057e3a24(uVar4,8,0);
        while( true ) {
          uVar5 = func_0x057e3a10(lVar7,0);
          uVar6 = func_0x057e3a10(lVar3,0);
          if (uVar5 <= uVar6) {
            return *(long *)(lVar1 + lVar7) == *(long *)(lVar8 + lVar7);
          }
          uVar5 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar3),*(undefined8 *)(lVar8 + lVar3),0);
          if ((uVar5 & 1) != 0) break;
          lVar3 = func_0x057e3a1c(lVar3,8,0);
        }
        return false;
      }
      uVar5 = func_0x057e3a10(uVar4,0);
      uVar6 = func_0x057e3a10(lVar3,0);
      if (uVar6 < uVar5) {
        do {
          bVar2 = *(char *)(lVar1 + lVar3) == *(char *)(lVar8 + lVar3);
          if (!bVar2) {
            return bVar2;
          }
          lVar3 = func_0x057e3a1c(lVar3,1,0);
          uVar5 = func_0x057e3a10(uVar4,0);
          uVar6 = func_0x057e3a10(lVar3,0);
        } while (uVar6 < uVar5);
        return bVar2;
      }
    }
    return true;
  }
  return false;
}

