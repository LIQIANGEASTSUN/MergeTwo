
/* WARNING: Possible PIC construction at 0x02c281f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c281f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c27bc0(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                float param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pcVar9 = (char *)(_UNK_02c28314 + 0x2c27bf0);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c28318 + 0x2c27c14));
    func_0x01438628(*(undefined4 *)(_UNK_02c2831c + 0x2c27c20));
    func_0x01438628(*(undefined4 *)(_UNK_02c28320 + 0x2c27c2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c28324 + 0x2c27c38));
    func_0x01438628(*(undefined4 *)(_UNK_02c28328 + 0x2c27c44));
    func_0x01438628(*(undefined4 *)(_UNK_02c2832c + 0x2c27c50));
    func_0x01438628(*(undefined4 *)(_UNK_02c28330 + 0x2c27c5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c28334 + 0x2c27c68));
    func_0x01438628(*(undefined4 *)(_UNK_02c28338 + 0x2c27c74));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x4ff8,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c2833c + 0x2c27d00));
    func_0x02c475f4(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar2 + 8) = param_1;
    func_0x014385cc((int *)(iVar2 + 8),param_1);
    *(undefined4 *)(iVar2 + 0xc) = param_9;
    func_0x014385cc((undefined4 *)(iVar2 + 0xc),param_9);
    pcVar9 = (char *)(_UNK_02c28340 + 0x2c27d58);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c28344 + 0x2c27d84));
      *pcVar9 = '\x01';
    }
    piVar6 = *(int **)(_UNK_02c28348 + 0x2c27da4);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar9 = (char *)(_UNK_02c2834c + 0x2c27dc8);
    fVar12 = SQRT((param_3 - param_6) * (param_3 - param_6) +
                  (param_2 - param_5) * (param_2 - param_5) +
                  (param_4 - param_7) * (param_4 - param_7)) / *(float *)(param_1 + 0x108) + 3.0;
    fVar15 = fVar12;
    if (10.0 < fVar12) {
      fVar15 = 10.0;
    }
    fVar16 = 5.0;
    if (5.0 <= fVar12) {
      fVar16 = fVar15;
    }
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c28350 + 0x2c27e14));
      *pcVar9 = '\x01';
    }
    fVar17 = param_7 - param_4;
    fVar12 = param_6 - param_3;
    fVar15 = param_5 - param_2;
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar14 = _UNK_02c27e88;
    pcVar9 = (char *)(_UNK_02c28354 + 0x2c27e60);
    fVar13 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar17 * fVar17);
    if (fVar13 <= _UNK_02c27e84) {
      if (*pcVar9 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c28358 + 0x2c27ea4));
        *pcVar9 = '\x01';
      }
      pfVar3 = *(float **)(**(int **)(_UNK_02c2835c + 0x2c27eb8) + 0x5c);
      fVar15 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar17 = pfVar3[2];
    }
    else {
      fVar17 = fVar17 / fVar13;
      fVar12 = fVar12 / fVar13;
      fVar15 = fVar15 / fVar13;
    }
    fVar14 = fVar14 / ((10.0 - fVar16) + 1.0);
    iVar7 = *(int *)(param_1 + 0x164);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    param_7 = param_7 - fVar14 * fVar17;
    param_6 = param_6 - fVar14 * fVar12;
    param_5 = param_5 - fVar14 * fVar15;
    if (*(int *)(iVar7 + 0xc) == 0) {
      func_0x014388e8();
    }
    iVar4 = _UNK_02c28360;
    *(float *)(iVar7 + 0x10) = param_2;
    *(float *)(iVar7 + 0x14) = param_3;
    *(float *)(iVar7 + 0x18) = param_4;
    iVar7 = *(int *)(param_1 + 0x164);
    if (*(char *)(iVar4 + 0x2c27f24) == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c28364 + 0x2c27f44));
      *(char *)(iVar4 + 0x2c27f24) = '\x01';
    }
    fVar15 = _UNK_02c2830c;
    piVar6 = *(int **)(_UNK_02c28368 + 0x2c27f6c);
    iVar4 = *(int *)(*piVar6 + 0x5c);
    fVar12 = *(float *)(iVar4 + 0x18);
    fVar16 = *(float *)(iVar4 + 0x1c);
    fVar17 = *(float *)(iVar4 + 0x20);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) < 2) {
      func_0x014388e8();
    }
    *(float *)(iVar7 + 0x1c) = (param_5 + param_2) * 0.5 + fVar12 * fVar15;
    *(float *)(iVar7 + 0x20) = (param_6 + param_3) * 0.5 + fVar16 * fVar15;
    *(float *)(iVar7 + 0x24) = (param_7 + param_4) * 0.5 + fVar17 * fVar15;
    iVar7 = *(int *)(param_1 + 0x164);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) < 3) {
      func_0x014388e8();
    }
    *(float *)(iVar7 + 0x28) = param_5;
    *(float *)(iVar7 + 0x2c) = param_6;
    *(float *)(iVar7 + 0x30) = param_7;
    iVar7 = *(int *)(param_1 + 0xc4);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x014e94f8(iVar7,0,0);
    iVar7 = func_0x024eecb8(param_1,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024ef1f8(iVar7,param_2,param_3,param_4,0);
    iVar7 = func_0x024eecb8(param_1,0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c2836c + 0x2c28060));
      *pcVar9 = '\x01';
    }
    puVar5 = *(undefined4 **)(*piVar6 + 0x5c);
    uVar8 = puVar5[2];
    uVar10 = *puVar5;
    uVar11 = puVar5[1];
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024ef328(iVar7,uVar10,uVar11,uVar8,0);
    iVar7 = func_0x024eecb8(param_1,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f1154(iVar7,0);
    if (*(int *)(**(int **)(_UNK_02c28370 + 0x2c280dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar8 = func_0x0333764c(0);
    uVar10 = func_0x024eecb8(param_1,0);
    uVar10 = func_0x03346b94(uVar10,*(undefined4 *)(param_1 + 0x164),0x3f000000,1,1,10,0,0,0,0,0,0);
    func_0x0334d380(uVar8,0,uVar10,0);
    uVar10 = func_0x024eecb8(param_1,0);
    uVar10 = func_0x03343a24(uVar10,0x3fcccccd,0x3e800000,0);
    func_0x0334d380(uVar8,0,uVar10,0);
    uVar8 = func_0x024eecb8(param_1,0);
    iVar7 = func_0x03343850(uVar8,0x3f800000,0x3f800000,0x3f800000,0x3e800000,0);
    uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02c28374 + 0x2c281b4));
    func_0x033341c0(uVar8,iVar2,**(undefined4 **)(_UNK_02c28378 + 0x2c281cc),0);
    uVar10 = **(undefined4 **)(_UNK_02c2837c + 0x2c281ec);
    cVar1 = '\0';
    if (iVar7 != 0) {
      cVar1 = *(char *)(iVar7 + 0x90);
    }
    if (iVar7 != 0 && cVar1 != '\0') {
      *(undefined4 *)(iVar7 + 0x4c) = uVar8;
      func_0x024f83f0((undefined4 *)(iVar7 + 0x4c),uVar8,uVar10);
    }
    return iVar7;
  }
  iVar2 = func_0x029540a4(0x4ff8,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x028e8a10(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9,0);
  return iVar2;
}

