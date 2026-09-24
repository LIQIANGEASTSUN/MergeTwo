/* Ghidra 12.1.2 native pseudocode; RVA 0x3AF6F98; MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>.GetUnlockedComponents<__Il2CppFullySharedGenericType>; status ok */

void MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___GetUnlockedComponents___Il2CppFullySharedGenericType_
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_3 + 0x38);
  if (lVar1 == 0) {
    func_0x03256878(param_3);
    lVar1 = *(long *)(param_3 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x0325681c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar2 = *(long *)(param_3 + 0x38);
    lVar1 = *(long *)(lVar2 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = func_0x0325681c();
      lVar2 = *(long *)(param_3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c(lVar2);
    }
    lVar1 = func_0x03280ca0(lVar2);
    (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x28))
              (lVar1,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
    lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
    lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c();
    }
    func_0x032809c4(*(long *)(lVar2 + 0xb8) + 8,lVar1);
  }
  (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30))(param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x03bf70e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x40))();
  return;
}

