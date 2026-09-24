/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665890C; bound 176 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.remove_ItemTapped; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__remove_ItemTapped
               (long param_1,undefined8 param_2)

{
  int iVar1;
  code **ppcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
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
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined *apuStack_140 [2];
  code *apcStack_130 [2];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000007e2806d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1500);
    bRam0000000007e2806d = 1;
  }
  puVar19 = PTR_DAT_077f1500;
  plVar14 = (long *)(param_1 + 0x80);
  lVar11 = *plVar14;
  do {
    lVar4 = func_0x057ddd18(lVar11,param_2,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar16 = *(undefined8 *)puVar19;
      lVar5 = func_0x03280b90(lVar4,uVar16);
      if (lVar5 == 0) {
        auVar25 = func_0x03281048(lVar4,uVar16);
        uVar9 = auVar25._8_8_;
        pcStack_80 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__remove_ItemDragStarted;
        puStack_70 = puVar19;
        uStack_68 = uVar16;
        lStack_60 = lVar4;
        lStack_58 = lVar11;
        plStack_50 = plVar14;
        uStack_48 = param_2;
        if ((bRam0000000007e2806f & 1) == 0) {
          func_0x03280a18(PTR_DAT_077f1500);
          bRam0000000007e2806f = 1;
        }
        puVar19 = PTR_DAT_077f1500;
        plVar14 = (long *)(auVar25._0_8_ + 0x88);
        lVar11 = *plVar14;
        break;
      }
    }
    lVar4 = func_0x032dd140(plVar14,lVar5,lVar11);
    bVar3 = lVar11 == lVar4;
    lVar11 = lVar4;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_06758a00:
  lVar4 = func_0x057ddd18(lVar11,uVar9,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar16 = *(undefined8 *)puVar19;
    lVar5 = func_0x03280b90(lVar4,uVar16);
    if (lVar5 == 0) {
      auVar25 = func_0x03281048(lVar4,uVar16);
      uVar10 = auVar25._8_8_;
      pcStack_c0 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__remove_ItemDragEnded;
      puStack_b0 = puVar19;
      uStack_a8 = uVar16;
      lStack_a0 = lVar4;
      lStack_98 = lVar11;
      plStack_90 = plVar14;
      uStack_88 = uVar9;
      if ((bRam0000000007e28071 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1510);
        bRam0000000007e28071 = 1;
      }
      puVar19 = PTR_DAT_077f1510;
      plVar14 = (long *)(auVar25._0_8_ + 0x90);
      lVar11 = *plVar14;
      goto LAB_06758ab0;
    }
  }
  lVar4 = func_0x032dd140(plVar14,lVar5,lVar11);
  bVar3 = lVar11 == lVar4;
  lVar11 = lVar4;
  if (bVar3) {
    return;
  }
  goto LAB_06758a00;
LAB_06758ab0:
  lVar4 = func_0x057ddd18(lVar11,uVar10,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar16 = *(undefined8 *)puVar19;
    lVar5 = func_0x03280b90(lVar4,uVar16);
    if (lVar5 == 0) {
      auVar25 = func_0x03281048(lVar4,uVar16);
      uVar9 = auVar25._8_8_;
      puStack_f0 = &UNK_06758b1c;
      lStack_e0 = lVar4;
      lStack_d8 = lVar11;
      plStack_d0 = plVar14;
      uStack_c8 = uVar10;
      if ((bRam0000000007e280a2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e758);
        bRam0000000007e280a2 = 1;
      }
      puVar17 = PTR_DAT_0774e758;
      plVar14 = (long *)(auVar25._0_8_ + 0xf0);
      lVar11 = *plVar14;
      while ((plVar6 = (long *)func_0x057ddd18(lVar11,uVar9,0), plVar6 == (long *)0x0 ||
             (*plVar6 == *(long *)puVar17))) {
        lVar4 = func_0x032dd140(plVar14,plVar6,lVar11);
        bVar3 = lVar11 == lVar4;
        lVar11 = lVar4;
        if (bVar3) {
          return;
        }
      }
      auVar25 = func_0x03281048(plVar6);
      lVar4 = auVar25._8_8_;
      apcStack_130[0] = MergeEngine_ECS_Systems_Board_MergeSystem__remove_ItemMerged;
      puStack_120 = puVar19;
      puStack_110 = puVar17;
      uStack_118 = uVar16;
      lStack_108 = lVar11;
      plStack_100 = plVar14;
      uStack_f8 = uVar9;
      if ((bRam0000000007e2810c & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1518);
        bRam0000000007e2810c = 1;
      }
      puVar19 = PTR_DAT_077f1518;
      plVar14 = (long *)(auVar25._0_8_ + 0x80);
      lVar11 = *plVar14;
      do {
        lVar5 = func_0x057ddd18(lVar11,lVar4,0);
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          puVar17 = *(undefined **)puVar19;
          lVar7 = func_0x03280b90(lVar5,puVar17);
          if (lVar7 == 0) {
            auVar26 = func_0x03281048(lVar5,puVar17);
            lVar7 = auVar26._0_8_;
            ppcVar2 = (code **)apuStack_140;
            apuStack_140[0] = &UNK_06758c68;
            if (auVar26._8_4_ == 0) {
              if (*(char *)(lVar7 + 0xc0) != '\0') {
                return;
              }
              if (*(long *)(lVar7 + 0x88) != 0) {
                *(undefined1 *)(*(long *)(lVar7 + 0x88) + 0x29) = 0;
                return;
              }
            }
            else if (*(long *)(lVar7 + 0x88) != 0) {
              *(undefined1 *)(*(long *)(lVar7 + 0x88) + 0x29) = 1;
              puVar24 = &UNK_06758c68;
              ppcVar2 = apcStack_130;
              goto code_r0x06758ca8;
            }
            puVar24 = &UNK_06758ca8;
            lVar7 = func_0x03280cac();
            goto code_r0x06758ca8;
          }
        }
        lVar5 = func_0x032dd140(plVar14,lVar7,lVar11);
        bVar3 = lVar11 == lVar5;
        lVar11 = lVar5;
        if (bVar3) {
          return;
        }
      } while( true );
    }
  }
  lVar4 = func_0x032dd140(plVar14,lVar5,lVar11);
  bVar3 = lVar11 == lVar4;
  lVar11 = lVar4;
  if (bVar3) {
    return;
  }
  goto LAB_06758ab0;
