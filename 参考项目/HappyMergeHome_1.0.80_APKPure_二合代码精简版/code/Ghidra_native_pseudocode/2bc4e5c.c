
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bd4e5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02bd4fd8 + 0x2bd4e7c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd4fdc + 0x2bd4e90));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4fe0 + 0x2bd4e9c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4fe4 + 0x2bd4ea8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cde,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_3);
    uStack_1c = 0;
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd4fe8 + 0x2bd4f30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd4fec + 0x2bd4f4c));
      uVar3 = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x02c4c030(iVar2,uVar3,0);
      uStack_1c = 0;
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x046c3f38(iVar1,uVar3,&uStack_1c,**(undefined4 **)(_UNK_02bd4ff0 + 0x2bd4fc0));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cde,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uStack_1c;
}

