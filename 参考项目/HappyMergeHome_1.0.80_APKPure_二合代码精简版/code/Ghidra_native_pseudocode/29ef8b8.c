
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029ff8b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_029ffa40 + 0x29ff8d0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029ffa44 + 0x29ff8e4));
    func_0x01438628(*(undefined4 *)(_UNK_029ffa48 + 0x29ff8f0));
    func_0x01438628(*(undefined4 *)(_UNK_029ffa4c + 0x29ff8fc));
    func_0x01438628(*(undefined4 *)(_UNK_029ffa50 + 0x29ff908));
    func_0x01438628(*(undefined4 *)(_UNK_029ffa54 + 0x29ff914));
    func_0x01438628(*(undefined4 *)(_UNK_029ffa58 + 0x29ff920));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2521,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029ffa5c + 0x29ff97c));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = *(int **)(_UNK_029ffa60 + 0x29ff9a4);
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_029ffa64 + 0x29ff9c4));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_029ffa68 + 0x29ff9e4));
    func_0x03a062d0(uVar5,iVar1,**(undefined4 **)(_UNK_029ffa6c + 0x29ffa04),0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0618(iVar4,uVar5,**(undefined4 **)(_UNK_029ffa70 + 0x29ffa28));
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 8);
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0x2521,0);
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar5 = func_0x024f56f0(&uStack_38,0,0);
  return uVar5;
}

