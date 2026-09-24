
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01936ef0(int param_1)

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
  
  pcVar6 = (char *)(_UNK_01937140 + 0x1936f08);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01937144 + 0x1936f1c));
    func_0x01438628(*(undefined4 *)(_UNK_01937148 + 0x1936f28));
    func_0x01438628(*(undefined4 *)(_UNK_0193714c + 0x1936f34));
    func_0x01438628(*(undefined4 *)(_UNK_01937150 + 0x1936f40));
    func_0x01438628(*(undefined4 *)(_UNK_01937154 + 0x1936f4c));
    func_0x01438628(*(undefined4 *)(_UNK_01937158 + 0x1936f58));
    func_0x01438628(*(undefined4 *)(_UNK_0193715c + 0x1936f64));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_019204d4(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01937160 + 0x1936f9c) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_01924e6c(0);
    if (*(int *)(**(int **)(_UNK_01937164 + 0x1936fc4) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x024efb9c(uVar2,0);
    if ((*(byte *)(param_1 + 0xc) & (bVar1 ^ 1)) != 0) {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      FUN_01920658(iVar7,0);
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = FUN_01927084(iVar7,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_01937168 + 0x193703c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0193716c + 0x1937058));
    piVar8 = *(int **)(_UNK_01937170 + 0x193706c);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar8;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01937174 + 0x1937090),1);
    uStack_1c = 0;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_01937178 + 0x19370b0),&uStack_1c);
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

