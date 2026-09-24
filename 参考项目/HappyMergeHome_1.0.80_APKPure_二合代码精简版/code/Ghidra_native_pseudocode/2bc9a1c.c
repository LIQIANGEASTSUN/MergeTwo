
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd9a1c(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02bd9f64 + 0x2bd9a3c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f68 + 0x2bd9a54));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f6c + 0x2bd9a60));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f70 + 0x2bd9a6c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f74 + 0x2bd9a78));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f78 + 0x2bd9a84));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f7c + 0x2bd9a90));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f80 + 0x2bd9a9c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f84 + 0x2bd9aa8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f88 + 0x2bd9ab4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9f8c + 0x2bd9ac0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2eeb,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd9f90 + 0x2bd9b64));
    *param_3 = iVar1;
    func_0x014385cc(param_3,iVar1);
    piVar9 = *(int **)(_UNK_02bd9f94 + 0x2bd9b88);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar9;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x02b5461c(iVar1,0);
    piVar9 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_02bd9f98 + 0x2bd9bd4) + 0xb8);
      if ((*(byte *)(*piVar2 + 0xb8) < uVar7) ||
         (piVar9 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_02bd9f98 + 0x2bd9bd4)
         )) {
        func_0x01438ca8();
        piVar9 = (int *)0x0;
      }
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(undefined4 *)(iVar1 + 8);
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
      FUN_026f6b3c(0,0xffffffff,0);
      func_0x014388e4();
    }
    else {
      FUN_026f6b3c(piVar9,0xffffffff,0);
    }
    FUN_026f6bf8(piVar9,1,0);
    FUN_02bd1794(param_1,piVar9);
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b780e8(iVar1,param_2,piVar9,**(undefined4 **)(_UNK_02bd9f9c + 0x2bd9cac));
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (param_6 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd9fa0 + 0x2bd9cd0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd9fa4 + 0x2bd9cec));
      piVar9 = *(int **)(_UNK_02bd9fa8 + 0x2bd9d00);
      iVar3 = *piVar9;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar9;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
      piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bd9fac + 0x2bd9d24),5);
      puVar10 = *(undefined4 **)(_UNK_02bd9fb0 + 0x2bd9d48);
      uStack_28 = param_5;
      iVar3 = func_0x014387ac(*puVar10,&uStack_28);
      if (piVar9 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if (piVar9[3] == 0) {
        func_0x014388e8();
      }
      piVar9[4] = iVar3;
      func_0x014385cc(piVar9 + 4,iVar3);
      uStack_2c = param_2;
      iVar3 = func_0x014387ac(*puVar10,&uStack_2c);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar9[3] < 2) {
        func_0x014388e8();
      }
      piVar9[5] = iVar3;
      func_0x014385cc(piVar9 + 5,iVar3);
      uStack_30 = 0xffffffff;
      iVar3 = func_0x014387ac(*puVar10,&uStack_30);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar9[3] < 3) {
        func_0x014388e8();
      }
      piVar9[6] = iVar3;
      func_0x014385cc(piVar9 + 6,iVar3);
      uStack_34 = 1;
      iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02bd9fb4 + 0x2bd9e80),&uStack_34);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar9[3] < 4) {
        func_0x014388e8();
      }
      piVar9[7] = iVar3;
      func_0x014385cc(piVar9 + 7,iVar3);
      uStack_38 = uVar11;
      iVar3 = func_0x014387ac(*puVar10,&uStack_38);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar4 == 0)) {
        uVar11 = func_0x01438904();
        func_0x01438790(uVar11,0);
      }
      if ((uint)piVar9[3] < 5) {
        func_0x014388e8();
      }
      piVar9[8] = iVar3;
      func_0x014385cc(piVar9 + 8,iVar3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02990414(iVar1,uVar6,piVar9,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2eeb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028c977c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

