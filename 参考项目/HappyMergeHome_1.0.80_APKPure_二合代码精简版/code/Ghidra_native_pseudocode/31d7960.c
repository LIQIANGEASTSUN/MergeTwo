
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e7960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [5];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 auStack_34 [4];
  
  pcVar2 = (char *)(_UNK_031e7b28 + 0x31e7980);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e7b2c + 0x31e7994));
    *pcVar2 = '\x01';
  }
  func_0x014e6ddc(auStack_78,0x50);
  iVar1 = func_0x02953fd4(0x32ff,0);
  if (iVar1 == 0) {
    func_0x0505644c(&uStack_88,0);
    puVar3 = (undefined8 *)((uint)auStack_78 | 4);
    *puVar3 = uStack_88;
    puVar3[1] = uStack_80;
    func_0x014385cc(puVar3,0);
    uStack_60 = param_1;
    func_0x014385cc(&uStack_60,param_1);
    uStack_5c = param_2;
    func_0x014385cc(&uStack_5c,param_2);
    auStack_58[0] = param_3;
    func_0x014385cc(auStack_58,param_3);
    uStack_48 = param_7;
    uStack_50 = param_5;
    uStack_44 = param_8;
    uStack_4c = param_6;
    uStack_40 = param_9;
    uStack_3c = param_10;
    uStack_38 = (undefined1)param_11;
    uStack_64 = param_12;
    func_0x014385cc(&uStack_64);
    auStack_34[0] = param_13;
    func_0x014385cc(auStack_34);
    auStack_78[0] = 0xffffffff;
    func_0x035c69f0(puVar3,auStack_78,**(undefined4 **)(_UNK_031e7b30 + 0x31e7b10));
  }
  else {
    iVar1 = func_0x029540a4(0x32ff,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

