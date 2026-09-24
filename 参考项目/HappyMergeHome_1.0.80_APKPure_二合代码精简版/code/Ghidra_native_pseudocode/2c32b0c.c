
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c42b0c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c43394 + 0x2c42b24);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c43398 + 0x2c42b38));
    func_0x01438628(*(undefined4 *)(_UNK_02c4339c + 0x2c42b44));
    func_0x01438628(*(undefined4 *)(_UNK_02c433a0 + 0x2c42b50));
    func_0x01438628(*(undefined4 *)(_UNK_02c433a4 + 0x2c42b5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c433a8 + 0x2c42b68));
    func_0x01438628(*(undefined4 *)(_UNK_02c433ac + 0x2c42b74));
    func_0x01438628(*(undefined4 *)(_UNK_02c433b0 + 0x2c42b80));
    func_0x01438628(*(undefined4 *)(_UNK_02c433b4 + 0x2c42b8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c433b8 + 0x2c42b98));
    func_0x01438628(*(undefined4 *)(_UNK_02c433bc + 0x2c42ba4));
    func_0x01438628(*(undefined4 *)(_UNK_02c433c0 + 0x2c42bb0));
    func_0x01438628(*(undefined4 *)(_UNK_02c433c4 + 0x2c42bbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c433c8 + 0x2c42bc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c433cc + 0x2c42bd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c433d0 + 0x2c42be0));
    func_0x01438628(*(undefined4 *)(_UNK_02c433d4 + 0x2c42bec));
    func_0x01438628(*(undefined4 *)(_UNK_02c433d8 + 0x2c42bf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c433dc + 0x2c42c04));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c433e0 + 0x2c42c1c));
  func_0x024eeca8(iVar3,0);
  if (*(int *)(**(int **)(_UNK_02c433e4 + 0x2c42c40) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c433e8 + 0x2c42c5c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x0202998c(iVar4,0x753,0,0);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x44);
  uVar7 = *(uint *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar7) {
    func_0x014388e8();
  }
  iVar4 = *(int *)(iVar4 + uVar7 * 4 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x1c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  piVar13 = (int *)(iVar3 + 8);
  *piVar13 = iVar4;
  func_0x014385cc(piVar13,iVar4);
  uVar7 = 0;
  while( true ) {
    iVar4 = *piVar13;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x84);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0xc) <= (int)uVar7) break;
    iVar4 = *piVar13;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x84);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar7) {
      func_0x014388e8();
    }
    uStack_28 = *(undefined4 *)(iVar4 + uVar7 * 4 + 0x10);
    if (*(int *)(**(int **)(_UNK_02c433ec + 0x2c42d88) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c433f0 + 0x2c42dac));
    iVar8 = *(int *)(param_1 + 8);
    uVar12 = *(undefined4 *)(param_1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar8 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iStack_2c = FUN_02bdd790(iVar4,uVar12,uVar9,0,0);
    if (iStack_2c == -1) {
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c433f4 + 0x2c43164));
      func_0x024eeca8(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(int *)(iVar4 + 0xc) = iVar3;
      func_0x014385cc((int *)(iVar4 + 0xc),iVar3);
      iVar8 = *(int *)(**(int **)(_UNK_02c433f8 + 0x2c431a0) + 0x74);
      *(uint *)(iVar4 + 8) = uVar7;
      if (iVar8 == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x018f5b04(0);
      uVar12 = uStack_28;
      iVar11 = *(int *)(param_1 + 8);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar11 + 0x44);
      uVar10 = *(uint *)(param_1 + 0xc);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar11 + 0xc) <= uVar10) {
        func_0x014388e8();
      }
      iVar11 = *(int *)(iVar11 + uVar10 * 4 + 0x10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar11 + 0xc);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x024eecb8(iVar11,0);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      func_0x024ef228(&uStack_38,iVar11,0);
      uVar2 = uStack_30;
      uVar1 = uStack_34;
      uVar9 = uStack_38;
      uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c433fc + 0x2c43268));
      func_0x0152e3ec(uVar5,iVar4,**(undefined4 **)(_UNK_02c43400 + 0x2c43284),0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x01901f6c(iVar8,uVar12,uVar9,uVar1,uVar2,uVar5,0);
      uVar12 = func_0x01524ffc(&uStack_28,0);
      uVar12 = func_0x014e9568(**(undefined4 **)(_UNK_02c43404 + 0x2c432d8),uVar12,0);
      iVar8 = **(int **)(_UNK_02c43408 + 0x2c432ec);
      iVar4 = *(int *)(iVar8 + 0x1c);
      if (iVar4 == 0) {
        func_0x014909d8(iVar8);
        iVar4 = *(int *)(iVar8 + 0x1c);
      }
      iVar4 = *(int *)(iVar4 + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar4 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02c4340c + 0x2c43358) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02c4340c + 0x2c43358));
      }
      func_0x026794a8(uVar12,uVar9,0);
    }
    else {
      iVar4 = *piVar13;
      iVar8 = *(int *)(param_1 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar12 = uStack_28;
      uVar9 = *(undefined4 *)(iVar4 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      FUN_02bf5ea8(iVar8,uVar9,uVar12,0xffffffff,0,1,**(undefined4 **)(_UNK_02c43410 + 0x2c42e40),0)
      ;
      iVar4 = func_0x014386f0(**(undefined4 **)(_UNK_02c43414 + 0x2c42e70),6);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar12 = **(undefined4 **)(_UNK_02c43418 + 0x2c42e90);
      if (*(int *)(iVar4 + 0xc) == 0) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar4 + 0x10) = uVar12;
      func_0x014385cc((undefined4 *)(iVar4 + 0x10),uVar12);
      uVar12 = func_0x01524ffc(&uStack_28,0);
      if (*(uint *)(iVar4 + 0xc) < 2) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar4 + 0x14) = uVar12;
      func_0x014385cc((undefined4 *)(iVar4 + 0x14),uVar12);
      uVar12 = **(undefined4 **)(_UNK_02c4341c + 0x2c42efc);
      if (*(uint *)(iVar4 + 0xc) < 3) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar4 + 0x18) = uVar12;
      func_0x014385cc((undefined4 *)(iVar4 + 0x18),uVar12);
      uVar12 = func_0x01524ffc(&iStack_2c,0);
      if (*(uint *)(iVar4 + 0xc) < 4) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar4 + 0x1c) = uVar12;
      func_0x014385cc((undefined4 *)(iVar4 + 0x1c),uVar12);
      uVar12 = **(undefined4 **)(_UNK_02c43420 + 0x2c42f60);
      if (*(uint *)(iVar4 + 0xc) < 5) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar4 + 0x20) = uVar12;
      func_0x014385cc((undefined4 *)(iVar4 + 0x20),uVar12);
      iVar8 = *piVar13;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar12 = func_0x01524ffc(iVar8 + 8,0);
      if (*(uint *)(iVar4 + 0xc) < 6) {
        func_0x014388e8();
      }
      *(undefined4 *)(iVar4 + 0x24) = uVar12;
      func_0x014385cc((undefined4 *)(iVar4 + 0x24),uVar12);
      uVar12 = func_0x024eeeb8(iVar4,0);
      iVar8 = **(int **)(_UNK_02c43424 + 0x2c42fd4);
      iVar4 = *(int *)(iVar8 + 0x1c);
      if (iVar4 == 0) {
        func_0x014909d8(iVar8);
        iVar4 = *(int *)(iVar8 + 0x1c);
      }
      iVar4 = *(int *)(iVar4 + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar4 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02c43428 + 0x2c43034) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02c43428 + 0x2c43034));
      }
      func_0x026794a8(uVar12,uVar9,0);
      iVar4 = *(int *)(param_1 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x44);
      uVar10 = *(uint *)(param_1 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar10) {
        func_0x014388e8();
      }
      iVar4 = *(int *)(iVar4 + uVar10 * 4 + 0x10);
      if (iVar4 != 0) {
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 != 0) {
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          FUN_02c230dc(iVar4,**(undefined4 **)(_UNK_02c4342c + 0x2c430f4),1,0);
        }
      }
      uVar12 = uStack_28;
      iVar4 = iStack_2c;
      iVar8 = *(int *)(param_1 + 8);
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      FUN_02bf5f2c(iVar8,uVar9,iVar4,uVar12,0,2,1,0,0,0);
    }
    uVar7 = uVar7 + 1;
  }
  return;
}

