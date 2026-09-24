/* Ghidra 12.1.2 native pseudocode; RVA 0x6903040; MergeEngine.ECS.Components.Board.BoardItemCountComponent.UpdateItemToUnboxed; status ok */


/* WARNING: Possible PIC construction at 0x06a031d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb33d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb369c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb37ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb3a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04fb37d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a03348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a0342c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a035cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a03770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a035d0) */
/* WARNING: Removing unreachable block (ram,0x06a03430) */
/* WARNING: Removing unreachable block (ram,0x06a0334c) */
/* WARNING: Removing unreachable block (ram,0x04fb3a6c) */
/* WARNING: Removing unreachable block (ram,0x04fb37b0) */
/* WARNING: Removing unreachable block (ram,0x04fb37c4) */
/* WARNING: Removing unreachable block (ram,0x04fb36a0) */
/* WARNING: Removing unreachable block (ram,0x04fb37c8) */
/* WARNING: Removing unreachable block (ram,0x04fb36a4) */
/* WARNING: Removing unreachable block (ram,0x04fb36d8) */
/* WARNING: Removing unreachable block (ram,0x04fb36dc) */
/* WARNING: Removing unreachable block (ram,0x04fb36ec) */
/* WARNING: Removing unreachable block (ram,0x04fb3720) */
/* WARNING: Removing unreachable block (ram,0x04fb372c) */
/* WARNING: Removing unreachable block (ram,0x04fb3730) */
/* WARNING: Removing unreachable block (ram,0x04fb3740) */
/* WARNING: Removing unreachable block (ram,0x04fb37d8) */
/* WARNING: Removing unreachable block (ram,0x04fb37e8) */
/* WARNING: Removing unreachable block (ram,0x04fb37ec) */
/* WARNING: Removing unreachable block (ram,0x04fb37f8) */
/* WARNING: Removing unreachable block (ram,0x04fb3750) */
/* WARNING: Removing unreachable block (ram,0x04fb3758) */
/* WARNING: Removing unreachable block (ram,0x04fb3764) */
/* WARNING: Removing unreachable block (ram,0x04fb376c) */
/* WARNING: Removing unreachable block (ram,0x04fb377c) */
/* WARNING: Removing unreachable block (ram,0x04fb3828) */
/* WARNING: Removing unreachable block (ram,0x04fb3784) */
/* WARNING: Removing unreachable block (ram,0x04fb33d8) */
/* WARNING: Removing unreachable block (ram,0x06a03774) */
/* WARNING: Removing unreachable block (ram,0x06a02d70) */
/* WARNING: Removing unreachable block (ram,0x06a02d88) */
/* WARNING: Removing unreachable block (ram,0x06a02d98) */
/* WARNING: Removing unreachable block (ram,0x06a02dbc) */
/* WARNING: Removing unreachable block (ram,0x06a02da0) */
/* WARNING: Removing unreachable block (ram,0x04fb3990) */
/* WARNING: Removing unreachable block (ram,0x04fb3994) */
/* WARNING: Removing unreachable block (ram,0x04fb39a0) */
/* WARNING: Removing unreachable block (ram,0x04fb39a8) */
/* WARNING: Removing unreachable block (ram,0x04fb39b0) */
/* WARNING: Removing unreachable block (ram,0x04fb39b8) */
/* WARNING: Removing unreachable block (ram,0x04fb39d0) */
/* WARNING: Removing unreachable block (ram,0x04fb39d8) */

