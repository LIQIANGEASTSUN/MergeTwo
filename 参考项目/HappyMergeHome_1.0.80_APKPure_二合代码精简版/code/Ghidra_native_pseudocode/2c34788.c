
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c44788(int param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pcVar3 = (char *)(_UNK_02c44e14 + 0x2c447a0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c44e18 + 0x2c447b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e1c + 0x2c447c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e20 + 0x2c447cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e24 + 0x2c447d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e28 + 0x2c447e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e2c + 0x2c447f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e30 + 0x2c447fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e34 + 0x2c44808));
    func_0x01438628(*(undefined4 *)(_UNK_02c44e38 + 0x2c44814));
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    func_0x014388e4();
    uVar11 = *(undefined4 *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 8);
    uRam00000094 = 1;
    uVar4 = uVar11;
    if (iVar6 == 0) {
      func_0x014388e4();
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      iVar6 = *(int *)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      uRam000000a0 = uVar11;
      if (iVar6 == 0) {
        func_0x014388e4();
        iVar6 = 0;
      }
      goto LAB_02c44870;
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(iVar6 + 0x94) = 1;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar6 + 0xa0) = uVar4;
LAB_02c44870:
  uVar4 = FUN_02bf9d84(iVar6,uVar4,uVar7,0);
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 8);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  uVar8 = uVar5;
  if (iVar6 == 0) {
    func_0x014388e4();
    uVar8 = *(uint *)(param_1 + 0xc);
  }
  iVar9 = *(int *)(iVar6 + 0x44);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar9 + 0xc) <= uVar8) {
    func_0x014388e8();
  }
  iVar9 = *(int *)(iVar9 + uVar8 * 4 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar7 = FUN_02c3f4b4(iVar9);
  FUN_02bf7238(iVar6,uVar5,uVar11,uVar7,uVar4,0xb,0,0,0);
  piVar12 = *(int **)(_UNK_02c44e3c + 0x2c44920);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar10 = *(undefined4 **)(_UNK_02c44e40 + 0x2c4493c);
  iVar6 = func_0x014e9518(*puVar10);
  iVar9 = *(int *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar11 = *(undefined4 *)(iVar9 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = FUN_02bad204(iVar6,uVar4,uVar11,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar6 + 0x74) < 2) {
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar10);
    iVar9 = *(int *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(undefined4 *)(iVar9 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_02bb18c4(iVar6,uVar4,0xffffffff,9,uVar11,0xffffffff,1,0xffffffff,
                 **(undefined4 **)(_UNK_02c44e44 + 0x2c44c00),0);
    if (*(int *)(**(int **)(_UNK_02c44e48 + 0x2c44c34) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_02c44e4c + 0x2c44c50));
    piVar12 = *(int **)(_UNK_02c44e50 + 0x2c44c64);
    iVar6 = *piVar12;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar12;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x14);
    piVar12 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c44e54 + 0x2c44c88),2);
    pcVar3 = (char *)(_UNK_02c44e58 + 0x2c44ca4);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c44e5c + 0x2c44cb8));
      *pcVar3 = '\x01';
    }
    puVar2 = *(uint **)(**(int **)(_UNK_02c44e60 + 0x2c44ccc) + 0x5c);
    uStack_30 = *puVar2;
    uStack_2c = puVar2[1];
    iVar6 = func_0x014387ac(**(int **)(_UNK_02c44e60 + 0x2c44ccc),&uStack_30);
    if (piVar12 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar6 != 0) &&
       (iVar1 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
      uVar11 = func_0x01438904();
      func_0x01438790(uVar11,0);
    }
    if (piVar12[3] == 0) {
      func_0x014388e8();
    }
    piVar12[4] = iVar6;
    func_0x014385cc(piVar12 + 4,iVar6);
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_02c44e64 + 0x2c44d64),&uStack_34);
    if ((iVar6 != 0) &&
       (iVar1 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
      uVar11 = func_0x01438904();
      func_0x01438790(uVar11,0);
    }
    if ((uint)piVar12[3] < 2) {
      func_0x014388e8();
    }
    piVar12[5] = iVar6;
    func_0x014385cc(piVar12 + 5,iVar6);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
  }
  else {
    FUN_026f78e8(iVar6,*(int *)(iVar6 + 0x74) + -1,0);
    iVar6 = *(int *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_02c04cf8(iVar6,uVar4,0);
    if (*(int *)(**(int **)(_UNK_02c44e68 + 0x2c449d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_02c44e6c + 0x2c449f4));
    piVar12 = *(int **)(_UNK_02c44e70 + 0x2c44a08);
    iVar6 = *piVar12;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar12;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x14);
    piVar12 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c44e74 + 0x2c44a2c),2);
    uVar5 = *(uint *)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 8);
    uVar8 = uVar5;
    if (iVar6 == 0) {
      func_0x014388e4();
      uVar8 = *(uint *)(param_1 + 0x10);
    }
    iVar6 = *(int *)(iVar6 + 0x44);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar8) {
      func_0x014388e8();
    }
    iVar6 = *(int *)(iVar6 + uVar8 * 4 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_2c = FUN_02c3f4b4(iVar6);
    uStack_30 = uVar5;
    iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_02c44e78 + 0x2c44aa0),&uStack_30);
    if (piVar12 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar6 != 0) &&
       (iVar1 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
      uVar11 = func_0x01438904();
      func_0x01438790(uVar11,0);
    }
    if (piVar12[3] == 0) {
      func_0x014388e8();
    }
    piVar12[4] = iVar6;
    func_0x014385cc(piVar12 + 4,iVar6);
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_02c44e7c + 0x2c44b30),&uStack_34);
    if ((iVar6 != 0) &&
       (iVar1 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
      uVar11 = func_0x01438904();
      func_0x01438790(uVar11,0);
    }
    if ((uint)piVar12[3] < 2) {
      func_0x014388e8();
    }
    piVar12[5] = iVar6;
    func_0x014385cc(piVar12 + 5,iVar6);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
  }
  func_0x02990414(iVar9,uVar4,piVar12,0);
  return;
}

