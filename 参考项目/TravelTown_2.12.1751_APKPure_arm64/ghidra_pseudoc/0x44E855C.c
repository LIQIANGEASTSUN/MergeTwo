/* Ghidra 12.1.2 native pseudocode; RVA 0x44E855C; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.Deserialize; status ok */


undefined8
MergeEngine_ECS_Components_SerializableComponent_TSerializable___Deserialize
          (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000007e18ff7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ff7 = 1;
  }
  if ((param_1 == (long *)0x0) || (plVar7 = (long *)param_1[3], plVar7 == (long *)0x0)) {
    auVar9 = func_0x03280cac();
    puVar3 = (undefined8 *)
             func_0x03280a38(auVar9._0_8_,
                             *(undefined8 *)
                              (**(long **)(*(long *)(auVar9._8_8_ + 0x20) + 0xc0) + 0x80));
    return *puVar3;
  }
  lVar4 = *plVar7;
  lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_045e8600;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = func_0x03256b10(plVar7);
LAB_045e8600:
  puVar1 = PTR_DAT_0777b110;
  lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar8);
  lVar4 = (**(code **)(lVar4 + 8))(plVar7,param_2,lVar4);
  plVar7 = param_1 + 5;
  *plVar7 = lVar4;
  func_0x032809c4(plVar7);
  lVar4 = *plVar7;
  if (lVar4 == 0) {
    lVar4 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
    *plVar7 = lVar4;
    func_0x032809c4(plVar7,lVar4);
    lVar4 = *plVar7;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x03e6e2e8(lVar4,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x045e86b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  return uVar2;
}

