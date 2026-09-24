/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6658A6C; bound 176 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.remove_ItemDragEnded; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__remove_ItemDragEnded
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
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *unaff_x25;
  undefined *puVar20;
  undefined *unaff_x26;
  undefined *puVar21;
  undefined *unaff_x27;
  undefined *puVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined *apuStack_c0 [2];
  code *apcStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000007e28071 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1510);
    bRam0000000007e28071 = 1;
  }
  puVar18 = PTR_DAT_077f1510;
  plVar13 = (long *)(param_1 + 0x90);
  lVar10 = *plVar13;
LAB_06758ab0:
  lVar4 = func_0x057ddd18(lVar10,param_2,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar15 = *(undefined8 *)puVar18;
    lVar5 = func_0x03280b90(lVar4,uVar15);
    if (lVar5 == 0) {
      auVar24 = func_0x03281048(lVar4,uVar15);
      uVar9 = auVar24._8_8_;
      puStack_70 = &UNK_06758b1c;
      lStack_60 = lVar4;
      lStack_58 = lVar10;
      plStack_50 = plVar13;
      uStack_48 = param_2;
      if ((bRam0000000007e280a2 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e758);
        bRam0000000007e280a2 = 1;
      }
      puVar16 = PTR_DAT_0774e758;
      plVar13 = (long *)(auVar24._0_8_ + 0xf0);
      lVar10 = *plVar13;
      while ((plVar6 = (long *)func_0x057ddd18(lVar10,uVar9,0), plVar6 == (long *)0x0 ||
             (*plVar6 == *(long *)puVar16))) {
        lVar4 = func_0x032dd140(plVar13,plVar6,lVar10);
        bVar3 = lVar10 == lVar4;
        lVar10 = lVar4;
        if (bVar3) {
          return;
        }
      }
      auVar24 = func_0x03281048(plVar6);
      lVar4 = auVar24._8_8_;
      apcStack_b0[0] = MergeEngine_ECS_Systems_Board_MergeSystem__remove_ItemMerged;
      puStack_a0 = puVar18;
      puStack_90 = puVar16;
      uStack_98 = uVar15;
      lStack_88 = lVar10;
      plStack_80 = plVar13;
      uStack_78 = uVar9;
      if ((bRam0000000007e2810c & 1) == 0) {
        func_0x03280a18(PTR_DAT_077f1518);
        bRam0000000007e2810c = 1;
      }
      puVar18 = PTR_DAT_077f1518;
      plVar13 = (long *)(auVar24._0_8_ + 0x80);
      lVar10 = *plVar13;
      do {
        lVar5 = func_0x057ddd18(lVar10,lVar4,0);
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          puVar16 = *(undefined **)puVar18;
          lVar7 = func_0x03280b90(lVar5,puVar16);
          if (lVar7 == 0) {
            auVar25 = func_0x03281048(lVar5,puVar16);
            lVar7 = auVar25._0_8_;
            ppcVar2 = (code **)apuStack_c0;
            apuStack_c0[0] = &UNK_06758c68;
            if (auVar25._8_4_ == 0) {
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
              puVar23 = &UNK_06758c68;
              ppcVar2 = apcStack_b0;
              goto code_r0x06758ca8;
            }
            puVar23 = &UNK_06758ca8;
            lVar7 = func_0x03280cac();
            goto code_r0x06758ca8;
          }
        }
        lVar5 = func_0x032dd140(plVar13,lVar7,lVar10);
        bVar3 = lVar10 == lVar5;
        lVar10 = lVar5;
        if (bVar3) {
          return;
        }
      } while( true );
    }
  }
  lVar4 = func_0x032dd140(plVar13,lVar5,lVar10);
  bVar3 = lVar10 == lVar4;
  lVar10 = lVar4;
  if (bVar3) {
    return;
  }
  goto LAB_06758ab0;
