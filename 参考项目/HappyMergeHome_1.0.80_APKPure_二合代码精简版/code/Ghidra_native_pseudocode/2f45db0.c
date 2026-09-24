
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f55db0(int param_1)

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
  
  pcVar6 = (char *)(_UNK_02f56000 + 0x2f55dc8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f56004 + 0x2f55ddc));
    func_0x01438628(*(undefined4 *)(_UNK_02f56008 + 0x2f55de8));
    func_0x01438628(*(undefined4 *)(_UNK_02f5600c + 0x2f55df4));
    func_0x01438628(*(undefined4 *)(_UNK_02f56010 + 0x2f55e00));
    func_0x01438628(*(undefined4 *)(_UNK_02f56014 + 0x2f55e0c));
    func_0x01438628(*(undefined4 *)(_UNK_02f56018 + 0x2f55e18));
    func_0x01438628(*(undefined4 *)(_UNK_02f5601c + 0x2f55e24));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_02f3e088(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02f56020 + 0x2f55e5c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_02f428bc(0);
    if (*(int *)(**(int **)(_UNK_02f56024 + 0x2f55e84) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_02f3e20c(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_02f45a70(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02f56028 + 0x2f55efc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f5602c + 0x2f55f18));
    piVar8 = *(int **)(_UNK_02f56030 + 0x2f55f2c);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f56034 + 0x2f55f50),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02f56038 + 0x2f55f70),&uStack_1c);
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

