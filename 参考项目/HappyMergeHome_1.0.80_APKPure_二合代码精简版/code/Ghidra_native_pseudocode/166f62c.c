
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167f62c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  pcVar10 = (char *)(_UNK_0167faa8 + 0x167f64c);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167faac + 0x167f660));
    func_0x01438628(*(undefined4 *)(_UNK_0167fab0 + 0x167f66c));
    func_0x01438628(*(undefined4 *)(_UNK_0167fab4 + 0x167f678));
    func_0x01438628(*(undefined4 *)(_UNK_0167fab8 + 0x167f684));
    func_0x01438628(*(undefined4 *)(_UNK_0167fabc + 0x167f690));
    func_0x01438628(*(undefined4 *)(_UNK_0167fac0 + 0x167f69c));
    func_0x01438628(*(undefined4 *)(_UNK_0167fac4 + 0x167f6a8));
    func_0x01438628(*(undefined4 *)(_UNK_0167fac8 + 0x167f6b4));
    func_0x01438628(*(undefined4 *)(_UNK_0167facc + 0x167f6c0));
    func_0x01438628(*(undefined4 *)(_UNK_0167fad0 + 0x167f6cc));
    func_0x01438628(*(undefined4 *)(_UNK_0167fad4 + 0x167f6d8));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x8797,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0167fad8 + 0x167f784) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0167fadc + 0x167f7a4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0207a60c(iVar2,param_12,0);
    func_0x029f063c(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    iVar2 = FUN_0167b2ec(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0167e304(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_0167fae0 + 0x167f868);
    param_1[0x13] = *(int *)(iVar2 + 0xc) + iVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar14 = *(undefined4 **)(_UNK_0167fae4 + 0x167f894);
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
    if (*(int *)(**(int **)(_UNK_0167fae8 + 0x167f908) + 0x74) == 0) {
      func_0x014387a4();
    }
    bVar1 = func_0x02c35d10(0x32,0);
    pcVar8 = *(code **)(*param_1 + 0xe0);
    uVar7 = *(undefined4 *)(*param_1 + 0xe4);
    *(byte *)((int)param_1 + 0x51) =
         (uVar6 <= uVar13 && (uint)(uVar12 <= (uint)uVar17) <= uVar6 - uVar13) &
         (uVar4 <= uVar5 && (uint)((uint)uVar16 <= uVar15) <= uVar4 - uVar5) & bVar1;
    uVar7 = (*pcVar8)(param_1,uVar7);
    uVar7 = func_0x014e9568(**(undefined4 **)(_UNK_0167faec + 0x167f984),uVar7,0);
    iVar9 = **(int **)(_UNK_0167faf0 + 0x167f998);
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
    if (*(int *)(**(int **)(_UNK_0167faf4 + 0x167fa00) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_0167faf4 + 0x167fa00));
    }
    func_0x026794a8(uVar7,uVar11,0);
    func_0x0167fb00(param_1);
    if (*(int *)(**(int **)(_UNK_0167faf8 + 0x167fa40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0167fafc + 0x167fa5c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x01994e8c(iVar2,0x405,param_2);
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    iVar2 = func_0x029540a4(0x8797,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba094(iVar2,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
  }
  return;
}

