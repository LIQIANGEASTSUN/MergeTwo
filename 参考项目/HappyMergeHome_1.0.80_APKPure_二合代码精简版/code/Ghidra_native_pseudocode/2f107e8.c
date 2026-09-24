
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02f207e8(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  iVar2 = func_0x02953fd4(0x133e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x133e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_028a11a8 + 0x28a10b4);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a11ac + 0x28a10c8),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
    piVar1 = (int *)func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028a11b0 + 0x28a1198));
    return piVar1;
  }
  if ((param_2 != 0) && (iVar2 = FUN_02f1f4a4(param_1), iVar2 != 0)) {
    pcVar8 = (char *)(_UNK_02f33d18 + 0x2f33b2c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f33d1c + 0x2f33b40),0);
      func_0x01438628(*(undefined4 *)(_UNK_02f33d20 + 0x2f33b4c));
      func_0x01438628(*(undefined4 *)(_UNK_02f33d24 + 0x2f33b58));
      func_0x01438628(*(undefined4 *)(_UNK_02f33d28 + 0x2f33b64));
      func_0x01438628(*(undefined4 *)(_UNK_02f33d2c + 0x2f33b70));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x133f,0);
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
      if (param_2 != 0) {
        if (*(int *)(**(int **)(_UNK_02f33d30 + 0x2f33bd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f33d34 + 0x2f33bf0));
        if (*(int *)(**(int **)(_UNK_02f33d38 + 0x2f33c04) + 0x74) == 0) {
          func_0x014387a4();
        }
        piVar1 = (int *)FUN_02f1f154(0);
        if (piVar1 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar7 = (**(code **)(*piVar1 + 0x1a8))(piVar1,*(undefined4 *)(*piVar1 + 0x1ac));
        piVar1 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f33d3c + 0x2f33c54),1);
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
        piVar3 = (int *)func_0x02b0c90c(iVar2,uVar7,piVar1,0);
        piVar1 = (int *)0x0;
        if (piVar3 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_02f33d40 + 0x2f33ce4) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar3 + 0xb8)) &&
             (piVar1 = piVar3,
             *(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) !=
             **(int **)(_UNK_02f33d40 + 0x2f33ce4))) {
            piVar1 = (int *)0x0;
          }
        }
      }
      return piVar1;
    }
    iVar2 = func_0x029540a4(0x133f,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_028a1088 + 0x28a0fa8);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a108c + 0x28a0fbc),param_2,0);
      *pcVar8 = '\x01';
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
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4);
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a1090 + 0x28a1078));
    return piVar1;
  }
  return (int *)0x0;
}

