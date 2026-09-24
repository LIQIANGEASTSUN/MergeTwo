
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c23454(int param_1,float param_2,float param_3,float param_4)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  pcVar4 = (char *)(_UNK_02c239b4 + 0x2c2347c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c239b8 + 0x2c23494));
    func_0x01438628(*(undefined4 *)(_UNK_02c239bc + 0x2c234a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c239c0 + 0x2c234ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c239c4 + 0x2c234b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c239c8 + 0x2c234c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c239cc + 0x2c234d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c239d0 + 0x2c234dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c239d4 + 0x2c234e8));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xea8,0);
  if (iVar2 == 0) {
    piVar5 = (int *)(param_1 + 0x134);
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      uVar17 = FloatVectorSub(*(undefined8 *)(param_1 + 0x13c),*(undefined8 *)(param_1 + 0x154),2,
                              0x20);
      fVar13 = *(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x150);
      uVar17 = FloatVectorMult(uVar17,uVar17,2,0x20);
      if ((float)((ulonglong)uVar17 >> 0x20) + (float)uVar17 + fVar13 * fVar13 < _UNK_02c236ac) {
        return iVar2;
      }
      func_0x0333a0d0(iVar2,0,0);
    }
    iVar2 = *(int *)(param_1 + 100);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024eecb8(iVar2,0);
    uVar9 = *(undefined4 *)(param_1 + 0x150);
    uVar6 = *(undefined4 *)(param_1 + 0x154);
    uVar10 = *(undefined4 *)(param_1 + 0x158);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024ef1f8(iVar2,uVar9,uVar6,uVar10,0);
    pcVar4 = (char *)(_UNK_02c239d8 + 0x2c23608);
    fVar13 = *(float *)(param_1 + 0x150);
    fVar15 = *(float *)(param_1 + 0x154);
    cVar1 = *pcVar4;
    fVar16 = *(float *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x150);
    if (cVar1 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c239dc + 0x2c23634));
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_02c239e0 + 0x2c23658) + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar14 = SQRT(param_3 * param_3 + param_2 * param_2 + param_4 * param_4);
    if (fVar14 <= _UNK_02c239b0) {
      pcVar4 = (char *)(_UNK_02c239e4 + 0x2c236bc);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c239e8 + 0x2c236d0));
        *pcVar4 = '\x01';
      }
      pfVar3 = *(float **)(**(int **)(_UNK_02c239ec + 0x2c236e4) + 0x5c);
      param_2 = *pfVar3;
      param_3 = pfVar3[1];
      param_4 = pfVar3[2];
    }
    else {
      param_4 = param_4 / fVar14;
      param_3 = param_3 / fVar14;
      param_2 = param_2 / fVar14;
    }
    if (*(int *)(**(int **)(_UNK_02c239f0 + 0x2c23704) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x0333764c(0);
    *(undefined4 *)(param_1 + 0x134) = uVar6;
    func_0x014385cc(piVar5,uVar6);
    iVar2 = *(int *)(param_1 + 100);
    uVar6 = *(undefined4 *)(param_1 + 0x134);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024eecb8(iVar2,0);
    uVar9 = func_0x03342888(uVar9,fVar13 + param_2 * 15.0,fVar15 + param_3 * 15.0,
                            fVar16 + param_4 * 15.0,0x3e99999a,0,0);
    puVar12 = *(undefined4 **)(_UNK_02c239f4 + 0x2c23798);
    uVar9 = func_0x0373567c(uVar9,9,*puVar12);
    func_0x03346318(uVar6,uVar9,0);
    iVar2 = *(int *)(param_1 + 100);
    uVar6 = *(undefined4 *)(param_1 + 0x134);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024eecb8(iVar2,0);
    uVar9 = func_0x03342888(uVar9,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),
                            *(undefined4 *)(param_1 + 0x158),0x3f19999a,0,0);
    uVar9 = func_0x0373567c(uVar9,1,*puVar12);
    func_0x03346318(uVar6,uVar9,0);
    iVar2 = *(int *)(param_1 + 100);
    uVar6 = *(undefined4 *)(param_1 + 0x134);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024eecb8(iVar2,0);
    uVar9 = func_0x03343850(uVar9,0x3fa66666,0x3fa66666,0x3f800000,0x3e99999a,0);
    uVar9 = func_0x0373567c(uVar9,9,*puVar12);
    func_0x0334d380(uVar6,0,uVar9,0);
    iVar2 = *(int *)(param_1 + 100);
    uVar6 = *(undefined4 *)(param_1 + 0x134);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024eecb8(iVar2,0);
    uVar9 = func_0x03343850(uVar9,0x3f800000,0x3f800000,0x3f800000,0x3f19999a,0);
    uVar9 = func_0x0373567c(uVar9,1,*puVar12);
    func_0x0334d380(uVar6,0x3e99999a,uVar9,0);
    func_0x03735ac8(*piVar5,0xffffffff,**(undefined4 **)(_UNK_02c239f8 + 0x2c238d8));
    piVar11 = *(int **)(_UNK_02c239fc + 0x2c238ec);
    iVar7 = *piVar5;
    iVar2 = *piVar11;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar11;
    }
    iVar8 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar8 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar11;
      }
      uVar6 = **(undefined4 **)(iVar2 + 0x5c);
      iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02c23a00 + 0x2c23938));
      func_0x033341c0(iVar8,uVar6,**(undefined4 **)(_UNK_02c23a04 + 0x2c23958),0);
      piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
      *piVar11 = iVar8;
      func_0x014385cc(piVar11,iVar8);
    }
    func_0x03734ffc(iVar7,iVar8,**(undefined4 **)(_UNK_02c23a08 + 0x2c23984));
    iVar2 = *piVar5;
    pcVar4 = (char *)(_UNK_0372cfac + 0x372ceb0);
    if (*pcVar4 == '\0') {
      func_0x024f83cc(*(undefined4 *)(_UNK_0372cfb0 + 0x372cec4),
                      **(undefined4 **)(_UNK_02c23a0c + 0x2c2399c));
      func_0x024f83cc(*(undefined4 *)(_UNK_0372cfb4 + 0x372ced0));
      *pcVar4 = '\x01';
    }
    if (iVar2 == 0) {
      if (1 < **(int **)(**(int **)(_UNK_0372cfb8 + 0x372cf30) + 0x5c)) {
        func_0x03362250(0,0);
      }
    }
    else if (*(char *)(iVar2 + 0x90) == '\0') {
      if (1 < **(int **)(**(int **)(_UNK_0372cfbc + 0x372cf5c) + 0x5c)) {
        func_0x033621b8(iVar2,0);
      }
    }
    else if (*(char *)(iVar2 + 0x91) == '\0') {
      if (*(int *)(**(int **)(_UNK_0372cfc4 + 0x372cf88) + 0x74) == 0) {
        func_0x024f83d8();
      }
      func_0x03366944(iVar2,0);
    }
    else if (1 < **(int **)(**(int **)(_UNK_0372cfc0 + 0x372cf04) + 0x5c)) {
      func_0x03362204(iVar2,0);
    }
    return iVar2;
  }
  iVar2 = func_0x029540a4(0xea8,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x02895e70(iVar2,param_1,param_2,param_3,param_4,0);
  return iVar2;
}

