/* Ghidra 12.1.2 native pseudocode; RVA 0x3AF70E8; MergeEngine.ECS.Systems.State.StateSystemBase<TStatePayload>.TryLoadComponent<object, object>; status ok */


bool MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___TryLoadComponent_object__object_
               (undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    func_0x03256878(param_4);
  }
  if ((param_2 != (long *)0x0) && (param_3 != 0)) {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x0325681c(lVar2);
    }
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03bf7178;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)func_0x03256b10(param_2,lVar2,0);
LAB_03bf7178:
    (*(code *)*puVar1)(param_2,param_3,puVar1[1]);
  }
  return param_2 != (long *)0x0 && param_3 != 0;
}

