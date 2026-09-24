
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016f3060(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_016f33e8 + 0x16f3070);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f33ec + 0x16f3084));
    func_0x01438628(*(undefined4 *)(_UNK_016f33f0 + 0x16f3090));
    func_0x01438628(*(undefined4 *)(_UNK_016f33f4 + 0x16f309c));
    func_0x01438628(*(undefined4 *)(_UNK_016f33f8 + 0x16f30a8));
    func_0x01438628(*(undefined4 *)(_UNK_016f33fc + 0x16f30b4));
    func_0x01438628(*(undefined4 *)(_UNK_016f3400 + 0x16f30c0));
    func_0x01438628(*(undefined4 *)(_UNK_016f3404 + 0x16f30cc));
    func_0x01438628(*(undefined4 *)(_UNK_016f3408 + 0x16f30d8));
    func_0x01438628(*(undefined4 *)(_UNK_016f340c + 0x16f30e4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1864,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1864,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
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
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar5 = *(int **)(_UNK_016f3410 + 0x16f3138);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_016ea198();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_016f0b18(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016ea198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_016ea4e8(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_016f3414 + 0x16f31b8) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_016ea198();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_016ef2ac(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026f1898(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_016f3418 + 0x16f3240) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f341c + 0x16f325c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_016f3420 + 0x16f327c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          func_0x024f05a8(0,0x19,**(undefined4 **)(_UNK_016f3428 + 0x16f32d4));
          func_0x014388e4();
        }
        else {
          func_0x024f05a8(iVar1,0x19,**(undefined4 **)(_UNK_016f3424 + 0x16f32b0));
        }
        func_0x024f05a8(iVar1,0x1a,**(undefined4 **)(_UNK_016f342c + 0x16f32f0));
        if (*(int *)(**(int **)(_UNK_016f3430 + 0x16f3304) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f3434 + 0x16f3320));
        piVar5 = (int *)FUN_016ea198();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_016f3438 + 0x16f3360);
        iVar7 = *(int *)(iVar6 + 0x1c);
        if (iVar7 == 0) {
          func_0x014909d8(iVar6);
          iVar7 = *(int *)(iVar6 + 0x1c);
        }
        iVar7 = *(int *)(iVar7 + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar7 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar4,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

