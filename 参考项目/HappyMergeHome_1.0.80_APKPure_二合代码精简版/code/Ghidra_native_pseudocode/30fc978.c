
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0310c978(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_0310ca8c + 0x310c98c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310ca90 + 0x310c9a0));
    func_0x01438628(*(undefined4 *)(_UNK_0310ca94 + 0x310c9ac));
    func_0x01438628(*(undefined4 *)(_UNK_0310ca98 + 0x310c9b8));
    func_0x01438628(*(undefined4 *)(_UNK_0310ca9c + 0x310c9c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xf15,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf15,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02896a8c + 0x28969ac);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02896a90 + 0x28969c0),param_1,0);
      *pcVar4 = '\x01';
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
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02896a94 + 0x2896a7c));
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_0310caa0 + 0x310ca1c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0310caa4 + 0x310ca38));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036e7038(iVar1,**(undefined4 **)(_UNK_0310caa8 + 0x310ca58));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x05187824(0,0,**(undefined4 **)(_UNK_0310caac + 0x310ca80));
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x034a8a64();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x034a8c14();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

