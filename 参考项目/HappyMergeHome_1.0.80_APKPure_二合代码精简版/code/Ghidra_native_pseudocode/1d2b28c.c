
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3b28c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01d3b41c + 0x1d3b2ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3b420 + 0x1d3b2c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x604,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      iVar1 = FUN_01d3a9c0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0269f488(iVar1,*(int *)(iVar1 + 0x24) + param_2,0);
      iVar1 = FUN_01d3a9c0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0269f544(iVar1,*(int *)(iVar1 + 0x28) + param_2,0);
      if (*(int *)(**(int **)(_UNK_01d3b424 + 0x1d3b384) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x0202346c(0);
      iVar2 = FUN_01d3a9c0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uStack_1c = *(undefined4 *)(iVar2 + 0x24);
      uVar3 = func_0x01524ffc(&uStack_1c,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar1,599,uVar3,0,0,0,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x604,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

