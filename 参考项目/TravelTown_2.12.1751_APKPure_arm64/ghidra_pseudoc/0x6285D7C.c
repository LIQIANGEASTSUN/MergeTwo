/* Ghidra 12.1.2 native pseudocode; RVA 0x6285D7C; MergeEngine.ECS.Systems.InventorySystem.CreateUpdatedItemNotificationData; status ok */

undefined8
MergeEngine_ECS_Systems_InventorySystem__CreateUpdatedItemNotificationData
          (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar8 = param_3 & 0xffffffff;
  uVar5 = param_3;
  if ((bRam0000000007e254dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e254dc = 1;
  }
  if ((param_2 != 0) &&
     (lVar1 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_0777a928), lVar1 != 0)) {
    *(int *)(lVar1 + 0x28) = (int)param_3;
    plVar9 = *(long **)(param_1 + 0x60);
    uVar8 = 0;
    param_2 = lVar1;
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x14) * 0x10 + 0x138);
            goto LAB_06385e5c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,0x14);
LAB_06385e5c:
      uVar5 = puVar2[1];
      uVar3 = (*(code *)*puVar2)(plVar9,lVar1);
      plVar9 = *(long **)(param_1 + 0x88);
      uVar8 = 0;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar7 = *(undefined8 *)(lVar1 + 0x10);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        uVar10 = *(undefined8 *)PTR_DAT_07778fa0;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777e4a0) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_06385edc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777e4a0,0);
LAB_06385edc:
                    /* WARNING: Could not recover jumptable at 0x06385f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)(plVar9,uVar10,uVar3,uVar7,0,puVar2[1]);
        return uVar3;
      }
    }
  }
  func_0x03280cac();
  uStack_50 = 0x6385f08;
  uStack_48 = uVar8;
  lStack_40 = param_2;
  lStack_38 = param_1;
  if ((bRam0000000007e254df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a948);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e254df = 1;
  }
  uVar8 = func_0x06b1d910(extraout_x1,0);
  if (((((uVar8 & 1) == 0) && (uVar8 = func_0x06b1d9c4(extraout_x1,0), (uVar8 & 1) == 0)) ||
      (uVar5 == 0)) || (lVar1 = func_0x03d20d84(uVar5,*(undefined8 *)PTR_DAT_0777a948), lVar1 == 0))
  {
    uStack_58 = 0;
  }
  else {
    uStack_58 = 0;
    func_0x0437b6e0(&uStack_58,*(undefined4 *)(lVar1 + 0x28),*(undefined8 *)PTR_DAT_07750da0);
  }
  return uStack_58;
}

