/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9678C; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateProducerComponent; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateProducerComponent
                (long *param_1,undefined8 param_2,long *param_3,long *param_4)

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
  long extraout_x1_00;
  long lVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
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
  undefined8 uStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint uStack_108;
  undefined1 auStack_104 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  uint uStack_84;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_58;
  
  lVar14 = 0x7e2a000;
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
  uStack_58 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  if (param_3 != (long *)0x0) {
    lVar14 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b968e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_4 = (long *)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(param_3);
LAB_06b968e4:
    lVar14 = (*(code *)*puVar5)(param_3,puVar5[1]);
    lVar11 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 8) * 0x10 + 0x138);
          goto LAB_06b96944;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_4 = (long *)0x8;
    puVar5 = (undefined8 *)func_0x03256b10(param_3);
LAB_06b96944:
    lVar11 = (*(code *)*puVar5)(param_3,puVar5[1]);
    puVar2 = PTR_DAT_07782d28;
    puVar1 = PTR_DAT_0774e650;
    if ((lVar11 != 0) && (lVar14 != 0)) {
      unaff_x24 = (undefined8 *)(lVar14 + 0x68);
      *unaff_x24 = *(undefined8 *)(lVar11 + 0x28);
      func_0x032809c4(unaff_x24);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uStack_58 = func_0x05776944(0);
      uVar4 = func_0x057749c4(&uStack_58,0);
      unaff_x22 = (long *)(ulong)(uVar4 & 0xffff);
      unaff_x23 = func_0x03280ca0(*(undefined8 *)puVar2);
      param_4 = unaff_x22;
      func_0x060e89c8(unaff_x23,lVar14,unaff_x22,0,0);
      uVar12 = func_0x063785b8(lVar14,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = func_0x06378558(lVar14,0);
        unaff_x27 = PTR_DAT_078324b8;
        if ((uVar12 & 1) == 0) {
LAB_06b96b74:
          puVar3 = PTR_DAT_07832550;
          puVar2 = PTR_DAT_0774e6b0;
          puVar1 = PTR_DAT_0774e598;
          lVar11 = *param_3;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06b96be0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_07779820,0);
LAB_06b96be0:
          uVar7 = (*(code *)*puVar5)(param_3,puVar5[1]);
          uStack_84 = uVar4 & 0xffff;
          uVar8 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_84);
          uVar7 = func_0x055f7edc(*(undefined8 *)puVar3,uVar7,uVar8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar1);
          }
          func_0x06fa9a68(uVar7,0);
          lStack_70 = 0;
          lStack_68 = 0;
          uStack_78 = 0;
          lStack_80 = unaff_x23;
          func_0x032809c4(&lStack_80,unaff_x23);
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar4) & 0xffffffff0000ffff;
          lStack_70 = lVar14;
          uVar12 = func_0x032809c4(&lStack_70,lVar14);
          param_1[1] = uStack_78;
          *param_1 = lStack_80;
          param_1[3] = lStack_68;
          param_1[2] = lStack_70;
          return uVar12;
        }
        uVar7 = *unaff_x24;
        lVar11 = *(long *)PTR_DAT_078324b8;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar11 = *(long *)unaff_x27;
        }
        lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (lVar15 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar11 = *(long *)unaff_x27;
          }
          unaff_x26 = **(undefined8 **)(lVar11 + 0xb8);
          lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
          func_0x053569b8(lVar15,unaff_x26,*(undefined8 *)PTR_DAT_07832540,0);
          plVar6 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x10);
          *plVar6 = lVar15;
          func_0x032809c4(plVar6,lVar15);
        }
        uVar7 = func_0x03d53498(uVar7,lVar15,*(undefined8 *)PTR_DAT_077cd958);
        unaff_x24 = (undefined8 *)func_0x03d3c654(uVar7,*(undefined8 *)PTR_DAT_077cd950);
        lVar11 = *(long *)unaff_x27;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          func_0x03280b8c(lVar11);
          lVar11 = *(long *)unaff_x27;
        }
        unaff_x25 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
        if (unaff_x25 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            func_0x03280b8c(lVar11);
            lVar11 = *(long *)unaff_x27;
          }
          unaff_x26 = **(undefined8 **)(lVar11 + 0xb8);
          unaff_x25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
          func_0x053569b8(unaff_x25,unaff_x26,*(undefined8 *)PTR_DAT_07832548,0);
          plVar6 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x18);
          *plVar6 = unaff_x25;
          func_0x032809c4(plVar6,unaff_x25);
        }
        param_4 = *(long **)PTR_DAT_077cd960;
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
  uStack_e0 = 0x6b96c90;
  puStack_d8 = unaff_x27;
  uStack_d0 = unaff_x26;
  lStack_c8 = unaff_x25;
  puStack_c0 = unaff_x24;
  lStack_b8 = unaff_x23;
  plStack_b0 = unaff_x22;
  lStack_a8 = lVar14;
  plStack_a0 = param_3;
  plStack_98 = param_1;
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
  lStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if (extraout_x1 != (long *)0x0) {
    lVar14 = *extraout_x1;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06b96d90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777e548,1);
