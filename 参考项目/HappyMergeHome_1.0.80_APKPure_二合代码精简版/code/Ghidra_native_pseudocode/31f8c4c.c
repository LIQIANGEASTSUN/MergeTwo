
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03208c4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar2 = (char *)(_UNK_03208d60 + 0x3208c6c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03208d64 + 0x3208c80));
    *pcVar2 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_44;
  uStack_24 = uStack_40;
  uStack_20 = uStack_3c;
  iVar1 = func_0x02953fd4(0x7e4f,0);
  if (iVar1 == 0) {
    func_0x0505644c(&uStack_58,0);
    puVar3 = (undefined4 *)((uint)&uStack_48 | 4);
    *puVar3 = uStack_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    func_0x014385cc(puVar3,0);
    uStack_34 = param_1;
    func_0x014385cc(&uStack_34,param_1);
    uStack_48 = 0xffffffff;
    uStack_30 = param_2;
    uStack_2c = param_3;
    func_0x035ca1b8(puVar3,&uStack_48,**(undefined4 **)(_UNK_03208d68 + 0x3208d48));
  }
  else {
    iVar1 = func_0x029540a4(0x7e4f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d6898(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

