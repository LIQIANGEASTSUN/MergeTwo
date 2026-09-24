
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc4ce0(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02bc51fc + 0x2bc4cfc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc5200 + 0x2bc4d10));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5204 + 0x2bc4d1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5208 + 0x2bc4d28));
    func_0x01438628(*(undefined4 *)(_UNK_02bc520c + 0x2bc4d34));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5210 + 0x2bc4d40));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5214 + 0x2bc4d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5218 + 0x2bc4d58));
    func_0x01438628(*(undefined4 *)(_UNK_02bc521c + 0x2bc4d64));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5220 + 0x2bc4d70));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5224 + 0x2bc4d7c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5228 + 0x2bc4d88));
    func_0x01438628(*(undefined4 *)(_UNK_02bc522c + 0x2bc4d94));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5230 + 0x2bc4da0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc5234 + 0x2bc4dac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2566,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2566,0);
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
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bc5238 + 0x2bc4e20));
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
  iVar8 = **(int **)(_UNK_02bc523c + 0x2bc4e7c);
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
  if (*(int *)(**(int **)(_UNK_02bc5240 + 0x2bc4edc) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bc5240 + 0x2bc4edc));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bc5244 + 0x2bc4f0c),uVar9,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bc5248 + 0x2bc4f1c));
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
  if (*(int *)(**(int **)(_UNK_02bc524c + 0x2bc4fa0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_2c = param_1;
  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_02bc5250 + 0x2bc4fc0));
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
    puVar10 = *(undefined4 **)(_UNK_02bc5254 + 0x2bc5064);
    puVar11 = *(undefined4 **)(_UNK_02bc5258 + 0x2bc506c);
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
        iVar3 = func_0x0152983c(iVar8,iVar7,**(undefined4 **)(_UNK_02bc525c + 0x2bc50a0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_026f6b3c(iVar2,uVar9,0);
        iVar3 = func_0x0152983c(iVar8,iVar7,**(undefined4 **)(_UNK_02bc5260 + 0x2bc50e8));
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
  func_0x03b72180(iVar6,uStack_28,iVar1,**(undefined4 **)(_UNK_02bc5264 + 0x2bc51ac));
  iVar1 = *(int *)(iVar8 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,uVar9,**(undefined4 **)(_UNK_02bc5268 + 0x2bc51dc));
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

