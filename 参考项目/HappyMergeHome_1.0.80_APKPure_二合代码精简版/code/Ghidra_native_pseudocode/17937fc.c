
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a37fc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_017a3910 + 0x17a3810);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a3914 + 0x17a3824));
    func_0x01438628(*(undefined4 *)(_UNK_017a3918 + 0x17a3830));
    func_0x01438628(*(undefined4 *)(_UNK_017a391c + 0x17a383c));
    func_0x01438628(*(undefined4 *)(_UNK_017a3920 + 0x17a3848));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x173d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x173d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028a873c + 0x28a865c);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a8740 + 0x28a8670),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a8744 + 0x28a872c));
    return;
  }
  if (*(int *)(**(int **)(_UNK_017a3924 + 0x17a38a0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a3928 + 0x17a38bc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036dbc78(iVar1,**(undefined4 **)(_UNK_017a392c + 0x17a38dc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfd760)(iVar1,0,**(undefined4 **)(_UNK_017a3930 + 0x17a3904));
  return;
}

