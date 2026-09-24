/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.IItemDefinition> GetUnlockedMergeItems(GameLogic.Player.IPlayer player)
 * Ghidra function entry: 036ddd00
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_036ddd00(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000005e2da3e & 1) == 0) {
    func_0x0249f8e4(&DAT_059effa8);
    bRam0000000005e2da3e = 1;
  }
  lVar2 = func_0x0249fb80(_DAT_059effa8);
  func_0x045ecdec(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0xfffffffe;
  uVar1 = func_0x045f0b1c(0);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  func_0x0249f888((undefined8 *)(lVar2 + 0x38),param_1);
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  func_0x0249f888((undefined8 *)(lVar2 + 0x30),param_2);
  return lVar2;
}