ulong * MergeEngine_ECS_Components_Board_BoardItemCountComponent__UpdateItemToUnboxed
                  (long param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *puVar11;
  long *plVar12;
  int iVar10;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  long lVar16;
  uint *puVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  ulong uVar28;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *plVar29;
  undefined8 uVar30;
  undefined8 unaff_x22;
  undefined *puVar31;
  long *unaff_x23;
  long *plVar32;
  long *unaff_x24;
  uint *unaff_x25;
  long lVar33;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 auStack_f0 [2];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  auVar34._8_8_ = unaff_x19;
  auVar34._0_8_ = unaff_x20;
  auVar38._8_8_ = param_2;
  auVar38._0_8_ = param_1;
  puVar31 = (undefined *)0x7e29000;
  if ((bRam0000000007e2990d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990d = 1;
  }
  puVar7 = PTR_DAT_07779820;
  plVar18 = unaff_x23;
  if (param_2 != (long *)0x0) {
    lVar24 = *param_2;
    puVar31 = *(undefined **)(param_1 + 0x30);
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
          puVar13 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06a030f8;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06a030f8:
    uVar14 = (*(code *)*puVar13)(param_2,puVar13[1]);
    plVar18 = (long *)puVar7;
    if (puVar31 != (undefined *)0x0) {
      puVar15 = (ulong *)func_0x04fb27e0(puVar31,uVar14,*(undefined8 *)PTR_DAT_0777a230);
      if (((ulong)puVar15 & 1) == 0) {
        return puVar15;
      }
      if (param_3 != 0) {
        if (*(char *)(param_3 + 0x30) == '\0') {
          lVar24 = *param_2;
          plVar29 = *(long **)(param_1 + 0x38);
          uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                puVar13 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_06a03190;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar7,0);
LAB_06a03190:
          uVar14 = (*(code *)*puVar13)(param_2,puVar13[1]);
          param_3 = 0;
          if (plVar29 != (long *)0x0) {
            iVar10 = func_0x04fb256c(plVar29,uVar14,*(undefined8 *)PTR_DAT_0777a238);
            plVar18 = (long *)(ulong)(iVar10 + 1);
            lVar24 = *(long *)PTR_DAT_0774e618;
            unaff_x30 = 0x6a031d8;
            puVar13 = (undefined8 *)&stack0xffffffffffffffd0;
            unaff_x21 = plVar29;
            unaff_x22 = uVar14;
            unaff_x23 = (long *)puVar7;
            auVar34 = auVar38;
            goto SUB_04fb25d8;
          }
        }
        else {
          lVar24 = *param_2;
          plVar29 = *(long **)(param_1 + 0x40);
          uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                puVar13 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_06a03228;
              }
              uVar26 = uVar26 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar26 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar7,0);
LAB_06a03228:
          uVar14 = (*(code *)*puVar13)(param_2,puVar13[1]);
          param_1 = 0;
          if (plVar29 != (long *)0x0) {
            iVar10 = func_0x04fb256c(plVar29,uVar14,*(undefined8 *)PTR_DAT_0777a238);
            plVar18 = (long *)(ulong)(iVar10 + 1);
            lVar24 = *(long *)PTR_DAT_0774e618;
            puVar13 = (undefined8 *)register0x00000008;
            goto SUB_04fb25d8;
          }
        }
      }
    }
  }
  unaff_x23 = plVar18;
  auVar34 = func_0x03280cac();
  plVar18 = auVar34._8_8_;
  auVar35._8_8_ = puVar31;
  auVar35._0_8_ = plVar18;
  lVar24 = auVar34._0_8_;
  puVar8 = auStack_60;
  uStack_50 = 0x6a03280;
  unaff_x21 = (long *)0x7e29000;
  lStack_48 = param_3;
  lStack_40 = param_1;
  plStack_38 = param_2;
  if ((bRam0000000007e2990e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990e = 1;
  }
  uStack_54 = 0;
  if (plVar18 != (long *)0x0) {
    lVar33 = *plVar18;
    puVar17 = *(uint **)(lVar24 + 0x38);
    uVar26 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
          puVar13 = (undefined8 *)(lVar33 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06a03320;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07779820,0);
LAB_06a03320:
    uVar14 = (*(code *)*puVar13)(plVar18,puVar13[1]);
    auVar36._8_8_ = uVar14;
    auVar36._0_8_ = puVar17;
    lVar24 = 0;
    if (puVar17 != (uint *)0x0) {
      plVar29 = (long *)&uStack_54;
      lVar24 = *(long *)PTR_DAT_0774e668;
      uVar14 = 0x6a0334c;
      goto SUB_04fb40cc;
    }
  }
  auVar34 = func_0x03280cac();
  plVar29 = auVar34._8_8_;
  auVar35._0_8_ = plVar29;
  lVar33 = auVar34._0_8_;
  puVar8 = auStack_90;
  uStack_80 = 0x6a03364;
  uStack_78 = 0x7e29000;
  unaff_x21 = (long *)0x7e29000;
  lStack_70 = lVar24;
  plStack_68 = plVar18;
  if ((bRam0000000007e2990f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e668);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e2990f = 1;
  }
  uStack_84 = 0;
  if (plVar29 != (long *)0x0) {
    lVar24 = *plVar29;
    puVar17 = *(uint **)(lVar33 + 0x40);
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
          puVar13 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06a03404;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar29,*(long *)PTR_DAT_07779820,0);
LAB_06a03404:
    uVar14 = (*(code *)*puVar13)(plVar29,puVar13[1]);
    auVar36._8_8_ = uVar14;
    auVar36._0_8_ = puVar17;
    lVar33 = 0;
    if (puVar17 != (uint *)0x0) {
      plVar29 = (long *)&uStack_84;
      lVar24 = *(long *)PTR_DAT_0774e668;
      uVar14 = 0x6a03430;
      goto SUB_04fb40cc;
    }
  }
  auVar38 = func_0x03280cac();
  plVar18 = auVar38._8_8_;
  puVar13 = auStack_c0;
  auStack_c0[0] = 0x6a03448;
  uStack_a8 = 0x7e29000;
  uVar30 = 0x7e29000;
  puStack_b0 = puVar31;
  lStack_a0 = lVar33;
  plStack_98 = plVar29;
  if ((bRam0000000007e29910 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29910 = 1;
  }
  puVar7 = PTR_DAT_07779820;
  if (plVar18 != (long *)0x0) {
    lVar24 = *plVar18;
    lVar33 = *(long *)(auVar38._0_8_ + 0x30);
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06a034fc;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07779820,0);
LAB_06a034fc:
    uVar14 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    uVar30 = 0;
    puVar31 = puVar7;
    if (lVar33 != 0) {
      puVar15 = (ulong *)func_0x04fb27e0(lVar33,uVar14,*(undefined8 *)PTR_DAT_0777a230);
      if (((ulong)puVar15 & 1) == 0) {
        return puVar15;
      }
      lVar24 = *plVar18;
      plVar29 = *(long **)(auVar38._0_8_ + 0x38);
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_06a03588;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar7,0);
LAB_06a03588:
      uVar14 = (*(code *)*puVar11)(plVar18,puVar11[1]);
      uVar30 = 0;
      if (plVar29 != (long *)0x0) {
        iVar10 = func_0x04fb256c(plVar29,uVar14,*(undefined8 *)PTR_DAT_0777a238);
        plVar18 = (long *)(ulong)(iVar10 - 1);
        lVar24 = *(long *)PTR_DAT_0774e618;
        unaff_x30 = 0x6a035d0;
        unaff_x21 = plVar29;
        unaff_x22 = uVar14;
        auVar34 = auVar38;
        goto SUB_04fb25d8;
      }
    }
  }
  auVar34 = func_0x03280cac();
  plVar18 = auVar34._8_8_;
  puVar13 = auStack_f0;
  auStack_f0[0] = 0x6a035ec;
  puStack_e0 = puVar31;
  uStack_d8 = uVar30;
  auStack_d0 = auVar38;
  if ((bRam0000000007e29911 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a230);
    func_0x03280a18(PTR_DAT_0777a238);
    func_0x03280a18(PTR_DAT_0774e618);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e29911 = 1;
  }
  puVar31 = PTR_DAT_07779820;
  if (plVar18 != (long *)0x0) {
    lVar24 = *plVar18;
    lVar33 = *(long *)(auVar34._0_8_ + 0x30);
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_07779820) {
          puVar11 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_06a036a0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_07779820,0);
