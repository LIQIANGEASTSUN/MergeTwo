
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bcef38(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bcf3a8 + 0x2bcef54);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3ac + 0x2bcef68));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3b0 + 0x2bcef74));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3b4 + 0x2bcef80));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3b8 + 0x2bcef8c));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3bc + 0x2bcef98));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3c0 + 0x2bcefa4));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3c4 + 0x2bcefb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3c8 + 0x2bcefbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3cc + 0x2bcefc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3d0 + 0x2bcefd4));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3d4 + 0x2bcefe0));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3d8 + 0x2bcefec));
    func_0x01438628(*(undefined4 *)(_UNK_02bcf3dc + 0x2bceff8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x261a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x261a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bcf3e0 + 0x2bcf06c));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      return;
    }
  }
  iVar7 = **(int **)(_UNK_02bcf3e4 + 0x2bcf0c8);
  iVar1 = *(int *)(iVar7 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bcf3e8 + 0x2bcf128) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bcf3e8 + 0x2bcf128));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bcf3ec + 0x2bcf158),uVar8,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bcf3f0 + 0x2bcf168));
  FUN_026f689c(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02bcf3f4 + 0x2bcf184) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_2c = param_1;
  uStack_28 = param_2;
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bcf3f8 + 0x2bcf1a8));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar7 + 0x24);
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,5,0);
    func_0x014388e4();
    FUN_026f5f48(0,5,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,5,0);
    FUN_026f5f48(iVar1,5,0);
  }
  iVar6 = 0;
  FUN_026f6014(iVar1,5,0);
  puVar11 = *(undefined4 **)(_UNK_02bcf3fc + 0x2bcf238);
  puVar9 = *(undefined4 **)(_UNK_02bcf400 + 0x2bcf240);
  puVar10 = *(undefined4 **)(_UNK_02bcf404 + 0x2bcf248);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = iStack_2c;
    if (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) <= iVar6) break;
    iVar2 = func_0x014388d4(*puVar11);
    FUN_026f7e40(iVar2,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar7,iVar6,*puVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026f6b3c(iVar2,uVar8,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0152983c(iVar7,iVar6,*puVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar3 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026f6bf8(iVar2,uVar8,0);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar3,iVar2,*puVar10);
    iVar6 = iVar6 + 1;
  }
  iVar7 = *(int *)(iStack_2c + 0x14);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar8 = uStack_28;
  func_0x03b72180(iVar7,uStack_28,iVar1,**(undefined4 **)(_UNK_02bcf408 + 0x2bcf358));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar8,**(undefined4 **)(_UNK_02bcf40c + 0x2bcf388));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar7 = func_0x02953fd4(0x2537,0);
  if (iVar7 == 0) {
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar7 = 0;
      puVar9 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar7) break;
        iVar6 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02bd0b60(iVar2,*(undefined4 *)(iVar6 + 8),iVar7,uVar8);
        pcVar5 = *(char **)(iVar1 + 0x10);
        iVar7 = iVar7 + 1;
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x2537,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x028924d8(iVar7,iVar2,iVar1,uVar8);
  }
  return;
}

