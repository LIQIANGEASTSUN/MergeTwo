/* Ghidra 12.1.2 native pseudocode; RVA 0x613049C; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.SaveCache; status ok */

void MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__SaveCache(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000007e24519 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077da7f0);
    bRam0000000007e24519 = 1;
  }
  uVar1 = func_0x06232e68(param_1);
  uVar2 = func_0x055fde0c(uVar1,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)PTR_DAT_077da7f0;
  if (pcRam0000000007e2f990 == (code *)0x0) {
    pcRam0000000007e2f990 = (code *)func_0x032809dc(&UNK_0178bf16,uVar1,0);
  }
  uVar2 = (*pcRam0000000007e2f990)(uVar3,uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x03280a2c(PTR_DAT_0784d958);
  uVar1 = func_0x03280ca0();
  uVar3 = func_0x03280a2c(PTR_DAT_0784d960);
  func_0x06fd8d9c(uVar1,uVar3);
  uVar3 = func_0x03280a2c(PTR_DAT_0784d978);
  auVar4 = func_0x03280b7c(uVar1,uVar3);
  if (pcRam0000000007e2f9a8 == (code *)0x0) {
    pcRam0000000007e2f9a8 = (code *)func_0x032809dc(&UNK_0179ab07);
  }
                    /* WARNING: Could not recover jumptable at 0x06fd91a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000007e2f9a8)(auVar4._0_8_,auVar4._8_8_);
  return;
}

