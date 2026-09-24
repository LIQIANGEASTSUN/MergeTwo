/* Ghidra 12.1.2 native pseudocode; RVA 0x6798B78; MergeEngine.ECS.Systems.Items.UndoSell.GetLocalisationString; status ok */


undefined8 MergeEngine_ECS_Systems_Items_UndoSell__GetLocalisationString(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_0777cfd0;
  if ((bRam0000000007e28d9f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777cfd0);
    bRam0000000007e28d9f = 1;
  }
  uVar3 = func_0x06898bf4(param_1);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c(lVar4);
    lVar4 = *(long *)puVar2;
  }
  lVar1 = 0x33c0;
  if ((uVar3 & 1) == 0) {
    lVar1 = 0x33b8;
  }
  return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + lVar1);
}

