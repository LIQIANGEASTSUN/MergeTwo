/* Ghidra 12.1.2 native pseudocode; RVA 0x6A56BDC; Merger.MergeBoardQueue.Utils.QueuedItemsComparer.GetHashCode; status ok */


void Merger_MergeBoardQueue_Utils_QueuedItemsComparer__GetHashCode(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  if ((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0x20), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x06b56bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x158))(plVar1,*(undefined8 *)(*plVar1 + 0x160));
    return;
  }
  func_0x03280cac();
  return;
}