code_r0x06758ca8:
  *(undefined **)((long)ppcVar2 + -0x50) = puVar23;
  *(undefined **)((long)ppcVar2 + -0x48) = unaff_x27;
  *(undefined **)((long)ppcVar2 + -0x40) = unaff_x26;
  *(undefined **)((long)ppcVar2 + -0x38) = unaff_x25;
  *(undefined **)((long)ppcVar2 + -0x30) = puVar18;
  *(undefined **)((long)ppcVar2 + -0x28) = puVar16;
  *(long *)((long)ppcVar2 + -0x20) = lVar5;
  *(long *)((long)ppcVar2 + -0x18) = lVar10;
  *(long **)((long)ppcVar2 + -0x10) = plVar13;
  *(long *)((long)ppcVar2 + -8) = lVar4;
  plVar13 = (long *)0x7e28000;
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
  puVar23 = PTR_DAT_077e7568;
  lVar4 = *(long *)(lVar7 + 0x88);
  puVar17 = puVar16;
  puVar19 = puVar18;
  puVar20 = unaff_x25;
  puVar21 = unaff_x26;
  puVar22 = unaff_x27;
  if (lVar4 == 0) goto code_r0x0675904c;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar4 + 0x28) = 0;
  lVar4 = func_0x03eb6ac8(lVar7,*(undefined8 *)puVar23);
  if (lVar4 == 0) goto code_r0x0675904c;
  plVar13 = (long *)func_0x04545bc8(lVar4,*(undefined8 *)PTR_DAT_07807810);
  puVar19 = PTR_DAT_07807808;
  puVar20 = PTR_DAT_077d75b8;
  puVar22 = PTR_DAT_077cc678;
  puVar21 = PTR_DAT_0777bfa0;
  puVar17 = PTR_DAT_0774e8e0;
  if (plVar13 == (long *)0x0) goto code_r0x06759058;
code_r0x06758dac:
  do {
    do {
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar17) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x06758df8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar17,0);
code_r0x06758df8:
      uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        lVar10 = 0;
        iVar14 = 5;
        iVar1 = 5;
        if (plVar13 == (long *)0x0) goto code_r0x06758f98;
        goto code_r0x06758f38;
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar19) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x06758e54;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar19,0);
code_r0x06758e54:
      lVar10 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if (lVar10 == 0) {
        func_0x03280cac();
        goto code_r0x0675904c;
      }
    } while (*(char *)(lVar10 + 0x58) == '\0');
    *(undefined1 *)(lVar10 + 0x58) = 0;
    *(undefined2 *)(lVar10 + 0x65) = 0;
    lVar4 = func_0x03ced81c(lVar10,*(undefined8 *)puVar20);
  } while (((*(char *)(lVar10 + 0x67) != '\0') ||
           (lVar5 = func_0x03ced81c(lVar10,*(undefined8 *)puVar21), lVar4 == 0)) || (lVar5 != 0));
  plVar6 = *(long **)(lVar7 + 0x40);
  if (plVar6 == (long *)0x0) goto code_r0x06759050;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
  lVar10 = 0;
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar15 = *(undefined8 *)(lVar4 + 0x30);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar22) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
          goto code_r0x06758f18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar22,0x23);
code_r0x06758f18:
    (*(code *)*puVar8)(plVar6,uVar15,puVar8[1]);
    goto code_r0x06758dac;
  }
  do {
    func_0x03280cac();
    puVar16 = puVar17;
    puVar18 = puVar19;
    unaff_x25 = puVar20;
    unaff_x26 = puVar21;
    unaff_x27 = puVar22;
code_r0x06759058:
    puVar22 = unaff_x27;
    puVar21 = unaff_x26;
    puVar20 = unaff_x25;
    puVar19 = puVar18;
    puVar17 = puVar16;
    func_0x03280cac();
    lVar4 = lVar7;
    do {
      auVar25 = func_0x03280ca4(lVar10);
      lVar5 = auVar25._0_8_;
      if (auVar25._8_4_ != 1) {
        lVar10 = 0;
        if (plVar13 == (long *)0x0) goto code_r0x06759120;
        lVar7 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 == 0) goto code_r0x067590f8;
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto code_r0x067590e0;
      }
      plVar6 = (long *)func_0x072ce910(lVar5);
      lVar10 = *plVar6;
      func_0x072ce920();
      iVar14 = 0;
      lVar7 = lVar4;
      iVar1 = 0;
      if (plVar13 != (long *)0x0) {
code_r0x06758f38:
        iVar14 = iVar1;
        lVar4 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x06758f8c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0774e8c8,0);
code_r0x06758f8c:
        (*(code *)*puVar8)(plVar13,puVar8[1]);
      }
code_r0x06758f98:
      lVar4 = lVar7;
    } while (lVar10 != 0);
    if ((iVar14 != 5) && (iVar14 != 0)) {
      return;
    }
    if (*(long *)(lVar7 + 0x40) != 0) {
      plVar6 = *(long **)(*(long *)(lVar7 + 0x40) + 0x40);
      lVar7 = 0;
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto code_r0x06758ff0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto code_r0x06758fd8;
      }
    }
code_r0x0675904c:
    func_0x03280cac();
code_r0x06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
code_r0x067590e0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto code_r0x06759114;
    }
  }
code_r0x067590f8:
  puVar8 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0774e8c8,0);
code_r0x06759114:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
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
  puVar23 = &UNK_0675917c;
  ppcVar2 = (code **)((long)ppcVar2 + -0x80);
  lVar4 = lVar7;
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
code_r0x06758fd8:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07807800) {
      puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
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

