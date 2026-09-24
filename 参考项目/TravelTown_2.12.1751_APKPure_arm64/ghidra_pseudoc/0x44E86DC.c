/* Ghidra 12.1.2 native pseudocode; RVA 0x44E86DC; MergeEngine.ECS.Components.SerializableComponent<TSerializable>..ctor; status ok */


void MergeEngine_ECS_Components_SerializableComponent_TSerializable____ctor
               (undefined8 param_1,undefined8 *****param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  long alStack_b0 [8];
  undefined8 ****ppppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar7 = tpidr_el0;
  lStack_58 = *(long *)(lVar7 + 0x28);
  lVar4 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  uVar9 = (ulong)*(uint *)(*(long *)(lVar4 + 0x18) + 0xfc);
  lVar5 = -(uVar9 + 0xf & 0x1fffffff0);
  plVar8 = (long *)((long)&ppppuStack_70 + lVar5);
  ppppuStack_70 = param_2;
  uVar1 = func_0x03d754d0(*(undefined8 *)(lVar4 + 0x10));
  func_0x02f17738(param_1,*(undefined8 *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80),
                  uVar1);
  lVar4 = *(long *)(param_4 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0x28)) {
    param_2 = &ppppuStack_70;
  }
  func_0x072ce970(plVar8,param_2,uVar9);
  lVar4 = *(long *)(lVar4 + 0xc0);
  puVar2 = *(undefined8 **)(lVar4 + 0x20);
  if (-1 < *(int *)(*(long *)(lVar4 + 0x18) + 0x28)) {
    plVar8 = (long *)*plVar8;
  }
  lStack_68 = (long)plVar8;
  uStack_60 = param_3;
  (*(code *)puVar2[2])(*puVar2,puVar2,param_1,&lStack_68,param_3);
  if (*(long *)(lVar7 + 0x28) == lStack_58) {
    return;
  }
  auVar10 = func_0x072ce990();
  lVar7 = auVar10._8_8_;
  plVar3 = auVar10._0_8_;
  *(undefined8 *)((long)alStack_b0 + lVar5 + 0x20) = 0x45e87e8;
  *(long **)((long)alStack_b0 + lVar5 + 0x28) = plVar8;
  *(undefined8 *)((long)alStack_b0 + lVar5 + 0x30) = param_1;
  *(undefined8 *)((long)alStack_b0 + lVar5 + 0x38) = param_3;
  if ((bRam0000000007e18ff8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ff8 = 1;
  }
  plVar8 = (long *)func_0x03280a38(plVar3,*(undefined8 *)
                                           (**(long **)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x80));
  if (*plVar8 == 0) {
    uVar1 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x10));
    func_0x02f17738(plVar3,*(undefined8 *)(**(long **)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x80),uVar1
                   );
    puVar2 = (undefined8 *)
             func_0x03280a38(plVar3,*(undefined8 *)
                                     (**(long **)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x80));
    uVar1 = *puVar2;
    if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x03e6e2e8(uVar1,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x30));
  }
  (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
  plVar8 = (long *)plVar3[3];
  uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x40))(plVar3);
  if (plVar8 == (long *)0x0) {
    auVar10 = func_0x03280cac();
    lVar4 = auVar10._8_8_;
    plVar8 = auVar10._0_8_;
    *(undefined8 *)((long)alStack_b0 + lVar5) = 0x45e8970;
    *(undefined8 *)((long)alStack_b0 + lVar5 + 8) = 0;
    *(long **)((long)alStack_b0 + lVar5 + 0x10) = plVar3;
    *(long *)((long)alStack_b0 + lVar5 + 0x18) = lVar7;
    if ((bRam0000000007e18ff9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777b110);
      bRam0000000007e18ff9 = 1;
    }
    plVar3 = (long *)func_0x03280a38(plVar8,*(undefined8 *)
                                             (**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80));
    if (*plVar3 == 0) {
      uVar1 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x10));
      func_0x02f17738(plVar8,*(undefined8 *)(**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80),
                      uVar1);
      puVar2 = (undefined8 *)
               func_0x03280a38(plVar8,*(undefined8 *)
                                       (**(long **)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x80));
      uVar1 = *puVar2;
      if (*(int *)(*(long *)PTR_DAT_0777b110 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x03e6e2e8(uVar1,0,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x30));
    }
    (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x045e8a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x40))(plVar8);
    return;
  }
  lVar5 = *plVar8;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x48);
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
        goto LAB_045e8944;
      }
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar9 != 0);
  }
  lVar5 = func_0x03256b10(plVar8);
LAB_045e8944:
  lVar7 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x045e8968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(plVar8,uVar1,lVar7);
  return;
}

