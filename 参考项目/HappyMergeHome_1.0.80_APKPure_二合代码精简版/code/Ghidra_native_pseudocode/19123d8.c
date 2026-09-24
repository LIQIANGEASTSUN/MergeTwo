
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_019223d8(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x02953fd4(0x16bc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x16bc,0);
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
  iVar1 = FUN_019204d4(param_1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  iVar1 = func_0x01927084(param_1);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_0194a078 + 0x1949e8c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0194a07c + 0x1949ea0),0);
      func_0x01438628(*(undefined4 *)(_UNK_0194a080 + 0x1949eac));
      func_0x01438628(*(undefined4 *)(_UNK_0194a084 + 0x1949eb8));
      func_0x01438628(*(undefined4 *)(_UNK_0194a088 + 0x1949ec4));
      func_0x01438628(*(undefined4 *)(_UNK_0194a08c + 0x1949ed0));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x16be,0);
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
      if (param_2 != 0) {
        if (*(int *)(**(int **)(_UNK_0194a090 + 0x1949f34) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0194a094 + 0x1949f50));
        if (*(int *)(**(int **)(_UNK_0194a098 + 0x1949f64) + 0x74) == 0) {
          func_0x014387a4();
        }
        piVar3 = (int *)FUN_01920184(0);
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar8 = (**(code **)(*piVar3 + 0x1a8))(piVar3,*(undefined4 *)(*piVar3 + 0x1ac));
        piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0194a09c + 0x1949fb4),1);
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
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_0194a0a0 + 0x194a044) + 0xb8);
          if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
             (piVar3 = piVar2,
             *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
             **(int **)(_UNK_0194a0a0 + 0x194a044))) {
            piVar3 = (int *)0x0;
          }
        }
      }
      return piVar3;
    }
    iVar1 = func_0x029540a4(0x16be,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a7a10 + 0x28a7930);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a7a14 + 0x28a7944),param_2,0);
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
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a7a18 + 0x28a7a00));
    return piVar3;
  }
  pcVar6 = (char *)(_UNK_01956830 + 0x1956668);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01956834 + 0x195667c),0);
    func_0x01438628(*(undefined4 *)(_UNK_01956838 + 0x1956688));
    func_0x01438628(*(undefined4 *)(_UNK_0195683c + 0x1956694));
    func_0x01438628(*(undefined4 *)(_UNK_01956840 + 0x19566a0));
    func_0x01438628(*(undefined4 *)(_UNK_01956844 + 0x19566ac));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x16bd,0);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_01956848 + 0x1956710) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0195684c + 0x195672c));
      piVar3 = *(int **)(_UNK_01956850 + 0x1956740);
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar3;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xad0);
      piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01956854 + 0x1956764),1);
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
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_01956858 + 0x19567fc) + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
           (piVar3 = piVar2,
           *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
           **(int **)(_UNK_01956858 + 0x19567fc))) {
          piVar3 = (int *)0x0;
        }
      }
    }
    return piVar3;
  }
  iVar1 = func_0x029540a4(0x16bd,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_028a7908 + 0x28a7828);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028a790c + 0x28a783c),param_2,0);
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
  piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a7910 + 0x28a78f8));
  return piVar3;
}

