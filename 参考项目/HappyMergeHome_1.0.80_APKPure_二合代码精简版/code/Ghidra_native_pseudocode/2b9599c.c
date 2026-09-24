
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba599c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  pcVar7 = (char *)(_UNK_02ba6198 + 0x2ba59b4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba619c + 0x2ba59c8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61a0 + 0x2ba59d4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61a4 + 0x2ba59e0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61a8 + 0x2ba59ec));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61ac + 0x2ba59f8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61b0 + 0x2ba5a04));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61b4 + 0x2ba5a10));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61b8 + 0x2ba5a1c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61bc + 0x2ba5a28));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61c0 + 0x2ba5a34));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61c4 + 0x2ba5a40));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61c8 + 0x2ba5a4c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba61cc + 0x2ba5a58));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfe8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfe8,0);
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
  iVar1 = func_0x01b188f4(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01b1aebc(iVar1,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02ba61d0 + 0x2ba5ae0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba61d4 + 0x2ba5afc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba61dc + 0x2ba5b28),
                          **(undefined4 **)(_UNK_02ba61d8 + 0x2ba5b1c));
  piVar12 = *(int **)(_UNK_02ba61e0 + 0x2ba5b40);
  iVar6 = **(int **)(*piVar12 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b63a9c(iVar6,0xb3,0,0);
  if (iVar6 == 0) {
    piVar11 = *(int **)(_UNK_02ba61e4 + 0x2ba5b7c);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x024efb9c(iVar1,0);
    if (iVar6 != 0) {
      iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02ba61e8 + 0x2ba5bac));
      func_0x024eed9c(iVar6,**(undefined4 **)(_UNK_02ba61ec + 0x2ba5bc0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024eecb8(iVar1,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar6 + 8);
      uVar5 = *(uint *)(iVar6 + 0xc);
      piVar3 = *(int **)(_UNK_02ba61f0 + 0x2ba5c10);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      iVar13 = *piVar3;
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (uVar5 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar5 + 1;
        puVar2 = (undefined4 *)(iVar9 + uVar5 * 4 + 0x10);
        *puVar2 = uVar8;
        func_0x014385cc(puVar2,uVar8);
      }
      else {
        func_0x0152874c(iVar6,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar6 = **(int **)(*piVar12 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar3 = (int *)func_0x024eecb8(iVar1,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      piVar10 = (int *)0x0;
      if ((piVar3 != (int *)0x0) &&
         (piVar10 = piVar3, *piVar3 != **(int **)(_UNK_02ba61f4 + 0x2ba5ca8))) {
        piVar10 = (int *)0x0;
      }
      uStack_3c = 1;
      iStack_38 = 0;
      uStack_40 = 0;
      uStack_34 = 0;
      func_0x02b647b4(iVar6,0xb3,piVar10,0);
      iVar6 = **(int **)(*piVar12 + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_40 = 0;
      iVar6 = func_0x02b6127c(iVar6,0xb3,0,0);
      if (iVar6 != 0) {
        piVar12 = *(int **)(_UNK_02ba61f8 + 0x2ba5d24);
        uVar8 = **(undefined4 **)(*piVar12 + 0x5c);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x024ef144(uVar8,0,0);
        if (iVar6 == 0) {
          return;
        }
        iVar6 = **(int **)(*piVar12 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x02d06f88(iVar6,0);
        iVar6 = *piVar11;
        goto LAB_02ba5d84;
      }
    }
  }
  iVar6 = **(int **)(*piVar12 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b63a9c(iVar6,0x1cc,0,0);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = **(int **)(*piVar12 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x02b67784(iVar6,0);
  if (iVar6 != 0) {
    return;
  }
  piVar11 = *(int **)(_UNK_02ba61fc + 0x2ba5ea4);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x01b18728(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = func_0x01b18b70(iVar6,0);
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x01b18728(0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x01b18b70(iVar6,0);
  if (*(int *)(**(int **)(_UNK_02ba6200 + 0x2ba5f28) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x02f7c0dc(uVar8,0);
  if (iVar6 == 0) {
    return;
  }
  piVar11 = *(int **)(_UNK_02ba6204 + 0x2ba5f58);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024eec50(iVar1,0,0);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02ba6208 + 0x2ba5f8c));
  func_0x024eed9c(iVar6,**(undefined4 **)(_UNK_02ba620c + 0x2ba5fa0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x024eecb8(iVar1,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar6 + 8);
  uVar5 = *(uint *)(iVar6 + 0xc);
  piVar3 = *(int **)(_UNK_02ba6210 + 0x2ba5ff0);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar13 = *piVar3;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (uVar5 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar5 + 1;
    puVar2 = (undefined4 *)(iVar9 + uVar5 * 4 + 0x10);
    *puVar2 = uVar8;
    func_0x014385cc(puVar2,uVar8);
  }
  else {
    func_0x0152874c(iVar6,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
  }
  iVar9 = **(int **)(*piVar12 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar3 = (int *)func_0x024eecb8(iVar1,0);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  piVar10 = (int *)0x0;
  if ((piVar3 != (int *)0x0) && (piVar10 = piVar3, *piVar3 != **(int **)(_UNK_02ba6214 + 0x2ba6088))
     ) {
    piVar10 = (int *)0x0;
  }
  uStack_3c = 1;
  uStack_34 = 0;
  uStack_40 = 0;
  iStack_38 = iVar6;
  func_0x02b647b4(iVar9,0x1cc,piVar10,0);
  iVar6 = **(int **)(*piVar12 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uStack_40 = 0;
  iVar6 = func_0x02b6127c(iVar6,0x1cc,0,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = **(int **)(*piVar12 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x02b678f4(iVar6,0x2de,0);
  piVar12 = *(int **)(_UNK_02ba6218 + 0x2ba6128);
  uVar8 = **(undefined4 **)(*piVar12 + 0x5c);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = **(int **)(*piVar12 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02d06f88(iVar6,0);
  iVar6 = *piVar11;
LAB_02ba5d84:
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x024ef144(uVar8,0,0);
  if (iVar6 != 0) {
    iVar6 = **(int **)(*piVar12 + 0x5c);
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
    func_0x0157e8ec(uVar8,_UNK_02ba6194 - fStack_30,0,0);
  }
  return;
}

