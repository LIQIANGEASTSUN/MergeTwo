
uint FUN_031eadc8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
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
  
  iVar2 = func_0x02953fd4(0x3324,0);
  if (iVar2 == 0) {
    iVar2 = FUN_031e6094(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1 = FUN_031e6094(param_1);
    iVar2 = func_0x02953fd4(0x3325,0);
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_031e695c();
      if (piVar3 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar2 = (**(code **)(*piVar3 + 0x110))(piVar3,0,*(undefined4 *)(*piVar3 + 0x114));
      if ((iVar2 != 0) && (iVar2 = func_0x031e7ce8(param_1), iVar2 == 0)) {
        uVar8 = func_0x031e7d54(param_1);
        iVar2 = (int)((ulonglong)uVar8 >> 0x20);
        bVar7 = (int)uVar8 != 0;
        return (uint)((int)-(iVar2 + (uint)bVar7) < 0 !=
                     (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar7)));
      }
      return 0;
    }
    iVar2 = func_0x029540a4(0x3325,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x3324,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
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
  uVar1 = func_0x024f56e0(&uStack_30,0,0);
  return uVar1;
}

