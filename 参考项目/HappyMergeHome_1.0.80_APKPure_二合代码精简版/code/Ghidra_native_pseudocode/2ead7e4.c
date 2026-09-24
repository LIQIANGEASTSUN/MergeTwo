
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ebd7e4(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_02ebd958 + 0x2ebd7f8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ebd95c + 0x2ebd80c));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd960 + 0x2ebd818));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd964 + 0x2ebd824));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd968 + 0x2ebd830));
    func_0x01438628(*(undefined4 *)(_UNK_02ebd96c + 0x2ebd83c));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4ea1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4ea1,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02ebd970 + 0x2ebd894) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02ebd974 + 0x2ebd8b0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02ebd978 + 0x2ebd8d0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (0 < *(int *)(iVar3 + 0x18c)) {
    return;
  }
  iVar5 = FUN_02ebcd44(param_1);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar5 + 0xc) < 1) {
    return;
  }
  iVar5 = func_0x04cfd760(iVar5,0,**(undefined4 **)(_UNK_02ebd97c + 0x2ebd928));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 8);
  pcVar6 = (char *)(_UNK_026b6b00 + 0x26b6a78);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026b6b04 + 0x26b6a8c),iVar5,0);
    func_0x01438628(*(undefined4 *)(_UNK_026b6b08 + 0x26b6a98));
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar3 + 0x18c) == iVar5) {
    return;
  }
  piVar1 = *(int **)(_UNK_026b6b0c + 0x26b6ab8);
  *(int *)(iVar3 + 0x18c) = iVar5;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026b6b10 + 0x26b6ad8));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}

