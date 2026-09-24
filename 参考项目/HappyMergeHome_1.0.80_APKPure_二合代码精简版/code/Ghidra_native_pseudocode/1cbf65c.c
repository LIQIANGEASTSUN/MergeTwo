
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ccf65c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01ccfa94 + 0x1ccf67c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccfa98 + 0x1ccf694));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfa9c + 0x1ccf6a0));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfaa0 + 0x1ccf6ac));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfaa4 + 0x1ccf6b8));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfaa8 + 0x1ccf6c4));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfaac + 0x1ccf6d0));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfab0 + 0x1ccf6dc));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfab4 + 0x1ccf6e8));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfab8 + 0x1ccf6f4));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5e65,0);
  if (iVar3 == 0) {
    iVar3 = FUN_01ccd794(param_1);
    if ((-1 < param_3) && (iVar3 != 0)) {
      piVar9 = *(int **)(_UNK_01ccfabc + 0x1ccf774);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar11 = *(undefined4 **)(_UNK_01ccfac0 + 0x1ccf790);
      iVar3 = func_0x014e9518(*puVar11);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02bd1624(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
        func_0x026f6b3c(0,param_3,0);
        func_0x014388e4();
      }
      else {
        func_0x026f6b3c(iVar3,param_3,0);
      }
      func_0x026f6bf8(iVar3,1,0);
      iVar4 = func_0x014e9518(*puVar11);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x02bdd790(iVar4,param_2,0,0,0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar11);
      if (iVar4 == -1) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02be0bf4(iVar5,iVar3,0,1,0,0);
        iVar4 = **(int **)(**(int **)(_UNK_01ccfac4 + 0x1ccf8f0) + 0x5c);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02c3e3f8(&uStack_30,iVar4,0);
        uVar2 = uStack_28;
        uVar1 = uStack_2c;
        uVar8 = uStack_30;
        if (*(int *)(**(int **)(_UNK_01ccfac8 + 0x1ccf920) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01ccfacc + 0x1ccf950));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar3 + 8);
        if (param_4 == 0) {
          func_0x014388e4();
        }
        func_0x02bebb14(&uStack_30,param_4,param_2,0);
        piVar9 = *(int **)(_UNK_01ccfad0 + 0x1ccf994);
        iVar3 = *piVar9;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
          iVar3 = *piVar9;
        }
        iVar5 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
        if (iVar5 == 0) {
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
            iVar3 = *piVar9;
          }
          uVar6 = **(undefined4 **)(iVar3 + 0x5c);
          iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01ccfad4 + 0x1ccf9ec));
          func_0x0152e3ec(iVar5,uVar6,**(undefined4 **)(_UNK_01ccfad8 + 0x1ccfa0c),0);
          piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x10);
          *piVar9 = iVar5;
          func_0x014385cc(piVar9,iVar5);
        }
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02b7fc84(iVar4,uVar10,uStack_30,uStack_2c,uStack_28,uVar8,uVar1,uVar2,0x3f333333,
                        0x40000000,0x3f800000,iVar5,0);
      }
      else {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar8 = *(undefined4 *)(iVar3 + 8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02bb18c4(iVar5,iVar4,uVar8,2,0,param_2,1,0xffffffff,
                        **(undefined4 **)(_UNK_01ccfadc + 0x1ccf88c),0);
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5e65,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028759c4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return;
}

