
void Recovered_ItemMover_MoveItemToBoardSlot_0x02C067F0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_063fcee0;
  if ((bRam0000000006812bab & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc870);
    func_0x02ad6de0(PTR_DAT_063f9e90);
    func_0x02ad6de0(PTR_DAT_063f1678);
    func_0x02ad6de0(PTR_DAT_063fcee8);
    func_0x02ad6de0(PTR_DAT_063fcee0);
    bRam0000000006812bab = 1;
  }
  lVar4 = func_0x02ad7078(*(undefined8 *)puVar1);
  func_0x0524fb48(lVar4,0);
  if (lVar4 != 0) {
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = param_5;
    func_0x02ad6d8c(puVar8,param_5);
    plVar9 = (long *)(lVar4 + 0x18);
    *plVar9 = param_6;
    func_0x02ad6d8c(plVar9,param_6);
    *(undefined8 *)(lVar4 + 0x20) = param_4;
    func_0x02ad6d8c((undefined8 *)(lVar4 + 0x20),param_4);
    puVar1 = PTR_DAT_063fc870;
    if (*plVar9 != 0) {
      Recovered_BoardSlot_SetItem_0x02B9F90C(*plVar9,*puVar8,0,0);
      lVar5 = func_0x02ad7078(*(undefined8 *)puVar1);
      func_0x02cf956c(lVar5,0);
      if (((*plVar9 != 0) && (lVar6 = func_0x05c3f95c(*plVar9,0), lVar6 != 0)) &&
         (uVar10 = func_0x05c54030(lVar6,0), puVar3 = PTR_DAT_063fcee8, puVar1 = PTR_DAT_063f1678,
         lVar5 != 0)) {
        *(undefined4 *)(lVar5 + 0x10) = uVar10;
        puVar2 = PTR_DAT_063f9e90;
        *(undefined4 *)(lVar5 + 0x14) = param_2;
        *(undefined4 *)(lVar5 + 0x18) = param_3;
        uVar7 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar5 + 0x38) = param_1;
        uVar7 = func_0x02ad7078(uVar7);
        func_0x02fe9ee8(uVar7,lVar4,*(undefined8 *)puVar3,0);
        *(undefined8 *)(lVar5 + 0x28) = uVar7;
        func_0x02ad6d8c((undefined8 *)(lVar5 + 0x28),uVar7);
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          func_0x02ad6f5c();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02d069a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))
                    (*(undefined8 *)(lVar4 + 0x40),*puVar8,lVar5,*(undefined8 *)(lVar4 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

