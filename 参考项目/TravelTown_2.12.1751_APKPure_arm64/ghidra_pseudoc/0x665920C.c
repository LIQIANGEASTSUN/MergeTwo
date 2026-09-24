/* Ghidra 12.1.2 native pseudocode; RVA 0x665920C; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.CheckStillNeedHinting; status ok */


void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__CheckStillNeedHinting(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar13;
  int iVar14;
  undefined8 unaff_x22;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 unaff_x23;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 unaff_x24;
  undefined *puVar20;
  undefined *unaff_x25;
  undefined *puVar21;
  undefined *unaff_x26;
  undefined *puVar22;
  undefined *unaff_x27;
  code *unaff_x30;
  code *pcVar23;
  undefined1 auVar24 [12];
  
  while( true ) {
    lVar9 = param_1;
    *(code **)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    unaff_x20 = 0x7e28000;
    if ((bRam0000000007e28058 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07807818);
      func_0x03280a18(PTR_DAT_077e7588);
      func_0x03280a18(PTR_DAT_077e7568);
      func_0x03280a18(PTR_DAT_07807820);
      func_0x03280a18(PTR_DAT_07807828);
      bRam0000000007e28058 = 1;
    }
    puVar16 = PTR_DAT_07807828;
    lVar10 = *(long *)(lVar9 + 0x88);
    if (lVar10 != 0) break;
    unaff_x30 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__EntityRemoved;
    param_1 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar9;
  }
  if (*(char *)(lVar10 + 0x28) == '\0') {
    *(undefined8 *)(lVar10 + 0x20) = 0;
  }
  else {
    uVar7 = func_0x03eb6ac8(lVar9,*(undefined8 *)PTR_DAT_077e7568);
    lVar10 = *(long *)puVar16;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c(lVar10);
      lVar10 = *(long *)puVar16;
    }
    puVar18 = PTR_DAT_07807818;
    lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar13 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c(lVar10);
        lVar10 = *(long *)puVar16;
      }
      uVar15 = **(undefined8 **)(lVar10 + 0xb8);
      lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7588);
      func_0x05355fbc(lVar13,uVar15,*(undefined8 *)PTR_DAT_07807820,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar16 + 0xb8) + 8);
      *plVar8 = lVar13;
      func_0x032809c4(plVar8,lVar13);
    }
    iVar3 = func_0x03d3bb0c(uVar7,lVar13,*(undefined8 *)puVar18);
    if (iVar3 < 2) {
      plVar8 = *(long **)((long)register0x00000008 + -0x10);
      lVar10 = *(long *)((long)register0x00000008 + -8);
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x20);
      lVar13 = *(long *)((long)register0x00000008 + -0x18);
      pcVar23 = *(code **)((long)register0x00000008 + -0x40);
      puVar16 = *(undefined **)((long)register0x00000008 + -0x28);
      puVar18 = *(undefined **)((long)register0x00000008 + -0x30);
code_r0x06758ca8:
      *(code **)((long)register0x00000008 + -0x50) = pcVar23;
      *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
      *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
      *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
      *(undefined **)((long)register0x00000008 + -0x30) = puVar18;
      *(undefined **)((long)register0x00000008 + -0x28) = puVar16;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar7;
      *(long *)((long)register0x00000008 + -0x18) = lVar13;
      *(long **)((long)register0x00000008 + -0x10) = plVar8;
      *(long *)((long)register0x00000008 + -8) = lVar10;
      plVar8 = (long *)0x7e28000;
      if ((bRam0000000007e28057 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777bfa0);
        func_0x03280a18(PTR_DAT_077d75b8);
        func_0x03280a18(PTR_DAT_07807800);
        func_0x03280a18(PTR_DAT_077cc678);
        func_0x03280a18(PTR_DAT_0774e8c8);
        func_0x03280a18(PTR_DAT_07807808);
        func_0x03280a18(PTR_DAT_0774e8e0);
        func_0x03280a18(PTR_DAT_07807810);
        func_0x03280a18(PTR_DAT_077e7568);
        bRam0000000007e28057 = 1;
      }
      puVar1 = PTR_DAT_077e7568;
      lVar10 = *(long *)(lVar9 + 0x88);
      puVar17 = puVar16;
      puVar19 = puVar18;
      puVar20 = unaff_x25;
      puVar21 = unaff_x26;
      puVar22 = unaff_x27;
      if (lVar10 == 0) goto LAB_0675904c;
      if (*(char *)(lVar10 + 0x28) == '\0') {
        return;
      }
      *(undefined1 *)(lVar10 + 0x28) = 0;
      lVar10 = func_0x03eb6ac8(lVar9,*(undefined8 *)puVar1);
      if (lVar10 == 0) goto LAB_0675904c;
      plVar8 = (long *)func_0x04545bc8(lVar10,*(undefined8 *)PTR_DAT_07807810);
      puVar19 = PTR_DAT_07807808;
      puVar20 = PTR_DAT_077d75b8;
      puVar22 = PTR_DAT_077cc678;
      puVar21 = PTR_DAT_0777bfa0;
      puVar17 = PTR_DAT_0774e8e0;
      if (plVar8 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
      do {
        do {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar17) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06758df8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar17,0);
LAB_06758df8:
          uVar11 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          if ((uVar11 & 1) == 0) {
            lVar13 = 0;
            iVar14 = 5;
            iVar3 = 5;
            if (plVar8 == (long *)0x0) goto LAB_06758f98;
            goto LAB_06758f38;
          }
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar19) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06758e54;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar19,0);
LAB_06758e54:
          lVar13 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          if (lVar13 == 0) {
            func_0x03280cac();
            goto LAB_0675904c;
          }
        } while (*(char *)(lVar13 + 0x58) == '\0');
        *(undefined1 *)(lVar13 + 0x58) = 0;
        *(undefined2 *)(lVar13 + 0x65) = 0;
        lVar10 = func_0x03ced81c(lVar13,*(undefined8 *)puVar20);
      } while (((*(char *)(lVar13 + 0x67) != '\0') ||
               (lVar5 = func_0x03ced81c(lVar13,*(undefined8 *)puVar21), lVar10 == 0)) ||
              (lVar5 != 0));
      plVar6 = *(long **)(lVar9 + 0x40);
      if (plVar6 == (long *)0x0) goto LAB_06759050;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      lVar13 = 0;
      if (plVar6 != (long *)0x0) {
        lVar13 = *plVar6;
        uVar7 = *(undefined8 *)(lVar10 + 0x30);
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar22) {
              puVar4 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
              goto LAB_06758f18;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar22,0x23);
