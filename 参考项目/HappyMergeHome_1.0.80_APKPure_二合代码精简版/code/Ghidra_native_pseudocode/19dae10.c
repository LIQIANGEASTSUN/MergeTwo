
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019eae10(undefined4 param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  pcVar3 = (char *)(_UNK_019eafa8 + 0x19eae28);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019eafac + 0x19eae3c));
    func_0x01438628(*(undefined4 *)(_UNK_019eafb0 + 0x19eae48));
    func_0x01438628(*(undefined4 *)(_UNK_019eafb4 + 0x19eae54));
    func_0x01438628(*(undefined4 *)(_UNK_019eafb8 + 0x19eae60));
    func_0x01438628(*(undefined4 *)(_UNK_019eafbc + 0x19eae6c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3758,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019eafc0 + 0x19eaec8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar7 = func_0x014e9518(**(undefined4 **)(_UNK_019eafc4 + 0x19eaee4));
    iVar1 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar7 + 0x14);
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      iVar1 = func_0x0152983c(iVar5,0,**(undefined4 **)(_UNK_019eafc8 + 0x19eaf54));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_019eafcc + 0x19eaf78));
      uStack_20 = 0;
      func_0x02ca3c70(uVar6,uVar4,uVar2,0);
    }
    else {
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_019eafd0 + 0x19eaf18));
      uStack_20 = 0;
      func_0x02ca3c70(uVar6,0xc9,0x14,0);
    }
    return uVar6;
  }
  iVar1 = func_0x029540a4(0x3758,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar3 = (char *)(_UNK_028b8930 + 0x28b8850);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028b8934 + 0x28b8864),param_1,0);
    *pcVar3 = '\x01';
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
  uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028b8938 + 0x28b8920));
  return uVar6;
}

