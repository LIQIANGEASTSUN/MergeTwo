/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/BoardInventory.txt
 * Cpp2IL method: GameLogic.Player.Items.MergeItem GetItemAtIndex(System.Int32 index)
 * Ghidra function entry: 0362d104
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0362d104(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lStack_28;
  
  if ((bRam0000000005e2d4db & 1) == 0) {
    func_0x0249f8e4(&DAT_05a3c878);
    bRam0000000005e2d4db = 1;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x026c02d4(*(long *)(param_1 + 0x18),param_2,&lStack_28,_DAT_05a3c878);
    if (lStack_28 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lStack_28 + 0x10);
    }
  }
  return uVar1;
}

