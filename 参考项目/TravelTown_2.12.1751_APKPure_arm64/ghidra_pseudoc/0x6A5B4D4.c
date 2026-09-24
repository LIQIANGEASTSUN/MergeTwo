/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5B4D4; Merger.MergeBoardQueue.Logic.BoardOperations.BoardQueueOperationDataCreator.BuildDequeueActions; status ok */


void Merger_MergeBoardQueue_Logic_BoardOperations_BoardQueueOperationDataCreator__BuildDequeueActions
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((bRam0000000007e2a623 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_077c1e18);
    bRam0000000007e2a623 = 1;
  }
  puVar2 = PTR_DAT_078304b0;
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_078304b0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b5b584;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_078304b0,0);
LAB_06b5b584:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,param_2,0,puVar3[1]);
    puVar1 = PTR_DAT_0777aa98;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      lVar4 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_077c1e18;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06b5b604;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,lVar4,1);
LAB_06b5b604:
      plVar9 = (long *)(*(code *)*puVar3)(plVar9,param_2,uVar10,puVar3[1]);
      lVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x06a30df4(lVar4,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x30) = param_3;
        func_0x032809c4((undefined8 *)(lVar4 + 0x30),param_3);
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          lVar5 = *(long *)puVar2;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_06b5b69c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar9,lVar5,3);
LAB_06b5b69c:
                    /* WARNING: Could not recover jumptable at 0x06b5b6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar9,lVar4,puVar3[1]);
          return;
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

