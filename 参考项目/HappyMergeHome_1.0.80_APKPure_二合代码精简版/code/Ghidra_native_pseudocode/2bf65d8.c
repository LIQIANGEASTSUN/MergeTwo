
uint FUN_02c065d8(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = func_0x02953fd4(0x5e89,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5e89,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar5,0,0);
    uVar2 = func_0x024f56e0(&uStack_38,0,0);
    return uVar2;
  }
  fVar4 = (float)func_0x024ef5b8(0);
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= param_2) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  bVar1 = fVar4 < *(float *)(iVar3 + 0x18);
  if (bVar1) {
    FUN_02c04cf8(param_1,*(undefined4 *)(param_1 + 0xb0));
  }
  return (uint)bVar1;
}

