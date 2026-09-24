
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4f3d8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02b4f5f0 + 0x2b4f3ec);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4f5f4 + 0x2b4f400));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f5f8 + 0x2b4f40c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f5fc + 0x2b4f418));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f600 + 0x2b4f424));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f604 + 0x2b4f430));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f608 + 0x2b4f43c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f60c + 0x2b4f448));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2edd,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02b3ebc0(param_1);
    if (iVar1 == 0) {
      FUN_02b4bde4(param_1);
    }
    iVar1 = FUN_02b3ebc0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      if (*(int *)(**(int **)(_UNK_02b4f610 + 0x2b4f4d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02b4f614 + 0x2b4f4f4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x020e9710(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x11c);
      if (iVar1 < 1) {
        iVar1 = 0x65;
      }
      iVar3 = FUN_02b3ebc0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026a1a98(iVar3,iVar1,0);
    }
    if (*(int *)(**(int **)(_UNK_02b4f618 + 0x2b4f564) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b4f61c + 0x2b4f580));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02b4f620 + 0x2b4f5a0));
    func_0x03a062d0(uVar5,param_1,**(undefined4 **)(_UNK_02b4f624 + 0x2b4f5c0),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_04cfe28c)(iVar1,uVar5,**(undefined4 **)(_UNK_02b4f628 + 0x2b4f5e4));
    return;
  }
  iVar1 = func_0x029540a4(0x2edd,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar4 = (char *)(_UNK_028c9770 + 0x28c9690);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028c9774 + 0x28c96a4),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0);
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
  func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028c9778 + 0x28c9760));
  return;
}

