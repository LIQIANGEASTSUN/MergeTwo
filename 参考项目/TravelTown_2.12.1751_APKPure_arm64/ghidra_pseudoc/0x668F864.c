/* Ghidra 12.1.2 native pseudocode; RVA 0x668F864; Merger.Game.Views.BoardUIView.Update; status ok */


void Merger_Game_Views_BoardUIView__Update(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_07809190;
  if ((bRam0000000007e28292 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809190);
    bRam0000000007e28292 = 1;
  }
  uVar2 = func_0x05369b3c(param_1,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    fVar4 = *(float *)(param_1 + 0x74);
    fVar3 = (float)func_0x06fd6310(0);
    fVar4 = fVar4 + fVar3;
    *(float *)(param_1 + 0x74) = fVar4;
    if (*(float *)(param_1 + 0x70) <= fVar4) {
      Merger_Game_Views_BoardUIView__CheckShowMetaButtonTutorial(param_1);
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  return;
}

