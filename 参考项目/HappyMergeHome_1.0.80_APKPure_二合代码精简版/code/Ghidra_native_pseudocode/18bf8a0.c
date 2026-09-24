
/* WARNING: Possible PIC construction at 0x018cf9d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x018cf9d8) */
/* WARNING: Removing unreachable block (ram,0x018cf9e4) */
/* WARNING: Removing unreachable block (ram,0x018cf9e8) */
/* WARNING: Removing unreachable block (ram,0x018cfa10) */
/* WARNING: Removing unreachable block (ram,0x018cf9f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018cf8a0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_018cfa28 + 0x18cf8c0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cfa2c + 0x18cf8d4));
    func_0x01438628(*(undefined4 *)(_UNK_018cfa30 + 0x18cf8e0));
    func_0x01438628(*(undefined4 *)(_UNK_018cfa34 + 0x18cf8ec));
    func_0x01438628(*(undefined4 *)(_UNK_018cfa38 + 0x18cf8f8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9553,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018cfa3c + 0x18cf95c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cfa40 + 0x18cf978));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_018cfa44 + 0x18cf9cc));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x9553,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02929c70(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

