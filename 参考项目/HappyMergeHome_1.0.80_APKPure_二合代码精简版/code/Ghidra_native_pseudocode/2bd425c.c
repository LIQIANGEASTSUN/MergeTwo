
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02be425c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02be4328 + 0x2be4270);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be432c + 0x2be4284));
    func_0x01438628(*(undefined4 *)(_UNK_02be4330 + 0x2be4290));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5013,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5013,0);
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
    func_0x01523a2c(&uStack_30,param_1,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2);
    uVar6 = func_0x024f56f0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02be4334 + 0x2be42e8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be4338 + 0x2be4304));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02bde5f8 + 0x2bde56c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bde5fc + 0x2bde580));
    *pcVar5 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x5014,0);
  if (iVar4 == 0) {
    iVar1 = func_0x03600048(*(undefined4 *)(iVar1 + 0x14),param_1,
                            **(undefined4 **)(_UNK_02bde600 + 0x2bde5e0));
    if (iVar1 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 0x50);
    }
    return uVar6;
  }
  iVar4 = func_0x029540a4(0x5014,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,iVar1,0);
  func_0x01523a2c(&uStack_38,param_1,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar6 = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = *(int *)(iVar4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
  uVar6 = func_0x024f56f0(&uStack_38,0,0);
  return uVar6;
}

