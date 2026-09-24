
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e64228(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar2 = (char *)(_UNK_02e64438 + 0x2e64248);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e6443c + 0x2e64260));
    func_0x01438628(*(undefined4 *)(_UNK_02e64440 + 0x2e6426c));
    func_0x01438628(*(undefined4 *)(_UNK_02e64444 + 0x2e64278));
    func_0x01438628(*(undefined4 *)(_UNK_02e64448 + 0x2e64284));
    *pcVar2 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x6711,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_38,param_2,**(undefined4 **)(_UNK_02e6444c + 0x2e64338));
    puVar3 = *(undefined4 **)(_UNK_02e64450 + 0x2e6434c);
    while (iVar1 = func_0x04878f14(&uStack_38,*puVar3), iVar1 != 0) {
      FUN_02e64120(param_1,uStack_2c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10);
    }
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02e64454 + 0x2e643a4));
  }
  else {
    iVar1 = func_0x029540a4(0x6711,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028e9fb4(iVar1,param_1,param_2);
  }
  return;
}

