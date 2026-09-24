/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD1DD8; Merger.MergeBoard.PowerBoost.Models.PowerBoostModel.Initialize; status ok */


void Merger_MergeBoard_PowerBoost_Models_PowerBoostModel__Initialize(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_077744f8;
  puVar4 = PTR_DAT_077744f0;
  if ((bRam0000000007e2aa95 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077744f8);
    func_0x03280a18(PTR_DAT_077744f0);
    bRam0000000007e2aa95 = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0432179c(uVar6,1,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(param_1 + 0x38);
  *puVar7 = uVar6;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

