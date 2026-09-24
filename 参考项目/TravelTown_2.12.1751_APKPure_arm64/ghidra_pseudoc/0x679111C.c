/* Ghidra 12.1.2 native pseudocode; RVA 0x679111C; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.CalculatePrice; status ok */


/* WARNING: Possible PIC construction at 0x06891240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06891244) */
/* WARNING: Removing unreachable block (ram,0x068912d0) */
/* WARNING: Removing unreachable block (ram,0x06891248) */
/* WARNING: Removing unreachable block (ram,0x06891264) */
/* WARNING: Removing unreachable block (ram,0x0689126c) */
/* WARNING: Removing unreachable block (ram,0x06891294) */
/* WARNING: Removing unreachable block (ram,0x06891278) */
/* WARNING: Removing unreachable block (ram,0x06891284) */
/* WARNING: Removing unreachable block (ram,0x068912a4) */

ulong MergeEngine_ECS_Systems_Items_SkipCooldownSystem__CalculatePrice
                (double param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar14;
  undefined8 unaff_x30;
  undefined8 uVar15;
  double extraout_d0;
  double dVar16;
  double dVar17;
  double unaff_d8;
  float fVar18;
  undefined8 unaff_d9;
  float fVar19;
  undefined8 unaff_d10;
  undefined1 auVar20 [16];
  double dStack_60;
  code *pcStack_58;
  
  if ((bRam0000000007e28d6a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a750);
    bRam0000000007e28d6a = 1;
  }
  plVar14 = *(long **)(param_2 + 0x60);
  if (plVar14 == (long *)0x0) {
    auVar20 = func_0x03280cac();
    unaff_x21 = auVar20._8_8_;
    uVar10 = auVar20._0_8_;
    pdVar6 = &dStack_60;
    pcStack_58 = MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetSkipCooldownPrice;
    dStack_60 = param_1;
    if ((bRam0000000007e28d69 & 1) == 0) {
      uVar10 = func_0x03280a18(PTR_DAT_07809778);
      bRam0000000007e28d69 = 1;
    }
    uVar15 = 0x6891244;
    plVar14 = param_4;
  }
  else {
    lVar9 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a750) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x43) * 0x10 + 0x138);
          goto LAB_068911b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a750,0x43);
