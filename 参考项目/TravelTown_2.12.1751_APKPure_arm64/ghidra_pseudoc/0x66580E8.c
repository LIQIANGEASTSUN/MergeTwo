/* Ghidra 12.1.2 native pseudocode; RVA 0x66580E8; MergeEngine.ECS.Systems.Board.BoardQueueSystem.add_ItemAddedToBoard; status ok */


/* WARNING: Possible PIC construction at 0x06758420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06758460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067584a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067584e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06758510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067584e4) */
/* WARNING: Removing unreachable block (ram,0x06758508) */
/* WARNING: Removing unreachable block (ram,0x067584a4) */
/* WARNING: Removing unreachable block (ram,0x067584c8) */
/* WARNING: Removing unreachable block (ram,0x06758464) */
/* WARNING: Removing unreachable block (ram,0x06758488) */
/* WARNING: Removing unreachable block (ram,0x06758424) */
/* WARNING: Removing unreachable block (ram,0x06758448) */
/* WARNING: Removing unreachable block (ram,0x06758514) */
/* WARNING: Removing unreachable block (ram,0x0675851c) */
/* WARNING: Removing unreachable block (ram,0x06758560) */
/* WARNING: Removing unreachable block (ram,0x06758574) */
/* WARNING: Removing unreachable block (ram,0x06758590) */
/* WARNING: Removing unreachable block (ram,0x0675859c) */
/* WARNING: Removing unreachable block (ram,0x067585a4) */
/* WARNING: Removing unreachable block (ram,0x067585d8) */
/* WARNING: Removing unreachable block (ram,0x0675861c) */
/* WARNING: Removing unreachable block (ram,0x06758660) */
/* WARNING: Removing unreachable block (ram,0x067586a4) */
/* WARNING: Removing unreachable block (ram,0x067586e0) */
/* WARNING: Removing unreachable block (ram,0x0675871c) */
/* WARNING: Removing unreachable block (ram,0x06758760) */
/* WARNING: Removing unreachable block (ram,0x0675879c) */
/* WARNING: Removing unreachable block (ram,0x067587e8) */
/* WARNING: Removing unreachable block (ram,0x06758824) */
/* WARNING: Removing unreachable block (ram,0x06758844) */
/* WARNING: Removing unreachable block (ram,0x0675886c) */
/* WARNING: Removing unreachable block (ram,0x06758874) */
/* WARNING: Removing unreachable block (ram,0x0675889c) */
/* WARNING: Removing unreachable block (ram,0x06758880) */
/* WARNING: Removing unreachable block (ram,0x0675888c) */
/* WARNING: Removing unreachable block (ram,0x067588ac) */
/* WARNING: Removing unreachable block (ram,0x067588e0) */
/* WARNING: Removing unreachable block (ram,0x04d0ec2c) */
/* WARNING: Removing unreachable block (ram,0x04d0e98c) */
/* WARNING: Removing unreachable block (ram,0x04d0e9ac) */
/* WARNING: Removing unreachable block (ram,0x04d0e9d4) */
/* WARNING: Removing unreachable block (ram,0x04d0e9e0) */
/* WARNING: Removing unreachable block (ram,0x04d0e9fc) */
/* WARNING: Removing unreachable block (ram,0x04d0e9e4) */
/* WARNING: Removing unreachable block (ram,0x04d0ea00) */
/* WARNING: Removing unreachable block (ram,0x04d0ea18) */
/* WARNING: Removing unreachable block (ram,0x04d0e9f8) */
/* WARNING: Removing unreachable block (ram,0x04d0ea2c) */
/* WARNING: Removing unreachable block (ram,0x04d0ea58) */
/* WARNING: Removing unreachable block (ram,0x04d0ea6c) */
/* WARNING: Removing unreachable block (ram,0x04d0ea78) */
/* WARNING: Removing unreachable block (ram,0x04d0ea90) */
/* WARNING: Removing unreachable block (ram,0x04d0eacc) */
/* WARNING: Removing unreachable block (ram,0x04d0eaf4) */
/* WARNING: Removing unreachable block (ram,0x04d0eb08) */
/* WARNING: Removing unreachable block (ram,0x04d0eb14) */
/* WARNING: Removing unreachable block (ram,0x04d0eb2c) */
/* WARNING: Removing unreachable block (ram,0x04d0eb68) */
/* WARNING: Removing unreachable block (ram,0x04d0eb3c) */
/* WARNING: Removing unreachable block (ram,0x04d0eb58) */
/* WARNING: Removing unreachable block (ram,0x04d0eaa0) */
/* WARNING: Removing unreachable block (ram,0x04d0eabc) */

