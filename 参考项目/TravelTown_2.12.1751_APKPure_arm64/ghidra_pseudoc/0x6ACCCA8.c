/* Ghidra 12.1.2 native pseudocode; RVA 0x6ACCCA8; Merger.MergeBoard.PowerBoost.Systems.PowerBoostDecorator.DecorateSystems; status ok */


void Merger_MergeBoard_PowerBoost_Systems_PowerBoostDecorator__DecorateSystems
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_07833fe0;
  if ((bRam0000000007e2aa5c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07833fe0);
    bRam0000000007e2aa5c = 1;
  }
  auStack_40 = func_0x06b76570(param_2,*(undefined8 *)(param_1 + 0x10),0);
  uVar2 = func_0x03f5714c(auStack_40,*(undefined8 *)puVar1);
  func_0x0601530c(uVar2,0);
  return;
}

