/* Ghidra 12.1.2 native pseudocode; RVA 0x6903AE8; MergeEngine.ECS.Components.Board.BoardQueueComponent.LoadComponent; status ok */


/* WARNING: Possible PIC construction at 0x04321a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04321a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f06f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x054f081c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x054f0774) */
/* WARNING: Removing unreachable block (ram,0x054f0790) */
/* WARNING: Removing unreachable block (ram,0x054f0780) */
/* WARNING: Removing unreachable block (ram,0x06a04098) */
/* WARNING: Removing unreachable block (ram,0x04321a54) */
/* WARNING: Removing unreachable block (ram,0x04321a18) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */
/* WARNING: Removing unreachable block (ram,0x054f0820) */

long * MergeEngine_ECS_Components_Board_BoardQueueComponent__LoadComponent
                 (long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long extraout_x1;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined *unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  code *unaff_x22;
  code *pcVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined8 unaff_x30;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  code *pcStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  puVar11 = PTR_DAT_07826958;
  pcVar19 = (code *)PTR_DAT_07826950;
  if ((bRam0000000007e29915 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826950);
    func_0x03280a18(PTR_DAT_07826958);
    func_0x03280a18(PTR_DAT_07757c48);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07826960);
    func_0x03280a18(PTR_DAT_07826968);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07826970);
    bRam0000000007e29915 = 1;
  }
  plVar21 = (long *)(param_1 + 0x28);
  plVar22 = (long *)(param_1 + 0x30);
  uVar8 = func_0x03d37218(*plVar21,*plVar22,*(undefined8 *)pcVar19);
  puVar13 = *(undefined **)(param_1 + 0x48);
  plVar9 = (long *)func_0x03d60588(param_2,uVar8,puVar13,*(undefined8 *)puVar11);
  puVar4 = PTR_DAT_07826970;
  if (*plVar21 == 0) {
LAB_06a03e18:
    func_0x03280cac();
  }
  else {
    func_0x054f0998(*plVar21,*(undefined8 *)PTR_DAT_07826970);
    param_2 = plVar9;
    puVar11 = puVar4;
    if ((*plVar22 == 0) || (func_0x054f0998(*plVar22,*(undefined8 *)puVar4), plVar9 == (long *)0x0))
    goto LAB_06a03e18;
    lVar16 = *plVar9;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07826960) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06a03c3c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined *)0x0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar9);
LAB_06a03c3c:
    pcVar19 = (code *)PTR_DAT_0774e8c8;
    param_2 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = PTR_DAT_07826968;
    puVar5 = PTR_DAT_07757c48;
    puVar4 = PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
LAB_06a03c70:
      lVar16 = *param_2;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06a03cbc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined *)0x0;
      puVar10 = (undefined8 *)func_0x03256b10(param_2);
LAB_06a03cbc:
      plVar9 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
      if (((ulong)plVar9 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        iVar20 = 6;
        iVar7 = 6;
        if (param_2 == (long *)0x0) goto LAB_06a03dc4;
        goto LAB_06a03d6c;
      }
      lVar16 = *param_2;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06a03d18;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined *)0x0;
      puVar10 = (undefined8 *)func_0x03256b10(param_2);
LAB_06a03d18:
      puVar11 = (undefined *)(*(code *)*puVar10)(param_2,puVar10[1]);
      if (puVar11 != (undefined *)0x0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_06a03e14;
        puVar13 = *(undefined **)puVar5;
        uVar17 = func_0x053c0534(*(long *)(param_1 + 0x38),*(undefined8 *)(puVar11 + 0x20));
        if ((uVar17 & 1) == 0) {
          plVar9 = plVar21;
          if (*(int *)(puVar11 + 0x40) != 1) {
            plVar9 = plVar22;
          }
          MergeEngine_ECS_Components_Board_BoardQueueComponent__InsertSorted(uVar17,*plVar9);
          puVar13 = puVar11;
        }
        goto LAB_06a03c70;
      }
      func_0x03280cac();
