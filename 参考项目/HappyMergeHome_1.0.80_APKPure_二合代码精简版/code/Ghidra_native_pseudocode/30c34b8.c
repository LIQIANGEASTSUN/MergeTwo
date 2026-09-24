
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030d34b8(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_030d35cc + 0x30d34cc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d35d0 + 0x30d34e0));
    func_0x01438628(*(undefined4 *)(_UNK_030d35d4 + 0x30d34ec));
    func_0x01438628(*(undefined4 *)(_UNK_030d35d8 + 0x30d34f8));
    func_0x01438628(*(undefined4 *)(_UNK_030d35dc + 0x30d3504));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xf43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf43,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02896e84 + 0x2896da4);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02896e88 + 0x2896db8),param_1,0);
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
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02896e8c + 0x2896e74));
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_030d35e0 + 0x30d355c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d35e4 + 0x30d3578));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036e7ac0(iVar1,**(undefined4 **)(_UNK_030d35e8 + 0x30d3598));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x05187824(0,0,**(undefined4 **)(_UNK_030d35ec + 0x30d35c0));
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

