
float FUN_032b17e0(int param_1)

{
  float fVar1;
  int iVar2;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x02953fd4(0x829b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x829b,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar3,0,0);
    fVar1 = (float)func_0x024f5720(&uStack_30,0,0);
    return fVar1;
  }
  *(undefined1 *)(param_1 + 0x4b) = 0;
  FUN_032b1324(&uStack_18,param_1);
  fVar1 = (float)VectorSignedToFloat(uStack_18,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(uStack_14,(byte)(in_fpscr >> 0x16) & 3);
  return fVar1 / fVar6;
}

