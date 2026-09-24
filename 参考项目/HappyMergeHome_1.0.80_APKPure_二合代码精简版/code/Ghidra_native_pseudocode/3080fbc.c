
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03090fbc(int *param_1)

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
  
  pcVar3 = (char *)(_UNK_03091ed4 + 0x3090fd4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03091ed8 + 0x3090fe8));
    func_0x01438628(*(undefined4 *)(_UNK_03091edc + 0x3090ff4));
    func_0x01438628(*(undefined4 *)(_UNK_03091ee0 + 0x3091000));
    func_0x01438628(*(undefined4 *)(_UNK_03091ee4 + 0x309100c));
    func_0x01438628(*(undefined4 *)(_UNK_03091ee8 + 0x3091018));
    func_0x01438628(*(undefined4 *)(_UNK_03091eec + 0x3091024));
    func_0x01438628(*(undefined4 *)(_UNK_03091ef0 + 0x3091030));
    func_0x01438628(*(undefined4 *)(_UNK_03091ef4 + 0x309103c));
    func_0x01438628(*(undefined4 *)(_UNK_03091ef8 + 0x3091048));
    func_0x01438628(*(undefined4 *)(_UNK_03091efc + 0x3091054));
    func_0x01438628(*(undefined4 *)(_UNK_03091f00 + 0x3091060));
    func_0x01438628(*(undefined4 *)(_UNK_03091f04 + 0x309106c));
    func_0x01438628(*(undefined4 *)(_UNK_03091f08 + 0x3091078));
    func_0x01438628(*(undefined4 *)(_UNK_03091f0c + 0x3091084));
    func_0x01438628(*(undefined4 *)(_UNK_03091f10 + 0x3091090));
    func_0x01438628(*(undefined4 *)(_UNK_03091f14 + 0x309109c));
    func_0x01438628(*(undefined4 *)(_UNK_03091f18 + 0x30910a8));
    func_0x01438628(*(undefined4 *)(_UNK_03091f1c + 0x30910b4));
    func_0x01438628(*(undefined4 *)(_UNK_03091f20 + 0x30910c0));
    func_0x01438628(*(undefined4 *)(_UNK_03091f24 + 0x30910cc));
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
LAB_0309114c:
    func_0x05055ca8(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_03091f80 + 0x3091164) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0307cfc8(0);
    if (iVar2 != 0) {
      FUN_03090f50();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0307f35c(iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03091f84 + 0x30911c8));
      func_0x03bbd054(iVar2,**(undefined4 **)(_UNK_03091f88 + 0x30911dc));
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_03083abc(iVar6,uVar7,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar2,**(undefined4 **)(_UNK_03091f8c + 0x3091240));
      iVar2 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_03091f90 + 0x3091254));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[0xd] = iStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a13a8(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_03091f94 + 0x3091bec))
        ;
        return;
      }
LAB_03091268:
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_03091f98 + 0x3091274));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_03087d94(iVar6,0);
    iVar2 = param_1[0xb];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_03087e18(iVar6,uVar7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[0xc] = iStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035af658(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_03091f9c + 0x3091910));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[0xd];
      param_1[0xd] = 0;
      goto LAB_03091268;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03091f28 + 0x309143c));
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
      if (*(int *)(**(int **)(_UNK_03091f2c + 0x3091490) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03091f30 + 0x30914b0));
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
        if (*(int *)(**(int **)(_UNK_03091f34 + 0x3091930) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03091f38 + 0x309194c));
        piVar4 = *(int **)(_UNK_03091f3c + 0x3091960);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_03091f40 + 0x3091980);
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
        goto LAB_03091400;
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
      iVar1 = FUN_0307fb70(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_03091f44 + 0x309157c));
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_03091f48 + 0x3091590),0);
        if (*(int *)(**(int **)(_UNK_03091f4c + 0x30915ac) + 0x74) == 0) {
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
      iVar1 = FUN_0307fb70(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_03086b84(iVar6,iVar2,0);
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
            FUN_03086d30(iVar6,uVar7,0);
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
            FUN_03086d30(iVar6,uVar7,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_03091f50 + 0x3091aec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03091f54 + 0x3091b08));
        piVar4 = *(int **)(_UNK_03091f58 + 0x3091b1c);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_03091f5c + 0x3091b3c);
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
        goto LAB_03091400;
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
      iVar1 = FUN_0307f35c(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03091f60 + 0x3091c10) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03091f64 + 0x3091c2c));
        piVar4 = *(int **)(_UNK_03091f68 + 0x3091c40);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_03091f6c + 0x3091c60);
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
        goto LAB_03091400;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_0307f35c(iVar6,0);
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
        if (*(int *)(**(int **)(_UNK_03091f70 + 0x3091710) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_03091f74 + 0x309177c) + 0x74) == 0) {
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
      func_0x020257a4(iVar2,0x2f5,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_03091f78 + 0x3091818);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0307cfc8(0);
      if (iVar2 != 0) {
        func_0x03091fb8();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0307cfc8(0);
      if ((iVar2 == 0) ||
         (iVar2 = func_0x03092024(iVar2,param_1[6],param_1[8],param_1[9],param_1[10]), iVar2 == 0))
      {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x05055bbc(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xc] = iStack_24;
        func_0x014385cc(param_1 + 0xc,0);
        func_0x035af658(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_03091f7c + 0x30918d4))
        ;
        return;
      }
      goto LAB_0309114c;
    }
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x05055ca8(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_03087c40(iVar6,0,0);
  if (*(int *)(**(int **)(_UNK_03091fa0 + 0x309132c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03091fa4 + 0x3091348));
  piVar4 = *(int **)(_UNK_03091fa8 + 0x309135c);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_03091fac + 0x309137c);
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
LAB_03091400:
  *param_1 = -2;
  param_1[0xb] = 0;
  func_0x014385cc(param_1 + 0xb,0);
  func_0x0505659c(param_1 + 1,0);
  return;
}

