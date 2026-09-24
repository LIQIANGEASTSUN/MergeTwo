/* Ghidra 12.1.2 native pseudocode; RVA 0x6659154; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.ItemTapped; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar11;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined *puVar13;
  undefined *unaff_x23;
  undefined *puVar14;
  undefined *unaff_x24;
  undefined *puVar15;
  undefined *unaff_x25;
  undefined *puVar16;
  undefined *unaff_x26;
  undefined *puVar17;
  undefined *unaff_x27;
  code *unaff_x30;
  undefined1 auVar18 [12];
  
code_r0x06759154:
  *(code **)((long)register0x00000008 + -0x10) = unaff_x30;
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x20) = 0;
    return;
  }
  lVar7 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x20) = 0x6759170;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x675917c;
  *(undefined **)((long)register0x00000008 + -0x68) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x28) = lVar7;
  unaff_x20 = (long *)0x7e28000;
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
  lVar8 = *(long *)(lVar7 + 0x88);
  puVar13 = unaff_x23;
  puVar14 = unaff_x24;
  puVar15 = unaff_x25;
  puVar16 = unaff_x26;
  puVar17 = unaff_x27;
  if (lVar8 == 0) goto LAB_0675904c;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar8 + 0x28) = 0;
  lVar8 = func_0x03eb6ac8(lVar7,*(undefined8 *)puVar1);
  if (lVar8 == 0) goto LAB_0675904c;
  unaff_x20 = (long *)func_0x04545bc8(lVar8,*(undefined8 *)PTR_DAT_07807810);
  puVar14 = PTR_DAT_07807808;
  puVar15 = PTR_DAT_077d75b8;
  puVar17 = PTR_DAT_077cc678;
  puVar16 = PTR_DAT_0777bfa0;
  puVar13 = PTR_DAT_0774e8e0;
  if (unaff_x20 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
  do {
    do {
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar13) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06758df8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar13,0);
LAB_06758df8:
      uVar9 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        unaff_x21 = 0;
        iVar11 = 5;
        iVar2 = 5;
        if (unaff_x20 == (long *)0x0) goto LAB_06758f98;
        goto LAB_06758f38;
      }
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar14) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06758e54;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar14,0);
LAB_06758e54:
      unaff_x21 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
      if (unaff_x21 == 0) {
        func_0x03280cac();
        goto LAB_0675904c;
      }
    } while (*(char *)(unaff_x21 + 0x58) == '\0');
    *(undefined1 *)(unaff_x21 + 0x58) = 0;
    *(undefined2 *)(unaff_x21 + 0x65) = 0;
    lVar8 = func_0x03ced81c(unaff_x21,*(undefined8 *)puVar15);
  } while (((*(char *)(unaff_x21 + 0x67) != '\0') ||
           (lVar5 = func_0x03ced81c(unaff_x21,*(undefined8 *)puVar16), lVar8 == 0)) || (lVar5 != 0))
  ;
  plVar6 = *(long **)(lVar7 + 0x40);
  if (plVar6 == (long *)0x0) goto LAB_06759050;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
  unaff_x21 = 0;
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar12 = *(undefined8 *)(lVar8 + 0x30);
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar17) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
          goto LAB_06758f18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar17,0x23);
LAB_06758f18:
    (*(code *)*puVar4)(plVar6,uVar12,puVar4[1]);
    goto LAB_06758dac;
  }
  do {
    func_0x03280cac();
    unaff_x23 = puVar13;
    unaff_x24 = puVar14;
    unaff_x25 = puVar15;
    unaff_x26 = puVar16;
    unaff_x27 = puVar17;
LAB_06759058:
    puVar17 = unaff_x27;
    puVar16 = unaff_x26;
    puVar15 = unaff_x25;
    puVar14 = unaff_x24;
    puVar13 = unaff_x23;
    func_0x03280cac();
    do {
      auVar18 = func_0x03280ca4(unaff_x21);
      unaff_x22 = auVar18._0_8_;
      if (auVar18._8_4_ != 1) {
        unaff_x21 = 0;
        if (unaff_x20 == (long *)0x0) goto LAB_06759120;
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_067590f8;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_067590e0;
      }
      plVar6 = (long *)func_0x072ce910(unaff_x22);
      unaff_x21 = *plVar6;
      func_0x072ce920();
      iVar11 = 0;
      iVar2 = 0;
      if (unaff_x20 != (long *)0x0) {
LAB_06758f38:
        iVar11 = iVar2;
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06758f8c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
        (*(code *)*puVar4)(unaff_x20,puVar4[1]);
      }
LAB_06758f98:
    } while (unaff_x21 != 0);
    if ((iVar11 != 5) && (iVar11 != 0)) {
      return;
    }
    if (*(long *)(lVar7 + 0x40) != 0) {
      plVar6 = *(long **)(*(long *)(lVar7 + 0x40) + 0x40);
      lVar7 = 0;
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_06758ff0;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06758fd8;
      }
    }
LAB_0675904c:
    func_0x03280cac();
LAB_06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar4 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar4)(unaff_x20,puVar4[1]);
LAB_06759120:
  func_0x03365958(unaff_x22);
  func_0x03280ca4(0);
  lVar8 = func_0x02f09514();
  puVar3 = (undefined8 *)((long)register0x00000008 + -0x80);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  *puVar3 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  if (*(long *)(lVar8 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar8 + 0x88) + 0x20) = 0;
    return;
  }
  unaff_x30 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped;
  param_1 = func_0x03280cac();
  unaff_x19 = lVar7;
  unaff_x23 = puVar13;
  unaff_x24 = puVar14;
  unaff_x25 = puVar15;
  unaff_x26 = puVar16;
  unaff_x27 = puVar17;
  goto code_r0x06759154;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07807800) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
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

