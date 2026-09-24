
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017aac68(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_017aafb4 + 0x17aac80);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017aafb8 + 0x17aac94));
    func_0x01438628(*(undefined4 *)(_UNK_017aafbc + 0x17aaca0));
    func_0x01438628(*(undefined4 *)(_UNK_017aafc0 + 0x17aacac));
    func_0x01438628(*(undefined4 *)(_UNK_017aafc4 + 0x17aacb8));
    func_0x01438628(*(undefined4 *)(_UNK_017aafc8 + 0x17aacc4));
    func_0x01438628(*(undefined4 *)(_UNK_017aafcc + 0x17aacd0));
    func_0x01438628(*(undefined4 *)(_UNK_017aafd0 + 0x17aacdc));
    func_0x01438628(*(undefined4 *)(_UNK_017aafd4 + 0x17aace8));
    func_0x01438628(*(undefined4 *)(_UNK_017aafd8 + 0x17aacf4));
    func_0x01438628(*(undefined4 *)(_UNK_017aafdc + 0x17aad00));
    func_0x01438628(*(undefined4 *)(_UNK_017aafe0 + 0x17aad0c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8e5c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017aafe4 + 0x17aad70) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017aafe8 + 0x17aad8c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017aafec + 0x17aadac));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x26,**(undefined4 **)(_UNK_017aaff0 + 0x17aade4));
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar4,**(undefined4 **)(_UNK_017aaff4 + 0x17aae1c));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar6 = *(undefined4 **)(_UNK_017aaff8 + 0x17aae38);
      puVar7 = *(undefined4 **)(_UNK_017aaffc + 0x17aae40);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar4 = iStack_24, iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 8)) {
          iVar2 = FUN_017a2fe8(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar5 = *(undefined4 *)(iVar4 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar2,uVar5,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017ab000 + 0x17aaec4));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_017ab008 + 0x17aaee8));
      if (*(int *)(**(int **)(_UNK_017ab00c + 0x17aaefc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_017a1d58();
      if (iVar1 != 0) {
        func_0x017c7ff8(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8e5c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

