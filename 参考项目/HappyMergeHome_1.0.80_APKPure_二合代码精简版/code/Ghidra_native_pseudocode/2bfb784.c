
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0b784(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar2 = (char *)(_UNK_02c0bb38 + 0x2c0b7a4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0bb3c + 0x2c0b7b8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e8c,0);
  if (iVar1 == 0) {
    if (param_2 != 0xffffffff) {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02c0bb40 + 0x2c0b858) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar3,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02c19954(iVar1,param_2,0);
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e67d4(param_2,uVar3);
        iVar4 = *(int *)(param_1 + 0x44);
        *(undefined4 *)(iVar1 + 0x1c) = extraout_r1;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        iVar1 = *(int *)(iVar4 + param_2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x014e5f78(param_2,uVar3);
        iVar4 = *(int *)(param_1 + 0x44);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar4 + param_2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        *(uint *)(iVar1 + 0x24) = param_2;
      }
    }
    if (param_3 != 0xffffffff) {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_3) {
        func_0x014388e8();
      }
      iVar1 = *(int *)(iVar1 + param_3 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02c0bb44 + 0x2c0b9e8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar3,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_3) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + param_3 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02c19954(iVar1,param_3,0);
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_3) {
          func_0x014388e8();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        iVar1 = *(int *)(iVar1 + param_3 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e67d4(param_3,uVar3);
        iVar4 = *(int *)(param_1 + 0x44);
        *(undefined4 *)(iVar1 + 0x1c) = extraout_r1_00;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= param_3) {
          func_0x014388e8();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        iVar1 = *(int *)(iVar4 + param_3 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x014e5f78(param_3,uVar3);
        iVar4 = *(int *)(param_1 + 0x44);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar4 + 0xc) <= param_3) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar4 + param_3 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        *(uint *)(iVar1 + 0x24) = param_3;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e8c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

