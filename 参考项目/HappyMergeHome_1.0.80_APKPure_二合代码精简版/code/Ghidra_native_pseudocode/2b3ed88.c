
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4ed88(void)

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
  
  pcVar3 = (char *)(_UNK_02b4ee74 + 0x2b4ed98);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4ee78 + 0x2b4edac));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ee7c + 0x2b4edb8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4ee80 + 0x2b4edc4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x622,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x622,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_0287f280 + 0x287f1b0);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287f284 + 0x287f1c4),0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
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
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar2,&uStack_30,uVar4,0,0);
    uVar4 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287f288 + 0x287f270));
    return uVar4;
  }
  if (*(int *)(**(int **)(_UNK_02b4ee84 + 0x2b4ee18) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b4ee88 + 0x2b4ee34));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02b4ee8c + 0x2b4ee54));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  return *(undefined4 *)(iVar1 + 0x130);
}