LAB_06a036a0:
    uVar14 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    if (lVar33 != 0) {
      puVar15 = (ulong *)func_0x04fb27e0(lVar33,uVar14,*(undefined8 *)PTR_DAT_0777a230);
      if (((ulong)puVar15 & 1) == 0) {
        return puVar15;
      }
      lVar24 = *plVar18;
      plVar29 = *(long **)(auVar34._0_8_ + 0x38);
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar31) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_06a0372c;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar31,0);
LAB_06a0372c:
      uVar14 = (*(code *)*puVar11)(plVar18,puVar11[1]);
      if (plVar29 != (long *)0x0) {
        iVar10 = func_0x04fb256c(plVar29,uVar14,*(undefined8 *)PTR_DAT_0777a238);
        plVar18 = (long *)(ulong)(iVar10 + 1);
        lVar24 = *(long *)PTR_DAT_0774e618;
        unaff_x30 = 0x6a03774;
        unaff_x21 = plVar29;
        unaff_x22 = uVar14;
SUB_04fb25d8:
        auVar37._8_8_ = uVar14;
        auVar37._0_8_ = plVar29;
        uVar26 = 1;
        uVar19 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x118);
        do {
          uVar28 = auVar34._8_8_;
          plVar23 = auVar37._8_8_;
          lVar24 = auVar37._0_8_;
          *(uint **)((long)puVar13 + -0x60) = unaff_x29;
          *(undefined8 *)((long)puVar13 + -0x58) = unaff_x30;
          *(long **)((long)puVar13 + -0x50) = unaff_x28;
          *(undefined **)((long)puVar13 + -0x48) = unaff_x27;
          *(undefined **)((long)puVar13 + -0x40) = unaff_x26;
          *(uint **)((long)puVar13 + -0x38) = unaff_x25;
          *(long **)((long)puVar13 + -0x30) = unaff_x24;
          *(long **)((long)puVar13 + -0x28) = unaff_x23;
          *(undefined8 *)((long)puVar13 + -0x20) = unaff_x22;
          *(long **)((long)puVar13 + -0x18) = unaff_x21;
          *(undefined1 (*) [16])((long)puVar13 + -0x10) = auVar34;
          unaff_x29 = (uint *)((ulong)plVar18 & 0xffffffff);
          plVar29 = plVar18;
          if (plVar23 == (long *)0x0) {
            func_0x057a867c(5);
          }
          *(int *)(lVar24 + 0x2c) = *(int *)(lVar24 + 0x2c) + 1;
          if (*(long *)(lVar24 + 0x10) == 0) {
            plVar29 = *(long **)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x10);
            func_0x04fb2f50(lVar24,0);
          }
          plVar32 = *(long **)(lVar24 + 0x30);
          lVar33 = *(long *)(lVar24 + 0x18);
          if (plVar32 == (long *)0x0) {
            if (plVar23 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar23 + 0x158))(plVar23,*(undefined8 *)(*plVar23 + 0x160));
              goto LAB_04fb3138;
            }
          }
          else {
            lVar16 = *(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = func_0x0325681c(lVar16);
            }
            lVar22 = *plVar32;
            uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar16) {
                  puVar11 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                  goto LAB_04fb3128;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar32,lVar16,1);
LAB_04fb3128:
            plVar29 = (long *)puVar11[1];
            uVar9 = (*(code *)*puVar11)(plVar32,plVar23);
LAB_04fb3138:
            lVar16 = *(long *)(lVar24 + 0x10);
            if (lVar16 != 0) {
              uVar21 = *(uint *)(lVar16 + 0x18);
              uVar9 = uVar9 & 0x7fffffff;
              unaff_x27 = (undefined *)(ulong)uVar9;
              iVar10 = 0;
              if (uVar21 != 0) {
                iVar10 = (int)uVar9 / (int)uVar21;
              }
              uVar20 = uVar9 - iVar10 * uVar21;
              plVar12 = plVar32;
              if (uVar20 < uVar21) {
                unaff_x28 = (long *)(lVar16 + (ulong)uVar20 * 4 + 0x20);
                uVar21 = *(int *)unaff_x28 - 1;
                uVar28 = (ulong)uVar21;
                if (plVar32 == (long *)0x0) {
                  plVar12 = (long *)func_0x039574b0(*(undefined8 *)
                                                     (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) +
                                                     0x18));
                  if (lVar33 != 0) {
                    uVar14 = *(undefined8 *)(lVar33 + 0x18);
                    uVar20 = (uint)uVar14;
                    if (uVar21 < uVar20) {
                      *(int *)((long)puVar13 + -100) = (int)uVar26;
                      uVar26 = 0;
                      unaff_x25 = (uint *)0x18;
                      do {
                        uVar21 = (uint)uVar14;
                        uVar20 = (uint)uVar28;
                        uVar28 = (ulong)(int)uVar20;
                        plVar32 = plVar12;
                        if (*(uint *)(lVar33 + (long)(int)uVar20 * 0x18 + 0x20) == uVar9) {
                          if (plVar12 == (long *)0x0) goto LAB_04fb348c;
                          plVar29 = plVar23;
                          uVar25 = (**(code **)(*plVar12 + 0x1b8))
                                             (plVar12,*(undefined8 *)(lVar33 + uVar28 * 0x18 + 0x28)
                                              ,plVar23,*(undefined8 *)(*plVar12 + 0x1c0));
                          if ((uVar25 & 1) != 0) {
                            if ((*(uint *)((long)puVar13 + -100) & 0xff) == 2) goto LAB_04fb3474;
                            if ((*(uint *)((long)puVar13 + -100) & 0xff) != 1) {
                              return (ulong *)0x0;
                            }
                            if (uVar20 < *(uint *)(lVar33 + 0x18)) {
                              *(int *)(lVar33 + uVar28 * 0x18 + 0x30) = (int)plVar18;
                              return (ulong *)0x1;
                            }
                            goto LAB_04fb3488;
                          }
                          uVar21 = *(uint *)(lVar33 + 0x18);
                        }
                        if (uVar21 <= uVar20) goto LAB_04fb3488;
                        uVar2 = *(uint *)(lVar33 + uVar28 * 0x18 + 0x24);
                        uVar28 = (ulong)uVar2;
                        if ((int)uVar21 <= (int)uVar26) {
                          func_0x057b8684(0);
                        }
                        uVar14 = *(undefined8 *)(lVar33 + 0x18);
                        uVar26 = (ulong)((int)uVar26 + 1);
                        uVar20 = (uint)uVar14;
                      } while (uVar2 < uVar20);
                    }
                    goto LAB_04fb3300;
                  }
                }
                else if (lVar33 != 0) {
                  uVar14 = *(undefined8 *)(lVar33 + 0x18);
                  uVar20 = (uint)uVar14;
                  if (uVar21 < uVar20) {
                    *(int *)((long)puVar13 + -0x68) = (int)plVar18;
                    *(int *)((long)puVar13 + -100) = (int)uVar26;
                    unaff_x29 = (uint *)0x0;
                    uVar26 = 0x18;
                    do {
                      uVar21 = (uint)uVar14;
                      uVar20 = (uint)uVar28;
                      uVar28 = (ulong)(int)uVar20;
                      if (*(uint *)(lVar33 + (long)(int)uVar20 * 0x18 + 0x20) == uVar9) {
                        lVar16 = *(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 8);
                        unaff_x25 = *(uint **)(lVar33 + uVar28 * 0x18 + 0x28);
                        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                          lVar16 = func_0x0325681c(lVar16);
                        }
                        lVar22 = *plVar32;
                        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
                        if (uVar25 != 0) {
                          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) == lVar16) {
                              puVar11 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
                              goto LAB_04fb320c;
                            }
                            uVar25 = uVar25 - 1;
                            piVar27 = piVar27 + 4;
                          } while (uVar25 != 0);
                        }
                        puVar11 = (undefined8 *)func_0x03256b10(plVar32,lVar16,0);
LAB_04fb320c:
                        plVar29 = plVar23;
                        uVar25 = (*(code *)*puVar11)(plVar32,unaff_x25,plVar23,puVar11[1]);
                        if ((uVar25 & 1) != 0) {
                          if ((*(uint *)((long)puVar13 + -100) & 0xff) == 2) {
LAB_04fb3474:
                            func_0x057b8580(plVar23,0);
                            return (ulong *)0x0;
                          }
                          if ((*(uint *)((long)puVar13 + -100) & 0xff) != 1) {
                            return (ulong *)0x0;
                          }
                          if (uVar20 < *(uint *)(lVar33 + 0x18)) {
                            *(undefined4 *)(lVar33 + uVar28 * 0x18 + 0x30) =
                                 *(undefined4 *)((long)puVar13 + -0x68);
                            return (ulong *)0x1;
                          }
                          goto LAB_04fb3488;
                        }
                        uVar21 = *(uint *)(lVar33 + 0x18);
                      }
                      if (uVar21 <= uVar20) goto LAB_04fb3488;
                      uVar2 = *(uint *)(lVar33 + uVar28 * 0x18 + 0x24);
                      uVar28 = (ulong)uVar2;
                      if ((int)uVar21 <= (int)unaff_x29) {
                        func_0x057b8684(0);
                      }
                      uVar14 = *(undefined8 *)(lVar33 + 0x18);
                      unaff_x29 = (uint *)(ulong)((int)unaff_x29 + 1);
                      uVar20 = (uint)uVar14;
                    } while (uVar2 < uVar20);
                    unaff_x29 = (uint *)(ulong)*(uint *)((long)puVar13 + -0x68);
                  }
