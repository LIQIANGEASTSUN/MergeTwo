
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017aee50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_017aef90 + 0x17aee68);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017aef94 + 0x17aee7c));
    func_0x01438628(*(undefined4 *)(_UNK_017aef98 + 0x17aee88));
    func_0x01438628(*(undefined4 *)(_UNK_017aef9c + 0x17aee94));
    func_0x01438628(*(undefined4 *)(_UNK_017aefa0 + 0x17aeea0));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x8ea4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017aefa4 + 0x17aef00) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017aefa8 + 0x17aef1c));
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
      uVar3 = FUN_017ad914(param_1);
      iVar2 = FUN_017aeca8(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x0152983c(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_017aefac + 0x17aef7c));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8ea4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02926600(iVar1,param_1,0);
  }
  return iVar2;
}

