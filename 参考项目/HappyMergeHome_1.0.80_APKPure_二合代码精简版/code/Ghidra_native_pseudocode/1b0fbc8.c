
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1fbc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  pcVar12 = (char *)(_UNK_01b201b4 + 0x1b1fbf4);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b201b8 + 0x1b1fc08));
    func_0x01438628(*(undefined4 *)(_UNK_01b201bc + 0x1b1fc14));
    func_0x01438628(*(undefined4 *)(_UNK_01b201c0 + 0x1b1fc20));
    func_0x01438628(*(undefined4 *)(_UNK_01b201c4 + 0x1b1fc2c));
    func_0x01438628(*(undefined4 *)(_UNK_01b201c8 + 0x1b1fc38));
    func_0x01438628(*(undefined4 *)(_UNK_01b201cc + 0x1b1fc44));
    func_0x01438628(*(undefined4 *)(_UNK_01b201d0 + 0x1b1fc50));
    func_0x01438628(*(undefined4 *)(_UNK_01b201d4 + 0x1b1fc5c));
    func_0x01438628(*(undefined4 *)(_UNK_01b201d8 + 0x1b1fc68));
    func_0x01438628(*(undefined4 *)(_UNK_01b201dc + 0x1b1fc74));
    func_0x01438628(*(undefined4 *)(_UNK_01b201e0 + 0x1b1fc80));
    func_0x01438628(*(undefined4 *)(_UNK_01b201e4 + 0x1b1fc8c));
    func_0x01438628(*(undefined4 *)(_UNK_01b201e8 + 0x1b1fc98));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x383b,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01b201ec + 0x1b1fd0c));
    func_0x024eeca8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar2 + 0x14) = param_1;
    func_0x014385cc((int *)(iVar2 + 0x14),param_1);
    *(undefined4 *)(iVar2 + 0x18) = param_6;
    func_0x014385cc((undefined4 *)(iVar2 + 0x18),param_6);
    piVar14 = *(int **)(_UNK_01b201f0 + 0x1b1fd58);
    iVar8 = *(int *)(*piVar14 + 0x74);
    *(undefined1 *)(param_1 + 0x5c) = 1;
    if (iVar8 == 0) {
      func_0x014387a4();
    }
    puVar13 = *(undefined4 **)(_UNK_01b201f4 + 0x1b1fd78);
    iVar8 = func_0x014e9518(*puVar13);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x03579aec(iVar8,**(undefined4 **)(_UNK_01b201fc + 0x1b1fda4),
                            **(undefined4 **)(_UNK_01b201f8 + 0x1b1fd98));
    pcVar12 = (char *)(_UNK_01b20200 + 0x1b1fdbc);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01b20204 + 0x1b1fdd0));
      *pcVar12 = '\x01';
    }
    puVar3 = *(undefined8 **)(**(int **)(_UNK_01b20208 + 0x1b1fde8) + 0x5c);
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
      iVar4 = func_0x014e9518(*puVar13);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03579aec(iVar4,**(undefined4 **)(_UNK_01b20210 + 0x1b1fe90),
                              **(undefined4 **)(_UNK_01b2020c + 0x1b1fe84));
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
    piVar14 = *(int **)(_UNK_01b20214 + 0x1b1ff4c);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x0152adfc(param_2,8,0);
    fVar19 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    pcVar12 = (char *)(_UNK_01b20218 + 0x1b1ff80);
    fVar20 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01b2021c + 0x1b1ff9c));
      *pcVar12 = '\x01';
    }
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar20 = (float)func_0x024f04b4(fVar19 / fVar20);
    fVar19 = _UNK_01b201b0;
    uVar18 = in_fpscr & 0xfffffff | (uint)(fVar20 == _UNK_01b201ac) << 0x1e;
    iVar4 = (int)fVar20;
    if (SUB41(uVar18 >> 0x1e,0)) {
      iVar4 = -0x80000000;
    }
    if (0 < param_2) {
      iVar16 = 0;
      do {
        iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01b20220 + 0x1b20008));
        func_0x024eeca8(iVar6,0);
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
        iVar9 = *(int *)(**(int **)(_UNK_01b20224 + 0x1b20044) + 0x74);
        *(int *)(iVar6 + 8) = param_2;
        if (iVar9 == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01b20228 + 0x1b20070));
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar10 = *piVar14;
        uVar5 = *(undefined4 *)(iVar8 + 0x3c);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar15 = *(undefined4 *)(iVar10 + 8);
        uVar11 = *(undefined4 *)(iVar10 + 0xc);
        uVar17 = *(undefined4 *)(iVar10 + 0x10);
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01b2022c + 0x1b200ac));
        func_0x0152e3ec(uVar7,iVar6,**(undefined4 **)(_UNK_01b20230 + 0x1b200d4),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        fVar20 = (float)VectorSignedToFloat(iVar16,(byte)(uVar18 >> 0x16) & 3);
        func_0x02b777e0(iVar9,uVar5,param_3,param_4,param_5,uVar15,uVar11,uVar17,1,0x3f333333,
                        fVar20 * fVar19,uVar7,0x3f666666,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                        0x3e99999a,1,1,0);
        iVar16 = iVar16 + 1;
      } while (0 < param_2);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x383b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

