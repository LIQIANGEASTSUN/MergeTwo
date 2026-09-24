
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031b9a30(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_031b9ea8 + 0x31b9a58);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b9eac + 0x31b9a6c));
    func_0x01438628(*(undefined4 *)(_UNK_031b9eb0 + 0x31b9a78));
    func_0x01438628(*(undefined4 *)(_UNK_031b9eb4 + 0x31b9a84));
    func_0x01438628(*(undefined4 *)(_UNK_031b9eb8 + 0x31b9a90));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ebc + 0x31b9a9c));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ec0 + 0x31b9aa8));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ec4 + 0x31b9ab4));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ec8 + 0x31b9ac0));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ecc + 0x31b9acc));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ed0 + 0x31b9ad8));
    func_0x01438628(*(undefined4 *)(_UNK_031b9ed4 + 0x31b9ae4));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3a9f,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031b9ed8 + 0x31b9b50));
    func_0x031c8710(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_031b0c18(param_1);
    if (iVar6 != 0) {
      func_0x031b9f04(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_031b9edc + 0x31b9ba8) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_031b9ee0 + 0x31b9bd4));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_031b9ee8 + 0x31b9c00),
                              **(undefined4 **)(_UNK_031b9ee4 + 0x31b9bf4));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_031b9ea4;
      fVar1 = _UNK_031b9ea0;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_031b9eec + 0x31b9c44));
          func_0x031c8718(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_031b973c(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_031b9ef0 + 0x31b9ca4));
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
            iVar9 = func_0x02ce80d8(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_031b9ef4 + 0x31b9d78));
            func_0x05096384(uVar13,iVar8,**(undefined4 **)(_UNK_031b9ef8 + 0x31b9d94),0);
            if (*(int *)(**(int **)(_UNK_031b9efc + 0x31b9da8) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x031ba2dc(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_031b9f00 + 0x31b9e20) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x0515c4b0(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x29a,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3a9f,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

