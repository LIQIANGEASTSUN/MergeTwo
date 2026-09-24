
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d6d44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_017d71c0 + 0x17d6d64);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d71c4 + 0x17d6d78));
    func_0x01438628(*(undefined4 *)(_UNK_017d71c8 + 0x17d6d84));
    func_0x01438628(*(undefined4 *)(_UNK_017d71cc + 0x17d6d90));
    func_0x01438628(*(undefined4 *)(_UNK_017d71d0 + 0x17d6d9c));
    func_0x01438628(*(undefined4 *)(_UNK_017d71d4 + 0x17d6da8));
    func_0x01438628(*(undefined4 *)(_UNK_017d71d8 + 0x17d6db4));
    func_0x01438628(*(undefined4 *)(_UNK_017d71dc + 0x17d6dc0));
    func_0x01438628(*(undefined4 *)(_UNK_017d71e0 + 0x17d6dcc));
    func_0x01438628(*(undefined4 *)(_UNK_017d71e4 + 0x17d6dd8));
    func_0x01438628(*(undefined4 *)(_UNK_017d71e8 + 0x17d6de4));
    func_0x01438628(*(undefined4 *)(_UNK_017d71ec + 0x17d6df0));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x8f9f,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_017d71f0 + 0x17d6e9c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017d71f4 + 0x17d6ebc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020817d0(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_017d3cec(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_017d5af0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_017d71f8 + 0x17d6f80);
    param_1[0x11] = *(int *)(iVar2 + 0xc) + iVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar15 = *(undefined4 **)(_UNK_017d71fc + 0x17d6fac);
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
    if (*(int *)(**(int **)(_UNK_017d7200 + 0x17d7020) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar9 = *(code **)(*param_1 + 0xe0);
    uVar8 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x49) =
         (uVar7 <= uVar14 && (uint)(uVar13 <= (uint)uVar18) <= uVar7 - uVar14) &
         (uVar4 <= uVar6 && (uint)((uint)uVar17 <= uVar16) <= uVar4 - uVar6) & bVar1;
    uVar8 = (*pcVar9)(param_1,uVar8);
    uVar8 = func_0x014e9568(**(undefined4 **)(_UNK_017d7204 + 0x17d709c),uVar8,0);
    iVar12 = **(int **)(_UNK_017d7208 + 0x17d70b0);
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
    if (*(int *)(**(int **)(_UNK_017d720c + 0x17d7118) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_017d720c + 0x17d7118));
    }
    func_0x026794a8(uVar8,uVar11,0);
    func_0x017d7218(param_1);
    piVar5 = *(int **)(_UNK_017d7210 + 0x17d715c);
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017d7214 + 0x17d717c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x3ec,param_2);
  }
  else {
    iVar2 = func_0x029540a4(0x8f9f,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

