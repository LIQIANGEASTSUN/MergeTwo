/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3B1BC; Merger.MergeBoard.View.MergeBoardView.ResetItemCombinerVisualPresentation; status ok */


/* WARNING: Possible PIC construction at 0x06b3b48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b3b4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b3bb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3b4d4) */
/* WARNING: Removing unreachable block (ram,0x06b3b4dc) */
/* WARNING: Removing unreachable block (ram,0x06b3b4f8) */
/* WARNING: Removing unreachable block (ram,0x06b3b500) */
/* WARNING: Removing unreachable block (ram,0x06b3b528) */
/* WARNING: Removing unreachable block (ram,0x06b3b50c) */
/* WARNING: Removing unreachable block (ram,0x06b3b518) */
/* WARNING: Removing unreachable block (ram,0x06b3b538) */
/* WARNING: Removing unreachable block (ram,0x06b3b54c) */
/* WARNING: Removing unreachable block (ram,0x06b3b560) */
/* WARNING: Removing unreachable block (ram,0x06b3b568) */
/* WARNING: Removing unreachable block (ram,0x06b3b590) */
/* WARNING: Removing unreachable block (ram,0x06b3b574) */
/* WARNING: Removing unreachable block (ram,0x06b3b580) */
/* WARNING: Removing unreachable block (ram,0x06b3b5a0) */
/* WARNING: Removing unreachable block (ram,0x06b3b5b0) */
/* WARNING: Removing unreachable block (ram,0x06b3b5cc) */
/* WARNING: Removing unreachable block (ram,0x06b3b5d4) */
/* WARNING: Removing unreachable block (ram,0x06b3b5fc) */
/* WARNING: Removing unreachable block (ram,0x06b3b5e0) */
/* WARNING: Removing unreachable block (ram,0x06b3b5ec) */
/* WARNING: Removing unreachable block (ram,0x06b3b608) */
/* WARNING: Removing unreachable block (ram,0x06b3b490) */
/* WARNING: Removing unreachable block (ram,0x06b3b498) */
/* WARNING: Removing unreachable block (ram,0x06b3b4ac) */
/* WARNING: Removing unreachable block (ram,0x06b3b4b4) */
/* WARNING: Removing unreachable block (ram,0x06b3b4c4) */
/* WARNING: Removing unreachable block (ram,0x06b3bb90) */

undefined1  [16]
Merger_MergeBoard_View_MergeBoardView__ResetItemCombinerVisualPresentation
          (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined *puVar24;
  float extraout_s0;
  float fVar25;
  undefined8 extraout_d0;
  float fVar26;
  ulong uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  auVar30._8_8_ = param_4;
  auVar30._0_8_ = param_3;
  if ((bRam0000000007e2a4fe & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    auVar30 = func_0x03280a18(PTR_DAT_0782f418);
    bRam0000000007e2a4fe = 1;
  }
  puVar5 = PTR_DAT_077c0858;
  puVar20 = (undefined8 *)(param_3 + 0xa0);
  plVar21 = (long *)*puVar20;
  if (((plVar21 == (long *)0x0) || (plVar23 = *(long **)(param_3 + 0x88), plVar23 == (long *)0x0))
     || (*(long *)(param_3 + 0x90) == 0)) {
    return auVar30;
  }
  lVar15 = *plVar23;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
        goto LAB_06b3b27c;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  param_5 = 3;
  puVar9 = (undefined8 *)func_0x03256b10(plVar23);
LAB_06b3b27c:
  uVar10 = (*(code *)*puVar9)(plVar23,puVar9[1]);
  plVar23 = *(long **)(param_3 + 0x90);
  if (plVar23 != (long *)0x0) {
    lVar16 = *plVar23;
    lVar15 = *(long *)puVar5;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar15) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_06b3b2e4;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar23,lVar15,3);
LAB_06b3b2e4:
    uVar11 = (*(code *)*puVar9)(plVar23,puVar9[1]);
    lVar15 = *plVar21;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0782f418) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06b3b348;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0782f418,0);
