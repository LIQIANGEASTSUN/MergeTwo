
/* WARNING: Possible PIC construction at 0x01688b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01688b54) */
/* WARNING: Removing unreachable block (ram,0x01688b60) */
/* WARNING: Removing unreachable block (ram,0x01688b64) */
/* WARNING: Removing unreachable block (ram,0x01688b8c) */
/* WARNING: Removing unreachable block (ram,0x01688b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01688a1c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01688ba4 + 0x1688a3c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01688ba8 + 0x1688a50));
    func_0x01438628(*(undefined4 *)(_UNK_01688bac + 0x1688a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01688bb0 + 0x1688a68));
    func_0x01438628(*(undefined4 *)(_UNK_01688bb4 + 0x1688a74));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87b9,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01688bb8 + 0x1688ad8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01688bbc + 0x1688af4));
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
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_01688bc0 + 0x1688b48));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x87b9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02922938(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

