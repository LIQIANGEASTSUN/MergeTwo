
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e44b0(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_030e5398 + 0x30e44c8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e539c + 0x30e44dc));
    func_0x01438628(*(undefined4 *)(_UNK_030e53a0 + 0x30e44e8));
    func_0x01438628(*(undefined4 *)(_UNK_030e53a4 + 0x30e44f4));
    func_0x01438628(*(undefined4 *)(_UNK_030e53a8 + 0x30e4500));
    func_0x01438628(*(undefined4 *)(_UNK_030e53ac + 0x30e450c));
    func_0x01438628(*(undefined4 *)(_UNK_030e53b0 + 0x30e4518));
    func_0x01438628(*(undefined4 *)(_UNK_030e53b4 + 0x30e4524));
    func_0x01438628(*(undefined4 *)(_UNK_030e53b8 + 0x30e4530));
    func_0x01438628(*(undefined4 *)(_UNK_030e53bc + 0x30e453c));
    func_0x01438628(*(undefined4 *)(_UNK_030e53c0 + 0x30e4548));
    func_0x01438628(*(undefined4 *)(_UNK_030e53c4 + 0x30e4554));
    func_0x01438628(*(undefined4 *)(_UNK_030e53c8 + 0x30e4560));
    func_0x01438628(*(undefined4 *)(_UNK_030e53cc + 0x30e456c));
    func_0x01438628(*(undefined4 *)(_UNK_030e53d0 + 0x30e4578));
    func_0x01438628(*(undefined4 *)(_UNK_030e53d4 + 0x30e4584));
    func_0x01438628(*(undefined4 *)(_UNK_030e53d8 + 0x30e4590));
    func_0x01438628(*(undefined4 *)(_UNK_030e53dc + 0x30e459c));
    func_0x01438628(*(undefined4 *)(_UNK_030e53e0 + 0x30e45a8));
    func_0x01438628(*(undefined4 *)(_UNK_030e53e4 + 0x30e45b4));
    func_0x01438628(*(undefined4 *)(_UNK_030e53e8 + 0x30e45c0));
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
LAB_030e4640:
    func_0x05055ca8(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_030e5444 + 0x30e4658) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_030d18ac(0);
    if (iVar2 != 0) {
      FUN_030e4444();
    }
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_030d2ca4(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030e5448 + 0x30e46bc));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_030e544c + 0x30e46d0));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_030d7300(iVar10,uVar6,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_030e5450 + 0x30e4734));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_030e5454 + 0x30e4748));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x035a165c(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_030e5458 + 0x30e50b4))
        ;
        return;
      }
LAB_030e475c:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_030e545c + 0x30e4768));
    }
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_030da800(iVar10,uVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035af90c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_030e5460 + 0x30e4dd8));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_030e475c;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030e53ec + 0x30e48fc));
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
      if (*(int *)(**(int **)(_UNK_030e53f0 + 0x30e4950) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030e53f4 + 0x30e4970));
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
        if (*(int *)(**(int **)(_UNK_030e53f8 + 0x30e4df8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030e53fc + 0x30e4e14));
        piVar5 = *(int **)(_UNK_030e5400 + 0x30e4e28);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_030e5404 + 0x30e4e48);
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
        goto LAB_030e48c0;
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
      iVar1 = FUN_030d34b8(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_030e5408 + 0x30e4a3c));
        func_0x05096384(uVar6,iVar2,**(undefined4 **)(_UNK_030e540c + 0x30e4a50),0);
        if (*(int *)(**(int **)(_UNK_030e5410 + 0x30e4a6c) + 0x74) == 0) {
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
      iVar1 = FUN_030d34b8(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        FUN_030da3bc(iVar10,iVar2,0);
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
            FUN_030da568(iVar10,uVar6,0);
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
            FUN_030da568(iVar10,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_030e5414 + 0x30e4fb4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030e5418 + 0x30e4fd0));
        piVar5 = *(int **)(_UNK_030e541c + 0x30e4fe4);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_030e5420 + 0x30e5004);
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
        goto LAB_030e48c0;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_030dccf0(iVar10,0);
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
      iVar1 = FUN_030d2ca4(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_030e5424 + 0x30e50d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030e5428 + 0x30e50f4));
        piVar5 = *(int **)(_UNK_030e542c + 0x30e5108);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_030e5430 + 0x30e5128);
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
        goto LAB_030e48c0;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_030d2ca4(iVar10,0);
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
        if (*(int *)(**(int **)(_UNK_030e5434 + 0x30e4be8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_030e5438 + 0x30e4c54) + 0x74) == 0) {
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
      func_0x020257a4(iVar2,0x2fc,uVar6,0,0,0,0);
      piVar5 = *(int **)(_UNK_030e543c + 0x30e4cf0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_030d18ac(0);
      if (iVar2 != 0) {
        func_0x030e547c();
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_030d18ac(0);
      if ((iVar2 == 0) || (iVar2 = func_0x030e54e8(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x05055bbc(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035af90c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_030e5440 + 0x30e4d9c))
        ;
        return;
      }
      goto LAB_030e4640;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x05055ca8(&iStack_24,0);
  if (*(int *)(**(int **)(_UNK_030e5464 + 0x30e47ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_030e5468 + 0x30e4808));
  piVar5 = *(int **)(_UNK_030e546c + 0x30e481c);
  iVar10 = *piVar5;
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
    iVar10 = *piVar5;
  }
  iVar7 = **(int **)(_UNK_030e5470 + 0x30e483c);
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
LAB_030e48c0:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x0505659c(param_1 + 1,0);
  return;
}

