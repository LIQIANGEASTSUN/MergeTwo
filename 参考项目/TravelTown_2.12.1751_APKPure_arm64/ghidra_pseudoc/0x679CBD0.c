/* Ghidra 12.1.2 native pseudocode; RVA 0x679CBD0; MergeEngine.ECS.Systems.Items.Producers.SpawnerSystem.IsTileReady; status ok */

ulong MergeEngine_ECS_Systems_Items_Producers_SpawnerSystem__IsTileReady
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000007e28dc1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    bRam0000000007e28dc1 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077cc678) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x18) * 0x10 + 0x138);
            goto LAB_0689cc78;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar2,*(long *)PTR_DAT_077cc678,0x18);
LAB_0689cc78:
      uVar6 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x88);
        if (lVar5 != 0) {
          lVar5 = func_0x06a02444(lVar5,param_2,0);
          return (ulong)(lVar5 == 0);
        }
        func_0x03280cac(0,param_2,0);
        lVar5 = MergeEngine_ECS_Systems_Board_BoardSystem__GetUnlockedItemById();
        return (ulong)(lVar5 != 0);
      }
    }
  }
  uVar6 = func_0x03280cac();
  puVar1 = PTR_DAT_07810990;
  if ((bRam0000000007e28dc2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810990);
    bRam0000000007e28dc2 = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  return uVar6;
}

