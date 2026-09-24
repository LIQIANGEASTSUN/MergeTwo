
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd477c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_02bd4948 + 0x2bd479c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd494c + 0x2bd47b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4950 + 0x2bd47bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4954 + 0x2bd47c8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4958 + 0x2bd47d4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5cd8,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02bad204(param_1,param_2,param_3);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd495c + 0x2bd4854) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd4960 + 0x2bd4870));
      uVar4 = *(undefined4 *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02c4c030(iVar3,uVar4,0);
      iStack_1c = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_02bad050(param_1,param_3);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x30);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x046c3f38(iVar3,iVar2,&iStack_1c,**(undefined4 **)(_UNK_02bd4964 + 0x2bd48ec));
        iVar3 = FUN_02bad050(param_1,param_3);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar1 = iStack_1c;
        iVar3 = *(int *)(iVar3 + 0x30);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x03b70fe4(iVar3,iVar2,iVar1 + 1,**(undefined4 **)(_UNK_02bd4968 + 0x2bd4938));
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5cd8,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar2,param_1,param_2,param_3,0);
  }
  return;
}

