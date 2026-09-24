
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c41cdc(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar1 = (char *)(_UNK_02c4212c + 0x2c41cf4);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c42130 + 0x2c41d08));
    func_0x01438628(*(undefined4 *)(_UNK_02c42134 + 0x2c41d14));
    func_0x01438628(*(undefined4 *)(_UNK_02c42138 + 0x2c41d20));
    func_0x01438628(*(undefined4 *)(_UNK_02c4213c + 0x2c41d2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c42140 + 0x2c41d38));
    func_0x01438628(*(undefined4 *)(_UNK_02c42144 + 0x2c41d44));
    func_0x01438628(*(undefined4 *)(_UNK_02c42148 + 0x2c41d50));
    *pcVar1 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar2) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + uVar2 * 4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x11c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_026f7cd0(iVar3,*(int *)(iVar3 + 0x94) + 1,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar2) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + uVar2 * 4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02c32de4(iVar3,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar2) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + uVar2 * 4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x11c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar3 + 0x90);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (0 < *(int *)(iVar4 + 0xc)) {
    iVar4 = *(int *)(iVar3 + 0x90);
    iVar7 = *(int *)(iVar3 + 0x94);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (iVar7 <= *(int *)(iVar4 + 0xc)) {
      iVar4 = *(int *)(iVar3 + 0x90);
      iVar3 = *(int *)(iVar3 + 0x94);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x03b7661c(iVar4,iVar3 + -1,**(undefined4 **)(_UNK_02c4214c + 0x2c4202c));
      if (*(int *)(**(int **)(_UNK_02c42150 + 0x2c42044) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c42154 + 0x2c42060));
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      iVar4 = *(int *)(param_1 + 8);
      uVar8 = uVar9;
      if (iVar4 == 0) {
        func_0x014388e4();
        uVar8 = *(undefined4 *)(param_1 + 0xc);
      }
      uVar6 = *(undefined4 *)(iVar4 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_02bd2cf0(iVar3,uVar9,uVar5,1,0,uVar6,uVar8,1,0xffffffff,0,0);
      goto LAB_02c420cc;
    }
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar2) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + uVar2 * 4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x11c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x90);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x03b75c84(iVar3,**(undefined4 **)(_UNK_02c42158 + 0x2c41f5c));
  if (*(int *)(**(int **)(_UNK_02c4215c + 0x2c41f70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c42160 + 0x2c41f8c));
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bda8ac(iVar3,uVar5,uVar8,**(undefined4 **)(_UNK_02c42164 + 0x2c41fcc),1,0);
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bf6cf8(iVar3,uVar5,0);
LAB_02c420cc:
  if (*(int *)(**(int **)(_UNK_02c42168 + 0x2c420d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x032a3fc4(0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x032a74dc(iVar3,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  *(undefined1 *)(iVar3 + 0xa8) = 0;
  return;
}

