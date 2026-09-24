
/* WARNING: Possible PIC construction at 0x02c547ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5485c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c548b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c54990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c549e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c54994) */
/* WARNING: Removing unreachable block (ram,0x02c549a0) */
/* WARNING: Removing unreachable block (ram,0x02c549a4) */
/* WARNING: Removing unreachable block (ram,0x02c549bc) */
/* WARNING: Removing unreachable block (ram,0x02c549c0) */
/* WARNING: Removing unreachable block (ram,0x02c549d8) */
/* WARNING: Removing unreachable block (ram,0x02c549dc) */
/* WARNING: Removing unreachable block (ram,0x02c5493c) */
/* WARNING: Removing unreachable block (ram,0x02c54948) */
/* WARNING: Removing unreachable block (ram,0x02c5494c) */
/* WARNING: Removing unreachable block (ram,0x02c54964) */
/* WARNING: Removing unreachable block (ram,0x02c54968) */
/* WARNING: Removing unreachable block (ram,0x02c54980) */
/* WARNING: Removing unreachable block (ram,0x02c54984) */
/* WARNING: Removing unreachable block (ram,0x02c54860) */
/* WARNING: Removing unreachable block (ram,0x02c5486c) */
/* WARNING: Removing unreachable block (ram,0x02c54870) */
/* WARNING: Removing unreachable block (ram,0x02c54888) */
/* WARNING: Removing unreachable block (ram,0x02c5488c) */
/* WARNING: Removing unreachable block (ram,0x02c548a4) */
/* WARNING: Removing unreachable block (ram,0x02c548a8) */
/* WARNING: Removing unreachable block (ram,0x02c54808) */
/* WARNING: Removing unreachable block (ram,0x02c54814) */
/* WARNING: Removing unreachable block (ram,0x02c54818) */
/* WARNING: Removing unreachable block (ram,0x02c54830) */
/* WARNING: Removing unreachable block (ram,0x02c54834) */
/* WARNING: Removing unreachable block (ram,0x02c5484c) */
/* WARNING: Removing unreachable block (ram,0x02c54850) */
/* WARNING: Removing unreachable block (ram,0x02c547b0) */
/* WARNING: Removing unreachable block (ram,0x02c547bc) */
/* WARNING: Removing unreachable block (ram,0x02c547c0) */
/* WARNING: Removing unreachable block (ram,0x02c547d8) */
/* WARNING: Removing unreachable block (ram,0x02c547dc) */
/* WARNING: Removing unreachable block (ram,0x02c547f4) */
/* WARNING: Removing unreachable block (ram,0x02c547f8) */
/* WARNING: Removing unreachable block (ram,0x02c549ec) */
/* WARNING: Removing unreachable block (ram,0x02c549f8) */
/* WARNING: Removing unreachable block (ram,0x02c549fc) */
/* WARNING: Removing unreachable block (ram,0x02c54a14) */
/* WARNING: Removing unreachable block (ram,0x02c54a18) */
/* WARNING: Removing unreachable block (ram,0x02c54a30) */
/* WARNING: Removing unreachable block (ram,0x02c54a34) */

void FUN_02c54700(int param_1,int param_2)

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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x02953fd4(0x5f60,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f60,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
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
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 != param_2) {
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      func_0x02c58b38(param_2,param_1,0);
      *(int *)(param_1 + 0xf8) = param_2;
      func_0x014385cc((int *)(param_1 + 0xf8),param_2);
      iVar1 = *(int *)(param_1 + 0xf8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c58118(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = 1;
    }
    else {
      iVar1 = func_0x02c58118(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = 0;
    }
    (*(code *)&UNK_05d3ec04)(iVar1,uVar4,0);
    return;
  }
  return;
}

