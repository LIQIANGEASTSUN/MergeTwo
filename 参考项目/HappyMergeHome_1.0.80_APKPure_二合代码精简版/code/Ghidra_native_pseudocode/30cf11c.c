
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030df11c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_030df25c + 0x30df134);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030df260 + 0x30df148));
    func_0x01438628(*(undefined4 *)(_UNK_030df264 + 0x30df154));
    func_0x01438628(*(undefined4 *)(_UNK_030df268 + 0x30df160));
    func_0x01438628(*(undefined4 *)(_UNK_030df26c + 0x30df16c));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  iVar1 = func_0x02953fd4(0x773e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030df270 + 0x30df1cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_030df274 + 0x30df1e8));
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x014388e4();
      iVar1 = extraout_r1;
    }
    iVar5 = *(int *)((int)uVar6 + 0x2c);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar3 = FUN_030ddd44(param_1);
      iVar2 = FUN_030def74(param_1,uVar3,&uStack_11);
      if (iVar2 == 0) {
        iVar2 = func_0x04cfd760(iVar5,*(int *)(iVar5 + 0xc) + -1,
                                **(undefined4 **)(_UNK_030df278 + 0x30df248));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x773e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02919ec0(iVar1,param_1,0);
  }
  return iVar2;
}

