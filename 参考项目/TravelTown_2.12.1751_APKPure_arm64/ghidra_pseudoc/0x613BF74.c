/* Ghidra 12.1.2 native pseudocode; RVA 0x613BF74; MergeEngine.Model.Configuration.GameConfigurationModel.HandleDataLoaded; status ok */


/* WARNING: Possible PIC construction at 0x0623bfc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0623c038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0623c130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0623c154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0623c134) */
/* WARNING: Removing unreachable block (ram,0x0623c03c) */
/* WARNING: Removing unreachable block (ram,0x0623c058) */
/* WARNING: Removing unreachable block (ram,0x0623c060) */
/* WARNING: Removing unreachable block (ram,0x0623c064) */
/* WARNING: Removing unreachable block (ram,0x0623bfc8) */
/* WARNING: Removing unreachable block (ram,0x0623bfcc) */
/* WARNING: Removing unreachable block (ram,0x0623bfd4) */
/* WARNING: Removing unreachable block (ram,0x0623c00c) */
/* WARNING: Removing unreachable block (ram,0x0623c014) */
/* WARNING: Removing unreachable block (ram,0x0623c090) */
/* WARNING: Removing unreachable block (ram,0x0623c0d4) */
/* WARNING: Removing unreachable block (ram,0x0623c10c) */
/* WARNING: Removing unreachable block (ram,0x0623c018) */
/* WARNING: Removing unreachable block (ram,0x0623c158) */
/* WARNING: Removing unreachable block (ram,0x04e91abc) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

void MergeEngine_Model_Configuration_GameConfigurationModel__HandleDataLoaded
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000007e24597 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777d4c8);
    func_0x03280a18(PTR_DAT_077cf7c0);
    bRam0000000007e24597 = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x30);
  *puVar4 = param_2;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

