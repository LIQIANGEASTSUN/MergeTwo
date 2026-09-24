
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196d72c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uStack_54;
  
  pcVar7 = (char *)(_UNK_0196db2c + 0x196d754);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196db30 + 0x196d768));
    func_0x01438628(*(undefined4 *)(_UNK_0196db34 + 0x196d774));
    func_0x01438628(*(undefined4 *)(_UNK_0196db38 + 0x196d780));
    func_0x01438628(*(undefined4 *)(_UNK_0196db3c + 0x196d78c));
    func_0x01438628(*(undefined4 *)(_UNK_0196db40 + 0x196d798));
    func_0x01438628(*(undefined4 *)(_UNK_0196db44 + 0x196d7a4));
    func_0x01438628(*(undefined4 *)(_UNK_0196db48 + 0x196d7b0));
    func_0x01438628(*(undefined4 *)(_UNK_0196db4c + 0x196d7bc));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1648,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0196db50 + 0x196d820) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0196db54 + 0x196d83c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar15 = func_0x026ffbe0(iVar2,0);
    uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
    uVar9 = (uint)uVar15;
    iVar2 = FUN_019600b0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x78);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    fVar1 = _UNK_0196db28;
    iVar5 = *(int *)(iVar2 + 0x24);
    lVar17 = 0;
    bVar12 = *(uint *)(iVar2 + 0x20) < uVar9;
    if ((int)(iVar5 - (uVar4 + bVar12)) < 0 !=
        (SBORROW4(iVar5,uVar4) != SBORROW4(iVar5 - uVar4,(uint)bVar12))) {
      fVar13 = 1.0;
      while( true ) {
        iVar2 = FUN_019600b0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        fVar14 = fVar13 * 24.0 * fVar1;
        lVar16 = func_0x014e61a4(fVar14);
        lVar17 = func_0x014e6220(fVar14);
        if (fVar14 < 0.0) {
          lVar17 = lVar16;
        }
        lVar17 = lVar17 + *(longlong *)(iVar2 + 0x20);
        uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
        if (uVar4 <= uVar8 && (uint)((uint)lVar17 <= uVar9) <= uVar4 - uVar8) break;
        fVar13 = fVar13 + 1.0;
      }
    }
    uVar9 = (uint)((ulonglong)lVar17 >> 0x20);
    if (param_4 <= uVar9 && (uint)((uint)lVar17 <= param_3) <= param_4 - uVar9) {
      lVar17 = CONCAT44(param_4,param_3);
    }
    iVar2 = (int)((ulonglong)lVar17 >> 0x20);
    uVar9 = (uint)lVar17;
    iVar5 = FUN_019600b0(param_1);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar5 + 0x78);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar5 + 0x24);
    bVar12 = *(uint *)(iVar5 + 0x20) < uVar9;
    if ((int)(iVar6 - (iVar2 + (uint)bVar12)) < 0 !=
        (SBORROW4(iVar6,iVar2) != SBORROW4(iVar6 - iVar2,(uint)bVar12))) {
      iVar5 = FUN_019600b0(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x78);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x18);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x024f0570(iVar5,**(undefined4 **)(_UNK_0196db58 + 0x196d9c8));
      uVar15 = FUN_019600b0(param_1);
      uVar11 = (undefined4)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 == 0) {
        func_0x014388e4();
        uVar11 = extraout_r1;
      }
      iVar5 = *(int *)((int)uVar15 + 0x78);
      if (iVar5 == 0) {
        func_0x014388e4();
        uVar11 = extraout_r1_00;
      }
      func_0x026ee084(iVar5,uVar11,uVar9,iVar2,0);
      if (*(int *)(**(int **)(_UNK_0196db5c + 0x196da1c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0196db60 + 0x196da38));
      piVar10 = *(int **)(_UNK_0196db64 + 0x196da4c);
      iVar5 = *piVar10;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
        iVar5 = *piVar10;
      }
      uVar11 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x334);
      piVar10 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0196db68 + 0x196da70),1);
      uStack_54 = 0;
      iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_0196db6c + 0x196da90),&uStack_54);
      if (piVar10 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar5 != 0) &&
         (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar6 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar10[3] == 0) {
        func_0x014388e8();
      }
      piVar10[4] = iVar5;
      func_0x014385cc(piVar10 + 4,iVar5);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar2,uVar11,piVar10,0);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x1648,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02891ab8(iVar2,param_1,param_3,param_4,0);
  }
  return;
}

