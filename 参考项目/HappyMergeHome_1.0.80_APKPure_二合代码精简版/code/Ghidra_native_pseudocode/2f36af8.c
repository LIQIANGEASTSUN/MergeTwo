
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f46af8(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_02f46f70 + 0x2f46b20);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f46f74 + 0x2f46b34));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f78 + 0x2f46b40));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f7c + 0x2f46b4c));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f80 + 0x2f46b58));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f84 + 0x2f46b64));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f88 + 0x2f46b70));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f8c + 0x2f46b7c));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f90 + 0x2f46b88));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f94 + 0x2f46b94));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f98 + 0x2f46ba0));
    func_0x01438628(*(undefined4 *)(_UNK_02f46f9c + 0x2f46bac));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3b53,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f46fa0 + 0x2f46c18));
    func_0x02f56310(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_02f3e088(param_1);
    if (iVar6 != 0) {
      func_0x02f46fcc(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_02f46fa4 + 0x2f46c70) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f46fa8 + 0x2f46c9c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_02f46fb0 + 0x2f46cc8),
                              **(undefined4 **)(_UNK_02f46fac + 0x2f46cbc));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_02f46f6c;
      fVar1 = _UNK_02f46f68;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02f46fb4 + 0x2f46d0c));
          func_0x02f56318(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_02f46804(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_02f46fb8 + 0x2f46d6c));
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
            iVar9 = func_0x02cebbe4(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_02f46fbc + 0x2f46e40));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_02f46fc0 + 0x2f46e5c),0);
            if (*(int *)(**(int **)(_UNK_02f46fc4 + 0x2f46e70) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x02f473a4(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_02f46fc8 + 0x2f46ee8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x2f4,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3b53,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

