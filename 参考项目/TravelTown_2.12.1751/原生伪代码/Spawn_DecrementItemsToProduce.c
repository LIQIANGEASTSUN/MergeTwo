// Spawn_DecrementItemsToProduce RVA 0x6A4F57C
// 06b4f57c


void target_Spawn_DecrementItemsToProduce(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [80];
  
  if ((bRam0000000007e2a5ad & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782ff38);
    bRam0000000007e2a5ad = 1;
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    func_0x072ce970(auStack_c0,param_1,0x50);
    if (param_2 == 0) {
      func_0x03280cac();
      puVar3 = PTR_DAT_0782ff88;
      puVar2 = PTR_DAT_0782ff80;
      puVar1 = PTR_DAT_0774e478;
      uStack_f0 = 0x6b4f628;
      if ((bRam0000000007e2a5af & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e478);
        func_0x03280a18(PTR_DAT_0782ff88);
        func_0x03280a18(PTR_DAT_0782ff80);
        bRam0000000007e2a5af = 1;
      }
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uVar4 = func_0x03280afc(*(undefined8 *)puVar1,0xb11);
      func_0x056b2284(uVar4,*(undefined8 *)puVar2,0);
      uStack_110 = uVar4;
      func_0x032809c4(&uStack_110,uVar4);
      uVar4 = func_0x03280afc(*(undefined8 *)puVar1,0x87d);
      func_0x056b2284(uVar4,*(undefined8 *)puVar3,0);
      uStack_108 = uVar4;
      func_0x032809c4(&uStack_108,uVar4);
      uStack_f8 = uStack_f8 & 0xffffffffffffff00;
      extraout_x8[1] = uStack_108;
      *extraout_x8 = uStack_110;
      extraout_x8[3] = uStack_f8;
      extraout_x8[2] = 0x1e0000001e;
      return;
    }
    uVar4 = *(undefined8 *)PTR_DAT_0782ff38;
    func_0x072ce970(auStack_70,auStack_c0,0x50);
    func_0x03d1dcc8(param_2,auStack_70,uVar4);
  }
  return;
}

