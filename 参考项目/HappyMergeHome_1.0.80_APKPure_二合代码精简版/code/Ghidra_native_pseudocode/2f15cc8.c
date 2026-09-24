
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f25cc8(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_02f26140 + 0x2f25cf0);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f26144 + 0x2f25d04));
    func_0x01438628(*(undefined4 *)(_UNK_02f26148 + 0x2f25d10));
    func_0x01438628(*(undefined4 *)(_UNK_02f2614c + 0x2f25d1c));
    func_0x01438628(*(undefined4 *)(_UNK_02f26150 + 0x2f25d28));
    func_0x01438628(*(undefined4 *)(_UNK_02f26154 + 0x2f25d34));
    func_0x01438628(*(undefined4 *)(_UNK_02f26158 + 0x2f25d40));
    func_0x01438628(*(undefined4 *)(_UNK_02f2615c + 0x2f25d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02f26160 + 0x2f25d58));
    func_0x01438628(*(undefined4 *)(_UNK_02f26164 + 0x2f25d64));
    func_0x01438628(*(undefined4 *)(_UNK_02f26168 + 0x2f25d70));
    func_0x01438628(*(undefined4 *)(_UNK_02f2616c + 0x2f25d7c));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3a30,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f26170 + 0x2f25de8));
    func_0x02f2d984(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_02f1f4a4(param_1);
    if (iVar6 != 0) {
      func_0x02f2619c(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_02f26174 + 0x2f25e40) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f26178 + 0x2f25e6c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_02f26180 + 0x2f25e98),
                              **(undefined4 **)(_UNK_02f2617c + 0x2f25e8c));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_02f2613c;
      fVar1 = _UNK_02f26138;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02f26184 + 0x2f25edc));
          func_0x02f2d98c(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_02f259d4(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_02f26188 + 0x2f25f3c));
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
            iVar9 = func_0x02cebf58(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_02f2618c + 0x2f26010));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_02f26190 + 0x2f2602c),0);
            if (*(int *)(**(int **)(_UNK_02f26194 + 0x2f26040) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x02f26578(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_02f26198 + 0x2f260b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x21d,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3a30,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

