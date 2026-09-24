/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3626C; Merger.MergeBoard.View.IntervalTicker.Start; status ok */


long Merger_MergeBoard_View_IntervalTicker__Start(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float extraout_s0;
  float fVar10;
  
  if ((bRam0000000007e2a4cc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c07b8);
    func_0x03280a18(PTR_DAT_0782f598);
    bRam0000000007e2a4cc = 1;
  }
  lVar2 = func_0x06b361cc(param_1);
  plVar9 = *(long **)(param_1 + 0x30);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c07b8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_06b36310;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c07b8,4);
LAB_06b36310:
    lVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0782f598) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b3637c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0782f598,0);
LAB_06b3637c:
                    /* WARNING: Could not recover jumptable at 0x06b363a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*(code *)*puVar3)((float)(lVar2 - lVar5) / 1000.0,plVar9,puVar3[1]);
      return lVar2;
    }
  }
  lVar5 = func_0x03280cac();
  lVar2 = lVar5;
  if ((bRam0000000007e2a4cd & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c07b8);
    lVar2 = func_0x03280a18(PTR_DAT_0782f598);
    bRam0000000007e2a4cd = 1;
  }
  if (0.0 <= *(float *)(lVar5 + 0x38)) {
    fVar10 = *(float *)(lVar5 + 0x3c);
    lVar2 = func_0x06fe7f44(0);
    fVar10 = fVar10 + extraout_s0;
    *(float *)(lVar5 + 0x3c) = fVar10;
    if (*(float *)(lVar5 + 0x38) <= fVar10) {
      plVar9 = *(long **)(lVar5 + 0x20);
      *(undefined4 *)(lVar5 + 0x3c) = 0;
      if (plVar9 != (long *)0x0) {
        lVar2 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0782f598) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b36480;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0782f598,0);
LAB_06b36480:
        (*(code *)*puVar3)(fVar10,plVar9,puVar3[1]);
        plVar9 = *(long **)(lVar5 + 0x30);
        uVar4 = func_0x06b361cc(lVar5);
        if (plVar9 != (long *)0x0) {
          lVar2 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c07b8) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                goto LAB_06b364fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c07b8,5);
LAB_06b364fc:
                    /* WARNING: Could not recover jumptable at 0x06b36514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar2 = (*(code *)*puVar3)(plVar9,uVar4,puVar3[1]);
          return lVar2;
        }
      }
      lVar2 = func_0x03280cac();
      puVar1 = PTR_DAT_0774e4e0;
      if ((bRam0000000007e2fb28 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e4e0,0);
        bRam0000000007e2fb28 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      return lVar2;
    }
  }
  return lVar2;
}