LAB_04fb3300:
                  plVar12 = plVar32;
                  if (*(int *)(lVar24 + 0x28) < 1) {
                    uVar21 = *(uint *)(lVar24 + 0x20);
                    uVar28 = (ulong)uVar21;
                    if (uVar21 == uVar20) {
                      func_0x04fb384c(lVar24,*(undefined8 *)
                                              (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x1b8));
                      lVar16 = *(long *)(lVar24 + 0x10);
                      *(uint *)(lVar24 + 0x20) = uVar21 + 1;
                      if (lVar16 == 0) goto LAB_04fb348c;
                      uVar20 = *(uint *)(lVar16 + 0x18);
                      iVar10 = 0;
                      if (uVar20 != 0) {
                        iVar10 = (int)uVar9 / (int)uVar20;
                      }
                      uVar2 = uVar9 - iVar10 * uVar20;
                      if (uVar20 <= uVar2) goto LAB_04fb3488;
                      lVar33 = *(long *)(lVar24 + 0x18);
                      unaff_x28 = (long *)(lVar16 + (ulong)uVar2 * 4 + 0x20);
                    }
                    else {
                      lVar33 = *(long *)(lVar24 + 0x18);
                      *(uint *)(lVar24 + 0x20) = uVar21 + 1;
                    }
                    if (lVar33 == 0) goto LAB_04fb348c;
                    if (*(uint *)(lVar33 + 0x18) <= uVar21) goto LAB_04fb3488;
                    lVar16 = (long)(int)uVar21;
                  }
                  else {
                    *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + -1;
                    uVar21 = *(uint *)(lVar24 + 0x24);
                    uVar28 = (ulong)uVar21;
                    if (*(uint *)(lVar33 + 0x18) <= uVar21) goto LAB_04fb3488;
                    lVar16 = (long)(int)uVar21;
                    *(undefined4 *)(lVar24 + 0x24) = *(undefined4 *)(lVar33 + lVar16 * 0x18 + 0x24);
                  }
                  lVar33 = lVar33 + lVar16 * 0x18;
                  *(uint *)(lVar33 + 0x20) = uVar9;
                  lVar24 = *unaff_x28;
                  puVar15 = (ulong *)(lVar33 + 0x28);
                  *puVar15 = (ulong)plVar23;
                  *(int *)(lVar33 + 0x24) = (int)lVar24 + -1;
                  goto SUB_032809c4;
                }
              }
              else {
LAB_04fb3488:
                func_0x03280cb4();
                plVar32 = plVar12;
              }
            }
          }
