/* Ghidra 12.1.2 native pseudocode; RVA 0x67CAA30; Merger.Services.Backend.Sync.Implementations.SyncBoardService.ConstructPlayerResources; status ok */


/* WARNING: Possible PIC construction at 0x068caaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068caccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x068caaf0) */
/* WARNING: Removing unreachable block (ram,0x068cab44) */
/* WARNING: Removing unreachable block (ram,0x068cab70) */
/* WARNING: Removing unreachable block (ram,0x068caaf4) */
/* WARNING: Removing unreachable block (ram,0x068cab20) */
/* WARNING: Removing unreachable block (ram,0x068cab90) */
/* WARNING: Removing unreachable block (ram,0x068caba4) */
/* WARNING: Removing unreachable block (ram,0x068cac24) */
/* WARNING: Removing unreachable block (ram,0x068cac64) */
/* WARNING: Removing unreachable block (ram,0x068caca8) */
/* WARNING: Removing unreachable block (ram,0x068cabc4) */
/* WARNING: Removing unreachable block (ram,0x068cabf0) */
/* WARNING: Removing unreachable block (ram,0x068cabd4) */
/* WARNING: Removing unreachable block (ram,0x068cac08) */
/* WARNING: Removing unreachable block (ram,0x068cacd0) */
/* WARNING: Removing unreachable block (ram,0x068cacd4) */
/* WARNING: Removing unreachable block (ram,0x068cad04) */
/* WARNING: Removing unreachable block (ram,0x068cad80) */
/* WARNING: Removing unreachable block (ram,0x068cad24) */
/* WARNING: Removing unreachable block (ram,0x068cad50) */
/* WARNING: Removing unreachable block (ram,0x068cad34) */
/* WARNING: Removing unreachable block (ram,0x068cad68) */

void Merger_Services_Backend_Sync_Implementations_SyncBoardService__ConstructPlayerResources(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_078124c0;
  puVar2 = PTR_DAT_07812360;
  puVar1 = PTR_DAT_07812358;
  if ((bRam0000000007e28fa1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078124c8);
    func_0x03280a18(PTR_DAT_07812360);
    func_0x03280a18(PTR_DAT_07812358);
    func_0x03280a18(PTR_DAT_0777a670);
    func_0x03280a18(PTR_DAT_078124c0);
    func_0x03280a18(PTR_DAT_078124d0);
    bRam0000000007e28fa1 = 1;
  }
  uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04143c38(uVar4,*(undefined8 *)puVar2);
  func_0x03280ca0(*(undefined8 *)puVar3);
  return;
}

