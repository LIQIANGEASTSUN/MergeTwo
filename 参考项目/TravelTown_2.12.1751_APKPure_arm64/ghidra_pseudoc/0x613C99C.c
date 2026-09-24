/* Ghidra 12.1.2 native pseudocode; RVA 0x613C99C; MergeEngine.Model.Configuration.MergingConfigurationModel.SetTrickyProducerItemsTransformOrigins; status ok */


/* WARNING: Possible PIC construction at 0x0623d204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0623dc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623d208) */
/* WARNING: Removing unreachable block (ram,0x0623d20c) */
/* WARNING: Removing unreachable block (ram,0x0623d21c) */
/* WARNING: Removing unreachable block (ram,0x0623d224) */
/* WARNING: Removing unreachable block (ram,0x0623d24c) */
/* WARNING: Removing unreachable block (ram,0x0623d230) */
/* WARNING: Removing unreachable block (ram,0x0623d23c) */
/* WARNING: Removing unreachable block (ram,0x0623d25c) */
/* WARNING: Removing unreachable block (ram,0x0623dc48) */
/* WARNING: Removing unreachable block (ram,0x0623dd3c) */
/* WARNING: Removing unreachable block (ram,0x0623dc4c) */
/* WARNING: Removing unreachable block (ram,0x0623dd40) */
/* WARNING: Removing unreachable block (ram,0x0623dc60) */
/* WARNING: Removing unreachable block (ram,0x0623dc70) */
/* WARNING: Removing unreachable block (ram,0x0623dc78) */
/* WARNING: Removing unreachable block (ram,0x0623dca0) */
/* WARNING: Removing unreachable block (ram,0x0623dc84) */
/* WARNING: Removing unreachable block (ram,0x0623dc90) */
/* WARNING: Removing unreachable block (ram,0x0623dcb0) */
/* WARNING: Removing unreachable block (ram,0x0623dcf0) */
/* WARNING: Removing unreachable block (ram,0x0623d28c) */

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__SetTrickyProducerItemsTransformOrigins
                (long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  int iVar25;
  undefined *puVar26;
  undefined *puVar27;
  ulong unaff_x21;
  long *unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  long lVar28;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar29;
  undefined *unaff_x27;
  undefined *puVar30;
  undefined *unaff_x28;
  undefined *puVar31;
  undefined *unaff_x29;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined *puStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if ((bRam0000000007e245a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_0777e4f0);
    bRam0000000007e245a7 = 1;
  }
  puVar26 = PTR_DAT_0777c248;
  plVar19 = (long *)0x7e24000;
  if (param_1 != (long *)0x0) {
    lVar21 = *param_1;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar11 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x11) * 0x10 + 0x138);
          goto LAB_0623ca70;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    param_3 = (long *)0x11;
    puVar11 = (undefined8 *)func_0x03256b10(param_1);
LAB_0623ca70:
    plVar12 = (long *)(*(code *)*puVar11)(param_1,puVar11[1]);
    puVar32 = PTR_DAT_0777e548;
    puVar31 = PTR_DAT_0777e510;
    puVar29 = PTR_DAT_0777e4f0;
    puVar30 = PTR_DAT_07779820;
    unaff_x25 = puVar26;
    if (param_1 != (long *)0x0) {
      unaff_x21 = 0;
      do {
        lVar21 = *param_1;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar26) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0623caf4;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(param_1);
LAB_0623caf4:
        uVar23 = (*(code *)*puVar11)(param_1,puVar11[1]);
        plVar19 = plVar12;
        unaff_x26 = puVar31;
        unaff_x27 = puVar30;
        unaff_x28 = puVar29;
        unaff_x29 = puVar32;
        if (uVar23 == 0) break;
        if (*(int *)(uVar23 + 0x18) <= (int)unaff_x21) {
          return uVar23;
        }
        lVar21 = *param_1;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar26) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0623cb5c;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(param_1);
LAB_0623cb5c:
        lVar21 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if (lVar21 == 0) break;
        param_3 = *(long **)puVar31;
        plVar13 = (long *)func_0x0414419c(lVar21,unaff_x21);
        if (plVar12 == (long *)0x0) break;
        lVar21 = *plVar12;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar26) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0623cbcc;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        param_3 = (long *)0x0;
        puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623cbcc:
        lVar21 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        unaff_x22 = plVar13;
        if (lVar21 == 0) break;
        param_3 = *(long **)puVar31;
        plVar14 = (long *)func_0x0414419c(lVar21,unaff_x21);
        if (plVar14 == (long *)0x0) break;
        lVar21 = *plVar14;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar30) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0623cc3c;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar30,0);
