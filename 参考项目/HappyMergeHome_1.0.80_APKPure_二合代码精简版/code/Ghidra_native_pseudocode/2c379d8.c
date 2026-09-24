
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c479d8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02c47c28 + 0x2c479f0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c47c2c + 0x2c47a04));
    func_0x01438628(*(undefined4 *)(_UNK_02c47c30 + 0x2c47a10));
    func_0x01438628(*(undefined4 *)(_UNK_02c47c34 + 0x2c47a1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c47c38 + 0x2c47a28));
    func_0x01438628(*(undefined4 *)(_UNK_02c47c3c + 0x2c47a34));
    func_0x01438628(*(undefined4 *)(_UNK_02c47c40 + 0x2c47a40));
    func_0x01438628(*(undefined4 *)(_UNK_02c47c44 + 0x2c47a4c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c47c48 + 0x2c47a60) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c47c4c + 0x2c47a7c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02c47c50 + 0x2c47aa8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c47c54 + 0x2c47ac4));
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(&uStack_30,iVar4,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uStack_30,uStack_2c,uStack_28,1,0xffffffff,0xffffffff,0);
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  piVar10 = *(int **)(_UNK_02c47c58 + 0x2c47b58);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = *piVar10;
  uVar8 = *(undefined4 *)(iVar4 + 0xbc);
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar10;
  }
  iVar4 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xc);
  if (iVar4 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar10;
    }
    uVar6 = **(undefined4 **)(iVar2 + 0x5c);
    iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c47c5c + 0x2c47bac));
    func_0x0152e3ec(iVar4,uVar6,**(undefined4 **)(_UNK_02c47c60 + 0x2c47bcc),0);
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
    *piVar10 = iVar4;
    func_0x014385cc(piVar10,iVar4);
  }
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x030b1b2c(iVar1,uVar7,uVar8,uVar9,uVar5,0x3e99999a,iVar4,0);
  return;
}

