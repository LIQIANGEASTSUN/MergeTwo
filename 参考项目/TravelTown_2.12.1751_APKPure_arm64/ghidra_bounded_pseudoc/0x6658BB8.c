/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6658BB8; bound 176 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.remove_ItemMerged; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_MergeSystem__remove_ItemMerged(long param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *unaff_x25;
  undefined *puVar19;
  undefined *unaff_x26;
  undefined *puVar20;
  undefined *unaff_x27;
  undefined *puVar21;
  undefined *puVar22;
  undefined1 auVar23 [12];
  undefined *apuStack_50 [2];
  
  if ((bRam0000000007e2810c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1518);
    bRam0000000007e2810c = 1;
  }
  puVar17 = PTR_DAT_077f1518;
  plVar12 = (long *)(param_1 + 0x80);
  lVar9 = *plVar12;
  do {
    lVar4 = func_0x057ddd18(lVar9,param_2,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      puVar15 = *(undefined **)puVar17;
      lVar5 = func_0x03280b90(lVar4,puVar15);
      if (lVar5 == 0) {
        auVar23 = func_0x03281048(lVar4,puVar15);
        lVar5 = auVar23._0_8_;
        ppuVar2 = apuStack_50;
        apuStack_50[0] = &UNK_06758c68;
        if (auVar23._8_4_ == 0) {
          if (*(char *)(lVar5 + 0xc0) != '\0') {
            return;
          }
          if (*(long *)(lVar5 + 0x88) != 0) {
            *(undefined1 *)(*(long *)(lVar5 + 0x88) + 0x29) = 0;
            return;
          }
        }
        else if (*(long *)(lVar5 + 0x88) != 0) {
          *(undefined1 *)(*(long *)(lVar5 + 0x88) + 0x29) = 1;
          puVar22 = &UNK_06758c68;
          ppuVar2 = (undefined **)&stack0xffffffffffffffc0;
          break;
        }
        puVar22 = &UNK_06758ca8;
        lVar5 = func_0x03280cac();
        break;
      }
    }
    lVar4 = func_0x032dd140(plVar12,lVar5,lVar9);
    bVar3 = lVar9 == lVar4;
    lVar9 = lVar4;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x06758ca8:
  *(undefined **)((long)ppuVar2 + -0x50) = puVar22;
  *(undefined **)((long)ppuVar2 + -0x48) = unaff_x27;
  *(undefined **)((long)ppuVar2 + -0x40) = unaff_x26;
  *(undefined **)((long)ppuVar2 + -0x38) = unaff_x25;
  *(undefined **)((long)ppuVar2 + -0x30) = puVar17;
  *(undefined **)((long)ppuVar2 + -0x28) = puVar15;
  *(long *)((long)ppuVar2 + -0x20) = lVar4;
  *(long *)((long)ppuVar2 + -0x18) = lVar9;
  *(long **)((long)ppuVar2 + -0x10) = plVar12;
  *(long *)((long)ppuVar2 + -8) = param_2;
  plVar12 = (long *)0x7e28000;
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
  puVar22 = PTR_DAT_077e7568;
  lVar4 = *(long *)(lVar5 + 0x88);
  puVar16 = puVar15;
  puVar18 = puVar17;
  puVar19 = unaff_x25;
  puVar20 = unaff_x26;
  puVar21 = unaff_x27;
  if (lVar4 == 0) goto code_r0x0675904c;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar4 + 0x28) = 0;
  lVar4 = func_0x03eb6ac8(lVar5,*(undefined8 *)puVar22);
  if (lVar4 == 0) goto code_r0x0675904c;
  plVar12 = (long *)func_0x04545bc8(lVar4,*(undefined8 *)PTR_DAT_07807810);
  puVar18 = PTR_DAT_07807808;
  puVar19 = PTR_DAT_077d75b8;
  puVar21 = PTR_DAT_077cc678;
  puVar20 = PTR_DAT_0777bfa0;
  puVar16 = PTR_DAT_0774e8e0;
  if (plVar12 == (long *)0x0) goto code_r0x06759058;
code_r0x06758dac:
  do {
    do {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar16) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x06758df8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar16,0);
code_r0x06758df8:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        lVar9 = 0;
        iVar13 = 5;
        iVar1 = 5;
        if (plVar12 == (long *)0x0) goto code_r0x06758f98;
        goto code_r0x06758f38;
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar18) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x06758e54;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar18,0);
code_r0x06758e54:
      lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (lVar9 == 0) {
        func_0x03280cac();
        goto code_r0x0675904c;
      }
    } while (*(char *)(lVar9 + 0x58) == '\0');
    *(undefined1 *)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x65) = 0;
    lVar4 = func_0x03ced81c(lVar9,*(undefined8 *)puVar19);
  } while (((*(char *)(lVar9 + 0x67) != '\0') ||
           (lVar7 = func_0x03ced81c(lVar9,*(undefined8 *)puVar20), lVar4 == 0)) || (lVar7 != 0));
  plVar8 = *(long **)(lVar5 + 0x40);
  if (plVar8 == (long *)0x0) goto code_r0x06759050;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
  lVar9 = 0;
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar14 = *(undefined8 *)(lVar4 + 0x30);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar21) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x23) * 0x10 + 0x138);
          goto code_r0x06758f18;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar21,0x23);
