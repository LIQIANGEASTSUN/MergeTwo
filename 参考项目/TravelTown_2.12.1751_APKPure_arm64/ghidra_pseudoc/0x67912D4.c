/* Ghidra 12.1.2 native pseudocode; RVA 0x67912D4; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.CalculatePriceWithSkipCooldownSettings; status ok */


ulong MergeEngine_ECS_Systems_Items_SkipCooldownSystem__CalculatePriceWithSkipCooldownSettings
                (double param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  undefined8 extraout_d0;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  double dStack_68;
  
  if ((bRam0000000007e28d6b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e28d6b = 1;
  }
  if ((param_3 != 0) && (lVar10 = *(long *)(param_3 + 0x18), lVar10 != 0)) {
    iVar3 = *(int *)(lVar10 + 0x18);
    if (0 < iVar3) {
      iVar12 = 0;
      do {
        if (iVar3 == iVar12) goto LAB_068913c8;
        lVar13 = *(long *)(lVar10 + (long)iVar12 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_068913c4;
        if ((double)*(float *)(lVar13 + 0x10) < param_1) {
          lVar10 = *(long *)(lVar13 + 0x18);
          if (lVar10 != 0) {
            uVar1 = *(undefined4 *)(lVar10 + 0x10);
            uVar2 = *(undefined4 *)(lVar10 + 0x14);
            uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
            func_0x06b21870(uVar6,uVar1,uVar2,0,0);
            return uVar6;
          }
          goto LAB_068913c4;
        }
        iVar12 = iVar12 + 1;
      } while (iVar3 != iVar12);
    }
    uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
    func_0x06b21870(uVar6,2,1,0,0);
    return uVar6;
  }
LAB_068913c4:
  func_0x03280cac();
LAB_068913c8:
  uVar7 = func_0x03280cb4();
  if ((bRam0000000007e28d6c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e28d6c = 1;
  }
  lVar10 = func_0x068906b0(uVar7);
  if (lVar10 != 0) {
    fVar16 = *(float *)(lVar10 + 0x10);
    lVar10 = func_0x068906b0(uVar7);
    if (lVar10 != 0) {
      fVar17 = *(float *)(lVar10 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
      }
      dVar14 = (double)func_0x05797bf8(extraout_d0,(double)fVar17,0);
      dVar14 = dVar14 * (double)fVar16;
      dVar15 = (double)func_0x072ce9c0(dVar14,&dStack_68);
      if (0.0 <= dVar14) {
        if (dVar15 == 0.5) {
          dVar14 = 1.0;
          goto LAB_068914a4;
        }
        dStack_68 = (double)(long)(dVar14 + 0.5);
      }
      else if (dVar15 == -0.5) {
        dVar14 = -1.0;
LAB_068914a4:
        if (((long)dStack_68 & 1U) != 0) {
          dStack_68 = dStack_68 + dVar14;
        }
      }
      else {
        dStack_68 = (double)(long)(dVar14 + -0.5);
      }
      iVar3 = -0x80000000;
      if (dStack_68 != INFINITY) {
        iVar3 = (int)dStack_68;
      }
      lVar10 = func_0x068906b0(uVar7);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar10 + 0x18);
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
        func_0x06b21870(uVar6,uVar1,iVar3,0,0);
        return uVar6;
      }
    }
  }
  auVar18 = func_0x03280cac();
  lVar10 = auVar18._8_8_;
  uVar6 = auVar18._0_8_;
  if (lVar10 == 0) {
    uVar6 = func_0x03280cac();
    return uVar6;
  }
  plVar9 = *(long **)(lVar10 + 0x18);
  plVar8 = *(long **)(lVar10 + 0x38);
  if ((bRam0000000007e28d6d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809778);
    uVar6 = func_0x03280a18(PTR_DAT_07809780);
    bRam0000000007e28d6d = 1;
  }
  puVar4 = PTR_DAT_07809780;
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07809780) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_06891030;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07809780,3);
LAB_06891030:
    uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar6 & 1) != 0) {
      lVar10 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06891108;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar4,1);
LAB_06891108:
      UNRECOVERED_JUMPTABLE = (code *)*puVar5;
      uVar7 = puVar5[1];
      plVar8 = plVar9;
      goto LAB_06891110;
    }
  }
  if (plVar8 == (long *)0x0) {
    return uVar6;
  }
  lVar10 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07809778) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_068910ec;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07809778,1);
LAB_068910ec:
  UNRECOVERED_JUMPTABLE = (code *)*puVar5;
  uVar7 = puVar5[1];
LAB_06891110:
                    /* WARNING: Could not recover jumptable at 0x06891118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*UNRECOVERED_JUMPTABLE)(plVar8,uVar7);
  return uVar6;
}

