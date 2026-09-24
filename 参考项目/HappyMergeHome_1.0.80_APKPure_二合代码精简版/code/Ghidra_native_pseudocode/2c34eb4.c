
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c44eb4(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pcVar5 = (char *)(iRam02c454c8 + 0x2c44ecc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c454cc + 0x2c44ee0));
    func_0x01438628(*(undefined4 *)(_UNK_02c454d0 + 0x2c44eec));
    func_0x01438628(*(undefined4 *)(_UNK_02c454d4 + 0x2c44ef8));
    func_0x01438628(*(undefined4 *)(_UNK_02c454d8 + 0x2c44f04));
    func_0x01438628(*(undefined4 *)(_UNK_02c454dc + 0x2c44f10));
    func_0x01438628(*(undefined4 *)(_UNK_02c454e0 + 0x2c44f1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c454e4 + 0x2c44f28));
    func_0x01438628(*(undefined4 *)(_UNK_02c454e8 + 0x2c44f34));
    func_0x01438628(*(undefined4 *)(_UNK_02c454ec + 0x2c44f40));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
    iVar3 = *(int *)(param_1 + 8);
    uRam00000094 = 1;
    if (iVar3 == 0) {
      func_0x014388e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x94) = 1;
  }
  piVar11 = *(int **)(_UNK_02c454f0 + 0x2c44f88);
  iVar2 = *(int *)(*piVar11 + 0x74);
  *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014387a4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c454f4 + 0x2c44fac);
  iVar3 = func_0x014e9518(*puVar12);
  iVar2 = *(int *)(param_1 + 0x14);
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(param_1 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = *(undefined4 *)(iVar7 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02bd2cf0(iVar3,uVar13,uVar10,1,2,uVar8,uVar4,1,0xffffffff,0,0);
  iVar3 = func_0x014e9518(*puVar12);
  iVar2 = *(int *)(param_1 + 8);
  uVar13 = *(undefined4 *)(param_1 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar10 = *(undefined4 *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = FUN_02bad204(iVar3,uVar13,uVar10,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar3 + 0x74) < 2) {
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(*puVar12);
    iVar2 = *(int *)(param_1 + 8);
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02bda8ac(iVar3,uVar13,uVar10,**(undefined4 **)(_UNK_02c454f8 + 0x2c452ec),1,0);
    if (*(int *)(**(int **)(_UNK_02c454fc + 0x2c45310) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c45500 + 0x2c4532c));
    piVar11 = *(int **)(_UNK_02c45504 + 0x2c45340);
    iVar3 = *piVar11;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar11;
    }
    uVar13 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
    piVar11 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c45508 + 0x2c45364),2);
    pcVar5 = (char *)(_UNK_02c4550c + 0x2c45380);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c45510 + 0x2c45394));
      *pcVar5 = '\x01';
    }
    puVar1 = *(uint **)(**(int **)(_UNK_02c45514 + 0x2c453a8) + 0x5c);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    iVar3 = func_0x014387ac(**(int **)(_UNK_02c45514 + 0x2c453a8),&uStack_30);
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) &&
       (iVar7 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar11 + 0x20)), iVar7 == 0)) {
      uVar10 = func_0x01438904();
      func_0x01438790(uVar10,0);
    }
    if (piVar11[3] == 0) {
      func_0x014388e8();
    }
    piVar11[4] = iVar3;
    func_0x014385cc(piVar11 + 4,iVar3);
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)(iVar3 + 0x10);
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02c45518 + 0x2c45440),&uStack_34);
    if ((iVar3 != 0) &&
       (iVar7 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar11 + 0x20)), iVar7 == 0)) {
      uVar10 = func_0x01438904();
      func_0x01438790(uVar10,0);
    }
    if ((uint)piVar11[3] < 2) {
      func_0x014388e8();
    }
    piVar11[5] = iVar3;
    func_0x014385cc(piVar11 + 5,iVar3);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    FUN_026f78e8(iVar3,*(int *)(iVar3 + 0x74) + -1,0);
    iVar3 = *(int *)(param_1 + 8);
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02c04cf8(iVar3,uVar13,0);
    if (*(int *)(**(int **)(_UNK_02c4551c + 0x2c450cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c45520 + 0x2c450e8));
    piVar11 = *(int **)(_UNK_02c45524 + 0x2c450fc);
    iVar3 = *piVar11;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar11;
    }
    uVar13 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
    piVar11 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c45528 + 0x2c45120),2);
    uVar6 = *(uint *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 8);
    uVar9 = uVar6;
    if (iVar3 == 0) {
      func_0x014388e4();
      uVar9 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar9) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(iVar3 + uVar9 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = FUN_02c3f4b4(iVar3);
    uStack_30 = uVar6;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02c4552c + 0x2c45194),&uStack_30);
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) &&
       (iVar7 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar11 + 0x20)), iVar7 == 0)) {
      uVar10 = func_0x01438904();
      func_0x01438790(uVar10,0);
    }
    if (piVar11[3] == 0) {
      func_0x014388e8();
    }
    piVar11[4] = iVar3;
    func_0x014385cc(piVar11 + 4,iVar3);
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)(iVar3 + 0x10);
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02c45530 + 0x2c45224),&uStack_34);
    if ((iVar3 != 0) &&
       (iVar7 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar11 + 0x20)), iVar7 == 0)) {
      uVar10 = func_0x01438904();
      func_0x01438790(uVar10,0);
    }
    if ((uint)piVar11[3] < 2) {
      func_0x014388e8();
    }
    piVar11[5] = iVar3;
    func_0x014385cc(piVar11 + 5,iVar3);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  func_0x02990414(iVar2,uVar13,piVar11,0);
  return;
}

