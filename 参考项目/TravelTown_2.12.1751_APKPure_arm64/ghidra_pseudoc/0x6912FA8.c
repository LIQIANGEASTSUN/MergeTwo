/* Ghidra 12.1.2 native pseudocode; RVA 0x6912FA8; MergeEngine.Configuration.LocalMergeItemsConfig.GetLocalItemNames; status ok */


ulong MergeEngine_Configuration_LocalMergeItemsConfig__GetLocalItemNames(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000007e299e9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6f78);
    bRam0000000007e299e9 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 != 0) {
    lVar9 = *(long *)PTR_DAT_077e6f78;
    lVar11 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = func_0x0325681c(lVar11);
    }
    uVar3 = func_0x03280ca0(lVar11);
    func_0x04545928(uVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0xa0));
    return uVar3;
  }
  auVar12 = func_0x03280cac();
  uVar7 = auVar12._8_8_;
  uVar3 = *(ulong *)(auVar12._0_8_ + 0x60);
  if ((bRam0000000007e1cd68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5d8,uVar7,0);
    bRam0000000007e1cd68 = 1;
  }
  if ((uVar3 == 0) || (*(int *)(uVar3 + 0x10) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((uVar7 != 0) && (*(int *)(uVar7 + 0x10) != 0)) {
    if (bVar2) {
      return uVar7;
    }
    if (uVar3 != 0) {
      iVar1 = *(int *)(uVar3 + 0x10);
      uVar4 = func_0x032bc400(*(int *)(uVar7 + 0x10) + iVar1);
      func_0x055f73c0(uVar4,0,uVar3);
      func_0x055f73c0(uVar4,iVar1,uVar7);
      return uVar4;
    }
    auVar12 = func_0x03280cac();
    lVar8 = auVar12._8_8_;
    lVar11 = auVar12._0_8_;
    if (lVar11 == lVar8) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
      if ((lVar11 != 0) && (lVar8 != 0)) {
        if (*(int *)(lVar11 + 0x10) == *(int *)(lVar8 + 0x10)) {
          lVar9 = lVar11 + 0x14;
          lVar8 = lVar8 + 0x14;
          lVar11 = (long)*(int *)(lVar11 + 0x10) << 1;
          if (lVar9 != lVar8) {
            lVar5 = func_0x057e39f8(0,0,lVar11,0);
            uVar6 = func_0x057e3a04(lVar11,0);
            uVar3 = func_0x057e3a10(uVar6,0);
            if (7 < uVar3) {
              lVar11 = func_0x057e3a24(uVar6,8,0);
              while( true ) {
                uVar3 = func_0x057e3a10(lVar11,0);
                uVar7 = func_0x057e3a10(lVar5,0);
                if (uVar3 <= uVar7) {
                  return (ulong)(*(long *)(lVar9 + lVar11) == *(long *)(lVar8 + lVar11));
                }
                uVar3 = func_0x057f2854(*(undefined8 *)(lVar9 + lVar5),
                                        *(undefined8 *)(lVar8 + lVar5),0);
                if ((uVar3 & 1) != 0) break;
                lVar5 = func_0x057e3a1c(lVar5,8,0);
              }
              return 0;
            }
            uVar3 = func_0x057e3a10(uVar6,0);
            uVar7 = func_0x057e3a10(lVar5,0);
            if (uVar7 < uVar3) {
              do {
                bVar2 = *(char *)(lVar9 + lVar5) == *(char *)(lVar8 + lVar5);
                uVar3 = (ulong)bVar2;
                if (!bVar2) {
                  return uVar3;
                }
                lVar5 = func_0x057e3a1c(lVar5,1,0);
                uVar7 = func_0x057e3a10(uVar6,0);
                uVar4 = func_0x057e3a10(lVar5,0);
              } while (uVar4 < uVar7);
              return uVar3;
            }
          }
          return 1;
        }
        uVar10 = 0;
      }
    }
    return (ulong)uVar10;
  }
  if (bVar2) {
    uVar3 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
  }
  return uVar3;
}

