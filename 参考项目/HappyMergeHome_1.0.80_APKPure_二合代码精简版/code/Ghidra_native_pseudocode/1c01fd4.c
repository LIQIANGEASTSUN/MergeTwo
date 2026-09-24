
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c11fd4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  pcVar3 = (char *)(_UNK_01c121c8 + 0x1c11fec);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c121cc + 0x1c12000));
    func_0x01438628(*(undefined4 *)(_UNK_01c121d0 + 0x1c1200c));
    func_0x01438628(*(undefined4 *)(_UNK_01c121d4 + 0x1c12018));
    func_0x01438628(*(undefined4 *)(_UNK_01c121d8 + 0x1c12024));
    func_0x01438628(*(undefined4 *)(_UNK_01c121dc + 0x1c12030));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x02953fd4(0x34ea,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c0e5e0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0ed8(&uStack_48,iVar1,**(undefined4 **)(_UNK_01c121e0 + 0x1c120dc));
    iVar1 = 0;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    puVar4 = *(undefined4 **)(_UNK_01c121e4 + 0x1c1210c);
    while (iVar2 = func_0x015144ec(&uStack_30,*puVar4), iVar2 != 0) {
      iVar1 = iVar1 + (int)uStack_20;
    }
    func_0x024f0ee8(&uStack_30,**(undefined4 **)(_UNK_01c121e8 + 0x1c12134));
  }
  else {
    iVar1 = func_0x029540a4(0x34ea,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02869564(iVar1,param_1,0);
  }
  return iVar1;
}

