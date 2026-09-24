/* Ghidra 12.1.2 native pseudocode; RVA 0x6798B10; MergeEngine.ECS.Systems.Items.UndoSell.ShouldClearUndoOnSelection; status ok */


ulong MergeEngine_ECS_Systems_Items_UndoSell__ShouldClearUndoOnSelection(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam0000000007e28d9e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a940);
    bRam0000000007e28d9e = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) {
    lVar3 = func_0x03d20d84(lVar3,*(undefined8 *)PTR_DAT_0777a940);
    return (ulong)(lVar3 != param_2);
  }
  uVar4 = func_0x03280cac();
  puVar2 = PTR_DAT_0777cfd0;
  if ((bRam0000000007e28d9f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777cfd0);
    bRam0000000007e28d9f = 1;
  }
  uVar5 = func_0x06898bf4(uVar4);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x03280b8c(lVar3);
    lVar3 = *(long *)puVar2;
  }
  lVar1 = 0x33c0;
  if ((uVar5 & 1) == 0) {
    lVar1 = 0x33b8;
  }
  return *(ulong *)(*(long *)(lVar3 + 0xb8) + lVar1);
}

