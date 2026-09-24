
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03150394(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  pcVar4 = (char *)(_UNK_031504b8 + 0x31503ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031504bc + 0x31503c0));
    func_0x01438628(*(undefined4 *)(_UNK_031504c0 + 0x31503cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2059,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2059,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_031504c4 + 0x3150428) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031504c8 + 0x3150444));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x026ffbe0(iVar1,0);
  *(undefined **)(param_1 + 0x18) = (undefined *)uVar7 + -86400000;
  *(uint *)(param_1 + 0x1c) =
       (int)((ulonglong)uVar7 >> 0x20) - (uint)((undefined *)uVar7 < &UNK_05265c00);
  uVar7 = FUN_031457fc(param_1);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if ((int)uVar7 == 0) {
    func_0x014388e4();
    uVar5 = extraout_r1;
  }
  uStack_20 = 0;
  func_0x026f0be0((int)uVar7,uVar5,uVar2,uVar6);
  return;
}

