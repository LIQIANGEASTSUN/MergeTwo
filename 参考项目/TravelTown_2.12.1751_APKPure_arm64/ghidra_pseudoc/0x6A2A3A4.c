/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A3A4; MergeEngine.Configuration.Definitions.ResourceMultiple.Merger.Game.Views.Components.Orders.Rewards.IPrioritizedOrderReward.get_Priority; status ok */


ulong MergeEngine_Configuration_Definitions_ResourceMultiple__Merger_Game_Views_Components_Orders_Rewards_IPrioritizedOrderReward_get_Priority
                (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uStack_24;
  
  puVar4 = PTR_DAT_0780d4f8;
  if ((bRam0000000007e2a42d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d4f8);
    bRam0000000007e2a42d = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar4 = PTR_DAT_0780d4f8;
  if ((bRam0000000007e2894b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d500,0);
    func_0x03280a18(PTR_DAT_0780d4f8);
    bRam0000000007e2894b = 1;
  }
  lVar6 = *(long *)puVar4;
  uStack_24 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar6 = *(long *)puVar4;
  }
  if ((param_1 != 0) && (**(long **)(lVar6 + 0xb8) != 0)) {
    uVar7 = func_0x04f60304(**(long **)(lVar6 + 0xb8),*(undefined4 *)(param_1 + 0x5c),&uStack_24,
                            *(undefined8 *)PTR_DAT_0780d500);
    if ((uVar7 & 1) == 0) {
      uStack_24 = 0xffffffff;
    }
    return (ulong)uStack_24;
  }
  func_0x03280cac();
  puVar5 = PTR_DAT_0780d510;
  puVar4 = PTR_DAT_0780d508;
  if ((bRam0000000007e2894c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d518);
    func_0x03280a18(PTR_DAT_0780d510);
    func_0x03280a18(PTR_DAT_0780d508);
    func_0x03280a18(PTR_DAT_0780d4f8);
    bRam0000000007e2894c = 1;
  }
  lVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x04f5dbb0(lVar6,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_0780d518;
  puVar4 = PTR_DAT_0780d4f8;
  if (lVar6 != 0) {
    func_0x04f5e994(lVar6,6,0xf,*(undefined8 *)PTR_DAT_0780d518);
    func_0x04f5e994(lVar6,0,9,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,1,8,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,2,6,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,3,5,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,4,0xe,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,5,7,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,7,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,8,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,9,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,10,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0xb,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0xc,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0xd,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0xe,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0xf,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0x10,3,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0x11,2,*(undefined8 *)puVar5);
    func_0x04f5e994(lVar6,0x13,1,*(undefined8 *)puVar5);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar6;
    uVar7 = *(ulong *)(*(long *)puVar4 + 0xb8);
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)((uVar7 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return uVar7;
  }
  plVar8 = (long *)func_0x03280cac();
                    /* WARNING: Could not recover jumptable at 0x0682bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*plVar8 + 0x1f8))
                    (plVar8,plVar8[8],plVar8[9],*(undefined8 *)(*plVar8 + 0x200));
  return uVar7;
}