LAB_06b96d90:
    puVar3 = PTR_DAT_07782d28;
    puVar2 = PTR_DAT_07779820;
    lVar14 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar1);
    }
    uStack_e8 = func_0x05776944(0);
    uVar4 = func_0x057749c4(&uStack_e8,0);
    param_4 = (long *)(ulong)(uVar4 & 0xffff);
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x060e89c8(uVar7,lVar14,param_4,0,0);
    lVar11 = *extraout_x1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b96e50;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_4 = (long *)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(extraout_x1);
LAB_06b96e50:
    uVar8 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
    puVar3 = PTR_DAT_07832558;
    puVar2 = PTR_DAT_0774e6b0;
    puVar1 = PTR_DAT_0774e598;
    if (lVar14 != 0) {
      auStack_104[0] = *(undefined1 *)(lVar14 + 0x80);
      uVar9 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774f030,auStack_104);
      uStack_108 = uVar4 & 0xffff;
      uVar10 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_108);
      uVar8 = func_0x055f7f20(*(undefined8 *)puVar3,uVar8,uVar9,uVar10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar8,0);
      uStack_f8 = 0;
      lStack_f0 = 0;
      uStack_100 = uVar7;
      func_0x032809c4(&uStack_100,uVar7);
      uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar4) & 0xffffffff0000ffff;
      lStack_f0 = lVar14;
      uVar12 = func_0x032809c4(&lStack_f0,lVar14);
      extraout_x8[2] = lStack_f0;
      extraout_x8[1] = uStack_f8;
      *extraout_x8 = uStack_100;
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
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_188 = 0;
  lStack_190 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if (param_4 != (long *)0x0) {
    lVar14 = *param_4;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar14 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06b97088;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_0777e548,2);
LAB_06b97088:
    lVar14 = (*(code *)*puVar5)(param_4,puVar5[1]);
    lVar11 = *param_4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b970e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_4,*(long *)puVar1,0);
LAB_06b970e4:
    uVar7 = (*(code *)*puVar5)(param_4,puVar5[1]);
    puVar2 = PTR_DAT_07832568;
    puVar1 = PTR_DAT_0774e598;
    if (lVar14 != 0) {
      uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar14 + 0x14));
      uVar8 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_170);
      uVar7 = func_0x055f7edc(*(undefined8 *)puVar2,uVar7,uVar8,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar7,0);
      lStack_1b8 = 0;
      lStack_1c0 = 0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d0 = CONCAT44(*(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar14 + 0x14));
      uStack_1c8 = (ulong)CONCAT15(*(undefined1 *)(lVar14 + 0x36),*(undefined5 *)(lVar14 + 0x30));
      if ((*(long *)(lVar14 + 0x20) == 0) ||
         (lVar11 = func_0x03d5ffd0(*(long *)(lVar14 + 0x20),*(undefined8 *)PTR_DAT_077cd968),
         lVar11 == 0)) {
        puVar1 = PTR_DAT_077cf5c8;
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf5c0);
        func_0x04143c38(lVar11,*(undefined8 *)puVar1);
      }
      lStack_1c0 = lVar11;
      func_0x032809c4(&lStack_1c0,lVar11);
      if ((*(long *)(lVar14 + 0x28) == 0) ||
         (lVar11 = func_0x03d5ffd0(*(long *)(lVar14 + 0x28),*(undefined8 *)PTR_DAT_07832560),
         lVar11 == 0)) {
        puVar1 = PTR_DAT_0782fe88;
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
        func_0x04143c38(lVar11,*(undefined8 *)puVar1);
      }
      lStack_1b8 = lVar11;
      func_0x032809c4(&lStack_1b8,lVar11);
      uStack_1b0 = CONCAT71(uStack_1b0._1_7_,*(undefined1 *)(lVar14 + 0x35));
      uStack_1b0 = CONCAT44(*(undefined4 *)(lVar14 + 0x38),(undefined4)uStack_1b0);
      lStack_1a8 = *(long *)(lVar14 + 0x50);
      uVar12 = func_0x032809c4(&lStack_1a8);
      lVar14 = lStack_1a8;
      uStack_198 = uStack_1c8;
      uStack_1a0 = uStack_1d0;
      lStack_188 = lStack_1b8;
      lStack_190 = lStack_1c0;
      uStack_180 = uStack_1b0;
      if (lStack_1a8 != 0) {
        uStack_200 = uStack_1b0;
        lStack_1f8 = lStack_1a8;
        uStack_218 = uStack_1c8;
        uStack_220 = uStack_1d0;
        lStack_208 = lStack_1b8;
        lStack_210 = lStack_1c0;
        func_0x06b97304(&uStack_1f0,uVar12,extraout_x1_00,&uStack_220);
        if (extraout_x1_00 == 0) goto LAB_06b972f0;
        uStack_168 = uStack_1e8;
        uStack_170 = uStack_1f0;
        uStack_158 = uStack_1d8;
        uStack_160 = uStack_1e0;
        uVar12 = func_0x03d1de74(extraout_x1_00,&uStack_170,*(undefined8 *)PTR_DAT_07830c18);
      }
      extraout_x8_00[1] = uStack_198;
      *extraout_x8_00 = uStack_1a0;
      extraout_x8_00[3] = lStack_188;
      extraout_x8_00[2] = lStack_190;
      extraout_x8_00[4] = uStack_180;
      extraout_x8_00[5] = lVar14;
      return uVar12;
    }
  }
LAB_06b972f0:
  lVar14 = func_0x03280cac();
  return (ulong)(*(long *)(lVar14 + 0x28) != 0);
}

