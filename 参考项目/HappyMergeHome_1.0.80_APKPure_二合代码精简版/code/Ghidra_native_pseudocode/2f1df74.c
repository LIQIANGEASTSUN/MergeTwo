
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2df74(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02f2ebe4 + 0x2f2df8c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2ebe8 + 0x2f2dfa0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ebec + 0x2f2dfac));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ebf0 + 0x2f2dfb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ebf4 + 0x2f2dfc4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ebf8 + 0x2f2dfd0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ebfc + 0x2f2dfdc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec00 + 0x2f2dfe8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec04 + 0x2f2dff4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec08 + 0x2f2e000));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec0c + 0x2f2e00c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec10 + 0x2f2e018));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec14 + 0x2f2e024));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec18 + 0x2f2e030));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec1c + 0x2f2e03c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec20 + 0x2f2e048));
    func_0x01438628(*(undefined4 *)(_UNK_02f2ec24 + 0x2f2e054));
    *pcVar4 = '\x01';
  }
  iVar2 = *param_1;
  iVar5 = param_1[6];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
LAB_02f2e0d4:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_02f2ec6c + 0x2f2e0ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_02f22a90(0);
    if (iVar2 != 0) {
      FUN_02f2df00();
    }
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02f23d18(iVar5,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f2ec70 + 0x2f2e150));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_02f2ec74 + 0x2f2e164));
      iVar1 = param_1[8];
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_02f27ce8(iVar5,iVar1,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_02f2ec78 + 0x2f2e1b8));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_02f2ec7c + 0x2f2e1cc));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x0359ebcc(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_02f2ec80 + 0x2f2e948))
        ;
        return;
      }
LAB_02f2e1e0:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_02f2ec84 + 0x2f2e1ec));
    }
    iVar2 = param_1[8];
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02f2aa2c(iVar5,iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035ace7c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_02f2ec88 + 0x2f2e69c));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_02f2e1e0;
    }
    if (iVar2 != 2) {
      if (*(int *)(**(int **)(_UNK_02f2ec28 + 0x2f2e388) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2ec2c + 0x2f2e3a4));
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_029a6fa8(iVar2,iVar1,0);
      piVar3 = param_1 + 8;
      *piVar3 = iVar2;
      func_0x014385cc(piVar3);
      if (*piVar3 == 0) {
        if (*(int *)(**(int **)(_UNK_02f2ec30 + 0x2f2e6bc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2ec34 + 0x2f2e6d8));
        piVar3 = *(int **)(_UNK_02f2ec38 + 0x2f2e6ec);
        iVar5 = *piVar3;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
          iVar5 = *piVar3;
        }
        iVar7 = **(int **)(_UNK_02f2ec3c + 0x2f2e70c);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x318);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar5 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar5 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_02f2e34c;
      }
      iVar2 = *(int *)(*piVar3 + 0x30);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02f243cc(iVar5,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar3;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02f2aa2c(iVar5,iVar2,0);
      }
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02f243cc(iVar5,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[5];
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02f29df0(iVar5,iVar2,0);
        if (param_1[7] == 10) {
          iVar2 = *piVar3;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar3;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            FUN_02f29f9c(iVar5,uVar6,0);
            iVar2 = *piVar3;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            FUN_02f29f9c(iVar5,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_02f2ec40 + 0x2f2e848) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2ec44 + 0x2f2e864));
        piVar3 = *(int **)(_UNK_02f2ec48 + 0x2f2e878);
        iVar5 = *piVar3;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
          iVar5 = *piVar3;
        }
        iVar7 = **(int **)(_UNK_02f2ec4c + 0x2f2e898);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x318);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar5 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar5 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_02f2e34c;
      }
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02f23d18(iVar5,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02f2ec50 + 0x2f2e96c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2ec54 + 0x2f2e988));
        piVar3 = *(int **)(_UNK_02f2ec58 + 0x2f2e99c);
        iVar5 = *piVar3;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
          iVar5 = *piVar3;
        }
        iVar7 = **(int **)(_UNK_02f2ec5c + 0x2f2e9bc);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x318);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar5 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar5 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_02f2e34c;
      }
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02f23d18(iVar5,0);
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026f1954(iVar2,uVar6,0);
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_02f2ec60 + 0x2f2e548) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      piVar3 = *(int **)(_UNK_02f2ec64 + 0x2f2e5b4);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_02f22a90(0);
      if (iVar2 != 0) {
        func_0x02f2eca4();
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_02f22a90(0);
      if ((iVar2 == 0) || (iVar2 = func_0x02f2ed18(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035ace7c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_02f2ec68 + 0x2f2e660))
        ;
        return;
      }
      goto LAB_02f2e0d4;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_02f2a994(iVar5,0);
  if (*(int *)(**(int **)(_UNK_02f2ec8c + 0x2f2e278) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2ec90 + 0x2f2e294));
  piVar3 = *(int **)(_UNK_02f2ec94 + 0x2f2e2a8);
  iVar5 = *piVar3;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar3;
  }
  iVar7 = **(int **)(_UNK_02f2ec98 + 0x2f2e2c8);
  iVar1 = *(int *)(iVar7 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x318);
  if (iVar1 == 0) {
    func_0x014909d8(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar5 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar5 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar6,uVar8,0);
LAB_02f2e34c:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

