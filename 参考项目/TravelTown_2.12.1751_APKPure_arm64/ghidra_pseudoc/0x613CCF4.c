/* Ghidra 12.1.2 native pseudocode; RVA 0x613CCF4; MergeEngine.Model.Configuration.MergingConfigurationModel.GraphsLoaded; status ok */


/* WARNING: Possible PIC construction at 0x0623d204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0623d4d4: Changing call to branch */
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

ulong MergeEngine_Model_Configuration_MergingConfigurationModel__GraphsLoaded
                (long *param_1,long *param_2,long *param_3)

{
  long **pplVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *unaff_x23;
  long *plVar16;
  long *unaff_x24;
  long lVar17;
  undefined *unaff_x26;
  undefined *puVar18;
  undefined *unaff_x27;
  undefined *puVar19;
  undefined *unaff_x28;
  undefined *puVar20;
  undefined *unaff_x29;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 auStack_d0 [2];
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  pplVar1 = &plStack_a0;
  puVar13 = (undefined *)0x7e24000;
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
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  puVar14 = puVar13;
  puVar18 = unaff_x26;
  puVar19 = unaff_x27;
  puVar20 = unaff_x28;
  puVar21 = unaff_x29;
  if (param_1[10] == 0) goto LAB_0623d530;
  param_3 = *(long **)PTR_DAT_077db298;
  func_0x0431f7b8(param_1[10],param_2);
  if (param_2 == (long *)0x0) goto LAB_0623d530;
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077da9d8) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0623ceb0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  param_3 = (long *)0x0;
  puVar3 = (undefined8 *)func_0x03256b10(param_2);
LAB_0623ceb0:
  plStack_a0 = param_2;
  param_2 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  puVar14 = PTR_DAT_077db278;
  puVar21 = PTR_DAT_077db260;
  puVar20 = PTR_DAT_077db258;
  plVar8 = (long *)PTR_DAT_0777e548;
  puVar18 = PTR_DAT_07779820;
  puVar19 = PTR_DAT_0774e8e0;
  if (param_2 == (long *)0x0) goto LAB_0623d534;
  do {
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar19) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623cf44;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    param_3 = (long *)0x0;
    puVar3 = (undefined8 *)func_0x03256b10(param_2);
LAB_0623cf44:
    uVar10 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      unaff_x23 = (undefined *)0x0;
      puVar13 = (undefined *)0x7;
      plVar8 = plStack_a0;
      if (param_2 == (long *)0x0) goto LAB_0623d374;
      goto LAB_0623d314;
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077da9e0) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623cfa8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    param_3 = (long *)0x0;
    puVar3 = (undefined8 *)func_0x03256b10(param_2);
LAB_0623cfa8:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    plVar6 = param_1;
    if (plVar4 == (long *)0x0) goto LAB_0623d520;
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623d010;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    param_3 = (long *)0x0;
    puVar3 = (undefined8 *)func_0x03256b10(plVar4);
LAB_0623d010:
    lVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar9 == 0) goto LAB_0623d524;
    func_0x04145068(&uStack_98,lVar9,*(undefined8 *)PTR_DAT_077db290);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    plStack_70 = plStack_88;
    uVar10 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar14);
    plVar16 = plStack_70;
    if ((uVar10 & 1) != 0) break;
    unaff_x24 = (long *)0x0;
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077db270);
  } while( true );
  if (plStack_70 == (long *)0x0) {
    auVar22 = func_0x03280cac();
  }
  else {
    lVar9 = *plStack_70;
    unaff_x24 = (long *)param_1[8];
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar18) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623d0ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    param_3 = (long *)0x0;
    puVar3 = (undefined8 *)func_0x03256b10(plStack_70);
LAB_0623d0ac:
    uVar5 = (*(code *)*puVar3)(plVar16,puVar3[1]);
    if (unaff_x24 == (long *)0x0) {
      auVar22 = func_0x03280cac(uVar5,uVar5);
    }
    else {
      param_3 = *(long **)puVar20;
      uVar10 = func_0x04fe2f70(unaff_x24);
      if ((uVar10 & 1) == 0) {
LAB_0623d1a0:
        lVar9 = *plVar16;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar18) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0623d1ec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar18,0);
LAB_0623d1ec:
        puVar13 = (undefined *)(*(code *)*puVar3)(plVar16,puVar3[1]);
        uVar5 = 0x623d208;
        plVar7 = plVar4;
        goto SUB_0623d624;
      }
      lVar9 = *plVar16;
      lVar17 = param_1[8];
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar18) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0623d120;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      param_3 = (long *)0x0;
      puVar3 = (undefined8 *)func_0x03256b10(plVar16);
