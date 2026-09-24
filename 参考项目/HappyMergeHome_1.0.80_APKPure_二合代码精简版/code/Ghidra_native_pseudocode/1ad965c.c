
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae965c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_01ae9910 + 0x1ae967c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae9914 + 0x1ae9690));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9918 + 0x1ae969c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae991c + 0x1ae96a8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9920 + 0x1ae96b4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9924 + 0x1ae96c0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9928 + 0x1ae96cc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x60a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ae46e8(param_1);
    if ((0 < param_2) && (iVar1 != 0)) {
      iVar1 = FUN_01ae46e8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026befb0(iVar1,*(int *)(iVar1 + 0x28) + param_2,0);
      if (*(int *)(**(int **)(_UNK_01ae992c + 0x1ae9774) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x0202346c(0);
      iVar2 = FUN_01ae46e8(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar1,0xbb9,param_2,0,iVar2,iVar2 >> 0x1f,0xe7,0,0,0,0,0,0,0,0);
      if (*(int *)(**(int **)(_UNK_01ae9930 + 0x1ae9810) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ae9934 + 0x1ae982c));
      piVar5 = *(int **)(_UNK_01ae9938 + 0x1ae9840);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x368);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01ae993c + 0x1ae9864),1);
      iStack_1c = param_2;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_01ae9940 + 0x1ae9884),&iStack_1c);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar2;
      func_0x014385cc(piVar5 + 4,iVar2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar6,piVar5,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x60a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

