
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183c6f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  
  pcVar14 = (char *)(_UNK_0183cb70 + 0x183c720);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183cb74 + 0x183c734));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb78 + 0x183c740));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb7c + 0x183c74c));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb80 + 0x183c758));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb84 + 0x183c764));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb88 + 0x183c770));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb8c + 0x183c77c));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb90 + 0x183c788));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb94 + 0x183c794));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb98 + 0x183c7a0));
    func_0x01438628(*(undefined4 *)(_UNK_0183cb9c + 0x183c7ac));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3aea,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0183cba0 + 0x183c818));
    func_0x0184b43c(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_018338e0(param_1);
    if (iVar6 != 0) {
      func_0x0183cbcc(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_0183cba4 + 0x183c870) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_0183cba8 + 0x183c89c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_0183cbb0 + 0x183c8c8),
                              **(undefined4 **)(_UNK_0183cbac + 0x183c8bc));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_0183cb6c;
      fVar1 = _UNK_0183cb68;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_0183cbb4 + 0x183c90c));
          func_0x0184b444(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_0183c404(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_0183cbb8 + 0x183c96c));
          iVar9 = *piVar15;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (iVar16 < *(int *)(iVar9 + 8)) {
            fVar10 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar11 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar7 = fStack_4c;
            if (param_3 == 0) {
              func_0x014388e4();
            }
            iVar9 = func_0x02ce5a84(param_3,0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&fStack_58,iVar9,0);
            fVar4 = fStack_54;
            fVar3 = fStack_58;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar12 = func_0x024eecb8(iVar6,0);
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_0183cbbc + 0x183ca40));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_0183cbc0 + 0x183ca5c),0);
            if (*(int *)(**(int **)(_UNK_0183cbc4 + 0x183ca70) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x0183cfa4(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_0183cbc8 + 0x183cae8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x2a7,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3aea,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

