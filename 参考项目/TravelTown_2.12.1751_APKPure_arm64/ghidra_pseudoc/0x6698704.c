/* Ghidra 12.1.2 native pseudocode; RVA 0x6698704; Merger.Game.Views.BoardView.SlideBoosterIn; status ok */


/* WARNING: Possible PIC construction at 0x067987a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067987a8) */
/* WARNING: Removing unreachable block (ram,0x067987ac) */
/* WARNING: Removing unreachable block (ram,0x06798940) */
/* WARNING: Removing unreachable block (ram,0x067987fc) */
/* WARNING: Removing unreachable block (ram,0x0679882c) */
/* WARNING: Removing unreachable block (ram,0x06798834) */
/* WARNING: Removing unreachable block (ram,0x0679885c) */
/* WARNING: Removing unreachable block (ram,0x06798840) */
/* WARNING: Removing unreachable block (ram,0x0679884c) */
/* WARNING: Removing unreachable block (ram,0x06798868) */
/* WARNING: Removing unreachable block (ram,0x067988d8) */
/* WARNING: Removing unreachable block (ram,0x067988e0) */
/* WARNING: Removing unreachable block (ram,0x06798908) */
/* WARNING: Removing unreachable block (ram,0x067988ec) */
/* WARNING: Removing unreachable block (ram,0x067988f8) */
/* WARNING: Removing unreachable block (ram,0x06798918) */

void Merger_Game_Views_BoardView__SlideBoosterIn(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07809620;
  if ((bRam0000000007e282dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0776bc20);
    func_0x03280a18(PTR_DAT_077804d8);
    func_0x03280a18(PTR_DAT_07809628);
    func_0x03280a18(PTR_DAT_07809620);
    bRam0000000007e282dc = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