code_r0x06758ca8:
  *(undefined **)((long)ppcVar2 + -0x50) = puVar24;
  *(undefined **)((long)ppcVar2 + -0x48) = unaff_x27;
  *(undefined **)((long)ppcVar2 + -0x40) = unaff_x26;
  *(undefined **)((long)ppcVar2 + -0x38) = unaff_x25;
  *(undefined **)((long)ppcVar2 + -0x30) = puVar19;
  *(undefined **)((long)ppcVar2 + -0x28) = puVar17;
  *(long *)((long)ppcVar2 + -0x20) = lVar5;
  *(long *)((long)ppcVar2 + -0x18) = lVar11;
  *(long **)((long)ppcVar2 + -0x10) = plVar14;
  *(long *)((long)ppcVar2 + -8) = lVar4;
  plVar14 = (long *)0x7e28000;
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
  puVar24 = PTR_DAT_077e7568;
  lVar4 = *(long *)(lVar7 + 0x88);
  puVar18 = puVar17;
  puVar20 = puVar19;
  puVar21 = unaff_x25;
  puVar22 = unaff_x26;
  puVar23 = unaff_x27;
  if (lVar4 == 0) goto code_r0x0675904c;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar4 + 0x28) = 0;
  lVar4 = func_0x03eb6ac8(lVar7,*(undefined8 *)puVar24);
  if (lVar4 == 0) goto code_r0x0675904c;
  plVar14 = (long *)func_0x04545bc8(lVar4,*(undefined8 *)PTR_DAT_07807810);
  puVar20 = PTR_DAT_07807808;
  puVar21 = PTR_DAT_077d75b8;
  puVar23 = PTR_DAT_077cc678;
  puVar22 = PTR_DAT_0777bfa0;
  puVar18 = PTR_DAT_0774e8e0;
  if (plVar14 == (long *)0x0) goto code_r0x06759058;
code_r0x06758dac:
  do {
    do {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar18) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x06758df8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar18,0);
