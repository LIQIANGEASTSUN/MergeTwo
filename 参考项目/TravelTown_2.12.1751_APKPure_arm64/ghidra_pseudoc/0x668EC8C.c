/* Ghidra 12.1.2 native pseudocode; RVA 0x668EC8C; Merger.Game.Views.BoardItemViewBase.UnityEngine.EventSystems.IDragHandler.OnDrag; status ok */


void Merger_Game_Views_BoardItemViewBase__UnityEngine_EventSystems_IDragHandler_OnDrag
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678ecb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),param_1,param_2,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

