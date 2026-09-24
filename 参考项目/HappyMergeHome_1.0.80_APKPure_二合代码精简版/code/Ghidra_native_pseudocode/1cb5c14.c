
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc5c14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
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
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01cc5d28 + 0x1cc5c34);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc5d2c + 0x1cc5c48));
    *pcVar2 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  iVar1 = func_0x02953fd4(0x1da4,0);
  if (iVar1 == 0) {
    func_0x024f1060(&uStack_48,0);
    puVar3 = (undefined4 *)((uint)&uStack_38 | 4);
    *puVar3 = uStack_48;
    puVar3[1] = uStack_44;
    puVar3[2] = uStack_40;
    puVar3[3] = uStack_3c;
    func_0x014385cc(puVar3,0);
    uStack_24 = param_1;
    func_0x014385cc(&uStack_24,param_1);
    uStack_20 = param_2;
    uStack_1c = param_3;
    func_0x014385cc(&uStack_1c,param_3);
    uStack_38 = 0xffffffff;
    func_0x035c66a8(puVar3,&uStack_38,**(undefined4 **)(_UNK_01cc5d30 + 0x1cc5d10));
  }
  else {
    iVar1 = func_0x029540a4(0x1da4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

