/* Ghidra 12.1.2 native pseudocode; RVA 0x6784F94; MergeEngine.ECS.Systems.Board.SplitSystem.GetResultItem; status ok */


/* WARNING: Removing unreachable block (ram,0x06884f44) */

ulong MergeEngine_ECS_Systems_Board_SplitSystem__GetResultItem
                (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  undefined8 unaff_x20;
  long *plVar13;
  long *unaff_x21;
  ulong uVar14;
  long unaff_x22;
  undefined *puVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  do {
    lVar6 = auVar16._0_8_;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    lVar3 = lVar6;
    if ((bRam0000000007e28d1a & 1) == 0) {
      lVar3 = func_0x03280a18(PTR_DAT_0777a498);
      bRam0000000007e28d1a = 1;
    }
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x38);
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    uVar4 = MergeEngine_ECS_Systems_Board_SplitSystem__GetSplitterAndTarget
                      (lVar3,auVar16._8_8_,param_3,puVar7,puVar8,
                       (undefined1 *)((long)register0x00000008 + -0x40));
    puVar1 = PTR_DAT_0777a498;
    lVar3 = 0;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    plVar13 = *(long **)(lVar6 + 0x40);
    puVar15 = (undefined *)0x7e28000;
    if (plVar13 != (long *)0x0) {
      lVar3 = *plVar13;
      uVar14 = *(ulong *)((long)register0x00000008 + -0x28);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
            goto LAB_06885060;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a498,0x14);
LAB_06885060:
      param_3 = (long *)puVar5[1];
      lVar3 = (*(code *)*puVar5)(plVar13,uVar14);
      if (lVar3 == 0) {
        return 0;
      }
      plVar12 = *(long **)(lVar6 + 0x40);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar14;
      auVar16 = auVar17 << 0x40;
      puVar15 = puVar1;
      if (plVar12 != (long *)0x0) {
        lVar10 = *plVar12;
        lVar6 = *(long *)puVar1;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 == 0) goto LAB_068850b0;
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        break;
      }
    }
    auVar17 = func_0x03280cac(lVar3);
    unaff_x19 = auVar17._0_8_;
    *(code **)((long)register0x00000008 + -0x60) =
         MergeEngine_ECS_Systems_Board_SplitSystem__OnVerifySplitConfirmed;
    *(long *)((long)register0x00000008 + -0x58) = auVar16._8_8_;
    *(long **)((long)register0x00000008 + -0x50) = plVar13;
    *(long *)((long)register0x00000008 + -0x48) = auVar16._0_8_;
    plVar12 = param_3;
    if (*(long *)(unaff_x19 + 0x58) == 0) {
LAB_06885150:
      auVar17 = func_0x03280cac();
      *(code **)((long)register0x00000008 + -0xa0) =
           MergeEngine_ECS_Systems_Board_SplitSystem__TrySplitItem;
      *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(undefined **)((long)register0x00000008 + -0x80) = puVar15;
      *(long *)((long)register0x00000008 + -0x78) = auVar16._8_8_;
      *(long **)((long)register0x00000008 + -0x70) = plVar13;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      uVar2 = MergeEngine_ECS_Systems_Board_SplitSystem__CanBeSplit(auVar17._0_8_,plVar12);
      if ((uVar2 & 1) != 0) {
        MergeEngine_ECS_Systems_Board_SplitSystem__Split
                  (auVar17._0_8_,auVar17._8_8_,plVar12,puVar7,puVar8,puVar9);
      }
      return (ulong)(uVar2 & 1);
    }
    plVar12 = (long *)0x0;
    unaff_x22 = func_0x06760834(*(long *)(unaff_x19 + 0x58),auVar17._8_8_,0);
    plVar13 = param_3;
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_06885150;
    unaff_x21 = (long *)func_0x06760834(*(long *)(unaff_x19 + 0x58),param_3,0);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined **)((long)register0x00000008 + -0x60) = puVar15;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    param_3 = unaff_x21;
    uVar4 = MergeEngine_ECS_Systems_Board_SplitSystem__GetSplitterAndTarget();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if ((unaff_x22 != 0) && (unaff_x21 != (long *)0x0)) {
      param_3 = *(long **)((long)register0x00000008 + -0x78);
      uVar4 = MergeEngine_ECS_Systems_Board_SplitSystem__TrySplitItem
                        (unaff_x19,*(undefined8 *)((long)register0x00000008 + -0x68),param_3,
                         *(undefined8 *)(unaff_x22 + 0x30),unaff_x21[6],
                         *(undefined8 *)((long)register0x00000008 + -0x80));
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        func_0x064b8e28(*(long *)(unaff_x19 + 0x68),0);
        return 1;
      }
    }
    unaff_x30 = MergeEngine_ECS_Systems_Board_SplitSystem__GetResultItem;
    auVar16 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar6) {
      puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
      goto LAB_068850d0;
    }
  }
LAB_068850b0:
  puVar5 = (undefined8 *)func_0x03256b10(plVar12,lVar6,0x10);
LAB_068850d0:
  uVar4 = (*(code *)*puVar5)(plVar12,lVar3,puVar5[1]);
  return uVar4;
}

