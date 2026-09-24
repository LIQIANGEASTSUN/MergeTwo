/* Ghidra 12.1.2 native pseudocode; RVA 0x67913CC; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.CalculatePriceWithCoefficents; status ok */


ulong MergeEngine_ECS_Systems_Items_SkipCooldownSystem__CalculatePriceWithCoefficents
                (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  double dStack_38;
  
  if ((bRam0000000007e28d6c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e28d6c = 1;
  }
  lVar5 = func_0x068906b0(param_2);
  if (lVar5 != 0) {
    fVar13 = *(float *)(lVar5 + 0x10);
    lVar5 = func_0x068906b0(param_2);
    if (lVar5 != 0) {
      fVar14 = *(float *)(lVar5 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
      }
      dVar11 = (double)func_0x05797bf8(param_1,(double)fVar14,0);
      dVar11 = dVar11 * (double)fVar13;
      dVar12 = (double)func_0x072ce9c0(dVar11,&dStack_38);
      if (0.0 <= dVar11) {
        if (dVar12 == 0.5) {
          dVar11 = 1.0;
          goto LAB_068914a4;
        }
        dStack_38 = (double)(long)(dVar11 + 0.5);
      }
      else if (dVar12 == -0.5) {
        dVar11 = -1.0;
LAB_068914a4:
        if (((long)dStack_38 & 1U) != 0) {
          dStack_38 = dStack_38 + dVar11;
        }
      }
      else {
        dStack_38 = (double)(long)(dVar11 + -0.5);
      }
      iVar1 = -0x80000000;
      if (dStack_38 != INFINITY) {
        iVar1 = (int)dStack_38;
      }
      lVar5 = func_0x068906b0(param_2);
      if (lVar5 != 0) {
        uVar2 = *(undefined4 *)(lVar5 + 0x18);
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
        func_0x06b21870(uVar6,uVar2,iVar1,0,0);
        return uVar6;
      }
    }
  }
  auVar15 = func_0x03280cac();
  lVar5 = auVar15._8_8_;
  uVar6 = auVar15._0_8_;
  if (lVar5 == 0) {
    uVar6 = func_0x03280cac();
    return uVar6;
  }
  plVar9 = *(long **)(lVar5 + 0x18);
  plVar8 = *(long **)(lVar5 + 0x38);
  if ((bRam0000000007e28d6d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809778);
    uVar6 = func_0x03280a18(PTR_DAT_07809780);
    bRam0000000007e28d6d = 1;
  }
  puVar3 = PTR_DAT_07809780;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07809780) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_06891030;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07809780,3);
LAB_06891030:
    uVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar6 & 1) != 0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_06891108;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar3,1);
LAB_06891108:
      UNRECOVERED_JUMPTABLE = (code *)*puVar4;
      uVar7 = puVar4[1];
      plVar8 = plVar9;
      goto LAB_06891110;
    }
  }
  if (plVar8 == (long *)0x0) {
    return uVar6;
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07809778) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_068910ec;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07809778,1);
LAB_068910ec:
  UNRECOVERED_JUMPTABLE = (code *)*puVar4;
  uVar7 = puVar4[1];
LAB_06891110:
                    /* WARNING: Could not recover jumptable at 0x06891118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*UNRECOVERED_JUMPTABLE)(plVar8,uVar7);
  return uVar6;
}

