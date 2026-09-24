
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e8594(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar12 = (char *)(_UNK_031e8b7c + 0x31e85c0);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e8b80 + 0x31e85d4));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b84 + 0x31e85e0));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b88 + 0x31e85ec));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b8c + 0x31e85f8));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b90 + 0x31e8604));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b94 + 0x31e8610));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b98 + 0x31e861c));
    func_0x01438628(*(undefined4 *)(_UNK_031e8b9c + 0x31e8628));
    func_0x01438628(*(undefined4 *)(_UNK_031e8ba0 + 0x31e8634));
    func_0x01438628(*(undefined4 *)(_UNK_031e8ba4 + 0x31e8640));
    func_0x01438628(*(undefined4 *)(_UNK_031e8ba8 + 0x31e864c));
    func_0x01438628(*(undefined4 *)(_UNK_031e8bac + 0x31e8658));
    func_0x01438628(*(undefined4 *)(_UNK_031e8bb0 + 0x31e8664));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x330f,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031e8bb4 + 0x31e86d8));
    func_0x051b0d14(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar2 + 0x14) = param_1;
    func_0x014385cc((int *)(iVar2 + 0x14),param_1);
    *(undefined4 *)(iVar2 + 0x18) = param_6;
    func_0x014385cc((undefined4 *)(iVar2 + 0x18),param_6);
    piVar14 = *(int **)(_UNK_031e8bb8 + 0x31e8724);
    iVar8 = *(int *)(*piVar14 + 0x74);
    *(undefined1 *)(param_1 + 0x39) = 1;
    if (iVar8 == 0) {
      func_0x014387a4();
    }
    puVar13 = *(undefined4 **)(_UNK_031e8bbc + 0x31e8744);
    iVar8 = func_0x04e4a028(*puVar13);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x03579aec(iVar8,**(undefined4 **)(_UNK_031e8bc4 + 0x31e8770),
                            **(undefined4 **)(_UNK_031e8bc0 + 0x31e8764));
    pcVar12 = (char *)(_UNK_031e8bc8 + 0x31e8788);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031e8bcc + 0x31e879c));
      *pcVar12 = '\x01';
    }
    puVar3 = *(undefined8 **)(**(int **)(_UNK_031e8bd0 + 0x31e87b4) + 0x5c);
    uVar21 = *puVar3;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)(iVar2 + 8) = uVar21;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x014e94d8(iVar8,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x024efc2c(iVar4,0);
    if (iVar4 == 0) {
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(*puVar13);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03579aec(iVar4,**(undefined4 **)(_UNK_031e8bd8 + 0x31e885c),
                              **(undefined4 **)(_UNK_031e8bd4 + 0x31e8850));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar4 = iVar8;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
    }
    iVar4 = func_0x024eecb8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_58,iVar4,0);
    uStack_40 = uStack_50;
    *(undefined4 *)(iVar2 + 0x10) = uStack_50;
    uStack_48 = uStack_58;
    *(undefined8 *)(iVar2 + 8) = uStack_58;
    iVar4 = func_0x02b1cc10(0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x024eecb8(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x024efc6c(&uStack_48,iVar4,param_3,param_4,param_5,0);
    piVar14 = *(int **)(_UNK_031e8bdc + 0x31e8918);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x05160abc(param_2,8,0);
    fVar19 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    pcVar12 = (char *)(_UNK_031e8be0 + 0x31e894c);
    fVar20 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031e8be4 + 0x31e8968));
      *pcVar12 = '\x01';
    }
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar20 = (float)func_0x024f04b4(fVar19 / fVar20);
    fVar19 = _UNK_031e8b78;
    uVar18 = in_fpscr & 0xfffffff | (uint)(fVar20 == _UNK_031e8b74) << 0x1e;
    iVar4 = (int)fVar20;
    if (SUB41(uVar18 >> 0x1e,0)) {
      iVar4 = -0x80000000;
    }
    if (0 < param_2) {
      iVar16 = 0;
      do {
        iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_031e8be8 + 0x31e89d4));
        func_0x051b0d14(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        piVar14 = (int *)(iVar6 + 0xc);
        *piVar14 = iVar2;
        func_0x014385cc(piVar14,iVar2);
        bVar1 = param_2 < iVar4;
        param_2 = param_2 - iVar4;
        if (bVar1) {
          param_2 = 0;
        }
        iVar9 = *(int *)(**(int **)(_UNK_031e8bec + 0x31e8a10) + 0x74);
        *(int *)(iVar6 + 8) = param_2;
        if (iVar9 == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_031e8bf0 + 0x31e8a3c));
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar10 = *piVar14;
        uVar5 = *(undefined4 *)(iVar8 + 0x28);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar15 = *(undefined4 *)(iVar10 + 8);
        uVar11 = *(undefined4 *)(iVar10 + 0xc);
        uVar17 = *(undefined4 *)(iVar10 + 0x10);
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_031e8bf4 + 0x31e8a78));
        func_0x05096384(uVar7,iVar6,**(undefined4 **)(_UNK_031e8bf8 + 0x31e8aa0),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        fVar20 = (float)VectorSignedToFloat(iVar16,(byte)(uVar18 >> 0x16) & 3);
        func_0x02b777e0(iVar9,uVar5,param_3,param_4,param_5,uVar15,uVar11,uVar17,1,0x3f333333,
                        fVar20 * fVar19,uVar7,0x3f000000,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                        0x3e99999a,1,1,0);
        iVar16 = iVar16 + 1;
      } while (0 < param_2);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x330f,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

