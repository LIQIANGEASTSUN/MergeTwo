/* Ghidra 12.1.2 native pseudocode; RVA 0x6659138; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.TaskBeingCompletedFired; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined *puVar12;
  undefined *unaff_x23;
  undefined *puVar13;
  undefined *unaff_x24;
  undefined *puVar14;
  undefined *unaff_x25;
  undefined *puVar15;
  undefined *unaff_x26;
  undefined *puVar16;
  undefined *unaff_x27;
  code *unaff_x30;
  undefined1 auVar17 [12];
  
code_r0x06759138:
  *(code **)((long)register0x00000008 + -0x10) = unaff_x30;
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x20) = 0;
    return;
  }
  lVar6 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x20) = 0x6759154;
  if (*(long *)(lVar6 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x88) + 0x20) = 0;
    return;
  }
  lVar6 = func_0x03280cac();
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0x6759170;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x675917c;
  *(undefined **)((long)register0x00000008 + -0x78) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0x70) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x68) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x58) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar6;
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
  lVar7 = *(long *)(lVar6 + 0x88);
  puVar12 = unaff_x23;
  puVar13 = unaff_x24;
  puVar14 = unaff_x25;
  puVar15 = unaff_x26;
  puVar16 = unaff_x27;
  if (lVar7 == 0) goto LAB_0675904c;
  if (*(char *)(lVar7 + 0x28) == '\0') {
    return;
  }
  *(undefined1 *)(lVar7 + 0x28) = 0;
  lVar7 = func_0x03eb6ac8(lVar6,*(undefined8 *)puVar1);
  if (lVar7 == 0) goto LAB_0675904c;
  unaff_x20 = (long *)func_0x04545bc8(lVar7,*(undefined8 *)PTR_DAT_07807810);
  puVar13 = PTR_DAT_07807808;
  puVar14 = PTR_DAT_077d75b8;
  puVar16 = PTR_DAT_077cc678;
  puVar15 = PTR_DAT_0777bfa0;
  puVar12 = PTR_DAT_0774e8e0;
  if (unaff_x20 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
  do {
    do {
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar12) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06758df8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar12,0);
LAB_06758df8:
      uVar8 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
      if ((uVar8 & 1) == 0) {
        unaff_x21 = 0;
        iVar10 = 5;
        iVar2 = 5;
        if (unaff_x20 == (long *)0x0) goto LAB_06758f98;
        goto LAB_06758f38;
      }
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar13) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06758e54;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar13,0);
LAB_06758e54:
      unaff_x21 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
      if (unaff_x21 == 0) {
        func_0x03280cac();
        goto LAB_0675904c;
      }
    } while (*(char *)(unaff_x21 + 0x58) == '\0');
    *(undefined1 *)(unaff_x21 + 0x58) = 0;
    *(undefined2 *)(unaff_x21 + 0x65) = 0;
    lVar7 = func_0x03ced81c(unaff_x21,*(undefined8 *)puVar14);
  } while (((*(char *)(unaff_x21 + 0x67) != '\0') ||
           (lVar4 = func_0x03ced81c(unaff_x21,*(undefined8 *)puVar15), lVar7 == 0)) || (lVar4 != 0))
  ;
  plVar5 = *(long **)(lVar6 + 0x40);
  if (plVar5 == (long *)0x0) goto LAB_06759050;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
  unaff_x21 = 0;
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar11 = *(undefined8 *)(lVar7 + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar16) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x23) * 0x10 + 0x138);
          goto LAB_06758f18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar16,0x23);
LAB_06758f18:
    (*(code *)*puVar3)(plVar5,uVar11,puVar3[1]);
    goto LAB_06758dac;
  }
  do {
    func_0x03280cac();
    unaff_x23 = puVar12;
    unaff_x24 = puVar13;
    unaff_x25 = puVar14;
    unaff_x26 = puVar15;
    unaff_x27 = puVar16;
LAB_06759058:
    puVar16 = unaff_x27;
    puVar15 = unaff_x26;
    puVar14 = unaff_x25;
    puVar13 = unaff_x24;
    puVar12 = unaff_x23;
    func_0x03280cac();
    do {
      auVar17 = func_0x03280ca4(unaff_x21);
      unaff_x22 = auVar17._0_8_;
      if (auVar17._8_4_ != 1) {
        unaff_x21 = 0;
        if (unaff_x20 == (long *)0x0) goto LAB_06759120;
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_067590f8;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_067590e0;
      }
      plVar5 = (long *)func_0x072ce910(unaff_x22);
      unaff_x21 = *plVar5;
      func_0x072ce920();
      iVar10 = 0;
      iVar2 = 0;
      if (unaff_x20 != (long *)0x0) {
LAB_06758f38:
        iVar10 = iVar2;
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06758f8c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
        (*(code *)*puVar3)(unaff_x20,puVar3[1]);
      }
LAB_06758f98:
    } while (unaff_x21 != 0);
    if ((iVar10 != 5) && (iVar10 != 0)) {
      return;
    }
    if (*(long *)(lVar6 + 0x40) != 0) {
      plVar5 = *(long **)(*(long *)(lVar6 + 0x40) + 0x40);
      lVar6 = 0;
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_06758ff0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_06758fd8;
      }
    }
LAB_0675904c:
    func_0x03280cac();
LAB_06759050:
    func_0x03280cac();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar3 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar3)(unaff_x20,puVar3[1]);
LAB_06759120:
  func_0x03365958(unaff_x22);
  func_0x03280ca4(0);
  unaff_x30 = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  param_1 = func_0x02f09514();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  unaff_x19 = lVar6;
  unaff_x23 = puVar12;
  unaff_x24 = puVar13;
  unaff_x25 = puVar14;
  unaff_x26 = puVar15;
  unaff_x27 = puVar16;
  goto code_r0x06759138;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07807800) {
      puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
      goto LAB_06759028;
    }
  }
LAB_06758ff0:
  puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07807800,3);
LAB_06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}

