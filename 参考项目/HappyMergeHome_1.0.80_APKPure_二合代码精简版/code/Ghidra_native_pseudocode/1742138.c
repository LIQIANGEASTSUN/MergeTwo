
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01752138(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01752274 + 0x175214c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01752278 + 0x1752160));
    func_0x01438628(*(undefined4 *)(_UNK_0175227c + 0x175216c));
    func_0x01438628(*(undefined4 *)(_UNK_01752280 + 0x1752178));
    func_0x01438628(*(undefined4 *)(_UNK_01752284 + 0x1752184));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x8d07,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8d07,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(**(int **)(_UNK_01752288 + 0x17521ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0175228c + 0x1752208));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01752290 + 0x1752228));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x394) == 0) {
      uVar4 = 1;
    }
    else {
      iVar1 = func_0x024ef040(*(int *)(iVar1 + 0x394),**(undefined4 **)(_UNK_01752294 + 0x1752258));
      uVar4 = (uint)(iVar1 == 0);
    }
  }
  return uVar4;
}

