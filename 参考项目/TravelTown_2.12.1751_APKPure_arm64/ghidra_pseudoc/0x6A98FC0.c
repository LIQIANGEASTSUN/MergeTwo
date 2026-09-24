/* Ghidra 12.1.2 native pseudocode; RVA 0x6A98FC0; Merger.MergeBoard.Extensions.MergeBoardEntitiesExtensions.BlockMovement; status ok */


/* WARNING: Possible PIC construction at 0x06b9905c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b99060) */
/* WARNING: Removing unreachable block (ram,0x06b99064) */
/* WARNING: Removing unreachable block (ram,0x06b990b0) */
/* WARNING: Removing unreachable block (ram,0x06b99080) */

void Merger_MergeBoard_Extensions_MergeBoardEntitiesExtensions__BlockMovement
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_078325c8;
  puVar1 = PTR_DAT_078325c0;
  if ((bRam0000000007e2a82b & 1) == 0) {
    func_0x03280a18(PTR_DAT_078325c8);
    func_0x03280a18(PTR_DAT_078325d0);
    func_0x03280a18(PTR_DAT_078325c0);
    bRam0000000007e2a82b = 1;
  }
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  func_0x03ec5b34(&uStack_60,param_2,0,*(undefined8 *)puVar1);
  func_0x03280ca0(*(undefined8 *)puVar2);
  return;
}