LAB_0623d120:
      uVar5 = (*(code *)*puVar3)(plVar16,puVar3[1]);
      if (lVar17 == 0) {
        auVar22 = func_0x03280cac(uVar5,uVar5);
        unaff_x24 = (long *)0x0;
      }
      else {
        param_3 = *(long **)puVar21;
        unaff_x24 = (long *)func_0x04fe2cfc(lVar17);
        if (unaff_x24 != (long *)0x0) {
          lVar9 = *unaff_x24;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar18) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0623d194;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar18,0);
LAB_0623d194:
          (*(code *)*puVar3)(unaff_x24,puVar3[1]);
          goto LAB_0623d1a0;
        }
        auVar22 = func_0x03280cac();
      }
    }
  }
LAB_0623d4fc:
  unaff_x23 = auVar22._8_8_;
  plVar7 = auVar22._0_8_;
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077db270);
  plVar8 = plStack_a0;
  if (unaff_x24 != (long *)0x0) {
    func_0x03280ca4(unaff_x24);
LAB_0623d520:
    func_0x03280cac();
    param_1 = plVar6;
LAB_0623d524:
    func_0x03280cac();
    func_0x03280ca4(unaff_x24);
LAB_0623d530:
    func_0x03280cac();
    puVar13 = puVar14;
    unaff_x26 = puVar18;
    unaff_x27 = puVar19;
    unaff_x28 = puVar20;
    unaff_x29 = puVar21;
LAB_0623d534:
    func_0x03280cac();
    puVar18 = unaff_x26;
    puVar19 = unaff_x27;
    puVar20 = unaff_x28;
    puVar21 = unaff_x29;
LAB_0623d538:
    puVar14 = puVar13;
    auVar22 = func_0x03280ca4(unaff_x23);
    plVar6 = param_1;
    goto LAB_0623d4fc;
  }
  if (auVar22._8_4_ != 1) {
    plVar16 = (long *)0x0;
    plVar4 = param_3;
    if (param_2 == (long *)0x0) goto LAB_0623d60c;
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 == 0) goto LAB_0623d5e4;
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    goto LAB_0623d5cc;
  }
  puVar3 = (undefined8 *)func_0x072ce910(plVar7);
  unaff_x23 = (undefined *)*puVar3;
  uVar10 = func_0x072ce920();
  puVar13 = (undefined *)0x0;
  param_1 = plVar6;
  if (param_2 != (long *)0x0) {
LAB_0623d314:
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623d368;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    param_3 = (long *)0x0;
    puVar3 = (undefined8 *)func_0x03256b10(param_2);
LAB_0623d368:
    uVar10 = (*(code *)*puVar3)(param_2,puVar3[1]);
  }
LAB_0623d374:
  puVar14 = PTR_DAT_077db2b0;
  if (unaff_x23 != (undefined *)0x0) goto LAB_0623d538;
  if (((int)puVar13 != 7) && ((int)puVar13 != 0)) {
    return uVar10;
  }
  lVar17 = param_1[9];
  lVar9 = *(long *)PTR_DAT_077db2b0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c(lVar9);
    lVar9 = *(long *)puVar14;
  }
  unaff_x23 = PTR_DAT_077db268;
  param_2 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
  if (param_2 == (long *)0x0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c(lVar9);
      lVar9 = *(long *)puVar14;
    }
    uVar5 = **(undefined8 **)(lVar9 + 0xb8);
    param_2 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077db288);
    func_0x053569b8(param_2,uVar5,*(undefined8 *)PTR_DAT_077db2a0,0);
    puVar3 = (undefined8 *)(*(long *)(*(long *)puVar14 + 0xb8) + 8);
    *puVar3 = param_2;
    func_0x032809c4(puVar3,param_2);
  }
  param_3 = *(long **)unaff_x23;
  uVar5 = func_0x03d53498(plVar8,param_2);
  param_1 = (long *)0x0;
  if (lVar17 == 0) goto LAB_0623d530;
  func_0x0431f7b8(lVar17,uVar5,*(undefined8 *)PTR_DAT_077db248);
  lVar9 = *(long *)puVar14;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar9 = *(long *)puVar14;
  }
  puVar15 = PTR_DAT_07780028;
  plVar4 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (plVar4 == (long *)0x0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar9 = *(long *)puVar14;
    }
    param_2 = (long *)**(undefined8 **)(lVar9 + 0xb8);
    plVar4 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07780020);
    func_0x05355fbc(plVar4,param_2,*(undefined8 *)PTR_DAT_077db2a8,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x10);
    *plVar6 = (long)plVar4;
    func_0x032809c4(plVar6,plVar4);
  }
  plVar6 = (long *)func_0x03d872a8(plVar8,plVar4,*(undefined8 *)puVar15);
  uVar5 = 0x623d4d8;
  puVar13 = puVar14;
  param_1 = param_2;
  plVar16 = (long *)unaff_x23;
  goto SUB_0623d760;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0623d5cc:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0623d600;
    }
  }
