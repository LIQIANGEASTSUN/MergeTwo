
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ae4524(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
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
  
  pcVar2 = (char *)(_UNK_01ae4610 + 0x1ae4534);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae4614 + 0x1ae4548));
    func_0x01438628(*(undefined4 *)(_UNK_01ae4618 + 0x1ae4554));
    func_0x01438628(*(undefined4 *)(_UNK_01ae461c + 0x1ae4560));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x60c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x60c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar2 = (char *)(_UNK_0287ec74 + 0x287eba4);
    if (*pcVar2 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287ec78 + 0x287ebb8),0);
      *pcVar2 = '\x01';
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar3,&uStack_30,uVar4,0,0);
    uVar4 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287ec7c + 0x287ec64));
    return uVar4;
  }
  if (*(int *)(**(int **)(_UNK_01ae4620 + 0x1ae45b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ae4624 + 0x1ae45d0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01ae4628 + 0x1ae45f0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  return *(undefined4 *)(iVar1 + 0x370);
}