LAB_04fb348c:
          lVar24 = func_0x03280cac();
          unaff_x26 = PTR_DAT_07781380;
          *(undefined8 *)((long)puVar13 + -0xc0) = 0x4fb3490;
          *(undefined **)((long)puVar13 + -0xb8) = unaff_x27;
          *(long *)((long)puVar13 + -0xb0) = lVar33;
          *(uint **)((long)puVar13 + -0xa8) = unaff_x25;
          *(long **)((long)puVar13 + -0xa0) = plVar32;
          *(ulong *)((long)puVar13 + -0x98) = uVar26;
          *(ulong *)((long)puVar13 + -0x90) = uVar19;
          *(undefined1 (*) [16])((long)puVar13 + -0x88) = auVar37;
          *(ulong *)((long)puVar13 + -0x78) = uVar28;
          uVar28 = 0x7e1b000;
          if ((bRam0000000007e1b871 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07781610);
            func_0x03280a18(PTR_DAT_07781618);
            func_0x03280a18(PTR_DAT_07781380);
            func_0x03280a18(PTR_DAT_0774e558);
            func_0x03280a18(PTR_DAT_07781600);
            func_0x03280a18(PTR_DAT_0777e440);
            func_0x03280a18(PTR_DAT_07781608);
            func_0x03280a18(PTR_DAT_0775b648);
            bRam0000000007e1b871 = 1;
          }
          lVar33 = *(long *)unaff_x26;
          *(undefined8 *)((long)puVar13 + -200) = 0;
          if (*(int *)(lVar33 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar33 = func_0x057624fc(0);
          if (lVar33 != 0) {
            func_0x04e91150(lVar33,lVar24,(undefined1 *)((long)puVar13 + -200),
                            *(undefined8 *)PTR_DAT_07781618);
            if (*(long *)((long)puVar13 + -200) == 0) {
              return (ulong *)0x0;
            }
            uVar25 = func_0x056933d8(*(long *)((long)puVar13 + -200),*(undefined8 *)PTR_DAT_0775b648
                                     ,0);
            puVar31 = PTR_DAT_0774e558;
            if (*(long *)((long)puVar13 + -200) != 0) {
              uVar28 = uVar25 & 0xffffffff;
              uVar19 = func_0x056933d8(*(long *)((long)puVar13 + -200),
                                       *(undefined8 *)PTR_DAT_07781600,0);
              lVar33 = *(long *)puVar31;
              lVar16 = *(long *)((long)puVar13 + -200);
              uVar19 = uVar19 & 0xffffffff;
              plVar32 = *(long **)(*(long *)(plVar29[4] + 0xc0) + 0x170);
              if (*(int *)(lVar33 + 0xe0) == 0) {
                func_0x03280b8c(lVar33);
              }
              uVar14 = func_0x057a51c4(plVar32,0);
              uVar26 = 0;
              unaff_x27 = puVar31;
              if (lVar16 != 0) {
                lVar33 = func_0x05690f88(lVar16,*(undefined8 *)PTR_DAT_0777e440,uVar14,0);
                lVar16 = *(long *)(*(long *)(plVar29[4] + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = func_0x0325681c(lVar16);
                }
                if (lVar33 == 0) {
LAB_04fb3644:
                  uVar26 = 0;
                }
                else {
                  uVar26 = func_0x03280b90(lVar33,lVar16);
                  if (uVar26 == 0) {
                    func_0x03281048(lVar33,lVar16);
                    goto LAB_04fb3644;
                  }
                }
                puVar15 = (ulong *)(lVar24 + 0x30);
                *puVar15 = uVar26;
                lVar24 = *(long *)(*(long *)(plVar29[4] + 0xc0) + 8);
                if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                  lVar24 = func_0x0325681c(lVar24);
                }
                if ((lVar33 != 0) && (lVar16 = func_0x03280b90(lVar33,lVar24), lVar16 == 0)) {
                  func_0x03281048(lVar33,lVar24);
                }
                goto SUB_032809c4;
              }
            }
          }
          func_0x03280cac();
          func_0x057b819c(0x10,0);
          func_0x03280cac();
          auVar34 = func_0x03281048(plVar32,uVar26);
          puVar31 = PTR_DAT_07781380;
          lVar33 = auVar34._0_8_;
          *(undefined8 *)((long)puVar13 + -0x100) = 0x4fb384c;
          *(ulong *)((long)puVar13 + -0xf0) = uVar19;
          *(ulong *)((long)puVar13 + -0xe8) = uVar28;
          *(long **)((long)puVar13 + -0xe0) = plVar29;
          *(long *)((long)puVar13 + -0xd8) = lVar24;
          if ((bRam0000000007e1b872 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07781380);
            bRam0000000007e1b872 = 1;
          }
          uVar3 = *(undefined4 *)(lVar33 + 0x20);
          if (*(int *)(*(long *)puVar31 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar9 = func_0x05762478(uVar3,0);
          puVar31 = PTR_DAT_07754420;
          puVar17 = (uint *)(ulong)uVar9;
          lVar24 = *(long *)(*(long *)(*(long *)(auVar34._8_8_ + 0x20) + 0xc0) + 0x1c8);
          *(undefined8 *)((long)puVar13 + -0x120) = *(undefined8 *)((long)puVar13 + -0x100);
          *(undefined **)((long)puVar13 + -0x110) = unaff_x26;
          *(uint **)((long)puVar13 + -0x108) = unaff_x25;
          *(long **)((long)puVar13 + -0x100) = plVar32;
          *(ulong *)((long)puVar13 + -0xf8) = uVar26;
          *(undefined8 *)((long)puVar13 + -0xf0) = *(undefined8 *)((long)puVar13 + -0xf0);
          *(undefined8 *)((long)puVar13 + -0xe8) = *(undefined8 *)((long)puVar13 + -0xe8);
          *(undefined8 *)((long)puVar13 + -0xe0) = *(undefined8 *)((long)puVar13 + -0xe0);
          *(undefined8 *)((long)puVar13 + -0xd8) = *(undefined8 *)((long)puVar13 + -0xd8);
          unaff_x25 = (uint *)0x0;
          if ((bRam0000000007e1b873 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07754420);
            bRam0000000007e1b873 = 1;
          }
          uVar26 = func_0x03280afc(*(undefined8 *)puVar31,puVar17);
          lVar24 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x1b0);
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = func_0x0325681c(lVar24);
          }
          plVar18 = (long *)func_0x03280afc(lVar24,puVar17);
          uVar21 = *(uint *)(lVar33 + 0x20);
          unaff_x24 = (long *)(ulong)uVar21;
          lVar24 = 0;
          plVar29 = plVar18;
          func_0x057b9f30(*(undefined8 *)(lVar33 + 0x18),0,plVar18,0,unaff_x24,0);
          if ((int)uVar21 < 1) {
LAB_04fb3a5c:
            puVar15 = (ulong *)(lVar33 + 0x10);
            *puVar15 = uVar26;
SUB_032809c4:
            if (iRam00000000080486b8 != 0) {
              puVar1 = (ulong *)(((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            return puVar15;
          }
          if (plVar18 != (long *)0x0) {
            uVar21 = *(uint *)(plVar18 + 3);
            plVar23 = (long *)0x0;
            while (plVar23 < (long *)(ulong)uVar21) {
              iVar10 = (int)plVar18[(long)plVar23 * 3 + 4];
              if (-1 < iVar10) {
                if (uVar26 == 0) goto LAB_04fb3a94;
                iVar4 = 0;
                if (uVar9 != 0) {
                  iVar4 = iVar10 / (int)uVar9;
                }
                uVar20 = iVar10 - iVar4 * uVar9;
                if (*(uint *)(uVar26 + 0x18) <= uVar20) break;
                lVar16 = uVar26 + (ulong)uVar20 * 4;
                *(int *)((long)plVar18 + (long)plVar23 * 0x18 + 0x24) = *(int *)(lVar16 + 0x20) + -1
                ;
                *(int *)(lVar16 + 0x20) = (int)plVar23 + 1;
              }
              plVar23 = (long *)((long)plVar23 + 1);
              if (plVar23 == unaff_x24) goto LAB_04fb3a5c;
            }
            func_0x03280cb4();
          }
LAB_04fb3a94:
          auVar34 = func_0x03280cac();
          unaff_x21 = auVar34._8_8_;
          lVar16 = auVar34._0_8_;
          *(uint **)((long)puVar13 + -0x180) = unaff_x29;
          *(undefined8 *)((long)puVar13 + -0x178) = 0x4fb3a98;
          *(long **)((long)puVar13 + -0x170) = unaff_x28;
          *(undefined **)((long)puVar13 + -0x168) = unaff_x27;
          *(undefined **)((long)puVar13 + -0x160) = unaff_x26;
          *(undefined8 *)((long)puVar13 + -0x158) = 0;
          *(long **)((long)puVar13 + -0x150) = unaff_x24;
          *(long **)((long)puVar13 + -0x148) = plVar18;
          *(undefined8 **)((long)puVar13 + -0x140) = (undefined8 *)(lVar33 + 0x18);
          *(ulong *)((long)puVar13 + -0x138) = uVar26;
          *(uint **)((long)puVar13 + -0x130) = puVar17;
          *(long *)((long)puVar13 + -0x128) = lVar33;
          *(long **)((long)puVar13 + -0x188) = plVar29;
          if (unaff_x21 == (long *)0x0) {
            func_0x057a867c(5);
          }
          if (*(long *)(lVar16 + 0x10) == 0) {
            return (ulong *)0x0;
          }
          plVar23 = *(long **)(lVar16 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (unaff_x21 != (long *)0x0) {
              uVar9 = (**(code **)(*unaff_x21 + 0x158))
                                (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x160));
              goto LAB_04fb3b74;
            }
LAB_04fb3da0:
            func_0x03280cac();
          }
          else {
            lVar33 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar13 + -0x188) + 0x20) + 0xc0)
                              + 8);
            if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
              lVar33 = func_0x0325681c(lVar33);
            }
            lVar22 = *plVar23;
            uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar26 != 0) {
              piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar33) {
                  puVar11 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                  goto LAB_04fb3b64;
                }
                uVar26 = uVar26 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar26 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(plVar23,lVar33,1);
