
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba6ca0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02ba7300 + 0x2ba6cb8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba7304 + 0x2ba6ccc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7308 + 0x2ba6cd8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba730c + 0x2ba6ce4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7310 + 0x2ba6cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7314 + 0x2ba6cfc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7318 + 0x2ba6d08));
    func_0x01438628(*(undefined4 *)(_UNK_02ba731c + 0x2ba6d14));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7320 + 0x2ba6d20));
    func_0x01438628(*(undefined4 *)(_UNK_02ba7324 + 0x2ba6d2c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfed,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    fStack_2c = fStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  piVar10 = *(int **)(_UNK_02ba7328 + 0x2ba6d88);
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar5 = *(int **)(_UNK_02ba732c + 0x2ba6da8);
  iVar6 = *piVar5;
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar5;
    }
    if (*(char *)(*(int *)(iVar6 + 0x5c) + 4) == '\0') {
      return;
    }
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar6 = *piVar5;
    }
    iVar3 = *(int *)(iVar6 + 0x74);
    *(undefined1 *)(iVar1 + 0x2d) = 0;
    if (iVar3 == 0) {
      func_0x014387a4();
      iVar6 = *piVar5;
    }
    *(undefined1 *)(*(int *)(iVar6 + 0x5c) + 4) = 0;
  }
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01c5144c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01c52550(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0xb6,0,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_02ba7330 + 0x2ba6e94);
    iVar1 = **(int **)(*piVar5 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02d05fbc(iVar1,0,0);
    iVar6 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x024eecb8(iVar1,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    piVar9 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (piVar9 = piVar2, *piVar2 != **(int **)(_UNK_02ba7334 + 0x2ba6f08))) {
      piVar9 = (int *)0x0;
    }
    uStack_3c = 1;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_34 = 0;
    func_0x02b647b4(iVar6,0xb6,piVar9,0);
    iVar6 = **(int **)(*piVar10 + 0x5c);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_40 = 0;
    iVar6 = func_0x02b6127c(iVar6,0xb6,0,0);
    if (iVar6 != 0) {
      piVar10 = *(int **)(_UNK_02ba7338 + 0x2ba6f88);
      uVar8 = **(undefined4 **)(*piVar5 + 0x5c);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024ef144(uVar8,0,0);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = **(int **)(*piVar5 + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x02d06f88(iVar6,0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024ef144(uVar8,0,0);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = *piVar5;
      goto LAB_02ba7010;
    }
  }
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b63a9c(iVar1,0xb7,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02ba733c + 0x2ba70d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba7340 + 0x2ba70f4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba7348 + 0x2ba7120),
                          **(undefined4 **)(_UNK_02ba7344 + 0x2ba7114));
  piVar5 = *(int **)(_UNK_02ba734c + 0x2ba7138);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(iVar1,0,0);
  if (iVar6 != 0) {
    return;
  }
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x014e94d8(iVar1,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x024efc2c(iVar6,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = (int *)func_0x024eecb8(iVar1,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  piVar9 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && (piVar9 = piVar2, *piVar2 != **(int **)(_UNK_02ba7350 + 0x2ba71e8)))
  {
    piVar9 = (int *)0x0;
  }
  uStack_3c = 1;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_34 = 0;
  func_0x02b647b4(iVar6,0xb7,piVar9,0);
  iVar6 = **(int **)(*piVar10 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_40 = 0;
  iVar6 = func_0x02b6127c(iVar6,0xb7,0,0);
  if (iVar6 == 0) {
    return;
  }
  piVar10 = *(int **)(_UNK_02ba7354 + 0x2ba7264);
  uVar8 = **(undefined4 **)(*piVar10 + 0x5c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = **(int **)(*piVar10 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02d06f88(iVar6,0);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = *piVar10;
LAB_02ba7010:
  iVar6 = **(int **)(iVar6 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02d06f88(iVar6,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024eecb8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f0474(&fStack_2c,iVar1,0);
  uStack_40 = 0;
  func_0x0157e8ec(uVar8,_UNK_02ba72fc - fStack_2c,0,0);
  return;
}

