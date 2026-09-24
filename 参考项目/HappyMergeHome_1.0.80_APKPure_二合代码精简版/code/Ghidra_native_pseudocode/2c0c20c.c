
void FUN_02c1c20c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x4fbc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fbc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x02c1cde8(param_1);
  iVar4 = FUN_02c195e4(param_1);
  if (iVar4 == -1) {
    if (iVar1 == 0) goto LAB_02c1c2bc;
  }
  else {
    iVar4 = FUN_02c195e4(param_1);
    if (iVar1 == 0 && iVar4 == 0) {
LAB_02c1c2bc:
      piVar3 = *(int **)(param_1 + 0xa4);
      uVar5 = *(undefined4 *)(param_1 + 0xec);
      if (piVar3 == (int *)0x0) {
        func_0x014388e4();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*piVar3 + 0x1c8);
      uVar2 = *(undefined4 *)(*piVar3 + 0x1cc);
      goto LAB_02c1c2e4;
    }
  }
  piVar3 = *(int **)(param_1 + 0xa4);
  if (piVar3 == (int *)0x0) {
    func_0x014388e4();
  }
  uVar5 = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(*piVar3 + 0x1c8);
  uVar2 = *(undefined4 *)(*piVar3 + 0x1cc);
LAB_02c1c2e4:
                    /* WARNING: Could not recover jumptable at 0x02c1c2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar3,uVar5,uVar2);
  return;
}

