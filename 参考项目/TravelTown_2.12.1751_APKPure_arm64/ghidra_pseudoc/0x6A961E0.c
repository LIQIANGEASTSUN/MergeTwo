/* Ghidra 12.1.2 native pseudocode; RVA 0x6A961E0; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateInteractionComponent; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateInteractionComponent
                (undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long extraout_x1_02;
  long lVar10;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *unaff_x22;
  undefined8 uVar14;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long lVar15;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined1 auVar16 [16];
  undefined8 uStack_340;
  ulong uStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  uint uStack_228;
  undefined1 auStack_224 [4];
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  uint uStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  
  if ((bRam0000000007e2a80d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826718);
    func_0x03280a18(PTR_DAT_07826720);
    func_0x03280a18(PTR_DAT_077f1b00);
    func_0x03280a18(PTR_DAT_077e6770);
    func_0x03280a18(PTR_DAT_07826728);
    func_0x03280a18(PTR_DAT_077f1b08);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_077e75c0);
    func_0x03280a18(PTR_DAT_077cf4e8);
    func_0x03280a18(PTR_DAT_077cf4f0);
    func_0x03280a18(PTR_DAT_07832520);
    func_0x03280a18(PTR_DAT_07832528);
    func_0x03280a18(PTR_DAT_078324b8);
    bRam0000000007e2a80d = 1;
  }
  puVar3 = PTR_DAT_077e75c0;
  puVar2 = PTR_DAT_077cf4f0;
  puVar1 = PTR_DAT_077cf4e8;
  auStack_50[0] = 0;
  auStack_80[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_3 != (long *)0x0) {
    lVar10 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_06b96334;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e548,8);
LAB_06b96334:
    lVar10 = (*(code *)*puVar5)(param_3,puVar5[1]);
    auStack_80[0] = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 1;
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x04143c38(uVar6,*(undefined8 *)puVar1);
    uStack_90 = uVar6;
    func_0x032809c4(&uStack_90,uVar6);
    auStack_80[0] = func_0x03280afc(*(undefined8 *)puVar3,0);
    uVar11 = func_0x032809c4(auStack_80,auStack_80[0]);
    uStack_68 = (undefined4)uStack_98;
    uStack_64 = (undefined4)((ulong)uStack_98 >> 0x20);
    uStack_70 = (undefined4)uStack_a0;
    uStack_6c = uStack_a0._4_4_;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    auStack_50[0] = auStack_80[0];
    if ((lVar10 != 0) && (uVar11 = func_0x0611060c(lVar10,0), (uVar11 & 1) != 0)) {
      uStack_70 = CONCAT31(uStack_70._1_3_,*(undefined1 *)(lVar10 + 0x10));
      uStack_6c = (undefined4)*(undefined8 *)(lVar10 + 0x14);
      uStack_68 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20);
      uStack_58 = CONCAT71(uStack_58._1_7_,*(undefined1 *)(lVar10 + 0x11));
      uStack_60 = *(undefined8 *)(lVar10 + 0x28);
      func_0x032809c4(&uStack_60);
      uVar11 = func_0x063782a8(lVar10,0);
      uVar6 = uStack_60;
      puVar1 = PTR_DAT_078324b8;
      if ((uVar11 & 1) != 0) {
        lVar10 = *(long *)PTR_DAT_078324b8;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar10 = *(long *)puVar1;
        }
        lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar13 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar10 = *(long *)puVar1;
          }
          uVar14 = **(undefined8 **)(lVar10 + 0xb8);
          lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07826728);
          func_0x053569b8(lVar13,uVar14,*(undefined8 *)PTR_DAT_07832520,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
          *plVar7 = lVar13;
          func_0x032809c4(plVar7,lVar13);
        }
        uVar6 = func_0x03d53498(uVar6,lVar13,*(undefined8 *)PTR_DAT_07826720);
        uVar6 = func_0x03d3c654(uVar6,*(undefined8 *)PTR_DAT_07826718);
        lVar10 = *(long *)puVar1;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c(lVar10);
          lVar10 = *(long *)puVar1;
        }
        lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar13 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c(lVar10);
            lVar10 = *(long *)puVar1;
          }
          uVar14 = **(undefined8 **)(lVar10 + 0xb8);
          lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077f1b08);
          func_0x053569b8(lVar13,uVar14,*(undefined8 *)PTR_DAT_07832528,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
          *plVar7 = lVar13;
          func_0x032809c4(plVar7,lVar13);
        }
        uVar6 = func_0x03d50a94(uVar6,lVar13,*(undefined8 *)PTR_DAT_077f1b00);
        auStack_50[0] = func_0x03d5b8d8(uVar6,*(undefined8 *)PTR_DAT_077e6770);
        uVar11 = func_0x032809c4(auStack_50);
      }
    }
    param_1[4] = auStack_50[0];
    param_1[1] = CONCAT44(uStack_64,uStack_68);
    *param_1 = CONCAT44(uStack_6c,uStack_70);
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    return uVar11;
  }
  auVar16 = func_0x03280cac();
  uVar11 = auVar16._0_8_;
  uStack_c0 = 0x6b9659c;
  uStack_b8 = 0x7e2a000;
  plVar7 = param_4;
  plStack_b0 = param_3;
  puStack_a8 = param_1;
  if ((bRam0000000007e2a810 & 1) == 0) {
    uVar11 = func_0x03280a18(PTR_DAT_07832530);
    bRam0000000007e2a810 = 1;
  }
  if (param_4 != (long *)0x0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x06b85194(&uStack_f8,param_4);
    if (auVar16._8_8_ == 0) {
      func_0x03280cac();
      if ((bRam0000000007e2a807 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07832538);
        func_0x03280a18(PTR_DAT_07826638);
        func_0x03280a18(PTR_DAT_0777e548);
        func_0x03280a18(PTR_DAT_07826640);
        bRam0000000007e2a807 = 1;
      }
      if (extraout_x1 != (long *)0x0) {
        lVar10 = *extraout_x1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto LAB_06b966d4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        plVar7 = (long *)0x9;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1);
LAB_06b966d4:
        puVar1 = PTR_DAT_07826638;
        lVar10 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
        if ((lVar10 == 0) || (lVar10 = func_0x0610fa34(lVar10,0), lVar10 == 0)) {
          lVar13 = *(long *)PTR_DAT_07832538;
          lVar10 = *(long *)(lVar13 + 0x38);
          if (lVar10 == 0) {
            func_0x03256878(lVar13);
            lVar10 = *(long *)(lVar13 + 0x38);
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = func_0x0325681c();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = func_0x0325681c();
          }
          lVar10 = **(long **)(lVar10 + 0xb8);
        }
        lVar13 = func_0x03d5ffd0(lVar10,*(undefined8 *)puVar1);
        if ((lVar13 != 0) && (func_0x04144694(lVar13,*(undefined8 *)PTR_DAT_07826640), lVar10 != 0))
        {
          return (ulong)*(uint *)(lVar10 + 0x18);
        }
      }
      func_0x03280cac();
      uStack_170 = 0x6b9678c;
      lVar10 = 0x7e2a000;
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
      uStack_178 = 0;
      uStack_198 = 0;
      lStack_1a0 = 0;
      lStack_188 = 0;
      lStack_190 = 0;
      if (extraout_x1_00 != (long *)0x0) {
        lVar10 = *extraout_x1_00;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b968e4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        plVar7 = (long *)0x0;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_06b968e4:
        lVar10 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
        lVar13 = *extraout_x1_00;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_06b96944;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        plVar7 = (long *)0x8;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_06b96944:
        lVar13 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
        puVar2 = PTR_DAT_07782d28;
        puVar1 = PTR_DAT_0774e650;
        if ((lVar13 != 0) && (lVar10 != 0)) {
          unaff_x24 = (undefined8 *)(lVar10 + 0x68);
          *unaff_x24 = *(undefined8 *)(lVar13 + 0x28);
          func_0x032809c4(unaff_x24);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uStack_178 = func_0x05776944(0);
          uVar4 = func_0x057749c4(&uStack_178,0);
          unaff_x22 = (long *)(ulong)(uVar4 & 0xffff);
          unaff_x23 = func_0x03280ca0(*(undefined8 *)puVar2);
          plVar7 = unaff_x22;
          func_0x060e89c8(unaff_x23,lVar10,unaff_x22,0,0);
          uVar11 = func_0x063785b8(lVar10,0);
          if ((uVar11 & 1) == 0) {
            uVar11 = func_0x06378558(lVar10,0);
            unaff_x27 = PTR_DAT_078324b8;
            if ((uVar11 & 1) == 0) {
LAB_06b96b74:
              puVar3 = PTR_DAT_07832550;
              puVar2 = PTR_DAT_0774e6b0;
              puVar1 = PTR_DAT_0774e598;
              lVar13 = *extraout_x1_00;
              uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_06b96be0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_07779820,0);
LAB_06b96be0:
              uVar6 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
              uStack_1a4 = uVar4 & 0xffff;
              uVar14 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_1a4);
              uVar6 = func_0x055f7edc(*(undefined8 *)puVar3,uVar6,uVar14,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)puVar1);
              }
              func_0x06fa9a68(uVar6,0);
              lStack_190 = 0;
              lStack_188 = 0;
              uStack_198 = 0;
              lStack_1a0 = unaff_x23;
              func_0x032809c4(&lStack_1a0,unaff_x23);
              uStack_198 = CONCAT44(uStack_198._4_4_,uVar4) & 0xffffffff0000ffff;
              lStack_190 = lVar10;
              uVar11 = func_0x032809c4(&lStack_190,lVar10);
              extraout_x8[1] = uStack_198;
              *extraout_x8 = lStack_1a0;
              extraout_x8[3] = lStack_188;
              extraout_x8[2] = lStack_190;
              return uVar11;
            }
            uVar6 = *unaff_x24;
            lVar13 = *(long *)PTR_DAT_078324b8;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar13 = *(long *)unaff_x27;
            }
            lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
            if (lVar15 == 0) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar13 = *(long *)unaff_x27;
              }
              unaff_x26 = **(undefined8 **)(lVar13 + 0xb8);
              lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd988);
              func_0x053569b8(lVar15,unaff_x26,*(undefined8 *)PTR_DAT_07832540,0);
              plVar7 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x10);
              *plVar7 = lVar15;
              func_0x032809c4(plVar7,lVar15);
            }
            uVar6 = func_0x03d53498(uVar6,lVar15,*(undefined8 *)PTR_DAT_077cd958);
            unaff_x24 = (undefined8 *)func_0x03d3c654(uVar6,*(undefined8 *)PTR_DAT_077cd950);
            lVar13 = *(long *)unaff_x27;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c(lVar13);
              lVar13 = *(long *)unaff_x27;
            }
            unaff_x25 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
            if (unaff_x25 == 0) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                func_0x03280b8c(lVar13);
                lVar13 = *(long *)unaff_x27;
              }
              unaff_x26 = **(undefined8 **)(lVar13 + 0xb8);
              unaff_x25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd990);
              func_0x053569b8(unaff_x25,unaff_x26,*(undefined8 *)PTR_DAT_07832548,0);
              plVar7 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x18);
              *plVar7 = unaff_x25;
              func_0x032809c4(plVar7,unaff_x25);
            }
            plVar7 = *(long **)PTR_DAT_077cd960;
            uVar6 = func_0x03d50a94(unaff_x24,unaff_x25);
            uVar6 = func_0x03d5ffd0(uVar6,*(undefined8 *)PTR_DAT_077cd968);
            if (unaff_x23 != 0) {
              func_0x060ea444(unaff_x23,uVar6,0);
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
      uStack_200 = 0x6b96c90;
      puStack_1f8 = unaff_x27;
      uStack_1f0 = unaff_x26;
      lStack_1e8 = unaff_x25;
      puStack_1e0 = unaff_x24;
      lStack_1d8 = unaff_x23;
      plStack_1d0 = unaff_x22;
      lStack_1c8 = lVar10;
      plStack_1c0 = extraout_x1_00;
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
      lStack_210 = 0;
      uStack_208 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      if (extraout_x1_01 != (long *)0x0) {
        lVar10 = *extraout_x1_01;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06b96d90;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_01,*(long *)PTR_DAT_0777e548,1);
LAB_06b96d90:
        puVar3 = PTR_DAT_07782d28;
        puVar2 = PTR_DAT_07779820;
        lVar10 = (*(code *)*puVar5)(extraout_x1_01,puVar5[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar1);
        }
        uStack_208 = func_0x05776944(0);
        uVar4 = func_0x057749c4(&uStack_208,0);
        plVar7 = (long *)(ulong)(uVar4 & 0xffff);
        uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
        func_0x060e89c8(uVar6,lVar10,plVar7,0,0);
        lVar13 = *extraout_x1_01;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b96e50;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        plVar7 = (long *)0x0;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_01);
LAB_06b96e50:
        uVar14 = (*(code *)*puVar5)(extraout_x1_01,puVar5[1]);
        puVar3 = PTR_DAT_07832558;
        puVar2 = PTR_DAT_0774e6b0;
        puVar1 = PTR_DAT_0774e598;
        if (lVar10 != 0) {
          auStack_224[0] = *(undefined1 *)(lVar10 + 0x80);
          uVar8 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774f030,auStack_224);
          uStack_228 = uVar4 & 0xffff;
          uVar9 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_228);
          uVar14 = func_0x055f7f20(*(undefined8 *)puVar3,uVar14,uVar8,uVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar1);
          }
          func_0x06fa9a68(uVar14,0);
          uStack_218 = 0;
          lStack_210 = 0;
          uStack_220 = uVar6;
          func_0x032809c4(&uStack_220,uVar6);
          uStack_218 = CONCAT44(uStack_218._4_4_,uVar4) & 0xffffffff0000ffff;
          lStack_210 = lVar10;
          uVar11 = func_0x032809c4(&lStack_210,lVar10);
          extraout_x8_00[2] = lStack_210;
          extraout_x8_00[1] = uStack_218;
          *extraout_x8_00 = uStack_220;
          return uVar11;
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
      uStack_2a0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      lStack_2a8 = 0;
      lStack_2b0 = 0;
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      if (plVar7 != (long *)0x0) {
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_06b97088;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777e548,2);
LAB_06b97088:
        lVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        lVar13 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06b970e4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar1,0);
LAB_06b970e4:
        uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        puVar2 = PTR_DAT_07832568;
        puVar1 = PTR_DAT_0774e598;
        if (lVar10 != 0) {
          uStack_290 = CONCAT44(uStack_290._4_4_,*(undefined4 *)(lVar10 + 0x14));
          uVar14 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_290);
          uVar6 = func_0x055f7edc(*(undefined8 *)puVar2,uVar6,uVar14,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar1);
          }
          func_0x06fa9a68(uVar6,0);
          lStack_2d8 = 0;
          lStack_2e0 = 0;
          lStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_2f0 = CONCAT44(*(undefined4 *)(lVar10 + 0x14),*(undefined4 *)(lVar10 + 0x14));
          uStack_2e8 = (ulong)CONCAT15(*(undefined1 *)(lVar10 + 0x36),*(undefined5 *)(lVar10 + 0x30)
                                      );
          if ((*(long *)(lVar10 + 0x20) == 0) ||
             (lVar13 = func_0x03d5ffd0(*(long *)(lVar10 + 0x20),*(undefined8 *)PTR_DAT_077cd968),
             lVar13 == 0)) {
            puVar1 = PTR_DAT_077cf5c8;
            lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf5c0);
            func_0x04143c38(lVar13,*(undefined8 *)puVar1);
          }
          lStack_2e0 = lVar13;
          func_0x032809c4(&lStack_2e0,lVar13);
          if ((*(long *)(lVar10 + 0x28) == 0) ||
             (lVar13 = func_0x03d5ffd0(*(long *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_07832560),
             lVar13 == 0)) {
            puVar1 = PTR_DAT_0782fe88;
            lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
            func_0x04143c38(lVar13,*(undefined8 *)puVar1);
          }
          lStack_2d8 = lVar13;
          func_0x032809c4(&lStack_2d8,lVar13);
          uStack_2d0 = CONCAT71(uStack_2d0._1_7_,*(undefined1 *)(lVar10 + 0x35));
          uStack_2d0 = CONCAT44(*(undefined4 *)(lVar10 + 0x38),(undefined4)uStack_2d0);
          lStack_2c8 = *(long *)(lVar10 + 0x50);
          uVar11 = func_0x032809c4(&lStack_2c8);
          lVar10 = lStack_2c8;
          uStack_2b8 = uStack_2e8;
          uStack_2c0 = uStack_2f0;
          lStack_2a8 = lStack_2d8;
          lStack_2b0 = lStack_2e0;
          uStack_2a0 = uStack_2d0;
          if (lStack_2c8 != 0) {
            uStack_320 = uStack_2d0;
            lStack_318 = lStack_2c8;
            uStack_338 = uStack_2e8;
            uStack_340 = uStack_2f0;
            lStack_328 = lStack_2d8;
            lStack_330 = lStack_2e0;
            func_0x06b97304(&uStack_310,uVar11,extraout_x1_02,&uStack_340);
            if (extraout_x1_02 == 0) goto LAB_06b972f0;
            uStack_288 = uStack_308;
            uStack_290 = uStack_310;
            uStack_278 = uStack_2f8;
            uStack_280 = uStack_300;
            uVar11 = func_0x03d1de74(extraout_x1_02,&uStack_290,*(undefined8 *)PTR_DAT_07830c18);
          }
          extraout_x8_01[1] = uStack_2b8;
          *extraout_x8_01 = uStack_2c0;
          extraout_x8_01[3] = lStack_2a8;
          extraout_x8_01[2] = lStack_2b0;
          extraout_x8_01[4] = uStack_2a0;
          extraout_x8_01[5] = lVar10;
          return uVar11;
        }
      }
LAB_06b972f0:
      lVar10 = func_0x03280cac();
      return (ulong)(*(long *)(lVar10 + 0x28) != 0);
    }
    uStack_d8 = uStack_f0;
    uStack_e0 = uStack_f8;
    uStack_d0 = uStack_e8;
    uVar11 = func_0x03d1cc80(auVar16._8_8_,&uStack_e0,*(undefined8 *)PTR_DAT_07832530);
  }
  return uVar11;
}

