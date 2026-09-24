/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6A635E0; bound 248 bytes; Merger.MergeBoardSkipCooldownCapability.Logic.SkipCooldownProvider.CalculatePriceWithSkipCooldownSettings; status ok */


undefined8
Merger_MergeBoardSkipCooldownCapability_Logic_SkipCooldownProvider__CalculatePriceWithSkipCooldownSettings
          (double param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 extraout_d0;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dStack_68;
  
  if ((bRam0000000007e2a681 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e2a681 = 1;
  }
  if ((param_3 != 0) && (lVar5 = *(long *)(param_3 + 0x18), lVar5 != 0)) {
    iVar3 = *(int *)(lVar5 + 0x18);
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        if (iVar3 == iVar6) goto LAB_06b636d4;
        lVar7 = *(long *)(lVar5 + (long)iVar6 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_06b636d0;
        if ((double)*(float *)(lVar7 + 0x10) < param_1) {
          lVar5 = *(long *)(lVar7 + 0x18);
          if (lVar5 != 0) {
            uVar1 = *(undefined4 *)(lVar5 + 0x10);
            uVar2 = *(undefined4 *)(lVar5 + 0x14);
            uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
            func_0x06b21870(uVar4,uVar1,uVar2,0,0);
            return uVar4;
          }
          goto LAB_06b636d0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
    func_0x06b21870(uVar4,2,1,0,0);
    return uVar4;
  }
LAB_06b636d0:
  func_0x03280cac();
LAB_06b636d4:
  uVar4 = func_0x03280cb4();
  if ((bRam0000000007e2a682 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e2a682 = 1;
  }
  lVar5 = func_0x06b63140(uVar4);
  if (lVar5 == 0) goto SUB_057da5fc;
  fVar10 = *(float *)(lVar5 + 0x10);
  lVar5 = func_0x06b63140(uVar4);
  if (lVar5 == 0) goto SUB_057da5fc;
  fVar11 = *(float *)(lVar5 + 0x14);
  if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
  }
  dVar8 = (double)func_0x05797bf8(extraout_d0,(double)fVar11,0);
  dVar8 = dVar8 * (double)fVar10;
  dVar9 = (double)func_0x072ce9c0(dVar8,&dStack_68);
  if (0.0 <= dVar8) {
    if (dVar9 == 0.5) {
      dVar8 = 1.0;
      goto LAB_06b637b0;
    }
    dStack_68 = (double)(long)(dVar8 + 0.5);
  }
  else if (dVar9 == -0.5) {
    dVar8 = -1.0;
LAB_06b637b0:
    if (((long)dStack_68 & 1U) != 0) {
      dStack_68 = dStack_68 + dVar8;
    }
  }
  else {
    dStack_68 = (double)(long)(dVar8 + -0.5);
  }
  iVar3 = -0x80000000;
  if (dStack_68 != INFINITY) {
    iVar3 = (int)dStack_68;
  }
  lVar5 = func_0x06b63140(uVar4);
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x18);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
    func_0x06b21870(uVar4,uVar1,iVar3,0,0);
    return uVar4;
  }
SUB_057da5fc:
  uVar4 = func_0x03280cac();
  return uVar4;
}

