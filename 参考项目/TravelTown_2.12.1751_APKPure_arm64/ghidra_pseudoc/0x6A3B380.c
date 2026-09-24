/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3B380; Merger.MergeBoard.View.MergeBoardView.ApplyVisualPresentationOnOverlapItems; status ok */


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

undefined8 *
Merger_MergeBoard_View_MergeBoardView__ApplyVisualPresentationOnOverlapItems
          (undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  float extraout_s0;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_28;
  
  uVar16 = param_2;
  if ((bRam0000000007e2a4f6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0782f418);
    func_0x03280a18(PTR_DAT_07763678);
    func_0x03280a18(PTR_DAT_0782f5d8);
    bRam0000000007e2a4f6 = 1;
  }
  lVar18 = *(long *)(param_3 + 0x30);
  if (lVar18 != 0) {
    uVar16 = param_2;
    uVar10 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition(param_1,lVar18)
    ;
    uStack_28 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform(lVar18,uVar10);
    if (*(long *)(param_3 + 0x38) != 0) {
      puVar11 = (undefined8 *)
                Merger_MergeBoard_View_Items_MergeBoardItemsContainer__GetEntityForItemView
                          (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x88));
      puVar5 = PTR_DAT_07763678;
      if (*(long *)(param_3 + 0x28) != 0) {
        uVar10 = func_0x06b32798(*(long *)(param_3 + 0x28));
        uVar7 = func_0x0437b6f8(&uStack_28,*(undefined8 *)puVar5);
        param_5 = 0;
        puVar12 = (undefined8 *)
                  Merger_MergeBoard_Extensions_MergeBoardEntitiesExtensions__GetEntityAtPosition
                            (uVar10,uVar7);
        if ((puVar12 == (undefined8 *)0x0) || (puVar12 == puVar11)) {
          return puVar12;
        }
        if (*(long *)(param_3 + 0x38) != 0) {
          uVar10 = func_0x06b36fa4(*(long *)(param_3 + 0x38),puVar12);
          puVar11 = (undefined8 *)(param_3 + 0x90);
          *puVar11 = uVar10;
          goto SUB_032809c4;
        }
      }
    }
  }
  puVar11 = (undefined8 *)func_0x03280cac();
  puVar12 = puVar11;
  if ((bRam0000000007e2a4f7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    puVar12 = (undefined8 *)func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a4f7 = 1;
  }
  puVar5 = PTR_DAT_077c0858;
  puVar11 = puVar11 + 0x11;
  plVar19 = (long *)*puVar11;
  if (plVar19 == (long *)0x0) {
    return puVar12;
  }
  lVar18 = *plVar19;
  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar12 = (undefined8 *)(lVar18 + (long)(*piVar17 + 3) * 0x10 + 0x138);
        goto LAB_06b3b6e8;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  param_5 = 3;
  puVar12 = (undefined8 *)func_0x03256b10(plVar19);
LAB_06b3b6e8:
  plVar19 = (long *)(*(code *)*puVar12)(plVar19,puVar12[1]);
  plVar20 = (long *)*puVar11;
  if (plVar20 != (long *)0x0) {
    lVar18 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_06b3b750;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    param_5 = 3;
    puVar12 = (undefined8 *)func_0x03256b10(plVar20);
LAB_06b3b750:
    plVar20 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
    puVar5 = PTR_DAT_077c1d88;
    if (plVar20 != (long *)0x0) {
      lVar18 = *plVar20;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar17 + 0x5f) * 0x10 + 0x138);
            goto LAB_06b3b7bc;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b3b7bc:
      param_5 = puVar12[1];
      (*(code *)*puVar12)(plVar20,0);
      if (plVar19 != (long *)0x0) {
        lVar18 = *plVar19;
        uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar17 + 0x6b) * 0x10 + 0x138);
              goto LAB_06b3b820;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)func_0x03256b10(plVar19,*(long *)puVar5,0x6b);
