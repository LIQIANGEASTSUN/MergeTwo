
float FUN_01bb0630(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0xa84f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa84f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar3,0,0);
    fVar2 = (float)func_0x024f5720(&uStack_30,0,0);
    return fVar2;
  }
  iVar1 = FUN_01ba9704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = func_0x01bb06c4(param_1);
  fVar2 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  return fVar6 / fVar2;
}

