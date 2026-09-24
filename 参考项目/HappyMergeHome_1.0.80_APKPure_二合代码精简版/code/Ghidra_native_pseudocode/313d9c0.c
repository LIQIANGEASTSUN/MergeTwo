
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314d9c0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0314dd34 + 0x314d9d8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314dd38 + 0x314d9ec));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd3c + 0x314d9f8));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd40 + 0x314da04));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd44 + 0x314da10));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd48 + 0x314da1c));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd4c + 0x314da28));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd50 + 0x314da34));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd54 + 0x314da40));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd58 + 0x314da4c));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd5c + 0x314da58));
    func_0x01438628(*(undefined4 *)(_UNK_0314dd60 + 0x314da64));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x79ef,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0314dd64 + 0x314dac8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0314dd68 + 0x314dae4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0314dd6c + 0x314db04));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_031457fc(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0314d4d8(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_0314dd70 + 0x314db64));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_0314dd74 + 0x314db9c));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_0314dd78 + 0x314dbb8);
      puVar7 = *(undefined4 **)(_UNK_0314dd7c + 0x314dbc0);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_031457fc(param_1);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0314dd80 + 0x314dc44));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_0314dd88 + 0x314dc68));
      if (*(int *)(**(int **)(_UNK_0314dd8c + 0x314dc7c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_03143658();
      if (iVar1 != 0) {
        func_0x0316c854(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x79ef,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

