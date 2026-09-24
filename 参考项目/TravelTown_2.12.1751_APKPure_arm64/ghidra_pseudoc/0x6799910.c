/* Ghidra 12.1.2 native pseudocode; RVA 0x6799910; MergeEngine.ECS.Systems.Items.UndoSystem.ItemSelected; status ok */


/* WARNING: Possible PIC construction at 0x068998c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068998cc) */
/* WARNING: Removing unreachable block (ram,0x068998d4) */
/* WARNING: Removing unreachable block (ram,0x068998f0) */

ulong MergeEngine_ECS_Systems_Items_UndoSystem__ItemSelected(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar14;
  long *plVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  code *unaff_x30;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  while( true ) {
    lVar12 = auVar16._8_8_;
    uVar8 = auVar16._0_8_;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -8) = unaff_x19;
    uVar14 = 0x7e28000;
    uVar9 = uVar8;
    if ((bRam0000000007e28da8 & 1) == 0) {
      uVar9 = func_0x03280a18(PTR_DAT_07810810);
      bRam0000000007e28da8 = 1;
    }
    if (*(long *)(uVar8 + 0x48) == 0) {
      return uVar9;
    }
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) || (*(long *)(uVar8 + 0x40) == 0)) break;
    uVar10 = func_0x06760834(*(long *)(uVar8 + 0x40),
                             *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x20),0);
    plVar15 = *(long **)(uVar8 + 0x48);
    uVar14 = 0;
    if (plVar15 == (long *)0x0) break;
    lVar12 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07810810) {
          puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_068999cc;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07810810,3);
LAB_068999cc:
    uVar9 = (*(code *)*puVar11)(plVar15,uVar10,puVar11[1]);
    if ((uVar9 & 1) == 0) {
      return uVar9;
    }
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if ((bRam0000000007e28da7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c15d0);
      func_0x03280a18(PTR_DAT_07810818);
      func_0x03280a18(PTR_DAT_07810820);
      bRam0000000007e28da7 = 1;
    }
    unaff_x20 = (undefined8 *)(uVar8 + 0x48);
    *unaff_x20 = 0;
    func_0x032809c4(unaff_x20,0);
    uVar9 = *(ulong *)(uVar8 + 0x58);
    if (uVar9 != 0) {
      lVar12 = *(long *)PTR_DAT_077c15d0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0x68998cc;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x20;
      *(ulong *)((long)register0x00000008 + -0x28) = uVar8;
      plVar15 = (long *)func_0x039574b0(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20));
      if (plVar15 == (long *)0x0) {
        auVar16 = func_0x03280cac();
        uVar8 = auVar16._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x4321a3c;
        *(ulong *)((long)register0x00000008 + -0x60) = uVar9;
        *(long *)((long)register0x00000008 + -0x58) = lVar12;
        *(long *)(uVar8 + 0x20) = auVar16._8_8_;
        func_0x032809c4();
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x58);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x50);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x70);
      }
      else {
        uVar8 = (**(code **)(*plVar15 + 0x1b8))
                          (plVar15,*(undefined8 *)(uVar9 + 0x20),0,*(undefined8 *)(*plVar15 + 0x1c0)
                          );
        if ((uVar8 & 1) != 0) {
          return uVar8;
        }
        *(undefined8 *)(uVar9 + 0x20) = 0;
        func_0x032809c4((undefined8 *)(uVar9 + 0x20),0);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x28);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x20);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x50);
        uVar8 = uVar9;
      }
      *(undefined8 *)(puVar7 + -0x10) = uVar10;
      *(undefined8 *)(puVar7 + -8) = uVar14;
      lVar12 = *(long *)(uVar8 + 0x10);
      uVar9 = uVar8;
      if (lVar12 != 0) {
        uVar9 = (**(code **)(lVar12 + 0x18))
                          (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(uVar8 + 0x20),
                           *(undefined8 *)(lVar12 + 0x28));
      }
      lVar12 = *(long *)(uVar8 + 0x18);
      if (lVar12 == 0) {
        return uVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x04d0f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
      return uVar9;
    }
    unaff_x30 = MergeEngine_ECS_Systems_Items_UndoSystem__ItemSelected;
    auVar16 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    unaff_x19 = uVar8;
  }
  uVar9 = func_0x03280cac();
  puVar6 = PTR_DAT_07810840;
  puVar5 = PTR_DAT_07810838;
  puVar4 = PTR_DAT_07810830;
  puVar3 = PTR_DAT_07810828;
  puVar2 = PTR_DAT_077c15b8;
  puVar1 = PTR_DAT_077c15b0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x6899a00;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar14;
  *(long *)((long)register0x00000008 + -0x30) = lVar12;
  *(ulong *)((long)register0x00000008 + -0x28) = uVar8;
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
  *(undefined8 *)(uVar9 + 0x50) = uVar14;
  func_0x032809c4((undefined8 *)(uVar9 + 0x50),uVar14);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04321994(uVar14,0,*(undefined8 *)puVar2);
  *(undefined8 *)(uVar9 + 0x58) = uVar14;
  func_0x032809c4((undefined8 *)(uVar9 + 0x58),uVar14);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x04321994(uVar14,0,*(undefined8 *)puVar6);
  *(undefined8 *)(uVar9 + 0x60) = uVar14;
  func_0x032809c4((undefined8 *)(uVar9 + 0x60),uVar14);
  return uVar9;
}

