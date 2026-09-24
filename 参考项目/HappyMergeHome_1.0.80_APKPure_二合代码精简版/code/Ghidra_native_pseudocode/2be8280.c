
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf8280(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bf8650 + 0x2bf82a0);
  uStack_28 = param_3;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf8654 + 0x2bf82b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf8658 + 0x2bf82c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf865c + 0x2bf82d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf8660 + 0x2bf82dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf8664 + 0x2bf82e8));
    *pcVar5 = '\x01';
  }
  iStack_2c = 0;
  iVar1 = func_0x02953fd4(0x5e90,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bf8668 + 0x2bf8358) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02bf866c + 0x2bf8374);
    iVar1 = func_0x014e9518(*puVar9);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    iVar1 = FUN_02bad050(iVar1,uVar7,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02bf8670 + 0x2bf83b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x0202346c(0);
      uVar7 = func_0x01524ffc(&uStack_28,0);
      iStack_2c = *(int *)(iVar1 + 0x68);
      uVar2 = func_0x01524ffc(&iStack_2c,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar3,0x2c7,uVar7,uVar2,0,0,0);
      if (*(int *)(**(int **)(_UNK_02bf8674 + 0x2bf844c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar9);
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar3 = FUN_02bdd790(iVar3,param_2,uVar7,0,0);
      if (iVar3 != -1) {
        iStack_2c = *(int *)(iVar1 + 0x68);
        uVar2 = 0;
        FUN_026f665c(iVar1,iStack_2c + 1,0);
        iVar8 = *(int *)(iVar1 + 0x60);
        iVar6 = *(int *)(iVar1 + 0x68);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (iVar6 < *(int *)(iVar8 + 0xc)) {
          if (*(int *)(**(int **)(_UNK_02bf8678 + 0x2bf84ec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x0202346c(0);
          iVar8 = *(int *)(iVar1 + 0x60);
          uVar7 = *(undefined4 *)(iVar1 + 0x68);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iStack_2c = func_0x03b7661c(iVar8,uVar7,**(undefined4 **)(_UNK_02bf867c + 0x2bf852c));
          uVar7 = func_0x01524ffc(&iStack_2c,0);
          iStack_2c = *(int *)(iVar1 + 0x68);
          uVar2 = func_0x01524ffc(&iStack_2c,0);
          iStack_2c = *(int *)(iVar1 + 0x78);
          uVar4 = func_0x01524ffc(&iStack_2c,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar6,0x2c6,uVar7,uVar2,uVar4,0,0);
          iVar6 = *(int *)(iVar1 + 0x60);
          uVar7 = *(undefined4 *)(iVar1 + 0x68);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          puVar9 = *(undefined4 **)(_UNK_02bf8680 + 0x2bf85e4);
          uVar7 = func_0x03b7661c(iVar6,uVar7,*puVar9);
          iVar6 = *(int *)(iVar1 + 100);
          uVar2 = *(undefined4 *)(iVar1 + 0x68);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x03b7661c(iVar6,uVar2,*puVar9);
          FUN_02bf5f2c(param_1,param_2,iVar3,uVar7,0,0xd,6,0,uVar2);
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e90,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d207c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

