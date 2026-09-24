
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3d564(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02c3d818 + 0x2c3d580);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3d81c + 0x2c3d594));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d820 + 0x2c3d5a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d824 + 0x2c3d5ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d828 + 0x2c3d5b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d82c + 0x2c3d5c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d830 + 0x2c3d5d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d834 + 0x2c3d5dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d838 + 0x2c3d5e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d83c + 0x2c3d5f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3d840 + 0x2c3d600));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_30 = 0;
  iVar2 = func_0x02953fd4(0xe83,0);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    if (param_2 != 0 && iVar2 != 0) {
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c3d844 + 0x2c3d680));
      func_0x024eed9c(iVar5,**(undefined4 **)(_UNK_02c3d848 + 0x2c3d694));
      func_0x024ef7ac(&uStack_40,param_2,**(undefined4 **)(_UNK_02c3d84c + 0x2c3d6b0));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      puVar6 = *(undefined4 **)(_UNK_02c3d850 + 0x2c3d6cc);
      piVar7 = *(int **)(_UNK_02c3d854 + 0x2c3d6d4);
      puVar8 = *(undefined4 **)(_UNK_02c3d858 + 0x2c3d6dc);
      while (iVar2 = func_0x04873f24(&uStack_30,*puVar6), uVar1 = uStack_24, iVar2 != 0) {
        iVar2 = **(int **)(*piVar7 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x02c3d868(iVar2);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02bebefc(iVar2,uVar1,0);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar2 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024f0ea8(iVar5,iVar3,*puVar8);
        }
      }
      func_0x04873f20(&uStack_30,**(undefined4 **)(_UNK_02c3d860 + 0x2c3d770));
    }
  }
  else {
    iVar2 = func_0x029540a4(0xe83,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02895058(iVar2,param_1,param_2,0);
  }
  return iVar5;
}

