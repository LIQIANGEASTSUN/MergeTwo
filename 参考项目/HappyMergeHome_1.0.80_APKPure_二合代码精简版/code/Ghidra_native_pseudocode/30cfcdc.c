
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030dfcdc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_030dfe08 + 0x30dfcf4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030dfe0c + 0x30dfd08));
    func_0x01438628(*(undefined4 *)(_UNK_030dfe10 + 0x30dfd14));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x02953fd4(0x76d5,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = FUN_030ccf14(param_1);
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_030d2ca4(param_1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar1 + 0x78);
        if (*(int *)(**(int **)(_UNK_030dfe14 + 0x30dfdac) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030dfe18 + 0x30dfdd0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x026ffbe0(iVar1,0);
        iVar5 = iVar5 - iVar1;
      }
    }
    return iVar5;
  }
  iVar1 = func_0x029540a4(0x76d5,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar5,uVar3,&uStack_38,uVar2,0,0);
  iVar1 = func_0x024f5770(&uStack_38,0,0);
  return iVar1;
}

