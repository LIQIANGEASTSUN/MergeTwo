
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fd680(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_029fd7fc + 0x29fd698);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fd800 + 0x29fd6ac));
    func_0x01438628(*(undefined4 *)(_UNK_029fd804 + 0x29fd6b8));
    func_0x01438628(*(undefined4 *)(_UNK_029fd808 + 0x29fd6c4));
    func_0x01438628(*(undefined4 *)(_UNK_029fd80c + 0x29fd6d0));
    func_0x01438628(*(undefined4 *)(_UNK_029fd810 + 0x29fd6dc));
    func_0x01438628(*(undefined4 *)(_UNK_029fd814 + 0x29fd6e8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2633,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2633,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028bd2b8 + 0x28bd1c4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028bd2bc + 0x28bd1d8),param_1,param_2,0);
      *pcVar6 = '\x01';
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028bd2c0 + 0x28bd2a8));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029fd818 + 0x29fd744));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = *(int **)(_UNK_029fd81c + 0x29fd76c);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_029fd820 + 0x29fd78c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_029fd824 + 0x29fd7ac));
  func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_029fd828 + 0x29fd7cc),0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfe1c0)(iVar4,uVar5,**(undefined4 **)(_UNK_029fd82c + 0x29fd7f0));
  return;
}