void MergeEngine_ECS_Systems_Board_BoardQueueSystem__add_ItemAddedToBoard
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
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *unaff_x25;
  undefined *puVar22;
  undefined *unaff_x26;
  undefined *puVar23;
  undefined *unaff_x27;
  undefined *puVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  code *apcStack_1f0 [2];
  undefined8 auStack_1e0 [2];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000007e280a1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e758);
    bRam0000000007e280a1 = 1;
  }
  puVar20 = PTR_DAT_0774e758;
  lVar9 = *(long *)(param_1 + 0xf0);
  while ((plVar6 = (long *)func_0x057ddb20(lVar9,param_2,0), plVar6 == (long *)0x0 ||
         (*plVar6 == *(long *)puVar20))) {
    lVar7 = func_0x032dd140((long *)(param_1 + 0xf0),plVar6,lVar9);
    bVar5 = lVar9 == lVar7;
    lVar9 = lVar7;
    if (bVar5) {
      return;
    }
  }
  auVar27 = func_0x03281048(plVar6);
  if ((bRam0000000007e2810b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1518);
    bRam0000000007e2810b = 1;
  }
  puVar20 = PTR_DAT_077f1518;
  plVar6 = (long *)(auVar27._0_8_ + 0x80);
  lVar9 = *plVar6;
  do {
    lVar7 = func_0x057ddb20(lVar9,auVar27._8_8_,0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      puVar18 = *(undefined **)puVar20;
      lVar8 = func_0x03280b90(lVar7,puVar18);
      if (lVar8 == 0) {
        lVar9 = func_0x03281048(lVar7,puVar18);
        puVar23 = PTR_DAT_07807700;
        puVar19 = PTR_DAT_077f1500;
        uStack_b0 = 0x6758234;
        if ((bRam0000000007e28056 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077db230);
          func_0x03280a18(PTR_DAT_07772690);
          func_0x03280a18(PTR_DAT_077f1500);
          func_0x03280a18(PTR_DAT_0777e0f8);
          func_0x03280a18(PTR_DAT_077f1510);
          func_0x03280a18(PTR_DAT_077f1518);
          func_0x03280a18(PTR_DAT_0774e758);
          func_0x03280a18(PTR_DAT_07772718);
          func_0x03280a18(PTR_DAT_07807708);
          func_0x03280a18(PTR_DAT_07807710);
          func_0x03280a18(PTR_DAT_07807718);
          func_0x03280a18(PTR_DAT_07807720);
          func_0x03280a18(PTR_DAT_07807728);
          func_0x03280a18(PTR_DAT_07807730);
          func_0x03280a18(PTR_DAT_07807738);
          func_0x03280a18(PTR_DAT_07807740);
          func_0x03280a18(PTR_DAT_07807700);
          func_0x03280a18(PTR_DAT_07807748);
          func_0x03280a18(PTR_DAT_07807750);
          func_0x03280a18(PTR_DAT_07807758);
          func_0x03280a18(PTR_DAT_07807760);
          func_0x03280a18(PTR_DAT_077726c0);
          func_0x03280a18(PTR_DAT_078077b0);
          func_0x03280a18(PTR_DAT_078077b8);
          func_0x03280a18(PTR_DAT_078077c0);
          func_0x03280a18(PTR_DAT_078077c8);
          func_0x03280a18(PTR_DAT_078077d0);
          func_0x03280a18(PTR_DAT_078077d8);
          func_0x03280a18(PTR_DAT_078077e0);
          func_0x03280a18(PTR_DAT_078077e8);
          func_0x03280a18(PTR_DAT_078077f0);
          func_0x03280a18(PTR_DAT_078077f8);
          bRam0000000007e28056 = 1;
        }
        lVar7 = *(long *)(lVar9 + 0x48);
        uVar10 = func_0x03280ca0(*(undefined8 *)puVar19);
        auVar27._8_8_ = uVar10;
        auVar27._0_8_ = lVar7;
        func_0x0541dfd8(uVar10,lVar9,*(undefined8 *)puVar23,0);
        if (lVar7 == 0) {
          uVar25 = 0x675890c;
          auVar27 = func_0x03280cac();
        }
        else {
          uVar25 = 0x6758424;
          puVar18 = PTR_DAT_07807730;
        }
        uVar14 = auVar27._8_8_;
        puStack_e0 = puVar20;
        puStack_d0 = puVar19;
        uStack_f0 = uVar25;
        puStack_d8 = puVar18;
        uStack_c8 = uVar10;
        lStack_c0 = lVar7;
        lStack_b8 = lVar9;
        if ((bRam0000000007e2806d & 1) == 0) {
          func_0x03280a18(PTR_DAT_077f1500);
          bRam0000000007e2806d = 1;
        }
        puVar20 = PTR_DAT_077f1500;
        plVar6 = (long *)(auVar27._0_8_ + 0x80);
        lVar9 = *plVar6;
        break;
      }
    }
    lVar7 = func_0x032dd140(plVar6,lVar8,lVar9);
    bVar5 = lVar9 == lVar7;
    lVar9 = lVar7;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_06758950:
  lVar7 = func_0x057ddd18(lVar9,uVar14,0);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)puVar20;
    lVar8 = func_0x03280b90(lVar7,uVar10);
    if (lVar8 == 0) {
      auVar27 = func_0x03281048(lVar7,uVar10);
      uVar25 = auVar27._8_8_;
      uStack_130 = 0x67589bc;
      puStack_120 = puVar20;
      uStack_118 = uVar10;
      lStack_110 = lVar7;
      lStack_108 = lVar9;
      plStack_100 = plVar6;
      uStack_f8 = uVar14;
      if ((bRam0000000007e2806f & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1500);
        bRam0000000007e2806f = 1;
      }
      puVar20 = PTR_DAT_077f1500;
      plVar6 = (long *)(auVar27._0_8_ + 0x88);
      lVar9 = *plVar6;
      goto LAB_06758a00;
    }
  }
  lVar7 = func_0x032dd140(plVar6,lVar8,lVar9);
  bVar5 = lVar9 == lVar7;
  lVar9 = lVar7;
  if (bVar5) {
    return;
  }
  goto LAB_06758950;
