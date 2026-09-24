
/* WARNING: Possible PIC construction at 0x02bb4c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bb4c98) */
/* WARNING: Removing unreachable block (ram,0x02bb3828) */
/* WARNING: Removing unreachable block (ram,0x02bb3d74) */
/* WARNING: Removing unreachable block (ram,0x02bb4c04) */
/* WARNING: Removing unreachable block (ram,0x02bb4c48) */
/* WARNING: Removing unreachable block (ram,0x02bb4c9c) */
/* WARNING: Removing unreachable block (ram,0x02bb4cb0) */
/* WARNING: Removing unreachable block (ram,0x02bb4cb4) */
/* WARNING: Removing unreachable block (ram,0x02bb4cc0) */
/* WARNING: Removing unreachable block (ram,0x02bb4cc4) */
/* WARNING: Removing unreachable block (ram,0x02bb4ce0) */
/* WARNING: Removing unreachable block (ram,0x02bb4cf8) */
/* WARNING: Removing unreachable block (ram,0x02bb4cfc) */
/* WARNING: Removing unreachable block (ram,0x02bb4d08) */
/* WARNING: Removing unreachable block (ram,0x02bb4d0c) */
/* WARNING: Removing unreachable block (ram,0x02bb4d38) */
/* WARNING: Removing unreachable block (ram,0x02bb4d4c) */
/* WARNING: Removing unreachable block (ram,0x02bb4d58) */
/* WARNING: Removing unreachable block (ram,0x02bb4d5c) */
/* WARNING: Removing unreachable block (ram,0x02bb4d68) */
/* WARNING: Removing unreachable block (ram,0x02bb4d7c) */
/* WARNING: Removing unreachable block (ram,0x02bb4da8) */
/* WARNING: Removing unreachable block (ram,0x02bb4dac) */
/* WARNING: Removing unreachable block (ram,0x02bb4db8) */
/* WARNING: Removing unreachable block (ram,0x02bb4dbc) */
/* WARNING: Removing unreachable block (ram,0x02bb4dd4) */
/* WARNING: Removing unreachable block (ram,0x02bb4de8) */
/* WARNING: Removing unreachable block (ram,0x02bb4dfc) */
/* WARNING: Removing unreachable block (ram,0x02bb4e28) */
/* WARNING: Removing unreachable block (ram,0x02bb4e2c) */
/* WARNING: Removing unreachable block (ram,0x02bb4e38) */
/* WARNING: Removing unreachable block (ram,0x02bb4e3c) */
/* WARNING: Removing unreachable block (ram,0x02bb4e54) */
/* WARNING: Removing unreachable block (ram,0x02bb4e68) */
/* WARNING: Removing unreachable block (ram,0x02bb4e7c) */
/* WARNING: Removing unreachable block (ram,0x02bb4e90) */
/* WARNING: Removing unreachable block (ram,0x02bb4c68) */
/* WARNING: Removing unreachable block (ram,0x02bb4c80) */
/* WARNING: Removing unreachable block (ram,0x02bb4c84) */
/* WARNING: Removing unreachable block (ram,0x02bb3834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02bb35dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x02953fd4(0x5cd2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cd2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x02953fd4(0x2534,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2534,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    func_0x024f56c0(&uStack_50,0,0,0);
    uStack_34 = uStack_4c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(auStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(auStack_38,param_1,0);
    func_0x01523a2c(auStack_38,0,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,auStack_38,uVar2);
    return;
  }
  func_0x02bb3f3c(param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02bb36a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_02bb36ac + _UNK_02bb36ac))();
  return;
}

