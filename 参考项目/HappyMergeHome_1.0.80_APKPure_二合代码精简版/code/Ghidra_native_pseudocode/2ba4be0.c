
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb4be0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_02bb5018 + 0x2bb4bfc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb501c + 0x2bb4c10));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5020 + 0x2bb4c1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5024 + 0x2bb4c28));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5028 + 0x2bb4c34));
    func_0x01438628(*(undefined4 *)(_UNK_02bb502c + 0x2bb4c40));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x262f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02baef1c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x046c2130(iVar1,**(undefined4 **)(_UNK_02bb5030 + 0x2bb4cd0));
    if (iVar1 < 1) {
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar5 = *(undefined4 **)(_UNK_02bb5034 + 0x2bb4d24);
      func_0x0152da0c(&uStack_48,iVar1,*puVar5);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar4 = *(undefined4 **)(_UNK_02bb5038 + 0x2bb4d3c);
      while (iVar2 = func_0x04878f14(&uStack_38,*puVar4), iVar1 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) == 1) {
          func_0x02bd2354(param_1,iVar1,0xffffffff);
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bb503c + 0x2bb4d88));
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar1,*puVar5);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar1 = func_0x04878f14(&uStack_38,*puVar4), iVar1 != 0) {
        func_0x02bd2354(param_1,iStack_2c,0xffffffff);
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bb5048 + 0x2bb4e08));
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar1,*puVar5);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar1 = func_0x04878f14(&uStack_38,*puVar4), iVar1 != 0) {
        func_0x02bd2354(param_1,iStack_2c,0xffffffff);
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bb5054 + 0x2bb4e88));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x262f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bced4(iVar1,param_1,param_2,0);
  }
  return;
}

