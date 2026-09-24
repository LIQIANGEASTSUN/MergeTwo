
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01cc43e4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint in_fpscr;
  float fVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [24];
  
  pcVar7 = (char *)(_UNK_01cc46f8 + 0x1cc4400);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc46fc + 0x1cc4414));
    func_0x01438628(*(undefined4 *)(_UNK_01cc4700 + 0x1cc4420));
    func_0x01438628(*(undefined4 *)(_UNK_01cc4704 + 0x1cc442c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc4708 + 0x1cc4438));
    func_0x01438628(*(undefined4 *)(_UNK_01cc470c + 0x1cc4444));
    func_0x01438628(*(undefined4 *)(_UNK_01cc4710 + 0x1cc4450));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3125,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01cc1540(param_1);
    fVar4 = _UNK_01cc46f4;
    if ((iVar1 != 0) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114)),
       iVar1 != 0)) {
      piVar11 = *(int **)(_UNK_01cc4714 + 0x1cc44e4);
      iVar8 = param_1[0xf];
      iVar1 = *piVar11;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar11;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar9 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar11;
        }
        uVar10 = **(undefined4 **)(iVar1 + 0x5c);
        iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01cc4718 + 0x1cc4530));
        func_0x03a062d0(iVar9,uVar10,**(undefined4 **)(_UNK_01cc471c + 0x1cc4550),0);
        piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
        *piVar11 = iVar9;
        func_0x014385cc(piVar11,iVar9);
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0618(iVar8,iVar9,**(undefined4 **)(_UNK_01cc4720 + 0x1cc4588));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar1 + 0x1c);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar13 = *(uint *)(iVar1 + 0x28);
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (*(int *)(**(int **)(_UNK_01cc4724 + 0x1cc45c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar12 = *(undefined4 **)(_UNK_01cc4728 + 0x1cc45e8);
      iVar9 = func_0x014e9518(*puVar12);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar15 = func_0x026ffbe0(iVar9,0);
      uVar2 = uVar13 - (uint)uVar15;
      iVar1 = iVar1 - ((int)((ulonglong)uVar15 >> 0x20) + (uint)(uVar13 < (uint)uVar15));
      if ((int)-(iVar1 + (uint)(uVar2 != 0)) < 0 ==
          (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar2 != 0)))) {
        uVar2 = 0;
        iVar1 = 0;
      }
      iVar9 = FUN_01cc28c8(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar13 = *(uint *)(iVar9 + 0x48);
      iVar9 = *(int *)(iVar9 + 0x4c);
      if (*(int *)(**(int **)(_UNK_01cc472c + 0x1cc4658) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar12);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar15 = func_0x026ffbe0(iVar3,0);
      uVar5 = uVar13 - (uint)uVar15;
      iVar9 = iVar9 - ((int)((ulonglong)uVar15 >> 0x20) + (uint)(uVar13 < (uint)uVar15));
      if ((int)-(iVar9 + (uint)(uVar5 != 0)) < 0 ==
          (SBORROW4(0,iVar9) != SBORROW4(-iVar9,(uint)(uVar5 != 0)))) {
        uVar5 = 0;
        iVar9 = 0;
      }
      if ((int)(iVar1 - (iVar9 + (uint)(uVar2 < uVar5))) < 0 !=
          (SBORROW4(iVar1,iVar9) != SBORROW4(iVar1 - iVar9,(uint)(uVar2 < uVar5)))) {
        uVar5 = uVar2;
        iVar9 = iVar1;
      }
      fVar4 = (float)func_0x014e62b8(uVar5,iVar9);
      fVar14 = (float)VectorSignedToFloat(iVar8 * 60000,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = fVar4 / fVar14;
    }
    return fVar4;
  }
  iVar1 = func_0x029540a4(0x3125,0);
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

