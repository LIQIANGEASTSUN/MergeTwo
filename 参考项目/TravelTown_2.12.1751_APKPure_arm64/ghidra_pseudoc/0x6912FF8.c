/* Ghidra 12.1.2 native pseudocode; RVA 0x6912FF8; MergeEngine.Configuration.LocalMergeItemsConfig.MakeTextureName; status ok */


ulong MergeEngine_Configuration_LocalMergeItemsConfig__MakeTextureName(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  uVar8 = *(ulong *)(param_1 + 0x60);
  if ((bRam0000000007e1cd68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e5d8,param_2,0);
    bRam0000000007e1cd68 = 1;
  }
  if ((uVar8 == 0) || (*(int *)(uVar8 + 0x10) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    if (bVar3) {
      uVar8 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    }
    return uVar8;
  }
  if (bVar3) {
    return param_2;
  }
  if (uVar8 == 0) {
    auVar12 = func_0x03280cac();
    lVar9 = auVar12._8_8_;
    lVar10 = auVar12._0_8_;
    if (lVar10 == lVar9) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar10 != 0) && (lVar9 != 0)) {
        if (*(int *)(lVar10 + 0x10) == *(int *)(lVar9 + 0x10)) {
          lVar1 = lVar10 + 0x14;
          lVar9 = lVar9 + 0x14;
          lVar10 = (long)*(int *)(lVar10 + 0x10) << 1;
          if (lVar1 != lVar9) {
            lVar5 = func_0x057e39f8(0,0,lVar10,0);
            uVar6 = func_0x057e3a04(lVar10,0);
            uVar8 = func_0x057e3a10(uVar6,0);
            if (7 < uVar8) {
              lVar10 = func_0x057e3a24(uVar6,8,0);
              while( true ) {
                uVar8 = func_0x057e3a10(lVar10,0);
                uVar4 = func_0x057e3a10(lVar5,0);
                if (uVar8 <= uVar4) {
                  return (ulong)(*(long *)(lVar1 + lVar10) == *(long *)(lVar9 + lVar10));
                }
                uVar8 = func_0x057f2854(*(undefined8 *)(lVar1 + lVar5),
                                        *(undefined8 *)(lVar9 + lVar5),0);
                if ((uVar8 & 1) != 0) break;
                lVar5 = func_0x057e3a1c(lVar5,8,0);
              }
              return 0;
            }
            uVar8 = func_0x057e3a10(uVar6,0);
            uVar4 = func_0x057e3a10(lVar5,0);
            if (uVar4 < uVar8) {
              do {
                bVar3 = *(char *)(lVar1 + lVar5) == *(char *)(lVar9 + lVar5);
                uVar8 = (ulong)bVar3;
                if (!bVar3) {
                  return uVar8;
                }
                lVar5 = func_0x057e3a1c(lVar5,1,0);
                uVar4 = func_0x057e3a10(uVar6,0);
                uVar7 = func_0x057e3a10(lVar5,0);
              } while (uVar7 < uVar4);
              return uVar8;
            }
          }
          return 1;
        }
        uVar11 = 0;
      }
    }
    return (ulong)uVar11;
  }
  iVar2 = *(int *)(uVar8 + 0x10);
  uVar4 = func_0x032bc400(*(int *)(param_2 + 0x10) + iVar2);
  func_0x055f73c0(uVar4,0,uVar8);
  func_0x055f73c0(uVar4,iVar2,param_2);
  return uVar4;
}

