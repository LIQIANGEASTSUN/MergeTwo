/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6280890; bound 328 bytes; MergeEngine.ECS.Systems.InteractionSystem.TryCombineItems; status ok */


ulong MergeEngine_ECS_Systems_InteractionSystem__TryCombineItems
                (long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((bRam0000000007e254b7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6f48);
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_077e6f50);
    bRam0000000007e254b7 = 1;
  }
  uVar1 = MergeEngine_ECS_Systems_InteractionSystem__CanCombineItems(param_1,param_2,param_3);
  if ((uVar1 & 1) != 0) {
    if ((param_3 != 0) &&
       (lVar2 = func_0x03ced81c(param_3,*(undefined8 *)PTR_DAT_077e6760), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(long *)(lVar2 + 0x38) = param_2;
      func_0x032809c4((long *)(lVar2 + 0x38),param_2);
      *(undefined8 *)(lVar2 + 0x40) = param_4;
      func_0x032809c4((undefined8 *)(lVar2 + 0x40),param_4);
      uVar3 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e6f48);
      func_0x054221d4(uVar3,param_1,*(undefined8 *)PTR_DAT_077e6f50,0);
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      func_0x032809c4((undefined8 *)(lVar2 + 0x28),uVar3);
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (((lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x30), lVar2 != 0 &&
           (*(undefined1 *)(lVar2 + 0x80) = 1, param_2 != 0)) &&
          (lVar2 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d7588), lVar2 != 0)))) {
        *(undefined1 *)(lVar2 + 0x2d) = 0;
        goto LAB_063809c0;
      }
    }
    uVar4 = func_0x03280cac();
    return uVar4;
  }
LAB_063809c0:
  return (ulong)(uVar1 & 1);
}

