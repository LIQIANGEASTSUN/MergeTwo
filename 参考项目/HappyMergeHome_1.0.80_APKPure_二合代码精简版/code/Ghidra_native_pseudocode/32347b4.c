
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032447b4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_03244b28 + 0x32447cc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03244b2c + 0x32447e0));
    func_0x01438628(*(undefined4 *)(_UNK_03244b30 + 0x32447ec));
    func_0x01438628(*(undefined4 *)(_UNK_03244b34 + 0x32447f8));
    func_0x01438628(*(undefined4 *)(_UNK_03244b38 + 0x3244804));
    func_0x01438628(*(undefined4 *)(_UNK_03244b3c + 0x3244810));
    func_0x01438628(*(undefined4 *)(_UNK_03244b40 + 0x324481c));
    func_0x01438628(*(undefined4 *)(_UNK_03244b44 + 0x3244828));
    func_0x01438628(*(undefined4 *)(_UNK_03244b48 + 0x3244834));
    func_0x01438628(*(undefined4 *)(_UNK_03244b4c + 0x3244840));
    func_0x01438628(*(undefined4 *)(_UNK_03244b50 + 0x324484c));
    func_0x01438628(*(undefined4 *)(_UNK_03244b54 + 0x3244858));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7fb2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03244b58 + 0x32448bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03244b5c + 0x32448d8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03244b60 + 0x32448f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_0323c5d0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_032442cc(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b72148(iVar6,uVar2,**(undefined4 **)(_UNK_03244b64 + 0x3244958));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_40,iVar6,**(undefined4 **)(_UNK_03244b68 + 0x3244990));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_03244b6c + 0x32449ac);
      puVar7 = *(undefined4 **)(_UNK_03244b70 + 0x32449b4);
      while (iVar3 = func_0x04878f14(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_0323c5d0(param_1);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03244b74 + 0x3244a38));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b776fc(iVar1,**(undefined4 **)(_UNK_03244b7c + 0x3244a5c));
      if (*(int *)(**(int **)(_UNK_03244b80 + 0x3244a70) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0323a23c();
      if (iVar1 != 0) {
        func_0x03264530(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7fb2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

