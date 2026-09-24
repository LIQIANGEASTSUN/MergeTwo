
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c103b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01c10544 + 0x1c103d0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c10548 + 0x1c103e4));
    func_0x01438628(*(undefined4 *)(_UNK_01c1054c + 0x1c103f0));
    func_0x01438628(*(undefined4 *)(_UNK_01c10550 + 0x1c103fc));
    func_0x01438628(*(undefined4 *)(_UNK_01c10554 + 0x1c10408));
    func_0x01438628(*(undefined4 *)(_UNK_01c10558 + 0x1c10414));
    func_0x01438628(*(undefined4 *)(_UNK_01c1055c + 0x1c10420));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x34a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x34a7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028cfedc + 0x28cfde8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028cfee0 + 0x28cfdfc),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028cfee4 + 0x28cfecc));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c10560 + 0x1c1047c));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0x014385cc((undefined4 *)(iVar1 + 0xc),param_1);
  if (*(int *)(**(int **)(_UNK_01c10564 + 0x1c104b8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01c10568 + 0x1c104d4));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x1c);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c1056c + 0x1c104f4));
  func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_01c10570 + 0x1c10514),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar3,uVar5,**(undefined4 **)(_UNK_01c10574 + 0x1c10538));
  return;
}

