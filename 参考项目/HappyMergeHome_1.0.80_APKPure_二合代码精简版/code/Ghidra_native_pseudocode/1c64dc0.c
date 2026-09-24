
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c74dc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
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
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01c74fec + 0x1c74dd8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c74ff0 + 0x1c74dec));
    func_0x01438628(*(undefined4 *)(_UNK_01c74ff4 + 0x1c74df8));
    func_0x01438628(*(undefined4 *)(_UNK_01c74ff8 + 0x1c74e04));
    func_0x01438628(*(undefined4 *)(_UNK_01c74ffc + 0x1c74e10));
    func_0x01438628(*(undefined4 *)(_UNK_01c75000 + 0x1c74e1c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad56,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad56,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    uVar7 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return uVar7;
  }
  iVar1 = FUN_01c70aa4(param_1);
  if (iVar1 == 0) {
    uVar7 = **(undefined4 **)(**(int **)(_UNK_01c75004 + 0x1c74ed8) + 0x5c);
  }
  else {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x20) == '\0') {
      iVar1 = 0;
      iVar5 = 0;
      puVar6 = *(undefined4 **)(_UNK_01c75008 + 0x1c74ef8);
      while( true ) {
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar1) break;
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar6);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + (uint)*(byte *)(iVar2 + 0x28);
      }
      puVar6 = *(undefined4 **)(_UNK_01c75010 + 0x1c74f8c);
      iStack_1c = iVar5;
    }
    else {
      iVar1 = FUN_01c70aa4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar6 = *(undefined4 **)(_UNK_01c7500c + 0x1c74ec8);
      iStack_1c = *(int *)(iVar1 + 0x20);
    }
    uVar7 = func_0x014387ac(*puVar6,&iStack_1c);
    iVar1 = FUN_01c70aa4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = *(undefined4 *)(iVar1 + 0x20);
    uVar3 = func_0x014387ac(*puVar6,&uStack_20);
    uVar7 = func_0x014e95b8(**(undefined4 **)(_UNK_01c75014 + 0x1c74fe0),uVar7,uVar3,0);
  }
  return uVar7;
}

