
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf6b60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  pcVar4 = (char *)(_UNK_02bf6cdc + 0x2bf6b80);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf6ce0 + 0x2bf6b94));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6ce4 + 0x2bf6ba0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf6ce8 + 0x2bf6bac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e1f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bf6cec + 0x2bf6c10) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x02af8380(param_2,0);
    if (iVar1 != 0) {
      piVar3 = *(int **)(_UNK_02bf6cf0 + 0x2bf6c40);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar5 = *(undefined4 **)(_UNK_02bf6cf4 + 0x2bf6c5c);
      iVar1 = func_0x014e9518(*puVar5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02e797c4(iVar1,0);
      if (1 < iVar1) {
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(*puVar5);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02e797c4(iVar1,0);
        if (param_3 <= iVar1) {
          return 1;
        }
        return 0;
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x5e1f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d207c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

