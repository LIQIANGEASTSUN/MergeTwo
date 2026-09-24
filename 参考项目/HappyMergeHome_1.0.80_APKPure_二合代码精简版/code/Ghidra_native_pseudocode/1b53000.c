
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b63000(undefined4 param_1,int param_2,int param_3)

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
  
  pcVar7 = (char *)(_UNK_01b63398 + 0x1b63020);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b6339c + 0x1b63034));
    func_0x01438628(*(undefined4 *)(_UNK_01b633a0 + 0x1b63040));
    func_0x01438628(*(undefined4 *)(_UNK_01b633a4 + 0x1b6304c));
    func_0x01438628(*(undefined4 *)(_UNK_01b633a8 + 0x1b63058));
    func_0x01438628(*(undefined4 *)(_UNK_01b633ac + 0x1b63064));
    func_0x01438628(*(undefined4 *)(_UNK_01b633b0 + 0x1b63070));
    func_0x01438628(*(undefined4 *)(_UNK_01b633b4 + 0x1b6307c));
    func_0x01438628(*(undefined4 *)(_UNK_01b633b8 + 0x1b63088));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3c16,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b5797c(param_1);
    if ((param_2 != 0 && iVar1 != 0) && (iVar1 = FUN_01b572ec(param_1), iVar1 != 0)) {
      FUN_01b62cb0(&iStack_2c,param_1,param_2);
      iVar1 = iStack_2c;
      if (0 < iStack_2c) {
        iVar1 = iStack_28;
        param_2 = iStack_28;
      }
      if (0 < iVar1) {
        pcVar7 = (char *)(_UNK_01b633bc + 0x1b6313c);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01b633c0 + 0x1b63150));
          *pcVar7 = '\x01';
        }
        piVar2 = *(int **)(**(int **)(_UNK_01b633c4 + 0x1b63168) + 0x5c);
        iVar1 = *piVar2;
        iVar9 = piVar2[1];
        if (param_3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = func_0x02ce3bc4(param_3,0);
        }
        if (*(int *)(**(int **)(_UNK_01b633c8 + 0x1b63198) + 0x74) == 0) {
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
        iVar3 = FUN_01b572ec(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x026befb0(iVar3,*(int *)(iVar3 + 0x28) + param_2,0);
        if (*(int *)(**(int **)(_UNK_01b633cc + 0x1b6321c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01b633d0 + 0x1b63238));
        piVar2 = *(int **)(_UNK_01b633d4 + 0x1b6324c);
        iVar4 = *piVar2;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
          iVar4 = *piVar2;
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x368);
        piVar2 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01b633d8 + 0x1b63270),1);
        iStack_2c = param_2;
        iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_01b633dc + 0x1b63290),&iStack_2c);
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
        if (*(int *)(**(int **)(_UNK_01b633e0 + 0x1b63320) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01b633e4 + 0x1b6333c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b79ad8(iVar3,0xbb9,param_2,iVar1,iVar9,0x3f333333,1,0x3dcccccd,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3c16,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

