/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ScreenState$$.ctor RVA 0x20538f4 =====

void FUN_020638f4(void)

{
  func_0x02063938();
  return;
}



// ===== FAT.ScreenState$$.ctor RVA 0x2053938 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02063938(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  param_1[8] = param_10;
  param_1[9] = param_11;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  fVar2 = _UNK_020639b8;
  if (0 < param_3) {
    fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar3 / fVar2;
  }
  param_1[10] = fVar2;
  uVar1 = func_0x020639bc(fVar2);
  param_1[0xc] = param_12;
  param_1[0xb] = uVar1;
  return;
}



// ===== FAT.ScreenState$$ToString RVA 0x2053a70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02063a70(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02063db4 + 0x2063a88);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02063db8 + 0x2063a9c));
    func_0x01384978(*(undefined4 *)(_UNK_02063dbc + 0x2063aa8));
    func_0x01384978(*(undefined4 *)(_UNK_02063dc0 + 0x2063ab4));
    func_0x01384978(*(undefined4 *)(_UNK_02063dc4 + 0x2063ac0));
    func_0x01384978(*(undefined4 *)(_UNK_02063dc8 + 0x2063acc));
    func_0x01384978(*(undefined4 *)(_UNK_02063dcc + 0x2063ad8));
    func_0x01384978(*(undefined4 *)(_UNK_02063dd0 + 0x2063ae4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb05d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb05d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_022989fc + 0x2298868);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02298a00 + 0x229887c),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_02298a04 + 0x2298888));
      func_0x01384978(*(undefined4 *)(_UNK_02298a08 + 0x2298894));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_70,0);
    uStack_28 = uStack_60;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
    uStack_70 = *param_1;
    uStack_6c = param_1[1];
    uStack_68 = param_1[2];
    uStack_64 = param_1[3];
    uStack_60 = param_1[4];
    uStack_5c = param_1[5];
    uStack_58 = param_1[6];
    uStack_54 = param_1[7];
    uStack_50 = param_1[8];
    uStack_4c = param_1[9];
    uStack_48 = param_1[10];
    uStack_44 = param_1[0xb];
    uStack_40 = param_1[0xc];
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02298a0c + 0x2298908),&uStack_70);
    func_0x01485288(&uStack_38,uVar4,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar4,&uStack_38,uVar5,1,0);
    func_0x02f5e3fc(&uStack_a8,&uStack_38,0,**(undefined4 **)(_UNK_02298a10 + 0x22989a0));
    uStack_70 = uStack_a8;
    uStack_6c = uStack_a4;
    uStack_68 = uStack_a0;
    uStack_64 = uStack_9c;
    uStack_60 = uStack_98;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = uStack_80;
    uStack_44 = uStack_7c;
    uStack_40 = uStack_78;
    *param_1 = uStack_a8;
    param_1[1] = uStack_a4;
    param_1[2] = uStack_a0;
    param_1[3] = uStack_9c;
    param_1[4] = uStack_98;
    param_1[5] = uStack_94;
    param_1[6] = uStack_90;
    param_1[7] = uStack_8c;
    param_1[8] = uStack_88;
    param_1[9] = uStack_84;
    param_1[10] = uStack_80;
    param_1[0xb] = uStack_7c;
    param_1[0xc] = uStack_78;
    func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_02298a14 + 0x22989ec));
    return;
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02063dd4 + 0x2063b44),5);
  uStack_1c = *param_1;
  puVar7 = *(undefined4 **)(_UNK_02063dd8 + 0x2063b5c);
  iVar1 = func_0x01384abc(*puVar7,&uStack_1c);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar8 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0))
  {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = iVar1;
  uStack_20 = param_1[1];
  iVar1 = func_0x01384abc(*puVar7,&uStack_20);
  if ((iVar1 != 0) && (iVar8 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0))
  {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x01384bf4();
  }
  piVar2[5] = iVar1;
  uStack_24 = param_1[10];
  puVar7 = *(undefined4 **)(_UNK_02063ddc + 0x2063c20);
  iVar1 = func_0x01384abc(*puVar7,&uStack_24);
  if ((iVar1 != 0) && (iVar8 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0))
  {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if ((uint)piVar2[3] < 3) {
    func_0x01384bf4();
  }
  piVar2[6] = iVar1;
  uStack_28 = param_1[0xb];
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02063de0 + 0x2063c80),&uStack_28);
  if ((iVar1 != 0) && (iVar8 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0))
  {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if ((uint)piVar2[3] < 4) {
    func_0x01384bf4();
  }
  piVar2[7] = iVar1;
  uStack_2c = param_1[0xc];
  iVar1 = func_0x01384abc(*puVar7,&uStack_2c);
  if ((iVar1 != 0) && (iVar8 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0))
  {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if ((uint)piVar2[3] < 5) {
    func_0x01384bf4();
  }
  piVar2[8] = iVar1;
  uVar4 = func_0x0244f708(**(undefined4 **)(_UNK_02063de4 + 0x2063d3c),piVar2,0);
  puVar7 = *(undefined4 **)(_UNK_02063de8 + 0x2063d54);
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  uStack_38 = param_1[4];
  uStack_34 = param_1[5];
  uVar5 = func_0x01384abc(*puVar7);
  uStack_50 = param_1[6];
  uStack_4c = param_1[7];
  uStack_48 = param_1[8];
  uStack_44 = param_1[9];
  uVar3 = func_0x01384abc(*puVar7);
  uVar5 = func_0x0244f690(**(undefined4 **)(_UNK_02063dec + 0x2063d98),uVar5,uVar3,0);
  func_0x0244fb1c(uVar4,uVar5,0);
  return;
}



// ===== FAT.ScreenState$$<>iFixBaseProxy_ToString RVA 0x2053df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02063df0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02063e64 + 0x2063e08);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02063e68 + 0x2063e1c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02063e6c + 0x2063e50));
  func_0x02451848(uVar1,0);
  return;
}


