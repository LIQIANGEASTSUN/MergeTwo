/* Ghidra 12.1.2 native pseudocode; RVA 0x6697BB0; Merger.Game.Views.BoardView.SlideGameObject; status ok */


long Merger_Game_Views_BoardView__SlideGameObject
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  float fVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_0777dd88;
  if ((bRam0000000007e282dd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777dd88);
    bRam0000000007e282dd = 1;
  }
  lVar4 = func_0x038d903c(param_1,param_2,param_3,param_5,0,0);
  uVar5 = *(undefined8 *)puVar2;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
    *(undefined4 *)(lVar4 + 0xb4) = param_6;
    uVar3 = func_0x03919230(param_6,0,uVar5);
    if ((uVar3 & 1) != 0) {
      fVar1 = -2.1474836e+09;
      if (*(float *)(lVar4 + 0xc0) != INFINITY) {
        fVar1 = (float)(int)*(float *)(lVar4 + 0xc0);
      }
      *(float *)(lVar4 + 0xc0) = fVar1;
    }
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    func_0x032809c4((undefined8 *)(lVar4 + 0xb8),0);
  }
  return lVar4;
}

