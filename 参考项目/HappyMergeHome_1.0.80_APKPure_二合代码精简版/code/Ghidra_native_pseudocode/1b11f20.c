
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b21f20(int *param_1)

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
  
  pcVar5 = (char *)(_UNK_01b229dc + 0x1b21f38);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b229e0 + 0x1b21f4c));
    func_0x01438628(*(undefined4 *)(_UNK_01b229e4 + 0x1b21f58));
    func_0x01438628(*(undefined4 *)(_UNK_01b229e8 + 0x1b21f64));
    func_0x01438628(*(undefined4 *)(_UNK_01b229ec + 0x1b21f70));
    func_0x01438628(*(undefined4 *)(_UNK_01b229f0 + 0x1b21f7c));
    func_0x01438628(*(undefined4 *)(_UNK_01b229f4 + 0x1b21f88));
    func_0x01438628(*(undefined4 *)(_UNK_01b229f8 + 0x1b21f94));
    func_0x01438628(*(undefined4 *)(_UNK_01b229fc + 0x1b21fa0));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a00 + 0x1b21fac));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a04 + 0x1b21fb8));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a08 + 0x1b21fc4));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a0c + 0x1b21fd0));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a10 + 0x1b21fdc));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a14 + 0x1b21fe8));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a18 + 0x1b21ff4));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a1c + 0x1b22000));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a20 + 0x1b2200c));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a24 + 0x1b22018));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a28 + 0x1b22024));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a2c + 0x1b22030));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a30 + 0x1b2203c));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a34 + 0x1b22048));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a38 + 0x1b22054));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a3c + 0x1b22060));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a40 + 0x1b2206c));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a44 + 0x1b22078));
    func_0x01438628(*(undefined4 *)(_UNK_01b22a48 + 0x1b22084));
    *pcVar5 = '\x01';
  }
  iVar12 = param_1[5];
  iStack_28 = 0;
  uStack_2c = 0;
  if (*param_1 == 0) {
    puVar11 = *(undefined4 **)(_UNK_01b22a50 + 0x1b220e0);
    *param_1 = -1;
    iStack_28 = param_1[8];
    uVar2 = *puVar11;
    param_1[8] = 0;
    func_0x014f5f38(&iStack_28,uVar2);
    if (*(int *)(**(int **)(_UNK_01b22a54 + 0x1b22104) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef174(**(undefined4 **)(_UNK_01b22a58 + 0x1b22120),0);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    *(undefined1 *)(iVar12 + 0x54) = 1;
    goto LAB_01b221ec;
  }
  if (*param_1 == 1) {
    iVar9 = 0;
    *param_1 = -1;
    iStack_28 = param_1[8];
    param_1[8] = 0;
    do {
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_01b22a8c + 0x1b22308));
      iVar6 = param_1[7];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024ef020(iVar6,iVar9,**(undefined4 **)(_UNK_01b22a90 + 0x1b2232c));
      iVar9 = FUN_01b188f4();
      iVar6 = FUN_01b188f4();
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_01b1b764(iVar6);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_01b1e598(iVar9,iVar6 + 1);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_01b1b124(iVar12);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01b1b124(iVar12);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      FUN_01b1b190(iVar12,iVar1 + (iVar9 - iVar6));
      iVar1 = **(int **)(_UNK_01b22a94 + 0x1b223d4);
      param_1[6] = param_1[6] - (iVar9 - iVar6);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x0202346c(0);
      iVar6 = FUN_01b188f4();
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_2c = FUN_01b1b764(iVar6);
      uVar2 = func_0x01524ffc(&uStack_2c,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar9,0x2cd,uVar2,0,0,0,0);
      if (*(int *)(**(int **)(_UNK_01b22a98 + 0x1b2247c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01b22a9c + 0x1b22498));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x03579aec(iVar9,**(undefined4 **)(_UNK_01b22aa4 + 0x1b224c4),
                              **(undefined4 **)(_UNK_01b22aa0 + 0x1b224b8));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x01a01320(iVar9,0);
      iVar9 = FUN_01b188f4();
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_01b1b764(iVar12);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_01b1b7b8(iVar9,uVar2);
      iVar6 = 0;
      puVar11 = *(undefined4 **)(_UNK_01b22aa8 + 0x1b22538);
      while( true ) {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar6) break;
        iVar1 = func_0x0152983c(iVar9,iVar6,*puVar11);
        iVar7 = **(int **)(**(int **)(_UNK_01b22aac + 0x1b22574) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar1 + 8);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x02e651cc(iVar7,uVar2,0);
        if (iVar7 == 0) {
          if (*(int *)(**(int **)(_UNK_01b22ab0 + 0x1b225b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x0202346c(0);
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01b22ab4 + 0x1b225e0));
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
        iVar1 = **(int **)(**(int **)(_UNK_01b22ab8 + 0x1b2263c) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02e64460(iVar1,uVar8,uVar2);
        iVar6 = iVar6 + 1;
      }
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_01b1e2fc(iVar12);
      if (iVar9 != 0) {
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        FUN_01b1e684(iVar12);
      }
LAB_01b221ec:
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar9 = FUN_01b1b764(iVar12);
      if (-1 < iVar9) {
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iVar9 = FUN_01b1b124(iVar12);
        iVar6 = param_1[6];
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        FUN_01b1b190(iVar12,iVar6 + iVar9);
        piVar4 = *(int **)(_UNK_01b22a5c + 0x1b2271c);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef174(**(undefined4 **)(_UNK_01b22a60 + 0x1b22738),0);
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
          func_0x024ef174(**(undefined4 **)(_UNK_01b22a64 + 0x1b22790),0);
          iVar9 = *(int *)(iVar12 + 0x50);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x0152983c(iVar9,0,**(undefined4 **)(_UNK_01b22a68 + 0x1b227b4));
          iVar12 = *(int *)(iVar12 + 0x50);
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          func_0x024ef010(iVar12,0,**(undefined4 **)(_UNK_01b22a6c + 0x1b227e0));
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05c0(iVar9,1,**(undefined4 **)(_UNK_01b22a70 + 0x1b22804));
        }
        goto LAB_01b22810;
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01b22a74 + 0x1b22214));
      func_0x024f1124(iVar9,**(undefined4 **)(_UNK_01b22a78 + 0x1b22228));
      iVar6 = param_1[7];
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar6 + 8);
      uVar10 = *(uint *)(iVar6 + 0xc);
      piVar4 = *(int **)(_UNK_01b22a7c + 0x1b22260);
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
      iStack_28 = func_0x024f112c(iVar6,**(undefined4 **)(_UNK_01b22a80 + 0x1b222d4));
      iVar6 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_01b22a84 + 0x1b222e8));
    } while (iVar6 != 0);
    *param_1 = 1;
    param_1[8] = iStack_28;
    func_0x014385cc(param_1 + 8,0);
    func_0x0359e684(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_01b22a88 + 0x1b22850));
  }
  else {
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iVar9 = FUN_01b1bb7c(iVar12);
    iVar6 = param_1[6];
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    FUN_01b1bc00(iVar12,iVar6 + iVar9);
    if (*(int *)(**(int **)(_UNK_01b22a4c + 0x1b22180) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x01b18728();
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01b1bb7c(iVar12);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x01b19dfc(iVar9,uVar2);
LAB_01b22810:
    *param_1 = -2;
    func_0x014e94c8(param_1 + 1,0);
  }
  return;
}

