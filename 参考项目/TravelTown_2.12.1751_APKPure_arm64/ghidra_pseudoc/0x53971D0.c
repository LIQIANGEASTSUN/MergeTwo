/* Ghidra 12.1.2 native pseudocode; RVA 0x53971D0; MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>.LoadState; status ok */

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

long * MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___LoadState
                 (long *param_1,long param_2,undefined8 param_3,long *param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long alStack_f8 [3];
  long *plStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long *plStack_b8;
  
  plVar5 = param_1;
  if ((bRam0000000007e1c3c8 & 1) == 0) {
    plVar5 = (long *)func_0x03280a18(PTR_DAT_07782da8);
    bRam0000000007e1c3c8 = 1;
  }
  puVar2 = PTR_DAT_07782da8;
  if (param_2 == 0) {
    return plVar5;
  }
  uVar6 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  plVar5 = (long *)param_1[10];
  if (plVar5 == (long *)0x0) goto LAB_05497330;
  lVar15 = *plVar5;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_05497280;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar2,2);
LAB_05497280:
  (*(code *)*puVar7)(plVar5,1,puVar7[1]);
  param_4 = *(long **)(*param_1 + 0x240);
  (**(code **)(*param_1 + 0x238))(param_1,param_2,uVar6);
  param_2 = 0;
  do {
    param_1 = (long *)param_1[10];
    if (param_1 == (long *)0x0) {
      func_0x03280cac();
LAB_05497330:
      func_0x03280cac();
    }
    else {
      lVar15 = *param_1;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_05497308;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar2,1);
LAB_05497308:
      plVar5 = (long *)(*(code *)*puVar7)(param_1,1,puVar7[1]);
      if (param_2 == 0) {
        return plVar5;
      }
    }
    auVar19 = func_0x03280ca4(param_2);
    if (auVar19._8_4_ != 1) break;
    plVar5 = (long *)func_0x072ce910(auVar19._0_8_);
    param_2 = *plVar5;
    func_0x072ce920();
  } while( true );
  plVar5 = (long *)param_1[10];
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  lVar15 = *plVar5;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_054973cc;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar5,*(long *)puVar2,1);
LAB_054973cc:
  lVar15 = puVar7[1];
  (*(code *)*puVar7)(plVar5,1);
  func_0x03365958(auVar19._0_8_);
  func_0x03280ca4(0);
  auVar18 = func_0x02f09514();
  if ((bRam0000000007e1c3c9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5c0);
    bRam0000000007e1c3c9 = 1;
  }
  if ((auVar18._0_8_ == 0) || (plVar5 = *(long **)(auVar18._0_8_ + 0x10), plVar5 == (long *)0x0)) {
    auVar18 = func_0x03280cac();
    lVar14 = auVar18._8_8_;
    plVar8 = auVar18._0_8_;
    uVar16 = 0x7e1c000;
    plVar9 = plVar8;
    lVar13 = lVar15;
    plVar5 = param_4;
    if ((bRam0000000007e1c3ca & 1) == 0) {
      func_0x03280a18(PTR_DAT_07782db0);
      func_0x03280a18(PTR_DAT_07782db8);
      func_0x03280a18(PTR_DAT_07782dc0);
      func_0x03280a18(PTR_DAT_07782dc8);
      plVar9 = (long *)func_0x03280a18(PTR_DAT_07782dd0);
      bRam0000000007e1c3ca = 1;
    }
    puVar4 = PTR_DAT_07782dd0;
    puVar3 = PTR_DAT_07782db8;
    puVar2 = PTR_DAT_07782db0;
    if (lVar14 != 0) {
      uVar1 = *(uint *)(lVar14 + 0x18);
      while( true ) {
        uVar1 = uVar1 - 1;
        if ((int)uVar1 < 0) {
          return plVar9;
        }
        uVar16 = (ulong)uVar1;
        if ((*(byte *)(*(long *)(*(long *)(param_4[4] + 0xc0) + 0x20) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar10 = func_0x03280ca0();
        func_0x04c1be58(lVar10,*(undefined8 *)(*(long *)(param_4[4] + 0xc0) + 0x28));
        lVar13 = *(long *)puVar4;
        lVar11 = func_0x0414419c(lVar14,uVar16);
        unaff_x25 = 0;
        if (lVar10 == 0) break;
        unaff_x24 = (long *)(lVar10 + 0x10);
        *unaff_x24 = lVar11;
        plVar9 = (long *)func_0x032809c4(unaff_x24,lVar11);
        if (*unaff_x24 != 0) {
          uVar6 = func_0x03280ca0(*(undefined8 *)puVar3);
          plVar5 = (long *)0x0;
          func_0x05355fbc(uVar6,lVar10,*(undefined8 *)(*(long *)(param_4[4] + 0xc0) + 0x30));
          plVar9 = (long *)func_0x03d26848(lVar15,uVar6,*(undefined8 *)puVar2);
          if (((ulong)plVar9 & 1) != 0) {
            (**(code **)(*plVar8 + 0x218))(plVar8,*unaff_x24,*(undefined8 *)(*plVar8 + 0x220));
            plVar9 = (long *)func_0x04145af8(lVar14,*unaff_x24,*(undefined8 *)PTR_DAT_07782dc0);
          }
        }
      }
    }
    func_0x03280cac();
    alStack_f8[1] = 0x5497634;
    lVar14 = lVar13;
    alStack_f8[2] = unaff_x25;
    plStack_e0 = unaff_x24;
    uStack_d8 = uVar16;
    lStack_c0 = lVar15;
    plStack_b8 = param_4;
    auStack_d0 = auVar18;
    if ((bRam0000000007e1c3cb & 1) == 0) {
      func_0x03280a18(PTR_DAT_07782dd8);
      func_0x03280a18(PTR_DAT_0777e5b8);
      func_0x03280a18(PTR_DAT_0777a498);
      bRam0000000007e1c3cb = 1;
    }
    alStack_f8[0] = 0;
    if (lVar13 == 0) {
      func_0x03280cac();
      uVar6 = extraout_x1_00;
    }
    else {
      lVar14 = *(long *)(lVar13 + 0x18);
      plVar5 = alStack_f8;
      param_5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40);
      uVar6 = extraout_x1;
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
    lVar15 = func_0x03280ca0();
    func_0x04034ff4(lVar15,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
    puVar3 = PTR_DAT_07782de8;
    puVar2 = PTR_DAT_07782de0;
    if (lVar15 == 0) {
      plVar5 = (long *)func_0x03280cac();
      return plVar5;
    }
    *(long *)(lVar15 + 0x10) = lVar14;
    func_0x032809c4((long *)(lVar15 + 0x10),lVar14);
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x05355fbc(uVar12,lVar15,
                    *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58),0);
    lVar15 = func_0x03d45130(uVar6,uVar12,*(undefined8 *)puVar2);
    *plVar5 = lVar15;
    func_0x032809c4(plVar5,lVar15);
    return (long *)(ulong)(*plVar5 != 0);
  }
  lVar15 = *plVar5;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e5c0) {
        puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 5) * 0x10 + 0x138);
        goto LAB_05497488;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777e5c0,5);
LAB_05497488:
                    /* WARNING: Could not recover jumptable at 0x0549749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar5 = (long *)(*(code *)*puVar7)(plVar5,auVar18._8_8_,puVar7[1]);
  return plVar5;
}

