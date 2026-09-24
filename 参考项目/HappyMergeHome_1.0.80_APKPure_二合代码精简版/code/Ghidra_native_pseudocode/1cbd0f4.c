
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01ccd0f4(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint in_fpscr;
  float fVar15;
  undefined8 uVar16;
  undefined1 auStack_48 [24];
  
  pcVar7 = (char *)(_UNK_01ccd514 + 0x1ccd110);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccd518 + 0x1ccd124));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd51c + 0x1ccd130));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd520 + 0x1ccd13c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd524 + 0x1ccd148));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd528 + 0x1ccd154));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd52c + 0x1ccd160));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd530 + 0x1ccd16c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd534 + 0x1ccd178));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd538 + 0x1ccd184));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd53c + 0x1ccd190));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafe7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01cca6e4(param_1);
    fVar4 = _UNK_01ccd510;
    if ((iVar1 != 0) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114)),
       iVar1 != 0)) {
      piVar12 = *(int **)(_UNK_01ccd540 + 0x1ccd224);
      iVar8 = param_1[0xf];
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar12;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar9 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar12;
        }
        uVar10 = **(undefined4 **)(iVar1 + 0x5c);
        iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01ccd544 + 0x1ccd270));
        func_0x03a062d0(iVar9,uVar10,**(undefined4 **)(_UNK_01ccd548 + 0x1ccd290),0);
        piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
        *piVar2 = iVar9;
        func_0x014385cc(piVar2,iVar9);
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0618(iVar8,iVar9,**(undefined4 **)(_UNK_01ccd54c + 0x1ccd2c8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = *piVar12;
      iVar9 = *(int *)(iVar1 + 0x18);
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar12;
      }
      iVar11 = *(int *)(*(int *)(iVar8 + 0x5c) + 8);
      if (iVar11 == 0) {
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
          iVar8 = *piVar12;
        }
        uVar10 = **(undefined4 **)(iVar8 + 0x5c);
        iVar11 = func_0x014388d4(**(undefined4 **)(_UNK_01ccd550 + 0x1ccd334));
        func_0x03a05764(iVar11,uVar10,**(undefined4 **)(_UNK_01ccd554 + 0x1ccd354),0);
        piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 8);
        *piVar12 = iVar11;
        func_0x014385cc(piVar12,iVar11);
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x024f1648(iVar9,iVar11,**(undefined4 **)(_UNK_01ccd558 + 0x1ccd38c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0530(iVar1,uVar10,**(undefined4 **)(_UNK_01ccd55c + 0x1ccd3b4));
      iVar8 = FUN_01ccc5a4(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar14 = *(uint *)(iVar8 + 0x28);
      iVar8 = *(int *)(iVar8 + 0x2c);
      if (*(int *)(**(int **)(_UNK_01ccd560 + 0x1ccd3e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(_UNK_01ccd564 + 0x1ccd404);
      iVar9 = func_0x014e9518(*puVar13);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar16 = func_0x026ffbe0(iVar9,0);
      uVar3 = uVar14 - (uint)uVar16;
      iVar8 = iVar8 - ((int)((ulonglong)uVar16 >> 0x20) + (uint)(uVar14 < (uint)uVar16));
      if ((int)-(iVar8 + (uint)(uVar3 != 0)) < 0 ==
          (SBORROW4(0,iVar8) != SBORROW4(-iVar8,(uint)(uVar3 != 0)))) {
        uVar3 = 0;
        iVar8 = 0;
      }
      iVar9 = FUN_01ccc5a4(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar14 = *(uint *)(iVar9 + 0x40);
      iVar9 = *(int *)(iVar9 + 0x44);
      if (*(int *)(**(int **)(_UNK_01ccd568 + 0x1ccd474) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar11 = func_0x014e9518(*puVar13);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      uVar16 = func_0x026ffbe0(iVar11,0);
      uVar5 = uVar14 - (uint)uVar16;
      iVar9 = iVar9 - ((int)((ulonglong)uVar16 >> 0x20) + (uint)(uVar14 < (uint)uVar16));
      if ((int)-(iVar9 + (uint)(uVar5 != 0)) < 0 ==
          (SBORROW4(0,iVar9) != SBORROW4(-iVar9,(uint)(uVar5 != 0)))) {
        uVar5 = 0;
        iVar9 = 0;
      }
      if ((int)(iVar8 - (iVar9 + (uint)(uVar3 < uVar5))) < 0 !=
          (SBORROW4(iVar8,iVar9) != SBORROW4(iVar8 - iVar9,(uint)(uVar3 < uVar5)))) {
        uVar5 = uVar3;
        iVar9 = iVar8;
      }
      fVar4 = (float)func_0x014e62b8(uVar5,iVar9);
      fVar15 = (float)VectorSignedToFloat(iVar1 * 60000,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = fVar4 / fVar15;
    }
    return fVar4;
  }
  iVar1 = func_0x029540a4(0xafe7,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f56c0(auStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&stack0xffffffd0,param_1,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar8,uVar10,&stack0xffffffd0,uVar6,0,0);
  fVar4 = (float)func_0x024f5720(&stack0xffffffd0,0,0);
  return fVar4;
}

