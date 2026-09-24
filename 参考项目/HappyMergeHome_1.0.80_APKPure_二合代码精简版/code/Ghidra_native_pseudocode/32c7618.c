
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032d7618(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_032d7a94 + 0x32d7638);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d7a98 + 0x32d764c));
    func_0x01438628(*(undefined4 *)(_UNK_032d7a9c + 0x32d7658));
    func_0x01438628(*(undefined4 *)(_UNK_032d7aa0 + 0x32d7664));
    func_0x01438628(*(undefined4 *)(_UNK_032d7aa4 + 0x32d7670));
    func_0x01438628(*(undefined4 *)(_UNK_032d7aa8 + 0x32d767c));
    func_0x01438628(*(undefined4 *)(_UNK_032d7aac + 0x32d7688));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ab0 + 0x32d7694));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ab4 + 0x32d76a0));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ab8 + 0x32d76ac));
    func_0x01438628(*(undefined4 *)(_UNK_032d7abc + 0x32d76b8));
    func_0x01438628(*(undefined4 *)(_UNK_032d7ac0 + 0x32d76c4));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x83b7,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_032d7ac4 + 0x32d7770) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032d7ac8 + 0x32d7790));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02076af0(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_032d32a4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_032d6248(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_032d7acc + 0x32d7854);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_032d7ad0 + 0x32d7880);
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
    if (*(int *)(**(int **)(_UNK_032d7ad4 + 0x32d78f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x04f5b548(**(undefined4 **)(_UNK_032d7ad8 + 0x32d7970),uVar8,0);
    iVar12 = **(int **)(_UNK_032d7adc + 0x32d7984);
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
    if (*(int *)(**(int **)(_UNK_032d7ae0 + 0x32d79ec) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_032d7ae0 + 0x32d79ec));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x032d7aec(param_1);
    piVar5 = *(int **)(_UNK_032d7ae4 + 0x32d7a30);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032d7ae8 + 0x32d7a50));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x3f9,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x83b7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

