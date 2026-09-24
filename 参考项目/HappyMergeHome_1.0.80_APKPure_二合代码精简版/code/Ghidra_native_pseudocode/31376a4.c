
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031476a4(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_03147b1c + 0x31476cc);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03147b20 + 0x31476e0));
    func_0x01438628(*(undefined4 *)(_UNK_03147b24 + 0x31476ec));
    func_0x01438628(*(undefined4 *)(_UNK_03147b28 + 0x31476f8));
    func_0x01438628(*(undefined4 *)(_UNK_03147b2c + 0x3147704));
    func_0x01438628(*(undefined4 *)(_UNK_03147b30 + 0x3147710));
    func_0x01438628(*(undefined4 *)(_UNK_03147b34 + 0x314771c));
    func_0x01438628(*(undefined4 *)(_UNK_03147b38 + 0x3147728));
    func_0x01438628(*(undefined4 *)(_UNK_03147b3c + 0x3147734));
    func_0x01438628(*(undefined4 *)(_UNK_03147b40 + 0x3147740));
    func_0x01438628(*(undefined4 *)(_UNK_03147b44 + 0x314774c));
    func_0x01438628(*(undefined4 *)(_UNK_03147b48 + 0x3147758));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3a90,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03147b4c + 0x31477c4));
    func_0x03156378(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_0313e88c(param_1);
    if (iVar6 != 0) {
      func_0x03147b78(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_03147b50 + 0x314781c) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03147b54 + 0x3147848));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_03147b5c + 0x3147874),
                              **(undefined4 **)(_UNK_03147b58 + 0x3147868));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_03147b18;
      fVar1 = _UNK_03147b14;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_03147b60 + 0x31478b8));
          func_0x03156380(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_031473b0(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar9,fVar7,**(undefined4 **)(_UNK_03147b64 + 0x3147918));
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
            iVar9 = func_0x02ce9904(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_03147b68 + 0x31479ec));
            func_0x05096384(uVar13,iVar8,**(undefined4 **)(_UNK_03147b6c + 0x3147a08),0);
            if (*(int *)(**(int **)(_UNK_03147b70 + 0x3147a1c) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x03147f50(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_03147b74 + 0x3147a94) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x291,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3a90,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

