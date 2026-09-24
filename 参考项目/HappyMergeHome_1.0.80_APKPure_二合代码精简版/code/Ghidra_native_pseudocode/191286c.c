
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192286c(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_01922a28 + 0x1922880);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01922a2c + 0x1922894));
    func_0x01438628(*(undefined4 *)(_UNK_01922a30 + 0x19228a0));
    func_0x01438628(*(undefined4 *)(_UNK_01922a34 + 0x19228ac));
    func_0x01438628(*(undefined4 *)(_UNK_01922a38 + 0x19228b8));
    func_0x01438628(*(undefined4 *)(_UNK_01922a3c + 0x19228c4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x16c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x16c3,0);
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
  iVar1 = FUN_019204d4(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    uVar4 = 1;
    if (iVar1 == 0) {
      iVar1 = func_0x01926264(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_01922a40 + 0x1922964) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01922a44 + 0x1922980));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_01922a48 + 0x19229b4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_01922a4c + 0x19229d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01922a50 + 0x19229f0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026ffbe0(iVar1,0);
      lVar6 = func_0x01936120(param_1);
      uVar4 = 0;
      if (lVar6 != 0) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

