/* Ghidra 12.1.2 native pseudocode; RVA 0x6A636D8; Merger.MergeBoardSkipCooldownCapability.Logic.SkipCooldownProvider.CalculatePriceWithCoefficents; status ok */


undefined8
Merger_MergeBoardSkipCooldownCapability_Logic_SkipCooldownProvider__CalculatePriceWithCoefficents
          (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dStack_38;
  
  if ((bRam0000000007e2a682 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e2a682 = 1;
  }
  lVar3 = func_0x06b63140(param_2);
  if (lVar3 == 0) goto SUB_057da5fc;
  fVar7 = *(float *)(lVar3 + 0x10);
  lVar3 = func_0x06b63140(param_2);
  if (lVar3 == 0) goto SUB_057da5fc;
  fVar8 = *(float *)(lVar3 + 0x14);
  if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
  }
  dVar5 = (double)func_0x05797bf8(param_1,(double)fVar8,0);
  dVar5 = dVar5 * (double)fVar7;
  dVar6 = (double)func_0x072ce9c0(dVar5,&dStack_38);
  if (0.0 <= dVar5) {
    if (dVar6 == 0.5) {
      dVar5 = 1.0;
      goto LAB_06b637b0;
    }
    dStack_38 = (double)(long)(dVar5 + 0.5);
  }
  else if (dVar6 == -0.5) {
    dVar5 = -1.0;
LAB_06b637b0:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar5;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar5 + -0.5);
  }
  iVar1 = -0x80000000;
  if (dStack_38 != INFINITY) {
    iVar1 = (int)dStack_38;
  }
  lVar3 = func_0x06b63140(param_2);
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07771f40);
    func_0x06b21870(uVar4,uVar2,iVar1,0,0);
    return uVar4;
  }
SUB_057da5fc:
  uVar4 = func_0x03280cac();
  return uVar4;
}

