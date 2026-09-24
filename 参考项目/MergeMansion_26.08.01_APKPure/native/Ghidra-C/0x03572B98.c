/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/PlayerModel.txt
 * Cpp2IL method: System.Void SetupProducerInventory(System.Int32 initialSize, System.Int32 maximumSize)
 * Ghidra function entry: 03672b98
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x03672c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03672c30) */
/* WARNING: Removing unreachable block (ram,0x03672ca8) */
/* WARNING: Removing unreachable block (ram,0x0366bae8) */
/* WARNING: Removing unreachable block (ram,0x0366bb18) */
/* WARNING: Removing unreachable block (ram,0x0366bb44) */
/* WARNING: Removing unreachable block (ram,0x0366bb70) */
/* WARNING: Removing unreachable block (ram,0x0366bb74) */
/* WARNING: Removing unreachable block (ram,0x0366bba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03672b98(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x30;
  
  if ((bRam0000000005e2d6c5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d9b78);
    func_0x0249f8e4(&DAT_05a418b0);
    func_0x0249f8e4(&DAT_05a44610);
    func_0x0249f8e4(&DAT_059e48c8);
    bRam0000000005e2d6c5 = 1;
  }
  if (*(long *)(param_1 + 0x350) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x350);
    uVar2 = func_0x0249fb80(_DAT_059d9b78);
    func_0x0362ced8(uVar2,0);
    *puVar1 = uVar2;
    unaff_x30 = 0x3672c30;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  }
  else {
    func_0x0362d0fc(*(long *)(param_1 + 0x350),param_2,0);
    if (*(int *)(_DAT_059e48c8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar2 = func_0x03676450(param_2,param_3);
    uVar2 = func_0x026e290c(uVar2,_DAT_05a418b0);
    uVar2 = func_0x026ec394(uVar2,_DAT_05a44610);
    puVar1 = (undefined8 *)(param_1 + 0x3c8);
    *(undefined8 *)(param_1 + 0x3c8) = uVar2;
  }
  if (iRam0000000006058428 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x30;
    func_0x0258f520(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                    ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x5e8c400);
  }
  return;
}

