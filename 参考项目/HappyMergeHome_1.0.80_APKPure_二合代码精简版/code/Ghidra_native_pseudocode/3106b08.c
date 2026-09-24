
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03116b08(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_03116c20 + 0x3116b20);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03116c24 + 0x3116b34));
    func_0x01438628(*(undefined4 *)(_UNK_03116c28 + 0x3116b40));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2071,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2071,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = FUN_0310c164(param_1);
  if (*(int *)(**(int **)(_UNK_03116c2c + 0x3116ba8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03116c30 + 0x3116bc4));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x026ffbe0(iVar4,0);
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = iVar2;
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar4 = extraout_r1;
  }
  uStack_20 = 0;
  FUN_026ef960(iVar1,iVar4,(undefined *)uVar7 + -86400000,
               iVar2 - (uint)((undefined *)uVar7 < &UNK_05265c00));
  return;
}

