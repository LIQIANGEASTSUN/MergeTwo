
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdced4(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02bdd414 + 0x2bdcef4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdd418 + 0x2bdcf0c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd41c + 0x2bdcf18));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd420 + 0x2bdcf24));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd424 + 0x2bdcf30));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd428 + 0x2bdcf3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd42c + 0x2bdcf48));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd430 + 0x2bdcf54));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd434 + 0x2bdcf60));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd438 + 0x2bdcf6c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd43c + 0x2bdcf78));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x21ad,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bdd440 + 0x2bdd018));
    *param_3 = iVar1;
    func_0x014385cc(param_3,iVar1);
    piVar8 = *(int **)(_UNK_02bdd444 + 0x2bdd03c);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar8;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x02b5461c(iVar1,0);
    piVar8 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_02bdd448 + 0x2bdd088) + 0xb8);
      if ((*(byte *)(*piVar2 + 0xb8) < uVar6) ||
         (piVar8 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_02bdd448 + 0x2bdd088)
         )) {
        func_0x01438ca8();
        piVar8 = (int *)0x0;
      }
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(undefined4 *)(iVar1 + 8);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
      FUN_026f6b3c(0,0xffffffff,0);
      func_0x014388e4();
    }
    else {
      FUN_026f6b3c(piVar8,0xffffffff,0);
    }
    FUN_026f6bf8(piVar8,1,0);
    FUN_02bd1794(param_1,piVar8);
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b780e8(iVar1,param_2,piVar8,**(undefined4 **)(_UNK_02bdd44c + 0x2bdd160));
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (param_5 != 0) {
      if (*(int *)(**(int **)(_UNK_02bdd450 + 0x2bdd184) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bdd454 + 0x2bdd1a0));
      piVar8 = *(int **)(_UNK_02bdd458 + 0x2bdd1b4);
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
        iVar3 = *piVar8;
      }
      uVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
      piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bdd45c + 0x2bdd1d8),5);
      puVar9 = *(undefined4 **)(_UNK_02bdd460 + 0x2bdd1f8);
      uStack_28 = param_4;
      iVar3 = func_0x014387ac(*puVar9,&uStack_28);
      if (piVar8 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if (piVar8[3] == 0) {
        func_0x014388e8();
      }
      piVar8[4] = iVar3;
      func_0x014385cc(piVar8 + 4,iVar3);
      uStack_2c = param_2;
      iVar3 = func_0x014387ac(*puVar9,&uStack_2c);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar8[3] < 2) {
        func_0x014388e8();
      }
      piVar8[5] = iVar3;
      func_0x014385cc(piVar8 + 5,iVar3);
      uStack_30 = 0xffffffff;
      iVar3 = func_0x014387ac(*puVar9,&uStack_30);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar8[3] < 3) {
        func_0x014388e8();
      }
      piVar8[6] = iVar3;
      func_0x014385cc(piVar8 + 6,iVar3);
      uStack_34 = 1;
      iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02bdd464 + 0x2bdd330),&uStack_34);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar5 = func_0x01438904();
        func_0x01438790(uVar5,0);
      }
      if ((uint)piVar8[3] < 4) {
        func_0x014388e8();
      }
      piVar8[7] = iVar3;
      func_0x014385cc(piVar8 + 7,iVar3);
      uStack_38 = uVar11;
      iVar3 = func_0x014387ac(*puVar9,&uStack_38);
      if ((iVar3 != 0) &&
         (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar11 = func_0x01438904();
        func_0x01438790(uVar11,0);
      }
      if ((uint)piVar8[3] < 5) {
        func_0x014388e8();
      }
      piVar8[8] = iVar3;
      func_0x014385cc(piVar8 + 8,iVar3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02990414(iVar1,uVar10,piVar8,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x21ad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028b6764(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