LAB_0623cc3c:
        unaff_x24 = (*(code *)*puVar11)(plVar14,puVar11[1]);
        unaff_x23 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar29);
        param_3 = (long *)0x0;
        func_0x06104718(unaff_x23,unaff_x24);
        if (plVar13 == (long *)0x0) break;
        lVar21 = *plVar13;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar32) {
              puVar11 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x19) * 0x10 + 0x138);
              goto LAB_0623ccbc;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar32,0x19);
LAB_0623ccbc:
        param_3 = (long *)puVar11[1];
        (*(code *)*puVar11)(plVar13,unaff_x23);
        unaff_x21 = (ulong)((int)unaff_x21 + 1);
      } while( true );
    }
  }
  auVar33 = func_0x03280cac();
  plVar12 = auVar33._8_8_;
  lVar21 = auVar33._0_8_;
  pcStack_b8 = MergeEngine_Model_Configuration_MergingConfigurationModel__GraphsLoaded;
  puVar26 = (undefined *)0x7e24000;
  puStack_c0 = unaff_x29;
  puStack_b0 = unaff_x28;
  puStack_a8 = unaff_x27;
  puStack_a0 = unaff_x26;
  puStack_98 = unaff_x25;
  lStack_90 = unaff_x24;
  puStack_88 = unaff_x23;
  plStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  plStack_70 = plVar19;
  plStack_68 = param_1;
  if ((bRam0000000007e245a3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db258);
    func_0x03280a18(PTR_DAT_077db260);
    func_0x03280a18(PTR_DAT_077db268);
    func_0x03280a18(PTR_DAT_07780028);
    func_0x03280a18(PTR_DAT_077db270);
    func_0x03280a18(PTR_DAT_077db278);
    func_0x03280a18(PTR_DAT_077db280);
    func_0x03280a18(PTR_DAT_077db288);
    func_0x03280a18(PTR_DAT_07780020);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077da9d8);
    func_0x03280a18(PTR_DAT_077da9e0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077db290);
    func_0x03280a18(PTR_DAT_077db248);
    func_0x03280a18(PTR_DAT_077db298);
    func_0x03280a18(PTR_DAT_077db2a0);
    func_0x03280a18(PTR_DAT_077db2a8);
    func_0x03280a18(PTR_DAT_077db2b0);
    bRam0000000007e245a3 = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  puVar27 = puVar26;
  puVar29 = unaff_x26;
  puVar30 = unaff_x27;
  puVar31 = unaff_x28;
  puVar32 = unaff_x29;
  if (*(long *)(lVar21 + 0x50) == 0) goto LAB_0623d530;
  param_3 = *(long **)PTR_DAT_077db298;
  func_0x0431f7b8(*(long *)(lVar21 + 0x50),plVar12);
  if (plVar12 == (long *)0x0) goto LAB_0623d530;
  lVar22 = *plVar12;
  uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar23 != 0) {
    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077da9d8) {
        puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_0623ceb0;
      }
      uVar23 = uVar23 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar23 != 0);
  }
  param_3 = (long *)0x0;
  puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623ceb0:
  plStack_100 = plVar12;
  plVar12 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
  puVar27 = PTR_DAT_077db278;
  puVar32 = PTR_DAT_077db260;
  puVar31 = PTR_DAT_077db258;
  plVar19 = (long *)PTR_DAT_0777e548;
  puVar29 = PTR_DAT_07779820;
  puVar30 = PTR_DAT_0774e8e0;
  auVar9._8_8_ = plVar12;
  auVar9._0_8_ = lVar21;
  auVar8._8_8_ = plVar12;
  auVar8._0_8_ = lVar21;
  auVar7._8_8_ = plVar12;
  auVar7._0_8_ = lVar21;
  auVar6._8_8_ = plVar12;
  auVar6._0_8_ = lVar21;
  auVar34._8_8_ = plVar12;
  auVar34._0_8_ = lVar21;
  auVar5._8_8_ = plVar12;
  auVar5._0_8_ = lVar21;
  auVar4._8_8_ = plVar12;
  auVar4._0_8_ = lVar21;
  auVar3._8_8_ = plVar12;
  auVar3._0_8_ = lVar21;
  auVar2._8_8_ = plVar12;
  auVar2._0_8_ = lVar21;
  auVar33._8_8_ = plVar12;
  auVar33._0_8_ = lVar21;
  if (plVar12 == (long *)0x0) goto LAB_0623d534;
  do {
    lVar22 = *plVar12;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar30) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623cf44;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    param_3 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623cf44:
    uVar23 = (*(code *)*puVar11)(plVar12,puVar11[1]);
    if ((uVar23 & 1) == 0) {
      unaff_x23 = (undefined *)0x0;
      puVar26 = (undefined *)0x7;
      plVar19 = plStack_100;
      auVar33 = auVar7;
      if (plVar12 == (long *)0x0) goto LAB_0623d374;
      goto LAB_0623d314;
    }
    lVar22 = *plVar12;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077da9e0) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623cfa8;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    param_3 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623cfa8:
    plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    auVar33 = auVar8;
    if (plVar13 == (long *)0x0) goto LAB_0623d520;
    lVar22 = *plVar13;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623d010;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    param_3 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar13);