code_r0x06758f18:
    (*(code *)*puVar6)(plVar8,uVar14,puVar6[1]);
    goto code_r0x06758dac;
  }
  do {
    func_0x03280cac();
    puVar15 = puVar16;
    puVar17 = puVar18;
    unaff_x25 = puVar19;
    unaff_x26 = puVar20;
    unaff_x27 = puVar21;
code_r0x06759058:
    puVar21 = unaff_x27;
    puVar20 = unaff_x26;
    puVar19 = unaff_x25;
    puVar18 = puVar17;
    puVar16 = puVar15;
    func_0x03280cac();
    lVar7 = lVar5;
    do {
      auVar23 = func_0x03280ca4(lVar9);
      lVar4 = auVar23._0_8_;
      if (auVar23._8_4_ != 1) {
        lVar9 = 0;
        if (plVar12 == (long *)0x0) goto code_r0x06759120;
        lVar5 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto code_r0x067590f8;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto code_r0x067590e0;
      }
      plVar8 = (long *)func_0x072ce910(lVar4);
      lVar9 = *plVar8;
      func_0x072ce920();
      iVar13 = 0;
      lVar5 = lVar7;
      iVar1 = 0;
      if (plVar12 != (long *)0x0) {
code_r0x06758f38:
        iVar13 = iVar1;
        lVar4 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x06758f8c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0774e8c8,0);
code_r0x06758f8c:
        (*(code *)*puVar6)(plVar12,puVar6[1]);
      }
code_r0x06758f98:
      lVar7 = lVar5;
    } while (lVar9 != 0);
    if ((iVar13 != 5) && (iVar13 != 0)) {
      return;
    }
    if (*(long *)(lVar5 + 0x40) != 0) {
      plVar8 = *(long **)(*(long *)(lVar5 + 0x40) + 0x40);
      lVar5 = 0;
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto code_r0x06758ff0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto code_r0x06758fd8;
      }
    }
code_r0x0675904c:
    func_0x03280cac();
code_r0x06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
code_r0x067590e0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto code_r0x06759114;
    }
  }
code_r0x067590f8:
  puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0774e8c8,0);
code_r0x06759114:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
code_r0x06759120:
  func_0x03365958(lVar4);
  func_0x03280ca4(0);
  lVar5 = func_0x02f09514();
  *(undefined **)((long)ppuVar2 + -0x60) = &UNK_06759138;
  if (*(long *)(lVar5 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar5 + 0x88) + 0x20) = 0;
    return;
  }
  lVar5 = func_0x03280cac();
  *(undefined **)((long)ppuVar2 + -0x70) = &UNK_06759154;
  if (*(long *)(lVar5 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar5 + 0x88) + 0x20) = 0;
    return;
  }
  lVar5 = func_0x03280cac();
  *(undefined **)((long)ppuVar2 + -0x80) = &UNK_06759170;
  *(long *)((long)ppuVar2 + -0x78) = lVar7;
  puVar22 = &UNK_0675917c;
  ppuVar2 = (undefined **)((long)ppuVar2 + -0x80);
  param_2 = lVar5;
  puVar15 = puVar16;
  puVar17 = puVar18;
  unaff_x25 = puVar19;
  unaff_x26 = puVar20;
  unaff_x27 = puVar21;
  goto code_r0x06758ca8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
code_r0x06758fd8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07807800) {
      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto code_r0x06759028;
    }
  }
code_r0x06758ff0:
  puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07807800,3);
code_r0x06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}