LAB_06a03e14:
      func_0x03280cac();
      goto LAB_06a03e18;
    }
  }
  func_0x03280cac();
  do {
    auVar23 = func_0x03280ca4(puVar11);
    uVar8 = auVar23._0_8_;
    if (auVar23._8_4_ != 1) {
      if (param_2 == (long *)0x0) goto LAB_06a03ecc;
      lVar16 = *param_2;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 == 0) goto LAB_06a03ea4;
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      goto LAB_06a03e8c;
    }
    puVar10 = (undefined8 *)func_0x072ce910();
    puVar11 = (undefined *)*puVar10;
    plVar9 = (long *)func_0x072ce920();
    iVar20 = 0;
    iVar7 = 0;
    if (param_2 != (long *)0x0) {
LAB_06a03d6c:
      iVar20 = iVar7;
      lVar16 = *param_2;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)pcVar19) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06a03db8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined *)0x0;
      puVar10 = (undefined8 *)func_0x03256b10(param_2);
LAB_06a03db8:
      plVar9 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
    }
LAB_06a03dc4:
  } while (puVar11 != (undefined *)0x0);
  if ((iVar20 != 6) && (iVar20 != 0)) {
    return plVar9;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  puVar13 = unaff_x19;
  pcVar19 = unaff_x22;
  goto SUB_06a03fd0;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_06a03e8c:
    if (*(long *)(piVar18 + -2) == *(long *)pcVar19) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06a03ec0;
    }
  }
LAB_06a03ea4:
  puVar13 = (undefined *)0x0;
  puVar10 = (undefined8 *)func_0x03256b10(param_2);
LAB_06a03ec0:
  (*(code *)*puVar10)(param_2,puVar10[1]);
LAB_06a03ecc:
  func_0x03365958(uVar8);
  func_0x03280ca4(0);
  func_0x02f09514();
  register0x00000008 = (BADSPACEBASE *)&pcStack_70;
  pcStack_70 = MergeEngine_ECS_Components_Board_BoardQueueComponent__InsertSorted;
  uStack_68 = 0;
  plStack_60 = param_2;
  uStack_58 = uVar8;
  if ((bRam0000000007e29922 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826978);
    func_0x03280a18(PTR_DAT_07826980);
    func_0x03280a18(PTR_DAT_07826988);
    func_0x03280a18(PTR_DAT_07826990);
    func_0x03280a18(PTR_DAT_07826998);
    bRam0000000007e29922 = 1;
  }
  puVar11 = PTR_DAT_07826978;
  unaff_x21 = (undefined *)0x7e29000;
  if (extraout_x1 != 0) {
    lVar16 = *(long *)(extraout_x1 + 0x10);
    while( true ) {
      if (lVar16 == 0) {
        lVar16 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_07826990 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        plVar9 = (long *)func_0x03280ca0(lVar16);
        func_0x054ed38c(plVar9,extraout_x1,puVar13);
        if (*(long *)(extraout_x1 + 0x10) == 0) {
          func_0x054f12d8(extraout_x1,plVar9);
        }
        else {
          func_0x054f125c(extraout_x1,*(long *)(extraout_x1 + 0x10),plVar9);
        }
        return plVar9;
      }
      unaff_x21 = puVar11;
      if ((*(long *)(lVar16 + 0x28) == 0) || (puVar13 == (undefined *)0x0)) goto LAB_06a03fcc;
      if (*(long *)(*(long *)(lVar16 + 0x28) + 0x30) <= *(long *)(puVar13 + 0x30)) break;
      lVar16 = func_0x054ed3d8(lVar16,*(undefined8 *)puVar11);
    }
    lVar15 = *(long *)PTR_DAT_07826988;
    lVar12 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x20);
    lVar14 = lVar15;
    pcStack_70 = pcVar19;
    func_0x054f146c();
    if (lVar16 == 0) {
      auVar24 = func_0x03280cac();
      lVar15 = auVar24._0_8_;
      uVar8 = func_0x054f146c(lVar15,auVar24._8_8_,
                              *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20));
      func_0x054f13d4(uVar8,lVar12,
                      *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x38));
      lVar16 = lVar12;
      func_0x054f125c(lVar15,auVar24._8_8_);
      if (lVar12 == 0) {
        auVar24 = func_0x03280cac();
        lVar14 = auVar24._0_8_;
        lVar16 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        plVar21 = (long *)func_0x03280ca0(lVar16);
        func_0x054ed38c(plVar21,lVar14,auVar24._8_8_);
        plVar9 = (long *)(lVar14 + 0x10);
        if (*plVar9 == 0) {
          func_0x054f12d8(lVar14,plVar21);
          return plVar21;
        }
        func_0x054f125c(lVar14,*plVar9,plVar21);
        *(long **)(lVar14 + 0x10) = plVar21;
      }
      else {
        plVar9 = (long *)(lVar12 + 0x10);
        *plVar9 = lVar15;
      }
    }
    else {
      uVar8 = *(undefined8 *)(lVar16 + 0x10);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      plVar21 = (long *)func_0x03280ca0();
      func_0x054ed38c(plVar21,uVar8,puVar13);
      func_0x054f125c(extraout_x1,lVar16,plVar21);
      plVar9 = (long *)(extraout_x1 + 0x10);
      if (lVar16 != *plVar9) {
        return plVar21;
      }
      *plVar9 = (long)plVar21;
    }
    goto SUB_032809c4;
  }
