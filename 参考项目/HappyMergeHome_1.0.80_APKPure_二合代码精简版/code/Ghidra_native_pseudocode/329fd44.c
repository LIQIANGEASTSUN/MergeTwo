
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032afd44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  pcVar2 = (char *)(_UNK_032afe80 + 0x32afd64);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032afe84 + 0x32afd7c));
    *pcVar2 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_28 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  iVar1 = func_0x02953fd4(0x1f13,0);
  if (iVar1 == 0) {
    func_0x0505644c(&uStack_68,0);
    puVar3 = (undefined4 *)((uint)&uStack_58 | 4);
    *puVar3 = uStack_68;
    puVar3[1] = uStack_64;
    puVar3[2] = uStack_60;
    puVar3[3] = uStack_5c;
    func_0x014385cc(puVar3,0);
    uStack_40 = param_1;
    func_0x014385cc(&uStack_40,param_1);
    uStack_44 = param_2;
    func_0x014385cc(&uStack_44,param_2);
    uStack_34 = param_5;
    uStack_58 = 0xffffffff;
    uStack_3c = param_3;
    uStack_38 = param_4;
    func_0x035cc288(puVar3,&uStack_58,**(undefined4 **)(_UNK_032afe88 + 0x32afe68));
  }
  else {
    iVar1 = func_0x029540a4(0x1f13,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869c88(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

