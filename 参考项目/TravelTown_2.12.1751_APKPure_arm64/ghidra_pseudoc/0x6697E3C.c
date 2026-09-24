/* Ghidra 12.1.2 native pseudocode; RVA 0x6697E3C; Merger.Game.Views.BoardView.SlideItemIn; status ok */


/* WARNING: Possible PIC construction at 0x06797ee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06797eec) */
/* WARNING: Removing unreachable block (ram,0x06797ef0) */
/* WARNING: Removing unreachable block (ram,0x06798098) */
/* WARNING: Removing unreachable block (ram,0x06797f40) */
/* WARNING: Removing unreachable block (ram,0x06797f78) */
/* WARNING: Removing unreachable block (ram,0x06797f80) */
/* WARNING: Removing unreachable block (ram,0x06797fa8) */
/* WARNING: Removing unreachable block (ram,0x06797f8c) */
/* WARNING: Removing unreachable block (ram,0x06797f98) */
/* WARNING: Removing unreachable block (ram,0x06797fb4) */
/* WARNING: Removing unreachable block (ram,0x0679802c) */
/* WARNING: Removing unreachable block (ram,0x06798034) */
/* WARNING: Removing unreachable block (ram,0x0679805c) */
/* WARNING: Removing unreachable block (ram,0x06798040) */
/* WARNING: Removing unreachable block (ram,0x0679804c) */
/* WARNING: Removing unreachable block (ram,0x0679806c) */

void Merger_Game_Views_BoardView__SlideItemIn(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_078095e8;
  if ((bRam0000000007e282d9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0776bc20);
    func_0x03280a18(PTR_DAT_078095f0);
    func_0x03280a18(PTR_DAT_0777dd80);
    func_0x03280a18(PTR_DAT_078095f8);
    func_0x03280a18(PTR_DAT_078095e8);
    bRam0000000007e282d9 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

