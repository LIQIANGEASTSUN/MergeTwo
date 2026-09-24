
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc5e3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar8 = (int *)(param_1 + 0x40);
  pcVar7 = (char *)(_UNK_01cc60c0 + 0x1cc5e5c);
  puVar6 = *(undefined4 **)(_UNK_01cc60c4 + 0x1cc5e60);
  while( true ) {
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01cc60c8 + 0x1cc5e74));
      func_0x01438628(puVar6);
      func_0x01438628(*(undefined4 *)(_UNK_01cc60cc + 0x1cc5e88));
      func_0x01438628(*(undefined4 *)(_UNK_01cc60d0 + 0x1cc5e94));
      func_0x01438628(*(undefined4 *)(_UNK_01cc60d4 + 0x1cc5ea0));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x966,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x966,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_30 = 0;
      func_0x024f56c0(&uStack_48,0,0);
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a6c(&uStack_30,param_1,0);
      iVar3 = *(int *)(iVar1 + 8);
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      func_0x024f56d0(iVar3,uVar4,&uStack_30,uVar2,0,0);
      return;
    }
    if (*piVar8 == 0) {
      return;
    }
    iVar1 = FUN_01cc28c8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *piVar8;
    iVar1 = *(int *)(iVar1 + 0x34);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (iVar1 < *(int *)(iVar3 + 0x14)) break;
    iVar1 = FUN_01cc28c8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *piVar8;
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b75ba0(iVar1,uVar4,**(undefined4 **)(_UNK_01cc60d8 + 0x1cc5f4c));
    iVar1 = FUN_01cc28c8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *piVar8;
    iVar5 = *(int *)(iVar1 + 0x34);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x026a80fc(iVar1,iVar5 - *(int *)(iVar3 + 0x14),0);
    iVar1 = FUN_01cc28c8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026a8040(iVar1,*(int *)(iVar1 + 0x30) + 1,0);
    iVar1 = FUN_01cc28c8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) < iVar1) {
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a8040(iVar1,1,0);
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01cc60dc + 0x1cc602c));
    func_0x03a062d0(uVar4,param_1,**(undefined4 **)(_UNK_01cc60e0 + 0x1cc604c),0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0618(iVar1,uVar4,*puVar6);
    *piVar8 = iVar1;
    func_0x014385cc(piVar8,iVar1);
  }
  return;
}