LAB_0623d5e4:
  plVar4 = (long *)0x0;
  puVar3 = (undefined8 *)func_0x03256b10(param_2);
LAB_0623d600:
  (*(code *)*puVar3)(param_2,puVar3[1]);
LAB_0623d60c:
  func_0x03365958(plVar7);
  func_0x03280ca4(0);
  uVar5 = 0x623d624;
  auVar22 = func_0x02f09514();
  puVar13 = auVar22._8_8_;
  param_1 = auVar22._0_8_;
  unaff_x24 = (long *)0x0;
SUB_0623d624:
  pplVar1 = (long **)auStack_d0;
  puVar15 = (undefined *)0x7e24000;
  auStack_d0[0] = uVar5;
  plStack_c0 = plVar7;
  plStack_b8 = param_2;
  plStack_b0 = plVar6;
  puStack_a8 = puVar14;
  if ((bRam0000000007e245a5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077db2b8);
    func_0x03280a18(PTR_DAT_077db2c0);
    func_0x03280a18(PTR_DAT_077db2c8);
    func_0x03280a18(PTR_DAT_077db2d0);
    func_0x03280a18(PTR_DAT_077db2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e245a5 = 1;
  }
  if (param_1[8] != 0) {
    uVar2 = func_0x04fe4928(param_1[8],puVar13,plVar4,*(undefined8 *)PTR_DAT_077db2b8);
    if ((uVar2 & 1) == 0) {
      uVar5 = func_0x055f7538(*(undefined8 *)PTR_DAT_077db2c8,puVar13,
                              *(undefined8 *)PTR_DAT_077db2c0,0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
      }
      func_0x0556c434(uVar5,*(undefined8 *)PTR_DAT_077503b8,0,*(undefined8 *)PTR_DAT_077db2d8,
                      *(undefined8 *)PTR_DAT_077db2d0,0,0);
    }
    return (ulong)(uVar2 & 1);
  }
  uVar5 = 0x623d760;
  plVar6 = (long *)func_0x03280cac();
SUB_0623d760:
  *(undefined8 *)((long)pplVar1 + -0x30) = uVar5;
  *(undefined **)((long)pplVar1 + -0x20) = puVar15;
  *(long **)((long)pplVar1 + -0x18) = param_1;
  *(long **)((long)pplVar1 + -0x10) = plVar4;
  *(undefined **)((long)pplVar1 + -8) = puVar13;
  lVar9 = 0x7e24000;
  if ((bRam0000000007e245a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077da9d8);
    func_0x03280a18(PTR_DAT_077da9e0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e245a6 = 1;
  }
  if (plVar6 == (long *)0x0) {
    func_0x03280cac();
    plVar4 = (long *)0x0;
  }
  else {
    lVar17 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077da9d8) {
          puVar3 = (undefined8 *)(lVar17 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623d80c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077da9d8,0);
LAB_0623d80c:
    param_1 = (long *)PTR_DAT_0774e8c8;
    plVar4 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
    puVar14 = PTR_DAT_077da9e0;
    puVar13 = PTR_DAT_0774e8e0;
    if (plVar4 != (long *)0x0) {
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar13) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0623d884;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar13,0);
LAB_0623d884:
        uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar10 & 1) == 0) {
          lVar9 = 0;
          goto LAB_0623d8f8;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar14) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0623d8e0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar14,0);
