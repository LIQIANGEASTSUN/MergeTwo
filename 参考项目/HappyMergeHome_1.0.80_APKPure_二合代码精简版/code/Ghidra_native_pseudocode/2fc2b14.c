
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd2b14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_02fd2f90 + 0x2fd2b34);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd2f94 + 0x2fd2b48));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2f98 + 0x2fd2b54));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2f9c + 0x2fd2b60));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fa0 + 0x2fd2b6c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fa4 + 0x2fd2b78));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fa8 + 0x2fd2b84));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fac + 0x2fd2b90));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fb0 + 0x2fd2b9c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fb4 + 0x2fd2ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fb8 + 0x2fd2bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd2fbc + 0x2fd2bc0));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7105,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02fd2fc0 + 0x2fd2c6c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd2fc4 + 0x2fd2c8c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02066ef0(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_02fcd838(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_02fd17ec(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_02fd2fc8 + 0x2fd2d50);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_02fd2fcc + 0x2fd2d7c);
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
    if (*(int *)(**(int **)(_UNK_02fd2fd0 + 0x2fd2df0) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x04f5b548(**(undefined4 **)(_UNK_02fd2fd4 + 0x2fd2e6c),uVar8,0);
    iVar12 = **(int **)(_UNK_02fd2fd8 + 0x2fd2e80);
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
    if (*(int *)(**(int **)(_UNK_02fd2fdc + 0x2fd2ee8) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02fd2fdc + 0x2fd2ee8));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x02fd2fe8(param_1);
    piVar5 = *(int **)(_UNK_02fd2fe0 + 0x2fd2f2c);
    *(undefined1 *)(param_1 + 0x14) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd2fe4 + 0x2fd2f4c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x402,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x7105,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

