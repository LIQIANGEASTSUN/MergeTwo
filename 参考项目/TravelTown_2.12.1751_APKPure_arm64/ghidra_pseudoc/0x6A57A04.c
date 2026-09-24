/* Ghidra 12.1.2 native pseudocode; RVA 0x6A57A04; Merger.MergeBoardQueue.Services.MergeBoardItemRewardDequeueStrategyRegistrar.Initialize; status ok */


void Merger_MergeBoardQueue_Services_MergeBoardItemRewardDequeueStrategyRegistrar__Initialize
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam0000000007e2a602 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d98f0);
    bRam0000000007e2a602 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    lVar2 = func_0x03280cac();
    if ((bRam0000000007e2a603 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077d98f0);
      bRam0000000007e2a603 = 1;
    }
    plVar6 = *(long **)(lVar2 + 0x10);
    if (plVar6 == (long *)0x0) {
      func_0x03280cac();
      return;
    }
    lVar3 = *plVar6;
    uVar7 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_077d98f0) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_06b57b3c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077d98f0,1);
LAB_06b57b3c:
                    /* WARNING: Could not recover jumptable at 0x06b57b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar6,uVar7,puVar1[1]);
    return;
  }
  lVar2 = *plVar6;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_077d98f0) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_06b57a90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077d98f0,0);
LAB_06b57a90:
                    /* WARNING: Could not recover jumptable at 0x06b57aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,uVar7,puVar1[1]);
  return;
}

