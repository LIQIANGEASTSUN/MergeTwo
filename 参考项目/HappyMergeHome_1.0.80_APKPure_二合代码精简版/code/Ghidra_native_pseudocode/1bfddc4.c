
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c0ddc4(void)

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
  
  pcVar2 = (char *)(_UNK_01c0dea4 + 0x1c0ddd4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c0dea8 + 0x1c0dde8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xb8b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xb8b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar2 = (char *)(_UNK_0288e6d4 + 0x288e604);
    if (*pcVar2 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0288e6d8 + 0x288e618),0);
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
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288e6dc + 0x288e6c4));
    return iVar1;
  }
  piVar4 = *(int **)(_UNK_01c0deac + 0x1c0de3c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar4;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4();
    func_0x01c0eb80();
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

