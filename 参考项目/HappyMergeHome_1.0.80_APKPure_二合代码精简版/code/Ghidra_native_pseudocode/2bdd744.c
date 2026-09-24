
void FUN_02bed744(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = func_0x02953fd4(0xe86,0);
  if (iVar4 == 0) {
    iVar4 = func_0x024eecb8(param_2,0);
    FUN_02bed670(&uStack_30,param_2,param_3);
    uVar3 = uStack_28;
    uVar2 = uStack_2c;
    uVar1 = uStack_30;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024f17b4(&uStack_30,iVar4,uVar1,uVar2,uVar3,0);
  }
  else {
    iVar4 = func_0x029540a4(0xe86,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02879e4c(&uStack_30,iVar4,param_2,param_3,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = CONCAT44(uStack_2c,uStack_30);
  return;
}