LAB_0623d010:
    lVar22 = (*(code *)*puVar11)(plVar13,puVar11[1]);
    auVar33 = auVar9;
    if (lVar22 == 0) goto LAB_0623d524;
    func_0x04145068(&uStack_f8,lVar22,*(undefined8 *)PTR_DAT_077db290);
    uStack_d8 = uStack_f0;
    uStack_e0 = uStack_f8;
    plStack_d0 = plStack_e8;
    uVar23 = func_0x051159b4(&uStack_e0,*(undefined8 *)puVar27);
    plVar14 = plStack_d0;
    if ((uVar23 & 1) != 0) break;
    unaff_x24 = 0;
    func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_077db270);
  } while( true );
  if (plStack_d0 == (long *)0x0) {
    auVar34 = func_0x03280cac();
LAB_0623d4fc:
    do {
      plVar12 = auVar5._8_8_;
      unaff_x23 = auVar34._8_8_;
      plVar18 = auVar34._0_8_;
      func_0x051159b0(&uStack_e0,*(undefined8 *)PTR_DAT_077db270);
      plVar19 = plStack_100;
      auVar33 = auVar5;
      if (unaff_x24 == 0) {
        if (auVar34._8_4_ != 1) {
          plVar14 = (long *)0x0;
          plVar13 = param_3;
          if (plVar12 == (long *)0x0) goto LAB_0623d60c;
          lVar21 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar23 == 0) goto LAB_0623d5e4;
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          goto LAB_0623d5cc;
        }
        puVar11 = (undefined8 *)func_0x072ce910(plVar18);
        unaff_x23 = (undefined *)*puVar11;
        uVar23 = func_0x072ce920();
        puVar26 = (undefined *)0x0;
        auVar6 = auVar5;
        if (plVar12 != (long *)0x0) {
LAB_0623d314:
          plVar12 = auVar6._8_8_;
          lVar21 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
                puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_0623d368;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          param_3 = (long *)0x0;
          puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623d368:
          uVar23 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          auVar33 = auVar6;
        }
LAB_0623d374:
        puVar27 = PTR_DAT_077db2b0;
        if (unaff_x23 == (undefined *)0x0) {
          if (((int)puVar26 == 7) || ((int)puVar26 == 0)) {
            lVar22 = *(long *)(auVar33._0_8_ + 0x48);
            lVar21 = *(long *)PTR_DAT_077db2b0;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              func_0x03280b8c(lVar21);
              lVar21 = *(long *)puVar27;
            }
            unaff_x23 = PTR_DAT_077db268;
            uVar23 = *(ulong *)(*(long *)(lVar21 + 0xb8) + 8);
            if (uVar23 == 0) {
              if (*(int *)(lVar21 + 0xe0) == 0) {
                func_0x03280b8c(lVar21);
                lVar21 = *(long *)puVar27;
              }
              uVar15 = **(undefined8 **)(lVar21 + 0xb8);
              uVar23 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077db288);
              func_0x053569b8(uVar23,uVar15,*(undefined8 *)PTR_DAT_077db2a0,0);
              puVar16 = (ulong *)(*(long *)(*(long *)puVar27 + 0xb8) + 8);
              *puVar16 = uVar23;
              func_0x032809c4(puVar16,uVar23);
            }
            param_3 = *(long **)unaff_x23;
            uVar15 = func_0x03d53498(plVar19,uVar23);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar23;
            auVar33 = auVar1 << 0x40;
            if (lVar22 == 0) goto LAB_0623d530;
            func_0x0431f7b8(lVar22,uVar15,*(undefined8 *)PTR_DAT_077db248);
            lVar21 = *(long *)puVar27;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar21 = *(long *)puVar27;
            }
            puVar26 = PTR_DAT_07780028;
            lVar22 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x10);
            if (lVar22 == 0) {
              if (*(int *)(lVar21 + 0xe0) == 0) {
                func_0x03280b8c();
                lVar21 = *(long *)puVar27;
              }
              uVar15 = **(undefined8 **)(lVar21 + 0xb8);
              lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780020);
              func_0x05355fbc(lVar22,uVar15,*(undefined8 *)PTR_DAT_077db2a8,0);
              plVar12 = (long *)(*(long *)(*(long *)puVar27 + 0xb8) + 0x10);
              *plVar12 = lVar22;
              func_0x032809c4(plVar12,lVar22);
            }
            func_0x03d872a8(plVar19,lVar22,*(undefined8 *)puVar26);
            uVar23 = MergeEngine_Model_Configuration_MergingConfigurationModel__SetTrickyProducerItemsTransformOrigins
                               ();
          }
          return uVar23;
        }
      }
      else {
        func_0x03280ca4(unaff_x24);
LAB_0623d520:
        func_0x03280cac();
LAB_0623d524:
        func_0x03280cac();
        func_0x03280ca4(unaff_x24);
LAB_0623d530:
        func_0x03280cac();
        puVar26 = puVar27;
        unaff_x26 = puVar29;
        unaff_x27 = puVar30;
        unaff_x28 = puVar31;
        unaff_x29 = puVar32;
LAB_0623d534:
        func_0x03280cac();
        puVar29 = unaff_x26;
        puVar30 = unaff_x27;
        puVar31 = unaff_x28;
        puVar32 = unaff_x29;
      }
      puVar27 = puVar26;
      auVar34 = func_0x03280ca4(unaff_x23);
      auVar5 = auVar33;
    } while( true );
  }
  lVar22 = *plStack_d0;
  plVar12 = *(long **)(lVar21 + 0x40);
  uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar23 != 0) {
    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)puVar29) {
        puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_0623d0ac;
      }
      uVar23 = uVar23 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar23 != 0);
  }
  param_3 = (long *)0x0;
  puVar11 = (undefined8 *)func_0x03256b10(plStack_d0);
