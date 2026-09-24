
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4216c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02c429a4 + 0x2c42184);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c429a8 + 0x2c42198));
    func_0x01438628(*(undefined4 *)(_UNK_02c429ac + 0x2c421a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c429b0 + 0x2c421b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c429b4 + 0x2c421bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c429b8 + 0x2c421c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c429bc + 0x2c421d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c429c0 + 0x2c421e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c429c4 + 0x2c421ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c429c8 + 0x2c421f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c429cc + 0x2c42204));
    func_0x01438628(*(undefined4 *)(_UNK_02c429d0 + 0x2c42210));
    func_0x01438628(*(undefined4 *)(_UNK_02c429d4 + 0x2c4221c));
    func_0x01438628(*(undefined4 *)(_UNK_02c429d8 + 0x2c42228));
    func_0x01438628(*(undefined4 *)(_UNK_02c429dc + 0x2c42234));
    func_0x01438628(*(undefined4 *)(_UNK_02c429e0 + 0x2c42240));
    func_0x01438628(*(undefined4 *)(_UNK_02c429e4 + 0x2c4224c));
    func_0x01438628(*(undefined4 *)(_UNK_02c429e8 + 0x2c42258));
    func_0x01438628(*(undefined4 *)(_UNK_02c429ec + 0x2c42264));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c429f0 + 0x2c4227c));
  func_0x024eeca8(iVar3,0);
  iVar12 = *(int *)(param_1 + 8);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0x44);
  uVar8 = *(uint *)(param_1 + 0xc);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar12 + 0xc) <= uVar8) {
    func_0x014388e8();
  }
  iVar12 = *(int *)(iVar12 + uVar8 * 4 + 0x10);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0x1c);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar12 + 0x8c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar3 + 8) = iVar9;
  if (0 < iVar9) {
    puVar4 = (undefined4 *)(iVar12 + 8);
    iVar15 = 0;
    iVar16 = 0;
    iVar9 = iVar12;
    iVar13 = iVar3;
    do {
      if (*(int *)(**(int **)(_UNK_02c429f4 + 0x2c42348) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c429f8 + 0x2c42364));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_28 = FUN_02c4107c(iVar5,iVar12);
      if (*(int *)(**(int **)(_UNK_02c429fc + 0x2c42394) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c42a00 + 0x2c423b4));
      iVar10 = *(int *)(param_1 + 8);
      uVar14 = *(undefined4 *)(param_1 + 0xc);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar11 = *(undefined4 *)(iVar10 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iStack_2c = FUN_02bdd790(iVar5,uVar14,uVar11,0,0);
      if (iStack_2c == -1) {
        iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c42a04 + 0x2c4276c));
        func_0x024eeca8(iVar5,0);
        iVar12 = iVar9;
        if (iVar5 == 0) {
          func_0x014388e4();
          iVar12 = iVar9;
        }
        *(int *)(iVar5 + 0xc) = iVar3;
        func_0x014385cc((int *)(iVar5 + 0xc),iVar3);
        iVar9 = *(int *)(**(int **)(_UNK_02c42a08 + 0x2c427a8) + 0x74);
        *(int *)(iVar5 + 8) = iVar15;
        iVar3 = iVar13;
        if (iVar9 == 0) {
          func_0x014387a4();
          iVar3 = iVar13;
        }
        iVar9 = func_0x032a3fc4(0);
        uVar14 = uStack_28;
        iVar13 = *(int *)(param_1 + 8);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        iVar13 = *(int *)(iVar13 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xc);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar13 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar13 = *(int *)(iVar13 + uVar8 * 4 + 0x10);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        iVar13 = *(int *)(iVar13 + 0xc);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        iVar13 = func_0x024eecb8(iVar13,0);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_38,iVar13,0);
        uVar2 = uStack_30;
        uVar1 = uStack_34;
        uVar11 = uStack_38;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02c42a0c + 0x2c42870));
        func_0x0152e3ec(uVar6,iVar5,**(undefined4 **)(_UNK_02c42a10 + 0x2c4288c),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x032b040c(iVar9,uVar14,uVar11,uVar1,uVar2,uVar6,0);
        uVar14 = func_0x01524ffc(&uStack_28,0);
        uVar14 = func_0x014e9568(**(undefined4 **)(_UNK_02c42a14 + 0x2c428e0),uVar14,0);
        iVar5 = **(int **)(_UNK_02c42a18 + 0x2c428f4);
        iVar9 = *(int *)(iVar5 + 0x1c);
        if (iVar9 == 0) {
          func_0x014909d8(iVar5);
          iVar9 = *(int *)(iVar5 + 0x1c);
        }
        iVar10 = *(int *)(iVar9 + 8);
        iVar9 = iVar12;
        iVar13 = iVar3;
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar11 = **(undefined4 **)(iVar5 + 0x5c);
        if (*(int *)(**(int **)(_UNK_02c42a1c + 0x2c42960) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_02c42a1c + 0x2c42960));
        }
        func_0x026794a8(uVar14,uVar11,0);
      }
      else {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        uVar14 = uStack_28;
        uVar11 = *puVar4;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02bf5ea8(iVar5,uVar11,uVar14,0xffffffff,0,1,**(undefined4 **)(_UNK_02c42a20 + 0x2c42448)
                     ,0);
        iVar5 = func_0x014386f0(**(undefined4 **)(_UNK_02c42a24 + 0x2c42478),6);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar14 = **(undefined4 **)(_UNK_02c42a28 + 0x2c42498);
        if (*(int *)(iVar5 + 0xc) == 0) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar5 + 0x10) = uVar14;
        func_0x014385cc((undefined4 *)(iVar5 + 0x10),uVar14);
        uVar14 = func_0x01524ffc(&uStack_28,0);
        if (*(uint *)(iVar5 + 0xc) < 2) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar5 + 0x14) = uVar14;
        func_0x014385cc((undefined4 *)(iVar5 + 0x14),uVar14);
        uVar14 = **(undefined4 **)(_UNK_02c42a2c + 0x2c42504);
        if (*(uint *)(iVar5 + 0xc) < 3) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar5 + 0x18) = uVar14;
        func_0x014385cc((undefined4 *)(iVar5 + 0x18),uVar14);
        uVar14 = func_0x01524ffc(&iStack_2c,0);
        if (*(uint *)(iVar5 + 0xc) < 4) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar5 + 0x1c) = uVar14;
        func_0x014385cc((undefined4 *)(iVar5 + 0x1c),uVar14);
        uVar14 = **(undefined4 **)(_UNK_02c42a30 + 0x2c42568);
        if (*(uint *)(iVar5 + 0xc) < 5) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar5 + 0x20) = uVar14;
        func_0x014385cc((undefined4 *)(iVar5 + 0x20),uVar14);
        uVar14 = func_0x01524ffc(puVar4,0);
        if (*(uint *)(iVar5 + 0xc) < 6) {
          func_0x014388e8();
        }
        *(undefined4 *)(iVar5 + 0x24) = uVar14;
        func_0x014385cc((undefined4 *)(iVar5 + 0x24),uVar14);
        uVar14 = func_0x024eeeb8(iVar5,0);
        iVar10 = **(int **)(_UNK_02c42a34 + 0x2c425d0);
        iVar5 = *(int *)(iVar10 + 0x1c);
        if (iVar5 == 0) {
          func_0x014909d8(iVar10);
          iVar5 = *(int *)(iVar10 + 0x1c);
        }
        iVar5 = *(int *)(iVar5 + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar11 = **(undefined4 **)(iVar5 + 0x5c);
        if (*(int *)(**(int **)(_UNK_02c42a38 + 0x2c42630) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_02c42a38 + 0x2c42630));
        }
        func_0x026794a8(uVar14,uVar11,0);
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x44);
        uVar8 = *(uint *)(param_1 + 0xc);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar5 = *(int *)(iVar5 + uVar8 * 4 + 0x10);
        if (iVar5 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0xc);
          if (iVar5 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            FUN_02c230dc(iVar5,**(undefined4 **)(_UNK_02c42a3c + 0x2c426fc),1,0);
            iVar16 = iVar5;
          }
        }
        uVar14 = uStack_28;
        iVar5 = iStack_2c;
        iVar10 = *(int *)(param_1 + 8);
        uVar11 = *(undefined4 *)(param_1 + 0xc);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        FUN_02bf5f2c(iVar10,uVar11,iVar5,uVar14,0,2,1,0,0,0,iVar9,iVar13,iVar16);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(iVar3 + 8));
  }
  return;
}

