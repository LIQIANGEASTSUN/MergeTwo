
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03081204(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_0308167c + 0x308122c);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03081680 + 0x3081240));
    func_0x01438628(*(undefined4 *)(_UNK_03081684 + 0x308124c));
    func_0x01438628(*(undefined4 *)(_UNK_03081688 + 0x3081258));
    func_0x01438628(*(undefined4 *)(_UNK_0308168c + 0x3081264));
    func_0x01438628(*(undefined4 *)(_UNK_03081690 + 0x3081270));
    func_0x01438628(*(undefined4 *)(_UNK_03081694 + 0x308127c));
    func_0x01438628(*(undefined4 *)(_UNK_03081698 + 0x3081288));
    func_0x01438628(*(undefined4 *)(_UNK_0308169c + 0x3081294));
    func_0x01438628(*(undefined4 *)(_UNK_030816a0 + 0x30812a0));
    func_0x01438628(*(undefined4 *)(_UNK_030816a4 + 0x30812ac));
    func_0x01438628(*(undefined4 *)(_UNK_030816a8 + 0x30812b8));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3b71,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030816ac + 0x3081324));
    func_0x03090a1c(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_03078794(param_1);
    if (iVar6 != 0) {
      func_0x030816d8(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_030816b0 + 0x308137c) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_030816b4 + 0x30813a8));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_030816bc + 0x30813d4),
                              **(undefined4 **)(_UNK_030816b8 + 0x30813c8));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_03081678;
      fVar1 = _UNK_03081674;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_030816c0 + 0x3081418));
          func_0x03090a24(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_03080f10(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_030816c4 + 0x3081478));
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
            iVar9 = func_0x02cea72c(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_030816c8 + 0x308154c));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_030816cc + 0x3081568),0);
            if (*(int *)(**(int **)(_UNK_030816d0 + 0x308157c) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x03081ab0(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_030816d4 + 0x30815f4) + 0x74) == 0) {
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
    iVar5 = func_0x029540a4(0x3b71,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

