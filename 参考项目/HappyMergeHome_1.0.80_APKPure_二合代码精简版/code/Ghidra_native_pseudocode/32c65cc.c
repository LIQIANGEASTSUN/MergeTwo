
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032d65cc(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_032d6a44 + 0x32d65f4);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d6a48 + 0x32d6608));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a4c + 0x32d6614));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a50 + 0x32d6620));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a54 + 0x32d662c));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a58 + 0x32d6638));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a5c + 0x32d6644));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a60 + 0x32d6650));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a64 + 0x32d665c));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a68 + 0x32d6668));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a6c + 0x32d6674));
    func_0x01438628(*(undefined4 *)(_UNK_032d6a70 + 0x32d6680));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3b08,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032d6a74 + 0x32d66ec));
    func_0x051b0d14(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_032d6320(param_1);
    if (iVar6 != 0) {
      func_0x032d6aa8(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_032d6a78 + 0x32d6744) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032d6a7c + 0x32d6770));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_032d6a84 + 0x32d679c),
                              **(undefined4 **)(_UNK_032d6a80 + 0x32d6790));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_032d6a40;
      fVar1 = _UNK_032d6a3c;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_032d6a88 + 0x32d67e0));
          func_0x051b0d14(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_032d6248(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_032d6a8c + 0x32d6840));
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
            iVar9 = func_0x02ce7308(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_032d6a90 + 0x32d6914));
            func_0x05096384(uVar13,iVar8,**(undefined4 **)(_UNK_032d6a94 + 0x32d6930),0);
            if (*(int *)(**(int **)(_UNK_032d6a98 + 0x32d6944) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x032d6e88(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_032d6a9c + 0x32d69bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x0515c4b0(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x2bf,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3b08,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

