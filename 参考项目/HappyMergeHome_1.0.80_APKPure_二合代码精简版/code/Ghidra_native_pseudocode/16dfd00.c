
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016efd00(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016effb8 + 0x16efd18);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016effbc + 0x16efd2c));
    func_0x01438628(*(undefined4 *)(_UNK_016effc0 + 0x16efd38));
    func_0x01438628(*(undefined4 *)(_UNK_016effc4 + 0x16efd44));
    func_0x01438628(*(undefined4 *)(_UNK_016effc8 + 0x16efd50));
    func_0x01438628(*(undefined4 *)(_UNK_016effcc + 0x16efd5c));
    func_0x01438628(*(undefined4 *)(_UNK_016effd0 + 0x16efd68));
    func_0x01438628(*(undefined4 *)(_UNK_016effd4 + 0x16efd74));
    func_0x01438628(*(undefined4 *)(_UNK_016effd8 + 0x16efd80));
    func_0x01438628(*(undefined4 *)(_UNK_016effdc + 0x16efd8c));
    func_0x01438628(*(undefined4 *)(_UNK_016effe0 + 0x16efd98));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8a9a,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016effe4 + 0x16efe08));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016effe8 + 0x16efe1c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_016effec + 0x16efe40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016efff0 + 0x16efe5c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dde10(iVar1,**(undefined4 **)(_UNK_016efff4 + 0x16efe7c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016efff8 + 0x16efea8));
      puVar5 = *(undefined4 **)(_UNK_016efffc + 0x16efebc);
      puVar7 = *(undefined4 **)(_UNK_016f0000 + 0x16efec4);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016f0004 + 0x16eff1c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8a9a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02924168(iVar1,param_1,0);
  }
  return iVar1;
}

