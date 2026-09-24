
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e3934(int param_1)

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
  
  pcVar6 = (char *)(_UNK_030e3b84 + 0x30e394c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e3b88 + 0x30e3960));
    func_0x01438628(*(undefined4 *)(_UNK_030e3b8c + 0x30e396c));
    func_0x01438628(*(undefined4 *)(_UNK_030e3b90 + 0x30e3978));
    func_0x01438628(*(undefined4 *)(_UNK_030e3b94 + 0x30e3984));
    func_0x01438628(*(undefined4 *)(_UNK_030e3b98 + 0x30e3990));
    func_0x01438628(*(undefined4 *)(_UNK_030e3b9c + 0x30e399c));
    func_0x01438628(*(undefined4 *)(_UNK_030e3ba0 + 0x30e39a8));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_030ccf14(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_030e3ba4 + 0x30e39e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_030d18ac(0);
    if (*(int *)(**(int **)(_UNK_030e3ba8 + 0x30e3a08) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_030cd098(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_030d3ac4(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_030e3bac + 0x30e3a80) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_030e3bb0 + 0x30e3a9c));
    piVar8 = *(int **)(_UNK_030e3bb4 + 0x30e3ab0);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_030e3bb8 + 0x30e3ad4),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_030e3bbc + 0x30e3af4),&uStack_1c);
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

