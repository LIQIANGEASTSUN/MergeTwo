
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fd3f74(void)

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
  
  pcVar3 = (char *)(_UNK_02fd4344 + 0x2fd3f84);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd4348 + 0x2fd3f98));
    func_0x01438628(*(undefined4 *)(_UNK_02fd434c + 0x2fd3fa4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4350 + 0x2fd3fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4354 + 0x2fd3fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4358 + 0x2fd3fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd435c + 0x2fd3fd4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4360 + 0x2fd3fe0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4364 + 0x2fd3fec));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4368 + 0x2fd3ff8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1565,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1565,0);
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
  piVar7 = *(int **)(_UNK_02fd436c + 0x2fd404c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02fc8d20();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_02fd18c4(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02fc8d20();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02fc9070(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02fd4370 + 0x2fd40cc) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_02fc8d20();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02fcfc38(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_02fd4374 + 0x2fd4154) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd4378 + 0x2fd4170));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02fd437c + 0x2fd4190));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_02fd4384 + 0x2fd420c);
          func_0x03b72000(0,0x46,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x47,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x48,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_02fd4380 + 0x2fd41c8);
          func_0x03b72000(iVar1,0x46,*puVar5);
          func_0x03b72000(iVar1,0x47,*puVar5);
          func_0x03b72000(iVar1,0x48,*puVar5);
        }
        func_0x03b72000(iVar1,0x49,**(undefined4 **)(_UNK_02fd4388 + 0x2fd424c));
        if (*(int *)(**(int **)(_UNK_02fd438c + 0x2fd4260) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd4390 + 0x2fd427c));
        piVar7 = (int *)FUN_02fc8d20();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_02fd4394 + 0x2fd42bc);
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

