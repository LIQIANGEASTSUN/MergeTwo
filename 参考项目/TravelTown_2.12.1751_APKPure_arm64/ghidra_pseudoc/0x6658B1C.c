/* Ghidra 12.1.2 native pseudocode; RVA 0x6658B1C; MergeEngine.ECS.Systems.Board.BoardQueueSystem.remove_ItemAddedToBoard; status ok */


void MergeEngine_ECS_Systems_Board_BoardQueueSystem__remove_ItemAddedToBoard
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  code **ppcVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *unaff_x25;
  undefined *puVar21;
  undefined *unaff_x26;
  undefined *puVar22;
  undefined *unaff_x27;
  undefined *puVar23;
  code *pcVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  code *apcStack_80 [2];
  undefined8 auStack_70 [2];
  
  if ((bRam0000000007e280a2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    bRam0000000007e280a2 = 1;
  }
  puVar19 = PTR_DAT_0774e758;
  lVar12 = *(long *)(param_1 + 0xf0);
  while ((plVar6 = (long *)func_0x057ddd18(lVar12,param_2,0), plVar6 == (long *)0x0 ||
         (*plVar6 == *(long *)puVar19))) {
    lVar7 = func_0x032dd140((long *)(param_1 + 0xf0),plVar6,lVar12);
    bVar5 = lVar12 == lVar7;
    lVar12 = lVar7;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x03281048(plVar6);
  lVar12 = auVar25._8_8_;
  auStack_70[0] = 0x6758bb8;
  if ((bRam0000000007e2810c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1518);
    bRam0000000007e2810c = 1;
  }
  puVar19 = PTR_DAT_077f1518;
  plVar6 = (long *)(auVar25._0_8_ + 0x80);
  lVar7 = *plVar6;
  do {
    lVar8 = func_0x057ddd18(lVar7,lVar12,0);
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      puVar17 = *(undefined **)puVar19;
      lVar9 = func_0x03280b90(lVar8,puVar17);
      if (lVar9 == 0) {
        auVar26 = func_0x03281048(lVar8,puVar17);
        lVar9 = auVar26._0_8_;
        ppcVar3 = apcStack_80;
        apcStack_80[0] = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__GameStateChanged;
        if (auVar26._8_4_ == 0) {
          if (*(char *)(lVar9 + 0xc0) != '\0') {
            return;
          }
          if (*(long *)(lVar9 + 0x88) != 0) {
            *(undefined1 *)(*(long *)(lVar9 + 0x88) + 0x29) = 0;
            return;
          }
        }
        else if (*(long *)(lVar9 + 0x88) != 0) {
          *(undefined1 *)(*(long *)(lVar9 + 0x88) + 0x29) = 1;
          ppcVar3 = (code **)auStack_70;
          pcVar24 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__GameStateChanged;
          break;
        }
        pcVar24 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__FinishHinting;
        lVar9 = func_0x03280cac();
        break;
      }
    }
    lVar8 = func_0x032dd140(plVar6,lVar9,lVar7);
    bVar5 = lVar7 == lVar8;
    lVar7 = lVar8;
    if (bVar5) {
      return;
    }
  } while( true );
code_r0x06758ca8:
  *(code **)((long)ppcVar3 + -0x50) = pcVar24;
  *(undefined **)((long)ppcVar3 + -0x48) = unaff_x27;
  *(undefined **)((long)ppcVar3 + -0x40) = unaff_x26;
  *(undefined **)((long)ppcVar3 + -0x38) = unaff_x25;
  *(undefined **)((long)ppcVar3 + -0x30) = puVar19;
  *(undefined **)((long)ppcVar3 + -0x28) = puVar17;
  *(long *)((long)ppcVar3 + -0x20) = lVar8;
  *(long *)((long)ppcVar3 + -0x18) = lVar7;
  *(long **)((long)ppcVar3 + -0x10) = plVar6;
  *(long *)((long)ppcVar3 + -8) = lVar12;
  plVar6 = (long *)0x7e28000;
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
  lVar12 = *(long *)(lVar9 + 0x88);
  puVar18 = puVar17;
  puVar20 = puVar19;
  puVar21 = unaff_x25;
  puVar22 = unaff_x26;
  puVar23 = unaff_x27;
  if (lVar12 == 0) goto LAB_0675904c;
  if (*(char *)(lVar12 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar12 + 0x28) = 0;
  lVar12 = func_0x03eb6ac8(lVar9,*(undefined8 *)puVar1);
  if (lVar12 == 0) goto LAB_0675904c;
  plVar6 = (long *)func_0x04545bc8(lVar12,*(undefined8 *)PTR_DAT_07807810);
  puVar20 = PTR_DAT_07807808;
  puVar21 = PTR_DAT_077d75b8;
  puVar23 = PTR_DAT_077cc678;
  puVar22 = PTR_DAT_0777bfa0;
  puVar18 = PTR_DAT_0774e8e0;
  if (plVar6 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
  do {
    do {
      lVar12 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar18) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06758df8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar18,0);
LAB_06758df8:
      uVar13 = (*(code *)*puVar10)(plVar6,puVar10[1]);
      if ((uVar13 & 1) == 0) {
        lVar7 = 0;
        iVar15 = 5;
        iVar2 = 5;
        if (plVar6 == (long *)0x0) goto LAB_06758f98;
        goto LAB_06758f38;
      }
      lVar12 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar20) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06758e54;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar20,0);
LAB_06758e54:
      lVar7 = (*(code *)*puVar10)(plVar6,puVar10[1]);
      if (lVar7 == 0) {
        func_0x03280cac();
        goto LAB_0675904c;
      }
    } while (*(char *)(lVar7 + 0x58) == '\0');
    *(undefined1 *)(lVar7 + 0x58) = 0;
    *(undefined2 *)(lVar7 + 0x65) = 0;
    lVar12 = func_0x03ced81c(lVar7,*(undefined8 *)puVar21);
  } while (((*(char *)(lVar7 + 0x67) != '\0') ||
           (lVar8 = func_0x03ced81c(lVar7,*(undefined8 *)puVar22), lVar12 == 0)) || (lVar8 != 0));
  plVar11 = *(long **)(lVar9 + 0x40);
  if (plVar11 == (long *)0x0) goto LAB_06759050;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
  lVar7 = 0;
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar16 = *(undefined8 *)(lVar12 + 0x30);
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar23) {
          puVar10 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
          goto LAB_06758f18;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar23,0x23);
