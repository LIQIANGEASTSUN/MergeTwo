
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c78dd4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01c78f90 + 0x1c78df0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c78f94 + 0x1c78e04));
    func_0x01438628(*(undefined4 *)(_UNK_01c78f98 + 0x1c78e10));
    func_0x01438628(*(undefined4 *)(_UNK_01c78f9c + 0x1c78e1c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad60,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x18) < 1) {
      iStack_1c = FUN_01c68288(param_1);
    }
    else {
      iVar1 = FUN_01c733a0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iStack_1c = *(int *)(iVar1 + 0x18);
    }
    uVar2 = func_0x01524ffc(&iStack_1c,0);
    if (*(int *)(**(int **)(_UNK_01c78fa0 + 0x1c78ed8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x0202346c(0);
    iVar3 = FUN_01c733a0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_1c = *(int *)(iVar3 + 0x14) + 1;
    puVar6 = *(undefined4 **)(_UNK_01c78fa8 + 0x1c78f38);
    if (param_2 != 0) {
      puVar6 = *(undefined4 **)(_UNK_01c78fa4 + 0x1c78f30);
    }
    uVar4 = func_0x01524ffc(&iStack_1c,0);
    uVar7 = *puVar6;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar1,0x311,uVar4,uVar2,uVar7,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0xad60,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c1e8(iVar1,param_1,param_2,0);
  }
  return;
}

