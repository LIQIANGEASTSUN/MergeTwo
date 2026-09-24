
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cc7500(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar3;
  int extraout_r3;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  int unaff_r7;
  int unaff_r8;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar7 = &stack0xfffffff0;
  pcVar4 = (char *)(_UNK_01cc76b0 + 0x1cc7514);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc76b4 + 0x1cc7528));
    func_0x01438628(*(undefined4 *)(_UNK_01cc76b8 + 0x1cc7534));
    func_0x01438628(*(undefined4 *)(_UNK_01cc76bc + 0x1cc7540));
    func_0x01438628(*(undefined4 *)(_UNK_01cc76c0 + 0x1cc754c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc76c4 + 0x1cc7558));
    func_0x01438628(*(undefined4 *)(_UNK_01cc76c8 + 0x1cc7564));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3116,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3116,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_0287ab98 + 0x287aab8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287ab9c + 0x287aacc),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287aba0 + 0x287ab88));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = FUN_01cc28c8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e67d4(*(undefined4 *)(iVar1 + 0xc),uVar6);
  iVar1 = FUN_01cc28c8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = FUN_01cc28c8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (*(int *)(**(int **)(_UNK_01cc76cc + 0x1cc764c) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar3 = func_0x0152ae0c(0,iVar1 - extraout_r1,0);
  uVar6 = func_0x03622a28(uVar6,uVar3,**(undefined4 **)(_UNK_01cc76d0 + 0x1cc7680));
  iVar1 = func_0x03622f24(uVar6,extraout_r1,**(undefined4 **)(_UNK_01cc76d4 + 0x1cc7694));
  iVar5 = **(int **)(_UNK_01cc76d8 + 0x1cc76a8);
  if (*(int *)(iVar5 + 0x1c) == 0) {
    func_0x024f83f8(iVar5);
  }
  uVar9 = iVar1 == 0;
  uVar8 = 1;
  if (!(bool)uVar9) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x024f83fc();
    }
    iVar2 = func_0x024f83c8();
    func_0x04cd2260(iVar2,iVar1,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 8));
    return iVar2;
  }
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam03626554 + 0x3626540));
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,iVar5);
  uVar12 = func_0x024f83bc();
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  if ((bool)uVar9) {
    puVar7 = (undefined1 *)(unaff_r7 - (!(bool)uVar8 + 0x44));
  }
  *(undefined4 *)(puVar7 + -4) = 0x3626554;
  *(undefined4 *)(puVar7 + -8) = unaff_r6;
  *(undefined4 *)(puVar7 + -0xc) = 0;
  *(int *)(puVar7 + -0x10) = iVar5;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x024f83f8(iVar1);
  }
  if ((int)uVar12 != 0) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x024f83fc();
    }
    iVar5 = func_0x024f83c8();
    func_0x04cecbd8(iVar5,(int)uVar12,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar5;
  }
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam036265dc + 0x36265c8));
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,iVar1);
  uVar12 = func_0x024f83bc();
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(puVar7 + -0x14) = 0x36265dc;
  *(undefined4 *)(puVar7 + -0x18) = unaff_r6;
  *(undefined4 *)(puVar7 + -0x1c) = 0;
  *(int *)(puVar7 + -0x20) = iVar1;
  if (*(int *)(iVar5 + 0x1c) == 0) {
    func_0x024f83f8(iVar5);
  }
  if ((int)uVar12 != 0) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x024f83fc();
    }
    iVar1 = func_0x024f83c8();
    func_0x04cefe98(iVar1,(int)uVar12,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 8));
    return iVar1;
  }
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam03626664 + 0x3626650));
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,iVar5);
  uVar12 = func_0x024f83bc();
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(puVar7 + -0x24) = 0x3626664;
  *(undefined4 *)(puVar7 + -0x28) = unaff_r6;
  *(undefined4 *)(puVar7 + -0x2c) = 0;
  *(int *)(puVar7 + -0x30) = iVar5;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x024f83f8(iVar1);
  }
  if ((int)uVar12 != 0) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x024f83fc();
    }
    iVar5 = func_0x024f83c8();
    func_0x04cfd2f0(iVar5,(int)uVar12,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar5;
  }
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam036266ec + 0x36266d8));
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,iVar1);
  uVar12 = func_0x024f83bc();
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(puVar7 + -0x34) = 0x36266ec;
  *(undefined4 *)(puVar7 + -0x38) = unaff_r6;
  *(undefined4 *)(puVar7 + -0x3c) = 0;
  *(int *)(puVar7 + -0x40) = iVar1;
  if (*(int *)(iVar5 + 0x1c) == 0) {
    func_0x024f83f8(iVar5);
  }
  if ((int)uVar12 != 0) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x024f83fc();
    }
    iVar1 = func_0x024f83c8();
    func_0x04d58590(iVar1,(int)uVar12,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 8));
    return iVar1;
  }
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam03626774 + 0x3626760));
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,iVar5);
  uVar12 = func_0x024f83bc();
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(puVar7 + -0x44) = 0x3626774;
  *(undefined4 *)(puVar7 + -0x48) = unaff_r6;
  *(undefined4 *)(puVar7 + -0x4c) = 0;
  piVar10 = (int *)(puVar7 + -0x50);
  *piVar10 = iVar5;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x024f83f8(iVar1);
  }
  if ((int)uVar12 != 0) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x024f83fc();
    }
    iVar5 = func_0x024f83c8();
    (*(code *)**(undefined4 **)(*(int *)(iVar1 + 0x1c) + 8))(iVar5,(int)uVar12);
    return iVar5;
  }
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam03626800 + 0x36267ec));
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,iVar1);
  uVar12 = func_0x024f83bc();
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  *(undefined4 *)(puVar7 + -0x54) = 0x3626800;
  *(undefined4 *)(puVar7 + -0x58) = unaff_r6;
  *(undefined4 *)(puVar7 + -0x5c) = 0;
  piVar11 = (int *)(puVar7 + -0x60);
  *piVar11 = iVar1;
  if (*(int *)(extraout_r2 + 0x1c) == 0) {
    func_0x024f83f8(extraout_r2);
  }
  if ((int)uVar12 == 0) {
    uVar6 = *(undefined4 *)(iRam03626880 + 0x3626860);
  }
  else {
    if (iVar5 != 0) {
      uVar6 = 0;
      iVar1 = *(int *)(*(int *)(extraout_r2 + 0x1c) + 4);
      iVar5 = *piVar11;
      uVar13 = CONCAT44(*(undefined4 *)(puVar7 + -0x5c),*(undefined4 *)(puVar7 + -0x58));
      iVar2 = *(int *)(puVar7 + -0x54);
      goto LAB_03626910;
    }
    uVar6 = *(undefined4 *)(iRam03626884 + 0x362686c);
  }
  uVar9 = 1;
  uVar8 = 1;
  uVar6 = func_0x024f83b8(uVar6);
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,extraout_r2);
  uVar13 = func_0x024f83bc();
  iVar1 = (int)((ulonglong)uVar13 >> 0x20);
  if ((bool)uVar9) {
    piVar11 = (int *)(unaff_r7 - (!(bool)uVar8 + 0x8c00));
  }
  piVar11[-1] = 0x3626880;
  piVar11[-2] = (int)uVar12;
  piVar11[-3] = iVar5;
  piVar10 = piVar11 + -4;
  *piVar10 = extraout_r2;
  if (*(int *)(extraout_r2_00 + 0x1c) == 0) {
    func_0x024f83f8(extraout_r2_00);
  }
  if ((int)uVar13 == 0) {
    uVar6 = *(undefined4 *)(iRam03626908 + 0x36268e8);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x036268d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_00 + 0x1c) + 4))((int)uVar13,iVar1,0)
      ;
      return iVar1;
    }
    uVar6 = *(undefined4 *)(iRam0362690c + 0x36268f4);
  }
  uVar9 = 1;
  uVar8 = 1;
  uVar6 = func_0x024f83b8(uVar6);
  uVar6 = func_0x053314dc(uVar6,0);
  func_0x024f83c0(uVar6,extraout_r2_00);
  iVar2 = 0x3626908;
  uVar12 = func_0x024f83bc();
  uVar6 = extraout_r2_01;
  iVar1 = extraout_r3;
  iVar5 = extraout_r2_00;
  if ((bool)uVar9) {
    piVar10 = (int *)(unaff_r7 - (!(bool)uVar8 + 0x400));
  }
