
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b500f8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02b50bb0 + 0x2b50110);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b50bb4 + 0x2b50124));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bb8 + 0x2b50130));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bbc + 0x2b5013c));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bc0 + 0x2b50148));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bc4 + 0x2b50154));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bc8 + 0x2b50160));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bcc + 0x2b5016c));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bd0 + 0x2b50178));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bd4 + 0x2b50184));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bd8 + 0x2b50190));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bdc + 0x2b5019c));
    func_0x01438628(*(undefined4 *)(_UNK_02b50be0 + 0x2b501a8));
    func_0x01438628(*(undefined4 *)(_UNK_02b50be4 + 0x2b501b4));
    func_0x01438628(*(undefined4 *)(_UNK_02b50be8 + 0x2b501c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bec + 0x2b501cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bf0 + 0x2b501d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bf4 + 0x2b501e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bf8 + 0x2b501f0));
    func_0x01438628(*(undefined4 *)(_UNK_02b50bfc + 0x2b501fc));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c00 + 0x2b50208));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c04 + 0x2b50214));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c08 + 0x2b50220));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c0c + 0x2b5022c));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c10 + 0x2b50238));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c14 + 0x2b50244));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c18 + 0x2b50250));
    func_0x01438628(*(undefined4 *)(_UNK_02b50c1c + 0x2b5025c));
    *pcVar5 = '\x01';
  }
  iVar12 = param_1[5];
  iStack_28 = 0;
  uStack_2c = 0;
  if (*param_1 == 0) {
    puVar11 = *(undefined4 **)(_UNK_02b50c24 + 0x2b502b8);
    *param_1 = -1;
    iStack_28 = param_1[8];
    uVar2 = *puVar11;
    param_1[8] = 0;
    func_0x03bbc140(&iStack_28,uVar2);
    if (*(int *)(**(int **)(_UNK_02b50c28 + 0x2b502dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef174(**(undefined4 **)(_UNK_02b50c2c + 0x2b502f8),0);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    *(undefined1 *)(iVar12 + 0x54) = 1;
    goto LAB_02b503c4;
  }
  if (*param_1 == 1) {
    iVar9 = 0;
    *param_1 = -1;
    iStack_28 = param_1[8];
    param_1[8] = 0;
    do {
      func_0x03bbc140(&iStack_28,**(undefined4 **)(_UNK_02b50c60 + 0x2b504e0));
      iVar6 = param_1[7];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024ef020(iVar6,iVar9,**(undefined4 **)(_UNK_02b50c64 + 0x2b50504));
      iVar9 = FUN_02b3dda0();
      iVar6 = FUN_02b3dda0();
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_02b3df18(iVar6);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_02b4cad8(iVar9,iVar6 + 1);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_02b4985c(iVar12);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02b4985c(iVar12);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      FUN_02b498c8(iVar12,iVar1 + (iVar9 - iVar6));
      iVar1 = **(int **)(_UNK_02b50c68 + 0x2b505ac);
      param_1[6] = param_1[6] - (iVar9 - iVar6);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x0202346c(0);
      iVar6 = FUN_02b3dda0();
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_2c = FUN_02b3df18(iVar6);
      uVar2 = func_0x01524ffc(&uStack_2c,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar9,0x1b3,uVar2,0,0,0,0);
      if (*(int *)(**(int **)(_UNK_02b50c6c + 0x2b50654) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_02b50c70 + 0x2b50670));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x03579aec(iVar9,**(undefined4 **)(_UNK_02b50c78 + 0x2b5069c),
                              **(undefined4 **)(_UNK_02b50c74 + 0x2b50690));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x02b3e844(iVar9);
      iVar9 = FUN_02b3dda0();
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_02b3df18(iVar12);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_02b49e9c(iVar9,uVar2);
      iVar6 = 0;
      puVar11 = *(undefined4 **)(_UNK_02b50c7c + 0x2b5070c);
      while( true ) {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar6) break;
        iVar1 = func_0x0152983c(iVar9,iVar6,*puVar11);
        iVar7 = **(int **)(**(int **)(_UNK_02b50c80 + 0x2b50748) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar1 + 8);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x02e651cc(iVar7,uVar2,0);
        if (iVar7 == 0) {
          if (*(int *)(**(int **)(_UNK_02b50c84 + 0x2b5078c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x0202346c(0);
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02b50c88 + 0x2b507b4));
          func_0x02025440(iVar3,0);
          uVar2 = *(undefined4 *)(iVar1 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(undefined4 *)(iVar3 + 0xc) = uVar2;
          *(undefined1 *)(iVar3 + 0x25) = 1;
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar7,iVar3,1,0);
        }
        uVar8 = *(undefined4 *)(iVar1 + 8);
        uVar2 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = **(int **)(**(int **)(_UNK_02b50c8c + 0x2b50810) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02e64460(iVar1,uVar8,uVar2);
        iVar6 = iVar6 + 1;
      }
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_02b40c64(iVar12);
      if (iVar9 != 0) {
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        FUN_02b4cbc4(iVar12);
      }
LAB_02b503c4:
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_02b3df18(iVar12);
      if (-1 < iVar9) {
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iVar9 = FUN_02b4985c(iVar12);
        iVar6 = param_1[6];
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        FUN_02b498c8(iVar12,iVar6 + iVar9);
        piVar4 = *(int **)(_UNK_02b50c30 + 0x2b508f0);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef174(**(undefined4 **)(_UNK_02b50c34 + 0x2b5090c),0);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar12 + 0x50);
        *(undefined1 *)(iVar12 + 0x54) = 0;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar9 + 0xc)) {
          if (*(int *)(*piVar4 + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x024ef174(**(undefined4 **)(_UNK_02b50c38 + 0x2b50964),0);
          iVar9 = *(int *)(iVar12 + 0x50);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x0152983c(iVar9,0,**(undefined4 **)(_UNK_02b50c3c + 0x2b50988));
          iVar12 = *(int *)(iVar12 + 0x50);
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          func_0x024ef010(iVar12,0,**(undefined4 **)(_UNK_02b50c40 + 0x2b509b4));
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03bbd324(iVar9,1,**(undefined4 **)(_UNK_02b50c44 + 0x2b509d8));
        }
        goto LAB_02b509e4;
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_02b50c48 + 0x2b503ec));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_02b50c4c + 0x2b50400));
      iVar6 = param_1[7];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar6 + 8);
      uVar10 = *(uint *)(iVar6 + 0xc);
      piVar4 = *(int **)(_UNK_02b50c50 + 0x2b50438);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      iVar7 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (uVar10 < *(uint *)(iVar1 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar10 + 1;
        piVar4 = (int *)(iVar1 + uVar10 * 4 + 0x10);
        *piVar4 = iVar9;
        func_0x014385cc(piVar4,iVar9);
      }
      else {
        func_0x0152874c(iVar6,iVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
        ;
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar9 + 8);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x03c87ba0(iVar6,**(undefined4 **)(_UNK_02b50c54 + 0x2b504ac));
      iVar6 = func_0x03bbc0cc(&iStack_28,**(undefined4 **)(_UNK_02b50c58 + 0x2b504c0));
    } while (iVar6 != 0);
    *param_1 = 1;
    param_1[8] = iStack_28;
    func_0x014385cc(param_1 + 8,0);
    func_0x0359d69c(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_02b50c5c + 0x2b50a24));
  }
  else {
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iVar9 = FUN_02b3e290(iVar12);
    iVar6 = param_1[6];
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    FUN_02b4a260(iVar12,iVar6 + iVar9);
    if (*(int *)(**(int **)(_UNK_02b50c20 + 0x2b50358) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x02b40cf0();
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02b3e290(iVar12);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x02b41c54(iVar9,uVar2);
LAB_02b509e4:
    *param_1 = -2;
    func_0x014e94c8(param_1 + 1,0);
  }
  return;
}