LAB_06758f18:
        (*(code *)*puVar4)(plVar6,uVar7,puVar4[1]);
        goto LAB_06758dac;
      }
      do {
        func_0x03280cac();
        puVar16 = puVar17;
        puVar18 = puVar19;
        unaff_x25 = puVar20;
        unaff_x26 = puVar21;
        unaff_x27 = puVar22;
LAB_06759058:
        puVar22 = unaff_x27;
        puVar21 = unaff_x26;
        puVar20 = unaff_x25;
        puVar19 = puVar18;
        puVar17 = puVar16;
        func_0x03280cac();
        do {
          auVar24 = func_0x03280ca4(lVar13);
          uVar7 = auVar24._0_8_;
          if (auVar24._8_4_ != 1) {
            lVar13 = 0;
            if (plVar8 == (long *)0x0) goto LAB_06759120;
            lVar10 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 == 0) goto LAB_067590f8;
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_067590e0;
          }
          plVar6 = (long *)func_0x072ce910(uVar7);
          lVar13 = *plVar6;
          func_0x072ce920();
          iVar14 = 0;
          iVar3 = 0;
          if (plVar8 != (long *)0x0) {
LAB_06758f38:
            iVar14 = iVar3;
            lVar10 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
                  puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_06758f8c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
            (*(code *)*puVar4)(plVar8,puVar4[1]);
          }
LAB_06758f98:
        } while (lVar13 != 0);
        if ((iVar14 != 5) && (iVar14 != 0)) {
          return;
        }
        if (*(long *)(lVar9 + 0x40) != 0) {
          plVar6 = *(long **)(*(long *)(lVar9 + 0x40) + 0x40);
          lVar9 = 0;
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 == 0) goto LAB_06758ff0;
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_06758fd8;
          }
        }
LAB_0675904c:
        func_0x03280cac();
LAB_06759050:
        func_0x03280cac();
      } while( true );
    }
  }
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_06759120:
  func_0x03365958(uVar7);
  func_0x03280ca4(0);
  lVar10 = func_0x02f09514();
  *(code **)((long)register0x00000008 + -0x60) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  if (*(long *)(lVar10 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar10 + 0x88) + 0x20) = 0;
    return;
  }
  lVar10 = func_0x03280cac();
  *(code **)((long)register0x00000008 + -0x70) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped;
  if (*(long *)(lVar10 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar10 + 0x88) + 0x20) = 0;
    return;
  }
  lVar10 = func_0x03280cac();
  *(code **)((long)register0x00000008 + -0x80) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragStarted;
  *(long *)((long)register0x00000008 + -0x78) = lVar9;
  MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__FinishHinting();
  if (*(long *)(lVar10 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(lVar10 + 0x88) + 0x29) = 1;
    return;
  }
  lVar9 = func_0x03280cac();
  puVar2 = (undefined8 *)((long)register0x00000008 + -0x90);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  *puVar2 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragEnded;
  if (*(char *)(lVar9 + 0xc0) != '\0') {
    return;
  }
  if (*(long *)(lVar9 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(lVar9 + 0x88) + 0x29) = 0;
    return;
  }
  pcVar23 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemMerged;
  lVar9 = func_0x03280cac();
  puVar16 = puVar17;
  puVar18 = puVar19;
  unaff_x25 = puVar20;
  unaff_x26 = puVar21;
  unaff_x27 = puVar22;
  goto code_r0x06758ca8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07807800) {
      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 3) * 0x10 + 0x138);
      goto LAB_06759028;
    }
  }
LAB_06758ff0:
  puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07807800,3);
LAB_06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}

