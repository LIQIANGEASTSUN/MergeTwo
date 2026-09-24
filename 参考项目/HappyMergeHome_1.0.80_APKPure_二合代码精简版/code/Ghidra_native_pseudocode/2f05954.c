
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f15954(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_02f15b48 + 0x2f1596c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f15b4c + 0x2f15980));
    func_0x01438628(*(undefined4 *)(_UNK_02f15b50 + 0x2f1598c));
    func_0x01438628(*(undefined4 *)(_UNK_02f15b54 + 0x2f15998));
    func_0x01438628(*(undefined4 *)(_UNK_02f15b58 + 0x2f159a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f15b5c + 0x2f159b0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x02953fd4(0x6c48,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02f0ab60(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046c2934(&uStack_48,iVar1,**(undefined4 **)(_UNK_02f15b60 + 0x2f15a5c));
    iVar1 = 0;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    puVar4 = *(undefined4 **)(_UNK_02f15b64 + 0x2f15a8c);
    while (iVar2 = func_0x048a44e0(&uStack_30,*puVar4), iVar2 != 0) {
      iVar1 = iVar1 + (int)uStack_20;
    }
    func_0x048a4620(&uStack_30,**(undefined4 **)(_UNK_02f15b68 + 0x2f15ab4));
  }
  else {
    iVar1 = func_0x029540a4(0x6c48,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02869564(iVar1,param_1,0);
  }
  return iVar1;
}

