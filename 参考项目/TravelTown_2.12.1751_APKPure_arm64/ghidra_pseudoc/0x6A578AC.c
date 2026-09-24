/* Ghidra 12.1.2 native pseudocode; RVA 0x6A578AC; Merger.MergeBoardQueue.Services.MergeBoardItemRewardDequeueStrategy.IsBoardFull; status ok */


ulong Merger_MergeBoardQueue_Services_MergeBoardItemRewardDequeueStrategy__IsBoardFull(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam0000000007e2a601 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f6a0);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_077c07b8);
    bRam0000000007e2a601 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x20);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_06b57950;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c1e40,6);
LAB_06b57950:
    iVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar1 = PTR_DAT_0782f6a0;
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c07b8) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06b579c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c07b8,1);
LAB_06b579c8:
      uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      iVar3 = func_0x03d3a518(uVar5,*(undefined8 *)puVar1);
      return (ulong)(iVar2 == iVar3);
    }
  }
  uVar7 = func_0x03280cac();
  return uVar7;
}

