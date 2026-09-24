/* Ghidra 12.1.2 native pseudocode; RVA 0x676A7D0; Merger.Game.Signal.BoardItemCooldownBaseSignal..ctor; status ok */


void Merger_Game_Signal_BoardItemCooldownBaseSignal___ctor
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 param_5,byte param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x057da5fc(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x032809c4((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  func_0x032809c4((undefined8 *)(param_1 + 0x18),param_5);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  uVar1 = param_4[4];
  uVar5 = param_4[1];
  uVar4 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(param_1 + 0x50) = param_7;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  func_0x032809c4((undefined8 *)(param_1 + 0x50),param_7);
  *(byte *)(param_1 + 0x58) = param_6 & 1;
  return;
}

