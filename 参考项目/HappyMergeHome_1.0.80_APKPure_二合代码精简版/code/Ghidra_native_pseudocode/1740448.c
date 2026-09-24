
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01750448(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_017508c0 + 0x1750470);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017508c4 + 0x1750484));
    func_0x01438628(*(undefined4 *)(_UNK_017508c8 + 0x1750490));
    func_0x01438628(*(undefined4 *)(_UNK_017508cc + 0x175049c));
    func_0x01438628(*(undefined4 *)(_UNK_017508d0 + 0x17504a8));
    func_0x01438628(*(undefined4 *)(_UNK_017508d4 + 0x17504b4));
    func_0x01438628(*(undefined4 *)(_UNK_017508d8 + 0x17504c0));
    func_0x01438628(*(undefined4 *)(_UNK_017508dc + 0x17504cc));
    func_0x01438628(*(undefined4 *)(_UNK_017508e0 + 0x17504d8));
    func_0x01438628(*(undefined4 *)(_UNK_017508e4 + 0x17504e4));
    func_0x01438628(*(undefined4 *)(_UNK_017508e8 + 0x17504f0));
    func_0x01438628(*(undefined4 *)(_UNK_017508ec + 0x17504fc));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3bad,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017508f0 + 0x1750568));
    func_0x0177ae88(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_017479d8(param_1);
    if (iVar6 != 0) {
      func_0x0175091c(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_017508f4 + 0x17505c0) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017508f8 + 0x17505ec));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_01750900 + 0x1750618),
                              **(undefined4 **)(_UNK_017508fc + 0x175060c));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_017508bc;
      fVar1 = _UNK_017508b8;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01750904 + 0x175065c));
          func_0x0177ae90(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_01750154(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_01750908 + 0x17506bc));
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
            iVar9 = func_0x02cea044(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_0175090c + 0x1750790));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_01750910 + 0x17507ac),0);
            if (*(int *)(**(int **)(_UNK_01750914 + 0x17507c0) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x01750cf4(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_01750918 + 0x1750838) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x322,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3bad,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

