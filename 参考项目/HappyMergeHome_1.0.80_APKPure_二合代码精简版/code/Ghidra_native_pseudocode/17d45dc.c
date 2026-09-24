
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e45dc(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_017e509c + 0x17e45f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e50a0 + 0x17e4608));
    func_0x01438628(*(undefined4 *)(_UNK_017e50a4 + 0x17e4614));
    func_0x01438628(*(undefined4 *)(_UNK_017e50a8 + 0x17e4620));
    func_0x01438628(*(undefined4 *)(_UNK_017e50ac + 0x17e462c));
    func_0x01438628(*(undefined4 *)(_UNK_017e50b0 + 0x17e4638));
    func_0x01438628(*(undefined4 *)(_UNK_017e50b4 + 0x17e4644));
    func_0x01438628(*(undefined4 *)(_UNK_017e50b8 + 0x17e4650));
    func_0x01438628(*(undefined4 *)(_UNK_017e50bc + 0x17e465c));
    func_0x01438628(*(undefined4 *)(_UNK_017e50c0 + 0x17e4668));
    func_0x01438628(*(undefined4 *)(_UNK_017e50c4 + 0x17e4674));
    func_0x01438628(*(undefined4 *)(_UNK_017e50c8 + 0x17e4680));
    func_0x01438628(*(undefined4 *)(_UNK_017e50cc + 0x17e468c));
    func_0x01438628(*(undefined4 *)(_UNK_017e50d0 + 0x17e4698));
    func_0x01438628(*(undefined4 *)(_UNK_017e50d4 + 0x17e46a4));
    func_0x01438628(*(undefined4 *)(_UNK_017e50d8 + 0x17e46b0));
    func_0x01438628(*(undefined4 *)(_UNK_017e50dc + 0x17e46bc));
    func_0x01438628(*(undefined4 *)(_UNK_017e50e0 + 0x17e46c8));
    func_0x01438628(*(undefined4 *)(_UNK_017e50e4 + 0x17e46d4));
    func_0x01438628(*(undefined4 *)(_UNK_017e50e8 + 0x17e46e0));
    func_0x01438628(*(undefined4 *)(_UNK_017e50ec + 0x17e46ec));
    *pcVar4 = '\x01';
  }
  iVar2 = *param_1;
  iVar5 = param_1[6];
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_28 = param_1[0xc];
    param_1[0xc] = 0;
LAB_017e4aa0:
    func_0x024f1028(&iStack_28,0);
    if (*(int *)(**(int **)(_UNK_017e512c + 0x17e4ab8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_017d3d58();
    if ((iVar2 == 0) || (iVar2 = func_0x017f3ab0(iVar2,(char)param_1[0xb],0), iVar2 == 0)) {
      iVar2 = 0;
      func_0x014388e4();
    }
    iStack_28 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_28,0);
    if (iVar2 == 0) {
      *param_1 = 1;
      param_1[0xc] = iStack_28;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035b1668(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_017e5130 + 0x17e4c10));
      return;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        *param_1 = -1;
        iStack_28 = param_1[0xc];
        param_1[0xc] = 0;
        goto LAB_017e4b80;
      }
      if (*(int *)(**(int **)(_UNK_017e50f0 + 0x17e4778) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017e50f4 + 0x17e4794));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x0202998c(iVar2,0x751,0,0);
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0x3ad;
      if (*(int *)(iVar2 + 0x1c) != 0x66) {
        iVar2 = param_1[5];
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = 0x3ae;
        if (*(int *)(iVar2 + 0x1c) != 0x67) {
          iVar2 = param_1[5];
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = 0;
          if (*(int *)(iVar2 + 0x1c) == 0x65) {
            uVar6 = 0x3ac;
          }
        }
      }
      if (*(int *)(**(int **)(_UNK_017e50f8 + 0x17e4828) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017e50fc + 0x17e4844));
      piVar11 = *(int **)(_UNK_017e5100 + 0x17e4858);
      iVar7 = *piVar11;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar11;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x02e83850(iVar2,uVar8,0);
      if (*(int *)(**(int **)(_UNK_017e5104 + 0x17e48a0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017e5108 + 0x17e48bc));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b77640(iVar2,uVar8,uVar6,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_017e19b8(iVar5);
      param_1[10] = iVar2;
      func_0x014385cc();
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar2 + 0xbc);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar1 = FUN_017dc058(iVar5,uVar6);
      iVar2 = param_1[5];
      *(undefined1 *)(param_1 + 0xb) = uVar1;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar12 = param_1[8];
      iVar10 = param_1[9];
      iVar3 = **(int **)(_UNK_017e510c + 0x17e4954);
      iVar7 = param_1[7];
      uVar6 = *(undefined4 *)(iVar2 + 0xbc);
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4(iVar3);
        iVar3 = **(int **)(_UNK_017e5110 + 0x17e4994);
      }
      iVar2 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      if (iVar2 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4(iVar3);
          iVar3 = **(int **)(_UNK_017e5114 + 0x17e49c4);
        }
        uVar9 = **(undefined4 **)(iVar3 + 0x5c);
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017e5118 + 0x17e49d8));
        func_0x0152e3ec(iVar2,uVar9,**(undefined4 **)(_UNK_017e511c + 0x17e49ec),0);
        piVar11 = (int *)(*(int *)(**(int **)(_UNK_017e5120 + 0x17e4a08) + 0x5c) + 8);
        *piVar11 = iVar2;
        func_0x014385cc(piVar11,iVar2);
      }
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_017dcb90(iVar5,uVar8,uVar6,iVar7,iVar12,iVar10,iVar2);
      if (*(int *)(**(int **)(_UNK_017e5124 + 0x17e4a50) + 0x74) == 0) {
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
        func_0x035b1668(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_017e5128 + 0x17e4c4c))
        ;
        return;
      }
      goto LAB_017e4aa0;
    }
    *param_1 = -1;
    iStack_28 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x024f1028(&iStack_28,0);
  if (*(int *)(**(int **)(_UNK_017e5134 + 0x17e4b30) + 0x74) == 0) {
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
    func_0x035b1668(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_017e5138 + 0x17e4bd4));
    return;
  }
