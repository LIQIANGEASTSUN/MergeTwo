/* Ghidra 12.1.2 native pseudocode; RVA 0x53973F4; MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>.AddNewEntity; status ok */

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

long * MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___AddNewEntity
                 (long param_1,undefined8 param_2,long param_3,long *param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined1 auVar17 [16];
  long alStack_c8 [3];
  long *plStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long *plStack_88;
  
  if ((bRam0000000007e1c3c9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e1c3c9 = 1;
  }
  if ((param_1 == 0) || (plVar16 = *(long **)(param_1 + 0x10), plVar16 == (long *)0x0)) {
    auVar17 = func_0x03280cac();
    lVar12 = auVar17._8_8_;
    plVar6 = auVar17._0_8_;
    uVar14 = 0x7e1c000;
    plVar7 = plVar6;
    lVar13 = param_3;
    plVar16 = param_4;
    if ((bRam0000000007e1c3ca & 1) == 0) {
      func_0x03280a18(PTR_DAT_07782db0);
      func_0x03280a18(PTR_DAT_07782db8);
      func_0x03280a18(PTR_DAT_07782dc0);
      func_0x03280a18(PTR_DAT_07782dc8);
      plVar7 = (long *)func_0x03280a18(PTR_DAT_07782dd0);
      bRam0000000007e1c3ca = 1;
    }
    puVar4 = PTR_DAT_07782dd0;
    puVar3 = PTR_DAT_07782db8;
    puVar2 = PTR_DAT_07782db0;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      while( true ) {
        uVar1 = uVar1 - 1;
        if ((int)uVar1 < 0) {
          return plVar7;
        }
        uVar14 = (ulong)uVar1;
        if ((*(byte *)(*(long *)(*(long *)(param_4[4] + 0xc0) + 0x20) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar8 = func_0x03280ca0();
        func_0x04c1be58(lVar8,*(undefined8 *)(*(long *)(param_4[4] + 0xc0) + 0x28));
        lVar13 = *(long *)puVar4;
        lVar9 = func_0x0414419c(lVar12,uVar14);
        unaff_x25 = 0;
        if (lVar8 == 0) break;
        unaff_x24 = (long *)(lVar8 + 0x10);
        *unaff_x24 = lVar9;
        plVar7 = (long *)func_0x032809c4(unaff_x24,lVar9);
        if (*unaff_x24 != 0) {
          uVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
          plVar16 = (long *)0x0;
          func_0x05355fbc(uVar10,lVar8,*(undefined8 *)(*(long *)(param_4[4] + 0xc0) + 0x30));
          plVar7 = (long *)func_0x03d26848(param_3,uVar10,*(undefined8 *)puVar2);
          if (((ulong)plVar7 & 1) != 0) {
            (**(code **)(*plVar6 + 0x218))(plVar6,*unaff_x24,*(undefined8 *)(*plVar6 + 0x220));
            plVar7 = (long *)func_0x04145af8(lVar12,*unaff_x24,*(undefined8 *)PTR_DAT_07782dc0);
          }
        }
      }
    }
    func_0x03280cac();
    alStack_c8[1] = 0x5497634;
    lVar12 = lVar13;
    alStack_c8[2] = unaff_x25;
    plStack_b0 = unaff_x24;
    uStack_a8 = uVar14;
    lStack_90 = param_3;
    plStack_88 = param_4;
    auStack_a0 = auVar17;
    if ((bRam0000000007e1c3cb & 1) == 0) {
      func_0x03280a18(PTR_DAT_07782dd8);
      func_0x03280a18(PTR_DAT_0777e5b8);
      func_0x03280a18(PTR_DAT_0777a498);
      bRam0000000007e1c3cb = 1;
    }
    alStack_c8[0] = 0;
    if (lVar13 == 0) {
      func_0x03280cac();
      uVar10 = extraout_x1_00;
    }
    else {
      lVar12 = *(long *)(lVar13 + 0x18);
      plVar16 = alStack_c8;
      param_5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40);
      uVar10 = extraout_x1;
    }
    if ((bRam0000000007e1c3cc & 1) == 0) {
      func_0x03280a18(PTR_DAT_07782de0);
      func_0x03280a18(PTR_DAT_07782de8);
      bRam0000000007e1c3cc = 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0)
    {
      func_0x0325681c();
    }
    lVar13 = func_0x03280ca0();
    func_0x04034ff4(lVar13,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
    puVar3 = PTR_DAT_07782de8;
    puVar2 = PTR_DAT_07782de0;
    if (lVar13 == 0) {
      plVar16 = (long *)func_0x03280cac();
      return plVar16;
    }
    *(long *)(lVar13 + 0x10) = lVar12;
    func_0x032809c4((long *)(lVar13 + 0x10),lVar12);
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x05355fbc(uVar11,lVar13,
                    *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58),0);
    lVar13 = func_0x03d45130(uVar10,uVar11,*(undefined8 *)puVar2);
    *plVar16 = lVar13;
    func_0x032809c4(plVar16,lVar13);
    return (long *)(ulong)(*plVar16 != 0);
  }
  lVar13 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777e5c0) {
        puVar5 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
        goto LAB_05497488;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0777e5c0,5);
LAB_05497488:
                    /* WARNING: Could not recover jumptable at 0x0549749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar16 = (long *)(*(code *)*puVar5)(plVar16,param_2,puVar5[1]);
  return plVar16;
}

