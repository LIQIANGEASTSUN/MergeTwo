
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be40bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02be4238 + 0x2be40d4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be423c + 0x2be40e8));
    func_0x01438628(*(undefined4 *)(_UNK_02be4240 + 0x2be40f4));
    func_0x01438628(*(undefined4 *)(_UNK_02be4244 + 0x2be4100));
    func_0x01438628(*(undefined4 *)(_UNK_02be4248 + 0x2be410c));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x500f,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02be424c + 0x2be416c);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    iVar2 = *(int *)(iVar1 + 0x5c);
    if (*(char *)(iVar2 + 0x10) == '\0') {
      if (*(int *)(**(int **)(_UNK_02be4254 + 0x2be41f4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be4258 + 0x2be4210));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_14 = FUN_02bde4a4(iVar1,param_1);
    }
    else {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *(int *)(*piVar4 + 0x5c);
      }
      iVar1 = *(int *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0471d874(iVar1,param_1,&uStack_14,**(undefined4 **)(_UNK_02be4250 + 0x2be41cc))
      ;
      if (iVar1 == 0) {
        uStack_14 = 0xffffffff;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x500f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = func_0x028e8dc8(iVar1,param_1,0);
  }
  return uStack_14;
}

