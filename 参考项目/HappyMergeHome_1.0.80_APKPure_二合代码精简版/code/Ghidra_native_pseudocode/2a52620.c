
void FUN_02a62620(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x02953fd4(0x527f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x527f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    fStack_28 = 0.0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    fStack_2c = fStack_44;
    fStack_28 = (float)uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    fVar6 = *(float *)(param_2 + 200);
    fVar7 = *(float *)(param_2 + 0xcc);
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1e6f8(&fStack_2c,iVar1,0);
    fVar7 = fVar7 / fStack_28;
    iVar1 = *(int *)(param_1 + 0x1c);
    fVar6 = fVar6 / fStack_2c;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x024f17b4(&fStack_2c,iVar1,fVar6,fVar7);
    iVar1 = func_0x014e94d8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024ef308(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&fStack_2c,iVar1,0);
    iVar1 = func_0x014e94d8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024ef308(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_38 = 0;
    func_0x024ef0bc(iVar1,fStack_2c,fStack_28,uStack_24);
    uVar2 = FUN_02a623b4(param_1);
    if (*(byte *)(param_1 + 0x2d) != uVar2) {
      iVar1 = *(int *)(param_1 + 0x18);
      *(char *)(param_1 + 0x2d) = (char)uVar2;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar2,*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

