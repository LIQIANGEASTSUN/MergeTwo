/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3B63C; Merger.MergeBoard.View.MergeBoardView.ResetDraggedItem; status ok */


/* WARNING: Possible PIC construction at 0x06b3bb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b3bb90) */

undefined1  [16]
Merger_MergeBoard_View_MergeBoardView__ResetDraggedItem
          (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  float extraout_s0;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  auVar26._8_8_ = param_4;
  auVar26._0_8_ = param_3;
  if ((bRam0000000007e2a4f7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    auVar26 = func_0x03280a18(PTR_DAT_077c1d88);
    bRam0000000007e2a4f7 = 1;
  }
  puVar5 = PTR_DAT_077c0858;
  puVar16 = (undefined8 *)(param_3 + 0x88);
  plVar17 = (long *)*puVar16;
  if (plVar17 == (long *)0x0) {
    return auVar26;
  }
  lVar12 = *plVar17;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
        goto LAB_06b3b6e8;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  param_5 = 3;
  puVar9 = (undefined8 *)func_0x03256b10(plVar17);
LAB_06b3b6e8:
  plVar17 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
  plVar18 = (long *)*puVar16;
  if (plVar18 != (long *)0x0) {
    lVar12 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_06b3b750;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    param_5 = 3;
    puVar9 = (undefined8 *)func_0x03256b10(plVar18);
LAB_06b3b750:
    plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
    puVar5 = PTR_DAT_077c1d88;
    if (plVar18 != (long *)0x0) {
      lVar12 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x5f) * 0x10 + 0x138);
            goto LAB_06b3b7bc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c1d88,0x5f);
LAB_06b3b7bc:
      param_5 = puVar9[1];
      (*(code *)*puVar9)(plVar18,0);
      if (plVar17 != (long *)0x0) {
        lVar12 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x6b) * 0x10 + 0x138);
              goto LAB_06b3b820;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar5,0x6b);
LAB_06b3b820:
        (*(code *)*puVar9)(plVar17,0,puVar9[1]);
        *puVar16 = 0;
        goto SUB_032809c4;
      }
    }
  }
  auVar26 = func_0x03280cac();
  plVar18 = auVar26._8_8_;
  lVar12 = auVar26._0_8_;
  plVar17 = (long *)0x7e2a000;
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
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  if ((param_5 != 0) && (plVar18 != (long *)0x0)) {
    lVar13 = *plVar18;
    uVar23 = *(undefined4 *)(param_5 + 0x104);
    uVar22 = (ulong)*(uint *)(param_5 + 0x108);
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c0858) {
          puVar16 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_06b3b948;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c0858,3);
LAB_06b3b948:
    plVar10 = (long *)(*(code *)*puVar16)(plVar18,puVar16[1]);
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar16 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x73) * 0x10 + 0x138);
            goto LAB_06b3b9b4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c1d88,0x73);
