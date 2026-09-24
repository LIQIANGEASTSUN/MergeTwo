
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_017d2524(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x02953fd4(0x1386,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1386,0);
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
  iVar1 = FUN_017d0ea0(param_1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  iVar1 = func_0x017d48ec(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x60) == '\0') {
    pcVar6 = (char *)(_UNK_017ed580 + 0x17ed394);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_017ed584 + 0x17ed3a8),0);
      func_0x01438628(*(undefined4 *)(_UNK_017ed588 + 0x17ed3b4));
      func_0x01438628(*(undefined4 *)(_UNK_017ed58c + 0x17ed3c0));
      func_0x01438628(*(undefined4 *)(_UNK_017ed590 + 0x17ed3cc));
      func_0x01438628(*(undefined4 *)(_UNK_017ed594 + 0x17ed3d8));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x02953fd4(5000,0);
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
      if (param_2 != 0) {
        if (*(int *)(**(int **)(_UNK_017ed598 + 0x17ed43c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017ed59c + 0x17ed458));
        if (*(int *)(**(int **)(_UNK_017ed5a0 + 0x17ed46c) + 0x74) == 0) {
          func_0x014387a4();
        }
        piVar3 = (int *)FUN_017d0b50(0);
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar8 = (**(code **)(*piVar3 + 0x1a8))(piVar3,*(undefined4 *)(*piVar3 + 0x1ac));
        piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_017ed5a4 + 0x17ed4bc),1);
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
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_017ed5a8 + 0x17ed54c) + 0xb8);
          if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
             (piVar3 = piVar2,
             *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
             **(int **)(_UNK_017ed5a8 + 0x17ed54c))) {
            piVar3 = (int *)0x0;
          }
        }
      }
      return piVar3;
    }
    iVar1 = func_0x029540a4(5000,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a1be4 + 0x28a1b04);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a1be8 + 0x28a1b18),param_2,0);
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
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a1bec + 0x28a1bd4));
    return piVar3;
  }
  pcVar6 = (char *)(_UNK_017f85a4 + 0x17f83dc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017f85a8 + 0x17f83f0),0);
    func_0x01438628(*(undefined4 *)(_UNK_017f85ac + 0x17f83fc));
    func_0x01438628(*(undefined4 *)(_UNK_017f85b0 + 0x17f8408));
    func_0x01438628(*(undefined4 *)(_UNK_017f85b4 + 0x17f8414));
    func_0x01438628(*(undefined4 *)(_UNK_017f85b8 + 0x17f8420));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(4999,0);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_017f85bc + 0x17f8484) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017f85c0 + 0x17f84a0));
      piVar3 = *(int **)(_UNK_017f85c4 + 0x17f84b4);
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar3;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x674);
      piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_017f85c8 + 0x17f84d8),1);
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
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_017f85cc + 0x17f8570) + 0xb8);
        if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
           (piVar3 = piVar2,
           *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
           **(int **)(_UNK_017f85cc + 0x17f8570))) {
          piVar3 = (int *)0x0;
        }
      }
    }
    return piVar3;
  }
  iVar1 = func_0x029540a4(4999,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_028a1adc + 0x28a19fc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028a1ae0 + 0x28a1a10),param_2,0);
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
  piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a1ae4 + 0x28a1acc));
  return piVar3;
}

