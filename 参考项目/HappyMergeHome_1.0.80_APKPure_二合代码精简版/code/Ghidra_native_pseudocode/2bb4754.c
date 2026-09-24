
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc4754(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar5 = (char *)(_UNK_02bc4c70 + 0x2bc4770);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c74 + 0x2bc4784));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c78 + 0x2bc4790));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c7c + 0x2bc479c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c80 + 0x2bc47a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c84 + 0x2bc47b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c88 + 0x2bc47c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c8c + 0x2bc47cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c90 + 0x2bc47d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c94 + 0x2bc47e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c98 + 0x2bc47f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4c9c + 0x2bc47fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4ca0 + 0x2bc4808));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4ca4 + 0x2bc4814));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4ca8 + 0x2bc4820));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2563,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2563,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bc4cac + 0x2bc4894));
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
  iVar8 = **(int **)(_UNK_02bc4cb0 + 0x2bc48f0);
  iVar1 = *(int *)(iVar8 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar8);
    iVar1 = *(int *)(iVar8 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bc4cb4 + 0x2bc4950) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bc4cb4 + 0x2bc4950));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bc4cb8 + 0x2bc4980),uVar9,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bc4cbc + 0x2bc4990));
  FUN_026f689c(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,6,0);
    func_0x014388e4();
    FUN_026f5f48(0,0xe,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,6,0);
    FUN_026f5f48(iVar1,0xe,0);
  }
  FUN_026f6014(iVar1,0,0);
  if (*(int *)(**(int **)(_UNK_02bc4cc0 + 0x2bc4a14) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_2c = param_1;
  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_02bc4cc4 + 0x2bc4a34));
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar8 + 0x28);
  uStack_28 = param_2;
  if ((iVar8 != 0) && (iVar6 = *(int *)(iVar8 + 0xc), 0 < iVar6)) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar1 + 8);
    func_0x014e67d4(iVar6,uVar9);
    if (extraout_r1 == 0) {
      iVar6 = func_0x014e5f78(*(undefined4 *)(iVar8 + 0xc),uVar9);
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      FUN_026f5f48(iVar1,iVar6,0);
    }
  }
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8);
  if (0 < iVar6) {
    iVar7 = 0;
    puVar10 = *(undefined4 **)(_UNK_02bc4cc8 + 0x2bc4ad8);
    puVar11 = *(undefined4 **)(_UNK_02bc4ccc + 0x2bc4ae0);
    do {
      iVar2 = func_0x014388d4(*puVar10);
      FUN_026f7e40(iVar2,0);
      if ((iVar8 == 0) || (*(int *)(iVar8 + 0xc) <= iVar7)) {
        if (iVar2 == 0) {
          func_0x014388e4();
          FUN_026f6b3c(0,0xffffffff,0);
          func_0x014388e4();
        }
        else {
          FUN_026f6b3c(iVar2,0xffffffff,0);
        }
        uVar9 = 1;
      }
      else {
        iVar3 = func_0x0152983c(iVar8,iVar7,**(undefined4 **)(_UNK_02bc4cd0 + 0x2bc4b14));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6b3c(iVar2,uVar9,0);
        iVar3 = func_0x0152983c(iVar8,iVar7,**(undefined4 **)(_UNK_02bc4cd4 + 0x2bc4b5c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
      }
      FUN_026f6bf8(iVar2,uVar9,0);
      iVar3 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b77610(iVar3,iVar2,*puVar11);
      iVar7 = iVar7 + 1;
    } while (iVar6 - iVar7 != 0);
  }
  iVar8 = iStack_2c;
  iVar6 = *(int *)(iStack_2c + 0x14);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar9 = uStack_28;
  func_0x03b72180(iVar6,uStack_28,iVar1,**(undefined4 **)(_UNK_02bc4cd8 + 0x2bc4c20));
  iVar1 = *(int *)(iVar8 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar9,**(undefined4 **)(_UNK_02bc4cdc + 0x2bc4c50));
  pcVar5 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x2537,0);
  if (iVar6 == 0) {
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar5 != (char *)0x0) && (-1 < *(int *)(pcVar5 + 0xc))) {
      iVar6 = 0;
      puVar10 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar5 + 0xc) <= iVar6) break;
        iVar7 = *(int *)(iVar1 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x03b780b0(iVar7,iVar6,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02bd0b60(iVar8,*(undefined4 *)(iVar7 + 8),iVar6,uVar9);
        pcVar5 = *(char **)(iVar1 + 0x10);
        iVar6 = iVar6 + 1;
      }
    }
  }
  else {
    iVar6 = func_0x029540a4(0x2537,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x028924d8(iVar6,iVar8,iVar1,uVar9);
  }
  return;
}

