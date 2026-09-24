
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c8225c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01c82330 + 0x1c82270);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c82334 + 0x1c82284));
    func_0x01438628(*(undefined4 *)(_UNK_01c82338 + 0x1c82290));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0xad26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad26,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56f0(&uStack_30,0,0);
    return uVar4;
  }
  FUN_01c803b0(param_1);
  iVar1 = *(int *)(param_1 + 0x40);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_01c8233c + 0x1c8230c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar4;
}

