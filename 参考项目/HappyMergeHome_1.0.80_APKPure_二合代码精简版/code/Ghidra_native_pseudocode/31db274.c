
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031eb274(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar3 = (char *)(_UNK_031eb660 + 0x31eb28c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031eb664 + 0x31eb2a0));
    func_0x01438628(*(undefined4 *)(_UNK_031eb668 + 0x31eb2ac));
    func_0x01438628(*(undefined4 *)(_UNK_031eb66c + 0x31eb2b8));
    func_0x01438628(*(undefined4 *)(_UNK_031eb670 + 0x31eb2c4));
    func_0x01438628(*(undefined4 *)(_UNK_031eb674 + 0x31eb2d0));
    func_0x01438628(*(undefined4 *)(_UNK_031eb678 + 0x31eb2dc));
    func_0x01438628(*(undefined4 *)(_UNK_031eb67c + 0x31eb2e8));
    func_0x01438628(*(undefined4 *)(_UNK_031eb680 + 0x31eb2f4));
    func_0x01438628(*(undefined4 *)(_UNK_031eb684 + 0x31eb300));
    func_0x01438628(*(undefined4 *)(_UNK_031eb688 + 0x31eb30c));
    func_0x01438628(*(undefined4 *)(_UNK_031eb68c + 0x31eb318));
    *pcVar3 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xb32,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031eb690 + 0x31eb390) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar4 = *(undefined4 **)(_UNK_031eb694 + 0x31eb3ac);
    iVar1 = func_0x04e4a028(*puVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar5 = *(undefined4 **)(_UNK_031eb698 + 0x31eb3d0);
    iVar1 = func_0x036c7bec(iVar1,*puVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x04e4a028(*puVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,*puVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x21c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0268be6c(iVar1,0);
    iVar1 = func_0x04e4a028(*puVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,*puVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x220);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04753f38(&uStack_58,iVar1,**(undefined4 **)(_UNK_031eb69c + 0x31eb488));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar4 = *(undefined4 **)(_UNK_031eb6a0 + 0x31eb4b4);
    piVar7 = *(int **)(_UNK_031eb6a4 + 0x31eb4bc);
    puVar5 = *(undefined4 **)(_UNK_031eb6a8 + 0x31eb4c4);
    while (iVar1 = func_0x048b6860(&uStack_40,*puVar4), iVar1 != 0) {
      iVar2 = *piVar7;
      iVar1 = (int)uStack_30;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x04739b20(iVar2,uVar6,*puVar5);
    }
    func_0x048b69ac(&uStack_40,**(undefined4 **)(_UNK_031eb6ac + 0x31eb534));
    puVar4 = *(undefined4 **)(_UNK_031eb6b8 + 0x31eb55c);
    puVar5 = *(undefined4 **)(_UNK_031eb6bc + 0x31eb564);
    if (*(int *)(**(int **)(_UNK_031eb6b4 + 0x31eb548) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(*puVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,*puVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x220);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73ab8(iVar1,**(undefined4 **)(_UNK_031eb6c0 + 0x31eb5b8));
    FUN_031e6c04(param_1);
  }
  else {
    iVar1 = func_0x029540a4(0xb32,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

