
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f951e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02f95678 + 0x2f95208);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9567c + 0x2f9521c));
    func_0x01438628(*(undefined4 *)(_UNK_02f95680 + 0x2f95228));
    func_0x01438628(*(undefined4 *)(_UNK_02f95684 + 0x2f95234));
    func_0x01438628(*(undefined4 *)(_UNK_02f95688 + 0x2f95240));
    func_0x01438628(*(undefined4 *)(_UNK_02f9568c + 0x2f9524c));
    func_0x01438628(*(undefined4 *)(_UNK_02f95690 + 0x2f95258));
    func_0x01438628(*(undefined4 *)(_UNK_02f95694 + 0x2f95264));
    func_0x01438628(*(undefined4 *)(_UNK_02f95698 + 0x2f95270));
    func_0x01438628(*(undefined4 *)(_UNK_02f9569c + 0x2f9527c));
    func_0x01438628(*(undefined4 *)(_UNK_02f956a0 + 0x2f95288));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6f71,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f956a4 + 0x2f952f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f8feac();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f94714(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f956a8 + 0x2f9535c);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f956ac + 0x2f95370));
        if (*(int *)(**(int **)(_UNK_02f956b0 + 0x2f95388) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f956b4 + 0x2f953a8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f956b8 + 0x2f95474) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f8feac();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02f94b28(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f956bc + 0x2f954c4));
          iVar3 = FUN_02f8feac();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_02f94b94();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02fad0d4(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f956c0 + 0x2f953f0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f956c4 + 0x2f9540c));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_02f956c8 + 0x2f95578),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f956cc + 0x2f955b0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f956d0 + 0x2f9560c));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6f71,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