LAB_0623d8e0:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        func_0x0623c99c();
      } while( true );
    }
  }
  func_0x03280cac();
  puVar14 = puVar15;
  while( true ) {
    auVar23 = func_0x03280ca4(lVar9);
    if (auVar23._8_4_ != 1) break;
    plVar6 = (long *)func_0x072ce910();
    lVar9 = *plVar6;
    uVar10 = func_0x072ce920();
LAB_0623d8f8:
    if (plVar4 != (long *)0x0) {
      lVar17 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *param_1) {
            puVar3 = (undefined8 *)(lVar17 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0623d948;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar4,*param_1,0);
LAB_0623d948:
      uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    if (lVar9 == 0) {
      return uVar10;
    }
  }
  *(long *)((long)pplVar1 + -0x28) = auVar23._0_8_;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *param_1) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623d9f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar4,*param_1,0);
LAB_0623d9f8:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  func_0x03365958(*(undefined8 *)((long)pplVar1 + -0x28));
  func_0x03280ca4(0);
  auVar22 = func_0x02f09514();
  plVar6 = auVar22._8_8_;
  *(undefined **)((long)pplVar1 + -0x90) = puVar21;
  *(undefined8 *)((long)pplVar1 + -0x88) = 0x623da1c;
  *(undefined **)((long)pplVar1 + -0x80) = puVar20;
  *(undefined **)((long)pplVar1 + -0x78) = puVar19;
  *(undefined **)((long)pplVar1 + -0x70) = puVar18;
  *(long **)((long)pplVar1 + -0x68) = plVar8;
  *(long **)((long)pplVar1 + -0x60) = unaff_x24;
  *(long **)((long)pplVar1 + -0x58) = plVar16;
  *(undefined **)((long)pplVar1 + -0x50) = puVar14;
  *(long **)((long)pplVar1 + -0x48) = param_1;
  *(undefined8 *)((long)pplVar1 + -0x40) = 0;
  *(long **)((long)pplVar1 + -0x38) = plVar4;
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
  *(undefined8 *)((long)pplVar1 + -0xb0) = 0;
  *(undefined8 *)((long)pplVar1 + -0xa8) = 0;
  *(undefined8 *)((long)pplVar1 + -0xa0) = 0;
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623db3c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779820,0);
LAB_0623db3c:
    uVar5 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    lVar9 = *auVar22._0_8_;
    plVar8 = (long *)(**(code **)(lVar9 + 0x4d8))
                               (auVar22._0_8_,uVar5,*(undefined8 *)(lVar9 + 0x4e0));
    if (plVar8 != (long *)0x0) {
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0623dbbc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777c248,0);
LAB_0623dbbc:
      lVar9 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      puVar19 = PTR_DAT_077db2e8;
      puVar13 = PTR_DAT_077db278;
      if (lVar9 != 0) {
        func_0x04145068((undefined1 *)((long)pplVar1 + -200),lVar9,*(undefined8 *)PTR_DAT_077db290);
        *(undefined8 *)((long)pplVar1 + -0xa8) = *(undefined8 *)((long)pplVar1 + -0xc0);
        *(undefined8 *)((long)pplVar1 + -0xb0) = *(undefined8 *)((long)pplVar1 + -200);
        *(undefined8 *)((long)pplVar1 + -0xa0) = *(undefined8 *)((long)pplVar1 + -0xb8);
        uVar2 = func_0x051159b4((undefined1 *)((long)pplVar1 + -0xb0),*(undefined8 *)puVar13);
        if ((uVar2 & 1) != 0) {
          uVar10 = func_0x03280ca0(*(undefined8 *)puVar19);
          return uVar10;
        }
        iVar12 = 5;
        func_0x051159b0((undefined1 *)((long)pplVar1 + -0xb0),*(undefined8 *)PTR_DAT_077db270);
        goto LAB_0623dd10;
      }
    }
  }
  auVar23 = func_0x03280cac();
  uVar5 = auVar23._0_8_;
  if (auVar23._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(uVar5);
    lVar9 = *plVar8;
    func_0x072ce920();
    func_0x051159b0((undefined1 *)((long)pplVar1 + -0xb0),*(undefined8 *)PTR_DAT_077db270);
    if (lVar9 == 0) {
      iVar12 = 0;
      uVar2 = 0;
LAB_0623dd10:
      return (ulong)(uVar2 & iVar12 == 4);
    }
    uVar5 = func_0x03280ca4(lVar9);
  }
  else {
    lVar9 = 0;
  }
  func_0x051159b0((undefined1 *)((long)pplVar1 + -0xb0),*(undefined8 *)PTR_DAT_077db270);
  if (lVar9 == 0) {
    func_0x03365958(uVar5);
  }
  func_0x03280ca4(lVar9);
  uVar10 = func_0x02f09514();
  return uVar10;
}

