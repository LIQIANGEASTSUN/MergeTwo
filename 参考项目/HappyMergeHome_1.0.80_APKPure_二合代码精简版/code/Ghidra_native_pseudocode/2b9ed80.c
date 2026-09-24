
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02baed80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02baeeb4 + 0x2baeda0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baeeb8 + 0x2baedb4));
    func_0x01438628(*(undefined4 *)(_UNK_02baeebc + 0x2baedc0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x5955,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_3);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02baeec0 + 0x2baee44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02baeec4 + 0x2baee60));
      uVar4 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x029a6fa8(iVar2,uVar4,0);
      uStack_1c = 0;
      uVar4 = func_0x02bd8188(param_1,iVar1,uVar4,&uStack_1c);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5955,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}

