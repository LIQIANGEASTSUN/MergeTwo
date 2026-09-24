
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01842a20(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01842d94 + 0x1842a38);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01842d98 + 0x1842a4c));
    func_0x01438628(*(undefined4 *)(_UNK_01842d9c + 0x1842a58));
    func_0x01438628(*(undefined4 *)(_UNK_01842da0 + 0x1842a64));
    func_0x01438628(*(undefined4 *)(_UNK_01842da4 + 0x1842a70));
    func_0x01438628(*(undefined4 *)(_UNK_01842da8 + 0x1842a7c));
    func_0x01438628(*(undefined4 *)(_UNK_01842dac + 0x1842a88));
    func_0x01438628(*(undefined4 *)(_UNK_01842db0 + 0x1842a94));
    func_0x01438628(*(undefined4 *)(_UNK_01842db4 + 0x1842aa0));
    func_0x01438628(*(undefined4 *)(_UNK_01842db8 + 0x1842aac));
    func_0x01438628(*(undefined4 *)(_UNK_01842dbc + 0x1842ab8));
    func_0x01438628(*(undefined4 *)(_UNK_01842dc0 + 0x1842ac4));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x921a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01842dc4 + 0x1842b28) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01842dc8 + 0x1842b44));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01842dcc + 0x1842b64));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_0183a850(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01842538(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar6,uVar2,**(undefined4 **)(_UNK_01842dd0 + 0x1842bc4));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar6,**(undefined4 **)(_UNK_01842dd4 + 0x1842bfc));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_01842dd8 + 0x1842c18);
      puVar7 = *(undefined4 **)(_UNK_01842ddc + 0x1842c20);
      while (iVar3 = func_0x015109ec(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_0183a850(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar2 = *(undefined4 *)(iVar6 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01842de0 + 0x1842ca4));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01842de8 + 0x1842cc8));
      if (*(int *)(**(int **)(_UNK_01842dec + 0x1842cdc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_018386ac();
      if (iVar1 != 0) {
        func_0x01861918(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x921a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

