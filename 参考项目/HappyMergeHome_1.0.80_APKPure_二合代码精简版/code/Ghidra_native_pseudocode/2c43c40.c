
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c53c40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02c53ec4 + 0x2c53c5c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c53ec8 + 0x2c53c70));
    func_0x01438628(*(undefined4 *)(_UNK_02c53ecc + 0x2c53c7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c53ed0 + 0x2c53c88));
    func_0x01438628(*(undefined4 *)(_UNK_02c53ed4 + 0x2c53c94));
    func_0x01438628(*(undefined4 *)(_UNK_02c53ed8 + 0x2c53ca0));
    func_0x01438628(*(undefined4 *)(_UNK_02c53edc + 0x2c53cac));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x02953fd4(0x5f37,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xcc);
    if (*(int *)(**(int **)(_UNK_02c53ee0 + 0x2c53d14) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x02c35d10(1);
    func_0x02c35d10(3);
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar2 = func_0x014e94d8(*(int *)(param_1 + 0x40),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x014e94e8(iVar2,0 < iVar1,0);
    }
    uVar5 = *(undefined4 *)(param_1 + 0xa4);
    if (*(int *)(**(int **)(_UNK_02c53ee4 + 0x2c53d80) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024ef144(uVar5,0,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xa4);
      if (*(int *)(**(int **)(_UNK_02c53ee8 + 0x2c53db8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c53eec + 0x2c53dd8));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uStack_1c = FUN_02be0a54(iVar3,0,0);
      uVar5 = func_0x01524ffc(&uStack_1c,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02032130(iVar2,uVar5,1,0);
    }
    func_0x02c55630(param_1);
    if ((0 < iVar1) && (param_2 != 0)) {
      iVar1 = func_0x014e94d8(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024ef984(iVar1,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02c53ef0 + 0x2c53e84) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c53ef4 + 0x2c53ea0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_02ba2b08(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5f37,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286c1e8(iVar1,param_1,param_2,0);
  }
  return;
}

