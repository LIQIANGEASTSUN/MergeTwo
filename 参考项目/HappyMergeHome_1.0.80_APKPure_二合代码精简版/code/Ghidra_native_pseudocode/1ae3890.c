
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af3890(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  
  pcVar7 = (char *)(_UNK_01af3b44 + 0x1af38b8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af3b48 + 0x1af38cc));
    func_0x01438628(*(undefined4 *)(_UNK_01af3b4c + 0x1af38d8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd07,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01af3b50 + 0x1af393c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01af3b54 + 0x1af3958));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar13 = func_0x026ffbe0(iVar2,0);
    uVar3 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar9 = (uint)uVar13;
    iVar2 = FUN_01ae46e8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    fVar1 = _UNK_01af3b40;
    iVar4 = *(int *)(iVar2 + 0x5c);
    lVar15 = 0;
    bVar10 = *(uint *)(iVar2 + 0x58) < uVar9;
    if ((int)(iVar4 - (uVar3 + bVar10)) < 0 !=
        (SBORROW4(iVar4,uVar3) != SBORROW4(iVar4 - uVar3,(uint)bVar10))) {
      fVar11 = 1.0;
      while( true ) {
        iVar2 = FUN_01ae46e8(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        fVar12 = fVar11 * 24.0 * fVar1;
        lVar14 = func_0x014e61a4(fVar12);
        lVar15 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar15 = lVar14;
        }
        lVar15 = lVar15 + *(longlong *)(iVar2 + 8);
        uVar8 = (uint)((ulonglong)lVar15 >> 0x20);
        if (uVar3 <= uVar8 && (uint)((uint)lVar15 <= uVar9) <= uVar3 - uVar8) break;
        fVar11 = fVar11 + 1.0;
      }
    }
    uVar9 = (uint)((ulonglong)lVar15 >> 0x20);
    if (param_4 <= uVar9 && (uint)((uint)lVar15 <= param_3) <= param_4 - uVar9) {
      lVar15 = CONCAT44(param_4,param_3);
    }
    iVar2 = (int)((ulonglong)lVar15 >> 0x20);
    uVar9 = (uint)lVar15;
    iVar4 = FUN_01ae46e8(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar4 + 0x5c);
    bVar10 = *(uint *)(iVar4 + 0x58) < uVar9;
    if ((int)(iVar5 - (iVar2 + (uint)bVar10)) < 0 !=
        (SBORROW4(iVar5,iVar2) != SBORROW4(iVar5 - iVar2,(uint)bVar10))) {
      iVar4 = FUN_01ae99ac(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x026bfecc(iVar4,0,0);
      iVar4 = FUN_01ae99ac(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x026bfe10(iVar4,0,0);
      uVar13 = FUN_01ae46e8(param_1);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar13 == 0) {
        func_0x014388e4();
        uVar6 = extraout_r1;
      }
      iVar4 = *(int *)((int)uVar13 + 0x18);
      if (iVar4 == 0) {
        func_0x014388e4();
        uVar6 = extraout_r1_00;
      }
      func_0x026c01c4(iVar4,uVar6,uVar9,iVar2,0);
    }
  }
  else {
    iVar2 = func_0x029540a4(0xd07,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02891ab8(iVar2,param_1,param_3,param_4,0);
  }
  return;
}

