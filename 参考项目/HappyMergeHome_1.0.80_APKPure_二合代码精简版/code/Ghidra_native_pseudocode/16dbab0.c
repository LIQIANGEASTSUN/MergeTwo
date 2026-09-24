
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_016ebab0(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x02953fd4(0x187f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x187f,0);
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
  iVar1 = FUN_016ea4e8(param_1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  pcVar6 = (char *)(_UNK_0170c3cc + 0x170c204);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0170c3d0 + 0x170c218),0);
    func_0x01438628(*(undefined4 *)(_UNK_0170c3d4 + 0x170c224));
    func_0x01438628(*(undefined4 *)(_UNK_0170c3d8 + 0x170c230));
    func_0x01438628(*(undefined4 *)(_UNK_0170c3dc + 0x170c23c));
    func_0x01438628(*(undefined4 *)(_UNK_0170c3e0 + 0x170c248));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1880,0);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_0170c3e4 + 0x170c2ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0170c3e8 + 0x170c2c8));
      piVar3 = *(int **)(_UNK_0170c3ec + 0x170c2dc);
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar3;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x724);
      piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0170c3f0 + 0x170c300),1);
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
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_0170c3f4 + 0x170c398) + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
           (piVar3 = piVar2,
           *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
           **(int **)(_UNK_0170c3f4 + 0x170c398))) {
          piVar3 = (int *)0x0;
        }
      }
    }
    return piVar3;
  }
  iVar1 = func_0x029540a4(0x1880,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_028aa9d4 + 0x28aa8f4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028aa9d8 + 0x28aa908),param_2,0);
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
  piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028aa9dc + 0x28aa9c4));
  return piVar3;
}

