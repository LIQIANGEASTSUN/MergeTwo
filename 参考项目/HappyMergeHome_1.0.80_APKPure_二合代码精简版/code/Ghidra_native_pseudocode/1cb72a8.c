
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc72a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01cc74bc + 0x1cc72c0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc74c0 + 0x1cc72d4));
    func_0x01438628(*(undefined4 *)(_UNK_01cc74c4 + 0x1cc72e0));
    func_0x01438628(*(undefined4 *)(_UNK_01cc74c8 + 0x1cc72ec));
    func_0x01438628(*(undefined4 *)(_UNK_01cc74cc + 0x1cc72f8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc74d0 + 0x1cc7304));
    func_0x01438628(*(undefined4 *)(_UNK_01cc74d4 + 0x1cc7310));
    func_0x01438628(*(undefined4 *)(_UNK_01cc74d8 + 0x1cc731c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x313f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x313f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028cc0e0 + 0x28cbfec);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028cc0e4 + 0x28cc000),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar2,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028cc0e8 + 0x28cc0d0));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01cc74dc + 0x1cc7378));
  func_0x024eeca8(iVar1,0);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar4 = iVar4 + 1;
  *(int *)(iVar1 + 8) = iVar4;
  iVar8 = iVar3;
  if (iVar3 == 0) {
    func_0x014388e4();
    iVar8 = *(int *)(param_1 + 0x3c);
  }
  if (*(int *)(iVar3 + 0xc) < iVar4) {
    piVar7 = *(int **)(_UNK_01cc74ec + 0x1cc73dc);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar7;
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01cc74f0 + 0x1cc7424));
      func_0x03a062d0(iVar4,uVar6,**(undefined4 **)(_UNK_01cc74f4 + 0x1cc7444),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x18);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
    }
  }
  else {
    iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01cc74e0 + 0x1cc7470));
    func_0x03a062d0(iVar4,iVar1,**(undefined4 **)(_UNK_01cc74e4 + 0x1cc748c),0);
  }
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar8,iVar4,**(undefined4 **)(_UNK_01cc74e8 + 0x1cc74b0));
  return;
}

