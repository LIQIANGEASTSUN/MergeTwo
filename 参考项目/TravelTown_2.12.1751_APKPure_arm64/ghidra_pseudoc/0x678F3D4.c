/* Ghidra 12.1.2 native pseudocode; RVA 0x678F3D4; MergeEngine.ECS.Systems.Items.ExpendableSystem.SetExpendableTrackingData; status ok */


void MergeEngine_ECS_Systems_Items_ExpendableSystem__SetExpendableTrackingData
               (long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uStack_38;
  
  if ((bRam0000000007e28d59 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078103c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e28d59 = 1;
  }
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x30), lVar4 == 0)) goto SUB_057da5fc;
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) {
    lVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078103c0);
    func_0x06a005e4(lVar4,0);
  }
  if (param_2 == 0x10) {
    if ((param_3 == 0) || (plVar1 = *(long **)(param_3 + 0x10), plVar1 == (long *)0x0))
    goto SUB_057da5fc;
    uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    if (lVar4 == 0) goto SUB_057da5fc;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    func_0x032809c4();
  }
  else if (param_2 == 4) {
    if ((param_3 == 0) || (plVar1 = *(long **)(param_3 + 0x10), plVar1 == (long *)0x0))
    goto SUB_057da5fc;
    uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    if (lVar4 == 0) goto SUB_057da5fc;
    func_0x06a00508(lVar4,uVar2,0);
  }
  else if (lVar4 == 0) goto SUB_057da5fc;
  *(undefined1 *)(lVar4 + 0x18) = 1;
  if (param_4 != 0) {
    uStack_38 = 0;
    func_0x0437b6e0(&uStack_38,*(undefined4 *)(param_4 + 0x30),*(undefined8 *)PTR_DAT_07750da0);
    *(undefined8 *)(lVar4 + 0x1c) = uStack_38;
    plVar1 = *(long **)(param_1 + 0x50);
    if (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_0688f564;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar1,*(long *)PTR_DAT_0777a498,0x14);
LAB_0688f564:
      uVar2 = (*(code *)*puVar3)(plVar1,param_4,puVar3[1]);
      *(undefined8 *)(lVar4 + 0x10) = uVar2;
      func_0x032809c4();
      if ((*(long *)(param_1 + 0x88) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x30), lVar5 != 0)) {
        plVar1 = (long *)(lVar5 + 0x20);
        *plVar1 = lVar4;
        func_0x032809c4(plVar1,lVar4);
        return;
      }
    }
  }
SUB_057da5fc:
  func_0x03280cac();
  return;
}

