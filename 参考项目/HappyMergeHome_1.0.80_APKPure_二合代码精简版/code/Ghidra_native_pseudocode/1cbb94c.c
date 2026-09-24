
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ccb94c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01ccbabc + 0x1ccb964);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccbac0 + 0x1ccb978));
    func_0x01438628(*(undefined4 *)(_UNK_01ccbac4 + 0x1ccb984));
    func_0x01438628(*(undefined4 *)(_UNK_01ccbac8 + 0x1ccb990));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafd4,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01ccbad0 + 0x1ccba08) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x02c35d10(0x4c,0);
      if ((iVar1 != 0) && (iVar1 = func_0x01ccceec(param_1), iVar1 != 0)) {
        iVar1 = func_0x01ccc5a4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_14 = *(undefined4 *)(iVar1 + 0x34);
        uVar2 = func_0x01524ffc(&uStack_14,0);
        uStack_14 = func_0x01cccf58(param_1);
        uVar3 = func_0x01524ffc(&uStack_14,0);
        uVar2 = func_0x024eee28(uVar2,**(undefined4 **)(_UNK_01ccbad4 + 0x1ccba9c),uVar3,0);
        return uVar2;
      }
    }
    uVar2 = **(undefined4 **)(_UNK_01ccbacc + 0x1ccbab4);
  }
  else {
    iVar1 = func_0x029540a4(0xafd4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286945c(iVar1,param_1,0);
  }
  return uVar2;
}

