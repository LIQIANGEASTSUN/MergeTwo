
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01909c08(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_0190a6c8 + 0x1909c20);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0190a6cc + 0x1909c34));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6d0 + 0x1909c40));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6d4 + 0x1909c4c));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6d8 + 0x1909c58));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6dc + 0x1909c64));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6e0 + 0x1909c70));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6e4 + 0x1909c7c));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6e8 + 0x1909c88));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6ec + 0x1909c94));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6f0 + 0x1909ca0));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6f4 + 0x1909cac));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6f8 + 0x1909cb8));
    func_0x01438628(*(undefined4 *)(_UNK_0190a6fc + 0x1909cc4));
    func_0x01438628(*(undefined4 *)(_UNK_0190a700 + 0x1909cd0));
    func_0x01438628(*(undefined4 *)(_UNK_0190a704 + 0x1909cdc));
    func_0x01438628(*(undefined4 *)(_UNK_0190a708 + 0x1909ce8));
    func_0x01438628(*(undefined4 *)(_UNK_0190a70c + 0x1909cf4));
    func_0x01438628(*(undefined4 *)(_UNK_0190a710 + 0x1909d00));
    func_0x01438628(*(undefined4 *)(_UNK_0190a714 + 0x1909d0c));
    func_0x01438628(*(undefined4 *)(_UNK_0190a718 + 0x1909d18));
    *pcVar5 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[6];
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_28 = param_1[0xc];
    param_1[0xc] = 0;
LAB_0190a0cc:
    func_0x024f1028(&iStack_28,0);
    if (*(int *)(**(int **)(_UNK_0190a758 + 0x190a0e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_018f8b90();
    if ((iVar2 == 0) || (iVar2 = func_0x01918ee4(iVar2,(char)param_1[0xb],0), iVar2 == 0)) {
      iVar2 = 0;
      func_0x014388e4();
    }
    iStack_28 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_28,0);
    if (iVar2 == 0) {
      *param_1 = 1;
      param_1[0xc] = iStack_28;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035b2118(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0190a75c + 0x190a23c));
      return;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        *param_1 = -1;
        iStack_28 = param_1[0xc];
        param_1[0xc] = 0;
        goto LAB_0190a1ac;
      }
      if (*(int *)(**(int **)(_UNK_0190a71c + 0x1909da4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0190a720 + 0x1909dc0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x0202998c(iVar2,0x751,0,0);
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = 0x60;
      if (*(int *)(iVar2 + 0x1c) != 0x66) {
        iVar2 = param_1[5];
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = 0x61;
        if (*(int *)(iVar2 + 0x1c) != 0x67) {
          iVar2 = param_1[5];
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = 0;
          if (*(int *)(iVar2 + 0x1c) == 0x65) {
            uVar7 = 0x5f;
          }
        }
      }
      if (*(int *)(**(int **)(_UNK_0190a724 + 0x1909e54) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0190a728 + 0x1909e70));
      piVar8 = *(int **)(_UNK_0190a72c + 0x1909e84);
      iVar9 = *piVar8;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x014387a4();
        iVar9 = *piVar8;
      }
      uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x02e83850(iVar2,uVar10,0);
      if (*(int *)(**(int **)(_UNK_0190a730 + 0x1909ecc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0190a734 + 0x1909ee8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b77640(iVar2,uVar10,uVar7,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_01906a14(iVar6);
      param_1[10] = iVar2;
      func_0x014385cc();
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar2 + 0xbc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar1 = FUN_01900e94(iVar6,uVar7);
      iVar2 = param_1[5];
      *(undefined1 *)(param_1 + 0xb) = uVar1;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar12 = param_1[8];
      iVar11 = param_1[9];
      iVar4 = **(int **)(_UNK_0190a738 + 0x1909f80);
      iVar9 = param_1[7];
      uVar7 = *(undefined4 *)(iVar2 + 0xbc);
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4(iVar4);
        iVar4 = **(int **)(_UNK_0190a73c + 0x1909fc0);
      }
      iVar2 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
      if (iVar2 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4(iVar4);
          iVar4 = **(int **)(_UNK_0190a740 + 0x1909ff0);
        }
        uVar3 = **(undefined4 **)(iVar4 + 0x5c);
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0190a744 + 0x190a004));
        func_0x0152e3ec(iVar2,uVar3,**(undefined4 **)(_UNK_0190a748 + 0x190a018),0);
        piVar8 = (int *)(*(int *)(**(int **)(_UNK_0190a74c + 0x190a034) + 0x5c) + 8);
        *piVar8 = iVar2;
        func_0x014385cc(piVar8,iVar2);
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_019019dc(iVar6,uVar10,uVar7,iVar9,iVar12,iVar11,iVar2);
      if (*(int *)(**(int **)(_UNK_0190a750 + 0x190a07c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x024f11c0(800,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_28,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xc] = iStack_28;
        func_0x014385cc(param_1 + 0xc,0);
        func_0x035b2118(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0190a754 + 0x190a278))
        ;
        return;
      }
      goto LAB_0190a0cc;
    }
    *param_1 = -1;
    iStack_28 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x024f1028(&iStack_28,0);
  if (*(int *)(**(int **)(_UNK_0190a760 + 0x190a15c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024f11c0(500,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iStack_28 = func_0x024f1008(iVar2,0);
  iVar2 = func_0x024f1018(&iStack_28,0);
  if (iVar2 == 0) {
    *param_1 = 2;
    param_1[0xc] = iStack_28;
    func_0x014385cc(param_1 + 0xc,0);
    func_0x035b2118(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0190a764 + 0x190a200));
    return;
  }
LAB_0190a1ac:
  func_0x024f1028(&iStack_28,0);
  if ((char)param_1[0xb] != '\0') {
    iVar2 = param_1[10];
    if (iVar2 == 0) {
      func_0x014388e4();
      uVar7 = uRam00000010;
      iVar2 = param_1[10];
      if (iVar2 == 0) {
        iVar2 = 0;
        func_0x014388e4();
      }
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 0x10);
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x14);
    if (*(int *)(**(int **)(_UNK_0190a768 + 0x190a2b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar7 = func_0x02af43a8(uVar7,uVar10,0);
    if (*(int *)(**(int **)(_UNK_0190a76c + 0x190a2e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar6 = param_1[10];
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(iVar6 + 0x10);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar10 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    iVar6 = param_1[10];
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(iVar6 + 0x14);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar3 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x220,uVar10,uVar3,0,0,0);
    if (*(int *)(**(int **)(_UNK_0190a770 + 0x190a3c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_0190a774 + 0x190a3e0));
    if (*(int *)(**(int **)(_UNK_0190a778 + 0x190a3f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0190a77c + 0x190a410));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar8 = *(int **)(_UNK_0190a780 + 0x190a430);
    uVar10 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = *piVar8;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4(iVar6);
      iVar6 = *piVar8;
    }
    iVar9 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xc);
    if (iVar9 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4(iVar6);
        iVar6 = *piVar8;
      }
      uVar3 = **(undefined4 **)(iVar6 + 0x5c);
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0190a784 + 0x190a488));
      func_0x0152e3ec(iVar9,uVar3,**(undefined4 **)(_UNK_0190a788 + 0x190a49c),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
      *piVar8 = iVar9;
      func_0x014385cc(piVar8,iVar9);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02b75870(iVar2,uVar7,uVar10,0,0x69,0,0,0,0,0,0,0,iVar9,0,0);
  }
  *param_1 = -2;
  param_1[10] = 0;
  func_0x014385cc(param_1 + 10,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

