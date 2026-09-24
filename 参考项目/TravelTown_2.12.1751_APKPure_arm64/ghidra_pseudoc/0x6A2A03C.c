/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A03C; MergeEngine.Configuration.Definitions.ItemMultiple.GetExtraLogData; status ok */


ulong MergeEngine_Configuration_Definitions_ItemMultiple__GetExtraLogData(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  puVar4 = PTR_DAT_0782f0e0;
  puVar3 = PTR_DAT_077cc5a8;
  if ((bRam0000000007e2a428 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc5a8);
    func_0x03280a18(PTR_DAT_0782f0e0);
    bRam0000000007e2a428 = 1;
  }
  uVar9 = func_0x05492898(param_1,*(undefined8 *)puVar3);
  uVar13 = *(ulong *)puVar4;
  if ((bRam0000000007e1cd68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5d8,uVar9,0);
    bRam0000000007e1cd68 = 1;
  }
  if ((uVar13 == 0) || (*(int *)(uVar13 + 0x10) == 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((uVar9 == 0) || (*(int *)(uVar9 + 0x10) == 0)) {
    if (bVar5) {
      uVar13 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    return uVar13;
  }
  if (bVar5) {
    return uVar9;
  }
  if (uVar13 == 0) {
    auVar14 = func_0x03280cac();
    lVar10 = auVar14._8_8_;
    lVar11 = auVar14._0_8_;
    if (lVar11 == lVar10) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
      if ((lVar11 != 0) && (lVar10 != 0)) {
        if (*(int *)(lVar11 + 0x10) == *(int *)(lVar10 + 0x10)) {
          lVar1 = lVar11 + 0x14;
          lVar10 = lVar10 + 0x14;
          lVar11 = (long)*(int *)(lVar11 + 0x10) << 1;
          if (lVar1 != lVar10) {
            lVar7 = func_0x057e39f8(0,0,lVar11,0);
            uVar8 = func_0x057e3a04(lVar11,0);
            uVar13 = func_0x057e3a10(uVar8,0);
            if (7 < uVar13) {
              lVar11 = func_0x057e3a24(uVar8,8,0);
              while( true ) {
                uVar13 = func_0x057e3a10(lVar11,0);
                uVar9 = func_0x057e3a10(lVar7,0);
                if (uVar13 <= uVar9) {
                  return (ulong)(*(long *)(lVar1 + lVar11) == *(long *)(lVar10 + lVar11));
                }
                uVar13 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar7),
                                         *(undefined8 *)(lVar10 + lVar7),0);
                if ((uVar13 & 1) != 0) break;
                lVar7 = func_0x057e3a1c(lVar7,8,0);
              }
              return 0;
            }
            uVar13 = func_0x057e3a10(uVar8,0);
            uVar9 = func_0x057e3a10(lVar7,0);
            if (uVar9 < uVar13) {
              do {
                bVar5 = *(char *)(lVar1 + lVar7) == *(char *)(lVar10 + lVar7);
                uVar13 = (ulong)bVar5;
                if (!bVar5) {
                  return uVar13;
                }
                lVar7 = func_0x057e3a1c(lVar7,1,0);
                uVar9 = func_0x057e3a10(uVar8,0);
                uVar6 = func_0x057e3a10(lVar7,0);
              } while (uVar6 < uVar9);
              return uVar13;
            }
          }
          return 1;
        }
        uVar12 = 0;
      }
    }
    return (ulong)uVar12;
  }
  iVar2 = *(int *)(uVar13 + 0x10);
  uVar6 = func_0x032bc400(*(int *)(uVar9 + 0x10) + iVar2);
  func_0x055f73c0(uVar6,0,uVar13);
  func_0x055f73c0(uVar6,iVar2,uVar9);
  return uVar6;
}

