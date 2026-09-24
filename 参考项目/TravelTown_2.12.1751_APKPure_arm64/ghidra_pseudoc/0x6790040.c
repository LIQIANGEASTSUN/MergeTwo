/* Ghidra 12.1.2 native pseudocode; RVA 0x6790040; MergeEngine.ECS.Systems.Items.ExpendableSystem.SetTimeLimitedExtraData; status ok */


/* WARNING: Possible PIC construction at 0x068900ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06890180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06890248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689013c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0689024c) */
/* WARNING: Removing unreachable block (ram,0x06890184) */
/* WARNING: Removing unreachable block (ram,0x06890190) */
/* WARNING: Removing unreachable block (ram,0x068901ac) */
/* WARNING: Removing unreachable block (ram,0x068901b4) */
/* WARNING: Removing unreachable block (ram,0x068901dc) */
/* WARNING: Removing unreachable block (ram,0x068901c0) */
/* WARNING: Removing unreachable block (ram,0x068901cc) */
/* WARNING: Removing unreachable block (ram,0x068901e8) */
/* WARNING: Removing unreachable block (ram,0x06890250) */
/* WARNING: Removing unreachable block (ram,0x06890220) */
/* WARNING: Removing unreachable block (ram,0x068900f0) */
/* WARNING: Removing unreachable block (ram,0x06890140) */

undefined1  [16]
MergeEngine_ECS_Systems_Items_ExpendableSystem__SetTimeLimitedExtraData
          (undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  if ((bRam0000000007e28d5e & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_07773cd8);
    func_0x03280a18(PTR_DAT_0777e5f0);
    func_0x03280a18(PTR_DAT_07800aa8);
    func_0x03280a18(PTR_DAT_078104d0);
    auVar11 = func_0x03280a18(PTR_DAT_07800ab8);
    bRam0000000007e28d5e = 1;
  }
  puVar4 = PTR_DAT_07800ab8;
  if (param_2 != 0) {
    plVar7 = (long *)(param_2 + 0x40);
    if (*plVar7 == 0) {
      lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
      func_0x06a30df4(lVar5,0);
      *plVar7 = lVar5;
    }
    else {
      plVar7 = (long *)(*plVar7 + 0x28);
      lVar8 = *plVar7;
      if (lVar8 == 0) {
        lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07800aa8);
        func_0x06a30f58(lVar5,0);
        *plVar7 = lVar5;
      }
      else {
        if ((param_3 == 0) || (*(long *)(param_3 + 0x58) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x58) + 0x18);
        }
        if (lVar8 == 0) {
          auVar10._0_8_ = func_0x03280cac();
          puVar4 = PTR_DAT_078104d8;
          if ((bRam0000000007e28d5f & 1) == 0) {
            func_0x03280a18(PTR_DAT_078104d8);
            bRam0000000007e28d5f = 1;
          }
          uVar6 = *(undefined8 *)puVar4;
          auVar10._8_8_ = 0;
          return auVar10;
        }
        *(undefined8 *)(lVar8 + 0x28) = uVar6;
        func_0x032809c4();
        lVar5 = *(long *)puVar4;
        plVar7 = (long *)(lVar8 + 0x20);
        *plVar7 = lVar5;
      }
    }
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auVar9._8_8_ = lVar5;
    auVar9._0_8_ = plVar7;
    return auVar9;
  }
  return auVar11;
}

