/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7C4DC; MergeEngine.Configuration.Definitions.Reward.CanAggregate<object>; status ok */


bool MergeEngine_Configuration_Definitions_Reward__CanAggregate_object_
               (undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03256878(param_3);
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) < 2)) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = func_0x0325681c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar4 = *(long *)(param_3 + 0x38);
      lVar3 = *(long *)(lVar4 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = func_0x0325681c();
        lVar4 = *(long *)(param_3 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x18);
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = func_0x0325681c(lVar4);
      }
      lVar3 = func_0x03280ca0(lVar4);
      func_0x053569b8(lVar3,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28),
                      *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
      lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = func_0x0325681c();
      }
      *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar3;
      lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar4 + 0xb8) + 8,lVar3);
    }
    uVar5 = func_0x03d45b80(param_2,lVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x38));
    iVar2 = func_0x03d3a518(uVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x50));
    bVar1 = iVar2 != *(int *)(param_2 + 0x18);
  }
  return bVar1;
}

