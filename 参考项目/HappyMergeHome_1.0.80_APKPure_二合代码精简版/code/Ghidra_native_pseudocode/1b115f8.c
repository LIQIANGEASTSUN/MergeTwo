
/* WARNING: Removing unreachable block (ram,0x01b2176c) */

uint FUN_01b215f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
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
  undefined4 uStack_24;
  
  pcVar6 = pcRam01b21768 + 0x1b21618;
  if (*pcVar6 == (code)0x0) {
    func_0x01438628(*(undefined4 *)(iRam01b2176c + 0x1b2162c));
    *pcVar6 = (code)0x1;
  }
  iVar1 = func_0x02953fd4(0x6e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6e1,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar3 = func_0x024f56f0(&uStack_38,0,0);
    return uVar3;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 < param_2) {
    param_2 = iVar1;
  }
  if ((param_2 <= iVar1) && (iVar1 = *(int *)(param_1 + 0x68), iVar1 < param_2)) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0152a69c(iVar1,param_2,**(undefined4 **)(iRam01b21770 + 0x1b216c4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    return *(uint *)(iVar1 + 0x20);
  }
  uVar8 = param_2 == iVar1;
  uVar7 = func_0x01524ffc(&stack0xffffffec,0);
  uVar4 = func_0x01438638(*(undefined4 *)(iRam01b21774 + 0x1b21704));
  uVar2 = func_0x01438638(*(undefined4 *)(iRam01b21778 + 0x1b21714));
  uVar7 = func_0x024eee28(uVar4,uVar7,uVar2,0);
  func_0x01438638(*(undefined4 *)(iRam01b2177c + 0x1b21738));
  uVar4 = func_0x014388d4();
  func_0x014e95c8(uVar4,uVar7,0);
  uVar7 = func_0x01438638(*(undefined4 *)(iRam01b21780 + 0x1b21758));
  func_0x01438790(uVar4,uVar7);
  uVar9 = func_0x014385d0();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x01b21768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)uVar8) {
    uVar3 = (*pcRam01b21768)();
    return uVar3;
  }
  uStack_24 = uVar4;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  iVar1 = FUN_01b18c14((int)uVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  return (uint)(iVar5 == *(int *)(iVar1 + 0x40));
}

