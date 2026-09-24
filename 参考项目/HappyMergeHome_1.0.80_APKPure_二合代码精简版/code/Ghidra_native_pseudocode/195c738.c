
/* WARNING: Possible PIC construction at 0x0196c86c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0196c870) */
/* WARNING: Removing unreachable block (ram,0x0196c87c) */
/* WARNING: Removing unreachable block (ram,0x0196c880) */
/* WARNING: Removing unreachable block (ram,0x0196c8a8) */
/* WARNING: Removing unreachable block (ram,0x0196c88c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0196c738(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0196c8c0 + 0x196c758);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196c8c4 + 0x196c76c));
    func_0x01438628(*(undefined4 *)(_UNK_0196c8c8 + 0x196c778));
    func_0x01438628(*(undefined4 *)(_UNK_0196c8cc + 0x196c784));
    func_0x01438628(*(undefined4 *)(_UNK_0196c8d0 + 0x196c790));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9947,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0196c8d4 + 0x196c7f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0196c8d8 + 0x196c810));
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
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_0196c8dc + 0x196c864));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x9947,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0292b9a4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