code_r0x06758df8:
      uVar12 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        lVar11 = 0;
        iVar15 = 5;
        iVar1 = 5;
        if (plVar14 == (long *)0x0) goto code_r0x06758f98;
        goto code_r0x06758f38;
      }
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar20) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x06758e54;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar20,0);
code_r0x06758e54:
      lVar11 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      if (lVar11 == 0) {
        func_0x03280cac();
        goto code_r0x0675904c;
      }
    } while (*(char *)(lVar11 + 0x58) == '\0');
    *(undefined1 *)(lVar11 + 0x58) = 0;
    *(undefined2 *)(lVar11 + 0x65) = 0;
    lVar4 = func_0x03ced81c(lVar11,*(undefined8 *)puVar21);
  } while (((*(char *)(lVar11 + 0x67) != '\0') ||
           (lVar5 = func_0x03ced81c(lVar11,*(undefined8 *)puVar22), lVar4 == 0)) || (lVar5 != 0));
  plVar6 = *(long **)(lVar7 + 0x40);
  if (plVar6 == (long *)0x0) goto code_r0x06759050;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
  lVar11 = 0;
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar16 = *(undefined8 *)(lVar4 + 0x30);
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar23) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
          goto code_r0x06758f18;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar23,0x23);
code_r0x06758f18:
    (*(code *)*puVar8)(plVar6,uVar16,puVar8[1]);
    goto code_r0x06758dac;
  }
  do {
    func_0x03280cac();
    puVar17 = puVar18;
    puVar19 = puVar20;
    unaff_x25 = puVar21;
    unaff_x26 = puVar22;
    unaff_x27 = puVar23;
code_r0x06759058:
    puVar23 = unaff_x27;
    puVar22 = unaff_x26;
    puVar21 = unaff_x25;
    puVar20 = puVar19;
    puVar18 = puVar17;
    func_0x03280cac();
    lVar4 = lVar7;
    do {
      auVar26 = func_0x03280ca4(lVar11);
      lVar5 = auVar26._0_8_;
      if (auVar26._8_4_ != 1) {
        lVar11 = 0;
        if (plVar14 == (long *)0x0) goto code_r0x06759120;
        lVar7 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 == 0) goto code_r0x067590f8;
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto code_r0x067590e0;
      }
      plVar6 = (long *)func_0x072ce910(lVar5);
      lVar11 = *plVar6;
      func_0x072ce920();
      iVar15 = 0;
      lVar7 = lVar4;
      iVar1 = 0;
      if (plVar14 != (long *)0x0) {
code_r0x06758f38:
        iVar15 = iVar1;
        lVar4 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x06758f8c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0774e8c8,0);
code_r0x06758f8c:
        (*(code *)*puVar8)(plVar14,puVar8[1]);
      }
code_r0x06758f98:
      lVar4 = lVar7;
    } while (lVar11 != 0);
    if ((iVar15 != 5) && (iVar15 != 0)) {
      return;
    }
    if (*(long *)(lVar7 + 0x40) != 0) {
      plVar6 = *(long **)(*(long *)(lVar7 + 0x40) + 0x40);
      lVar7 = 0;
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto code_r0x06758ff0;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto code_r0x06758fd8;
      }
    }
code_r0x0675904c:
    func_0x03280cac();
code_r0x06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
code_r0x067590e0:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto code_r0x06759114;
    }
  }
code_r0x067590f8:
  puVar8 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0774e8c8,0);
code_r0x06759114:
  (*(code *)*puVar8)(plVar14,puVar8[1]);
code_r0x06759120:
  func_0x03365958(lVar5);
  func_0x03280ca4(0);
  lVar7 = func_0x02f09514();
  *(undefined **)((long)ppcVar2 + -0x60) = &UNK_06759138;
  if (*(long *)(lVar7 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar7 + 0x88) + 0x20) = 0;
    return;
  }
  lVar7 = func_0x03280cac();
  *(undefined **)((long)ppcVar2 + -0x70) = &UNK_06759154;
  if (*(long *)(lVar7 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar7 + 0x88) + 0x20) = 0;
    return;
  }
  lVar7 = func_0x03280cac();
  *(undefined **)((long)ppcVar2 + -0x80) = &UNK_06759170;
  *(long *)((long)ppcVar2 + -0x78) = lVar4;
  puVar24 = &UNK_0675917c;
  ppcVar2 = (code **)((long)ppcVar2 + -0x80);
  lVar4 = lVar7;
  puVar17 = puVar18;
  puVar19 = puVar20;
  unaff_x25 = puVar21;
  unaff_x26 = puVar22;
  unaff_x27 = puVar23;
  goto code_r0x06758ca8;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
code_r0x06758fd8:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07807800) {
      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
      goto code_r0x06759028;
    }
  }
code_r0x06758ff0:
  puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07807800,3);
code_r0x06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar6,puVar8[1]);
  return;
}

