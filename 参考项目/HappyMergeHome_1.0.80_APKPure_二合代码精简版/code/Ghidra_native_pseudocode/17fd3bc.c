
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0180d3bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_0180d4fc + 0x180d3d4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0180d500 + 0x180d3e8));
    func_0x01438628(*(undefined4 *)(_UNK_0180d504 + 0x180d3f4));
    func_0x01438628(*(undefined4 *)(_UNK_0180d508 + 0x180d400));
    func_0x01438628(*(undefined4 *)(_UNK_0180d50c + 0x180d40c));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x90ee,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0180d510 + 0x180d46c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0180d514 + 0x180d488));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x30);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_0180c2e4(param_1);
      iVar2 = FUN_0180d214(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_0180d518 + 0x180d4e8));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x90ee,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02927584(iVar1,param_1,0);
  }
  return iVar2;
}

