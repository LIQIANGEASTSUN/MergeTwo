/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD02AC; Merger.MergeBoard.PowerBoost.Services.PowerBoostModesCalculator.IsUnlockableBoost; status ok */


ulong Merger_MergeBoard_PowerBoost_Services_PowerBoostModesCalculator__IsUnlockableBoost
                (long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((bRam0000000007e2aa7b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833e20);
    func_0x03280a18(PTR_DAT_07833ed8);
    func_0x03280a18(PTR_DAT_0779bc18);
    bRam0000000007e2aa7b = 1;
  }
  puVar1 = PTR_DAT_07833e20;
  plVar10 = *(long **)(param_1 + 0x18);
  if (plVar10 == (long *)0x0) {
LAB_06bd048c:
    uVar8 = func_0x03280cac();
    puVar2 = PTR_DAT_07759a18;
    puVar1 = PTR_DAT_07759a10;
    if ((bRam0000000007e2aa7d & 1) == 0) {
      func_0x03280a18(PTR_DAT_07759a18);
      func_0x03280a18(PTR_DAT_07759a10);
      bRam0000000007e2aa7d = 1;
    }
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x04119444(uVar6,*(undefined8 *)puVar2);
    *(undefined8 *)(uVar8 + 0x30) = uVar6;
    func_0x032809c4((undefined8 *)(uVar8 + 0x30),uVar6);
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x04119444(uVar6,*(undefined8 *)puVar2);
    *(undefined8 *)(uVar8 + 0x38) = uVar6;
    func_0x032809c4((undefined8 *)(uVar8 + 0x38),uVar6);
    return uVar8;
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07833e20) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_06bd035c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07833e20,1);
LAB_06bd035c:
  iVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
  if (iVar3 < param_2) {
    plVar10 = *(long **)(param_1 + 0x28);
    if (plVar10 == (long *)0x0) goto LAB_06bd048c;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07833ed8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_06bd03d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07833ed8,1);
LAB_06bd03d0:
    uVar8 = (*(code *)*puVar5)(plVar10,param_2,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 == (long *)0x0) goto LAB_06bd048c;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_06bd043c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar1,7);
LAB_06bd043c:
      iVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if (param_2 <= iVar3) {
        if (param_3 == 0) goto LAB_06bd048c;
        uVar4 = func_0x0411a010(param_3,param_2,*(undefined8 *)PTR_DAT_0779bc18);
        uVar4 = uVar4 ^ 1;
        goto LAB_06bd0454;
      }
    }
  }
  uVar4 = 0;
LAB_06bd0454:
  return (ulong)(uVar4 & 1);
}

