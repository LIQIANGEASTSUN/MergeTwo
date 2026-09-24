
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3cb44(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_02c3cda4 + 0x2c3cb64);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3cda8 + 0x2c3cb78));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cdac + 0x2c3cb84));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cdb0 + 0x2c3cb90));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cdb4 + 0x2c3cb9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cdb8 + 0x2c3cba8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cdbc + 0x2c3cbb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cdc0 + 0x2c3cbc0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xe89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe89,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028952ac(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = func_0x02c3d8bc(param_1,param_2,param_3);
  if ((iVar1 == 0) || (uVar2 = 1, *(int *)(iVar1 + 0xc) < 1)) {
    iVar1 = func_0x02c3dcbc(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 2;
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    return 0;
  }
  uVar3 = func_0x024f0530(iVar1,0,**(undefined4 **)(_UNK_02c3cdc4 + 0x2c3cc74));
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  FUN_02c3aa18(param_1,2);
  if (*(int *)(**(int **)(_UNK_02c3cdc8 + 0x2c3cc98) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3cdcc + 0x2c3ccb4));
  piVar6 = *(int **)(_UNK_02c3cdd0 + 0x2c3ccc8);
  iVar4 = *piVar6;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar6;
  }
  uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x160);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c3cdd4 + 0x2c3ccec),1);
  uStack_1c = uVar2;
  iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02c3cdd8 + 0x2c3cd0c),&uStack_1c);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar4 != 0) && (iVar5 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0))
  {
    uVar2 = func_0x01438904();
    func_0x01438790(uVar2,0);
  }
  if (piVar6[3] == 0) {
    func_0x014388e8();
  }
  piVar6[4] = iVar4;
  func_0x014385cc(piVar6 + 4,iVar4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b0c90c(iVar1,uVar3,piVar6,0);
  return 1;
}

