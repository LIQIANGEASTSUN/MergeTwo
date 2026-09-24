/* Ghidra 12.1.2 native pseudocode; RVA 0x6A81624; Merger.MergeBoard.Logic.ItemInteractionAffordabilityChecker.ConsumeResource; status ok */


void Merger_MergeBoard_Logic_ItemInteractionAffordabilityChecker__ConsumeResource
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_077730b8;
  if ((bRam0000000007e2a762 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2a762 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar3 = func_0x0624cb20(uVar1,0);
  if (plVar8 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar5 = *plVar8;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07773688) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_06b816f4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07773688,2);
LAB_06b816f4:
                    /* WARNING: Could not recover jumptable at 0x06b81720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar8,uVar3,uVar1,0,0,0,1,puVar4[1]);
  return;
}