LAB_06b3b9b4:
      uVar14 = (*(code *)*puVar16)(plVar10,puVar16[1]);
      if ((uVar14 & 1) == 0) {
        plVar17 = plVar10;
        if (*(long *)(lVar12 + 0x30) == 0) goto LAB_06b3bbb4;
        plVar17 = (long *)func_0x06fdbe94(*(long *)(lVar12 + 0x30),0);
        uVar11 = func_0x07263114(param_5,0);
        if (*(int *)(*(long *)PTR_DAT_0776bdc8 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0776bdc8);
          if (plVar17 != (long *)0x0) goto LAB_06b3ba00;
LAB_06b3ba28:
          plVar10 = (long *)0x0;
        }
        else {
          if (plVar17 == (long *)0x0) goto LAB_06b3ba28;
LAB_06b3ba00:
          plVar10 = plVar17;
          if (*plVar17 != *(long *)PTR_DAT_077502a0) {
            plVar10 = (long *)0x0;
          }
        }
        uVar14 = func_0x072369e0(uVar23,plVar10,uVar11,&uStack_78,0);
        if ((uVar14 & 1) != 0) {
          lVar13 = *plVar18;
          lVar19 = *(long *)(lVar12 + 0x30);
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar16 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                param_2 = uVar22;
                goto LAB_06b3ba9c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar5,1);
          param_2 = uVar22;
LAB_06b3ba9c:
          uVar11 = (*(code *)*puVar16)(plVar18,puVar16[1]);
          uVar11 = Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__GetTransformForPosition
                             (lVar19,uVar11,0);
          if ((lVar19 != 0) &&
             (uVar14 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                                 (lVar19,uVar11), uStack_80 = uVar14, *(long *)(lVar12 + 0x30) != 0)
             ) {
            param_2 = uStack_78 >> 0x20;
            uVar11 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition
                               (uStack_78 & 0xffffffff);
            if (*(long *)(lVar12 + 0x30) != 0) {
              uStack_88 = Merger_MergeBoard_View_Layout_MergeBoardLayout__GetIndexForTransform
                                    (*(long *)(lVar12 + 0x30),uVar11);
              puVar5 = PTR_DAT_07763678;
              if (((uVar14 & 0xff) == 0) || ((uStack_88 & 0xff) == 0)) goto LAB_06b3bb78;
              plVar17 = *(long **)(lVar12 + 0x28);
              uVar23 = func_0x0437b6f8(&uStack_80,*(undefined8 *)PTR_DAT_07763678);
              uVar7 = func_0x0437b6f8(&uStack_88,*(undefined8 *)puVar5);
              if ((plVar17 != (long *)0x0) && (plVar17[0xd] != 0)) {
                func_0x06b9b490(plVar17[0xd],uVar23,uVar7,0);
                lVar13 = *(long *)(lVar12 + 0x48);
                uVar23 = func_0x0437b6f8(&uStack_88,*(undefined8 *)puVar5);
                if ((lVar13 != 0) &&
                   (Merger_MergeBoard_View_MergeBoardSelectorView__SetSelectedItem(lVar13,uVar23),
                   *(long *)(lVar12 + 0x48) != 0)) {
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
      func_0x06b3b1bc(lVar12);
      puVar16 = (undefined8 *)(lVar12 + 0x90);
      *puVar16 = 0;
SUB_032809c4:
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar16 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auVar25._8_8_ = 0;
      auVar25._0_8_ = puVar16;
      return auVar25;
    }
  }
LAB_06b3bbb4:
  lVar12 = func_0x03280cac();
  uVar14 = param_2;
  if ((bRam0000000007e2a547 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f5e0);
    func_0x03280a18(PTR_DAT_0782f770);
    func_0x03280a18(PTR_DAT_0782f5e8);
    func_0x03280a18(PTR_DAT_0782f5f0);
    func_0x03280a18(PTR_DAT_0782f5f8);
    func_0x03280a18(PTR_DAT_0782f608);
    bRam0000000007e2a547 = 1;
  }
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar12 + 0x30) != 0) {
    iVar8 = func_0x04f35808(*(long *)(lVar12 + 0x30),*(undefined8 *)PTR_DAT_0782f770);
    puVar6 = PTR_DAT_0782f5f0;
    puVar5 = PTR_DAT_0782f5e8;
    if (iVar8 == 0) {
      lVar12 = 0;
      uVar11 = extraout_x1;
      goto LAB_06b3bd40;
    }
    if (*(long *)(lVar12 + 0x30) != 0) {
      func_0x04f35f90(&uStack_130,*(long *)(lVar12 + 0x30),*(undefined8 *)PTR_DAT_0782f5e0);
      puVar4 = PTR_DAT_0774ee08;
      lVar12 = 0;
      fVar24 = 3.4028235e+38;
      while( true ) {
        fVar21 = (float)uVar14;
        uVar14 = func_0x05147e9c(&uStack_130,*(undefined8 *)puVar6);
        lVar13 = lStack_118;
        if ((uVar14 & 1) == 0) break;
        if (lStack_118 == 0) {
          func_0x03280cac();
          plVar17 = (long *)puVar5;
          goto LAB_06b3bd6c;
        }
        fVar20 = (float)func_0x06fe9aec(lStack_118,0);
        if (cRam0000000007e136da == '\0') {
          func_0x03280a18(puVar4);
          cRam0000000007e136da = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        fVar21 = (float)param_2 - fVar21;
        fVar21 = fVar21 * fVar21;
        uVar14 = (ulong)(uint)fVar21;
        fVar21 = SQRT((extraout_s0 - fVar20) * (extraout_s0 - fVar20) + fVar21);
        if (fVar21 < fVar24) {
          lVar12 = lVar13;
          fVar24 = fVar21;
        }
      }
      func_0x05147fc0(&uStack_130,*(undefined8 *)puVar5);
      uVar11 = extraout_x1_00;
      goto LAB_06b3bd40;
    }
  }
LAB_06b3bd6c:
  auVar28 = func_0x03280cac();
  if (auVar28._8_4_ == 1) {
    plVar18 = (long *)func_0x072ce910(auVar28._0_8_);
    lVar13 = *plVar18;
    func_0x072ce920();
    func_0x05147fc0(&uStack_130,*plVar17);
    uVar11 = extraout_x1_01;
    if (lVar13 == 0) {
LAB_06b3bd40:
      auVar27._8_8_ = uVar11;
      auVar27._0_8_ = lVar12;
      return auVar27;
    }
    func_0x03280ca4(lVar13);
  }
  func_0x05147fc0(&uStack_130,*plVar17);
  func_0x03365958(auVar28._0_8_);
  func_0x03280ca4(0);
  auVar28 = func_0x02f09514();
  auVar26 = func_0x057da5fc(auVar28._0_8_,0);
  *(int *)(auVar28._0_8_ + 0x10) = auVar28._8_4_;
  return auVar26;
}

