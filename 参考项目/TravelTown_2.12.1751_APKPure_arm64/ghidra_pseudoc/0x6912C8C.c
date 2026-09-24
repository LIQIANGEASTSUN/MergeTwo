/* Ghidra 12.1.2 native pseudocode; RVA 0x6912C8C; MergeEngine.Configuration.ItemBase.SetAsLocalSprite; status ok */


void MergeEngine_Configuration_ItemBase__SetAsLocalSprite(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = func_0x0611f910(param_1,0);
  uVar5 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  uVar6 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  lVar7 = func_0x0599accc(uVar4,uVar5,uVar6,0);
  param_1 = param_1 + 0xf;
  *param_1 = lVar7;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

