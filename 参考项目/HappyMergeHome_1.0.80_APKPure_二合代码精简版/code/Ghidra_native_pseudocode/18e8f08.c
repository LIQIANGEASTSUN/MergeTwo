
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018f8f08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  pcVar2 = (char *)(_UNK_018f9010 + 0x18f8f28);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f9014 + 0x18f8f3c));
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
  iVar1 = func_0x02953fd4(0x966b,0);
  if (iVar1 == 0) {
    func_0x024f1060(&uStack_48,0);
    puVar3 = (undefined4 *)((uint)&uStack_38 | 4);
    *puVar3 = uStack_48;
    puVar3[1] = uStack_44;
    puVar3[2] = uStack_40;
    puVar3[3] = uStack_3c;
    func_0x014385cc(puVar3,0);
    uStack_20 = param_1;
    func_0x014385cc(&uStack_20,param_1);
    uStack_38 = 0xffffffff;
    uStack_24 = param_2;
    uStack_1c = param_3;
    func_0x035cc4b8(puVar3,&uStack_38,**(undefined4 **)(_UNK_018f9018 + 0x18f8ff8));
  }
  else {
    iVar1 = func_0x029540a4(0x966b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d6898(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

