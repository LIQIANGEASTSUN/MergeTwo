
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba51ac(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02ba5920 + 0x2ba51c4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba5924 + 0x2ba51d8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5928 + 0x2ba51e4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba592c + 0x2ba51f0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5930 + 0x2ba51fc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5934 + 0x2ba5208));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5938 + 0x2ba5214));
    func_0x01438628(*(undefined4 *)(_UNK_02ba593c + 0x2ba5220));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5940 + 0x2ba522c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5944 + 0x2ba5238));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5948 + 0x2ba5244));
    func_0x01438628(*(undefined4 *)(_UNK_02ba594c + 0x2ba5250));
    func_0x01438628(*(undefined4 *)(_UNK_02ba5950 + 0x2ba525c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x65a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x65a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_30 = 0.0;
    func_0x024f56c0(&fStack_48,0,0);
    fStack_30 = fStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&fStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&fStack_30,param_1,0);
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
    func_0x024f56d0(iVar6,uVar8,&fStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x02b3dda0(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b495f4(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02ba5954 + 0x2ba52e4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba5958 + 0x2ba5300));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba5960 + 0x2ba532c),
                          **(undefined4 **)(_UNK_02ba595c + 0x2ba5320));
  piVar11 = *(int **)(_UNK_02ba5964 + 0x2ba5344);
  iVar6 = **(int **)(*piVar11 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b63a9c(iVar6,0xae,0,0);
  if (iVar6 == 0) {
    piVar12 = *(int **)(_UNK_02ba5968 + 0x2ba5380);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x024efb9c(iVar1,0);
    if (iVar6 != 0) {
      iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02ba596c + 0x2ba53b0));
      func_0x024eed9c(iVar6,**(undefined4 **)(_UNK_02ba5970 + 0x2ba53c4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024eecb8(iVar1,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar6 + 8);
      uVar9 = *(uint *)(iVar6 + 0xc);
      piVar3 = *(int **)(_UNK_02ba5974 + 0x2ba5414);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      iVar13 = *piVar3;
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (uVar9 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar9 + 1;
        puVar2 = (undefined4 *)(iVar5 + uVar9 * 4 + 0x10);
        *puVar2 = uVar8;
        func_0x014385cc(puVar2,uVar8);
      }
      else {
        func_0x0152874c(iVar6,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar6 = **(int **)(*piVar11 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar3 = (int *)func_0x024eecb8(iVar1,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      piVar10 = (int *)0x0;
      if ((piVar3 != (int *)0x0) &&
         (piVar10 = piVar3, *piVar3 != **(int **)(_UNK_02ba5978 + 0x2ba54ac))) {
        piVar10 = (int *)0x0;
      }
      uStack_3c = 1;
      iStack_38 = 0;
      uStack_40 = 0;
      uStack_34 = 0;
      func_0x02b647b4(iVar6,0xae,piVar10,0);
      iVar6 = **(int **)(*piVar11 + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_40 = 0;
      iVar6 = func_0x02b6127c(iVar6,0xae,0,0);
      if (iVar6 != 0) {
        piVar11 = *(int **)(_UNK_02ba597c + 0x2ba5528);
        uVar8 = **(undefined4 **)(*piVar11 + 0x5c);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x024ef144(uVar8,0,0);
        if (iVar6 == 0) {
          return;
        }
        iVar6 = **(int **)(*piVar11 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x02d06f88(iVar6,0);
        iVar6 = *piVar12;
        goto LAB_02ba5864;
      }
    }
  }
  iVar6 = **(int **)(*piVar11 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b63a9c(iVar6,0x1c7,0,0);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = **(int **)(*piVar11 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b67784(iVar6,0);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = func_0x02b3dda0(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b3ebc0(iVar6,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar6 + 0x20);
  if (*(int *)(**(int **)(_UNK_02ba5980 + 0x2ba562c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x02b3eca0(uVar8,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02ba5984 + 0x2ba5660));
  func_0x024eed9c(iVar6,**(undefined4 **)(_UNK_02ba5988 + 0x2ba5674));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x024eecb8(iVar1,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar6 + 8);
  uVar9 = *(uint *)(iVar6 + 0xc);
  piVar12 = *(int **)(_UNK_02ba598c + 0x2ba56c4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar13 = *piVar12;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (uVar9 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar9 + 1;
    puVar2 = (undefined4 *)(iVar5 + uVar9 * 4 + 0x10);
    *puVar2 = uVar8;
    func_0x014385cc(puVar2,uVar8);
  }
  else {
    func_0x0152874c(iVar6,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = **(int **)(*piVar11 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar12 = (int *)func_0x024eecb8(iVar1,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  piVar3 = (int *)0x0;
  if ((piVar12 != (int *)0x0) &&
     (piVar3 = piVar12, *piVar12 != **(int **)(_UNK_02ba5990 + 0x2ba575c))) {
    piVar3 = (int *)0x0;
  }
  uStack_3c = 1;
  uStack_34 = 0;
  uStack_40 = 0;
  iStack_38 = iVar6;
  func_0x02b647b4(iVar5,0x1c7,piVar3,0);
  iVar6 = **(int **)(*piVar11 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_40 = 0;
  iVar6 = func_0x02b6127c(iVar6,0x1c7,0,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = **(int **)(*piVar11 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x02b678f4(iVar6,0x2de,0);
  piVar11 = *(int **)(_UNK_02ba5994 + 0x2ba57fc);
  piVar12 = *(int **)(_UNK_02ba5998 + 0x2ba5808);
  uVar8 = **(undefined4 **)(*piVar11 + 0x5c);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = **(int **)(*piVar11 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02d06f88(iVar6,0);
  iVar6 = *piVar12;
LAB_02ba5864:
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 != 0) {
    iVar6 = **(int **)(*piVar11 + 0x5c);
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
    func_0x024f0474(&fStack_30,iVar1,0);
    uStack_40 = 0;
    func_0x0157e8ec(uVar8,_UNK_02ba591c - fStack_30,0,0);
  }
  return;
}

