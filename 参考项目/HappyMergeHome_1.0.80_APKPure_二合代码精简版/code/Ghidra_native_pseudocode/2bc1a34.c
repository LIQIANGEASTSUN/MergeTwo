
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd1a34(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02bd1fec + 0x2bd1a54);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd1ff0 + 0x2bd1a6c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1ff4 + 0x2bd1a78));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1ff8 + 0x2bd1a84));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1ffc + 0x2bd1a90));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2000 + 0x2bd1a9c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2004 + 0x2bd1aa8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2008 + 0x2bd1ab4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd200c + 0x2bd1ac0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2010 + 0x2bd1acc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5c61,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd2014 + 0x2bd1b78));
    if (iVar1 != param_3) {
      piVar7 = *(int **)(_UNK_02bd2018 + 0x2bd1b98);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b54538(iVar2,iVar1,0);
      iVar1 = FUN_02bad050(param_1,param_5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b780e8(iVar1,param_2,param_3,**(undefined4 **)(_UNK_02bd201c + 0x2bd1c10));
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (param_6 == 0) {
      if (param_3 == 0) {
        func_0x014388e4();
      }
    }
    else {
      if (*(int *)(**(int **)(_UNK_02bd2020 + 0x2bd1c34) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2024 + 0x2bd1c50));
      piVar7 = *(int **)(_UNK_02bd2028 + 0x2bd1c64);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
      piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bd202c + 0x2bd1c90),6);
      uStack_28 = param_5;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd2030 + 0x2bd1cb4),&uStack_28);
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar7[3] == 0) {
        func_0x014388e8();
      }
      piVar7[4] = iVar2;
      func_0x014385cc(piVar7 + 4,iVar2);
      uStack_2c = param_2;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd2034 + 0x2bd1d28),&uStack_2c);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x014388e8();
      }
      piVar7[5] = iVar2;
      func_0x014385cc(piVar7 + 5,iVar2);
      uStack_30 = 0xffffffff;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd2038 + 0x2bd1d94),&uStack_30);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if ((uint)piVar7[3] < 3) {
        func_0x014388e8();
      }
      piVar7[6] = iVar2;
      func_0x014385cc(piVar7 + 6,iVar2);
      uStack_34 = param_4;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd203c + 0x2bd1e04),&uStack_34);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if ((uint)piVar7[3] < 4) {
        func_0x014388e8();
      }
      piVar7[7] = iVar2;
      func_0x014385cc(piVar7 + 7,iVar2);
      if (param_3 == 0) {
        func_0x014388e4();
      }
      uStack_38 = *(undefined4 *)(param_3 + 8);
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd2040 + 0x2bd1e78),&uStack_38);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if ((uint)piVar7[3] < 5) {
        func_0x014388e8();
      }
      piVar7[8] = iVar2;
      func_0x014385cc(piVar7 + 8,iVar2);
      uStack_3c = param_7;
      iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02bd2044 + 0x2bd1ee4),&uStack_3c);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if ((uint)piVar7[3] < 6) {
        func_0x014388e8();
      }
      piVar7[9] = iVar2;
      func_0x014385cc(piVar7 + 9,iVar2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02990414(iVar1,uVar5,piVar7,0);
    }
    func_0x02bd204c(param_1,*(undefined4 *)(param_3 + 8));
    func_0x02bd2354(param_1,param_3,param_2);
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd2048 + 0x2bd1fc8));
    func_0x02bd2afc(param_1,uVar5,param_4,param_5);
  }
  else {
    iVar1 = func_0x029540a4(0x5c61,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028f9500(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}