LAB_06b3b348:
    (*(code *)*puVar9)(plVar21,uVar10,uVar11,0,puVar9[1]);
    *puVar20 = 0;
    uVar10 = 0;
    goto SUB_032809c4;
  }
  lVar15 = func_0x03280cac();
  uVar17 = param_2;
  plStack_50 = plVar23;
  lStack_48 = param_3;
  plStack_40 = plVar21;
  puStack_38 = puVar20;
  if ((bRam0000000007e2a4f6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0782f418);
    func_0x03280a18(PTR_DAT_07763678);
    func_0x03280a18(PTR_DAT_0782f5d8);
    bRam0000000007e2a4f6 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lVar22 = *(long *)(lVar15 + 0x30);
  lVar16 = 0;
  if (lVar22 != 0) {
    uVar17 = param_2;
    uVar10 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition
                       (extraout_d0,lVar22);
    uStack_58 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform(lVar22,uVar10);
    if (*(long *)(lVar15 + 0x38) != 0) {
      lVar12 = Merger_MergeBoard_View_Items_MergeBoardItemsContainer__GetEntityForItemView
                         (*(long *)(lVar15 + 0x38),*(undefined8 *)(lVar15 + 0x88));
      puVar24 = PTR_DAT_07763678;
      if (*(long *)(lVar15 + 0x28) != 0) {
        lVar22 = func_0x06b32798(*(long *)(lVar15 + 0x28));
        uVar6 = func_0x0437b6f8(&uStack_58,*(undefined8 *)puVar24);
        param_5 = 0;
        auVar30 = Merger_MergeBoard_Extensions_MergeBoardEntitiesExtensions__GetEntityAtPosition
                            (lVar22,uVar6);
        lVar16 = auVar30._0_8_;
        if ((lVar16 == 0) || (lVar16 == lVar12)) {
          return auVar30;
        }
        param_3 = lVar12;
        if (*(long *)(lVar15 + 0x38) != 0) {
          uVar10 = func_0x06b36fa4(*(long *)(lVar15 + 0x38),lVar16);
          puVar20 = (undefined8 *)(lVar15 + 0x90);
          *puVar20 = uVar10;
          goto SUB_032809c4;
        }
      }
    }
  }
  auVar30 = func_0x03280cac();
  lVar12 = auVar30._0_8_;
  pcStack_b0 = Merger_MergeBoard_View_MergeBoardView__ResetDraggedItem;
  lStack_a0 = lVar16;
  lStack_98 = param_3;
  lStack_90 = lVar22;
  lStack_88 = lVar15;
  if ((bRam0000000007e2a4f7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    auVar30 = func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a4f7 = 1;
  }
  puVar24 = PTR_DAT_077c0858;
  puVar20 = (undefined8 *)(lVar12 + 0x88);
  plVar21 = (long *)*puVar20;
  if (plVar21 == (long *)0x0) {
    return auVar30;
  }
  lVar15 = *plVar21;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
        goto LAB_06b3b6e8;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  param_5 = 3;
  puVar9 = (undefined8 *)func_0x03256b10(plVar21);
LAB_06b3b6e8:
  plVar13 = (long *)(*(code *)*puVar9)(plVar21,puVar9[1]);
  plVar23 = (long *)*puVar20;
  if (plVar23 != (long *)0x0) {
    lVar15 = *plVar23;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar24) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_06b3b750;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    param_5 = 3;
    puVar9 = (undefined8 *)func_0x03256b10(plVar23);
LAB_06b3b750:
    plVar14 = (long *)(*(code *)*puVar9)(plVar23,puVar9[1]);
    puVar4 = PTR_DAT_077c1d88;
    plVar21 = plVar13;
    if (plVar14 != (long *)0x0) {
      lVar15 = *plVar14;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0x5f) * 0x10 + 0x138);
            goto LAB_06b3b7bc;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b3b7bc:
      param_5 = puVar9[1];
      (*(code *)*puVar9)(plVar14,0);
      plVar23 = plVar14;
      puVar24 = puVar4;
      if (plVar13 != (long *)0x0) {
        lVar16 = *plVar13;
        lVar15 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x6b) * 0x10 + 0x138);
              goto LAB_06b3b820;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar13,lVar15,0x6b);
