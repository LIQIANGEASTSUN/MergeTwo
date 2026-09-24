
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01dae1e8(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x02953fd4(0x131e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x131e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_028a0a6c + 0x28a0978);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a0a70 + 0x28a098c),param_1,param_2,0);
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar5,0,0);
    piVar3 = (int *)func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028a0a74 + 0x28a0a5c));
    return piVar3;
  }
  if ((param_2 != 0) && (iVar1 = FUN_01da3ff8(param_1), iVar1 != 0)) {
    pcVar8 = (char *)(_UNK_01edb008 + 0x1edae1c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01edb00c + 0x1edae30),0);
      func_0x01438628(*(undefined4 *)(_UNK_01edb010 + 0x1edae3c));
      func_0x01438628(*(undefined4 *)(_UNK_01edb014 + 0x1edae48));
      func_0x01438628(*(undefined4 *)(_UNK_01edb018 + 0x1edae54));
      func_0x01438628(*(undefined4 *)(_UNK_01edb01c + 0x1edae60));
      *pcVar8 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x131f,0);
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
      if (param_2 != 0) {
        if (*(int *)(**(int **)(_UNK_01edb020 + 0x1edaec4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01edb024 + 0x1edaee0));
        if (*(int *)(**(int **)(_UNK_01edb028 + 0x1edaef4) + 0x74) == 0) {
          func_0x014387a4();
        }
        piVar3 = (int *)FUN_01da3ca8(0);
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar7 = (**(code **)(*piVar3 + 0x1a8))(piVar3,*(undefined4 *)(*piVar3 + 0x1ac));
        piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01edb02c + 0x1edaf44),1);
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar6 = func_0x014387a8(param_2,*(undefined4 *)(*piVar3 + 0x20));
        if (iVar6 == 0) {
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
        piVar2 = (int *)func_0x02b0c90c(iVar1,uVar7,piVar3,0);
        piVar3 = (int *)0x0;
        if (piVar2 != (int *)0x0) {
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_01edb030 + 0x1edafd4) + 0xb8);
          if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
             (piVar3 = piVar2,
             *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
             **(int **)(_UNK_01edb030 + 0x1edafd4))) {
            piVar3 = (int *)0x0;
          }
        }
      }
      return piVar3;
    }
    iVar1 = func_0x029540a4(0x131f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_028a094c + 0x28a086c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a0950 + 0x28a0880),param_2,0);
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar5);
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a0954 + 0x28a093c));
    return piVar3;
  }
  return (int *)0x0;
}

