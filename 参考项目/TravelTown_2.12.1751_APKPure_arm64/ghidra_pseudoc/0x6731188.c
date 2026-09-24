/* Ghidra 12.1.2 native pseudocode; RVA 0x6731188; Merger.Game.Views.BoardItem.BoardItemView2.Sirenix.Serialization.ISupportsPrefabSerialization.get_SerializationData; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__Sirenix_Serialization_ISupportsPrefabSerialization_get_SerializationData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  uVar4 = *(undefined8 *)(param_2 + 200);
  uVar7 = *(undefined8 *)(param_2 + 0xc0);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  param_1[5] = *(undefined8 *)(param_2 + 0xe0);
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  return;
}

