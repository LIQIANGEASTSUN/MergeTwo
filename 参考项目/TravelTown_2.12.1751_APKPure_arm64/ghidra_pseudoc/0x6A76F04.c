/* Ghidra 12.1.2 native pseudocode; RVA 0x6A76F04; Merger.MergeBoard.Systems.TimeCycleSystem.AddCooldownStartedResult; status ok */


ulong Merger_MergeBoard_Systems_TimeCycleSystem__AddCooldownStartedResult
                (long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int *extraout_x1;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  if ((bRam0000000007e2a70a & 1) == 0) {
    func_0x03280a18(PTR_DAT_078315d0);
    func_0x03280a18(PTR_DAT_078315d8);
    func_0x03280a18(PTR_DAT_0782ff38);
    func_0x03280a18(PTR_DAT_078315e0);
    func_0x03280a18(PTR_DAT_078315e8);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a70a = 1;
  }
  func_0x072ce970(auStack_e0,param_3,0x50);
  puVar1 = PTR_DAT_078315d0;
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)PTR_DAT_0782ff38;
    func_0x072ce970(auStack_90,auStack_e0,0x50);
    func_0x03d1dcc8(param_4,auStack_90,uVar4);
    lVar5 = *(long *)(param_2 + 0x10);
    lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x06b9a210(lVar2,0);
    puVar1 = PTR_DAT_0774f158;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = param_4;
      func_0x032809c4((long *)(lVar2 + 0x10),param_4);
      uVar4 = *(undefined8 *)puVar1;
      uVar4 = func_0x06ba3134(param_4,*(undefined8 *)(param_1 + 0x10),uVar4,uVar4,uVar4,0);
      *(undefined8 *)(lVar2 + 0x18) = uVar4;
      func_0x032809c4();
      puVar1 = PTR_DAT_078315d8;
      if (lVar5 != 0) {
        func_0x03ec33e4(lVar5,lVar2,*(undefined8 *)PTR_DAT_078315e0);
        lVar5 = *(long *)(param_2 + 0x10);
        lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x06b9a2c4(lVar2,0);
        if ((lVar2 != 0) && (*(undefined1 *)(lVar2 + 0x10) = 1, lVar5 != 0)) {
          uVar3 = func_0x03ec33e4(lVar5,lVar2,*(undefined8 *)PTR_DAT_078315e8);
          return uVar3;
        }
      }
    }
  }
  func_0x03280cac();
  if (*extraout_x1 != 0) {
    return 0;
  }
  return (ulong)(extraout_x1[2] == 0);
}

