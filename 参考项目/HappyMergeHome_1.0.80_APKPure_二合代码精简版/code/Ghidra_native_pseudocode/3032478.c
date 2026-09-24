
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03042478(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0304290c + 0x304249c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03042910 + 0x30424b0));
    func_0x01438628(*(undefined4 *)(_UNK_03042914 + 0x30424bc));
    func_0x01438628(*(undefined4 *)(_UNK_03042918 + 0x30424c8));
    func_0x01438628(*(undefined4 *)(_UNK_0304291c + 0x30424d4));
    func_0x01438628(*(undefined4 *)(_UNK_03042920 + 0x30424e0));
    func_0x01438628(*(undefined4 *)(_UNK_03042924 + 0x30424ec));
    func_0x01438628(*(undefined4 *)(_UNK_03042928 + 0x30424f8));
    func_0x01438628(*(undefined4 *)(_UNK_0304292c + 0x3042504));
    func_0x01438628(*(undefined4 *)(_UNK_03042930 + 0x3042510));
    func_0x01438628(*(undefined4 *)(_UNK_03042934 + 0x304251c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x73ff,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03042938 + 0x304258c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03041908(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0304293c + 0x30425f0);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_03042940 + 0x3042604));
        if (*(int *)(**(int **)(_UNK_03042944 + 0x304261c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03042948 + 0x304263c));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0304294c + 0x3042708) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0303cc6c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_03041d1c(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_03042950 + 0x3042758));
          iVar3 = FUN_0303cc6c();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_03041d88();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0305b144(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_03042954 + 0x3042684) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03042958 + 0x30426a0));
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
        func_0x020257a4(iVar3,0x2e6,uVar2,**(undefined4 **)(_UNK_0304295c + 0x304280c),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_03042960 + 0x3042844) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_03042964 + 0x30428a0));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x77;
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
    iVar1 = func_0x029540a4(0x73ff,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

