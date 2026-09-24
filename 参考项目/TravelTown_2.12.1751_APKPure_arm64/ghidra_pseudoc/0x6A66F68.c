/* Ghidra 12.1.2 native pseudocode; RVA 0x6A66F68; Merger.MergeBoard.Systems.ExpendableTimerActivationSystem.ActivateTimer; status ok */


/* WARNING: Possible PIC construction at 0x06b670fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b67100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_MergeBoard_Systems_ExpendableTimerActivationSystem__ActivateTimer
               (undefined8 param_1,long param_2,long *param_3,long param_4,long *param_5,
               long param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined3 uStack_9c;
  undefined4 uStack_98;
  undefined3 uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 uStack_55;
  undefined3 uStack_54;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  plVar6 = param_3;
  lVar7 = param_4;
  if ((bRam0000000007e2a6a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830c10);
    func_0x03280a18(PTR_DAT_07830c18);
    bRam0000000007e2a6a6 = 1;
  }
  uVar1 = *(undefined4 *)((long)param_3 + 9);
  lVar15 = *param_3;
  uStack_54 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0xc) >> 8);
  dVar14 = (double)param_3[2];
  uStack_98 = *(undefined4 *)(param_4 + 0x19);
  lVar11 = param_3[3];
  uStack_94 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x1c) >> 8);
  lVar8 = -0x8000000000000000;
  if (dVar14 != INFINITY) {
    lVar8 = (long)dVar14;
  }
  lVar3 = func_0x06b664ec(param_1);
  plVar4 = (long *)func_0x06b664ec(param_1);
  puVar2 = PTR_DAT_07830c18;
  uStack_55 = (undefined1)((uint)uVar1 >> 0x18);
  uStack_9c = uStack_54;
  uStack_a0 = uVar1;
  if (param_2 == 0) {
    uVar12 = 0x6b67128;
    auVar16 = func_0x03280cac();
  }
  else {
    dVar13 = dVar14 * _UNK_017806f0 + (double)lVar3;
    uStack_88._0_5_ = CONCAT41(uVar1,1);
    uStack_88 = CONCAT44(CONCAT31(uStack_54,uStack_55),(undefined4)uStack_88);
    lVar7 = -0x8000000000000000;
    if (dVar13 != INFINITY) {
      lVar7 = (long)dVar13;
    }
    lStack_90 = lVar15;
    plStack_80 = (long *)dVar14;
    uStack_78 = lVar11;
    func_0x03d1dda0(param_2,&lStack_90,*(undefined8 *)PTR_DAT_07830c10);
    uStack_78._0_5_ = CONCAT41(uStack_98,lVar8 == 0);
    uStack_78 = CONCAT44(CONCAT31(uStack_94,uStack_98._3_1_),(undefined4)uStack_78);
    lStack_90 = lVar8;
    uStack_88 = lVar7;
    plStack_80 = plVar4;
    func_0x03d1de74(param_2,&lStack_90,*(undefined8 *)puVar2);
    lStack_b8 = param_5[3];
    lStack_c0 = param_5[2];
    lStack_a8 = param_5[5];
    lStack_b0 = param_5[4];
    lStack_c8 = param_5[1];
    lStack_d0 = *param_5;
    uVar12 = 0x6b67100;
    plVar6 = &lStack_d0;
    lVar7 = param_6;
    param_3 = plVar4;
  }
  uStack_100 = uVar12;
  plStack_f8 = param_3;
  plStack_f0 = param_5;
  uStack_e8 = param_1;
  lStack_e0 = param_2;
  lStack_d8 = param_6;
  if ((bRam0000000007e2a6a7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_0777a568);
    func_0x03280a18(PTR_DAT_07800ab8);
    bRam0000000007e2a6a7 = 1;
  }
  if (auVar16._8_8_ != 0) {
    plVar4 = *(long **)(auVar16._0_8_ + 0x20);
    func_0x03d1b250(auStack_130,auVar16._8_8_,*(undefined8 *)PTR_DAT_0777a488);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a568) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_06b67200;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_0777a568,1);
LAB_06b67200:
      lVar8 = (*(code *)*puVar5)(plVar4,uStack_128,puVar5[1]);
      if ((plVar6[5] != 0) &&
         (uVar12 = MergeEngine_ECS_Systems_Items_TimeLimitedActivationSystem__CreateExtraDataWithTimerItemData
                             (*(undefined4 *)(plVar6[5] + 0x10),1,*(undefined8 *)PTR_DAT_07800ab8,
                              lVar7,0,0), lVar8 != 0)) {
        *(undefined8 *)(lVar8 + 0x38) = uVar12;
        func_0x032809c4((undefined8 *)(lVar8 + 0x38),uVar12);
        *(undefined1 *)(lVar8 + 0x40) = 1;
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}

