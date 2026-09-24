/* Ghidra 12.1.2 native pseudocode; RVA 0x67CAC28; Merger.Services.Backend.Sync.Implementations.SyncBoardService.ConstructFreeVouchers; status ok */


/* WARNING: Possible PIC construction at 0x068caccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068cacd0) */
/* WARNING: Removing unreachable block (ram,0x068cacd4) */
/* WARNING: Removing unreachable block (ram,0x068cad04) */
/* WARNING: Removing unreachable block (ram,0x068cad80) */
/* WARNING: Removing unreachable block (ram,0x068cad24) */
/* WARNING: Removing unreachable block (ram,0x068cad50) */
/* WARNING: Removing unreachable block (ram,0x068cad34) */
/* WARNING: Removing unreachable block (ram,0x068cad68) */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__ConstructFreeVouchers(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_078124d8;
  puVar2 = PTR_DAT_07812380;
  puVar1 = PTR_DAT_07812378;
  if ((bRam0000000007e28f9e & 1) == 0) {
    func_0x03280a18(PTR_DAT_078124d8);
    func_0x03280a18(PTR_DAT_078124e0);
    func_0x03280a18(PTR_DAT_07812380);
    func_0x03280a18(PTR_DAT_07812378);
    func_0x03280a18(PTR_DAT_077fba68);
    bRam0000000007e28f9e = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04143c38(uVar4,*(undefined8 *)puVar2);
  func_0x03280ca0(*(undefined8 *)puVar3);
  return;
}

