
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bebda0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  iVar1 = func_0x02953fd4(0xe73,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe73,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028927d8 + 0x28926e4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028927dc + 0x28926f8),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028927e0 + 0x28927c8));
    return uVar5;
  }
  iVar1 = 4;
  do {
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = iVar1 - 4;
    if (*(int *)(iVar4 + 0xc) <= (int)uVar3) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar3) {
      func_0x014388e8();
    }
    if (*(int *)(iVar4 + iVar1 * 4) != 0) {
      iVar4 = *(int *)(param_1 + 0x44);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar3) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar4 + iVar1 * 4);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x14) == 1) {
        iVar4 = *(int *)(param_1 + 0x44);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar3) {
          func_0x014388e8();
        }
        iVar4 = *(int *)(iVar4 + iVar1 * 4);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02c3f4b4(iVar4,0);
        if (iVar4 == param_2) {
          iVar4 = *(int *)(param_1 + 0x44);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar4 + 0xc) <= uVar3) {
            func_0x014388e8();
          }
          return *(undefined4 *)(iVar4 + iVar1 * 4);
        }
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

