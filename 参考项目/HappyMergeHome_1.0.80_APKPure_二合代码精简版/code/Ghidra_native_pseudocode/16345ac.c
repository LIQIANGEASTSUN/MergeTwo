
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016445ac(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_01644a24 + 0x16445d4);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01644a28 + 0x16445e8));
    func_0x01438628(*(undefined4 *)(_UNK_01644a2c + 0x16445f4));
    func_0x01438628(*(undefined4 *)(_UNK_01644a30 + 0x1644600));
    func_0x01438628(*(undefined4 *)(_UNK_01644a34 + 0x164460c));
    func_0x01438628(*(undefined4 *)(_UNK_01644a38 + 0x1644618));
    func_0x01438628(*(undefined4 *)(_UNK_01644a3c + 0x1644624));
    func_0x01438628(*(undefined4 *)(_UNK_01644a40 + 0x1644630));
    func_0x01438628(*(undefined4 *)(_UNK_01644a44 + 0x164463c));
    func_0x01438628(*(undefined4 *)(_UNK_01644a48 + 0x1644648));
    func_0x01438628(*(undefined4 *)(_UNK_01644a4c + 0x1644654));
    func_0x01438628(*(undefined4 *)(_UNK_01644a50 + 0x1644660));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3be9,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01644a54 + 0x16446cc));
    func_0x01653dc0(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_0163bb3c(param_1);
    if (iVar6 != 0) {
      func_0x01644a80(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_01644a58 + 0x1644724) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01644a5c + 0x1644750));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_01644a64 + 0x164477c),
                              **(undefined4 **)(_UNK_01644a60 + 0x1644770));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_01644a20;
      fVar1 = _UNK_01644a1c;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01644a68 + 0x16447c0));
          func_0x01653dc8(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_016442b8(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_01644a6c + 0x1644820));
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
            iVar9 = func_0x02ce921c(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01644a70 + 0x16448f4));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_01644a74 + 0x1644910),0);
            if (*(int *)(**(int **)(_UNK_01644a78 + 0x1644924) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x01644e58(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_01644a7c + 0x164499c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x344,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3be9,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

