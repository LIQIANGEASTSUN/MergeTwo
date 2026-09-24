/* Ghidra 12.1.2 native pseudocode; RVA 0x6A771C4; Merger.MergeBoard.Systems.TimeCycleSystem.AddCooldownEndedResult; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__AddCooldownEndedResult
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  if ((bRam0000000007e2a70b & 1) == 0) {
    func_0x03280a18(PTR_DAT_078315f0);
    func_0x03280a18(PTR_DAT_078315d8);
    func_0x03280a18(PTR_DAT_0782ff38);
    func_0x03280a18(PTR_DAT_078315f8);
    func_0x03280a18(PTR_DAT_078315e8);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a70b = 1;
  }
  func_0x072ce970(auStack_e0,param_3,0x50);
  puVar1 = PTR_DAT_078315f0;
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_0782ff38;
    func_0x072ce970(auStack_90,auStack_e0,0x50);
    func_0x03d1dcc8(param_4,auStack_90,uVar3);
    lVar4 = *(long *)(param_2 + 0x10);
    lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x06b9a1e8(lVar2,0);
    puVar1 = PTR_DAT_0774f158;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = param_4;
      func_0x032809c4((long *)(lVar2 + 0x10),param_4);
      uVar3 = *(undefined8 *)puVar1;
      uVar3 = func_0x06ba3134(param_4,*(undefined8 *)(param_1 + 0x10),uVar3,uVar3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      func_0x032809c4();
      puVar1 = PTR_DAT_078315d8;
      if (lVar4 != 0) {
        func_0x03ec33e4(lVar4,lVar2,*(undefined8 *)PTR_DAT_078315f8);
        lVar4 = *(long *)(param_2 + 0x10);
        lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x06b9a2c4(lVar2,0);
        if ((lVar2 != 0) && (*(undefined1 *)(lVar2 + 0x10) = 0, lVar4 != 0)) {
          func_0x03ec33e4(lVar4,lVar2,*(undefined8 *)PTR_DAT_078315e8);
          return;
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

