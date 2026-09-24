
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_03005df8(undefined4 param_1,int param_2)

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
  
  iVar2 = func_0x02953fd4(0x15ae,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x15ae,0);
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
  iVar2 = FUN_03003ef4(param_1);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar2 = func_0x0300aaa4(param_1);
  if (iVar2 == 0) {
    pcVar7 = (char *)(_UNK_0302da98 + 0x302d8ac);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0302da9c + 0x302d8c0),0);
      func_0x01438628(*(undefined4 *)(_UNK_0302daa0 + 0x302d8cc));
      func_0x01438628(*(undefined4 *)(_UNK_0302daa4 + 0x302d8d8));
      func_0x01438628(*(undefined4 *)(_UNK_0302daa8 + 0x302d8e4));
      func_0x01438628(*(undefined4 *)(_UNK_0302daac + 0x302d8f0));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x15b0,0);
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
      if (param_2 != 0) {
        if (*(int *)(**(int **)(_UNK_0302dab0 + 0x302d954) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0302dab4 + 0x302d970));
        if (*(int *)(**(int **)(_UNK_0302dab8 + 0x302d984) + 0x74) == 0) {
          func_0x014387a4();
        }
        piVar1 = (int *)FUN_03003ba4(0);
        if (piVar1 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar8 = (**(code **)(*piVar1 + 0x1a8))(piVar1,*(undefined4 *)(*piVar1 + 0x1ac));
        piVar1 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0302dabc + 0x302d9d4),1);
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
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_0302dac0 + 0x302da64) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar3 + 0xb8)) &&
             (piVar1 = piVar3,
             *(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) !=
             **(int **)(_UNK_0302dac0 + 0x302da64))) {
            piVar1 = (int *)0x0;
          }
        }
      }
      return piVar1;
    }
    iVar2 = func_0x029540a4(0x15b0,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a5e74 + 0x28a5d94);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a5e78 + 0x28a5da8),param_2,0);
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
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a5e7c + 0x28a5e64));
    return piVar1;
  }
  pcVar7 = (char *)(_UNK_0303a250 + 0x303a088);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0303a254 + 0x303a09c),0);
    func_0x01438628(*(undefined4 *)(_UNK_0303a258 + 0x303a0a8));
    func_0x01438628(*(undefined4 *)(_UNK_0303a25c + 0x303a0b4));
    func_0x01438628(*(undefined4 *)(_UNK_0303a260 + 0x303a0c0));
    func_0x01438628(*(undefined4 *)(_UNK_0303a264 + 0x303a0cc));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x15af,0);
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_0303a268 + 0x303a130) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0303a26c + 0x303a14c));
      piVar1 = *(int **)(_UNK_0303a270 + 0x303a160);
      iVar6 = *piVar1;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar1;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x9e0);
      piVar1 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0303a274 + 0x303a184),1);
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
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_0303a278 + 0x303a21c) + 0xb8);
        if ((uVar5 <= *(byte *)(*piVar3 + 0xb8)) &&
           (piVar1 = piVar3,
           *(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) !=
           **(int **)(_UNK_0303a278 + 0x303a21c))) {
          piVar1 = (int *)0x0;
        }
      }
    }
    return piVar1;
  }
  iVar2 = func_0x029540a4(0x15af,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_028a5d6c + 0x28a5c8c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028a5d70 + 0x28a5ca0),param_2,0);
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
  piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a5d74 + 0x28a5d5c));
  return piVar1;
}

