
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f0d34(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_016f11ac + 0x16f0d5c);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f11b0 + 0x16f0d70));
    func_0x01438628(*(undefined4 *)(_UNK_016f11b4 + 0x16f0d7c));
    func_0x01438628(*(undefined4 *)(_UNK_016f11b8 + 0x16f0d88));
    func_0x01438628(*(undefined4 *)(_UNK_016f11bc + 0x16f0d94));
    func_0x01438628(*(undefined4 *)(_UNK_016f11c0 + 0x16f0da0));
    func_0x01438628(*(undefined4 *)(_UNK_016f11c4 + 0x16f0dac));
    func_0x01438628(*(undefined4 *)(_UNK_016f11c8 + 0x16f0db8));
    func_0x01438628(*(undefined4 *)(_UNK_016f11cc + 0x16f0dc4));
    func_0x01438628(*(undefined4 *)(_UNK_016f11d0 + 0x16f0dd0));
    func_0x01438628(*(undefined4 *)(_UNK_016f11d4 + 0x16f0ddc));
    func_0x01438628(*(undefined4 *)(_UNK_016f11d8 + 0x16f0de8));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3aae,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016f11dc + 0x16f0e54));
    func_0x024eeca8(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_016ea4e8(param_1);
    if (iVar6 != 0) {
      func_0x016f1210(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_016f11e0 + 0x16f0eac) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016f11e4 + 0x16f0ed8));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_016f11ec + 0x16f0f04),
                              **(undefined4 **)(_UNK_016f11e8 + 0x16f0ef8));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_016f11a8;
      fVar1 = _UNK_016f11a4;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_016f11f0 + 0x16f0f48));
          func_0x024eeca8(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_016f0a40(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_016f11f4 + 0x16f0fa8));
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
            iVar9 = func_0x02ce6854(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_016f11f8 + 0x16f107c));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_016f11fc + 0x16f1098),0);
            if (*(int *)(**(int **)(_UNK_016f1200 + 0x16f10ac) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x016f15f0(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_016f1204 + 0x16f1124) + 0x74) == 0) {
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
    iVar5 = func_0x029540a4(0x3aae,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