LAB_06b3b820:
        (*(code *)*puVar12)(plVar19,0,puVar12[1]);
        *puVar11 = 0;
        goto SUB_032809c4;
      }
    }
  }
  auVar26 = func_0x03280cac();
  plVar20 = auVar26._8_8_;
  lVar18 = auVar26._0_8_;
  uStack_b0 = 0x6b3b850;
  plVar19 = (long *)0x7e2a000;
  uStack_c0 = param_1;
  uStack_b8 = param_2;
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
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  if ((param_5 == 0) || (plVar20 == (long *)0x0)) goto LAB_06b3bbb4;
  lVar14 = *plVar20;
  uVar7 = *(undefined4 *)(param_5 + 0x104);
  uVar24 = (ulong)*(uint *)(param_5 + 0x108);
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
        goto LAB_06b3b948;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c0858,3);
LAB_06b3b948:
  plVar13 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
  if (plVar13 == (long *)0x0) goto LAB_06b3bbb4;
  lVar14 = *plVar13;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_077c1d88) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0x73) * 0x10 + 0x138);
        goto LAB_06b3b9b4;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077c1d88,0x73);
LAB_06b3b9b4:
  uVar15 = (*(code *)*puVar11)(plVar13,puVar11[1]);
  if ((uVar15 & 1) == 0) {
    plVar19 = plVar13;
    if (*(long *)(lVar18 + 0x30) == 0) goto LAB_06b3bbb4;
    plVar19 = (long *)func_0x06fdbe94(*(long *)(lVar18 + 0x30),0);
    uVar10 = func_0x07263114(param_5,0);
    if (*(int *)(*(long *)PTR_DAT_0776bdc8 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0776bdc8);
      if (plVar19 == (long *)0x0) goto LAB_06b3ba28;
LAB_06b3ba00:
      plVar13 = plVar19;
      if (*plVar19 != *(long *)PTR_DAT_077502a0) {
        plVar13 = (long *)0x0;
      }
    }
    else {
      if (plVar19 != (long *)0x0) goto LAB_06b3ba00;
LAB_06b3ba28:
      plVar13 = (long *)0x0;
    }
    uVar16 = func_0x072369e0(uVar7,plVar13,uVar10,&uStack_c8,0);
    if ((uVar16 & 1) != 0) {
      lVar14 = *plVar20;
      lVar21 = *(long *)(lVar18 + 0x30);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            uVar16 = uVar24;
            goto LAB_06b3ba9c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar20,*(long *)puVar5,1);
      uVar16 = uVar24;
LAB_06b3ba9c:
      uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
      uVar10 = Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__GetTransformForPosition
                         (lVar21,uVar10,0);
      if ((lVar21 == 0) ||
         (uVar15 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                             (lVar21,uVar10), uStack_d0 = uVar15, *(long *)(lVar18 + 0x30) == 0)) {
LAB_06b3bbb4:
        puVar11 = (undefined8 *)func_0x03280cac();
        uVar15 = uVar16;
        if ((bRam0000000007e2a547 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0782f5e0);
          func_0x03280a18(PTR_DAT_0782f770);
          func_0x03280a18(PTR_DAT_0782f5e8);
          func_0x03280a18(PTR_DAT_0782f5f0);
          func_0x03280a18(PTR_DAT_0782f5f8);
          func_0x03280a18(PTR_DAT_0782f608);
          bRam0000000007e2a547 = 1;
        }
        uStack_160 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        puStack_168 = (undefined8 *)0x0;
        uStack_170 = 0;
        if (puVar11[6] != 0) {
          iVar9 = func_0x04f35808(puVar11[6],*(undefined8 *)PTR_DAT_0782f770);
          puVar6 = PTR_DAT_0782f5f0;
          puVar5 = PTR_DAT_0782f5e8;
          if (iVar9 == 0) {
            return (undefined8 *)0x0;
          }
          if (puVar11[6] != 0) {
            func_0x04f35f90(&uStack_180,puVar11[6],*(undefined8 *)PTR_DAT_0782f5e0);
            puVar4 = PTR_DAT_0774ee08;
            puVar11 = (undefined8 *)0x0;
            fVar25 = 3.4028235e+38;
            while( true ) {
              fVar23 = (float)uVar15;
              uVar15 = func_0x05147e9c(&uStack_180,*(undefined8 *)puVar6);
              puVar12 = puStack_168;
              if ((uVar15 & 1) == 0) {
                func_0x05147fc0(&uStack_180,*(undefined8 *)puVar5);
                return puVar11;
              }
              if (puStack_168 == (undefined8 *)0x0) break;
              fVar22 = (float)func_0x06fe9aec(puStack_168,0);
              if (cRam0000000007e136da == '\0') {
                func_0x03280a18(puVar4);
                cRam0000000007e136da = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              fVar23 = (float)uVar16 - fVar23;
              fVar23 = fVar23 * fVar23;
              uVar15 = (ulong)(uint)fVar23;
              fVar23 = SQRT((extraout_s0 - fVar22) * (extraout_s0 - fVar22) + fVar23);
              if (fVar23 < fVar25) {
                puVar11 = puVar12;
                fVar25 = fVar23;
              }
            }
            func_0x03280cac();
            plVar19 = (long *)puVar5;
          }
        }
        auVar27 = func_0x03280cac();
        if (auVar27._8_4_ == 1) {
          plVar20 = (long *)func_0x072ce910(auVar27._0_8_);
          lVar18 = *plVar20;
          func_0x072ce920();
          func_0x05147fc0(&uStack_180,*plVar19);
          if (lVar18 == 0) {
            return puVar11;
          }
          func_0x03280ca4(lVar18);
        }
        func_0x05147fc0(&uStack_180,*plVar19);
        func_0x03365958(auVar27._0_8_);
        func_0x03280ca4(0);
        auVar27 = func_0x02f09514();
        puVar11 = (undefined8 *)func_0x057da5fc(auVar27._0_8_,0);
        *(int *)(auVar27._0_8_ + 0x10) = auVar27._8_4_;
        return puVar11;
      }
      uVar16 = uStack_c8 >> 0x20;
      uVar10 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition
                         (uStack_c8 & 0xffffffff);
      if (*(long *)(lVar18 + 0x30) == 0) goto LAB_06b3bbb4;
      uStack_d8 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                            (*(long *)(lVar18 + 0x30),uVar10);
      puVar5 = PTR_DAT_07763678;
      if (((uVar15 & 0xff) != 0) && ((uStack_d8 & 0xff) != 0)) {
        plVar19 = *(long **)(lVar18 + 0x28);
        uVar7 = func_0x0437b6f8(&uStack_d0,*(undefined8 *)PTR_DAT_07763678);
        uVar8 = func_0x0437b6f8(&uStack_d8,*(undefined8 *)puVar5);
        if ((plVar19 == (long *)0x0) || (plVar19[0xd] == 0)) goto LAB_06b3bbb4;
        func_0x06b9b490(plVar19[0xd],uVar7,uVar8,0);
        lVar14 = *(long *)(lVar18 + 0x48);
        uVar7 = func_0x0437b6f8(&uStack_d8,*(undefined8 *)puVar5);
        if ((lVar14 == 0) ||
           (Merger_MergeBoard_View_MergeBoardSelectorView__SetSelectedItem(lVar14,uVar7),
           *(long *)(lVar18 + 0x48) == 0)) goto LAB_06b3bbb4;
        Merger_MergeBoard_View_MergeBoardSelectorView__Show();
      }
    }
  }
  func_0x06b3b1bc(lVar18);
  puVar11 = (undefined8 *)(lVar18 + 0x90);
  *puVar11 = 0;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar11;
}

