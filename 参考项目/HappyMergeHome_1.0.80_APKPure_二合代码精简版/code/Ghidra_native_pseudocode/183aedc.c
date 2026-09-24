
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0184aedc(int param_1)

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
  
  pcVar6 = (char *)(_UNK_0184b12c + 0x184aef4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0184b130 + 0x184af08));
    func_0x01438628(*(undefined4 *)(_UNK_0184b134 + 0x184af14));
    func_0x01438628(*(undefined4 *)(_UNK_0184b138 + 0x184af20));
    func_0x01438628(*(undefined4 *)(_UNK_0184b13c + 0x184af2c));
    func_0x01438628(*(undefined4 *)(_UNK_0184b140 + 0x184af38));
    func_0x01438628(*(undefined4 *)(_UNK_0184b144 + 0x184af44));
    func_0x01438628(*(undefined4 *)(_UNK_0184b148 + 0x184af50));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_018338e0(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0184b14c + 0x184af88) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_018386ac(0);
    if (*(int *)(**(int **)(_UNK_0184b150 + 0x184afb0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_01833a64(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_0183b670(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0184b154 + 0x184b028) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0184b158 + 0x184b044));
    piVar8 = *(int **)(_UNK_0184b15c + 0x184b058);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0184b160 + 0x184b07c),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_0184b164 + 0x184b09c),&uStack_1c);
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