LAB_06758f18:
    (*(code *)*puVar10)(plVar11,uVar16,puVar10[1]);
    goto LAB_06758dac;
  }
  do {
    func_0x03280cac();
    puVar17 = puVar18;
    puVar19 = puVar20;
    unaff_x25 = puVar21;
    unaff_x26 = puVar22;
    unaff_x27 = puVar23;
LAB_06759058:
    puVar23 = unaff_x27;
    puVar22 = unaff_x26;
    puVar21 = unaff_x25;
    puVar20 = puVar19;
    puVar18 = puVar17;
    func_0x03280cac();
    do {
      auVar26 = func_0x03280ca4(lVar7);
      lVar8 = auVar26._0_8_;
      if (auVar26._8_4_ != 1) {
        lVar7 = 0;
        if (plVar6 == (long *)0x0) goto LAB_06759120;
        lVar12 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_067590f8;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_067590e0;
      }
      plVar11 = (long *)func_0x072ce910(lVar8);
      lVar7 = *plVar11;
      func_0x072ce920();
      iVar15 = 0;
      iVar2 = 0;
      if (plVar6 != (long *)0x0) {
LAB_06758f38:
        iVar15 = iVar2;
        lVar12 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06758f8c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
        (*(code *)*puVar10)(plVar6,puVar10[1]);
      }
LAB_06758f98:
    } while (lVar7 != 0);
    if ((iVar15 != 5) && (iVar15 != 0)) {
      return;
    }
    if (*(long *)(lVar9 + 0x40) != 0) {
      plVar11 = *(long **)(*(long *)(lVar9 + 0x40) + 0x40);
      lVar9 = 0;
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_06758ff0;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_06758fd8;
      }
    }
LAB_0675904c:
    func_0x03280cac();
LAB_06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar10 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
LAB_06759120:
  func_0x03365958(lVar8);
  func_0x03280ca4(0);
  lVar12 = func_0x02f09514();
  *(code **)((long)ppcVar3 + -0x60) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  if (*(long *)(lVar12 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar12 + 0x88) + 0x20) = 0;
    return;
  }
  lVar12 = func_0x03280cac();
  *(code **)((long)ppcVar3 + -0x70) = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped;
  if (*(long *)(lVar12 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar12 + 0x88) + 0x20) = 0;
    return;
  }
  lVar12 = func_0x03280cac();
  *(code **)((long)ppcVar3 + -0x80) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragStarted;
  *(long *)((long)ppcVar3 + -0x78) = lVar9;
  MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__FinishHinting();
  if (*(long *)(lVar12 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(lVar12 + 0x88) + 0x29) = 1;
    return;
  }
  lVar9 = func_0x03280cac();
  puVar4 = (undefined8 *)((long)ppcVar3 + -0x90);
  ppcVar3 = (code **)((long)ppcVar3 + -0x90);
  *puVar4 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragEnded;
  if (*(char *)(lVar9 + 0xc0) != '\0') {
    return;
  }
  if (*(long *)(lVar9 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(lVar9 + 0x88) + 0x29) = 0;
    return;
  }
  pcVar24 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemMerged;
  lVar9 = func_0x03280cac();
  puVar17 = puVar18;
  puVar19 = puVar20;
  unaff_x25 = puVar21;
  unaff_x26 = puVar22;
  unaff_x27 = puVar23;
  goto code_r0x06758ca8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07807800) {
      puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
      goto LAB_06759028;
    }
  }
LAB_06758ff0:
  puVar10 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07807800,3);
LAB_06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(plVar11,puVar10[1]);
  return;
}

