
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c407a0(int param_1)

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
  
  pcVar7 = (char *)(_UNK_02c40fd8 + 0x2c407b8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c40fdc + 0x2c407cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c40fe0 + 0x2c407d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c40fe4 + 0x2c407e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c40fe8 + 0x2c407f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c40fec + 0x2c407fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c40ff0 + 0x2c40808));
    func_0x01438628(*(undefined4 *)(_UNK_02c40ff4 + 0x2c40814));
    func_0x01438628(*(undefined4 *)(_UNK_02c40ff8 + 0x2c40820));
    func_0x01438628(*(undefined4 *)(_UNK_02c40ffc + 0x2c4082c));
    func_0x01438628(*(undefined4 *)(_UNK_02c41000 + 0x2c40838));
    func_0x01438628(*(undefined4 *)(_UNK_02c41004 + 0x2c40844));
    func_0x01438628(*(undefined4 *)(_UNK_02c41008 + 0x2c40850));
    func_0x01438628(*(undefined4 *)(_UNK_02c4100c + 0x2c4085c));
    func_0x01438628(*(undefined4 *)(_UNK_02c41010 + 0x2c40868));
    func_0x01438628(*(undefined4 *)(_UNK_02c41014 + 0x2c40874));
    func_0x01438628(*(undefined4 *)(_UNK_02c41018 + 0x2c40880));
    func_0x01438628(*(undefined4 *)(_UNK_02c4101c + 0x2c4088c));
    func_0x01438628(*(undefined4 *)(_UNK_02c41020 + 0x2c40898));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c41024 + 0x2c408b0));
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
      if (*(int *)(**(int **)(_UNK_02c41028 + 0x2c4097c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c4102c + 0x2c40998));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_28 = func_0x02c4107c(iVar5,iVar12);
      if (*(int *)(**(int **)(_UNK_02c41030 + 0x2c409c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c41034 + 0x2c409e8));
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
        iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c41038 + 0x2c40da0));
        func_0x024eeca8(iVar5,0);
        iVar12 = iVar9;
        if (iVar5 == 0) {
          func_0x014388e4();
          iVar12 = iVar9;
        }
        *(int *)(iVar5 + 0xc) = iVar3;
        func_0x014385cc((int *)(iVar5 + 0xc),iVar3);
        iVar9 = *(int *)(**(int **)(_UNK_02c4103c + 0x2c40ddc) + 0x74);
        *(int *)(iVar5 + 8) = iVar15;
        iVar3 = iVar13;
        if (iVar9 == 0) {
          func_0x014387a4();
          iVar3 = iVar13;
        }
        iVar9 = func_0x017d0b50(0);
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
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02c41040 + 0x2c40ea4));
        func_0x0152e3ec(uVar6,iVar5,**(undefined4 **)(_UNK_02c41044 + 0x2c40ec0),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x017dd120(iVar9,uVar14,uVar11,uVar1,uVar2,uVar6,0);
        uVar14 = func_0x01524ffc(&uStack_28,0);
        uVar14 = func_0x014e9568(**(undefined4 **)(_UNK_02c41048 + 0x2c40f14),uVar14,0);
        iVar5 = **(int **)(_UNK_02c4104c + 0x2c40f28);
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
        if (*(int *)(**(int **)(_UNK_02c41050 + 0x2c40f94) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_02c41050 + 0x2c40f94));
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
        FUN_02bf5ea8(iVar5,uVar11,uVar14,0xffffffff,0,1,**(undefined4 **)(_UNK_02c41054 + 0x2c40a7c)
                     ,0);
        iVar5 = func_0x014386f0(**(undefined4 **)(_UNK_02c41058 + 0x2c40aac),6);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar14 = **(undefined4 **)(_UNK_02c4105c + 0x2c40acc);
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
        uVar14 = **(undefined4 **)(_UNK_02c41060 + 0x2c40b38);
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
        uVar14 = **(undefined4 **)(_UNK_02c41064 + 0x2c40b9c);
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
        iVar10 = **(int **)(_UNK_02c41068 + 0x2c40c04);
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
        if (*(int *)(**(int **)(_UNK_02c4106c + 0x2c40c64) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_02c4106c + 0x2c40c64));
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
            FUN_02c230dc(iVar5,**(undefined4 **)(_UNK_02c41070 + 0x2c40d30),1,0);
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

