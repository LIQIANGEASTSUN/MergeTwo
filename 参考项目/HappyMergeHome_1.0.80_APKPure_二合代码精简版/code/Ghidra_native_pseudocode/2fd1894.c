
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fe1894(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_02fe27ac + 0x2fe18ac);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fe27b0 + 0x2fe18c0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27b4 + 0x2fe18cc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27b8 + 0x2fe18d8));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27bc + 0x2fe18e4));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27c0 + 0x2fe18f0));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27c4 + 0x2fe18fc));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27c8 + 0x2fe1908));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27cc + 0x2fe1914));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27d0 + 0x2fe1920));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27d4 + 0x2fe192c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27d8 + 0x2fe1938));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27dc + 0x2fe1944));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27e0 + 0x2fe1950));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27e4 + 0x2fe195c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27e8 + 0x2fe1968));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27ec + 0x2fe1974));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27f0 + 0x2fe1980));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27f4 + 0x2fe198c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27f8 + 0x2fe1998));
    func_0x01438628(*(undefined4 *)(_UNK_02fe27fc + 0x2fe19a4));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
LAB_02fe1a24:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_02fe2858 + 0x2fe1a3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_02fcd8a4(0);
    if (iVar2 != 0) {
      FUN_02fe1828();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02fcfc38(iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02fe285c + 0x2fe1aa0));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_02fe2860 + 0x2fe1ab4));
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_02fd4398(iVar6,uVar7,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_02fe2864 + 0x2fe1b18));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_02fe2868 + 0x2fe1b2c));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[0xd] = iStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a1900(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_02fe286c + 0x2fe24c4))
        ;
        return;
      }
LAB_02fe1b40:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_02fe2870 + 0x2fe1b4c));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_02fd866c(iVar6,0);
    iVar2 = param_1[0xb];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02fd86f0(iVar6,uVar7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[0xc] = iStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035afbb0(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_02fe2874 + 0x2fe21e8));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[0xd];
      param_1[0xd] = 0;
      goto LAB_02fe1b40;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02fe2800 + 0x2fe1d14));
      func_0x024eeca8(iVar2,0);
      piVar4 = param_1 + 0xb;
      *piVar4 = iVar2;
      func_0x014385cc(piVar4,iVar2);
      iVar2 = param_1[0xb];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar5 = (int *)(iVar2 + 8);
      *piVar5 = iVar1;
      func_0x014385cc(piVar5,iVar1);
      iVar2 = *piVar4;
      if (*(int *)(**(int **)(_UNK_02fe2804 + 0x2fe1d68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe2808 + 0x2fe1d88));
      iVar8 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_029a6fa8(iVar1,iVar8,0);
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
        if (*(int *)(**(int **)(_UNK_02fe280c + 0x2fe2208) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe2810 + 0x2fe2224));
        piVar4 = *(int **)(_UNK_02fe2814 + 0x2fe2238);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_02fe2818 + 0x2fe2258);
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
        goto LAB_02fe1cd8;
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
      iVar1 = FUN_02fd044c(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02fe281c + 0x2fe1e54));
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_02fe2820 + 0x2fe1e68),0);
        if (*(int *)(**(int **)(_UNK_02fe2824 + 0x2fe1e84) + 0x74) == 0) {
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
      iVar1 = FUN_02fd044c(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_02fd745c(iVar6,iVar2,0);
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
            FUN_02fd7608(iVar6,uVar7,0);
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
            FUN_02fd7608(iVar6,uVar7,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_02fe2828 + 0x2fe23c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe282c + 0x2fe23e0));
        piVar4 = *(int **)(_UNK_02fe2830 + 0x2fe23f4);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_02fe2834 + 0x2fe2414);
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
        goto LAB_02fe1cd8;
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
      iVar1 = FUN_02fcfc38(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02fe2838 + 0x2fe24e8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe283c + 0x2fe2504));
        piVar4 = *(int **)(_UNK_02fe2840 + 0x2fe2518);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_02fe2844 + 0x2fe2538);
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
        goto LAB_02fe1cd8;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02fcfc38(iVar6,0);
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
      FUN_026cec5c(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_02fe2848 + 0x2fe1fe8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_02fe284c + 0x2fe2054) + 0x74) == 0) {
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
      func_0x020257a4(iVar2,0x314,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_02fe2850 + 0x2fe20f0);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_02fcd8a4(0);
      if (iVar2 != 0) {
        func_0x02fe2890();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_02fcd8a4(0);
      if ((iVar2 == 0) ||
         (iVar2 = func_0x02fe28fc(iVar2,param_1[6],param_1[8],param_1[9],param_1[10]), iVar2 == 0))
      {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xc] = iStack_24;
        func_0x014385cc(param_1 + 0xc,0);
        func_0x035afbb0(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_02fe2854 + 0x2fe21ac))
        ;
        return;
      }
      goto LAB_02fe1a24;
    }
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_02fd8518(iVar6,0,0);
  if (*(int *)(**(int **)(_UNK_02fe2878 + 0x2fe1c04) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe287c + 0x2fe1c20));
  piVar4 = *(int **)(_UNK_02fe2880 + 0x2fe1c34);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_02fe2884 + 0x2fe1c54);
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
LAB_02fe1cd8:
  *param_1 = -2;
  param_1[0xb] = 0;
  func_0x014385cc(param_1 + 0xb,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

