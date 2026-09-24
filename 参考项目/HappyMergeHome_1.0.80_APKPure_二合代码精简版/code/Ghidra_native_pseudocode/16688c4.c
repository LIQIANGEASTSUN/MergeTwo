
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_016788c4(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x02953fd4(0x1608,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1608,0);
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
  iVar1 = FUN_016769c0(param_1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  iVar1 = func_0x0167d570(param_1);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_016a0564 + 0x16a0378);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_016a0568 + 0x16a038c),0);
      func_0x01438628(*(undefined4 *)(_UNK_016a056c + 0x16a0398));
      func_0x01438628(*(undefined4 *)(_UNK_016a0570 + 0x16a03a4));
      func_0x01438628(*(undefined4 *)(_UNK_016a0574 + 0x16a03b0));
      func_0x01438628(*(undefined4 *)(_UNK_016a0578 + 0x16a03bc));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x160a,0);
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
      if (param_2 != 0) {
        if (*(int *)(**(int **)(_UNK_016a057c + 0x16a0420) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016a0580 + 0x16a043c));
        if (*(int *)(**(int **)(_UNK_016a0584 + 0x16a0450) + 0x74) == 0) {
          func_0x014387a4();
        }
        piVar3 = (int *)FUN_01676670(0);
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar8 = (**(code **)(*piVar3 + 0x1a8))(piVar3,*(undefined4 *)(*piVar3 + 0x1ac));
        piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016a0588 + 0x16a04a0),1);
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
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_016a058c + 0x16a0530) + 0xb8);
          if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
             (piVar3 = piVar2,
             *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
             **(int **)(_UNK_016a058c + 0x16a0530))) {
            piVar3 = (int *)0x0;
          }
        }
      }
      return piVar3;
    }
    iVar1 = func_0x029540a4(0x160a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a67a8 + 0x28a66c8);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a67ac + 0x28a66dc),param_2,0);
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
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a67b0 + 0x28a6798));
    return piVar3;
  }
  pcVar6 = (char *)(_UNK_016acd1c + 0x16acb54);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016acd20 + 0x16acb68),0);
    func_0x01438628(*(undefined4 *)(_UNK_016acd24 + 0x16acb74));
    func_0x01438628(*(undefined4 *)(_UNK_016acd28 + 0x16acb80));
    func_0x01438628(*(undefined4 *)(_UNK_016acd2c + 0x16acb8c));
    func_0x01438628(*(undefined4 *)(_UNK_016acd30 + 0x16acb98));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1609,0);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_016acd34 + 0x16acbfc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016acd38 + 0x16acc18));
      piVar3 = *(int **)(_UNK_016acd3c + 0x16acc2c);
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar3;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xa30);
      piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016acd40 + 0x16acc50),1);
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
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_016acd44 + 0x16acce8) + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
           (piVar3 = piVar2,
           *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
           **(int **)(_UNK_016acd44 + 0x16acce8))) {
          piVar3 = (int *)0x0;
        }
      }
    }
    return piVar3;
  }
  iVar1 = func_0x029540a4(0x1609,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_028a66a0 + 0x28a65c0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028a66a4 + 0x28a65d4),param_2,0);
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
  piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a66a8 + 0x28a6690));
  return piVar3;
}

