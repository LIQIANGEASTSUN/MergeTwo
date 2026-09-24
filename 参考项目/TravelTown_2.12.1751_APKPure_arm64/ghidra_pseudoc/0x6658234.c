/* Ghidra 12.1.2 native pseudocode; RVA 0x6658234; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.DisposeSystem; status ok */


/* WARNING: Possible PIC construction at 0x06758420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06758460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067584a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067584e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06758510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x067584e4) */
/* WARNING: Removing unreachable block (ram,0x06758508) */
/* WARNING: Removing unreachable block (ram,0x067584a4) */
/* WARNING: Removing unreachable block (ram,0x067584c8) */
/* WARNING: Removing unreachable block (ram,0x06758464) */
/* WARNING: Removing unreachable block (ram,0x06758488) */
/* WARNING: Removing unreachable block (ram,0x06758424) */
/* WARNING: Removing unreachable block (ram,0x06758448) */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__DisposeSystem(long param_1)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined8 auStack_180 [2];
  undefined8 auStack_170 [2];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar18 = PTR_DAT_07807700;
  puVar20 = PTR_DAT_077f1500;
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
  lVar15 = *(long *)(param_1 + 0x48);
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar20);
  auVar25._8_8_ = uVar4;
  auVar25._0_8_ = lVar15;
  func_0x0541dfd8(uVar4,param_1,*(undefined8 *)puVar18,0);
  if (lVar15 == 0) {
    uVar4 = 0x675890c;
    auVar25 = func_0x03280cac();
  }
  else {
    uVar4 = 0x6758424;
  }
  uVar11 = auVar25._8_8_;
  uStack_80 = uVar4;
  if ((bRam0000000007e2806d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1500);
    bRam0000000007e2806d = 1;
  }
  puVar20 = PTR_DAT_077f1500;
  plVar16 = (long *)(auVar25._0_8_ + 0x80);
  lVar15 = *plVar16;
  do {
    lVar5 = func_0x057ddd18(lVar15,uVar11,0);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar4 = *(undefined8 *)puVar20;
      lVar6 = func_0x03280b90(lVar5,uVar4);
      if (lVar6 == 0) {
        auVar25 = func_0x03281048(lVar5,uVar4);
        uVar12 = auVar25._8_8_;
        uStack_c0 = 0x67589bc;
        puStack_b0 = puVar20;
        uStack_a8 = uVar4;
        lStack_a0 = lVar5;
        lStack_98 = lVar15;
        plStack_90 = plVar16;
        uStack_88 = uVar11;
        if ((bRam0000000007e2806f & 1) == 0) {
          func_0x03280a18(PTR_DAT_077f1500);
          bRam0000000007e2806f = 1;
        }
        puVar20 = PTR_DAT_077f1500;
        plVar16 = (long *)(auVar25._0_8_ + 0x88);
        lVar15 = *plVar16;
        break;
      }
    }
    lVar5 = func_0x032dd140(plVar16,lVar6,lVar15);
    bVar3 = lVar15 == lVar5;
    lVar15 = lVar5;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_06758a00:
  lVar5 = func_0x057ddd18(lVar15,uVar12,0);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)puVar20;
    lVar6 = func_0x03280b90(lVar5,uVar4);
    if (lVar6 == 0) {
      auVar25 = func_0x03281048(lVar5,uVar4);
      uVar11 = auVar25._8_8_;
      uStack_100 = 0x6758a6c;
      puStack_f0 = puVar20;
      uStack_e8 = uVar4;
      lStack_e0 = lVar5;
      lStack_d8 = lVar15;
      plStack_d0 = plVar16;
      uStack_c8 = uVar12;
      if ((bRam0000000007e28071 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1510);
        bRam0000000007e28071 = 1;
      }
      puVar20 = PTR_DAT_077f1510;
      plVar16 = (long *)(auVar25._0_8_ + 0x90);
      lVar15 = *plVar16;
      goto LAB_06758ab0;
    }
  }
  lVar5 = func_0x032dd140(plVar16,lVar6,lVar15);
  bVar3 = lVar15 == lVar5;
  lVar15 = lVar5;
  if (bVar3) {
    return;
  }
  goto LAB_06758a00;
