
void Recovered_BaseItem_LevelUp_0x02BF4094(long param_1)

{
  ulong uVar1;
  
  uVar1 = Recovered_BaseItem_get_IsMaxLeveled_0x2bf3374();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  func_0x02cf3d90(param_1);
  TailTarget_2bf40d4(param_1,1,0);
  return;
}

