
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01da7774(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01da7a2c + 0x1da778c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da7a30 + 0x1da77a0));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a34 + 0x1da77ac));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a38 + 0x1da77b8));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a3c + 0x1da77c4));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a40 + 0x1da77d0));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a44 + 0x1da77dc));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a48 + 0x1da77e8));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a4c + 0x1da77f4));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a50 + 0x1da7800));
    func_0x01438628(*(undefined4 *)(_UNK_01da7a54 + 0x1da780c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x3ef4,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01da7a58 + 0x1da787c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01da7a5c + 0x1da7890));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01da7a60 + 0x1da78b4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da7a64 + 0x1da78d0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d6cb8(iVar1,**(undefined4 **)(_UNK_01da7a68 + 0x1da78f0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01da7a6c + 0x1da791c));
      puVar5 = *(undefined4 **)(_UNK_01da7a70 + 0x1da7930);
      puVar7 = *(undefined4 **)(_UNK_01da7a74 + 0x1da7938);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01da7a78 + 0x1da7990));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x3ef4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028d6a84(iVar1,param_1,0);
  }
  return iVar1;
}

