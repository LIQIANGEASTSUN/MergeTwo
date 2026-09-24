
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02c38bcc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_r2;
  uint uVar5;
  undefined4 extraout_r3;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  iVar11 = *(int *)(param_1 + 0xc);
  if (iVar11 != 0) {
    uVar15 = *(undefined4 *)(param_1 + 8);
    iVar8 = *(int *)(iVar11 + 8);
    iVar4 = iVar11;
LAB_02c38c24:
    uVar10 = *(undefined4 *)(iVar4 + 0x10);
    uVar12 = *(undefined4 *)(iVar11 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)FUN_02bda8ac(iVar8,uVar15,uVar12,uVar10,1,0);
    return piVar2;
  }
  func_0x014388e4();
  iVar8 = iRam00000008;
  iVar11 = *(int *)(param_1 + 0xc);
  uVar15 = *(undefined4 *)(param_1 + 8);
  iVar4 = iVar11;
  if (iVar11 != 0) goto LAB_02c38c24;
  func_0x014388e4();
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) != 0) goto LAB_02c38c24;
  uVar17 = func_0x014388e4();
  uVar15 = (undefined4)((ulonglong)uVar17 >> 0x20);
  pcVar9 = (char *)(_UNK_02c3916c + 0x2c38c90);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c39170 + 0x2c38ca8));
    func_0x01438628(*(undefined4 *)(_UNK_02c39174 + 0x2c38cb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c39178 + 0x2c38cc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3917c + 0x2c38ccc));
    func_0x01438628(*(undefined4 *)(_UNK_02c39180 + 0x2c38cd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c39184 + 0x2c38ce4));
    func_0x01438628(*(undefined4 *)(_UNK_02c39188 + 0x2c38cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3918c + 0x2c38cfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c39190 + 0x2c38d08));
    *pcVar9 = '\x01';
  }
  uVar10 = in_stack_ffffffe4;
  iVar11 = func_0x02953fd4(0x66b,0);
  if (iVar11 != 0) {
    iVar11 = func_0x029540a4(0x66b,0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x028804f4(iVar11,(int)uVar17,uVar15,extraout_r2,extraout_r3,
                                    in_stack_ffffffe0,in_stack_ffffffe4,0);
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_02c39194 + 0x2c38d84) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar11 = func_0x014e9518(**(undefined4 **)(_UNK_02c39198 + 0x2c38da0));
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar11,0);
  piVar2 = *(int **)(_UNK_02c3919c + 0x2c38dd0);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar16 = *(undefined4 **)(_UNK_02c391a0 + 0x2c38dec);
  iVar11 = func_0x014e9518(*puVar16);
  piVar13 = *(int **)(_UNK_02c391a4 + 0x2c38e00);
  iVar8 = *piVar13;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
    iVar8 = *piVar13;
  }
  uVar12 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x9c);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  piVar3 = (int *)func_0x02b0fc08(iVar11,uVar12,0);
  if (*(int *)(**(int **)(_UNK_02c391a8 + 0x2c38e4c) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar6 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_02c391ac + 0x2c38e70) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar3 + 0xb8)) &&
       (piVar6 = piVar3,
       *(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_02c391ac + 0x2c38e70)))
    {
      piVar6 = (int *)0x0;
    }
  }
  iVar11 = func_0x024ef144(piVar6,0,0);
  if (iVar11 != 0) {
    return (int *)0x0;
  }
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar11 = func_0x014e9518(*puVar16);
  iVar8 = *piVar13;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
    iVar8 = *piVar13;
  }
  iVar7 = **(int **)(_UNK_02c391b0 + 0x2c38f0c);
  iVar4 = *(int *)(iVar7 + 0x1c);
  uVar12 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x194);
  if (iVar4 == 0) {
    func_0x014909d8(iVar7);
    iVar4 = *(int *)(iVar7 + 0x1c);
  }
  iVar8 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  uVar14 = **(undefined4 **)(iVar8 + 0x5c);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  piVar2 = (int *)func_0x02b0c90c(iVar11,uVar12,uVar14,0);
  if (piVar2 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_02c391b4 + 0x2c38fa8) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_02c391b4 + 0x2c38fa8))
       ) {
      bVar1 = false;
      goto LAB_02c38fd8;
    }
  }
  func_0x014388e4();
  bVar1 = true;
  piVar2 = (int *)0x0;
LAB_02c38fd8:
  iVar11 = func_0x014e94d8(piVar2,0);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar11,0,0);
  if (bVar1) {
    func_0x014388e4();
  }
  iVar11 = func_0x024eecb8(piVar2,0);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  func_0x024ef0bc(iVar11,uVar15,extraout_r2,extraout_r3,0);
  if (bVar1) {
    func_0x014388e4();
  }
  iVar11 = func_0x014e94d8(piVar2,0);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  iVar11 = func_0x024ef308(iVar11,0);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  func_0x024ef328(iVar11,in_stack_ffffffe0,in_stack_ffffffe0,in_stack_ffffffe0,0);
  if (bVar1) {
    func_0x014388e4();
  }
  iVar11 = func_0x014e94d8(piVar2,0);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar11,1,0);
  if (*(int *)(**(int **)(_UNK_02c391b8 + 0x2c390ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar11 = func_0x024ef144(uVar10,0,0);
  if (iVar11 != 0) {
    if (bVar1) {
      func_0x014388e4();
    }
    iVar11 = func_0x024eecb8(piVar2,0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    func_0x024ef338(iVar11,uVar10,0);
  }
  return piVar2;
}

