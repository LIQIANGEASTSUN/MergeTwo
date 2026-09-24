
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016455e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_01645a5c + 0x1645600);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01645a60 + 0x1645614));
    func_0x01438628(*(undefined4 *)(_UNK_01645a64 + 0x1645620));
    func_0x01438628(*(undefined4 *)(_UNK_01645a68 + 0x164562c));
    func_0x01438628(*(undefined4 *)(_UNK_01645a6c + 0x1645638));
    func_0x01438628(*(undefined4 *)(_UNK_01645a70 + 0x1645644));
    func_0x01438628(*(undefined4 *)(_UNK_01645a74 + 0x1645650));
    func_0x01438628(*(undefined4 *)(_UNK_01645a78 + 0x164565c));
    func_0x01438628(*(undefined4 *)(_UNK_01645a7c + 0x1645668));
    func_0x01438628(*(undefined4 *)(_UNK_01645a80 + 0x1645674));
    func_0x01438628(*(undefined4 *)(_UNK_01645a84 + 0x1645680));
    func_0x01438628(*(undefined4 *)(_UNK_01645a88 + 0x164568c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x861b,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01645a8c + 0x1645738) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01645a90 + 0x1645758));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02079160(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_01640304(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_016442b8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_01645a94 + 0x164581c);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_01645a98 + 0x1645848);
    iVar2 = func_0x014e9518(*puVar15);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar17 = func_0x026ffbe0(iVar2,0);
    uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar4 = param_1[7];
    uVar16 = param_1[6];
    iVar2 = func_0x014e9518(*puVar15);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar18 = func_0x026ffbe0(iVar2,0);
    uVar7 = (uint)((ulonglong)uVar18 >> 0x20);
    uVar13 = param_1[8];
    uVar14 = param_1[9];
    if (*(int *)(**(int **)(_UNK_01645a9c + 0x16458bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x014e9568(**(undefined4 **)(_UNK_01645aa0 + 0x1645938),uVar8,0);
    iVar12 = **(int **)(_UNK_01645aa4 + 0x164594c);
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
    if (*(int *)(**(int **)(_UNK_01645aa8 + 0x16459b4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_01645aa8 + 0x16459b4));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x01645ab4(param_1);
    piVar5 = *(int **)(_UNK_01645aac + 0x16459f8);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01645ab0 + 0x1645a18));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x408,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x861b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

