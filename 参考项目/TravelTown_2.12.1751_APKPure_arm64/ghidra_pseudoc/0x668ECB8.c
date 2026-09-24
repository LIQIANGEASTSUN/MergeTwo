/* Ghidra 12.1.2 native pseudocode; RVA 0x668ECB8; Merger.Game.Views.BoardItemViewBase.UnityEngine.EventSystems.IEndDragHandler.OnEndDrag; status ok */


void Merger_Game_Views_BoardItemViewBase__UnityEngine_EventSystems_IEndDragHandler_OnEndDrag
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_07809140;
  puVar1 = PTR_DAT_07809138;
  if ((bRam0000000007e28285 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e28285 = 1;
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar3 = func_0x06fdbed0(param_1,0);
  func_0x03e90108(uVar3,*(undefined8 *)puVar2);
  uVar3 = func_0x06fdbed0(param_1,0);
  func_0x03e90108(uVar3,*(undefined8 *)puVar1);
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),param_1,param_2,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
  return;
}

