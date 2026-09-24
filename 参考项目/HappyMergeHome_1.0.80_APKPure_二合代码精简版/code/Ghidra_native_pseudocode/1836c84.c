
/* WARNING: Possible PIC construction at 0x01846db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01846dbc) */
/* WARNING: Removing unreachable block (ram,0x01846dc8) */
/* WARNING: Removing unreachable block (ram,0x01846dcc) */
/* WARNING: Removing unreachable block (ram,0x01846df4) */
/* WARNING: Removing unreachable block (ram,0x01846dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01846c84(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01846e0c + 0x1846ca4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01846e10 + 0x1846cb8));
    func_0x01438628(*(undefined4 *)(_UNK_01846e14 + 0x1846cc4));
    func_0x01438628(*(undefined4 *)(_UNK_01846e18 + 0x1846cd0));
    func_0x01438628(*(undefined4 *)(_UNK_01846e1c + 0x1846cdc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x926a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01846e20 + 0x1846d40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01846e24 + 0x1846d5c));
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
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_01846e28 + 0x1846db0));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x926a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02928110(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

