
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c81b0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_031c8400 + 0x31c81c8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c8404 + 0x31c81dc));
    func_0x01438628(*(undefined4 *)(_UNK_031c8408 + 0x31c81e8));
    func_0x01438628(*(undefined4 *)(_UNK_031c840c + 0x31c81f4));
    func_0x01438628(*(undefined4 *)(_UNK_031c8410 + 0x31c8200));
    func_0x01438628(*(undefined4 *)(_UNK_031c8414 + 0x31c820c));
    func_0x01438628(*(undefined4 *)(_UNK_031c8418 + 0x31c8218));
    func_0x01438628(*(undefined4 *)(_UNK_031c841c + 0x31c8224));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_031b0c18(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_031c8420 + 0x31c825c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_031b59e4(0);
    if (*(int *)(**(int **)(_UNK_031c8424 + 0x31c8284) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_031b0d9c(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_031b89a8(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_031c8428 + 0x31c82fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_031c842c + 0x31c8318));
    piVar8 = *(int **)(_UNK_031c8430 + 0x31c832c);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_031c8434 + 0x31c8350),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_031c8438 + 0x31c8370),&uStack_1c);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar3;
    func_0x014385cc(piVar8 + 4,iVar3);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar7,uVar2,piVar8,0);
  }
  return;
}

