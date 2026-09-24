
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c10604(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  pcVar3 = (char *)(_UNK_01c10740 + 0x1c10618);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c10744 + 0x1c1062c));
    func_0x01438628(*(undefined4 *)(_UNK_01c10748 + 0x1c10638));
    func_0x01438628(*(undefined4 *)(_UNK_01c1074c + 0x1c10644));
    func_0x01438628(*(undefined4 *)(_UNK_01c10750 + 0x1c10650));
    func_0x01438628(*(undefined4 *)(_UNK_01c10754 + 0x1c1065c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x34e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x34e4,0);
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
    func_0x024f56f0(&uStack_30,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01c10758 + 0x1c106b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c1075c + 0x1c106d0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c10760 + 0x1c106f0));
  func_0x03a062d0(uVar5,param_1,**(undefined4 **)(_UNK_01c10764 + 0x1c10710),0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_04cfe41c)(iVar1,uVar5,**(undefined4 **)(_UNK_01c10768 + 0x1c10734));
  return;
}

