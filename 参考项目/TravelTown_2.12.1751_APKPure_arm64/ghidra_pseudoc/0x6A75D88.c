/* Ghidra 12.1.2 native pseudocode; RVA 0x6A75D88; Merger.MergeBoard.Systems.SplitSystem.GetOriginalSplitterPosition; status ok */


/* WARNING: Possible PIC construction at 0x06b75e28: Changing call to branch */

ulong Merger_MergeBoard_Systems_SplitSystem__GetOriginalSplitterPosition
                (long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 auStack_90 [2];
  long *plStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = &uStack_60;
  puVar7 = &uStack_60;
  plVar8 = param_3;
  if ((bRam0000000007e2a701 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831528);
    bRam0000000007e2a701 = 1;
  }
  puVar15 = PTR_DAT_07831528;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*param_3 != 0) {
    plVar8 = *(long **)PTR_DAT_07831528;
    uVar6 = func_0x03d1f364(*param_3,&uStack_38);
    if ((uVar6 & 1) != 0) {
LAB_06b75e2c:
      return (ulong)(uint)uStack_38;
    }
    param_3 = (long *)puVar15;
    if (*param_4 != 0) {
      uVar6 = func_0x03d1f364(*param_4,&uStack_40,*(undefined8 *)puVar15);
      if ((uVar6 & 1) != 0) {
        uStack_38._0_4_ = (uint)uStack_40;
        goto LAB_06b75e2c;
      }
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      plVar8 = (long *)(ulong)*(uint *)(param_4 + 1);
      uVar16 = 0x6b75e2c;
      plVar13 = param_4;
      lVar11 = param_1;
      goto SUB_06b75f0c;
    }
  }
  auVar19 = func_0x03280cac();
  lVar11 = auVar19._8_8_;
  puVar5 = auStack_90;
  auStack_90[0] = 0x6b75e44;
  puVar15 = (undefined *)0x7e2a000;
  plVar13 = (long *)((ulong)plVar8 & 0xffffffff);
  plStack_80 = param_3;
  puStack_78 = param_2;
  lStack_70 = param_1;
  plStack_68 = param_4;
  if ((bRam0000000007e2a702 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    bRam0000000007e2a702 = 1;
  }
  plVar14 = *(long **)(auVar19._0_8_ + 0x20);
  if (plVar14 != (long *)0x0) {
    lVar10 = *plVar14;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c16b0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_06b75edc;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c16b0,1);
LAB_06b75edc:
                    /* WARNING: Could not recover jumptable at 0x06b75f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)*puVar7)(plVar14,lVar11,plVar13,0x100,0,0,puVar7[1]);
    return uVar6;
  }
  uVar16 = 0x6b75f0c;
  auVar19 = func_0x03280cac();
  puVar7 = auVar19._8_8_;
  param_1 = auVar19._0_8_;
  param_2 = (undefined8 *)0x0;
SUB_06b75f0c:
  puVar4 = PTR_DAT_07831530;
  puVar3 = PTR_DAT_0782fea0;
  puVar2 = PTR_DAT_0782fe98;
  puVar1 = PTR_DAT_0782fe50;
  *(undefined8 *)((long)puVar5 + -0x50) = uVar16;
  *(undefined8 *)((long)puVar5 + -0x40) = unaff_x26;
  *(undefined8 *)((long)puVar5 + -0x38) = unaff_x25;
  *(undefined8 *)((long)puVar5 + -0x30) = unaff_x24;
  *(undefined8 *)((long)puVar5 + -0x28) = 0x7e2a000;
  *(undefined **)((long)puVar5 + -0x20) = puVar15;
  *(undefined8 **)((long)puVar5 + -0x18) = param_2;
  *(long *)((long)puVar5 + -0x10) = lVar11;
  *(long **)((long)puVar5 + -8) = plVar13;
  if ((bRam0000000007e2a703 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_07831538);
    func_0x03280a18(PTR_DAT_07831530);
    bRam0000000007e2a703 = 1;
  }
  *(undefined4 *)((long)puVar5 + -0x44) = 0;
  *(undefined8 *)((long)puVar5 + -0x88) = 0;
  *(undefined8 *)((long)puVar5 + -0x90) = 0;
  *(undefined8 *)((long)puVar5 + -0x78) = 0;
  *(undefined8 *)((long)puVar5 + -0x80) = 0;
  uVar18 = *puVar7;
  uVar17 = puVar7[3];
  uVar9 = puVar7[2];
  uVar16 = *(undefined8 *)puVar1;
  *(undefined8 *)((long)puVar5 + -0xa8) = puVar7[1];
  *(undefined8 *)((long)puVar5 + -0xb0) = uVar18;
  *(undefined8 *)((long)puVar5 + -0x98) = uVar17;
  *(undefined8 *)((long)puVar5 + -0xa0) = uVar9;
  uVar16 = func_0x03d19c6c(uVar16);
  uVar9 = *(undefined8 *)puVar3;
  *(undefined8 *)((long)puVar5 + -0x68) = *(undefined8 *)((long)puVar5 + -0xa8);
  *(undefined8 *)((long)puVar5 + -0x70) = *(undefined8 *)((long)puVar5 + -0xb0);
  *(undefined8 *)((long)puVar5 + -0x58) = *(undefined8 *)((long)puVar5 + -0x98);
  *(undefined8 *)((long)puVar5 + -0x60) = *(undefined8 *)((long)puVar5 + -0xa0);
  func_0x03e64a64((undefined1 *)((long)puVar5 + -0x90),(undefined1 *)((long)puVar5 + -0x70),uVar16,0
                  ,uVar9);
  uVar16 = func_0x04485bc8((undefined1 *)((long)puVar5 + -0x90),*(undefined8 *)puVar2);
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    func_0x03280b8c(lVar11);
    lVar11 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_0782fe60;
  puVar15 = PTR_DAT_077c1cf8;
  lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    uVar9 = **(undefined8 **)(lVar11 + 0xb8);
    lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(lVar10,uVar9,*(undefined8 *)PTR_DAT_07831538,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar13 = lVar10;
    func_0x032809c4(plVar13,lVar10);
  }
  uVar16 = func_0x03d4d48c(uVar16,lVar10,*(undefined8 *)puVar1);
  uVar16 = func_0x03d5fde0(uVar16,*(undefined8 *)puVar15);
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 == (long *)0x0) {
    uVar6 = func_0x03280cac();
    return uVar6;
  }
  lVar11 = *plVar13;
  uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar6 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
        goto LAB_06b76128;
      }
      uVar6 = uVar6 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077c1e40,2);
LAB_06b76128:
  (*(code *)*puVar7)(plVar13,uVar16,(ulong)plVar8 & 0xffffffff,(undefined1 *)((long)puVar5 + -0x44),
                     puVar7[1]);
  return (ulong)*(uint *)((long)puVar5 + -0x44);
}

