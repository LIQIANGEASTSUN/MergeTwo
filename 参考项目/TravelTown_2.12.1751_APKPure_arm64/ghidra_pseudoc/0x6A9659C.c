/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9659C; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.ResolveDynamicItemConfig; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__ResolveDynamicItemConfig
                (ulong param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long extraout_x1_02;
  long *plVar10;
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
  undefined8 uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint uStack_188;
  undefined1 auStack_184 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  uint uStack_104;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  plVar10 = param_3;
  if ((bRam0000000007e2a810 & 1) == 0) {
    param_1 = func_0x03280a18(PTR_DAT_07832530);
    bRam0000000007e2a810 = 1;
  }
  if (param_3 != (long *)0x0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x06b85194(&uStack_58,param_3);
    if (param_2 == 0) {
      func_0x03280cac();
      if ((bRam0000000007e2a807 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07832538);
        func_0x03280a18(PTR_DAT_07826638);
        func_0x03280a18(PTR_DAT_0777e548);
        func_0x03280a18(PTR_DAT_07826640);
        bRam0000000007e2a807 = 1;
      }
      if (extraout_x1 != (long *)0x0) {
        lVar11 = *extraout_x1;
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
        plVar10 = (long *)0x9;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1);
LAB_06b966d4:
        puVar1 = PTR_DAT_07826638;
        lVar11 = (*(code *)*puVar5)(extraout_x1,puVar5[1]);
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
        if ((lVar14 != 0) && (func_0x04144694(lVar14,*(undefined8 *)PTR_DAT_07826640), lVar11 != 0))
        {
          return (ulong)*(uint *)(lVar11 + 0x18);
        }
      }
      func_0x03280cac();
      pcStack_d0 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateProducerComponent
      ;
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
      uStack_d8 = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      if (extraout_x1_00 != (long *)0x0) {
        lVar11 = *extraout_x1_00;
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
        plVar10 = (long *)0x0;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_06b968e4:
        lVar11 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
        lVar14 = *extraout_x1_00;
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
        plVar10 = (long *)0x8;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_06b96944:
        lVar14 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
        puVar2 = PTR_DAT_07782d28;
        puVar1 = PTR_DAT_0774e650;
        if ((lVar14 != 0) && (lVar11 != 0)) {
          unaff_x24 = (undefined8 *)(lVar11 + 0x68);
          *unaff_x24 = *(undefined8 *)(lVar14 + 0x28);
          func_0x032809c4(unaff_x24);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uStack_d8 = func_0x05776944(0);
          uVar4 = func_0x057749c4(&uStack_d8,0);
          unaff_x22 = (long *)(ulong)(uVar4 & 0xffff);
          unaff_x23 = func_0x03280ca0(*(undefined8 *)puVar2);
          plVar10 = unaff_x22;
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
              lVar14 = *extraout_x1_00;
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
              puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_07779820,0);
LAB_06b96be0:
              uVar6 = (*(code *)*puVar5)(extraout_x1_00,puVar5[1]);
              uStack_104 = uVar4 & 0xffff;
              uVar7 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_104);
              uVar6 = func_0x055f7edc(*(undefined8 *)puVar3,uVar6,uVar7,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                func_0x03280b8c(*(long *)puVar1);
              }
              func_0x06fa9a68(uVar6,0);
              lStack_f0 = 0;
              lStack_e8 = 0;
              uStack_f8 = 0;
              lStack_100 = unaff_x23;
              func_0x032809c4(&lStack_100,unaff_x23);
              uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar4) & 0xffffffff0000ffff;
              lStack_f0 = lVar11;
              uVar12 = func_0x032809c4(&lStack_f0,lVar11);
              extraout_x8[1] = uStack_f8;
              *extraout_x8 = lStack_100;
              extraout_x8[3] = lStack_e8;
              extraout_x8[2] = lStack_f0;
              return uVar12;
            }
            uVar6 = *unaff_x24;
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
              plVar10 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x10);
              *plVar10 = lVar15;
              func_0x032809c4(plVar10,lVar15);
            }
            uVar6 = func_0x03d53498(uVar6,lVar15,*(undefined8 *)PTR_DAT_077cd958);
            unaff_x24 = (undefined8 *)func_0x03d3c654(uVar6,*(undefined8 *)PTR_DAT_077cd950);
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
              plVar10 = (long *)(*(long *)(*(long *)unaff_x27 + 0xb8) + 0x18);
              *plVar10 = unaff_x25;
              func_0x032809c4(plVar10,unaff_x25);
            }
            plVar10 = *(long **)PTR_DAT_077cd960;
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
      pcStack_160 = Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateSpawnerComponent
      ;
      puStack_158 = unaff_x27;
      uStack_150 = unaff_x26;
      lStack_148 = unaff_x25;
      puStack_140 = unaff_x24;
      lStack_138 = unaff_x23;
      plStack_130 = unaff_x22;
      lStack_128 = lVar11;
      plStack_120 = extraout_x1_00;
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
      lStack_170 = 0;
      uStack_168 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      if (extraout_x1_01 != (long *)0x0) {
        lVar11 = *extraout_x1_01;
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
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_01,*(long *)PTR_DAT_0777e548,1);
LAB_06b96d90:
        puVar3 = PTR_DAT_07782d28;
        puVar2 = PTR_DAT_07779820;
        lVar11 = (*(code *)*puVar5)(extraout_x1_01,puVar5[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar1);
        }
        uStack_168 = func_0x05776944(0);
        uVar4 = func_0x057749c4(&uStack_168,0);
        plVar10 = (long *)(ulong)(uVar4 & 0xffff);
        uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
        func_0x060e89c8(uVar6,lVar11,plVar10,0,0);
        lVar14 = *extraout_x1_01;
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
        plVar10 = (long *)0x0;
        puVar5 = (undefined8 *)func_0x03256b10(extraout_x1_01);
