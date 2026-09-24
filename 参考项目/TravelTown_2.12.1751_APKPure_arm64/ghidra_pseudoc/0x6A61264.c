/* Ghidra 12.1.2 native pseudocode; RVA 0x6A61264; Merger.MergeBoardSellItemCapability.Decorators.SellItemSystemDecorator.DecorateSystems; status ok */


void Merger_MergeBoardSellItemCapability_Decorators_SellItemSystemDecorator__DecorateSystems
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [16];
  
  puVar2 = PTR_DAT_078307b0;
  puVar1 = PTR_DAT_078307a8;
  if ((bRam0000000007e2a667 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078307a8);
    func_0x03280a18(PTR_DAT_078307b0);
    bRam0000000007e2a667 = 1;
  }
  auStack_40 = Merger_MergeBoard_Systems_SystemsZenjectExtension__WithContext
                         (param_2,*(undefined8 *)(param_1 + 0x10),0);
  uVar3 = func_0x03f5714c(auStack_40,*(undefined8 *)puVar1);
  func_0x0601530c(uVar3,0);
  auVar4 = Merger_MergeBoard_Systems_SystemsZenjectExtension__WithContext
                     (param_2,*(undefined8 *)(param_1 + 0x10),0);
  auStack_40 = auVar4;
  uVar3 = func_0x03f5714c(auStack_40,*(undefined8 *)puVar2);
  func_0x0601530c(uVar3,0);
  return;
}

