
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd7fe8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_02bd8164 + 0x2bd8008);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd8168 + 0x2bd8020));
    func_0x01438628(*(undefined4 *)(_UNK_02bd816c + 0x2bd802c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8170 + 0x2bd8038));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8174 + 0x2bd8044));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cec,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bd8178 + 0x2bd80a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd817c + 0x2bd80c4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bad204(iVar1,param_2,param_4);
    if (*(int *)(**(int **)(_UNK_02bd8180 + 0x2bd80f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8184 + 0x2bd8114));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(iVar1 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x029a6fa8(iVar2,uVar4,0);
    func_0x02bd8188(param_1,iVar1,uVar4,param_3);
  }
  else {
    iVar1 = func_0x029540a4(0x5cec,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028b7d1c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

