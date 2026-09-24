/* Ghidra 12.1.2 native pseudocode; RVA 0x6697C3C; Merger.Game.Views.BoardView.SlideItemOut; status ok */


/* WARNING: Possible PIC construction at 0x06797ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06797ce8) */
/* WARNING: Removing unreachable block (ram,0x06797cec) */
/* WARNING: Removing unreachable block (ram,0x06797d38) */
/* WARNING: Removing unreachable block (ram,0x06797e30) */
/* WARNING: Removing unreachable block (ram,0x06797d54) */
/* WARNING: Removing unreachable block (ram,0x06797d84) */
/* WARNING: Removing unreachable block (ram,0x06797d8c) */
/* WARNING: Removing unreachable block (ram,0x06797db4) */
/* WARNING: Removing unreachable block (ram,0x06797d98) */
/* WARNING: Removing unreachable block (ram,0x06797da4) */
/* WARNING: Removing unreachable block (ram,0x06797dc0) */
/* WARNING: Removing unreachable block (ram,0x03ed1c24) */
/* WARNING: Removing unreachable block (ram,0x03ed1c30) */
/* WARNING: Removing unreachable block (ram,0x03ed1c38) */
/* WARNING: Removing unreachable block (ram,0x03ed1c44) */

void Merger_Game_Views_BoardView__SlideItemOut(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_078095d0;
  if ((bRam0000000007e282d8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078095d8);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0776bc20);
    func_0x03280a18(PTR_DAT_0777dd80);
    func_0x03280a18(PTR_DAT_078095e0);
    func_0x03280a18(PTR_DAT_078095d0);
    bRam0000000007e282d8 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

