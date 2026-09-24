
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c84c48(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar3 = (char *)(_UNK_01c84e6c + 0x1c84c5c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c84e70 + 0x1c84c70));
    func_0x01438628(*(undefined4 *)(_UNK_01c84e74 + 0x1c84c7c));
    func_0x01438628(*(undefined4 *)(_UNK_01c84e78 + 0x1c84c88));
    func_0x01438628(*(undefined4 *)(_UNK_01c84e7c + 0x1c84c94));
    func_0x01438628(*(undefined4 *)(_UNK_01c84e80 + 0x1c84ca0));
    func_0x01438628(*(undefined4 *)(_UNK_01c84e84 + 0x1c84cac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e6,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar8 = *(int **)(_UNK_01c84e88 + 0x1c84d1c);
  iVar4 = *(int *)(iVar1 + 0x10);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar8;
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x14);
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar8;
    }
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c84e8c + 0x1c84d68));
    func_0x024f1190(iVar5,uVar6,**(undefined4 **)(_UNK_01c84e90 + 0x1c84d88),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x14);
    *piVar8 = iVar5;
    func_0x014385cc(piVar8,iVar5);
  }
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x03b77f68(iVar4,iVar5,**(undefined4 **)(_UNK_01c84e94 + 0x1c84dc0));
  iVar1 = 0;
  puVar7 = *(undefined4 **)(_UNK_01c84e98 + 0x1c84dd8);
  while( true ) {
    iVar4 = FUN_01c733a0(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar1) break;
    iVar4 = FUN_01c733a0(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar7);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar1 = iVar1 + 1;
    func_0x026b0790(iVar4,iVar1,0);
  }
  return;
}

