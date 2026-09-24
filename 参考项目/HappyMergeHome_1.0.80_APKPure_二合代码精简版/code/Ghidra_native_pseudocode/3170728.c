
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03180728(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_03180ba0 + 0x3180750);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03180ba4 + 0x3180764));
    func_0x01438628(*(undefined4 *)(_UNK_03180ba8 + 0x3180770));
    func_0x01438628(*(undefined4 *)(_UNK_03180bac + 0x318077c));
    func_0x01438628(*(undefined4 *)(_UNK_03180bb0 + 0x3180788));
    func_0x01438628(*(undefined4 *)(_UNK_03180bb4 + 0x3180794));
    func_0x01438628(*(undefined4 *)(_UNK_03180bb8 + 0x31807a0));
    func_0x01438628(*(undefined4 *)(_UNK_03180bbc + 0x31807ac));
    func_0x01438628(*(undefined4 *)(_UNK_03180bc0 + 0x31807b8));
    func_0x01438628(*(undefined4 *)(_UNK_03180bc4 + 0x31807c4));
    func_0x01438628(*(undefined4 *)(_UNK_03180bc8 + 0x31807d0));
    func_0x01438628(*(undefined4 *)(_UNK_03180bcc + 0x31807dc));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3a3f,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03180bd0 + 0x3180848));
    func_0x0318ed1c(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_03178744(param_1);
    if (iVar6 != 0) {
      func_0x03180bfc(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_03180bd4 + 0x31808a0) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03180bd8 + 0x31808cc));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_03180be0 + 0x31808f8),
                              **(undefined4 **)(_UNK_03180bdc + 0x31808ec));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_03180b9c;
      fVar1 = _UNK_03180b98;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_03180be4 + 0x318093c));
          func_0x0318ed24(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_03180434(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_03180be8 + 0x318099c));
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
            iVar9 = func_0x02ce9590(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_03180bec + 0x3180a70));
            func_0x05096384(uVar13,iVar8,**(undefined4 **)(_UNK_03180bf0 + 0x3180a8c),0);
            if (*(int *)(**(int **)(_UNK_03180bf4 + 0x3180aa0) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x03180fd4(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_03180bf8 + 0x3180b18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x0515c4b0(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x21d,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3a3f,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

