
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017dcb90(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  int iVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar12 = (char *)(_UNK_017dd0a4 + 0x17dcbbc);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dd0a8 + 0x17dcbd0));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0ac + 0x17dcbdc));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0b0 + 0x17dcbe8));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0b4 + 0x17dcbf4));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0b8 + 0x17dcc00));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0bc + 0x17dcc0c));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0c0 + 0x17dcc18));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0c4 + 0x17dcc24));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0c8 + 0x17dcc30));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0cc + 0x17dcc3c));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0d0 + 0x17dcc48));
    func_0x01438628(*(undefined4 *)(_UNK_017dd0d4 + 0x17dcc54));
    *pcVar12 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x1e77,0);
  if (iVar3 == 0) {
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_017dd0d8 + 0x17dccd4));
    func_0x024eeca8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar3 + 0xc) = param_7;
    func_0x014385cc((undefined4 *)(iVar3 + 0xc),param_7);
    if (*(int *)(**(int **)(_UNK_017dd0dc + 0x17dcd0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_017dd0e0 + 0x17dcd28));
    piVar9 = *(int **)(_UNK_017dd0e4 + 0x17dcd3c);
    iVar5 = *piVar9;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar9;
    }
    uVar13 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x654);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar13 = func_0x0374c388(iVar4,uVar13,**(undefined4 **)(_UNK_017dd0e8 + 0x17dcd74));
    puVar11 = (undefined4 *)(iVar3 + 8);
    *puVar11 = uVar13;
    func_0x014385cc(puVar11,uVar13);
    uVar13 = *puVar11;
    if (*(int *)(**(int **)(_UNK_017dd0ec + 0x17dcd9c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024eec50(uVar13,0,0);
    if (iVar4 == 0) {
      iVar4 = func_0x02b1cc10(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x024eecb8(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024efc6c(&uStack_44,iVar4,param_4,param_5,param_6,0);
      piVar9 = *(int **)(_UNK_017dd0f0 + 0x17dce28);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar13 = func_0x0152adfc(param_3,8,0);
      fVar16 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      pcVar12 = (char *)(_UNK_017dd0f4 + 0x17dce5c);
      fVar17 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      if (*pcVar12 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_017dd0f8 + 0x17dce78));
        *pcVar12 = '\x01';
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar17 = (float)func_0x024f04b4(fVar16 / fVar17);
      fVar16 = _UNK_017dd0a0;
      uVar15 = in_fpscr & 0xfffffff | (uint)(fVar17 == _UNK_017dd09c) << 0x1e;
      iVar4 = (int)fVar17;
      if (SUB41(uVar15 >> 0x1e,0)) {
        iVar4 = -0x80000000;
      }
      if (0 < param_3) {
        iVar5 = 0;
        do {
          iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_017dd0fc + 0x17dcee0));
          func_0x024eeca8(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          piVar9 = (int *)(iVar6 + 0xc);
          *piVar9 = iVar3;
          func_0x014385cc(piVar9,iVar3);
          iVar14 = param_3 - iVar4;
          if (param_3 < iVar4) {
            iVar14 = 0;
          }
          iVar8 = *(int *)(**(int **)(_UNK_017dd100 + 0x17dcf1c) + 0x74);
          *(int *)(iVar6 + 8) = iVar14;
          if (iVar8 == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_017dd104 + 0x17dcf48));
          iVar10 = *piVar9;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 8);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x017efb08(iVar10,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x024ef228(&uStack_44,iVar10,0);
          uVar2 = uStack_3c;
          uVar1 = uStack_40;
          uVar13 = uStack_44;
          uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_017dd108 + 0x17dcfb4));
          func_0x0152e3ec(uVar7,iVar6,**(undefined4 **)(_UNK_017dd10c + 0x17dcfd0),0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          fVar17 = (float)VectorSignedToFloat(iVar5,(byte)(uVar15 >> 0x16) & 3);
          func_0x02b777e0(iVar8,param_2,param_4,param_5,param_6,uVar13,uVar1,uVar2,1,0x3f333333,
                          fVar17 * fVar16,uVar7,0x3f000000,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                          0x3e99999a,1,1,0);
          iVar5 = iVar5 + 1;
          param_3 = iVar14;
        } while (0 < iVar14);
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x1e77,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028b4820(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

