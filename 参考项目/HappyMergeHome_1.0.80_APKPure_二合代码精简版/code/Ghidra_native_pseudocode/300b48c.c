
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0301b48c(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0301c374 + 0x301b4a4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0301c378 + 0x301b4b8));
    func_0x01438628(*(undefined4 *)(_UNK_0301c37c + 0x301b4c4));
    func_0x01438628(*(undefined4 *)(_UNK_0301c380 + 0x301b4d0));
    func_0x01438628(*(undefined4 *)(_UNK_0301c384 + 0x301b4dc));
    func_0x01438628(*(undefined4 *)(_UNK_0301c388 + 0x301b4e8));
    func_0x01438628(*(undefined4 *)(_UNK_0301c38c + 0x301b4f4));
    func_0x01438628(*(undefined4 *)(_UNK_0301c390 + 0x301b500));
    func_0x01438628(*(undefined4 *)(_UNK_0301c394 + 0x301b50c));
    func_0x01438628(*(undefined4 *)(_UNK_0301c398 + 0x301b518));
    func_0x01438628(*(undefined4 *)(_UNK_0301c39c + 0x301b524));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3a0 + 0x301b530));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3a4 + 0x301b53c));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3a8 + 0x301b548));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3ac + 0x301b554));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3b0 + 0x301b560));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3b4 + 0x301b56c));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3b8 + 0x301b578));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3bc + 0x301b584));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3c0 + 0x301b590));
    func_0x01438628(*(undefined4 *)(_UNK_0301c3c4 + 0x301b59c));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar10 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
LAB_0301b61c:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_0301c420 + 0x301b634) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0300888c(0);
    if (iVar2 != 0) {
      FUN_0301b420();
    }
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_03009c84(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0301c424 + 0x301b698));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_0301c428 + 0x301b6ac));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_0300e2e0(iVar10,uVar6,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_0301c42c + 0x301b710));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_0301c430 + 0x301b724));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x035a1bb4(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0301c434 + 0x301c090))
        ;
        return;
      }
LAB_0301b738:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_0301c438 + 0x301b744));
    }
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_030117dc(iVar10,uVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035afe64(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0301c43c + 0x301bdb4));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_0301b738;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0301c3c8 + 0x301b8d8));
      func_0x024eeca8(iVar2,0);
      piVar5 = param_1 + 8;
      *piVar5 = iVar2;
      func_0x014385cc(piVar5,iVar2);
      iVar2 = param_1[8];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar4 = (int *)(iVar2 + 8);
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      iVar2 = *piVar5;
      if (*(int *)(**(int **)(_UNK_0301c3cc + 0x301b92c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0301c3d0 + 0x301b94c));
      iVar7 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = FUN_029a6fa8(iVar1,iVar7,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = (undefined4 *)(iVar2 + 0xc);
      *puVar9 = uVar6;
      func_0x014385cc(puVar9,uVar6);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*(int *)(**(int **)(_UNK_0301c3d4 + 0x301bdd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0301c3d8 + 0x301bdf0));
        piVar5 = *(int **)(_UNK_0301c3dc + 0x301be04);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_0301c3e0 + 0x301be24);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_0301b89c;
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0300a498(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_0301c3e4 + 0x301ba18));
        func_0x0152e3ec(uVar6,iVar2,**(undefined4 **)(_UNK_0301c3e8 + 0x301ba2c),0);
        if (*(int *)(**(int **)(_UNK_0301c3ec + 0x301ba48) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar6,0);
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0300a498(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        FUN_03011398(iVar10,iVar2,0);
        if (param_1[7] == 10) {
          iVar2 = *piVar5;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar5;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_03011544(iVar10,uVar6,0);
            iVar2 = *piVar5;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_03011544(iVar10,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_0301c3f0 + 0x301bf90) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0301c3f4 + 0x301bfac));
        piVar5 = *(int **)(_UNK_0301c3f8 + 0x301bfc0);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_0301c3fc + 0x301bfe0);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_0301b89c;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_03013ccc(iVar10,0);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_03009c84(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0301c400 + 0x301c0b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0301c404 + 0x301c0d0));
        piVar5 = *(int **)(_UNK_0301c408 + 0x301c0e4);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_0301c40c + 0x301c104);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_0301b89c;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_03009c84(iVar10,0);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      FUN_026ef3dc(iVar2,uVar6,0);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_0301c410 + 0x301bbc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_0301c414 + 0x301bc30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x01524ffc(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x31b,uVar6,0,0,0,0);
      piVar5 = *(int **)(_UNK_0301c418 + 0x301bccc);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0300888c(0);
      if (iVar2 != 0) {
        func_0x0301c458();
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0300888c(0);
      if ((iVar2 == 0) || (iVar2 = func_0x0301c4c4(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035afe64(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0301c41c + 0x301bd78))
        ;
        return;
      }
      goto LAB_0301b61c;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (*(int *)(**(int **)(_UNK_0301c440 + 0x301b7c8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0301c444 + 0x301b7e4));
  piVar5 = *(int **)(_UNK_0301c448 + 0x301b7f8);
  iVar10 = *piVar5;
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
    iVar10 = *piVar5;
  }
  iVar7 = **(int **)(_UNK_0301c44c + 0x301b818);
  iVar1 = *(int *)(iVar7 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar10 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x0149097c();
  }
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar10 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar6,uVar8,0);
LAB_0301b89c:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

