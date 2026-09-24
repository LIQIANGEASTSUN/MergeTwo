
/* WARNING: Possible PIC construction at 0x0187f52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0187f530) */
/* WARNING: Removing unreachable block (ram,0x0187f53c) */
/* WARNING: Removing unreachable block (ram,0x0187f540) */
/* WARNING: Removing unreachable block (ram,0x0187f568) */
/* WARNING: Removing unreachable block (ram,0x0187f54c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0187f3f8(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0187f580 + 0x187f418);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187f584 + 0x187f42c));
    func_0x01438628(*(undefined4 *)(_UNK_0187f588 + 0x187f438));
    func_0x01438628(*(undefined4 *)(_UNK_0187f58c + 0x187f444));
    func_0x01438628(*(undefined4 *)(_UNK_0187f590 + 0x187f450));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x93e1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0187f594 + 0x187f4b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187f598 + 0x187f4d0));
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
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_0187f59c + 0x187f524));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x93e1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02928ec0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

