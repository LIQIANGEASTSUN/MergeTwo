
/* WARNING: Possible PIC construction at 0x016c3274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016c3278) */
/* WARNING: Removing unreachable block (ram,0x016c3284) */
/* WARNING: Removing unreachable block (ram,0x016c3288) */
/* WARNING: Removing unreachable block (ram,0x016c32b0) */
/* WARNING: Removing unreachable block (ram,0x016c3294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c3140(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_016c32c8 + 0x16c3160);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c32cc + 0x16c3174));
    func_0x01438628(*(undefined4 *)(_UNK_016c32d0 + 0x16c3180));
    func_0x01438628(*(undefined4 *)(_UNK_016c32d4 + 0x16c318c));
    func_0x01438628(*(undefined4 *)(_UNK_016c32d8 + 0x16c3198));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8946,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016c32dc + 0x16c31fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c32e0 + 0x16c3218));
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
        uVar2 = (*(code *)&UNK_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_016c32e4 + 0x16c326c));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x8946,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029235e0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

