
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01654360(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_01655278 + 0x1654378);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0165527c + 0x165438c));
    func_0x01438628(*(undefined4 *)(_UNK_01655280 + 0x1654398));
    func_0x01438628(*(undefined4 *)(_UNK_01655284 + 0x16543a4));
    func_0x01438628(*(undefined4 *)(_UNK_01655288 + 0x16543b0));
    func_0x01438628(*(undefined4 *)(_UNK_0165528c + 0x16543bc));
    func_0x01438628(*(undefined4 *)(_UNK_01655290 + 0x16543c8));
    func_0x01438628(*(undefined4 *)(_UNK_01655294 + 0x16543d4));
    func_0x01438628(*(undefined4 *)(_UNK_01655298 + 0x16543e0));
    func_0x01438628(*(undefined4 *)(_UNK_0165529c + 0x16543ec));
    func_0x01438628(*(undefined4 *)(_UNK_016552a0 + 0x16543f8));
    func_0x01438628(*(undefined4 *)(_UNK_016552a4 + 0x1654404));
    func_0x01438628(*(undefined4 *)(_UNK_016552a8 + 0x1654410));
    func_0x01438628(*(undefined4 *)(_UNK_016552ac + 0x165441c));
    func_0x01438628(*(undefined4 *)(_UNK_016552b0 + 0x1654428));
    func_0x01438628(*(undefined4 *)(_UNK_016552b4 + 0x1654434));
    func_0x01438628(*(undefined4 *)(_UNK_016552b8 + 0x1654440));
    func_0x01438628(*(undefined4 *)(_UNK_016552bc + 0x165444c));
    func_0x01438628(*(undefined4 *)(_UNK_016552c0 + 0x1654458));
    func_0x01438628(*(undefined4 *)(_UNK_016552c4 + 0x1654464));
    func_0x01438628(*(undefined4 *)(_UNK_016552c8 + 0x1654470));
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
LAB_016544f0:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_01655324 + 0x1654508) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_01640370(0);
    if (iVar2 != 0) {
      FUN_016542f4();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_01642704(iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01655328 + 0x165456c));
      func_0x024f1124(iVar2,**(undefined4 **)(_UNK_0165532c + 0x1654580));
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_01646e64(iVar6,uVar7,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f112c(iVar2,**(undefined4 **)(_UNK_01655330 + 0x16545e4));
      iVar2 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_01655334 + 0x16545f8));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[0xd] = iStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a2bac(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_01655338 + 0x1654f90))
        ;
        return;
      }
LAB_0165460c:
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_0165533c + 0x1654618));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_0164b138(iVar6,0);
    iVar2 = param_1[0xb];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0164b1bc(iVar6,uVar7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[0xc] = iStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035b0e5c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01655340 + 0x1654cb4));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[0xd];
      param_1[0xd] = 0;
      goto LAB_0165460c;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_016552cc + 0x16547e0));
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
      if (*(int *)(**(int **)(_UNK_016552d0 + 0x1654834) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016552d4 + 0x1654854));
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
        if (*(int *)(**(int **)(_UNK_016552d8 + 0x1654cd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016552dc + 0x1654cf0));
        piVar4 = *(int **)(_UNK_016552e0 + 0x1654d04);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_016552e4 + 0x1654d24);
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
        goto LAB_016547a4;
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
      iVar1 = FUN_01642f18(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_016552e8 + 0x1654920));
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_016552ec + 0x1654934),0);
        if (*(int *)(**(int **)(_UNK_016552f0 + 0x1654950) + 0x74) == 0) {
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
      iVar1 = FUN_01642f18(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_01649f28(iVar6,iVar2,0);
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
            FUN_0164a0d4(iVar6,uVar7,0);
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
            FUN_0164a0d4(iVar6,uVar7,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_016552f4 + 0x1654e90) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016552f8 + 0x1654eac));
        piVar4 = *(int **)(_UNK_016552fc + 0x1654ec0);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_01655300 + 0x1654ee0);
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
        goto LAB_016547a4;
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
      iVar1 = FUN_01642704(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_01655304 + 0x1654fb4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01655308 + 0x1654fd0));
        piVar4 = *(int **)(_UNK_0165530c + 0x1654fe4);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_01655310 + 0x1655004);
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
        goto LAB_016547a4;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_01642704(iVar6,0);
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
      func_0x026cec5c(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_01655314 + 0x1654ab4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_01655318 + 0x1654b20) + 0x74) == 0) {
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
      func_0x020257a4(iVar2,0x345,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_0165531c + 0x1654bbc);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_01640370(0);
      if (iVar2 != 0) {
        func_0x0165535c();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_01640370(0);
      if ((iVar2 == 0) ||
         (iVar2 = func_0x016553c8(iVar2,param_1[6],param_1[8],param_1[9],param_1[10]), iVar2 == 0))
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
        func_0x035b0e5c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01655320 + 0x1654c78))
        ;
        return;
      }
      goto LAB_016544f0;
    }
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_0164afe4(iVar6,0,0);
  if (*(int *)(**(int **)(_UNK_01655344 + 0x16546d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01655348 + 0x16546ec));
  piVar4 = *(int **)(_UNK_0165534c + 0x1654700);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_01655350 + 0x1654720);
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
LAB_016547a4:
  *param_1 = -2;
  param_1[0xb] = 0;
  func_0x014385cc(param_1 + 0xb,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