LAB_06758a00:
  lVar7 = func_0x057ddd18(lVar9,uVar25,0);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)puVar20;
    lVar8 = func_0x03280b90(lVar7,uVar10);
    if (lVar8 == 0) {
      auVar27 = func_0x03281048(lVar7,uVar10);
      uVar14 = auVar27._8_8_;
      uStack_170 = 0x6758a6c;
      puStack_160 = puVar20;
      uStack_158 = uVar10;
      lStack_150 = lVar7;
      lStack_148 = lVar9;
      plStack_140 = plVar6;
      uStack_138 = uVar25;
      if ((bRam0000000007e28071 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1510);
        bRam0000000007e28071 = 1;
      }
      puVar20 = PTR_DAT_077f1510;
      plVar6 = (long *)(auVar27._0_8_ + 0x90);
      lVar9 = *plVar6;
      goto LAB_06758ab0;
    }
  }
  lVar7 = func_0x032dd140(plVar6,lVar8,lVar9);
  bVar5 = lVar9 == lVar7;
  lVar9 = lVar7;
  if (bVar5) {
    return;
  }
  goto LAB_06758a00;
LAB_06758ab0:
  lVar7 = func_0x057ddd18(lVar9,uVar14,0);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    uVar10 = *(undefined8 *)puVar20;
    lVar8 = func_0x03280b90(lVar7,uVar10);
    if (lVar8 == 0) {
      auVar27 = func_0x03281048(lVar7,uVar10);
      uVar25 = auVar27._8_8_;
      uStack_1a0 = 0x6758b1c;
      lStack_190 = lVar7;
      lStack_188 = lVar9;
      plStack_180 = plVar6;
      uStack_178 = uVar14;
      if ((bRam0000000007e280a2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e758);
        bRam0000000007e280a2 = 1;
      }
      puVar18 = PTR_DAT_0774e758;
      plVar6 = (long *)(auVar27._0_8_ + 0xf0);
      lVar9 = *plVar6;
      while ((plVar11 = (long *)func_0x057ddd18(lVar9,uVar25,0), plVar11 == (long *)0x0 ||
             (*plVar11 == *(long *)puVar18))) {
        lVar7 = func_0x032dd140(plVar6,plVar11,lVar9);
        bVar5 = lVar9 == lVar7;
        lVar9 = lVar7;
        if (bVar5) {
          return;
        }
      }
      auVar27 = func_0x03281048(plVar11);
      lVar7 = auVar27._8_8_;
      auStack_1e0[0] = 0x6758bb8;
      puStack_1d0 = puVar20;
      puStack_1c0 = puVar18;
      uStack_1c8 = uVar10;
      lStack_1b8 = lVar9;
      plStack_1b0 = plVar6;
      uStack_1a8 = uVar25;
      if ((bRam0000000007e2810c & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1518);
        bRam0000000007e2810c = 1;
      }
      puVar20 = PTR_DAT_077f1518;
      plVar6 = (long *)(auVar27._0_8_ + 0x80);
      lVar9 = *plVar6;
      do {
        lVar8 = func_0x057ddd18(lVar9,lVar7,0);
        if (lVar8 == 0) {
          lVar12 = 0;
        }
        else {
          puVar18 = *(undefined **)puVar20;
          lVar12 = func_0x03280b90(lVar8,puVar18);
          if (lVar12 == 0) {
            auVar28 = func_0x03281048(lVar8,puVar18);
            lVar12 = auVar28._0_8_;
            ppcVar3 = apcStack_1f0;
            apcStack_1f0[0] = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__GameStateChanged;
            if (auVar28._8_4_ == 0) {
              if (*(char *)(lVar12 + 0xc0) != '\0') {
                return;
              }
              if (*(long *)(lVar12 + 0x88) != 0) {
                *(undefined1 *)(*(long *)(lVar12 + 0x88) + 0x29) = 0;
                return;
              }
            }
            else if (*(long *)(lVar12 + 0x88) != 0) {
              *(undefined1 *)(*(long *)(lVar12 + 0x88) + 0x29) = 1;
              ppcVar3 = (code **)auStack_1e0;
              pcVar26 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__GameStateChanged;
              goto code_r0x06758ca8;
            }
            pcVar26 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__FinishHinting;
            lVar12 = func_0x03280cac();
            goto code_r0x06758ca8;
          }
        }
        lVar8 = func_0x032dd140(plVar6,lVar12,lVar9);
        bVar5 = lVar9 == lVar8;
        lVar9 = lVar8;
        if (bVar5) {
          return;
        }
      } while( true );
    }
  }
  lVar7 = func_0x032dd140(plVar6,lVar8,lVar9);
  bVar5 = lVar9 == lVar7;
  lVar9 = lVar7;
  if (bVar5) {
    return;
  }
  goto LAB_06758ab0;