LAB_068911b4:
    uVar10 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    dVar16 = param_1;
    if ((param_3 != 0) && ((uVar10 & 1) != 0)) {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = 0x7e28000;
      if ((bRam0000000007e28d6b & 1) == 0) {
        func_0x03280a18(PTR_DAT_07771f40);
        bRam0000000007e28d6b = 1;
      }
      if ((param_3 != 0) && (lVar9 = *(long *)(param_3 + 0x18), lVar9 != 0)) {
        iVar4 = *(int *)(lVar9 + 0x18);
        if (0 < iVar4) {
          iVar12 = 0;
          do {
            if (iVar4 == iVar12) goto LAB_068913c8;
            lVar13 = *(long *)(lVar9 + (long)iVar12 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_068913c4;
            if ((double)*(float *)(lVar13 + 0x10) < param_1) {
              lVar9 = *(long *)(lVar13 + 0x18);
              if (lVar9 != 0) {
                uVar2 = *(undefined4 *)(lVar9 + 0x10);
                uVar3 = *(undefined4 *)(lVar9 + 0x14);
                uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
                func_0x06b21870(uVar10,uVar2,uVar3,0,0);
                return uVar10;
              }
              goto LAB_068913c4;
            }
            iVar12 = iVar12 + 1;
          } while (iVar4 != iVar12);
        }
        uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
        func_0x06b21870(uVar10,2,1,0,0);
        return uVar10;
      }
LAB_068913c4:
      func_0x03280cac();
LAB_068913c8:
      unaff_x30 = 0x68913cc;
      param_2 = func_0x03280cb4();
      unaff_x19 = param_3;
      dVar16 = extraout_d0;
      unaff_d8 = param_1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    plVar14 = (long *)0x7e28000;
    if ((bRam0000000007e28d6c & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774ee08);
      func_0x03280a18(PTR_DAT_07771f40);
      bRam0000000007e28d6c = 1;
    }
    lVar9 = func_0x068906b0(param_2);
    if (lVar9 != 0) {
      fVar18 = *(float *)(lVar9 + 0x10);
      lVar9 = func_0x068906b0(param_2);
      if (lVar9 != 0) {
        fVar19 = *(float *)(lVar9 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
        }
        dVar16 = (double)func_0x05797bf8(dVar16,(double)fVar19,0);
        dVar16 = dVar16 * (double)fVar18;
        dVar17 = (double)func_0x072ce9c0(dVar16,(undefined1 *)((long)register0x00000008 + -0x38));
        if (0.0 <= dVar16) {
          if (dVar17 == 0.5) {
            dVar16 = *(double *)((long)register0x00000008 + -0x38);
            dVar17 = 1.0;
            goto LAB_068914a4;
          }
          dVar16 = (double)(long)(dVar16 + 0.5);
        }
        else if (dVar17 == -0.5) {
          dVar16 = *(double *)((long)register0x00000008 + -0x38);
          dVar17 = -1.0;
LAB_068914a4:
          if (((long)dVar16 & 1U) != 0) {
            dVar16 = dVar16 + dVar17;
          }
        }
        else {
          dVar16 = (double)(long)(dVar16 + -0.5);
        }
        uVar1 = 0x80000000;
        if (dVar16 != INFINITY) {
          uVar1 = (int)dVar16;
        }
        plVar14 = (long *)(ulong)uVar1;
        lVar9 = func_0x068906b0(param_2);
        if (lVar9 != 0) {
          uVar2 = *(undefined4 *)(lVar9 + 0x18);
          if ((int)uVar1 < 2) {
            uVar1 = 1;
          }
          uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
          func_0x06b21870(uVar10,uVar2,uVar1,0,0);
          return uVar10;
        }
      }
    }
    auVar20 = func_0x03280cac();
    lVar9 = auVar20._8_8_;
    uVar10 = auVar20._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x6891540;
    if (lVar9 == 0) {
      uVar10 = func_0x03280cac();
      return uVar10;
    }
    auVar20._8_8_ = *(undefined8 *)(lVar9 + 0x18);
    auVar20._0_8_ = param_2;
    param_4 = *(long **)(lVar9 + 0x38);
    pdVar6 = (double *)((long)register0x00000008 + -0x40);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x50);
  }
  plVar8 = auVar20._8_8_;
  *(undefined8 *)((long)pdVar6 + -0x20) = uVar15;
  *(undefined8 *)((long)pdVar6 + -0x18) = unaff_x21;
  *(long **)((long)pdVar6 + -0x10) = plVar14;
  *(long *)((long)pdVar6 + -8) = auVar20._0_8_;
  if ((bRam0000000007e28d6d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809778);
    uVar10 = func_0x03280a18(PTR_DAT_07809780);
    bRam0000000007e28d6d = 1;
  }
  puVar5 = PTR_DAT_07809780;
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07809780) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_06891030;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07809780,3);
LAB_06891030:
    uVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar10 & 1) != 0) {
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06891108;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar5,1);
LAB_06891108:
      UNRECOVERED_JUMPTABLE = (code *)*puVar7;
      uVar15 = puVar7[1];
      param_4 = plVar8;
      goto LAB_06891110;
    }
  }
  if (param_4 == (long *)0x0) {
    return uVar10;
  }
  lVar9 = *param_4;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07809778) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_068910ec;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_07809778,1);
LAB_068910ec:
  UNRECOVERED_JUMPTABLE = (code *)*puVar7;
  uVar15 = puVar7[1];
LAB_06891110:
                    /* WARNING: Could not recover jumptable at 0x06891118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*UNRECOVERED_JUMPTABLE)(param_4,uVar15);
  return uVar10;
}

