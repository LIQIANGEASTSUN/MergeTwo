
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a3e5c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_017a4114 + 0x17a3e74);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a4118 + 0x17a3e88));
    func_0x01438628(*(undefined4 *)(_UNK_017a411c + 0x17a3e94));
    func_0x01438628(*(undefined4 *)(_UNK_017a4120 + 0x17a3ea0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4124 + 0x17a3eac));
    func_0x01438628(*(undefined4 *)(_UNK_017a4128 + 0x17a3eb8));
    func_0x01438628(*(undefined4 *)(_UNK_017a412c + 0x17a3ec4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4130 + 0x17a3ed0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4134 + 0x17a3edc));
    func_0x01438628(*(undefined4 *)(_UNK_017a4138 + 0x17a3ee8));
    func_0x01438628(*(undefined4 *)(_UNK_017a413c + 0x17a3ef4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8e79,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017a4140 + 0x17a3f64));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017a4144 + 0x17a3f78));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_017a4148 + 0x17a3f9c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a414c + 0x17a3fb8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dbc78(iVar1,**(undefined4 **)(_UNK_017a4150 + 0x17a3fd8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017a4154 + 0x17a4004));
      puVar5 = *(undefined4 **)(_UNK_017a4158 + 0x17a4018);
      puVar7 = *(undefined4 **)(_UNK_017a415c + 0x17a4020);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017a4160 + 0x17a4078));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8e79,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029261b4(iVar1,param_1,0);
  }
  return iVar1;
}