LAB_04fb3b64:
            plVar29 = (long *)puVar11[1];
            uVar9 = (*(code *)*puVar11)(plVar23,unaff_x21);
LAB_04fb3b74:
            lVar33 = *(long *)(lVar16 + 0x10);
            if (lVar33 == 0) goto LAB_04fb3da0;
            uVar21 = *(uint *)(lVar33 + 0x18);
            uVar9 = uVar9 & 0x7fffffff;
            unaff_x27 = (undefined *)(ulong)uVar9;
            iVar10 = 0;
            if (uVar21 != 0) {
              iVar10 = (int)uVar9 / (int)uVar21;
            }
            uVar20 = uVar9 - iVar10 * uVar21;
            if (uVar20 < uVar21) {
              uVar21 = *(int *)(lVar33 + (ulong)uVar20 * 4 + 0x20) - 1;
              if ((int)uVar21 < 0) {
                return (ulong *)0x0;
              }
              plVar32 = (long *)0x0;
              unaff_x29 = (uint *)0xffffffff;
              puVar17 = (uint *)0x18;
              *(ulong *)((long)puVar13 + -400) = (ulong)uVar20;
              while( true ) {
                unaff_x24 = (long *)(ulong)uVar21;
                unaff_x26 = *(undefined **)(lVar16 + 0x18);
                plVar18 = plVar32;
                if (unaff_x26 == (undefined *)0x0) break;
                if (*(uint *)(unaff_x26 + 0x18) <= uVar21) goto LAB_04fb3da4;
                unaff_x25 = (uint *)(unaff_x26 + (ulong)uVar21 * 0x18 + 0x20);
                unaff_x28 = unaff_x24;
                if (*unaff_x25 == uVar9) {
                  plVar23 = *(long **)(lVar16 + 0x30);
                  if (plVar23 == (long *)0x0) {
                    plVar12 = (long *)func_0x039574b0(*(undefined8 *)
                                                       (*(long *)(*(long *)(*(long *)((long)puVar13
                                                                                     + -0x188) +
                                                                           0x20) + 0xc0) + 0x18));
                    plVar23 = plVar32;
                    if (plVar12 == (long *)0x0) break;
                    lVar24 = *(long *)(*plVar12 + 0x1c0);
                    plVar29 = unaff_x21;
                    uVar26 = (**(code **)(*plVar12 + 0x1b8))
                                       (plVar12,*(undefined8 *)
                                                 (unaff_x26 + (long)unaff_x24 * 0x18 + 0x28));
                  }
                  else {
                    if (plVar23 == (long *)0x0) break;
                    lVar24 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar13 + -0x188) + 0x20)
                                                + 0xc0) + 8);
                    plVar18 = *(long **)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28);
                    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                      lVar24 = func_0x0325681c(lVar24);
                    }
                    lVar33 = *plVar23;
                    uVar26 = (ulong)*(ushort *)(lVar33 + 0x12e);
                    if (uVar26 != 0) {
                      piVar27 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == lVar24) {
                          puVar11 = (undefined8 *)(lVar33 + (long)*piVar27 * 0x10 + 0x138);
                          goto LAB_04fb3cb0;
                        }
                        uVar26 = uVar26 - 1;
                        piVar27 = piVar27 + 4;
                      } while (uVar26 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x03256b10(plVar23,lVar24,0);
LAB_04fb3cb0:
                    lVar24 = puVar11[1];
                    plVar29 = unaff_x21;
                    uVar26 = (*(code *)*puVar11)(plVar23,plVar18);
                    plVar32 = plVar23;
                  }
                  if ((uVar26 & 1) != 0) {
                    plVar23 = plVar32;
                    if ((int)(uint)unaff_x29 < 0) {
                      lVar33 = *(long *)(lVar16 + 0x10);
                      if (lVar33 == 0) break;
                      if (*(uint *)(lVar33 + 0x18) <= (uint)*(long *)((long)puVar13 + -400))
                      goto LAB_04fb3da4;
                      *(int *)(lVar33 + *(long *)((long)puVar13 + -400) * 4 + 0x20) =
                           *(int *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) + 1;
                    }
                    else {
                      lVar33 = *(long *)(lVar16 + 0x18);
                      if (lVar33 == 0) break;
                      if (*(uint *)(lVar33 + 0x18) <= (uint)unaff_x29) goto LAB_04fb3da4;
                      *(undefined4 *)(lVar33 + (long)unaff_x29 * 0x18 + 0x24) =
                           *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
                    }
                    *unaff_x25 = 0xffffffff;
                    uVar3 = *(undefined4 *)(lVar16 + 0x24);
                    *(undefined8 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x28) = 0;
                    *(undefined4 *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) = uVar3;
                    *(uint *)(lVar16 + 0x24) = uVar21;
                    *(ulong *)(lVar16 + 0x28) =
                         CONCAT44((int)((ulong)*(undefined8 *)(lVar16 + 0x28) >> 0x20) + 1,
                                  (int)*(undefined8 *)(lVar16 + 0x28) + 1);
                    return (ulong *)0x1;
                  }
                }
                unaff_x29 = (uint *)(ulong)uVar21;
                plVar23 = plVar32;
                uVar21 = *(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24);
                if ((int)*(uint *)(unaff_x26 + (long)unaff_x24 * 0x18 + 0x24) < 0) {
                  return (ulong *)0x0;
                }
              }
              goto LAB_04fb3da0;
            }
          }
