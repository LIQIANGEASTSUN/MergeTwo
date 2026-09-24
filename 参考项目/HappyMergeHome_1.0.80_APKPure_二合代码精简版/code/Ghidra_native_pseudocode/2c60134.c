
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c70134(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_02c7029c + 0x2c7014c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c702a0 + 0x2c70160));
    func_0x01438628(*(undefined4 *)(_UNK_02c702a4 + 0x2c7016c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6018,0);
  if (iVar1 == 0) {
    *(char *)(param_1 + 0xd9) = (char)param_2;
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = 0;
    }
    else {
      piVar6 = *(int **)(_UNK_02c702ac + 0x2c701e0);
      iVar1 = *piVar6;
      iVar3 = **(int **)(**(int **)(_UNK_02c702a8 + 0x2c701d4) + 0x5c);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar6;
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x0203cc18(iVar3,uVar4,0);
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    (*(code *)&UNK_05d3ec04)(iVar1,uVar4,0);
    return;
  }
  iVar1 = func_0x029540a4(0x6018,0);
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
  func_0x01523a1c(&uStack_38,param_2,0);
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