LAB_06b96e50:
        uVar7 = (*(code *)*puVar5)(extraout_x1_01,puVar5[1]);
        puVar3 = PTR_DAT_07832558;
        puVar2 = PTR_DAT_0774e6b0;
        puVar1 = PTR_DAT_0774e598;
        if (lVar11 != 0) {
          auStack_184[0] = *(undefined1 *)(lVar11 + 0x80);
          uVar8 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774f030,auStack_184);
          uStack_188 = uVar4 & 0xffff;
          uVar9 = func_0x03280b94(*(undefined8 *)puVar2,&uStack_188);
          uVar7 = func_0x055f7f20(*(undefined8 *)puVar3,uVar7,uVar8,uVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar1);
          }
          func_0x06fa9a68(uVar7,0);
          uStack_178 = 0;
          lStack_170 = 0;
          uStack_180 = uVar6;
          func_0x032809c4(&uStack_180,uVar6);
          uStack_178 = CONCAT44(uStack_178._4_4_,uVar4) & 0xffffffff0000ffff;
          lStack_170 = lVar11;
          uVar12 = func_0x032809c4(&lStack_170,lVar11);
          extraout_x8_00[2] = lStack_170;
          extraout_x8_00[1] = uStack_178;
          *extraout_x8_00 = uStack_180;
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
      uStack_200 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      lStack_208 = 0;
      lStack_210 = 0;
      lStack_238 = 0;
      lStack_240 = 0;
      lStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      if (plVar10 != (long *)0x0) {
        lVar11 = *plVar10;
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
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777e548,2);
LAB_06b97088:
        lVar11 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        lVar14 = *plVar10;
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
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar1,0);
LAB_06b970e4:
        uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        puVar2 = PTR_DAT_07832568;
        puVar1 = PTR_DAT_0774e598;
        if (lVar11 != 0) {
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,*(undefined4 *)(lVar11 + 0x14));
          uVar7 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_1f0);
          uVar6 = func_0x055f7edc(*(undefined8 *)puVar2,uVar6,uVar7,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar1);
          }
          func_0x06fa9a68(uVar6,0);
          lStack_238 = 0;
          lStack_240 = 0;
          lStack_228 = 0;
          uStack_230 = 0;
          uStack_250 = CONCAT44(*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x14));
          uStack_248 = (ulong)CONCAT15(*(undefined1 *)(lVar11 + 0x36),*(undefined5 *)(lVar11 + 0x30)
                                      );
          if ((*(long *)(lVar11 + 0x20) == 0) ||
             (lVar14 = func_0x03d5ffd0(*(long *)(lVar11 + 0x20),*(undefined8 *)PTR_DAT_077cd968),
             lVar14 == 0)) {
            puVar1 = PTR_DAT_077cf5c8;
            lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf5c0);
            func_0x04143c38(lVar14,*(undefined8 *)puVar1);
          }
          lStack_240 = lVar14;
          func_0x032809c4(&lStack_240,lVar14);
          if ((*(long *)(lVar11 + 0x28) == 0) ||
             (lVar14 = func_0x03d5ffd0(*(long *)(lVar11 + 0x28),*(undefined8 *)PTR_DAT_07832560),
             lVar14 == 0)) {
            puVar1 = PTR_DAT_0782fe88;
            lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
            func_0x04143c38(lVar14,*(undefined8 *)puVar1);
          }
          lStack_238 = lVar14;
          func_0x032809c4(&lStack_238,lVar14);
          uStack_230 = CONCAT71(uStack_230._1_7_,*(undefined1 *)(lVar11 + 0x35));
          uStack_230 = CONCAT44(*(undefined4 *)(lVar11 + 0x38),(undefined4)uStack_230);
          lStack_228 = *(long *)(lVar11 + 0x50);
          uVar12 = func_0x032809c4(&lStack_228);
          lVar11 = lStack_228;
          uStack_218 = uStack_248;
          uStack_220 = uStack_250;
          lStack_208 = lStack_238;
          lStack_210 = lStack_240;
          uStack_200 = uStack_230;
          if (lStack_228 != 0) {
            uStack_280 = uStack_230;
            lStack_278 = lStack_228;
            uStack_298 = uStack_248;
            uStack_2a0 = uStack_250;
            lStack_288 = lStack_238;
            lStack_290 = lStack_240;
            Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateTimeLimitedActivationComponent
                      (&uStack_270,uVar12,extraout_x1_02,&uStack_2a0);
            if (extraout_x1_02 == 0) goto LAB_06b972f0;
            uStack_1e8 = uStack_268;
            uStack_1f0 = uStack_270;
            uStack_1d8 = uStack_258;
            uStack_1e0 = uStack_260;
            uVar12 = func_0x03d1de74(extraout_x1_02,&uStack_1f0,*(undefined8 *)PTR_DAT_07830c18);
          }
          extraout_x8_01[1] = uStack_218;
          *extraout_x8_01 = uStack_220;
          extraout_x8_01[3] = lStack_208;
          extraout_x8_01[2] = lStack_210;
          extraout_x8_01[4] = uStack_200;
          extraout_x8_01[5] = lVar11;
          return uVar12;
        }
      }
LAB_06b972f0:
      lVar11 = func_0x03280cac();
      return (ulong)(*(long *)(lVar11 + 0x28) != 0);
    }
    uStack_38 = uStack_50;
    uStack_40 = uStack_58;
    uStack_30 = uStack_48;
    param_1 = func_0x03d1cc80(param_2,&uStack_40,*(undefined8 *)PTR_DAT_07832530);
  }
  return param_1;
}

