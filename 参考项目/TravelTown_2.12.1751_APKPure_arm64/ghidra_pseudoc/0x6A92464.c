/* Ghidra 12.1.2 native pseudocode; RVA 0x6A92464; Merger.MergeBoard.Handlers.CollectableItemsGrantProcessor.GetTransformAtPosition; status ok */


void Merger_MergeBoard_Handlers_CollectableItemsGrantProcessor__GetTransformAtPosition
               (long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000007e2a7ef & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1e40);
    bRam0000000007e2a7ef = 1;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_06b924f0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c1e40,0);
LAB_06b924f0:
                    /* WARNING: Could not recover jumptable at 0x06b92504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

