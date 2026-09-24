
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af3368(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01af3700 + 0x1af3388);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af3704 + 0x1af339c));
    func_0x01438628(*(undefined4 *)(_UNK_01af3708 + 0x1af33a8));
    func_0x01438628(*(undefined4 *)(_UNK_01af370c + 0x1af33b4));
    func_0x01438628(*(undefined4 *)(_UNK_01af3710 + 0x1af33c0));
    func_0x01438628(*(undefined4 *)(_UNK_01af3714 + 0x1af33cc));
    func_0x01438628(*(undefined4 *)(_UNK_01af3718 + 0x1af33d8));
    func_0x01438628(*(undefined4 *)(_UNK_01af371c + 0x1af33e4));
    func_0x01438628(*(undefined4 *)(_UNK_01af3720 + 0x1af33f0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3c1e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ae4df4(param_1);
    if ((param_2 != 0 && iVar1 != 0) && (iVar1 = FUN_01ae46e8(param_1), iVar1 != 0)) {
      FUN_01af3018(&iStack_2c,param_1,param_2);
      iVar1 = iStack_2c;
      if (0 < iStack_2c) {
        iVar1 = iStack_28;
        param_2 = iStack_28;
      }
      if (0 < iVar1) {
        pcVar7 = (char *)(_UNK_01af3724 + 0x1af34a4);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01af3728 + 0x1af34b8));
          *pcVar7 = '\x01';
        }
        piVar2 = *(int **)(**(int **)(_UNK_01af372c + 0x1af34d0) + 0x5c);
        iVar1 = *piVar2;
        iVar9 = piVar2[1];
        if (param_3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = func_0x02ce3f48(param_3,0);
        }
        if (*(int *)(**(int **)(_UNK_01af3730 + 0x1af3500) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x024ef144(iVar3,0,0);
        if (iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024ef228(&iStack_2c,iVar3,0);
          iVar1 = iStack_2c;
          iVar9 = iStack_28;
        }
        iVar3 = FUN_01ae46e8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x026befb0(iVar3,*(int *)(iVar3 + 0x28) + param_2,0);
        if (*(int *)(**(int **)(_UNK_01af3734 + 0x1af3584) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01af3738 + 0x1af35a0));
        piVar2 = *(int **)(_UNK_01af373c + 0x1af35b4);
        iVar4 = *piVar2;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
          iVar4 = *piVar2;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x368);
        piVar2 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01af3740 + 0x1af35d8),1);
        iStack_2c = param_2;
        iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_01af3744 + 0x1af35f8),&iStack_2c);
        if (piVar2 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar4 != 0) &&
           (iVar5 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar6 = func_0x01438904();
          func_0x01438790(uVar6,0);
        }
        if (piVar2[3] == 0) {
          func_0x014388e8();
        }
        piVar2[4] = iVar4;
        func_0x014385cc(piVar2 + 4,iVar4);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar3,uVar8,piVar2,0);
        if (*(int *)(**(int **)(_UNK_01af3748 + 0x1af3688) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01af374c + 0x1af36a4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b79ad8(iVar3,0xbb9,param_2,iVar1,iVar9,0x3f333333,1,0x3dcccccd,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3c1e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