LAB_06a03fcc:
  unaff_x30 = 0x6a03fd0;
  param_1 = func_0x03280cac();
  unaff_x20 = extraout_x1;
SUB_06a03fd0:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -8) = puVar13;
  if ((bRam0000000007e29921 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826940);
    bRam0000000007e29921 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x58);
  uVar8 = func_0x06a048b4(param_1);
  if (lVar16 == 0) {
    lVar16 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x6a04030;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(long *)((long)register0x00000008 + -0x28) = param_1;
    if ((bRam0000000007e29916 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07826970);
      bRam0000000007e29916 = 1;
    }
    puVar11 = PTR_DAT_07826970;
    if (*(long *)(lVar16 + 0x28) != 0) {
      func_0x054f0998(*(long *)(lVar16 + 0x28),*(undefined8 *)PTR_DAT_07826970);
      if (*(long *)(lVar16 + 0x30) != 0) {
        func_0x054f0998(*(long *)(lVar16 + 0x30),*(undefined8 *)puVar11);
        *(undefined1 *)(lVar16 + 0x50) = 0;
        plVar9 = (long *)(lVar16 + 0x40);
        *plVar9 = 0;
        goto SUB_032809c4;
      }
    }
    lVar16 = func_0x03280cac();
    plVar9 = (long *)(lVar16 + 0x40);
    *plVar9 = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_07826940;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(code **)((long)register0x00000008 + -0x20) = pcVar19;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar21 = (long *)func_0x039574b0(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20));
    if (plVar21 == (long *)0x0) {
      auVar24 = func_0x03280cac();
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0x4321a3c;
      *(long *)((long)register0x00000008 + -0x40) = lVar16;
      *(long *)((long)register0x00000008 + -0x38) = lVar14;
      plVar9 = (long *)(auVar24._0_8_ + 0x20);
      *plVar9 = auVar24._8_8_;
    }
    else {
      plVar9 = (long *)(lVar16 + 0x20);
      plVar21 = (long *)(**(code **)(*plVar21 + 0x1b8))
                                  (plVar21,*plVar9,uVar8,*(undefined8 *)(*plVar21 + 0x1c0));
      if (((ulong)plVar21 & 1) != 0) {
        return plVar21;
      }
      *(undefined8 *)(lVar16 + 0x20) = uVar8;
    }
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar9;
}

