
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3f9dc(int param_1)

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
  
  pcVar6 = (char *)(_UNK_02c40264 + 0x2c3f9f4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c40268 + 0x2c3fa08));
    func_0x01438628(*(undefined4 *)(_UNK_02c4026c + 0x2c3fa14));
    func_0x01438628(*(undefined4 *)(_UNK_02c40270 + 0x2c3fa20));
    func_0x01438628(*(undefined4 *)(_UNK_02c40274 + 0x2c3fa2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c40278 + 0x2c3fa38));
    func_0x01438628(*(undefined4 *)(_UNK_02c4027c + 0x2c3fa44));
    func_0x01438628(*(undefined4 *)(_UNK_02c40280 + 0x2c3fa50));
    func_0x01438628(*(undefined4 *)(_UNK_02c40284 + 0x2c3fa5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c40288 + 0x2c3fa68));
    func_0x01438628(*(undefined4 *)(_UNK_02c4028c + 0x2c3fa74));
    func_0x01438628(*(undefined4 *)(_UNK_02c40290 + 0x2c3fa80));
    func_0x01438628(*(undefined4 *)(_UNK_02c40294 + 0x2c3fa8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c40298 + 0x2c3fa98));
    func_0x01438628(*(undefined4 *)(_UNK_02c4029c + 0x2c3faa4));
    func_0x01438628(*(undefined4 *)(_UNK_02c402a0 + 0x2c3fab0));
    func_0x01438628(*(undefined4 *)(_UNK_02c402a4 + 0x2c3fabc));
    func_0x01438628(*(undefined4 *)(_UNK_02c402a8 + 0x2c3fac8));
    func_0x01438628(*(undefined4 *)(_UNK_02c402ac + 0x2c3fad4));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c402b0 + 0x2c3faec));
  func_0x024eeca8(iVar3,0);
  if (*(int *)(**(int **)(_UNK_02c402b4 + 0x2c3fb10) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c402b8 + 0x2c3fb2c));
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
    if (*(int *)(**(int **)(_UNK_02c402bc + 0x2c3fc58) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c402c0 + 0x2c3fc7c));
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
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c402c4 + 0x2c40034));
      func_0x024eeca8(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(int *)(iVar4 + 0xc) = iVar3;
      func_0x014385cc((int *)(iVar4 + 0xc),iVar3);
      iVar8 = *(int *)(**(int **)(_UNK_02c402c8 + 0x2c40070) + 0x74);
      *(uint *)(iVar4 + 8) = uVar7;
      if (iVar8 == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x017d0b50(0);
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
      uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c402cc + 0x2c40138));
      func_0x0152e3ec(uVar5,iVar4,**(undefined4 **)(_UNK_02c402d0 + 0x2c40154),0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x017dd120(iVar8,uVar12,uVar9,uVar1,uVar2,uVar5,0);
      uVar12 = func_0x01524ffc(&uStack_28,0);
      uVar12 = func_0x014e9568(**(undefined4 **)(_UNK_02c402d4 + 0x2c401a8),uVar12,0);
      iVar8 = **(int **)(_UNK_02c402d8 + 0x2c401bc);
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
      if (*(int *)(**(int **)(_UNK_02c402dc + 0x2c40228) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02c402dc + 0x2c40228));
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
      FUN_02bf5ea8(iVar8,uVar9,uVar12,0xffffffff,0,1,**(undefined4 **)(_UNK_02c402e0 + 0x2c3fd10),0)
      ;
      iVar4 = func_0x014386f0(**(undefined4 **)(_UNK_02c402e4 + 0x2c3fd40),6);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar12 = **(undefined4 **)(_UNK_02c402e8 + 0x2c3fd60);
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
      uVar12 = **(undefined4 **)(_UNK_02c402ec + 0x2c3fdcc);
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
      uVar12 = **(undefined4 **)(_UNK_02c402f0 + 0x2c3fe30);
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
      iVar8 = **(int **)(_UNK_02c402f4 + 0x2c3fea4);
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
      if (*(int *)(**(int **)(_UNK_02c402f8 + 0x2c3ff04) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02c402f8 + 0x2c3ff04));
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
          FUN_02c230dc(iVar4,**(undefined4 **)(_UNK_02c402fc + 0x2c3ffc4),1,0);
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

