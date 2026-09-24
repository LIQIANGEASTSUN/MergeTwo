
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03155e18(int param_1)

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
  
  pcVar6 = (char *)(_UNK_03156068 + 0x3155e30);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0315606c + 0x3155e44));
    func_0x01438628(*(undefined4 *)(_UNK_03156070 + 0x3155e50));
    func_0x01438628(*(undefined4 *)(_UNK_03156074 + 0x3155e5c));
    func_0x01438628(*(undefined4 *)(_UNK_03156078 + 0x3155e68));
    func_0x01438628(*(undefined4 *)(_UNK_0315607c + 0x3155e74));
    func_0x01438628(*(undefined4 *)(_UNK_03156080 + 0x3155e80));
    func_0x01438628(*(undefined4 *)(_UNK_03156084 + 0x3155e8c));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0313e88c(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03156088 + 0x3155ec4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_03143658(0);
    if (*(int *)(**(int **)(_UNK_0315608c + 0x3155eec) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0313ea10(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0314661c(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_03156090 + 0x3155f64) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03156094 + 0x3155f80));
    piVar8 = *(int **)(_UNK_03156098 + 0x3155f94);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0315609c + 0x3155fb8),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_031560a0 + 0x3155fd8),&uStack_1c);
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

