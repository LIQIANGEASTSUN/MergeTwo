
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0303f3c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_0303f580 + 0x303f3d8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0303f584 + 0x303f3ec));
    func_0x01438628(*(undefined4 *)(_UNK_0303f588 + 0x303f3f8));
    func_0x01438628(*(undefined4 *)(_UNK_0303f58c + 0x303f404));
    func_0x01438628(*(undefined4 *)(_UNK_0303f590 + 0x303f410));
    func_0x01438628(*(undefined4 *)(_UNK_0303f594 + 0x303f41c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x14a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x14a8,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_0303cfbc(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
    uVar5 = 1;
    if (iVar1 == 0) {
      iVar1 = func_0x0304411c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_0303f598 + 0x303f4bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0303f59c + 0x303f4d8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x04cfd760(iVar1,0,**(undefined4 **)(_UNK_0303f5a0 + 0x303f50c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(**(int **)(_UNK_0303f5a4 + 0x303f52c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0303f5a8 + 0x303f548));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026ffbe0(iVar1,0);
      lVar6 = func_0x03050ffc(param_1);
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

