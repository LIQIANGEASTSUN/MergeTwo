
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e66ffc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar2 = (char *)(_UNK_02e67228 + 0x2e6701c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e6722c + 0x2e67034));
    func_0x01438628(*(undefined4 *)(_UNK_02e67230 + 0x2e67040));
    func_0x01438628(*(undefined4 *)(_UNK_02e67234 + 0x2e6704c));
    func_0x01438628(*(undefined4 *)(_UNK_02e67238 + 0x2e67058));
    *pcVar2 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x3f4,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_38,param_2,**(undefined4 **)(_UNK_02e6723c + 0x2e67114));
    puVar3 = *(undefined4 **)(_UNK_02e67240 + 0x2e6712c);
    while (iVar1 = func_0x04878f14(&uStack_38,*puVar3), iVar1 != 0) {
      func_0x02e67250(param_1,uStack_2c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,0);
    }
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02e67244 + 0x2e67194));
  }
  else {
    iVar1 = func_0x029540a4(0x3f4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02875e9c(iVar1,param_1,param_2);
  }
  return;
}

