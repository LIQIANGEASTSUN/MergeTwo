
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017253e0(int param_1)

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
  
  pcVar6 = (char *)(_UNK_01725630 + 0x17253f8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01725634 + 0x172540c));
    func_0x01438628(*(undefined4 *)(_UNK_01725638 + 0x1725418));
    func_0x01438628(*(undefined4 *)(_UNK_0172563c + 0x1725424));
    func_0x01438628(*(undefined4 *)(_UNK_01725640 + 0x1725430));
    func_0x01438628(*(undefined4 *)(_UNK_01725644 + 0x172543c));
    func_0x01438628(*(undefined4 *)(_UNK_01725648 + 0x1725448));
    func_0x01438628(*(undefined4 *)(_UNK_0172564c + 0x1725454));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0170e9c4(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01725650 + 0x172548c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0171335c(0);
    if (*(int *)(**(int **)(_UNK_01725654 + 0x17254b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0170eb48(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_01715574(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01725658 + 0x172552c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0172565c + 0x1725548));
    piVar8 = *(int **)(_UNK_01725660 + 0x172555c);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01725664 + 0x1725580),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_01725668 + 0x17255a0),&uStack_1c);
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

