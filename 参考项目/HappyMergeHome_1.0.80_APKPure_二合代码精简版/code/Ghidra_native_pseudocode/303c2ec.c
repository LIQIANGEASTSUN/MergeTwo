
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0304c2ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0304c660 + 0x304c304);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304c664 + 0x304c318));
    func_0x01438628(*(undefined4 *)(_UNK_0304c668 + 0x304c324));
    func_0x01438628(*(undefined4 *)(_UNK_0304c66c + 0x304c330));
    func_0x01438628(*(undefined4 *)(_UNK_0304c670 + 0x304c33c));
    func_0x01438628(*(undefined4 *)(_UNK_0304c674 + 0x304c348));
    func_0x01438628(*(undefined4 *)(_UNK_0304c678 + 0x304c354));
    func_0x01438628(*(undefined4 *)(_UNK_0304c67c + 0x304c360));
    func_0x01438628(*(undefined4 *)(_UNK_0304c680 + 0x304c36c));
    func_0x01438628(*(undefined4 *)(_UNK_0304c684 + 0x304c378));
    func_0x01438628(*(undefined4 *)(_UNK_0304c688 + 0x304c384));
    func_0x01438628(*(undefined4 *)(_UNK_0304c68c + 0x304c390));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x73ea,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0304c690 + 0x304c3f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0304c694 + 0x304c410));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0304c698 + 0x304c430));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_0304411c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0304be04(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_0304c69c + 0x304c490));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_0304c6a0 + 0x304c4c8));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_0304c6a4 + 0x304c4e4);
      puVar7 = *(undefined4 **)(_UNK_0304c6a8 + 0x304c4ec);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_0304411c(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar2 = *(undefined4 *)(iVar6 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0304c6ac + 0x304c570));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_0304c6b4 + 0x304c594));
      if (*(int *)(**(int **)(_UNK_0304c6b8 + 0x304c5a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_03041d88();
      if (iVar1 != 0) {
        func_0x0306c28c(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x73ea,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

