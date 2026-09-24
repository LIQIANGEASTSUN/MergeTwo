
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018bf948(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_018bfb04 + 0x18bf95c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018bfb08 + 0x18bf970));
    func_0x01438628(*(undefined4 *)(_UNK_018bfb0c + 0x18bf97c));
    func_0x01438628(*(undefined4 *)(_UNK_018bfb10 + 0x18bf988));
    func_0x01438628(*(undefined4 *)(_UNK_018bfb14 + 0x18bf994));
    func_0x01438628(*(undefined4 *)(_UNK_018bfb18 + 0x18bf9a0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x1457,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1457,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_018bd3dc(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    uVar4 = 1;
    if (iVar1 == 0) {
      iVar1 = func_0x018c3704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_018bfb1c + 0x18bfa40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018bfb20 + 0x18bfa5c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_018bfb24 + 0x18bfa90));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_018bfb28 + 0x18bfab0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018bfb2c + 0x18bfacc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026ffbe0(iVar1,0);
      lVar6 = func_0x018d2c88(param_1);
      uVar4 = 0;
      if (lVar6 != 0) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