LAB_017e4b80:
  func_0x024f1028(&iStack_28,0);
  if ((char)param_1[0xb] != '\0') {
    iVar2 = param_1[10];
    if (iVar2 == 0) {
      func_0x014388e4();
      uVar6 = uRam00000010;
      iVar2 = param_1[10];
      if (iVar2 == 0) {
        iVar2 = 0;
        func_0x014388e4();
      }
    }
    else {
      uVar6 = *(undefined4 *)(iVar2 + 0x10);
    }
    uVar8 = *(undefined4 *)(iVar2 + 0x14);
    if (*(int *)(**(int **)(_UNK_017e513c + 0x17e4c88) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x02af43a8(uVar6,uVar8,0);
    if (*(int *)(**(int **)(_UNK_017e5140 + 0x17e4cbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_017e5144 + 0x17e4cd8));
    if (*(int *)(**(int **)(_UNK_017e5148 + 0x17e4cec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017e514c + 0x17e4d08));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    piVar11 = *(int **)(_UNK_017e5150 + 0x17e4d28);
    uVar8 = *(undefined4 *)(iVar5 + 0x10);
    iVar5 = *piVar11;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4(iVar5);
      iVar5 = *piVar11;
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 0x5c) + 0xc);
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4(iVar5);
        iVar5 = *piVar11;
      }
      uVar9 = **(undefined4 **)(iVar5 + 0x5c);
      iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_017e5154 + 0x17e4d80));
      func_0x0152e3ec(iVar7,uVar9,**(undefined4 **)(_UNK_017e5158 + 0x17e4d94),0);
      piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 0xc);
      *piVar11 = iVar7;
      func_0x014385cc(piVar11,iVar7);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar9 = 0;
    func_0x02b75870(iVar2,uVar6,uVar8,0,0x69,0,0,0,0,0,0,0,iVar7,0,0);
    if (*(int *)(**(int **)(_UNK_017e515c + 0x17e4e18) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar5 = param_1[10];
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    piVar11 = *(int **)(iVar5 + 0x10);
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar6 = (**(code **)(*piVar11 + 0xd8))(piVar11,*(undefined4 *)(*piVar11 + 0xdc));
    iVar5 = param_1[10];
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    piVar11 = *(int **)(iVar5 + 0x14);
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar8 = (**(code **)(*piVar11 + 0xd8))(piVar11,*(undefined4 *)(*piVar11 + 0xdc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x220,uVar6,uVar8,0,0,0,uVar9,0,0,0,0,0);
  }
  *param_1 = -2;
  param_1[10] = 0;
  func_0x014385cc(param_1 + 10,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

