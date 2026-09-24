
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bf9d84(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_02bf9f58 + 0x2bf9da4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf9f5c + 0x2bf9db8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9f60 + 0x2bf9dc4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9f64 + 0x2bf9dd0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf9f68 + 0x2bf9ddc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e8d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bf9f6c + 0x2bf9e40) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar7 = *(undefined4 **)(_UNK_02bf9f70 + 0x2bf9e5c);
    iVar1 = func_0x014e9518(*puVar7);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bad204(iVar1,param_2,uVar6,0);
    iVar3 = func_0x014e9518(*puVar7);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_02bad204(iVar3,param_3,uVar6,0);
    if (*(int *)(**(int **)(_UNK_02bf9f74 + 0x2bf9ecc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bf9f78 + 0x2bf9ee8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar2 = 0;
    iVar4 = func_0x029a6fa8(iVar4,uVar6,0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == 2)) {
      iVar2 = *(int *)(iVar1 + 0x28);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar3 + 0x28) + iVar2;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e8d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x028812d4(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}

