/* Ghidra 12.1.2 native pseudocode; RVA 0x6A99994; Merger.MergeBoard.Extensions.MergeBoardLayoutExtensions.TryGetRandomEmptyPositionFromContext; status ok */


/* WARNING: Possible PIC construction at 0x06b99b7c: Changing call to branch */

undefined8 *
Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__TryGetRandomEmptyPositionFromContext
          (long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = PTR_DAT_078325e8;
  puVar8 = PTR_DAT_0782fea0;
  puVar7 = PTR_DAT_0782fe98;
  puVar6 = PTR_DAT_0782fe68;
  puVar5 = PTR_DAT_0782fe50;
  puVar4 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a832 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_07832600);
    func_0x03280a18(PTR_DAT_078325e8);
    bRam0000000007e2a832 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar21 = param_2[1];
  uVar20 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  uVar11 = func_0x03d19c6c(*(undefined8 *)puVar5);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar6);
  func_0x06015d08(uVar12,0,*(undefined8 *)puVar4,0);
  uStack_80 = uVar20;
  uStack_78 = uVar21;
  uStack_70 = uVar18;
  uStack_68 = uVar19;
  func_0x03e64a64(&uStack_a0,&uStack_80,uVar11,uVar12,*(undefined8 *)puVar8);
  uVar11 = func_0x04485bc8(&uStack_a0,*(undefined8 *)puVar7);
  lVar14 = *(long *)puVar9;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    func_0x03280b8c(lVar14);
    lVar14 = *(long *)puVar9;
  }
  puVar4 = PTR_DAT_077c1cf8;
  lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
  if (lVar17 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      func_0x03280b8c(lVar14);
      lVar14 = *(long *)puVar9;
    }
    uVar12 = **(undefined8 **)(lVar14 + 0xb8);
    uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(uVar11,uVar12,*(undefined8 *)PTR_DAT_07832600,0);
    puVar13 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18);
    *puVar13 = uVar11;
  }
  else {
    uVar11 = func_0x03d4d48c(uVar11,lVar17,*(undefined8 *)PTR_DAT_0782fe60);
    uVar11 = func_0x03d5fde0(uVar11,*(undefined8 *)puVar4);
    if (param_1 != (long *)0x0) {
      lVar14 = *param_1;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077c1e40) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_06b99bf8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_077c1e40,1);
LAB_06b99bf8:
      uVar10 = (*(code *)*puVar13)(param_1,uVar11,param_3,puVar13[1]);
      return (undefined8 *)(ulong)(uVar10 & 1);
    }
    func_0x03280cac();
    puVar4 = PTR_DAT_078325e8;
    if ((bRam0000000007e2a833 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078325e8);
      bRam0000000007e2a833 = 1;
    }
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x057da5fc(uVar11,0);
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar11;
    puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar13;
}

