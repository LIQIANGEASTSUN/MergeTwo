
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02fcae30(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
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
  
  iVar2 = func_0x02953fd4(0x158c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x158c,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    piVar1 = (int *)func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar4,0,0);
    return piVar1;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  iVar2 = FUN_02fc9070(param_1);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  pcVar7 = (char *)(_UNK_0300123c + 0x3001074);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03001240 + 0x3001088),0);
    func_0x01438628(*(undefined4 *)(_UNK_03001244 + 0x3001094));
    func_0x01438628(*(undefined4 *)(_UNK_03001248 + 0x30010a0));
    func_0x01438628(*(undefined4 *)(_UNK_0300124c + 0x30010ac));
    func_0x01438628(*(undefined4 *)(_UNK_03001250 + 0x30010b8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x158d,0);
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_03001254 + 0x300111c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03001258 + 0x3001138));
      piVar1 = *(int **)(_UNK_0300125c + 0x300114c);
      iVar6 = *piVar1;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar1;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x9b8);
      piVar1 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03001260 + 0x3001170),1);
      if (piVar1 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar6 = func_0x014387a8(param_2,*(undefined4 *)(*piVar1 + 0x20));
      if (iVar6 == 0) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar1[3] == 0) {
        func_0x014388e8();
      }
      piVar1[4] = param_2;
      func_0x014385cc(piVar1 + 4,param_2);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar3 = (int *)func_0x02b0c90c(iVar2,uVar8,piVar1,0);
      piVar1 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_03001264 + 0x3001208) + 0xb8);
        if ((uVar5 <= *(byte *)(*piVar3 + 0xb8)) &&
           (piVar1 = piVar3,
           *(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) !=
           **(int **)(_UNK_03001264 + 0x3001208))) {
          piVar1 = (int *)0x0;
        }
      }
    }
    return piVar1;
  }
  iVar2 = func_0x029540a4(0x158d,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_028a5a54 + 0x28a5974);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028a5a58 + 0x28a5988),param_2,0);
    *pcVar7 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_2,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4);
  piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a5a5c + 0x28a5a44));
  return piVar1;
}

