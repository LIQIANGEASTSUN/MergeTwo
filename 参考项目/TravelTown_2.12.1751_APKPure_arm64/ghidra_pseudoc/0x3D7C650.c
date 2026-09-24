/* Ghidra 12.1.2 native pseudocode; RVA 0x3D7C650; MergeEngine.Configuration.Definitions.Reward.CanAggregate<__Il2CppFullySharedGenericType>; status ok */


bool MergeEngine_Configuration_Definitions_Reward__CanAggregate___Il2CppFullySharedGenericType_
               (undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03256878(param_3);
  }
  if ((param_2 == 0) ||
     (iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))(param_2), iVar2 < 2)) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x0325681c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x0325681c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) {
      lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = func_0x0325681c();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar5 = *(long *)(param_3 + 0x38);
      lVar4 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = func_0x0325681c();
        lVar5 = *(long *)(param_3 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x18);
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c(lVar5);
      }
      lVar4 = func_0x03280ca0(lVar5);
      (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30))
                (lVar4,uVar6,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28));
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar4;
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar5 + 0xb8) + 8,lVar4);
    }
    (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x38))(param_2,lVar4);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x50))();
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))(param_2);
    bVar1 = iVar2 != iVar3;
  }
  return bVar1;
}

