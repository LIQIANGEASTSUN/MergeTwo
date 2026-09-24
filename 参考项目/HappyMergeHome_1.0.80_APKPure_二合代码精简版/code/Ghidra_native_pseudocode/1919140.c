
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01929140(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_019295bc + 0x1929160);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019295c0 + 0x1929174));
    func_0x01438628(*(undefined4 *)(_UNK_019295c4 + 0x1929180));
    func_0x01438628(*(undefined4 *)(_UNK_019295c8 + 0x192918c));
    func_0x01438628(*(undefined4 *)(_UNK_019295cc + 0x1929198));
    func_0x01438628(*(undefined4 *)(_UNK_019295d0 + 0x19291a4));
    func_0x01438628(*(undefined4 *)(_UNK_019295d4 + 0x19291b0));
    func_0x01438628(*(undefined4 *)(_UNK_019295d8 + 0x19291bc));
    func_0x01438628(*(undefined4 *)(_UNK_019295dc + 0x19291c8));
    func_0x01438628(*(undefined4 *)(_UNK_019295e0 + 0x19291d4));
    func_0x01438628(*(undefined4 *)(_UNK_019295e4 + 0x19291e0));
    func_0x01438628(*(undefined4 *)(_UNK_019295e8 + 0x19291ec));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x979a,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_019295ec + 0x1929298) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019295f0 + 0x19292b8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02088634(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_01924e00(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_01927e18(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_019295f4 + 0x192937c);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar14 = *(undefined4 **)(_UNK_019295f8 + 0x19293a8);
    iVar2 = func_0x014e9518(*puVar14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar16 = func_0x026ffbe0(iVar2,0);
    uVar5 = (uint)((ulonglong)uVar16 >> 0x20);
    uVar4 = param_1[7];
    uVar15 = param_1[6];
    iVar2 = func_0x014e9518(*puVar14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar17 = func_0x026ffbe0(iVar2,0);
    uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
    uVar12 = param_1[8];
    uVar13 = param_1[9];
    if (*(int *)(**(int **)(_UNK_019295fc + 0x192941c) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar8 = *(code **)(*param_1 + 0xe0);
    uVar7 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar6 <= uVar13 && (uint)(uVar12 <= (uint)uVar17) <= uVar6 - uVar13) &
         (uVar4 <= uVar5 && (uint)((uint)uVar16 <= uVar15) <= uVar4 - uVar5) & bVar1;
    uVar7 = (*pcVar8)(param_1,uVar7);
    uVar7 = func_0x014e9568(**(undefined4 **)(_UNK_01929600 + 0x1929498),uVar7,0);
    iVar9 = **(int **)(_UNK_01929604 + 0x19294ac);
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
    if (*(int *)(**(int **)(_UNK_01929608 + 0x1929514) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_01929608 + 0x1929514));
    }
    func_0x026794a8(uVar7,uVar11,0);
    func_0x01929614(param_1);
    if (*(int *)(**(int **)(_UNK_0192960c + 0x1929554) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01929610 + 0x1929570));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x409,param_2);
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    iVar2 = func_0x029540a4(0x979a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

