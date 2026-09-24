
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa26c0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  
  pcVar6 = (char *)(_UNK_02fa293c + 0x2fa26e8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa2940 + 0x2fa26fc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa2944 + 0x2fa2708));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x14f1,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02fa2948 + 0x2fa276c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa294c + 0x2fa278c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar13 = func_0x026ffbe0(iVar2,0);
    uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar8 = (uint)uVar13;
    iVar2 = FUN_02f95f8c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    fVar1 = _UNK_02fa2938;
    iVar3 = *(int *)(iVar2 + 0x7c);
    lVar15 = 0;
    bVar10 = *(uint *)(iVar2 + 0x78) < uVar8;
    if ((int)(iVar3 - (uVar9 + bVar10)) < 0 !=
        (SBORROW4(iVar3,uVar9) != SBORROW4(iVar3 - uVar9,(uint)bVar10))) {
      fVar11 = 1.0;
      while( true ) {
        iVar2 = FUN_02f95f8c(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        fVar12 = fVar11 * 24.0 * fVar1;
        lVar14 = func_0x014e61a4(fVar12);
        lVar15 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar15 = lVar14;
        }
        lVar15 = lVar15 + *(longlong *)(iVar2 + 0x20);
        uVar7 = (uint)((ulonglong)lVar15 >> 0x20);
        if (uVar9 <= uVar7 && (uint)((uint)lVar15 <= uVar8) <= uVar9 - uVar7) break;
        fVar11 = fVar11 + 1.0;
      }
    }
    uVar8 = (uint)((ulonglong)lVar15 >> 0x20);
    bVar10 = (uint)lVar15 <= param_3;
    if (param_4 <= uVar8 && (uint)bVar10 <= param_4 - uVar8) {
      lVar15 = CONCAT44(param_4,param_3);
    }
    iVar2 = (int)((ulonglong)lVar15 >> 0x20);
    uVar9 = (uint)lVar15;
    iVar3 = FUN_02f95f8c(param_1,param_4 - (uVar8 + !bVar10));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar3 + 0x7c);
    bVar10 = *(uint *)(iVar3 + 0x78) < uVar9;
    if ((int)(iVar4 - (iVar2 + (uint)bVar10)) < 0 !=
        (SBORROW4(iVar4,iVar2) != SBORROW4(iVar4 - iVar2,(uint)bVar10))) {
      iVar3 = FUN_02f95f8c(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026efaec(iVar3,0,0);
      iVar3 = FUN_02f95f8c(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_026efa30(iVar3,0,0);
      uVar13 = FUN_02f95f8c(param_1);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar13 == 0) {
        func_0x014388e4();
        uVar5 = extraout_r1;
      }
      FUN_026efdf4((int)uVar13,uVar5,uVar9,iVar2,0);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x14f1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02891ab8(iVar2,param_1,param_3,param_4,0);
  }
  return;
}

