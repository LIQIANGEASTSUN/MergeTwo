
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02b4c2c8 + 0x2b4c138);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4c2cc + 0x2b4c14c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c2d0 + 0x2b4c158));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c2d4 + 0x2b4c164));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c2d8 + 0x2b4c170));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c2dc + 0x2b4c17c));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x2edc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2edc,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4c2e0 + 0x2b4c1dc));
  func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02b4c2e4 + 0x2b4c1f0));
  piVar7 = (int *)(param_1 + 0x60);
  *piVar7 = iVar1;
  func_0x014385cc(piVar7,iVar1);
  puVar8 = *(undefined4 **)(_UNK_02b4c2e8 + 0x2b4c218);
  puVar9 = *(undefined4 **)(_UNK_02b4c2ec + 0x2b4c220);
  while( true ) {
    iVar1 = func_0x02b4f3d8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar1 = func_0x02b4f3d8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0152983c(iVar1,iVar4,*puVar8);
    iVar6 = *piVar7;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x046cc8c8(iVar6,uVar5,iVar1,*puVar9);
    iVar4 = iVar4 + 1;
  }
  uVar5 = func_0x02b4f62c(param_1);
  *(undefined4 *)(param_1 + 100) = uVar5;
  uVar5 = func_0x02b4f780(param_1);
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  return;
}

