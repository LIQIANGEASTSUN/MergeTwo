
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0331188c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  code *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  pcVar10 = (char *)(_UNK_03311d08 + 0x33118ac);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03311d0c + 0x33118c0));
    func_0x01438628(*(undefined4 *)(_UNK_03311d10 + 0x33118cc));
    func_0x01438628(*(undefined4 *)(_UNK_03311d14 + 0x33118d8));
    func_0x01438628(*(undefined4 *)(_UNK_03311d18 + 0x33118e4));
    func_0x01438628(*(undefined4 *)(_UNK_03311d1c + 0x33118f0));
    func_0x01438628(*(undefined4 *)(_UNK_03311d20 + 0x33118fc));
    func_0x01438628(*(undefined4 *)(_UNK_03311d24 + 0x3311908));
    func_0x01438628(*(undefined4 *)(_UNK_03311d28 + 0x3311914));
    func_0x01438628(*(undefined4 *)(_UNK_03311d2c + 0x3311920));
    func_0x01438628(*(undefined4 *)(_UNK_03311d30 + 0x331192c));
    func_0x01438628(*(undefined4 *)(_UNK_03311d34 + 0x3311938));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x852f,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_03311d38 + 0x33119e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03311d3c + 0x3311a04));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02077f60(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_0330da64(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_03310548(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_03311d40 + 0x3311ac8);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_03311d44 + 0x3311af4);
    iVar2 = func_0x04e4a028(*puVar15);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar17 = func_0x026ffbe0(iVar2,0);
    uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar4 = param_1[7];
    uVar16 = param_1[6];
    iVar2 = func_0x04e4a028(*puVar15);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar18 = func_0x026ffbe0(iVar2,0);
    uVar7 = (uint)((ulonglong)uVar18 >> 0x20);
    uVar13 = param_1[8];
    uVar14 = param_1[9];
    if (*(int *)(**(int **)(_UNK_03311d48 + 0x3311b68) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x04f5b548(**(undefined4 **)(_UNK_03311d4c + 0x3311be4),uVar8,0);
    iVar12 = **(int **)(_UNK_03311d50 + 0x3311bf8);
    iVar2 = *(int *)(iVar12 + 0x1c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar12);
      iVar2 = *(int *)(iVar12 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    uVar11 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_03311d54 + 0x3311c60) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_03311d54 + 0x3311c60));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x03311d60(param_1);
    piVar5 = *(int **)(_UNK_03311d58 + 0x3311ca4);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03311d5c + 0x3311cc4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x3ef,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x852f,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

