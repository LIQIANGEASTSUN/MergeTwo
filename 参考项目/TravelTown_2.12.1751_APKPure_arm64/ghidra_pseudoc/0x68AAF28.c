/* Ghidra 12.1.2 native pseudocode; RVA 0x68AAF28; Framework.Core.View.ViewComponent.get_RectTransform; status ok */


undefined8 Framework_Core_View_ViewComponent__get_RectTransform(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e29571 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e930);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e29571 = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  uVar4 = *puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar2 = func_0x06fe351c(uVar4,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = func_0x03cec8b4(param_1,*(undefined8 *)PTR_DAT_0774e930);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    func_0x032809c4(puVar3,uVar4);
  }
  else {
    uVar4 = *puVar3;
  }
  return uVar4;
}

