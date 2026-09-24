
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b8a90(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_016b8f08 + 0x16b8ab8);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b8f0c + 0x16b8acc));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f10 + 0x16b8ad8));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f14 + 0x16b8ae4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f18 + 0x16b8af0));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f1c + 0x16b8afc));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f20 + 0x16b8b08));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f24 + 0x16b8b14));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f28 + 0x16b8b20));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f2c + 0x16b8b2c));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f30 + 0x16b8b38));
    func_0x01438628(*(undefined4 *)(_UNK_016b8f34 + 0x16b8b44));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3b26,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016b8f38 + 0x16b8bb0));
    func_0x016c78f8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_016afa88(param_1);
    if (iVar6 != 0) {
      func_0x016b8f64(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_016b8f3c + 0x16b8c08) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016b8f40 + 0x16b8c34));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_016b8f48 + 0x16b8c60),
                              **(undefined4 **)(_UNK_016b8f44 + 0x16b8c54));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_016b8f04;
      fVar1 = _UNK_016b8f00;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_016b8f4c + 0x16b8ca4));
          func_0x016c7900(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_016b879c(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_016b8f50 + 0x16b8d04));
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
            iVar9 = func_0x02ce6bc8(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_016b8f54 + 0x16b8dd8));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_016b8f58 + 0x16b8df4),0);
            if (*(int *)(**(int **)(_UNK_016b8f5c + 0x16b8e08) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x016b933c(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_016b8f60 + 0x16b8e80) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x2d6,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3b26,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

