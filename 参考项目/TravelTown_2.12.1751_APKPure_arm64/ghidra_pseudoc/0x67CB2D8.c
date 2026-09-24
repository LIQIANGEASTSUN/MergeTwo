/* Ghidra 12.1.2 native pseudocode; RVA 0x67CB2D8; Merger.Services.Backend.Sync.Implementations.SyncBoardService.GetEventFreeBubbleBurst; status ok */


undefined8
Merger_Services_Backend_Sync_Implementations_SyncBoardService__GetEventFreeBubbleBurst(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0774e598;
  if ((bRam0000000007e28fa0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_078124e8);
    bRam0000000007e28fa0 = 1;
  }
  puVar2 = PTR_DAT_078124e8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06faa078(*(undefined8 *)puVar2,0);
  return 0;
}

