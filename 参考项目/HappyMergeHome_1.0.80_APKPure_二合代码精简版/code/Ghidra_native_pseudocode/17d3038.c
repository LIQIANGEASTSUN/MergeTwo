
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e3038(int param_1)

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
  
  pcVar6 = (char *)(_UNK_017e328c + 0x17e3050);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e3290 + 0x17e3064));
    func_0x01438628(*(undefined4 *)(_UNK_017e3294 + 0x17e3070));
    func_0x01438628(*(undefined4 *)(_UNK_017e3298 + 0x17e307c));
    func_0x01438628(*(undefined4 *)(_UNK_017e329c + 0x17e3088));
    func_0x01438628(*(undefined4 *)(_UNK_017e32a0 + 0x17e3094));
    func_0x01438628(*(undefined4 *)(_UNK_017e32a4 + 0x17e30a0));
    func_0x01438628(*(undefined4 *)(_UNK_017e32a8 + 0x17e30ac));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_017d0ea0(iVar7);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_017e32ac + 0x17e30e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_017d3d58();
    if (*(int *)(**(int **)(_UNK_017e32b0 + 0x17e3104) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_017d1090(iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_017d48ec(iVar7);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar7 + 0x60) != '\0') {
    if (*(int *)(**(int **)(_UNK_017e32b4 + 0x17e3188) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_017e32b8 + 0x17e31a4));
    piVar8 = *(int **)(_UNK_017e32bc + 0x17e31b8);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_017e32c0 + 0x17e31dc),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_017e32c4 + 0x17e31fc),&uStack_1c);
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

