
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7c5c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
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
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01cc7da0 + 0x1cc7c78);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc7da4 + 0x1cc7c8c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7da8 + 0x1cc7c98));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x971,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x971,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01cc28c8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    iVar1 = FUN_01cc28c8(param_1);
    if (*(int *)(**(int **)(_UNK_01cc7dac + 0x1cc7d28) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01cc7db0 + 0x1cc7d44));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar6 = func_0x026ffbe0(iVar3,0);
    uVar5 = (undefined4)((ulonglong)lVar6 >> 0x20);
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar5 = extraout_r1;
    }
    uStack_20 = 0;
    lVar6 = (longlong)param_2 * 1000 + lVar6;
    func_0x026a7f70(iVar1,uVar5,(int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
  }
  return;
}

