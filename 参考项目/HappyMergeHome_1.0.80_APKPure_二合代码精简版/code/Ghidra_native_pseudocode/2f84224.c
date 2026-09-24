
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f94224(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f946b8 + 0x2f94248);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f946bc + 0x2f9425c));
    func_0x01438628(*(undefined4 *)(_UNK_02f946c0 + 0x2f94268));
    func_0x01438628(*(undefined4 *)(_UNK_02f946c4 + 0x2f94274));
    func_0x01438628(*(undefined4 *)(_UNK_02f946c8 + 0x2f94280));
    func_0x01438628(*(undefined4 *)(_UNK_02f946cc + 0x2f9428c));
    func_0x01438628(*(undefined4 *)(_UNK_02f946d0 + 0x2f94298));
    func_0x01438628(*(undefined4 *)(_UNK_02f946d4 + 0x2f942a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f946d8 + 0x2f942b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f946dc + 0x2f942bc));
    func_0x01438628(*(undefined4 *)(_UNK_02f946e0 + 0x2f942c8));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6f43,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f946e4 + 0x2f94338) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f8feac();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02f94714(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f946e8 + 0x2f9439c);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f946ec + 0x2f943b0));
        if (*(int *)(**(int **)(_UNK_02f946f0 + 0x2f943c8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f946f4 + 0x2f943e8));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f946f8 + 0x2f944b4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f8feac();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02f94b28(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f946fc + 0x2f94504));
          iVar3 = FUN_02f8feac();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x02f94b94();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02fad0d4(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f94700 + 0x2f94430) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f94704 + 0x2f9444c));
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
        func_0x020257a4(iVar3,0x2fb,uVar2,**(undefined4 **)(_UNK_02f94708 + 0x2f945b8),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f9470c + 0x2f945f0) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f94710 + 0x2f9464c));
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
    iVar1 = func_0x029540a4(0x6f43,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

