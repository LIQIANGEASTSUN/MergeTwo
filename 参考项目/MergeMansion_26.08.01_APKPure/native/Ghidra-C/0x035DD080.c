/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Collections.Generic.IEnumerable`1<GameLogic.Player.Items.IItemDefinition> GetActivationSpawnItems(GameLogic.Random.IGenerationContext generationContext, GameLogic.Player.IPlayer player, GameLogic.Config.Types.MetacoreTime timestamp, GameLogic.Player.Items.Production.ProducerContext producerContext)
 * Ghidra function entry: 036dd080
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_036dd080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  lVar2 = func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0xfffffffe;
  uVar1 = func_0x045f0b1c(0);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  func_0x0249f888((undefined8 *)(lVar2 + 0x28),param_1);
  *(undefined8 *)(lVar2 + 0x78) = param_2;
  func_0x0249f888((undefined8 *)(lVar2 + 0x78),param_2);
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  func_0x0249f888((undefined8 *)(lVar2 + 0x38),param_3);
  *(undefined8 *)(lVar2 + 0x68) = param_4;
  *(undefined8 *)(lVar2 + 0x50) = param_5;
  *(undefined8 *)(lVar2 + 0x58) = param_6;
  func_0x0249f888((undefined8 *)(lVar2 + 0x50),0);
  return lVar2;
}

