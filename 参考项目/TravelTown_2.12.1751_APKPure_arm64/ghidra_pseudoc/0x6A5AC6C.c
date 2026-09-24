/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5AC6C; Merger.MergeBoardQueue.Logic.BoardQueueProcessor.GrantSellPriceResource; status ok */


void Merger_MergeBoardQueue_Logic_BoardQueueProcessor__GrantSellPriceResource
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_0774e908;
  puVar1 = PTR_DAT_0774e900;
  if ((bRam0000000007e2a61f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e908);
    func_0x03280a18(PTR_DAT_0774ea10);
    func_0x03280a18(PTR_DAT_0774e900);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_07780650);
    bRam0000000007e2a61f = 1;
  }
  lVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04fe1fa4(lVar3,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_077730b8;
  if (lVar3 != 0) {
    func_0x04fe2d68(lVar3,*(undefined8 *)PTR_DAT_07780650,param_2,*(undefined8 *)PTR_DAT_0774ea10);
    plVar9 = *(long **)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar4 = func_0x0624cb20(param_3,0);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07773688) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_06b5adbc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07773688,3);
LAB_06b5adbc:
                    /* WARNING: Could not recover jumptable at 0x06b5adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar9,uVar4,param_4,0,8,lVar3,1,puVar5[1]);
      return;
    }
  }
  func_0x03280cac();
  return;
}

