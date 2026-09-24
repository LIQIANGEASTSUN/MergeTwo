/* Ghidra 12.1.2 native pseudocode; RVA 0x67311A4; Merger.Game.Views.BoardItem.BoardItemView2.Sirenix.Serialization.ISupportsPrefabSerialization.set_SerializationData; status ok */

void Merger_Game_Views_BoardItem_BoardItemView2__Sirenix_Serialization_ISupportsPrefabSerialization_set_SerializationData
               (long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar6 = param_2[6];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  *(undefined8 *)(param_1 + 0xf0) = param_2[7];
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  *(undefined8 *)(param_1 + 0xd0) = uVar10;
  *(undefined8 *)(param_1 + 200) = uVar9;
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)((param_1 + 0xc0U >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0xc0U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