LAB_0623d0ac:
  uVar15 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  if (plVar12 == (long *)0x0) {
    auVar34 = func_0x03280cac(uVar15,uVar15);
    unaff_x24 = 0;
    auVar5 = auVar4;
    goto LAB_0623d4fc;
  }
  param_3 = *(long **)puVar31;
  uVar23 = func_0x04fe2f70(plVar12);
  if ((uVar23 & 1) != 0) {
    lVar22 = *plVar14;
    lVar28 = *(long *)(lVar21 + 0x40);
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar29) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623d120;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    param_3 = (long *)0x0;
    puVar11 = (undefined8 *)func_0x03256b10(plVar14);
LAB_0623d120:
    uVar15 = (*(code *)*puVar11)(plVar14,puVar11[1]);
    if (lVar28 == 0) {
      auVar34 = func_0x03280cac(uVar15,uVar15);
      unaff_x24 = 0;
      auVar5 = auVar3;
      goto LAB_0623d4fc;
    }
    param_3 = *(long **)puVar32;
    plVar12 = (long *)func_0x04fe2cfc(lVar28);
    if (plVar12 == (long *)0x0) {
      auVar34 = func_0x03280cac();
      unaff_x24 = 0;
      auVar5 = auVar2;
      goto LAB_0623d4fc;
    }
    lVar22 = *plVar12;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar29) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623d194;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar29,0);
LAB_0623d194:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  lVar22 = *plVar14;
  uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar23 != 0) {
    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)puVar29) {
        puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_0623d1ec;
      }
      uVar23 = uVar23 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar23 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar29,0);
LAB_0623d1ec:
  uVar15 = (*(code *)*puVar11)(plVar14,puVar11[1]);
  auVar35._8_8_ = uVar15;
  auVar35._0_8_ = lVar21;
  uVar15 = 0x623d208;
  plVar18 = plVar13;
  auVar5 = auVar34;
  goto SUB_0623d624;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar24 = piVar24 + 4;
    if (uVar23 == 0) break;
