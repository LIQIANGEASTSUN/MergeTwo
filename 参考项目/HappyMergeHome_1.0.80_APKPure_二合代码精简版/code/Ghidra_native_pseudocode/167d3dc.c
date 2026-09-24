
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168d3dc(int param_1)

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
  
  pcVar6 = (char *)(_UNK_0168d62c + 0x168d3f4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168d630 + 0x168d408));
    func_0x01438628(*(undefined4 *)(_UNK_0168d634 + 0x168d414));
    func_0x01438628(*(undefined4 *)(_UNK_0168d638 + 0x168d420));
    func_0x01438628(*(undefined4 *)(_UNK_0168d63c + 0x168d42c));
    func_0x01438628(*(undefined4 *)(_UNK_0168d640 + 0x168d438));
    func_0x01438628(*(undefined4 *)(_UNK_0168d644 + 0x168d444));
    func_0x01438628(*(undefined4 *)(_UNK_0168d648 + 0x168d450));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_016769c0(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0168d64c + 0x168d488) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_0167b358(0);
    if (*(int *)(**(int **)(_UNK_0168d650 + 0x168d4b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_01676b44(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0167d570(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0168d654 + 0x168d528) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0168d658 + 0x168d544));
    piVar8 = *(int **)(_UNK_0168d65c + 0x168d558);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0168d660 + 0x168d57c),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0168d664 + 0x168d59c),&uStack_1c);
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

