/* Ghidra 12.1.2 native pseudocode; RVA 0x6784EE4; MergeEngine.ECS.Systems.Board.SplitSystem.PerformTryCombineItems; status ok */


/* WARNING: Possible PIC construction at 0x06884f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06884f3c) */
/* WARNING: Removing unreachable block (ram,0x06884f40) */
/* WARNING: Removing unreachable block (ram,0x06884f44) */
/* WARNING: Removing unreachable block (ram,0x06884f60) */
/* WARNING: Removing unreachable block (ram,0x06884f68) */

ulong MergeEngine_ECS_Systems_Board_SplitSystem__PerformTryCombineItems
                (long param_1,undefined *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 unaff_x19;
  long *plVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar15;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x30;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  do {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    plVar8 = param_3;
    uVar4 = func_0x0688459c();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if ((param_2 != (undefined *)0x0) && (param_3 != (long *)0x0)) {
      auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x28);
      auVar18._0_8_ = param_1;
      puVar11 = *(undefined1 **)((long)register0x00000008 + -0x40);
      plVar14 = *(long **)((long)register0x00000008 + -0x38);
      puVar9 = *(undefined1 **)(param_2 + 0x30);
      puVar10 = (undefined1 *)param_3[6];
      uVar16 = 0x6884f3c;
      unaff_x22 = param_2;
      goto SUB_06885154;
    }
    auVar17 = func_0x03280cac();
    lVar7 = auVar17._0_8_;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x6884f94;
    *(undefined **)((long)register0x00000008 + -0x60) = param_2;
    *(long **)((long)register0x00000008 + -0x58) = param_3;
    *(long **)((long)register0x00000008 + -0x50) = param_4;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    lVar5 = lVar7;
    if ((bRam0000000007e28d1a & 1) == 0) {
      lVar5 = func_0x03280a18(PTR_DAT_0777a498);
      bRam0000000007e28d1a = 1;
    }
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x78);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    uVar4 = func_0x0688459c(lVar5,auVar17._8_8_,plVar8,puVar9,puVar10,
                            (undefined1 *)((long)register0x00000008 + -0x80));
    puVar1 = PTR_DAT_0777a498;
    lVar5 = 0;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    param_4 = *(long **)(lVar7 + 0x40);
    unaff_x22 = (undefined *)0x7e28000;
    if (param_4 != (long *)0x0) {
      lVar5 = *param_4;
      uVar15 = *(ulong *)((long)register0x00000008 + -0x68);
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
            goto LAB_06885060;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_0777a498,0x14);
LAB_06885060:
      plVar8 = (long *)puVar6[1];
      lVar5 = (*(code *)*puVar6)(param_4,uVar15);
      if (lVar5 == 0) {
        return 0;
      }
      plVar14 = *(long **)(lVar7 + 0x40);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar15;
      auVar17 = auVar17 << 0x40;
      unaff_x22 = puVar1;
      if (plVar14 != (long *)0x0) {
        lVar12 = *plVar14;
        lVar7 = *(long *)puVar1;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 == 0) goto LAB_068850b0;
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        break;
      }
    }
    param_3 = auVar17._8_8_;
    auVar18 = func_0x03280cac(lVar5);
    param_1 = auVar18._0_8_;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x68850f8;
    *(long **)((long)register0x00000008 + -0x98) = param_3;
    *(long **)((long)register0x00000008 + -0x90) = param_4;
    *(long *)((long)register0x00000008 + -0x88) = auVar17._0_8_;
    plVar14 = plVar8;
    if (*(long *)(param_1 + 0x58) == 0) {
LAB_06885150:
      uVar16 = 0x6885154;
      auVar18 = func_0x03280cac();
SUB_06885154:
      *(undefined8 *)(puVar2 + -0x40) = uVar16;
      *(undefined8 *)(puVar2 + -0x38) = unaff_x25;
      *(undefined8 *)(puVar2 + -0x30) = unaff_x24;
      *(undefined8 *)(puVar2 + -0x28) = unaff_x23;
      *(undefined **)(puVar2 + -0x20) = unaff_x22;
      *(long **)(puVar2 + -0x18) = param_3;
      *(long **)(puVar2 + -0x10) = param_4;
      *(long *)(puVar2 + -8) = param_1;
      uVar3 = func_0x068846b4(auVar18._0_8_,plVar14);
      if ((uVar3 & 1) != 0) {
        func_0x068851c4(auVar18._0_8_,auVar18._8_8_,plVar14,puVar9,puVar10,puVar11);
      }
      return (ulong)(uVar3 & 1);
    }
    plVar14 = (long *)0x0;
    param_2 = (undefined *)func_0x06760834(*(long *)(param_1 + 0x58),auVar18._8_8_,0);
    param_4 = plVar8;
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_06885150;
    param_3 = (long *)func_0x06760834(*(long *)(param_1 + 0x58),plVar8,0);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x88);
    param_4 = (long *)0x0;
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x98);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar13 = piVar13 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar13 + -2) == lVar7) {
      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
      goto LAB_068850d0;
    }
  }
LAB_068850b0:
  puVar6 = (undefined8 *)func_0x03256b10(plVar14,lVar7,0x10);
LAB_068850d0:
  uVar4 = (*(code *)*puVar6)(plVar14,lVar5,puVar6[1]);
  return uVar4;
}

