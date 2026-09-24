
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031eabc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_031ead0c + 0x31eabd8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031ead10 + 0x31eabec));
    func_0x01438628(*(undefined4 *)(_UNK_031ead14 + 0x31eabf8));
    func_0x01438628(*(undefined4 *)(_UNK_031ead18 + 0x31eac04));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3322,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3322,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return;
  }
  iVar1 = FUN_031e9ea8(param_1);
  iVar3 = FUN_031e6094(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_1c = *(undefined4 *)(iVar3 + 0x40);
  if (iVar1 == 0) {
    uVar5 = func_0x014387ac(**(undefined4 **)(_UNK_031ead24 + 0x31eace0),&uStack_1c);
    func_0x04f574bc(**(undefined4 **)(_UNK_031ead28 + 0x31ead00),uVar5,0);
  }
  else {
    puVar6 = *(undefined4 **)(_UNK_031ead1c + 0x31eac90);
    uStack_14 = uStack_1c;
    uVar5 = func_0x014387ac(*puVar6,&uStack_14);
    uStack_18 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = func_0x014387ac(*puVar6,&uStack_18);
    func_0x04f6b974(**(undefined4 **)(_UNK_031ead20 + 0x31eaccc),uVar5,uVar2,0);
  }
  return;
}