LAB_0623d5cc:
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_0623d600;
    }
  }
LAB_0623d5e4:
  plVar13 = (long *)0x0;
  puVar11 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623d600:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_0623d60c:
  func_0x03365958(plVar18);
  func_0x03280ca4(0);
  uVar15 = 0x623d624;
  auVar35 = func_0x02f09514();
  plVar12 = (long *)0x0;
SUB_0623d624:
  uVar20 = auVar35._8_8_;
  plVar17 = auVar35._0_8_;
  uStack_118 = auVar5._8_8_;
  uStack_110 = auVar5._0_8_;
  uStack_130 = uVar15;
  plStack_120 = plVar18;
  puStack_108 = puVar27;
  if ((bRam0000000007e245a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077db2b8);
    func_0x03280a18(PTR_DAT_077db2c0);
    func_0x03280a18(PTR_DAT_077db2c8);
    func_0x03280a18(PTR_DAT_077db2d0);
    func_0x03280a18(PTR_DAT_077db2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    auVar5._8_8_ = uStack_118;
    auVar5._0_8_ = uStack_110;
    bRam0000000007e245a5 = 1;
  }
  uStack_118 = auVar5._8_8_;
  uStack_110 = auVar5._0_8_;
  if (plVar17[8] != 0) {
    uVar10 = func_0x04fe4928(plVar17[8],uVar20,plVar13,*(undefined8 *)PTR_DAT_077db2b8);
    if ((uVar10 & 1) == 0) {
      uVar15 = func_0x055f7538(*(undefined8 *)PTR_DAT_077db2c8,uVar20,
                               *(undefined8 *)PTR_DAT_077db2c0,0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
      }
      func_0x0556c434(uVar15,*(undefined8 *)PTR_DAT_077503b8,0,*(undefined8 *)PTR_DAT_077db2d8,
                      *(undefined8 *)PTR_DAT_077db2d0,0,0);
    }
    return (ulong)(uVar10 & 1);
  }
  plVar18 = (long *)func_0x03280cac();
  pcStack_160 = 
  MergeEngine_Model_Configuration_MergingConfigurationModel__SetTrickyProducerItemsTransformOrigins;
  uStack_150 = 0x7e24000;
  lVar21 = 0x7e24000;
  plStack_140 = plVar13;
  if ((bRam0000000007e245a6 & 1) == 0) {
    plStack_148 = plVar17;
    uStack_138 = uVar20;
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077da9d8);
    func_0x03280a18(PTR_DAT_077da9e0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    auVar35._8_8_ = uStack_138;
    auVar35._0_8_ = plStack_148;
    bRam0000000007e245a6 = 1;
  }
  uStack_138 = auVar35._8_8_;
  plStack_148 = auVar35._0_8_;
  if (plVar18 == (long *)0x0) {
    func_0x03280cac();
    plVar13 = (long *)0x0;
  }
  else {
    lVar22 = *plVar18;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_077da9d8) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623d80c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077da9d8,0);
    auVar35._8_8_ = uStack_138;
    auVar35._0_8_ = plStack_148;
LAB_0623d80c:
    plVar17 = (long *)PTR_DAT_0774e8c8;
    uStack_138 = auVar35._8_8_;
    plStack_148 = auVar35._0_8_;
    plVar13 = (long *)(*(code *)*puVar11)(plVar18,puVar11[1]);
    puVar27 = PTR_DAT_077da9e0;
    puVar26 = PTR_DAT_0774e8e0;
    if (plVar13 != (long *)0x0) {
      do {
        lVar21 = *plVar13;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar26) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0623d884;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar26,0);
LAB_0623d884:
        uVar23 = (*(code *)*puVar11)(plVar13,puVar11[1]);
        if ((uVar23 & 1) == 0) {
          lVar21 = 0;
          goto LAB_0623d8f8;
        }
        lVar21 = *plVar13;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar27) {
              puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0623d8e0;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar27,0);
