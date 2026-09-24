
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c55ac(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_018c5a24 + 0x18c55d4);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c5a28 + 0x18c55e8));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a2c + 0x18c55f4));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a30 + 0x18c5600));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a34 + 0x18c560c));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a38 + 0x18c5618));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a3c + 0x18c5624));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a40 + 0x18c5630));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a44 + 0x18c563c));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a48 + 0x18c5648));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a4c + 0x18c5654));
    func_0x01438628(*(undefined4 *)(_UNK_018c5a50 + 0x18c5660));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3b17,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018c5a54 + 0x18c56cc));
    func_0x018d3f44(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_018bd3dc(param_1);
    if (iVar6 != 0) {
      func_0x018c5a80(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_018c5a58 + 0x18c5724) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_018c5a5c + 0x18c5750));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_018c5a64 + 0x18c577c),
                              **(undefined4 **)(_UNK_018c5a60 + 0x18c5770));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_018c5a20;
      fVar1 = _UNK_018c5a1c;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_018c5a68 + 0x18c57c0));
          func_0x018d3f4c(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_018c52b8(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_018c5a6c + 0x18c5820));
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
            iVar9 = func_0x02ce5344(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_018c5a70 + 0x18c58f4));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_018c5a74 + 0x18c5910),0);
            if (*(int *)(**(int **)(_UNK_018c5a78 + 0x18c5924) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x018c5e58(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_018c5a7c + 0x18c599c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x2cf,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3b17,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

