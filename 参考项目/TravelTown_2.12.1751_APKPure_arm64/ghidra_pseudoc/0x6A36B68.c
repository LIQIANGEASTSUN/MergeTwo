/* Ghidra 12.1.2 native pseudocode; RVA 0x6A36B68; Merger.MergeBoard.View.MergeBoardCombinationVerificationView.OnVerifyCombinationFailed; status ok */


/* WARNING: Possible PIC construction at 0x06b9b9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9ba18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b9b7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b36c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b9b7c4) */
/* WARNING: Removing unreachable block (ram,0x06b9b7c8) */
/* WARNING: Removing unreachable block (ram,0x06b9b800) */
/* WARNING: Removing unreachable block (ram,0x06b9b7d0) */
/* WARNING: Removing unreachable block (ram,0x06b9b6fc) */
/* WARNING: Removing unreachable block (ram,0x06b9b700) */
/* WARNING: Removing unreachable block (ram,0x06b9b6d8) */
/* WARNING: Removing unreachable block (ram,0x06b9b734) */
/* WARNING: Removing unreachable block (ram,0x06b9b75c) */
/* WARNING: Removing unreachable block (ram,0x06b9b788) */
/* WARNING: Removing unreachable block (ram,0x06b9b794) */
/* WARNING: Removing unreachable block (ram,0x06b9b7b0) */
/* WARNING: Removing unreachable block (ram,0x06b9b6dc) */
/* WARNING: Removing unreachable block (ram,0x06b9ba1c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba20) */
/* WARNING: Removing unreachable block (ram,0x06b9b9d4) */
/* WARNING: Removing unreachable block (ram,0x06b9b9e4) */
/* WARNING: Removing unreachable block (ram,0x06b9ba3c) */
/* WARNING: Removing unreachable block (ram,0x06b9ba00) */
/* WARNING: Removing unreachable block (ram,0x06b9b9ac) */
/* WARNING: Removing unreachable block (ram,0x06b9b9b0) */
/* WARNING: Removing unreachable block (ram,0x06b36c34) */

