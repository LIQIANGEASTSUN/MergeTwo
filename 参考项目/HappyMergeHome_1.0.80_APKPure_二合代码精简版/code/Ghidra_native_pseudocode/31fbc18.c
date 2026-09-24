
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0320bc18(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_0320c090 + 0x320bc40);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0320c094 + 0x320bc54));
    func_0x01438628(*(undefined4 *)(_UNK_0320c098 + 0x320bc60));
    func_0x01438628(*(undefined4 *)(_UNK_0320c09c + 0x320bc6c));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0a0 + 0x320bc78));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0a4 + 0x320bc84));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0a8 + 0x320bc90));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0ac + 0x320bc9c));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0b0 + 0x320bca8));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0b4 + 0x320bcb4));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0b8 + 0x320bcc0));
    func_0x01438628(*(undefined4 *)(_UNK_0320c0bc + 0x320bccc));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3abd,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0320c0c0 + 0x320bd38));
    func_0x051b0d14(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_03204680(param_1);
    if (iVar6 != 0) {
      func_0x0320c0f4(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_0320c0c4 + 0x320bd90) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0320c0c8 + 0x320bdbc));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_0320c0d0 + 0x320bde8),
                              **(undefined4 **)(_UNK_0320c0cc + 0x320bddc));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_0320c08c;
      fVar1 = _UNK_0320c088;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_0320c0d4 + 0x320be2c));
          func_0x051b0d14(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_0320b924(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_0320c0d8 + 0x320be8c));
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
            iVar9 = func_0x02ce7d64(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_0320c0dc + 0x320bf60));
            func_0x05096384(uVar13,iVar8,**(undefined4 **)(_UNK_0320c0e0 + 0x320bf7c),0);
            if (*(int *)(**(int **)(_UNK_0320c0e4 + 0x320bf90) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x0320c4d4(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_0320c0e8 + 0x320c008) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x0515c4b0(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x27c,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3abd,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

