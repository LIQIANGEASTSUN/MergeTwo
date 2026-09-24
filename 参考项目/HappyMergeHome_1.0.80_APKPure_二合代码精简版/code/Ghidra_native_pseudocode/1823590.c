
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01833590(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01833668 + 0x18335a0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183366c + 0x18335b4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x17c6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x17c6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar2 = (char *)(_UNK_028a9678 + 0x28a95a8);
    if (*pcVar2 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a967c + 0x28a95bc),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar3,&uStack_30,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a9680 + 0x28a9668));
    return iVar1;
  }
  piVar4 = *(int **)(_UNK_01833670 + 0x1833608);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4();
    func_0x0183a698();
    iVar6 = *piVar4;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar4;
    }
    piVar4 = (int *)(*(int *)(iVar6 + 0x5c) + 4);
    *piVar4 = iVar1;
    func_0x014385cc(piVar4,iVar1);
  }
  return iVar1;
}

