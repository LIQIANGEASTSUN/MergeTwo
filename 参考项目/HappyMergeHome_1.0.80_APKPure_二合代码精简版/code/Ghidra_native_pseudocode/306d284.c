
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0307d284(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  pcVar2 = (char *)(_UNK_0307d3c8 + 0x307d2a4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307d3cc + 0x307d2bc));
    *pcVar2 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  iVar1 = func_0x02953fd4(0x7557,0);
  if (iVar1 == 0) {
    func_0x0505644c(&uStack_70,0);
    puVar3 = (undefined4 *)((uint)&uStack_60 | 4);
    *puVar3 = uStack_70;
    puVar3[1] = uStack_6c;
    puVar3[2] = uStack_68;
    puVar3[3] = uStack_64;
    func_0x014385cc(puVar3,0);
    uStack_4c = param_1;
    func_0x014385cc(&uStack_4c,param_1);
    uStack_38 = param_6;
    uStack_3c = param_5;
    uStack_60 = 0xffffffff;
    uStack_48 = param_2;
    uStack_44 = param_3;
    uStack_40 = param_4;
    func_0x035cb108(puVar3,&uStack_60,**(undefined4 **)(_UNK_0307d3d0 + 0x307d3b0));
  }
  else {
    iVar1 = func_0x029540a4(0x7557,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02914378(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