void Merger_MergeBoard_View_MergeBoardCombinationVerificationView__OnVerifyCombinationFailed
               (long param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined *puVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 extraout_d0;
  undefined8 unaff_d8;
  undefined1 auVar26 [16];
  undefined1 auStack_50 [8];
  
  puVar19 = (undefined *)(param_4 & 0xffffffff);
  if ((bRam0000000007e2a4d4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_0782f5d8);
    bRam0000000007e2a4d4 = 1;
  }
  Merger_MergeBoard_View_MergeBoardCombinationVerificationView__OnPopupClosed(param_1);
  puVar5 = PTR_DAT_077c0ec8;
  if (param_2 != 0) {
    lVar22 = *(long *)(param_1 + 0x28);
    uVar10 = func_0x03d1ae90(param_2,*(undefined8 *)PTR_DAT_077c0ec8);
    if (((param_3 != 0) && (uVar11 = func_0x03d1ae90(param_3,*(undefined8 *)puVar5), lVar22 != 0))
       && (lVar22 = *(long *)(lVar22 + 0x68), lVar22 != 0)) {
      uVar10 = uVar10 & 0xffffffff;
      puVar8 = auStack_50;
      uVar11 = uVar11 & 0xffffffff;
      uVar23 = 0;
      if ((bRam0000000007e2a83c & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c07b8);
        func_0x03280a18(PTR_DAT_07832788);
        func_0x03280a18(PTR_DAT_07832758);
        func_0x03280a18(PTR_DAT_07832790);
        func_0x03280a18(PTR_DAT_07832760);
        func_0x03280a18(PTR_DAT_07779710);
        bRam0000000007e2a83c = 1;
      }
      puVar5 = PTR_DAT_077c07b8;
      plVar24 = *(long **)(lVar22 + 0x18);
      if (plVar24 != (long *)0x0) {
        lVar16 = *plVar24;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c07b8) {
              puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_06b9b8e8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_077c07b8,1);
LAB_06b9b8e8:
        uVar14 = (*(code *)*puVar13)(plVar24,puVar13[1]);
        Merger_MergeBoard_Extensions_MergeBoardEntitiesExtensions__GetEntityAtPosition
                  (uVar14,uVar10);
        puVar7 = PTR_DAT_07832788;
        puVar6 = PTR_DAT_07779710;
        plVar25 = *(long **)(lVar22 + 0x18);
        if (plVar25 != (long *)0x0) {
          lVar22 = *plVar25;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                puVar13 = (undefined8 *)(lVar22 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_06b9b968;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar5,1);
LAB_06b9b968:
          uVar14 = (*(code *)*puVar13)(plVar25,puVar13[1]);
          Merger_MergeBoard_Extensions_MergeBoardEntitiesExtensions__GetEntityAtPosition
                    (uVar14,uVar11);
          uVar14 = func_0x03280ca0(*(undefined8 *)puVar6);
          func_0x060157bc(uVar14,0);
          func_0x03280ca0(*(undefined8 *)puVar7);
          return;
        }
      }
      uVar14 = 0x6b9ba60;
      auVar26 = func_0x03280cac();
      do {
        plVar25 = auVar26._0_8_;
        *(undefined8 *)(puVar8 + -0x30) = uVar14;
        *(undefined **)(puVar8 + -0x28) = puVar19;
        *(ulong *)(puVar8 + -0x20) = uVar23;
        *(ulong *)(puVar8 + -0x18) = uVar10;
        *(ulong *)(puVar8 + -0x10) = uVar11;
        *(long *)(puVar8 + -8) = lVar22;
        if ((bRam0000000007e2a83f & 1) == 0) {
          func_0x03280a18(PTR_DAT_07832798);
          bRam0000000007e2a83f = 1;
        }
        puVar5 = PTR_DAT_07832798;
        lVar22 = plVar25[5];
        if (lVar22 != 0) {
          uVar2 = *(uint *)(lVar22 + 0x18);
          if ((int)uVar2 < 1) {
            return;
          }
          uVar23 = 0;
          while (uVar21 = (uint)uVar23, puVar19 = puVar5, uVar21 < uVar2) {
            plVar25 = *(long **)(lVar22 + (long)(int)uVar21 * 8 + 0x20);
            if (plVar25 == (long *)0x0) goto LAB_06b9bb48;
            lVar16 = *plVar25;
            uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06b9bb14;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)puVar5,0);
LAB_06b9bb14:
            (*(code *)*puVar13)(plVar25,auVar26._8_8_,puVar13[1]);
            uVar2 = *(uint *)(lVar22 + 0x18);
            uVar23 = (ulong)(uVar21 + 1);
            if ((int)uVar2 <= (int)(uVar21 + 1)) {
              return;
            }
          }
          func_0x03280cb4();
        }
LAB_06b9bb48:
        lVar16 = func_0x03280cac();
        puVar5 = PTR_DAT_07779710;
        puVar9 = (undefined8 *)(puVar8 + -0x60);
        *(undefined8 *)(puVar8 + -0x60) = unaff_d8;
        *(undefined8 *)(puVar8 + -0x50) = 0x6b9bb4c;
        *(long *)(puVar8 + -0x48) = lVar22;
        *(long **)(puVar8 + -0x40) = plVar25;
        *(long *)(puVar8 + -0x38) = auVar26._8_8_;
        if ((bRam0000000007e2a83e & 1) == 0) {
          func_0x03280a18(PTR_DAT_078327a0);
          func_0x03280a18(PTR_DAT_07779710);
          bRam0000000007e2a83e = 1;
        }
        lVar22 = func_0x03280ca0(*(undefined8 *)puVar5);
        func_0x060157bc(lVar22,0);
        if (lVar22 == 0) {
          func_0x03280cac();
          return;
        }
        func_0x03ec31a8(extraout_d0,lVar22,*(undefined8 *)PTR_DAT_078327a0);
        unaff_d8 = *(undefined8 *)(puVar8 + -0x60);
        *(undefined8 *)(puVar8 + -0x60) = *(undefined8 *)(puVar8 + -0x50);
        *(ulong *)(puVar8 + -0x50) = uVar23;
        *(undefined8 *)(puVar8 + -0x48) = *(undefined8 *)(puVar8 + -0x48);
        *(undefined8 *)(puVar8 + -0x40) = *(undefined8 *)(puVar8 + -0x40);
        *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
        uVar14 = 0x7e2a000;
        if ((bRam0000000007e2a83d & 1) == 0) {
          func_0x03280a18(PTR_DAT_077c07b8);
          bRam0000000007e2a83d = 1;
        }
        if (*(char *)(lVar16 + 0x40) != '\0') {
          return;
        }
        plVar25 = *(long **)(lVar16 + 0x18);
        if (plVar25 == (long *)0x0) {
LAB_06b9b648:
          func_0x03280cac();
          puVar6 = PTR_DAT_07832768;
          puVar5 = PTR_DAT_07779710;
          *(undefined8 *)(puVar8 + -0xa0) = 0x6b9b64c;
          *(long **)(puVar8 + -0x90) = plVar24;
          *(undefined **)(puVar8 + -0x88) = puVar19;
          *(long **)(puVar8 + -0x80) = plVar25;
          *(undefined8 *)(puVar8 + -0x78) = uVar14;
          *(long *)(puVar8 + -0x70) = lVar22;
          *(long *)(puVar8 + -0x68) = lVar16;
          if ((bRam0000000007e2a83a & 1) == 0) {
            func_0x03280a18(PTR_DAT_07832768);
            func_0x03280a18(PTR_DAT_07832770);
            func_0x03280a18(PTR_DAT_07779710);
            bRam0000000007e2a83a = 1;
          }
          uVar14 = func_0x03280ca0(*(undefined8 *)puVar5);
          func_0x060157bc(uVar14,0);
          func_0x03280ca0(*(undefined8 *)puVar6);
          return;
        }
        lVar15 = *plVar25;
        lVar20 = *(long *)(lVar16 + 0x38);
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_077c07b8) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06b9b60c;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_077c07b8,0);
LAB_06b9b60c:
        uVar12 = (*(code *)*puVar13)(plVar25,puVar13[1]);
        uVar14 = 0;
        if (lVar20 == 0) goto LAB_06b9b648;
        uVar14 = func_0x06015720(lVar20,lVar22,uVar12,0);
        auVar26._8_8_ = uVar14;
        auVar26._0_8_ = lVar16;
        uVar11 = *(ulong *)(puVar8 + -0x40);
        lVar22 = *(long *)(puVar8 + -0x38);
        uVar23 = *(ulong *)(puVar8 + -0x50);
        uVar10 = *(ulong *)(puVar8 + -0x48);
        puVar8 = puVar8 + -0x30;
        uVar14 = *puVar9;
      } while( true );
    }
  }
  lVar22 = func_0x03280cac();
  *(undefined1 *)(lVar22 + 0x40) = 0;
  puVar13 = (undefined8 *)(lVar22 + 0x48);
  *puVar13 = 0;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

