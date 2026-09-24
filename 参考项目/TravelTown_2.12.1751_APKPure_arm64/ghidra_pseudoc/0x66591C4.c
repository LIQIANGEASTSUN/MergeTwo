/* Ghidra 12.1.2 native pseudocode; RVA 0x66591C4; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.TaskCompleted; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskCompleted(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 uVar12;
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
  undefined8 unaff_x30;
  undefined1 auVar18 [12];
  undefined8 auStack_20 [2];
  
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x29) = 1;
    puVar6 = (undefined8 *)register0x00000008;
SUB_06758ca8:
    *(undefined8 *)((long)puVar6 + -0x50) = unaff_x30;
    *(undefined **)((long)puVar6 + -0x48) = unaff_x27;
    *(undefined **)((long)puVar6 + -0x40) = unaff_x26;
    *(undefined **)((long)puVar6 + -0x38) = unaff_x25;
    *(undefined **)((long)puVar6 + -0x30) = unaff_x24;
    *(undefined **)((long)puVar6 + -0x28) = unaff_x23;
    *(undefined8 *)((long)puVar6 + -0x20) = unaff_x22;
    *(long *)((long)puVar6 + -0x18) = unaff_x21;
    *(long **)((long)puVar6 + -0x10) = unaff_x20;
    *(long *)((long)puVar6 + -8) = unaff_x19;
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
    lVar7 = *(long *)(param_1 + 0x88);
    puVar13 = unaff_x23;
    puVar14 = unaff_x24;
    puVar15 = unaff_x25;
    puVar16 = unaff_x26;
    puVar17 = unaff_x27;
    if (lVar7 == 0) goto LAB_0675904c;
    if (*(char *)(lVar7 + 0x28) == '\0') {
      return;
    }
    *(undefined1 *)(lVar7 + 0x28) = 0;
    lVar7 = func_0x03eb6ac8(param_1,*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_0675904c;
    unaff_x20 = (long *)func_0x04545bc8(lVar7,*(undefined8 *)PTR_DAT_07807810);
    puVar14 = PTR_DAT_07807808;
    puVar15 = PTR_DAT_077d75b8;
    puVar17 = PTR_DAT_077cc678;
    puVar16 = PTR_DAT_0777bfa0;
    puVar13 = PTR_DAT_0774e8e0;
    if (unaff_x20 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
    do {
      do {
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar13) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06758df8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar13,0);
LAB_06758df8:
        uVar8 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
        if ((uVar8 & 1) == 0) {
          unaff_x21 = 0;
          iVar10 = 5;
          unaff_x23 = puVar13;
          unaff_x24 = puVar14;
          iVar2 = 5;
          if (unaff_x20 == (long *)0x0) goto LAB_06758f98;
          goto LAB_06758f38;
        }
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar14) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06758e54;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar14,0);
LAB_06758e54:
        unaff_x21 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
        if (unaff_x21 == 0) {
          func_0x03280cac();
          goto LAB_0675904c;
        }
      } while (*(char *)(unaff_x21 + 0x58) == '\0');
      *(undefined1 *)(unaff_x21 + 0x58) = 0;
      *(undefined2 *)(unaff_x21 + 0x65) = 0;
      lVar7 = func_0x03ced81c(unaff_x21,*(undefined8 *)puVar15);
    } while (((*(char *)(unaff_x21 + 0x67) != '\0') ||
             (lVar4 = func_0x03ced81c(unaff_x21,*(undefined8 *)puVar16), lVar7 == 0)) ||
            (lVar4 != 0));
    plVar5 = *(long **)(param_1 + 0x40);
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
          if (*(long *)(piVar9 + -2) == *(long *)puVar17) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x23) * 0x10 + 0x138);
            goto LAB_06758f18;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar17,0x23);
LAB_06758f18:
      (*(code *)*puVar3)(plVar5,uVar11,puVar3[1]);
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
      func_0x03280cac();
      lVar7 = param_1;
      do {
        auVar18 = func_0x03280ca4(unaff_x21);
        unaff_x22 = auVar18._0_8_;
        if (auVar18._8_4_ != 1) {
          unaff_x21 = 0;
          if (unaff_x20 == (long *)0x0) goto LAB_06759120;
          lVar4 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 == 0) goto LAB_067590f8;
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_067590e0;
        }
        plVar5 = (long *)func_0x072ce910(unaff_x22);
        unaff_x21 = *plVar5;
        func_0x072ce920();
        iVar10 = 0;
        param_1 = lVar7;
        puVar13 = unaff_x23;
        puVar14 = unaff_x24;
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
          unaff_x23 = puVar13;
          unaff_x24 = puVar14;
        }
LAB_06758f98:
        lVar7 = param_1;
      } while (unaff_x21 != 0);
      if ((iVar10 != 5) && (iVar10 != 0)) {
        return;
      }
      puVar13 = unaff_x23;
      puVar14 = unaff_x24;
      if (*(long *)(param_1 + 0x40) != 0) {
        plVar5 = *(long **)(*(long *)(param_1 + 0x40) + 0x40);
        param_1 = 0;
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_06758ff0;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_06758fd8;
        }
      }
LAB_0675904c:
      func_0x03280cac();
LAB_06759050:
      func_0x03280cac();
    } while( true );
  }
  lVar7 = func_0x03280cac();
  auStack_20[0] = 0x67591e4;
  if (*(char *)(lVar7 + 0xc0) == '\0') {
    if (*(long *)(lVar7 + 0x88) == 0) {
      uVar11 = 0x6759208;
      lVar7 = func_0x03280cac();
      puVar6 = auStack_20;
      while( true ) {
        param_1 = lVar7;
        *(undefined8 *)((long)puVar6 + -0x40) = uVar11;
        *(undefined **)((long)puVar6 + -0x30) = unaff_x24;
        *(undefined **)((long)puVar6 + -0x28) = unaff_x23;
        *(undefined8 *)((long)puVar6 + -0x20) = unaff_x22;
        *(long *)((long)puVar6 + -0x18) = unaff_x21;
        *(long **)((long)puVar6 + -0x10) = unaff_x20;
        *(long *)((long)puVar6 + -8) = unaff_x19;
        unaff_x20 = (long *)0x7e28000;
        if ((bRam0000000007e28058 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07807818);
          func_0x03280a18(PTR_DAT_077e7588);
          func_0x03280a18(PTR_DAT_077e7568);
          func_0x03280a18(PTR_DAT_07807820);
          func_0x03280a18(PTR_DAT_07807828);
          bRam0000000007e28058 = 1;
        }
        puVar13 = PTR_DAT_07807828;
        lVar7 = *(long *)(param_1 + 0x88);
        if (lVar7 != 0) break;
        uVar11 = 0x6759374;
        lVar7 = func_0x03280cac();
        puVar6 = (undefined8 *)((long)puVar6 + -0x40);
        unaff_x19 = param_1;
      }
      if (*(char *)(lVar7 + 0x28) == '\0') {
        *(undefined8 *)(lVar7 + 0x20) = 0;
      }
      else {
        uVar11 = func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_077e7568);
        lVar7 = *(long *)puVar13;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          func_0x03280b8c(lVar7);
          lVar7 = *(long *)puVar13;
        }
        puVar16 = PTR_DAT_07807818;
        lVar4 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar4 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            func_0x03280b8c(lVar7);
            lVar7 = *(long *)puVar13;
          }
          uVar12 = **(undefined8 **)(lVar7 + 0xb8);
          lVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7588);
          func_0x05355fbc(lVar4,uVar12,*(undefined8 *)PTR_DAT_07807820,0);
          plVar5 = (long *)(*(long *)(*(long *)puVar13 + 0xb8) + 8);
          *plVar5 = lVar4;
          func_0x032809c4(plVar5,lVar4);
        }
        iVar2 = func_0x03d3bb0c(uVar11,lVar4,*(undefined8 *)puVar16);
        if (iVar2 < 2) {
          unaff_x20 = *(long **)((long)puVar6 + -0x10);
          unaff_x19 = *(long *)((long)puVar6 + -8);
          unaff_x22 = *(undefined8 *)((long)puVar6 + -0x20);
          unaff_x21 = *(long *)((long)puVar6 + -0x18);
          unaff_x24 = *(undefined **)((long)puVar6 + -0x30);
          unaff_x23 = *(undefined **)((long)puVar6 + -0x28);
          unaff_x30 = *(undefined8 *)((long)puVar6 + -0x40);
          goto SUB_06758ca8;
        }
      }
      return;
    }
    *(undefined1 *)(*(long *)(lVar7 + 0x88) + 0x29) = 0;
  }
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
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
  lVar4 = func_0x02f09514();
  *(code **)((long)puVar6 + -0x60) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  if (*(long *)(lVar4 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x88) + 0x20) = 0;
    return;
  }
  lVar4 = func_0x03280cac();
  *(code **)((long)puVar6 + -0x70) = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped;
  if (*(long *)(lVar4 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x88) + 0x20) = 0;
    return;
  }
  param_1 = func_0x03280cac();
  *(code **)((long)puVar6 + -0x80) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragStarted;
  *(long *)((long)puVar6 + -0x78) = lVar7;
  unaff_x30 = 0x675917c;
  puVar6 = (undefined8 *)((long)puVar6 + -0x80);
  unaff_x19 = param_1;
  unaff_x25 = puVar15;
  unaff_x26 = puVar16;
  unaff_x27 = puVar17;
  goto SUB_06758ca8;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07807800) {
      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
      goto LAB_06759028;
    }
  }
LAB_06758ff0:
  puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07807800,3);
LAB_06759028:
                    /* WARNING: Could not recover jumptable at 0x06759044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

