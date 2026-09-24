
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031e82e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_031e8560 + 0x31e8300);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e8564 + 0x31e8314));
    func_0x01438628(*(undefined4 *)(_UNK_031e8568 + 0x31e8320));
    func_0x01438628(*(undefined4 *)(_UNK_031e856c + 0x31e832c));
    func_0x01438628(*(undefined4 *)(_UNK_031e8570 + 0x31e8338));
    func_0x01438628(*(undefined4 *)(_UNK_031e8574 + 0x31e8344));
    func_0x01438628(*(undefined4 *)(_UNK_031e8578 + 0x31e8350));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = FUN_031e6094(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = FUN_031e6094(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026b156c(iVar1,*(int *)(iVar1 + 0x40) + param_2,0);
  iVar1 = FUN_031e6094(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x40);
  if (0 < param_2) {
    iVar1 = FUN_031e6094(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026b14b0(iVar1,*(int *)(iVar1 + 0x3c) + param_2,0);
    if (*(int *)(**(int **)(_UNK_031e857c + 0x31e8450) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x031e73e4();
    iVar3 = FUN_031e6094(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(undefined4 *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02f7c754(iVar1,uVar4,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_031e8580 + 0x31e84b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x02f810d0(iVar1,param_2,0,0,0);
    }
  }
  if (*(int *)(**(int **)(_UNK_031e8584 + 0x31e84f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031e8588 + 0x31e850c));
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031e858c + 0x31e8520));
  func_0x031e8c0c(iVar3,uVar2,uVar6);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_0362b194 + 0x362b0ac);
  if (*pcVar5 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_0362b198 + 0x362b0c0),iVar3,
                    **(undefined4 **)(_UNK_031e8590 + 0x31e8550));
    func_0x024f83cc(*(undefined4 *)(_UNK_0362b19c + 0x362b0cc));
    *pcVar5 = '\x01';
  }
  uVar2 = 0;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar1 + 0x14);
    uVar6 = *(undefined4 *)(iVar3 + 8);
    if (iVar7 == 0) {
      func_0x024f83d4();
    }
    iVar7 = func_0x04753c80(iVar7,uVar6,**(undefined4 **)(_UNK_0362b1a0 + 0x362b104));
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar1 + 0x14);
      if (iVar7 == 0) {
        func_0x024f83d4();
      }
      puVar8 = *(undefined4 **)(_UNK_0362b1a4 + 0x362b138);
      iVar7 = func_0x0475399c(iVar7,uVar6,*puVar8);
      if (iVar7 != 0) {
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x024f83d4();
        }
        iVar1 = func_0x0475399c(iVar1,uVar6,*puVar8);
        if (iVar1 == 0) {
          func_0x024f83d4();
        }
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),iVar3,*(undefined4 *)(iVar1 + 0x14));
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

