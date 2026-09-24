/* Ghidra 12.1.2 native pseudocode; RVA 0x613C284; MergeEngine.Model.Configuration.LocalMergeItemsConfigurationModel.GetLocalItemNames; status ok */


ulong MergeEngine_Model_Configuration_LocalMergeItemsConfigurationModel__GetLocalItemNames
                (long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
    uVar4 = func_0x03280cac();
    puVar2 = PTR_DAT_077db1b0;
    if ((bRam0000000007e2459b & 1) == 0) {
      func_0x03280a18(PTR_DAT_077db1b0);
      bRam0000000007e2459b = 1;
    }
    uVar7 = *(undefined8 *)puVar2;
    return uVar4;
  }
  if ((bRam0000000007e299e9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6f78,0);
    bRam0000000007e299e9 = 1;
  }
  lVar9 = *(long *)(lVar9 + 0x58);
  if (lVar9 != 0) {
    lVar10 = *(long *)PTR_DAT_077e6f78;
    lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    uVar4 = func_0x03280ca0(lVar12);
    func_0x04545928(uVar4,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0xa0));
    return uVar4;
  }
  auVar13 = func_0x03280cac();
  uVar8 = auVar13._8_8_;
  uVar4 = *(ulong *)(auVar13._0_8_ + 0x60);
  if ((bRam0000000007e1cd68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5d8,uVar8,0);
    bRam0000000007e1cd68 = 1;
  }
  if ((uVar4 == 0) || (*(int *)(uVar4 + 0x10) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((uVar8 == 0) || (*(int *)(uVar8 + 0x10) == 0)) {
    if (bVar3) {
      uVar4 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    return uVar4;
  }
  if (bVar3) {
    return uVar8;
  }
  if (uVar4 == 0) {
    auVar13 = func_0x03280cac();
    lVar9 = auVar13._8_8_;
    lVar12 = auVar13._0_8_;
    if (lVar12 == lVar9) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar12 != 0) && (lVar9 != 0)) {
        if (*(int *)(lVar12 + 0x10) == *(int *)(lVar9 + 0x10)) {
          lVar10 = lVar12 + 0x14;
          lVar9 = lVar9 + 0x14;
          lVar12 = (long)*(int *)(lVar12 + 0x10) << 1;
          if (lVar10 != lVar9) {
            lVar6 = func_0x057e39f8(0,0,lVar12,0);
            uVar7 = func_0x057e3a04(lVar12,0);
            uVar4 = func_0x057e3a10(uVar7,0);
            if (7 < uVar4) {
              lVar12 = func_0x057e3a24(uVar7,8,0);
              while( true ) {
                uVar4 = func_0x057e3a10(lVar12,0);
                uVar8 = func_0x057e3a10(lVar6,0);
                if (uVar4 <= uVar8) {
                  return (ulong)(*(long *)(lVar10 + lVar12) == *(long *)(lVar9 + lVar12));
                }
                uVar4 = func_0x057f2854(*(undefined8 *)(lVar10 + lVar6),
                                        *(undefined8 *)(lVar9 + lVar6),0);
                if ((uVar4 & 1) != 0) break;
                lVar6 = func_0x057e3a1c(lVar6,8,0);
              }
              return 0;
            }
            uVar4 = func_0x057e3a10(uVar7,0);
            uVar8 = func_0x057e3a10(lVar6,0);
            if (uVar8 < uVar4) {
              do {
                bVar3 = *(char *)(lVar10 + lVar6) == *(char *)(lVar9 + lVar6);
                uVar4 = (ulong)bVar3;
                if (!bVar3) {
                  return uVar4;
                }
                lVar6 = func_0x057e3a1c(lVar6,1,0);
                uVar8 = func_0x057e3a10(uVar7,0);
                uVar5 = func_0x057e3a10(lVar6,0);
              } while (uVar5 < uVar8);
              return uVar4;
            }
          }
          return 1;
        }
        uVar11 = 0;
      }
    }
    return (ulong)uVar11;
  }
  iVar1 = *(int *)(uVar4 + 0x10);
  uVar5 = func_0x032bc400(*(int *)(uVar8 + 0x10) + iVar1);
  func_0x055f73c0(uVar5,0,uVar4);
  func_0x055f73c0(uVar5,iVar1,uVar8);
  return uVar5;
}

