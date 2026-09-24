
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_032b53b8(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
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
  
  iVar2 = func_0x02953fd4(0x1f2d,0);
  if (iVar2 == 0) {
    iVar2 = FUN_032a8ec4(param_1,0);
    fVar1 = _UNK_032b54a8;
    if ((iVar2 != 0) && (iVar2 = FUN_032b4e74(param_1), iVar2 != 0)) {
      iVar5 = FUN_032a7be8(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 < 1) {
        fVar1 = 1.0;
      }
      else {
        fVar3 = (float)func_0x014e62b8(*(undefined4 *)(iVar5 + 0x70),*(undefined4 *)(iVar5 + 0x74));
        fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar3 = fVar3 / fVar7;
        if ((0.0 <= fVar3) && (fVar1 = fVar3, 1.0 < fVar3)) {
          fVar1 = 1.0;
        }
      }
    }
    return fVar1;
  }
  iVar2 = func_0x029540a4(0x1f2d,0);
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
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar4,0,0);
  fVar1 = (float)func_0x024f5720(&uStack_30,0,0);
  return fVar1;
}

