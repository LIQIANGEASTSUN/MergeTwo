/* Ghidra 12.1.2 native pseudocode; RVA 0x6A75E44; Merger.MergeBoard.Systems.SplitSystem.CreateSplitResultEntity; status ok */


ulong Merger_MergeBoard_Systems_SplitSystem__CreateSplitResultEntity
                (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  
  uVar10 = param_3 & 0xffffffff;
  if ((bRam0000000007e2a702 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    bRam0000000007e2a702 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x20);
  if (plVar11 == (long *)0x0) {
    auVar17 = func_0x03280cac();
    puVar4 = PTR_DAT_07831530;
    puVar3 = PTR_DAT_0782fea0;
    puVar2 = PTR_DAT_0782fe98;
    puVar1 = PTR_DAT_0782fe50;
    puVar5 = auVar17._8_8_;
    uStack_80 = 0x6b75f0c;
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
    uStack_74 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uVar16 = puVar5[1];
    uVar15 = *puVar5;
    uVar14 = puVar5[3];
    uVar13 = puVar5[2];
    uVar6 = func_0x03d19c6c(*(undefined8 *)puVar1);
    uStack_a0 = uVar15;
    uStack_98 = uVar16;
    uStack_90 = uVar13;
    uStack_88 = uVar14;
    func_0x03e64a64(&uStack_c0,&uStack_a0,uVar6,0,*(undefined8 *)puVar3);
    uVar6 = func_0x04485bc8(&uStack_c0,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar4;
    }
    puVar2 = PTR_DAT_0782fe60;
    puVar1 = PTR_DAT_077c1cf8;
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *(long *)puVar4;
      }
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
      func_0x0534decc(lVar12,uVar13,*(undefined8 *)PTR_DAT_07831538,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar11 = lVar12;
      func_0x032809c4(plVar11,lVar12);
    }
    uVar6 = func_0x03d4d48c(uVar6,lVar12,*(undefined8 *)puVar2);
    uVar6 = func_0x03d5fde0(uVar6,*(undefined8 *)puVar1);
    plVar11 = *(long **)(auVar17._0_8_ + 0x10);
    if (plVar11 == (long *)0x0) {
      uVar10 = func_0x03280cac();
      return uVar10;
    }
    lVar7 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c1e40) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06b76128;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c1e40,2);
LAB_06b76128:
    (*(code *)*puVar5)(plVar11,uVar6,param_3 & 0xffffffff,&uStack_74,puVar5[1]);
    return (ulong)uStack_74;
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c16b0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_06b75edc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077c16b0,1);
LAB_06b75edc:
                    /* WARNING: Could not recover jumptable at 0x06b75f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*(code *)*puVar5)(plVar11,param_2,uVar10,0x100,0,0,puVar5[1]);
  return uVar10;
}

