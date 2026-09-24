
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310e00c(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_0310e484 + 0x310e034);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310e488 + 0x310e048));
    func_0x01438628(*(undefined4 *)(_UNK_0310e48c + 0x310e054));
    func_0x01438628(*(undefined4 *)(_UNK_0310e490 + 0x310e060));
    func_0x01438628(*(undefined4 *)(_UNK_0310e494 + 0x310e06c));
    func_0x01438628(*(undefined4 *)(_UNK_0310e498 + 0x310e078));
    func_0x01438628(*(undefined4 *)(_UNK_0310e49c + 0x310e084));
    func_0x01438628(*(undefined4 *)(_UNK_0310e4a0 + 0x310e090));
    func_0x01438628(*(undefined4 *)(_UNK_0310e4a4 + 0x310e09c));
    func_0x01438628(*(undefined4 *)(_UNK_0310e4a8 + 0x310e0a8));
    func_0x01438628(*(undefined4 *)(_UNK_0310e4ac + 0x310e0b4));
    func_0x01438628(*(undefined4 *)(_UNK_0310e4b0 + 0x310e0c0));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3b35,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0310e4b4 + 0x310e12c));
    func_0x0311c9a4(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_03105e3c(param_1);
    if (iVar6 != 0) {
      func_0x0310e4e0(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_0310e4b8 + 0x310e184) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0310e4bc + 0x310e1b0));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_0310e4c4 + 0x310e1dc),
                              **(undefined4 **)(_UNK_0310e4c0 + 0x310e1d0));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_0310e480;
      fVar1 = _UNK_0310e47c;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_0310e4c8 + 0x310e220));
          func_0x0311c9ac(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_0310dd18(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_0310e4cc + 0x310e280));
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
            iVar9 = func_0x02ce9c78(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_0310e4d0 + 0x310e354));
            func_0x05096384(uVar13,iVar8,**(undefined4 **)(_UNK_0310e4d4 + 0x310e370),0);
            if (*(int *)(**(int **)(_UNK_0310e4d8 + 0x310e384) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x0310e8b8(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_0310e4dc + 0x310e3fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x2dd,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3b35,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

