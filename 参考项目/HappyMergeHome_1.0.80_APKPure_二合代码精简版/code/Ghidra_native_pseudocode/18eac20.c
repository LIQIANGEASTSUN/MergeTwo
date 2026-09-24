
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018fac20(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  float fVar17;
  uint in_fpscr;
  float fVar18;
  undefined4 uVar19;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_4c;
  
  pcVar14 = (char *)(_UNK_018fb0c0 + 0x18fac48);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fb0c4 + 0x18fac5c));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0c8 + 0x18fac68));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0cc + 0x18fac74));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0d0 + 0x18fac80));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0d4 + 0x18fac8c));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0d8 + 0x18fac98));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0dc + 0x18faca4));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0e0 + 0x18facb0));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0e4 + 0x18facbc));
    func_0x01438628(*(undefined4 *)(_UNK_018fb0e8 + 0x18facc8));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar7 = func_0x02953fd4(0x3a84,0);
  if (iVar7 == 0) {
    iVar7 = FUN_018f5e54(param_1);
    if (iVar7 != 0) {
      func_0x018fb114(&fStack_70,param_1,param_2);
      fVar5 = fStack_6c;
      fVar1 = fStack_70;
      fStack_6c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar7 = **(int **)(**(int **)(_UNK_018fb0ec + 0x18fad7c) + 0x5c);
      fStack_70 = 0.0;
      uStack_60 = 0;
      fStack_4c = fVar1;
      fStack_5c = fStack_6c;
      uStack_58 = uStack_68;
      uStack_54 = uStack_64;
      func_0x02028d38(&fStack_70,0x9f,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar19 = uStack_64;
      func_0x02e64460(iVar7,fVar1,fVar5,fStack_5c,fStack_70,fStack_6c,uStack_68,uStack_64,uStack_60,
                      fStack_5c,uStack_58,uStack_54,1,0,0,0);
      if (*(int *)(**(int **)(_UNK_018fb0f0 + 0x18fae00) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018fb0f4 + 0x18fae1c));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      fVar8 = (float)func_0x03579aec(iVar7,**(undefined4 **)(_UNK_018fb0fc + 0x18fae4c),
                                     **(undefined4 **)(_UNK_018fb0f8 + 0x18fae40));
      fVar3 = _UNK_018fb0bc;
      fVar2 = _UNK_018fb0b8;
      fVar17 = fVar5;
      if (0 < (int)fVar5) {
        fVar17 = fStack_4c;
        fVar1 = fVar8;
      }
      if (0 < (int)fVar17) {
        fVar17 = 0.0;
        piVar15 = *(int **)(_UNK_018fb100 + 0x18fae80);
        do {
          if ((uint)fVar17 < 8) {
            fVar9 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar10 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar8 = fStack_4c;
            if (param_3 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x02ce4fd0(param_3,0);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&fStack_70,iVar7,0);
            fVar6 = fStack_6c;
            fVar4 = fStack_70;
            if (fVar1 == 0.0) {
              func_0x014388e4();
            }
            uVar11 = func_0x024eecb8(fVar1,0);
            iVar7 = *piVar15;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar15;
            }
            iVar16 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
            if (iVar16 == 0) {
              if (*(int *)(iVar7 + 0x74) == 0) {
                func_0x014387a4();
                iVar7 = *piVar15;
              }
              uVar13 = **(undefined4 **)(iVar7 + 0x5c);
              iVar16 = func_0x014388d4(**(undefined4 **)(_UNK_018fb104 + 0x18faf78));
              func_0x0152e3ec(iVar16,uVar13,**(undefined4 **)(_UNK_018fb108 + 0x18faf98),0);
              piVar12 = (int *)(*(int *)(*piVar15 + 0x5c) + 4);
              *piVar12 = iVar16;
              func_0x014385cc(piVar12,iVar16);
            }
            if (*(int *)(**(int **)(_UNK_018fb10c + 0x18fafc0) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar18 = (float)VectorSignedToFloat(fVar17,(byte)(in_fpscr >> 0x16) & 3);
            func_0x018fb4f0(fVar8,fVar9 + fVar4,fVar10 + fVar6,uVar11,fVar3 + fVar18 * fVar2,1,
                            iVar16);
          }
          fVar17 = (float)((int)fVar17 + 1);
        } while (fVar5 != fVar17);
      }
      if (*(int *)(**(int **)(_UNK_018fb110 + 0x18fb038) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      uVar11 = func_0x01524ffc(&fStack_4c,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar7,0x21d,uVar11,0,0,0,0,uVar19,0,0,0,0,0);
    }
  }
  else {
    iVar7 = func_0x029540a4(0x3a84,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar7,param_1,param_2,param_3,0);
  }
  return;
}

