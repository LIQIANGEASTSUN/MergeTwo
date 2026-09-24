
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae5990(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined3 uStack_1c;
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_01ae5ba0 + 0x1ae59ac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae5ba4 + 0x1ae59c0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5ba8 + 0x1ae59cc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5bac + 0x1ae59d8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5bb0 + 0x1ae59e4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5bb4 + 0x1ae59f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa491,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa491,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01ae5bb8 + 0x1ae5a50) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ae5bbc + 0x1ae5a6c));
  piVar6 = *(int **)(_UNK_01ae5bc0 + 0x1ae5a80);
  iVar4 = *piVar6;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x108);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01ae5bc4 + 0x1ae5aa4),2);
  _uStack_1c = CONCAT13(1,uStack_1c);
  iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_01ae5bc8 + 0x1ae5ac4),&uStack_19);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar4 != 0) && (iVar2 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if (piVar6[3] == 0) {
    func_0x014388e8();
  }
  piVar6[4] = iVar4;
  func_0x014385cc(piVar6 + 4,iVar4);
  if ((param_2 != 0) &&
     (iVar4 = func_0x014387a8(param_2,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
    uVar3 = func_0x01438904();
    func_0x01438790(uVar3,0);
  }
  if ((uint)piVar6[3] < 2) {
    func_0x014388e8();
  }
  piVar6[5] = param_2;
  func_0x014385cc(piVar6 + 5,param_2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b0c90c(iVar1,uVar7,piVar6,0);
  return;
}

