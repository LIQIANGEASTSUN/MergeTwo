
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c86e6c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_01c86f7c + 0x1c86e80);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c86f80 + 0x1c86e94));
    func_0x01438628(*(undefined4 *)(_UNK_01c86f84 + 0x1c86ea0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad0,0);
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
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0268be6c(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01c86f88 + 0x1c86f1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01c86f8c + 0x1c86f38));
  iVar4 = param_1[0x13];
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b76e7c(iVar1,0,iVar4,0);
                    /* WARNING: Could not recover jumptable at 0x01c86f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  return;
}

