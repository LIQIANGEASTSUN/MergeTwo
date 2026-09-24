/* Ghidra 12.1.2 native pseudocode; RVA 0x6A363A8; Merger.MergeBoard.View.IntervalTicker.Update; status ok */


long Merger_MergeBoard_View_IntervalTicker__Update(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  float extraout_s0;
  float fVar8;
  
  lVar2 = param_1;
  if ((bRam0000000007e2a4cd & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c07b8);
    lVar2 = func_0x03280a18(PTR_DAT_0782f598);
    bRam0000000007e2a4cd = 1;
  }
  if (0.0 <= *(float *)(param_1 + 0x38)) {
    fVar8 = *(float *)(param_1 + 0x3c);
    lVar2 = func_0x06fe7f44(0);
    fVar8 = fVar8 + extraout_s0;
    *(float *)(param_1 + 0x3c) = fVar8;
    if (*(float *)(param_1 + 0x38) <= fVar8) {
      plVar7 = *(long **)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (plVar7 != (long *)0x0) {
        lVar2 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0782f598) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_06b36480;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0782f598,0);
LAB_06b36480:
        (*(code *)*puVar3)(fVar8,plVar7,puVar3[1]);
        plVar7 = *(long **)(param_1 + 0x30);
        uVar4 = func_0x06b361cc(param_1);
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_077c07b8) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                goto LAB_06b364fc;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c07b8,5);
LAB_06b364fc:
                    /* WARNING: Could not recover jumptable at 0x06b36514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar2 = (*(code *)*puVar3)(plVar7,uVar4,puVar3[1]);
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

