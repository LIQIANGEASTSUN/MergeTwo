
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7f858(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  pcVar4 = (char *)(_UNK_01c7fd10 + 0x1c7f870);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd14 + 0x1c7f884));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd18 + 0x1c7f890));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd1c + 0x1c7f89c));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd20 + 0x1c7f8a8));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd24 + 0x1c7f8b4));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd28 + 0x1c7f8c0));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd2c + 0x1c7f8cc));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd30 + 0x1c7f8d8));
    func_0x01438628(*(undefined4 *)(_UNK_01c7fd34 + 0x1c7f8e4));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c7fd38 + 0x1c7f8f8));
  func_0x024eed9c(uVar1,**(undefined4 **)(_UNK_01c7fd3c + 0x1c7f90c));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  func_0x014385cc((undefined4 *)(param_1 + 0x40),uVar1);
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01c7fd40 + 0x1c7f930));
  func_0x024f0510(iVar2,**(undefined4 **)(_UNK_01c7fd44 + 0x1c7f944));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  piVar7 = *(int **)(_UNK_01c7fd48 + 0x1c7f978);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  iVar5 = *piVar7;
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar6 + uVar3 * 4 + 0x10) = 10;
  }
  else {
    func_0x024f0520(iVar2,10,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 10;
  }
  else {
    func_0x024f0520(iVar2,10,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 10;
  }
  else {
    func_0x024f0520(iVar2,10,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 8;
  }
  else {
    func_0x024f0520(iVar2,8,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 8;
  }
  else {
    func_0x024f0520(iVar2,8,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 6;
  }
  else {
    func_0x024f0520(iVar2,6,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 5;
  }
  else {
    func_0x024f0520(iVar2,5,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  iVar6 = *piVar7;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar3 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar5 + uVar3 * 4 + 0x10) = 3;
  }
  else {
    func_0x024f0520(iVar2,3,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
  }
  *(int *)(param_1 + 0x48) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x48),iVar2);
  *(undefined4 *)(param_1 + 0x4c) = **(undefined4 **)(_UNK_01c7fd4c + 0x1c7fc7c);
  func_0x014385cc();
  if (*(int *)(**(int **)(_UNK_01c7fd50 + 0x1c7fc94) + 0x74) == 0) {
    func_0x014387a4();
  }
  func_0x029f4038(param_1,0);
  uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c7fd54 + 0x1c7fcc0));
  func_0x0152e3ec(uVar1,param_1,**(undefined4 **)(_UNK_01c7fd58 + 0x1c7fcdc),0);
  func_0x02e596a8(0x41200000,uVar1,0,1,0,0,0);
  return;
}

