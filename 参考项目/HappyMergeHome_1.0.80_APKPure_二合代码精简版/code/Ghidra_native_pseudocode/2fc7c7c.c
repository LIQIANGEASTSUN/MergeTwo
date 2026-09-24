
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fd7c7c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
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
  
  pcVar5 = (char *)(_UNK_02fd7df4 + 0x2fd7c94);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd7df8 + 0x2fd7ca8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd7dfc + 0x2fd7cb4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7110,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7110,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
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
    iVar1 = func_0x024f56f0(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = FUN_02fd044c(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x18) != 0) {
    iVar1 = FUN_02fd044c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = 0;
      puVar6 = *(undefined4 **)(_UNK_02fd7e00 + 0x2fd7d70);
      while( true ) {
        iVar3 = FUN_02fd044c(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x18);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar1) break;
        iVar3 = FUN_02fd044c(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x18);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x04cd26d0(iVar3,iVar1,*puVar6);
        if (iVar3 == param_2) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
      }
    }
  }
  return -1;
}

