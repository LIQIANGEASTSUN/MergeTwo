
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f48f8c(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
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
  
  pcVar3 = (char *)(_UNK_02f4935c + 0x2f48f9c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f49360 + 0x2f48fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02f49364 + 0x2f48fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02f49368 + 0x2f48fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4936c + 0x2f48fd4));
    func_0x01438628(*(undefined4 *)(_UNK_02f49370 + 0x2f48fe0));
    func_0x01438628(*(undefined4 *)(_UNK_02f49374 + 0x2f48fec));
    func_0x01438628(*(undefined4 *)(_UNK_02f49378 + 0x2f48ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4937c + 0x2f49004));
    func_0x01438628(*(undefined4 *)(_UNK_02f49380 + 0x2f49010));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x14b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x14b1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
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
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar7 = *(int **)(_UNK_02f49384 + 0x2f49064);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02f3dd38();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_02f468dc(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f3dd38();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f3e088(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02f49388 + 0x2f490e4) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_02f3dd38();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02f44c50(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_02f4938c + 0x2f4916c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f49390 + 0x2f49188));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f49394 + 0x2f491a8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_02f4939c + 0x2f49224);
          func_0x03b72000(0,0x3c,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x3d,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x3e,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_02f49398 + 0x2f491e0);
          func_0x03b72000(iVar1,0x3c,*puVar5);
          func_0x03b72000(iVar1,0x3d,*puVar5);
          func_0x03b72000(iVar1,0x3e,*puVar5);
        }
        func_0x03b72000(iVar1,0x3f,**(undefined4 **)(_UNK_02f493a0 + 0x2f49264));
        if (*(int *)(**(int **)(_UNK_02f493a4 + 0x2f49278) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f493a8 + 0x2f49294));
        piVar7 = (int *)FUN_02f3dd38();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_02f493ac + 0x2f492d4);
        iVar6 = *(int *)(iVar8 + 0x1c);
        if (iVar6 == 0) {
          func_0x014909d8(iVar8);
          iVar6 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar6 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar2,uVar4,0);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

