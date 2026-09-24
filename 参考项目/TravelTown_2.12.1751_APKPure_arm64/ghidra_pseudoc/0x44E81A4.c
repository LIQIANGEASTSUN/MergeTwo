/* Ghidra 12.1.2 native pseudocode; RVA 0x44E81A4; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.Deserialize; status ok */


undefined8
MergeEngine_ECS_Components_SerializableComponent_TSerializable___Deserialize
          (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000007e18ff4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ff4 = 1;
  }
  if ((param_1 == (long *)0x0) || (plVar6 = (long *)param_1[3], plVar6 == (long *)0x0)) {
    lVar3 = func_0x03280cac();
    return *(undefined8 *)(lVar3 + 0x28);
  }
  lVar3 = *plVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
        goto LAB_045e8248;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = func_0x03256b10(plVar6);
LAB_045e8248:
  puVar1 = PTR_DAT_0777b110;
  lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar7);
  lVar3 = (**(code **)(lVar3 + 8))(plVar6,param_2,lVar3);
  plVar6 = param_1 + 5;
  *plVar6 = lVar3;
  func_0x032809c4(plVar6);
  lVar3 = *plVar6;
  if (lVar3 == 0) {
    lVar3 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
    *plVar6 = lVar3;
    func_0x032809c4(plVar6,lVar3);
    lVar3 = *plVar6;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x03e6e2e8(lVar3,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x045e82f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  return uVar2;
}

