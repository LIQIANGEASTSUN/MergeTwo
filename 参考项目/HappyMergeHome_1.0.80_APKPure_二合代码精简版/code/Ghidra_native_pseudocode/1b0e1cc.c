
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1e1cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
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
  
  pcVar2 = (char *)(_UNK_01b1e2f0 + 0x1b1e1ec);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1e2f4 + 0x1b1e200));
    *pcVar2 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  iVar1 = func_0x02953fd4(0x6f6,0);
  if (iVar1 == 0) {
    func_0x024f1060(&uStack_50,0);
    puVar3 = (undefined4 *)((uint)&uStack_40 | 4);
    *puVar3 = uStack_50;
    puVar3[1] = uStack_4c;
    puVar3[2] = uStack_48;
    puVar3[3] = uStack_44;
    func_0x014385cc(puVar3,0);
    uStack_2c = param_1;
    func_0x014385cc(&uStack_2c,param_1);
    uStack_28 = param_2;
    uStack_24 = param_3;
    func_0x014385cc(&uStack_24,param_3);
    uStack_40 = 0xffffffff;
    func_0x035c9d58(puVar3,&uStack_40,**(undefined4 **)(_UNK_01b1e2f8 + 0x1b1e2d8));
  }
  else {
    iVar1 = func_0x029540a4(0x6f6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

