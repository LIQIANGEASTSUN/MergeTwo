/* Ghidra 12.1.2 native pseudocode; RVA 0x668EBFC; Merger.Game.Views.BoardItemViewBase.PointerClicked; status ok */


void Merger_Game_Views_BoardItemViewBase__PointerClicked(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    plVar1 = *(long **)(param_1 + 0x28);
    if (plVar1 == (long *)0x0) {
      lVar3 = func_0x03280cac();
      lVar4 = *(long *)(lVar3 + 0x48);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0678ec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar3,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1,*(undefined8 *)(*plVar1 + 0x2c0));
    if (((uVar2 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x48), lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0678ec44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

