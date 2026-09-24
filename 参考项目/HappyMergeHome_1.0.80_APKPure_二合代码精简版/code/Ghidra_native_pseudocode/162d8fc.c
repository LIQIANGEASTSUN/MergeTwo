
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0163d8fc(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x169a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x169a,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    piVar3 = (int *)func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return piVar3;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  iVar1 = FUN_0163bb3c(param_1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  pcVar6 = (char *)(_UNK_01673d08 + 0x1673b40);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01673d0c + 0x1673b54),0);
    func_0x01438628(*(undefined4 *)(_UNK_01673d10 + 0x1673b60));
    func_0x01438628(*(undefined4 *)(_UNK_01673d14 + 0x1673b6c));
    func_0x01438628(*(undefined4 *)(_UNK_01673d18 + 0x1673b78));
    func_0x01438628(*(undefined4 *)(_UNK_01673d1c + 0x1673b84));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x169b,0);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_01673d20 + 0x1673be8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01673d24 + 0x1673c04));
      piVar3 = *(int **)(_UNK_01673d28 + 0x1673c18);
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar3;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xaa8);
      piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01673d2c + 0x1673c3c),1);
      if (piVar3 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar7 = func_0x014387a8(param_2,*(undefined4 *)(*piVar3 + 0x20));
      if (iVar7 == 0) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if (piVar3[3] == 0) {
        func_0x014388e8();
      }
      piVar3[4] = param_2;
      func_0x014385cc(piVar3 + 4,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar2 = (int *)func_0x02b0c90c(iVar1,uVar8,piVar3,0);
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_01673d30 + 0x1673cd4) + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
           (piVar3 = piVar2,
           *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
           **(int **)(_UNK_01673d30 + 0x1673cd4))) {
          piVar3 = (int *)0x0;
        }
      }
    }
    return piVar3;
  }
  iVar1 = func_0x029540a4(0x169b,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_028a75f0 + 0x28a7510);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028a75f4 + 0x28a7524),param_2,0);
    *pcVar6 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5);
  piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a75f8 + 0x28a75e0));
  return piVar3;
}

