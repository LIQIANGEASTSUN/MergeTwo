/* Ghidra 12.1.2 native pseudocode; RVA 0x44E7C08; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.MergeEngine.ECS.Components.ISerializableComponent.Serialize; status ok */


long MergeEngine_ECS_Components_SerializableComponent_TSerializable___MergeEngine_ECS_Components_ISerializableComponent_Serialize
               (long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000007e18fef & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18fef = 1;
  }
  plVar6 = param_1 + 4;
  if (*plVar6 == 0) {
    lVar1 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
    *plVar6 = lVar1;
    func_0x032809c4(plVar6,lVar1);
    lVar1 = *plVar6;
    if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x03e6e2e8(lVar1,0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  plVar6 = (long *)param_1[3];
  if (plVar6 == (long *)0x0) {
    auVar8 = func_0x03280cac();
    plVar6 = auVar8._0_8_;
    if ((bRam0000000007e18ff0 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777b110);
      bRam0000000007e18ff0 = 1;
    }
    plVar7 = plVar6 + 4;
    if (*plVar7 == 0) {
      lVar1 = func_0x03d754d0(*(undefined8 *)
                               (*(long *)(*(long *)(auVar8._8_8_ + 0x20) + 0xc0) + 0x10));
      *plVar7 = lVar1;
      func_0x032809c4(plVar7,lVar1);
      lVar1 = *plVar7;
      if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x03e6e2e8(lVar1,0,*(undefined8 *)
                               (*(long *)(*(long *)(auVar8._8_8_ + 0x20) + 0xc0) + 0x18));
    }
    (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
    return plVar6[4];
  }
  lVar4 = param_1[4];
  lVar1 = *plVar6;
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30);
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar1 = lVar1 + (long)(int)(*piVar3 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_045e7d10;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  lVar1 = func_0x03256b10(plVar6);
LAB_045e7d10:
  lVar1 = func_0x03280b88(*(undefined8 *)(lVar1 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x045e7d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(lVar1 + 8))(plVar6,lVar4,lVar1);
  return lVar1;
}

