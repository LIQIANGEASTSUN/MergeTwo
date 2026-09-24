
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01809044(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_018093d0 + 0x180905c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018093d4 + 0x1809070));
    func_0x01438628(*(undefined4 *)(_UNK_018093d8 + 0x180907c));
    func_0x01438628(*(undefined4 *)(_UNK_018093dc + 0x1809088));
    func_0x01438628(*(undefined4 *)(_UNK_018093e0 + 0x1809094));
    func_0x01438628(*(undefined4 *)(_UNK_018093e4 + 0x18090a0));
    func_0x01438628(*(undefined4 *)(_UNK_018093e8 + 0x18090ac));
    func_0x01438628(*(undefined4 *)(_UNK_018093ec + 0x18090b8));
    func_0x01438628(*(undefined4 *)(_UNK_018093f0 + 0x18090c4));
    func_0x01438628(*(undefined4 *)(_UNK_018093f4 + 0x18090d0));
    func_0x01438628(*(undefined4 *)(_UNK_018093f8 + 0x18090dc));
    func_0x01438628(*(undefined4 *)(_UNK_018093fc + 0x18090e8));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x90a4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01809400 + 0x180914c) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_01809404 + 0x1809168);
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01809408 + 0x1809188));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x13,**(undefined4 **)(_UNK_0180940c + 0x18091c0));
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar5,**(undefined4 **)(_UNK_01809410 + 0x18091f8));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar7 = *(undefined4 **)(_UNK_01809414 + 0x1809214);
      puVar8 = *(undefined4 **)(_UNK_01809418 + 0x180921c);
      while (iVar2 = func_0x015109ec(&uStack_38,*puVar7), iVar5 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar5 + 8)) {
          iVar2 = FUN_018013d8(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x18);
          uVar6 = *(undefined4 *)(iVar5 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar2,uVar6,*puVar8);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_0180941c + 0x18092a0));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01809424 + 0x18092c4));
      piVar3 = *(int **)(_UNK_0180942c + 0x18092ec);
      if (*(int *)(**(int **)(_UNK_01809428 + 0x18092d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_01800148();
      if (iVar1 != 0) {
        func_0x01827a7c(iVar1,0);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0268f6bc(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x90a4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