LAB_04fb3da4:
          auVar35 = func_0x03280cb4();
          plVar32 = auVar35._8_8_;
          lVar33 = auVar35._0_8_;
          puVar8 = (undefined1 *)((long)puVar13 + -0x210);
          *(uint **)((long)puVar13 + -0x1f0) = unaff_x29;
          *(undefined8 *)((long)puVar13 + -0x1e8) = 0x4fb3da8;
          *(long **)((long)puVar13 + -0x1e0) = unaff_x28;
          *(undefined **)((long)puVar13 + -0x1d8) = unaff_x27;
          *(undefined **)((long)puVar13 + -0x1d0) = unaff_x26;
          *(uint **)((long)puVar13 + -0x1c8) = unaff_x25;
          *(long **)((long)puVar13 + -0x1c0) = unaff_x24;
          *(long **)((long)puVar13 + -0x1b8) = plVar18;
          *(long **)((long)puVar13 + -0x1b0) = plVar23;
          *(long **)((long)puVar13 + -0x1a8) = unaff_x21;
          *(uint **)((long)puVar13 + -0x1a0) = puVar17;
          *(long *)((long)puVar13 + -0x198) = lVar16;
          *(long **)((long)puVar13 + -0x200) = plVar29;
          *(long *)((long)puVar13 + -0x1f8) = lVar24;
          if (plVar32 == (long *)0x0) {
            func_0x057a867c(5);
          }
          if (*(long *)(lVar33 + 0x10) == 0) goto LAB_04fb3ff0;
          unaff_x23 = *(long **)(lVar33 + 0x30);
          if (unaff_x23 == (long *)0x0) {
            if (plVar32 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar32 + 0x158))(plVar32,*(undefined8 *)(*plVar32 + 0x160));
              goto LAB_04fb3e84;
            }
LAB_04fb40c4:
            func_0x03280cac();
          }
          else {
            lVar16 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar13 + -0x1f8) + 0x20) + 0xc0)
                              + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = func_0x0325681c(lVar16);
            }
            lVar22 = *unaff_x23;
            uVar26 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar26 != 0) {
              piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar16) {
                  puVar11 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                  goto LAB_04fb3e74;
                }
                uVar26 = uVar26 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar26 != 0);
            }
            puVar11 = (undefined8 *)func_0x03256b10(unaff_x23,lVar16,1);
LAB_04fb3e74:
            plVar29 = (long *)puVar11[1];
            uVar9 = (*(code *)*puVar11)(unaff_x23,plVar32);
