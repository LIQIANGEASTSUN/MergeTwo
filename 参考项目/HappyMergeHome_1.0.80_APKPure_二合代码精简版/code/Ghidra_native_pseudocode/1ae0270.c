
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01af0270(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01af05f4 + 0x1af0288);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af05f8 + 0x1af029c));
    func_0x01438628(*(undefined4 *)(_UNK_01af05fc + 0x1af02a8));
    func_0x01438628(*(undefined4 *)(_UNK_01af0600 + 0x1af02b4));
    func_0x01438628(*(undefined4 *)(_UNK_01af0604 + 0x1af02c0));
    func_0x01438628(*(undefined4 *)(_UNK_01af0608 + 0x1af02cc));
    func_0x01438628(*(undefined4 *)(_UNK_01af060c + 0x1af02d8));
    func_0x01438628(*(undefined4 *)(_UNK_01af0610 + 0x1af02e4));
    func_0x01438628(*(undefined4 *)(_UNK_01af0614 + 0x1af02f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4d9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4d9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0287ab98 + 0x287aab8);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287ab9c + 0x287aacc),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_30,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287aba0 + 0x287ab88));
    return iVar1;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01af0618 + 0x1af034c));
  func_0x024f0510(iVar2,**(undefined4 **)(_UNK_01af061c + 0x1af0360));
  uVar15 = FUN_01ae5790(param_1);
  iVar9 = (int)((ulonglong)uVar15 >> 0x20);
  iVar6 = (int)uVar15;
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 0x18);
  }
  if (iVar6 != 0 && iVar1 != 0) {
    iVar1 = 0;
    puVar13 = *(undefined4 **)(_UNK_01af0620 + 0x1af039c);
    piVar12 = *(int **)(_UNK_01af0624 + 0x1af03a4);
    puVar7 = *(undefined4 **)(_UNK_01af0628 + 0x1af03ac);
    uStack_28 = param_1;
    while( true ) {
      iVar9 = FUN_01ae5790(param_1,iVar9);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0x18);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar1) break;
      iVar9 = FUN_01ae5790(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar9 + 0x18);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar15 = func_0x024f0530(iVar9,iVar1,*puVar13);
      iVar9 = (int)((ulonglong)uVar15 >> 0x20);
      uVar11 = (uint)uVar15;
      if (0 < (int)uVar11) {
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(*puVar7);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x029a6fa8(iVar9,uVar11,0);
        if (uVar11 % 10 == 0 && iVar9 == 0) {
          if (*(int *)(*piVar12 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar9 = func_0x014e9518(*puVar7);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x029a6fa8(iVar9,uVar11 / 10,0);
          if (iVar9 != 0) {
            uVar11 = uVar11 / 10;
          }
          puVar7 = *(undefined4 **)(_UNK_01af062c + 0x1af04d4);
        }
        if (*(int *)(*piVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(*puVar7);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar15 = func_0x029a6fa8(iVar9,uVar11,0);
        iVar9 = (int)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 != 0) {
          if (iVar2 == 0) {
            func_0x014388e4();
            uVar15 = func_0x024f0f34(0,uVar11,**(undefined4 **)(_UNK_01af0630 + 0x1af0554));
            iVar9 = (int)((ulonglong)uVar15 >> 0x20);
            if ((int)uVar15 == 0) {
              func_0x014388e4();
              goto LAB_01af0568;
            }
          }
          else {
            uVar15 = func_0x024f0f34(iVar2,uVar11,**(undefined4 **)(_UNK_01af063c + 0x1af052c));
            iVar9 = (int)((ulonglong)uVar15 >> 0x20);
            if ((int)uVar15 == 0) {
LAB_01af0568:
              iVar6 = *(int *)(iVar2 + 8);
              uVar8 = *(uint *)(iVar2 + 0xc);
              piVar3 = *(int **)(_UNK_01af0634 + 0x1af0594);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar14 = *piVar3;
              iVar9 = iVar2;
              if (iVar6 == 0) {
                func_0x014388e4();
                iVar9 = extraout_r1;
              }
              if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar8 + 1;
                *(uint *)(iVar6 + uVar8 * 4 + 0x10) = uVar11;
              }
              else {
                func_0x024f0520(iVar2,uVar11,
                                *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
                iVar9 = extraout_r1_00;
              }
              puVar7 = *(undefined4 **)(_UNK_01af0638 + 0x1af05f0);
              param_1 = uStack_28;
            }
          }
        }
      }
      iVar1 = iVar1 + 1;
    }
  }
  return iVar2;
}

