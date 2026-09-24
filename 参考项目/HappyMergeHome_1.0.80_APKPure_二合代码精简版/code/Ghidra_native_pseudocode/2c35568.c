
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c45568(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02c45a58 + 0x2c45580);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c45a5c + 0x2c45594));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a60 + 0x2c455a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a64 + 0x2c455ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a68 + 0x2c455b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a6c + 0x2c455c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a70 + 0x2c455d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a74 + 0x2c455dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a78 + 0x2c455e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a7c + 0x2c455f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a80 + 0x2c45600));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a84 + 0x2c4560c));
    func_0x01438628(*(undefined4 *)(_UNK_02c45a88 + 0x2c45618));
    *pcVar4 = '\x01';
  }
  piVar9 = *(int **)(_UNK_02c45a8c + 0x2c4562c);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar10 = *(undefined4 **)(_UNK_02c45a90 + 0x2c45648);
  iVar1 = func_0x014e9518(*puVar10);
  iVar3 = *(int *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(iVar3 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bad204(iVar1,uVar7,uVar8,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x74) < 2) {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(*puVar10);
    iVar2 = *(int *)(param_1 + 0xc);
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02bda8ac(iVar3,uVar7,uVar8,**(undefined4 **)(_UNK_02c45a94 + 0x2c45734),1,0);
  }
  else {
    FUN_026f78e8(iVar1,*(int *)(iVar1 + 0x74) + -1,0);
    iVar3 = *(int *)(param_1 + 0xc);
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02c04cf8(iVar3,uVar7,0);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar5) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + uVar5 * 4 + 0x10);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02c315a4(iVar3,0);
  }
  if (*(int *)(**(int **)(_UNK_02c45a98 + 0x2c457b8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c45a9c + 0x2c457d4));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x02029de4(iVar3,**(undefined4 **)(_UNK_02c45aa0 + 0x2c457fc),0x3f800000,0);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar5) {
    func_0x014388e8();
  }
  iVar3 = *(int *)(iVar3 + uVar5 * 4 + 0x10);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_02c30e28(iVar3,0);
  }
  if (0 < *(int *)(iVar1 + 0x74)) {
    if (*(int *)(**(int **)(_UNK_02c45aa4 + 0x2c4587c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c45aa8 + 0x2c45898));
    piVar9 = *(int **)(_UNK_02c45aac + 0x2c458ac);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar9;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
    piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c45ab0 + 0x2c458d0),2);
    uVar6 = *(uint *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    uVar5 = uVar6;
    if (iVar3 == 0) {
      func_0x014388e4();
      uVar5 = *(uint *)(param_1 + 8);
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar5) {
      func_0x014388e8();
    }
    iVar3 = *(int *)(iVar3 + uVar5 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = FUN_02c3f4b4(iVar3);
    uStack_30 = uVar6;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02c45ab4 + 0x2c45944),&uStack_30);
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) && (iVar2 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar2 == 0)
       ) {
      uVar8 = func_0x01438904();
      func_0x01438790(uVar8,0);
    }
    if (piVar9[3] == 0) {
      func_0x014388e8();
    }
    piVar9[4] = iVar3;
    func_0x014385cc(piVar9 + 4,iVar3);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)(iVar3 + 0x10);
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02c45ab8 + 0x2c459d4),&uStack_34);
    if ((iVar3 != 0) && (iVar2 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar2 == 0)
       ) {
      uVar8 = func_0x01438904();
      func_0x01438790(uVar8,0);
    }
    if ((uint)piVar9[3] < 2) {
      func_0x014388e8();
    }
    piVar9[5] = iVar3;
    func_0x014385cc(piVar9 + 5,iVar3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar1,uVar7,piVar9,0);
  }
  return;
}

