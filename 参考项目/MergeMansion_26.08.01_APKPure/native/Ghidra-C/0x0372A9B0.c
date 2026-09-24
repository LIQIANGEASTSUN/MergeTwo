/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Actions/Basic/TryMergeBoardMove.txt
 * Cpp2IL method: Metaplay.Core.Model.MetaActionResult Execute(GameLogic.Player.PlayerModel player, System.Boolean commit)
 * Ghidra function entry: 0382a9b0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0382a9b0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_48;
  
  if ((bRam0000000005e2e7c7 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8540);
    func_0x0249f8e4(&DAT_05a157a0);
    func_0x0249f8e4(&DAT_059e2940);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a2aaf0);
    bRam0000000005e2e7c7 = 1;
  }
  if (param_2 == 0) {
    lVar3 = func_0x0249fb90();
    return *(undefined8 *)(lVar3 + 0x10);
  }
  lVar3 = func_0x0367263c(param_2,*(undefined8 *)(param_1 + 0x10),0);
  if (lVar3 == 0) {
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar6 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x40);
  }
  else {
    if ((param_3 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = func_0x028a379c(param_2,_DAT_05a2aaf0);
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2c00);
      }
      uVar4 = func_0x03530158(uVar4,0);
      iVar2 = func_0x0377930c(lVar3,param_2,uVar5,uVar1,uVar4,0);
      if (iVar2 != 2) {
        if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puVar6 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x118);
        goto LAB_0382ab9c;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = func_0x028a379c(param_2,_DAT_05a2aaf0);
      if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2c00);
      }
      uVar4 = func_0x03530158(uVar4,0);
      uVar5 = func_0x03779798(lVar3,param_2,uVar5,uVar1,uVar4,0);
      plVar7 = (long *)(param_1 + 0x28);
      if (*plVar7 != 0) {
        uStack_48 = uVar5;
        func_0x025a1da8(*plVar7,&uStack_48,_DAT_05a157a0);
      }
      *plVar7 = 0;
      func_0x0249f888(plVar7,0);
    }
    if (*(int *)(_DAT_059e2940 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar6 = *(undefined8 **)(_DAT_059e2940 + 0xb8);
  }
LAB_0382ab9c:
  return *puVar6;
}

