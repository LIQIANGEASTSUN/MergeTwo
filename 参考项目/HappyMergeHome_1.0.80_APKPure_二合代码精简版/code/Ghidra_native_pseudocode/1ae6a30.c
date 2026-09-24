
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af6a30(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uStack_54;
  
  pcVar6 = (char *)(_UNK_01af6e08 + 0x1af6a58);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af6e0c + 0x1af6a6c));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e10 + 0x1af6a78));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e14 + 0x1af6a84));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e18 + 0x1af6a90));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e1c + 0x1af6a9c));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e20 + 0x1af6aa8));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e24 + 0x1af6ab4));
    func_0x01438628(*(undefined4 *)(_UNK_01af6e28 + 0x1af6ac0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd36,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01af3828(param_1);
    if ((iVar2 != 0) && (iVar2 = FUN_01ae46e8(param_1), iVar2 != 0)) {
      if (*(int *)(**(int **)(_UNK_01af6e2c + 0x1af6b44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01af6e30 + 0x1af6b64));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar15 = func_0x026ffbe0(iVar2,0);
      uVar11 = (uint)((ulonglong)uVar15 >> 0x20);
      uVar8 = (uint)uVar15;
      iVar2 = FUN_01af3828(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      fVar1 = _UNK_01af6e04;
      iVar4 = *(int *)(iVar2 + 0x24);
      lVar17 = 0;
      bVar12 = *(uint *)(iVar2 + 0x20) < uVar8;
      if ((int)(iVar4 - (uVar11 + bVar12)) < 0 !=
          (SBORROW4(iVar4,uVar11) != SBORROW4(iVar4 - uVar11,(uint)bVar12))) {
        fVar13 = 1.0;
        while( true ) {
          iVar2 = FUN_01ae46e8(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          fVar14 = fVar13 * 24.0 * fVar1;
          lVar16 = func_0x014e61a4(fVar14);
          lVar17 = func_0x014e6220(fVar14);
          if (fVar14 < 0.0) {
            lVar17 = lVar16;
          }
          lVar17 = lVar17 + *(longlong *)(iVar2 + 8);
          uVar7 = (uint)((ulonglong)lVar17 >> 0x20);
          if (uVar11 <= uVar7 && (uint)((uint)lVar17 <= uVar8) <= uVar11 - uVar7) break;
          fVar13 = fVar13 + 1.0;
        }
      }
      uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
      bVar12 = (uint)lVar17 <= param_3;
      if (param_4 <= uVar8 && (uint)bVar12 <= param_4 - uVar8) {
        lVar17 = CONCAT44(param_4,param_3);
      }
      iVar2 = (int)((ulonglong)lVar17 >> 0x20);
      uVar11 = (uint)lVar17;
      iVar4 = FUN_01af3828(param_1,param_4 - (uVar8 + !bVar12));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar4 + 0x24);
      bVar12 = *(uint *)(iVar4 + 0x20) < uVar11;
      if ((int)(iVar5 - (iVar2 + (uint)bVar12)) < 0 !=
          (SBORROW4(iVar5,iVar2) != SBORROW4(iVar5 - iVar2,(uint)bVar12))) {
        iVar4 = FUN_01af3828(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x18);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024f0570(iVar4,**(undefined4 **)(_UNK_01af6e34 + 0x1af6cb4));
        uVar15 = FUN_01af3828(param_1);
        uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 == 0) {
          func_0x014388e4();
          uVar10 = extraout_r1;
        }
        func_0x026ee084((int)uVar15,uVar10,uVar11,iVar2,0);
        if (*(int *)(**(int **)(_UNK_01af6e38 + 0x1af6cf8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01af6e3c + 0x1af6d14));
        piVar9 = *(int **)(_UNK_01af6e40 + 0x1af6d28);
        iVar4 = *piVar9;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
          iVar4 = *piVar9;
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x380);
        piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01af6e44 + 0x1af6d4c),1);
        uStack_54 = 0;
        iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_01af6e48 + 0x1af6d6c),&uStack_54);
        if (piVar9 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar4 != 0) &&
           (iVar5 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar9 + 0x20)), iVar5 == 0)) {
          uVar3 = func_0x01438904();
          func_0x01438790(uVar3,0);
        }
        if (piVar9[3] == 0) {
          func_0x014388e8();
        }
        piVar9[4] = iVar4;
        func_0x014385cc(piVar9 + 4,iVar4);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar10,piVar9,0);
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0xd36,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02891ab8(iVar2,param_1,param_3,param_4,0);
  }
  return;
}

