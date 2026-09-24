
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032a90e0(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_032a9580 + 0x32a9108);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a9584 + 0x32a911c));
    func_0x01438628(*(undefined4 *)(_UNK_032a9588 + 0x32a9128));
    func_0x01438628(*(undefined4 *)(_UNK_032a958c + 0x32a9134));
    func_0x01438628(*(undefined4 *)(_UNK_032a9590 + 0x32a9140));
    func_0x01438628(*(undefined4 *)(_UNK_032a9594 + 0x32a914c));
    func_0x01438628(*(undefined4 *)(_UNK_032a9598 + 0x32a9158));
    func_0x01438628(*(undefined4 *)(_UNK_032a959c + 0x32a9164));
    func_0x01438628(*(undefined4 *)(_UNK_032a95a0 + 0x32a9170));
    func_0x01438628(*(undefined4 *)(_UNK_032a95a4 + 0x32a917c));
    func_0x01438628(*(undefined4 *)(_UNK_032a95a8 + 0x32a9188));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar7 = func_0x02953fd4(0x3a5a,0);
  if (iVar7 == 0) {
    iVar7 = FUN_032a4314(param_1);
    if (iVar7 != 0) {
      func_0x032a95d4(&fStack_70,param_1,param_2);
      fVar5 = fStack_6c;
      fVar1 = fStack_70;
      fStack_6c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar7 = **(int **)(**(int **)(_UNK_032a95ac + 0x32a923c) + 0x5c);
      fStack_70 = 0.0;
      uStack_60 = 0;
      fStack_4c = fVar1;
      fStack_5c = fStack_6c;
      uStack_58 = uStack_68;
      uStack_54 = uStack_64;
      func_0x02028d38(&fStack_70,0x92,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar19 = uStack_64;
      func_0x02e64460(iVar7,fVar1,fVar5,fStack_5c,fStack_70,fStack_6c,uStack_68,uStack_64,uStack_60,
                      fStack_5c,uStack_58,uStack_54,1,0,0,0);
      if (*(int *)(**(int **)(_UNK_032a95b0 + 0x32a92c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_032a95b4 + 0x32a92dc));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      fVar8 = (float)func_0x03579aec(iVar7,**(undefined4 **)(_UNK_032a95bc + 0x32a930c),
                                     **(undefined4 **)(_UNK_032a95b8 + 0x32a9300));
      fVar3 = _UNK_032a957c;
      fVar2 = _UNK_032a9578;
      fVar17 = fVar5;
      if (0 < (int)fVar5) {
        fVar17 = fStack_4c;
        fVar1 = fVar8;
      }
      if (0 < (int)fVar17) {
        fVar17 = 0.0;
        piVar15 = *(int **)(_UNK_032a95c0 + 0x32a9340);
        do {
          if ((uint)fVar17 < 8) {
            fVar9 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar10 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar8 = fStack_4c;
            if (param_3 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x02ce767c(param_3,0);
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
              iVar16 = func_0x014388d4(**(undefined4 **)(_UNK_032a95c4 + 0x32a9438));
              func_0x05096384(iVar16,uVar13,**(undefined4 **)(_UNK_032a95c8 + 0x32a9458),0);
              piVar12 = (int *)(*(int *)(*piVar15 + 0x5c) + 4);
              *piVar12 = iVar16;
              func_0x014385cc(piVar12,iVar16);
            }
            if (*(int *)(**(int **)(_UNK_032a95cc + 0x32a9480) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar18 = (float)VectorSignedToFloat(fVar17,(byte)(in_fpscr >> 0x16) & 3);
            func_0x032a99b0(fVar8,fVar9 + fVar4,fVar10 + fVar6,uVar11,fVar3 + fVar18 * fVar2,1,
                            iVar16);
          }
          fVar17 = (float)((int)fVar17 + 1);
        } while (fVar5 != fVar17);
      }
      if (*(int *)(**(int **)(_UNK_032a95d0 + 0x32a94f8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      uVar11 = func_0x0515c4b0(&fStack_4c,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar7,0x21d,uVar11,0,0,0,0,uVar19,0,0,0,0,0);
    }
  }
  else {
    iVar7 = func_0x029540a4(0x3a5a,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar7,param_1,param_2,param_3,0);
  }
  return;
}

