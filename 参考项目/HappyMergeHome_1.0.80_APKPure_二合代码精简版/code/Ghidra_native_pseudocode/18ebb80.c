
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fbb80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_018fbffc + 0x18fbba0);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fc000 + 0x18fbbb4));
    func_0x01438628(*(undefined4 *)(_UNK_018fc004 + 0x18fbbc0));
    func_0x01438628(*(undefined4 *)(_UNK_018fc008 + 0x18fbbcc));
    func_0x01438628(*(undefined4 *)(_UNK_018fc00c + 0x18fbbd8));
    func_0x01438628(*(undefined4 *)(_UNK_018fc010 + 0x18fbbe4));
    func_0x01438628(*(undefined4 *)(_UNK_018fc014 + 0x18fbbf0));
    func_0x01438628(*(undefined4 *)(_UNK_018fc018 + 0x18fbbfc));
    func_0x01438628(*(undefined4 *)(_UNK_018fc01c + 0x18fbc08));
    func_0x01438628(*(undefined4 *)(_UNK_018fc020 + 0x18fbc14));
    func_0x01438628(*(undefined4 *)(_UNK_018fc024 + 0x18fbc20));
    func_0x01438628(*(undefined4 *)(_UNK_018fc028 + 0x18fbc2c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x967c,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_018fc02c + 0x18fbcd8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018fc030 + 0x18fbcf8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020875c0(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_018f8b24(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_018fa92c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_018fc034 + 0x18fbdbc);
    param_1[0x11] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_018fc038 + 0x18fbde8);
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
    if (*(int *)(**(int **)(_UNK_018fc03c + 0x18fbe5c) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x49) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x014e9568(**(undefined4 **)(_UNK_018fc040 + 0x18fbed8),uVar8,0);
    iVar12 = **(int **)(_UNK_018fc044 + 0x18fbeec);
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
    if (*(int *)(**(int **)(_UNK_018fc048 + 0x18fbf54) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_018fc048 + 0x18fbf54));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x018fc054(param_1);
    piVar5 = *(int **)(_UNK_018fc04c + 0x18fbf98);
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018fc050 + 0x18fbfb8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x3f0,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x967c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

