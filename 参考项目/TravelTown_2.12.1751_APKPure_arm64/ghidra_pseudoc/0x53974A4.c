/* Ghidra 12.1.2 native pseudocode; RVA 0x53974A4; MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>.HandleExistingEntities; status ok */

/* WARNING: Possible PIC construction at 0x054976b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x054976bc) */
/* WARNING: Removing unreachable block (ram,0x054976d4) */
/* WARNING: Removing unreachable block (ram,0x0549771c) */
/* WARNING: Removing unreachable block (ram,0x05497724) */
/* WARNING: Removing unreachable block (ram,0x0549773c) */
/* WARNING: Removing unreachable block (ram,0x05497744) */
/* WARNING: Removing unreachable block (ram,0x0549776c) */
/* WARNING: Removing unreachable block (ram,0x05497750) */
/* WARNING: Removing unreachable block (ram,0x0549775c) */
/* WARNING: Removing unreachable block (ram,0x0549777c) */
/* WARNING: Removing unreachable block (ram,0x054976e0) */
/* WARNING: Removing unreachable block (ram,0x05497708) */
/* WARNING: Removing unreachable block (ram,0x0549778c) */
/* WARNING: Removing unreachable block (ram,0x05497794) */
/* WARNING: Removing unreachable block (ram,0x0549779c) */
/* WARNING: Removing unreachable block (ram,0x054977b4) */
/* WARNING: Removing unreachable block (ram,0x054977bc) */
/* WARNING: Removing unreachable block (ram,0x054977e4) */
/* WARNING: Removing unreachable block (ram,0x054977c8) */
/* WARNING: Removing unreachable block (ram,0x054977d4) */
/* WARNING: Removing unreachable block (ram,0x054977f0) */
/* WARNING: Removing unreachable block (ram,0x054976c4) */
/* WARNING: Removing unreachable block (ram,0x054976cc) */
/* WARNING: Removing unreachable block (ram,0x05497808) */

long * MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___HandleExistingEntities
                 (long *param_1,long param_2,long param_3,long *param_4,long param_5,long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *unaff_x24;
  undefined8 unaff_x25;
  long alStack_a8 [3];
  long *plStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  uVar12 = 0x7e1c000;
  plVar5 = param_1;
  lVar10 = param_3;
  plVar11 = param_4;
  if ((bRam0000000007e1c3ca & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782db0);
    func_0x03280a18(PTR_DAT_07782db8);
    func_0x03280a18(PTR_DAT_07782dc0);
    func_0x03280a18(PTR_DAT_07782dc8);
    plVar5 = (long *)func_0x03280a18(PTR_DAT_07782dd0);
    bRam0000000007e1c3ca = 1;
  }
  puVar4 = PTR_DAT_07782dd0;
  puVar3 = PTR_DAT_07782db8;
  puVar2 = PTR_DAT_07782db0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    while( true ) {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return plVar5;
      }
      uVar12 = (ulong)uVar1;
      if ((*(byte *)(*(long *)(*(long *)(param_4[4] + 0xc0) + 0x20) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar6 = func_0x03280ca0();
      func_0x04c1be58(lVar6,*(undefined8 *)(*(long *)(param_4[4] + 0xc0) + 0x28));
      lVar10 = *(long *)puVar4;
      lVar7 = func_0x0414419c(param_2,uVar12);
      unaff_x25 = 0;
      if (lVar6 == 0) break;
      unaff_x24 = (long *)(lVar6 + 0x10);
      *unaff_x24 = lVar7;
      plVar5 = (long *)func_0x032809c4(unaff_x24,lVar7);
      if (*unaff_x24 != 0) {
        uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
        plVar11 = (long *)0x0;
        func_0x05355fbc(uVar8,lVar6,*(undefined8 *)(*(long *)(param_4[4] + 0xc0) + 0x30));
        plVar5 = (long *)func_0x03d26848(param_3,uVar8,*(undefined8 *)puVar2);
        if (((ulong)plVar5 & 1) != 0) {
          (**(code **)(*param_1 + 0x218))(param_1,*unaff_x24,*(undefined8 *)(*param_1 + 0x220));
          plVar5 = (long *)func_0x04145af8(param_2,*unaff_x24,*(undefined8 *)PTR_DAT_07782dc0);
        }
      }
    }
  }
  func_0x03280cac();
  alStack_a8[1] = 0x5497634;
  lVar6 = lVar10;
  alStack_a8[2] = unaff_x25;
  plStack_90 = unaff_x24;
  uStack_88 = uVar12;
  plStack_80 = param_1;
  lStack_78 = param_2;
  lStack_70 = param_3;
  plStack_68 = param_4;
  if ((bRam0000000007e1c3cb & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782dd8);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e1c3cb = 1;
  }
  alStack_a8[0] = 0;
  if (lVar10 == 0) {
    func_0x03280cac();
    uVar8 = extraout_x1_00;
  }
  else {
    lVar6 = *(long *)(lVar10 + 0x18);
    plVar11 = alStack_a8;
    param_5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40);
    uVar8 = extraout_x1;
  }
  if ((bRam0000000007e1c3cc & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782de0);
    func_0x03280a18(PTR_DAT_07782de8);
    bRam0000000007e1c3cc = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar10 = func_0x03280ca0();
  func_0x04034ff4(lVar10,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
  puVar3 = PTR_DAT_07782de8;
  puVar2 = PTR_DAT_07782de0;
  if (lVar10 == 0) {
    plVar11 = (long *)func_0x03280cac();
    return plVar11;
  }
  *(long *)(lVar10 + 0x10) = lVar6;
  func_0x032809c4((long *)(lVar10 + 0x10),lVar6);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x05355fbc(uVar9,lVar10,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58),0
                 );
  lVar10 = func_0x03d45130(uVar8,uVar9,*(undefined8 *)puVar2);
  *plVar11 = lVar10;
  func_0x032809c4(plVar11,lVar10);
  return (long *)(ulong)(*plVar11 != 0);
}

