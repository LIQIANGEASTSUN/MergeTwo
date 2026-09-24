/* Ghidra 12.1.2 native pseudocode; RVA 0x6A29F80; MergeEngine.Configuration.Definitions.ItemMultiple.Clone; status ok */


ulong MergeEngine_Configuration_Definitions_ItemMultiple__Clone(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  if ((bRam0000000007e2a427 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cdb78);
    bRam0000000007e2a427 = 1;
  }
  puVar4 = PTR_DAT_077cdb78;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x60);
    uVar9 = func_0x06120144(*(long *)(param_1 + 0x20),0);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b29ecc(uVar10,uVar16,uVar9,uVar11,uVar2);
    if (uVar10 != 0) {
      *(undefined1 *)(uVar10 + 0x33) = *(undefined1 *)(param_1 + 0x33);
      *(undefined1 *)(uVar10 + 0x18) = *(undefined1 *)(param_1 + 0x18);
      *(undefined8 *)(uVar10 + 0x68) = *(undefined8 *)(param_1 + 0x68);
      func_0x032809c4();
      return uVar10;
    }
  }
  uVar11 = func_0x03280cac();
  puVar5 = PTR_DAT_0782f0e0;
  puVar4 = PTR_DAT_077cc5a8;
  if ((bRam0000000007e2a428 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc5a8);
    func_0x03280a18(PTR_DAT_0782f0e0);
    bRam0000000007e2a428 = 1;
  }
  uVar12 = func_0x05492898(uVar11,*(undefined8 *)puVar4);
  uVar10 = *(ulong *)puVar5;
  if ((bRam0000000007e1cd68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5d8,uVar12,0);
    bRam0000000007e1cd68 = 1;
  }
  if ((uVar10 == 0) || (*(int *)(uVar10 + 0x10) == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((uVar12 == 0) || (*(int *)(uVar12 + 0x10) == 0)) {
    if (bVar6) {
      uVar10 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    return uVar10;
  }
  if (bVar6) {
    return uVar12;
  }
  if (uVar10 == 0) {
    auVar17 = func_0x03280cac();
    lVar13 = auVar17._8_8_;
    lVar14 = auVar17._0_8_;
    if (lVar14 == lVar13) {
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
      if ((lVar14 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar14 + 0x10) == *(int *)(lVar13 + 0x10)) {
          lVar1 = lVar14 + 0x14;
          lVar13 = lVar13 + 0x14;
          lVar14 = (long)*(int *)(lVar14 + 0x10) << 1;
          if (lVar1 != lVar13) {
            lVar8 = func_0x057e39f8(0,0,lVar14,0);
            uVar11 = func_0x057e3a04(lVar14,0);
            uVar10 = func_0x057e3a10(uVar11,0);
            if (7 < uVar10) {
              lVar14 = func_0x057e3a24(uVar11,8,0);
              while( true ) {
                uVar10 = func_0x057e3a10(lVar14,0);
                uVar12 = func_0x057e3a10(lVar8,0);
                if (uVar10 <= uVar12) {
                  return (ulong)(*(long *)(lVar1 + lVar14) == *(long *)(lVar13 + lVar14));
                }
                uVar10 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar8),
                                         *(undefined8 *)(lVar13 + lVar8),0);
                if ((uVar10 & 1) != 0) break;
                lVar8 = func_0x057e3a1c(lVar8,8,0);
              }
              return 0;
            }
            uVar10 = func_0x057e3a10(uVar11,0);
            uVar12 = func_0x057e3a10(lVar8,0);
            if (uVar12 < uVar10) {
              do {
                bVar6 = *(char *)(lVar1 + lVar8) == *(char *)(lVar13 + lVar8);
                uVar10 = (ulong)bVar6;
                if (!bVar6) {
                  return uVar10;
                }
                lVar8 = func_0x057e3a1c(lVar8,1,0);
                uVar12 = func_0x057e3a10(uVar11,0);
                uVar7 = func_0x057e3a10(lVar8,0);
              } while (uVar7 < uVar12);
              return uVar10;
            }
          }
          return 1;
        }
        uVar15 = 0;
      }
    }
    return (ulong)uVar15;
  }
  iVar3 = *(int *)(uVar10 + 0x10);
  uVar7 = func_0x032bc400(*(int *)(uVar12 + 0x10) + iVar3);
  func_0x055f73c0(uVar7,0,uVar10);
  func_0x055f73c0(uVar7,iVar3,uVar12);
  return uVar7;
}

