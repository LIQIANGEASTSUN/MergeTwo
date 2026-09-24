
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be3e3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02be3fb8 + 0x2be3e54);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be3fbc + 0x2be3e68));
    func_0x01438628(*(undefined4 *)(_UNK_02be3fc0 + 0x2be3e74));
    func_0x01438628(*(undefined4 *)(_UNK_02be3fc4 + 0x2be3e80));
    func_0x01438628(*(undefined4 *)(_UNK_02be3fc8 + 0x2be3e8c));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x500d,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02be3fcc + 0x2be3eec);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    iVar2 = *(int *)(iVar1 + 0x5c);
    if (*(char *)(iVar2 + 0x10) == '\0') {
      if (*(int *)(**(int **)(_UNK_02be3fd4 + 0x2be3f74) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be3fd8 + 0x2be3f90));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_14 = FUN_02bde604(iVar1,param_1);
    }
    else {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *(int *)(*piVar4 + 0x5c);
      }
      iVar1 = *(int *)(iVar2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0471d874(iVar1,param_1,&uStack_14,**(undefined4 **)(_UNK_02be3fd0 + 0x2be3f4c))
      ;
      if (iVar1 == 0) {
        uStack_14 = 0xffffffff;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x500d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = func_0x028e8dc8(iVar1,param_1,0);
  }
  return uStack_14;
}

