
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd7e04(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02fd8178 + 0x2fd7e1c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd817c + 0x2fd7e30));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8180 + 0x2fd7e3c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8184 + 0x2fd7e48));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8188 + 0x2fd7e54));
    func_0x01438628(*(undefined4 *)(_UNK_02fd818c + 0x2fd7e60));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8190 + 0x2fd7e6c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8194 + 0x2fd7e78));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8198 + 0x2fd7e84));
    func_0x01438628(*(undefined4 *)(_UNK_02fd819c + 0x2fd7e90));
    func_0x01438628(*(undefined4 *)(_UNK_02fd81a0 + 0x2fd7e9c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd81a4 + 0x2fd7ea8));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x70da,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fd81a8 + 0x2fd7f0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd81ac + 0x2fd7f28));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02fd81b0 + 0x2fd7f48));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_02fcfc38(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02fd791c(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_02fd81b4 + 0x2fd7fa8));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_02fd81b8 + 0x2fd7fe0));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_02fd81bc + 0x2fd7ffc);
      puVar7 = *(undefined4 **)(_UNK_02fd81c0 + 0x2fd8004);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_02fcfc38(param_1);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02fd81c4 + 0x2fd8088));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_02fd81cc + 0x2fd80ac));
      if (*(int *)(**(int **)(_UNK_02fd81d0 + 0x2fd80c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_02fcd8a4();
      if (iVar1 != 0) {
        func_0x02ff814c(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x70da,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

