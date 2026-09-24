/* Ghidra 12.1.2 native pseudocode; RVA 0x68FC808; MergeEngine.ECS.Components.Items.IdComponent.OnBeforeSerialize; status ok */


void MergeEngine_ECS_Components_Items_IdComponent__OnBeforeSerialize(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000007e298a3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078266d8);
    bRam0000000007e298a3 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10) = *(undefined8 *)(param_1 + 0x30);
    func_0x032809c4();
    if (*(long *)(param_1 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18) = *(undefined8 *)(param_1 + 0x38);
      func_0x032809c4();
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x58);
        auVar2 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x40),
                          *(undefined1 (*) [16])(param_1 + 0x40),8,1);
        *(long *)(lVar1 + 0x30) = auVar2._8_8_;
        *(long *)(lVar1 + 0x28) = auVar2._0_8_;
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x50);
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}

