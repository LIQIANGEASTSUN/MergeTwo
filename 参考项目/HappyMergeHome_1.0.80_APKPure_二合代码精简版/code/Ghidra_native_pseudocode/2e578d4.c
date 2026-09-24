
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e678d4(undefined4 param_1)

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
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02e679e8 + 0x2e678ec);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e679ec + 0x2e67900));
    func_0x01438628(*(undefined4 *)(_UNK_02e679f0 + 0x2e6790c));
    func_0x01438628(*(undefined4 *)(_UNK_02e679f4 + 0x2e67918));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6717,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6717,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02873d44 + 0x2873c64);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02873d48 + 0x2873c78),param_1,0);
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
    func_0x01523a2c(&uStack_30,param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02873d4c + 0x2873d34));
    return;
  }
  if (*(int *)(**(int **)(_UNK_02e679f8 + 0x2e67974) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x0202bb70(0);
  uStack_14 = param_1;
  uVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e679fc + 0x2e679a0),&uStack_14);
  uVar5 = func_0x01529a5c(**(undefined4 **)(_UNK_02e67a00 + 0x2e679bc),uVar5,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0202bc14(iVar1,uVar5,0);
  return;
}

