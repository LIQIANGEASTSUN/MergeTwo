
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01883a94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01883c94 + 0x1883aac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01883c98 + 0x1883ac0));
    func_0x01438628(*(undefined4 *)(_UNK_01883c9c + 0x1883acc));
    func_0x01438628(*(undefined4 *)(_UNK_01883ca0 + 0x1883ad8));
    func_0x01438628(*(undefined4 *)(_UNK_01883ca4 + 0x1883ae4));
    func_0x01438628(*(undefined4 *)(_UNK_01883ca8 + 0x1883af0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01883cac + 0x1883b04) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01883cb0 + 0x1883b20));
  piVar6 = *(int **)(_UNK_01883cb4 + 0x1883b34);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 100);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01883cb8 + 0x1883b58),2);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_01883cbc + 0x1883b78),&uStack_1c);
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
  iVar1 = FUN_01873864(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x026ce5d8(iVar1,0,0);
  return;
}

