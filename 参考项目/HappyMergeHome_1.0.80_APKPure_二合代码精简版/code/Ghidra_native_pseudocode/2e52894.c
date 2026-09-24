
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02e62894(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02e62a54 + 0x2e628b0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e62a58 + 0x2e628c4));
    func_0x01438628(*(undefined4 *)(_UNK_02e62a5c + 0x2e628d0));
    func_0x01438628(*(undefined4 *)(_UNK_02e62a60 + 0x2e628dc));
    func_0x01438628(*(undefined4 *)(_UNK_02e62a64 + 0x2e628e8));
    *pcVar4 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x02953fd4(0x6710,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_20,param_2,**(undefined4 **)(_UNK_02e62a68 + 0x2e62964));
    puVar3 = *(undefined4 **)(_UNK_02e62a6c + 0x2e62978);
    do {
      iVar1 = func_0x04878f14(&uStack_20,*puVar3);
      if (iVar1 == 0) {
        iVar1 = 6;
        goto LAB_02e629a8;
      }
      iVar1 = FUN_02e61d94(param_1,uStack_14);
    } while (iVar1 != 0);
    iVar1 = 5;
LAB_02e629a8:
    func_0x04878f10(&uStack_20,**(undefined4 **)(_UNK_02e62a70 + 0x2e629b4));
    uVar2 = 0;
    if (iVar1 != 5) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6710,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286b7bc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

