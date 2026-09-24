
/* WARNING: Possible PIC construction at 0x0175ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0175ad60) */
/* WARNING: Removing unreachable block (ram,0x0175ad6c) */
/* WARNING: Removing unreachable block (ram,0x0175ad70) */
/* WARNING: Removing unreachable block (ram,0x0175ad98) */
/* WARNING: Removing unreachable block (ram,0x0175ad7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0175ac28(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0175adb0 + 0x175ac48);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0175adb4 + 0x175ac5c));
    func_0x01438628(*(undefined4 *)(_UNK_0175adb8 + 0x175ac68));
    func_0x01438628(*(undefined4 *)(_UNK_0175adbc + 0x175ac74));
    func_0x01438628(*(undefined4 *)(_UNK_0175adc0 + 0x175ac80));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8d29,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0175adc4 + 0x175ace4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0175adc8 + 0x175ad00));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x38);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_0175adcc + 0x175ad54));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x8d29,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0292562c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

