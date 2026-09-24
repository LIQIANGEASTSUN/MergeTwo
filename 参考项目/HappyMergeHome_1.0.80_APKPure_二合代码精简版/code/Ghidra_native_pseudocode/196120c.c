
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197120c(int param_1)

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
  
  pcVar6 = (char *)(_UNK_0197145c + 0x1971224);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01971460 + 0x1971238));
    func_0x01438628(*(undefined4 *)(_UNK_01971464 + 0x1971244));
    func_0x01438628(*(undefined4 *)(_UNK_01971468 + 0x1971250));
    func_0x01438628(*(undefined4 *)(_UNK_0197146c + 0x197125c));
    func_0x01438628(*(undefined4 *)(_UNK_01971470 + 0x1971268));
    func_0x01438628(*(undefined4 *)(_UNK_01971474 + 0x1971274));
    func_0x01438628(*(undefined4 *)(_UNK_01971478 + 0x1971280));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_019594e8(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0197147c + 0x19712b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0195dd1c(0);
    if (*(int *)(**(int **)(_UNK_01971480 + 0x19712e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_0195966c(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_01960ed0(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01971484 + 0x1971358) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01971488 + 0x1971374));
    piVar8 = *(int **)(_UNK_0197148c + 0x1971388);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01971490 + 0x19713ac),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_01971494 + 0x19713cc),&uStack_1c);
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

