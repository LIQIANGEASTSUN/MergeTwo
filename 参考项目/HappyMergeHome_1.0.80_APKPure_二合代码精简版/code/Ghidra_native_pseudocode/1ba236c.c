
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bb236c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01bb26a8 + 0x1bb2388);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bb26ac + 0x1bb239c));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26b0 + 0x1bb23a8));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26b4 + 0x1bb23b4));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26b8 + 0x1bb23c0));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26bc + 0x1bb23cc));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26c0 + 0x1bb23d8));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26c4 + 0x1bb23e4));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26c8 + 0x1bb23f0));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26cc + 0x1bb23fc));
    func_0x01438628(*(undefined4 *)(_UNK_01bb26d0 + 0x1bb2408));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2d5d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01bb26d4 + 0x1bb2464) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bb26d8 + 0x1bb2480));
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x020aa2f8(iVar1,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01bb26dc + 0x1bb24d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x02af43a8(uVar6,uVar7,0);
    if (*(int *)(**(int **)(_UNK_01bb26e0 + 0x1bb2508) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x0202346c(0);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = func_0x024f0530(iVar1,0,**(undefined4 **)(_UNK_01bb26e4 + 0x1bb2548));
    uVar6 = func_0x01524ffc(&uStack_1c,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar3,0x267,uVar6,**(undefined4 **)(_UNK_01bb26e8 + 0x1bb2584),0,0,0);
    if (*(int *)(**(int **)(_UNK_01bb26ec + 0x1bb25b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bb26f0 + 0x1bb25d4));
    piVar5 = *(int **)(_UNK_01bb26f4 + 0x1bb25e8);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1ac);
    piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01bb26f8 + 0x1bb260c),1);
    if (piVar5 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar7 = func_0x01438904();
      func_0x01438790(uVar7,0);
    }
    if (piVar5[3] == 0) {
      func_0x014388e8();
    }
    piVar5[4] = iVar2;
    func_0x014385cc(piVar5 + 4,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar6,piVar5,0);
    func_0x01bb26fc(param_1,iVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x2d5d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

