/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5B9D4; Merger.MergeBoardQueue.Decorators.BoardQueueSystemDecorator.DecorateSystems; status ok */


void Merger_MergeBoardQueue_Decorators_BoardQueueSystemDecorator__DecorateSystems
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_07830510;
  if ((bRam0000000007e2a628 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830510);
    bRam0000000007e2a628 = 1;
  }
  auStack_40 = Merger_MergeBoard_Systems_SystemsZenjectExtension__WithContext
                         (param_2,*(undefined8 *)(param_1 + 0x10),0);
  uVar2 = func_0x03f5714c(auStack_40,*(undefined8 *)puVar1);
  func_0x0601530c(uVar2,0);
  return;
}

