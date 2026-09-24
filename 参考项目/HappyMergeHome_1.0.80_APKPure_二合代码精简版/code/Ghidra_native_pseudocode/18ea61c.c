
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018fa61c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_018fa8d4 + 0x18fa634);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fa8d8 + 0x18fa648));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8dc + 0x18fa654));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8e0 + 0x18fa660));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8e4 + 0x18fa66c));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8e8 + 0x18fa678));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8ec + 0x18fa684));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8f0 + 0x18fa690));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8f4 + 0x18fa69c));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8f8 + 0x18fa6a8));
    func_0x01438628(*(undefined4 *)(_UNK_018fa8fc + 0x18fa6b4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x9667,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fa900 + 0x18fa724));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018fa904 + 0x18fa738));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_018fa908 + 0x18fa75c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fa90c + 0x18fa778));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d7d08(iVar1,**(undefined4 **)(_UNK_018fa910 + 0x18fa798));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018fa914 + 0x18fa7c4));
      puVar5 = *(undefined4 **)(_UNK_018fa918 + 0x18fa7d8);
      puVar7 = *(undefined4 **)(_UNK_018fa91c + 0x18fa7e0);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018fa920 + 0x18fa838));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x9667,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292a3d8(iVar1,param_1,0);
  }
  return iVar1;
}

