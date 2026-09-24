
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bfc178(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  pcVar7 = (char *)(_UNK_02bfc5f0 + 0x2bfc198);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfc5f4 + 0x2bfc1ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bfc5f8 + 0x2bfc1b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bfc5fc + 0x2bfc1c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bfc600 + 0x2bfc1d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bfc604 + 0x2bfc1dc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e72,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar4 = (int *)(param_1 + 0x70);
    iVar11 = *piVar4;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar13 = *(int *)(param_1 + 0x48);
    iVar1 = func_0x014e5f78(param_2,iVar13);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    *(undefined4 *)(iVar11 + 0xc) = 0;
    if (-param_3 == param_3 || param_3 * -2 < 0 != SBORROW4(-param_3,param_3)) {
      iVar5 = param_2 - iVar1 * iVar13;
      iVar11 = -param_3;
      iVar9 = param_3;
      while( true ) {
        iVar11 = iVar11 + 1;
        iVar3 = func_0x02bfc624(param_1,iVar5 - param_3,iVar1 + iVar9);
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar3 + 8);
          uVar12 = *(uint *)(iVar3 + 0xc);
          piVar6 = *(int **)(_UNK_02bfc608 + 0x2bfc3a0);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar10 = *piVar6;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar13 = iVar13 * (iVar1 + iVar9) + (iVar5 - param_3);
          if (uVar12 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar12 + 1;
            *(int *)(iVar8 + uVar12 * 4 + 0x10) = iVar13;
          }
          else {
            func_0x024f0520(iVar3,iVar13,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar3 = iVar1 + iVar11 + -1;
        iVar8 = *(int *)(param_1 + 0x48);
        iVar13 = func_0x02bfc624(param_1,iVar5 + param_3,iVar3);
        if (iVar13 != 0) {
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar13 + 8);
          uVar12 = *(uint *)(iVar13 + 0xc);
          piVar6 = *(int **)(_UNK_02bfc60c + 0x2bfc440);
          *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
          iVar14 = *piVar6;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = iVar8 * iVar3 + iVar5 + param_3;
          if (uVar12 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar13 + 0xc) = uVar12 + 1;
            *(int *)(iVar10 + uVar12 * 4 + 0x10) = iVar3;
          }
          else {
            func_0x024f0520(iVar13,iVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar3 = *(int *)(param_1 + 0x48);
        iVar13 = func_0x02bfc624(param_1,iVar5 + iVar11 + -1,iVar1 + param_3);
        if (iVar13 != 0) {
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar13 + 8);
          uVar12 = *(uint *)(iVar13 + 0xc);
          piVar6 = *(int **)(_UNK_02bfc610 + 0x2bfc4dc);
          *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
          iVar10 = *piVar6;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar3 = iVar3 * (iVar1 + param_3) + iVar5 + iVar11 + -1;
          if (uVar12 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar13 + 0xc) = uVar12 + 1;
            *(int *)(iVar8 + uVar12 * 4 + 0x10) = iVar3;
          }
          else {
            func_0x024f0520(iVar13,iVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar3 = *(int *)(param_1 + 0x48);
        iVar13 = func_0x02bfc624(param_1,iVar5 + iVar9,iVar1 - param_3);
        if (iVar13 != 0) {
          iVar13 = *(int *)(param_1 + 0x6c);
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar13 + 8);
          uVar12 = *(uint *)(iVar13 + 0xc);
          piVar6 = *(int **)(_UNK_02bfc614 + 0x2bfc584);
          *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
          iVar10 = *piVar6;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar3 = iVar3 * (iVar1 - param_3) + iVar5 + iVar9;
          if (uVar12 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar13 + 0xc) = uVar12 + 1;
            *(int *)(iVar8 + uVar12 * 4 + 0x10) = iVar3;
          }
          else {
            func_0x024f0520(iVar13,iVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
        }
        if (param_3 < iVar11) break;
        iVar9 = iVar9 + -1;
        iVar13 = *(int *)(param_1 + 0x48);
      }
    }
    uVar2 = func_0x0360ed48(*(undefined4 *)(param_1 + 0x6c),
                            **(undefined4 **)(_UNK_02bfc618 + 0x2bfc2b4));
    uVar2 = func_0x036264d0(uVar2,**(undefined4 **)(_UNK_02bfc61c + 0x2bfc2c8));
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    func_0x014385cc(piVar4,uVar2);
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f13cc(iVar1,param_2,**(undefined4 **)(_UNK_02bfc620 + 0x2bfc2fc));
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x5e72,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028d4620(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

