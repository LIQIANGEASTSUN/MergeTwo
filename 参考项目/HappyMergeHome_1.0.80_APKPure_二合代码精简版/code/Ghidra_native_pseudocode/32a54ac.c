
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032b54ac(undefined4 param_1)

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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_032b5600 + 0x32b54c4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b5604 + 0x32b54d8));
    func_0x01438628(*(undefined4 *)(_UNK_032b5608 + 0x32b54e4));
    func_0x01438628(*(undefined4 *)(_UNK_032b560c + 0x32b54f0));
    func_0x01438628(*(undefined4 *)(_UNK_032b5610 + 0x32b54fc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x82ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x82ad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
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
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return uVar5;
  }
  iVar1 = FUN_032a8ec4(param_1,0);
  if ((iVar1 == 0) || (iVar1 = FUN_032b4e74(param_1), iVar1 == 0)) {
    uVar5 = **(undefined4 **)(_UNK_032b5614 + 0x32b55f8);
  }
  else {
    iVar3 = FUN_032a7be8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_18 = *(undefined4 *)(iVar3 + 0x70);
    uStack_14 = *(undefined4 *)(iVar3 + 0x74);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    uVar5 = func_0x014387ac(**(undefined4 **)(_UNK_032b5618 + 0x32b55a4),&uStack_18);
    uStack_1c = uVar2;
    uVar2 = func_0x014387ac(**(undefined4 **)(_UNK_032b561c + 0x32b55c4),&uStack_1c);
    uVar5 = func_0x04f6b974(**(undefined4 **)(_UNK_032b5620 + 0x32b55e4),uVar5,uVar2,0);
  }
  return uVar5;
}

