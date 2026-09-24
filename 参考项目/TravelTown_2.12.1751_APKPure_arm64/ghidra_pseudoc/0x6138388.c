/* Ghidra 12.1.2 native pseudocode; RVA 0x6138388; MergeEngine.Model.Configuration.BubbledItemsConfigurationModel.HandleDataLoaded; status ok */


undefined1  [16]
MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__HandleDataLoaded
          (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 != 0) {
    auVar6._8_8_ = *(undefined8 *)(param_2 + 0x70);
    auVar6._0_8_ = (undefined8 *)(param_1 + 0x58);
    *auVar6._0_8_ = auVar6._8_8_;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)auVar6._0_8_ >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)auVar6._0_8_ >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return auVar6;
  }
  auVar7._0_8_ = func_0x03280cac();
  puVar4 = PTR_DAT_077dad40;
  if ((bRam0000000007e24561 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077dad40);
    bRam0000000007e24561 = 1;
  }
  uVar5 = *(undefined8 *)puVar4;
  auVar7._8_8_ = 0;
  return auVar7;
}

