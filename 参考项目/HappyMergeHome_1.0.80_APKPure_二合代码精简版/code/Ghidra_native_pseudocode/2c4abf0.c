
/* WARNING: Possible PIC construction at 0x02c5ac74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5acb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5acec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5ad28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c5acf0) */
/* WARNING: Removing unreachable block (ram,0x02c5acfc) */
/* WARNING: Removing unreachable block (ram,0x02c5ad00) */
/* WARNING: Removing unreachable block (ram,0x02c5ad18) */
/* WARNING: Removing unreachable block (ram,0x02c5ad1c) */
/* WARNING: Removing unreachable block (ram,0x02c5acb4) */
/* WARNING: Removing unreachable block (ram,0x02c5acc0) */
/* WARNING: Removing unreachable block (ram,0x02c5acc4) */
/* WARNING: Removing unreachable block (ram,0x02c5acdc) */
/* WARNING: Removing unreachable block (ram,0x02c5ace0) */
/* WARNING: Removing unreachable block (ram,0x02c5ac78) */
/* WARNING: Removing unreachable block (ram,0x02c5ac84) */
/* WARNING: Removing unreachable block (ram,0x02c5ac88) */
/* WARNING: Removing unreachable block (ram,0x02c5aca0) */
/* WARNING: Removing unreachable block (ram,0x02c5aca4) */
/* WARNING: Removing unreachable block (ram,0x02c5ad2c) */
/* WARNING: Removing unreachable block (ram,0x02c5ad38) */
/* WARNING: Removing unreachable block (ram,0x02c5ad3c) */
/* WARNING: Removing unreachable block (ram,0x02c5ad54) */
/* WARNING: Removing unreachable block (ram,0x02c5ad58) */

void FUN_02c5abf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x02953fd4(0x5c72,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5c72,0);
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
    func_0x024f56d0(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