LAB_06758ab0:
  lVar5 = func_0x057ddd18(lVar15,uVar11,0);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)puVar20;
    lVar6 = func_0x03280b90(lVar5,uVar4);
    if (lVar6 == 0) {
      auVar25 = func_0x03281048(lVar5,uVar4);
      uVar12 = auVar25._8_8_;
      uStack_130 = 0x6758b1c;
      lStack_120 = lVar5;
      lStack_118 = lVar15;
      plStack_110 = plVar16;
      uStack_108 = uVar11;
      if ((bRam0000000007e280a2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e758);
        bRam0000000007e280a2 = 1;
      }
      puVar18 = PTR_DAT_0774e758;
      plVar16 = (long *)(auVar25._0_8_ + 0xf0);
      lVar15 = *plVar16;
      while ((plVar7 = (long *)func_0x057ddd18(lVar15,uVar12,0), plVar7 == (long *)0x0 ||
             (*plVar7 == *(long *)puVar18))) {
        lVar5 = func_0x032dd140(plVar16,plVar7,lVar15);
        bVar3 = lVar15 == lVar5;
        lVar15 = lVar5;
        if (bVar3) {
          return;
        }
      }
      auVar25 = func_0x03281048(plVar7);
      lVar5 = auVar25._8_8_;
      auStack_170[0] = 0x6758bb8;
      puStack_160 = puVar20;
      puStack_150 = puVar18;
      uStack_158 = uVar4;
      lStack_148 = lVar15;
      plStack_140 = plVar16;
      uStack_138 = uVar12;
      if ((bRam0000000007e2810c & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1518);
        bRam0000000007e2810c = 1;
      }
      puVar20 = PTR_DAT_077f1518;
      plVar16 = (long *)(auVar25._0_8_ + 0x80);
      lVar15 = *plVar16;
      do {
        lVar6 = func_0x057ddd18(lVar15,lVar5,0);
        if (lVar6 == 0) {
          lVar8 = 0;
        }
        else {
          puVar18 = *(undefined **)puVar20;
          lVar8 = func_0x03280b90(lVar6,puVar18);
          if (lVar8 == 0) {
            auVar26 = func_0x03281048(lVar6,puVar18);
            lVar8 = auVar26._0_8_;
            puVar10 = auStack_180;
            auStack_180[0] = 0x6758c68;
            if (auVar26._8_4_ == 0) {
              if (*(char *)(lVar8 + 0xc0) != '\0') {
                return;
              }
              if (*(long *)(lVar8 + 0x88) != 0) {
                *(undefined1 *)(*(long *)(lVar8 + 0x88) + 0x29) = 0;
                return;
              }
            }
            else if (*(long *)(lVar8 + 0x88) != 0) {
              *(undefined1 *)(*(long *)(lVar8 + 0x88) + 0x29) = 1;
              uVar4 = 0x6758c68;
              puVar10 = auStack_170;
              goto SUB_06758ca8;
            }
            uVar4 = 0x6758ca8;
            lVar8 = func_0x03280cac();
            goto SUB_06758ca8;
          }
        }
        lVar6 = func_0x032dd140(plVar16,lVar8,lVar15);
        bVar3 = lVar15 == lVar6;
        lVar15 = lVar6;
        if (bVar3) {
          return;
        }
      } while( true );
    }
  }
  lVar5 = func_0x032dd140(plVar16,lVar6,lVar15);
  bVar3 = lVar15 == lVar5;
  lVar15 = lVar5;
  if (bVar3) {
    return;
  }
  goto LAB_06758ab0;
SUB_06758ca8:
  *(undefined8 *)((long)puVar10 + -0x50) = uVar4;
  *(undefined **)((long)puVar10 + -0x48) = unaff_x27;
  *(undefined **)((long)puVar10 + -0x40) = unaff_x26;
  *(undefined **)((long)puVar10 + -0x38) = unaff_x25;
  *(undefined **)((long)puVar10 + -0x30) = puVar20;
  *(undefined **)((long)puVar10 + -0x28) = puVar18;
  *(long *)((long)puVar10 + -0x20) = lVar6;
  *(long *)((long)puVar10 + -0x18) = lVar15;
  *(long **)((long)puVar10 + -0x10) = plVar16;
  *(long *)((long)puVar10 + -8) = lVar5;
  plVar16 = (long *)0x7e28000;
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
  lVar5 = *(long *)(lVar8 + 0x88);
  puVar19 = puVar18;
  puVar21 = puVar20;
  puVar22 = unaff_x25;
  puVar23 = unaff_x26;
  puVar24 = unaff_x27;
  if (lVar5 == 0) goto LAB_0675904c;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar5 + 0x28) = 0;
  lVar5 = func_0x03eb6ac8(lVar8,*(undefined8 *)puVar1);
  if (lVar5 == 0) goto LAB_0675904c;
  plVar16 = (long *)func_0x04545bc8(lVar5,*(undefined8 *)PTR_DAT_07807810);
  puVar21 = PTR_DAT_07807808;
  puVar22 = PTR_DAT_077d75b8;
  puVar24 = PTR_DAT_077cc678;
  puVar23 = PTR_DAT_0777bfa0;
  puVar19 = PTR_DAT_0774e8e0;
  if (plVar16 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
  do {
    do {
      lVar15 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar19) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06758df8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar19,0);
LAB_06758df8:
      uVar13 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        lVar15 = 0;
        iVar17 = 5;
        iVar2 = 5;
        if (plVar16 == (long *)0x0) goto LAB_06758f98;
        goto LAB_06758f38;
      }
      lVar15 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar21) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06758e54;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar21,0);
