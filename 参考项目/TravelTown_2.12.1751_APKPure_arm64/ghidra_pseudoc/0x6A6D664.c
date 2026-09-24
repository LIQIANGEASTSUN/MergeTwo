/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6D664; ItemDiscoverySystem.DiscoverableItems..ctor; status ok */


void ItemDiscoverySystem_DiscoverableItems___ctor(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_c0 [60];
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *param_1 = *param_2;
  func_0x032809c4();
  func_0x072ce970(auStack_70,param_2,0x50);
  param_1[2] = uStack_60;
  param_1[1] = uStack_68;
  param_1[4] = uStack_50;
  param_1[3] = uStack_58;
  param_1[6] = uStack_40;
  param_1[5] = uStack_48;
  func_0x032809c4(param_1 + 1,0);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  func_0x072ce970(auStack_c0,param_2,0x50);
  *(undefined8 *)((long)param_1 + 0x44) = uStack_7c;
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_84;
  *(undefined4 *)((long)param_1 + 0x4c) = uStack_74;
  return;
}

