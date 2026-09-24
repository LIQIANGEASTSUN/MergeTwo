
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a00d80(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02a01394 + 0x2a00d94);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a01398 + 0x2a00da8));
    func_0x01438628(*(undefined4 *)(_UNK_02a0139c + 0x2a00db4));
    func_0x01438628(*(undefined4 *)(_UNK_02a013a0 + 0x2a00dc0));
    func_0x01438628(*(undefined4 *)(_UNK_02a013a4 + 0x2a00dcc));
    func_0x01438628(*(undefined4 *)(_UNK_02a013a8 + 0x2a00dd8));
    func_0x01438628(*(undefined4 *)(_UNK_02a013ac + 0x2a00de4));
    func_0x01438628(*(undefined4 *)(_UNK_02a013b0 + 0x2a00df0));
    func_0x01438628(*(undefined4 *)(_UNK_02a013b4 + 0x2a00dfc));
    func_0x01438628(*(undefined4 *)(_UNK_02a013b8 + 0x2a00e08));
    func_0x01438628(*(undefined4 *)(_UNK_02a013bc + 0x2a00e14));
    func_0x01438628(*(undefined4 *)(_UNK_02a013c0 + 0x2a00e20));
    func_0x01438628(*(undefined4 *)(_UNK_02a013c4 + 0x2a00e2c));
    func_0x01438628(*(undefined4 *)(_UNK_02a013c8 + 0x2a00e38));
    func_0x01438628(*(undefined4 *)(_UNK_02a013cc + 0x2a00e44));
    func_0x01438628(*(undefined4 *)(_UNK_02a013d0 + 0x2a00e50));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1a19,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a19,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_02a013d4 + 0x2a00ea8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x02c35d10(0x20,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar10 = *(int **)(_UNK_02a013d8 + 0x2a00edc);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_029fc490();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029fdcbc(iVar1,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_029fc490();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029fc754(iVar1);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02a013dc + 0x2a00f5c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a013e0 + 0x2a00f78));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02a013e4 + 0x2a00f98));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b72000(iVar1,0xb,**(undefined4 **)(_UNK_02a013e8 + 0x2a00fd0));
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_029fc490();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029fcfe8(iVar1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_0269e64c(iVar1,1,0);
  iVar1 = FUN_029fc490();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_029fdcbc(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_029fc490();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_029fc754(iVar1);
    if (iVar1 != 0) {
      piVar6 = *(int **)(_UNK_02a013ec + 0x2a01094);
      iVar1 = **(int **)(*piVar6 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b2f170(iVar1,0);
      if (iVar1 != 5) {
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b2f170(iVar1,0);
        if (iVar1 != 4) goto LAB_02a01150;
      }
      piVar6 = *(int **)(_UNK_02a013f0 + 0x2a010f4);
      iVar1 = **(int **)(*piVar6 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b63a9c(iVar1,0x1006,0,0);
        if (iVar1 == 0) {
          iVar1 = **(int **)(*piVar6 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_38._0_4_ = 0;
          func_0x02b6127c(iVar1,0x1006,0,0);
          return 0;
        }
      }
    }
  }
LAB_02a01150:
  piVar6 = *(int **)(_UNK_02a013f4 + 0x2a0115c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar11 = *(undefined4 **)(_UNK_02a013f8 + 0x2a01178);
  iVar1 = func_0x03b2c734(*puVar11);
  iVar8 = *piVar10;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
    iVar8 = *piVar10;
  }
  uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02a013fc + 0x2a011d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a01400 + 0x2a011f4));
    piVar7 = *(int **)(_UNK_02a01404 + 0x2a01208);
    iVar8 = *piVar7;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar7;
    }
    iVar9 = **(int **)(_UNK_02a01408 + 0x2a01228);
    iVar2 = *(int *)(iVar9 + 0x1c);
    uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x498);
    if (iVar2 == 0) {
      func_0x014909d8(iVar9);
      iVar2 = *(int *)(iVar9 + 0x1c);
    }
    iVar8 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x0149097c();
    }
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x0149097c();
    }
    uVar5 = **(undefined4 **)(iVar8 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b0c90c(iVar1,uVar3,uVar5,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(*puVar11);
    iVar8 = *piVar10;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar10;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x10);
    if (*(int *)(**(int **)(_UNK_02a0140c + 0x2a012f0) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02a0140c + 0x2a012f0));
    }
    uStack_38 = func_0x02aed6d8(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    func_0x02b768cc(iVar1,0,uVar3);
    uVar5 = 1;
  }
  return uVar5;
}

