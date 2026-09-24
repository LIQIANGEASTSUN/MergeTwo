/* Ghidra 12.1.2 native pseudocode; RVA 0x67850F8; MergeEngine.ECS.Systems.Board.SplitSystem.OnVerifySplitConfirmed; status ok */


/* WARNING: Possible PIC construction at 0x06884f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06884f3c) */
/* WARNING: Removing unreachable block (ram,0x06884f40) */
/* WARNING: Removing unreachable block (ram,0x06884f44) */
/* WARNING: Removing unreachable block (ram,0x06884f60) */
/* WARNING: Removing unreachable block (ram,0x06884f68) */

ulong MergeEngine_ECS_Systems_Board_SplitSystem__OnVerifySplitConfirmed
                (undefined8 param_1,undefined8 param_2,long *param_3,undefined1 *param_4,
                undefined1 *param_5,undefined1 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong uVar13;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar14;
  code *unaff_x30;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  auVar15._8_8_ = unaff_x21;
  auVar15._0_8_ = unaff_x19;
  while( true ) {
    lVar5 = auVar16._0_8_;
    plVar8 = auVar15._8_8_;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = plVar8;
    *(long **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = auVar15._0_8_;
    plVar10 = param_3;
    if (*(long *)(lVar5 + 0x58) == 0) break;
    plVar10 = (long *)0x0;
    puVar7 = (undefined *)func_0x06760834(*(long *)(lVar5 + 0x58),auVar16._8_8_,0);
    unaff_x20 = param_3;
    if (*(long *)(lVar5 + 0x58) == 0) break;
    plVar8 = (long *)func_0x06760834(*(long *)(lVar5 + 0x58),param_3,0);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = (long *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    param_3 = plVar8;
    uVar4 = func_0x0688459c();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if ((puVar7 != (undefined *)0x0) && (plVar8 != (long *)0x0)) {
      auVar17._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x28);
      auVar17._0_8_ = lVar5;
      param_6 = *(undefined1 **)((long)register0x00000008 + -0x40);
      plVar10 = *(long **)((long)register0x00000008 + -0x38);
      param_4 = *(undefined1 **)(puVar7 + 0x30);
      param_5 = (undefined1 *)plVar8[6];
      uVar14 = 0x6884f3c;
      unaff_x22 = puVar7;
      goto SUB_06885154;
    }
    auVar15 = func_0x03280cac();
    lVar9 = auVar15._0_8_;
    param_6 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x6884f94;
    *(undefined **)((long)register0x00000008 + -0x60) = puVar7;
    *(long **)((long)register0x00000008 + -0x58) = plVar8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(long *)((long)register0x00000008 + -0x48) = lVar5;
    lVar5 = lVar9;
    if ((bRam0000000007e28d1a & 1) == 0) {
      lVar5 = func_0x03280a18(PTR_DAT_0777a498);
      bRam0000000007e28d1a = 1;
    }
    param_4 = (undefined1 *)((long)register0x00000008 + -0x78);
    param_5 = (undefined1 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    uVar4 = func_0x0688459c(lVar5,auVar15._8_8_,param_3,param_4,param_5,
                            (undefined1 *)((long)register0x00000008 + -0x80));
    puVar7 = PTR_DAT_0777a498;
    lVar5 = 0;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    unaff_x20 = *(long **)(lVar9 + 0x40);
    unaff_x22 = (undefined *)0x7e28000;
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      uVar13 = *(ulong *)((long)register0x00000008 + -0x68);
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
            goto LAB_06885060;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)PTR_DAT_0777a498,0x14);
LAB_06885060:
      param_3 = (long *)puVar6[1];
      lVar5 = (*(code *)*puVar6)(unaff_x20,uVar13);
      if (lVar5 == 0) {
        return 0;
      }
      plVar10 = *(long **)(lVar9 + 0x40);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar13;
      auVar15 = auVar1 << 0x40;
      unaff_x22 = puVar7;
      if (plVar10 != (long *)0x0) {
        lVar11 = *plVar10;
        lVar9 = *(long *)puVar7;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 == 0) goto LAB_068850b0;
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_06885098;
      }
    }
    unaff_x30 = MergeEngine_ECS_Systems_Board_SplitSystem__OnVerifySplitConfirmed;
    auVar16 = func_0x03280cac(lVar5);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  uVar14 = 0x6885154;
  auVar17 = func_0x03280cac();
SUB_06885154:
  *(undefined8 *)(puVar2 + -0x40) = uVar14;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x23;
  *(undefined **)(puVar2 + -0x20) = unaff_x22;
  *(long **)(puVar2 + -0x18) = plVar8;
  *(long **)(puVar2 + -0x10) = unaff_x20;
  *(long *)(puVar2 + -8) = lVar5;
  uVar3 = func_0x068846b4(auVar17._0_8_,plVar10);
  if ((uVar3 & 1) != 0) {
    func_0x068851c4(auVar17._0_8_,auVar17._8_8_,plVar10,param_4,param_5,param_6);
  }
  return (ulong)(uVar3 & 1);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_06885098:
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
      goto LAB_068850d0;
    }
  }
LAB_068850b0:
  puVar6 = (undefined8 *)func_0x03256b10(plVar10,lVar9,0x10);
LAB_068850d0:
  uVar4 = (*(code *)*puVar6)(plVar10,lVar5,puVar6[1]);
  return uVar4;
}