LAB_06758e54:
      lVar15 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      if (lVar15 == 0) {
        func_0x03280cac();
        goto LAB_0675904c;
      }
    } while (*(char *)(lVar15 + 0x58) == '\0');
    *(undefined1 *)(lVar15 + 0x58) = 0;
    *(undefined2 *)(lVar15 + 0x65) = 0;
    lVar5 = func_0x03ced81c(lVar15,*(undefined8 *)puVar22);
  } while (((*(char *)(lVar15 + 0x67) != '\0') ||
           (lVar6 = func_0x03ced81c(lVar15,*(undefined8 *)puVar23), lVar5 == 0)) || (lVar6 != 0));
  plVar7 = *(long **)(lVar8 + 0x40);
  if (plVar7 == (long *)0x0) goto LAB_06759050;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
  lVar15 = 0;
  if (plVar7 != (long *)0x0) {
    lVar15 = *plVar7;
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar24) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
          goto LAB_06758f18;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar24,0x23);
LAB_06758f18:
    (*(code *)*puVar9)(plVar7,uVar4,puVar9[1]);
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
    lVar5 = lVar8;
    do {
      auVar26 = func_0x03280ca4(lVar15);
      lVar6 = auVar26._0_8_;
      if (auVar26._8_4_ != 1) {
        lVar15 = 0;
        if (plVar16 == (long *)0x0) goto LAB_06759120;
        lVar8 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 == 0) goto LAB_067590f8;
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_067590e0;
      }
      plVar7 = (long *)func_0x072ce910(lVar6);
      lVar15 = *plVar7;
      func_0x072ce920();
      iVar17 = 0;
      lVar8 = lVar5;
      iVar2 = 0;
      if (plVar16 != (long *)0x0) {
LAB_06758f38:
        iVar17 = iVar2;
        lVar5 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06758f8c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
        (*(code *)*puVar9)(plVar16,puVar9[1]);
      }
LAB_06758f98:
      lVar5 = lVar8;
    } while (lVar15 != 0);
    if ((iVar17 != 5) && (iVar17 != 0)) {
      return;
    }
    if (*(long *)(lVar8 + 0x40) != 0) {
      plVar7 = *(long **)(*(long *)(lVar8 + 0x40) + 0x40);
      lVar8 = 0;
      if (plVar7 != (long *)0x0) {
        lVar15 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 == 0) goto LAB_06758ff0;
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
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
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar9 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
LAB_06759120:
  func_0x03365958(lVar6);
  func_0x03280ca4(0);
  lVar8 = func_0x02f09514();
  *(undefined8 *)((long)puVar10 + -0x60) = 0x6759138;
  if (*(long *)(lVar8 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar8 + 0x88) + 0x20) = 0;
    return;
  }
  lVar8 = func_0x03280cac();
  *(undefined8 *)((long)puVar10 + -0x70) = 0x6759154;
  if (*(long *)(lVar8 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar8 + 0x88) + 0x20) = 0;
    return;
  }
  lVar8 = func_0x03280cac();
  *(undefined8 *)((long)puVar10 + -0x80) = 0x6759170;
  *(long *)((long)puVar10 + -0x78) = lVar5;
  uVar4 = 0x675917c;
  puVar10 = (undefined8 *)((long)puVar10 + -0x80);
  lVar5 = lVar8;
  puVar18 = puVar19;
  puVar20 = puVar21;
  unaff_x25 = puVar22;
  unaff_x26 = puVar23;
  unaff_x27 = puVar24;
  goto SUB_06758ca8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07807800) {
      puVar10 = (undefined8 *)(lVar15 + (long)(*piVar14 + 3) * 0x10 + 0x138);
      goto LAB_06759028;
    }
  }
LAB_06758ff0:
  puVar10 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07807800,3);
LAB_06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(plVar7,puVar10[1]);
  return;
}

