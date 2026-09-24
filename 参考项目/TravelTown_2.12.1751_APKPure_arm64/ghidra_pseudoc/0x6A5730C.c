/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5730C; Merger.MergeBoardQueue.Systems.BoardQueueSystem.TryFindEmptyPositionUsingModel; status ok */

ulong Merger_MergeBoardQueue_Systems_BoardQueueSystem__TryFindEmptyPositionUsingModel
                (long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_078302e0;
  puVar5 = PTR_DAT_0782fea0;
  puVar4 = PTR_DAT_0782fe98;
  puVar3 = PTR_DAT_0782fe68;
  puVar2 = PTR_DAT_0782fe50;
  puVar1 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a5fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_078302e8);
    func_0x03280a18(PTR_DAT_078302e0);
    bRam0000000007e2a5fd = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar19 = param_2[1];
  uVar18 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  uVar8 = func_0x03d19c6c(*(undefined8 *)puVar2);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar9,0,*(undefined8 *)puVar1,0);
  uStack_80 = uVar18;
  uStack_78 = uVar19;
  uStack_70 = uVar16;
  uStack_68 = uVar17;
  func_0x03e64a64(&uStack_a0,&uStack_80,uVar8,uVar9,*(undefined8 *)puVar5);
  uVar8 = func_0x04485bc8(&uStack_a0,*(undefined8 *)puVar4);
  lVar12 = *(long *)puVar6;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    func_0x03280b8c(lVar12);
    lVar12 = *(long *)puVar6;
  }
  puVar2 = PTR_DAT_0782fe60;
  puVar1 = PTR_DAT_077c1cf8;
  lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar15 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c(lVar12);
      lVar12 = *(long *)puVar6;
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
    lVar15 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(lVar15,uVar9,*(undefined8 *)PTR_DAT_078302e8,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar10 = lVar15;
    func_0x032809c4(plVar10,lVar15);
  }
  uVar8 = func_0x03d4d48c(uVar8,lVar15,*(undefined8 *)puVar2);
  uVar8 = func_0x03d5fde0(uVar8,*(undefined8 *)puVar1);
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 == (long *)0x0) {
    uVar13 = func_0x03280cac();
    return uVar13;
  }
  lVar12 = *plVar10;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c1e40) {
        puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_06b57574;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c1e40,1);
LAB_06b57574:
  uVar7 = (*(code *)*puVar11)(plVar10,uVar8,param_3,puVar11[1]);
  return (ulong)(uVar7 & 1);
}

