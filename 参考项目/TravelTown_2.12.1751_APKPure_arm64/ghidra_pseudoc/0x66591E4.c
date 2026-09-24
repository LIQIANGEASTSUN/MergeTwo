/* Ghidra 12.1.2 native pseudocode; RVA 0x66591E4; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.TaskRewardCollected; status ok */


/* WARNING: Possible PIC construction at 0x06759178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675917c) */
/* WARNING: Removing unreachable block (ram,0x06759194) */
/* WARNING: Removing unreachable block (ram,0x067591a4) */
/* WARNING: Removing unreachable block (ram,0x067591b8) */
/* WARNING: Removing unreachable block (ram,0x067591ac) */
/* WARNING: Removing unreachable block (ram,0x067591b0) */
/* WARNING: Removing unreachable block (ram,0x06759184) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskRewardCollected(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar12;
  int iVar13;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 unaff_x23;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 unaff_x24;
  undefined *puVar19;
  undefined *unaff_x25;
  undefined *puVar20;
  undefined *unaff_x26;
  undefined *puVar21;
  undefined *unaff_x27;
  undefined8 uVar22;
  undefined1 auVar23 [12];
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (*(long *)(param_1 + 0x88) == 0) {
      uVar22 = 0x6759208;
      lVar7 = func_0x03280cac();
      puVar2 = &stack0xfffffffffffffff0;
      while( true ) {
        lVar9 = lVar7;
        *(undefined8 *)(puVar2 + -0x40) = uVar22;
        *(undefined8 *)(puVar2 + -0x30) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x23;
        *(undefined8 *)(puVar2 + -0x20) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x18) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x10) = unaff_x20;
        *(long *)(puVar2 + -8) = unaff_x19;
        unaff_x20 = 0x7e28000;
        if ((bRam0000000007e28058 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07807818);
          func_0x03280a18(PTR_DAT_077e7588);
          func_0x03280a18(PTR_DAT_077e7568);
          func_0x03280a18(PTR_DAT_07807820);
          func_0x03280a18(PTR_DAT_07807828);
          bRam0000000007e28058 = 1;
        }
        puVar15 = PTR_DAT_07807828;
        lVar7 = *(long *)(lVar9 + 0x88);
        if (lVar7 != 0) break;
        uVar22 = 0x6759374;
        lVar7 = func_0x03280cac();
        puVar2 = puVar2 + -0x40;
        unaff_x19 = lVar9;
      }
      if (*(char *)(lVar7 + 0x28) == '\0') {
        *(undefined8 *)(lVar7 + 0x20) = 0;
      }
      else {
        uVar22 = func_0x03eb6ac8(lVar9,*(undefined8 *)PTR_DAT_077e7568);
        lVar7 = *(long *)puVar15;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          func_0x03280b8c(lVar7);
          lVar7 = *(long *)puVar15;
        }
        puVar17 = PTR_DAT_07807818;
        lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar12 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            func_0x03280b8c(lVar7);
            lVar7 = *(long *)puVar15;
          }
          uVar14 = **(undefined8 **)(lVar7 + 0xb8);
          lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e7588);
          func_0x05355fbc(lVar12,uVar14,*(undefined8 *)PTR_DAT_07807820,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar15 + 0xb8) + 8);
          *plVar8 = lVar12;
          func_0x032809c4(plVar8,lVar12);
        }
        iVar3 = func_0x03d3bb0c(uVar22,lVar12,*(undefined8 *)puVar17);
        if (iVar3 < 2) {
          plVar8 = *(long **)(puVar2 + -0x10);
          uVar22 = *(undefined8 *)(puVar2 + -0x20);
          lVar7 = *(long *)(puVar2 + -0x18);
          uVar14 = *(undefined8 *)(puVar2 + -0x40);
          lVar12 = *(long *)(puVar2 + -8);
          puVar15 = *(undefined **)(puVar2 + -0x28);
          puVar17 = *(undefined **)(puVar2 + -0x30);
SUB_06758ca8:
          *(undefined8 *)(puVar2 + -0x50) = uVar14;
          *(undefined **)(puVar2 + -0x48) = unaff_x27;
          *(undefined **)(puVar2 + -0x40) = unaff_x26;
          *(undefined **)(puVar2 + -0x38) = unaff_x25;
          *(undefined **)(puVar2 + -0x30) = puVar17;
          *(undefined **)(puVar2 + -0x28) = puVar15;
          *(undefined8 *)(puVar2 + -0x20) = uVar22;
          *(long *)(puVar2 + -0x18) = lVar7;
          *(long **)(puVar2 + -0x10) = plVar8;
          *(long *)(puVar2 + -8) = lVar12;
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
          lVar12 = *(long *)(lVar9 + 0x88);
          puVar16 = puVar15;
          puVar18 = puVar17;
          puVar19 = unaff_x25;
          puVar20 = unaff_x26;
          puVar21 = unaff_x27;
          if (lVar12 == 0) goto LAB_0675904c;
          if (*(char *)(lVar12 + 0x28) == '\0') {
            return;
          }
          *(undefined1 *)(lVar12 + 0x28) = 0;
          lVar12 = func_0x03eb6ac8(lVar9,*(undefined8 *)puVar1);
          if (lVar12 == 0) goto LAB_0675904c;
          plVar8 = (long *)func_0x04545bc8(lVar12,*(undefined8 *)PTR_DAT_07807810);
          puVar18 = PTR_DAT_07807808;
          puVar19 = PTR_DAT_077d75b8;
          puVar21 = PTR_DAT_077cc678;
          puVar20 = PTR_DAT_0777bfa0;
          puVar16 = PTR_DAT_0774e8e0;
          if (plVar8 == (long *)0x0) goto LAB_06759058;
LAB_06758dac:
          do {
            do {
              lVar7 = *plVar8;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar16) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_06758df8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar16,0);
LAB_06758df8:
              uVar10 = (*(code *)*puVar4)(plVar8,puVar4[1]);
              if ((uVar10 & 1) == 0) {
                lVar7 = 0;
                iVar13 = 5;
                iVar3 = 5;
                if (plVar8 == (long *)0x0) goto LAB_06758f98;
                goto LAB_06758f38;
              }
              lVar7 = *plVar8;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar18) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_06758e54;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar18,0);
LAB_06758e54:
              lVar7 = (*(code *)*puVar4)(plVar8,puVar4[1]);
              if (lVar7 == 0) {
                func_0x03280cac();
                goto LAB_0675904c;
              }
            } while (*(char *)(lVar7 + 0x58) == '\0');
            *(undefined1 *)(lVar7 + 0x58) = 0;
            *(undefined2 *)(lVar7 + 0x65) = 0;
            lVar12 = func_0x03ced81c(lVar7,*(undefined8 *)puVar19);
          } while (((*(char *)(lVar7 + 0x67) != '\0') ||
                   (lVar5 = func_0x03ced81c(lVar7,*(undefined8 *)puVar20), lVar12 == 0)) ||
                  (lVar5 != 0));
          plVar6 = *(long **)(lVar9 + 0x40);
          if (plVar6 == (long *)0x0) goto LAB_06759050;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
          lVar7 = 0;
          if (plVar6 != (long *)0x0) {
            lVar7 = *plVar6;
            uVar22 = *(undefined8 *)(lVar12 + 0x30);
            uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar21) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x23) * 0x10 + 0x138);
                  goto LAB_06758f18;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar4 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar21,0x23);
LAB_06758f18:
            (*(code *)*puVar4)(plVar6,uVar22,puVar4[1]);
            goto LAB_06758dac;
          }
          do {
            func_0x03280cac();
            puVar15 = puVar16;
            puVar17 = puVar18;
            unaff_x25 = puVar19;
            unaff_x26 = puVar20;
            unaff_x27 = puVar21;
LAB_06759058:
            puVar21 = unaff_x27;
            puVar20 = unaff_x26;
            puVar19 = unaff_x25;
            puVar18 = puVar17;
            puVar16 = puVar15;
            func_0x03280cac();
            lVar12 = lVar9;
            do {
              auVar23 = func_0x03280ca4(lVar7);
              uVar22 = auVar23._0_8_;
              if (auVar23._8_4_ != 1) {
                lVar7 = 0;
                if (plVar8 == (long *)0x0) goto LAB_06759120;
                lVar9 = *plVar8;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 == 0) goto LAB_067590f8;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_067590e0;
              }
              plVar6 = (long *)func_0x072ce910(uVar22);
              lVar7 = *plVar6;
              func_0x072ce920();
              iVar13 = 0;
              lVar9 = lVar12;
              iVar3 = 0;
              if (plVar8 != (long *)0x0) {
LAB_06758f38:
                iVar13 = iVar3;
                lVar12 = *plVar8;
                uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
                      puVar4 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_06758f8c;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06758f8c:
                (*(code *)*puVar4)(plVar8,puVar4[1]);
              }
LAB_06758f98:
              lVar12 = lVar9;
            } while (lVar7 != 0);
            if ((iVar13 != 5) && (iVar13 != 0)) {
              return;
            }
            if (*(long *)(lVar9 + 0x40) != 0) {
              plVar6 = *(long **)(*(long *)(lVar9 + 0x40) + 0x40);
              lVar9 = 0;
              if (plVar6 != (long *)0x0) {
                lVar7 = *plVar6;
                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar10 == 0) goto LAB_06758ff0;
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
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
    }
    *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x29) = 0;
  }
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_067590e0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06759114;
    }
  }
LAB_067590f8:
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0774e8c8,0);
LAB_06759114:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_06759120:
  func_0x03365958(uVar22);
  func_0x03280ca4(0);
  lVar9 = func_0x02f09514();
  *(code **)(puVar2 + -0x60) =
       MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__TaskBeingCompletedFired;
  if (*(long *)(lVar9 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar9 + 0x88) + 0x20) = 0;
    return;
  }
  lVar9 = func_0x03280cac();
  *(code **)(puVar2 + -0x70) = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemTapped;
  if (*(long *)(lVar9 + 0x88) != 0) {
    *(undefined8 *)(*(long *)(lVar9 + 0x88) + 0x20) = 0;
    return;
  }
  lVar9 = func_0x03280cac();
  *(code **)(puVar2 + -0x80) = MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__ItemDragStarted;
  *(long *)(puVar2 + -0x78) = lVar12;
  uVar14 = 0x675917c;
  puVar2 = puVar2 + -0x80;
  lVar12 = lVar9;
  puVar15 = puVar16;
  puVar17 = puVar18;
  unaff_x25 = puVar19;
  unaff_x26 = puVar20;
  unaff_x27 = puVar21;
  goto SUB_06758ca8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_06758fd8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07807800) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
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

