
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c702b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02c70458 + 0x2c702cc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c7045c + 0x2c702e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c70460 + 0x2c702ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6019,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,1,0);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(param_1 + 0x50);
    iVar4 = *(int *)(param_2 + 0xd0);
    iStack_1c = iVar4;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0 < iVar4,0);
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = func_0x01524ffc(&iStack_1c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02032130(iVar1,uVar2,1,0);
    FUN_02c6dff0(param_1,0,**(undefined4 **)(_UNK_02c70464 + 0x2c7041c),0,0);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0202e208(iVar1,**(undefined4 **)(_UNK_02c70468 + 0x2c70448),0);
  }
  else {
    iVar1 = func_0x029540a4(0x6019,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