LAB_06b3b820:
        (*(code *)*puVar9)(plVar13,0,puVar9[1]);
        *puVar20 = 0;
        uVar10 = 0;
        goto SUB_032809c4;
      }
    }
  }
  auVar30 = func_0x03280cac();
  plVar14 = auVar30._8_8_;
  lVar15 = auVar30._0_8_;
  pcStack_e0 = Merger_MergeBoard_View_MergeBoardView__BoardItemDragEnded;
  puStack_d8 = puVar5;
  plVar13 = (long *)0x7e2a000;
  uStack_f0 = extraout_d0;
  uStack_e8 = param_2;
  puStack_d0 = puVar24;
  plStack_c8 = plVar23;
  plStack_c0 = plVar21;
  puStack_b8 = puVar20;
  if ((bRam0000000007e2a4f5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_077628e8);
    func_0x03280a18(PTR_DAT_07763678);
    func_0x03280a18(PTR_DAT_0776bdc8);
    func_0x03280a18(PTR_DAT_077502a0);
    func_0x03280a18(PTR_DAT_0782f5d8);
    bRam0000000007e2a4f5 = 1;
  }
  puVar5 = PTR_DAT_077c0858;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_108 = 0;
  if ((param_5 != 0) && (plVar14 != (long *)0x0)) {
    lVar16 = *plVar14;
    uVar6 = *(undefined4 *)(param_5 + 0x104);
    uVar27 = (ulong)*(uint *)(param_5 + 0x108);
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077c0858) {
          puVar20 = (undefined8 *)(lVar16 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_06b3b948;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar20 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c0858,3);
LAB_06b3b948:
    plVar21 = (long *)(*(code *)*puVar20)(plVar14,puVar20[1]);
    if (plVar21 != (long *)0x0) {
      lVar16 = *plVar21;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar20 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x73) * 0x10 + 0x138);
            goto LAB_06b3b9b4;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar20 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_077c1d88,0x73);
LAB_06b3b9b4:
      uVar18 = (*(code *)*puVar20)(plVar21,puVar20[1]);
      if ((uVar18 & 1) == 0) {
        plVar13 = plVar21;
        if (*(long *)(lVar15 + 0x30) == 0) goto LAB_06b3bbb4;
        plVar13 = (long *)func_0x06fdbe94(*(long *)(lVar15 + 0x30),0);
        uVar10 = func_0x07263114(param_5,0);
        if (*(int *)(*(long *)PTR_DAT_0776bdc8 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0776bdc8);
          if (plVar13 != (long *)0x0) goto LAB_06b3ba00;
LAB_06b3ba28:
          plVar21 = (long *)0x0;
        }
        else {
          if (plVar13 == (long *)0x0) goto LAB_06b3ba28;
LAB_06b3ba00:
          plVar21 = plVar13;
          if (*plVar13 != *(long *)PTR_DAT_077502a0) {
            plVar21 = (long *)0x0;
          }
        }
        uVar17 = func_0x072369e0(uVar6,plVar21,uVar10,&uStack_f8,0);
        if ((uVar17 & 1) != 0) {
          lVar16 = *plVar14;
          lVar22 = *(long *)(lVar15 + 0x30);
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                puVar20 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                uVar17 = uVar27;
                goto LAB_06b3ba9c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar20 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar5,1);
          uVar17 = uVar27;
LAB_06b3ba9c:
          uVar10 = (*(code *)*puVar20)(plVar14,puVar20[1]);
          uVar10 = Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__GetTransformForPosition
                             (lVar22,uVar10,0);
          if ((lVar22 != 0) &&
             (uVar18 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                                 (lVar22,uVar10), uStack_100 = uVar18, *(long *)(lVar15 + 0x30) != 0
             )) {
            uVar17 = uStack_f8 >> 0x20;
            uVar10 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition
                               (uStack_f8 & 0xffffffff);
            if (*(long *)(lVar15 + 0x30) != 0) {
              uStack_108 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                                     (*(long *)(lVar15 + 0x30),uVar10);
              puVar5 = PTR_DAT_07763678;
              if (((uVar18 & 0xff) == 0) || ((uStack_108 & 0xff) == 0)) goto LAB_06b3bb78;
              plVar13 = *(long **)(lVar15 + 0x28);
              uVar6 = func_0x0437b6f8(&uStack_100,*(undefined8 *)PTR_DAT_07763678);
              uVar7 = func_0x0437b6f8(&uStack_108,*(undefined8 *)puVar5);
              if ((plVar13 != (long *)0x0) && (plVar13[0xd] != 0)) {
                func_0x06b9b490(plVar13[0xd],uVar6,uVar7,0);
                lVar16 = *(long *)(lVar15 + 0x48);
                uVar6 = func_0x0437b6f8(&uStack_108,*(undefined8 *)puVar5);
                if ((lVar16 != 0) &&
                   (Merger_MergeBoard_View_MergeBoardSelectorView__SetSelectedItem(lVar16,uVar6),
                   *(long *)(lVar15 + 0x48) != 0)) {
                  Merger_MergeBoard_View_MergeBoardSelectorView__Show();
                  goto LAB_06b3bb78;
                }
              }
            }
          }
          goto LAB_06b3bbb4;
        }
      }
