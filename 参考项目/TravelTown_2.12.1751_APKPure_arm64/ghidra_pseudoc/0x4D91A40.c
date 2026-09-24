/* Ghidra 12.1.2 native pseudocode; RVA 0x4D91A40; MergeEngine.Model.Configuration.ConfigurationModelBase<TData>.DisposeModel; status ok */


void MergeEngine_Model_Configuration_ConfigurationModelBase_TData___DisposeModel
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x0325681c(lVar4);
  }
  uVar1 = func_0x03280ca0(lVar4);
  puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x20) + 0xc0);
  func_0x054221d4(uVar1,param_1,*puVar5,puVar5[2]);
  if (param_1 == 0) {
    func_0x03280cac();
    return;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
  lVar4 = lVar2;
  if (*(long *)(lVar2 + 0x38) == 0) {
    func_0x03256878(lVar2);
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) {
    auVar9 = func_0x03280cac();
    lVar2 = lVar4;
    if (*(long *)(lVar4 + 0x38) == 0) {
      func_0x03256878(lVar4);
    }
    plVar8 = *(long **)(auVar9._0_8_ + 0x10);
    if (plVar8 == (long *)0x0) {
      auVar9 = func_0x03280cac();
      if (*(long *)(lVar2 + 0x38) == 0) {
        func_0x03256878(lVar2);
      }
      lVar4 = *(long *)(auVar9._0_8_ + 0x20);
      if (lVar4 != 0) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
        lVar3 = *(long *)(lVar2 + 0x38);
        if (lVar3 == 0) {
          func_0x03256878(lVar2);
          lVar3 = *(long *)(lVar2 + 0x38);
        }
        lVar2 = *(long *)(lVar3 + 8);
        uStack_70 = 0x3cc74c4;
        puVar5 = *(undefined8 **)(lVar2 + 0x38);
        if (puVar5 == (undefined8 *)0x0) {
          func_0x03280a18(PTR_DAT_0774e558);
          puVar5 = *(undefined8 **)(lVar2 + 0x38);
          if (puVar5 == (undefined8 *)0x0) {
            func_0x03256878(lVar2);
            puVar5 = *(undefined8 **)(lVar2 + 0x38);
          }
        }
        uVar1 = *puVar5;
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar1 = func_0x057a51c4(uVar1,0);
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x072a6c4c(&uStack_70,uVar1,0,0,0,0);
        func_0x07286e40(lVar4,uStack_70,uStack_68,auVar9._8_8_,0);
        return;
      }
      return;
    }
    lVar2 = *plVar8;
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar4 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 + 0x138;
          goto LAB_03cc7498;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar2 = func_0x03256b10(plVar8);
LAB_03cc7498:
    lVar4 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x03cc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))(plVar8,auVar9._8_8_,lVar4);
    return;
  }
  lVar4 = *plVar8;
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar2 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar2 + 0x50)) * 0x10 + 0x138;
        goto LAB_03cc73e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar4 = func_0x03256b10(plVar8);
LAB_03cc73e8:
  lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar2);
                    /* WARNING: Could not recover jumptable at 0x03cc740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(plVar8,uVar1,lVar4);
  return;
}

