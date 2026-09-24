/* Ghidra 12.1.2 native pseudocode; RVA 0x44E87E8; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.Serialize; status ok */


void MergeEngine_ECS_Components_SerializableComponent_TSerializable___Serialize
               (long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000007e18ff8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ff8 = 1;
  }
  plVar1 = (long *)func_0x03280a38(param_1,*(undefined8 *)
                                            (**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
  if (*plVar1 == 0) {
    uVar2 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
    func_0x02f17738(param_1,*(undefined8 *)(**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80),
                    uVar2);
    puVar3 = (undefined8 *)
             func_0x03280a38(param_1,*(undefined8 *)
                                      (**(long **)(*(long *)(param_2 + 0x20) + 0xc0) + 0x80));
    uVar2 = *puVar3;
    if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x03e6e2e8(uVar2,0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
  }
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  plVar1 = (long *)param_1[3];
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40))(param_1);
  if (plVar1 == (long *)0x0) {
    auVar9 = func_0x03280cac();
    lVar5 = auVar9._8_8_;
    plVar1 = auVar9._0_8_;
    if ((bRam0000000007e18ff9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777b110);
      bRam0000000007e18ff9 = 1;
    }
    plVar4 = (long *)func_0x03280a38(plVar1,*(undefined8 *)
                                             (**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80));
    if (*plVar4 == 0) {
      uVar2 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x10));
      func_0x02f17738(plVar1,*(undefined8 *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80),
                      uVar2);
      puVar3 = (undefined8 *)
               func_0x03280a38(plVar1,*(undefined8 *)
                                       (**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80));
      uVar2 = *puVar3;
      if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x03e6e2e8(uVar2,0,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x30));
    }
    (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x045e8a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x40))(plVar1);
    return;
  }
  lVar5 = *plVar1;
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_045e8944;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = func_0x03256b10(plVar1);
LAB_045e8944:
  lVar5 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x045e8968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(plVar1,uVar2,lVar5);
  return;
}

