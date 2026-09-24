
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c413a8(int param_1)

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
  
  pcVar6 = (char *)(_UNK_02c41c30 + 0x2c413c0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c41c34 + 0x2c413d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c38 + 0x2c413e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c3c + 0x2c413ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c40 + 0x2c413f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c44 + 0x2c41404));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c48 + 0x2c41410));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c4c + 0x2c4141c));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c50 + 0x2c41428));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c54 + 0x2c41434));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c58 + 0x2c41440));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c5c + 0x2c4144c));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c60 + 0x2c41458));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c64 + 0x2c41464));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c68 + 0x2c41470));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c6c + 0x2c4147c));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c70 + 0x2c41488));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c74 + 0x2c41494));
    func_0x01438628(*(undefined4 *)(_UNK_02c41c78 + 0x2c414a0));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c41c7c + 0x2c414b8));
  func_0x024eeca8(iVar3,0);
  if (*(int *)(**(int **)(_UNK_02c41c80 + 0x2c414dc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c41c84 + 0x2c414f8));
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
    if (*(int *)(**(int **)(_UNK_02c41c88 + 0x2c41624) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c41c8c + 0x2c41648));
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
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c41c90 + 0x2c41a00));
      func_0x024eeca8(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(int *)(iVar4 + 0xc) = iVar3;
      func_0x014385cc((int *)(iVar4 + 0xc),iVar3);
      iVar8 = *(int *)(**(int **)(_UNK_02c41c94 + 0x2c41a3c) + 0x74);
      *(uint *)(iVar4 + 8) = uVar7;
      if (iVar8 == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x032a3fc4(0);
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
      uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c41c98 + 0x2c41b04));
      func_0x0152e3ec(uVar5,iVar4,**(undefined4 **)(_UNK_02c41c9c + 0x2c41b20),0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x032b040c(iVar8,uVar12,uVar9,uVar1,uVar2,uVar5,0);
      uVar12 = func_0x01524ffc(&uStack_28,0);
      uVar12 = func_0x014e9568(**(undefined4 **)(_UNK_02c41ca0 + 0x2c41b74),uVar12,0);
      iVar8 = **(int **)(_UNK_02c41ca4 + 0x2c41b88);
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
      if (*(int *)(**(int **)(_UNK_02c41ca8 + 0x2c41bf4) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02c41ca8 + 0x2c41bf4));
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
      FUN_02bf5ea8(iVar8,uVar9,uVar12,0xffffffff,0,1,**(undefined4 **)(_UNK_02c41cac + 0x2c416dc),0)
      ;
      iVar4 = func_0x014386f0(**(undefined4 **)(_UNK_02c41cb0 + 0x2c4170c),6);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar12 = **(undefined4 **)(_UNK_02c41cb4 + 0x2c4172c);
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
      uVar12 = **(undefined4 **)(_UNK_02c41cb8 + 0x2c41798);
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
      uVar12 = **(undefined4 **)(_UNK_02c41cbc + 0x2c417fc);
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
      iVar8 = **(int **)(_UNK_02c41cc0 + 0x2c41870);
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
      if (*(int *)(**(int **)(_UNK_02c41cc4 + 0x2c418d0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02c41cc4 + 0x2c418d0));
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
          FUN_02c230dc(iVar4,**(undefined4 **)(_UNK_02c41cc8 + 0x2c41990),1,0);
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

