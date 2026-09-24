
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b6814(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_032b6a14 + 0x32b682c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b6a18 + 0x32b6840));
    func_0x01438628(*(undefined4 *)(_UNK_032b6a1c + 0x32b684c));
    func_0x01438628(*(undefined4 *)(_UNK_032b6a20 + 0x32b6858));
    func_0x01438628(*(undefined4 *)(_UNK_032b6a24 + 0x32b6864));
    func_0x01438628(*(undefined4 *)(_UNK_032b6a28 + 0x32b6870));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032b6a2c + 0x32b6884) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b6a30 + 0x32b68a0));
  piVar6 = *(int **)(_UNK_032b6a34 + 0x32b68b4);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 100);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_032b6a38 + 0x32b68d8),2);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_032b6a3c + 0x32b68f8),&uStack_1c);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar6[3] == 0) {
    func_0x014388e8();
  }
  piVar6[4] = iVar2;
  func_0x014385cc(piVar6 + 4,iVar2);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if ((uint)piVar6[3] < 2) {
    func_0x014388e8();
  }
  piVar6[5] = iVar2;
  func_0x014385cc(piVar6 + 5,iVar2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,uVar7,piVar6,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_032a7be8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026eea7c(iVar1,0,0);
  return;
}

