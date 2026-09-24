
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e644c(int param_1)

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
  
  pcVar6 = (char *)(_UNK_032e668c + 0x32e6464);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e6690 + 0x32e6478));
    func_0x01438628(*(undefined4 *)(_UNK_032e6694 + 0x32e6484));
    func_0x01438628(*(undefined4 *)(_UNK_032e6698 + 0x32e6490));
    func_0x01438628(*(undefined4 *)(_UNK_032e669c + 0x32e649c));
    func_0x01438628(*(undefined4 *)(_UNK_032e66a0 + 0x32e64a8));
    func_0x01438628(*(undefined4 *)(_UNK_032e66a4 + 0x32e64b4));
    func_0x01438628(*(undefined4 *)(_UNK_032e66a8 + 0x32e64c0));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_032d6320(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_032e66ac + 0x32e64f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_032d3310();
    if (*(int *)(**(int **)(_UNK_032e66b0 + 0x32e6518) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_032d8874(iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_032d54b4(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_032e66b4 + 0x32e6588) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_032e66b8 + 0x32e65a4));
    piVar8 = *(int **)(_UNK_032e66bc + 0x32e65b8);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_032e66c0 + 0x32e65dc),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_032e66c4 + 0x32e65fc),&uStack_1c);
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

