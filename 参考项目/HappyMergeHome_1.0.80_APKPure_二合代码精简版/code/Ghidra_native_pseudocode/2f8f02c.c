
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9f02c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
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
  
  pcVar7 = (char *)(_UNK_02f9f224 + 0x2f9f044);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9f228 + 0x2f9f058));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f22c + 0x2f9f064));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f230 + 0x2f9f070));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f234 + 0x2f9f07c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f238 + 0x2f9f088));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f23c + 0x2f9f094));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f240 + 0x2f9f0a0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x214d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x214d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a1c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02f9f244 + 0x2f9f0fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02f8feac();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = FUN_02f9e420(iVar1,param_2);
  if (*(int *)(**(int **)(_UNK_02f9f248 + 0x2f9f13c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9f24c + 0x2f9f158));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029b1058(iVar1,uVar6,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    piVar8 = *(int **)(_UNK_02f9f250 + 0x2f9f1a4);
    puVar9 = *(undefined4 **)(_UNK_02f9f254 + 0x2f9f1ac);
    puVar10 = *(undefined4 **)(_UNK_02f9f258 + 0x2f9f1b4);
    do {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(*puVar9);
      iVar3 = func_0x04cfd760(iVar1,iVar5,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02be17e0(iVar2,uVar6,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0xc));
  }
  return;
}

