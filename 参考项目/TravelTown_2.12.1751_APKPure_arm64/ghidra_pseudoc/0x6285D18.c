/* Ghidra 12.1.2 native pseudocode; RVA 0x6285D18; MergeEngine.ECS.Systems.InventorySystem.SelectAfterRetrieve; status ok */

undefined8 *
MergeEngine_ECS_Systems_InventorySystem__SelectAfterRetrieve
          (long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    puVar4 = (undefined8 *)func_0x06888e70(*(long *)(param_1 + 0xc0),0);
    if (((ulong)puVar4 & 1) == 0) {
      return puVar4;
    }
    if ((param_2 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
      param_3 = 0;
      MergeEngine_ECS_Systems_Board_BoardInteractionSystem__SelectItem
                (*(long *)(param_1 + 0xb8),*(undefined8 *)(param_2 + 0x30));
      lVar5 = *(long *)(param_1 + 0xc0);
      if (lVar5 != 0) {
        if ((bRam0000000007e28d2f & 1) == 0) {
          func_0x03280a18(PTR_DAT_0774f158,0);
          bRam0000000007e28d2f = 1;
        }
        puVar12 = (undefined8 *)(lVar5 + 0x58);
        puVar4 = (undefined8 *)func_0x055f7aac(*puVar12,0);
        if (((ulong)puVar4 & 1) == 0) {
          *puVar12 = *(undefined8 *)PTR_DAT_0774f158;
          if (iRam00000000080486b8 != 0) {
            puVar1 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return puVar12;
        }
        return puVar4;
      }
    }
  }
  auVar17 = func_0x03280cac();
  lVar5 = auVar17._8_8_;
  lVar6 = auVar17._0_8_;
  uStack_50 = 0x6385d7c;
  uVar14 = param_3 & 0xffffffff;
  uVar10 = param_3;
  if ((bRam0000000007e254dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a928);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e254dc = 1;
  }
  if ((lVar5 != 0) && (lVar7 = func_0x03d20d84(lVar5,*(undefined8 *)PTR_DAT_0777a928), lVar7 != 0))
  {
    *(int *)(lVar7 + 0x28) = (int)param_3;
    plVar15 = *(long **)(lVar6 + 0x60);
    uVar14 = 0;
    lVar5 = lVar7;
    if (plVar15 != (long *)0x0) {
      lVar9 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
            goto LAB_06385e5c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
LAB_06385e5c:
      uVar10 = puVar4[1];
      uVar8 = (*(code *)*puVar4)(plVar15,lVar7);
      plVar15 = *(long **)(lVar6 + 0x88);
      uVar14 = 0;
      if (plVar15 != (long *)0x0) {
        lVar5 = *plVar15;
        uVar13 = *(undefined8 *)(lVar7 + 0x10);
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar16 = *(undefined8 *)PTR_DAT_07778fa0;
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777e4a0) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06385edc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
LAB_06385edc:
                    /* WARNING: Could not recover jumptable at 0x06385f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined8 *)(*(code *)*puVar4)(plVar15,uVar16,uVar8,uVar13,0,puVar4[1]);
        return puVar4;
      }
    }
  }
  func_0x03280cac();
  uStack_70 = 0x6385f08;
  uStack_68 = uVar14;
  lStack_60 = lVar5;
  lStack_58 = lVar6;
  if ((bRam0000000007e254df & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a948);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e254df = 1;
  }
  uVar14 = func_0x06b1d910(extraout_x1,0);
  if (((((uVar14 & 1) == 0) && (uVar14 = func_0x06b1d9c4(extraout_x1,0), (uVar14 & 1) == 0)) ||
      (uVar10 == 0)) ||
     (lVar5 = func_0x03d20d84(uVar10,*(undefined8 *)PTR_DAT_0777a948), lVar5 == 0)) {
    puStack_78 = (undefined8 *)0x0;
  }
  else {
    puStack_78 = (undefined8 *)0x0;
    func_0x0437b6e0(&puStack_78,*(undefined4 *)(lVar5 + 0x28),*(undefined8 *)PTR_DAT_07750da0);
  }
  return puStack_78;
}

