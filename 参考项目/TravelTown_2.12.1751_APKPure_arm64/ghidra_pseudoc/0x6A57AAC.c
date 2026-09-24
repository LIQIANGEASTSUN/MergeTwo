/* Ghidra 12.1.2 native pseudocode; RVA 0x6A57AAC; Merger.MergeBoardQueue.Services.MergeBoardItemRewardDequeueStrategyRegistrar.Dispose; status ok */


void Merger_MergeBoardQueue_Services_MergeBoardItemRewardDequeueStrategyRegistrar__Dispose
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000007e2a603 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d98f0);
    bRam0000000007e2a603 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_077d98f0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_06b57b3c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077d98f0,1);
LAB_06b57b3c:
                    /* WARNING: Could not recover jumptable at 0x06b57b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