LAB_03626910:
  uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
  piVar10[-1] = iVar2;
  piVar10[-2] = unaff_r8;
  piVar10[-3] = unaff_r7;
  piVar10[-4] = (int)uVar13;
  piVar10[-5] = (int)((ulonglong)uVar13 >> 0x20);
  piVar10[-6] = iVar5;
  piVar10 = *(int **)(iVar1 + 0x1c);
  if (piVar10 == (int *)0x0) {
    func_0x024f83f8(iVar1);
    piVar10 = *(int **)(iVar1 + 0x1c);
  }
  if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
    func_0x024f83fc();
  }
  iVar5 = func_0x024f83c8();
  func_0x04d3f23c(iVar5,0xfffffffe,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
  if (iVar5 == 0) {
    func_0x024f83d4();
  }
  *(undefined4 *)(iVar5 + 0x20) = (int)uVar12;
  func_0x024f83f0((undefined4 *)(iVar5 + 0x20),(int)uVar12);
  *(undefined4 *)(iVar5 + 0x28) = uVar3;
  func_0x024f83f0((undefined4 *)(iVar5 + 0x28),uVar3);
  *(undefined4 *)(iVar5 + 0x18) = uVar6;
  func_0x024f83f0((undefined4 *)(iVar5 + 0x18),uVar6);
  return iVar5;
}