code_r0x06758ca8:
  *(code **)((long)ppcVar3 + -0x50) = pcVar26;
  *(undefined **)((long)ppcVar3 + -0x48) = unaff_x27;
  *(undefined **)((long)ppcVar3 + -0x40) = unaff_x26;
  *(undefined **)((long)ppcVar3 + -0x38) = unaff_x25;
  *(undefined **)((long)ppcVar3 + -0x30) = puVar20;
  *(undefined **)((long)ppcVar3 + -0x28) = puVar18;
  *(long *)((long)ppcVar3 + -0x20) = lVar8;
  *(long *)((long)ppcVar3 + -0x18) = lVar9;
  *(long **)((long)ppcVar3 + -0x10) = plVar6;
  *(long *)((long)ppcVar3 + -8) = lVar7;
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
  lVar7 = *(long *)(lVar12 + 0x88);
  puVar19 = puVar18;
  puVar21 = puVar20;
  puVar22 = unaff_x25;
  puVar23 = unaff_x26;
  puVar24 = unaff_x27;
  if (lVar7 == 0) goto LAB_0675904c;
  if (*(char *)(lVar7 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar7 + 0x28) = 0;
  lVar7 = func_0x03eb6ac8(lVar12,*(undefined8 *)puVar1);
  if (lVar7 == 0) goto LAB_0675904c;
  plVar6 = (long *)func_0x04545bc8(lVar7,*(undefined8 *)PTR_DAT_07807810);
  puVar21 = PTR_DAT_07807808;
  puVar22 = PTR_DAT_077d75b8;
  puVar24 = PTR_DAT_077cc678;
  puVar23 = PTR_DAT_0777bfa0;
  puVar19 = PTR_DAT_0774e8e0;
  if (plVar6 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
  do {
    do {
      lVar9 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar19) {
            puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06758df8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar19,0);
LAB_06758df8:
      uVar15 = (*(code *)*puVar13)(plVar6,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        lVar9 = 0;
        iVar17 = 5;
        iVar2 = 5;
        if (plVar6 == (long *)0x0) goto LAB_06758f98;
        goto LAB_06758f38;
      }
      lVar9 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar21) {
            puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06758e54;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar21,0);
LAB_06758e54:
      lVar9 = (*(code *)*puVar13)(plVar6,puVar13[1]);
      if (lVar9 == 0) {
        func_0x03280cac();
        goto LAB_0675904c;
      }
    } while (*(char *)(lVar9 + 0x58) == '\0');
    *(undefined1 *)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x65) = 0;
    lVar7 = func_0x03ced81c(lVar9,*(undefined8 *)puVar22);
  } while (((*(char *)(lVar9 + 0x67) != '\0') ||
           (lVar8 = func_0x03ced81c(lVar9,*(undefined8 *)puVar23), lVar7 == 0)) || (lVar8 != 0));
  plVar11 = *(long **)(lVar12 + 0x40);
  if (plVar11 == (long *)0x0) goto LAB_06759050;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
  lVar9 = 0;
  if (plVar11 != (long *)0x0) {
    lVar9 = *plVar11;
    uVar10 = *(undefined8 *)(lVar7 + 0x30);
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar24) {
          puVar13 = (undefined8 *)(lVar9 + (long)(*piVar16 + 0x23) * 0x10 + 0x138);
          goto LAB_06758f18;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar24,0x23);
