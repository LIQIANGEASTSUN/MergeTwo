
uint Recovered_BaseItem_CanMergeWith_0x02BF55C4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000006812b23 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc6c0);
    func_0x02ad6de0(PTR_DAT_063fc6c8);
    func_0x02ad6de0(PTR_DAT_063fa0a0);
    func_0x02ad6de0(PTR_DAT_063fc6d0);
    func_0x02ad6de0(PTR_DAT_063fc6d8);
    bRam0000000006812b23 = 1;
  }
  if (((*(long *)(param_1 + 0x50) == 0) || (param_2 == 0)) || (*(long *)(param_2 + 0x50) == 0)) {
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x30);
  uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x30);
  if (*(int *)(*(long *)PTR_DAT_063fa0a0 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar5 = func_0x02cf5754(uVar1,uVar2);
  puVar3 = PTR_DAT_063fc6d8;
  if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44))) {
    uVar4 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xb8);
    if (lVar9 != 0) {
      lVar6 = *(long *)PTR_DAT_063fc6d8;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        func_0x02ad6f5c();
        lVar6 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar6 + 0xb8);
      lVar10 = puVar8[1];
      if (lVar10 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          func_0x02ad6f5c();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar11 = *puVar8;
        lVar10 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fc6c8);
        func_0x04db5c8c(lVar10,uVar11,*(undefined8 *)PTR_DAT_063fc6d0,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar7 = lVar10;
        func_0x02ad6d8c(plVar7,lVar10);
      }
      uVar5 = func_0x034f4a5c(lVar9,lVar10,*(undefined8 *)PTR_DAT_063fc6c0);
      if ((uVar5 & 1) != 0) {
        uVar4 = 1;
        goto LAB_02cf572c;
      }
    }
    uVar4 = Recovered_BaseItem_get_IsMaxLeveled_0x2bf3374(param_1);
    uVar4 = uVar4 ^ 1;
  }
LAB_02cf572c:
  return uVar4 & 1;
}

