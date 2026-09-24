
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019019dc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
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
  
  pcVar12 = (char *)(_UNK_01901ef0 + 0x1901a08);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01901ef4 + 0x1901a1c));
    func_0x01438628(*(undefined4 *)(_UNK_01901ef8 + 0x1901a28));
    func_0x01438628(*(undefined4 *)(_UNK_01901efc + 0x1901a34));
    func_0x01438628(*(undefined4 *)(_UNK_01901f00 + 0x1901a40));
    func_0x01438628(*(undefined4 *)(_UNK_01901f04 + 0x1901a4c));
    func_0x01438628(*(undefined4 *)(_UNK_01901f08 + 0x1901a58));
    func_0x01438628(*(undefined4 *)(_UNK_01901f0c + 0x1901a64));
    func_0x01438628(*(undefined4 *)(_UNK_01901f10 + 0x1901a70));
    func_0x01438628(*(undefined4 *)(_UNK_01901f14 + 0x1901a7c));
    func_0x01438628(*(undefined4 *)(_UNK_01901f18 + 0x1901a88));
    func_0x01438628(*(undefined4 *)(_UNK_01901f1c + 0x1901a94));
    func_0x01438628(*(undefined4 *)(_UNK_01901f20 + 0x1901aa0));
    *pcVar12 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x1d60,0);
  if (iVar3 == 0) {
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01901f24 + 0x1901b20));
    func_0x024eeca8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar3 + 0xc) = param_7;
    func_0x014385cc((undefined4 *)(iVar3 + 0xc),param_7);
    if (*(int *)(**(int **)(_UNK_01901f28 + 0x1901b58) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01901f2c + 0x1901b74));
    piVar9 = *(int **)(_UNK_01901f30 + 0x1901b88);
    iVar5 = *piVar9;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar9;
    }
    uVar13 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x6e4);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar13 = func_0x0374c388(iVar4,uVar13,**(undefined4 **)(_UNK_01901f34 + 0x1901bc0));
    puVar11 = (undefined4 *)(iVar3 + 8);
    *puVar11 = uVar13;
    func_0x014385cc(puVar11,uVar13);
    uVar13 = *puVar11;
    if (*(int *)(**(int **)(_UNK_01901f38 + 0x1901be8) + 0x74) == 0) {
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
      piVar9 = *(int **)(_UNK_01901f3c + 0x1901c74);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar13 = func_0x0152adfc(param_3,8,0);
      fVar16 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      pcVar12 = (char *)(_UNK_01901f40 + 0x1901ca8);
      fVar17 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      if (*pcVar12 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01901f44 + 0x1901cc4));
        *pcVar12 = '\x01';
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar17 = (float)func_0x024f04b4(fVar16 / fVar17);
      fVar16 = _UNK_01901eec;
      uVar15 = in_fpscr & 0xfffffff | (uint)(fVar17 == _UNK_01901ee8) << 0x1e;
      iVar4 = (int)fVar17;
      if (SUB41(uVar15 >> 0x1e,0)) {
        iVar4 = -0x80000000;
      }
      if (0 < param_3) {
        iVar5 = 0;
        do {
          iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01901f48 + 0x1901d2c));
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
          iVar8 = *(int *)(**(int **)(_UNK_01901f4c + 0x1901d68) + 0x74);
          *(int *)(iVar6 + 8) = iVar14;
          if (iVar8 == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01901f50 + 0x1901d94));
          iVar10 = *piVar9;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 8);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x01914f3c(iVar10,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x024ef228(&uStack_44,iVar10,0);
          uVar2 = uStack_3c;
          uVar1 = uStack_40;
          uVar13 = uStack_44;
          uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01901f54 + 0x1901e00));
          func_0x0152e3ec(uVar7,iVar6,**(undefined4 **)(_UNK_01901f58 + 0x1901e1c),0);
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
    iVar3 = func_0x029540a4(0x1d60,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x028b4820(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