LAB_06b3bb78:
      Merger_MergeBoard_View_MergeBoardView__ResetItemCombinerVisualPresentation(lVar15);
      puVar20 = (undefined8 *)(lVar15 + 0x90);
      *puVar20 = 0;
      uVar10 = 0;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar20 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar20 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auVar29._8_8_ = uVar10;
      auVar29._0_8_ = puVar20;
      return auVar29;
    }
  }
LAB_06b3bbb4:
  lVar15 = func_0x03280cac();
  uVar18 = uVar17;
  if ((bRam0000000007e2a547 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f5e0);
    func_0x03280a18(PTR_DAT_0782f770);
    func_0x03280a18(PTR_DAT_0782f5e8);
    func_0x03280a18(PTR_DAT_0782f5f0);
    func_0x03280a18(PTR_DAT_0782f5f8);
    func_0x03280a18(PTR_DAT_0782f608);
    bRam0000000007e2a547 = 1;
  }
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  if (*(long *)(lVar15 + 0x30) != 0) {
    iVar8 = func_0x04f35808(*(long *)(lVar15 + 0x30),*(undefined8 *)PTR_DAT_0782f770);
    puVar24 = PTR_DAT_0782f5f0;
    puVar5 = PTR_DAT_0782f5e8;
    if (iVar8 == 0) {
      lVar15 = 0;
      uVar10 = extraout_x1;
      goto LAB_06b3bd40;
    }
    if (*(long *)(lVar15 + 0x30) != 0) {
      func_0x04f35f90(&uStack_1b0,*(long *)(lVar15 + 0x30),*(undefined8 *)PTR_DAT_0782f5e0);
      puVar4 = PTR_DAT_0774ee08;
      lVar15 = 0;
      fVar28 = 3.4028235e+38;
      while( true ) {
        fVar26 = (float)uVar18;
        uVar18 = func_0x05147e9c(&uStack_1b0,*(undefined8 *)puVar24);
        lVar16 = lStack_198;
        if ((uVar18 & 1) == 0) break;
        if (lStack_198 == 0) {
          func_0x03280cac();
          plVar13 = (long *)puVar5;
          goto LAB_06b3bd6c;
        }
        fVar25 = (float)func_0x06fe9aec(lStack_198,0);
        if (cRam0000000007e136da == '\0') {
          func_0x03280a18(puVar4);
          cRam0000000007e136da = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        fVar26 = (float)uVar17 - fVar26;
        fVar26 = fVar26 * fVar26;
        uVar18 = (ulong)(uint)fVar26;
        fVar26 = SQRT((extraout_s0 - fVar25) * (extraout_s0 - fVar25) + fVar26);
        if (fVar26 < fVar28) {
          lVar15 = lVar16;
          fVar28 = fVar26;
        }
      }
      func_0x05147fc0(&uStack_1b0,*(undefined8 *)puVar5);
      uVar10 = extraout_x1_00;
      goto LAB_06b3bd40;
    }
  }
LAB_06b3bd6c:
  auVar32 = func_0x03280cac();
  if (auVar32._8_4_ == 1) {
    plVar21 = (long *)func_0x072ce910(auVar32._0_8_);
    lVar16 = *plVar21;
    func_0x072ce920();
    func_0x05147fc0(&uStack_1b0,*plVar13);
    uVar10 = extraout_x1_01;
    if (lVar16 == 0) {
LAB_06b3bd40:
      auVar31._8_8_ = uVar10;
      auVar31._0_8_ = lVar15;
      return auVar31;
    }
    func_0x03280ca4(lVar16);
  }
  func_0x05147fc0(&uStack_1b0,*plVar13);
  func_0x03365958(auVar32._0_8_);
  func_0x03280ca4(0);
  auVar32 = func_0x02f09514();
  auVar30 = func_0x057da5fc(auVar32._0_8_,0);
  *(int *)(auVar32._0_8_ + 0x10) = auVar32._8_4_;
  return auVar30;
}

