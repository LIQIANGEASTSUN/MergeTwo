
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300cb60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  pcVar10 = (char *)(_UNK_0300cfdc + 0x300cb80);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300cfe0 + 0x300cb94));
    func_0x01438628(*(undefined4 *)(_UNK_0300cfe4 + 0x300cba0));
    func_0x01438628(*(undefined4 *)(_UNK_0300cfe8 + 0x300cbac));
    func_0x01438628(*(undefined4 *)(_UNK_0300cfec + 0x300cbb8));
    func_0x01438628(*(undefined4 *)(_UNK_0300cff0 + 0x300cbc4));
    func_0x01438628(*(undefined4 *)(_UNK_0300cff4 + 0x300cbd0));
    func_0x01438628(*(undefined4 *)(_UNK_0300cff8 + 0x300cbdc));
    func_0x01438628(*(undefined4 *)(_UNK_0300cffc + 0x300cbe8));
    func_0x01438628(*(undefined4 *)(_UNK_0300d000 + 0x300cbf4));
    func_0x01438628(*(undefined4 *)(_UNK_0300d004 + 0x300cc00));
    func_0x01438628(*(undefined4 *)(_UNK_0300d008 + 0x300cc0c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7281,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0300d00c + 0x300ccb8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0300d010 + 0x300ccd8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0206839c(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_03008820(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0300b838(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_0300d014 + 0x300cd9c);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar14 = *(undefined4 **)(_UNK_0300d018 + 0x300cdc8);
    iVar2 = func_0x04e4a028(*puVar14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar16 = func_0x026ffbe0(iVar2,0);
    uVar5 = (uint)((ulonglong)uVar16 >> 0x20);
    uVar4 = param_1[7];
    uVar15 = param_1[6];
    iVar2 = func_0x04e4a028(*puVar14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar17 = func_0x026ffbe0(iVar2,0);
    uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar12 = param_1[8];
    uVar13 = param_1[9];
    if (*(int *)(**(int **)(_UNK_0300d01c + 0x300ce3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar8 = *(code **)(*param_1 + 0xe0);
    uVar7 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar6 <= uVar13 && (uint)(uVar12 <= (uint)uVar17) <= uVar6 - uVar13) &
         (uVar4 <= uVar5 && (uint)((uint)uVar16 <= uVar15) <= uVar4 - uVar5) & bVar1;
    uVar7 = (*pcVar8)(param_1,uVar7);
    uVar7 = func_0x04f5b548(**(undefined4 **)(_UNK_0300d020 + 0x300ceb8),uVar7,0);
    iVar9 = **(int **)(_UNK_0300d024 + 0x300cecc);
    iVar2 = *(int *)(iVar9 + 0x1c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar9);
      iVar2 = *(int *)(iVar9 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    uVar11 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_0300d028 + 0x300cf34) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_0300d028 + 0x300cf34));
    }
    func_0x026794a8(uVar7,uVar11,0);
    func_0x0300d034(param_1);
    if (*(int *)(**(int **)(_UNK_0300d02c + 0x300cf74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0300d030 + 0x300cf90));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x403,param_2);
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    iVar2 = func_0x029540a4(0x7281,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

