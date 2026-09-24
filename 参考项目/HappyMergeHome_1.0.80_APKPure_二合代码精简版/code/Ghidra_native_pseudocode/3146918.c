
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03156918(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03157820 + 0x3156930);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03157824 + 0x3156944));
    func_0x01438628(*(undefined4 *)(_UNK_03157828 + 0x3156950));
    func_0x01438628(*(undefined4 *)(_UNK_0315782c + 0x315695c));
    func_0x01438628(*(undefined4 *)(_UNK_03157830 + 0x3156968));
    func_0x01438628(*(undefined4 *)(_UNK_03157834 + 0x3156974));
    func_0x01438628(*(undefined4 *)(_UNK_03157838 + 0x3156980));
    func_0x01438628(*(undefined4 *)(_UNK_0315783c + 0x315698c));
    func_0x01438628(*(undefined4 *)(_UNK_03157840 + 0x3156998));
    func_0x01438628(*(undefined4 *)(_UNK_03157844 + 0x31569a4));
    func_0x01438628(*(undefined4 *)(_UNK_03157848 + 0x31569b0));
    func_0x01438628(*(undefined4 *)(_UNK_0315784c + 0x31569bc));
    func_0x01438628(*(undefined4 *)(_UNK_03157850 + 0x31569c8));
    func_0x01438628(*(undefined4 *)(_UNK_03157854 + 0x31569d4));
    func_0x01438628(*(undefined4 *)(_UNK_03157858 + 0x31569e0));
    func_0x01438628(*(undefined4 *)(_UNK_0315785c + 0x31569ec));
    func_0x01438628(*(undefined4 *)(_UNK_03157860 + 0x31569f8));
    func_0x01438628(*(undefined4 *)(_UNK_03157864 + 0x3156a04));
    func_0x01438628(*(undefined4 *)(_UNK_03157868 + 0x3156a10));
    func_0x01438628(*(undefined4 *)(_UNK_0315786c + 0x3156a1c));
    func_0x01438628(*(undefined4 *)(_UNK_03157870 + 0x3156a28));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
LAB_03156aa8:
    func_0x05055ca8(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_031578cc + 0x3156ac0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_03143658(0);
    if (iVar2 != 0) {
      FUN_031568ac();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_031457fc(iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031578d0 + 0x3156b24));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_031578d4 + 0x3156b38));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_03149f5c(iVar6,uVar7,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_031578d8 + 0x3156b9c));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_031578dc + 0x3156bb0));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x0359f3b8(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_031578e0 + 0x3157538))
        ;
        return;
      }
LAB_03156bc4:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_031578e4 + 0x3156bd0));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_0314e228(iVar6,0);
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0314e2ac(iVar6,uVar7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035ad668(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_031578e8 + 0x315725c));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_03156bc4;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03157874 + 0x3156d98));
      func_0x024eeca8(iVar2,0);
      piVar4 = param_1 + 8;
      *piVar4 = iVar2;
      func_0x014385cc(piVar4,iVar2);
      iVar2 = param_1[8];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar5 = (int *)(iVar2 + 8);
      *piVar5 = iVar1;
      func_0x014385cc(piVar5,iVar1);
      iVar2 = *piVar4;
      if (*(int *)(**(int **)(_UNK_03157878 + 0x3156dec) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0315787c + 0x3156e0c));
      iVar8 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x029a6fa8(iVar1,iVar8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar10 = (undefined4 *)(iVar2 + 0xc);
      *puVar10 = uVar7;
      func_0x014385cc(puVar10,uVar7);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*(int *)(**(int **)(_UNK_03157880 + 0x315727c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03157884 + 0x3157298));
        piVar4 = *(int **)(_UNK_03157888 + 0x31572ac);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0315788c + 0x31572cc);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_03156d5c;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_03146010(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03157890 + 0x3156ed8));
        func_0x05096384(uVar7,iVar2,**(undefined4 **)(_UNK_03157894 + 0x3156eec),0);
        if (*(int *)(**(int **)(_UNK_03157898 + 0x3156f08) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar7,0);
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_03146010(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_0314d018(iVar6,iVar2,0);
        if (param_1[7] == 10) {
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_0314d1c4(iVar6,uVar7,0);
            iVar2 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_0314d1c4(iVar6,uVar7,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_0315789c + 0x3157438) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031578a0 + 0x3157454));
        piVar4 = *(int **)(_UNK_031578a4 + 0x3157468);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_031578a8 + 0x3157488);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_03156d5c;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_031457fc(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_031578ac + 0x315755c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031578b0 + 0x3157578));
        piVar4 = *(int **)(_UNK_031578b4 + 0x315758c);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_031578b8 + 0x31575ac);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_03156d5c;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_031457fc(iVar6,0);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026f0b0c(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_031578bc + 0x315706c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_031578c0 + 0x31570d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x01524ffc(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x292,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_031578c4 + 0x3157174);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_03143658(0);
      if (iVar2 != 0) {
        func_0x03157904();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_03143658(0);
      if ((iVar2 == 0) || (iVar2 = func_0x03157970(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x05055bbc(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035ad668(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_031578c8 + 0x3157220))
        ;
        return;
      }
      goto LAB_03156aa8;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x05055ca8(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_0314e0d4(iVar6,0,0);
  if (*(int *)(**(int **)(_UNK_031578ec + 0x3156c88) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031578f0 + 0x3156ca4));
  piVar4 = *(int **)(_UNK_031578f4 + 0x3156cb8);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_031578f8 + 0x3156cd8);
  iVar1 = *(int *)(iVar8 + 0x1c);
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar8);
    iVar1 = *(int *)(iVar8 + 0x1c);
  }
  iVar6 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x0149097c();
  }
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar6 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar7,uVar9,0);
LAB_03156d5c:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x0505659c(param_1 + 1,0);
  return;
}

