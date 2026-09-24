/* Ghidra 12.1.2 native pseudocode; RVA 0x6A93BC0; Merger.MergeBoard.Factories.FeedingCombinationConsumedItemSnapshotFactory.CreateFeedingCombinationConsumedItemSnapshot; status ok */


/* WARNING: Possible PIC construction at 0x06b93de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b93de8) */

void Merger_MergeBoard_Factories_FeedingCombinationConsumedItemSnapshotFactory__CreateFeedingCombinationConsumedItemSnapshot
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000007e2a801 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831c90);
    func_0x03280a18(PTR_DAT_078322f8);
    func_0x03280a18(PTR_DAT_07832300);
    func_0x03280a18(PTR_DAT_077c1dd0);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e2a801 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    lVar8 = *(long *)PTR_DAT_077c1dd0;
    uVar7 = *(undefined8 *)PTR_DAT_0776b160;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_06b93c94;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar3 = func_0x03256b10(plVar6);
LAB_06b93c94:
    lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
    uVar7 = (**(code **)(lVar3 + 8))(plVar6,param_2,uVar7,0,lVar3);
    puVar2 = PTR_DAT_078322f8;
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      lVar8 = *(long *)PTR_DAT_07832300;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_06b93d2c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = func_0x03256b10(plVar6);
LAB_06b93d2c:
      puVar1 = PTR_DAT_07831c90;
      lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
      uVar7 = (**(code **)(lVar3 + 8))(plVar6,uVar7,lVar3);
      lVar8 = *(long *)puVar2;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_06b93dac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = func_0x03256b10(plVar6);
LAB_06b93dac:
      lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
      (**(code **)(lVar3 + 8))(plVar6,uVar7,lVar3);
      func_0x03280ca0(*(undefined8 *)puVar1);
      return;
    }
  }
  func_0x03280cac();
  return;
}

