
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03082ef4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_03083030 + 0x3082f08);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03083034 + 0x3082f1c));
    func_0x01438628(*(undefined4 *)(_UNK_03083038 + 0x3082f28));
    func_0x01438628(*(undefined4 *)(_UNK_0308303c + 0x3082f34));
    func_0x01438628(*(undefined4 *)(_UNK_03083040 + 0x3082f40));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x75a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x75a2,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(**(int **)(_UNK_03083044 + 0x3082fa8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03083048 + 0x3082fc4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0308304c + 0x3082fe4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 900) == 0) {
      uVar5 = 1;
    }
    else {
      iVar1 = func_0x047536d4(*(int *)(iVar1 + 900),**(undefined4 **)(_UNK_03083050 + 0x3083014));
      uVar5 = (uint)(iVar1 == 0);
    }
  }
  return uVar5;
}

