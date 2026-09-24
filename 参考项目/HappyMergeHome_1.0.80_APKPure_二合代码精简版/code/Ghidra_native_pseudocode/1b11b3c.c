
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b21b3c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pcVar3 = (char *)(_UNK_01b21eb0 + 0x1b21b54);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b21eb4 + 0x1b21b68));
    func_0x01438628(*(undefined4 *)(_UNK_01b21eb8 + 0x1b21b74));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ebc + 0x1b21b80));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ec0 + 0x1b21b8c));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ec4 + 0x1b21b98));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ec8 + 0x1b21ba4));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ecc + 0x1b21bb0));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ed0 + 0x1b21bbc));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ed4 + 0x1b21bc8));
    func_0x01438628(*(undefined4 *)(_UNK_01b21ed8 + 0x1b21bd4));
    func_0x01438628(*(undefined4 *)(_UNK_01b21edc + 0x1b21be0));
    *pcVar3 = '\x01';
  }
  iVar8 = param_1[6];
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b21ee0 + 0x1b21bf8));
  func_0x024eeca8(iVar1,0);
  uVar4 = param_1[5];
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  iVar2 = FUN_01b188f4();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_01b1e6fc(iVar2);
  if (*(int *)(**(int **)(_UNK_01b21ee4 + 0x1b21c44) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b21ee8 + 0x1b21c60));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar2,0);
  uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01b21eec + 0x1b21c8c));
  func_0x024eed9c(uVar4,**(undefined4 **)(_UNK_01b21ef0 + 0x1b21ca0));
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  func_0x014385cc((undefined4 *)(iVar1 + 0x10),uVar4);
  if (*(int *)(**(int **)(_UNK_01b21ef4 + 0x1b21cc4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01b21ef8 + 0x1b21ce0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x03579aec(iVar2,**(undefined4 **)(_UNK_01b21f00 + 0x1b21d0c),
                          **(undefined4 **)(_UNK_01b21efc + 0x1b21d00));
  piVar5 = (int *)(iVar1 + 8);
  *piVar5 = iVar2;
  func_0x014385cc(piVar5);
  if (*piVar5 != 0) {
    func_0x01a01720(*piVar5,0);
  }
  iVar2 = FUN_01b188f4();
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_01b1e1cc(iVar2,uVar4,uVar6);
  uVar10 = param_1[7];
  uVar9 = param_1[8];
  uVar7 = param_1[9];
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01b21f04 + 0x1b21d84));
  func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(_UNK_01b21f08 + 0x1b21d98),0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  FUN_01b1fbc8(iVar8,uVar6,uVar10,uVar9,uVar7,uVar4);
  *param_1 = 0xfffffffe;
  (*(code *)&UNK_0505659c)(param_1 + 1,0);
  return;
}

