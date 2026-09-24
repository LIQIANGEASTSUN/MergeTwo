/* Ghidra 12.1.2 native pseudocode; RVA 0x6A761E4; Merger.MergeBoard.Systems.SwapSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b76300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b76304) */
/* WARNING: Removing unreachable block (ram,0x06b7630c) */
/* WARNING: Removing unreachable block (ram,0x06b76320) */
/* WARNING: Removing unreachable block (ram,0x06b76398) */
/* WARNING: Removing unreachable block (ram,0x06b763b4) */
/* WARNING: Removing unreachable block (ram,0x06b7647c) */
/* WARNING: Removing unreachable block (ram,0x06b7649c) */
/* WARNING: Removing unreachable block (ram,0x06b764d4) */
/* WARNING: Removing unreachable block (ram,0x06b76520) */
/* WARNING: Removing unreachable block (ram,0x06b764f0) */
/* WARNING: Removing unreachable block (ram,0x06b76508) */

void Merger_MergeBoard_Systems_SwapSystem__Tick(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_07831540;
  if ((bRam0000000007e2a705 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831548);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_07831550);
    func_0x03280a18(PTR_DAT_07830708);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831098);
    func_0x03280a18(PTR_DAT_078312d8);
    func_0x03280a18(PTR_DAT_078310a8);
    func_0x03280a18(PTR_DAT_07831558);
    func_0x03280a18(PTR_DAT_078310b0);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_07831560);
    func_0x03280a18(PTR_DAT_078312e0);
    func_0x03280a18(PTR_DAT_07830d20);
    func_0x03280a18(PTR_DAT_07831568);
    func_0x03280a18(PTR_DAT_07831540);
    bRam0000000007e2a705 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

