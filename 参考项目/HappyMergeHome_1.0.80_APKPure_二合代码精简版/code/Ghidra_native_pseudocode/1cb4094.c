
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc4094(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01cc4214 + 0x1cc40ac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc4218 + 0x1cc40c0));
    func_0x01438628(*(undefined4 *)(_UNK_01cc421c + 0x1cc40cc));
    func_0x01438628(*(undefined4 *)(_UNK_01cc4220 + 0x1cc40d8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x311f,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01cc4228 + 0x1cc4150) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x02c35d10(0x31,0);
      if (iVar1 != 0) {
        iVar3 = func_0x01cc4230(param_1);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = param_1[0x10];
        }
        if (iVar3 != 0 && iVar1 != 0) {
          iVar1 = FUN_01cc28c8(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_14 = *(undefined4 *)(iVar1 + 0x34);
          uVar2 = func_0x01524ffc(&uStack_14,0);
          iVar1 = param_1[0x10];
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_14 = *(undefined4 *)(iVar1 + 0x14);
          uVar4 = func_0x01524ffc(&uStack_14,0);
          uVar2 = func_0x024eee28(uVar2,**(undefined4 **)(_UNK_01cc422c + 0x1cc4208),uVar4,0);
          return uVar2;
        }
      }
    }
    uVar2 = **(undefined4 **)(_UNK_01cc4224 + 0x1cc4198);
  }
  else {
    iVar1 = func_0x029540a4(0x311f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286945c(iVar1,param_1,0);
  }
  return uVar2;
}

