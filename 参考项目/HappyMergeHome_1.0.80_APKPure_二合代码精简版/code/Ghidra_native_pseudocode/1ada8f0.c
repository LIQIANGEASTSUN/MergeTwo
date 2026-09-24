
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aea8f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01aea9bc + 0x1aea908);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aea9c0 + 0x1aea91c));
    func_0x01438628(*(undefined4 *)(_UNK_01aea9c4 + 0x1aea928));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4a9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02933954 + 0x2933860);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02933958 + 0x2933874),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0293395c + 0x2933944));
    return uVar5;
  }
  iVar1 = FUN_01ae9a14(param_1);
  if (((-1 < param_2) && (iVar1 != 0)) && (param_2 < *(int *)(iVar1 + 0xc))) {
    uVar5 = (*(code *)&SUB_04cfd760)(iVar1,param_2,**(undefined4 **)(_UNK_01aea9c8 + 0x1aea9a8));
    return uVar5;
  }
  return 0;
}

