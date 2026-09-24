
/* WARNING: Possible PIC construction at 0x017aeddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x017aede0) */
/* WARNING: Removing unreachable block (ram,0x017aedec) */
/* WARNING: Removing unreachable block (ram,0x017aedf0) */
/* WARNING: Removing unreachable block (ram,0x017aee18) */
/* WARNING: Removing unreachable block (ram,0x017aedfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017aeca8(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_017aee30 + 0x17aecc8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017aee34 + 0x17aecdc));
    func_0x01438628(*(undefined4 *)(_UNK_017aee38 + 0x17aece8));
    func_0x01438628(*(undefined4 *)(_UNK_017aee3c + 0x17aecf4));
    func_0x01438628(*(undefined4 *)(_UNK_017aee40 + 0x17aed00));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8ea2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017aee44 + 0x17aed64) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017aee48 + 0x17aed80));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x30);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_017aee4c + 0x17aedd4));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x8ea2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x029263dc(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