LAB_06758f18:
    (*(code *)*puVar13)(plVar11,uVar10,puVar13[1]);
    goto LAB_06758dac;
  }
  do {
    func_0x03280cac();
    puVar18 = puVar19;
    puVar20 = puVar21;
    unaff_x25 = puVar22;
    unaff_x26 = puVar23;
    unaff_x27 = puVar24;
LAB_06759058:
    puVar24 = unaff_x27;
    puVar23 = unaff_x26;
    puVar22 = unaff_x25;
    puVar21 = puVar20;
    puVar19 = puVar18;
    func_0x03280cac();
    do {
      auVar28 = func_0x03280ca4(lVar9);
      lVar8 = auVar28._0_8_;
      if (auVar28._8_4_ != 1) {
        lVar9 = 0;
        if (plVar6 == (long *)0x0) goto LAB_06759120;
        lVar7 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar15 == 0) goto LAB_067590f8;
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_067590e0;
      }
      plVar11 = (long *)func_0x072ce910(lVar8);
      lVar9 = *plVar11;
      func_0x072ce920();
      iVar17 = 0;
      iVar2 = 0;
      if (plVar6 != (long *)0x0) {
LAB_06758f38:
        iVar17 = iVar2;
        lVar7 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar13 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06758f8c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
        (*(code *)*puVar13)(plVar6,puVar13[1]);
      }
LAB_06758f98:
    } while (lVar9 != 0);
    if ((iVar17 != 5) && (iVar17 != 0)) {
      return;
    }
    if (*(long *)(lVar12 + 0x40) != 0) {
      plVar11 = *(long **)(*(long *)(lVar12 + 0x40) + 0x40);
      lVar12 = 0;
      if (plVar11 != (long *)0x0) {
        lVar9 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 == 0) goto LAB_06758ff0;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_06758fd8;
      }
    }
LAB_0675904c:
    func_0x03280cac();
LAB_06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar13 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar13 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar13)(plVar6,puVar13[1]);
LAB_06759120:
  func_0x03365958(lVar8);
  func_0x03280ca4(0);
  lVar7 = func_0x02f09514();
  *(code **)((long)ppcVar3 + -0x60) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  if (*(long *)(lVar7 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar7 + 0x88) + 0x20) = 0;
    return;
  }
  lVar7 = func_0x03280cac();
  *(code **)((long)ppcVar3 + -0x70) = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped;
  if (*(long *)(lVar7 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar7 + 0x88) + 0x20) = 0;
    return;
  }
  lVar7 = func_0x03280cac();
  *(code **)((long)ppcVar3 + -0x80) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragStarted;
  *(long *)((long)ppcVar3 + -0x78) = lVar12;
  MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__FinishHinting();
  if (*(long *)(lVar7 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(lVar7 + 0x88) + 0x29) = 1;
    return;
  }
  lVar12 = func_0x03280cac();
  puVar4 = (undefined8 *)((long)ppcVar3 + -0x90);
  ppcVar3 = (code **)((long)ppcVar3 + -0x90);
  *puVar4 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragEnded;
  if (*(char *)(lVar12 + 0xc0) != '\0') {
    return;
  }
  if (*(long *)(lVar12 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(lVar12 + 0x88) + 0x29) = 0;
    return;
  }
  pcVar26 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemMerged;
  lVar12 = func_0x03280cac();
  puVar18 = puVar19;
  puVar20 = puVar21;
  unaff_x25 = puVar22;
  unaff_x26 = puVar23;
  unaff_x27 = puVar24;
  goto code_r0x06758ca8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07807800) {
      puVar13 = (undefined8 *)(lVar9 + (long)(*piVar16 + 3) * 0x10 + 0x138);
      goto LAB_06759028;
    }
  }
LAB_06758ff0:
  puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07807800,3);
LAB_06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar13)(plVar11,puVar13[1]);
  return;
}

