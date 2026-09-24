
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c43440(int param_1)

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
  
  pcVar1 = (char *)(_UNK_02c43890 + 0x2c43458);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c43894 + 0x2c4346c));
    func_0x01438628(*(undefined4 *)(_UNK_02c43898 + 0x2c43478));
    func_0x01438628(*(undefined4 *)(_UNK_02c4389c + 0x2c43484));
    func_0x01438628(*(undefined4 *)(_UNK_02c438a0 + 0x2c43490));
    func_0x01438628(*(undefined4 *)(_UNK_02c438a4 + 0x2c4349c));
    func_0x01438628(*(undefined4 *)(_UNK_02c438a8 + 0x2c434a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c438ac + 0x2c434b4));
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
  FUN_02c3358c(iVar3,0);
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
      uVar5 = func_0x03b7661c(iVar4,iVar3 + -1,**(undefined4 **)(_UNK_02c438b0 + 0x2c43790));
      if (*(int *)(**(int **)(_UNK_02c438b4 + 0x2c437a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c438b8 + 0x2c437c4));
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
      goto LAB_02c43830;
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
  func_0x03b75c84(iVar3,**(undefined4 **)(_UNK_02c438bc + 0x2c436c0));
  if (*(int *)(**(int **)(_UNK_02c438c0 + 0x2c436d4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c438c4 + 0x2c436f0));
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bda8ac(iVar3,uVar5,uVar8,**(undefined4 **)(_UNK_02c438c8 + 0x2c43730),1,0);
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bf6cf8(iVar3,uVar5,0);
LAB_02c43830:
  if (*(int *)(**(int **)(_UNK_02c438cc + 0x2c4383c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x018f5b04(0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x018f901c(iVar3,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  *(undefined1 *)(iVar3 + 0xa8) = 0;
  return;
}

