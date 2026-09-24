
/* WARNING: Removing unreachable block (ram,0x02af2710) */
/* WARNING: Removing unreachable block (ram,0x02af2718) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01835ed0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01835f88 + 0x1835ee4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01835f8c + 0x1835ef8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x91f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x91f4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return;
  }
  uVar14 = func_0x0184760c(param_1);
  iVar7 = (int)((ulonglong)uVar14 >> 0x20);
  iVar1 = (int)uVar14;
  if (*(int *)(**(int **)(_UNK_01835f90 + 0x1835f60) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_02af28fc + 0x2af25f4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02af2900 + 0x2af2608),iVar7,0,0);
    func_0x01438628(*(undefined4 *)(_UNK_02af2904 + 0x2af2614));
    func_0x01438628(*(undefined4 *)(_UNK_02af2908 + 0x2af2620));
    func_0x01438628(*(undefined4 *)(_UNK_02af290c + 0x2af262c));
    func_0x01438628(*(undefined4 *)(_UNK_02af2910 + 0x2af2638));
    func_0x01438628(*(undefined4 *)(_UNK_02af2914 + 0x2af2644));
    *pcVar6 = '\x01';
  }
  uVar11 = 0;
  iVar2 = func_0x02953fd4(0xbf0,0);
  if (iVar2 != 0) {
    uVar14 = func_0x029540a4(0xbf0,0);
    uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
    if ((int)uVar14 == 0) {
      func_0x014388e4();
      uVar9 = extraout_r1;
    }
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0288f430((int)uVar14,uVar9,iVar1,iVar7);
    return;
  }
  if ((int)-(iVar7 + (uint)(iVar1 != 0)) < 0 ==
      (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(iVar1 != 0)))) {
    uVar14 = 0;
  }
  uVar3 = func_0x014e6e04((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
  if ((int)uVar3 < 0x3c) {
    uVar10 = 0;
    uVar13 = uVar3;
  }
  else {
    uVar10 = uVar3 / 0x3c;
    uVar13 = uVar3 + (uVar10 * 0x10 - uVar3 / 0x3c) * -4;
    if (0xe0f < uVar3) {
      uVar8 = uVar3 / 0xe10;
      uVar10 = uVar10 + ((uVar10 / 0x3c) * 0x10 - uVar10 / 0x3c) * -4;
      if (0x1517f < uVar3) {
        uVar8 = uVar8 % 0x18;
        uVar11 = uVar3 / 0x15180;
      }
      goto LAB_02af2708;
    }
  }
  uVar8 = 0;
LAB_02af2708:
  if (uVar11 == 0) {
    puVar12 = *(undefined4 **)(_UNK_02af2934 + 0x2af27e4);
    uStack_24 = uVar8;
    uVar9 = func_0x014387ac(*puVar12,&uStack_24);
    uStack_28 = uVar10;
    uVar5 = func_0x014387ac(*puVar12,&uStack_28);
    uStack_2c = uVar13;
    uVar4 = func_0x014387ac(*puVar12,&uStack_2c);
    uStack_38 = 0;
    func_0x0152927c(**(undefined4 **)(_UNK_02af2938 + 0x2af282c),uVar9,uVar5,uVar4);
  }
  else {
    uStack_24 = uVar11;
    if (uVar8 == 0) {
      if (uVar10 < 0x1e) {
        uVar9 = func_0x014387ac(**(undefined4 **)(_UNK_02af2928 + 0x2af28b0),&uStack_24);
        puVar12 = *(undefined4 **)(_UNK_02af2930 + 0x2af28d0);
      }
      else {
        uVar9 = func_0x014387ac(**(undefined4 **)(_UNK_02af2928 + 0x2af28b0),&uStack_24);
        puVar12 = *(undefined4 **)(_UNK_02af292c + 0x2af28f0);
      }
      func_0x01529a5c(*puVar12,uVar9,0);
    }
    else {
      puVar12 = *(undefined4 **)(_UNK_02af2920 + 0x2af2798);
      uVar9 = func_0x014387ac(*puVar12,&uStack_24);
      uStack_28 = uVar8;
      uVar5 = func_0x014387ac(*puVar12,&uStack_28);
      func_0x014e95b8(**(undefined4 **)(_UNK_02af2924 + 0x2af27cc),uVar9,uVar5,0);
    }
  }
  return;
}

