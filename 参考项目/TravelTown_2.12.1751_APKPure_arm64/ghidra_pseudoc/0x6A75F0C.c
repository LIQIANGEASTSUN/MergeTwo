/* Ghidra 12.1.2 native pseudocode; RVA 0x6A75F0C; Merger.MergeBoard.Systems.SplitSystem.FindNearestPosition; status ok */


ulong Merger_MergeBoard_Systems_SplitSystem__FindNearestPosition
                (long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_44;
  
  puVar4 = PTR_DAT_07831530;
  puVar3 = PTR_DAT_0782fea0;
  puVar2 = PTR_DAT_0782fe98;
  puVar1 = PTR_DAT_0782fe50;
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
  uStack_44 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar15 = param_2[1];
  uVar14 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  uVar5 = func_0x03d19c6c(*(undefined8 *)puVar1);
  uStack_70 = uVar14;
  uStack_68 = uVar15;
  uStack_60 = uVar12;
  uStack_58 = uVar13;
  func_0x03e64a64(&uStack_90,&uStack_70,uVar5,0,*(undefined8 *)puVar3);
  uVar5 = func_0x04485bc8(&uStack_90,*(undefined8 *)puVar2);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar2 = PTR_DAT_0782fe60;
  puVar1 = PTR_DAT_077c1cf8;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(lVar11,uVar12,*(undefined8 *)PTR_DAT_07831538,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar11;
    func_0x032809c4(plVar6,lVar11);
  }
  uVar5 = func_0x03d4d48c(uVar5,lVar11,*(undefined8 *)puVar2);
  uVar5 = func_0x03d5fde0(uVar5,*(undefined8 *)puVar1);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    uVar9 = func_0x03280cac();
    return uVar9;
  }
  lVar8 = *plVar6;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_06b76128;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077c1e40,2);
LAB_06b76128:
  (*(code *)*puVar7)(plVar6,uVar5,param_3,&uStack_44,puVar7[1]);
  return (ulong)uStack_44;
}

