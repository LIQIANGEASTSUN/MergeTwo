/* Ghidra 12.1.2 native pseudocode; RVA 0x6004770; MergeEngine.Configuration.Definitions.WeakReferences.References.DynamicMergeItemWeakReference.Equals; status ok */


/* WARNING: Possible PIC construction at 0x061047e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x061047e4) */
/* WARNING: Removing unreachable block (ram,0x061047e8) */
/* WARNING: Removing unreachable block (ram,0x061047f0) */
/* WARNING: Removing unreachable block (ram,0x061047f8) */
/* WARNING: Removing unreachable block (ram,0x06104824) */
/* WARNING: Removing unreachable block (ram,0x06104800) */
/* WARNING: Removing unreachable block (ram,0x055f6a38) */
/* WARNING: Removing unreachable block (ram,0x055f6a70) */
/* WARNING: Removing unreachable block (ram,0x055f6a40) */
/* WARNING: Removing unreachable block (ram,0x055f6a44) */
/* WARNING: Removing unreachable block (ram,0x055f6a68) */
/* WARNING: Removing unreachable block (ram,0x055f6a54) */

bool MergeEngine_Configuration_Definitions_WeakReferences_References_DynamicMergeItemWeakReference__Equals
               (long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam0000000007e2372f & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782dd8);
    bRam0000000007e2372f = 1;
  }
  if (param_2 == (long *)0x0) {
    return false;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_07782dd8 + 0x130);
  if (*(byte *)(*param_2 + 0x130) < bVar2) {
    return false;
  }
  if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_07782dd8) {
    return false;
  }
  if (param_2 == (long *)0x0) {
    return false;
  }
  lVar7 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
  lVar9 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (lVar7 == lVar9) {
    return true;
  }
  if (lVar7 == 0) {
    return false;
  }
  if (lVar9 != 0) {
    if (*(int *)(lVar7 + 0x10) != *(int *)(lVar9 + 0x10)) {
      return false;
    }
    lVar1 = lVar7 + 0x14;
    lVar9 = lVar9 + 0x14;
    lVar7 = (long)*(int *)(lVar7 + 0x10) << 1;
    if (lVar1 != lVar9) {
      lVar4 = func_0x057e39f8(0,0,lVar7,0);
      uVar5 = func_0x057e3a04(lVar7,0);
      uVar6 = func_0x057e3a10(uVar5,0);
      if (7 < uVar6) {
        lVar7 = func_0x057e3a24(uVar5,8,0);
        while( true ) {
          uVar6 = func_0x057e3a10(lVar7,0);
          uVar8 = func_0x057e3a10(lVar4,0);
          if (uVar6 <= uVar8) {
            return *(long *)(lVar1 + lVar7) == *(long *)(lVar9 + lVar7);
          }
          uVar6 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar4),*(undefined8 *)(lVar9 + lVar4),0);
          if ((uVar6 & 1) != 0) break;
          lVar4 = func_0x057e3a1c(lVar4,8,0);
        }
        return false;
      }
      uVar6 = func_0x057e3a10(uVar5,0);
      uVar8 = func_0x057e3a10(lVar4,0);
      if (uVar8 < uVar6) {
        do {
          bVar3 = *(char *)(lVar1 + lVar4) == *(char *)(lVar9 + lVar4);
          if (!bVar3) {
            return bVar3;
          }
          lVar4 = func_0x057e3a1c(lVar4,1,0);
          uVar6 = func_0x057e3a10(uVar5,0);
          uVar8 = func_0x057e3a10(lVar4,0);
        } while (uVar8 < uVar6);
        return bVar3;
      }
    }
    return true;
  }
  return false;
}

