/* Ghidra 12.1.2 native pseudocode; RVA 0x665F378; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.HideLastDraggedItemParticles; status ok */

long MergeEngine_ECS_Systems_Board_BoardInteractionSystem__HideLastDraggedItemParticles
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000007e28089 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e28089 = 1;
  }
  puVar1 = PTR_DAT_077d7588;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar3 = func_0x03ced81c(*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_077d7588);
    lVar4 = 0;
    if (lVar3 != 0) {
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar4 = func_0x03ced81c(*(long *)(param_1 + 0x68),*(undefined8 *)puVar1), lVar4 == 0)) {
        lVar4 = func_0x03280cac();
        puVar2 = PTR_DAT_07807a30;
        puVar1 = PTR_DAT_07807a28;
        if ((bRam0000000007e2808a & 1) == 0) {
          func_0x03280a18(PTR_DAT_07807a30);
          func_0x03280a18(PTR_DAT_07807a28);
          bRam0000000007e2808a = 1;
        }
        uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x04143c38(uVar5,*(undefined8 *)puVar2);
        *(undefined8 *)(lVar4 + 0xd8) = uVar5;
        func_0x032809c4((undefined8 *)(lVar4 + 0xd8),uVar5);
        return lVar4;
      }
      *(undefined1 *)(lVar4 + 0x2d) = 0;
    }
  }
  return lVar4;
}

