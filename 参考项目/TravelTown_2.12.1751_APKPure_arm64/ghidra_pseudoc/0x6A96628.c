/* Ghidra 12.1.2 native pseudocode; RVA 0x6A96628; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateChargeableComponent; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateChargeableComponent
                (undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  long lVar11;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long lVar15;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined8 uStack_240;
  ulong uStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_128;
  undefined1 auStack_124 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  uint uStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000007e2a807 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832538);
    func_0x03280a18(PTR_DAT_07826638);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07826640);
    bRam0000000007e2a807 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar11 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
          goto LAB_06b966d4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_3 = (long *)0x9;
    puVar5 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b966d4:
    puVar1 = PTR_DAT_07826638;
    lVar11 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if ((lVar11 == 0) || (lVar11 = func_0x0610fa34(lVar11,0), lVar11 == 0)) {
      lVar14 = *(long *)PTR_DAT_07832538;
      lVar11 = *(long *)(lVar14 + 0x38);
      if (lVar11 == 0) {
        func_0x03256878(lVar14);
        lVar11 = *(long *)(lVar14 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
    }
    lVar14 = func_0x03d5ffd0(lVar11,*(undefined8 *)puVar1);
    if ((lVar14 != 0) && (func_0x04144694(lVar14,*(undefined8 *)PTR_DAT_07826640), lVar11 != 0)) {
      return (ulong)*(uint *)(lVar11 + 0x18);
    }
  }
  func_0x03280cac();
  uStack_70 = 0x6b9678c;
  lVar11 = 0x7e2a000;
  if ((bRam0000000007e2a808 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e650);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077cd950);
    func_0x03280a18(PTR_DAT_077cd958);
    func_0x03280a18(PTR_DAT_077cd960);
    func_0x03280a18(PTR_DAT_077cd968);
    func_0x03280a18(PTR_DAT_077cd988);
    func_0x03280a18(PTR_DAT_077cd990);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_07782d28);
    func_0x03280a18(PTR_DAT_07832540);
    func_0x03280a18(PTR_DAT_07832548);
    func_0x03280a18(PTR_DAT_078324b8);
    func_0x03280a18(PTR_DAT_07832550);
    bRam0000000007e2a808 = 1;
  }
  puVar1 = PTR_DAT_0777e548;
  uStack_78 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  if (extraout_x1 != (long *)0x0) {
    lVar11 = *extraout_x1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b968e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_3 = (long *)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1);
LAB_06b968e4:
    lVar11 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    lVar14 = *extraout_x1;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar14 + (long)(*piVar13 + 8) * 0x10 + 0x138);
          goto LAB_06b96944;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_3 = (long *)0x8;
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1);
LAB_06b96944:
    lVar14 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    puVar2 = PTR_DAT_07782d28;
    puVar1 = PTR_DAT_0774e650;
    if ((lVar14 != 0) && (lVar11 != 0)) {
      unaff_x24 = (undefined8 *)(lVar11 + 0x68);
      *unaff_x24 = *(undefined8 *)(lVar14 + 0x28);
      func_0x032809c4(unaff_x24);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uStack_78 = func_0x05776944(0);
      uVar4 = func_0x057749c4(&uStack_78,0);
      unaff_x22 = (long *)(ulong)(uVar4 & 0xffff);
      unaff_x23 = func_0x03280ca0(*(undefined8 *)puVar2);
      param_3 = unaff_x22;
      func_0x060e89c8(unaff_x23,lVar11,unaff_x22,0,0);
      uVar12 = func_0x063785b8(lVar11,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = func_0x06378558(lVar11,0);
        unaff_x27 = PTR_DAT_078324b8;
        if ((uVar12 & 1) == 0) {
LAB_06b96b74:
          puVar3 = PTR_DAT_07832550;
          puVar2 = PTR_DAT_0774e6b0;
          puVar1 = PTR_DAT_0774e598;
          lVar14 = *extraout_x1;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06b96be0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_07779820,0);
LAB_06b96be0:
          uVar7 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
          uStack_a4 = uVar4 & 0xffff;
          uVar8 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_a4);
          uVar7 = func_0x055f7edc(*(undefined8 *)puVar3,uVar7,uVar8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar1);
          }
          func_0x06fa9a68(uVar7,0);
          lStack_90 = 0;
          lStack_88 = 0;
          uStack_98 = 0;
          lStack_a0 = unaff_x23;
          func_0x032809c4(&lStack_a0,unaff_x23);
          uStack_98 = CONCAT44(uStack_98._4_4_,uVar4) & 0xffffffff0000ffff;
          lStack_90 = lVar11;
          uVar12 = func_0x032809c4(&lStack_90,lVar11);
          extraout_x8[1] = uStack_98;
          *extraout_x8 = lStack_a0;
          extraout_x8[3] = lStack_88;
          extraout_x8[2] = lStack_90;
          return uVar12;
        }
        uVar7 = *unaff_x24;
        lVar14 = *(long *)PTR_DAT_078324b8;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar14 = *(long *)unaff_x27;
        }
        lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
        if (lVar15 == 0) {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar14 = *(long *)unaff_x27;
          }
          unaff_x26 = **(undefined8 **)(lVar14 + 0xb8);
          lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
          func_0x053569b8(lVar15,unaff_x26,*(undefined8 *)PTR_DAT_07832540,0);
          plVar6 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x10);
          *plVar6 = lVar15;
          func_0x032809c4(plVar6,lVar15);
        }
        uVar7 = func_0x03d53498(uVar7,lVar15,*(undefined8 *)PTR_DAT_077cd958);
        unaff_x24 = (undefined8 *)func_0x03d3c654(uVar7,*(undefined8 *)PTR_DAT_077cd950);
        lVar14 = *(long *)unaff_x27;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          func_0x03280b8c(lVar14);
          lVar14 = *(long *)unaff_x27;
        }
        unaff_x25 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
        if (unaff_x25 == 0) {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            func_0x03280b8c(lVar14);
            lVar14 = *(long *)unaff_x27;
          }
          unaff_x26 = **(undefined8 **)(lVar14 + 0xb8);
          unaff_x25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
          func_0x053569b8(unaff_x25,unaff_x26,*(undefined8 *)PTR_DAT_07832548,0);
          plVar6 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x18);
          *plVar6 = unaff_x25;
          func_0x032809c4(plVar6,unaff_x25);
        }
        param_3 = *(long **)PTR_DAT_077cd960;
        uVar7 = func_0x03d50a94(unaff_x24,unaff_x25);
        uVar7 = func_0x03d5ffd0(uVar7,*(undefined8 *)PTR_DAT_077cd968);
        if (unaff_x23 != 0) {
          func_0x060ea444(unaff_x23,uVar7,0);
          goto LAB_06b96b74;
        }
      }
      else if (unaff_x23 != 0) {
        func_0x060e932c(unaff_x23,*unaff_x24,0,0);
        goto LAB_06b96b74;
      }
    }
  }
  func_0x03280cac();
  uStack_100 = 0x6b96c90;
  puStack_f8 = unaff_x27;
  uStack_f0 = unaff_x26;
  lStack_e8 = unaff_x25;
  puStack_e0 = unaff_x24;
  lStack_d8 = unaff_x23;
  plStack_d0 = unaff_x22;
  lStack_c8 = lVar11;
  plStack_c0 = extraout_x1;
  if ((bRam0000000007e2a809 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f030);
    func_0x03280a18(PTR_DAT_0774e650);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_07782d28);
    func_0x03280a18(PTR_DAT_07832558);
    bRam0000000007e2a809 = 1;
  }
  puVar1 = PTR_DAT_0774e650;
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  if (extraout_x1_00 != (long *)0x0) {
    lVar11 = *extraout_x1_00;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06b96d90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777e548,1);
LAB_06b96d90:
    puVar3 = PTR_DAT_07782d28;
    puVar2 = PTR_DAT_07779820;
    lVar11 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar1);
    }
    uStack_108 = func_0x05776944(0);
    uVar4 = func_0x057749c4(&uStack_108,0);
    param_3 = (long *)(ulong)(uVar4 & 0xffff);
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x060e89c8(uVar7,lVar11,param_3,0,0);
    lVar14 = *extraout_x1_00;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b96e50;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_3 = (long *)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_06b96e50:
    uVar8 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
    puVar3 = PTR_DAT_07832558;
    puVar2 = PTR_DAT_0774e6b0;
    puVar1 = PTR_DAT_0774e598;
    if (lVar11 != 0) {
      auStack_124[0] = *(undefined1 *)(lVar11 + 0x80);
      uVar9 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774f030,auStack_124);
      uStack_128 = uVar4 & 0xffff;
      uVar10 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_128);
      uVar8 = func_0x055f7f20(*(undefined8 *)puVar3,uVar8,uVar9,uVar10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar8,0);
      uStack_118 = 0;
      lStack_110 = 0;
      uStack_120 = uVar7;
      func_0x032809c4(&uStack_120,uVar7);
      uStack_118 = CONCAT44(uStack_118._4_4_,uVar4) & 0xffffffff0000ffff;
      lStack_110 = lVar11;
      uVar12 = func_0x032809c4(&lStack_110,lVar11);
      extraout_x8_00[2] = lStack_110;
      extraout_x8_00[1] = uStack_118;
      *extraout_x8_00 = uStack_120;
      return uVar12;
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e2a80a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_07830c18);
    func_0x03280a18(PTR_DAT_07832560);
    func_0x03280a18(PTR_DAT_077cd968);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_0782fe88);
    func_0x03280a18(PTR_DAT_077cf5c8);
    func_0x03280a18(PTR_DAT_078266a8);
    func_0x03280a18(PTR_DAT_077cf5c0);
    func_0x03280a18(PTR_DAT_07832568);
    bRam0000000007e2a80a = 1;
  }
  puVar1 = PTR_DAT_07779820;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  if (param_3 != (long *)0x0) {
    lVar11 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06b97088;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e548,2);
LAB_06b97088:
    lVar11 = (*(code *)*puVar5)(param_3,puVar5[1]);
    lVar14 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b970e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar1,0);
LAB_06b970e4:
    uVar7 = (*(code *)*puVar5)(param_3,puVar5[1]);
    puVar2 = PTR_DAT_07832568;
    puVar1 = PTR_DAT_0774e598;
    if (lVar11 != 0) {
      uStack_190 = CONCAT44(uStack_190._4_4_,*(undefined4 *)(lVar11 + 0x14));
      uVar8 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_190);
      uVar7 = func_0x055f7edc(*(undefined8 *)puVar2,uVar7,uVar8,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar7,0);
      lStack_1d8 = 0;
      lStack_1e0 = 0;
      lStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1f0 = CONCAT44(*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x14));
      uStack_1e8 = (ulong)CONCAT15(*(undefined1 *)(lVar11 + 0x36),*(undefined5 *)(lVar11 + 0x30));
      if ((*(long *)(lVar11 + 0x20) == 0) ||
         (lVar14 = func_0x03d5ffd0(*(long *)(lVar11 + 0x20),*(undefined8 *)PTR_DAT_077cd968),
         lVar14 == 0)) {
        puVar1 = PTR_DAT_077cf5c8;
        lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf5c0);
        func_0x04143c38(lVar14,*(undefined8 *)puVar1);
      }
      lStack_1e0 = lVar14;
      func_0x032809c4(&lStack_1e0,lVar14);
      if ((*(long *)(lVar11 + 0x28) == 0) ||
         (lVar14 = func_0x03d5ffd0(*(long *)(lVar11 + 0x28),*(undefined8 *)PTR_DAT_07832560),
         lVar14 == 0)) {
        puVar1 = PTR_DAT_0782fe88;
        lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
        func_0x04143c38(lVar14,*(undefined8 *)puVar1);
      }
      lStack_1d8 = lVar14;
      func_0x032809c4(&lStack_1d8,lVar14);
      uStack_1d0 = CONCAT71(uStack_1d0._1_7_,*(undefined1 *)(lVar11 + 0x35));
      uStack_1d0 = CONCAT44(*(undefined4 *)(lVar11 + 0x38),(undefined4)uStack_1d0);
      lStack_1c8 = *(long *)(lVar11 + 0x50);
      uVar12 = func_0x032809c4(&lStack_1c8);
      lVar11 = lStack_1c8;
      uStack_1b8 = uStack_1e8;
      uStack_1c0 = uStack_1f0;
      lStack_1a8 = lStack_1d8;
      lStack_1b0 = lStack_1e0;
      uStack_1a0 = uStack_1d0;
      if (lStack_1c8 != 0) {
        uStack_220 = uStack_1d0;
        lStack_218 = lStack_1c8;
        uStack_238 = uStack_1e8;
        uStack_240 = uStack_1f0;
        lStack_228 = lStack_1d8;
        lStack_230 = lStack_1e0;
        func_0x06b97304(&uStack_210,uVar12,extraout_x1_01,&uStack_240);
        if (extraout_x1_01 == 0) goto LAB_06b972f0;
        uStack_188 = uStack_208;
        uStack_190 = uStack_210;
        uStack_178 = uStack_1f8;
        uStack_180 = uStack_200;
        uVar12 = func_0x03d1de74(extraout_x1_01,&uStack_190,*(undefined8 *)PTR_DAT_07830c18);
      }
      extraout_x8_01[1] = uStack_1b8;
      *extraout_x8_01 = uStack_1c0;
      extraout_x8_01[3] = lStack_1a8;
      extraout_x8_01[2] = lStack_1b0;
      extraout_x8_01[4] = uStack_1a0;
      extraout_x8_01[5] = lVar11;
      return uVar12;
    }
  }
LAB_06b972f0:
  lVar11 = func_0x03280cac();
  return (ulong)(*(long *)(lVar11 + 0x28) != 0);
}

