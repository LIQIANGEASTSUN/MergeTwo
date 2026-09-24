
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c40310(int param_1)

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
  
  pcVar1 = (char *)(_UNK_02c40760 + 0x2c40328);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c40764 + 0x2c4033c));
    func_0x01438628(*(undefined4 *)(_UNK_02c40768 + 0x2c40348));
    func_0x01438628(*(undefined4 *)(_UNK_02c4076c + 0x2c40354));
    func_0x01438628(*(undefined4 *)(_UNK_02c40770 + 0x2c40360));
    func_0x01438628(*(undefined4 *)(_UNK_02c40774 + 0x2c4036c));
    func_0x01438628(*(undefined4 *)(_UNK_02c40778 + 0x2c40378));
    func_0x01438628(*(undefined4 *)(_UNK_02c4077c + 0x2c40384));
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
  FUN_02c3263c(iVar3,0);
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
      uVar5 = func_0x03b7661c(iVar4,iVar3 + -1,**(undefined4 **)(_UNK_02c40780 + 0x2c40660));
      if (*(int *)(**(int **)(_UNK_02c40784 + 0x2c40678) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c40788 + 0x2c40694));
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
      goto LAB_02c40700;
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
  func_0x03b75c84(iVar3,**(undefined4 **)(_UNK_02c4078c + 0x2c40590));
  if (*(int *)(**(int **)(_UNK_02c40790 + 0x2c405a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c40794 + 0x2c405c0));
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar4 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bda8ac(iVar3,uVar5,uVar8,**(undefined4 **)(_UNK_02c40798 + 0x2c40600),1,0);
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bf6cf8(iVar3,uVar5,0);
LAB_02c40700:
  if (*(int *)(**(int **)(_UNK_02c4079c + 0x2c4070c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x017d0b50(0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x017d41e4(iVar3,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  *(undefined1 *)(iVar3 + 0xa8) = 0;
  return;
}

