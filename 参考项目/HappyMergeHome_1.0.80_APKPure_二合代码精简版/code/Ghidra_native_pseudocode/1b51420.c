
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b61420(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01b6155c + 0x1b61438);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b61560 + 0x1b6144c));
    func_0x01438628(*(undefined4 *)(_UNK_01b61564 + 0x1b61458));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xccc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xccc,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b61568 + 0x1b614b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b6156c + 0x1b614d0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x026ffbe0(iVar1,0);
  *(undefined4 *)(param_1 + 0x18) = (undefined *)uVar7 + -86400000;
  *(uint *)(param_1 + 0x1c) =
       (int)((ulonglong)uVar7 >> 0x20) - (uint)((undefined *)uVar7 < &UNK_05265c00);
  iVar1 = FUN_01b572ec(param_1);
  if (iVar1 != 0) {
    uVar7 = FUN_01b572ec(param_1);
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    if ((int)uVar7 == 0) {
      func_0x014388e4();
      uVar6 = extraout_r1;
    }
    uStack_18 = 0;
    func_0x026bed3c((int)uVar7,uVar6,uVar5,uVar2);
  }
  return;
}

