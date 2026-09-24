
/* WARNING: Possible PIC construction at 0x02c75a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c75af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c75a8c) */
/* WARNING: Removing unreachable block (ram,0x02c75ab4) */
/* WARNING: Removing unreachable block (ram,0x02c75acc) */
/* WARNING: Removing unreachable block (ram,0x02c75ad8) */
/* WARNING: Removing unreachable block (ram,0x02c75ae4) */
/* WARNING: Removing unreachable block (ram,0x02c75ae8) */
/* WARNING: Removing unreachable block (ram,0x02c75af8) */
/* WARNING: Removing unreachable block (ram,0x02c75b00) */
/* WARNING: Removing unreachable block (ram,0x02c75b04) */
/* WARNING: Removing unreachable block (ram,0x02c75b30) */
/* WARNING: Removing unreachable block (ram,0x02c75b34) */
/* WARNING: Removing unreachable block (ram,0x02c75b60) */
/* WARNING: Removing unreachable block (ram,0x02c75b64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c7535c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar9 = (char *)(_UNK_02c75748 + 0x2c75370);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c7574c + 0x2c75384));
    func_0x01438628(*(undefined4 *)(_UNK_02c75750 + 0x2c75390));
    func_0x01438628(*(undefined4 *)(_UNK_02c75754 + 0x2c7539c));
    func_0x01438628(*(undefined4 *)(_UNK_02c75758 + 0x2c753a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c7575c + 0x2c753b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c75760 + 0x2c753c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c75764 + 0x2c753cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c75768 + 0x2c753d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c7576c + 0x2c753e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c75770 + 0x2c753f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c75774 + 0x2c753fc));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5ffa,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5ffa,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
SUB_02868e1c:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  fVar4 = (float)func_0x024ef5b8(0);
  if (fVar4 - *(float *)(param_1 + 0x84) < _UNK_02c75744) {
    return;
  }
  piVar12 = *(int **)(_UNK_02c75778 + 0x2c75478);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar13 = *(undefined4 **)(_UNK_02c7577c + 0x2c75494);
  iVar3 = func_0x014e9518(*puVar13);
  uVar6 = *(undefined4 *)(param_1 + 0x78);
  uVar10 = FUN_02c6b6f0(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = FUN_02bdd468(iVar3,uVar6,uVar10,0);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c75780 + 0x2c754e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c75784 + 0x2c754fc));
  uVar10 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x029a6fa8(iVar3,uVar10,0);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = func_0x014e9518(*puVar13);
  uVar6 = *(undefined4 *)(param_1 + 0x78);
  uVar10 = FUN_02c6b6f0(param_1);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = FUN_02bd114c(iVar8,uVar6,uVar10,0);
  if (iVar8 == 0) {
    return;
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar3 + 0xdd) == '\0') {
    pcVar9 = (char *)(_UNK_02c75b98 + 0x2c757bc);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c75b9c + 0x2c757d0));
      func_0x01438628(*(undefined4 *)(_UNK_02c75ba0 + 0x2c757dc));
      func_0x01438628(*(undefined4 *)(_UNK_02c75ba4 + 0x2c757e8));
      func_0x01438628(*(undefined4 *)(_UNK_02c75ba8 + 0x2c757f4));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bac + 0x2c75800));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bb0 + 0x2c7580c));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bb4 + 0x2c75818));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bb8 + 0x2c75824));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bbc + 0x2c75830));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bc0 + 0x2c7583c));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bc4 + 0x2c75848));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bc8 + 0x2c75854));
      func_0x01438628(*(undefined4 *)(_UNK_02c75bcc + 0x2c75860));
      *pcVar9 = '\x01';
    }
    iVar3 = func_0x02953fd4(0x5ffd,0);
    if (iVar3 != 0) {
      iVar3 = func_0x029540a4(0x5ffd,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      goto SUB_02868e1c;
    }
    func_0x02c75c04(param_1,*(undefined4 *)(param_1 + 0x78));
    func_0x02c75e5c(param_1);
    uVar10 = func_0x024ef5b8(0);
    piVar12 = *(int **)(_UNK_02c75bd0 + 0x2c758dc);
    *(undefined4 *)(param_1 + 0x84) = uVar10;
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c75bd4 + 0x2c758fc));
    uVar10 = *(undefined4 *)(param_1 + 0x7c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029a6fa8(iVar3,uVar10,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x50);
    if (*(int *)(**(int **)(_UNK_02c75bd8 + 0x2c75940) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_02c75bdc + 0x2c75960));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar10 = 0x13;
    if (iVar3 < 1) {
      uVar10 = 0x21;
    }
    func_0x0202998c(iVar8,uVar10,0,0);
    func_0x02c762ec(param_1,*(undefined4 *)(param_1 + 0x7c));
    if (*(int *)(**(int **)(_UNK_02c75be0 + 0x2c759a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x014e9518(**(undefined4 **)(_UNK_02c75be4 + 0x2c759c4));
    if (*(int *)(**(int **)(_UNK_02c75be8 + 0x2c759d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    piVar12 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c75bec + 0x2c759fc),2);
    FUN_02c6b6f0(param_1);
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02c75bf0 + 0x2c75a20),&stack0xffffffe4);
    if (piVar12 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) &&
       (iVar8 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar12 + 0x20)), iVar8 == 0)) {
      uVar10 = func_0x01438904();
      func_0x01438790(uVar10,0);
    }
    if (piVar12[3] == 0) {
      func_0x014388e8();
    }
    piVar12 = piVar12 + 4;
    *piVar12 = iVar3;
    goto SUB_014084cc;
  }
  if (*(int *)(**(int **)(_UNK_02c75788 + 0x2c755a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c7578c + 0x2c755c0));
  piVar12 = *(int **)(_UNK_02c75790 + 0x2c755d4);
  iVar8 = *piVar12;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
    iVar8 = *piVar12;
  }
  iVar11 = **(int **)(_UNK_02c75794 + 0x2c755f4);
  iVar5 = *(int *)(iVar11 + 0x1c);
  uVar10 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x1e0);
  if (iVar5 == 0) {
    func_0x014909d8(iVar11);
    iVar5 = *(int *)(iVar11 + 0x1c);
  }
  iVar8 = *(int *)(iVar5 + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  uVar6 = **(undefined4 **)(iVar8 + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  piVar12 = (int *)func_0x02b0c90c(iVar3,uVar10,uVar6,0);
  if (piVar12 == (int *)0x0) {
LAB_02c756b8:
    uVar10 = *(undefined4 *)(param_1 + 0x7c);
    func_0x014388e4();
    bVar1 = true;
    piVar12 = (int *)0x0;
  }
  else {
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_02c75798 + 0x2c75690) + 0xb8);
    if ((*(byte *)(*piVar12 + 0xb8) < uVar7) ||
       (*(int *)(*(int *)(*piVar12 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_02c75798 + 0x2c75690)
       )) goto LAB_02c756b8;
    bVar1 = false;
    uVar10 = *(undefined4 *)(param_1 + 0x7c);
  }
  func_0x02c87164(piVar12,uVar10,0);
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c7579c + 0x2c756e0));
  func_0x0152e3ec(iVar3,param_1,**(undefined4 **)(_UNK_02c757a0 + 0x2c756fc),0);
  if (bVar1) {
    func_0x014388e4();
  }
  piVar12 = piVar12 + 0xe;
  *piVar12 = iVar3;
SUB_014084cc:
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar12 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar12 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

