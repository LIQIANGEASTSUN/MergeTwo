
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4e01c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar12 = (char *)(_UNK_02b4e608 + 0x2b4e048);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4e60c + 0x2b4e05c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e610 + 0x2b4e068));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e614 + 0x2b4e074));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e618 + 0x2b4e080));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e61c + 0x2b4e08c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e620 + 0x2b4e098));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e624 + 0x2b4e0a4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e628 + 0x2b4e0b0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e62c + 0x2b4e0bc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e630 + 0x2b4e0c8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e634 + 0x2b4e0d4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e638 + 0x2b4e0e0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4e63c + 0x2b4e0ec));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2efc,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02b4e640 + 0x2b4e160));
    func_0x024eeca8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar2 + 0x14) = param_1;
    func_0x014385cc((int *)(iVar2 + 0x14),param_1);
    *(undefined4 *)(iVar2 + 0x18) = param_6;
    func_0x014385cc((undefined4 *)(iVar2 + 0x18),param_6);
    piVar14 = *(int **)(_UNK_02b4e644 + 0x2b4e1ac);
    iVar8 = *(int *)(*piVar14 + 0x74);
    *(undefined1 *)(param_1 + 0x5c) = 1;
    if (iVar8 == 0) {
      func_0x014387a4();
    }
    puVar13 = *(undefined4 **)(_UNK_02b4e648 + 0x2b4e1cc);
    iVar8 = func_0x014e9518(*puVar13);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x03579aec(iVar8,**(undefined4 **)(_UNK_02b4e650 + 0x2b4e1f8),
                            **(undefined4 **)(_UNK_02b4e64c + 0x2b4e1ec));
    pcVar12 = (char *)(_UNK_02b4e654 + 0x2b4e210);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02b4e658 + 0x2b4e224));
      *pcVar12 = '\x01';
    }
    puVar3 = *(undefined8 **)(**(int **)(_UNK_02b4e65c + 0x2b4e23c) + 0x5c);
    uVar21 = *puVar3;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)(iVar2 + 8) = uVar21;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x014e94d8(iVar8,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x024efc2c(iVar4,0);
    if (iVar4 == 0) {
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(*puVar13);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03579aec(iVar4,**(undefined4 **)(_UNK_02b4e664 + 0x2b4e2e4),
                              **(undefined4 **)(_UNK_02b4e660 + 0x2b4e2d8));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar4 = iVar8;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
    }
    iVar4 = func_0x024eecb8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_58,iVar4,0);
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar2 + 0x10) = uStack_50;
    uStack_48 = uStack_58;
    *(undefined8 *)(iVar2 + 8) = uStack_58;
    iVar4 = func_0x02b1cc10(0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x024eecb8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024efc6c(&uStack_48,iVar4,param_3,param_4,param_5,0);
    piVar14 = *(int **)(_UNK_02b4e668 + 0x2b4e3a0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x0152adfc(param_2,8,0);
    fVar19 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    pcVar12 = (char *)(_UNK_02b4e66c + 0x2b4e3d4);
    fVar20 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02b4e670 + 0x2b4e3f0));
      *pcVar12 = '\x01';
    }
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar20 = (float)func_0x024f04b4(fVar19 / fVar20);
    fVar19 = _UNK_02b4e604;
    uVar18 = in_fpscr & 0xfffffff | (uint)(fVar20 == _UNK_02b4e600) << 0x1e;
    iVar4 = (int)fVar20;
    if (SUB41(uVar18 >> 0x1e,0)) {
      iVar4 = -0x80000000;
    }
    if (0 < param_2) {
      iVar16 = 0;
      do {
        iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02b4e674 + 0x2b4e45c));
        func_0x024eeca8(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        piVar14 = (int *)(iVar6 + 0xc);
        *piVar14 = iVar2;
        func_0x014385cc(piVar14,iVar2);
        bVar1 = param_2 < iVar4;
        param_2 = param_2 - iVar4;
        if (bVar1) {
          param_2 = 0;
        }
        iVar9 = *(int *)(**(int **)(_UNK_02b4e678 + 0x2b4e498) + 0x74);
        *(int *)(iVar6 + 8) = param_2;
        if (iVar9 == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_02b4e67c + 0x2b4e4c4));
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar10 = *piVar14;
        uVar5 = *(undefined4 *)(iVar8 + 0x3c);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar15 = *(undefined4 *)(iVar10 + 8);
        uVar11 = *(undefined4 *)(iVar10 + 0xc);
        uVar17 = *(undefined4 *)(iVar10 + 0x10);
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02b4e680 + 0x2b4e500));
        func_0x0152e3ec(uVar7,iVar6,**(undefined4 **)(_UNK_02b4e684 + 0x2b4e528),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        fVar20 = (float)VectorSignedToFloat(iVar16,(byte)(uVar18 >> 0x16) & 3);
        func_0x02b777e0(iVar9,uVar5,param_3,param_4,param_5,uVar15,uVar11,uVar17,1,0x3f333333,
                        fVar20 * fVar19,uVar7,0x3f666666,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                        0x3e99999a,1,1,0);
        iVar16 = iVar16 + 1;
      } while (0 < param_2);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x2efc,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