LAB_0623d8e0:
        (*(code *)*puVar11)(plVar13,puVar11[1]);
        MergeEngine_Model_Configuration_MergingConfigurationModel__SetTrickyProducerItemsTransformOrigins
                  ();
      } while( true );
    }
  }
  func_0x03280cac();
  puVar27 = (undefined *)0x7e24000;
  while( true ) {
    auVar36 = func_0x03280ca4(lVar21);
    uStack_158 = auVar36._0_8_;
    if (auVar36._8_4_ != 1) break;
    plVar18 = (long *)func_0x072ce910();
    lVar21 = *plVar18;
    uVar23 = func_0x072ce920();
LAB_0623d8f8:
    if (plVar13 != (long *)0x0) {
      lVar22 = *plVar13;
      uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *plVar17) {
            puVar11 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_0623d948;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar13,*plVar17,0);
LAB_0623d948:
      uVar23 = (*(code *)*puVar11)(plVar13,puVar11[1]);
    }
    if (lVar21 == 0) {
      return uVar23;
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar21 = *plVar13;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *plVar17) {
          puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623d9f8;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar13,*plVar17,0);
LAB_0623d9f8:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
  func_0x03365958(uStack_158);
  func_0x03280ca4(0);
  auVar33 = func_0x02f09514();
  plVar18 = auVar33._8_8_;
  pcStack_1b8 = MergeEngine_Model_Configuration_MergingConfigurationModel__IsItemInProducerChain;
  uStack_170 = 0;
  puStack_1c0 = puVar32;
  puStack_1b0 = puVar31;
  puStack_1a8 = puVar30;
  puStack_1a0 = puVar29;
  plStack_198 = plVar19;
  plStack_190 = plVar12;
  plStack_188 = plVar14;
  puStack_180 = puVar27;
  plStack_178 = plVar17;
  plStack_168 = plVar13;
  if ((bRam0000000007e245a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cdab8);
    func_0x03280a18(PTR_DAT_077db270);
    func_0x03280a18(PTR_DAT_077db278);
    func_0x03280a18(PTR_DAT_077db280);
    func_0x03280a18(PTR_DAT_07780058);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077db290);
    func_0x03280a18(PTR_DAT_077db2e0);
    func_0x03280a18(PTR_DAT_077db2e8);
    bRam0000000007e245a4 = 1;
  }
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  if (plVar18 != (long *)0x0) {
    lVar21 = *plVar18;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07779820) {
          puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0623db3c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07779820,0);
LAB_0623db3c:
    uVar15 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    lVar21 = *auVar33._0_8_;
    plVar19 = (long *)(**(code **)(lVar21 + 0x4d8))
                                (auVar33._0_8_,uVar15,*(undefined8 *)(lVar21 + 0x4e0));
    if (plVar19 != (long *)0x0) {
      lVar21 = *plVar19;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar11 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_0623dbbc;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777c248,0);
LAB_0623dbbc:
      lVar21 = (*(code *)*puVar11)(plVar19,puVar11[1]);
      puVar30 = PTR_DAT_077db2e8;
      puVar26 = PTR_DAT_077db278;
      if (lVar21 != 0) {
        func_0x04145068(&uStack_1f8,lVar21,*(undefined8 *)PTR_DAT_077db290);
        uStack_1d8 = uStack_1f0;
        uStack_1e0 = uStack_1f8;
        uStack_1d0 = uStack_1e8;
        uVar10 = func_0x051159b4(&uStack_1e0,*(undefined8 *)puVar26);
        if ((uVar10 & 1) != 0) {
          uVar23 = func_0x03280ca0(*(undefined8 *)puVar30);
          return uVar23;
        }
        iVar25 = 5;
        func_0x051159b0(&uStack_1e0,*(undefined8 *)PTR_DAT_077db270);
        goto LAB_0623dd10;
      }
    }
  }
  auVar36 = func_0x03280cac();
  uVar15 = auVar36._0_8_;
  if (auVar36._8_4_ == 1) {
    plVar19 = (long *)func_0x072ce910(uVar15);
    lVar21 = *plVar19;
    func_0x072ce920();
    func_0x051159b0(&uStack_1e0,*(undefined8 *)PTR_DAT_077db270);
    if (lVar21 == 0) {
      iVar25 = 0;
      uVar10 = 0;
LAB_0623dd10:
      return (ulong)(uVar10 & iVar25 == 4);
    }
    uVar15 = func_0x03280ca4(lVar21);
  }
  else {
    lVar21 = 0;
  }
  func_0x051159b0(&uStack_1e0,*(undefined8 *)PTR_DAT_077db270);
  if (lVar21 == 0) {
    func_0x03365958(uVar15);
  }
  func_0x03280ca4(lVar21);
  uVar23 = func_0x02f09514();
  return uVar23;
}