LAB_04fb3e84:
            lVar16 = *(long *)(lVar33 + 0x10);
            if (lVar16 == 0) goto LAB_04fb40c4;
            uVar21 = *(uint *)(lVar16 + 0x18);
            uVar9 = uVar9 & 0x7fffffff;
            unaff_x28 = (long *)(ulong)uVar9;
            iVar10 = 0;
            if (uVar21 != 0) {
              iVar10 = (int)uVar9 / (int)uVar21;
            }
            uVar20 = uVar9 - iVar10 * uVar21;
            if (uVar20 < uVar21) {
              iVar10 = *(int *)(lVar16 + (ulong)uVar20 * 4 + 0x20);
              *(ulong *)((long)puVar13 + -0x208) = (ulong)uVar20;
              uVar21 = iVar10 - 1;
              if ((int)uVar21 < 0) {
LAB_04fb3ff0:
                **(undefined4 **)((long)puVar13 + -0x200) = 0;
                return (ulong *)0x0;
              }
              plVar18 = (long *)0x0;
              unaff_x26 = (undefined *)0xffffffff;
              unaff_x21 = (long *)0x18;
              while( true ) {
                unaff_x25 = (uint *)(ulong)uVar21;
                unaff_x27 = *(undefined **)(lVar33 + 0x18);
                unaff_x24 = plVar18;
                if (unaff_x27 == (undefined *)0x0) break;
                if (*(uint *)(unaff_x27 + 0x18) <= uVar21) goto LAB_04fb40c8;
                unaff_x29 = (uint *)(unaff_x27 + (ulong)uVar21 * 0x18 + 0x20);
                puVar17 = unaff_x25;
                if (*unaff_x29 == uVar9) {
                  unaff_x23 = *(long **)(lVar33 + 0x30);
                  if (unaff_x23 == (long *)0x0) {
                    plVar23 = (long *)func_0x039574b0(*(undefined8 *)
                                                       (*(long *)(*(long *)(*(long *)((long)puVar13
                                                                                     + -0x1f8) +
                                                                           0x20) + 0xc0) + 0x18));
                    unaff_x23 = plVar18;
                    if (plVar23 == (long *)0x0) break;
                    lVar24 = *(long *)(*plVar23 + 0x1c0);
                    plVar29 = plVar32;
                    uVar26 = (**(code **)(*plVar23 + 0x1b8))
                                       (plVar23,*(undefined8 *)
                                                 (unaff_x27 + (long)unaff_x25 * 0x18 + 0x28));
                  }
                  else {
                    if (unaff_x23 == (long *)0x0) break;
                    lVar24 = *(long *)(*(long *)(*(long *)(*(long *)((long)puVar13 + -0x1f8) + 0x20)
                                                + 0xc0) + 8);
                    unaff_x24 = *(long **)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28);
                    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                      lVar24 = func_0x0325681c(lVar24);
                    }
                    lVar16 = *unaff_x23;
                    uVar26 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar26 != 0) {
                      piVar27 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == lVar24) {
                          puVar11 = (undefined8 *)(lVar16 + (long)*piVar27 * 0x10 + 0x138);
                          goto LAB_04fb3fc0;
                        }
                        uVar26 = uVar26 - 1;
                        piVar27 = piVar27 + 4;
                      } while (uVar26 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x03256b10(unaff_x23,lVar24,0);
LAB_04fb3fc0:
                    lVar24 = puVar11[1];
                    plVar29 = plVar32;
                    uVar26 = (*(code *)*puVar11)(unaff_x23,unaff_x24);
                    plVar18 = unaff_x23;
                  }
                  if ((uVar26 & 1) != 0) {
                    unaff_x23 = plVar18;
                    if ((int)(uint)unaff_x26 < 0) {
                      lVar16 = *(long *)(lVar33 + 0x10);
                      if (lVar16 == 0) break;
                      if (*(uint *)(lVar16 + 0x18) <= (uint)*(long *)((long)puVar13 + -0x208))
                      goto LAB_04fb40c8;
                      *(int *)(lVar16 + *(long *)((long)puVar13 + -0x208) * 4 + 0x20) =
                           *(int *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) + 1;
                    }
                    else {
                      lVar16 = *(long *)(lVar33 + 0x18);
                      if (lVar16 == 0) break;
                      if (*(uint *)(lVar16 + 0x18) <= (uint)unaff_x26) goto LAB_04fb40c8;
                      *(undefined4 *)(lVar16 + (long)unaff_x26 * 0x18 + 0x24) =
                           *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
                    }
                    **(undefined4 **)((long)puVar13 + -0x200) =
                         *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x30);
                    *unaff_x29 = 0xffffffff;
                    uVar3 = *(undefined4 *)(lVar33 + 0x24);
                    *(undefined8 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x28) = 0;
                    *(undefined4 *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) = uVar3;
                    *(uint *)(lVar33 + 0x24) = uVar21;
                    *(ulong *)(lVar33 + 0x28) =
                         CONCAT44((int)((ulong)*(undefined8 *)(lVar33 + 0x28) >> 0x20) + 1,
                                  (int)*(undefined8 *)(lVar33 + 0x28) + 1);
                    return (ulong *)0x1;
                  }
                }
                unaff_x26 = (undefined *)(ulong)uVar21;
                unaff_x23 = plVar18;
                uVar21 = *(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24);
                if ((int)*(uint *)(unaff_x27 + (long)unaff_x25 * 0x18 + 0x24) < 0)
                goto LAB_04fb3ff0;
              }
              goto LAB_04fb40c4;
            }
          }
LAB_04fb40c8:
          uVar14 = 0x4fb40cc;
          auVar36 = func_0x03280cb4();
SUB_04fb40cc:
          lVar33 = auVar36._0_8_;
          auVar34._8_8_ = plVar29;
          auVar34._0_8_ = lVar33;
          unaff_x22 = auVar35._8_8_;
          puVar13 = (undefined8 *)(puVar8 + -0x20);
          *(undefined8 *)(puVar8 + -0x20) = uVar14;
          *(uint **)(puVar8 + -0x10) = puVar17;
          *(long *)(puVar8 + -8) = auVar35._0_8_;
          plVar18 = *(long **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x110);
          uVar9 = func_0x04fb2c6c(lVar33,auVar36._8_8_);
          if ((int)uVar9 < 0) {
            *(undefined4 *)plVar29 = 0;
            goto LAB_04fb411c;
          }
          lVar33 = *(long *)(lVar33 + 0x18);
          if (lVar33 == 0) {
            func_0x03280cac();
          }
          else if (uVar9 < *(uint *)(lVar33 + 0x18)) {
            *(undefined4 *)plVar29 = *(undefined4 *)(lVar33 + (ulong)uVar9 * 0x18 + 0x30);
LAB_04fb411c:
            return (ulong *)(ulong)(~uVar9 >> 0x1f);
          }
          unaff_x30 = 0x4fb4138;
          auVar37 = func_0x03280cb4();
          uVar26 = 0;
          uVar19 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x118);
        } while( true );
      }
    }
  }
  lVar24 = func_0x03280cac();
  return (ulong *)(ulong)*(uint *)(lVar24 + 0x48);
}

