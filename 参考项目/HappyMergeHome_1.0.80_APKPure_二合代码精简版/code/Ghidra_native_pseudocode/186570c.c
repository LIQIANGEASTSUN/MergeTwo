
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0187570c(undefined4 param_1,undefined4 param_2,int param_3)

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
  
  pcVar14 = (char *)(_UNK_01875b84 + 0x1875734);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01875b88 + 0x1875748));
    func_0x01438628(*(undefined4 *)(_UNK_01875b8c + 0x1875754));
    func_0x01438628(*(undefined4 *)(_UNK_01875b90 + 0x1875760));
    func_0x01438628(*(undefined4 *)(_UNK_01875b94 + 0x187576c));
    func_0x01438628(*(undefined4 *)(_UNK_01875b98 + 0x1875778));
    func_0x01438628(*(undefined4 *)(_UNK_01875b9c + 0x1875784));
    func_0x01438628(*(undefined4 *)(_UNK_01875ba0 + 0x1875790));
    func_0x01438628(*(undefined4 *)(_UNK_01875ba4 + 0x187579c));
    func_0x01438628(*(undefined4 *)(_UNK_01875ba8 + 0x18757a8));
    func_0x01438628(*(undefined4 *)(_UNK_01875bac + 0x18757b4));
    func_0x01438628(*(undefined4 *)(_UNK_01875bb0 + 0x18757c0));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3acc,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01875bb4 + 0x187582c));
    func_0x01883cc0(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_0186d808(param_1);
    if (iVar6 != 0) {
      func_0x01875be0(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_01875bb8 + 0x1875884) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01875bbc + 0x18758b0));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_01875bc4 + 0x18758dc),
                              **(undefined4 **)(_UNK_01875bc0 + 0x18758d0));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_01875b80;
      fVar1 = _UNK_01875b7c;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01875bc8 + 0x1875920));
          func_0x01883cc8(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_01875418(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_01875bcc + 0x1875980));
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
            iVar9 = func_0x02ce5710(param_3,0);
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
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01875bd0 + 0x1875a54));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_01875bd4 + 0x1875a70),0);
            if (*(int *)(**(int **)(_UNK_01875bd8 + 0x1875a84) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x01875fb8(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_01875bdc + 0x1875afc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x286,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3acc,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

