
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019ed69c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  int extraout_r2_00;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_019ed8d0 + 0x19ed6b4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ed8d4 + 0x19ed6c8));
    func_0x01438628(*(undefined4 *)(_UNK_019ed8d8 + 0x19ed6d4));
    func_0x01438628(*(undefined4 *)(_UNK_019ed8dc + 0x19ed6e0));
    func_0x01438628(*(undefined4 *)(_UNK_019ed8e0 + 0x19ed6ec));
    func_0x01438628(*(undefined4 *)(_UNK_019ed8e4 + 0x19ed6f8));
    func_0x01438628(*(undefined4 *)(_UNK_019ed8e8 + 0x19ed704));
    func_0x01438628(*(undefined4 *)(_UNK_019ed8ec + 0x19ed710));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x3704,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019ed8f0 + 0x19ed774) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_019ed8f4 + 0x19ed790));
    iVar1 = extraout_r2;
    if (iVar3 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r2_00;
    }
    iVar3 = *(int *)(iVar3 + 0x18);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      func_0x0152da0c(&uStack_28,iVar3,**(undefined4 **)(_UNK_019ed8f8 + 0x19ed7cc));
      puVar5 = *(undefined4 **)(_UNK_019ed8fc + 0x19ed7e0);
      do {
        iVar3 = func_0x015109ec(&uStack_28,*puVar5);
        iVar1 = iStack_1c;
        if (iVar3 == 0) {
          iVar1 = 8;
          goto LAB_019ed820;
        }
        if (iStack_1c == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_019e801c(param_1,*(undefined4 *)(iVar1 + 8));
      } while (iVar1 == 3);
      iVar1 = 7;
LAB_019ed820:
      func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_019ed900 + 0x19ed82c));
      uVar2 = 0;
      if (iVar1 != 7) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3704,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02869630(iVar1,param_1,0);
  }
  return uVar2;
}

