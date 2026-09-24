/* Ghidra 12.1.2 native pseudocode; RVA 0x6799858; MergeEngine.ECS.Systems.Items.UndoSystem.ClearUndo; status ok */


/* WARNING: Possible PIC construction at 0x068998c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068998cc) */
/* WARNING: Removing unreachable block (ram,0x068998d4) */
/* WARNING: Removing unreachable block (ram,0x068998f0) */

ulong MergeEngine_ECS_Systems_Items_UndoSystem__ClearUndo(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar15;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e28da7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c15d0);
      func_0x03280a18(PTR_DAT_07810818);
      func_0x03280a18(PTR_DAT_07810820);
      bRam0000000007e28da7 = 1;
    }
    puVar13 = (undefined8 *)(param_1 + 0x48);
    *puVar13 = 0;
    func_0x032809c4(puVar13,0);
    uVar10 = *(ulong *)(param_1 + 0x58);
    if (uVar10 != 0) {
      lVar11 = *(long *)PTR_DAT_077c15d0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0x68998cc;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x30) = puVar13;
      *(ulong *)((long)register0x00000008 + -0x28) = param_1;
      plVar8 = (long *)func_0x039574b0(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x20));
      if (plVar8 == (long *)0x0) {
        auVar16 = func_0x03280cac();
        uVar9 = auVar16._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x4321a3c;
        *(ulong *)((long)register0x00000008 + -0x60) = uVar10;
        *(long *)((long)register0x00000008 + -0x58) = lVar11;
        *(long *)(uVar9 + 0x20) = auVar16._8_8_;
        func_0x032809c4();
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x58);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x50);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x70);
      }
      else {
        uVar9 = (**(code **)(*plVar8 + 0x1b8))
                          (plVar8,*(undefined8 *)(uVar10 + 0x20),0,*(undefined8 *)(*plVar8 + 0x1c0))
        ;
        if ((uVar9 & 1) != 0) {
          return uVar9;
        }
        *(undefined8 *)(uVar10 + 0x20) = 0;
        func_0x032809c4((undefined8 *)(uVar10 + 0x20),0);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x28);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x20);
        uVar15 = *(undefined8 *)((long)register0x00000008 + -0x50);
        uVar9 = uVar10;
      }
      *(undefined8 *)(puVar7 + -0x10) = uVar15;
      *(undefined8 *)(puVar7 + -8) = uVar14;
      lVar11 = *(long *)(uVar9 + 0x10);
      uVar10 = uVar9;
      if (lVar11 != 0) {
        uVar10 = (**(code **)(lVar11 + 0x18))
                           (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(uVar9 + 0x20),
                            *(undefined8 *)(lVar11 + 0x28));
      }
      lVar11 = *(long *)(uVar9 + 0x18);
      if (lVar11 == 0) {
        return uVar10;
      }
                    /* WARNING: Could not recover jumptable at 0x04d0f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(lVar11 + 0x18))
                         (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      return uVar10;
    }
    auVar16 = func_0x03280cac();
    lVar11 = auVar16._8_8_;
    uVar9 = auVar16._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x6899910;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x30) = puVar13;
    *(ulong *)((long)register0x00000008 + -0x28) = param_1;
    uVar14 = 0x7e28000;
    uVar10 = uVar9;
    if ((bRam0000000007e28da8 & 1) == 0) {
      uVar10 = func_0x03280a18(PTR_DAT_07810810);
      bRam0000000007e28da8 = 1;
    }
    if (*(long *)(uVar9 + 0x48) == 0) {
      return uVar10;
    }
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) || (*(long *)(uVar9 + 0x40) == 0)) break;
    uVar15 = func_0x06760834(*(long *)(uVar9 + 0x40),
                             *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x20),0);
    plVar8 = *(long **)(uVar9 + 0x48);
    uVar14 = 0;
    if (plVar8 == (long *)0x0) break;
    lVar11 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07810810) {
          puVar13 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_068999cc;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07810810,3);
LAB_068999cc:
    uVar10 = (*(code *)*puVar13)(plVar8,uVar15,puVar13[1]);
    if ((uVar10 & 1) == 0) {
      return uVar10;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = uVar9;
  }
  uVar10 = func_0x03280cac();
  puVar6 = PTR_DAT_07810840;
  puVar5 = PTR_DAT_07810838;
  puVar4 = PTR_DAT_07810830;
  puVar3 = PTR_DAT_07810828;
  puVar2 = PTR_DAT_077c15b8;
  puVar1 = PTR_DAT_077c15b0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x6899a00;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar14;
  *(long *)((long)register0x00000008 + -0x50) = lVar11;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar9;
  if ((bRam0000000007e28da9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810840);
    func_0x03280a18(PTR_DAT_077c15b8);
    func_0x03280a18(PTR_DAT_07810830);
    func_0x03280a18(PTR_DAT_077c15b0);
    func_0x03280a18(PTR_DAT_07810838);
    func_0x03280a18(PTR_DAT_07810828);
    bRam0000000007e28da9 = 1;
  }
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04321994(uVar14,0,*(undefined8 *)puVar4);
  *(undefined8 *)(uVar10 + 0x50) = uVar14;
  func_0x032809c4((undefined8 *)(uVar10 + 0x50),uVar14);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04321994(uVar14,0,*(undefined8 *)puVar2);
  *(undefined8 *)(uVar10 + 0x58) = uVar14;
  func_0x032809c4((undefined8 *)(uVar10 + 0x58),uVar14);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04321994(uVar14,0,*(undefined8 *)puVar6);
  *(undefined8 *)(uVar10 + 0x60) = uVar14;
  func_0x032809c4((undefined8 *)(uVar10 + 0x60),uVar14);
  return uVar10;
}

