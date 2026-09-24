
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c65e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_018c6a5c + 0x18c6600);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c6a60 + 0x18c6614));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a64 + 0x18c6620));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a68 + 0x18c662c));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a6c + 0x18c6638));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a70 + 0x18c6644));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a74 + 0x18c6650));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a78 + 0x18c665c));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a7c + 0x18c6668));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a80 + 0x18c6674));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a84 + 0x18c6680));
    func_0x01438628(*(undefined4 *)(_UNK_018c6a88 + 0x18c668c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x9531,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_018c6a8c + 0x18c6738) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018c6a90 + 0x18c6758));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02086414(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_018c22a0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_018c52b8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_018c6a94 + 0x18c681c);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_018c6a98 + 0x18c6848);
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
    if (*(int *)(**(int **)(_UNK_018c6a9c + 0x18c68bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x014e9568(**(undefined4 **)(_UNK_018c6aa0 + 0x18c6938),uVar8,0);
    iVar12 = **(int **)(_UNK_018c6aa4 + 0x18c694c);
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
    if (*(int *)(**(int **)(_UNK_018c6aa8 + 0x18c69b4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_018c6aa8 + 0x18c69b4));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x018c6ab4(param_1);
    piVar5 = *(int **)(_UNK_018c6aac + 0x18c69f8);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018c6ab0 + 0x18c6a18));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x3fa,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x9531,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

