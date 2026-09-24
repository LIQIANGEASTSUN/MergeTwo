
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ccca64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
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
  
  pcVar4 = (char *)(_UNK_01cccce4 + 0x1ccca78);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cccce8 + 0x1ccca8c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccccec + 0x1ccca98));
    func_0x01438628(*(undefined4 *)(_UNK_01ccccf0 + 0x1cccaa4));
    func_0x01438628(*(undefined4 *)(_UNK_01ccccf4 + 0x1cccab0));
    func_0x01438628(*(undefined4 *)(_UNK_01ccccf8 + 0x1cccabc));
    func_0x01438628(*(undefined4 *)(_UNK_01ccccfc + 0x1cccac8));
    func_0x01438628(*(undefined4 *)(_UNK_01cccd00 + 0x1cccad4));
    func_0x01438628(*(undefined4 *)(_UNK_01cccd04 + 0x1cccae0));
    func_0x01438628(*(undefined4 *)(_UNK_01cccd08 + 0x1cccaec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x927,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x927,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01ccc5a4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    iVar1 = FUN_01ccc5a4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0x30)) {
      if (*(int *)(**(int **)(_UNK_01cccd0c + 0x1cccb8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cccd10 + 0x1cccba8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01cccd14 + 0x1cccbc8));
      func_0x03a062d0(uVar7,param_1,**(undefined4 **)(_UNK_01cccd18 + 0x1cccbe8),0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0f0c(iVar1,uVar7,**(undefined4 **)(_UNK_01cccd1c + 0x1cccc0c));
      piVar3 = (int *)(param_1 + 0x3c);
      *piVar3 = iVar1;
      func_0x014385cc(piVar3,iVar1);
      piVar8 = *(int **)(_UNK_01cccd20 + 0x1cccc30);
      iVar6 = *piVar3;
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar8;
      }
      iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
      if (iVar5 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar8;
        }
        uVar7 = **(undefined4 **)(iVar1 + 0x5c);
        iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01cccd24 + 0x1cccc7c));
        func_0x024f1190(iVar5,uVar7,**(undefined4 **)(_UNK_01cccd28 + 0x1cccc9c),0);
        piVar3 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
        *piVar3 = iVar5;
        func_0x014385cc(piVar3,iVar5);
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      (*(code *)&SUB_04cff7cc)(iVar6,iVar5,**(undefined4 **)(_UNK_01cccd2c + 0x1ccccd4));
      return;
    }
  }
  return;
}

