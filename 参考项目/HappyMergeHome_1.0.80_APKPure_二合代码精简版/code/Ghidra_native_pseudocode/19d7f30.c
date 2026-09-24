
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019e7f30(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_019e8010 + 0x19e7f40);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019e8014 + 0x19e7f54));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x42f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x42f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar2 = (char *)(_UNK_0287751c + 0x287744c);
    if (*pcVar2 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02877520 + 0x2877460),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar3,&uStack_30,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02877524 + 0x287750c));
    return iVar1;
  }
  piVar4 = *(int **)(_UNK_019e8018 + 0x19e7fa8);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar4;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4();
    func_0x019edf94();
    iVar6 = *piVar4;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar4;
    }
    **(int **)(iVar6 + 0x5c) = iVar1;
    func_0x014385cc(*(undefined4 *)(*piVar4 + 0x5c),iVar1);
  }
  return iVar1;
}

