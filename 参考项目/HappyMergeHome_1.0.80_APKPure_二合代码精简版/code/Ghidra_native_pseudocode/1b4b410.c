
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5b410(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_01b5b6c4 + 0x1b5b430);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5b6c8 + 0x1b5b444));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b6cc + 0x1b5b450));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b6d0 + 0x1b5b45c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b6d4 + 0x1b5b468));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b6d8 + 0x1b5b474));
    func_0x01438628(*(undefined4 *)(_UNK_01b5b6dc + 0x1b5b480));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x606,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b572ec(param_1);
    if ((0 < param_2) && (iVar1 != 0)) {
      iVar1 = FUN_01b572ec(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026befb0(iVar1,*(int *)(iVar1 + 0x28) + param_2,0);
      if (*(int *)(**(int **)(_UNK_01b5b6e0 + 0x1b5b528) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x0202346c(0);
      iVar2 = FUN_01b572ec(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02026724(iVar1,0xbb9,param_2,0,iVar2,iVar2 >> 0x1f,0xe7,0,0,0,0,0,0,0,0);
      if (*(int *)(**(int **)(_UNK_01b5b6e4 + 0x1b5b5c4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5b6e8 + 0x1b5b5e0));
      piVar5 = *(int **)(_UNK_01b5b6ec + 0x1b5b5f4);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x368);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01b5b6f0 + 0x1b5b618),1);
      iStack_1c = param_2;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_01b5b6f4 + 0x1b5b638),&iStack_1c);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
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
    }
  }
  else {
    iVar1 = func_0x029540a4(0x606,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

