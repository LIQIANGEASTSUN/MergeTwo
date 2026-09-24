
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1dcc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01b1de6c + 0x1b1dcdc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1de70 + 0x1b1dcf0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1de74 + 0x1b1dcfc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1de78 + 0x1b1dd08));
    func_0x01438628(*(undefined4 *)(_UNK_01b1de7c + 0x1b1dd14));
    func_0x01438628(*(undefined4 *)(_UNK_01b1de80 + 0x1b1dd20));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x381e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x381e,0);
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
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b1de84 + 0x1b1dd80));
  func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01b1de88 + 0x1b1dd94));
  piVar7 = (int *)(param_1 + 0x60);
  *piVar7 = iVar1;
  func_0x014385cc(piVar7,iVar1);
  puVar8 = *(undefined4 **)(_UNK_01b1de8c + 0x1b1ddbc);
  puVar9 = *(undefined4 **)(_UNK_01b1de90 + 0x1b1ddc4);
  while( true ) {
    iVar1 = func_0x01b21084(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar1 = func_0x01b21084(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0152983c(iVar1,iVar4,*puVar8);
    iVar5 = *piVar7;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f1078(iVar5,uVar6,iVar1,*puVar9);
    iVar4 = iVar4 + 1;
  }
  uVar6 = func_0x01b212d8(param_1);
  *(undefined4 *)(param_1 + 100) = uVar6;
  uVar6 = func_0x01b2142c(param_1);
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  return;
}

