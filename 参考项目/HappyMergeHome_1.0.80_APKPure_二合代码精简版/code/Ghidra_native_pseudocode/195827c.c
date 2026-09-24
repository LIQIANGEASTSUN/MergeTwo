
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196827c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_019685f0 + 0x1968294);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019685f4 + 0x19682a8));
    func_0x01438628(*(undefined4 *)(_UNK_019685f8 + 0x19682b4));
    func_0x01438628(*(undefined4 *)(_UNK_019685fc + 0x19682c0));
    func_0x01438628(*(undefined4 *)(_UNK_01968600 + 0x19682cc));
    func_0x01438628(*(undefined4 *)(_UNK_01968604 + 0x19682d8));
    func_0x01438628(*(undefined4 *)(_UNK_01968608 + 0x19682e4));
    func_0x01438628(*(undefined4 *)(_UNK_0196860c + 0x19682f0));
    func_0x01438628(*(undefined4 *)(_UNK_01968610 + 0x19682fc));
    func_0x01438628(*(undefined4 *)(_UNK_01968614 + 0x1968308));
    func_0x01438628(*(undefined4 *)(_UNK_01968618 + 0x1968314));
    func_0x01438628(*(undefined4 *)(_UNK_0196861c + 0x1968320));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x98f5,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01968620 + 0x1968384) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01968624 + 0x19683a0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01968628 + 0x19683c0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_019600b0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01967d94(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar6,uVar2,**(undefined4 **)(_UNK_0196862c + 0x1968420));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar6,**(undefined4 **)(_UNK_01968630 + 0x1968458));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_01968634 + 0x1968474);
      puVar7 = *(undefined4 **)(_UNK_01968638 + 0x196847c);
      while (iVar3 = func_0x015109ec(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_019600b0(param_1);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0196863c + 0x1968500));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01968644 + 0x1968524));
      if (*(int *)(**(int **)(_UNK_01968648 + 0x1968538) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0195dd1c();
      if (iVar1 != 0) {
        func_0x019885c4(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x98f5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

