
/* WARNING: Possible PIC construction at 0x0180d348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0180d34c) */
/* WARNING: Removing unreachable block (ram,0x0180d358) */
/* WARNING: Removing unreachable block (ram,0x0180d35c) */
/* WARNING: Removing unreachable block (ram,0x0180d384) */
/* WARNING: Removing unreachable block (ram,0x0180d368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0180d214(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0180d39c + 0x180d234);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0180d3a0 + 0x180d248));
    func_0x01438628(*(undefined4 *)(_UNK_0180d3a4 + 0x180d254));
    func_0x01438628(*(undefined4 *)(_UNK_0180d3a8 + 0x180d260));
    func_0x01438628(*(undefined4 *)(_UNK_0180d3ac + 0x180d26c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x90ec,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0180d3b0 + 0x180d2d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0180d3b4 + 0x180d2ec));
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
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_0180d3b8 + 0x180d340));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x90ec,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02927360(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

