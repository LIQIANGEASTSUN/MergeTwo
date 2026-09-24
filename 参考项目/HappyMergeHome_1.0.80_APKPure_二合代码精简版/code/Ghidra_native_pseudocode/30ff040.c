
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310f040(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_0310f4bc + 0x310f060);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310f4c0 + 0x310f074));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4c4 + 0x310f080));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4c8 + 0x310f08c));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4cc + 0x310f098));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4d0 + 0x310f0a4));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4d4 + 0x310f0b0));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4d8 + 0x310f0bc));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4dc + 0x310f0c8));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4e0 + 0x310f0d4));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4e4 + 0x310f0e0));
    func_0x01438628(*(undefined4 *)(_UNK_0310f4e8 + 0x310f0ec));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7892,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0310f4ec + 0x310f198) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0310f4f0 + 0x310f1b8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0206d2a4(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_0310ad00(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0310dd18(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_0310f4f4 + 0x310f27c);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_0310f4f8 + 0x310f2a8);
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
    if (*(int *)(**(int **)(_UNK_0310f4fc + 0x310f31c) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x04f5b548(**(undefined4 **)(_UNK_0310f500 + 0x310f398),uVar8,0);
    iVar12 = **(int **)(_UNK_0310f504 + 0x310f3ac);
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
    if (*(int *)(**(int **)(_UNK_0310f508 + 0x310f414) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_0310f508 + 0x310f414));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x0310f514(param_1);
    piVar5 = *(int **)(_UNK_0310f50c + 0x310f458);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0310f510 + 0x310f478));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x3fc,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x7892,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

