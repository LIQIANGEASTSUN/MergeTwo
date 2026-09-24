
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb5dbc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bb615c + 0x2bb5dd8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb6160 + 0x2bb5dec));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6164 + 0x2bb5df8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6168 + 0x2bb5e04));
    func_0x01438628(*(undefined4 *)(_UNK_02bb616c + 0x2bb5e10));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6170 + 0x2bb5e1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6174 + 0x2bb5e28));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6178 + 0x2bb5e34));
    func_0x01438628(*(undefined4 *)(_UNK_02bb617c + 0x2bb5e40));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6180 + 0x2bb5e4c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb6184 + 0x2bb5e58));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2538,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2538,0);
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
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,param_2,**(undefined4 **)(_UNK_02bb6188 + 0x2bb5ecc));
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
  iVar6 = **(int **)(_UNK_02bb618c + 0x2bb5f28);
  iVar1 = *(int *)(iVar6 + 0x1c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar6);
    iVar1 = *(int *)(iVar6 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x0149097c();
  }
  uVar7 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02bb6190 + 0x2bb5f88) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02bb6190 + 0x2bb5f88));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_02bb6194 + 0x2bb5fb8),uVar7,0);
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb6198 + 0x2bb5fc8));
  FUN_026f689c(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
    FUN_026f5e8c(0,5,0);
    func_0x014388e4();
    FUN_026f5f48(0,2,0);
    func_0x014388e4();
  }
  else {
    FUN_026f5e8c(iVar1,5,0);
    FUN_026f5f48(iVar1,2,0);
  }
  iVar6 = 0;
  FUN_026f6014(iVar1,0,0);
  puVar8 = *(undefined4 **)(_UNK_02bb619c + 0x2bb6050);
  puVar9 = *(undefined4 **)(_UNK_02bb61a0 + 0x2bb6058);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) <= iVar6) break;
    iVar2 = func_0x014388d4(*puVar8);
    FUN_026f7e40(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
      FUN_026f6b3c(0,0xffffffff,0);
      func_0x014388e4();
    }
    else {
      FUN_026f6b3c(iVar2,0xffffffff,0);
    }
    FUN_026f6bf8(iVar2,1,0);
    iVar5 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x03b77610(iVar5,iVar2,*puVar9);
    iVar6 = iVar6 + 1;
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x03b72180(iVar6,param_2,iVar1,**(undefined4 **)(_UNK_02bb61a4 + 0x2bb6114));
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,param_2,**(undefined4 **)(_UNK_02bb61a8 + 0x2bb613c));
  pcVar4 = (char *)(_UNK_02bb5950 + 0x2bb5838);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb5954 + 0x2bb584c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5958 + 0x2bb5858));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x2537,0);
  if (iVar6 == 0) {
    if (iVar1 != 0) {
      pcVar4 = *(char **)(iVar1 + 0x10);
    }
    if ((iVar1 != 0 && pcVar4 != (char *)0x0) && (-1 < *(int *)(pcVar4 + 0xc))) {
      iVar6 = 0;
      puVar8 = *(undefined4 **)(_UNK_02bb595c + 0x2bb58e8);
      while( true ) {
        if (pcVar4 == (char *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(pcVar4 + 0xc) <= iVar6) break;
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar6,*puVar8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02bd0b60(param_1,*(undefined4 *)(iVar2 + 8),iVar6,param_2);
        pcVar4 = *(char **)(iVar1 + 0x10);
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
    func_0x028924d8(iVar6,param_1,iVar1,param_2);
  }
  return;
}

